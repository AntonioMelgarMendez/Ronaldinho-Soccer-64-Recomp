#include "iss64_recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_8000DEA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000DEA4: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x8000DEA8: lw          $t6, 0x4090($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X4090);
    // 0x8000DEAC: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x8000DEB0: bne         $t6, $zero, L_8000DEE8
    if (ctx->r14 != 0) {
        // 0x8000DEB4: addiu       $v1, $v1, 0x40C4
        ctx->r3 = ADD32(ctx->r3, 0X40C4);
            goto L_8000DEE8;
    }
    // 0x8000DEB4: addiu       $v1, $v1, 0x40C4
    ctx->r3 = ADD32(ctx->r3, 0X40C4);
    // 0x8000DEB8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8000DEBC: sw          $a0, 0x4090($at)
    MEM_W(0X4090, ctx->r1) = ctx->r4;
    // 0x8000DEC0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8000DEC4: sw          $a1, 0x409C($at)
    MEM_W(0X409C, ctx->r1) = ctx->r5;
    // 0x8000DEC8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8000DECC: sw          $a2, 0x40A0($at)
    MEM_W(0X40A0, ctx->r1) = ctx->r6;
    // 0x8000DED0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8000DED4: sw          $zero, 0x4094($at)
    MEM_W(0X4094, ctx->r1) = 0;
    // 0x8000DED8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8000DEDC: sw          $zero, 0x4098($at)
    MEM_W(0X4098, ctx->r1) = 0;
    // 0x8000DEE0: jr          $ra
    // 0x8000DEE4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8000DEE4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8000DEE8:
    // 0x8000DEE8: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x8000DEEC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8000DEF0: bne         $t7, $zero, L_8000DF10
    if (ctx->r15 != 0) {
        // 0x8000DEF4: nop
    
            goto L_8000DF10;
    }
    // 0x8000DEF4: nop

    // 0x8000DEF8: sw          $a0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r4;
    // 0x8000DEFC: sw          $a1, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r5;
    // 0x8000DF00: sw          $a2, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r6;
    // 0x8000DF04: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x8000DF08: jr          $ra
    // 0x8000DF0C: sw          $zero, 0x8($v1)
    MEM_W(0X8, ctx->r3) = 0;
    return;
    // 0x8000DF0C: sw          $zero, 0x8($v1)
    MEM_W(0X8, ctx->r3) = 0;
L_8000DF10:
    // 0x8000DF10: lw          $t8, 0x34($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X34);
    // 0x8000DF14: addiu       $v1, $v1, 0x34
    ctx->r3 = ADD32(ctx->r3, 0X34);
    // 0x8000DF18: bne         $t8, $zero, L_8000DF38
    if (ctx->r24 != 0) {
        // 0x8000DF1C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8000DF38;
    }
    // 0x8000DF1C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8000DF20: sw          $a0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r4;
    // 0x8000DF24: sw          $a1, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r5;
    // 0x8000DF28: sw          $a2, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r6;
    // 0x8000DF2C: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x8000DF30: jr          $ra
    // 0x8000DF34: sw          $zero, 0x8($v1)
    MEM_W(0X8, ctx->r3) = 0;
    return;
    // 0x8000DF34: sw          $zero, 0x8($v1)
    MEM_W(0X8, ctx->r3) = 0;
L_8000DF38:
    // 0x8000DF38: lw          $t9, 0x34($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X34);
    // 0x8000DF3C: addiu       $v1, $v1, 0x34
    ctx->r3 = ADD32(ctx->r3, 0X34);
    // 0x8000DF40: bne         $t9, $zero, L_8000DF60
    if (ctx->r25 != 0) {
        // 0x8000DF44: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8000DF60;
    }
    // 0x8000DF44: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8000DF48: sw          $a0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r4;
    // 0x8000DF4C: sw          $a1, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r5;
    // 0x8000DF50: sw          $a2, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r6;
    // 0x8000DF54: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x8000DF58: jr          $ra
    // 0x8000DF5C: sw          $zero, 0x8($v1)
    MEM_W(0X8, ctx->r3) = 0;
    return;
    // 0x8000DF5C: sw          $zero, 0x8($v1)
    MEM_W(0X8, ctx->r3) = 0;
L_8000DF60:
    // 0x8000DF60: lw          $t0, 0x34($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X34);
    // 0x8000DF64: addiu       $v1, $v1, 0x34
    ctx->r3 = ADD32(ctx->r3, 0X34);
    // 0x8000DF68: bne         $t0, $zero, L_8000DF8C
    if (ctx->r8 != 0) {
        // 0x8000DF6C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8000DF8C;
    }
    // 0x8000DF6C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8000DF70: sw          $a0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r4;
    // 0x8000DF74: sw          $a1, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r5;
    // 0x8000DF78: sw          $a2, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r6;
    // 0x8000DF7C: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x8000DF80: sw          $zero, 0x8($v1)
    MEM_W(0X8, ctx->r3) = 0;
    // 0x8000DF84: jr          $ra
    // 0x8000DF88: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8000DF88: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8000DF8C:
    // 0x8000DF8C: jr          $ra
    // 0x8000DF90: nop

    return;
    // 0x8000DF90: nop

;}
RECOMP_FUNC void func_8000DF94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000DF94: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x8000DF98: addiu       $v0, $v0, 0x40C4
    ctx->r2 = ADD32(ctx->r2, 0X40C4);
    // 0x8000DF9C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8000DFA0: sw          $zero, 0x4090($at)
    MEM_W(0X4090, ctx->r1) = 0;
    // 0x8000DFA4: sw          $zero, 0x9C($v0)
    MEM_W(0X9C, ctx->r2) = 0;
    // 0x8000DFA8: sw          $zero, 0x68($v0)
    MEM_W(0X68, ctx->r2) = 0;
    // 0x8000DFAC: sw          $zero, 0x34($v0)
    MEM_W(0X34, ctx->r2) = 0;
    // 0x8000DFB0: addiu       $v0, $v0, 0x9C
    ctx->r2 = ADD32(ctx->r2, 0X9C);
    // 0x8000DFB4: jr          $ra
    // 0x8000DFB8: sw          $zero, -0x9C($v0)
    MEM_W(-0X9C, ctx->r2) = 0;
    return;
    // 0x8000DFB8: sw          $zero, -0x9C($v0)
    MEM_W(-0X9C, ctx->r2) = 0;
;}
RECOMP_FUNC void func_8000DFBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000DFBC: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x8000DFC0: lw          $a0, -0x4BC0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4BC0);
    // 0x8000DFC4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x8000DFC8: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8000DFCC: addiu       $t7, $t6, 0x2
    ctx->r15 = ADD32(ctx->r14, 0X2);
    // 0x8000DFD0: addiu       $t8, $t6, 0x3
    ctx->r24 = ADD32(ctx->r14, 0X3);
    // 0x8000DFD4: multu       $t7, $t8
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8000DFD8: mflo        $a1
    ctx->r5 = lo;
    // 0x8000DFDC: srl         $v0, $a1, 2
    ctx->r2 = S32(U32(ctx->r5) >> 2);
    // 0x8000DFE0: jr          $ra
    // 0x8000DFE4: sw          $v0, -0x4BC0($at)
    MEM_W(-0X4BC0, ctx->r1) = ctx->r2;
    return;
    // 0x8000DFE4: sw          $v0, -0x4BC0($at)
    MEM_W(-0X4BC0, ctx->r1) = ctx->r2;
;}
RECOMP_FUNC void func_8000DFE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000DFE8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000DFEC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000DFF0: jal         0x8000DFBC
    // 0x8000DFF4: nop

    func_8000DFBC(rdram, ctx);
        goto after_0;
    // 0x8000DFF4: nop

    after_0:
    // 0x8000DFF8: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x8000DFFC: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x8000E000: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8000E004: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8000E008: mfhi        $t6
    ctx->r14 = hi;
    // 0x8000E00C: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x8000E010: bgez        $t6, L_8000E028
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8000E014: cvt.d.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
            goto L_8000E028;
    }
    // 0x8000E014: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x8000E018: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x8000E01C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8000E020: nop

    // 0x8000E024: add.d       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = ctx->f6.d + ctx->f8.d;
L_8000E028:
    // 0x8000E028: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x8000E02C: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x8000E030: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000E034: div.d       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = DIV_D(ctx->f6.d, ctx->f10.d);
    // 0x8000E038: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8000E03C: jr          $ra
    // 0x8000E040: cvt.s.d     $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f0.fl = CVT_S_D(ctx->f16.d);
    return;
    // 0x8000E040: cvt.s.d     $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f0.fl = CVT_S_D(ctx->f16.d);
    // 0x8000E044: nop

    // 0x8000E048: nop

    // 0x8000E04C: nop

;}
RECOMP_FUNC void func_8000E050(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000E050: slti        $at, $a0, 0x2
    ctx->r1 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
    // 0x8000E054: bne         $at, $zero, L_8000E08C
    if (ctx->r1 != 0) {
        // 0x8000E058: sll         $t9, $a0, 6
        ctx->r25 = S32(ctx->r4 << 6);
            goto L_8000E08C;
    }
    // 0x8000E058: sll         $t9, $a0, 6
    ctx->r25 = S32(ctx->r4 << 6);
    // 0x8000E05C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8000E060: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x8000E064: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8000E068: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x8000E06C: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x8000E070: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x8000E074: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x8000E078: lui         $t8, 0x802E
    ctx->r24 = S32(0X802E << 16);
    // 0x8000E07C: addiu       $t8, $t8, 0x5E18
    ctx->r24 = ADD32(ctx->r24, 0X5E18);
    // 0x8000E080: addiu       $t7, $t6, 0x970
    ctx->r15 = ADD32(ctx->r14, 0X970);
    // 0x8000E084: jr          $ra
    // 0x8000E088: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    return;
    // 0x8000E088: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
L_8000E08C:
    // 0x8000E08C: subu        $t9, $t9, $a0
    ctx->r25 = SUB32(ctx->r25, ctx->r4);
    // 0x8000E090: lui         $t0, 0x8013
    ctx->r8 = S32(0X8013 << 16);
    // 0x8000E094: addiu       $t0, $t0, 0x41A0
    ctx->r8 = ADD32(ctx->r8, 0X41A0);
    // 0x8000E098: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x8000E09C: addu        $v0, $t9, $t0
    ctx->r2 = ADD32(ctx->r25, ctx->r8);
    // 0x8000E0A0: jr          $ra
    // 0x8000E0A4: nop

    return;
    // 0x8000E0A4: nop

;}
RECOMP_FUNC void func_8000E0A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000E0A8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8000E0AC: slti        $at, $a0, 0x2
    ctx->r1 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
    // 0x8000E0B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000E0B4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8000E0B8: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x8000E0BC: bne         $at, $zero, L_8000E11C
    if (ctx->r1 != 0) {
        // 0x8000E0C0: sw          $a3, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r7;
            goto L_8000E11C;
    }
    // 0x8000E0C0: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x8000E0C4: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8000E0C8: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x8000E0CC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8000E0D0: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x8000E0D4: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x8000E0D8: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x8000E0DC: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x8000E0E0: lui         $t8, 0x802E
    ctx->r24 = S32(0X802E << 16);
    // 0x8000E0E4: addiu       $t8, $t8, 0x5E18
    ctx->r24 = ADD32(ctx->r24, 0X5E18);
    // 0x8000E0E8: addiu       $t7, $t6, 0x970
    ctx->r15 = ADD32(ctx->r14, 0X970);
    // 0x8000E0EC: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x8000E0F0: addiu       $a1, $v0, 0x18
    ctx->r5 = ADD32(ctx->r2, 0X18);
    // 0x8000E0F4: addiu       $a2, $v0, 0x198
    ctx->r6 = ADD32(ctx->r2, 0X198);
    // 0x8000E0F8: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8000E0FC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8000E100: jal         0x8000E74C
    // 0x8000E104: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_8000E74C(rdram, ctx);
        goto after_0;
    // 0x8000E104: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_0:
    // 0x8000E108: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x8000E10C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x8000E110: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x8000E114: b           L_8000E140
    // 0x8000E118: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
        goto L_8000E140;
    // 0x8000E118: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
L_8000E11C:
    // 0x8000E11C: sll         $t9, $a0, 6
    ctx->r25 = S32(ctx->r4 << 6);
    // 0x8000E120: subu        $t9, $t9, $a0
    ctx->r25 = SUB32(ctx->r25, ctx->r4);
    // 0x8000E124: lui         $t0, 0x8013
    ctx->r8 = S32(0X8013 << 16);
    // 0x8000E128: addiu       $t0, $t0, 0x41A0
    ctx->r8 = ADD32(ctx->r8, 0X41A0);
    // 0x8000E12C: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x8000E130: addu        $v1, $t9, $t0
    ctx->r3 = ADD32(ctx->r25, ctx->r8);
    // 0x8000E134: addiu       $a1, $v1, 0x18
    ctx->r5 = ADD32(ctx->r3, 0X18);
    // 0x8000E138: addiu       $a2, $v1, 0x198
    ctx->r6 = ADD32(ctx->r3, 0X198);
    // 0x8000E13C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
L_8000E140:
    // 0x8000E140: lhu         $t2, 0x2($v1)
    ctx->r10 = MEM_HU(ctx->r3, 0X2);
    // 0x8000E144: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x8000E148: bne         $t1, $t2, L_8000E160
    if (ctx->r9 != ctx->r10) {
        // 0x8000E14C: nop
    
            goto L_8000E160;
    }
    // 0x8000E14C: nop

    // 0x8000E150: lbu         $t3, 0x0($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0X0);
    // 0x8000E154: nop

    // 0x8000E158: bne         $t3, $zero, L_8000E174
    if (ctx->r11 != 0) {
        // 0x8000E15C: lw          $t4, 0x2C($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X2C);
            goto L_8000E174;
    }
    // 0x8000E15C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
L_8000E160:
    // 0x8000E160: jal         0x8000E834
    // 0x8000E164: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_8000E834(rdram, ctx);
        goto after_1;
    // 0x8000E164: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_1:
    // 0x8000E168: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x8000E16C: nop

    // 0x8000E170: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
L_8000E174:
    // 0x8000E174: lbu         $t6, 0x1($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X1);
    // 0x8000E178: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8000E17C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8000E180: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x8000E184: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x8000E188: sb          $t5, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r13;
    // 0x8000E18C: sb          $t7, 0x1($v1)
    MEM_B(0X1, ctx->r3) = ctx->r15;
    // 0x8000E190: sb          $t8, 0x14($v1)
    MEM_B(0X14, ctx->r3) = ctx->r24;
    // 0x8000E194: sh          $t4, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r12;
    // 0x8000E198: swc1        $f4, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f4.u32l;
    // 0x8000E19C: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x8000E1A0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8000E1A4: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x8000E1A8: nop

    // 0x8000E1AC: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8000E1B0: swc1        $f8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f8.u32l;
    // 0x8000E1B4: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8000E1B8: nop

    // 0x8000E1BC: mtc1        $t0, $f10
    ctx->f10.u32l = ctx->r8;
    // 0x8000E1C0: nop

    // 0x8000E1C4: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8000E1C8: swc1        $f16, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f16.u32l;
    // 0x8000E1CC: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x8000E1D0: nop

    // 0x8000E1D4: sh          $t1, 0xC($v1)
    MEM_H(0XC, ctx->r3) = ctx->r9;
    // 0x8000E1D8: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x8000E1DC: nop

    // 0x8000E1E0: sh          $t2, 0xE($v1)
    MEM_H(0XE, ctx->r3) = ctx->r10;
    // 0x8000E1E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000E1E8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8000E1EC: jr          $ra
    // 0x8000E1F0: nop

    return;
    // 0x8000E1F0: nop

;}
RECOMP_FUNC void func_8000E1F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000E1F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000E1F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000E1FC: jal         0x8000E050
    // 0x8000E200: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8000E050(rdram, ctx);
        goto after_0;
    // 0x8000E200: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8000E204: lbu         $t6, 0x0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X0);
    // 0x8000E208: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8000E20C: beq         $t6, $zero, L_8000E21C
    if (ctx->r14 == 0) {
        // 0x8000E210: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8000E21C;
    }
    // 0x8000E210: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000E214: swc1        $f4, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f4.u32l;
    // 0x8000E218: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8000E21C:
    // 0x8000E21C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8000E220: jr          $ra
    // 0x8000E224: nop

    return;
    // 0x8000E224: nop

;}
RECOMP_FUNC void func_8000E228(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000E228: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000E22C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000E230: jal         0x8000E050
    // 0x8000E234: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8000E050(rdram, ctx);
        goto after_0;
    // 0x8000E234: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8000E238: lbu         $t6, 0x0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X0);
    // 0x8000E23C: lbu         $t7, 0x1F($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X1F);
    // 0x8000E240: beq         $t6, $zero, L_8000E250
    if (ctx->r14 == 0) {
        // 0x8000E244: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8000E250;
    }
    // 0x8000E244: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000E248: sb          $t7, 0x14($v0)
    MEM_B(0X14, ctx->r2) = ctx->r15;
    // 0x8000E24C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8000E250:
    // 0x8000E250: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8000E254: jr          $ra
    // 0x8000E258: nop

    return;
    // 0x8000E258: nop

;}
RECOMP_FUNC void func_8000E25C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000E25C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000E260: slti        $at, $a0, 0x2
    ctx->r1 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
    // 0x8000E264: bne         $at, $zero, L_8000E2D8
    if (ctx->r1 != 0) {
        // 0x8000E268: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8000E2D8;
    }
    // 0x8000E268: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000E26C: lui         $t6, 0x800A
    ctx->r14 = S32(0X800A << 16);
    // 0x8000E270: lw          $t6, -0x4A98($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4A98);
    // 0x8000E274: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x8000E278: beq         $t6, $zero, L_8000E2F0
    if (ctx->r14 == 0) {
        // 0x8000E27C: subu        $t7, $t7, $a0
        ctx->r15 = SUB32(ctx->r15, ctx->r4);
            goto L_8000E2F0;
    }
    // 0x8000E27C: subu        $t7, $t7, $a0
    ctx->r15 = SUB32(ctx->r15, ctx->r4);
    // 0x8000E280: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8000E284: addu        $t7, $t7, $a0
    ctx->r15 = ADD32(ctx->r15, ctx->r4);
    // 0x8000E288: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8000E28C: addu        $t7, $t7, $a0
    ctx->r15 = ADD32(ctx->r15, ctx->r4);
    // 0x8000E290: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8000E294: lui         $at, 0x802E
    ctx->r1 = S32(0X802E << 16);
    // 0x8000E298: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8000E29C: lui         $v1, 0x802E
    ctx->r3 = S32(0X802E << 16);
    // 0x8000E2A0: sb          $zero, 0x6788($at)
    MEM_B(0X6788, ctx->r1) = 0;
    // 0x8000E2A4: addiu       $v1, $v1, 0x6E18
    ctx->r3 = ADD32(ctx->r3, 0X6E18);
    // 0x8000E2A8: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    // 0x8000E2AC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8000E2B0:
    // 0x8000E2B0: lbu         $t8, 0x0($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X0);
    // 0x8000E2B4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8000E2B8: bne         $t8, $zero, L_8000E2F4
    if (ctx->r24 != 0) {
        // 0x8000E2BC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8000E2F4;
    }
    // 0x8000E2BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000E2C0: bne         $v0, $a0, L_8000E2B0
    if (ctx->r2 != ctx->r4) {
        // 0x8000E2C4: addiu       $v1, $v1, 0x348
        ctx->r3 = ADD32(ctx->r3, 0X348);
            goto L_8000E2B0;
    }
    // 0x8000E2C4: addiu       $v1, $v1, 0x348
    ctx->r3 = ADD32(ctx->r3, 0X348);
    // 0x8000E2C8: jal         0x8000E7B8
    // 0x8000E2CC: nop

    func_8000E7B8(rdram, ctx);
        goto after_0;
    // 0x8000E2CC: nop

    after_0:
    // 0x8000E2D0: b           L_8000E2F4
    // 0x8000E2D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8000E2F4;
    // 0x8000E2D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8000E2D8:
    // 0x8000E2D8: sll         $t9, $a0, 6
    ctx->r25 = S32(ctx->r4 << 6);
    // 0x8000E2DC: subu        $t9, $t9, $a0
    ctx->r25 = SUB32(ctx->r25, ctx->r4);
    // 0x8000E2E0: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x8000E2E4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8000E2E8: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8000E2EC: sb          $zero, 0x41A0($at)
    MEM_B(0X41A0, ctx->r1) = 0;
L_8000E2F0:
    // 0x8000E2F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8000E2F4:
    // 0x8000E2F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8000E2F8: jr          $ra
    // 0x8000E2FC: nop

    return;
    // 0x8000E2FC: nop

;}
RECOMP_FUNC void func_8000E300(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000E300: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8000E304: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8000E308: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8000E30C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8000E310: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8000E314: addiu       $s1, $zero, 0x1A
    ctx->r17 = ADD32(0, 0X1A);
L_8000E318:
    // 0x8000E318: jal         0x8000E25C
    // 0x8000E31C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8000E25C(rdram, ctx);
        goto after_0;
    // 0x8000E31C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x8000E320: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8000E324: bne         $s0, $s1, L_8000E318
    if (ctx->r16 != ctx->r17) {
        // 0x8000E328: nop
    
            goto L_8000E318;
    }
    // 0x8000E328: nop

    // 0x8000E32C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8000E330: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8000E334: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8000E338: jr          $ra
    // 0x8000E33C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8000E33C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8000E340(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000E340: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8000E344: lui         $t6, 0x800A
    ctx->r14 = S32(0X800A << 16);
    // 0x8000E348: lw          $t6, -0x4B60($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4B60);
    // 0x8000E34C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8000E350: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8000E354: lui         $s2, 0x802E
    ctx->r18 = S32(0X802E << 16);
    // 0x8000E358: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x8000E35C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8000E360: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8000E364: addiu       $s2, $s2, 0x6E18
    ctx->r18 = ADD32(ctx->r18, 0X6E18);
    // 0x8000E368: bne         $t6, $zero, L_8000E378
    if (ctx->r14 != 0) {
        // 0x8000E36C: addiu       $s1, $s1, 0x41A0
        ctx->r17 = ADD32(ctx->r17, 0X41A0);
            goto L_8000E378;
    }
    // 0x8000E36C: addiu       $s1, $s1, 0x41A0
    ctx->r17 = ADD32(ctx->r17, 0X41A0);
    // 0x8000E370: jal         0x8000E6EC
    // 0x8000E374: nop

    func_8000E6EC(rdram, ctx);
        goto after_0;
    // 0x8000E374: nop

    after_0:
L_8000E378:
    // 0x8000E378: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8000E37C: addiu       $a0, $a0, -0x2F94
    ctx->r4 = ADD32(ctx->r4, -0X2F94);
    // 0x8000E380: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x8000E384: lui         $t9, 0x800A
    ctx->r25 = S32(0X800A << 16);
    // 0x8000E388: addiu       $t7, $v1, 0x8
    ctx->r15 = ADD32(ctx->r3, 0X8);
    // 0x8000E38C: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x8000E390: addiu       $t9, $t9, -0x4BB0
    ctx->r25 = ADD32(ctx->r25, -0X4BB0);
    // 0x8000E394: lui         $t8, 0x600
    ctx->r24 = S32(0X600 << 16);
    // 0x8000E398: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8000E39C: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8000E3A0: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
L_8000E3A4:
    // 0x8000E3A4: lbu         $t0, 0x0($s1)
    ctx->r8 = MEM_BU(ctx->r17, 0X0);
    // 0x8000E3A8: nop

    // 0x8000E3AC: beq         $t0, $zero, L_8000E3BC
    if (ctx->r8 == 0) {
        // 0x8000E3B0: nop
    
            goto L_8000E3BC;
    }
    // 0x8000E3B0: nop

    // 0x8000E3B4: jal         0x8000E41C
    // 0x8000E3B8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8000E41C(rdram, ctx);
        goto after_1;
    // 0x8000E3B8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
L_8000E3BC:
    // 0x8000E3BC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8000E3C0: slti        $at, $s0, 0x2
    ctx->r1 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
    // 0x8000E3C4: bne         $at, $zero, L_8000E3A4
    if (ctx->r1 != 0) {
        // 0x8000E3C8: addiu       $s1, $s1, 0x1F8
        ctx->r17 = ADD32(ctx->r17, 0X1F8);
            goto L_8000E3A4;
    }
    // 0x8000E3C8: addiu       $s1, $s1, 0x1F8
    ctx->r17 = ADD32(ctx->r17, 0X1F8);
    // 0x8000E3CC: lui         $t1, 0x800A
    ctx->r9 = S32(0X800A << 16);
    // 0x8000E3D0: lw          $t1, -0x4A98($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X4A98);
    // 0x8000E3D4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8000E3D8: beq         $t1, $zero, L_8000E404
    if (ctx->r9 == 0) {
        // 0x8000E3DC: addiu       $s1, $zero, 0x18
        ctx->r17 = ADD32(0, 0X18);
            goto L_8000E404;
    }
    // 0x8000E3DC: addiu       $s1, $zero, 0x18
    ctx->r17 = ADD32(0, 0X18);
L_8000E3E0:
    // 0x8000E3E0: lbu         $t2, 0x0($s2)
    ctx->r10 = MEM_BU(ctx->r18, 0X0);
    // 0x8000E3E4: nop

    // 0x8000E3E8: beq         $t2, $zero, L_8000E3F8
    if (ctx->r10 == 0) {
        // 0x8000E3EC: nop
    
            goto L_8000E3F8;
    }
    // 0x8000E3EC: nop

    // 0x8000E3F0: jal         0x8000E41C
    // 0x8000E3F4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_8000E41C(rdram, ctx);
        goto after_2;
    // 0x8000E3F4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_2:
L_8000E3F8:
    // 0x8000E3F8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8000E3FC: bne         $s0, $s1, L_8000E3E0
    if (ctx->r16 != ctx->r17) {
        // 0x8000E400: addiu       $s2, $s2, 0x348
        ctx->r18 = ADD32(ctx->r18, 0X348);
            goto L_8000E3E0;
    }
    // 0x8000E400: addiu       $s2, $s2, 0x348
    ctx->r18 = ADD32(ctx->r18, 0X348);
L_8000E404:
    // 0x8000E404: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8000E408: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8000E40C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8000E410: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8000E414: jr          $ra
    // 0x8000E418: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8000E418: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8000E41C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000E41C: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x8000E420: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8000E424: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8000E428: lbu         $v0, 0x1($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X1);
    // 0x8000E42C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8000E430: andi        $t6, $v0, 0x4
    ctx->r14 = ctx->r2 & 0X4;
    // 0x8000E434: bne         $t6, $zero, L_8000E6DC
    if (ctx->r14 != 0) {
        // 0x8000E438: andi        $t7, $v0, 0x1
        ctx->r15 = ctx->r2 & 0X1;
            goto L_8000E6DC;
    }
    // 0x8000E438: andi        $t7, $v0, 0x1
    ctx->r15 = ctx->r2 & 0X1;
    // 0x8000E43C: beq         $t7, $zero, L_8000E450
    if (ctx->r15 == 0) {
        // 0x8000E440: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8000E450;
    }
    // 0x8000E440: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8000E444: lui         $t4, 0x800A
    ctx->r12 = S32(0X800A << 16);
    // 0x8000E448: b           L_8000E458
    // 0x8000E44C: addiu       $t4, $t4, -0x4B58
    ctx->r12 = ADD32(ctx->r12, -0X4B58);
        goto L_8000E458;
    // 0x8000E44C: addiu       $t4, $t4, -0x4B58
    ctx->r12 = ADD32(ctx->r12, -0X4B58);
L_8000E450:
    // 0x8000E450: lui         $t4, 0x800A
    ctx->r12 = S32(0X800A << 16);
    // 0x8000E454: addiu       $t4, $t4, -0x4B40
    ctx->r12 = ADD32(ctx->r12, -0X4B40);
L_8000E458:
    // 0x8000E458: addiu       $a1, $s0, 0x1B8
    ctx->r5 = ADD32(ctx->r16, 0X1B8);
    // 0x8000E45C: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    // 0x8000E460: jal         0x8000EBB4
    // 0x8000E464: sw          $t4, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r12;
    func_8000EBB4(rdram, ctx);
        goto after_0;
    // 0x8000E464: sw          $t4, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r12;
    after_0:
    // 0x8000E468: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x8000E46C: addiu       $v1, $v1, -0x2F94
    ctx->r3 = ADD32(ctx->r3, -0X2F94);
    // 0x8000E470: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8000E474: lui         $t9, 0xBC00
    ctx->r25 = S32(0XBC00 << 16);
    // 0x8000E478: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8000E47C: lw          $t4, 0x80($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X80);
    // 0x8000E480: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8000E484: ori         $t9, $t9, 0x2006
    ctx->r25 = ctx->r25 | 0X2006;
    // 0x8000E488: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8000E48C: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8000E490: lui         $ra, 0x8000
    ctx->r31 = S32(0X8000 << 16);
    // 0x8000E494: addu        $t7, $t6, $ra
    ctx->r15 = ADD32(ctx->r14, ctx->r31);
    // 0x8000E498: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x8000E49C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8000E4A0: lui         $t9, 0xBC00
    ctx->r25 = S32(0XBC00 << 16);
    // 0x8000E4A4: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8000E4A8: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8000E4AC: ori         $t9, $t9, 0x2406
    ctx->r25 = ctx->r25 | 0X2406;
    // 0x8000E4B0: addu        $t6, $t4, $ra
    ctx->r14 = ADD32(ctx->r12, ctx->r31);
    // 0x8000E4B4: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x8000E4B8: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8000E4BC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8000E4C0: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x8000E4C4: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x8000E4C8: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8000E4CC: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8000E4D0: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8000E4D4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8000E4D8: addiu       $t7, $s0, 0x198
    ctx->r15 = ADD32(ctx->r16, 0X198);
    // 0x8000E4DC: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8000E4E0: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8000E4E4: lui         $t6, 0xFD10
    ctx->r14 = S32(0XFD10 << 16);
    // 0x8000E4E8: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8000E4EC: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x8000E4F0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8000E4F4: lui         $t9, 0xE800
    ctx->r25 = S32(0XE800 << 16);
    // 0x8000E4F8: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8000E4FC: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8000E500: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8000E504: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8000E508: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8000E50C: lui         $t7, 0xF500
    ctx->r15 = S32(0XF500 << 16);
    // 0x8000E510: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8000E514: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8000E518: ori         $t7, $t7, 0x100
    ctx->r15 = ctx->r15 | 0X100;
    // 0x8000E51C: lui         $t8, 0x700
    ctx->r24 = S32(0X700 << 16);
    // 0x8000E520: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x8000E524: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8000E528: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8000E52C: lui         $t6, 0xE600
    ctx->r14 = S32(0XE600 << 16);
    // 0x8000E530: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8000E534: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8000E538: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8000E53C: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8000E540: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8000E544: lui         $t9, 0x703
    ctx->r25 = S32(0X703 << 16);
    // 0x8000E548: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x8000E54C: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8000E550: ori         $t9, $t9, 0xC000
    ctx->r25 = ctx->r25 | 0XC000;
    // 0x8000E554: lui         $t8, 0xF000
    ctx->r24 = S32(0XF000 << 16);
    // 0x8000E558: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8000E55C: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x8000E560: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8000E564: lui         $t7, 0xE700
    ctx->r15 = S32(0XE700 << 16);
    // 0x8000E568: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8000E56C: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8000E570: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8000E574: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8000E578: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8000E57C: addiu       $t6, $s0, 0x18
    ctx->r14 = ADD32(ctx->r16, 0X18);
    // 0x8000E580: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8000E584: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8000E588: lui         $t9, 0xFD50
    ctx->r25 = S32(0XFD50 << 16);
    // 0x8000E58C: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8000E590: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x8000E594: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8000E598: lui         $t9, 0x709
    ctx->r25 = S32(0X709 << 16);
    // 0x8000E59C: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x8000E5A0: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8000E5A4: ori         $t9, $t9, 0x4250
    ctx->r25 = ctx->r25 | 0X4250;
    // 0x8000E5A8: lui         $t8, 0xF550
    ctx->r24 = S32(0XF550 << 16);
    // 0x8000E5AC: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8000E5B0: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x8000E5B4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8000E5B8: lui         $t7, 0xE600
    ctx->r15 = S32(0XE600 << 16);
    // 0x8000E5BC: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8000E5C0: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8000E5C4: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8000E5C8: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8000E5CC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8000E5D0: lui         $t6, 0x70F
    ctx->r14 = S32(0X70F << 16);
    // 0x8000E5D4: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8000E5D8: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8000E5DC: ori         $t6, $t6, 0xF400
    ctx->r14 = ctx->r14 | 0XF400;
    // 0x8000E5E0: lui         $t9, 0xF300
    ctx->r25 = S32(0XF300 << 16);
    // 0x8000E5E4: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8000E5E8: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x8000E5EC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8000E5F0: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x8000E5F4: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x8000E5F8: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8000E5FC: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8000E600: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8000E604: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8000E608: lui         $t7, 0x9
    ctx->r15 = S32(0X9 << 16);
    // 0x8000E60C: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8000E610: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8000E614: lui         $t6, 0xF540
    ctx->r14 = S32(0XF540 << 16);
    // 0x8000E618: ori         $t6, $t6, 0x400
    ctx->r14 = ctx->r14 | 0X400;
    // 0x8000E61C: ori         $t7, $t7, 0x4250
    ctx->r15 = ctx->r15 | 0X4250;
    // 0x8000E620: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x8000E624: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8000E628: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8000E62C: lui         $t9, 0x7
    ctx->r25 = S32(0X7 << 16);
    // 0x8000E630: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8000E634: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8000E638: lui         $t4, 0xF200
    ctx->r12 = S32(0XF200 << 16);
    // 0x8000E63C: ori         $t9, $t9, 0xC07C
    ctx->r25 = ctx->r25 | 0XC07C;
    // 0x8000E640: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x8000E644: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    // 0x8000E648: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8000E64C: lui         $t7, 0x7
    ctx->r15 = S32(0X7 << 16);
    // 0x8000E650: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8000E654: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8000E658: ori         $t7, $t7, 0xC05C
    ctx->r15 = ctx->r15 | 0XC05C;
    // 0x8000E65C: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x8000E660: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    // 0x8000E664: lbu         $t8, 0x1($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X1);
    // 0x8000E668: lui         $t6, 0xB900
    ctx->r14 = S32(0XB900 << 16);
    // 0x8000E66C: andi        $t9, $t8, 0x2
    ctx->r25 = ctx->r24 & 0X2;
    // 0x8000E670: beq         $t9, $zero, L_8000E6A0
    if (ctx->r25 == 0) {
        // 0x8000E674: ori         $t6, $t6, 0x31D
        ctx->r14 = ctx->r14 | 0X31D;
            goto L_8000E6A0;
    }
    // 0x8000E674: ori         $t6, $t6, 0x31D
    ctx->r14 = ctx->r14 | 0X31D;
    // 0x8000E678: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8000E67C: lui         $t7, 0xB900
    ctx->r15 = S32(0XB900 << 16);
    // 0x8000E680: lui         $t8, 0x50
    ctx->r24 = S32(0X50 << 16);
    // 0x8000E684: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8000E688: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8000E68C: ori         $t8, $t8, 0x4240
    ctx->r24 = ctx->r24 | 0X4240;
    // 0x8000E690: ori         $t7, $t7, 0x31D
    ctx->r15 = ctx->r15 | 0X31D;
    // 0x8000E694: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8000E698: b           L_8000E6BC
    // 0x8000E69C: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
        goto L_8000E6BC;
    // 0x8000E69C: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
L_8000E6A0:
    // 0x8000E6A0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8000E6A4: lui         $t7, 0x50
    ctx->r15 = S32(0X50 << 16);
    // 0x8000E6A8: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8000E6AC: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8000E6B0: ori         $t7, $t7, 0x41C8
    ctx->r15 = ctx->r15 | 0X41C8;
    // 0x8000E6B4: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x8000E6B8: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
L_8000E6BC:
    // 0x8000E6BC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8000E6C0: lui         $t6, 0x800A
    ctx->r14 = S32(0X800A << 16);
    // 0x8000E6C4: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8000E6C8: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8000E6CC: addiu       $t6, $t6, -0x4AB0
    ctx->r14 = ADD32(ctx->r14, -0X4AB0);
    // 0x8000E6D0: lui         $t9, 0x600
    ctx->r25 = S32(0X600 << 16);
    // 0x8000E6D4: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8000E6D8: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
L_8000E6DC:
    // 0x8000E6DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8000E6E0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8000E6E4: jr          $ra
    // 0x8000E6E8: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    return;
    // 0x8000E6E8: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
;}
RECOMP_FUNC void func_8000E6EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000E6EC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8000E6F0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x8000E6F4: addiu       $a0, $a0, 0x41A0
    ctx->r4 = ADD32(ctx->r4, 0X41A0);
    // 0x8000E6F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000E6FC: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    // 0x8000E700: jal         0x80080910
    // 0x8000E704: addiu       $a1, $zero, 0x3F0
    ctx->r5 = ADD32(0, 0X3F0);
    func_80080910(rdram, ctx);
        goto after_0;
    // 0x8000E704: addiu       $a1, $zero, 0x3F0
    ctx->r5 = ADD32(0, 0X3F0);
    after_0:
    // 0x8000E708: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x8000E70C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8000E710: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
L_8000E714:
    // 0x8000E714: lbu         $t6, 0x1($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X1);
    // 0x8000E718: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8000E71C: ori         $t7, $t6, 0x1
    ctx->r15 = ctx->r14 | 0X1;
    // 0x8000E720: addiu       $v0, $v0, 0x1F8
    ctx->r2 = ADD32(ctx->r2, 0X1F8);
    // 0x8000E724: bne         $v1, $a0, L_8000E714
    if (ctx->r3 != ctx->r4) {
        // 0x8000E728: sb          $t7, -0x1F7($v0)
        MEM_B(-0X1F7, ctx->r2) = ctx->r15;
            goto L_8000E714;
    }
    // 0x8000E728: sb          $t7, -0x1F7($v0)
    MEM_B(-0X1F7, ctx->r2) = ctx->r15;
    // 0x8000E72C: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x8000E730: addiu       $v0, $v0, -0x4B60
    ctx->r2 = ADD32(ctx->r2, -0X4B60);
    // 0x8000E734: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x8000E738: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000E73C: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8000E740: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8000E744: jr          $ra
    // 0x8000E748: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8000E748: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8000E74C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000E74C: lui         $t6, 0x800A
    ctx->r14 = S32(0X800A << 16);
    // 0x8000E750: lw          $t6, -0x4A98($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4A98);
    // 0x8000E754: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8000E758: lui         $a0, 0x802E
    ctx->r4 = S32(0X802E << 16);
    // 0x8000E75C: addiu       $a0, $a0, 0x6E18
    ctx->r4 = ADD32(ctx->r4, 0X6E18);
    // 0x8000E760: bne         $t6, $zero, L_8000E7A8
    if (ctx->r14 != 0) {
        // 0x8000E764: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8000E7A8;
    }
    // 0x8000E764: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000E768: addiu       $a1, $zero, 0x4EC0
    ctx->r5 = ADD32(0, 0X4EC0);
    // 0x8000E76C: jal         0x80080910
    // 0x8000E770: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_80080910(rdram, ctx);
        goto after_0;
    // 0x8000E770: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x8000E774: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x8000E778: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8000E77C: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
L_8000E780:
    // 0x8000E780: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8000E784: sb          $zero, 0x348($v0)
    MEM_B(0X348, ctx->r2) = 0;
    // 0x8000E788: sb          $zero, 0x690($v0)
    MEM_B(0X690, ctx->r2) = 0;
    // 0x8000E78C: sb          $zero, 0x9D8($v0)
    MEM_B(0X9D8, ctx->r2) = 0;
    // 0x8000E790: addiu       $v0, $v0, 0xD20
    ctx->r2 = ADD32(ctx->r2, 0XD20);
    // 0x8000E794: bne         $v1, $a0, L_8000E780
    if (ctx->r3 != ctx->r4) {
        // 0x8000E798: sb          $zero, -0xD20($v0)
        MEM_B(-0XD20, ctx->r2) = 0;
            goto L_8000E780;
    }
    // 0x8000E798: sb          $zero, -0xD20($v0)
    MEM_B(-0XD20, ctx->r2) = 0;
    // 0x8000E79C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8000E7A0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x8000E7A4: sw          $t7, -0x4A98($at)
    MEM_W(-0X4A98, ctx->r1) = ctx->r15;
L_8000E7A8:
    // 0x8000E7A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000E7AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8000E7B0: jr          $ra
    // 0x8000E7B4: nop

    return;
    // 0x8000E7B4: nop

;}
RECOMP_FUNC void func_8000E7B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000E7B8: lui         $t6, 0x800A
    ctx->r14 = S32(0X800A << 16);
    // 0x8000E7BC: lw          $t6, -0x4A98($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4A98);
    // 0x8000E7C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000E7C4: beq         $t6, $zero, L_8000E7E8
    if (ctx->r14 == 0) {
        // 0x8000E7C8: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8000E7E8;
    }
    // 0x8000E7C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000E7CC: lui         $a0, 0x802E
    ctx->r4 = S32(0X802E << 16);
    // 0x8000E7D0: addiu       $a0, $a0, 0x6E18
    ctx->r4 = ADD32(ctx->r4, 0X6E18);
    // 0x8000E7D4: jal         0x80080910
    // 0x8000E7D8: addiu       $a1, $zero, 0x4EC0
    ctx->r5 = ADD32(0, 0X4EC0);
    func_80080910(rdram, ctx);
        goto after_0;
    // 0x8000E7D8: addiu       $a1, $zero, 0x4EC0
    ctx->r5 = ADD32(0, 0X4EC0);
    after_0:
    // 0x8000E7DC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x8000E7E0: jal         0x800062C0
    // 0x8000E7E4: sw          $zero, -0x4A98($at)
    MEM_W(-0X4A98, ctx->r1) = 0;
    func_800062C0(rdram, ctx);
        goto after_1;
    // 0x8000E7E4: sw          $zero, -0x4A98($at)
    MEM_W(-0X4A98, ctx->r1) = 0;
    after_1:
L_8000E7E8:
    // 0x8000E7E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000E7EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8000E7F0: jr          $ra
    // 0x8000E7F4: nop

    return;
    // 0x8000E7F4: nop

;}
RECOMP_FUNC void func_8000E7F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000E7F8: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x8000E7FC: addiu       $v0, $v0, -0x2F8C
    ctx->r2 = ADD32(ctx->r2, -0X2F8C);
    // 0x8000E800: lbu         $t6, 0x0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X0);
    // 0x8000E804: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8000E808: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000E80C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8000E810: sb          $t7, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r15;
    // 0x8000E814: jal         0x8001B1B4
    // 0x8000E818: sb          $t6, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r14;
    func_8001B1B4(rdram, ctx);
        goto after_0;
    // 0x8000E818: sb          $t6, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r14;
    after_0:
    // 0x8000E81C: lbu         $t8, 0x1F($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X1F);
    // 0x8000E820: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000E824: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8000E828: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8000E82C: jr          $ra
    // 0x8000E830: sb          $t8, -0x2F8C($at)
    MEM_B(-0X2F8C, ctx->r1) = ctx->r24;
    return;
    // 0x8000E830: sb          $t8, -0x2F8C($at)
    MEM_B(-0X2F8C, ctx->r1) = ctx->r24;
;}
RECOMP_FUNC void func_8000E834(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000E834: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000E838: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x8000E83C: subu        $t7, $t7, $a0
    ctx->r15 = SUB32(ctx->r15, ctx->r4);
    // 0x8000E840: lui         $t8, 0x31
    ctx->r24 = S32(0X31 << 16);
    // 0x8000E844: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000E848: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8000E84C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8000E850: addiu       $t8, $t8, -0x4BB0
    ctx->r24 = ADD32(ctx->r24, -0X4BB0);
    // 0x8000E854: sll         $t7, $t7, 7
    ctx->r15 = S32(ctx->r15 << 7);
    // 0x8000E858: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    // 0x8000E85C: jal         0x8000E7F8
    // 0x8000E860: addiu       $a2, $zero, 0x180
    ctx->r6 = ADD32(0, 0X180);
    func_8000E7F8(rdram, ctx);
        goto after_0;
    // 0x8000E860: addiu       $a2, $zero, 0x180
    ctx->r6 = ADD32(0, 0X180);
    after_0:
    // 0x8000E864: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x8000E868: lui         $t2, 0x31
    ctx->r10 = S32(0X31 << 16);
    // 0x8000E86C: sll         $t0, $t9, 5
    ctx->r8 = S32(ctx->r25 << 5);
    // 0x8000E870: addiu       $t1, $t0, 0x3F00
    ctx->r9 = ADD32(ctx->r8, 0X3F00);
    // 0x8000E874: addiu       $t2, $t2, -0x4BB0
    ctx->r10 = ADD32(ctx->r10, -0X4BB0);
    // 0x8000E878: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x8000E87C: addu        $a0, $t1, $t2
    ctx->r4 = ADD32(ctx->r9, ctx->r10);
    // 0x8000E880: jal         0x8000E7F8
    // 0x8000E884: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    func_8000E7F8(rdram, ctx);
        goto after_1;
    // 0x8000E884: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_1:
    // 0x8000E888: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000E88C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8000E890: jr          $ra
    // 0x8000E894: nop

    return;
    // 0x8000E894: nop

;}
RECOMP_FUNC void func_8000E898(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000E898: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8000E89C: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x8000E8A0: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x8000E8A4: lw          $a2, -0x2F98($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X2F98);
    // 0x8000E8A8: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x8000E8AC: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8000E8B0: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    // 0x8000E8B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000E8B8: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x8000E8BC: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x8000E8C0: addu        $a2, $a2, $at
    ctx->r6 = ADD32(ctx->r6, ctx->r1);
    // 0x8000E8C4: lh          $v1, 0x6C1C($a2)
    ctx->r3 = MEM_H(ctx->r6, 0X6C1C);
    // 0x8000E8C8: lbu         $v0, 0x14($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X14);
    // 0x8000E8CC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8000E8D0: lwc1        $f16, 0x10($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X10);
    // 0x8000E8D4: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8000E8D8: beq         $at, $zero, L_8000E8EC
    if (ctx->r1 == 0) {
        // 0x8000E8DC: nop
    
            goto L_8000E8EC;
    }
    // 0x8000E8DC: nop

    // 0x8000E8E0: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x8000E8E4: b           L_8000E8F8
    // 0x8000E8E8: cvt.s.w     $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    ctx->f18.fl = CVT_S_W(ctx->f4.u32l);
        goto L_8000E8F8;
    // 0x8000E8E8: cvt.s.w     $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    ctx->f18.fl = CVT_S_W(ctx->f4.u32l);
L_8000E8EC:
    // 0x8000E8EC: mtc1        $v1, $f6
    ctx->f6.u32l = ctx->r3;
    // 0x8000E8F0: nop

    // 0x8000E8F4: cvt.s.w     $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    ctx->f18.fl = CVT_S_W(ctx->f6.u32l);
L_8000E8F8:
    // 0x8000E8F8: c.eq.s      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.fl == ctx->f8.fl;
    // 0x8000E8FC: lw          $t9, 0x5C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X5C);
    // 0x8000E900: bc1f        L_8000E910
    if (!c1cs) {
        // 0x8000E904: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_8000E910;
    }
    // 0x8000E904: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8000E908: b           L_8000EA9C
    // 0x8000E90C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
        goto L_8000EA9C;
    // 0x8000E90C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_8000E910:
    // 0x8000E910: lbu         $t6, 0x1($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X1);
    // 0x8000E914: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x8000E918: andi        $t7, $t6, 0x8
    ctx->r15 = ctx->r14 & 0X8;
    // 0x8000E91C: beq         $t7, $zero, L_8000E92C
    if (ctx->r15 == 0) {
        // 0x8000E920: cvt.s.w     $f2, $f10
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    ctx->f2.fl = CVT_S_W(ctx->f10.u32l);
            goto L_8000E92C;
    }
    // 0x8000E920: cvt.s.w     $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    ctx->f2.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8000E924: b           L_8000E944
    // 0x8000E928: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8000E944;
    // 0x8000E928: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8000E92C:
    // 0x8000E92C: lhu         $v0, 0x998($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X998);
    // 0x8000E930: addiu       $at, $zero, 0x2F2
    ctx->r1 = ADD32(0, 0X2F2);
    // 0x8000E934: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x8000E938: mfhi        $v0
    ctx->r2 = hi;
    // 0x8000E93C: nop

    // 0x8000E940: nop

L_8000E944:
    // 0x8000E944: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8000E948: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8000E94C: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x8000E950: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8000E954: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8000E958: lwc1        $f6, 0x50($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8000E95C: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x8000E960: lwc1        $f8, 0x48($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8000E964: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x8000E968: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x8000E96C: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8000E970: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8000E974: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8000E978: mul.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x8000E97C: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
    // 0x8000E980: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    // 0x8000E984: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    // 0x8000E988: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x8000E98C: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x8000E990: div.s       $f6, $f10, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = DIV_S(ctx->f10.fl, ctx->f2.fl);
    // 0x8000E994: cvt.d.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.d = CVT_D_W(ctx->f8.u32l);
    // 0x8000E998: lwc1        $f7, 0x3528($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X3528);
    // 0x8000E99C: cvt.d.s     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f4.d = CVT_D_S(ctx->f6.fl);
    // 0x8000E9A0: lwc1        $f6, 0x352C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X352C);
    // 0x8000E9A4: nop

    // 0x8000E9A8: mul.d       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f10.d, ctx->f6.d);
    // 0x8000E9AC: sub.d       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f4.d - ctx->f8.d;
    // 0x8000E9B0: cvt.s.d     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f14.fl = CVT_S_D(ctx->f10.d);
    // 0x8000E9B4: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
    // 0x8000E9B8: jal         0x80080E80
    // 0x8000E9BC: swc1        $f14, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f14.u32l;
    func_80080E80(rdram, ctx);
        goto after_0;
    // 0x8000E9BC: swc1        $f14, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f14.u32l;
    after_0:
    // 0x8000E9C0: lwc1        $f2, 0x20($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8000E9C4: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8000E9C8: lui         $at, 0x4044
    ctx->r1 = S32(0X4044 << 16);
    // 0x8000E9CC: mul.s       $f6, $f2, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x8000E9D0: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x8000E9D4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8000E9D8: lwc1        $f14, 0x1C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8000E9DC: mul.s       $f4, $f0, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x8000E9E0: cvt.d.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.d = CVT_D_S(ctx->f4.fl);
    // 0x8000E9E4: nop

    // 0x8000E9E8: div.d       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f6.d = DIV_D(ctx->f8.d, ctx->f10.d);
    // 0x8000E9EC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8000E9F0: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x8000E9F4: nop

    // 0x8000E9F8: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x8000E9FC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8000EA00: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8000EA04: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x8000EA08: cvt.w.d     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.u32l = CVT_W_D(ctx->f6.d);
    // 0x8000EA0C: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x8000EA10: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x8000EA14: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x8000EA18: cvt.d.s     $f8, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f8.d = CVT_D_S(ctx->f14.fl);
    // 0x8000EA1C: sub.d       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f6.d = ctx->f8.d - ctx->f10.d;
    // 0x8000EA20: sw          $v1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r3;
    // 0x8000EA24: jal         0x80080E80
    // 0x8000EA28: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    func_80080E80(rdram, ctx);
        goto after_1;
    // 0x8000EA28: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    after_1:
    // 0x8000EA2C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8000EA30: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8000EA34: lui         $at, 0x404E
    ctx->r1 = S32(0X404E << 16);
    // 0x8000EA38: add.s       $f8, $f0, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x8000EA3C: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x8000EA40: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8000EA44: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x8000EA48: mul.d       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f6.d); 
    ctx->f4.d = MUL_D(ctx->f10.d, ctx->f6.d);
    // 0x8000EA4C: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8000EA50: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8000EA54: cvt.d.s     $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f8.d = CVT_D_S(ctx->f16.fl);
    // 0x8000EA58: lwc1        $f7, 0x3530($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X3530);
    // 0x8000EA5C: mul.d       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f4.d, ctx->f8.d);
    // 0x8000EA60: lwc1        $f6, 0x3534($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3534);
    // 0x8000EA64: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x8000EA68: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x8000EA6C: lwc1        $f18, 0x24($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8000EA70: sub.d       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = ctx->f6.d - ctx->f10.d;
    // 0x8000EA74: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x8000EA78: nop

    // 0x8000EA7C: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x8000EA80: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8000EA84: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8000EA88: nop

    // 0x8000EA8C: cvt.w.d     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = CVT_W_D(ctx->f4.d);
    // 0x8000EA90: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x8000EA94: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x8000EA98: nop

L_8000EA9C:
    // 0x8000EA9C: mtc1        $v1, $f6
    ctx->f6.u32l = ctx->r3;
    // 0x8000EAA0: lwc1        $f10, 0x4C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8000EAA4: cvt.s.w     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8000EAA8: addiu       $t6, $zero, -0x1F4
    ctx->r14 = ADD32(0, -0X1F4);
    // 0x8000EAAC: add.s       $f4, $f0, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f10.fl;
    // 0x8000EAB0: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8000EAB4: nop

    // 0x8000EAB8: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x8000EABC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8000EAC0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8000EAC4: nop

    // 0x8000EAC8: cvt.w.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8000EACC: mfc1        $t3, $f8
    ctx->r11 = (int32_t)ctx->f8.u32l;
    // 0x8000EAD0: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x8000EAD4: sh          $t3, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r11;
    // 0x8000EAD8: lwc1        $f6, 0x50($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8000EADC: sh          $t6, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r14;
    // 0x8000EAE0: sub.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x8000EAE4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8000EAE8: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x8000EAEC: nop

    // 0x8000EAF0: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x8000EAF4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8000EAF8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8000EAFC: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8000EB00: cvt.w.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8000EB04: mfc1        $t5, $f4
    ctx->r13 = (int32_t)ctx->f4.u32l;
    // 0x8000EB08: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8000EB0C: sh          $t5, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r13;
    // 0x8000EB10: lw          $t7, 0x54($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X54);
    // 0x8000EB14: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x8000EB18: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x8000EB1C: sll         $t8, $t7, 6
    ctx->r24 = S32(ctx->r15 << 6);
    // 0x8000EB20: sh          $t8, 0x8($a0)
    MEM_H(0X8, ctx->r4) = ctx->r24;
    // 0x8000EB24: lw          $t9, 0x58($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X58);
    // 0x8000EB28: cvt.w.s     $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    ctx->f8.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8000EB2C: sll         $t0, $t9, 6
    ctx->r8 = S32(ctx->r25 << 6);
    // 0x8000EB30: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8000EB34: sh          $t0, 0xA($a0)
    MEM_H(0XA, ctx->r4) = ctx->r8;
    // 0x8000EB38: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x8000EB3C: sb          $v0, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r2;
    // 0x8000EB40: sb          $v0, 0xD($a0)
    MEM_B(0XD, ctx->r4) = ctx->r2;
    // 0x8000EB44: beq         $t2, $zero, L_8000EB90
    if (ctx->r10 == 0) {
        // 0x8000EB48: sb          $v0, 0xE($a0)
        MEM_B(0XE, ctx->r4) = ctx->r2;
            goto L_8000EB90;
    }
    // 0x8000EB48: sb          $v0, 0xE($a0)
    MEM_B(0XE, ctx->r4) = ctx->r2;
    // 0x8000EB4C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8000EB50: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8000EB54: sub.s       $f8, $f18, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f8.fl;
    // 0x8000EB58: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8000EB5C: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x8000EB60: nop

    // 0x8000EB64: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8000EB68: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8000EB6C: nop

    // 0x8000EB70: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x8000EB74: bne         $t2, $zero, L_8000EB88
    if (ctx->r10 != 0) {
        // 0x8000EB78: nop
    
            goto L_8000EB88;
    }
    // 0x8000EB78: nop

    // 0x8000EB7C: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
    // 0x8000EB80: b           L_8000EBA0
    // 0x8000EB84: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
        goto L_8000EBA0;
    // 0x8000EB84: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
L_8000EB88:
    // 0x8000EB88: b           L_8000EBA0
    // 0x8000EB8C: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
        goto L_8000EBA0;
    // 0x8000EB8C: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
L_8000EB90:
    // 0x8000EB90: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
    // 0x8000EB94: nop

    // 0x8000EB98: bltz        $t2, L_8000EB88
    if (SIGNED(ctx->r10) < 0) {
        // 0x8000EB9C: nop
    
            goto L_8000EB88;
    }
    // 0x8000EB9C: nop

L_8000EBA0:
    // 0x8000EBA0: sb          $t2, 0xF($a0)
    MEM_B(0XF, ctx->r4) = ctx->r10;
    // 0x8000EBA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000EBA8: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x8000EBAC: jr          $ra
    // 0x8000EBB0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x8000EBB0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8000EBB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000EBB4: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x8000EBB8: lui         $at, 0x4320
    ctx->r1 = S32(0X4320 << 16);
    // 0x8000EBBC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8000EBC0: sw          $ra, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r31;
    // 0x8000EBC4: sw          $s7, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r23;
    // 0x8000EBC8: sw          $s6, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r22;
    // 0x8000EBCC: sw          $s5, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r21;
    // 0x8000EBD0: sw          $s4, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r20;
    // 0x8000EBD4: sw          $s3, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r19;
    // 0x8000EBD8: sw          $s2, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r18;
    // 0x8000EBDC: sw          $s1, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r17;
    // 0x8000EBE0: sw          $s0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r16;
    // 0x8000EBE4: swc1        $f31, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x8000EBE8: swc1        $f30, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f30.u32l;
    // 0x8000EBEC: swc1        $f29, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x8000EBF0: swc1        $f28, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f28.u32l;
    // 0x8000EBF4: swc1        $f27, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x8000EBF8: swc1        $f26, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f26.u32l;
    // 0x8000EBFC: swc1        $f25, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x8000EC00: swc1        $f24, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f24.u32l;
    // 0x8000EC04: swc1        $f23, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8000EC08: swc1        $f22, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f22.u32l;
    // 0x8000EC0C: swc1        $f21, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8000EC10: swc1        $f20, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f20.u32l;
    // 0x8000EC14: lwc1        $f4, 0x4($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X4);
    // 0x8000EC18: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8000EC1C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8000EC20: lwc1        $f17, 0x3538($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X3538);
    // 0x8000EC24: lwc1        $f16, 0x353C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X353C);
    // 0x8000EC28: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x8000EC2C: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x8000EC30: lhu         $v0, 0xE($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0XE);
    // 0x8000EC34: lwc1        $f4, 0x8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8000EC38: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x8000EC3C: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x8000EC40: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x8000EC44: cvt.s.d     $f26, $f18
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f26.fl = CVT_S_D(ctx->f18.d);
    // 0x8000EC48: bgez        $v0, L_8000EC60
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8000EC4C: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_8000EC60;
    }
    // 0x8000EC4C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8000EC50: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8000EC54: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8000EC58: nop

    // 0x8000EC5C: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_8000EC60:
    // 0x8000EC60: add.s       $f16, $f4, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x8000EC64: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x8000EC68: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8000EC6C: sll         $t8, $v0, 5
    ctx->r24 = S32(ctx->r2 << 5);
    // 0x8000EC70: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x8000EC74: sub.s       $f6, $f18, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f16.fl;
    // 0x8000EC78: lhu         $t6, 0xC($s5)
    ctx->r14 = MEM_HU(ctx->r21, 0XC);
    // 0x8000EC7C: cvt.s.w     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    ctx->f18.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8000EC80: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x8000EC84: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8000EC88: swc1        $f18, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f18.u32l;
    // 0x8000EC8C: lbu         $t9, 0x1($s5)
    ctx->r25 = MEM_BU(ctx->r21, 0X1);
    // 0x8000EC90: sll         $t7, $t6, 5
    ctx->r15 = S32(ctx->r14 << 5);
    // 0x8000EC94: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8000EC98: mul.s       $f28, $f6, $f10
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f28.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x8000EC9C: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x8000ECA0: addiu       $s4, $zero, 0x5
    ctx->r20 = ADD32(0, 0X5);
    // 0x8000ECA4: beq         $t0, $zero, L_8000ECB8
    if (ctx->r8 == 0) {
        // 0x8000ECA8: cvt.s.w     $f30, $f4
        CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 4);
    ctx->f30.fl = CVT_S_W(ctx->f4.u32l);
            goto L_8000ECB8;
    }
    // 0x8000ECA8: cvt.s.w     $f30, $f4
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 4);
    ctx->f30.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8000ECAC: addiu       $s4, $zero, 0x2
    ctx->r20 = ADD32(0, 0X2);
    // 0x8000ECB0: b           L_8000ECBC
    // 0x8000ECB4: addiu       $s7, $zero, 0x2
    ctx->r23 = ADD32(0, 0X2);
        goto L_8000ECBC;
    // 0x8000ECB4: addiu       $s7, $zero, 0x2
    ctx->r23 = ADD32(0, 0X2);
L_8000ECB8:
    // 0x8000ECB8: addiu       $s7, $zero, 0x5
    ctx->r23 = ADD32(0, 0X5);
L_8000ECBC:
    // 0x8000ECBC: blez        $s7, L_8000EE10
    if (SIGNED(ctx->r23) <= 0) {
        // 0x8000ECC0: or          $s6, $zero, $zero
        ctx->r22 = 0 | 0;
            goto L_8000EE10;
    }
    // 0x8000ECC0: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
L_8000ECC4:
    // 0x8000ECC4: blez        $s4, L_8000EE04
    if (SIGNED(ctx->r20) <= 0) {
        // 0x8000ECC8: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_8000EE04;
    }
    // 0x8000ECC8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8000ECCC: addiu       $v1, $s7, -0x1
    ctx->r3 = ADD32(ctx->r23, -0X1);
    // 0x8000ECD0: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x8000ECD4: lwc1        $f10, 0x80($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X80);
    // 0x8000ECD8: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8000ECDC: addiu       $v0, $s4, -0x1
    ctx->r2 = ADD32(ctx->r20, -0X1);
    // 0x8000ECE0: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x8000ECE4: div.s       $f18, $f10, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = DIV_S(ctx->f10.fl, ctx->f8.fl);
    // 0x8000ECE8: cvt.s.w     $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    ctx->f6.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8000ECEC: mtc1        $s6, $f16
    ctx->f16.u32l = ctx->r22;
    // 0x8000ECF0: lui         $at, 0x41F8
    ctx->r1 = S32(0X41F8 << 16);
    // 0x8000ECF4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8000ECF8: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x8000ECFC: lui         $at, 0x41C4
    ctx->r1 = S32(0X41C4 << 16);
    // 0x8000ED00: div.s       $f20, $f30, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f20.fl = DIV_S(ctx->f30.fl, ctx->f6.fl);
    // 0x8000ED04: cvt.s.w     $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    ctx->f6.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8000ED08: mul.s       $f4, $f18, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x8000ED0C: mtc1        $v1, $f6
    ctx->f6.u32l = ctx->r3;
    // 0x8000ED10: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8000ED14: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8000ED18: add.s       $f22, $f4, $f28
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f22.fl = ctx->f4.fl + ctx->f28.fl;
    // 0x8000ED1C: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8000ED20: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8000ED24: nop

    // 0x8000ED28: div.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = DIV_S(ctx->f18.fl, ctx->f4.fl);
    // 0x8000ED2C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8000ED30: div.s       $f24, $f10, $f16
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f24.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x8000ED34: mtc1        $s6, $f10
    ctx->f10.u32l = ctx->r22;
    // 0x8000ED38: nop

    // 0x8000ED3C: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8000ED40: mul.s       $f6, $f8, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x8000ED44: sub.s       $f4, $f6, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f18.fl;
    // 0x8000ED48: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x8000ED4C: nop

    // 0x8000ED50: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x8000ED54: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8000ED58: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8000ED5C: nop

    // 0x8000ED60: cvt.w.s     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8000ED64: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x8000ED68: mfc1        $s2, $f10
    ctx->r18 = (int32_t)ctx->f10.u32l;
    // 0x8000ED6C: nop

    // 0x8000ED70: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8000ED74: nop

    // 0x8000ED78: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x8000ED7C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8000ED80: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8000ED84: nop

    // 0x8000ED88: cvt.w.s     $f8, $f30
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 30);
    ctx->f8.u32l = CVT_W_S(ctx->f30.fl);
    // 0x8000ED8C: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x8000ED90: mfc1        $s3, $f8
    ctx->r19 = (int32_t)ctx->f8.u32l;
    // 0x8000ED94: nop

L_8000ED98:
    // 0x8000ED98: mtc1        $s0, $f16
    ctx->f16.u32l = ctx->r16;
    // 0x8000ED9C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8000EDA0: cvt.s.w     $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8000EDA4: mfc1        $a1, $f26
    ctx->r5 = (int32_t)ctx->f26.u32l;
    // 0x8000EDA8: mfc1        $a2, $f28
    ctx->r6 = (int32_t)ctx->f28.u32l;
    // 0x8000EDAC: mul.s       $f6, $f20, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x8000EDB0: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    // 0x8000EDB4: swc1        $f22, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f22.u32l;
    // 0x8000EDB8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8000EDBC: mul.s       $f4, $f24, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f24.fl, ctx->f0.fl);
    // 0x8000EDC0: add.s       $f18, $f6, $f26
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f18.fl = ctx->f6.fl + ctx->f26.fl;
    // 0x8000EDC4: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8000EDC8: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x8000EDCC: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8000EDD0: sw          $s5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r21;
    // 0x8000EDD4: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x8000EDD8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8000EDDC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8000EDE0: nop

    // 0x8000EDE4: cvt.w.s     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8000EDE8: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
    // 0x8000EDEC: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8000EDF0: jal         0x8000E898
    // 0x8000EDF4: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    func_8000E898(rdram, ctx);
        goto after_0;
    // 0x8000EDF4: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    after_0:
    // 0x8000EDF8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8000EDFC: bne         $s0, $s4, L_8000ED98
    if (ctx->r16 != ctx->r20) {
        // 0x8000EE00: nop
    
            goto L_8000ED98;
    }
    // 0x8000EE00: nop

L_8000EE04:
    // 0x8000EE04: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x8000EE08: bne         $s6, $s7, L_8000ECC4
    if (ctx->r22 != ctx->r23) {
        // 0x8000EE0C: nop
    
            goto L_8000ECC4;
    }
    // 0x8000EE0C: nop

L_8000EE10:
    // 0x8000EE10: multu       $s4, $s7
    result = U64(U32(ctx->r20)) * U64(U32(ctx->r23)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8000EE14: sll         $t7, $s4, 4
    ctx->r15 = S32(ctx->r20 << 4);
    // 0x8000EE18: mflo        $t5
    ctx->r13 = lo;
    // 0x8000EE1C: sll         $t6, $t5, 4
    ctx->r14 = S32(ctx->r13 << 4);
    // 0x8000EE20: subu        $a0, $s1, $t6
    ctx->r4 = SUB32(ctx->r17, ctx->r14);
    // 0x8000EE24: multu       $t7, $s7
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r23)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8000EE28: mflo        $a1
    ctx->r5 = lo;
    // 0x8000EE2C: jal         0x80081980
    // 0x8000EE30: nop

    func_80081980(rdram, ctx);
        goto after_1;
    // 0x8000EE30: nop

    after_1:
    // 0x8000EE34: lw          $ra, 0x7C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X7C);
    // 0x8000EE38: lwc1        $f21, 0x28($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x8000EE3C: lwc1        $f20, 0x2C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8000EE40: lwc1        $f23, 0x30($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x8000EE44: lwc1        $f22, 0x34($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8000EE48: lwc1        $f25, 0x38($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x8000EE4C: lwc1        $f24, 0x3C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8000EE50: lwc1        $f27, 0x40($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x8000EE54: lwc1        $f26, 0x44($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8000EE58: lwc1        $f29, 0x48($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X48);
    // 0x8000EE5C: lwc1        $f28, 0x4C($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8000EE60: lwc1        $f31, 0x50($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X50);
    // 0x8000EE64: lwc1        $f30, 0x54($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8000EE68: lw          $s0, 0x5C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X5C);
    // 0x8000EE6C: lw          $s1, 0x60($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X60);
    // 0x8000EE70: lw          $s2, 0x64($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X64);
    // 0x8000EE74: lw          $s3, 0x68($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X68);
    // 0x8000EE78: lw          $s4, 0x6C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X6C);
    // 0x8000EE7C: lw          $s5, 0x70($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X70);
    // 0x8000EE80: lw          $s6, 0x74($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X74);
    // 0x8000EE84: lw          $s7, 0x78($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X78);
    // 0x8000EE88: jr          $ra
    // 0x8000EE8C: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    return;
    // 0x8000EE8C: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
;}
RECOMP_FUNC void func_8000EE90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000EE90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000EE94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000EE98: jal         0x8000F980
    // 0x8000EE9C: nop

    func_8000F980(rdram, ctx);
        goto after_0;
    // 0x8000EE9C: nop

    after_0:
    // 0x8000EEA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000EEA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8000EEA8: jr          $ra
    // 0x8000EEAC: nop

    return;
    // 0x8000EEAC: nop

;}
RECOMP_FUNC void func_8000EEB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000EEB0: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8000EEB4: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x8000EEB8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8000EEBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000EEC0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8000EEC4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8000EEC8: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8000EECC: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8000EED0: mul.s       $f12, $f4, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x8000EED4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8000EED8: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8000EEDC: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x8000EEE0: mul.s       $f14, $f6, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x8000EEE4: c.lt.s      $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f14.fl < ctx->f16.fl;
    // 0x8000EEE8: mul.s       $f2, $f8, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x8000EEEC: bc1f        L_8000EEF8
    if (!c1cs) {
        // 0x8000EEF0: nop
    
            goto L_8000EEF8;
    }
    // 0x8000EEF0: nop

    // 0x8000EEF4: mov.s       $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = ctx->f16.fl;
L_8000EEF8:
    // 0x8000EEF8: lw          $t6, -0x2F98($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X2F98);
    // 0x8000EEFC: lui         $t7, 0x3
    ctx->r15 = S32(0X3 << 16);
    // 0x8000EF00: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8000EF04: lbu         $t7, 0x754($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X754);
    // 0x8000EF08: nop

    // 0x8000EF0C: andi        $t8, $t7, 0x2
    ctx->r24 = ctx->r15 & 0X2;
    // 0x8000EF10: beq         $t8, $zero, L_8000EF40
    if (ctx->r24 == 0) {
        // 0x8000EF14: addiu       $t9, $zero, 0x1
        ctx->r25 = ADD32(0, 0X1);
            goto L_8000EF40;
    }
    // 0x8000EF14: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8000EF18: swc1        $f2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f2.u32l;
    // 0x8000EF1C: swc1        $f12, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f12.u32l;
    // 0x8000EF20: jal         0x80004804
    // 0x8000EF24: swc1        $f14, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f14.u32l;
    func_80004804(rdram, ctx);
        goto after_0;
    // 0x8000EF24: swc1        $f14, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f14.u32l;
    after_0:
    // 0x8000EF28: lwc1        $f2, 0x1C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8000EF2C: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8000EF30: lwc1        $f14, 0x20($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8000EF34: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8000EF38: bne         $v0, $zero, L_8000EF9C
    if (ctx->r2 != 0) {
        // 0x8000EF3C: addiu       $t9, $zero, 0x1
        ctx->r25 = ADD32(0, 0X1);
            goto L_8000EF9C;
    }
    // 0x8000EF3C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
L_8000EF40:
    // 0x8000EF40: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x8000EF44: sw          $t9, -0x311C($at)
    MEM_W(-0X311C, ctx->r1) = ctx->r25;
    // 0x8000EF48: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x8000EF4C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8000EF50: addiu       $v0, $v0, 0x45B4
    ctx->r2 = ADD32(ctx->r2, 0X45B4);
    // 0x8000EF54: sw          $zero, 0x45A0($at)
    MEM_W(0X45A0, ctx->r1) = 0;
    // 0x8000EF58: swc1        $f16, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f16.u32l;
    // 0x8000EF5C: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8000EF60: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x8000EF64: addiu       $v1, $v1, 0x45B0
    ctx->r3 = ADD32(ctx->r3, 0X45B0);
    // 0x8000EF68: swc1        $f10, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f10.u32l;
    // 0x8000EF6C: lwc1        $f18, 0x0($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X0);
    // 0x8000EF70: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x8000EF74: addiu       $a0, $a0, 0x45AC
    ctx->r4 = ADD32(ctx->r4, 0X45AC);
    // 0x8000EF78: swc1        $f18, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f18.u32l;
    // 0x8000EF7C: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8000EF80: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x8000EF84: addiu       $a1, $a1, 0x45A8
    ctx->r5 = ADD32(ctx->r5, 0X45A8);
    // 0x8000EF88: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
    // 0x8000EF8C: lwc1        $f6, 0x0($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X0);
    // 0x8000EF90: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8000EF94: b           L_8000F04C
    // 0x8000EF98: swc1        $f6, 0x45A4($at)
    MEM_W(0X45A4, ctx->r1) = ctx->f6.u32l;
        goto L_8000F04C;
    // 0x8000EF98: swc1        $f6, 0x45A4($at)
    MEM_W(0X45A4, ctx->r1) = ctx->f6.u32l;
L_8000EF9C:
    // 0x8000EF9C: c.lt.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl < ctx->f2.fl;
    // 0x8000EFA0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8000EFA4: bc1f        L_8000EFB8
    if (!c1cs) {
        // 0x8000EFA8: lui         $v0, 0x8013
        ctx->r2 = S32(0X8013 << 16);
            goto L_8000EFB8;
    }
    // 0x8000EFA8: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x8000EFAC: addiu       $v0, $v0, 0x4590
    ctx->r2 = ADD32(ctx->r2, 0X4590);
    // 0x8000EFB0: b           L_8000EFC8
    // 0x8000EFB4: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
        goto L_8000EFC8;
    // 0x8000EFB4: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
L_8000EFB8:
    // 0x8000EFB8: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x8000EFBC: addiu       $v0, $v0, 0x4590
    ctx->r2 = ADD32(ctx->r2, 0X4590);
    // 0x8000EFC0: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8000EFC4: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
L_8000EFC8:
    // 0x8000EFC8: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x8000EFCC: nop

    // 0x8000EFD0: beq         $t1, $zero, L_8000EFE0
    if (ctx->r9 == 0) {
        // 0x8000EFD4: nop
    
            goto L_8000EFE0;
    }
    // 0x8000EFD4: nop

    // 0x8000EFD8: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x8000EFDC: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
L_8000EFE0:
    // 0x8000EFE0: lwc1        $f11, 0x3598($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X3598);
    // 0x8000EFE4: lwc1        $f10, 0x359C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X359C);
    // 0x8000EFE8: cvt.d.s     $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f8.d = CVT_D_S(ctx->f12.fl);
    // 0x8000EFEC: mul.d       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f18.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x8000EFF0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8000EFF4: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x8000EFF8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8000EFFC: swc1        $f4, 0x4594($at)
    MEM_W(0X4594, ctx->r1) = ctx->f4.u32l;
    // 0x8000F000: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8000F004: lwc1        $f6, 0x35A0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X35A0);
    // 0x8000F008: lui         $at, 0x3FF4
    ctx->r1 = S32(0X3FF4 << 16);
    // 0x8000F00C: sub.s       $f8, $f2, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f2.fl - ctx->f6.fl;
    // 0x8000F010: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x8000F014: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x8000F018: mul.d       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f10.d, ctx->f18.d);
    // 0x8000F01C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8000F020: lwc1        $f7, 0x35A8($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X35A8);
    // 0x8000F024: lwc1        $f6, 0x35AC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X35AC);
    // 0x8000F028: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8000F02C: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x8000F030: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x8000F034: swc1        $f10, 0x459C($at)
    MEM_W(0X459C, ctx->r1) = ctx->f10.u32l;
    // 0x8000F038: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8000F03C: jal         0x802A67F8
    // 0x8000F040: swc1        $f14, 0x4598($at)
    MEM_W(0X4598, ctx->r1) = ctx->f14.u32l;
    LOOKUP_FUNC(0x802A67F8)(rdram, ctx);
        goto after_1;
    // 0x8000F040: swc1        $f14, 0x4598($at)
    MEM_W(0X4598, ctx->r1) = ctx->f14.u32l;
    after_1:
    // 0x8000F044: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8000F048: sw          $v0, 0x45B8($at)
    MEM_W(0X45B8, ctx->r1) = ctx->r2;
L_8000F04C:
    // 0x8000F04C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000F050: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8000F054: jr          $ra
    // 0x8000F058: nop

    return;
    // 0x8000F058: nop

;}
RECOMP_FUNC void func_8000F05C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000F05C: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x8000F060: lw          $t6, 0x4590($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X4590);
    // 0x8000F064: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8000F068: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x8000F06C: lwc1        $f4, 0x4594($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4594);
    // 0x8000F070: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8000F074: swc1        $f4, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f4.u32l;
    // 0x8000F078: lwc1        $f6, 0x4598($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4598);
    // 0x8000F07C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8000F080: swc1        $f6, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f6.u32l;
    // 0x8000F084: lwc1        $f8, 0x459C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X459C);
    // 0x8000F088: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x8000F08C: swc1        $f8, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f8.u32l;
    // 0x8000F090: lw          $t7, 0x45B8($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X45B8);
    // 0x8000F094: jr          $ra
    // 0x8000F098: sw          $t7, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r15;
    return;
    // 0x8000F098: sw          $t7, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void func_8000F09C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000F09C: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8000F0A0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8000F0A4: sw          $t6, 0x4590($at)
    MEM_W(0X4590, ctx->r1) = ctx->r14;
    // 0x8000F0A8: lwc1        $f4, 0x4($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X4);
    // 0x8000F0AC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8000F0B0: swc1        $f4, 0x4594($at)
    MEM_W(0X4594, ctx->r1) = ctx->f4.u32l;
    // 0x8000F0B4: lwc1        $f6, 0x8($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8000F0B8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8000F0BC: swc1        $f6, 0x4598($at)
    MEM_W(0X4598, ctx->r1) = ctx->f6.u32l;
    // 0x8000F0C0: lwc1        $f8, 0xC($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0XC);
    // 0x8000F0C4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8000F0C8: swc1        $f8, 0x459C($at)
    MEM_W(0X459C, ctx->r1) = ctx->f8.u32l;
    // 0x8000F0CC: lw          $t7, 0x10($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X10);
    // 0x8000F0D0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8000F0D4: jr          $ra
    // 0x8000F0D8: sw          $t7, 0x45B8($at)
    MEM_W(0X45B8, ctx->r1) = ctx->r15;
    return;
    // 0x8000F0D8: sw          $t7, 0x45B8($at)
    MEM_W(0X45B8, ctx->r1) = ctx->r15;
;}
RECOMP_FUNC void func_8000F0DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000F0DC: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x8000F0E0: addiu       $a2, $a2, -0x2F98
    ctx->r6 = ADD32(ctx->r6, -0X2F98);
    // 0x8000F0E4: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x8000F0E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000F0EC: lui         $t7, 0x3
    ctx->r15 = S32(0X3 << 16);
    // 0x8000F0F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000F0F4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8000F0F8: lbu         $t7, 0x754($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X754);
    // 0x8000F0FC: nop

    // 0x8000F100: andi        $t8, $t7, 0x2
    ctx->r24 = ctx->r15 & 0X2;
    // 0x8000F104: beq         $t8, $zero, L_8000F268
    if (ctx->r24 == 0) {
        // 0x8000F108: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8000F268;
    }
    // 0x8000F108: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000F10C: jal         0x80004804
    // 0x8000F110: nop

    func_80004804(rdram, ctx);
        goto after_0;
    // 0x8000F110: nop

    after_0:
    // 0x8000F114: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x8000F118: beq         $v0, $zero, L_8000F264
    if (ctx->r2 == 0) {
        // 0x8000F11C: addiu       $a2, $a2, -0x2F98
        ctx->r6 = ADD32(ctx->r6, -0X2F98);
            goto L_8000F264;
    }
    // 0x8000F11C: addiu       $a2, $a2, -0x2F98
    ctx->r6 = ADD32(ctx->r6, -0X2F98);
    // 0x8000F120: lw          $t9, 0x0($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X0);
    // 0x8000F124: lui         $a3, 0x2
    ctx->r7 = S32(0X2 << 16);
    // 0x8000F128: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x8000F12C: addu        $t0, $t9, $a3
    ctx->r8 = ADD32(ctx->r25, ctx->r7);
    // 0x8000F130: lbu         $t1, 0x9A2($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X9A2);
    // 0x8000F134: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x8000F138: beq         $t1, $at, L_8000F264
    if (ctx->r9 == ctx->r1) {
        // 0x8000F13C: lui         $a0, 0x8011
        ctx->r4 = S32(0X8011 << 16);
            goto L_8000F264;
    }
    // 0x8000F13C: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8000F140: addiu       $a0, $a0, -0x2F94
    ctx->r4 = ADD32(ctx->r4, -0X2F94);
    // 0x8000F144: jal         0x8001018C
    // 0x8000F148: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001018C(rdram, ctx);
        goto after_1;
    // 0x8000F148: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x8000F14C: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8000F150: addiu       $a0, $a0, -0x2F94
    ctx->r4 = ADD32(ctx->r4, -0X2F94);
    // 0x8000F154: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8000F158: lui         $t3, 0xBC00
    ctx->r11 = S32(0XBC00 << 16);
    // 0x8000F15C: addiu       $t2, $v0, 0x8
    ctx->r10 = ADD32(ctx->r2, 0X8);
    // 0x8000F160: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x8000F164: sw          $t2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r10;
    // 0x8000F168: ori         $t3, $t3, 0x2806
    ctx->r11 = ctx->r11 | 0X2806;
    // 0x8000F16C: addiu       $a2, $a2, -0x2F98
    ctx->r6 = ADD32(ctx->r6, -0X2F98);
    // 0x8000F170: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    // 0x8000F174: lw          $t4, 0x0($a2)
    ctx->r12 = MEM_W(ctx->r6, 0X0);
    // 0x8000F178: lui         $a3, 0x2
    ctx->r7 = S32(0X2 << 16);
    // 0x8000F17C: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x8000F180: addu        $t5, $t4, $a3
    ctx->r13 = ADD32(ctx->r12, ctx->r7);
    // 0x8000F184: lw          $t6, 0xBF0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0XBF0);
    // 0x8000F188: lui         $t8, 0x106
    ctx->r24 = S32(0X106 << 16);
    // 0x8000F18C: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x8000F190: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8000F194: lui         $t9, 0x13
    ctx->r25 = S32(0X13 << 16);
    // 0x8000F198: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x8000F19C: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x8000F1A0: addiu       $t9, $t9, 0x1728
    ctx->r25 = ADD32(ctx->r25, 0X1728);
    // 0x8000F1A4: ori         $t8, $t8, 0x40
    ctx->r24 = ctx->r24 | 0X40;
    // 0x8000F1A8: lui         $t0, 0x8013
    ctx->r8 = S32(0X8013 << 16);
    // 0x8000F1AC: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8000F1B0: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x8000F1B4: lw          $t0, 0x4590($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X4590);
    // 0x8000F1B8: lui         $t6, 0x800A
    ctx->r14 = S32(0X800A << 16);
    // 0x8000F1BC: beq         $t0, $zero, L_8000F1E8
    if (ctx->r8 == 0) {
        // 0x8000F1C0: lui         $t5, 0x600
        ctx->r13 = S32(0X600 << 16);
            goto L_8000F1E8;
    }
    // 0x8000F1C0: lui         $t5, 0x600
    ctx->r13 = S32(0X600 << 16);
    // 0x8000F1C4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8000F1C8: lui         $t2, 0x100
    ctx->r10 = S32(0X100 << 16);
    // 0x8000F1CC: addiu       $t1, $v0, 0x8
    ctx->r9 = ADD32(ctx->r2, 0X8);
    // 0x8000F1D0: sw          $t1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r9;
    // 0x8000F1D4: lui         $t3, 0x13
    ctx->r11 = S32(0X13 << 16);
    // 0x8000F1D8: addiu       $t3, $t3, 0x1768
    ctx->r11 = ADD32(ctx->r11, 0X1768);
    // 0x8000F1DC: ori         $t2, $t2, 0x40
    ctx->r10 = ctx->r10 | 0X40;
    // 0x8000F1E0: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    // 0x8000F1E4: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
L_8000F1E8:
    // 0x8000F1E8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8000F1EC: addiu       $t6, $t6, -0x3748
    ctx->r14 = ADD32(ctx->r14, -0X3748);
    // 0x8000F1F0: addiu       $t4, $v0, 0x8
    ctx->r12 = ADD32(ctx->r2, 0X8);
    // 0x8000F1F4: sw          $t4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r12;
    // 0x8000F1F8: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x8000F1FC: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x8000F200: lw          $a1, 0x0($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X0);
    // 0x8000F204: lui         $t8, 0xFB00
    ctx->r24 = S32(0XFB00 << 16);
    // 0x8000F208: addiu       $t7, $a1, 0x8
    ctx->r15 = ADD32(ctx->r5, 0X8);
    // 0x8000F20C: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x8000F210: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x8000F214: lw          $t9, 0x0($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X0);
    // 0x8000F218: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x8000F21C: addu        $t0, $t9, $a3
    ctx->r8 = ADD32(ctx->r25, ctx->r7);
    // 0x8000F220: lbu         $t1, 0x9A2($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X9A2);
    // 0x8000F224: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x8000F228: bne         $t1, $at, L_8000F238
    if (ctx->r9 != ctx->r1) {
        // 0x8000F22C: nop
    
            goto L_8000F238;
    }
    // 0x8000F22C: nop

    // 0x8000F230: b           L_8000F238
    // 0x8000F234: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
        goto L_8000F238;
    // 0x8000F234: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
L_8000F238:
    // 0x8000F238: andi        $t2, $v0, 0xFF
    ctx->r10 = ctx->r2 & 0XFF;
    // 0x8000F23C: jal         0x8000F74C
    // 0x8000F240: sw          $t2, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r10;
    func_8000F74C(rdram, ctx);
        goto after_2;
    // 0x8000F240: sw          $t2, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r10;
    after_2:
    // 0x8000F244: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8000F248: addiu       $a0, $a0, -0x2F94
    ctx->r4 = ADD32(ctx->r4, -0X2F94);
    // 0x8000F24C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8000F250: lui         $t4, 0xBD00
    ctx->r12 = S32(0XBD00 << 16);
    // 0x8000F254: addiu       $t3, $v0, 0x8
    ctx->r11 = ADD32(ctx->r2, 0X8);
    // 0x8000F258: sw          $t3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r11;
    // 0x8000F25C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8000F260: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
L_8000F264:
    // 0x8000F264: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8000F268:
    // 0x8000F268: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8000F26C: jr          $ra
    // 0x8000F270: nop

    return;
    // 0x8000F270: nop

;}
RECOMP_FUNC void func_8000F274(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000F274: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8000F278: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000F27C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8000F280: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8000F284: lwc1        $f18, 0x18($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X18);
    // 0x8000F288: lwc1        $f0, 0x14($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X14);
    // 0x8000F28C: c.eq.s      $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.fl == ctx->f2.fl;
    // 0x8000F290: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x8000F294: bc1t        L_8000F4C0
    if (c1cs) {
        // 0x8000F298: or          $a1, $a3, $zero
        ctx->r5 = ctx->r7 | 0;
            goto L_8000F4C0;
    }
    // 0x8000F298: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x8000F29C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8000F2A0: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x8000F2A4: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x8000F2A8: nop

    // 0x8000F2AC: bc1t        L_8000F4C4
    if (c1cs) {
        // 0x8000F2B0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8000F4C4;
    }
    // 0x8000F2B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000F2B4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8000F2B8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8000F2BC: c.eq.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl == ctx->f6.fl;
    // 0x8000F2C0: nop

    // 0x8000F2C4: bc1t        L_8000F4C4
    if (c1cs) {
        // 0x8000F2C8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8000F4C4;
    }
    // 0x8000F2C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000F2CC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8000F2D0: nop

    // 0x8000F2D4: c.eq.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl == ctx->f16.fl;
    // 0x8000F2D8: nop

    // 0x8000F2DC: bc1f        L_8000F304
    if (!c1cs) {
        // 0x8000F2E0: nop
    
            goto L_8000F304;
    }
    // 0x8000F2E0: nop

    // 0x8000F2E4: c.le.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl <= ctx->f16.fl;
    // 0x8000F2E8: nop

    // 0x8000F2EC: bc1t        L_8000F4C4
    if (c1cs) {
        // 0x8000F2F0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8000F4C4;
    }
    // 0x8000F2F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000F2F4: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x8000F2F8: nop

    // 0x8000F2FC: bc1t        L_8000F4C4
    if (c1cs) {
        // 0x8000F300: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8000F4C4;
    }
    // 0x8000F300: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8000F304:
    // 0x8000F304: c.le.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl <= ctx->f18.fl;
    // 0x8000F308: nop

    // 0x8000F30C: bc1f        L_8000F334
    if (!c1cs) {
        // 0x8000F310: nop
    
            goto L_8000F334;
    }
    // 0x8000F310: nop

    // 0x8000F314: c.eq.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl == ctx->f16.fl;
    // 0x8000F318: nop

    // 0x8000F31C: bc1t        L_8000F4C4
    if (c1cs) {
        // 0x8000F320: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8000F4C4;
    }
    // 0x8000F320: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000F324: c.eq.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
    // 0x8000F328: nop

    // 0x8000F32C: bc1t        L_8000F4C4
    if (c1cs) {
        // 0x8000F330: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8000F4C4;
    }
    // 0x8000F330: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8000F334:
    // 0x8000F334: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8000F338: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x8000F33C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8000F340: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8000F344: jal         0x80010140
    // 0x8000F348: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    func_80010140(rdram, ctx);
        goto after_0;
    // 0x8000F348: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x8000F34C: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x8000F350: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8000F354: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x8000F358: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8000F35C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8000F360: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x8000F364: lwc1        $f18, 0x1C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8000F368: bc1f        L_8000F374
    if (!c1cs) {
        // 0x8000F36C: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_8000F374;
    }
    // 0x8000F36C: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x8000F370: mov.s       $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    ctx->f2.fl = ctx->f14.fl;
L_8000F374:
    // 0x8000F374: c.lt.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl < ctx->f2.fl;
    // 0x8000F378: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x8000F37C: bc1f        L_8000F388
    if (!c1cs) {
        // 0x8000F380: nop
    
            goto L_8000F388;
    }
    // 0x8000F380: nop

    // 0x8000F384: mov.s       $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = ctx->f16.fl;
L_8000F388:
    // 0x8000F388: sub.s       $f2, $f16, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = ctx->f16.fl - ctx->f2.fl;
    // 0x8000F38C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x8000F390: mul.s       $f8, $f2, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8000F394: lw          $v0, 0x45A0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X45A0);
    // 0x8000F398: mul.s       $f2, $f8, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x8000F39C: blez        $v0, L_8000F3EC
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8000F3A0: nop
    
            goto L_8000F3EC;
    }
    // 0x8000F3A0: nop

    // 0x8000F3A4: lbu         $t6, 0x38DF($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X38DF);
    // 0x8000F3A8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8000F3AC: beq         $t6, $at, L_8000F3E0
    if (ctx->r14 == ctx->r1) {
        // 0x8000F3B0: slti        $at, $v0, 0x2
        ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
            goto L_8000F3E0;
    }
    // 0x8000F3B0: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x8000F3B4: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x8000F3B8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8000F3BC: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8000F3C0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8000F3C4: nop

    // 0x8000F3C8: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8000F3CC: sub.s       $f10, $f16, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f16.fl - ctx->f8.fl;
    // 0x8000F3D0: mul.s       $f2, $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f10.fl);
    // 0x8000F3D4: b           L_8000F3EC
    // 0x8000F3D8: nop

        goto L_8000F3EC;
    // 0x8000F3D8: nop

    // 0x8000F3DC: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
L_8000F3E0:
    // 0x8000F3E0: bne         $at, $zero, L_8000F3EC
    if (ctx->r1 != 0) {
        // 0x8000F3E4: nop
    
            goto L_8000F3EC;
    }
    // 0x8000F3E4: nop

    // 0x8000F3E8: mov.s       $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    ctx->f2.fl = ctx->f14.fl;
L_8000F3EC:
    // 0x8000F3EC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8000F3F0: lwc1        $f4, 0x45AC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X45AC);
    // 0x8000F3F4: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8000F3F8: nop

    // 0x8000F3FC: sub.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x8000F400: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x8000F404: add.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f0.fl;
    // 0x8000F408: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8000F40C: nop

    // 0x8000F410: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x8000F414: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8000F418: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8000F41C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8000F420: cvt.w.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8000F424: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x8000F428: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8000F42C: sh          $t8, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r24;
    // 0x8000F430: lwc1        $f6, 0x45B4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X45B4);
    // 0x8000F434: lwc1        $f12, 0x8($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8000F438: nop

    // 0x8000F43C: sub.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f12.fl;
    // 0x8000F440: mul.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x8000F444: add.s       $f4, $f10, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f12.fl;
    // 0x8000F448: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8000F44C: nop

    // 0x8000F450: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x8000F454: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8000F458: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8000F45C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8000F460: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8000F464: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8000F468: mfc1        $t0, $f6
    ctx->r8 = (int32_t)ctx->f6.u32l;
    // 0x8000F46C: c.lt.s      $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f14.fl < ctx->f18.fl;
    // 0x8000F470: sh          $t0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r8;
    // 0x8000F474: bc1f        L_8000F4C4
    if (!c1cs) {
        // 0x8000F478: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8000F4C4;
    }
    // 0x8000F478: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000F47C: lwc1        $f0, 0x4($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X4);
    // 0x8000F480: lwc1        $f8, 0x45B0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X45B0);
    // 0x8000F484: nop

    // 0x8000F488: sub.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x8000F48C: mul.s       $f4, $f10, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x8000F490: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x8000F494: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x8000F498: nop

    // 0x8000F49C: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x8000F4A0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8000F4A4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8000F4A8: nop

    // 0x8000F4AC: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8000F4B0: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
    // 0x8000F4B4: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x8000F4B8: sh          $t2, 0x2($a1)
    MEM_H(0X2, ctx->r5) = ctx->r10;
    // 0x8000F4BC: nop

L_8000F4C0:
    // 0x8000F4C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8000F4C4:
    // 0x8000F4C4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8000F4C8: jr          $ra
    // 0x8000F4CC: nop

    return;
    // 0x8000F4CC: nop

;}
RECOMP_FUNC void func_8000F4D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000F4D0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8000F4D4: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x8000F4D8: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x8000F4DC: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8000F4E0: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x8000F4E4: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8000F4E8: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x8000F4EC: lui         $s7, 0x803F
    ctx->r23 = S32(0X803F << 16);
    // 0x8000F4F0: mov.s       $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    ctx->f20.fl = ctx->f12.fl;
    // 0x8000F4F4: mov.s       $f22, $f14
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 14);
    ctx->f22.fl = ctx->f14.fl;
    // 0x8000F4F8: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x8000F4FC: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x8000F500: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x8000F504: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x8000F508: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x8000F50C: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8000F510: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8000F514: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8000F518: addiu       $s7, $s7, -0x2300
    ctx->r23 = ADD32(ctx->r23, -0X2300);
    // 0x8000F51C: or          $fp, $zero, $zero
    ctx->r30 = 0 | 0;
L_8000F520:
    // 0x8000F520: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8000F524: lw          $t6, 0x8($s7)
    ctx->r14 = MEM_W(ctx->r23, 0X8);
    // 0x8000F528: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x8000F52C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8000F530: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8000F534: lwc1        $f4, 0x0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X0);
    // 0x8000F538: lw          $t8, 0xC($s7)
    ctx->r24 = MEM_W(ctx->r23, 0XC);
    // 0x8000F53C: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8000F540: lwc1        $f8, 0x0($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X0);
    // 0x8000F544: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8000F548: lw          $s1, 0x0($s7)
    ctx->r17 = MEM_W(ctx->r23, 0X0);
    // 0x8000F54C: lw          $s2, 0x4($s7)
    ctx->r18 = MEM_W(ctx->r23, 0X4);
    // 0x8000F550: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8000F554: mfc1        $s5, $f6
    ctx->r21 = (int32_t)ctx->f6.u32l;
    // 0x8000F558: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x8000F55C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8000F560: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8000F564: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x8000F568: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8000F56C: mfc1        $v0, $f10
    ctx->r2 = (int32_t)ctx->f10.u32l;
    // 0x8000F570: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8000F574: bltz        $v0, L_8000F5BC
    if (SIGNED(ctx->r2) < 0) {
        // 0x8000F578: addiu       $s6, $v0, 0x1
        ctx->r22 = ADD32(ctx->r2, 0X1);
            goto L_8000F5BC;
    }
    // 0x8000F578: addiu       $s6, $v0, 0x1
    ctx->r22 = ADD32(ctx->r2, 0X1);
L_8000F57C:
    // 0x8000F57C: bltz        $s5, L_8000F5B0
    if (SIGNED(ctx->r21) < 0) {
        // 0x8000F580: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_8000F5B0;
    }
    // 0x8000F580: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8000F584: addiu       $s3, $s5, 0x1
    ctx->r19 = ADD32(ctx->r21, 0X1);
    // 0x8000F588: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
L_8000F58C:
    // 0x8000F58C: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    // 0x8000F590: addiu       $s2, $s2, 0x10
    ctx->r18 = ADD32(ctx->r18, 0X10);
    // 0x8000F594: addiu       $s1, $s1, 0x1C
    ctx->r17 = ADD32(ctx->r17, 0X1C);
    // 0x8000F598: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x8000F59C: jal         0x8000F274
    // 0x8000F5A0: mov.s       $f14, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    ctx->f14.fl = ctx->f22.fl;
    func_8000F274(rdram, ctx);
        goto after_0;
    // 0x8000F5A0: mov.s       $f14, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    ctx->f14.fl = ctx->f22.fl;
    after_0:
    // 0x8000F5A4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8000F5A8: bne         $s3, $s0, L_8000F58C
    if (ctx->r19 != ctx->r16) {
        // 0x8000F5AC: or          $a2, $s1, $zero
        ctx->r6 = ctx->r17 | 0;
            goto L_8000F58C;
    }
    // 0x8000F5AC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
L_8000F5B0:
    // 0x8000F5B0: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x8000F5B4: bne         $s6, $s4, L_8000F57C
    if (ctx->r22 != ctx->r20) {
        // 0x8000F5B8: nop
    
            goto L_8000F57C;
    }
    // 0x8000F5B8: nop

L_8000F5BC:
    // 0x8000F5BC: addiu       $fp, $fp, 0x1
    ctx->r30 = ADD32(ctx->r30, 0X1);
    // 0x8000F5C0: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8000F5C4: bne         $fp, $at, L_8000F520
    if (ctx->r30 != ctx->r1) {
        // 0x8000F5C8: addiu       $s7, $s7, 0x14
        ctx->r23 = ADD32(ctx->r23, 0X14);
            goto L_8000F520;
    }
    // 0x8000F5C8: addiu       $s7, $s7, 0x14
    ctx->r23 = ADD32(ctx->r23, 0X14);
    // 0x8000F5CC: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x8000F5D0: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8000F5D4: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8000F5D8: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x8000F5DC: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8000F5E0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8000F5E4: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8000F5E8: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x8000F5EC: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x8000F5F0: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x8000F5F4: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x8000F5F8: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x8000F5FC: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x8000F600: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x8000F604: jr          $ra
    // 0x8000F608: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x8000F608: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_8000F60C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000F60C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8000F610: lwc1        $f12, 0x45A4($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X45A4);
    // 0x8000F614: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000F618: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8000F61C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000F620: lwc1        $f14, 0x45A8($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X45A8);
    // 0x8000F624: jal         0x8000F4D0
    // 0x8000F628: nop

    func_8000F4D0(rdram, ctx);
        goto after_0;
    // 0x8000F628: nop

    after_0:
    // 0x8000F62C: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x8000F630: addiu       $v1, $v1, -0x2F94
    ctx->r3 = ADD32(ctx->r3, -0X2F94);
    // 0x8000F634: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8000F638: lui         $a3, 0xBC00
    ctx->r7 = S32(0XBC00 << 16);
    // 0x8000F63C: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8000F640: ori         $a3, $a3, 0x2006
    ctx->r7 = ctx->r7 | 0X2006;
    // 0x8000F644: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8000F648: lui         $t7, 0x803F
    ctx->r15 = S32(0X803F << 16);
    // 0x8000F64C: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    // 0x8000F650: lw          $t7, -0x22FC($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X22FC);
    // 0x8000F654: lui         $t0, 0x600
    ctx->r8 = S32(0X600 << 16);
    // 0x8000F658: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x8000F65C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8000F660: lui         $t9, 0x803F
    ctx->r25 = S32(0X803F << 16);
    // 0x8000F664: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8000F668: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8000F66C: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x8000F670: lw          $t9, -0x22F0($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X22F0);
    // 0x8000F674: lui         $a2, 0x803F
    ctx->r6 = S32(0X803F << 16);
    // 0x8000F678: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x8000F67C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8000F680: addiu       $a2, $a2, -0x22EC
    ctx->r6 = ADD32(ctx->r6, -0X22EC);
    // 0x8000F684: addiu       $t2, $v0, 0x8
    ctx->r10 = ADD32(ctx->r2, 0X8);
    // 0x8000F688: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
    // 0x8000F68C: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    // 0x8000F690: lw          $t3, 0x4($a2)
    ctx->r11 = MEM_W(ctx->r6, 0X4);
    // 0x8000F694: addiu       $a2, $a2, 0x28
    ctx->r6 = ADD32(ctx->r6, 0X28);
    // 0x8000F698: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
    // 0x8000F69C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8000F6A0: nop

    // 0x8000F6A4: addiu       $t4, $v0, 0x8
    ctx->r12 = ADD32(ctx->r2, 0X8);
    // 0x8000F6A8: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x8000F6AC: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x8000F6B0: lw          $t5, -0x18($a2)
    ctx->r13 = MEM_W(ctx->r6, -0X18);
    // 0x8000F6B4: nop

    // 0x8000F6B8: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
    // 0x8000F6BC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8000F6C0: nop

    // 0x8000F6C4: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8000F6C8: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8000F6CC: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    // 0x8000F6D0: lw          $t7, -0x10($a2)
    ctx->r15 = MEM_W(ctx->r6, -0X10);
    // 0x8000F6D4: nop

    // 0x8000F6D8: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x8000F6DC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8000F6E0: nop

    // 0x8000F6E4: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8000F6E8: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8000F6EC: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x8000F6F0: lw          $t9, -0x4($a2)
    ctx->r25 = MEM_W(ctx->r6, -0X4);
    // 0x8000F6F4: nop

    // 0x8000F6F8: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x8000F6FC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8000F700: nop

    // 0x8000F704: addiu       $t2, $v0, 0x8
    ctx->r10 = ADD32(ctx->r2, 0X8);
    // 0x8000F708: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
    // 0x8000F70C: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    // 0x8000F710: lw          $t3, 0x4($a2)
    ctx->r11 = MEM_W(ctx->r6, 0X4);
    // 0x8000F714: nop

    // 0x8000F718: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
    // 0x8000F71C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8000F720: nop

    // 0x8000F724: addiu       $t4, $v0, 0x8
    ctx->r12 = ADD32(ctx->r2, 0X8);
    // 0x8000F728: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x8000F72C: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x8000F730: lw          $t5, 0x10($a2)
    ctx->r13 = MEM_W(ctx->r6, 0X10);
    // 0x8000F734: nop

    // 0x8000F738: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
    // 0x8000F73C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000F740: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8000F744: jr          $ra
    // 0x8000F748: nop

    return;
    // 0x8000F748: nop

;}
RECOMP_FUNC void func_8000F74C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000F74C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8000F750: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000F754: jal         0x8000F980
    // 0x8000F758: nop

    func_8000F980(rdram, ctx);
        goto after_0;
    // 0x8000F758: nop

    after_0:
    // 0x8000F75C: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x8000F760: lw          $t6, 0x45B8($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X45B8);
    // 0x8000F764: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x8000F768: beq         $t6, $zero, L_8000F814
    if (ctx->r14 == 0) {
        // 0x8000F76C: nop
    
            goto L_8000F814;
    }
    // 0x8000F76C: nop

    // 0x8000F770: jal         0x8000FF38
    // 0x8000F774: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    func_8000FF38(rdram, ctx);
        goto after_1;
    // 0x8000F774: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_1:
    // 0x8000F778: lwc1        $f0, 0x2C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8000F77C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8000F780: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8000F784: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x8000F788: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8000F78C: bc1f        L_8000F814
    if (!c1cs) {
        // 0x8000F790: nop
    
            goto L_8000F814;
    }
    // 0x8000F790: nop

    // 0x8000F794: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8000F798: swc1        $f0, 0x45A4($at)
    MEM_W(0X45A4, ctx->r1) = ctx->f0.u32l;
    // 0x8000F79C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8000F7A0: swc1        $f6, 0x45A8($at)
    MEM_W(0X45A8, ctx->r1) = ctx->f6.u32l;
    // 0x8000F7A4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8000F7A8: lwc1        $f8, 0x4594($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4594);
    // 0x8000F7AC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8000F7B0: swc1        $f8, 0x45AC($at)
    MEM_W(0X45AC, ctx->r1) = ctx->f8.u32l;
    // 0x8000F7B4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8000F7B8: lwc1        $f10, 0x4598($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X4598);
    // 0x8000F7BC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8000F7C0: swc1        $f10, 0x45B0($at)
    MEM_W(0X45B0, ctx->r1) = ctx->f10.u32l;
    // 0x8000F7C4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8000F7C8: lwc1        $f16, 0x459C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X459C);
    // 0x8000F7CC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8000F7D0: swc1        $f16, 0x45B4($at)
    MEM_W(0X45B4, ctx->r1) = ctx->f16.u32l;
    // 0x8000F7D4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x8000F7D8: sw          $zero, -0x311C($at)
    MEM_W(-0X311C, ctx->r1) = 0;
    // 0x8000F7DC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8000F7E0: jal         0x8000F60C
    // 0x8000F7E4: sw          $t7, 0x45A0($at)
    MEM_W(0X45A0, ctx->r1) = ctx->r15;
    func_8000F60C(rdram, ctx);
        goto after_2;
    // 0x8000F7E4: sw          $t7, 0x45A0($at)
    MEM_W(0X45A0, ctx->r1) = ctx->r15;
    after_2:
    // 0x8000F7E8: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8000F7EC: addiu       $a1, $a1, -0x2F94
    ctx->r5 = ADD32(ctx->r5, -0X2F94);
    // 0x8000F7F0: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x8000F7F4: lui         $t9, 0x800A
    ctx->r25 = S32(0X800A << 16);
    // 0x8000F7F8: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8000F7FC: lui         $a2, 0x600
    ctx->r6 = S32(0X600 << 16);
    // 0x8000F800: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x8000F804: addiu       $t9, $t9, -0x3530
    ctx->r25 = ADD32(ctx->r25, -0X3530);
    // 0x8000F808: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x8000F80C: b           L_8000F89C
    // 0x8000F810: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
        goto L_8000F89C;
    // 0x8000F810: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
L_8000F814:
    // 0x8000F814: jal         0x8000F8AC
    // 0x8000F818: nop

    func_8000F8AC(rdram, ctx);
        goto after_3;
    // 0x8000F818: nop

    after_3:
    // 0x8000F81C: beq         $v0, $zero, L_8000F858
    if (ctx->r2 == 0) {
        // 0x8000F820: nop
    
            goto L_8000F858;
    }
    // 0x8000F820: nop

    // 0x8000F824: jal         0x8000F60C
    // 0x8000F828: nop

    func_8000F60C(rdram, ctx);
        goto after_4;
    // 0x8000F828: nop

    after_4:
    // 0x8000F82C: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8000F830: addiu       $a1, $a1, -0x2F94
    ctx->r5 = ADD32(ctx->r5, -0X2F94);
    // 0x8000F834: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x8000F838: lui         $t1, 0x800A
    ctx->r9 = S32(0X800A << 16);
    // 0x8000F83C: addiu       $t0, $v0, 0x8
    ctx->r8 = ADD32(ctx->r2, 0X8);
    // 0x8000F840: lui         $a2, 0x600
    ctx->r6 = S32(0X600 << 16);
    // 0x8000F844: sw          $t0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r8;
    // 0x8000F848: addiu       $t1, $t1, -0x3530
    ctx->r9 = ADD32(ctx->r9, -0X3530);
    // 0x8000F84C: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x8000F850: b           L_8000F89C
    // 0x8000F854: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
        goto L_8000F89C;
    // 0x8000F854: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
L_8000F858:
    // 0x8000F858: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8000F85C: addiu       $a1, $a1, -0x2F94
    ctx->r5 = ADD32(ctx->r5, -0X2F94);
    // 0x8000F860: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x8000F864: lui         $t3, 0x800A
    ctx->r11 = S32(0X800A << 16);
    // 0x8000F868: addiu       $t2, $v0, 0x8
    ctx->r10 = ADD32(ctx->r2, 0X8);
    // 0x8000F86C: sw          $t2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r10;
    // 0x8000F870: lui         $a2, 0x600
    ctx->r6 = S32(0X600 << 16);
    // 0x8000F874: addiu       $t3, $t3, -0x3560
    ctx->r11 = ADD32(ctx->r11, -0X3560);
    // 0x8000F878: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
    // 0x8000F87C: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
    // 0x8000F880: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x8000F884: lui         $t5, 0x800A
    ctx->r13 = S32(0X800A << 16);
    // 0x8000F888: addiu       $t4, $v0, 0x8
    ctx->r12 = ADD32(ctx->r2, 0X8);
    // 0x8000F88C: sw          $t4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r12;
    // 0x8000F890: addiu       $t5, $t5, -0x3530
    ctx->r13 = ADD32(ctx->r13, -0X3530);
    // 0x8000F894: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
    // 0x8000F898: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
L_8000F89C:
    // 0x8000F89C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000F8A0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8000F8A4: jr          $ra
    // 0x8000F8A8: nop

    return;
    // 0x8000F8A8: nop

;}
RECOMP_FUNC void func_8000F8AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000F8AC: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x8000F8B0: addiu       $v0, $v0, -0x311C
    ctx->r2 = ADD32(ctx->r2, -0X311C);
    // 0x8000F8B4: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x8000F8B8: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x8000F8BC: beq         $t6, $zero, L_8000F8F4
    if (ctx->r14 == 0) {
        // 0x8000F8C0: addiu       $v1, $v1, 0x45A0
        ctx->r3 = ADD32(ctx->r3, 0X45A0);
            goto L_8000F8F4;
    }
    // 0x8000F8C0: addiu       $v1, $v1, 0x45A0
    ctx->r3 = ADD32(ctx->r3, 0X45A0);
    // 0x8000F8C4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8000F8C8: nop

    // 0x8000F8CC: bne         $v0, $zero, L_8000F8DC
    if (ctx->r2 != 0) {
        // 0x8000F8D0: addiu       $t7, $v0, 0x1
        ctx->r15 = ADD32(ctx->r2, 0X1);
            goto L_8000F8DC;
    }
    // 0x8000F8D0: addiu       $t7, $v0, 0x1
    ctx->r15 = ADD32(ctx->r2, 0X1);
    // 0x8000F8D4: jr          $ra
    // 0x8000F8D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8000F8D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8000F8DC:
    // 0x8000F8DC: slti        $at, $t7, 0xB
    ctx->r1 = SIGNED(ctx->r15) < 0XB ? 1 : 0;
    // 0x8000F8E0: bne         $at, $zero, L_8000F910
    if (ctx->r1 != 0) {
        // 0x8000F8E4: sw          $t7, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r15;
            goto L_8000F910;
    }
    // 0x8000F8E4: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8000F8E8: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x8000F8EC: jr          $ra
    // 0x8000F8F0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8000F8F0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8000F8F4:
    // 0x8000F8F4: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x8000F8F8: addiu       $v1, $v1, 0x45A0
    ctx->r3 = ADD32(ctx->r3, 0X45A0);
    // 0x8000F8FC: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x8000F900: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8000F904: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x8000F908: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8000F90C: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
L_8000F910:
    // 0x8000F910: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8000F914: jr          $ra
    // 0x8000F918: nop

    return;
    // 0x8000F918: nop

;}
RECOMP_FUNC void func_8000F91C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000F91C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8000F920: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x8000F924: sw          $t6, -0x311C($at)
    MEM_W(-0X311C, ctx->r1) = ctx->r14;
    // 0x8000F928: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8000F92C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x8000F930: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8000F934: addiu       $v0, $v0, 0x45B4
    ctx->r2 = ADD32(ctx->r2, 0X45B4);
    // 0x8000F938: sw          $zero, 0x45A0($at)
    MEM_W(0X45A0, ctx->r1) = 0;
    // 0x8000F93C: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
    // 0x8000F940: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8000F944: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x8000F948: addiu       $v1, $v1, 0x45B0
    ctx->r3 = ADD32(ctx->r3, 0X45B0);
    // 0x8000F94C: swc1        $f6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f6.u32l;
    // 0x8000F950: lwc1        $f8, 0x0($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X0);
    // 0x8000F954: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x8000F958: addiu       $a0, $a0, 0x45AC
    ctx->r4 = ADD32(ctx->r4, 0X45AC);
    // 0x8000F95C: swc1        $f8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f8.u32l;
    // 0x8000F960: lwc1        $f10, 0x0($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8000F964: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x8000F968: addiu       $a1, $a1, 0x45A8
    ctx->r5 = ADD32(ctx->r5, 0X45A8);
    // 0x8000F96C: swc1        $f10, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f10.u32l;
    // 0x8000F970: lwc1        $f16, 0x0($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X0);
    // 0x8000F974: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8000F978: jr          $ra
    // 0x8000F97C: swc1        $f16, 0x45A4($at)
    MEM_W(0X45A4, ctx->r1) = ctx->f16.u32l;
    return;
    // 0x8000F97C: swc1        $f16, 0x45A4($at)
    MEM_W(0X45A4, ctx->r1) = ctx->f16.u32l;
;}
RECOMP_FUNC void func_8000F980(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000F980: lui         $t6, 0x800A
    ctx->r14 = S32(0X800A << 16);
    // 0x8000F984: lw          $t6, -0x3120($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3120);
    // 0x8000F988: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8000F98C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8000F990: bne         $t6, $zero, L_8000FB2C
    if (ctx->r14 != 0) {
        // 0x8000F994: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_8000FB2C;
    }
    // 0x8000F994: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8000F998: lui         $a0, 0x803F
    ctx->r4 = S32(0X803F << 16);
    // 0x8000F99C: addiu       $a0, $a0, -0x2300
    ctx->r4 = ADD32(ctx->r4, -0X2300);
    // 0x8000F9A0: jal         0x80080910
    // 0x8000F9A4: addiu       $a1, $zero, 0x1868
    ctx->r5 = ADD32(0, 0X1868);
    func_80080910(rdram, ctx);
        goto after_0;
    // 0x8000F9A4: addiu       $a1, $zero, 0x1868
    ctx->r5 = ADD32(0, 0X1868);
    after_0:
    // 0x8000F9A8: lui         $t7, 0x803F
    ctx->r15 = S32(0X803F << 16);
    // 0x8000F9AC: addiu       $t7, $t7, -0x19E8
    ctx->r15 = ADD32(ctx->r15, -0X19E8);
    // 0x8000F9B0: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x8000F9B4: sw          $t7, -0x2300($at)
    MEM_W(-0X2300, ctx->r1) = ctx->r15;
    // 0x8000F9B8: lui         $t8, 0x803F
    ctx->r24 = S32(0X803F << 16);
    // 0x8000F9BC: addiu       $t8, $t8, -0x22A8
    ctx->r24 = ADD32(ctx->r24, -0X22A8);
    // 0x8000F9C0: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x8000F9C4: sw          $t8, -0x22FC($at)
    MEM_W(-0X22FC, ctx->r1) = ctx->r24;
    // 0x8000F9C8: lui         $t9, 0x800A
    ctx->r25 = S32(0X800A << 16);
    // 0x8000F9CC: addiu       $t9, $t9, -0x3338
    ctx->r25 = ADD32(ctx->r25, -0X3338);
    // 0x8000F9D0: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x8000F9D4: sw          $t9, -0x22F8($at)
    MEM_W(-0X22F8, ctx->r1) = ctx->r25;
    // 0x8000F9D8: lui         $t0, 0x800A
    ctx->r8 = S32(0X800A << 16);
    // 0x8000F9DC: addiu       $t0, $t0, -0x3310
    ctx->r8 = ADD32(ctx->r8, -0X3310);
    // 0x8000F9E0: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x8000F9E4: sw          $t0, -0x22F4($at)
    MEM_W(-0X22F4, ctx->r1) = ctx->r8;
    // 0x8000F9E8: lui         $t1, 0x800A
    ctx->r9 = S32(0X800A << 16);
    // 0x8000F9EC: addiu       $t1, $t1, -0x3450
    ctx->r9 = ADD32(ctx->r9, -0X3450);
    // 0x8000F9F0: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x8000F9F4: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x8000F9F8: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x8000F9FC: lui         $s0, 0x803F
    ctx->r16 = S32(0X803F << 16);
    // 0x8000FA00: sw          $t1, -0x22F0($at)
    MEM_W(-0X22F0, ctx->r1) = ctx->r9;
    // 0x8000FA04: addiu       $s0, $s0, -0x22EC
    ctx->r16 = ADD32(ctx->r16, -0X22EC);
    // 0x8000FA08: addiu       $a1, $a1, -0x2300
    ctx->r5 = ADD32(ctx->r5, -0X2300);
    // 0x8000FA0C: jal         0x8000FD20
    // 0x8000FA10: addiu       $a0, $a0, -0x32E0
    ctx->r4 = ADD32(ctx->r4, -0X32E0);
    func_8000FD20(rdram, ctx);
        goto after_1;
    // 0x8000FA10: addiu       $a0, $a0, -0x32E0
    ctx->r4 = ADD32(ctx->r4, -0X32E0);
    after_1:
    // 0x8000FA14: lui         $v0, 0x803F
    ctx->r2 = S32(0X803F << 16);
    // 0x8000FA18: lui         $v1, 0x803F
    ctx->r3 = S32(0X803F << 16);
    // 0x8000FA1C: lui         $t2, 0x800A
    ctx->r10 = S32(0X800A << 16);
    // 0x8000FA20: lui         $t3, 0x800A
    ctx->r11 = S32(0X800A << 16);
    // 0x8000FA24: lui         $t4, 0x800A
    ctx->r12 = S32(0X800A << 16);
    // 0x8000FA28: addiu       $v0, $v0, -0x14FC
    ctx->r2 = ADD32(ctx->r2, -0X14FC);
    // 0x8000FA2C: addiu       $v1, $v1, -0x1FD8
    ctx->r3 = ADD32(ctx->r3, -0X1FD8);
    // 0x8000FA30: addiu       $t4, $t4, -0x34E0
    ctx->r12 = ADD32(ctx->r12, -0X34E0);
    // 0x8000FA34: addiu       $t3, $t3, -0x3310
    ctx->r11 = ADD32(ctx->r11, -0X3310);
    // 0x8000FA38: addiu       $t2, $t2, -0x32F8
    ctx->r10 = ADD32(ctx->r10, -0X32F8);
    // 0x8000FA3C: sw          $t2, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r10;
    // 0x8000FA40: sw          $t3, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r11;
    // 0x8000FA44: sw          $t4, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r12;
    // 0x8000FA48: sw          $v1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r3;
    // 0x8000FA4C: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x8000FA50: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x8000FA54: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8000FA58: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
    // 0x8000FA5C: addiu       $a0, $a0, -0x3270
    ctx->r4 = ADD32(ctx->r4, -0X3270);
    // 0x8000FA60: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    // 0x8000FA64: jal         0x8000FD20
    // 0x8000FA68: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    func_8000FD20(rdram, ctx);
        goto after_2;
    // 0x8000FA68: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_2:
    // 0x8000FA6C: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x8000FA70: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x8000FA74: lui         $t5, 0x800A
    ctx->r13 = S32(0X800A << 16);
    // 0x8000FA78: lui         $t6, 0x800A
    ctx->r14 = S32(0X800A << 16);
    // 0x8000FA7C: lui         $t7, 0x800A
    ctx->r15 = S32(0X800A << 16);
    // 0x8000FA80: addiu       $t7, $t7, -0x34E0
    ctx->r15 = ADD32(ctx->r15, -0X34E0);
    // 0x8000FA84: addiu       $t6, $t6, -0x3310
    ctx->r14 = ADD32(ctx->r14, -0X3310);
    // 0x8000FA88: addiu       $t5, $t5, -0x32F8
    ctx->r13 = ADD32(ctx->r13, -0X32F8);
    // 0x8000FA8C: addiu       $v0, $v0, 0x2BC
    ctx->r2 = ADD32(ctx->r2, 0X2BC);
    // 0x8000FA90: addiu       $v1, $v1, 0x190
    ctx->r3 = ADD32(ctx->r3, 0X190);
    // 0x8000FA94: sw          $v1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r3;
    // 0x8000FA98: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x8000FA9C: sw          $t5, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r13;
    // 0x8000FAA0: sw          $t6, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r14;
    // 0x8000FAA4: sw          $t7, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r15;
    // 0x8000FAA8: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x8000FAAC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8000FAB0: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
    // 0x8000FAB4: addiu       $a0, $a0, -0x3200
    ctx->r4 = ADD32(ctx->r4, -0X3200);
    // 0x8000FAB8: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    // 0x8000FABC: jal         0x8000FD20
    // 0x8000FAC0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    func_8000FD20(rdram, ctx);
        goto after_3;
    // 0x8000FAC0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_3:
    // 0x8000FAC4: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x8000FAC8: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x8000FACC: lui         $t8, 0x800A
    ctx->r24 = S32(0X800A << 16);
    // 0x8000FAD0: lui         $t9, 0x800A
    ctx->r25 = S32(0X800A << 16);
    // 0x8000FAD4: lui         $t0, 0x800A
    ctx->r8 = S32(0X800A << 16);
    // 0x8000FAD8: addiu       $t0, $t0, -0x3450
    ctx->r8 = ADD32(ctx->r8, -0X3450);
    // 0x8000FADC: addiu       $t9, $t9, -0x32F8
    ctx->r25 = ADD32(ctx->r25, -0X32F8);
    // 0x8000FAE0: addiu       $t8, $t8, -0x3338
    ctx->r24 = ADD32(ctx->r24, -0X3338);
    // 0x8000FAE4: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x8000FAE8: addiu       $v0, $v0, 0x2BC
    ctx->r2 = ADD32(ctx->r2, 0X2BC);
    // 0x8000FAEC: addiu       $v1, $v1, 0x190
    ctx->r3 = ADD32(ctx->r3, 0X190);
    // 0x8000FAF0: sw          $v1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r3;
    // 0x8000FAF4: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x8000FAF8: sw          $t8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r24;
    // 0x8000FAFC: sw          $t9, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r25;
    // 0x8000FB00: sw          $t0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r8;
    // 0x8000FB04: addiu       $a0, $a0, -0x3190
    ctx->r4 = ADD32(ctx->r4, -0X3190);
    // 0x8000FB08: jal         0x8000FD20
    // 0x8000FB0C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8000FD20(rdram, ctx);
        goto after_4;
    // 0x8000FB0C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_4:
    // 0x8000FB10: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8000FB14: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x8000FB18: sw          $v0, -0x3120($at)
    MEM_W(-0X3120, ctx->r1) = ctx->r2;
    // 0x8000FB1C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x8000FB20: sw          $v0, -0x311C($at)
    MEM_W(-0X311C, ctx->r1) = ctx->r2;
    // 0x8000FB24: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8000FB28: sw          $zero, 0x45A0($at)
    MEM_W(0X45A0, ctx->r1) = 0;
L_8000FB2C:
    // 0x8000FB2C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8000FB30: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8000FB34: jr          $ra
    // 0x8000FB38: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8000FB38: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8000FB3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000FB3C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8000FB40: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8000FB44: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x8000FB48: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8000FB4C: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x8000FB50: sb          $a3, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r7;
    // 0x8000FB54: addiu       $a2, $zero, 0x1C
    ctx->r6 = ADD32(0, 0X1C);
    // 0x8000FB58: jal         0x80081670
    // 0x8000FB5C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_80081670(rdram, ctx);
        goto after_0;
    // 0x8000FB5C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x8000FB60: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8000FB64: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8000FB68: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x8000FB6C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8000FB70: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8000FB74: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8000FB78: lbu         $a3, 0x2F($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X2F);
    // 0x8000FB7C: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8000FB80: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8000FB84: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x8000FB88: nop

    // 0x8000FB8C: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8000FB90: sh          $t8, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r24;
    // 0x8000FB94: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x8000FB98: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8000FB9C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8000FBA0: lwc1        $f8, 0x4($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X4);
    // 0x8000FBA4: nop

    // 0x8000FBA8: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8000FBAC: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8000FBB0: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
    // 0x8000FBB4: nop

    // 0x8000FBB8: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x8000FBBC: sh          $t0, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r8;
    // 0x8000FBC0: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x8000FBC4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8000FBC8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8000FBCC: lwc1        $f16, 0x8($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8000FBD0: nop

    // 0x8000FBD4: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x8000FBD8: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x8000FBDC: mfc1        $t2, $f18
    ctx->r10 = (int32_t)ctx->f18.u32l;
    // 0x8000FBE0: nop

    // 0x8000FBE4: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8000FBE8: sh          $t2, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r10;
    // 0x8000FBEC: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x8000FBF0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8000FBF4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8000FBF8: lwc1        $f4, 0xC($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XC);
    // 0x8000FBFC: nop

    // 0x8000FC00: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8000FC04: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8000FC08: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x8000FC0C: nop

    // 0x8000FC10: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8000FC14: sh          $t4, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r12;
    // 0x8000FC18: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x8000FC1C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8000FC20: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8000FC24: lwc1        $f8, 0x10($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X10);
    // 0x8000FC28: sb          $a3, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r7;
    // 0x8000FC2C: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8000FC30: sb          $a3, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r7;
    // 0x8000FC34: mfc1        $t6, $f10
    ctx->r14 = (int32_t)ctx->f10.u32l;
    // 0x8000FC38: sb          $a3, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r7;
    // 0x8000FC3C: sb          $a3, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r7;
    // 0x8000FC40: sh          $t6, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r14;
    // 0x8000FC44: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8000FC48: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8000FC4C: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8000FC50: jr          $ra
    // 0x8000FC54: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8000FC54: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8000FC58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000FC58: lwc1        $f0, 0x0($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X0);
    // 0x8000FC5C: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x8000FC60: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x8000FC64: sub.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x8000FC68: mul.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x8000FC6C: add.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f0.fl;
    // 0x8000FC70: swc1        $f10, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f10.u32l;
    // 0x8000FC74: lwc1        $f18, 0x4($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X4);
    // 0x8000FC78: lwc1        $f2, 0x4($a2)
    ctx->f2.u32l = MEM_W(ctx->r6, 0X4);
    // 0x8000FC7C: nop

    // 0x8000FC80: sub.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f2.fl;
    // 0x8000FC84: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x8000FC88: add.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f2.fl;
    // 0x8000FC8C: swc1        $f8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f8.u32l;
    // 0x8000FC90: lwc1        $f10, 0x8($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X8);
    // 0x8000FC94: lwc1        $f14, 0x8($a2)
    ctx->f14.u32l = MEM_W(ctx->r6, 0X8);
    // 0x8000FC98: nop

    // 0x8000FC9C: sub.s       $f18, $f10, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f14.fl;
    // 0x8000FCA0: mul.s       $f4, $f18, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f12.fl);
    // 0x8000FCA4: add.s       $f6, $f4, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f14.fl;
    // 0x8000FCA8: swc1        $f6, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f6.u32l;
    // 0x8000FCAC: lwc1        $f8, 0xC($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0XC);
    // 0x8000FCB0: lwc1        $f16, 0xC($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0XC);
    // 0x8000FCB4: nop

    // 0x8000FCB8: sub.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f16.fl;
    // 0x8000FCBC: mul.s       $f18, $f10, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x8000FCC0: add.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x8000FCC4: swc1        $f4, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f4.u32l;
    // 0x8000FCC8: lwc1        $f6, 0x10($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X10);
    // 0x8000FCCC: lwc1        $f0, 0x10($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X10);
    // 0x8000FCD0: nop

    // 0x8000FCD4: sub.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x8000FCD8: mul.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x8000FCDC: add.s       $f18, $f10, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f0.fl;
    // 0x8000FCE0: swc1        $f18, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f18.u32l;
    // 0x8000FCE4: lwc1        $f4, 0x14($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X14);
    // 0x8000FCE8: lwc1        $f2, 0x14($a2)
    ctx->f2.u32l = MEM_W(ctx->r6, 0X14);
    // 0x8000FCEC: nop

    // 0x8000FCF0: sub.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f2.fl;
    // 0x8000FCF4: mul.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x8000FCF8: add.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f2.fl;
    // 0x8000FCFC: swc1        $f10, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f10.u32l;
    // 0x8000FD00: lwc1        $f18, 0x18($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X18);
    // 0x8000FD04: lwc1        $f14, 0x18($a2)
    ctx->f14.u32l = MEM_W(ctx->r6, 0X18);
    // 0x8000FD08: nop

    // 0x8000FD0C: sub.s       $f4, $f18, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f14.fl;
    // 0x8000FD10: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x8000FD14: add.s       $f8, $f6, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f14.fl;
    // 0x8000FD18: jr          $ra
    // 0x8000FD1C: swc1        $f8, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f8.u32l;
    return;
    // 0x8000FD1C: swc1        $f8, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_8000FD20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000FD20: addiu       $sp, $sp, -0xD8
    ctx->r29 = ADD32(ctx->r29, -0XD8);
    // 0x8000FD24: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8000FD28: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8000FD2C: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x8000FD30: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x8000FD34: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8000FD38: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8000FD3C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8000FD40: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8000FD44: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8000FD48: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8000FD4C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8000FD50: lw          $v1, 0x8($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X8);
    // 0x8000FD54: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x8000FD58: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8000FD5C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8000FD60: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x8000FD64: lw          $v0, 0xC($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XC);
    // 0x8000FD68: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8000FD6C: lw          $s2, 0x0($a1)
    ctx->r18 = MEM_W(ctx->r5, 0X0);
    // 0x8000FD70: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8000FD74: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x8000FD78: lw          $s3, 0x4($a1)
    ctx->r19 = MEM_W(ctx->r5, 0X4);
    // 0x8000FD7C: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8000FD80: sw          $t7, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r15;
    // 0x8000FD84: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x8000FD88: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8000FD8C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8000FD90: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8000FD94: addiu       $a2, $a0, 0x38
    ctx->r6 = ADD32(ctx->r4, 0X38);
    // 0x8000FD98: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8000FD9C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8000FDA0: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x8000FDA4: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8000FDA8: bltz        $a3, L_8000FE84
    if (SIGNED(ctx->r7) < 0) {
        // 0x8000FDAC: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_8000FE84;
    }
    // 0x8000FDAC: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8000FDB0: sll         $t1, $a3, 2
    ctx->r9 = S32(ctx->r7 << 2);
    // 0x8000FDB4: addiu       $t2, $t1, 0x4
    ctx->r10 = ADD32(ctx->r9, 0X4);
    // 0x8000FDB8: addiu       $t9, $a0, 0x1C
    ctx->r25 = ADD32(ctx->r4, 0X1C);
    // 0x8000FDBC: addiu       $t0, $a0, 0x54
    ctx->r8 = ADD32(ctx->r4, 0X54);
    // 0x8000FDC0: sw          $t0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r8;
    // 0x8000FDC4: sw          $t9, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r25;
    // 0x8000FDC8: sw          $t2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r10;
    // 0x8000FDCC: sw          $zero, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = 0;
    // 0x8000FDD0: or          $fp, $v0, $zero
    ctx->r30 = ctx->r2 | 0;
    // 0x8000FDD4: sw          $v1, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r3;
    // 0x8000FDD8: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x8000FDDC: sw          $a0, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r4;
    // 0x8000FDE0: addiu       $s7, $sp, 0x80
    ctx->r23 = ADD32(ctx->r29, 0X80);
    // 0x8000FDE4: addiu       $s6, $sp, 0x9C
    ctx->r22 = ADD32(ctx->r29, 0X9C);
    // 0x8000FDE8: addiu       $s4, $sp, 0x64
    ctx->r20 = ADD32(ctx->r29, 0X64);
L_8000FDEC:
    // 0x8000FDEC: lw          $a2, 0x60($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X60);
    // 0x8000FDF0: lw          $a1, 0xD8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XD8);
    // 0x8000FDF4: lw          $a3, 0x0($fp)
    ctx->r7 = MEM_W(ctx->r30, 0X0);
    // 0x8000FDF8: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x8000FDFC: jal         0x8000FC58
    // 0x8000FE00: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    func_8000FC58(rdram, ctx);
        goto after_0;
    // 0x8000FE00: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    after_0:
    // 0x8000FE04: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    // 0x8000FE08: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x8000FE0C: lw          $a3, 0x0($fp)
    ctx->r7 = MEM_W(ctx->r30, 0X0);
    // 0x8000FE10: jal         0x8000FC58
    // 0x8000FE14: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    func_8000FC58(rdram, ctx);
        goto after_1;
    // 0x8000FE14: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    after_1:
    // 0x8000FE18: lw          $t3, 0xC4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XC4);
    // 0x8000FE1C: lw          $s1, 0xCC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XCC);
    // 0x8000FE20: bltz        $t3, L_8000FE6C
    if (SIGNED(ctx->r11) < 0) {
        // 0x8000FE24: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_8000FE6C;
    }
    // 0x8000FE24: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8000FE28: sll         $s5, $t3, 2
    ctx->r21 = S32(ctx->r11 << 2);
    // 0x8000FE2C: addiu       $s5, $s5, 0x4
    ctx->r21 = ADD32(ctx->r21, 0X4);
L_8000FE30:
    // 0x8000FE30: lw          $a3, 0x0($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X0);
    // 0x8000FE34: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8000FE38: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x8000FE3C: jal         0x8000FC58
    // 0x8000FE40: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    func_8000FC58(rdram, ctx);
        goto after_2;
    // 0x8000FE40: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    after_2:
    // 0x8000FE44: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x8000FE48: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x8000FE4C: addiu       $s3, $s3, 0x10
    ctx->r19 = ADD32(ctx->r19, 0X10);
    // 0x8000FE50: addiu       $s2, $s2, 0x1C
    ctx->r18 = ADD32(ctx->r18, 0X1C);
    // 0x8000FE54: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8000FE58: jal         0x8000FB3C
    // 0x8000FE5C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_8000FB3C(rdram, ctx);
        goto after_3;
    // 0x8000FE5C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_3:
    // 0x8000FE60: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8000FE64: bne         $s5, $s0, L_8000FE30
    if (ctx->r21 != ctx->r16) {
        // 0x8000FE68: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_8000FE30;
    }
    // 0x8000FE68: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_8000FE6C:
    // 0x8000FE6C: lw          $v0, 0x5C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X5C);
    // 0x8000FE70: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x8000FE74: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8000FE78: sw          $v0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r2;
    // 0x8000FE7C: bne         $t4, $v0, L_8000FDEC
    if (ctx->r12 != ctx->r2) {
        // 0x8000FE80: addiu       $fp, $fp, 0x4
        ctx->r30 = ADD32(ctx->r30, 0X4);
            goto L_8000FDEC;
    }
    // 0x8000FE80: addiu       $fp, $fp, 0x4
    ctx->r30 = ADD32(ctx->r30, 0X4);
L_8000FE84:
    // 0x8000FE84: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8000FE88: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8000FE8C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8000FE90: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8000FE94: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8000FE98: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8000FE9C: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8000FEA0: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8000FEA4: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8000FEA8: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x8000FEAC: jr          $ra
    // 0x8000FEB0: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
    return;
    // 0x8000FEB0: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
;}
RECOMP_FUNC void func_8000FEB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000FEB4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8000FEB8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8000FEBC: lwc1        $f4, 0x0($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X0);
    // 0x8000FEC0: add.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl + ctx->f2.fl;
    // 0x8000FEC4: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x8000FEC8: nop

    // 0x8000FECC: bc1f        L_8000FED8
    if (!c1cs) {
        // 0x8000FED0: nop
    
            goto L_8000FED8;
    }
    // 0x8000FED0: nop

    // 0x8000FED4: swc1        $f0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f0.u32l;
L_8000FED8:
    // 0x8000FED8: add.s       $f0, $f14, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f14.fl + ctx->f2.fl;
    // 0x8000FEDC: lwc1        $f6, 0x0($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X0);
    // 0x8000FEE0: nop

    // 0x8000FEE4: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x8000FEE8: nop

    // 0x8000FEEC: bc1f        L_8000FEF8
    if (!c1cs) {
        // 0x8000FEF0: nop
    
            goto L_8000FEF8;
    }
    // 0x8000FEF0: nop

    // 0x8000FEF4: swc1        $f0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f0.u32l;
L_8000FEF8:
    // 0x8000FEF8: lwc1        $f8, 0x0($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X0);
    // 0x8000FEFC: nop

    // 0x8000FF00: c.lt.s      $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f8.fl < ctx->f12.fl;
    // 0x8000FF04: nop

    // 0x8000FF08: bc1f        L_8000FF14
    if (!c1cs) {
        // 0x8000FF0C: nop
    
            goto L_8000FF14;
    }
    // 0x8000FF0C: nop

    // 0x8000FF10: swc1        $f12, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f12.u32l;
L_8000FF14:
    // 0x8000FF14: lwc1        $f10, 0x0($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X0);
    // 0x8000FF18: nop

    // 0x8000FF1C: c.lt.s      $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f10.fl < ctx->f14.fl;
    // 0x8000FF20: nop

    // 0x8000FF24: bc1f        L_8000FF30
    if (!c1cs) {
        // 0x8000FF28: nop
    
            goto L_8000FF30;
    }
    // 0x8000FF28: nop

    // 0x8000FF2C: swc1        $f14, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f14.u32l;
L_8000FF30:
    // 0x8000FF30: jr          $ra
    // 0x8000FF34: nop

    return;
    // 0x8000FF34: nop

;}
RECOMP_FUNC void func_8000FF38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000FF38: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x8000FF3C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8000FF40: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8000FF44: lwc1        $f4, 0x4594($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4594);
    // 0x8000FF48: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8000FF4C: lwc1        $f6, 0x35B0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X35B0);
    // 0x8000FF50: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8000FF54: lwc1        $f8, 0x4598($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4598);
    // 0x8000FF58: lui         $at, 0x4381
    ctx->r1 = S32(0X4381 << 16);
    // 0x8000FF5C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8000FF60: div.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8000FF64: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8000FF68: lwc1        $f18, 0x459C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X459C);
    // 0x8000FF6C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8000FF70: lwc1        $f4, 0x35B4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X35B4);
    // 0x8000FF74: lui         $at, 0xC29A
    ctx->r1 = S32(0XC29A << 16);
    // 0x8000FF78: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x8000FF7C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000FF80: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000FF84: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8000FF88: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x8000FF8C: div.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    // 0x8000FF90: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8000FF94: lui         $at, 0x4333
    ctx->r1 = S32(0X4333 << 16);
    // 0x8000FF98: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8000FF9C: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x8000FFA0: lui         $at, 0xC000
    ctx->r1 = S32(0XC000 << 16);
    // 0x8000FFA4: mul.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x8000FFA8: add.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x8000FFAC: bc1f        L_8000FFE8
    if (!c1cs) {
        // 0x8000FFB0: div.s       $f16, $f6, $f4
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = DIV_S(ctx->f6.fl, ctx->f4.fl);
            goto L_8000FFE8;
    }
    // 0x8000FFB0: div.s       $f16, $f6, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = DIV_S(ctx->f6.fl, ctx->f4.fl);
    // 0x8000FFB4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8000FFB8: nop

    // 0x8000FFBC: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x8000FFC0: nop

    // 0x8000FFC4: bc1f        L_8000FFEC
    if (!c1cs) {
        // 0x8000FFC8: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_8000FFEC;
    }
    // 0x8000FFC8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8000FFCC: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x8000FFD0: swc1        $f16, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f16.u32l;
    // 0x8000FFD4: swc1        $f2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f2.u32l;
    // 0x8000FFD8: jal         0x8000FEB4
    // 0x8000FFDC: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    func_8000FEB4(rdram, ctx);
        goto after_0;
    // 0x8000FFDC: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    after_0:
    // 0x8000FFE0: b           L_80010134
    // 0x8000FFE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80010134;
    // 0x8000FFE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8000FFE8:
    // 0x8000FFE8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_8000FFEC:
    // 0x8000FFEC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8000FFF0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8000FFF4: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x8000FFF8: nop

    // 0x8000FFFC: bc1f        L_80010050
    if (!c1cs) {
        // 0x80010000: nop
    
            goto L_80010050;
    }
    // 0x80010000: nop

    // 0x80010004: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80010008: lui         $at, 0x4008
    ctx->r1 = S32(0X4008 << 16);
    // 0x8001000C: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x80010010: nop

    // 0x80010014: bc1f        L_80010050
    if (!c1cs) {
        // 0x80010018: nop
    
            goto L_80010050;
    }
    // 0x80010018: nop

    // 0x8001001C: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x80010020: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80010024: cvt.d.s     $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f6.d = CVT_D_S(ctx->f16.fl);
    // 0x80010028: sub.d       $f4, $f18, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f6.d); 
    ctx->f4.d = ctx->f18.d - ctx->f6.d;
    // 0x8001002C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80010030: cvt.s.d     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f8.fl = CVT_S_D(ctx->f4.d);
    // 0x80010034: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80010038: swc1        $f8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f8.u32l;
    // 0x8001003C: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80010040: jal         0x8000FEB4
    // 0x80010044: swc1        $f2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f2.u32l;
    func_8000FEB4(rdram, ctx);
        goto after_1;
    // 0x80010044: swc1        $f2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f2.u32l;
    after_1:
    // 0x80010048: b           L_80010134
    // 0x8001004C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80010134;
    // 0x8001004C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80010050:
    // 0x80010050: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x80010054: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80010058: bc1f        L_800100C8
    if (!c1cs) {
        // 0x8001005C: nop
    
            goto L_800100C8;
    }
    // 0x8001005C: nop

    // 0x80010060: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80010064: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80010068: c.lt.s      $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f2.fl < ctx->f10.fl;
    // 0x8001006C: nop

    // 0x80010070: bc1f        L_800100C8
    if (!c1cs) {
        // 0x80010074: nop
    
            goto L_800100C8;
    }
    // 0x80010074: nop

    // 0x80010078: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8001007C: lui         $at, 0x3FF8
    ctx->r1 = S32(0X3FF8 << 16);
    // 0x80010080: div.s       $f6, $f0, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = DIV_S(ctx->f0.fl, ctx->f18.fl);
    // 0x80010084: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80010088: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8001008C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80010090: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x80010094: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    // 0x80010098: cvt.d.s     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f4.d = CVT_D_S(ctx->f6.fl);
    // 0x8001009C: add.d       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f4.d + ctx->f8.d;
    // 0x800100A0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800100A4: cvt.d.s     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f4.d = CVT_D_S(ctx->f16.fl);
    // 0x800100A8: cvt.s.d     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f18.fl = CVT_S_D(ctx->f10.d);
    // 0x800100AC: sub.d       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f4.d); 
    ctx->f8.d = ctx->f6.d - ctx->f4.d;
    // 0x800100B0: swc1        $f18, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f18.u32l;
    // 0x800100B4: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x800100B8: jal         0x8000FEB4
    // 0x800100BC: swc1        $f10, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f10.u32l;
    func_8000FEB4(rdram, ctx);
        goto after_2;
    // 0x800100BC: swc1        $f10, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f10.u32l;
    after_2:
    // 0x800100C0: b           L_80010134
    // 0x800100C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80010134;
    // 0x800100C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800100C8:
    // 0x800100C8: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
    // 0x800100CC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x800100D0: bc1f        L_80010128
    if (!c1cs) {
        // 0x800100D4: nop
    
            goto L_80010128;
    }
    // 0x800100D4: nop

    // 0x800100D8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800100DC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x800100E0: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x800100E4: nop

    // 0x800100E8: bc1f        L_80010128
    if (!c1cs) {
        // 0x800100EC: nop
    
            goto L_80010128;
    }
    // 0x800100EC: nop

    // 0x800100F0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800100F4: lui         $at, 0x3FF8
    ctx->r1 = S32(0X3FF8 << 16);
    // 0x800100F8: div.s       $f4, $f0, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = DIV_S(ctx->f0.fl, ctx->f6.fl);
    // 0x800100FC: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x80010100: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80010104: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80010108: cvt.d.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.d = CVT_D_S(ctx->f4.fl);
    // 0x8001010C: add.d       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f18.d = ctx->f8.d + ctx->f10.d;
    // 0x80010110: cvt.s.d     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f6.fl = CVT_S_D(ctx->f18.d);
    // 0x80010114: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
    // 0x80010118: jal         0x8000FEB4
    // 0x8001011C: swc1        $f2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f2.u32l;
    func_8000FEB4(rdram, ctx);
        goto after_3;
    // 0x8001011C: swc1        $f2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f2.u32l;
    after_3:
    // 0x80010120: b           L_80010134
    // 0x80010124: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80010134;
    // 0x80010124: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80010128:
    // 0x80010128: swc1        $f14, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f14.u32l;
    // 0x8001012C: swc1        $f14, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f14.u32l;
    // 0x80010130: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80010134:
    // 0x80010134: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80010138: jr          $ra
    // 0x8001013C: nop

    return;
    // 0x8001013C: nop

;}
RECOMP_FUNC void func_80010140(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80010140: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80010144: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    // 0x80010148: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8001014C: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80010150: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80010154: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x80010158: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8001015C: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80010160: mul.s       $f16, $f8, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f8.fl);
    // 0x80010164: sub.s       $f14, $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f14.fl - ctx->f10.fl;
    // 0x80010168: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001016C: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x80010170: mul.s       $f18, $f14, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x80010174: jal         0x8007FA40
    // 0x80010178: add.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f18.fl;
    func_8007FA40(rdram, ctx);
        goto after_0;
    // 0x80010178: add.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f18.fl;
    after_0:
    // 0x8001017C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80010180: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80010184: jr          $ra
    // 0x80010188: nop

    return;
    // 0x80010188: nop

;}
RECOMP_FUNC void func_8001018C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001018C: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x80010190: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x80010194: lw          $v0, -0x2F98($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2F98);
    // 0x80010198: lui         $t0, 0x3
    ctx->r8 = S32(0X3 << 16);
    // 0x8001019C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x800101A0: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x800101A4: sw          $a1, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r5;
    // 0x800101A8: addu        $t0, $t0, $v0
    ctx->r8 = ADD32(ctx->r8, ctx->r2);
    // 0x800101AC: lh          $t0, -0x7680($t0)
    ctx->r8 = MEM_H(ctx->r8, -0X7680);
    // 0x800101B0: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x800101B4: sll         $t6, $t0, 2
    ctx->r14 = S32(ctx->r8 << 2);
    // 0x800101B8: addu        $t6, $t6, $t0
    ctx->r14 = ADD32(ctx->r14, ctx->r8);
    // 0x800101BC: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800101C0: addu        $t6, $t6, $t0
    ctx->r14 = ADD32(ctx->r14, ctx->r8);
    // 0x800101C4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800101C8: addu        $t6, $t6, $t0
    ctx->r14 = ADD32(ctx->r14, ctx->r8);
    // 0x800101CC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800101D0: ori         $at, $at, 0xA0D8
    ctx->r1 = ctx->r1 | 0XA0D8;
    // 0x800101D4: subu        $t6, $t6, $t0
    ctx->r14 = SUB32(ctx->r14, ctx->r8);
    // 0x800101D8: sll         $t6, $t6, 6
    ctx->r14 = S32(ctx->r14 << 6);
    // 0x800101DC: addu        $v1, $v0, $at
    ctx->r3 = ADD32(ctx->r2, ctx->r1);
    // 0x800101E0: ori         $at, $zero, 0xF080
    ctx->r1 = 0 | 0XF080;
    // 0x800101E4: addu        $t7, $v0, $t6
    ctx->r15 = ADD32(ctx->r2, ctx->r14);
    // 0x800101E8: addu        $t8, $t7, $at
    ctx->r24 = ADD32(ctx->r15, ctx->r1);
    // 0x800101EC: sw          $t8, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r24;
    // 0x800101F0: lwc1        $f4, 0x3C($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X3C);
    // 0x800101F4: lw          $a3, 0x38($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X38);
    // 0x800101F8: lw          $a2, 0x34($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X34);
    // 0x800101FC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80010200: lwc1        $f6, 0x40($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X40);
    // 0x80010204: lui         $t5, 0x8013
    ctx->r13 = S32(0X8013 << 16);
    // 0x80010208: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x8001020C: lwc1        $f8, 0x44($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X44);
    // 0x80010210: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80010214: addiu       $t5, $t5, 0x45C0
    ctx->r13 = ADD32(ctx->r13, 0X45C0);
    // 0x80010218: sll         $t9, $t0, 6
    ctx->r25 = S32(ctx->r8 << 6);
    // 0x8001021C: addu        $a0, $t9, $t5
    ctx->r4 = ADD32(ctx->r25, ctx->r13);
    // 0x80010220: sw          $v1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r3;
    // 0x80010224: addiu       $a1, $sp, 0x76
    ctx->r5 = ADD32(ctx->r29, 0X76);
    // 0x80010228: jal         0x8007FEF0
    // 0x8001022C: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    func_8007FEF0(rdram, ctx);
        goto after_0;
    // 0x8001022C: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x80010230: lw          $v1, 0x7C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X7C);
    // 0x80010234: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x80010238: lw          $t6, -0x2F98($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X2F98);
    // 0x8001023C: lui         $t7, 0x3
    ctx->r15 = S32(0X3 << 16);
    // 0x80010240: lwc1        $f10, 0x10($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X10);
    // 0x80010244: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80010248: lh          $t7, -0x7680($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X7680);
    // 0x8001024C: lw          $a1, 0x4($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X4);
    // 0x80010250: lw          $a2, 0x8($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X8);
    // 0x80010254: lw          $a3, 0xC($v1)
    ctx->r7 = MEM_W(ctx->r3, 0XC);
    // 0x80010258: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8001025C: lwc1        $f16, 0x14($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X14);
    // 0x80010260: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x80010264: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x80010268: lwc1        $f18, 0x18($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X18);
    // 0x8001026C: addiu       $t9, $t9, 0x4640
    ctx->r25 = ADD32(ctx->r25, 0X4640);
    // 0x80010270: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    // 0x80010274: lwc1        $f0, 0x1C($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x80010278: sll         $t8, $t7, 6
    ctx->r24 = S32(ctx->r15 << 6);
    // 0x8001027C: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x80010280: lwc1        $f4, 0x20($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X20);
    // 0x80010284: addu        $a0, $t8, $t9
    ctx->r4 = ADD32(ctx->r24, ctx->r25);
    // 0x80010288: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x8001028C: jal         0x80080208
    // 0x80010290: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    func_80080208(rdram, ctx);
        goto after_1;
    // 0x80010290: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x80010294: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
    // 0x80010298: lw          $v1, 0x7C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X7C);
    // 0x8001029C: beq         $t5, $zero, L_800102D8
    if (ctx->r13 == 0) {
        // 0x800102A0: lui         $t3, 0x8000
        ctx->r11 = S32(0X8000 << 16);
            goto L_800102D8;
    }
    // 0x800102A0: lui         $t3, 0x8000
    ctx->r11 = S32(0X8000 << 16);
    // 0x800102A4: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x800102A8: lw          $t6, -0x2F98($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X2F98);
    // 0x800102AC: lui         $v0, 0x3
    ctx->r2 = S32(0X3 << 16);
    // 0x800102B0: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x800102B4: lh          $v0, -0x7680($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X7680);
    // 0x800102B8: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x800102BC: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x800102C0: addiu       $t8, $t8, 0x45C0
    ctx->r24 = ADD32(ctx->r24, 0X45C0);
    // 0x800102C4: addiu       $t9, $t9, 0x4640
    ctx->r25 = ADD32(ctx->r25, 0X4640);
    // 0x800102C8: sll         $t7, $v0, 6
    ctx->r15 = S32(ctx->r2 << 6);
    // 0x800102CC: addu        $a3, $t7, $t8
    ctx->r7 = ADD32(ctx->r15, ctx->r24);
    // 0x800102D0: b           L_800102E4
    // 0x800102D4: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
        goto L_800102E4;
    // 0x800102D4: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
L_800102D8:
    // 0x800102D8: lw          $a3, 0x78($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X78);
    // 0x800102DC: nop

    // 0x800102E0: addiu       $t0, $a3, 0x80
    ctx->r8 = ADD32(ctx->r7, 0X80);
L_800102E4:
    // 0x800102E4: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x800102E8: lui         $t6, 0xBC00
    ctx->r14 = S32(0XBC00 << 16);
    // 0x800102EC: addiu       $t5, $v0, 0x8
    ctx->r13 = ADD32(ctx->r2, 0X8);
    // 0x800102F0: sw          $t5, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r13;
    // 0x800102F4: ori         $t6, $t6, 0xE
    ctx->r14 = ctx->r14 | 0XE;
    // 0x800102F8: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x800102FC: lhu         $t7, 0x76($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X76);
    // 0x80010300: lui         $t9, 0x380
    ctx->r25 = S32(0X380 << 16);
    // 0x80010304: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x80010308: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x8001030C: ori         $t9, $t9, 0x10
    ctx->r25 = ctx->r25 | 0X10;
    // 0x80010310: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x80010314: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
    // 0x80010318: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8001031C: lw          $t5, 0x58($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X58);
    // 0x80010320: lui         $t7, 0x103
    ctx->r15 = S32(0X103 << 16);
    // 0x80010324: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
    // 0x80010328: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x8001032C: ori         $t7, $t7, 0x40
    ctx->r15 = ctx->r15 | 0X40;
    // 0x80010330: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x80010334: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
    // 0x80010338: addu        $t8, $a3, $t3
    ctx->r24 = ADD32(ctx->r7, ctx->r11);
    // 0x8001033C: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x80010340: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80010344: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80010348: lui         $t5, 0x101
    ctx->r13 = S32(0X101 << 16);
    // 0x8001034C: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x80010350: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x80010354: ori         $t5, $t5, 0x40
    ctx->r13 = ctx->r13 | 0X40;
    // 0x80010358: addu        $t6, $t0, $t3
    ctx->r14 = ADD32(ctx->r8, ctx->r11);
    // 0x8001035C: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x80010360: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x80010364: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80010368: lui         $t8, 0xBC00
    ctx->r24 = S32(0XBC00 << 16);
    // 0x8001036C: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x80010370: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    // 0x80010374: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x80010378: ori         $t8, $t8, 0x404
    ctx->r24 = ctx->r24 | 0X404;
    // 0x8001037C: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x80010380: sw          $t2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r10;
    // 0x80010384: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80010388: lui         $t5, 0xBC00
    ctx->r13 = S32(0XBC00 << 16);
    // 0x8001038C: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x80010390: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x80010394: ori         $t5, $t5, 0xC04
    ctx->r13 = ctx->r13 | 0XC04;
    // 0x80010398: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x8001039C: sw          $t2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r10;
    // 0x800103A0: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x800103A4: lui         $t7, 0xBC00
    ctx->r15 = S32(0XBC00 << 16);
    // 0x800103A8: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x800103AC: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
    // 0x800103B0: ori         $t4, $zero, 0xFFFD
    ctx->r12 = 0 | 0XFFFD;
    // 0x800103B4: ori         $t7, $t7, 0x1404
    ctx->r15 = ctx->r15 | 0X1404;
    // 0x800103B8: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x800103BC: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x800103C0: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x800103C4: lui         $t9, 0xBC00
    ctx->r25 = S32(0XBC00 << 16);
    // 0x800103C8: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x800103CC: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
    // 0x800103D0: ori         $t9, $t9, 0x1C04
    ctx->r25 = ctx->r25 | 0X1C04;
    // 0x800103D4: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x800103D8: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x800103DC: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x800103E0: lui         $t6, 0xE700
    ctx->r14 = S32(0XE700 << 16);
    // 0x800103E4: addiu       $t5, $v0, 0x8
    ctx->r13 = ADD32(ctx->r2, 0X8);
    // 0x800103E8: sw          $t5, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r13;
    // 0x800103EC: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x800103F0: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x800103F4: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x800103F8: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x800103FC: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x80010400: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    // 0x80010404: lw          $t8, 0x5C($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X5C);
    // 0x80010408: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8001040C: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80010410: nop

    // 0x80010414: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80010418: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x8001041C: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80010420: nop

    // 0x80010424: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x80010428: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8001042C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80010430: lui         $at, 0xED00
    ctx->r1 = S32(0XED00 << 16);
    // 0x80010434: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x80010438: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8001043C: lw          $t9, 0x60($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X60);
    // 0x80010440: mfc1        $t5, $f16
    ctx->r13 = (int32_t)ctx->f16.u32l;
    // 0x80010444: mtc1        $t9, $f18
    ctx->f18.u32l = ctx->r25;
    // 0x80010448: andi        $t6, $t5, 0xFFF
    ctx->r14 = ctx->r13 & 0XFFF;
    // 0x8001044C: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80010450: sll         $t7, $t6, 12
    ctx->r15 = S32(ctx->r14 << 12);
    // 0x80010454: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x80010458: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x8001045C: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x80010460: nop

    // 0x80010464: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x80010468: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8001046C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80010470: nop

    // 0x80010474: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80010478: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    // 0x8001047C: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x80010480: andi        $t7, $t6, 0xFFF
    ctx->r15 = ctx->r14 & 0XFFF;
    // 0x80010484: or          $t9, $t8, $t7
    ctx->r25 = ctx->r24 | ctx->r15;
    // 0x80010488: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8001048C: lw          $t5, 0x64($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X64);
    // 0x80010490: nop

    // 0x80010494: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x80010498: lw          $t5, 0x68($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X68);
    // 0x8001049C: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800104A0: mtc1        $t5, $f6
    ctx->f6.u32l = ctx->r13;
    // 0x800104A4: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x800104A8: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x800104AC: nop

    // 0x800104B0: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x800104B4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800104B8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800104BC: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x800104C0: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x800104C4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800104C8: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x800104CC: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x800104D0: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800104D4: andi        $t7, $t8, 0xFFF
    ctx->r15 = ctx->r24 & 0XFFF;
    // 0x800104D8: sll         $t9, $t7, 12
    ctx->r25 = S32(ctx->r15 << 12);
    // 0x800104DC: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x800104E0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800104E4: nop

    // 0x800104E8: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x800104EC: mfc1        $t8, $f16
    ctx->r24 = (int32_t)ctx->f16.u32l;
    // 0x800104F0: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x800104F4: andi        $t7, $t8, 0xFFF
    ctx->r15 = ctx->r24 & 0XFFF;
    // 0x800104F8: or          $t5, $t9, $t7
    ctx->r13 = ctx->r25 | ctx->r15;
    // 0x800104FC: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
    // 0x80010500: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80010504: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80010508: jr          $ra
    // 0x8001050C: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    // 0x8001050C: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void func_80010518(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80010518: mtc1        $a2, $f6
    ctx->f6.u32l = ctx->r6;
    // 0x8001051C: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x80010520: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80010524: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80010528: addu        $t8, $a0, $a2
    ctx->r24 = ADD32(ctx->r4, ctx->r6);
    // 0x8001052C: div.s       $f2, $f4, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
    // 0x80010530: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80010534: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x80010538: lw          $t8, 0x46C0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X46C0);
    // 0x8001053C: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x80010540: subu        $v0, $a0, $a2
    ctx->r2 = SUB32(ctx->r4, ctx->r6);
    // 0x80010544: subu        $v1, $a1, $a2
    ctx->r3 = SUB32(ctx->r5, ctx->r6);
    // 0x80010548: addu        $t6, $a1, $a2
    ctx->r14 = ADD32(ctx->r5, ctx->r6);
    // 0x8001054C: sll         $t2, $v0, 2
    ctx->r10 = S32(ctx->r2 << 2);
    // 0x80010550: sll         $t3, $v1, 2
    ctx->r11 = S32(ctx->r3 << 2);
    // 0x80010554: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80010558: slt         $at, $t9, $t8
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x8001055C: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x80010560: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
    // 0x80010564: or          $v1, $t3, $zero
    ctx->r3 = ctx->r11 | 0;
    // 0x80010568: sw          $t9, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r25;
    // 0x8001056C: or          $t0, $t9, $zero
    ctx->r8 = ctx->r25 | 0;
    // 0x80010570: sw          $t7, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r15;
    // 0x80010574: or          $t1, $t7, $zero
    ctx->r9 = ctx->r15 | 0;
    // 0x80010578: or          $t4, $zero, $zero
    ctx->r12 = 0 | 0;
    // 0x8001057C: or          $t5, $zero, $zero
    ctx->r13 = 0 | 0;
    // 0x80010580: bne         $at, $zero, L_800109BC
    if (ctx->r1 != 0) {
        // 0x80010584: sw          $t8, 0x0($sp)
        MEM_W(0X0, ctx->r29) = ctx->r24;
            goto L_800109BC;
    }
    // 0x80010584: sw          $t8, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r24;
    // 0x80010588: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x8001058C: lw          $a0, 0x46C4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X46C4);
    // 0x80010590: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x80010594: slt         $at, $t7, $a0
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80010598: bne         $at, $zero, L_800109BC
    if (ctx->r1 != 0) {
        // 0x8001059C: nop
    
            goto L_800109BC;
    }
    // 0x8001059C: nop

    // 0x800105A0: lw          $a1, 0x46C8($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X46C8);
    // 0x800105A4: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x800105A8: slt         $at, $a1, $v0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x800105AC: bne         $at, $zero, L_800109BC
    if (ctx->r1 != 0) {
        // 0x800105B0: nop
    
            goto L_800109BC;
    }
    // 0x800105B0: nop

    // 0x800105B4: lw          $a2, 0x46CC($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X46CC);
    // 0x800105B8: lw          $t8, 0x0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X0);
    // 0x800105BC: slt         $at, $a2, $v1
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x800105C0: bne         $at, $zero, L_800109BC
    if (ctx->r1 != 0) {
        // 0x800105C4: slt         $at, $a1, $t9
        ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r25) ? 1 : 0;
            goto L_800109BC;
    }
    // 0x800105C4: slt         $at, $a1, $t9
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x800105C8: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x800105CC: beq         $at, $zero, L_800105DC
    if (ctx->r1 == 0) {
        // 0x800105D0: slt         $at, $a2, $t9
        ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r25) ? 1 : 0;
            goto L_800105DC;
    }
    // 0x800105D0: slt         $at, $a2, $t9
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x800105D4: or          $t0, $a1, $zero
    ctx->r8 = ctx->r5 | 0;
    // 0x800105D8: slt         $at, $a2, $t9
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r25) ? 1 : 0;
L_800105DC:
    // 0x800105DC: beq         $at, $zero, L_800105EC
    if (ctx->r1 == 0) {
        // 0x800105E0: slt         $at, $v0, $t8
        ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r24) ? 1 : 0;
            goto L_800105EC;
    }
    // 0x800105E0: slt         $at, $v0, $t8
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x800105E4: or          $t1, $a2, $zero
    ctx->r9 = ctx->r6 | 0;
    // 0x800105E8: slt         $at, $v0, $t8
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r24) ? 1 : 0;
L_800105EC:
    // 0x800105EC: beq         $at, $zero, L_80010640
    if (ctx->r1 == 0) {
        // 0x800105F0: andi        $a2, $a3, 0xFF
        ctx->r6 = ctx->r7 & 0XFF;
            goto L_80010640;
    }
    // 0x800105F0: andi        $a2, $a3, 0xFF
    ctx->r6 = ctx->r7 & 0XFF;
    // 0x800105F4: subu        $t6, $t8, $v0
    ctx->r14 = SUB32(ctx->r24, ctx->r2);
    // 0x800105F8: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x800105FC: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x80010600: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80010604: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80010608: or          $t2, $t8, $zero
    ctx->r10 = ctx->r24 | 0;
    // 0x8001060C: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x80010610: nop

    // 0x80010614: mul.s       $f4, $f18, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x80010618: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8001061C: nop

    // 0x80010620: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x80010624: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80010628: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8001062C: nop

    // 0x80010630: cvt.w.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80010634: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80010638: mfc1        $t4, $f8
    ctx->r12 = (int32_t)ctx->f8.u32l;
    // 0x8001063C: nop

L_80010640:
    // 0x80010640: slt         $at, $v1, $a0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80010644: beq         $at, $zero, L_80010698
    if (ctx->r1 == 0) {
        // 0x80010648: lui         $t8, 0xE700
        ctx->r24 = S32(0XE700 << 16);
            goto L_80010698;
    }
    // 0x80010648: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x8001064C: subu        $t9, $a0, $v1
    ctx->r25 = SUB32(ctx->r4, ctx->r3);
    // 0x80010650: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x80010654: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x80010658: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8001065C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80010660: or          $t3, $a0, $zero
    ctx->r11 = ctx->r4 | 0;
    // 0x80010664: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x80010668: nop

    // 0x8001066C: mul.s       $f4, $f18, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x80010670: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80010674: nop

    // 0x80010678: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x8001067C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80010680: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80010684: nop

    // 0x80010688: cvt.w.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8001068C: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80010690: mfc1        $t5, $f8
    ctx->r13 = (int32_t)ctx->f8.u32l;
    // 0x80010694: nop

L_80010698:
    // 0x80010698: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8001069C: addiu       $a0, $a0, -0x2F94
    ctx->r4 = ADD32(ctx->r4, -0X2F94);
    // 0x800106A0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x800106A4: lui         $t6, 0xFA00
    ctx->r14 = S32(0XFA00 << 16);
    // 0x800106A8: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x800106AC: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x800106B0: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x800106B4: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x800106B8: lw          $a1, 0x0($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X0);
    // 0x800106BC: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800106C0: addiu       $t9, $a1, 0x8
    ctx->r25 = ADD32(ctx->r5, 0X8);
    // 0x800106C4: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x800106C8: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x800106CC: lb          $t7, -0x309C($t7)
    ctx->r15 = MEM_B(ctx->r15, -0X309C);
    // 0x800106D0: sll         $t9, $a2, 24
    ctx->r25 = S32(ctx->r6 << 24);
    // 0x800106D4: beq         $t7, $zero, L_800106E4
    if (ctx->r15 == 0) {
        // 0x800106D8: lui         $at, 0xE400
        ctx->r1 = S32(0XE400 << 16);
            goto L_800106E4;
    }
    // 0x800106D8: lui         $at, 0xE400
    ctx->r1 = S32(0XE400 << 16);
    // 0x800106DC: b           L_800106E8
    // 0x800106E0: addiu       $v1, $zero, 0x80
    ctx->r3 = ADD32(0, 0X80);
        goto L_800106E8;
    // 0x800106E0: addiu       $v1, $zero, 0x80
    ctx->r3 = ADD32(0, 0X80);
L_800106E4:
    // 0x800106E4: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
L_800106E8:
    // 0x800106E8: andi        $t8, $v1, 0xFF
    ctx->r24 = ctx->r3 & 0XFF;
    // 0x800106EC: or          $t6, $t8, $t9
    ctx->r14 = ctx->r24 | ctx->r25;
    // 0x800106F0: sll         $t7, $a2, 16
    ctx->r15 = S32(ctx->r6 << 16);
    // 0x800106F4: or          $t8, $t6, $t7
    ctx->r24 = ctx->r14 | ctx->r15;
    // 0x800106F8: sll         $t9, $a2, 8
    ctx->r25 = S32(ctx->r6 << 8);
    // 0x800106FC: or          $t6, $t8, $t9
    ctx->r14 = ctx->r24 | ctx->r25;
    // 0x80010700: sw          $t6, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r14;
    // 0x80010704: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80010708: sll         $t8, $t0, 16
    ctx->r24 = S32(ctx->r8 << 16);
    // 0x8001070C: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x80010710: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x80010714: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x80010718: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x8001071C: blez        $t9, L_8001072C
    if (SIGNED(ctx->r25) <= 0) {
        // 0x80010720: sw          $v0, 0x40($sp)
        MEM_W(0X40, ctx->r29) = ctx->r2;
            goto L_8001072C;
    }
    // 0x80010720: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x80010724: b           L_80010730
    // 0x80010728: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
        goto L_80010730;
    // 0x80010728: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
L_8001072C:
    // 0x8001072C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_80010730:
    // 0x80010730: sll         $v0, $t1, 16
    ctx->r2 = S32(ctx->r9 << 16);
    // 0x80010734: sra         $t6, $v0, 16
    ctx->r14 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80010738: blez        $t6, L_80010748
    if (SIGNED(ctx->r14) <= 0) {
        // 0x8001073C: andi        $t9, $a2, 0xFFF
        ctx->r25 = ctx->r6 & 0XFFF;
            goto L_80010748;
    }
    // 0x8001073C: andi        $t9, $a2, 0xFFF
    ctx->r25 = ctx->r6 & 0XFFF;
    // 0x80010740: b           L_8001074C
    // 0x80010744: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
        goto L_8001074C;
    // 0x80010744: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
L_80010748:
    // 0x80010748: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_8001074C:
    // 0x8001074C: andi        $t7, $v1, 0xFFF
    ctx->r15 = ctx->r3 & 0XFFF;
    // 0x80010750: sll         $t6, $t9, 12
    ctx->r14 = S32(ctx->r25 << 12);
    // 0x80010754: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x80010758: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x8001075C: or          $t7, $t8, $t6
    ctx->r15 = ctx->r24 | ctx->r14;
    // 0x80010760: sll         $a3, $t2, 16
    ctx->r7 = S32(ctx->r10 << 16);
    // 0x80010764: sra         $t8, $a3, 16
    ctx->r24 = S32(SIGNED(ctx->r7) >> 16);
    // 0x80010768: or          $a3, $t8, $zero
    ctx->r7 = ctx->r24 | 0;
    // 0x8001076C: blez        $t8, L_8001077C
    if (SIGNED(ctx->r24) <= 0) {
        // 0x80010770: sw          $t7, 0x0($t9)
        MEM_W(0X0, ctx->r25) = ctx->r15;
            goto L_8001077C;
    }
    // 0x80010770: sw          $t7, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r15;
    // 0x80010774: b           L_80010780
    // 0x80010778: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
        goto L_80010780;
    // 0x80010778: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
L_8001077C:
    // 0x8001077C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_80010780:
    // 0x80010780: sll         $t0, $t3, 16
    ctx->r8 = S32(ctx->r11 << 16);
    // 0x80010784: sra         $t6, $t0, 16
    ctx->r14 = S32(SIGNED(ctx->r8) >> 16);
    // 0x80010788: blez        $t6, L_80010798
    if (SIGNED(ctx->r14) <= 0) {
        // 0x8001078C: or          $t0, $t6, $zero
        ctx->r8 = ctx->r14 | 0;
            goto L_80010798;
    }
    // 0x8001078C: or          $t0, $t6, $zero
    ctx->r8 = ctx->r14 | 0;
    // 0x80010790: b           L_8001079C
    // 0x80010794: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
        goto L_8001079C;
    // 0x80010794: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
L_80010798:
    // 0x80010798: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_8001079C:
    // 0x8001079C: andi        $t9, $a2, 0xFFF
    ctx->r25 = ctx->r6 & 0XFFF;
    // 0x800107A0: sll         $t8, $t9, 12
    ctx->r24 = S32(ctx->r25 << 12);
    // 0x800107A4: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x800107A8: andi        $t7, $v1, 0xFFF
    ctx->r15 = ctx->r3 & 0XFFF;
    // 0x800107AC: or          $t6, $t7, $t8
    ctx->r14 = ctx->r15 | ctx->r24;
    // 0x800107B0: sw          $t6, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r14;
    // 0x800107B4: lw          $a1, 0x0($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X0);
    // 0x800107B8: lui         $t8, 0xB400
    ctx->r24 = S32(0XB400 << 16);
    // 0x800107BC: addiu       $t7, $a1, 0x8
    ctx->r15 = ADD32(ctx->r5, 0X8);
    // 0x800107C0: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x800107C4: bgez        $a3, L_80010864
    if (SIGNED(ctx->r7) >= 0) {
        // 0x800107C8: sw          $t8, 0x0($a1)
        MEM_W(0X0, ctx->r5) = ctx->r24;
            goto L_80010864;
    }
    // 0x800107C8: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x800107CC: lui         $at, 0x4480
    ctx->r1 = S32(0X4480 << 16);
    // 0x800107D0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800107D4: nop

    // 0x800107D8: mul.s       $f0, $f2, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f10.fl);
    // 0x800107DC: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x800107E0: nop

    // 0x800107E4: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x800107E8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800107EC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800107F0: nop

    // 0x800107F4: cvt.w.s     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.u32l = CVT_W_S(ctx->f0.fl);
    // 0x800107F8: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
    // 0x800107FC: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80010800: sll         $t9, $v0, 16
    ctx->r25 = S32(ctx->r2 << 16);
    // 0x80010804: sra         $t7, $t9, 16
    ctx->r15 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80010808: bgez        $t7, L_80010838
    if (SIGNED(ctx->r15) >= 0) {
        // 0x8001080C: or          $v0, $t7, $zero
        ctx->r2 = ctx->r15 | 0;
            goto L_80010838;
    }
    // 0x8001080C: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x80010810: multu       $a3, $t7
    result = U64(U32(ctx->r7)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80010814: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80010818: mflo        $v1
    ctx->r3 = lo;
    // 0x8001081C: sra         $t8, $v1, 7
    ctx->r24 = S32(SIGNED(ctx->r3) >> 7);
    // 0x80010820: blez        $t8, L_80010830
    if (SIGNED(ctx->r24) <= 0) {
        // 0x80010824: nop
    
            goto L_80010830;
    }
    // 0x80010824: nop

    // 0x80010828: b           L_80010878
    // 0x8001082C: or          $a3, $t8, $zero
    ctx->r7 = ctx->r24 | 0;
        goto L_80010878;
    // 0x8001082C: or          $a3, $t8, $zero
    ctx->r7 = ctx->r24 | 0;
L_80010830:
    // 0x80010830: b           L_80010878
    // 0x80010834: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
        goto L_80010878;
    // 0x80010834: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
L_80010838:
    // 0x80010838: multu       $a3, $v0
    result = U64(U32(ctx->r7)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001083C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80010840: mflo        $v1
    ctx->r3 = lo;
    // 0x80010844: sra         $t6, $v1, 7
    ctx->r14 = S32(SIGNED(ctx->r3) >> 7);
    // 0x80010848: bgez        $t6, L_80010858
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8001084C: nop
    
            goto L_80010858;
    }
    // 0x8001084C: nop

    // 0x80010850: b           L_80010858
    // 0x80010854: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
        goto L_80010858;
    // 0x80010854: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
L_80010858:
    // 0x80010858: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8001085C: b           L_80010878
    // 0x80010860: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
        goto L_80010878;
    // 0x80010860: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
L_80010864:
    // 0x80010864: lui         $at, 0x4480
    ctx->r1 = S32(0X4480 << 16);
    // 0x80010868: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8001086C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80010870: mul.s       $f0, $f2, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f18.fl);
    // 0x80010874: nop

L_80010878:
    // 0x80010878: bgez        $t3, L_80010908
    if (SIGNED(ctx->r11) >= 0) {
        // 0x8001087C: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_80010908;
    }
    // 0x8001087C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80010880: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80010884: nop

    // 0x80010888: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x8001088C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80010890: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80010894: nop

    // 0x80010898: cvt.w.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = CVT_W_S(ctx->f0.fl);
    // 0x8001089C: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    // 0x800108A0: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x800108A4: sll         $t7, $v0, 16
    ctx->r15 = S32(ctx->r2 << 16);
    // 0x800108A8: sra         $t8, $t7, 16
    ctx->r24 = S32(SIGNED(ctx->r15) >> 16);
    // 0x800108AC: bgez        $t8, L_800108DC
    if (SIGNED(ctx->r24) >= 0) {
        // 0x800108B0: or          $v0, $t8, $zero
        ctx->r2 = ctx->r24 | 0;
            goto L_800108DC;
    }
    // 0x800108B0: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x800108B4: multu       $t0, $t8
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800108B8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800108BC: mflo        $v1
    ctx->r3 = lo;
    // 0x800108C0: sra         $t6, $v1, 7
    ctx->r14 = S32(SIGNED(ctx->r3) >> 7);
    // 0x800108C4: blez        $t6, L_800108D4
    if (SIGNED(ctx->r14) <= 0) {
        // 0x800108C8: nop
    
            goto L_800108D4;
    }
    // 0x800108C8: nop

    // 0x800108CC: b           L_80010908
    // 0x800108D0: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
        goto L_80010908;
    // 0x800108D0: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
L_800108D4:
    // 0x800108D4: b           L_80010908
    // 0x800108D8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_80010908;
    // 0x800108D8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_800108DC:
    // 0x800108DC: multu       $t0, $v0
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800108E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800108E4: mflo        $v1
    ctx->r3 = lo;
    // 0x800108E8: sra         $t9, $v1, 7
    ctx->r25 = S32(SIGNED(ctx->r3) >> 7);
    // 0x800108EC: bgez        $t9, L_800108FC
    if (SIGNED(ctx->r25) >= 0) {
        // 0x800108F0: nop
    
            goto L_800108FC;
    }
    // 0x800108F0: nop

    // 0x800108F4: b           L_800108FC
    // 0x800108F8: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
        goto L_800108FC;
    // 0x800108F8: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
L_800108FC:
    // 0x800108FC: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x80010900: b           L_80010908
    // 0x80010904: or          $v1, $a2, $zero
    ctx->r3 = ctx->r6 | 0;
        goto L_80010908;
    // 0x80010904: or          $v1, $a2, $zero
    ctx->r3 = ctx->r6 | 0;
L_80010908:
    // 0x80010908: subu        $t7, $t5, $v1
    ctx->r15 = SUB32(ctx->r13, ctx->r3);
    // 0x8001090C: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x80010910: subu        $t9, $t4, $a3
    ctx->r25 = SUB32(ctx->r12, ctx->r7);
    // 0x80010914: sll         $t7, $t9, 16
    ctx->r15 = S32(ctx->r25 << 16);
    // 0x80010918: or          $t6, $t8, $t7
    ctx->r14 = ctx->r24 | ctx->r15;
    // 0x8001091C: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x80010920: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80010924: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x80010928: sw          $t6, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r14;
    // 0x8001092C: cvt.w.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = CVT_W_S(ctx->f0.fl);
    // 0x80010930: lw          $a2, 0x0($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X0);
    // 0x80010934: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x80010938: addiu       $t9, $a2, 0x8
    ctx->r25 = ADD32(ctx->r6, 0X8);
    // 0x8001093C: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x80010940: lui         $t8, 0xB300
    ctx->r24 = S32(0XB300 << 16);
    // 0x80010944: andi        $t0, $t0, 0x78
    ctx->r8 = ctx->r8 & 0X78;
    // 0x80010948: beq         $t0, $zero, L_80010998
    if (ctx->r8 == 0) {
        // 0x8001094C: sw          $t8, 0x0($a2)
        MEM_W(0X0, ctx->r6) = ctx->r24;
            goto L_80010998;
    }
    // 0x8001094C: sw          $t8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r24;
    // 0x80010950: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80010954: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80010958: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8001095C: sub.s       $f4, $f0, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x80010960: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80010964: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x80010968: nop

    // 0x8001096C: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80010970: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x80010974: nop

    // 0x80010978: andi        $t0, $t0, 0x78
    ctx->r8 = ctx->r8 & 0X78;
    // 0x8001097C: bne         $t0, $zero, L_80010990
    if (ctx->r8 != 0) {
        // 0x80010980: nop
    
            goto L_80010990;
    }
    // 0x80010980: nop

    // 0x80010984: mfc1        $t0, $f4
    ctx->r8 = (int32_t)ctx->f4.u32l;
    // 0x80010988: b           L_800109A8
    // 0x8001098C: or          $t0, $t0, $at
    ctx->r8 = ctx->r8 | ctx->r1;
        goto L_800109A8;
    // 0x8001098C: or          $t0, $t0, $at
    ctx->r8 = ctx->r8 | ctx->r1;
L_80010990:
    // 0x80010990: b           L_800109A8
    // 0x80010994: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
        goto L_800109A8;
    // 0x80010994: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
L_80010998:
    // 0x80010998: mfc1        $t0, $f4
    ctx->r8 = (int32_t)ctx->f4.u32l;
    // 0x8001099C: nop

    // 0x800109A0: bltz        $t0, L_80010990
    if (SIGNED(ctx->r8) < 0) {
        // 0x800109A4: nop
    
            goto L_80010990;
    }
    // 0x800109A4: nop

L_800109A8:
    // 0x800109A8: andi        $t6, $t0, 0xFFFF
    ctx->r14 = ctx->r8 & 0XFFFF;
    // 0x800109AC: sll         $t9, $t6, 16
    ctx->r25 = S32(ctx->r14 << 16);
    // 0x800109B0: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x800109B4: or          $t8, $t9, $t6
    ctx->r24 = ctx->r25 | ctx->r14;
    // 0x800109B8: sw          $t8, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r24;
L_800109BC:
    // 0x800109BC: jr          $ra
    // 0x800109C0: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x800109C0: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_800109C4_inner(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800109C4: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x800109C8: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x800109CC: lw          $v0, -0x2F98($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2F98);
    // 0x800109D0: lui         $t6, 0x3
    ctx->r14 = S32(0X3 << 16);
    // 0x800109D4: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x800109D8: sw          $s4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r20;
    // 0x800109DC: sw          $s3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r19;
    // 0x800109E0: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x800109E4: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x800109E8: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x800109EC: swc1        $f31, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x800109F0: swc1        $f30, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f30.u32l;
    // 0x800109F4: swc1        $f29, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x800109F8: swc1        $f28, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f28.u32l;
    // 0x800109FC: swc1        $f27, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x80010A00: swc1        $f26, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f26.u32l;
    // 0x80010A04: swc1        $f25, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x80010A08: swc1        $f24, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f24.u32l;
    // 0x80010A0C: swc1        $f23, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80010A10: swc1        $f22, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f22.u32l;
    // 0x80010A14: swc1        $f21, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80010A18: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x80010A1C: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x80010A20: lbu         $t6, 0x754($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X754);
    // 0x80010A24: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x80010A28: ori         $at, $at, 0xA0D8
    ctx->r1 = ctx->r1 | 0XA0D8;
    // 0x80010A2C: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x80010A30: beq         $t7, $zero, L_80010D28
    if (ctx->r15 == 0) {
        // 0x80010A34: addu        $s0, $v0, $at
        ctx->r16 = ADD32(ctx->r2, ctx->r1);
            goto L_80010D28;
    }
    // 0x80010A34: addu        $s0, $v0, $at
    ctx->r16 = ADD32(ctx->r2, ctx->r1);
    // 0x80010A38: jal         0x80004804
    // 0x80010A3C: nop

    func_80004804(rdram, ctx);
        goto after_0;
    // 0x80010A3C: nop

    after_0:
    // 0x80010A40: beq         $v0, $zero, L_80010D28
    if (ctx->r2 == 0) {
        // 0x80010A44: lui         $a0, 0x8011
        ctx->r4 = S32(0X8011 << 16);
            goto L_80010D28;
    }
    // 0x80010A44: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x80010A48: lw          $t8, 0x5C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X5C);
    // 0x80010A4C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80010A50: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80010A54: sw          $t9, 0x46C0($at)
    MEM_W(0X46C0, ctx->r1) = ctx->r25;
    // 0x80010A58: lw          $t0, 0x60($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X60);
    // 0x80010A5C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80010A60: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80010A64: sw          $t1, 0x46C4($at)
    MEM_W(0X46C4, ctx->r1) = ctx->r9;
    // 0x80010A68: lw          $t2, 0x64($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X64);
    // 0x80010A6C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80010A70: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80010A74: sw          $t3, 0x46C8($at)
    MEM_W(0X46C8, ctx->r1) = ctx->r11;
    // 0x80010A78: lw          $t4, 0x68($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X68);
    // 0x80010A7C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80010A80: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80010A84: sw          $t5, 0x46CC($at)
    MEM_W(0X46CC, ctx->r1) = ctx->r13;
    // 0x80010A88: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80010A8C: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x80010A90: addiu       $a0, $a0, -0x2F94
    ctx->r4 = ADD32(ctx->r4, -0X2F94);
    // 0x80010A94: sw          $t6, 0x46D0($at)
    MEM_W(0X46D0, ctx->r1) = ctx->r14;
    // 0x80010A98: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x80010A9C: lui         $t9, 0x800A
    ctx->r25 = S32(0X800A << 16);
    // 0x80010AA0: addiu       $t7, $v1, 0x8
    ctx->r15 = ADD32(ctx->r3, 0X8);
    // 0x80010AA4: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x80010AA8: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80010AAC: addiu       $t9, $t9, -0x2D08
    ctx->r25 = ADD32(ctx->r25, -0X2D08);
    // 0x80010AB0: lui         $t8, 0x600
    ctx->r24 = S32(0X600 << 16);
    // 0x80010AB4: addiu       $a1, $a1, -0x30A0
    ctx->r5 = ADD32(ctx->r5, -0X30A0);
    // 0x80010AB8: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x80010ABC: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x80010AC0: lb          $t0, 0x4($a1)
    ctx->r8 = MEM_B(ctx->r5, 0X4);
    // 0x80010AC4: addiu       $s4, $sp, 0x74
    ctx->r20 = ADD32(ctx->r29, 0X74);
    // 0x80010AC8: beq         $t0, $zero, L_80010AF8
    if (ctx->r8 == 0) {
        // 0x80010ACC: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_80010AF8;
    }
    // 0x80010ACC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80010AD0: lb          $t1, 0x5($a1)
    ctx->r9 = MEM_B(ctx->r5, 0X5);
    // 0x80010AD4: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80010AD8: div         $zero, $t1, $at
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r1)));
    // 0x80010ADC: lui         $s0, 0x800A
    ctx->r16 = S32(0X800A << 16);
    // 0x80010AE0: mfhi        $t2
    ctx->r10 = hi;
    // 0x80010AE4: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80010AE8: addu        $s0, $s0, $t3
    ctx->r16 = ADD32(ctx->r16, ctx->r11);
    // 0x80010AEC: lw          $s0, -0x2990($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X2990);
    // 0x80010AF0: b           L_80010B24
    // 0x80010AF4: lh          $t5, 0x0($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X0);
        goto L_80010B24;
    // 0x80010AF4: lh          $t5, 0x0($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X0);
L_80010AF8:
    // 0x80010AF8: lb          $t4, 0x1($a1)
    ctx->r12 = MEM_B(ctx->r5, 0X1);
    // 0x80010AFC: lui         $s0, 0x800A
    ctx->r16 = S32(0X800A << 16);
    // 0x80010B00: bne         $t4, $zero, L_80010B18
    if (ctx->r12 != 0) {
        // 0x80010B04: nop
    
            goto L_80010B18;
    }
    // 0x80010B04: nop

    // 0x80010B08: lui         $s0, 0x800A
    ctx->r16 = S32(0X800A << 16);
    // 0x80010B0C: lw          $s0, -0x297C($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X297C);
    // 0x80010B10: b           L_80010B24
    // 0x80010B14: lh          $t5, 0x0($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X0);
        goto L_80010B24;
    // 0x80010B14: lh          $t5, 0x0($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X0);
L_80010B18:
    // 0x80010B18: lw          $s0, -0x2978($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X2978);
    // 0x80010B1C: nop

    // 0x80010B20: lh          $t5, 0x0($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X0);
L_80010B24:
    // 0x80010B24: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
    // 0x80010B28: beq         $t5, $zero, L_80010D28
    if (ctx->r13 == 0) {
        // 0x80010B2C: addiu       $s3, $sp, 0x78
        ctx->r19 = ADD32(ctx->r29, 0X78);
            goto L_80010D28;
    }
    // 0x80010B2C: addiu       $s3, $sp, 0x78
    ctx->r19 = ADD32(ctx->r29, 0X78);
    // 0x80010B30: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x80010B34: lui         $at, 0x43A0
    ctx->r1 = S32(0X43A0 << 16);
    // 0x80010B38: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x80010B3C: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x80010B40: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x80010B44: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80010B48: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x80010B4C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80010B50: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x80010B54: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80010B58: lwc1        $f21, 0x35C0($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, 0X35C0);
    // 0x80010B5C: lwc1        $f20, 0x35C4($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X35C4);
    // 0x80010B60: addiu       $s2, $sp, 0x7C
    ctx->r18 = ADD32(ctx->r29, 0X7C);
    // 0x80010B64: addiu       $s1, $zero, 0xA
    ctx->r17 = ADD32(0, 0XA);
L_80010B68:
    // 0x80010B68: lh          $t6, 0x2($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X2);
    // 0x80010B6C: lh          $t8, 0x4($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X4);
    // 0x80010B70: div         $zero, $t6, $s1
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r17))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r17)));
    // 0x80010B74: lh          $t0, 0x6($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X6);
    // 0x80010B78: bne         $s1, $zero, L_80010B84
    if (ctx->r17 != 0) {
        // 0x80010B7C: nop
    
            goto L_80010B84;
    }
    // 0x80010B7C: nop

    // 0x80010B80: break       7
    do_break(2147552128);
L_80010B84:
    // 0x80010B84: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80010B88: bne         $s1, $at, L_80010B9C
    if (ctx->r17 != ctx->r1) {
        // 0x80010B8C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80010B9C;
    }
    // 0x80010B8C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80010B90: bne         $t6, $at, L_80010B9C
    if (ctx->r14 != ctx->r1) {
        // 0x80010B94: nop
    
            goto L_80010B9C;
    }
    // 0x80010B94: nop

    // 0x80010B98: break       6
    do_break(2147552152);
L_80010B9C:
    // 0x80010B9C: sw          $s4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r20;
    // 0x80010BA0: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x80010BA4: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    // 0x80010BA8: mflo        $t7
    ctx->r15 = lo;
    // 0x80010BAC: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80010BB0: nop

    // 0x80010BB4: div         $zero, $t8, $s1
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r17))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r17)));
    // 0x80010BB8: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80010BBC: bne         $s1, $zero, L_80010BC8
    if (ctx->r17 != 0) {
        // 0x80010BC0: nop
    
            goto L_80010BC8;
    }
    // 0x80010BC0: nop

    // 0x80010BC4: break       7
    do_break(2147552196);
L_80010BC8:
    // 0x80010BC8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80010BCC: bne         $s1, $at, L_80010BE0
    if (ctx->r17 != ctx->r1) {
        // 0x80010BD0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80010BE0;
    }
    // 0x80010BD0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80010BD4: bne         $t8, $at, L_80010BE0
    if (ctx->r24 != ctx->r1) {
        // 0x80010BD8: nop
    
            goto L_80010BE0;
    }
    // 0x80010BD8: nop

    // 0x80010BDC: break       6
    do_break(2147552220);
L_80010BE0:
    // 0x80010BE0: mflo        $t9
    ctx->r25 = lo;
    // 0x80010BE4: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x80010BE8: nop

    // 0x80010BEC: div         $zero, $t0, $s1
    lo = S32(S64(S32(ctx->r8)) / S64(S32(ctx->r17))); hi = S32(S64(S32(ctx->r8)) % S64(S32(ctx->r17)));
    // 0x80010BF0: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80010BF4: bne         $s1, $zero, L_80010C00
    if (ctx->r17 != 0) {
        // 0x80010BF8: nop
    
            goto L_80010C00;
    }
    // 0x80010BF8: nop

    // 0x80010BFC: break       7
    do_break(2147552252);
L_80010C00:
    // 0x80010C00: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80010C04: bne         $s1, $at, L_80010C18
    if (ctx->r17 != ctx->r1) {
        // 0x80010C08: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80010C18;
    }
    // 0x80010C08: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80010C0C: bne         $t0, $at, L_80010C18
    if (ctx->r8 != ctx->r1) {
        // 0x80010C10: nop
    
            goto L_80010C18;
    }
    // 0x80010C10: nop

    // 0x80010C14: break       6
    do_break(2147552276);
L_80010C18:
    // 0x80010C18: mflo        $t1
    ctx->r9 = lo;
    // 0x80010C1C: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x80010C20: nop

    // 0x80010C24: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80010C28: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x80010C2C: jal         0x80004650
    // 0x80010C30: nop

    func_80004650(rdram, ctx);
        goto after_1;
    // 0x80010C30: nop

    after_1:
    // 0x80010C34: lwc1        $f10, 0x74($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X74);
    // 0x80010C38: nop

    // 0x80010C3C: c.lt.s      $f26, $f10
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f26.fl < ctx->f10.fl;
    // 0x80010C40: nop

    // 0x80010C44: bc1f        L_80010D18
    if (!c1cs) {
        // 0x80010C48: nop
    
            goto L_80010D18;
    }
    // 0x80010C48: nop

    // 0x80010C4C: cvt.d.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.d = CVT_D_S(ctx->f10.fl);
    // 0x80010C50: nop

    // 0x80010C54: div.d       $f6, $f20, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f20.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = DIV_D(ctx->f20.d, ctx->f4.d);
    // 0x80010C58: lh          $t2, 0x0($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X0);
    // 0x80010C5C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x80010C60: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x80010C64: nop

    // 0x80010C68: cvt.d.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.d = CVT_D_W(ctx->f16.u32l);
    // 0x80010C6C: lwc1        $f16, 0x7C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x80010C70: nop

    // 0x80010C74: add.s       $f10, $f16, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = ctx->f16.fl + ctx->f22.fl;
    // 0x80010C78: mul.d       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f18.d, ctx->f6.d);
    // 0x80010C7C: nop

    // 0x80010C80: mul.s       $f4, $f10, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f28.fl);
    // 0x80010C84: cvt.s.d     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f0.fl = CVT_S_D(ctx->f8.d);
    // 0x80010C88: lwc1        $f8, 0x78($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X78);
    // 0x80010C8C: div.s       $f18, $f4, $f24
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f18.fl = DIV_S(ctx->f4.fl, ctx->f24.fl);
    // 0x80010C90: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x80010C94: nop

    // 0x80010C98: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x80010C9C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80010CA0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80010CA4: nop

    // 0x80010CA8: cvt.w.s     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.u32l = CVT_W_S(ctx->f18.fl);
    // 0x80010CAC: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x80010CB0: mfc1        $a0, $f6
    ctx->r4 = (int32_t)ctx->f6.u32l;
    // 0x80010CB4: sub.s       $f16, $f22, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f22.fl - ctx->f8.fl;
    // 0x80010CB8: mul.s       $f10, $f16, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f30.fl);
    // 0x80010CBC: nop

    // 0x80010CC0: div.s       $f4, $f10, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f24.fl);
    // 0x80010CC4: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x80010CC8: nop

    // 0x80010CCC: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x80010CD0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80010CD4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80010CD8: nop

    // 0x80010CDC: cvt.w.s     $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    ctx->f18.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80010CE0: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x80010CE4: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x80010CE8: nop

    // 0x80010CEC: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x80010CF0: nop

    // 0x80010CF4: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x80010CF8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80010CFC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80010D00: nop

    // 0x80010D04: cvt.w.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = CVT_W_S(ctx->f0.fl);
    // 0x80010D08: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x80010D0C: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x80010D10: jal         0x80010518
    // 0x80010D14: nop

    func_80010518(rdram, ctx);
        goto after_2;
    // 0x80010D14: nop

    after_2:
L_80010D18:
    // 0x80010D18: lh          $t6, 0x8($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X8);
    // 0x80010D1C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80010D20: bne         $t6, $zero, L_80010B68
    if (ctx->r14 != 0) {
        // 0x80010D24: nop
    
            goto L_80010B68;
    }
    // 0x80010D24: nop

L_80010D28:
    // 0x80010D28: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x80010D2C: lwc1        $f21, 0x20($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80010D30: lwc1        $f20, 0x24($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80010D34: lwc1        $f23, 0x28($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x80010D38: lwc1        $f22, 0x2C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80010D3C: lwc1        $f25, 0x30($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x80010D40: lwc1        $f24, 0x34($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80010D44: lwc1        $f27, 0x38($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x80010D48: lwc1        $f26, 0x3C($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80010D4C: lwc1        $f29, 0x40($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x80010D50: lwc1        $f28, 0x44($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80010D54: lwc1        $f31, 0x48($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X48);
    // 0x80010D58: lwc1        $f30, 0x4C($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80010D5C: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x80010D60: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x80010D64: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x80010D68: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x80010D6C: lw          $s4, 0x60($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X60);
    // 0x80010D70: jr          $ra
    // 0x80010D74: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    return;
    // 0x80010D74: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    // 0x80010D78: nop

    // 0x80010D7C: nop

;}
RECOMP_FUNC void func_80010D80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80010D80: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x80010D84: lw          $t6, -0x2F98($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X2F98);
    // 0x80010D88: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80010D8C: lui         $t7, 0x3
    ctx->r15 = S32(0X3 << 16);
    // 0x80010D90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80010D94: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80010D98: lbu         $t7, 0x754($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X754);
    // 0x80010D9C: nop

    // 0x80010DA0: andi        $t8, $t7, 0x2
    ctx->r24 = ctx->r15 & 0X2;
    // 0x80010DA4: beq         $t8, $zero, L_80010DD8
    if (ctx->r24 == 0) {
        // 0x80010DA8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80010DD8;
    }
    // 0x80010DA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80010DAC: jal         0x80004804
    // 0x80010DB0: nop

    func_80004804(rdram, ctx);
        goto after_0;
    // 0x80010DB0: nop

    after_0:
    // 0x80010DB4: beq         $v0, $zero, L_80010DD4
    if (ctx->r2 == 0) {
        // 0x80010DB8: lui         $t9, 0x800A
        ctx->r25 = S32(0X800A << 16);
            goto L_80010DD4;
    }
    // 0x80010DB8: lui         $t9, 0x800A
    ctx->r25 = S32(0X800A << 16);
    // 0x80010DBC: lw          $t9, -0x24E0($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X24E0);
    // 0x80010DC0: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x80010DC4: beq         $t9, $zero, L_80010DD8
    if (ctx->r25 == 0) {
        // 0x80010DC8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80010DD8;
    }
    // 0x80010DC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80010DCC: jal         0x80011744
    // 0x80010DD0: addiu       $a0, $a0, -0x2F94
    ctx->r4 = ADD32(ctx->r4, -0X2F94);
    func_80011744(rdram, ctx);
        goto after_1;
    // 0x80010DD0: addiu       $a0, $a0, -0x2F94
    ctx->r4 = ADD32(ctx->r4, -0X2F94);
    after_1:
L_80010DD4:
    // 0x80010DD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80010DD8:
    // 0x80010DD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80010DDC: jr          $ra
    // 0x80010DE0: nop

    return;
    // 0x80010DE0: nop

;}
RECOMP_FUNC void func_80010DE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80010DE4: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x80010DE8: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80010DEC: mtc1        $a3, $f20
    ctx->f20.u32l = ctx->r7;
    // 0x80010DF0: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x80010DF4: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x80010DF8: lui         $v1, 0x8030
    ctx->r3 = S32(0X8030 << 16);
    // 0x80010DFC: or          $s7, $a2, $zero
    ctx->r23 = ctx->r6 | 0;
    // 0x80010E00: or          $fp, $a0, $zero
    ctx->r30 = ctx->r4 | 0;
    // 0x80010E04: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x80010E08: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x80010E0C: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x80010E10: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x80010E14: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x80010E18: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80010E1C: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80010E20: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80010E24: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80010E28: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x80010E2C: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80010E30: sw          $a1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r5;
    // 0x80010E34: addiu       $v1, $v1, -0x3FE0
    ctx->r3 = ADD32(ctx->r3, -0X3FE0);
    // 0x80010E38: blez        $a1, L_80010F84
    if (SIGNED(ctx->r5) <= 0) {
        // 0x80010E3C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80010F84;
    }
    // 0x80010E3C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80010E40: sll         $t7, $a2, 4
    ctx->r15 = S32(ctx->r6 << 4);
    // 0x80010E44: lui         $s4, 0x800A
    ctx->r20 = S32(0X800A << 16);
    // 0x80010E48: lui         $s3, 0x800A
    ctx->r19 = S32(0X800A << 16);
    // 0x80010E4C: lui         $s2, 0x800A
    ctx->r18 = S32(0X800A << 16);
    // 0x80010E50: lwc1        $f22, 0x80($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X80);
    // 0x80010E54: addiu       $s2, $s2, -0x2564
    ctx->r18 = ADD32(ctx->r18, -0X2564);
    // 0x80010E58: addiu       $s3, $s3, -0x2560
    ctx->r19 = ADD32(ctx->r19, -0X2560);
    // 0x80010E5C: addiu       $s4, $s4, -0x24D8
    ctx->r20 = ADD32(ctx->r20, -0X24D8);
    // 0x80010E60: sw          $t7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r15;
    // 0x80010E64: addiu       $s6, $zero, 0x1E
    ctx->r22 = ADD32(0, 0X1E);
    // 0x80010E68: addiu       $s5, $zero, 0x7
    ctx->r21 = ADD32(0, 0X7);
L_80010E6C:
    // 0x80010E6C: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80010E70: sw          $v1, 0x0($fp)
    MEM_W(0X0, ctx->r30) = ctx->r3;
    // 0x80010E74: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x80010E78: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80010E7C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80010E80: sw          $s7, 0x4($fp)
    MEM_W(0X4, ctx->r30) = ctx->r23;
    // 0x80010E84: cvt.w.s     $f4, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    ctx->f4.u32l = CVT_W_S(ctx->f20.fl);
    // 0x80010E88: addiu       $t0, $v0, 0x1
    ctx->r8 = ADD32(ctx->r2, 0X1);
    // 0x80010E8C: mfc1        $t9, $f4
    ctx->r25 = (int32_t)ctx->f4.u32l;
    // 0x80010E90: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80010E94: sh          $t9, 0x8($fp)
    MEM_H(0X8, ctx->r30) = ctx->r25;
    // 0x80010E98: lw          $t1, 0x74($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X74);
    // 0x80010E9C: sw          $t0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r8;
    // 0x80010EA0: bne         $t1, $t0, L_80010EB4
    if (ctx->r9 != ctx->r8) {
        // 0x80010EA4: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_80010EB4;
    }
    // 0x80010EA4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80010EA8: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80010EAC: b           L_80010EB8
    // 0x80010EB0: sh          $t3, 0xA($fp)
    MEM_H(0XA, ctx->r30) = ctx->r11;
        goto L_80010EB8;
    // 0x80010EB0: sh          $t3, 0xA($fp)
    MEM_H(0XA, ctx->r30) = ctx->r11;
L_80010EB4:
    // 0x80010EB4: sh          $zero, 0xA($fp)
    MEM_H(0XA, ctx->r30) = 0;
L_80010EB8:
    // 0x80010EB8: blez        $s7, L_80010F68
    if (SIGNED(ctx->r23) <= 0) {
        // 0x80010EBC: or          $s0, $v1, $zero
        ctx->r16 = ctx->r3 | 0;
            goto L_80010F68;
    }
    // 0x80010EBC: or          $s0, $v1, $zero
    ctx->r16 = ctx->r3 | 0;
    // 0x80010EC0: sw          $v1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r3;
L_80010EC4:
    // 0x80010EC4: jal         0x8000DFE8
    // 0x80010EC8: nop

    func_8000DFE8(rdram, ctx);
        goto after_0;
    // 0x80010EC8: nop

    after_0:
    // 0x80010ECC: lw          $t4, 0x0($s2)
    ctx->r12 = MEM_W(ctx->r18, 0X0);
    // 0x80010ED0: nop

    // 0x80010ED4: mtc1        $t4, $f6
    ctx->f6.u32l = ctx->r12;
    // 0x80010ED8: nop

    // 0x80010EDC: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80010EE0: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x80010EE4: jal         0x8000DFE8
    // 0x80010EE8: swc1        $f10, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f10.u32l;
    func_8000DFE8(rdram, ctx);
        goto after_1;
    // 0x80010EE8: swc1        $f10, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f10.u32l;
    after_1:
    // 0x80010EEC: lw          $t5, 0x0($s3)
    ctx->r13 = MEM_W(ctx->r19, 0X0);
    // 0x80010EF0: sh          $zero, 0x8($s0)
    MEM_H(0X8, ctx->r16) = 0;
    // 0x80010EF4: mtc1        $t5, $f16
    ctx->f16.u32l = ctx->r13;
    // 0x80010EF8: nop

    // 0x80010EFC: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80010F00: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x80010F04: jal         0x8000DFBC
    // 0x80010F08: swc1        $f4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f4.u32l;
    func_8000DFBC(rdram, ctx);
        goto after_2;
    // 0x80010F08: swc1        $f4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f4.u32l;
    after_2:
    // 0x80010F0C: divu        $zero, $v0, $s5
    lo = S32(U32(ctx->r2) / U32(ctx->r21)); hi = S32(U32(ctx->r2) % U32(ctx->r21));
    // 0x80010F10: bne         $s5, $zero, L_80010F1C
    if (ctx->r21 != 0) {
        // 0x80010F14: nop
    
            goto L_80010F1C;
    }
    // 0x80010F14: nop

    // 0x80010F18: break       7
    do_break(2147553048);
L_80010F1C:
    // 0x80010F1C: mfhi        $t6
    ctx->r14 = hi;
    // 0x80010F20: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x80010F24: addu        $t8, $s4, $t7
    ctx->r24 = ADD32(ctx->r20, ctx->r15);
    // 0x80010F28: lhu         $t9, 0x0($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X0);
    // 0x80010F2C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x80010F30: jal         0x8000DFBC
    // 0x80010F34: sh          $t9, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r25;
    func_8000DFBC(rdram, ctx);
        goto after_3;
    // 0x80010F34: sh          $t9, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r25;
    after_3:
    // 0x80010F38: divu        $zero, $v0, $s6
    lo = S32(U32(ctx->r2) / U32(ctx->r22)); hi = S32(U32(ctx->r2) % U32(ctx->r22));
    // 0x80010F3C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80010F40: bne         $s6, $zero, L_80010F4C
    if (ctx->r22 != 0) {
        // 0x80010F44: nop
    
            goto L_80010F4C;
    }
    // 0x80010F44: nop

    // 0x80010F48: break       7
    do_break(2147553096);
L_80010F4C:
    // 0x80010F4C: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x80010F50: mfhi        $t0
    ctx->r8 = hi;
    // 0x80010F54: sh          $t0, -0x4($s0)
    MEM_H(-0X4, ctx->r16) = ctx->r8;
    // 0x80010F58: bne         $s1, $s7, L_80010EC4
    if (ctx->r17 != ctx->r23) {
        // 0x80010F5C: nop
    
            goto L_80010EC4;
    }
    // 0x80010F5C: nop

    // 0x80010F60: lw          $v1, 0x64($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X64);
    // 0x80010F64: nop

L_80010F68:
    // 0x80010F68: lw          $v0, 0x5C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X5C);
    // 0x80010F6C: lw          $t2, 0x74($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X74);
    // 0x80010F70: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x80010F74: mul.s       $f20, $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f22.fl);
    // 0x80010F78: addiu       $fp, $fp, 0xC
    ctx->r30 = ADD32(ctx->r30, 0XC);
    // 0x80010F7C: bne         $v0, $t2, L_80010E6C
    if (ctx->r2 != ctx->r10) {
        // 0x80010F80: addu        $v1, $v1, $t1
        ctx->r3 = ADD32(ctx->r3, ctx->r9);
            goto L_80010E6C;
    }
    // 0x80010F80: addu        $v1, $v1, $t1
    ctx->r3 = ADD32(ctx->r3, ctx->r9);
L_80010F84:
    // 0x80010F84: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x80010F88: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80010F8C: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80010F90: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80010F94: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80010F98: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80010F9C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80010FA0: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80010FA4: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x80010FA8: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x80010FAC: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x80010FB0: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x80010FB4: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x80010FB8: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x80010FBC: jr          $ra
    // 0x80010FC0: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x80010FC0: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_80010FC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80010FC4: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x80010FC8: lw          $v0, -0x2F98($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2F98);
    // 0x80010FCC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80010FD0: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x80010FD4: lui         $t6, 0x3
    ctx->r14 = S32(0X3 << 16);
    // 0x80010FD8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80010FDC: ori         $at, $at, 0xA0D8
    ctx->r1 = ctx->r1 | 0XA0D8;
    // 0x80010FE0: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x80010FE4: lbu         $t6, -0x765E($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X765E);
    // 0x80010FE8: addu        $v1, $v0, $at
    ctx->r3 = ADD32(ctx->r2, ctx->r1);
    // 0x80010FEC: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x80010FF0: bne         $t6, $at, L_80011028
    if (ctx->r14 != ctx->r1) {
        // 0x80010FF4: lui         $v0, 0x8009
        ctx->r2 = S32(0X8009 << 16);
            goto L_80011028;
    }
    // 0x80010FF4: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80010FF8: lw          $v0, 0x6980($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6980);
    // 0x80010FFC: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x80011000: beq         $v0, $at, L_80011014
    if (ctx->r2 == ctx->r1) {
        // 0x80011004: addiu       $a0, $zero, 0x3
        ctx->r4 = ADD32(0, 0X3);
            goto L_80011014;
    }
    // 0x80011004: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x80011008: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x8001100C: bne         $v0, $at, L_80011028
    if (ctx->r2 != ctx->r1) {
        // 0x80011010: nop
    
            goto L_80011028;
    }
    // 0x80011010: nop

L_80011014:
    // 0x80011014: jal         0x800125BC
    // 0x80011018: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    func_800125BC(rdram, ctx);
        goto after_0;
    // 0x80011018: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_0:
    // 0x8001101C: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x80011020: b           L_80011054
    // 0x80011024: lw          $t8, 0x64($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X64);
        goto L_80011054;
    // 0x80011024: lw          $t8, 0x64($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X64);
L_80011028:
    // 0x80011028: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8001102C: lb          $a0, -0x309F($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X309F);
    // 0x80011030: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80011034: div         $zero, $a0, $at
    lo = S32(S64(S32(ctx->r4)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r4)) % S64(S32(ctx->r1)));
    // 0x80011038: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x8001103C: mfhi        $a0
    ctx->r4 = hi;
    // 0x80011040: jal         0x800125BC
    // 0x80011044: nop

    func_800125BC(rdram, ctx);
        goto after_1;
    // 0x80011044: nop

    after_1:
    // 0x80011048: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x8001104C: nop

    // 0x80011050: lw          $t8, 0x64($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X64);
L_80011054:
    // 0x80011054: lw          $t9, 0x5C($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X5C);
    // 0x80011058: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x8001105C: subu        $t0, $t8, $t9
    ctx->r8 = SUB32(ctx->r24, ctx->r25);
    // 0x80011060: sw          $t0, -0x2564($at)
    MEM_W(-0X2564, ctx->r1) = ctx->r8;
    // 0x80011064: lw          $t2, 0x60($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X60);
    // 0x80011068: lw          $t1, 0x68($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X68);
    // 0x8001106C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80011070: subu        $t3, $t1, $t2
    ctx->r11 = SUB32(ctx->r9, ctx->r10);
    // 0x80011074: sw          $t3, -0x2560($at)
    MEM_W(-0X2560, ctx->r1) = ctx->r11;
    // 0x80011078: lw          $t4, 0x5C($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X5C);
    // 0x8001107C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80011080: sw          $t4, -0x255C($at)
    MEM_W(-0X255C, ctx->r1) = ctx->r12;
    // 0x80011084: lw          $t5, 0x60($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X60);
    // 0x80011088: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x8001108C: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x80011090: lw          $v0, -0x24E0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X24E0);
    // 0x80011094: sw          $t5, -0x2558($at)
    MEM_W(-0X2558, ctx->r1) = ctx->r13;
    // 0x80011098: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8001109C: beq         $v0, $at, L_800110E4
    if (ctx->r2 == ctx->r1) {
        // 0x800110A0: lui         $a0, 0x8030
        ctx->r4 = S32(0X8030 << 16);
            goto L_800110E4;
    }
    // 0x800110A0: lui         $a0, 0x8030
    ctx->r4 = S32(0X8030 << 16);
    // 0x800110A4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800110A8: beq         $v0, $at, L_8001110C
    if (ctx->r2 == ctx->r1) {
        // 0x800110AC: lui         $a0, 0x8030
        ctx->r4 = S32(0X8030 << 16);
            goto L_8001110C;
    }
    // 0x800110AC: lui         $a0, 0x8030
    ctx->r4 = S32(0X8030 << 16);
    // 0x800110B0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800110B4: bne         $v0, $at, L_8001112C
    if (ctx->r2 != ctx->r1) {
        // 0x800110B8: lui         $a0, 0x8030
        ctx->r4 = S32(0X8030 << 16);
            goto L_8001112C;
    }
    // 0x800110B8: lui         $a0, 0x8030
    ctx->r4 = S32(0X8030 << 16);
    // 0x800110BC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800110C0: lwc1        $f4, 0x35FC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X35FC);
    // 0x800110C4: addiu       $a0, $a0, -0x1FE0
    ctx->r4 = ADD32(ctx->r4, -0X1FE0);
    // 0x800110C8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x800110CC: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    // 0x800110D0: lui         $a3, 0x4100
    ctx->r7 = S32(0X4100 << 16);
    // 0x800110D4: jal         0x80010DE4
    // 0x800110D8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_80010DE4(rdram, ctx);
        goto after_2;
    // 0x800110D8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x800110DC: b           L_80011130
    // 0x800110E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80011130;
    // 0x800110E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800110E4:
    // 0x800110E4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800110E8: lwc1        $f6, 0x3600($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3600);
    // 0x800110EC: addiu       $a0, $a0, -0x1FE0
    ctx->r4 = ADD32(ctx->r4, -0X1FE0);
    // 0x800110F0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800110F4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x800110F8: lui         $a3, 0x4120
    ctx->r7 = S32(0X4120 << 16);
    // 0x800110FC: jal         0x80010DE4
    // 0x80011100: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_80010DE4(rdram, ctx);
        goto after_3;
    // 0x80011100: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_3:
    // 0x80011104: b           L_80011130
    // 0x80011108: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80011130;
    // 0x80011108: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8001110C:
    // 0x8001110C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80011110: lwc1        $f8, 0x3604($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X3604);
    // 0x80011114: addiu       $a0, $a0, -0x1FE0
    ctx->r4 = ADD32(ctx->r4, -0X1FE0);
    // 0x80011118: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8001111C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80011120: lui         $a3, 0x4120
    ctx->r7 = S32(0X4120 << 16);
    // 0x80011124: jal         0x80010DE4
    // 0x80011128: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_80010DE4(rdram, ctx);
        goto after_4;
    // 0x80011128: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_4:
L_8001112C:
    // 0x8001112C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80011130:
    // 0x80011130: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80011134: jr          $ra
    // 0x80011138: nop

    return;
    // 0x80011138: nop

;}
RECOMP_FUNC void func_8001113C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001113C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80011140: lui         $t8, 0x800A
    ctx->r24 = S32(0X800A << 16);
    // 0x80011144: lui         $t7, 0x800A
    ctx->r15 = S32(0X800A << 16);
    // 0x80011148: lw          $t7, -0x255C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X255C);
    // 0x8001114C: lw          $t8, -0x2564($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X2564);
    // 0x80011150: sw          $s0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r16;
    // 0x80011154: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x80011158: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x8001115C: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x80011160: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x80011164: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80011168: sw          $t8, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r24;
    // 0x8001116C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80011170: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80011174: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80011178: sll         $t6, $a2, 16
    ctx->r14 = S32(ctx->r6 << 16);
    // 0x8001117C: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80011180: sra         $a2, $t6, 16
    ctx->r6 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80011184: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80011188: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8001118C: andi        $at, $t8, 0x4
    ctx->r1 = ctx->r24 & 0X4;
    // 0x80011190: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x80011194: beq         $t8, $zero, L_800111E8
    if (ctx->r24 == 0) {
        // 0x80011198: or          $t6, $a1, $zero
        ctx->r14 = ctx->r5 | 0;
            goto L_800111E8;
    }
    // 0x80011198: or          $t6, $a1, $zero
    ctx->r14 = ctx->r5 | 0;
    // 0x8001119C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x800111A0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800111A4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800111A8: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x800111AC: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x800111B0: nop

    // 0x800111B4: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x800111B8: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x800111BC: nop

    // 0x800111C0: andi        $at, $t8, 0x4
    ctx->r1 = ctx->r24 & 0X4;
    // 0x800111C4: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x800111C8: bne         $t8, $zero, L_800111E0
    if (ctx->r24 != 0) {
        // 0x800111CC: nop
    
            goto L_800111E0;
    }
    // 0x800111CC: nop

    // 0x800111D0: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x800111D4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800111D8: b           L_800111F8
    // 0x800111DC: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
        goto L_800111F8;
    // 0x800111DC: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
L_800111E0:
    // 0x800111E0: b           L_800111F8
    // 0x800111E4: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
        goto L_800111F8;
    // 0x800111E4: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
L_800111E8:
    // 0x800111E8: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x800111EC: nop

    // 0x800111F0: bltz        $t8, L_800111E0
    if (SIGNED(ctx->r24) < 0) {
        // 0x800111F4: nop
    
            goto L_800111E0;
    }
    // 0x800111F4: nop

L_800111F8:
    // 0x800111F8: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x800111FC: andi        $t9, $t8, 0xFFFF
    ctx->r25 = ctx->r24 & 0XFFFF;
    // 0x80011200: lw          $t8, 0x8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X8);
    // 0x80011204: nop

    // 0x80011208: div         $zero, $t9, $t8
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r24))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r24)));
    // 0x8001120C: bne         $t8, $zero, L_80011218
    if (ctx->r24 != 0) {
        // 0x80011210: nop
    
            goto L_80011218;
    }
    // 0x80011210: nop

    // 0x80011214: break       7
    do_break(2147553812);
L_80011218:
    // 0x80011218: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8001121C: bne         $t8, $at, L_80011230
    if (ctx->r24 != ctx->r1) {
        // 0x80011220: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80011230;
    }
    // 0x80011220: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80011224: bne         $t9, $at, L_80011230
    if (ctx->r25 != ctx->r1) {
        // 0x80011228: nop
    
            goto L_80011230;
    }
    // 0x80011228: nop

    // 0x8001122C: break       6
    do_break(2147553836);
L_80011230:
    // 0x80011230: mfhi        $t9
    ctx->r25 = hi;
    // 0x80011234: addu        $t8, $t9, $t7
    ctx->r24 = ADD32(ctx->r25, ctx->r15);
    // 0x80011238: lui         $t7, 0x800A
    ctx->r15 = S32(0X800A << 16);
    // 0x8001123C: lui         $t9, 0x800A
    ctx->r25 = S32(0X800A << 16);
    // 0x80011240: lw          $t9, -0x2560($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X2560);
    // 0x80011244: lw          $t7, -0x2558($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X2558);
    // 0x80011248: sh          $t8, 0x46($sp)
    MEM_H(0X46, ctx->r29) = ctx->r24;
    // 0x8001124C: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x80011250: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80011254: lwc1        $f8, 0x4($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X4);
    // 0x80011258: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8001125C: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80011260: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80011264: nop

    // 0x80011268: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8001126C: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80011270: nop

    // 0x80011274: andi        $at, $t6, 0x4
    ctx->r1 = ctx->r14 & 0X4;
    // 0x80011278: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x8001127C: beq         $t6, $zero, L_800112D0
    if (ctx->r14 == 0) {
        // 0x80011280: nop
    
            goto L_800112D0;
    }
    // 0x80011280: nop

    // 0x80011284: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80011288: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8001128C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80011290: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80011294: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80011298: nop

    // 0x8001129C: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x800112A0: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x800112A4: nop

    // 0x800112A8: andi        $at, $t6, 0x4
    ctx->r1 = ctx->r14 & 0X4;
    // 0x800112AC: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x800112B0: bne         $t6, $zero, L_800112C8
    if (ctx->r14 != 0) {
        // 0x800112B4: nop
    
            goto L_800112C8;
    }
    // 0x800112B4: nop

    // 0x800112B8: mfc1        $t6, $f10
    ctx->r14 = (int32_t)ctx->f10.u32l;
    // 0x800112BC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800112C0: b           L_800112E0
    // 0x800112C4: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
        goto L_800112E0;
    // 0x800112C4: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
L_800112C8:
    // 0x800112C8: b           L_800112E0
    // 0x800112CC: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
        goto L_800112E0;
    // 0x800112CC: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
L_800112D0:
    // 0x800112D0: mfc1        $t6, $f10
    ctx->r14 = (int32_t)ctx->f10.u32l;
    // 0x800112D4: nop

    // 0x800112D8: bltz        $t6, L_800112C8
    if (SIGNED(ctx->r14) < 0) {
        // 0x800112DC: nop
    
            goto L_800112C8;
    }
    // 0x800112DC: nop

L_800112E0:
    // 0x800112E0: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x800112E4: andi        $t8, $t6, 0xFFFF
    ctx->r24 = ctx->r14 & 0XFFFF;
    // 0x800112E8: div         $zero, $t8, $t9
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r25))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r25)));
    // 0x800112EC: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x800112F0: bne         $t9, $zero, L_800112FC
    if (ctx->r25 != 0) {
        // 0x800112F4: nop
    
            goto L_800112FC;
    }
    // 0x800112F4: nop

    // 0x800112F8: break       7
    do_break(2147554040);
L_800112FC:
    // 0x800112FC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80011300: bne         $t9, $at, L_80011314
    if (ctx->r25 != ctx->r1) {
        // 0x80011304: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80011314;
    }
    // 0x80011304: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80011308: bne         $t8, $at, L_80011314
    if (ctx->r24 != ctx->r1) {
        // 0x8001130C: nop
    
            goto L_80011314;
    }
    // 0x8001130C: nop

    // 0x80011310: break       6
    do_break(2147554064);
L_80011314:
    // 0x80011314: lw          $v0, -0x24E0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X24E0);
    // 0x80011318: lhu         $a3, 0x46($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X46);
    // 0x8001131C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80011320: sh          $zero, 0x36($sp)
    MEM_H(0X36, ctx->r29) = 0;
    // 0x80011324: addiu       $t1, $a3, 0x1
    ctx->r9 = ADD32(ctx->r7, 0X1);
    // 0x80011328: mfhi        $t6
    ctx->r14 = hi;
    // 0x8001132C: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80011330: beq         $v0, $at, L_800114C4
    if (ctx->r2 == ctx->r1) {
        // 0x80011334: sh          $t8, 0x44($sp)
        MEM_H(0X44, ctx->r29) = ctx->r24;
            goto L_800114C4;
    }
    // 0x80011334: sh          $t8, 0x44($sp)
    MEM_H(0X44, ctx->r29) = ctx->r24;
    // 0x80011338: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8001133C: beq         $v0, $at, L_80011354
    if (ctx->r2 == ctx->r1) {
        // 0x80011340: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80011354;
    }
    // 0x80011340: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80011344: beq         $v0, $at, L_80011394
    if (ctx->r2 == ctx->r1) {
        // 0x80011348: slti        $at, $a2, 0xC9
        ctx->r1 = SIGNED(ctx->r6) < 0XC9 ? 1 : 0;
            goto L_80011394;
    }
    // 0x80011348: slti        $at, $a2, 0xC9
    ctx->r1 = SIGNED(ctx->r6) < 0XC9 ? 1 : 0;
    // 0x8001134C: b           L_8001173C
    // 0x80011350: lw          $s0, 0x4($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4);
        goto L_8001173C;
    // 0x80011350: lw          $s0, 0x4($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4);
L_80011354:
    // 0x80011354: slti        $at, $a2, 0xB
    ctx->r1 = SIGNED(ctx->r6) < 0XB ? 1 : 0;
    // 0x80011358: bne         $at, $zero, L_80011368
    if (ctx->r1 != 0) {
        // 0x8001135C: addiu       $a0, $zero, 0x2
        ctx->r4 = ADD32(0, 0X2);
            goto L_80011368;
    }
    // 0x8001135C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80011360: b           L_80011368
    // 0x80011364: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
        goto L_80011368;
    // 0x80011364: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_80011368:
    // 0x80011368: lhu         $t0, 0x44($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X44);
    // 0x8001136C: lhu         $a3, 0x46($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X46);
    // 0x80011370: addu        $t2, $t0, $a0
    ctx->r10 = ADD32(ctx->r8, ctx->r4);
    // 0x80011374: sll         $t3, $t2, 16
    ctx->r11 = S32(ctx->r10 << 16);
    // 0x80011378: addu        $t1, $a3, $a0
    ctx->r9 = ADD32(ctx->r7, ctx->r4);
    // 0x8001137C: sll         $t9, $t1, 16
    ctx->r25 = S32(ctx->r9 << 16);
    // 0x80011380: sra         $t7, $t3, 16
    ctx->r15 = S32(SIGNED(ctx->r11) >> 16);
    // 0x80011384: sra         $t1, $t9, 16
    ctx->r9 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80011388: b           L_80011518
    // 0x8001138C: or          $t3, $t7, $zero
    ctx->r11 = ctx->r15 | 0;
        goto L_80011518;
    // 0x8001138C: or          $t3, $t7, $zero
    ctx->r11 = ctx->r15 | 0;
    // 0x80011390: slti        $at, $a2, 0xC9
    ctx->r1 = SIGNED(ctx->r6) < 0XC9 ? 1 : 0;
L_80011394:
    // 0x80011394: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x80011398: bne         $at, $zero, L_800113AC
    if (ctx->r1 != 0) {
        // 0x8001139C: slti        $at, $a2, 0x65
        ctx->r1 = SIGNED(ctx->r6) < 0X65 ? 1 : 0;
            goto L_800113AC;
    }
    // 0x8001139C: slti        $at, $a2, 0x65
    ctx->r1 = SIGNED(ctx->r6) < 0X65 ? 1 : 0;
    // 0x800113A0: b           L_800113D0
    // 0x800113A4: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
        goto L_800113D0;
    // 0x800113A4: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x800113A8: slti        $at, $a2, 0x65
    ctx->r1 = SIGNED(ctx->r6) < 0X65 ? 1 : 0;
L_800113AC:
    // 0x800113AC: bne         $at, $zero, L_800113C0
    if (ctx->r1 != 0) {
        // 0x800113B0: slti        $at, $a2, 0x33
        ctx->r1 = SIGNED(ctx->r6) < 0X33 ? 1 : 0;
            goto L_800113C0;
    }
    // 0x800113B0: slti        $at, $a2, 0x33
    ctx->r1 = SIGNED(ctx->r6) < 0X33 ? 1 : 0;
    // 0x800113B4: b           L_800113D0
    // 0x800113B8: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
        goto L_800113D0;
    // 0x800113B8: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x800113BC: slti        $at, $a2, 0x33
    ctx->r1 = SIGNED(ctx->r6) < 0X33 ? 1 : 0;
L_800113C0:
    // 0x800113C0: bne         $at, $zero, L_800113D0
    if (ctx->r1 != 0) {
        // 0x800113C4: addiu       $a0, $zero, 0x8
        ctx->r4 = ADD32(0, 0X8);
            goto L_800113D0;
    }
    // 0x800113C4: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x800113C8: b           L_800113D0
    // 0x800113CC: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
        goto L_800113D0;
    // 0x800113CC: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
L_800113D0:
    // 0x800113D0: lhu         $v1, 0xE($t8)
    ctx->r3 = MEM_HU(ctx->r24, 0XE);
    // 0x800113D4: nop

    // 0x800113D8: andi        $t4, $v1, 0xF800
    ctx->r12 = ctx->r3 & 0XF800;
    // 0x800113DC: sra         $t6, $t4, 8
    ctx->r14 = S32(SIGNED(ctx->r12) >> 8);
    // 0x800113E0: or          $t4, $t6, $zero
    ctx->r12 = ctx->r14 | 0;
    // 0x800113E4: andi        $t9, $v1, 0x3E
    ctx->r25 = ctx->r3 & 0X3E;
    // 0x800113E8: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x800113EC: sh          $t6, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r14;
    // 0x800113F0: lhu         $a1, 0xC($t8)
    ctx->r5 = MEM_HU(ctx->r24, 0XC);
    // 0x800113F4: andi        $t5, $v1, 0x7C0
    ctx->r13 = ctx->r3 & 0X7C0;
    // 0x800113F8: sra         $t7, $t5, 3
    ctx->r15 = S32(SIGNED(ctx->r13) >> 3);
    // 0x800113FC: or          $t5, $t7, $zero
    ctx->r13 = ctx->r15 | 0;
    // 0x80011400: bgez        $a1, L_80011410
    if (SIGNED(ctx->r5) >= 0) {
        // 0x80011404: sra         $t7, $a1, 1
        ctx->r15 = S32(SIGNED(ctx->r5) >> 1);
            goto L_80011410;
    }
    // 0x80011404: sra         $t7, $a1, 1
    ctx->r15 = S32(SIGNED(ctx->r5) >> 1);
    // 0x80011408: addiu       $at, $a1, 0x1
    ctx->r1 = ADD32(ctx->r5, 0X1);
    // 0x8001140C: sra         $t7, $at, 1
    ctx->r15 = S32(SIGNED(ctx->r1) >> 1);
L_80011410:
    // 0x80011410: bgez        $t7, L_80011424
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80011414: andi        $t9, $t7, 0xF
        ctx->r25 = ctx->r15 & 0XF;
            goto L_80011424;
    }
    // 0x80011414: andi        $t9, $t7, 0xF
    ctx->r25 = ctx->r15 & 0XF;
    // 0x80011418: beq         $t9, $zero, L_80011424
    if (ctx->r25 == 0) {
        // 0x8001141C: nop
    
            goto L_80011424;
    }
    // 0x8001141C: nop

    // 0x80011420: addiu       $t9, $t9, -0x10
    ctx->r25 = ADD32(ctx->r25, -0X10);
L_80011424:
    // 0x80011424: sh          $t9, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r25;
    // 0x80011428: addiu       $t6, $a1, 0x1
    ctx->r14 = ADD32(ctx->r5, 0X1);
    // 0x8001142C: sh          $t6, 0xC($t8)
    MEM_H(0XC, ctx->r24) = ctx->r14;
    // 0x80011430: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80011434: lui         $t9, 0xFA00
    ctx->r25 = S32(0XFA00 << 16);
    // 0x80011438: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x8001143C: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    // 0x80011440: andi        $t7, $t5, 0xFF
    ctx->r15 = ctx->r13 & 0XFF;
    // 0x80011444: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x80011448: sll         $t9, $t7, 16
    ctx->r25 = S32(ctx->r15 << 16);
    // 0x8001144C: lh          $t7, 0x38($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X38);
    // 0x80011450: sll         $t8, $t4, 24
    ctx->r24 = S32(ctx->r12 << 24);
    // 0x80011454: or          $t6, $t8, $t9
    ctx->r14 = ctx->r24 | ctx->r25;
    // 0x80011458: andi        $t8, $t7, 0xFF
    ctx->r24 = ctx->r15 & 0XFF;
    // 0x8001145C: sll         $t9, $t8, 8
    ctx->r25 = S32(ctx->r24 << 8);
    // 0x80011460: or          $t7, $t6, $t9
    ctx->r15 = ctx->r14 | ctx->r25;
    // 0x80011464: ori         $t8, $t7, 0xFF
    ctx->r24 = ctx->r15 | 0XFF;
    // 0x80011468: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x8001146C: lhu         $t0, 0x44($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X44);
    // 0x80011470: lhu         $a3, 0x46($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X46);
    // 0x80011474: addu        $t2, $t0, $a0
    ctx->r10 = ADD32(ctx->r8, ctx->r4);
    // 0x80011478: sll         $t3, $t2, 16
    ctx->r11 = S32(ctx->r10 << 16);
    // 0x8001147C: addu        $t1, $a3, $a0
    ctx->r9 = ADD32(ctx->r7, ctx->r4);
    // 0x80011480: sll         $t6, $t1, 16
    ctx->r14 = S32(ctx->r9 << 16);
    // 0x80011484: sra         $t7, $t3, 16
    ctx->r15 = S32(SIGNED(ctx->r11) >> 16);
    // 0x80011488: sra         $t1, $t6, 16
    ctx->r9 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8001148C: or          $t3, $t7, $zero
    ctx->r11 = ctx->r15 | 0;
    // 0x80011490: lui         $t7, 0x800A
    ctx->r15 = S32(0X800A << 16);
    // 0x80011494: lui         $t6, 0x800A
    ctx->r14 = S32(0X800A << 16);
    // 0x80011498: lui         $t8, 0x800A
    ctx->r24 = S32(0X800A << 16);
    // 0x8001149C: lui         $t9, 0x800A
    ctx->r25 = S32(0X800A << 16);
    // 0x800114A0: lw          $t9, -0x2560($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X2560);
    // 0x800114A4: lw          $t8, -0x2564($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X2564);
    // 0x800114A8: lw          $t6, -0x255C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X255C);
    // 0x800114AC: lw          $t7, -0x2558($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X2558);
    // 0x800114B0: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x800114B4: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x800114B8: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x800114BC: b           L_80011518
    // 0x800114C0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
        goto L_80011518;
    // 0x800114C0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
L_800114C4:
    // 0x800114C4: slti        $at, $a2, 0x29
    ctx->r1 = SIGNED(ctx->r6) < 0X29 ? 1 : 0;
    // 0x800114C8: bne         $at, $zero, L_800114D8
    if (ctx->r1 != 0) {
        // 0x800114CC: sll         $t8, $t1, 16
        ctx->r24 = S32(ctx->r9 << 16);
            goto L_800114D8;
    }
    // 0x800114CC: sll         $t8, $t1, 16
    ctx->r24 = S32(ctx->r9 << 16);
    // 0x800114D0: b           L_80011500
    // 0x800114D4: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
        goto L_80011500;
    // 0x800114D4: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
L_800114D8:
    // 0x800114D8: slti        $at, $a2, 0x15
    ctx->r1 = SIGNED(ctx->r6) < 0X15 ? 1 : 0;
    // 0x800114DC: bne         $at, $zero, L_800114F0
    if (ctx->r1 != 0) {
        // 0x800114E0: slti        $at, $a2, 0xB
        ctx->r1 = SIGNED(ctx->r6) < 0XB ? 1 : 0;
            goto L_800114F0;
    }
    // 0x800114E0: slti        $at, $a2, 0xB
    ctx->r1 = SIGNED(ctx->r6) < 0XB ? 1 : 0;
    // 0x800114E4: b           L_80011500
    // 0x800114E8: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
        goto L_80011500;
    // 0x800114E8: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x800114EC: slti        $at, $a2, 0xB
    ctx->r1 = SIGNED(ctx->r6) < 0XB ? 1 : 0;
L_800114F0:
    // 0x800114F0: bne         $at, $zero, L_80011500
    if (ctx->r1 != 0) {
        // 0x800114F4: addiu       $a0, $zero, 0x24
        ctx->r4 = ADD32(0, 0X24);
            goto L_80011500;
    }
    // 0x800114F4: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    // 0x800114F8: b           L_80011500
    // 0x800114FC: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
        goto L_80011500;
    // 0x800114FC: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
L_80011500:
    // 0x80011500: lhu         $t0, 0x44($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X44);
    // 0x80011504: sra         $t1, $t8, 16
    ctx->r9 = S32(SIGNED(ctx->r24) >> 16);
    // 0x80011508: addu        $t2, $t0, $a0
    ctx->r10 = ADD32(ctx->r8, ctx->r4);
    // 0x8001150C: sll         $t3, $t2, 16
    ctx->r11 = S32(ctx->r10 << 16);
    // 0x80011510: sra         $t9, $t3, 16
    ctx->r25 = S32(SIGNED(ctx->r11) >> 16);
    // 0x80011514: or          $t3, $t9, $zero
    ctx->r11 = ctx->r25 | 0;
L_80011518:
    // 0x80011518: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8001151C: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x80011520: lw          $t9, 0x14($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X14);
    // 0x80011524: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x80011528: slt         $at, $t1, $v0
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8001152C: bne         $at, $zero, L_80011540
    if (ctx->r1 != 0) {
        // 0x80011530: sll         $t8, $t2, 16
        ctx->r24 = S32(ctx->r10 << 16);
            goto L_80011540;
    }
    // 0x80011530: sll         $t8, $t2, 16
    ctx->r24 = S32(ctx->r10 << 16);
    // 0x80011534: sll         $t1, $v0, 16
    ctx->r9 = S32(ctx->r2 << 16);
    // 0x80011538: sra         $t6, $t1, 16
    ctx->r14 = S32(SIGNED(ctx->r9) >> 16);
    // 0x8001153C: or          $t1, $t6, $zero
    ctx->r9 = ctx->r14 | 0;
L_80011540:
    // 0x80011540: lw          $t7, 0x10($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X10);
    // 0x80011544: sra         $t6, $t8, 16
    ctx->r14 = S32(SIGNED(ctx->r24) >> 16);
    // 0x80011548: addu        $v0, $t9, $t7
    ctx->r2 = ADD32(ctx->r25, ctx->r15);
    // 0x8001154C: slt         $at, $t6, $v0
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80011550: bne         $at, $zero, L_80011564
    if (ctx->r1 != 0) {
        // 0x80011554: sll         $t8, $t1, 2
        ctx->r24 = S32(ctx->r9 << 2);
            goto L_80011564;
    }
    // 0x80011554: sll         $t8, $t1, 2
    ctx->r24 = S32(ctx->r9 << 2);
    // 0x80011558: sll         $t3, $v0, 16
    ctx->r11 = S32(ctx->r2 << 16);
    // 0x8001155C: sra         $t9, $t3, 16
    ctx->r25 = S32(SIGNED(ctx->r11) >> 16);
    // 0x80011560: or          $t3, $t9, $zero
    ctx->r11 = ctx->r25 | 0;
L_80011564:
    // 0x80011564: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80011568: lui         $at, 0x4020
    ctx->r1 = S32(0X4020 << 16);
    // 0x8001156C: andi        $t6, $t8, 0xFFF
    ctx->r14 = ctx->r24 & 0XFFF;
    // 0x80011570: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x80011574: sll         $t9, $t6, 12
    ctx->r25 = S32(ctx->r14 << 12);
    // 0x80011578: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x8001157C: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    // 0x80011580: lui         $at, 0xE400
    ctx->r1 = S32(0XE400 << 16);
    // 0x80011584: sll         $t8, $t3, 2
    ctx->r24 = S32(ctx->r11 << 2);
    // 0x80011588: andi        $t6, $t8, 0xFFF
    ctx->r14 = ctx->r24 & 0XFFF;
    // 0x8001158C: or          $t7, $t9, $at
    ctx->r15 = ctx->r25 | ctx->r1;
    // 0x80011590: or          $t9, $t7, $t6
    ctx->r25 = ctx->r15 | ctx->r14;
    // 0x80011594: sll         $t8, $a3, 2
    ctx->r24 = S32(ctx->r7 << 2);
    // 0x80011598: andi        $t7, $t8, 0xFFF
    ctx->r15 = ctx->r24 & 0XFFF;
    // 0x8001159C: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x800115A0: sll         $t9, $t0, 2
    ctx->r25 = S32(ctx->r8 << 2);
    // 0x800115A4: andi        $t8, $t9, 0xFFF
    ctx->r24 = ctx->r25 & 0XFFF;
    // 0x800115A8: sll         $t6, $t7, 12
    ctx->r14 = S32(ctx->r15 << 12);
    // 0x800115AC: or          $t7, $t6, $t8
    ctx->r15 = ctx->r14 | ctx->r24;
    // 0x800115B0: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x800115B4: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x800115B8: lui         $t6, 0xB400
    ctx->r14 = S32(0XB400 << 16);
    // 0x800115BC: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x800115C0: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x800115C4: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x800115C8: lh          $t6, 0x36($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X36);
    // 0x800115CC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x800115D0: sll         $t8, $t6, 24
    ctx->r24 = S32(ctx->r14 << 24);
    // 0x800115D4: subu        $t6, $t1, $a3
    ctx->r14 = SUB32(ctx->r9, ctx->r7);
    // 0x800115D8: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x800115DC: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x800115E0: cvt.d.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.d = CVT_D_W(ctx->f16.u32l);
    // 0x800115E4: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x800115E8: lui         $t9, 0xB300
    ctx->r25 = S32(0XB300 << 16);
    // 0x800115EC: div.d       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = DIV_D(ctx->f0.d, ctx->f18.d);
    // 0x800115F0: addiu       $t7, $a1, 0x8
    ctx->r15 = ADD32(ctx->r5, 0X8);
    // 0x800115F4: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    // 0x800115F8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800115FC: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x80011600: subu        $t9, $t3, $t0
    ctx->r25 = SUB32(ctx->r11, ctx->r8);
    // 0x80011604: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x80011608: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8001160C: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80011610: nop

    // 0x80011614: cvt.w.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_D(ctx->f4.d);
    // 0x80011618: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8001161C: nop

    // 0x80011620: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x80011624: beq         $t7, $zero, L_80011674
    if (ctx->r15 == 0) {
        // 0x80011628: nop
    
            goto L_80011674;
    }
    // 0x80011628: nop

    // 0x8001162C: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x80011630: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80011634: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80011638: sub.d       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f6.d = ctx->f4.d - ctx->f6.d;
    // 0x8001163C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80011640: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80011644: nop

    // 0x80011648: cvt.w.d     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_D(ctx->f6.d);
    // 0x8001164C: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x80011650: nop

    // 0x80011654: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x80011658: bne         $t7, $zero, L_8001166C
    if (ctx->r15 != 0) {
        // 0x8001165C: nop
    
            goto L_8001166C;
    }
    // 0x8001165C: nop

    // 0x80011660: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x80011664: b           L_80011684
    // 0x80011668: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
        goto L_80011684;
    // 0x80011668: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
L_8001166C:
    // 0x8001166C: b           L_80011684
    // 0x80011670: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
        goto L_80011684;
    // 0x80011670: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
L_80011674:
    // 0x80011674: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x80011678: nop

    // 0x8001167C: bltz        $t7, L_8001166C
    if (SIGNED(ctx->r15) < 0) {
        // 0x80011680: nop
    
            goto L_8001166C;
    }
    // 0x80011680: nop

L_80011684:
    // 0x80011684: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80011688: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x8001168C: or          $t8, $t7, $zero
    ctx->r24 = ctx->r15 | 0;
    // 0x80011690: cvt.d.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.d = CVT_D_W(ctx->f8.u32l);
    // 0x80011694: sll         $t7, $t8, 26
    ctx->r15 = S32(ctx->r24 << 26);
    // 0x80011698: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8001169C: div.d       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = DIV_D(ctx->f0.d, ctx->f10.d);
    // 0x800116A0: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x800116A4: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x800116A8: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x800116AC: nop

    // 0x800116B0: cvt.w.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_D(ctx->f16.d);
    // 0x800116B4: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x800116B8: nop

    // 0x800116BC: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x800116C0: beq         $t8, $zero, L_80011710
    if (ctx->r24 == 0) {
        // 0x800116C4: nop
    
            goto L_80011710;
    }
    // 0x800116C4: nop

    // 0x800116C8: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x800116CC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800116D0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800116D4: sub.d       $f18, $f16, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f18.d = ctx->f16.d - ctx->f18.d;
    // 0x800116D8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800116DC: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x800116E0: nop

    // 0x800116E4: cvt.w.d     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_D(ctx->f18.d);
    // 0x800116E8: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x800116EC: nop

    // 0x800116F0: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x800116F4: bne         $t8, $zero, L_80011708
    if (ctx->r24 != 0) {
        // 0x800116F8: nop
    
            goto L_80011708;
    }
    // 0x800116F8: nop

    // 0x800116FC: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
    // 0x80011700: b           L_80011720
    // 0x80011704: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
        goto L_80011720;
    // 0x80011704: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
L_80011708:
    // 0x80011708: b           L_80011720
    // 0x8001170C: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
        goto L_80011720;
    // 0x8001170C: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
L_80011710:
    // 0x80011710: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
    // 0x80011714: nop

    // 0x80011718: bltz        $t8, L_80011708
    if (SIGNED(ctx->r24) < 0) {
        // 0x8001171C: nop
    
            goto L_80011708;
    }
    // 0x8001171C: nop

L_80011720:
    // 0x80011720: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80011724: or          $t9, $t8, $zero
    ctx->r25 = ctx->r24 | 0;
    // 0x80011728: sll         $t6, $t9, 10
    ctx->r14 = S32(ctx->r25 << 10);
    // 0x8001172C: andi        $t8, $t6, 0xFFFF
    ctx->r24 = ctx->r14 & 0XFFFF;
    // 0x80011730: or          $t9, $t7, $t8
    ctx->r25 = ctx->r15 | ctx->r24;
    // 0x80011734: sw          $t9, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r25;
    // 0x80011738: lw          $s0, 0x4($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4);
L_8001173C:
    // 0x8001173C: jr          $ra
    // 0x80011740: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80011740: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80011744(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80011744: addiu       $sp, $sp, -0x110
    ctx->r29 = ADD32(ctx->r29, -0X110);
    // 0x80011748: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x8001174C: addiu       $a1, $a1, -0x24DC
    ctx->r5 = ADD32(ctx->r5, -0X24DC);
    // 0x80011750: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80011754: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x80011758: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x8001175C: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x80011760: lui         $s2, 0x8030
    ctx->r18 = S32(0X8030 << 16);
    // 0x80011764: sltiu       $v0, $v1, 0x1
    ctx->r2 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x80011768: addiu       $t6, $v1, 0x1
    ctx->r14 = ADD32(ctx->r3, 0X1);
    // 0x8001176C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80011770: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x80011774: sw          $fp, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r30;
    // 0x80011778: sw          $s7, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r23;
    // 0x8001177C: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x80011780: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x80011784: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x80011788: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x8001178C: swc1        $f31, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x80011790: swc1        $f30, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f30.u32l;
    // 0x80011794: swc1        $f29, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x80011798: swc1        $f28, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f28.u32l;
    // 0x8001179C: swc1        $f27, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x800117A0: swc1        $f26, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f26.u32l;
    // 0x800117A4: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x800117A8: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x800117AC: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x800117B0: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x800117B4: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800117B8: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800117BC: addiu       $s2, $s2, -0x1FE0
    ctx->r18 = ADD32(ctx->r18, -0X1FE0);
    // 0x800117C0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x800117C4: bne         $v0, $zero, L_800120AC
    if (ctx->r2 != 0) {
        // 0x800117C8: sw          $t6, 0x0($a1)
        MEM_W(0X0, ctx->r5) = ctx->r14;
            goto L_800120AC;
    }
    // 0x800117C8: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x800117CC: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x800117D0: addiu       $t0, $t0, -0x2F94
    ctx->r8 = ADD32(ctx->r8, -0X2F94);
    // 0x800117D4: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x800117D8: lui         $t8, 0x800A
    ctx->r24 = S32(0X800A << 16);
    // 0x800117DC: addiu       $t7, $v1, 0x8
    ctx->r15 = ADD32(ctx->r3, 0X8);
    // 0x800117E0: lui         $s3, 0x600
    ctx->r19 = S32(0X600 << 16);
    // 0x800117E4: sw          $t7, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r15;
    // 0x800117E8: addiu       $t8, $t8, -0x3748
    ctx->r24 = ADD32(ctx->r24, -0X3748);
    // 0x800117EC: addiu       $a0, $sp, 0x108
    ctx->r4 = ADD32(ctx->r29, 0X108);
    // 0x800117F0: addiu       $a1, $sp, 0x104
    ctx->r5 = ADD32(ctx->r29, 0X104);
    // 0x800117F4: addiu       $a2, $sp, 0x100
    ctx->r6 = ADD32(ctx->r29, 0X100);
    // 0x800117F8: addiu       $a3, $sp, 0xFC
    ctx->r7 = ADD32(ctx->r29, 0XFC);
    // 0x800117FC: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x80011800: jal         0x8001210C
    // 0x80011804: sw          $s3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r19;
    func_8001210C(rdram, ctx);
        goto after_0;
    // 0x80011804: sw          $s3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r19;
    after_0:
    // 0x80011808: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8001180C: lwc1        $f4, 0x4710($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4710);
    // 0x80011810: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80011814: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80011818: lui         $t1, 0x800A
    ctx->r9 = S32(0X800A << 16);
    // 0x8001181C: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80011820: addiu       $t1, $t1, -0x2550
    ctx->r9 = ADD32(ctx->r9, -0X2550);
    // 0x80011824: bc1t        L_800120B0
    if (c1cs) {
        // 0x80011828: lw          $ra, 0x6C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X6C);
            goto L_800120B0;
    }
    // 0x80011828: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    // 0x8001182C: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x80011830: lui         $t2, 0x8030
    ctx->r10 = S32(0X8030 << 16);
    // 0x80011834: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x80011838: sw          $t9, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r25;
    // 0x8001183C: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x80011840: sw          $s3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r19;
    // 0x80011844: lh          $t2, -0x1FD6($t2)
    ctx->r10 = MEM_H(ctx->r10, -0X1FD6);
    // 0x80011848: sll         $t3, $s0, 2
    ctx->r11 = S32(ctx->r16 << 2);
    // 0x8001184C: bne         $t2, $zero, L_8001186C
    if (ctx->r10 != 0) {
        // 0x80011850: subu        $t3, $t3, $s0
        ctx->r11 = SUB32(ctx->r11, ctx->r16);
            goto L_8001186C;
    }
    // 0x80011850: subu        $t3, $t3, $s0
    ctx->r11 = SUB32(ctx->r11, ctx->r16);
    // 0x80011854: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80011858: addu        $v0, $s2, $t3
    ctx->r2 = ADD32(ctx->r18, ctx->r11);
L_8001185C:
    // 0x8001185C: lh          $t4, 0x16($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X16);
    // 0x80011860: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80011864: beq         $t4, $zero, L_8001185C
    if (ctx->r12 == 0) {
        // 0x80011868: addiu       $v0, $v0, 0xC
        ctx->r2 = ADD32(ctx->r2, 0XC);
            goto L_8001185C;
    }
    // 0x80011868: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
L_8001186C:
    // 0x8001186C: bltz        $s0, L_80012094
    if (SIGNED(ctx->r16) < 0) {
        // 0x80011870: sll         $t5, $s0, 2
        ctx->r13 = S32(ctx->r16 << 2);
            goto L_80012094;
    }
    // 0x80011870: sll         $t5, $s0, 2
    ctx->r13 = S32(ctx->r16 << 2);
    // 0x80011874: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80011878: lwc1        $f31, 0x3608($at)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r1, 0X3608);
    // 0x8001187C: lwc1        $f30, 0x360C($at)
    ctx->f30.u32l = MEM_W(ctx->r1, 0X360C);
    // 0x80011880: lui         $at, 0x4008
    ctx->r1 = S32(0X4008 << 16);
    // 0x80011884: mtc1        $at, $f29
    ctx->f_odd[(29 - 1) * 2] = ctx->r1;
    // 0x80011888: subu        $t5, $t5, $s0
    ctx->r13 = SUB32(ctx->r13, ctx->r16);
    // 0x8001188C: lui         $t6, 0x8030
    ctx->r14 = S32(0X8030 << 16);
    // 0x80011890: addiu       $t6, $t6, -0x1FE0
    ctx->r14 = ADD32(ctx->r14, -0X1FE0);
    // 0x80011894: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80011898: lui         $at, 0x4012
    ctx->r1 = S32(0X4012 << 16);
    // 0x8001189C: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x800118A0: lui         $fp, 0x800A
    ctx->r30 = S32(0X800A << 16);
    // 0x800118A4: lui         $s7, 0x2
    ctx->r23 = S32(0X2 << 16);
    // 0x800118A8: lui         $s6, 0x8011
    ctx->r22 = S32(0X8011 << 16);
    // 0x800118AC: mtc1        $at, $f27
    ctx->f_odd[(27 - 1) * 2] = ctx->r1;
    // 0x800118B0: mtc1        $zero, $f28
    ctx->f28.u32l = 0;
    // 0x800118B4: mtc1        $zero, $f26
    ctx->f26.u32l = 0;
    // 0x800118B8: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x800118BC: lw          $s3, 0xD4($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XD4);
    // 0x800118C0: addiu       $s6, $s6, -0x2F98
    ctx->r22 = ADD32(ctx->r22, -0X2F98);
    // 0x800118C4: ori         $s7, $s7, 0x8000
    ctx->r23 = ctx->r23 | 0X8000;
    // 0x800118C8: addiu       $fp, $fp, -0x2564
    ctx->r30 = ADD32(ctx->r30, -0X2564);
    // 0x800118CC: sw          $t7, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r15;
L_800118D0:
    // 0x800118D0: lw          $t8, 0x74($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X74);
    // 0x800118D4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800118D8: lh          $s4, 0x8($t8)
    ctx->r20 = MEM_H(ctx->r24, 0X8);
    // 0x800118DC: lwc1        $f0, 0x4710($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X4710);
    // 0x800118E0: mtc1        $s4, $f8
    ctx->f8.u32l = ctx->r20;
    // 0x800118E4: lw          $v0, 0x4($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X4);
    // 0x800118E8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800118EC: lw          $s0, 0x0($t8)
    ctx->r16 = MEM_W(ctx->r24, 0X0);
    // 0x800118F0: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x800118F4: sub.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x800118F8: sw          $v0, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r2;
    // 0x800118FC: div.s       $f24, $f16, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f24.fl = DIV_S(ctx->f16.fl, ctx->f0.fl);
    // 0x80011900: blez        $v0, L_80012074
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80011904: mov.s       $f22, $f24
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    ctx->f22.fl = ctx->f24.fl;
            goto L_80012074;
    }
    // 0x80011904: mov.s       $f22, $f24
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    ctx->f22.fl = ctx->f24.fl;
L_80011908:
    // 0x80011908: lw          $t9, 0x0($s6)
    ctx->r25 = MEM_W(ctx->r22, 0X0);
    // 0x8001190C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80011910: addu        $t1, $t9, $s7
    ctx->r9 = ADD32(ctx->r25, ctx->r23);
    // 0x80011914: lbu         $t2, 0x9A2($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X9A2);
    // 0x80011918: lwc1        $f6, 0x100($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X100);
    // 0x8001191C: bne         $t2, $at, L_80011978
    if (ctx->r10 != ctx->r1) {
        // 0x80011920: nop
    
            goto L_80011978;
    }
    // 0x80011920: nop

    // 0x80011924: lwc1        $f4, 0x100($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X100);
    // 0x80011928: lwc1        $f18, 0x108($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X108);
    // 0x8001192C: mul.s       $f6, $f22, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f22.fl, ctx->f4.fl);
    // 0x80011930: lwc1        $f10, 0x0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X0);
    // 0x80011934: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80011938: sub.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x8001193C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80011940: sub.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x80011944: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x80011948: swc1        $f16, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f16.u32l;
    // 0x8001194C: lwc1        $f10, 0xFC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XFC);
    // 0x80011950: lwc1        $f4, 0x104($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X104);
    // 0x80011954: mul.s       $f8, $f24, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f24.fl, ctx->f10.fl);
    // 0x80011958: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8001195C: div.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f18.fl);
    // 0x80011960: lwc1        $f10, 0x4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X4);
    // 0x80011964: div.s       $f4, $f8, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = DIV_S(ctx->f8.fl, ctx->f16.fl);
    // 0x80011968: sub.s       $f18, $f6, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x8001196C: sub.s       $f8, $f10, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f18.fl;
    // 0x80011970: b           L_800119B8
    // 0x80011974: swc1        $f8, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f8.u32l;
        goto L_800119B8;
    // 0x80011974: swc1        $f8, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f8.u32l;
L_80011978:
    // 0x80011978: mul.s       $f4, $f22, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f22.fl, ctx->f6.fl);
    // 0x8001197C: lwc1        $f16, 0x108($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X108);
    // 0x80011980: lwc1        $f18, 0x0($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X0);
    // 0x80011984: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80011988: add.s       $f10, $f16, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x8001198C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80011990: sub.s       $f8, $f18, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f10.fl;
    // 0x80011994: swc1        $f8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f8.u32l;
    // 0x80011998: lwc1        $f6, 0xFC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XFC);
    // 0x8001199C: lwc1        $f10, 0x104($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X104);
    // 0x800119A0: mul.s       $f16, $f24, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = MUL_S(ctx->f24.fl, ctx->f6.fl);
    // 0x800119A4: lwc1        $f6, 0x4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4);
    // 0x800119A8: div.s       $f18, $f16, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = DIV_S(ctx->f16.fl, ctx->f4.fl);
    // 0x800119AC: add.s       $f8, $f10, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x800119B0: sub.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x800119B4: swc1        $f16, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f16.u32l;
L_800119B8:
    // 0x800119B8: lwc1        $f12, 0x0($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X0);
    // 0x800119BC: nop

    // 0x800119C0: c.lt.s      $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f12.fl < ctx->f20.fl;
    // 0x800119C4: nop

    // 0x800119C8: bc1f        L_80011A4C
    if (!c1cs) {
        // 0x800119CC: nop
    
            goto L_80011A4C;
    }
    // 0x800119CC: nop

    // 0x800119D0: lw          $v0, 0x0($fp)
    ctx->r2 = MEM_W(ctx->r30, 0X0);
    // 0x800119D4: nop

    // 0x800119D8: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x800119DC: nop

    // 0x800119E0: cvt.s.w     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800119E4: nop

    // 0x800119E8: div.s       $f2, $f12, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = DIV_S(ctx->f12.fl, ctx->f10.fl);
    // 0x800119EC: c.lt.s      $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f2.fl < ctx->f20.fl;
    // 0x800119F0: nop

    // 0x800119F4: bc1f        L_80011A04
    if (!c1cs) {
        // 0x800119F8: nop
    
            goto L_80011A04;
    }
    // 0x800119F8: nop

    // 0x800119FC: b           L_80011A08
    // 0x80011A00: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
        goto L_80011A08;
    // 0x80011A00: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
L_80011A04:
    // 0x80011A04: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_80011A08:
    // 0x80011A08: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x80011A0C: nop

    // 0x80011A10: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x80011A14: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80011A18: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80011A1C: nop

    // 0x80011A20: cvt.w.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    ctx->f18.u32l = CVT_W_S(ctx->f0.fl);
    // 0x80011A24: mfc1        $t4, $f18
    ctx->r12 = (int32_t)ctx->f18.u32l;
    // 0x80011A28: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x80011A2C: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x80011A30: multu       $t5, $v0
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80011A34: mflo        $t6
    ctx->r14 = lo;
    // 0x80011A38: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x80011A3C: nop

    // 0x80011A40: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80011A44: add.s       $f16, $f12, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f12.fl + ctx->f8.fl;
    // 0x80011A48: swc1        $f16, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f16.u32l;
L_80011A4C:
    // 0x80011A4C: lwc1        $f12, 0x4($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X4);
    // 0x80011A50: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x80011A54: c.lt.s      $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f12.fl < ctx->f20.fl;
    // 0x80011A58: nop

    // 0x80011A5C: bc1f        L_80011AE0
    if (!c1cs) {
        // 0x80011A60: nop
    
            goto L_80011AE0;
    }
    // 0x80011A60: nop

    // 0x80011A64: lw          $v0, -0x2560($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2560);
    // 0x80011A68: nop

    // 0x80011A6C: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x80011A70: nop

    // 0x80011A74: cvt.s.w     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80011A78: nop

    // 0x80011A7C: div.s       $f2, $f12, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = DIV_S(ctx->f12.fl, ctx->f10.fl);
    // 0x80011A80: c.lt.s      $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f2.fl < ctx->f20.fl;
    // 0x80011A84: nop

    // 0x80011A88: bc1f        L_80011A98
    if (!c1cs) {
        // 0x80011A8C: nop
    
            goto L_80011A98;
    }
    // 0x80011A8C: nop

    // 0x80011A90: b           L_80011A9C
    // 0x80011A94: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
        goto L_80011A9C;
    // 0x80011A94: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
L_80011A98:
    // 0x80011A98: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_80011A9C:
    // 0x80011A9C: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x80011AA0: nop

    // 0x80011AA4: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x80011AA8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80011AAC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80011AB0: nop

    // 0x80011AB4: cvt.w.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    ctx->f18.u32l = CVT_W_S(ctx->f0.fl);
    // 0x80011AB8: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
    // 0x80011ABC: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80011AC0: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80011AC4: multu       $t9, $v0
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80011AC8: mflo        $t1
    ctx->r9 = lo;
    // 0x80011ACC: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x80011AD0: nop

    // 0x80011AD4: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80011AD8: add.s       $f16, $f12, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f12.fl + ctx->f8.fl;
    // 0x80011ADC: swc1        $f16, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f16.u32l;
L_80011AE0:
    // 0x80011AE0: lw          $v0, 0x0($fp)
    ctx->r2 = MEM_W(ctx->r30, 0X0);
    // 0x80011AE4: lwc1        $f12, 0x0($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X0);
    // 0x80011AE8: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x80011AEC: nop

    // 0x80011AF0: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80011AF4: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x80011AF8: nop

    // 0x80011AFC: bc1f        L_80011B64
    if (!c1cs) {
        // 0x80011B00: nop
    
            goto L_80011B64;
    }
    // 0x80011B00: nop

    // 0x80011B04: div.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f12.fl, ctx->f0.fl);
    // 0x80011B08: c.lt.s      $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f2.fl < ctx->f20.fl;
    // 0x80011B0C: nop

    // 0x80011B10: bc1f        L_80011B20
    if (!c1cs) {
        // 0x80011B14: nop
    
            goto L_80011B20;
    }
    // 0x80011B14: nop

    // 0x80011B18: b           L_80011B24
    // 0x80011B1C: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
        goto L_80011B24;
    // 0x80011B1C: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
L_80011B20:
    // 0x80011B20: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_80011B24:
    // 0x80011B24: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x80011B28: nop

    // 0x80011B2C: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x80011B30: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80011B34: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80011B38: nop

    // 0x80011B3C: cvt.w.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = CVT_W_S(ctx->f0.fl);
    // 0x80011B40: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x80011B44: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x80011B48: multu       $t3, $v0
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80011B4C: mflo        $t4
    ctx->r12 = lo;
    // 0x80011B50: mtc1        $t4, $f18
    ctx->f18.u32l = ctx->r12;
    // 0x80011B54: nop

    // 0x80011B58: cvt.s.w     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80011B5C: sub.s       $f8, $f12, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f12.fl - ctx->f6.fl;
    // 0x80011B60: swc1        $f8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f8.u32l;
L_80011B64:
    // 0x80011B64: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x80011B68: lw          $v0, -0x2560($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2560);
    // 0x80011B6C: lwc1        $f12, 0x4($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X4);
    // 0x80011B70: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x80011B74: lui         $t2, 0xFA00
    ctx->r10 = S32(0XFA00 << 16);
    // 0x80011B78: cvt.s.w     $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80011B7C: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x80011B80: nop

    // 0x80011B84: bc1f        L_80011BEC
    if (!c1cs) {
        // 0x80011B88: nop
    
            goto L_80011BEC;
    }
    // 0x80011B88: nop

    // 0x80011B8C: div.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f12.fl, ctx->f0.fl);
    // 0x80011B90: c.lt.s      $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f2.fl < ctx->f20.fl;
    // 0x80011B94: nop

    // 0x80011B98: bc1f        L_80011BA8
    if (!c1cs) {
        // 0x80011B9C: nop
    
            goto L_80011BA8;
    }
    // 0x80011B9C: nop

    // 0x80011BA0: b           L_80011BAC
    // 0x80011BA4: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
        goto L_80011BAC;
    // 0x80011BA4: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
L_80011BA8:
    // 0x80011BA8: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_80011BAC:
    // 0x80011BAC: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x80011BB0: nop

    // 0x80011BB4: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x80011BB8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80011BBC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80011BC0: nop

    // 0x80011BC4: cvt.w.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = CVT_W_S(ctx->f0.fl);
    // 0x80011BC8: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
    // 0x80011BCC: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x80011BD0: multu       $t6, $v0
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80011BD4: mflo        $t7
    ctx->r15 = lo;
    // 0x80011BD8: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x80011BDC: nop

    // 0x80011BE0: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80011BE4: sub.s       $f6, $f12, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f12.fl - ctx->f18.fl;
    // 0x80011BE8: swc1        $f6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f6.u32l;
L_80011BEC:
    // 0x80011BEC: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x80011BF0: lw          $v0, -0x24E0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X24E0);
    // 0x80011BF4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80011BF8: beq         $v0, $at, L_80011D8C
    if (ctx->r2 == ctx->r1) {
        // 0x80011BFC: lui         $t6, 0xFCFF
        ctx->r14 = S32(0XFCFF << 16);
            goto L_80011D8C;
    }
    // 0x80011BFC: lui         $t6, 0xFCFF
    ctx->r14 = S32(0XFCFF << 16);
    // 0x80011C00: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80011C04: beq         $v0, $at, L_80011C1C
    if (ctx->r2 == ctx->r1) {
        // 0x80011C08: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80011C1C;
    }
    // 0x80011C08: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80011C0C: beq         $v0, $at, L_80011E18
    if (ctx->r2 == ctx->r1) {
        // 0x80011C10: nop
    
            goto L_80011E18;
    }
    // 0x80011C10: nop

    // 0x80011C14: b           L_80012048
    // 0x80011C18: nop

        goto L_80012048;
    // 0x80011C18: nop

L_80011C1C:
    // 0x80011C1C: jal         0x8000DFBC
    // 0x80011C20: addiu       $s3, $zero, 0x80
    ctx->r19 = ADD32(0, 0X80);
    func_8000DFBC(rdram, ctx);
        goto after_1;
    // 0x80011C20: addiu       $s3, $zero, 0x80
    ctx->r19 = ADD32(0, 0X80);
    after_1:
    // 0x80011C24: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x80011C28: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x80011C2C: mfhi        $a0
    ctx->r4 = hi;
    // 0x80011C30: andi        $t8, $a0, 0x1
    ctx->r24 = ctx->r4 & 0X1;
    // 0x80011C34: beq         $t8, $zero, L_80011C44
    if (ctx->r24 == 0) {
        // 0x80011C38: negu        $v0, $a0
        ctx->r2 = SUB32(0, ctx->r4);
            goto L_80011C44;
    }
    // 0x80011C38: negu        $v0, $a0
    ctx->r2 = SUB32(0, ctx->r4);
    // 0x80011C3C: b           L_80011C44
    // 0x80011C40: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
        goto L_80011C44;
    // 0x80011C40: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_80011C44:
    // 0x80011C44: lh          $t9, 0xA($s0)
    ctx->r25 = MEM_H(ctx->r16, 0XA);
    // 0x80011C48: andi        $t3, $a0, 0x4
    ctx->r11 = ctx->r4 & 0X4;
    // 0x80011C4C: addu        $t1, $t9, $v0
    ctx->r9 = ADD32(ctx->r25, ctx->r2);
    // 0x80011C50: sh          $t1, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r9;
    // 0x80011C54: lh          $v1, 0xA($s0)
    ctx->r3 = MEM_H(ctx->r16, 0XA);
    // 0x80011C58: nop

    // 0x80011C5C: slti        $at, $v1, 0x65
    ctx->r1 = SIGNED(ctx->r3) < 0X65 ? 1 : 0;
    // 0x80011C60: beq         $at, $zero, L_80011C84
    if (ctx->r1 == 0) {
        // 0x80011C64: slti        $at, $v1, -0x64
        ctx->r1 = SIGNED(ctx->r3) < -0X64 ? 1 : 0;
            goto L_80011C84;
    }
    // 0x80011C64: slti        $at, $v1, -0x64
    ctx->r1 = SIGNED(ctx->r3) < -0X64 ? 1 : 0;
    // 0x80011C68: bne         $at, $zero, L_80011C84
    if (ctx->r1 != 0) {
        // 0x80011C6C: nop
    
            goto L_80011C84;
    }
    // 0x80011C6C: nop

    // 0x80011C70: lh          $t2, 0x8($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X8);
    // 0x80011C74: nop

    // 0x80011C78: slti        $at, $t2, 0x12D
    ctx->r1 = SIGNED(ctx->r10) < 0X12D ? 1 : 0;
    // 0x80011C7C: bne         $at, $zero, L_80011CF0
    if (ctx->r1 != 0) {
        // 0x80011C80: nop
    
            goto L_80011CF0;
    }
    // 0x80011C80: nop

L_80011C84:
    // 0x80011C84: lh          $v1, 0x8($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X8);
    // 0x80011C88: beq         $t3, $zero, L_80011C98
    if (ctx->r11 == 0) {
        // 0x80011C8C: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80011C98;
    }
    // 0x80011C8C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80011C90: b           L_80011C98
    // 0x80011C94: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80011C98;
    // 0x80011C94: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80011C98:
    // 0x80011C98: sll         $t4, $v0, 4
    ctx->r12 = S32(ctx->r2 << 4);
    // 0x80011C9C: subu        $t4, $t4, $v0
    ctx->r12 = SUB32(ctx->r12, ctx->r2);
    // 0x80011CA0: sh          $t4, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r12;
    // 0x80011CA4: bgez        $a0, L_80011CB4
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80011CA8: sra         $t5, $a0, 2
        ctx->r13 = S32(SIGNED(ctx->r4) >> 2);
            goto L_80011CB4;
    }
    // 0x80011CA8: sra         $t5, $a0, 2
    ctx->r13 = S32(SIGNED(ctx->r4) >> 2);
    // 0x80011CAC: addiu       $at, $a0, 0x3
    ctx->r1 = ADD32(ctx->r4, 0X3);
    // 0x80011CB0: sra         $t5, $at, 2
    ctx->r13 = S32(SIGNED(ctx->r1) >> 2);
L_80011CB4:
    // 0x80011CB4: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x80011CB8: div         $zero, $v1, $t6
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r14))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r14)));
    // 0x80011CBC: bne         $t6, $zero, L_80011CC8
    if (ctx->r14 != 0) {
        // 0x80011CC0: nop
    
            goto L_80011CC8;
    }
    // 0x80011CC0: nop

    // 0x80011CC4: break       7
    do_break(2147556548);
L_80011CC8:
    // 0x80011CC8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80011CCC: bne         $t6, $at, L_80011CE0
    if (ctx->r14 != ctx->r1) {
        // 0x80011CD0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80011CE0;
    }
    // 0x80011CD0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80011CD4: bne         $v1, $at, L_80011CE0
    if (ctx->r3 != ctx->r1) {
        // 0x80011CD8: nop
    
            goto L_80011CE0;
    }
    // 0x80011CD8: nop

    // 0x80011CDC: break       6
    do_break(2147556572);
L_80011CE0:
    // 0x80011CE0: mflo        $t7
    ctx->r15 = lo;
    // 0x80011CE4: sh          $t7, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r15;
    // 0x80011CE8: b           L_80011D4C
    // 0x80011CEC: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
        goto L_80011D4C;
    // 0x80011CEC: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
L_80011CF0:
    // 0x80011CF0: mtc1        $s4, $f8
    ctx->f8.u32l = ctx->r20;
    // 0x80011CF4: mtc1        $v1, $f16
    ctx->f16.u32l = ctx->r3;
    // 0x80011CF8: cvt.d.w     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    ctx->f0.d = CVT_D_W(ctx->f8.u32l);
    // 0x80011CFC: addiu       $t8, $zero, 0x96
    ctx->r24 = ADD32(0, 0X96);
    // 0x80011D00: sh          $t8, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r24;
    // 0x80011D04: mul.d       $f10, $f26, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f26.d); NAN_CHECK(ctx->f0.d); 
    ctx->f10.d = MUL_D(ctx->f26.d, ctx->f0.d);
    // 0x80011D08: cvt.s.w     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80011D0C: lh          $t9, 0x8($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X8);
    // 0x80011D10: lwc1        $f8, 0x0($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X0);
    // 0x80011D14: cvt.s.d     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f18.fl = CVT_S_D(ctx->f10.d);
    // 0x80011D18: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x80011D1C: div.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f18.fl);
    // 0x80011D20: mul.d       $f18, $f28, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f28.d); NAN_CHECK(ctx->f0.d); 
    ctx->f18.d = MUL_D(ctx->f28.d, ctx->f0.d);
    // 0x80011D24: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80011D28: add.s       $f16, $f8, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x80011D2C: cvt.s.d     $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f8.fl = CVT_S_D(ctx->f18.d);
    // 0x80011D30: swc1        $f16, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f16.u32l;
    // 0x80011D34: div.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
    // 0x80011D38: lwc1        $f16, 0x4($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X4);
    // 0x80011D3C: nop

    // 0x80011D40: add.s       $f10, $f16, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x80011D44: swc1        $f10, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f10.u32l;
    // 0x80011D48: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
L_80011D4C:
    // 0x80011D4C: lui         $t2, 0xFA00
    ctx->r10 = S32(0XFA00 << 16);
    // 0x80011D50: addiu       $t1, $v0, 0x8
    ctx->r9 = ADD32(ctx->r2, 0X8);
    // 0x80011D54: sw          $t1, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r9;
    // 0x80011D58: addiu       $t3, $zero, -0x80
    ctx->r11 = ADD32(0, -0X80);
    // 0x80011D5C: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
    // 0x80011D60: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    // 0x80011D64: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x80011D68: lui         $t5, 0xFCFF
    ctx->r13 = S32(0XFCFF << 16);
    // 0x80011D6C: lui         $t6, 0xFFFD
    ctx->r14 = S32(0XFFFD << 16);
    // 0x80011D70: addiu       $t4, $v0, 0x8
    ctx->r12 = ADD32(ctx->r2, 0X8);
    // 0x80011D74: sw          $t4, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r12;
    // 0x80011D78: ori         $t6, $t6, 0xF6FB
    ctx->r14 = ctx->r14 | 0XF6FB;
    // 0x80011D7C: ori         $t5, $t5, 0xFFFF
    ctx->r13 = ctx->r13 | 0XFFFF;
    // 0x80011D80: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x80011D84: b           L_80012048
    // 0x80011D88: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
        goto L_80012048;
    // 0x80011D88: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
L_80011D8C:
    // 0x80011D8C: mtc1        $s4, $f8
    ctx->f8.u32l = ctx->r20;
    // 0x80011D90: lwc1        $f18, 0x4($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X4);
    // 0x80011D94: cvt.d.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.d = CVT_D_W(ctx->f8.u32l);
    // 0x80011D98: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x80011D9C: addiu       $s3, $zero, 0xE
    ctx->r19 = ADD32(0, 0XE);
    // 0x80011DA0: div.d       $f6, $f30, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f30.d); NAN_CHECK(ctx->f16.d); 
    ctx->f6.d = DIV_D(ctx->f30.d, ctx->f16.d);
    // 0x80011DA4: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x80011DA8: ori         $t6, $t6, 0xFFFF
    ctx->r14 = ctx->r14 | 0XFFFF;
    // 0x80011DAC: add.d       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = ctx->f4.d + ctx->f6.d;
    // 0x80011DB0: cvt.s.d     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f18.fl = CVT_S_D(ctx->f10.d);
    // 0x80011DB4: swc1        $f18, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f18.u32l;
    // 0x80011DB8: lw          $t7, 0x0($s6)
    ctx->r15 = MEM_W(ctx->r22, 0X0);
    // 0x80011DBC: nop

    // 0x80011DC0: addu        $t8, $t7, $s7
    ctx->r24 = ADD32(ctx->r15, ctx->r23);
    // 0x80011DC4: lbu         $t9, 0x9A2($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X9A2);
    // 0x80011DC8: lui         $t7, 0xFFFD
    ctx->r15 = S32(0XFFFD << 16);
    // 0x80011DCC: bne         $t9, $at, L_80011DDC
    if (ctx->r25 != ctx->r1) {
        // 0x80011DD0: nop
    
            goto L_80011DDC;
    }
    // 0x80011DD0: nop

    // 0x80011DD4: b           L_80011DDC
    // 0x80011DD8: addiu       $s3, $zero, 0xA
    ctx->r19 = ADD32(0, 0XA);
        goto L_80011DDC;
    // 0x80011DD8: addiu       $s3, $zero, 0xA
    ctx->r19 = ADD32(0, 0XA);
L_80011DDC:
    // 0x80011DDC: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x80011DE0: andi        $t3, $s3, 0xFF
    ctx->r11 = ctx->r19 & 0XFF;
    // 0x80011DE4: addiu       $t1, $v0, 0x8
    ctx->r9 = ADD32(ctx->r2, 0X8);
    // 0x80011DE8: sw          $t1, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r9;
    // 0x80011DEC: addiu       $at, $zero, -0x100
    ctx->r1 = ADD32(0, -0X100);
    // 0x80011DF0: or          $t4, $t3, $at
    ctx->r12 = ctx->r11 | ctx->r1;
    // 0x80011DF4: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x80011DF8: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    // 0x80011DFC: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x80011E00: ori         $t7, $t7, 0xF6FB
    ctx->r15 = ctx->r15 | 0XF6FB;
    // 0x80011E04: addiu       $t5, $v0, 0x8
    ctx->r13 = ADD32(ctx->r2, 0X8);
    // 0x80011E08: sw          $t5, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r13;
    // 0x80011E0C: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x80011E10: b           L_80012048
    // 0x80011E14: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
        goto L_80012048;
    // 0x80011E14: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
L_80011E18:
    // 0x80011E18: lui         $s2, 0x800A
    ctx->r18 = S32(0X800A << 16);
    // 0x80011E1C: addiu       $s2, $s2, -0x2968
    ctx->r18 = ADD32(ctx->r18, -0X2968);
    // 0x80011E20: jal         0x8000DFBC
    // 0x80011E24: addiu       $s3, $zero, 0xFF
    ctx->r19 = ADD32(0, 0XFF);
    func_8000DFBC(rdram, ctx);
        goto after_2;
    // 0x80011E24: addiu       $s3, $zero, 0xFF
    ctx->r19 = ADD32(0, 0XFF);
    after_2:
    // 0x80011E28: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x80011E2C: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x80011E30: mfhi        $a0
    ctx->r4 = hi;
    // 0x80011E34: andi        $t8, $a0, 0x1
    ctx->r24 = ctx->r4 & 0X1;
    // 0x80011E38: beq         $t8, $zero, L_80011E48
    if (ctx->r24 == 0) {
        // 0x80011E3C: negu        $v0, $a0
        ctx->r2 = SUB32(0, ctx->r4);
            goto L_80011E48;
    }
    // 0x80011E3C: negu        $v0, $a0
    ctx->r2 = SUB32(0, ctx->r4);
    // 0x80011E40: b           L_80011E48
    // 0x80011E44: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
        goto L_80011E48;
    // 0x80011E44: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_80011E48:
    // 0x80011E48: lh          $t9, 0xA($s0)
    ctx->r25 = MEM_H(ctx->r16, 0XA);
    // 0x80011E4C: andi        $t3, $a0, 0x4
    ctx->r11 = ctx->r4 & 0X4;
    // 0x80011E50: addu        $t1, $t9, $v0
    ctx->r9 = ADD32(ctx->r25, ctx->r2);
    // 0x80011E54: sh          $t1, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r9;
    // 0x80011E58: lh          $v1, 0xA($s0)
    ctx->r3 = MEM_H(ctx->r16, 0XA);
    // 0x80011E5C: nop

    // 0x80011E60: slti        $at, $v1, 0x65
    ctx->r1 = SIGNED(ctx->r3) < 0X65 ? 1 : 0;
    // 0x80011E64: beq         $at, $zero, L_80011E88
    if (ctx->r1 == 0) {
        // 0x80011E68: slti        $at, $v1, -0x64
        ctx->r1 = SIGNED(ctx->r3) < -0X64 ? 1 : 0;
            goto L_80011E88;
    }
    // 0x80011E68: slti        $at, $v1, -0x64
    ctx->r1 = SIGNED(ctx->r3) < -0X64 ? 1 : 0;
    // 0x80011E6C: bne         $at, $zero, L_80011E88
    if (ctx->r1 != 0) {
        // 0x80011E70: nop
    
            goto L_80011E88;
    }
    // 0x80011E70: nop

    // 0x80011E74: lh          $t2, 0x8($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X8);
    // 0x80011E78: nop

    // 0x80011E7C: slti        $at, $t2, 0x12D
    ctx->r1 = SIGNED(ctx->r10) < 0X12D ? 1 : 0;
    // 0x80011E80: bne         $at, $zero, L_80011EF4
    if (ctx->r1 != 0) {
        // 0x80011E84: nop
    
            goto L_80011EF4;
    }
    // 0x80011E84: nop

L_80011E88:
    // 0x80011E88: lh          $v1, 0x8($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X8);
    // 0x80011E8C: beq         $t3, $zero, L_80011E9C
    if (ctx->r11 == 0) {
        // 0x80011E90: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80011E9C;
    }
    // 0x80011E90: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80011E94: b           L_80011E9C
    // 0x80011E98: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80011E9C;
    // 0x80011E98: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80011E9C:
    // 0x80011E9C: sll         $t4, $v0, 4
    ctx->r12 = S32(ctx->r2 << 4);
    // 0x80011EA0: subu        $t4, $t4, $v0
    ctx->r12 = SUB32(ctx->r12, ctx->r2);
    // 0x80011EA4: sh          $t4, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r12;
    // 0x80011EA8: bgez        $a0, L_80011EB8
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80011EAC: sra         $t5, $a0, 2
        ctx->r13 = S32(SIGNED(ctx->r4) >> 2);
            goto L_80011EB8;
    }
    // 0x80011EAC: sra         $t5, $a0, 2
    ctx->r13 = S32(SIGNED(ctx->r4) >> 2);
    // 0x80011EB0: addiu       $at, $a0, 0x3
    ctx->r1 = ADD32(ctx->r4, 0X3);
    // 0x80011EB4: sra         $t5, $at, 2
    ctx->r13 = S32(SIGNED(ctx->r1) >> 2);
L_80011EB8:
    // 0x80011EB8: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x80011EBC: div         $zero, $v1, $t6
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r14))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r14)));
    // 0x80011EC0: bne         $t6, $zero, L_80011ECC
    if (ctx->r14 != 0) {
        // 0x80011EC4: nop
    
            goto L_80011ECC;
    }
    // 0x80011EC4: nop

    // 0x80011EC8: break       7
    do_break(2147557064);
L_80011ECC:
    // 0x80011ECC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80011ED0: bne         $t6, $at, L_80011EE4
    if (ctx->r14 != ctx->r1) {
        // 0x80011ED4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80011EE4;
    }
    // 0x80011ED4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80011ED8: bne         $v1, $at, L_80011EE4
    if (ctx->r3 != ctx->r1) {
        // 0x80011EDC: nop
    
            goto L_80011EE4;
    }
    // 0x80011EDC: nop

    // 0x80011EE0: break       6
    do_break(2147557088);
L_80011EE4:
    // 0x80011EE4: mflo        $t7
    ctx->r15 = lo;
    // 0x80011EE8: sh          $t7, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r15;
    // 0x80011EEC: b           L_80011F44
    // 0x80011EF0: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
        goto L_80011F44;
    // 0x80011EF0: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
L_80011EF4:
    // 0x80011EF4: sll         $t9, $s4, 2
    ctx->r25 = S32(ctx->r20 << 2);
    // 0x80011EF8: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80011EFC: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x80011F00: cvt.s.w     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    ctx->f0.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80011F04: addiu       $t8, $zero, 0x96
    ctx->r24 = ADD32(0, 0X96);
    // 0x80011F08: sh          $t8, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r24;
    // 0x80011F0C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80011F10: lh          $t1, 0x8($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X8);
    // 0x80011F14: lwc1        $f16, 0x0($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X0);
    // 0x80011F18: div.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80011F1C: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x80011F20: lwc1        $f8, 0x4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X4);
    // 0x80011F24: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80011F28: add.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x80011F2C: nop

    // 0x80011F30: div.s       $f16, $f6, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80011F34: swc1        $f18, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f18.u32l;
    // 0x80011F38: add.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x80011F3C: swc1        $f10, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f10.u32l;
    // 0x80011F40: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
L_80011F44:
    // 0x80011F44: lui         $t3, 0xBA00
    ctx->r11 = S32(0XBA00 << 16);
    // 0x80011F48: addiu       $t2, $v0, 0x8
    ctx->r10 = ADD32(ctx->r2, 0X8);
    // 0x80011F4C: sw          $t2, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r10;
    // 0x80011F50: ori         $t3, $t3, 0xE02
    ctx->r11 = ctx->r11 | 0XE02;
    // 0x80011F54: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    // 0x80011F58: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80011F5C: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x80011F60: lui         $t5, 0xFD70
    ctx->r13 = S32(0XFD70 << 16);
    // 0x80011F64: addiu       $t4, $v0, 0x8
    ctx->r12 = ADD32(ctx->r2, 0X8);
    // 0x80011F68: sw          $t4, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r12;
    // 0x80011F6C: sw          $s2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r18;
    // 0x80011F70: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x80011F74: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x80011F78: lui         $t8, 0x70C
    ctx->r24 = S32(0X70C << 16);
    // 0x80011F7C: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x80011F80: sw          $t6, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r14;
    // 0x80011F84: ori         $t8, $t8, 0x300
    ctx->r24 = ctx->r24 | 0X300;
    // 0x80011F88: lui         $t7, 0xF570
    ctx->r15 = S32(0XF570 << 16);
    // 0x80011F8C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80011F90: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x80011F94: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x80011F98: lui         $t1, 0xE600
    ctx->r9 = S32(0XE600 << 16);
    // 0x80011F9C: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x80011FA0: sw          $t9, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r25;
    // 0x80011FA4: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80011FA8: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x80011FAC: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x80011FB0: lui         $t4, 0x71F
    ctx->r12 = S32(0X71F << 16);
    // 0x80011FB4: addiu       $t2, $v0, 0x8
    ctx->r10 = ADD32(ctx->r2, 0X8);
    // 0x80011FB8: sw          $t2, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r10;
    // 0x80011FBC: ori         $t4, $t4, 0xF080
    ctx->r12 = ctx->r12 | 0XF080;
    // 0x80011FC0: lui         $t3, 0xF300
    ctx->r11 = S32(0XF300 << 16);
    // 0x80011FC4: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    // 0x80011FC8: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x80011FCC: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x80011FD0: lui         $t6, 0xE700
    ctx->r14 = S32(0XE700 << 16);
    // 0x80011FD4: addiu       $t5, $v0, 0x8
    ctx->r13 = ADD32(ctx->r2, 0X8);
    // 0x80011FD8: sw          $t5, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r13;
    // 0x80011FDC: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80011FE0: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x80011FE4: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x80011FE8: lui         $t9, 0xC
    ctx->r25 = S32(0XC << 16);
    // 0x80011FEC: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x80011FF0: sw          $t7, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r15;
    // 0x80011FF4: lui         $t8, 0xF568
    ctx->r24 = S32(0XF568 << 16);
    // 0x80011FF8: ori         $t8, $t8, 0x2000
    ctx->r24 = ctx->r24 | 0X2000;
    // 0x80011FFC: ori         $t9, $t9, 0x300
    ctx->r25 = ctx->r25 | 0X300;
    // 0x80012000: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x80012004: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x80012008: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x8001200C: lui         $t3, 0x1F
    ctx->r11 = S32(0X1F << 16);
    // 0x80012010: addiu       $t1, $v0, 0x8
    ctx->r9 = ADD32(ctx->r2, 0X8);
    // 0x80012014: sw          $t1, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r9;
    // 0x80012018: ori         $t3, $t3, 0xC01C
    ctx->r11 = ctx->r11 | 0XC01C;
    // 0x8001201C: lui         $t2, 0xF200
    ctx->r10 = S32(0XF200 << 16);
    // 0x80012020: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    // 0x80012024: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
    // 0x80012028: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x8001202C: lui         $t5, 0xFC30
    ctx->r13 = S32(0XFC30 << 16);
    // 0x80012030: addiu       $t4, $v0, 0x8
    ctx->r12 = ADD32(ctx->r2, 0X8);
    // 0x80012034: sw          $t4, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r12;
    // 0x80012038: ori         $t5, $t5, 0xFE61
    ctx->r13 = ctx->r13 | 0XFE61;
    // 0x8001203C: addiu       $t6, $zero, -0xC07
    ctx->r14 = ADD32(0, -0XC07);
    // 0x80012040: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x80012044: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
L_80012048:
    // 0x80012048: blez        $s3, L_80012064
    if (SIGNED(ctx->r19) <= 0) {
        // 0x8001204C: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80012064;
    }
    // 0x8001204C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80012050: sll         $a2, $s4, 16
    ctx->r6 = S32(ctx->r20 << 16);
    // 0x80012054: sra         $t7, $a2, 16
    ctx->r15 = S32(SIGNED(ctx->r6) >> 16);
    // 0x80012058: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x8001205C: jal         0x8001113C
    // 0x80012060: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001113C(rdram, ctx);
        goto after_3;
    // 0x80012060: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_3:
L_80012064:
    // 0x80012064: lw          $t8, 0xDC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XDC);
    // 0x80012068: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x8001206C: bne         $s5, $t8, L_80011908
    if (ctx->r21 != ctx->r24) {
        // 0x80012070: addiu       $s0, $s0, 0x10
        ctx->r16 = ADD32(ctx->r16, 0X10);
            goto L_80011908;
    }
    // 0x80012070: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
L_80012074:
    // 0x80012074: lw          $t9, 0x74($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X74);
    // 0x80012078: lui         $t2, 0x8030
    ctx->r10 = S32(0X8030 << 16);
    // 0x8001207C: addiu       $t2, $t2, -0x1FE0
    ctx->r10 = ADD32(ctx->r10, -0X1FE0);
    // 0x80012080: addiu       $t1, $t9, -0xC
    ctx->r9 = ADD32(ctx->r25, -0XC);
    // 0x80012084: sltu        $at, $t1, $t2
    ctx->r1 = ctx->r9 < ctx->r10 ? 1 : 0;
    // 0x80012088: beq         $at, $zero, L_800118D0
    if (ctx->r1 == 0) {
        // 0x8001208C: sw          $t1, 0x74($sp)
        MEM_W(0X74, ctx->r29) = ctx->r9;
            goto L_800118D0;
    }
    // 0x8001208C: sw          $t1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r9;
    // 0x80012090: sw          $s3, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r19;
L_80012094:
    // 0x80012094: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x80012098: lui         $t4, 0xE700
    ctx->r12 = S32(0XE700 << 16);
    // 0x8001209C: addiu       $t3, $v0, 0x8
    ctx->r11 = ADD32(ctx->r2, 0X8);
    // 0x800120A0: sw          $t3, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r11;
    // 0x800120A4: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x800120A8: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
L_800120AC:
    // 0x800120AC: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
L_800120B0:
    // 0x800120B0: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800120B4: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800120B8: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x800120BC: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800120C0: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x800120C4: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800120C8: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x800120CC: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x800120D0: lwc1        $f29, 0x38($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x800120D4: lwc1        $f28, 0x3C($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x800120D8: lwc1        $f31, 0x40($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x800120DC: lwc1        $f30, 0x44($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X44);
    // 0x800120E0: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x800120E4: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x800120E8: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x800120EC: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x800120F0: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x800120F4: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x800120F8: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x800120FC: lw          $s7, 0x64($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X64);
    // 0x80012100: lw          $fp, 0x68($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X68);
    // 0x80012104: jr          $ra
    // 0x80012108: addiu       $sp, $sp, 0x110
    ctx->r29 = ADD32(ctx->r29, 0X110);
    return;
    // 0x80012108: addiu       $sp, $sp, 0x110
    ctx->r29 = ADD32(ctx->r29, 0X110);
;}
RECOMP_FUNC void func_8001210C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001210C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80012110: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x80012114: lw          $v0, -0x2F98($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2F98);
    // 0x80012118: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8001211C: ori         $at, $at, 0xA0D8
    ctx->r1 = ctx->r1 | 0XA0D8;
    // 0x80012120: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80012124: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80012128: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8001212C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80012130: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x80012134: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
    // 0x80012138: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8001213C: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x80012140: addiu       $v1, $v1, 0x46F8
    ctx->r3 = ADD32(ctx->r3, 0X46F8);
    // 0x80012144: swc1        $f4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f4.u32l;
    // 0x80012148: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8001214C: lui         $t0, 0x8013
    ctx->r8 = S32(0X8013 << 16);
    // 0x80012150: addiu       $t0, $t0, 0x46FC
    ctx->r8 = ADD32(ctx->r8, 0X46FC);
    // 0x80012154: swc1        $f6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f6.u32l;
    // 0x80012158: lwc1        $f8, 0xC($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0XC);
    // 0x8001215C: lui         $t1, 0x8013
    ctx->r9 = S32(0X8013 << 16);
    // 0x80012160: addiu       $t1, $t1, 0x4700
    ctx->r9 = ADD32(ctx->r9, 0X4700);
    // 0x80012164: swc1        $f8, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f8.u32l;
    // 0x80012168: lwc1        $f10, 0x10($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8001216C: lui         $t2, 0x8013
    ctx->r10 = S32(0X8013 << 16);
    // 0x80012170: addiu       $t2, $t2, 0x4704
    ctx->r10 = ADD32(ctx->r10, 0X4704);
    // 0x80012174: swc1        $f10, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->f10.u32l;
    // 0x80012178: lwc1        $f16, 0x14($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X14);
    // 0x8001217C: lui         $t3, 0x8013
    ctx->r11 = S32(0X8013 << 16);
    // 0x80012180: lwc1        $f4, 0x0($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X0);
    // 0x80012184: lwc1        $f6, 0x0($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X0);
    // 0x80012188: addiu       $t3, $t3, 0x4708
    ctx->r11 = ADD32(ctx->r11, 0X4708);
    // 0x8001218C: swc1        $f16, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->f16.u32l;
    // 0x80012190: lwc1        $f18, 0x18($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X18);
    // 0x80012194: sub.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80012198: lui         $t4, 0x8013
    ctx->r12 = S32(0X8013 << 16);
    // 0x8001219C: lwc1        $f8, 0x0($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X0);
    // 0x800121A0: lwc1        $f10, 0x0($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X0);
    // 0x800121A4: addiu       $t4, $t4, 0x470C
    ctx->r12 = ADD32(ctx->r12, 0X470C);
    // 0x800121A8: mul.s       $f4, $f0, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x800121AC: swc1        $f18, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->f18.u32l;
    // 0x800121B0: lwc1        $f16, 0x0($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X0);
    // 0x800121B4: lwc1        $f18, 0x0($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X0);
    // 0x800121B8: sub.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x800121BC: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x800121C0: sub.s       $f14, $f16, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x800121C4: mul.s       $f10, $f14, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x800121C8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800121CC: jal         0x8007FA40
    // 0x800121D0: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    func_8007FA40(rdram, ctx);
        goto after_0;
    // 0x800121D0: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    after_0:
    // 0x800121D4: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800121D8: addiu       $v0, $v0, 0x4710
    ctx->r2 = ADD32(ctx->r2, 0X4710);
    // 0x800121DC: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x800121E0: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
    // 0x800121E4: addiu       $a0, $a0, -0x2568
    ctx->r4 = ADD32(ctx->r4, -0X2568);
    // 0x800121E8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x800121EC: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x800121F0: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x800121F4: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x800121F8: sltu        $v1, $zero, $v0
    ctx->r3 = 0 < ctx->r2 ? 1 : 0;
    // 0x800121FC: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x80012200: beq         $v1, $zero, L_80012228
    if (ctx->r3 == 0) {
        // 0x80012204: sw          $t6, 0x0($a0)
        MEM_W(0X0, ctx->r4) = ctx->r14;
            goto L_80012228;
    }
    // 0x80012204: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x80012208: jal         0x800122B4
    // 0x8001220C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_800122B4(rdram, ctx);
        goto after_1;
    // 0x8001220C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_1:
    // 0x80012210: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80012214: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x80012218: jal         0x80012394
    // 0x8001221C: nop

    func_80012394(rdram, ctx);
        goto after_2;
    // 0x8001221C: nop

    after_2:
    // 0x80012220: b           L_80012248
    // 0x80012224: nop

        goto L_80012248;
    // 0x80012224: nop

L_80012228:
    // 0x80012228: swc1        $f2, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f2.u32l;
    // 0x8001222C: swc1        $f2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f2.u32l;
    // 0x80012230: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x80012234: nop

    // 0x80012238: swc1        $f2, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f2.u32l;
    // 0x8001223C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80012240: nop

    // 0x80012244: swc1        $f2, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f2.u32l;
L_80012248:
    // 0x80012248: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8001224C: lwc1        $f16, 0x46F8($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X46F8);
    // 0x80012250: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80012254: swc1        $f16, 0x46E0($at)
    MEM_W(0X46E0, ctx->r1) = ctx->f16.u32l;
    // 0x80012258: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8001225C: lwc1        $f18, 0x46FC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X46FC);
    // 0x80012260: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80012264: swc1        $f18, 0x46E4($at)
    MEM_W(0X46E4, ctx->r1) = ctx->f18.u32l;
    // 0x80012268: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8001226C: lwc1        $f4, 0x4700($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4700);
    // 0x80012270: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80012274: swc1        $f4, 0x46E8($at)
    MEM_W(0X46E8, ctx->r1) = ctx->f4.u32l;
    // 0x80012278: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8001227C: lwc1        $f6, 0x4704($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4704);
    // 0x80012280: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80012284: swc1        $f6, 0x46EC($at)
    MEM_W(0X46EC, ctx->r1) = ctx->f6.u32l;
    // 0x80012288: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8001228C: lwc1        $f8, 0x4708($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4708);
    // 0x80012290: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80012294: swc1        $f8, 0x46F0($at)
    MEM_W(0X46F0, ctx->r1) = ctx->f8.u32l;
    // 0x80012298: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8001229C: lwc1        $f10, 0x470C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X470C);
    // 0x800122A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800122A4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800122A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800122AC: jr          $ra
    // 0x800122B0: swc1        $f10, 0x46F4($at)
    MEM_W(0X46F4, ctx->r1) = ctx->f10.u32l;
    return;
    // 0x800122B0: swc1        $f10, 0x46F4($at)
    MEM_W(0X46F4, ctx->r1) = ctx->f10.u32l;
;}
RECOMP_FUNC void func_800122B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800122B4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800122B8: lwc1        $f4, 0x46F4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X46F4);
    // 0x800122BC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800122C0: lwc1        $f6, 0x46E8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X46E8);
    // 0x800122C4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800122C8: lwc1        $f8, 0x46EC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X46EC);
    // 0x800122CC: sub.s       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x800122D0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800122D4: lwc1        $f10, 0x46E0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X46E0);
    // 0x800122D8: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x800122DC: mul.s       $f16, $f2, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x800122E0: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x800122E4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800122E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800122EC: mul.s       $f18, $f14, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x800122F0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800122F4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800122F8: swc1        $f2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f2.u32l;
    // 0x800122FC: add.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80012300: jal         0x8007FA40
    // 0x80012304: swc1        $f14, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f14.u32l;
    func_8007FA40(rdram, ctx);
        goto after_0;
    // 0x80012304: swc1        $f14, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f14.u32l;
    after_0:
    // 0x80012308: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x8001230C: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x80012310: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x80012314: lwc1        $f2, 0x1C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80012318: lwc1        $f14, 0x18($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8001231C: bc1f        L_80012364
    if (!c1cs) {
        // 0x80012320: lui         $at, 0x8013
        ctx->r1 = S32(0X8013 << 16);
            goto L_80012364;
    }
    // 0x80012320: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80012324: lwc1        $f4, 0x46F8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X46F8);
    // 0x80012328: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8001232C: lwc1        $f6, 0x46E0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X46E0);
    // 0x80012330: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80012334: lwc1        $f16, 0x4700($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X4700);
    // 0x80012338: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8001233C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80012340: lwc1        $f18, 0x46E8($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X46E8);
    // 0x80012344: mul.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x80012348: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x8001234C: mul.s       $f6, $f4, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f14.fl);
    // 0x80012350: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x80012354: nop

    // 0x80012358: div.s       $f16, $f8, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
    // 0x8001235C: b           L_80012368
    // 0x80012360: swc1        $f16, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f16.u32l;
        goto L_80012368;
    // 0x80012360: swc1        $f16, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f16.u32l;
L_80012364:
    // 0x80012364: swc1        $f12, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f12.u32l;
L_80012368:
    // 0x80012368: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8001236C: lwc1        $f18, 0x46FC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X46FC);
    // 0x80012370: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80012374: lwc1        $f4, 0x46E4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X46E4);
    // 0x80012378: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8001237C: sub.s       $f10, $f18, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x80012380: swc1        $f10, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f10.u32l;
    // 0x80012384: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80012388: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8001238C: jr          $ra
    // 0x80012390: nop

    return;
    // 0x80012390: nop

;}
RECOMP_FUNC void func_80012394(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80012394: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80012398: lwc1        $f4, 0x46EC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X46EC);
    // 0x8001239C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800123A0: lwc1        $f6, 0x46E0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X46E0);
    // 0x800123A4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800123A8: lwc1        $f8, 0x46F0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X46F0);
    // 0x800123AC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800123B0: lwc1        $f10, 0x46E4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X46E4);
    // 0x800123B4: sub.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x800123B8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800123BC: lwc1        $f6, 0x46F4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X46F4);
    // 0x800123C0: sub.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x800123C4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800123C8: lwc1        $f8, 0x46E8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X46E8);
    // 0x800123CC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800123D0: lwc1        $f10, 0x4704($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X4704);
    // 0x800123D4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800123D8: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    // 0x800123DC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800123E0: lwc1        $f4, 0x46F8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X46F8);
    // 0x800123E4: sub.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x800123E8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800123EC: lwc1        $f8, 0x4708($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4708);
    // 0x800123F0: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x800123F4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800123F8: lwc1        $f10, 0x46FC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X46FC);
    // 0x800123FC: mul.s       $f0, $f14, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = MUL_S(ctx->f14.fl, ctx->f12.fl);
    // 0x80012400: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    // 0x80012404: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80012408: lwc1        $f6, 0x470C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X470C);
    // 0x8001240C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80012410: sub.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80012414: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80012418: lwc1        $f8, 0x4700($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4700);
    // 0x8001241C: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x80012420: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80012424: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80012428: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x8001242C: bc1f        L_8001243C
    if (!c1cs) {
        // 0x80012430: swc1        $f10, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
            goto L_8001243C;
    }
    // 0x80012430: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x80012434: b           L_80012440
    // 0x80012438: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
        goto L_80012440;
    // 0x80012438: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
L_8001243C:
    // 0x8001243C: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_80012440:
    // 0x80012440: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80012444: lwc1        $f7, 0x3610($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X3610);
    // 0x80012448: lwc1        $f6, 0x3614($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3614);
    // 0x8001244C: cvt.d.s     $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.d = CVT_D_S(ctx->f2.fl);
    // 0x80012450: c.lt.d      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.d < ctx->f6.d;
    // 0x80012454: nop

    // 0x80012458: bc1f        L_80012468
    if (!c1cs) {
        // 0x8001245C: nop
    
            goto L_80012468;
    }
    // 0x8001245C: nop

    // 0x80012460: b           L_80012484
    // 0x80012464: mov.s       $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.fl = ctx->f18.fl;
        goto L_80012484;
    // 0x80012464: mov.s       $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.fl = ctx->f18.fl;
L_80012468:
    // 0x80012468: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8001246C: jal         0x8001C5D0
    // 0x80012470: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    func_8001C5D0(rdram, ctx);
        goto after_0;
    // 0x80012470: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80012474: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80012478: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x8001247C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80012480: mov.s       $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.fl = ctx->f0.fl;
L_80012484:
    // 0x80012484: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80012488: lwc1        $f10, 0x1C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8001248C: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80012490: mul.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80012494: lwc1        $f14, 0x24($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80012498: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8001249C: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x800124A0: nop

    // 0x800124A4: bc1f        L_800124B4
    if (!c1cs) {
        // 0x800124A8: nop
    
            goto L_800124B4;
    }
    // 0x800124A8: nop

    // 0x800124AC: b           L_800124B8
    // 0x800124B0: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
        goto L_800124B8;
    // 0x800124B0: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
L_800124B4:
    // 0x800124B4: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_800124B8:
    // 0x800124B8: lwc1        $f7, 0x3618($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X3618);
    // 0x800124BC: lwc1        $f6, 0x361C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X361C);
    // 0x800124C0: cvt.d.s     $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.d = CVT_D_S(ctx->f2.fl);
    // 0x800124C4: c.lt.d      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.d < ctx->f6.d;
    // 0x800124C8: nop

    // 0x800124CC: bc1f        L_800124DC
    if (!c1cs) {
        // 0x800124D0: nop
    
            goto L_800124DC;
    }
    // 0x800124D0: nop

    // 0x800124D4: b           L_800124FC
    // 0x800124D8: mov.s       $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    ctx->f2.fl = ctx->f18.fl;
        goto L_800124FC;
    // 0x800124D8: mov.s       $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    ctx->f2.fl = ctx->f18.fl;
L_800124DC:
    // 0x800124DC: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x800124E0: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x800124E4: jal         0x8001C5D0
    // 0x800124E8: swc1        $f16, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f16.u32l;
    func_8001C5D0(rdram, ctx);
        goto after_1;
    // 0x800124E8: swc1        $f16, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f16.u32l;
    after_1:
    // 0x800124EC: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x800124F0: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x800124F4: lwc1        $f16, 0x28($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X28);
    // 0x800124F8: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_800124FC:
    // 0x800124FC: sub.s       $f8, $f2, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f2.fl - ctx->f16.fl;
    // 0x80012500: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80012504: swc1        $f8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f8.u32l;
    // 0x80012508: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8001250C: lwc1        $f10, 0x20($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80012510: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80012514: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x80012518: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x8001251C: swc1        $f6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f6.u32l;
    // 0x80012520: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
    // 0x80012524: nop

    // 0x80012528: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x8001252C: nop

    // 0x80012530: bc1f        L_80012548
    if (!c1cs) {
        // 0x80012534: nop
    
            goto L_80012548;
    }
    // 0x80012534: nop

    // 0x80012538: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8001253C: nop

    // 0x80012540: sub.s       $f8, $f0, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x80012544: swc1        $f8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f8.u32l;
L_80012548:
    // 0x80012548: lwc1        $f0, 0x0($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X0);
    // 0x8001254C: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80012550: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x80012554: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80012558: bc1f        L_80012568
    if (!c1cs) {
        // 0x8001255C: lui         $at, 0xC334
        ctx->r1 = S32(0XC334 << 16);
            goto L_80012568;
    }
    // 0x8001255C: lui         $at, 0xC334
    ctx->r1 = S32(0XC334 << 16);
    // 0x80012560: sub.s       $f10, $f0, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x80012564: swc1        $f10, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f10.u32l;
L_80012568:
    // 0x80012568: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8001256C: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
    // 0x80012570: nop

    // 0x80012574: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x80012578: nop

    // 0x8001257C: bc1f        L_8001258C
    if (!c1cs) {
        // 0x80012580: nop
    
            goto L_8001258C;
    }
    // 0x80012580: nop

    // 0x80012584: add.s       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x80012588: swc1        $f4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f4.u32l;
L_8001258C:
    // 0x8001258C: lwc1        $f0, 0x0($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80012590: nop

    // 0x80012594: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x80012598: nop

    // 0x8001259C: bc1f        L_800125B0
    if (!c1cs) {
        // 0x800125A0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800125B0;
    }
    // 0x800125A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800125A4: add.s       $f6, $f0, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x800125A8: swc1        $f6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f6.u32l;
    // 0x800125AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800125B0:
    // 0x800125B0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x800125B4: jr          $ra
    // 0x800125B8: nop

    return;
    // 0x800125B8: nop

;}
RECOMP_FUNC void func_800125BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800125BC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x800125C0: sw          $a0, -0x24E0($at)
    MEM_W(-0X24E0, ctx->r1) = ctx->r4;
    // 0x800125C4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x800125C8: jr          $ra
    // 0x800125CC: sw          $zero, -0x24DC($at)
    MEM_W(-0X24DC, ctx->r1) = 0;
    return;
    // 0x800125CC: sw          $zero, -0x24DC($at)
    MEM_W(-0X24DC, ctx->r1) = 0;
;}
RECOMP_FUNC void func_800125D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800125D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800125D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800125D8: jal         0x8001326C
    // 0x800125DC: nop

    func_8001326C(rdram, ctx);
        goto after_0;
    // 0x800125DC: nop

    after_0:
    // 0x800125E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800125E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800125E8: jr          $ra
    // 0x800125EC: nop

    return;
    // 0x800125EC: nop

;}
RECOMP_FUNC void func_800125F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800125F0: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x800125F4: lw          $v0, -0x2F98($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2F98);
    // 0x800125F8: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x800125FC: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x80012600: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x80012604: lw          $v1, -0x24C0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X24C0);
    // 0x80012608: ori         $at, $at, 0xA0D8
    ctx->r1 = ctx->r1 | 0XA0D8;
    // 0x8001260C: addiu       $t0, $a1, 0x3F
    ctx->r8 = ADD32(ctx->r5, 0X3F);
    // 0x80012610: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
    // 0x80012614: sw          $s1, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r17;
    // 0x80012618: sw          $s0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r16;
    // 0x8001261C: addiu       $t6, $zero, 0x13F
    ctx->r14 = ADD32(0, 0X13F);
    // 0x80012620: slt         $at, $v1, $t0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x80012624: or          $s0, $a3, $zero
    ctx->r16 = ctx->r7 | 0;
    // 0x80012628: or          $s1, $a2, $zero
    ctx->r17 = ctx->r6 | 0;
    // 0x8001262C: sw          $a0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r4;
    // 0x80012630: sw          $zero, 0x98($sp)
    MEM_W(0X98, ctx->r29) = 0;
    // 0x80012634: sw          $t6, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r14;
    // 0x80012638: beq         $at, $zero, L_80012648
    if (ctx->r1 == 0) {
        // 0x8001263C: or          $t5, $a1, $zero
        ctx->r13 = ctx->r5 | 0;
            goto L_80012648;
    }
    // 0x8001263C: or          $t5, $a1, $zero
    ctx->r13 = ctx->r5 | 0;
    // 0x80012640: b           L_8001264C
    // 0x80012644: or          $t4, $v1, $zero
    ctx->r12 = ctx->r3 | 0;
        goto L_8001264C;
    // 0x80012644: or          $t4, $v1, $zero
    ctx->r12 = ctx->r3 | 0;
L_80012648:
    // 0x80012648: or          $t4, $t0, $zero
    ctx->r12 = ctx->r8 | 0;
L_8001264C:
    // 0x8001264C: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80012650: multu       $s1, $a0
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80012654: lw          $v1, 0x64($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X64);
    // 0x80012658: nop

    // 0x8001265C: slti        $at, $v1, 0x13F
    ctx->r1 = SIGNED(ctx->r3) < 0X13F ? 1 : 0;
    // 0x80012660: mflo        $s1
    ctx->r17 = lo;
    // 0x80012664: andi        $t7, $s1, 0x7F
    ctx->r15 = ctx->r17 & 0X7F;
    // 0x80012668: or          $s1, $t7, $zero
    ctx->r17 = ctx->r15 | 0;
    // 0x8001266C: multu       $s0, $a0
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80012670: mflo        $s0
    ctx->r16 = lo;
    // 0x80012674: addiu       $s0, $s0, 0x100
    ctx->r16 = ADD32(ctx->r16, 0X100);
    // 0x80012678: beq         $at, $zero, L_80012684
    if (ctx->r1 == 0) {
        // 0x8001267C: nop
    
            goto L_80012684;
    }
    // 0x8001267C: nop

    // 0x80012680: sw          $v1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r3;
L_80012684:
    // 0x80012684: lw          $v1, 0x68($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X68);
    // 0x80012688: nop

    // 0x8001268C: slt         $at, $v1, $t4
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x80012690: beq         $at, $zero, L_8001269C
    if (ctx->r1 == 0) {
        // 0x80012694: nop
    
            goto L_8001269C;
    }
    // 0x80012694: nop

    // 0x80012698: or          $t4, $v1, $zero
    ctx->r12 = ctx->r3 | 0;
L_8001269C:
    // 0x8001269C: lw          $v1, 0x5C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X5C);
    // 0x800126A0: nop

    // 0x800126A4: blez        $v1, L_800126B0
    if (SIGNED(ctx->r3) <= 0) {
        // 0x800126A8: nop
    
            goto L_800126B0;
    }
    // 0x800126A8: nop

    // 0x800126AC: sw          $v1, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r3;
L_800126B0:
    // 0x800126B0: lw          $v1, 0x60($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X60);
    // 0x800126B4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800126B8: slt         $at, $a1, $v1
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x800126BC: beq         $at, $zero, L_800126CC
    if (ctx->r1 == 0) {
        // 0x800126C0: addiu       $v0, $v0, -0x30A0
        ctx->r2 = ADD32(ctx->r2, -0X30A0);
            goto L_800126CC;
    }
    // 0x800126C0: addiu       $v0, $v0, -0x30A0
    ctx->r2 = ADD32(ctx->r2, -0X30A0);
    // 0x800126C4: or          $t5, $v1, $zero
    ctx->r13 = ctx->r3 | 0;
    // 0x800126C8: addu        $s0, $s0, $v1
    ctx->r16 = ADD32(ctx->r16, ctx->r3);
L_800126CC:
    // 0x800126CC: addu        $s0, $s0, $a1
    ctx->r16 = ADD32(ctx->r16, ctx->r5);
    // 0x800126D0: bgez        $s0, L_80012998
    if (SIGNED(ctx->r16) >= 0) {
        // 0x800126D4: negu        $t8, $s0
        ctx->r24 = SUB32(0, ctx->r16);
            goto L_80012998;
    }
    // 0x800126D4: negu        $t8, $s0
    ctx->r24 = SUB32(0, ctx->r16);
    // 0x800126D8: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x800126DC: lb          $t9, 0x1($v0)
    ctx->r25 = MEM_B(ctx->r2, 0X1);
    // 0x800126E0: lb          $t6, 0x4($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X4);
    // 0x800126E4: cvt.s.w     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800126E8: addu        $t7, $t9, $t6
    ctx->r15 = ADD32(ctx->r25, ctx->r14);
    // 0x800126EC: beq         $t7, $zero, L_800127D0
    if (ctx->r15 == 0) {
        // 0x800126F0: mov.s       $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
            goto L_800127D0;
    }
    // 0x800126F0: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x800126F4: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x800126F8: addiu       $v1, $v1, -0x2F94
    ctx->r3 = ADD32(ctx->r3, -0X2F94);
    // 0x800126FC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80012700: lui         $t9, 0xFD50
    ctx->r25 = S32(0XFD50 << 16);
    // 0x80012704: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x80012708: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8001270C: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x80012710: lw          $t6, 0xA0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XA0);
    // 0x80012714: lui         $t9, 0x701
    ctx->r25 = S32(0X701 << 16);
    // 0x80012718: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x8001271C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80012720: ori         $t9, $t9, 0x4060
    ctx->r25 = ctx->r25 | 0X4060;
    // 0x80012724: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x80012728: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8001272C: lui         $t8, 0xF550
    ctx->r24 = S32(0XF550 << 16);
    // 0x80012730: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x80012734: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x80012738: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8001273C: lui         $t7, 0xE600
    ctx->r15 = S32(0XE600 << 16);
    // 0x80012740: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x80012744: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80012748: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8001274C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80012750: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80012754: lui         $t6, 0x73F
    ctx->r14 = S32(0X73F << 16);
    // 0x80012758: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8001275C: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x80012760: ori         $t6, $t6, 0xF100
    ctx->r14 = ctx->r14 | 0XF100;
    // 0x80012764: lui         $t9, 0xF300
    ctx->r25 = S32(0XF300 << 16);
    // 0x80012768: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8001276C: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x80012770: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80012774: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x80012778: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x8001277C: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80012780: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80012784: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x80012788: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8001278C: lui         $t7, 0x1
    ctx->r15 = S32(0X1 << 16);
    // 0x80012790: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x80012794: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80012798: lui         $t6, 0xF548
    ctx->r14 = S32(0XF548 << 16);
    // 0x8001279C: ori         $t6, $t6, 0x1000
    ctx->r14 = ctx->r14 | 0X1000;
    // 0x800127A0: ori         $t7, $t7, 0x4060
    ctx->r15 = ctx->r15 | 0X4060;
    // 0x800127A4: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x800127A8: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x800127AC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800127B0: lui         $t6, 0xF
    ctx->r14 = S32(0XF << 16);
    // 0x800127B4: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x800127B8: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x800127BC: ori         $t6, $t6, 0xC07C
    ctx->r14 = ctx->r14 | 0XC07C;
    // 0x800127C0: lui         $t9, 0xF200
    ctx->r25 = S32(0XF200 << 16);
    // 0x800127C4: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x800127C8: b           L_800128A8
    // 0x800127CC: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
        goto L_800128A8;
    // 0x800127CC: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
L_800127D0:
    // 0x800127D0: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x800127D4: addiu       $v1, $v1, -0x2F94
    ctx->r3 = ADD32(ctx->r3, -0X2F94);
    // 0x800127D8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800127DC: lui         $t8, 0xFD50
    ctx->r24 = S32(0XFD50 << 16);
    // 0x800127E0: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x800127E4: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x800127E8: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x800127EC: lw          $t9, 0xA0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XA0);
    // 0x800127F0: lui         $t8, 0x704
    ctx->r24 = S32(0X704 << 16);
    // 0x800127F4: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x800127F8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800127FC: ori         $t8, $t8, 0x60
    ctx->r24 = ctx->r24 | 0X60;
    // 0x80012800: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x80012804: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80012808: lui         $t7, 0xF550
    ctx->r15 = S32(0XF550 << 16);
    // 0x8001280C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80012810: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x80012814: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80012818: lui         $t6, 0xE600
    ctx->r14 = S32(0XE600 << 16);
    // 0x8001281C: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x80012820: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80012824: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80012828: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8001282C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80012830: lui         $t9, 0x701
    ctx->r25 = S32(0X701 << 16);
    // 0x80012834: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x80012838: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8001283C: ori         $t9, $t9, 0xF100
    ctx->r25 = ctx->r25 | 0XF100;
    // 0x80012840: lui         $t8, 0xF300
    ctx->r24 = S32(0XF300 << 16);
    // 0x80012844: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x80012848: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x8001284C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80012850: lui         $t7, 0xE700
    ctx->r15 = S32(0XE700 << 16);
    // 0x80012854: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x80012858: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8001285C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80012860: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80012864: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80012868: lui         $t6, 0x4
    ctx->r14 = S32(0X4 << 16);
    // 0x8001286C: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x80012870: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x80012874: lui         $t9, 0xF548
    ctx->r25 = S32(0XF548 << 16);
    // 0x80012878: ori         $t9, $t9, 0x1000
    ctx->r25 = ctx->r25 | 0X1000;
    // 0x8001287C: ori         $t6, $t6, 0x60
    ctx->r14 = ctx->r14 | 0X60;
    // 0x80012880: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x80012884: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x80012888: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8001288C: lui         $t9, 0xF
    ctx->r25 = S32(0XF << 16);
    // 0x80012890: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x80012894: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80012898: ori         $t9, $t9, 0xC000
    ctx->r25 = ctx->r25 | 0XC000;
    // 0x8001289C: lui         $t8, 0xF200
    ctx->r24 = S32(0XF200 << 16);
    // 0x800128A0: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x800128A4: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
L_800128A8:
    // 0x800128A8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800128AC: lw          $t7, 0x94($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X94);
    // 0x800128B0: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x800128B4: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800128B8: andi        $t9, $t8, 0xFFF
    ctx->r25 = ctx->r24 & 0XFFF;
    // 0x800128BC: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x800128C0: sll         $t6, $t9, 12
    ctx->r14 = S32(ctx->r25 << 12);
    // 0x800128C4: sll         $t8, $t4, 2
    ctx->r24 = S32(ctx->r12 << 2);
    // 0x800128C8: lui         $at, 0xE400
    ctx->r1 = S32(0XE400 << 16);
    // 0x800128CC: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x800128D0: andi        $t9, $t8, 0xFFF
    ctx->r25 = ctx->r24 & 0XFFF;
    // 0x800128D4: or          $t6, $t7, $t9
    ctx->r14 = ctx->r15 | ctx->r25;
    // 0x800128D8: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x800128DC: lw          $t8, 0x98($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X98);
    // 0x800128E0: nop

    // 0x800128E4: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x800128E8: andi        $t9, $t7, 0xFFF
    ctx->r25 = ctx->r15 & 0XFFF;
    // 0x800128EC: sll         $t8, $t5, 2
    ctx->r24 = S32(ctx->r13 << 2);
    // 0x800128F0: andi        $t7, $t8, 0xFFF
    ctx->r15 = ctx->r24 & 0XFFF;
    // 0x800128F4: sll         $t6, $t9, 12
    ctx->r14 = S32(ctx->r25 << 12);
    // 0x800128F8: or          $t9, $t6, $t7
    ctx->r25 = ctx->r14 | ctx->r15;
    // 0x800128FC: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x80012900: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80012904: lui         $t6, 0xB400
    ctx->r14 = S32(0XB400 << 16);
    // 0x80012908: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8001290C: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x80012910: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x80012914: addiu       $t6, $s0, 0x100
    ctx->r14 = ADD32(ctx->r16, 0X100);
    // 0x80012918: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x8001291C: andi        $t9, $t7, 0xFFFF
    ctx->r25 = ctx->r15 & 0XFFFF;
    // 0x80012920: sll         $t8, $s1, 21
    ctx->r24 = S32(ctx->r17 << 21);
    // 0x80012924: or          $t6, $t8, $t9
    ctx->r14 = ctx->r24 | ctx->r25;
    // 0x80012928: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x8001292C: subu        $t6, $t4, $t5
    ctx->r14 = SUB32(ctx->r12, ctx->r13);
    // 0x80012930: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x80012934: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80012938: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8001293C: lui         $t9, 0x200
    ctx->r25 = S32(0X200 << 16);
    // 0x80012940: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x80012944: c.lt.s      $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f8.fl < ctx->f2.fl;
    // 0x80012948: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8001294C: ori         $t9, $t9, 0x200
    ctx->r25 = ctx->r25 | 0X200;
    // 0x80012950: lui         $t8, 0xB300
    ctx->r24 = S32(0XB300 << 16);
    // 0x80012954: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x80012958: bc1t        L_80012B54
    if (c1cs) {
        // 0x8001295C: sw          $t9, 0x4($v0)
        MEM_W(0X4, ctx->r2) = ctx->r25;
            goto L_80012B54;
    }
    // 0x8001295C: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x80012960: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x80012964: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80012968: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8001296C: add.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f0.fl;
    // 0x80012970: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x80012974: nop

    // 0x80012978: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x8001297C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80012980: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80012984: nop

    // 0x80012988: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8001298C: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80012990: mfc1        $t5, $f4
    ctx->r13 = (int32_t)ctx->f4.u32l;
    // 0x80012994: nop

L_80012998:
    // 0x80012998: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x8001299C: lw          $t8, 0xA0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA0);
    // 0x800129A0: addiu       $v1, $v1, -0x2F94
    ctx->r3 = ADD32(ctx->r3, -0X2F94);
    // 0x800129A4: bgez        $s0, L_800129B4
    if (SIGNED(ctx->r16) >= 0) {
        // 0x800129A8: sra         $t9, $s0, 1
        ctx->r25 = S32(SIGNED(ctx->r16) >> 1);
            goto L_800129B4;
    }
    // 0x800129A8: sra         $t9, $s0, 1
    ctx->r25 = S32(SIGNED(ctx->r16) >> 1);
    // 0x800129AC: addiu       $at, $s0, 0x1
    ctx->r1 = ADD32(ctx->r16, 0X1);
    // 0x800129B0: sra         $t9, $at, 1
    ctx->r25 = S32(SIGNED(ctx->r1) >> 1);
L_800129B4:
    // 0x800129B4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800129B8: sll         $t6, $t9, 6
    ctx->r14 = S32(ctx->r25 << 6);
    // 0x800129BC: addu        $t7, $t8, $t6
    ctx->r15 = ADD32(ctx->r24, ctx->r14);
    // 0x800129C0: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x800129C4: sw          $t7, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r15;
    // 0x800129C8: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x800129CC: lui         $t8, 0xFD50
    ctx->r24 = S32(0XFD50 << 16);
    // 0x800129D0: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x800129D4: lw          $t6, 0xA0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XA0);
    // 0x800129D8: lui         $t8, 0x701
    ctx->r24 = S32(0X701 << 16);
    // 0x800129DC: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x800129E0: lw          $a1, 0x0($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X0);
    // 0x800129E4: ori         $t8, $t8, 0x4060
    ctx->r24 = ctx->r24 | 0X4060;
    // 0x800129E8: addiu       $t7, $a1, 0x8
    ctx->r15 = ADD32(ctx->r5, 0X8);
    // 0x800129EC: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x800129F0: lui         $t9, 0xF550
    ctx->r25 = S32(0XF550 << 16);
    // 0x800129F4: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x800129F8: sw          $t8, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r24;
    // 0x800129FC: lw          $a2, 0x0($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X0);
    // 0x80012A00: lui         $t7, 0xE600
    ctx->r15 = S32(0XE600 << 16);
    // 0x80012A04: addiu       $t6, $a2, 0x8
    ctx->r14 = ADD32(ctx->r6, 0X8);
    // 0x80012A08: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80012A0C: sw          $zero, 0x4($a2)
    MEM_W(0X4, ctx->r6) = 0;
    // 0x80012A10: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
    // 0x80012A14: lw          $a3, 0x0($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X0);
    // 0x80012A18: lui         $t6, 0x73F
    ctx->r14 = S32(0X73F << 16);
    // 0x80012A1C: addiu       $t9, $a3, 0x8
    ctx->r25 = ADD32(ctx->r7, 0X8);
    // 0x80012A20: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80012A24: ori         $t6, $t6, 0xF100
    ctx->r14 = ctx->r14 | 0XF100;
    // 0x80012A28: lui         $t8, 0xF300
    ctx->r24 = S32(0XF300 << 16);
    // 0x80012A2C: sw          $t8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r24;
    // 0x80012A30: sw          $t6, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r14;
    // 0x80012A34: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x80012A38: lui         $t9, 0xE700
    ctx->r25 = S32(0XE700 << 16);
    // 0x80012A3C: addiu       $t7, $t0, 0x8
    ctx->r15 = ADD32(ctx->r8, 0X8);
    // 0x80012A40: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80012A44: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    // 0x80012A48: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x80012A4C: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x80012A50: lui         $t7, 0x1
    ctx->r15 = S32(0X1 << 16);
    // 0x80012A54: addiu       $t8, $t1, 0x8
    ctx->r24 = ADD32(ctx->r9, 0X8);
    // 0x80012A58: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x80012A5C: lui         $t6, 0xF548
    ctx->r14 = S32(0XF548 << 16);
    // 0x80012A60: ori         $t6, $t6, 0x1000
    ctx->r14 = ctx->r14 | 0X1000;
    // 0x80012A64: ori         $t7, $t7, 0x4060
    ctx->r15 = ctx->r15 | 0X4060;
    // 0x80012A68: sw          $t7, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r15;
    // 0x80012A6C: sw          $t6, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r14;
    // 0x80012A70: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x80012A74: lui         $t6, 0xF
    ctx->r14 = S32(0XF << 16);
    // 0x80012A78: addiu       $t9, $t2, 0x8
    ctx->r25 = ADD32(ctx->r10, 0X8);
    // 0x80012A7C: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80012A80: ori         $t6, $t6, 0xC07C
    ctx->r14 = ctx->r14 | 0XC07C;
    // 0x80012A84: lui         $t8, 0xF200
    ctx->r24 = S32(0XF200 << 16);
    // 0x80012A88: sw          $t8, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r24;
    // 0x80012A8C: sw          $t6, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r14;
    // 0x80012A90: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x80012A94: lw          $t9, 0x94($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X94);
    // 0x80012A98: addiu       $t7, $t3, 0x8
    ctx->r15 = ADD32(ctx->r11, 0X8);
    // 0x80012A9C: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x80012AA0: andi        $t6, $t8, 0xFFF
    ctx->r14 = ctx->r24 & 0XFFF;
    // 0x80012AA4: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80012AA8: sll         $t7, $t6, 12
    ctx->r15 = S32(ctx->r14 << 12);
    // 0x80012AAC: sll         $t8, $t4, 2
    ctx->r24 = S32(ctx->r12 << 2);
    // 0x80012AB0: lui         $at, 0xE400
    ctx->r1 = S32(0XE400 << 16);
    // 0x80012AB4: or          $t9, $t7, $at
    ctx->r25 = ctx->r15 | ctx->r1;
    // 0x80012AB8: andi        $t6, $t8, 0xFFF
    ctx->r14 = ctx->r24 & 0XFFF;
    // 0x80012ABC: or          $t7, $t9, $t6
    ctx->r15 = ctx->r25 | ctx->r14;
    // 0x80012AC0: sw          $t7, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r15;
    // 0x80012AC4: lw          $t8, 0x98($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X98);
    // 0x80012AC8: nop

    // 0x80012ACC: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80012AD0: andi        $t6, $t9, 0xFFF
    ctx->r14 = ctx->r25 & 0XFFF;
    // 0x80012AD4: sll         $t7, $t6, 12
    ctx->r15 = S32(ctx->r14 << 12);
    // 0x80012AD8: sll         $t6, $s1, 21
    ctx->r14 = S32(ctx->r17 << 21);
    // 0x80012ADC: sll         $t8, $t5, 2
    ctx->r24 = S32(ctx->r13 << 2);
    // 0x80012AE0: andi        $t9, $t8, 0xFFF
    ctx->r25 = ctx->r24 & 0XFFF;
    // 0x80012AE4: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x80012AE8: or          $t6, $t7, $t9
    ctx->r14 = ctx->r15 | ctx->r25;
    // 0x80012AEC: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x80012AF0: sw          $t6, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r14;
    // 0x80012AF4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80012AF8: lui         $t7, 0xB400
    ctx->r15 = S32(0XB400 << 16);
    // 0x80012AFC: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x80012B00: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x80012B04: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80012B08: lw          $t9, 0x14($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X14);
    // 0x80012B0C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80012B10: bgez        $s0, L_80012B24
    if (SIGNED(ctx->r16) >= 0) {
        // 0x80012B14: andi        $t6, $s0, 0x1
        ctx->r14 = ctx->r16 & 0X1;
            goto L_80012B24;
    }
    // 0x80012B14: andi        $t6, $s0, 0x1
    ctx->r14 = ctx->r16 & 0X1;
    // 0x80012B18: beq         $t6, $zero, L_80012B24
    if (ctx->r14 == 0) {
        // 0x80012B1C: nop
    
            goto L_80012B24;
    }
    // 0x80012B1C: nop

    // 0x80012B20: addiu       $t6, $t6, -0x2
    ctx->r14 = ADD32(ctx->r14, -0X2);
L_80012B24:
    // 0x80012B24: sll         $t8, $t6, 4
    ctx->r24 = S32(ctx->r14 << 4);
    // 0x80012B28: andi        $t7, $t8, 0xFFFF
    ctx->r15 = ctx->r24 & 0XFFFF;
    // 0x80012B2C: or          $t6, $t9, $t7
    ctx->r14 = ctx->r25 | ctx->r15;
    // 0x80012B30: sw          $t6, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r14;
    // 0x80012B34: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80012B38: lui         $t7, 0x200
    ctx->r15 = S32(0X200 << 16);
    // 0x80012B3C: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x80012B40: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x80012B44: ori         $t7, $t7, 0x200
    ctx->r15 = ctx->r15 | 0X200;
    // 0x80012B48: lui         $t9, 0xB300
    ctx->r25 = S32(0XB300 << 16);
    // 0x80012B4C: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x80012B50: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
L_80012B54:
    // 0x80012B54: lw          $s0, 0x8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X8);
    // 0x80012B58: lw          $s1, 0xC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XC);
    // 0x80012B5C: jr          $ra
    // 0x80012B60: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    return;
    // 0x80012B60: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void func_80012B64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80012B64: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80012B68: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80012B6C: jal         0x80004910
    // 0x80012B70: nop

    func_80004910(rdram, ctx);
        goto after_0;
    // 0x80012B70: nop

    after_0:
    // 0x80012B74: beq         $v0, $zero, L_80012EF8
    if (ctx->r2 == 0) {
        // 0x80012B78: lui         $v1, 0x8011
        ctx->r3 = S32(0X8011 << 16);
            goto L_80012EF8;
    }
    // 0x80012B78: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x80012B7C: lw          $v1, -0x2F98($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X2F98);
    // 0x80012B80: lui         $t6, 0x3
    ctx->r14 = S32(0X3 << 16);
    // 0x80012B84: addu        $t6, $t6, $v1
    ctx->r14 = ADD32(ctx->r14, ctx->r3);
    // 0x80012B88: lbu         $t6, 0x754($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X754);
    // 0x80012B8C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x80012B90: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x80012B94: beq         $t7, $zero, L_80012EF8
    if (ctx->r15 == 0) {
        // 0x80012B98: ori         $at, $at, 0x8000
        ctx->r1 = ctx->r1 | 0X8000;
            goto L_80012EF8;
    }
    // 0x80012B98: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x80012B9C: addu        $v0, $v1, $at
    ctx->r2 = ADD32(ctx->r3, ctx->r1);
    // 0x80012BA0: lhu         $t8, 0x20D8($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X20D8);
    // 0x80012BA4: nop

    // 0x80012BA8: beq         $t8, $zero, L_80012EFC
    if (ctx->r24 == 0) {
        // 0x80012BAC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80012EFC;
    }
    // 0x80012BAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80012BB0: lbu         $t9, 0x9A2($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X9A2);
    // 0x80012BB4: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x80012BB8: bne         $t9, $at, L_80012BD4
    if (ctx->r25 != ctx->r1) {
        // 0x80012BBC: nop
    
            goto L_80012BD4;
    }
    // 0x80012BBC: nop

    // 0x80012BC0: lbu         $t6, 0x9A4($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X9A4);
    // 0x80012BC4: nop

    // 0x80012BC8: slti        $at, $t6, 0x4
    ctx->r1 = SIGNED(ctx->r14) < 0X4 ? 1 : 0;
    // 0x80012BCC: bne         $at, $zero, L_80012EFC
    if (ctx->r1 != 0) {
        // 0x80012BD0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80012EFC;
    }
    // 0x80012BD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80012BD4:
    // 0x80012BD4: jal         0x80004534
    // 0x80012BD8: nop

    func_80004534(rdram, ctx);
        goto after_1;
    // 0x80012BD8: nop

    after_1:
    // 0x80012BDC: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x80012BE0: addiu       $a0, $a2, -0x2F94
    ctx->r4 = ADD32(ctx->r6, -0X2F94);
    // 0x80012BE4: jal         0x8001018C
    // 0x80012BE8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001018C(rdram, ctx);
        goto after_2;
    // 0x80012BE8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x80012BEC: jal         0x80013058
    // 0x80012BF0: nop

    func_80013058(rdram, ctx);
        goto after_3;
    // 0x80012BF0: nop

    after_3:
    // 0x80012BF4: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x80012BF8: addiu       $a2, $a2, -0x2F94
    ctx->r6 = ADD32(ctx->r6, -0X2F94);
    // 0x80012BFC: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x80012C00: lui         $t9, 0x800A
    ctx->r25 = S32(0X800A << 16);
    // 0x80012C04: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x80012C08: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
    // 0x80012C0C: addiu       $t9, $t9, -0x24B8
    ctx->r25 = ADD32(ctx->r25, -0X24B8);
    // 0x80012C10: lui         $t8, 0x600
    ctx->r24 = S32(0X600 << 16);
    // 0x80012C14: lui         $t5, 0x8037
    ctx->r13 = S32(0X8037 << 16);
    // 0x80012C18: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x80012C1C: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x80012C20: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x80012C24: addiu       $t5, $t5, -0x4A00
    ctx->r13 = ADD32(ctx->r13, -0X4A00);
    // 0x80012C28: addiu       $at, $zero, -0x10
    ctx->r1 = ADD32(0, -0X10);
    // 0x80012C2C: and         $t8, $t5, $at
    ctx->r24 = ctx->r13 & ctx->r1;
    // 0x80012C30: ori         $at, $zero, 0xF110
    ctx->r1 = 0 | 0XF110;
    // 0x80012C34: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x80012C38: sw          $t6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r14;
    // 0x80012C3C: addu        $t5, $t8, $at
    ctx->r13 = ADD32(ctx->r24, ctx->r1);
    // 0x80012C40: addiu       $t9, $t5, 0x2000
    ctx->r25 = ADD32(ctx->r13, 0X2000);
    // 0x80012C44: lui         $t7, 0xFD10
    ctx->r15 = S32(0XFD10 << 16);
    // 0x80012C48: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80012C4C: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x80012C50: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x80012C54: lui         $t7, 0xE800
    ctx->r15 = S32(0XE800 << 16);
    // 0x80012C58: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x80012C5C: sw          $t6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r14;
    // 0x80012C60: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80012C64: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80012C68: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x80012C6C: lui         $t9, 0xF500
    ctx->r25 = S32(0XF500 << 16);
    // 0x80012C70: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x80012C74: sw          $t8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r24;
    // 0x80012C78: ori         $t9, $t9, 0x100
    ctx->r25 = ctx->r25 | 0X100;
    // 0x80012C7C: lui         $t6, 0x700
    ctx->r14 = S32(0X700 << 16);
    // 0x80012C80: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x80012C84: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x80012C88: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x80012C8C: lui         $t8, 0xE600
    ctx->r24 = S32(0XE600 << 16);
    // 0x80012C90: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x80012C94: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
    // 0x80012C98: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80012C9C: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x80012CA0: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x80012CA4: lui         $t7, 0x73F
    ctx->r15 = S32(0X73F << 16);
    // 0x80012CA8: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x80012CAC: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
    // 0x80012CB0: ori         $t7, $t7, 0xC000
    ctx->r15 = ctx->r15 | 0XC000;
    // 0x80012CB4: lui         $t6, 0xF000
    ctx->r14 = S32(0XF000 << 16);
    // 0x80012CB8: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x80012CBC: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x80012CC0: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x80012CC4: lui         $t9, 0xE700
    ctx->r25 = S32(0XE700 << 16);
    // 0x80012CC8: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x80012CCC: sw          $t8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r24;
    // 0x80012CD0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80012CD4: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x80012CD8: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80012CDC: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x80012CE0: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x80012CE4: addiu       $a1, $a1, 0x4724
    ctx->r5 = ADD32(ctx->r5, 0X4724);
    // 0x80012CE8: jal         0x80012F08
    // 0x80012CEC: addiu       $a0, $a0, 0x4720
    ctx->r4 = ADD32(ctx->r4, 0X4720);
    func_80012F08(rdram, ctx);
        goto after_4;
    // 0x80012CEC: addiu       $a0, $a0, 0x4720
    ctx->r4 = ADD32(ctx->r4, 0X4720);
    after_4:
    // 0x80012CF0: lui         $t6, 0x800A
    ctx->r14 = S32(0X800A << 16);
    // 0x80012CF4: lw          $t6, -0x24BC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X24BC);
    // 0x80012CF8: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80012CFC: addiu       $t7, $t6, 0x40
    ctx->r15 = ADD32(ctx->r14, 0X40);
    // 0x80012D00: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80012D04: lui         $t8, 0x800A
    ctx->r24 = S32(0X800A << 16);
    // 0x80012D08: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80012D0C: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x80012D10: nop

    // 0x80012D14: bc1f        L_80012D20
    if (!c1cs) {
        // 0x80012D18: nop
    
            goto L_80012D20;
    }
    // 0x80012D18: nop

    // 0x80012D1C: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_80012D20:
    // 0x80012D20: lw          $t8, -0x24C0($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X24C0);
    // 0x80012D24: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80012D28: blez        $t8, L_80012EF8
    if (SIGNED(ctx->r24) <= 0) {
        // 0x80012D2C: swc1        $f0, 0x4724($at)
        MEM_W(0X4724, ctx->r1) = ctx->f0.u32l;
            goto L_80012EF8;
    }
    // 0x80012D2C: swc1        $f0, 0x4724($at)
    MEM_W(0X4724, ctx->r1) = ctx->f0.u32l;
    // 0x80012D30: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80012D34: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80012D38: lwc1        $f6, 0x4720($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4720);
    // 0x80012D3C: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x80012D40: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80012D44: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80012D48: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80012D4C: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80012D50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80012D54: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80012D58: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x80012D5C: nop

    // 0x80012D60: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80012D64: nop

    // 0x80012D68: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x80012D6C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80012D70: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80012D74: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80012D78: cvt.w.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = CVT_W_S(ctx->f0.fl);
    // 0x80012D7C: swc1        $f0, 0x4724($at)
    MEM_W(0X4724, ctx->r1) = ctx->f0.u32l;
    // 0x80012D80: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x80012D84: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80012D88: jal         0x800125F0
    // 0x80012D8C: nop

    func_800125F0(rdram, ctx);
        goto after_5;
    // 0x80012D8C: nop

    after_5:
    // 0x80012D90: lui         $t7, 0x800A
    ctx->r15 = S32(0X800A << 16);
    // 0x80012D94: lw          $t7, -0x24C0($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X24C0);
    // 0x80012D98: nop

    // 0x80012D9C: slti        $at, $t7, 0x3E
    ctx->r1 = SIGNED(ctx->r15) < 0X3E ? 1 : 0;
    // 0x80012DA0: bne         $at, $zero, L_80012EF8
    if (ctx->r1 != 0) {
        // 0x80012DA4: lui         $at, 0x8013
        ctx->r1 = S32(0X8013 << 16);
            goto L_80012EF8;
    }
    // 0x80012DA4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80012DA8: lwc1        $f0, 0x4724($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X4724);
    // 0x80012DAC: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80012DB0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80012DB4: lwc1        $f16, 0x4720($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X4720);
    // 0x80012DB8: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x80012DBC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80012DC0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80012DC4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80012DC8: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x80012DCC: addiu       $a1, $zero, 0x3E
    ctx->r5 = ADD32(0, 0X3E);
    // 0x80012DD0: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80012DD4: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x80012DD8: nop

    // 0x80012DDC: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80012DE0: nop

    // 0x80012DE4: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x80012DE8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80012DEC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80012DF0: nop

    // 0x80012DF4: cvt.w.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = CVT_W_S(ctx->f0.fl);
    // 0x80012DF8: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x80012DFC: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80012E00: jal         0x800125F0
    // 0x80012E04: nop

    func_800125F0(rdram, ctx);
        goto after_6;
    // 0x80012E04: nop

    after_6:
    // 0x80012E08: lui         $t6, 0x800A
    ctx->r14 = S32(0X800A << 16);
    // 0x80012E0C: lw          $t6, -0x24C0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X24C0);
    // 0x80012E10: nop

    // 0x80012E14: slti        $at, $t6, 0x7C
    ctx->r1 = SIGNED(ctx->r14) < 0X7C ? 1 : 0;
    // 0x80012E18: bne         $at, $zero, L_80012EF8
    if (ctx->r1 != 0) {
        // 0x80012E1C: lui         $at, 0x8013
        ctx->r1 = S32(0X8013 << 16);
            goto L_80012EF8;
    }
    // 0x80012E1C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80012E20: lwc1        $f0, 0x4724($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X4724);
    // 0x80012E24: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x80012E28: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80012E2C: lwc1        $f6, 0x4720($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4720);
    // 0x80012E30: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x80012E34: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80012E38: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80012E3C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80012E40: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80012E44: addiu       $a1, $zero, 0x7C
    ctx->r5 = ADD32(0, 0X7C);
    // 0x80012E48: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80012E4C: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x80012E50: nop

    // 0x80012E54: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80012E58: nop

    // 0x80012E5C: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x80012E60: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80012E64: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80012E68: nop

    // 0x80012E6C: cvt.w.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = CVT_W_S(ctx->f0.fl);
    // 0x80012E70: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x80012E74: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80012E78: jal         0x800125F0
    // 0x80012E7C: nop

    func_800125F0(rdram, ctx);
        goto after_7;
    // 0x80012E7C: nop

    after_7:
    // 0x80012E80: lui         $t9, 0x800A
    ctx->r25 = S32(0X800A << 16);
    // 0x80012E84: lw          $t9, -0x24C0($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X24C0);
    // 0x80012E88: nop

    // 0x80012E8C: slti        $at, $t9, 0xBA
    ctx->r1 = SIGNED(ctx->r25) < 0XBA ? 1 : 0;
    // 0x80012E90: bne         $at, $zero, L_80012EF8
    if (ctx->r1 != 0) {
        // 0x80012E94: lui         $at, 0x8013
        ctx->r1 = S32(0X8013 << 16);
            goto L_80012EF8;
    }
    // 0x80012E94: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80012E98: lwc1        $f0, 0x4724($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X4724);
    // 0x80012E9C: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80012EA0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80012EA4: lwc1        $f16, 0x4720($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X4720);
    // 0x80012EA8: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x80012EAC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80012EB0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80012EB4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80012EB8: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x80012EBC: addiu       $a1, $zero, 0xBA
    ctx->r5 = ADD32(0, 0XBA);
    // 0x80012EC0: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80012EC4: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x80012EC8: nop

    // 0x80012ECC: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x80012ED0: nop

    // 0x80012ED4: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x80012ED8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80012EDC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80012EE0: nop

    // 0x80012EE4: cvt.w.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = CVT_W_S(ctx->f0.fl);
    // 0x80012EE8: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x80012EEC: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80012EF0: jal         0x800125F0
    // 0x80012EF4: nop

    func_800125F0(rdram, ctx);
        goto after_8;
    // 0x80012EF4: nop

    after_8:
L_80012EF8:
    // 0x80012EF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80012EFC:
    // 0x80012EFC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80012F00: jr          $ra
    // 0x80012F04: nop

    return;
    // 0x80012F04: nop

;}
RECOMP_FUNC void func_80012F08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80012F08: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80012F0C: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x80012F10: lw          $v0, -0x2F98($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2F98);
    // 0x80012F14: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x80012F18: ori         $at, $at, 0xA0D8
    ctx->r1 = ctx->r1 | 0XA0D8;
    // 0x80012F1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80012F20: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80012F24: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80012F28: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
    // 0x80012F2C: lwc1        $f8, 0x14($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X14);
    // 0x80012F30: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80012F34: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x80012F38: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80012F3C: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80012F40: sub.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80012F44: swc1        $f16, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f16.u32l;
    // 0x80012F48: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80012F4C: lwc1        $f18, 0x18($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X18);
    // 0x80012F50: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x80012F54: sub.s       $f0, $f18, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x80012F58: swc1        $f14, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f14.u32l;
    // 0x80012F5C: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x80012F60: mul.s       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x80012F64: jal         0x8007FA40
    // 0x80012F68: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    func_8007FA40(rdram, ctx);
        goto after_0;
    // 0x80012F68: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    after_0:
    // 0x80012F6C: lwc1        $f14, 0x28($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80012F70: lwc1        $f12, 0x20($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80012F74: jal         0x8001C5D0
    // 0x80012F78: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    func_8001C5D0(rdram, ctx);
        goto after_1;
    // 0x80012F78: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x80012F7C: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80012F80: lwc1        $f14, 0x1C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80012F84: jal         0x8001C5D0
    // 0x80012F88: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    func_8001C5D0(rdram, ctx);
        goto after_2;
    // 0x80012F88: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x80012F8C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80012F90: lwc1        $f10, 0x18($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80012F94: lwc1        $f3, 0x3638($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, 0X3638);
    // 0x80012F98: lwc1        $f2, 0x363C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X363C);
    // 0x80012F9C: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x80012FA0: nop

    // 0x80012FA4: div.d       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f2.d); 
    ctx->f18.d = DIV_D(ctx->f16.d, ctx->f2.d);
    // 0x80012FA8: lui         $at, 0x4094
    ctx->r1 = S32(0X4094 << 16);
    // 0x80012FAC: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x80012FB0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80012FB4: lui         $at, 0xBFF0
    ctx->r1 = S32(0XBFF0 << 16);
    // 0x80012FB8: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80012FBC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80012FC0: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80012FC4: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x80012FC8: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x80012FCC: lui         $t8, 0x3
    ctx->r24 = S32(0X3 << 16);
    // 0x80012FD0: mul.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x80012FD4: cvt.d.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.d = CVT_D_S(ctx->f0.fl);
    // 0x80012FD8: nop

    // 0x80012FDC: div.d       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f2.d); 
    ctx->f4.d = DIV_D(ctx->f18.d, ctx->f2.d);
    // 0x80012FE0: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x80012FE4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80012FE8: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x80012FEC: lui         $at, 0x406A
    ctx->r1 = S32(0X406A << 16);
    // 0x80012FF0: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x80012FF4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80012FF8: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x80012FFC: swc1        $f16, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f16.u32l;
    // 0x80013000: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80013004: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80013008: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x8001300C: add.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d + ctx->f10.d;
    // 0x80013010: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x80013014: swc1        $f18, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f18.u32l;
    // 0x80013018: lw          $t7, -0x2F98($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X2F98);
    // 0x8001301C: nop

    // 0x80013020: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80013024: lbu         $t8, -0x765E($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X765E);
    // 0x80013028: nop

    // 0x8001302C: bne         $t8, $at, L_80013048
    if (ctx->r24 != ctx->r1) {
        // 0x80013030: lui         $at, 0x4000
        ctx->r1 = S32(0X4000 << 16);
            goto L_80013048;
    }
    // 0x80013030: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80013034: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80013038: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8001303C: nop

    // 0x80013040: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80013044: swc1        $f8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f8.u32l;
L_80013048:
    // 0x80013048: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001304C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80013050: jr          $ra
    // 0x80013054: nop

    return;
    // 0x80013054: nop

;}
RECOMP_FUNC void func_80013058(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80013058: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001305C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80013060: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x80013064: addiu       $a1, $a1, -0x23E8
    ctx->r5 = ADD32(ctx->r5, -0X23E8);
    // 0x80013068: jal         0x800130D0
    // 0x8001306C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_800130D0(rdram, ctx);
        goto after_0;
    // 0x8001306C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_0:
    // 0x80013070: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80013074: jal         0x80004804
    // 0x80013078: sw          $v0, -0x24BC($at)
    MEM_W(-0X24BC, ctx->r1) = ctx->r2;
    func_80004804(rdram, ctx);
        goto after_1;
    // 0x80013078: sw          $v0, -0x24BC($at)
    MEM_W(-0X24BC, ctx->r1) = ctx->r2;
    after_1:
    // 0x8001307C: beq         $v0, $zero, L_800130B4
    if (ctx->r2 == 0) {
        // 0x80013080: lui         $v1, 0x800A
        ctx->r3 = S32(0X800A << 16);
            goto L_800130B4;
    }
    // 0x80013080: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x80013084: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x80013088: addiu       $a1, $a1, -0x2400
    ctx->r5 = ADD32(ctx->r5, -0X2400);
    // 0x8001308C: jal         0x800130D0
    // 0x80013090: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_800130D0(rdram, ctx);
        goto after_2;
    // 0x80013090: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_2:
    // 0x80013094: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x80013098: addiu       $v1, $v1, -0x24C0
    ctx->r3 = ADD32(ctx->r3, -0X24C0);
    // 0x8001309C: slti        $at, $v0, 0xF0
    ctx->r1 = SIGNED(ctx->r2) < 0XF0 ? 1 : 0;
    // 0x800130A0: bne         $at, $zero, L_800130C0
    if (ctx->r1 != 0) {
        // 0x800130A4: sw          $v0, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r2;
            goto L_800130C0;
    }
    // 0x800130A4: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x800130A8: addiu       $t7, $zero, 0xF0
    ctx->r15 = ADD32(0, 0XF0);
    // 0x800130AC: b           L_800130C0
    // 0x800130B0: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
        goto L_800130C0;
    // 0x800130B0: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
L_800130B4:
    // 0x800130B4: addiu       $v1, $v1, -0x24C0
    ctx->r3 = ADD32(ctx->r3, -0X24C0);
    // 0x800130B8: addiu       $t8, $zero, 0xF0
    ctx->r24 = ADD32(0, 0XF0);
    // 0x800130BC: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
L_800130C0:
    // 0x800130C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800130C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800130C8: jr          $ra
    // 0x800130CC: nop

    return;
    // 0x800130CC: nop

;}
RECOMP_FUNC void func_800130D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800130D0: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x800130D4: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x800130D8: lui         $at, 0x43F0
    ctx->r1 = S32(0X43F0 << 16);
    // 0x800130DC: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x800130E0: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x800130E4: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x800130E8: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x800130EC: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x800130F0: or          $s6, $a1, $zero
    ctx->r22 = ctx->r5 | 0;
    // 0x800130F4: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x800130F8: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x800130FC: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x80013100: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x80013104: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x80013108: swc1        $f29, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x8001310C: swc1        $f28, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f28.u32l;
    // 0x80013110: swc1        $f27, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x80013114: swc1        $f26, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f26.u32l;
    // 0x80013118: swc1        $f25, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x8001311C: swc1        $f24, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f24.u32l;
    // 0x80013120: swc1        $f23, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80013124: swc1        $f22, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f22.u32l;
    // 0x80013128: swc1        $f21, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8001312C: blez        $a0, L_800131E4
    if (SIGNED(ctx->r4) <= 0) {
        // 0x80013130: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_800131E4;
    }
    // 0x80013130: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80013134: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80013138: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x8001313C: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
    // 0x80013140: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x80013144: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80013148: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x8001314C: mtc1        $zero, $f28
    ctx->f28.u32l = 0;
    // 0x80013150: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80013154: addiu       $s4, $sp, 0x74
    ctx->r20 = ADD32(ctx->r29, 0X74);
    // 0x80013158: addiu       $s3, $sp, 0x78
    ctx->r19 = ADD32(ctx->r29, 0X78);
    // 0x8001315C: addiu       $s2, $sp, 0x7C
    ctx->r18 = ADD32(ctx->r29, 0X7C);
L_80013160:
    // 0x80013160: sll         $t6, $s1, 1
    ctx->r14 = S32(ctx->r17 << 1);
    // 0x80013164: addu        $v0, $t6, $s6
    ctx->r2 = ADD32(ctx->r14, ctx->r22);
    // 0x80013168: lh          $t9, 0x4($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X4);
    // 0x8001316C: lh          $t7, 0x0($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X0);
    // 0x80013170: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80013174: lh          $t8, 0x2($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X2);
    // 0x80013178: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8001317C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80013180: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80013184: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x80013188: sw          $s4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r20;
    // 0x8001318C: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x80013190: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    // 0x80013194: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80013198: jal         0x80004650
    // 0x8001319C: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    func_80004650(rdram, ctx);
        goto after_0;
    // 0x8001319C: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    after_0:
    // 0x800131A0: lwc1        $f10, 0x78($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X78);
    // 0x800131A4: lwc1        $f6, 0x74($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X74);
    // 0x800131A8: sub.s       $f16, $f22, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f22.fl - ctx->f10.fl;
    // 0x800131AC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800131B0: mul.s       $f18, $f16, $f24
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f24.fl);
    // 0x800131B4: c.lt.s      $f28, $f6
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f28.fl < ctx->f6.fl;
    // 0x800131B8: nop

    // 0x800131BC: div.s       $f4, $f18, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f4.fl = DIV_S(ctx->f18.fl, ctx->f26.fl);
    // 0x800131C0: bc1f        L_800131DC
    if (!c1cs) {
        // 0x800131C4: swc1        $f4, 0x78($sp)
        MEM_W(0X78, ctx->r29) = ctx->f4.u32l;
            goto L_800131DC;
    }
    // 0x800131C4: swc1        $f4, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f4.u32l;
    // 0x800131C8: c.lt.s      $f4, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f4.fl < ctx->f20.fl;
    // 0x800131CC: nop

    // 0x800131D0: bc1f        L_800131DC
    if (!c1cs) {
        // 0x800131D4: nop
    
            goto L_800131DC;
    }
    // 0x800131D4: nop

    // 0x800131D8: mov.s       $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    ctx->f20.fl = ctx->f4.fl;
L_800131DC:
    // 0x800131DC: bne         $s0, $s5, L_80013160
    if (ctx->r16 != ctx->r21) {
        // 0x800131E0: addiu       $s1, $s1, 0x3
        ctx->r17 = ADD32(ctx->r17, 0X3);
            goto L_80013160;
    }
    // 0x800131E0: addiu       $s1, $s1, 0x3
    ctx->r17 = ADD32(ctx->r17, 0X3);
L_800131E4:
    // 0x800131E4: mtc1        $zero, $f28
    ctx->f28.u32l = 0;
    // 0x800131E8: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x800131EC: c.lt.s      $f28, $f20
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f28.fl < ctx->f20.fl;
    // 0x800131F0: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x800131F4: bc1f        L_80013204
    if (!c1cs) {
        // 0x800131F8: nop
    
            goto L_80013204;
    }
    // 0x800131F8: nop

    // 0x800131FC: b           L_80013208
    // 0x80013200: mov.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
        goto L_80013208;
    // 0x80013200: mov.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
L_80013204:
    // 0x80013204: mov.s       $f0, $f28
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    ctx->f0.fl = ctx->f28.fl;
L_80013208:
    // 0x80013208: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x8001320C: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x80013210: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x80013214: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80013218: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8001321C: lwc1        $f21, 0x20($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80013220: cvt.w.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = CVT_W_S(ctx->f0.fl);
    // 0x80013224: lwc1        $f20, 0x24($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80013228: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x8001322C: lwc1        $f23, 0x28($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x80013230: lwc1        $f22, 0x2C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80013234: lwc1        $f25, 0x30($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x80013238: lwc1        $f24, 0x34($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8001323C: lwc1        $f27, 0x38($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x80013240: lwc1        $f26, 0x3C($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80013244: lwc1        $f29, 0x40($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x80013248: lwc1        $f28, 0x44($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8001324C: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x80013250: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x80013254: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x80013258: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x8001325C: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x80013260: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x80013264: jr          $ra
    // 0x80013268: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    return;
    // 0x80013268: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void func_8001326C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001326C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80013270: addiu       $v0, $v0, -0x30A0
    ctx->r2 = ADD32(ctx->r2, -0X30A0);
    // 0x80013274: lb          $t7, 0x1($v0)
    ctx->r15 = MEM_B(ctx->r2, 0X1);
    // 0x80013278: lb          $t9, 0x4($v0)
    ctx->r25 = MEM_B(ctx->r2, 0X4);
    // 0x8001327C: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x80013280: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80013284: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
    // 0x80013288: div         $zero, $v1, $at
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r1)));
    // 0x8001328C: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x80013290: addiu       $a3, $a3, -0x2F8C
    ctx->r7 = ADD32(ctx->r7, -0X2F8C);
    // 0x80013294: lbu         $t6, 0x0($a3)
    ctx->r14 = MEM_BU(ctx->r7, 0X0);
    // 0x80013298: lb          $t1, 0x5($v0)
    ctx->r9 = MEM_B(ctx->r2, 0X5);
    // 0x8001329C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800132A0: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x800132A4: lui         $a2, 0x8037
    ctx->r6 = S32(0X8037 << 16);
    // 0x800132A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800132AC: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x800132B0: lui         $t2, 0x800A
    ctx->r10 = S32(0X800A << 16);
    // 0x800132B4: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x800132B8: addiu       $a2, $a2, -0x4A00
    ctx->r6 = ADD32(ctx->r6, -0X4A00);
    // 0x800132BC: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x800132C0: mfhi        $v1
    ctx->r3 = hi;
    // 0x800132C4: bne         $t1, $at, L_800132D4
    if (ctx->r9 != ctx->r1) {
        // 0x800132C8: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_800132D4;
    }
    // 0x800132C8: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x800132CC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x800132D0: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
L_800132D4:
    // 0x800132D4: addiu       $at, $zero, -0x10
    ctx->r1 = ADD32(0, -0X10);
    // 0x800132D8: addu        $t2, $t2, $v0
    ctx->r10 = ADD32(ctx->r10, ctx->r2);
    // 0x800132DC: and         $t4, $a2, $at
    ctx->r12 = ctx->r6 & ctx->r1;
    // 0x800132E0: lw          $t2, -0x2418($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X2418);
    // 0x800132E4: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x800132E8: ori         $at, $zero, 0xF110
    ctx->r1 = 0 | 0XF110;
    // 0x800132EC: lw          $a0, -0x2430($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2430);
    // 0x800132F0: addu        $a2, $t4, $at
    ctx->r6 = ADD32(ctx->r12, ctx->r1);
    // 0x800132F4: sb          $t3, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r11;
    // 0x800132F8: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x800132FC: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x80013300: jal         0x8001B120
    // 0x80013304: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    func_8001B120(rdram, ctx);
        goto after_0;
    // 0x80013304: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    after_0:
    // 0x80013308: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8001330C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80013310: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80013314: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80013318: sb          $t5, -0x2F8C($at)
    MEM_B(-0X2F8C, ctx->r1) = ctx->r13;
    // 0x8001331C: jal         0x8001B120
    // 0x80013320: addiu       $a1, $a2, 0x2000
    ctx->r5 = ADD32(ctx->r6, 0X2000);
    func_8001B120(rdram, ctx);
        goto after_1;
    // 0x80013320: addiu       $a1, $a2, 0x2000
    ctx->r5 = ADD32(ctx->r6, 0X2000);
    after_1:
    // 0x80013324: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80013328: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001332C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80013330: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80013334: jr          $ra
    // 0x80013338: sb          $t6, -0x2F8C($at)
    MEM_B(-0X2F8C, ctx->r1) = ctx->r14;
    return;
    // 0x80013338: sb          $t6, -0x2F8C($at)
    MEM_B(-0X2F8C, ctx->r1) = ctx->r14;
    // 0x8001333C: nop

;}
RECOMP_FUNC void func_80013340(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80013340: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80013344: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80013348: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x8001334C: jal         0x8028BE00
    // 0x80013350: addiu       $a0, $a0, 0x3EF0
    ctx->r4 = ADD32(ctx->r4, 0X3EF0);
    LOOKUP_FUNC(0x8028BE00)(rdram, ctx);
        goto after_0;
    // 0x80013350: addiu       $a0, $a0, 0x3EF0
    ctx->r4 = ADD32(ctx->r4, 0X3EF0);
    after_0:
    // 0x80013354: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80013358: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001335C: jr          $ra
    // 0x80013360: nop

    return;
    // 0x80013360: nop

;}
RECOMP_FUNC void func_80013364(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80013364: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80013368: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x8001336C: lui         $s2, 0x8011
    ctx->r18 = S32(0X8011 << 16);
    // 0x80013370: lw          $s2, -0x2F98($s2)
    ctx->r18 = MEM_W(ctx->r18, -0X2F98);
    // 0x80013374: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x80013378: swc1        $f24, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f24.u32l;
    // 0x8001337C: swc1        $f22, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f22.u32l;
    // 0x80013380: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x80013384: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x80013388: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
    // 0x8001338C: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x80013390: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x80013394: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x80013398: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x8001339C: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x800133A0: ori         $at, $at, 0x9E34
    ctx->r1 = ctx->r1 | 0X9E34;
    // 0x800133A4: mtc1        $a1, $f20
    ctx->f20.u32l = ctx->r5;
    // 0x800133A8: mtc1        $a2, $f22
    ctx->f22.u32l = ctx->r6;
    // 0x800133AC: mtc1        $a3, $f24
    ctx->f24.u32l = ctx->r7;
    // 0x800133B0: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    // 0x800133B4: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x800133B8: swc1        $f25, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x800133BC: swc1        $f23, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x800133C0: swc1        $f21, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800133C4: addiu       $s0, $s0, 0x3EF0
    ctx->r16 = ADD32(ctx->r16, 0X3EF0);
    // 0x800133C8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x800133CC: addiu       $s3, $zero, 0x2
    ctx->r19 = ADD32(0, 0X2);
    // 0x800133D0: addiu       $s4, $zero, 0x3
    ctx->r20 = ADD32(0, 0X3);
    // 0x800133D4: addiu       $s5, $zero, 0x3
    ctx->r21 = ADD32(0, 0X3);
    // 0x800133D8: addu        $s2, $s2, $at
    ctx->r18 = ADD32(ctx->r18, ctx->r1);
L_800133DC:
    // 0x800133DC: bne         $s1, $zero, L_800133EC
    if (ctx->r17 != 0) {
        // 0x800133E0: sw          $s2, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r18;
            goto L_800133EC;
    }
    // 0x800133E0: sw          $s2, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r18;
    // 0x800133E4: b           L_800133F0
    // 0x800133E8: sh          $s3, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r19;
        goto L_800133F0;
    // 0x800133E8: sh          $s3, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r19;
L_800133EC:
    // 0x800133EC: sh          $s5, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r21;
L_800133F0:
    // 0x800133F0: sh          $s1, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r17;
    // 0x800133F4: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x800133F8: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x800133FC: swc1        $f24, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f24.u32l;
    // 0x80013400: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80013404: jal         0x8001346C
    // 0x80013408: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    func_8001346C(rdram, ctx);
        goto after_0;
    // 0x80013408: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    after_0:
    // 0x8001340C: lw          $v0, 0x30($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X30);
    // 0x80013410: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80013414: lhu         $t6, 0x2($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X2);
    // 0x80013418: addiu       $s2, $s2, 0x34
    ctx->r18 = ADD32(ctx->r18, 0X34);
    // 0x8001341C: ori         $t7, $t6, 0x400
    ctx->r15 = ctx->r14 | 0X400;
    // 0x80013420: addiu       $s0, $s0, 0x34
    ctx->r16 = ADD32(ctx->r16, 0X34);
    // 0x80013424: bne         $s1, $s4, L_800133DC
    if (ctx->r17 != ctx->r20) {
        // 0x80013428: sh          $t7, 0x2($v0)
        MEM_H(0X2, ctx->r2) = ctx->r15;
            goto L_800133DC;
    }
    // 0x80013428: sh          $t7, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r15;
    // 0x8001342C: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x80013430: lwc1        $f21, 0x20($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80013434: lwc1        $f20, 0x24($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80013438: lwc1        $f23, 0x28($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x8001343C: lwc1        $f22, 0x2C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80013440: lwc1        $f25, 0x30($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x80013444: lwc1        $f24, 0x34($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80013448: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x8001344C: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x80013450: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x80013454: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x80013458: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x8001345C: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x80013460: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x80013464: jr          $ra
    // 0x80013468: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x80013468: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_8001346C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001346C: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x80013470: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x80013474: lw          $v1, 0x30($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X30);
    // 0x80013478: lhu         $a2, 0x2($a0)
    ctx->r6 = MEM_HU(ctx->r4, 0X2);
    // 0x8001347C: sh          $zero, 0x4($v1)
    MEM_H(0X4, ctx->r3) = 0;
    // 0x80013480: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80013484: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x80013488: andi        $t6, $a2, 0x1F
    ctx->r14 = ctx->r6 & 0X1F;
    // 0x8001348C: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x80013490: sh          $a1, 0x2C($a0)
    MEM_H(0X2C, ctx->r4) = ctx->r5;
    // 0x80013494: sh          $zero, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = 0;
    // 0x80013498: sh          $zero, 0x30($a0)
    MEM_H(0X30, ctx->r4) = 0;
    // 0x8001349C: swc1        $f0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f0.u32l;
    // 0x800134A0: swc1        $f0, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f0.u32l;
    // 0x800134A4: bne         $t6, $zero, L_800134C0
    if (ctx->r14 != 0) {
        // 0x800134A8: swc1        $f0, 0x1C($a0)
        MEM_W(0X1C, ctx->r4) = ctx->f0.u32l;
            goto L_800134C0;
    }
    // 0x800134A8: swc1        $f0, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f0.u32l;
    // 0x800134AC: swc1        $f12, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f12.u32l;
    // 0x800134B0: swc1        $f14, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f14.u32l;
    // 0x800134B4: lwc1        $f4, 0x10($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X10);
    // 0x800134B8: jr          $ra
    // 0x800134BC: swc1        $f4, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f4.u32l;
    return;
    // 0x800134BC: swc1        $f4, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f4.u32l;
L_800134C0:
    // 0x800134C0: lui         $t8, 0x800A
    ctx->r24 = S32(0X800A << 16);
    // 0x800134C4: addiu       $t8, $t8, -0x23B0
    ctx->r24 = ADD32(ctx->r24, -0X23B0);
    // 0x800134C8: sll         $t7, $a2, 3
    ctx->r15 = S32(ctx->r6 << 3);
    // 0x800134CC: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x800134D0: lh          $t9, -0x8($v0)
    ctx->r25 = MEM_H(ctx->r2, -0X8);
    // 0x800134D4: nop

    // 0x800134D8: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x800134DC: nop

    // 0x800134E0: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800134E4: swc1        $f8, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f8.u32l;
    // 0x800134E8: lh          $t0, -0x6($v0)
    ctx->r8 = MEM_H(ctx->r2, -0X6);
    // 0x800134EC: nop

    // 0x800134F0: mtc1        $t0, $f10
    ctx->f10.u32l = ctx->r8;
    // 0x800134F4: nop

    // 0x800134F8: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800134FC: swc1        $f16, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f16.u32l;
    // 0x80013500: lh          $t1, -0x4($v0)
    ctx->r9 = MEM_H(ctx->r2, -0X4);
    // 0x80013504: nop

    // 0x80013508: mtc1        $t1, $f18
    ctx->f18.u32l = ctx->r9;
    // 0x8001350C: nop

    // 0x80013510: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80013514: swc1        $f4, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f4.u32l;
    // 0x80013518: jr          $ra
    // 0x8001351C: nop

    return;
    // 0x8001351C: nop

;}
RECOMP_FUNC void func_80013520(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80013520: beq         $a1, $zero, L_80013540
    if (ctx->r5 == 0) {
        // 0x80013524: addiu       $t8, $zero, 0x2
        ctx->r24 = ADD32(0, 0X2);
            goto L_80013540;
    }
    // 0x80013524: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x80013528: lhu         $t6, 0x2($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X2);
    // 0x8001352C: lw          $t9, 0x4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X4);
    // 0x80013530: ori         $t7, $t6, 0x20
    ctx->r15 = ctx->r14 | 0X20;
    // 0x80013534: sh          $t7, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r15;
    // 0x80013538: jr          $ra
    // 0x8001353C: sh          $t8, 0x0($t9)
    MEM_H(0X0, ctx->r25) = ctx->r24;
    return;
    // 0x8001353C: sh          $t8, 0x0($t9)
    MEM_H(0X0, ctx->r25) = ctx->r24;
L_80013540:
    // 0x80013540: lhu         $t0, 0x2($a0)
    ctx->r8 = MEM_HU(ctx->r4, 0X2);
    // 0x80013544: lw          $t2, 0x4($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X4);
    // 0x80013548: andi        $t1, $t0, 0xFFDF
    ctx->r9 = ctx->r8 & 0XFFDF;
    // 0x8001354C: sh          $t1, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r9;
    // 0x80013550: sh          $zero, 0x0($t2)
    MEM_H(0X0, ctx->r10) = 0;
    // 0x80013554: jr          $ra
    // 0x80013558: nop

    return;
    // 0x80013558: nop

    // 0x8001355C: nop

;}
RECOMP_FUNC void func_80013560(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80013560: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x80013564: lw          $v1, -0x2F98($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X2F98);
    // 0x80013568: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8001356C: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x80013570: addu        $v1, $v1, $at
    ctx->r3 = ADD32(ctx->r3, ctx->r1);
    // 0x80013574: lhu         $t6, 0x9AC($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X9AC);
    // 0x80013578: lhu         $t8, 0x9AA($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X9AA);
    // 0x8001357C: andi        $t7, $t6, 0xFF3F
    ctx->r15 = ctx->r14 & 0XFF3F;
    // 0x80013580: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    // 0x80013584: beq         $t7, $zero, L_800135EC
    if (ctx->r15 == 0) {
        // 0x80013588: andi        $t9, $t8, 0xFF3F
        ctx->r25 = ctx->r24 & 0XFF3F;
            goto L_800135EC;
    }
    // 0x80013588: andi        $t9, $t8, 0xFF3F
    ctx->r25 = ctx->r24 & 0XFF3F;
    // 0x8001358C: lhu         $v0, 0x0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X0);
    // 0x80013590: andi        $t2, $t7, 0x1000
    ctx->r10 = ctx->r15 & 0X1000;
    // 0x80013594: sll         $t0, $v0, 1
    ctx->r8 = S32(ctx->r2 << 1);
    // 0x80013598: addu        $t1, $a1, $t0
    ctx->r9 = ADD32(ctx->r5, ctx->r8);
    // 0x8001359C: lhu         $v1, 0x0($t1)
    ctx->r3 = MEM_HU(ctx->r9, 0X0);
    // 0x800135A0: nop

    // 0x800135A4: bne         $v1, $zero, L_800135D8
    if (ctx->r3 != 0) {
        // 0x800135A8: nop
    
            goto L_800135D8;
    }
    // 0x800135A8: nop

    // 0x800135AC: beq         $t2, $zero, L_800135C8
    if (ctx->r10 == 0) {
        // 0x800135B0: andi        $t4, $a3, 0x2000
        ctx->r12 = ctx->r7 & 0X2000;
            goto L_800135C8;
    }
    // 0x800135B0: andi        $t4, $a3, 0x2000
    ctx->r12 = ctx->r7 & 0X2000;
    // 0x800135B4: andi        $t3, $t9, 0x2000
    ctx->r11 = ctx->r25 & 0X2000;
    // 0x800135B8: beq         $t3, $zero, L_800135EC
    if (ctx->r11 == 0) {
        // 0x800135BC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_800135EC;
    }
    // 0x800135BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800135C0: jr          $ra
    // 0x800135C4: sh          $zero, 0x0($a0)
    MEM_H(0X0, ctx->r4) = 0;
    return;
    // 0x800135C4: sh          $zero, 0x0($a0)
    MEM_H(0X0, ctx->r4) = 0;
L_800135C8:
    // 0x800135C8: bne         $t4, $zero, L_800135F0
    if (ctx->r12 != 0) {
        // 0x800135CC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_800135F0;
    }
    // 0x800135CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800135D0: b           L_800135EC
    // 0x800135D4: sh          $zero, 0x0($a0)
    MEM_H(0X0, ctx->r4) = 0;
        goto L_800135EC;
    // 0x800135D4: sh          $zero, 0x0($a0)
    MEM_H(0X0, ctx->r4) = 0;
L_800135D8:
    // 0x800135D8: bne         $a3, $v1, L_800135E8
    if (ctx->r7 != ctx->r3) {
        // 0x800135DC: addiu       $t5, $v0, 0x1
        ctx->r13 = ADD32(ctx->r2, 0X1);
            goto L_800135E8;
    }
    // 0x800135DC: addiu       $t5, $v0, 0x1
    ctx->r13 = ADD32(ctx->r2, 0X1);
    // 0x800135E0: b           L_800135EC
    // 0x800135E4: sh          $t5, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r13;
        goto L_800135EC;
    // 0x800135E4: sh          $t5, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r13;
L_800135E8:
    // 0x800135E8: sh          $zero, 0x0($a0)
    MEM_H(0X0, ctx->r4) = 0;
L_800135EC:
    // 0x800135EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800135F0:
    // 0x800135F0: jr          $ra
    // 0x800135F4: nop

    return;
    // 0x800135F4: nop

;}
RECOMP_FUNC void func_800135F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800135F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800135FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80013600: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x80013604: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x80013608: addiu       $a1, $a1, -0x2358
    ctx->r5 = ADD32(ctx->r5, -0X2358);
    // 0x8001360C: jal         0x80013560
    // 0x80013610: addiu       $a0, $a0, -0x235C
    ctx->r4 = ADD32(ctx->r4, -0X235C);
    func_80013560(rdram, ctx);
        goto after_0;
    // 0x80013610: addiu       $a0, $a0, -0x235C
    ctx->r4 = ADD32(ctx->r4, -0X235C);
    after_0:
    // 0x80013614: beq         $v0, $zero, L_80013628
    if (ctx->r2 == 0) {
        // 0x80013618: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_80013628;
    }
    // 0x80013618: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8001361C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80013620: jal         0x802A191C
    // 0x80013624: sh          $t6, -0x238C($at)
    MEM_H(-0X238C, ctx->r1) = ctx->r14;
    LOOKUP_FUNC(0x802A191C)(rdram, ctx);
        goto after_1;
    // 0x80013624: sh          $t6, -0x238C($at)
    MEM_H(-0X238C, ctx->r1) = ctx->r14;
    after_1:
L_80013628:
    // 0x80013628: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x8001362C: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x80013630: addiu       $a1, $a1, -0x2384
    ctx->r5 = ADD32(ctx->r5, -0X2384);
    // 0x80013634: jal         0x80013560
    // 0x80013638: addiu       $a0, $a0, -0x2388
    ctx->r4 = ADD32(ctx->r4, -0X2388);
    func_80013560(rdram, ctx);
        goto after_2;
    // 0x80013638: addiu       $a0, $a0, -0x2388
    ctx->r4 = ADD32(ctx->r4, -0X2388);
    after_2:
    // 0x8001363C: beq         $v0, $zero, L_80013650
    if (ctx->r2 == 0) {
        // 0x80013640: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_80013650;
    }
    // 0x80013640: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80013644: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80013648: jal         0x802A1940
    // 0x8001364C: sh          $t7, -0x2390($at)
    MEM_H(-0X2390, ctx->r1) = ctx->r15;
    LOOKUP_FUNC(0x802A1940)(rdram, ctx);
        goto after_3;
    // 0x8001364C: sh          $t7, -0x2390($at)
    MEM_H(-0X2390, ctx->r1) = ctx->r15;
    after_3:
L_80013650:
    // 0x80013650: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80013654: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80013658: jr          $ra
    // 0x8001365C: nop

    return;
    // 0x8001365C: nop

;}
RECOMP_FUNC void func_80013680(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80013680: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x80013684: lw          $t7, 0x6980($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X6980);
    // 0x80013688: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8001368C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80013690: sb          $t6, -0x2F8C($at)
    MEM_B(-0X2F8C, ctx->r1) = ctx->r14;
    // 0x80013694: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80013698: slti        $at, $t7, 0x2
    ctx->r1 = SIGNED(ctx->r15) < 0X2 ? 1 : 0;
    // 0x8001369C: beq         $at, $zero, L_800136B0
    if (ctx->r1 == 0) {
        // 0x800136A0: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_800136B0;
    }
    // 0x800136A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800136A4: lui         $a1, 0x803C
    ctx->r5 = S32(0X803C << 16);
    // 0x800136A8: b           L_800136B8
    // 0x800136AC: addiu       $a1, $a1, 0x1A00
    ctx->r5 = ADD32(ctx->r5, 0X1A00);
        goto L_800136B8;
    // 0x800136AC: addiu       $a1, $a1, 0x1A00
    ctx->r5 = ADD32(ctx->r5, 0X1A00);
L_800136B0:
    // 0x800136B0: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x800136B4: addiu       $a1, $a1, -0x4800
    ctx->r5 = ADD32(ctx->r5, -0X4800);
L_800136B8:
    // 0x800136B8: jal         0x8001B120
    // 0x800136BC: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    func_8001B120(rdram, ctx);
        goto after_0;
    // 0x800136BC: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_0:
    // 0x800136C0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800136C4: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800136C8: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x800136CC: sb          $t8, -0x2F8C($at)
    MEM_B(-0X2F8C, ctx->r1) = ctx->r24;
    // 0x800136D0: addiu       $a1, $a1, -0x6900
    ctx->r5 = ADD32(ctx->r5, -0X6900);
    // 0x800136D4: jal         0x8001B120
    // 0x800136D8: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    func_8001B120(rdram, ctx);
        goto after_1;
    // 0x800136D8: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    after_1:
    // 0x800136DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800136E0: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800136E4: sb          $zero, -0x2F8C($at)
    MEM_B(-0X2F8C, ctx->r1) = 0;
    // 0x800136E8: jr          $ra
    // 0x800136EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800136EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800136F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800136F0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800136F4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800136F8: addiu       $v0, $v0, -0x2CF0
    ctx->r2 = ADD32(ctx->r2, -0X2CF0);
    // 0x800136FC: lhu         $t6, 0x8($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X8);
    // 0x80013700: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80013704: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80013708: lbu         $s2, 0x0($v0)
    ctx->r18 = MEM_BU(ctx->r2, 0X0);
    // 0x8001370C: lbu         $s3, 0xA94($v0)
    ctx->r19 = MEM_BU(ctx->r2, 0XA94);
    // 0x80013710: andi        $t7, $t6, 0x200
    ctx->r15 = ctx->r14 & 0X200;
    // 0x80013714: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80013718: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x8001371C: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x80013720: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80013724: beq         $t7, $zero, L_80013734
    if (ctx->r15 == 0) {
        // 0x80013728: sw          $s0, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r16;
            goto L_80013734;
    }
    // 0x80013728: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8001372C: b           L_80013738
    // 0x80013730: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
        goto L_80013738;
    // 0x80013730: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_80013734:
    // 0x80013734: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80013738:
    // 0x80013738: lhu         $t8, 0xA9C($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0XA9C);
    // 0x8001373C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80013740: andi        $t9, $t8, 0x200
    ctx->r25 = ctx->r24 & 0X200;
    // 0x80013744: beq         $t9, $zero, L_80013754
    if (ctx->r25 == 0) {
        // 0x80013748: nop
    
            goto L_80013754;
    }
    // 0x80013748: nop

    // 0x8001374C: b           L_80013754
    // 0x80013750: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
        goto L_80013754;
    // 0x80013750: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_80013754:
    // 0x80013754: jal         0x80013680
    // 0x80013758: nop

    func_80013680(rdram, ctx);
        goto after_0;
    // 0x80013758: nop

    after_0:
    // 0x8001375C: lui         $a0, 0x802F
    ctx->r4 = S32(0X802F << 16);
    // 0x80013760: addiu       $a0, $a0, -0x28E8
    ctx->r4 = ADD32(ctx->r4, -0X28E8);
    // 0x80013764: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80013768: jal         0x80013968
    // 0x8001376C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    func_80013968(rdram, ctx);
        goto after_1;
    // 0x8001376C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_1:
    // 0x80013770: lui         $a0, 0x802F
    ctx->r4 = S32(0X802F << 16);
    // 0x80013774: addiu       $a0, $a0, -0x20E8
    ctx->r4 = ADD32(ctx->r4, -0X20E8);
    // 0x80013778: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x8001377C: jal         0x80013968
    // 0x80013780: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_80013968(rdram, ctx);
        goto after_2;
    // 0x80013780: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_2:
    // 0x80013784: lui         $a0, 0x802F
    ctx->r4 = S32(0X802F << 16);
    // 0x80013788: addiu       $a0, $a0, -0x18E8
    ctx->r4 = ADD32(ctx->r4, -0X18E8);
    // 0x8001378C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80013790: jal         0x80013968
    // 0x80013794: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80013968(rdram, ctx);
        goto after_3;
    // 0x80013794: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_3:
    // 0x80013798: lui         $a0, 0x802F
    ctx->r4 = S32(0X802F << 16);
    // 0x8001379C: addiu       $a0, $a0, -0x10E8
    ctx->r4 = ADD32(ctx->r4, -0X10E8);
    // 0x800137A0: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x800137A4: jal         0x80013968
    // 0x800137A8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80013968(rdram, ctx);
        goto after_4;
    // 0x800137A8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_4:
    // 0x800137AC: lui         $a0, 0x802F
    ctx->r4 = S32(0X802F << 16);
    // 0x800137B0: addiu       $a0, $a0, -0x8E8
    ctx->r4 = ADD32(ctx->r4, -0X8E8);
    // 0x800137B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800137B8: jal         0x80013968
    // 0x800137BC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_80013968(rdram, ctx);
        goto after_5;
    // 0x800137BC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_5:
    // 0x800137C0: lui         $s2, 0x801D
    ctx->r18 = S32(0X801D << 16);
    // 0x800137C4: lui         $s4, 0x2
    ctx->r20 = S32(0X2 << 16);
    // 0x800137C8: lui         $s3, 0x8011
    ctx->r19 = S32(0X8011 << 16);
    // 0x800137CC: addiu       $s3, $s3, -0x2F98
    ctx->r19 = ADD32(ctx->r19, -0X2F98);
    // 0x800137D0: ori         $s4, $s4, 0x95E0
    ctx->r20 = ctx->r20 | 0X95E0;
    // 0x800137D4: addiu       $s2, $s2, 0x7800
    ctx->r18 = ADD32(ctx->r18, 0X7800);
    // 0x800137D8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x800137DC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_800137E0:
    // 0x800137E0: lw          $t0, 0x0($s3)
    ctx->r8 = MEM_W(ctx->r19, 0X0);
    // 0x800137E4: nop

    // 0x800137E8: addu        $t1, $t0, $s1
    ctx->r9 = ADD32(ctx->r8, ctx->r17);
    // 0x800137EC: jal         0x80014854
    // 0x800137F0: addu        $a0, $t1, $s4
    ctx->r4 = ADD32(ctx->r9, ctx->r20);
    func_80014854(rdram, ctx);
        goto after_6;
    // 0x800137F0: addu        $a0, $t1, $s4
    ctx->r4 = ADD32(ctx->r9, ctx->r20);
    after_6:
    // 0x800137F4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x800137F8: jal         0x80014208
    // 0x800137FC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80014208(rdram, ctx);
        goto after_7;
    // 0x800137FC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_7:
    // 0x80013800: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80013804: slti        $at, $s0, 0x1C
    ctx->r1 = SIGNED(ctx->r16) < 0X1C ? 1 : 0;
    // 0x80013808: addiu       $s1, $s1, 0x34
    ctx->r17 = ADD32(ctx->r17, 0X34);
    // 0x8001380C: bne         $at, $zero, L_800137E0
    if (ctx->r1 != 0) {
        // 0x80013810: addiu       $s2, $s2, 0x100
        ctx->r18 = ADD32(ctx->r18, 0X100);
            goto L_800137E0;
    }
    // 0x80013810: addiu       $s2, $s2, 0x100
    ctx->r18 = ADD32(ctx->r18, 0X100);
    // 0x80013814: lui         $s2, 0x801E
    ctx->r18 = S32(0X801E << 16);
    // 0x80013818: lui         $s4, 0x2
    ctx->r20 = S32(0X2 << 16);
    // 0x8001381C: ori         $s4, $s4, 0x9E34
    ctx->r20 = ctx->r20 | 0X9E34;
    // 0x80013820: addiu       $s2, $s2, -0x6C00
    ctx->r18 = ADD32(ctx->r18, -0X6C00);
    // 0x80013824: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80013828: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8001382C: addiu       $s5, $zero, 0x3
    ctx->r21 = ADD32(0, 0X3);
L_80013830:
    // 0x80013830: lw          $t2, 0x0($s3)
    ctx->r10 = MEM_W(ctx->r19, 0X0);
    // 0x80013834: nop

    // 0x80013838: addu        $t3, $t2, $s1
    ctx->r11 = ADD32(ctx->r10, ctx->r17);
    // 0x8001383C: jal         0x80014854
    // 0x80013840: addu        $a0, $t3, $s4
    ctx->r4 = ADD32(ctx->r11, ctx->r20);
    func_80014854(rdram, ctx);
        goto after_8;
    // 0x80013840: addu        $a0, $t3, $s4
    ctx->r4 = ADD32(ctx->r11, ctx->r20);
    after_8:
    // 0x80013844: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80013848: jal         0x80014404
    // 0x8001384C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80014404(rdram, ctx);
        goto after_9;
    // 0x8001384C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_9:
    // 0x80013850: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80013854: addiu       $s1, $s1, 0x34
    ctx->r17 = ADD32(ctx->r17, 0X34);
    // 0x80013858: bne         $s0, $s5, L_80013830
    if (ctx->r16 != ctx->r21) {
        // 0x8001385C: addiu       $s2, $s2, 0x100
        ctx->r18 = ADD32(ctx->r18, 0X100);
            goto L_80013830;
    }
    // 0x8001385C: addiu       $s2, $s2, 0x100
    ctx->r18 = ADD32(ctx->r18, 0X100);
    // 0x80013860: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80013864: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80013868: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8001386C: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80013870: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80013874: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x80013878: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x8001387C: jr          $ra
    // 0x80013880: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80013880: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
