#include "rsp_memory.hpp"

#include <cstdint>
#include <cstdio>
#include <vector>

int main() {
    std::vector<uint8_t> rdram(8 * 1024 * 1024);
    constexpr uint32_t physical = 0x00082D00;
    for (uint32_t i = 0; i < 0x1000; ++i) {
        rdram[(physical + i) ^ 3] = static_cast<uint8_t>(i * 7 + 11);
    }
    for (uint32_t address : {physical, physical | 0x80000000u, physical | 0xA0000000u}) {
        for (uint32_t i = 0; i < 0x1000; ++i) {
            if (iss64_rsp_read_byte(rdram.data(), address, i) != static_cast<uint8_t>(i * 7 + 11)) {
                std::fprintf(stderr, "RSP byte addressing failed at %08X + %u\n", address, i);
                return 1;
            }
        }
    }
    std::puts("RSP memory tests passed");
}
