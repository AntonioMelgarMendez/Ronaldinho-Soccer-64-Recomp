#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <array>
#include <atomic>
#include <cstdint>
#include <filesystem>
#include <mutex>
#include <fstream>
#include <sstream>
#include <string>
#include <string_view>
#include <vector>
#include <exception>

#include <SDL.h>
#ifdef _WIN32
#include <SDL_syswm.h>
#endif

#include "generated/funcs.h"
#include "librecomp/game.hpp"
#include "librecomp/rsp.hpp"
#include "ultramodern/error_handling.hpp"
#include "ultramodern/config.hpp"
#include "ultramodern/input.hpp"
#include "ultramodern/ultramodern.hpp"
#include "rt64_context.hpp"
#include "rsp_memory.hpp"
#include "windows_diagnostics.hpp"

void iss64_register_overlays();
gpr get_entrypoint_address();
RspExitReason iss64_audio_hle(uint8_t* rdram, uint32_t ucode_addr);

namespace {
SDL_Window* window = nullptr;
SDL_GameController* controller = nullptr;
SDL_Joystick* joystick = nullptr;
SDL_AudioDeviceID audio_device = 0;
std::mutex audio_mutex;
SDL_AudioCVT audio_converter{};
uint32_t audio_frequency = 48000;
uint32_t audio_resample_frequency = 48000;
uint32_t audio_converter_frequency = 48000;
uint32_t audio_output_frequency = 48000;
uint32_t audio_output_channels = 2;
uint32_t discarded_output_frames = 0;
bool audio_playback_started = false;
uint32_t audio_steady_buffer_frames = 0;
std::atomic_uint32_t current_ucode_size = 0;

struct FrontendSettings {
    int resolution_index = 1; // 1280x720
    bool widescreen = true;
    int fps = 60;
    std::array<SDL_Scancode, 6> keys{
        SDL_SCANCODE_X, SDL_SCANCODE_C, SDL_SCANCODE_Z,
        SDL_SCANCODE_RETURN, SDL_SCANCODE_Q, SDL_SCANCODE_E
    };
    std::array<SDL_GameControllerButton, 6> pad{
        SDL_CONTROLLER_BUTTON_A, SDL_CONTROLLER_BUTTON_B,
        SDL_CONTROLLER_BUTTON_LEFTSTICK, SDL_CONTROLLER_BUTTON_START,
        SDL_CONTROLLER_BUTTON_LEFTSHOULDER, SDL_CONTROLLER_BUTTON_RIGHTSHOULDER
    };
};

FrontendSettings frontend_settings;
bool settings_menu_open = false;
int settings_menu_item = 0;
int capture_binding = -1;
constexpr std::array<const char*, 9> kSettingsItems{
    "Resolution", "Aspect ratio", "Frame rate", "Map A", "Map B",
    "Map Z", "Map Start", "Map L", "Map R"
};
constexpr std::array<std::array<int, 2>, 4> kResolutions{{
    {960, 720}, {1280, 720}, {1920, 1080}, {2560, 1440}
}};

void save_frontend_settings() {
    if (std::getenv("ISS64_COMPATIBILITY") != nullptr) return;
    std::filesystem::create_directories(".iss64");
    std::ofstream out(".iss64/settings.cfg", std::ios::trunc);
    out << "resolution=" << frontend_settings.resolution_index << '\n'
        << "widescreen=" << frontend_settings.widescreen << '\n'
        << "fps=" << frontend_settings.fps << '\n';
    for (size_t i = 0; i < frontend_settings.keys.size(); ++i) {
        out << "key" << i << '=' << static_cast<int>(frontend_settings.keys[i]) << '\n';
        out << "pad" << i << '=' << static_cast<int>(frontend_settings.pad[i]) << '\n';
    }
}

void load_frontend_settings() {
    std::ifstream in(".iss64/settings.cfg");
    std::string line;
    while (std::getline(in, line)) {
        const size_t equal = line.find('=');
        if (equal == std::string::npos) continue;
        const std::string key = line.substr(0, equal);
        int value = 0;
        try { value = std::stoi(line.substr(equal + 1)); } catch (...) { continue; }
        if (key == "resolution") frontend_settings.resolution_index = std::clamp(value, 0, 3);
        else if (key == "widescreen") frontend_settings.widescreen = value != 0;
        else if (key == "fps") frontend_settings.fps = std::clamp(value, 60, 240);
        else if (key.starts_with("key")) {
            const int i = key[3] - '0';
            if (i >= 0 && i < 6 && value >= 0 && value < SDL_NUM_SCANCODES)
                frontend_settings.keys[i] = static_cast<SDL_Scancode>(value);
        } else if (key.starts_with("pad")) {
            const int i = key[3] - '0';
            if (i >= 0 && i < 6 && value >= 0 && value < SDL_CONTROLLER_BUTTON_MAX)
                frontend_settings.pad[i] = static_cast<SDL_GameControllerButton>(value);
        }
    }
    if (frontend_settings.fps != 60) {
        std::fprintf(stderr,
            "[iss64 settings] %d FPS desactivado: RT64 deforma los modelos de este ROM; usando 60 FPS seguros\n",
            frontend_settings.fps);
        frontend_settings.fps = 60;
    }
}

void apply_frontend_graphics() {
    ultramodern::renderer::GraphicsConfig config{};
    config.developer_mode = false;
    config.res_option = frontend_settings.resolution_index == 0
        ? ultramodern::renderer::Resolution::Original
        : ultramodern::renderer::Resolution::Auto;
    config.wm_option = ultramodern::renderer::WindowMode::Windowed;
    config.hr_option = frontend_settings.widescreen
        ? ultramodern::renderer::HUDRatioMode::Clamp16x9
        : ultramodern::renderer::HUDRatioMode::Original;
    config.api_option = ultramodern::renderer::GraphicsApi::Auto;
    config.ar_option = frontend_settings.widescreen
        ? ultramodern::renderer::AspectRatio::Expand
        : ultramodern::renderer::AspectRatio::Original;
    config.msaa_option = ultramodern::renderer::Antialiasing::None;
    config.rr_option = frontend_settings.fps == 60
        ? ultramodern::renderer::RefreshRate::Original
        : ultramodern::renderer::RefreshRate::Manual;
    config.rr_manual_value = frontend_settings.fps;
    config.ds_option = 1;
    ultramodern::renderer::set_graphics_config(config);

    if (window != nullptr) {
        const auto& size = kResolutions[frontend_settings.resolution_index];
        SDL_SetWindowSize(window, size[0], size[1]);
        SDL_SetWindowPosition(window, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED);
    }
}

std::string setting_value(int item) {
    if (item == 0) {
        const auto& r = kResolutions[frontend_settings.resolution_index];
        return std::to_string(r[0]) + "x" + std::to_string(r[1]);
    }
    if (item == 1) return frontend_settings.widescreen ? "16:9 (HUD protegido)" : "4:3";
    if (item == 2) return "60 FPS (modo seguro; interpolacion pendiente)";
    const int binding = item - 3;
    return std::string(SDL_GetScancodeName(frontend_settings.keys[binding])) + " / Pad " +
        SDL_GameControllerGetStringForButton(frontend_settings.pad[binding]);
}

void update_settings_title() {
    if (!window) return;
    if (!settings_menu_open) {
        SDL_SetWindowTitle(window, "International Superstar Soccer 64 Recompiled — F5: Settings");
        return;
    }
    std::string title = "ISS64 Settings [" + std::to_string(settings_menu_item + 1) + "/9] " +
        kSettingsItems[settings_menu_item] + ": " +
        (capture_binding >= 0 ? "presiona una tecla o botón..." : setting_value(settings_menu_item)) +
        (settings_menu_item <= 2 ? " (se aplica al reiniciar)" : "") +
        " | ↑↓ elegir, ←→ cambiar, Enter mapear, F5 cerrar";
    SDL_SetWindowTitle(window, title.c_str());
}

constexpr uint32_t kAudioInputChannels = 2;
constexpr uint32_t kDuplicatedInputFrames = 4;

bool rebuild_audio_converter() {
    if (SDL_BuildAudioCVT(&audio_converter, AUDIO_F32SYS, kAudioInputChannels,
                          static_cast<int>(audio_converter_frequency), AUDIO_F32SYS,
                          static_cast<Uint8>(audio_output_channels),
                          static_cast<int>(audio_output_frequency)) < 0) {
        std::fprintf(stderr, "[iss64 audio] SDL_BuildAudioCVT failed: %s\n", SDL_GetError());
        return false;
    }
    discarded_output_frames = kDuplicatedInputFrames * audio_output_frequency /
                              std::max(audio_converter_frequency, 1u);
    return true;
}

void set_audio_frequency(uint32_t frequency) {
    if (std::getenv("ISS64_DISABLE_HOST_AUDIO") != nullptr) return;
    if (frequency == 0) return;

    std::lock_guard lock(audio_mutex);
    if (audio_device != 0 && audio_frequency == frequency) return;
    audio_frequency = frequency;
    audio_resample_frequency = frequency;
    audio_converter_frequency = frequency;

    if (audio_device == 0) {
        // Keep the host device at a conventional rate and resample the N64's
        // unusual DAC rate (42714 Hz for this game). Opening PulseAudio at the
        // emulated rate caused rough resampling and a large hardware buffer.
        SDL_AudioSpec wanted{};
        SDL_AudioSpec obtained{};
        wanted.freq = 48000;
        wanted.format = AUDIO_F32SYS;
        wanted.channels = 2;
        wanted.samples = 256;
        wanted.callback = nullptr;
        audio_device = SDL_OpenAudioDevice(nullptr, 0, &wanted, &obtained, 0);
        if (audio_device == 0) {
            std::fprintf(stderr, "[iss64 audio] SDL_OpenAudioDevice failed: %s\n",
                         SDL_GetError());
            return;
        }
        audio_output_frequency = static_cast<uint32_t>(obtained.freq);
        audio_output_channels = obtained.channels;
        std::fprintf(stderr,
                     "[iss64 audio] output: %d Hz, %u channels, format=0x%04X, driver=%s\n",
                     obtained.freq, obtained.channels, obtained.format,
                     SDL_GetCurrentAudioDriver() != nullptr ? SDL_GetCurrentAudioDriver() : "unknown");
        // Start paused. queue_audio_samples primes about 40 ms before playback,
        // avoiding the immediate underrun that previously happened at boot.
        SDL_PauseAudioDevice(audio_device, 1);
        audio_playback_started = false;
    }

    rebuild_audio_converter();
    std::fprintf(stderr, "[iss64 audio] source: %u Hz -> output: %u Hz\n",
                 audio_frequency, audio_output_frequency);
}

void queue_audio_samples(int16_t* samples, size_t sample_count) {
    if (samples == nullptr || sample_count < 2) return;
    // AI_LEN is an 18-bit byte count on N64. Refuse an impossible value rather
    // than letting a bad emulated length become a multi-gigabyte host resize.
    if (sample_count > 0x3FFFFu / sizeof(int16_t)) {
        std::fprintf(stderr, "[iss64 audio] ignored invalid AI buffer: %zu samples\n",
                     sample_count);
        return;
    }

    std::lock_guard lock(audio_mutex);
    if (audio_device == 0) return;

    const size_t input_frames = sample_count / kAudioInputChannels;
    static size_t cadence_candidate_frames = 0;
    static uint32_t cadence_candidate_count = 0;
    if (input_frames == cadence_candidate_frames) {
        ++cadence_candidate_count;
    } else {
        cadence_candidate_frames = input_frames;
        cadence_candidate_count = 1;
    }

    // ISS64 submits one audio buffer per 60 Hz VI. Its steady buffer is 704
    // frames, so the stream actually supplies 42240 frames/s despite asking AI
    // for 42714 Hz. Detect that stable cadence instead of slowly underrunning.
    if (cadence_candidate_count == 4) {
        const uint32_t measured_rate = static_cast<uint32_t>(input_frames * 60);
        const uint32_t difference = measured_rate > audio_frequency
            ? measured_rate - audio_frequency : audio_frequency - measured_rate;
        if (measured_rate != 0 && difference <= audio_frequency / 20) {
            audio_resample_frequency = measured_rate;
            audio_steady_buffer_frames = static_cast<uint32_t>(input_frames);
            std::fprintf(stderr,
                "[iss64 audio] stable cadence: %zu frames x 60 = %u Hz "
                "(AI requested %u Hz)\n",
                input_frames, measured_rate, audio_frequency);
        }
    }

    constexpr uint32_t target_latency_ms = 40;
    const uint64_t queued_output_frames = SDL_GetQueuedAudioSize(audio_device) /
        (audio_output_channels * sizeof(float));
    const uint64_t target_output_frames =
        static_cast<uint64_t>(audio_output_frequency) * target_latency_ms / 1000;

    // A small software PLL absorbs timing jitter around the measured cadence.
    // The correction is limited to 0.5%, below a readily audible pitch change.
    double correction = 0.0;
    if (audio_playback_started && target_output_frames != 0) {
        const double fill_error =
            (static_cast<double>(queued_output_frames) - target_output_frames) /
            static_cast<double>(target_output_frames);
        correction = std::clamp(fill_error * 0.005, -0.005, 0.005);
    }
    const uint32_t desired_converter_frequency = static_cast<uint32_t>(
        std::max(1.0, audio_resample_frequency * (1.0 + correction)));
    if (desired_converter_frequency != audio_converter_frequency) {
        audio_converter_frequency = desired_converter_frequency;
        if (!rebuild_audio_converter()) return;
    }

    // Convert to float before resampling. Four frames from the previous chunk
    // are prepended so SDL's converter can interpolate cleanly at boundaries.
    static std::vector<float> conversion_buffer;
    static std::array<float, kDuplicatedInputFrames * kAudioInputChannels> history{};
    const size_t padded_samples = sample_count + history.size();
    const size_t capacity = std::max(padded_samples,
        padded_samples * static_cast<size_t>(std::max(audio_converter.len_mult, 1)));
    conversion_buffer.resize(capacity);
    std::copy(history.begin(), history.end(), conversion_buffer.begin());
    for (size_t i = 0; i + 1 < sample_count; i += 2) {
        // RDRAM is word-swapped: restore L,R while converting to normalized PCM.
        conversion_buffer[history.size() + i] = samples[i + 1] * (0.5f / 32768.0f);
        conversion_buffer[history.size() + i + 1] = samples[i] * (0.5f / 32768.0f);
    }
    if (sample_count >= history.size()) {
        std::copy_n(conversion_buffer.begin() + sample_count, history.size(), history.begin());
    }

    audio_converter.buf = reinterpret_cast<Uint8*>(conversion_buffer.data());
    audio_converter.len = static_cast<int>(padded_samples * sizeof(float));
    if (SDL_ConvertAudio(&audio_converter) < 0) {
        std::fprintf(stderr, "[iss64 audio] SDL_ConvertAudio failed: %s\n", SDL_GetError());
        return;
    }

    const uint32_t discard_bytes = discarded_output_frames * audio_output_channels * sizeof(float);
    uint32_t bytes_to_queue = audio_converter.len_cvt > discard_bytes
        ? static_cast<uint32_t>(audio_converter.len_cvt) - discard_bytes : 0;
    float* converted = conversion_buffer.data() +
        (discarded_output_frames * audio_output_channels / 2);

    // Never accumulate seconds of stale sound if rendering stalls. This is the
    // same latency-control strategy used by established N64Recomp projects.
    const uint64_t queued_us = static_cast<uint64_t>(SDL_GetQueuedAudioSize(audio_device)) *
        1000000ULL / (audio_output_frequency * audio_output_channels * sizeof(float));
    const uint32_t skip_factor = static_cast<uint32_t>(queued_us / 100000ULL);
    if (skip_factor != 0 && bytes_to_queue != 0) {
        const uint32_t skip_ratio = 1u << std::min(skip_factor, 4u);
        const size_t output_frames = bytes_to_queue /
            (audio_output_channels * sizeof(float) * skip_ratio);
        for (size_t frame = 0; frame < output_frames; ++frame) {
            for (uint32_t channel = 0; channel < audio_output_channels; ++channel) {
                converted[frame * audio_output_channels + channel] =
                    converted[frame * skip_ratio * audio_output_channels + channel];
            }
        }
        bytes_to_queue /= skip_ratio;
    }

    static const bool trace_audio = std::getenv("ISS64_TRACE_AUDIO") != nullptr;
    static std::atomic_uint32_t buffer_number = 0;
    const uint32_t number = buffer_number.fetch_add(1);
    if (trace_audio && (number < 16 || number % 120 == 0)) {
        int peak = 0;
        for (size_t i = 0; i < sample_count; ++i) {
            const int16_t sample = samples[i];
            peak = std::max(peak, std::abs(static_cast<int>(sample)));
        }
        const size_t queued_frames = SDL_GetQueuedAudioSize(audio_device) /
            (audio_output_channels * sizeof(float));
        std::fprintf(stderr,
                     "[iss64 audio] queue #%u: %zu samples (%zu frames), peak=%d, queued=%zu frames\n",
                     number, sample_count, sample_count / 2, peak, queued_frames);
    }
    if (bytes_to_queue != 0 && SDL_QueueAudio(audio_device, converted, bytes_to_queue) != 0) {
        std::fprintf(stderr, "[iss64 audio] SDL_QueueAudio failed: %s\n", SDL_GetError());
    }
    if (!audio_playback_started) {
        const uint64_t primed_frames = SDL_GetQueuedAudioSize(audio_device) /
            (audio_output_channels * sizeof(float));
        if (primed_frames >= target_output_frames) {
            SDL_PauseAudioDevice(audio_device, 0);
            audio_playback_started = true;
            std::fprintf(stderr, "[iss64 audio] playback primed: %llu frames (%u ms)\n",
                static_cast<unsigned long long>(primed_frames), target_latency_ms);
        }
    }
}

size_t get_audio_frames_remaining() {
    std::lock_guard lock(audio_mutex);
    if (audio_device == 0) return 0;
    const uint64_t output_frames = SDL_GetQueuedAudioSize(audio_device) /
        (audio_output_channels * sizeof(float));
    const uint64_t source_frames = output_frames * audio_resample_frequency /
        std::max(audio_output_frequency, 1u);

    // osAiGetLength describes the active N64 DMA, not the whole host-side
    // safety queue. Exposing the 40 ms priming queue made the game's unsigned
    // buffer arithmetic underflow and eventually requested an enormous buffer.
    const uint64_t buffer_frames = audio_steady_buffer_frames != 0
        ? audio_steady_buffer_frames : audio_frequency / 60;
    const uint64_t visible_limit = buffer_frames + audio_frequency / 120;
    return static_cast<size_t>(std::min(source_frames, visible_limit));
}

enum N64Button : uint16_t {
    N64_C_RIGHT = 0x0001,
    N64_C_LEFT  = 0x0002,
    N64_C_DOWN  = 0x0004,
    N64_C_UP    = 0x0008,
    N64_R       = 0x0010,
    N64_L       = 0x0020,
    N64_D_RIGHT = 0x0100,
    N64_D_LEFT  = 0x0200,
    N64_D_DOWN  = 0x0400,
    N64_D_UP    = 0x0800,
    N64_START   = 0x1000,
    N64_Z       = 0x2000,
    N64_B       = 0x4000,
    N64_A       = 0x8000,
};

void open_first_controller() {
    if (controller != nullptr || joystick != nullptr) return;
    for (int i = 0; i < SDL_NumJoysticks(); ++i) {
        if (SDL_IsGameController(i)) {
            controller = SDL_GameControllerOpen(i);
            if (controller != nullptr) {
                std::fprintf(stderr, "[iss64 input] SDL controller: %s\n",
                    SDL_GameControllerName(controller));
                char* mapping = SDL_GameControllerMapping(controller);
                if (mapping != nullptr) {
                    std::fprintf(stderr, "[iss64 input] mapping: %s\n", mapping);
                    SDL_free(mapping);
                }
                break;
            }
        } else {
            // Some inexpensive USB pads expose a joystick but have no entry in
            // SDL's controller database. Keep them usable with the conventional
            // Linux/XInput axis and button layout.
            joystick = SDL_JoystickOpen(i);
            if (joystick != nullptr) {
                std::fprintf(stderr,
                    "[iss64 input] generic joystick: %s (%d axes, %d buttons)\n",
                    SDL_JoystickName(joystick), SDL_JoystickNumAxes(joystick),
                    SDL_JoystickNumButtons(joystick));
                break;
            }
        }
    }
}

float normalized_axis(SDL_GameControllerAxis axis) {
    constexpr float deadzone = 7000.0f;
    const float raw = static_cast<float>(SDL_GameControllerGetAxis(controller, axis));
    if (raw > -deadzone && raw < deadzone) return 0.0f;
    const float sign = raw < 0.0f ? -1.0f : 1.0f;
    return sign * std::clamp((std::abs(raw) - deadzone) / (32767.0f - deadzone), 0.0f, 1.0f);
}

bool get_input(int port, uint16_t* buttons, float* x, float* y) {
    if (port != 0) return false;
    if (settings_menu_open) {
        *buttons = 0;
        *x = 0.0f;
        *y = 0.0f;
        return true;
    }

    const Uint8* keys = SDL_GetKeyboardState(nullptr);
    auto key = [keys](SDL_Scancode scan) { return keys[scan] != 0; };
    uint16_t value = 0;
    if (key(frontend_settings.keys[0])) value |= N64_A;
    if (key(frontend_settings.keys[1])) value |= N64_B;
    if (key(frontend_settings.keys[2])) value |= N64_Z;
    if (key(frontend_settings.keys[3])) value |= N64_START;
    if (key(frontend_settings.keys[4])) value |= N64_L;
    if (key(frontend_settings.keys[5])) value |= N64_R;
    if (key(SDL_SCANCODE_W)) value |= N64_D_UP;
    if (key(SDL_SCANCODE_S)) value |= N64_D_DOWN;
    if (key(SDL_SCANCODE_A)) value |= N64_D_LEFT;
    if (key(SDL_SCANCODE_D)) value |= N64_D_RIGHT;
    if (key(SDL_SCANCODE_I)) value |= N64_C_UP;
    if (key(SDL_SCANCODE_K)) value |= N64_C_DOWN;
    if (key(SDL_SCANCODE_J)) value |= N64_C_LEFT;
    if (key(SDL_SCANCODE_L)) value |= N64_C_RIGHT;

    float stick_x = static_cast<float>(key(SDL_SCANCODE_RIGHT)) -
                    static_cast<float>(key(SDL_SCANCODE_LEFT));
    float stick_y = static_cast<float>(key(SDL_SCANCODE_UP)) -
                    static_cast<float>(key(SDL_SCANCODE_DOWN));

    if (controller != nullptr && SDL_GameControllerGetAttached(controller)) {
        auto pad = [](SDL_GameControllerButton button) {
            return SDL_GameControllerGetButton(controller, button) != 0;
        };
        if (pad(frontend_settings.pad[0])) value |= N64_A;
        if (pad(frontend_settings.pad[1])) value |= N64_B;
        if (pad(frontend_settings.pad[2])) value |= N64_Z;
        if (pad(SDL_CONTROLLER_BUTTON_Y)) value |= N64_C_UP;
        if (pad(frontend_settings.pad[3])) value |= N64_START;
        if (pad(frontend_settings.pad[4])) value |= N64_L;
        if (pad(frontend_settings.pad[5])) value |= N64_R;
        if (SDL_GameControllerGetAxis(controller, SDL_CONTROLLER_AXIS_TRIGGERLEFT) > 8000 ||
            SDL_GameControllerGetAxis(controller, SDL_CONTROLLER_AXIS_TRIGGERRIGHT) > 8000)
            value |= N64_Z;
        if (pad(SDL_CONTROLLER_BUTTON_DPAD_UP)) value |= N64_D_UP;
        if (pad(SDL_CONTROLLER_BUTTON_DPAD_DOWN)) value |= N64_D_DOWN;
        if (pad(SDL_CONTROLLER_BUTTON_DPAD_LEFT)) value |= N64_D_LEFT;
        if (pad(SDL_CONTROLLER_BUTTON_DPAD_RIGHT)) value |= N64_D_RIGHT;

        const float right_x = normalized_axis(SDL_CONTROLLER_AXIS_RIGHTX);
        const float right_y = normalized_axis(SDL_CONTROLLER_AXIS_RIGHTY);
        if (right_x > 0.5f) value |= N64_C_RIGHT;
        if (right_x < -0.5f) value |= N64_C_LEFT;
        if (right_y > 0.5f) value |= N64_C_DOWN;
        if (right_y < -0.5f) value |= N64_C_UP;
        stick_x = normalized_axis(SDL_CONTROLLER_AXIS_LEFTX);
        stick_y = -normalized_axis(SDL_CONTROLLER_AXIS_LEFTY);
    } else if (joystick != nullptr && SDL_JoystickGetAttached(joystick)) {
        auto button = [](int index) {
            return index < SDL_JoystickNumButtons(joystick) &&
                   SDL_JoystickGetButton(joystick, index) != 0;
        };
        if (button(0)) value |= N64_A;
        if (button(1) || button(2)) value |= N64_B;
        if (button(3)) value |= N64_C_UP;
        if (button(4)) value |= N64_L;
        if (button(5)) value |= N64_R;
        if (button(7)) value |= N64_START;
        if (SDL_JoystickNumAxes(joystick) > 1) {
            constexpr float scale = 1.0f / 32767.0f;
            const Sint16 raw_x = SDL_JoystickGetAxis(joystick, 0);
            const Sint16 raw_y = SDL_JoystickGetAxis(joystick, 1);
            stick_x = std::abs(raw_x) < 7000 ? 0.0f : raw_x * scale;
            stick_y = std::abs(raw_y) < 7000 ? 0.0f : -raw_y * scale;
        }
    }

    *buttons = value;
    *x = stick_x;
    *y = stick_y;
    static const bool trace_input = std::getenv("ISS64_TRACE_INPUT") != nullptr;
    static uint16_t previous_buttons = 0;
    static int previous_x = 0;
    static int previous_y = 0;
    const int quantized_x = static_cast<int>(stick_x * 100.0f);
    const int quantized_y = static_cast<int>(stick_y * 100.0f);
    if (trace_input && (value != previous_buttons || quantized_x != previous_x ||
                        quantized_y != previous_y)) {
        std::fprintf(stderr, "[iss64 input] buttons=%04X stick=(%d,%d)\n",
                     value, quantized_x, quantized_y);
        previous_buttons = value;
        previous_x = quantized_x;
        previous_y = quantized_y;
    }
    return true; // Keyboard makes controller port 1 permanently available.
}

ultramodern::input::connected_device_info_t connected_device(int port) {
    using ultramodern::input::Device;
    using ultramodern::input::Pak;
    return port == 0
        ? ultramodern::input::connected_device_info_t{Device::Controller, Pak::RumblePak}
        : ultramodern::input::connected_device_info_t{Device::None, Pak::None};
}

void set_rumble(int port, bool enabled) {
    if (port == 0 && controller != nullptr && SDL_GameControllerGetAttached(controller)) {
        const Uint16 strength = enabled ? 0xFFFF : 0;
        SDL_GameControllerRumble(controller, strength, strength, enabled ? 1000 : 0);
    } else if (port == 0 && joystick != nullptr && SDL_JoystickGetAttached(joystick)) {
        const Uint16 strength = enabled ? 0xFFFF : 0;
        SDL_JoystickRumble(joystick, strength, strength, enabled ? 1000 : 0);
    }
}

ultramodern::renderer::WindowHandle create_window(ultramodern::gfx_callbacks_t::gfx_data_t) {
    std::fprintf(stderr, "[startup] SDL initialization\n");
    if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO | SDL_INIT_EVENTS | SDL_INIT_GAMECONTROLLER) != 0) {
        std::fprintf(stderr, "SDL_Init failed: %s\n", SDL_GetError());
        std::exit(EXIT_FAILURE);
    }
    const auto& initial_size = kResolutions[frontend_settings.resolution_index];
    Uint32 window_flags = SDL_WINDOW_RESIZABLE;
