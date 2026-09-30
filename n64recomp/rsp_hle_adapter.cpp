#include <cstdarg>
#include <cstdlib>
#include <cstdio>
#include <cstring>

#include "librecomp/rsp.hpp"

extern "C" {
#include "hle.h"
}

namespace {
struct HleRuntime {
    hle_t hle{};
    uint8_t imem[0x1000]{};
    unsigned int mi_intr = 0;
    unsigned int sp_mem_addr = 0;
    unsigned int sp_dram_addr = 0;
    unsigned int sp_rd_length = 0;
    unsigned int sp_wr_length = 0;
    unsigned int sp_status = 0;
    unsigned int sp_dma_full = 0;
    unsigned int sp_dma_busy = 0;
    unsigned int sp_pc = 0;
    unsigned int sp_semaphore = 0;
    unsigned int dpc_start = 0;
    unsigned int dpc_end = 0;
    unsigned int dpc_current = 0;
    unsigned int dpc_status = 0;
    unsigned int dpc_clock = 0;
    unsigned int dpc_bufbusy = 0;
    unsigned int dpc_pipebusy = 0;
    unsigned int dpc_tmem = 0;
    bool initialized = false;
};

// The SP worker executes one task at a time, so a single HLE state preserves
// the ABI caches and mixer state exactly as the Mupen plugin expects.
HleRuntime runtime;

void print_hle_message(const char* level, const char* format, va_list args) {
    std::fprintf(stderr, "[iss64 rsp-hle] %s: ", level);
    std::vfprintf(stderr, format, args);
    std::fputc('\n', stderr);
}
} // namespace

extern "C" void HleVerboseMessage(void*, const char*, ...) {
    // Intentionally quiet: this path is extremely noisy per audio command.
}

extern "C" void HleInfoMessage(void*, const char* format, ...) {
    va_list args;
    va_start(args, format);
    print_hle_message("info", format, args);
    va_end(args);
}

extern "C" void HleErrorMessage(void*, const char* format, ...) {
    va_list args;
    va_start(args, format);
    print_hle_message("error", format, args);
    va_end(args);
}

extern "C" void HleWarnMessage(void*, const char* format, ...) {
    va_list args;
    va_start(args, format);
    print_hle_message("warning", format, args);
    va_end(args);
}

extern "C" void HleCheckInterrupts(void*) {}
extern "C" void HleProcessDlistList(void*) {}
extern "C" void HleProcessAlistList(void*) {}
extern "C" void HleProcessRdpList(void*) {}
extern "C" void HleShowCFB(void*) {}

extern "C" int HleForwardTask(void*) {
    // There is no second RSP core behind the HLE adapter. Returning non-zero
    // asks rsp-hle to finish an unknown task cleanly instead of forwarding it.
    return 1;
}

RspExitReason iss64_audio_hle(uint8_t* rdram, uint32_t ucode_addr) {
    if (!runtime.initialized) {
        hle_init(&runtime.hle, rdram, dmem, runtime.imem,
            &runtime.mi_intr, &runtime.sp_mem_addr, &runtime.sp_dram_addr,
            &runtime.sp_rd_length, &runtime.sp_wr_length, &runtime.sp_status,
            &runtime.sp_dma_full, &runtime.sp_dma_busy, &runtime.sp_pc,
            &runtime.sp_semaphore, &runtime.dpc_start, &runtime.dpc_end,
            &runtime.dpc_current, &runtime.dpc_status, &runtime.dpc_clock,
            &runtime.dpc_bufbusy, &runtime.dpc_pipebusy, &runtime.dpc_tmem,
            nullptr);
        // Process audio lists in this library. Graphics remains owned by RT64.
        runtime.hle.hle_aud = 0;
        runtime.hle.hle_gfx = 0;
        runtime.initialized = true;
    } else {
        runtime.hle.dram = rdram;
        runtime.hle.dmem = dmem;
    }

    // IMEM is only relevant to non-OSTask detection, but keeping a copy makes
    // diagnostics and unusual microcodes behave like the actual RSP.
    for (uint32_t i = 0; i < sizeof(runtime.imem); ++i) {
        runtime.imem[i ^ 3] = MEM_BU(i, ucode_addr);
    }
    runtime.sp_status = 0;
    runtime.sp_pc = 0x1000;
    static bool traced_signature = false;
    if (!traced_signature && std::getenv("ISS64_TRACE_RSP") != nullptr) {
        const uint32_t data_address =
            *reinterpret_cast<const uint32_t*>(dmem + 0xFD8) & 0x00FFFFFF;
        const auto word = [rdram, data_address](uint32_t offset) {
            return *reinterpret_cast<const uint32_t*>(rdram + data_address + offset);
        };
        std::fprintf(stderr,
            "[iss64 rsp-hle] audio signature: data=%08X "
            "w00=%08X w10=%08X w28=%08X w30=%08X\n",
            data_address, word(0x00), word(0x10), word(0x28), word(0x30));
        traced_signature = true;
    }
    hle_execute(&runtime.hle);
    return RspExitReason::Broke;
}
