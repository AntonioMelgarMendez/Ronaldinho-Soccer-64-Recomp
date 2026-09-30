#include "iss64_recomp.h"
#include "librecomp/addresses.hpp"

namespace recomp {
void do_rom_pio(uint8_t* rdram, gpr ram_address, uint32_t physical_addr);
}

extern "C" void __osSetCompare_recomp(uint8_t*, recomp_context*) {
    // Host-side timer scheduling is handled by N64ModernRuntime.
}

extern "C" void __osSiDeviceBusy_recomp(uint8_t*, recomp_context* ctx) {
    ctx->r2 = 0;
}

extern "C" void __osSiRawReadIo_recomp(uint8_t* rdram, recomp_context* ctx) {
    // The SI register probes performed during libultra initialization only
    // require an idle value; controller traffic itself is HLE'd by the runtime.
    MEM_W(0, ctx->r5) = 0;
    ctx->r2 = 0;
}

extern "C" void __osSiRawWriteIo_recomp(uint8_t*, recomp_context* ctx) {
    ctx->r2 = 0;
}

extern "C" void __osSiRawStartDma_recomp(uint8_t*, recomp_context* ctx) {
    // High-level controller/PFS entry points are replaced by librecomp. Keep
    // this internal SDK entry available for residual, unreachable references.
    ctx->r2 = 0;
}

extern "C" void __osPfsGetStatus_recomp(uint8_t*, recomp_context* ctx) {
    // Report no usable Controller Pak. Save support can be layered on later;
    // this avoids issuing raw PIF DMA during title-screen bring-up.
    ctx->r2 = 1;
}

extern "C" void __osPiRawReadIo_recomp(uint8_t* rdram, recomp_context* ctx) {
    // This SDK build uses the internal raw helper while N64ModernRuntime only
    // implements the public PIO wrappers. Route it through the same ROM-backed
    // PIO primitive: a0 is the cartridge-relative address and a1 the output.
    recomp::do_rom_pio(rdram, ctx->r5,
        recomp::rom_base | static_cast<uint32_t>(ctx->r4));
    ctx->r2 = 0;
}

// Some large game routines temporarily use s0-s7 and restore them from the
// emulated thread stack. During the frontend transition that stack area is
// concurrently reused, corrupting the restored registers and turning the next
// object pointer into a small integer (observed a0=0x16 in func_80020868).
// Enforce the MIPS O32 callee-saved contract at the native call boundary.
extern "C" {
void func_8001DE24_inner(uint8_t*, recomp_context*);
void func_80060510_inner(uint8_t*, recomp_context*);
void func_80028A00_inner(uint8_t*, recomp_context*);
void func_800109C4_inner(uint8_t*, recomp_context*);
void ovl_8024B800_func_802791D0_inner(uint8_t*, recomp_context*);
}

static void call_preserving_mips_callee_saved(
    void (*inner)(uint8_t*, recomp_context*), uint8_t* rdram, recomp_context* ctx) {
    const gpr saved[] = {
        ctx->r16, ctx->r17, ctx->r18, ctx->r19, ctx->r20, ctx->r21,
        ctx->r22, ctx->r23, ctx->r28, ctx->r29, ctx->r30, ctx->r31,
    };
    inner(rdram, ctx);
    ctx->r16 = saved[0]; ctx->r17 = saved[1]; ctx->r18 = saved[2];
    ctx->r19 = saved[3]; ctx->r20 = saved[4]; ctx->r21 = saved[5];
    ctx->r22 = saved[6]; ctx->r23 = saved[7]; ctx->r28 = saved[8];
    ctx->r29 = saved[9]; ctx->r30 = saved[10]; ctx->r31 = saved[11];
}

#define ABI_GUARD(name) \
    extern "C" void name(uint8_t* rdram, recomp_context* ctx) { \
        call_preserving_mips_callee_saved(name##_inner, rdram, ctx); \
    }

ABI_GUARD(func_8001DE24)
ABI_GUARD(func_80060510)
ABI_GUARD(func_80028A00)
ABI_GUARD(func_800109C4)

// The gameplay object list uses a null link as its terminal node. One update
// path invokes this render-flag helper once with that terminal link while the
// original hardware-visible list sentinel is being replaced. Treat it as the
// no-op the caller expects instead of dereferencing guest address zero.
extern "C" void ovl_8024B800_func_802791D0(
    uint8_t* rdram, recomp_context* ctx) {
    const uint32_t object = static_cast<uint32_t>(ctx->r4);
    if (object == 0 || object == 0x80000000u) {
        return;
    }
    ovl_8024B800_func_802791D0_inner(rdram, ctx);
}