#ifndef _WIN32
    window_flags |= SDL_WINDOW_VULKAN;
#endif
    window = SDL_CreateWindow("International Superstar Soccer 64 Recompiled — F5: Settings",
        SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, initial_size[0], initial_size[1],
        window_flags);
    if (!window) {
        std::fprintf(stderr, "SDL_CreateWindow failed: %s\n", SDL_GetError());
        std::exit(EXIT_FAILURE);
    }
    open_first_controller();
    std::fprintf(stderr, "[startup] Window created; SDL video driver: %s\n", SDL_GetCurrentVideoDriver());
#ifdef _WIN32
    SDL_SysWMinfo info{};
    SDL_VERSION(&info.version);
    if (!SDL_GetWindowWMInfo(window, &info)) {
        SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR, "Ronaldinho Soccer 64", SDL_GetError(), window);
        std::exit(EXIT_FAILURE);
    }
    return {info.info.win.window, GetCurrentThreadId()};
#else
    return window;
#endif
}

void update_gfx(void*) {
    SDL_Event event;
    while (SDL_PollEvent(&event)) {
        if (event.type == SDL_QUIT) ultramodern::quit();
        if (event.type == SDL_KEYDOWN && !event.key.repeat) {
            const SDL_Scancode scan = event.key.keysym.scancode;
            if (scan == SDL_SCANCODE_F5) {
                settings_menu_open = !settings_menu_open;
                capture_binding = -1;
                if (!settings_menu_open) {
                    save_frontend_settings();
                } else {
                    std::fprintf(stderr,
                        "[iss64 settings] ↑/↓ opción, ←/→ valor, Enter remapear, F5 guardar/cerrar\n");
                }
                update_settings_title();
                continue;
            }
            if (settings_menu_open) {
                if (capture_binding >= 0) {
                    if (scan != SDL_SCANCODE_ESCAPE) {
                        frontend_settings.keys[capture_binding] = scan;
                        save_frontend_settings();
                    }
                    capture_binding = -1;
                } else if (scan == SDL_SCANCODE_UP) {
                    settings_menu_item = (settings_menu_item + 8) % 9;
                } else if (scan == SDL_SCANCODE_DOWN) {
                    settings_menu_item = (settings_menu_item + 1) % 9;
                } else if (scan == SDL_SCANCODE_LEFT || scan == SDL_SCANCODE_RIGHT) {
                    const int direction = scan == SDL_SCANCODE_RIGHT ? 1 : -1;
                    if (settings_menu_item == 0) {
                        frontend_settings.resolution_index =
                            (frontend_settings.resolution_index + direction + 4) % 4;
                    } else if (settings_menu_item == 1) {
                        frontend_settings.widescreen = !frontend_settings.widescreen;
                    } else if (settings_menu_item == 2) {
                        // RT64's generic object interpolation mismatches this
                        // game's animated vertex streams above 60 Hz and can
                        // deform players. Keep the stable presentation rate
                        // until game-specific interpolation tags are available.
                        frontend_settings.fps = 60;
                    }
                    save_frontend_settings();
                } else if (scan == SDL_SCANCODE_RETURN && settings_menu_item >= 3) {
                    capture_binding = settings_menu_item - 3;
                }
                update_settings_title();
                continue;
            }
        }
        if (event.type == SDL_CONTROLLERBUTTONDOWN && settings_menu_open && capture_binding >= 0) {
            frontend_settings.pad[capture_binding] =
                static_cast<SDL_GameControllerButton>(event.cbutton.button);
            capture_binding = -1;
            save_frontend_settings();
            update_settings_title();
            continue;
        }
        if (event.type == SDL_CONTROLLERDEVICEADDED) open_first_controller();
        if (event.type == SDL_CONTROLLERDEVICEREMOVED && controller != nullptr &&
            SDL_JoystickInstanceID(SDL_GameControllerGetJoystick(controller)) == event.cdevice.which) {
            SDL_GameControllerClose(controller);
            controller = nullptr;
            open_first_controller();
        }
        if (event.type == SDL_JOYDEVICEADDED) open_first_controller();
        if (event.type == SDL_JOYDEVICEREMOVED && joystick != nullptr &&
            SDL_JoystickInstanceID(joystick) == event.jdevice.which) {
            SDL_JoystickClose(joystick);
            joystick = nullptr;
            open_first_controller();
        }
    }
}

