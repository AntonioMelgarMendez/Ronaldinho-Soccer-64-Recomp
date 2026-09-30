#pragma once

// Shared prelude included by every translation unit emitted by N64Recomp.
// Runtime hooks and the recomp_context ABI are supplied by N64ModernRuntime.
#include "recomp.h"

#ifdef __cplusplus
extern "C" {
#endif

// N64ModernRuntime virtualizes timers and does not currently export this
// low-level CP0 helper.  The interrupt dispatcher itself is replaced during
// bring-up, so retaining the ABI as a no-op is sufficient and avoids emitting
// an unsupported MTC0 Compare instruction.
void __osSetCompare_recomp(uint8_t* rdram, recomp_context* ctx);
void __osSiDeviceBusy_recomp(uint8_t* rdram, recomp_context* ctx);
void __osSiRawReadIo_recomp(uint8_t* rdram, recomp_context* ctx);
void __osSiRawWriteIo_recomp(uint8_t* rdram, recomp_context* ctx);
void __osSiRawStartDma_recomp(uint8_t* rdram, recomp_context* ctx);
void __osPfsGetStatus_recomp(uint8_t* rdram, recomp_context* ctx);
void __osPiRawReadIo_recomp(uint8_t* rdram, recomp_context* ctx);
void osPfsInitPak_recomp(uint8_t* rdram, recomp_context* ctx);
void osPfsChecker_recomp(uint8_t* rdram, recomp_context* ctx);
void osPfsIsPlug_recomp(uint8_t* rdram, recomp_context* ctx);
void osPfsReadWriteFile_recomp(uint8_t* rdram, recomp_context* ctx);

#ifdef __cplusplus
}
#endif
