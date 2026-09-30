#include "iss64/cpu.hpp"
#include "iss64/memory.hpp"

#include <charconv>
#include <cstdint>
#include <iomanip>
#include <iostream>
#include <filesystem>
#include <fstream>
#include <map>
#include <string_view>

namespace {
void usage(const char* argv0) {
    std::cerr << "Usage: " << argv0 << " ROM.z64 [--steps N] [--trace] [--trace-start N]"
              << " [--mmio-trace] [--profile FILE] [--dump-frame FILE] [--stop-on-mmio-exec]\n";
}
}

int main(int argc, char** argv) {
    if (argc < 2) { usage(argv[0]); return 2; }
    std::uint64_t limit = 2'000'000;
    bool trace = false;
    std::uint64_t trace_start = 0;
    bool mmio_trace = false;
    bool stop_on_mmio_exec = false;
    bool fast_boot = false, fast_boot_used = false;
    std::filesystem::path dump_frame;
    std::filesystem::path profile_path;
    std::map<std::uint32_t, std::uint32_t> profile;
    for (int n = 2; n < argc; ++n) {
        const std::string_view arg(argv[n]);
        if (arg == "--trace") trace = true;
        else if (arg == "--mmio-trace") mmio_trace = true;
        else if (arg == "--stop-on-mmio-exec") stop_on_mmio_exec = true;
        else if (arg == "--fast-boot") fast_boot = true;
        else if (arg == "--dump-frame" && n + 1 < argc) dump_frame = argv[++n];
        else if (arg == "--profile" && n + 1 < argc) profile_path = argv[++n];
        else if (arg == "--trace-start" && n + 1 < argc) {
            trace = true;
            const std::string_view value(argv[++n]);
            if (std::from_chars(value.data(), value.data() + value.size(), trace_start).ec != std::errc{}) return 2;
        }
        else if (arg == "--steps" && n + 1 < argc) {
            const std::string_view value(argv[++n]);
            if (std::from_chars(value.data(), value.data() + value.size(), limit).ec != std::errc{}) {
                std::cerr << "Invalid step count\n"; return 2;
            }
        } else { usage(argv[0]); return 2; }
    }

    iss64::Memory memory;
    std::string error;
    if (!memory.load_rom(argv[1], error)) { std::cerr << error << '\n'; return 1; }
    memory.set_mmio_trace(mmio_trace);
    memory.boot_hle();
    iss64::Cpu cpu;
    cpu.reset();

    std::cout << "ISS64 experimental static recompiler\n"
              << "ROM: " << argv[1] << " (" << memory.rom().size() << " bytes)\n";
    while (!cpu.stopped && cpu.instructions < limit) {
        if (fast_boot && !fast_boot_used && cpu.instructions > 1'000'000 && cpu.pc == 0x8001A13Cu) {
            // Title-specific bring-up shortcut: libultra's idle thread has
            // lowered itself to priority zero but our partial scheduler has not
            // dispatched thread 10 yet. Enter its known bootstrap context.
            cpu.gpr[4] = 0;
            cpu.gpr[29] = 0x801B8838u;
            cpu.pc = 0x8002A160u;
            cpu.next_pc = 0x8002A164u;
            fast_boot_used = true;
            std::cout << "Fast boot: dispatched game thread 10\n";
        }
        const auto physical_pc = cpu.pc & 0x1FFFFFFFu;
        if (stop_on_mmio_exec && physical_pc >= 0x03F00000u && physical_pc < 0x05000000u) {
            std::cout << "Stopped before executing MMIO as code at step " << cpu.instructions << '\n';
            break;
        }
        if (trace && cpu.instructions >= trace_start && cpu.instructions < trace_start + 200) {
            std::cout << std::hex << std::setfill('0') << std::setw(8) << cpu.pc
                      << "  " << std::setw(8) << memory.load32(cpu.pc) << '\n';
        }
        if (!profile_path.empty()) profile.emplace(cpu.pc, memory.load32(cpu.pc));
        cpu.step(memory);
    }
    std::cout << std::dec << "Executed: " << cpu.instructions
              << " (AOT " << cpu.recompiled_instructions
              << ", fallback " << cpu.interpreted_instructions
              << ", unsupported " << cpu.unsupported_instructions << ")\n"
              << "Final PC: 0x" << std::hex << std::setw(8) << std::setfill('0') << cpu.pc << std::dec << '\n'
              << "MMIO: " << memory.mmio_reads() << " reads, " << memory.mmio_writes() << " writes\n";
    std::cout << "RSP HLE: " << memory.sp_tasks() << " tasks (gfx " << memory.graphics_tasks()
              << ", audio " << memory.audio_tasks() << "), GBI/RDP " << memory.rdp_commands() << " commands\n";
    if (cpu.instructions == limit) {
        std::cout << "Step limit reached (expected while RCP/OS HLE is incomplete).\n";
    }
    if (cpu.unsupported_instructions) {
        std::cout << "Unsupported primary opcodes:";
        for (std::size_t op = 0; op < cpu.unsupported_by_opcode.size(); ++op)
            if (cpu.unsupported_by_opcode[op])
                std::cout << " 0x" << std::hex << op << std::dec << '=' << cpu.unsupported_by_opcode[op];
        std::cout << '\n';
    }
    if (stop_on_mmio_exec) {
        for (unsigned r = 0; r < 32; ++r) {
            if (r % 4 == 0) std::cout << '\n';
            std::cout << "r" << std::setw(2) << std::setfill('0') << r << "=0x" << std::hex
                      << std::setw(16) << cpu.gpr[r] << ' ';
        }
        std::cout << std::dec << '\n';
    }
    if (!dump_frame.empty()) {
        if (memory.dump_framebuffer(dump_frame, error)) std::cout << "Framebuffer: " << dump_frame << '\n';
        else std::cerr << "Framebuffer dump failed: " << error << '\n';
    }
    if (!profile_path.empty()) {
        std::ofstream out(profile_path);
        for (const auto& [pc, ins] : profile)
            out << std::hex << std::setw(8) << std::setfill('0') << pc << ' '
                << std::setw(8) << ins << '\n';
        std::cout << std::dec << "Profile: " << profile.size() << " unique PCs -> " << profile_path << '\n';
    }
    return 0;
}