void show_error(const char* message) {
    std::fprintf(stderr, "%s\n", message);
#ifdef _WIN32
    if (std::getenv("ISS64_NO_ERROR_DIALOG") == nullptr)
        SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR, "Ronaldinho Soccer 64", message, window);
#endif
}

RspExitReason audio_ucode_placeholder(uint8_t* rdram, uint32_t ucode_addr) {
    // Keeps scheduler progress deterministic until the title's ABI audio ucode
    // is recompiled. Graphics tasks bypass this callback and go straight RT64.
    // ISS64_DUMP_RSP makes the next step reproducible: the dump can be fed
    // directly to RSPRecomp instead of guessing which SDK ABI the game uses.
    static std::atomic_bool dumped = false;
    if (std::getenv("ISS64_DUMP_RSP") != nullptr && !dumped.exchange(true)) {
        const uint32_t size = std::clamp(current_ucode_size.load(), 1u, 0x1000u);
        std::filesystem::create_directories(".iss64");
        char name[80];
        std::snprintf(name, sizeof(name), ".iss64/rsp_ucode_%08X.bin", ucode_addr);
        std::vector<uint8_t> code(size);
        for (uint32_t i = 0; i < size; ++i) code[i] = iss64_rsp_read_byte(rdram, ucode_addr, i);
        std::ofstream(name, std::ios::binary).write(
            reinterpret_cast<const char*>(code.data()), code.size());
        std::ofstream(".iss64/rsp_ucode_data.bin", std::ios::binary).write(
            reinterpret_cast<const char*>(dmem), 0x1000);
        std::fprintf(stderr, "[iss64 rsp] dumped %u-byte ucode to %s\n", size, name);
    }
    return RspExitReason::Broke;
}
RspUcodeFunc* select_rsp_ucode(const OSTask* task) {
    static const bool trace_rsp = std::getenv("ISS64_TRACE_RSP") != nullptr;
    static std::atomic_uint32_t task_number = 0;
    const uint32_t number = task_number.fetch_add(1);
    if (trace_rsp && (number < 16 || number % 120 == 0)) {
        std::fprintf(stderr,
            "[iss64 rsp] task #%u type=%u flags=%08X ucode=%08X/%u data=%08X/%u "
            "list=%08X/%u output=%08X\n",
            number, task->t.type, task->t.flags, task->t.ucode, task->t.ucode_size,
            task->t.ucode_data, task->t.ucode_data_size, task->t.data_ptr,
            task->t.data_size, task->t.output_buff);
    }
    current_ucode_size.store(task->t.ucode_size);
    if (task->t.type == M_AUDTASK &&
        std::getenv("ISS64_DISABLE_AUDIO_HLE") == nullptr) {
        return iss64_audio_hle;
    }
    return audio_ucode_placeholder;
}
}

