#include "iss64/cpu.hpp"
#include "iss64/memory.hpp"

#include <cassert>
#include <cstdint>
#include <iostream>

int main() {
    iss64::Cpu c;
    iss64::Memory m;
    c.reset();

    iss64::execute_instruction(c, m, 0x2408002A); // addiu t0, zero, 42
    assert(c.gpr[8] == 42);
    iss64::execute_instruction(c, m, 0x3C09ABCD); // lui t1, 0xabcd
    assert(std::uint32_t(c.gpr[9]) == 0xABCD0000u);
    iss64::execute_instruction(c, m, 0x35291234); // ori t1, t1, 0x1234
    assert(std::uint32_t(c.gpr[9]) == 0xABCD1234u);

    c.pc = 0x80001000;
    c.next_pc = 0x80001004;
    c.gpr[8] = 1;
    iss64::execute_instruction(c, m, 0x11080003); // beq t0,t0,+3
    assert(c.next_pc == 0x80001010);

    m.store32(0x80000020, 0x12345678);
    assert(m.load32(0xA0000020) == 0x12345678); // KSEG aliases

    c.cp0[14] = 0x80001234;
    c.cp0[12] |= 2;
    iss64::execute_instruction(c, m, 0x42000018); // eret (no delay slot)
    assert(c.immediate_jump && c.immediate_target == 0x80001234 && !(c.cp0[12] & 2));

    // Enabling the VI mask and advancing one simplified frame raises MI IP2.
    m.store32(0xA430000C, 1u << 7);
    for (int n = 0; n < 100000; ++n) m.tick();
    assert(m.external_interrupt());
    m.store32(0xA4400010, 0);
    assert(!m.external_interrupt());
    std::cout << "cpu tests passed\n";
}
