#include "rt64_context.hpp"

#include <algorithm>
#include <cstdlib>
#include <cstdio>
#include <string_view>

#ifdef _WIN32
// ultramodern uses WIN32_LEAN_AND_MEAN; DXC still needs the COM interfaces.
#include <objbase.h>
#endif

#ifndef HLSL_CPU
#define HLSL_CPU
#endif
#include "hle/rt64_application.h"
#include "ultramodern/config.hpp"

namespace {
uint8_t dmem[0x1000]{};
uint8_t imem[0x1000]{};
uint8_t header[0x40]{};
unsigned mi_intr{};
unsigned dpc_start{}, dpc_end{}, dpc_current{}, dpc_status{};
unsigned dpc_clock{}, dpc_bufbusy{}, dpc_pipebusy{}, dpc_tmem{};
void check_interrupts() {}

ultramodern::renderer::SetupResult map_result(RT64::Application::SetupResult value) {
    using A = RT64::Application::SetupResult;
    using U = ultramodern::renderer::SetupResult;
    switch (value) {
        case A::Success: return U::Success;
        case A::DynamicLibrariesNotFound: return U::DynamicLibrariesNotFound;
        case A::InvalidGraphicsAPI: return U::InvalidGraphicsAPI;
        case A::GraphicsAPINotFound: return U::GraphicsAPINotFound;
        case A::GraphicsDeviceNotFound: return U::GraphicsDeviceNotFound;
    }
    return U::GraphicsDeviceNotFound;
}
}

Iss64RT64Context::Iss64RT64Context(uint8_t* rdram, ultramodern::renderer::WindowHandle window, bool developer_mode) {
    chosen_api = ultramodern::renderer::GraphicsApi::Auto;
    setup_result = ultramodern::renderer::SetupResult::GraphicsDeviceNotFound;
    RT64::Application::Core core{};
#if defined(_WIN32)
    core.window = window.window;
#elif defined(__linux__) || defined(__ANDROID__)
    core.window = window;
#elif defined(__APPLE__)
    core.window.window = window.window;
    core.window.view = window.view;
#endif
    core.checkInterrupts = check_interrupts;
    core.HEADER = header;
    core.RDRAM = rdram;
    core.DMEM = dmem;
    core.IMEM = imem;
    core.MI_INTR_REG = &mi_intr;
    core.DPC_START_REG = &dpc_start;
    core.DPC_END_REG = &dpc_end;
    core.DPC_CURRENT_REG = &dpc_current;
    core.DPC_STATUS_REG = &dpc_status;
    core.DPC_CLOCK_REG = &dpc_clock;
    core.DPC_BUFBUSY_REG = &dpc_bufbusy;
    core.DPC_PIPEBUSY_REG = &dpc_pipebusy;
    core.DPC_TMEM_REG = &dpc_tmem;
    auto* vi = ultramodern::renderer::get_vi_regs();
    core.VI_STATUS_REG = &vi->VI_STATUS_REG;
    core.VI_ORIGIN_REG = &vi->VI_ORIGIN_REG;
    core.VI_WIDTH_REG = &vi->VI_WIDTH_REG;
    core.VI_INTR_REG = &vi->VI_INTR_REG;
    core.VI_V_CURRENT_LINE_REG = &vi->VI_V_CURRENT_LINE_REG;
    core.VI_TIMING_REG = &vi->VI_TIMING_REG;
    core.VI_V_SYNC_REG = &vi->VI_V_SYNC_REG;
    core.VI_H_SYNC_REG = &vi->VI_H_SYNC_REG;
    core.VI_LEAP_REG = &vi->VI_LEAP_REG;
    core.VI_H_START_REG = &vi->VI_H_START_REG;
    core.VI_V_START_REG = &vi->VI_V_START_REG;
    core.VI_V_BURST_REG = &vi->VI_V_BURST_REG;
    core.VI_X_SCALE_REG = &vi->VI_X_SCALE_REG;
    core.VI_Y_SCALE_REG = &vi->VI_Y_SCALE_REG;

    RT64::ApplicationConfiguration config{};
    config.useConfigurationFile = false;
    app = std::make_unique<RT64::Application>(core, config);
    app->userConfig.developerMode = developer_mode;
    using API = RT64::UserConfiguration::GraphicsAPI;
    const char* requested_api = std::getenv("ISS64_GRAPHICS_API");
    if (requested_api) {
        const std::string_view api(requested_api);
        if (api == "vulkan") app->userConfig.graphicsAPI = API::Vulkan;
        else if (api == "d3d12") app->userConfig.graphicsAPI = API::D3D12;
        else if (api != "auto") std::fprintf(stderr, "[graphics] Unknown API setting; using automatic\n");
    }
    if (std::getenv("ISS64_COMPATIBILITY") != nullptr) {
        using U = RT64::UserConfiguration;
        app->userConfig.resolution = U::Resolution::Original;
        app->userConfig.aspectRatio = U::AspectRatio::Original;
        app->userConfig.internalColorFormat = U::InternalColorFormat::Standard;
        app->userConfig.antialiasing = U::Antialiasing::None;
        app->userConfig.hardwareResolve = U::HardwareResolve::Disabled;
        app->userConfig.displayBuffering = U::DisplayBuffering::Double;
    }
    app->chosenGraphicsAPI = app->userConfig.graphicsAPI;
    std::fprintf(stderr, "[graphics] RT64 setup begin; requested API=%s\n", requested_api ? requested_api : "auto");
#ifdef _WIN32
    setup_result = map_result(app->setup(window.thread_id));
#else
    setup_result = map_result(app->setup(0));
#endif
    switch (app->chosenGraphicsAPI) {
        case API::D3D12: chosen_api = ultramodern::renderer::GraphicsApi::D3D12; break;
        case API::Vulkan: chosen_api = ultramodern::renderer::GraphicsApi::Vulkan; break;
        case API::Metal: chosen_api = ultramodern::renderer::GraphicsApi::Metal; break;
        default: break;
    }
    std::fprintf(stderr, "[graphics] RT64 setup result=%d; chosen API=%d (D3D12=0, Vulkan=1)\n",
        static_cast<int>(setup_result), static_cast<int>(app->chosenGraphicsAPI));
    if (setup_result != ultramodern::renderer::SetupResult::Success) {
        app.reset();
    } else {
        const auto& config = ultramodern::renderer::get_graphics_config();
        update_config(config, config);
    }
}