int run_game(int argc, char** argv) {
    // Resolve explicit relative paths before setting the portable data directory.
    std::filesystem::path requested_rom;
    if (argc >= 3 && std::string_view(argv[1]) == "--rom")
        requested_rom = std::filesystem::absolute(std::filesystem::u8path(argv[2]));
    else if (argc == 2)
        requested_rom = std::filesystem::absolute(std::filesystem::u8path(argv[1]));
#ifdef _WIN32
    // Shortcuts and drag-and-drop must not put saves in an arbitrary CWD.
    if (char* base = SDL_GetBasePath()) {
        std::error_code error;
        std::filesystem::current_path(std::filesystem::u8path(base), error);
        SDL_free(base);
        if (error) {
            show_error("No se pudo abrir la carpeta del juego. Extrae el ZIP en una carpeta con permisos de escritura.");
            return EXIT_FAILURE;
        }
    }
#endif
    iss64_start_windows_diagnostics();
    constexpr auto game_id = u8"iss64.pirate.br";
    const std::filesystem::path config_path = ".iss64";
    const std::filesystem::path default_rom = "Ronaldinho's Soccer 64 (Brazil) (Pirate).z64";
    std::error_code config_error;
    std::filesystem::create_directories(config_path, config_error);
    if (config_error) {
        show_error("No se pudo crear .iss64. Extrae el juego en una carpeta con permisos de escritura.");
        return EXIT_FAILURE;
    }
    load_frontend_settings();
    if (std::getenv("ISS64_COMPATIBILITY") != nullptr) {
        frontend_settings.resolution_index = 0;
        frontend_settings.widescreen = false;
        frontend_settings.fps = 60;
        std::fprintf(stderr, "[startup] Compatibility: original resolution, 4:3, 60 Hz; saved settings unchanged\n");
    }

    recomp::register_config_path(config_path);
    recomp::register_game({
        .rom_hash = 0x269F29A0D8145C00ULL,
        .internal_name = "RONALDINHO SOCCER   ",
        .display_name = "International Superstar Soccer 64 / Ronaldinho Soccer 64",
        .game_id = game_id,
        .mod_game_id = "iss64",
        // ISS64 stores data on a Controller Pak, not cartridge EEPROM.
        .save_type = recomp::SaveType::None,
        .is_enabled = true,
        .has_compressed_code = false,
        .entrypoint_address = get_entrypoint_address(),
        .entrypoint = recomp_entrypoint,
    });
    iss64_register_overlays();

    std::filesystem::path rom = default_rom;
    if (!requested_rom.empty()) rom = requested_rom;
    else if (!std::filesystem::exists(rom) && std::filesystem::exists("game.z64")) rom = "game.z64";
    std::fprintf(stderr, "[startup] Validating ROM\n");
    if (recomp::select_rom(rom, game_id) != recomp::RomValidationError::Good) {
        show_error("ROM invalida o no encontrada. Coloca tu ROM de Ronaldinho Soccer 64 junto al ejecutable "
                   "con el nombre game.z64, o arrastra la ROM sobre el ejecutable.");
        return EXIT_FAILURE;
    }
    recomp::start_game(game_id, {});
    std::fprintf(stderr, "[startup] ROM accepted\n");
    apply_frontend_graphics();

    recomp::Configuration config{
        .argc = argc,
        .argv = argv,
        .project_version = {0, 1, 0},
        .rsp_callbacks = {.get_rsp_microcode = select_rsp_ucode},
        .renderer_callbacks = {.create_render_context = iss64_create_render_context},
        .audio_callbacks = {
            .queue_samples = queue_audio_samples,
            .get_frames_remaining = get_audio_frames_remaining,
            .set_frequency = set_audio_frequency,
        },
        .input_callbacks = {
            .poll_input = nullptr,
            .get_input = get_input,
            .set_rumble = set_rumble,
            .get_connected_device_info = connected_device,
        },
        .gfx_callbacks = {.create_gfx = nullptr, .create_window = create_window, .update_gfx = update_gfx},
        .error_handling_callbacks = {.message_box = show_error},
    };
    std::fprintf(stderr, "[startup] Starting runtime\n");
    recomp::start(config);
    std::fprintf(stderr, "[shutdown] Runtime returned normally\n");
    if (audio_device != 0) SDL_CloseAudioDevice(audio_device);
    if (controller) SDL_GameControllerClose(controller);
    if (joystick) SDL_JoystickClose(joystick);
    if (window) SDL_DestroyWindow(window);
    SDL_Quit();
    return EXIT_SUCCESS;
}

int main(int argc, char** argv) {
    try {
        return run_game(argc, argv);
    } catch (const std::exception& error) {
        std::fprintf(stderr, "[fatal] Startup/runtime exception: %s\n", error.what());
        show_error("No se pudo iniciar el juego. Revisa diagnostico.log junto al EXE. "
                   "Prueba Probar_Vulkan.bat. La GPU debe ser compatible con RT64.");
        // Runtime initialization may have started worker threads before failing.
        // Avoid destroying still-joinable global threads on this fatal path.
#ifdef _WIN32
        ExitProcess(EXIT_FAILURE);
#endif
        return EXIT_FAILURE;
    }
}
