#pragma once

#include <array>
#include <cstdint>

namespace iss64 {

class Memory;

struct Cpu {
    std::array<std::uint64_t, 32> gpr{};
    std::uint64_t hi{};
    std::uint64_t lo{};
    std::array<std::uint64_t, 32> cp0{};
    std::array<std::uint64_t, 32> fpr{};
    std::array<std::uint32_t, 32> fcr{};
    std::uint32_t pc{0x80000400};
    std::uint32_t next_pc{0x80000404};
    std::uint64_t instructions{};
    std::uint64_t recompiled_instructions{};
    std::uint64_t interpreted_instructions{};
    std::uint64_t unsupported_instructions{};
    std::array<std::uint64_t, 64> unsupported_by_opcode{};
    bool stopped{};
    bool skip_delay_slot{};
    bool immediate_jump{};
    std::uint32_t immediate_target{};
    bool scheduled_branch{};

    void reset();
    void step(Memory& memory);
    void branch(std::uint32_t target) { next_pc = target; scheduled_branch = true; }
    void jump_now(std::uint32_t target) { immediate_jump = true; immediate_target = target; }
};

// Returns true when the current PC has an ahead-of-time translated instruction.
bool recomp_step(Cpu& cpu, Memory& memory);
bool interpret_step(Cpu& cpu, Memory& memory);
void execute_instruction(Cpu& cpu, Memory& memory, std::uint32_t instruction);

} // namespace iss64