Iss64RT64Context::~Iss64RT64Context() = default;
bool Iss64RT64Context::update_config(
    const ultramodern::renderer::GraphicsConfig&,
    const ultramodern::renderer::GraphicsConfig& config) {
    if (!app) return false;

    using U = ultramodern::renderer::GraphicsConfig;
    using R = RT64::UserConfiguration;
    (void)sizeof(U);
    switch (config.res_option) {
        case ultramodern::renderer::Resolution::Original:
            app->userConfig.resolution = R::Resolution::Original;
            resolution_scale = 1.0f;
            break;
        case ultramodern::renderer::Resolution::Original2x:
            app->userConfig.resolution = R::Resolution::Manual;
            app->userConfig.resolutionMultiplier = 2.0;
            resolution_scale = 2.0f;
            break;
        case ultramodern::renderer::Resolution::Auto:
        default:
            app->userConfig.resolution = R::Resolution::WindowIntegerScale;
            resolution_scale = 1.0f;
            break;
    }

    if (config.ar_option == ultramodern::renderer::AspectRatio::Original) {
        app->userConfig.aspectRatio = R::AspectRatio::Original;
        app->userConfig.extAspectRatio = R::AspectRatio::Original;
    } else {
        // RT64 expands projection matrices instead of scaling the final 4:3
        // image. Sprite/rectangle HUD commands therefore retain their shape.
        app->userConfig.aspectRatio = R::AspectRatio::Expand;
        app->userConfig.aspectTarget = 16.0 / 9.0;
        app->userConfig.extAspectRatio = R::AspectRatio::Manual;
        app->userConfig.extAspectTarget = 16.0 / 9.0;
    }

    display_framerate = config.rr_option == ultramodern::renderer::RefreshRate::Manual
        ? static_cast<uint32_t>(std::clamp(config.rr_manual_value, 60, 240)) : 60;
    app->userConfig.refreshRate = display_framerate == 60
        ? R::RefreshRate::Original : R::RefreshRate::Manual;
    app->userConfig.refreshRateTarget = static_cast<int>(display_framerate);
    // Aspect/resolution changes invalidate projection and framebuffer history.
    // Keeping those frames was responsible for transient stretched models and
    // could race RT64's interpolation queue during live mode switches.
    app->updateUserConfig(true);
    return true;
}
void Iss64RT64Context::enable_instant_present() {}
void Iss64RT64Context::send_dl(const OSTask* task) {
    static uint64_t tasks = 0;
    if (++tasks == 1 || (std::getenv("ISS64_TRACE_GRAPHICS") && tasks % 600 == 0))
        std::fprintf(stderr, "[graphics] Display list #%llu\n", static_cast<unsigned long long>(tasks));
    app->state->rsp->reset();
    app->interpreter->loadUCodeGBI(task->t.ucode & 0x3FFFFFF, task->t.ucode_data & 0x3FFFFFF, true);
    app->processDisplayLists(app->core.RDRAM, task->t.data_ptr & 0x3FFFFFF, 0, true);
}
void Iss64RT64Context::send_dummy_workload(uint32_t) { app->updateScreen(); }
void Iss64RT64Context::update_screen() { app->updateScreen(); }
void Iss64RT64Context::shutdown() { if (app) app->end(); }
uint32_t Iss64RT64Context::get_display_framerate() const { return display_framerate; }
float Iss64RT64Context::get_resolution_scale() const { return resolution_scale; }

std::unique_ptr<ultramodern::renderer::RendererContext> iss64_create_render_context(
    uint8_t* rdram, ultramodern::renderer::WindowHandle window, bool developer_mode) {
    return std::make_unique<Iss64RT64Context>(rdram, window, developer_mode);
}
