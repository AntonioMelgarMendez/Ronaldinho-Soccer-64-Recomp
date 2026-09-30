#include "iss64/cpu.hpp"
#include "iss64/memory.hpp"

#include <climits>
#include <bit>
#include <cmath>
#include <cstdint>
#include <utility>

namespace iss64 {
namespace {
std::int64_t sx32(std::uint32_t v) { return static_cast<std::int32_t>(v); }
std::int64_t simm(std::uint32_t i) { return static_cast<std::int16_t>(i); }
std::uint64_t add32(std::uint64_t a, std::uint64_t b) { return sx32(std::uint32_t(a + b)); }
std::pair<std::uint64_t, std::uint64_t> mul64(std::uint64_t a, std::uint64_t b) {
    const std::uint64_t a0=std::uint32_t(a), a1=a>>32, b0=std::uint32_t(b), b1=b>>32;
    const std::uint64_t p00=a0*b0, p01=a0*b1, p10=a1*b0, p11=a1*b1;
    const std::uint64_t middle=(p00>>32)+std::uint32_t(p01)+std::uint32_t(p10);
    return {(middle<<32)|std::uint32_t(p00), p11+(p01>>32)+(p10>>32)+(middle>>32)};
}
}

void Cpu::reset() {
    *this = Cpu{};
    // Values normally established by the CIC/OS bootstrap.
    gpr[20] = 1;             // TV type: NTSC
    gpr[22] = 0x3Fu;         // CIC seed used by common 6102-family boot paths
    gpr[29] = 0xA4001FF0u;
    cp0[12] = 0x34000000u;   // Status
    cp0[15] = 0x00000B00u;   // PRId
}

void Cpu::step(Memory& memory) {
    if (stopped) return;
    const auto delay_pc = next_pc;
    next_pc = delay_pc + 4;
    skip_delay_slot = false;
    immediate_jump = false;
    scheduled_branch = false;
    if (recomp_step(*this, memory)) ++recompiled_instructions;
    else { interpret_step(*this, memory); ++interpreted_instructions; }
    gpr[0] = 0;
    ++instructions;
    ++cp0[9]; // Simplified Count timing; sufficient for early libultra waits.
    if (std::uint32_t(cp0[9]) == std::uint32_t(cp0[11])) cp0[13] |= 0x8000u;
    if (immediate_jump) {
        pc = immediate_target;
        next_pc = immediate_target + 4;
    } else if (skip_delay_slot) {
        pc = delay_pc + 4;
        next_pc = delay_pc + 8;
    } else {
        pc = delay_pc;
    }
    memory.tick();
    if (memory.external_interrupt()) cp0[13] |= 0x0400u;
    else cp0[13] &= ~0x0400u;
    const auto status = std::uint32_t(cp0[12]);
    const auto cause = std::uint32_t(cp0[13]);
    if (!scheduled_branch && (status & 1) && !(status & 2) && (status & cause & 0xFF00u)) {
        cp0[14] = pc;
        cp0[12] = status | 2u;       // EXL
        cp0[13] = cause & ~0x7Cu;    // ExcCode = interrupt
        pc = 0x80000180u;
        next_pc = 0x80000184u;
    }
}

bool interpret_step(Cpu& cpu, Memory& memory) {
    execute_instruction(cpu, memory, memory.load32(cpu.pc));
    return true;
}

void execute_instruction(Cpu& c, Memory& m, std::uint32_t i) {
    const auto op = i >> 26, rs = (i >> 21) & 31, rt = (i >> 16) & 31;
    const auto rd = (i >> 11) & 31, sa = (i >> 6) & 31, fn = i & 63;
    const auto addr = std::uint32_t(c.gpr[rs] + simm(i));
    const auto branch_target = c.pc + 4 + (std::int32_t(std::int16_t(i)) << 2);
    auto link = [&] { c.gpr[31] = sx32(c.pc + 8); };
    auto likely = [&](bool taken) { if (taken) c.branch(branch_target); else c.skip_delay_slot = true; };
    auto f32 = [&](unsigned r) { return std::bit_cast<float>(std::uint32_t(c.fpr[r])); };
    auto f64 = [&](unsigned r) { return std::bit_cast<double>(c.fpr[r]); };
    auto set_f32 = [&](unsigned r, float v) { c.fpr[r] = (c.fpr[r]&0xffffffff00000000ull)|std::bit_cast<std::uint32_t>(v); };
    auto set_f64 = [&](unsigned r, double v) { c.fpr[r] = std::bit_cast<std::uint64_t>(v); };

    switch (op) {
    case 0x00: switch (fn) {
        case 0x00: c.gpr[rd] = sx32(std::uint32_t(c.gpr[rt]) << sa); break;
        case 0x02: c.gpr[rd] = sx32(std::uint32_t(c.gpr[rt]) >> sa); break;
        case 0x03: c.gpr[rd] = sx32(std::int32_t(c.gpr[rt]) >> sa); break;
        case 0x04: c.gpr[rd] = sx32(std::uint32_t(c.gpr[rt]) << (c.gpr[rs] & 31)); break;
        case 0x06: c.gpr[rd] = sx32(std::uint32_t(c.gpr[rt]) >> (c.gpr[rs] & 31)); break;
        case 0x07: c.gpr[rd] = sx32(std::int32_t(c.gpr[rt]) >> (c.gpr[rs] & 31)); break;
        case 0x08: c.branch(std::uint32_t(c.gpr[rs])); break;
        case 0x09: c.gpr[rd ? rd : 31] = sx32(c.pc + 8); c.branch(std::uint32_t(c.gpr[rs])); break;
        case 0x0D: c.stopped = true; break; // BREAK
        case 0x10: c.gpr[rd] = c.hi; break;
        case 0x11: c.hi = c.gpr[rs]; break;
        case 0x12: c.gpr[rd] = c.lo; break;
        case 0x13: c.lo = c.gpr[rs]; break;
        case 0x18: { auto v = std::int64_t(std::int32_t(c.gpr[rs])) * std::int64_t(std::int32_t(c.gpr[rt])); c.lo=sx32(v); c.hi=sx32(std::uint64_t(v)>>32); break; }
        case 0x19: { auto v = std::uint64_t(std::uint32_t(c.gpr[rs])) * std::uint32_t(c.gpr[rt]); c.lo=sx32(v); c.hi=sx32(v>>32); break; }
        case 0x1A: { auto b=std::int32_t(c.gpr[rt]); if(b){ auto a=std::int32_t(c.gpr[rs]); c.lo=sx32(a/b); c.hi=sx32(a%b); } break; }
        case 0x1B: { auto b=std::uint32_t(c.gpr[rt]); if(b){ auto a=std::uint32_t(c.gpr[rs]); c.lo=sx32(a/b); c.hi=sx32(a%b); } break; }
        case 0x1C: { // signed 64-bit multiply without host overflow
            const bool neg = (std::int64_t(c.gpr[rs]) < 0) ^ (std::int64_t(c.gpr[rt]) < 0);
            auto a = std::int64_t(c.gpr[rs]) < 0 ? 0 - c.gpr[rs] : c.gpr[rs];
            auto b = std::int64_t(c.gpr[rt]) < 0 ? 0 - c.gpr[rt] : c.gpr[rt];
            auto [lo, hi] = mul64(a, b);
            if (neg) { lo=~lo+1; hi=~hi+(lo==0); } c.lo=lo; c.hi=hi; break;
        }
        case 0x1D: { auto [lo, hi]=mul64(c.gpr[rs], c.gpr[rt]); c.lo=lo; c.hi=hi; break; }
        case 0x1E: { auto b=std::int64_t(c.gpr[rt]); if(b){ auto a=std::int64_t(c.gpr[rs]); if(a==INT64_MIN&&b==-1){c.lo=a;c.hi=0;}else{c.lo=a/b;c.hi=a%b;} } break; }
        case 0x1F: { auto b=c.gpr[rt]; if(b){ c.lo=c.gpr[rs]/b; c.hi=c.gpr[rs]%b; } break; }
        case 0x20: case 0x21: c.gpr[rd] = add32(c.gpr[rs], c.gpr[rt]); break;
        case 0x22: case 0x23: c.gpr[rd] = add32(c.gpr[rs], -c.gpr[rt]); break;
        case 0x24: c.gpr[rd] = c.gpr[rs] & c.gpr[rt]; break;
        case 0x25: c.gpr[rd] = c.gpr[rs] | c.gpr[rt]; break;
        case 0x26: c.gpr[rd] = c.gpr[rs] ^ c.gpr[rt]; break;
        case 0x27: c.gpr[rd] = ~(c.gpr[rs] | c.gpr[rt]); break;
        case 0x2A: c.gpr[rd] = std::int64_t(c.gpr[rs]) < std::int64_t(c.gpr[rt]); break;
        case 0x2B: c.gpr[rd] = c.gpr[rs] < c.gpr[rt]; break;
        case 0x2D: c.gpr[rd] = c.gpr[rs] + c.gpr[rt]; break;
        case 0x2F: c.gpr[rd] = c.gpr[rs] - c.gpr[rt]; break;
        case 0x38: c.gpr[rd] = c.gpr[rt] << sa; break;
        case 0x3A: c.gpr[rd] = c.gpr[rt] >> sa; break;
        case 0x3B: c.gpr[rd] = std::int64_t(c.gpr[rt]) >> sa; break;
        case 0x3C: c.gpr[rd] = c.gpr[rt] << (sa + 32); break;
        case 0x3E: c.gpr[rd] = c.gpr[rt] >> (sa + 32); break;
        case 0x3F: c.gpr[rd] = std::int64_t(c.gpr[rt]) >> (sa + 32); break;
        default: ++c.unsupported_instructions; ++c.unsupported_by_opcode[0]; break;
    } break;
    case 0x01: {
        const bool neg = std::int64_t(c.gpr[rs]) < 0;
        if (rt == 0x00 && neg) c.branch(branch_target);
        else if (rt == 0x01 && !neg) c.branch(branch_target);
        else if ((rt == 0x10 || rt == 0x12) && neg) { link(); c.branch(branch_target); }
        else if ((rt == 0x11 || rt == 0x13) && !neg) { link(); c.branch(branch_target); }
        else if (rt == 0x02) likely(neg);
        else if (rt == 0x03) likely(!neg);
        break;
    }
    case 0x02: c.branch(((c.pc + 4) & 0xF0000000u) | ((i & 0x03FFFFFFu) << 2)); break;
    case 0x03: link(); c.branch(((c.pc + 4) & 0xF0000000u) | ((i & 0x03FFFFFFu) << 2)); break;
    case 0x04: if (c.gpr[rs] == c.gpr[rt]) c.branch(branch_target); break;
    case 0x05: if (c.gpr[rs] != c.gpr[rt]) c.branch(branch_target); break;
    case 0x06: if (std::int64_t(c.gpr[rs]) <= 0) c.branch(branch_target); break;
    case 0x07: if (std::int64_t(c.gpr[rs]) > 0) c.branch(branch_target); break;
    case 0x08: case 0x09: c.gpr[rt] = add32(c.gpr[rs], simm(i)); break;
    case 0x0A: c.gpr[rt] = std::int64_t(c.gpr[rs]) < simm(i); break;
    case 0x0B: c.gpr[rt] = c.gpr[rs] < std::uint64_t(simm(i)); break;
    case 0x0C: c.gpr[rt] = c.gpr[rs] & (i & 0xFFFF); break;
    case 0x0D: c.gpr[rt] = c.gpr[rs] | (i & 0xFFFF); break;
    case 0x0E: c.gpr[rt] = c.gpr[rs] ^ (i & 0xFFFF); break;
    case 0x0F: c.gpr[rt] = sx32((i & 0xFFFF) << 16); break;
    case 0x10:
        if (rs == 0x00) c.gpr[rt] = sx32(std::uint32_t(c.cp0[rd]));
        else if (rs == 0x04) { c.cp0[rd] = c.gpr[rt]; if (rd == 11) c.cp0[13] &= ~0x8000u; }
        else if (rs == 0x10 && fn == 0x18) { c.jump_now(std::uint32_t(c.cp0[14])); c.cp0[12] &= ~2u; }
        break;
    case 0x11:
        if (rs == 0x00) c.gpr[rt] = sx32(std::uint32_t(c.fpr[rd]));
        else if (rs == 0x02) c.gpr[rt] = sx32(c.fcr[rd]);
        else if (rs == 0x04) c.fpr[rd] = (c.fpr[rd] & 0xFFFFFFFF00000000ull) | std::uint32_t(c.gpr[rt]);
        else if (rs == 0x06) c.fcr[rd] = std::uint32_t(c.gpr[rt]);
        else if (rs >= 0x10) {
            const auto ft=rt, fs=rd, fd=(i>>6)&31, ffn=i&63;
            const bool single=rs==0x10, dbl=rs==0x11;
            const double a=single?f32(fs):(dbl?f64(fs):(rs==0x14?std::int32_t(c.fpr[fs]):std::int64_t(c.fpr[fs])));
            const double b=single?f32(ft):f64(ft);
            auto put=[&](double v){ if(single)set_f32(fd,float(v)); else set_f64(fd,v); };
            if (ffn==0x00) put(a+b); else if(ffn==0x01) put(a-b);
            else if(ffn==0x02) put(a*b); else if(ffn==0x03) put(a/b);
            else if(ffn==0x04) put(std::sqrt(a)); else if(ffn==0x05) put(std::fabs(a));
            else if(ffn==0x06) put(a); else if(ffn==0x07) put(-a);
            else if(ffn>=0x0C&&ffn<=0x0F) { double v=ffn==0x0C?std::nearbyint(a):ffn==0x0D?std::trunc(a):ffn==0x0E?std::ceil(a):std::floor(a); c.fpr[fd]=std::uint32_t(std::int32_t(v)); }
            else if(ffn==0x20) set_f32(fd,float(a)); else if(ffn==0x21) set_f64(fd,a);
            else if(ffn==0x24) c.fpr[fd]=std::uint32_t(std::int32_t(std::nearbyint(a)));
            else if(ffn==0x25) c.fpr[fd]=std::uint64_t(std::int64_t(std::nearbyint(a)));
            else if(ffn>=0x30) {
                const bool unordered=std::isnan(a)||std::isnan(b);
                const bool less=!unordered&&a<b, equal=!unordered&&a==b;
                const bool cond=((ffn&1)&&unordered)||((ffn&2)&&equal)||((ffn&4)&&less);
                if(cond)c.fcr[31]|=1u<<23;else c.fcr[31]&=~(1u<<23);
            } else { ++c.unsupported_instructions; ++c.unsupported_by_opcode[op]; }
        } else if (rs == 0x08) { // BC1F/T and likely forms
            const bool condition=(c.fcr[31]&(1u<<23))!=0, take=condition==bool(rt&1);
            if(rt&2) likely(take); else if(take)c.branch(branch_target);
        } else { ++c.unsupported_instructions; ++c.unsupported_by_opcode[op]; }
        break;
    case 0x14: likely(c.gpr[rs] == c.gpr[rt]); break;
    case 0x15: likely(c.gpr[rs] != c.gpr[rt]); break;
    case 0x16: likely(std::int64_t(c.gpr[rs]) <= 0); break;
    case 0x17: likely(std::int64_t(c.gpr[rs]) > 0); break;
    case 0x18: c.gpr[rt] = c.gpr[rs] + simm(i); break;
    case 0x20: c.gpr[rt] = std::int8_t(m.load8(addr)); break;
    case 0x21: c.gpr[rt] = std::int16_t(m.load16(addr)); break;
    case 0x23: c.gpr[rt] = sx32(m.load32(addr)); break;
    case 0x24: c.gpr[rt] = m.load8(addr); break;
    case 0x25: c.gpr[rt] = m.load16(addr); break;
    case 0x27: c.gpr[rt] = m.load32(addr); break;
    case 0x28: m.store8(addr, c.gpr[rt]); break;
    case 0x29: m.store16(addr, c.gpr[rt]); break;
    case 0x2B: m.store32(addr, c.gpr[rt]); break;
    case 0x2F: break; // CACHE is coherent/no-op in the portable memory model.
    case 0x31: c.fpr[rt]=(c.fpr[rt]&0xffffffff00000000ull)|m.load32(addr); break;
    case 0x35: c.fpr[rt]=m.load64(addr); break;
    case 0x39: m.store32(addr,std::uint32_t(c.fpr[rt])); break;
    case 0x3D: m.store64(addr,c.fpr[rt]); break;
    case 0x37: c.gpr[rt] = m.load64(addr); break;
    case 0x3F: m.store64(addr, c.gpr[rt]); break;
    default: ++c.unsupported_instructions; ++c.unsupported_by_opcode[op]; break; // FPU/RSP are a later milestone.
    }
}
} // namespace iss64
