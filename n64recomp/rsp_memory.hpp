#pragma once

#include <cstdint>

// OSTask RSP addresses are 32-bit physical/KSEG aliases, not sign-extended
// CPU registers. MEM_BU expects the latter; uint32_t input points GiB away.
// RDRAM is stored word-swapped on little-endian hosts.
inline uint8_t iss64_rsp_read_byte(const uint8_t* rdram, uint32_t address, uint32_t offset) {
    return rdram[((address + offset) & 0x00FFFFFFu) ^ 3u];
}
