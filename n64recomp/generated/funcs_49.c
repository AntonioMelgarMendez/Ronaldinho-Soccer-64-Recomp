#include "iss64_recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_803B1C18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B1C18: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x803B1C1C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803B1C20: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803B1C24: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803B1C28: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803B1C2C: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x803B1C30: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803B1C34: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803B1C38: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803B1C3C: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x803B1C40: addiu       $t8, $t8, -0x2CF0
    ctx->r24 = ADD32(ctx->r24, -0X2CF0);
    // 0x803B1C44: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803B1C48: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x803B1C4C: lhu         $t9, 0x8($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X8);
    // 0x803B1C50: sll         $t2, $t6, 1
    ctx->r10 = S32(ctx->r14 << 1);
    // 0x803B1C54: andi        $t1, $t9, 0xFDF4
    ctx->r9 = ctx->r25 & 0XFDF4;
    // 0x803B1C58: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x803B1C5C: sh          $t1, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r9;
    // 0x803B1C60: addu        $t3, $a0, $t2
    ctx->r11 = ADD32(ctx->r4, ctx->r10);
    // 0x803B1C64: lhu         $t4, 0x16($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0X16);
    // 0x803B1C68: nop

    // 0x803B1C6C: or          $t5, $t1, $t4
    ctx->r13 = ctx->r9 | ctx->r12;
    // 0x803B1C70: jr          $ra
    // 0x803B1C74: sh          $t5, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r13;
    return;
    // 0x803B1C74: sh          $t5, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r13;
;}
RECOMP_FUNC void func_803B1C78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B1C78: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x803B1C7C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803B1C80: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803B1C84: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803B1C88: sll         $t1, $t6, 2
    ctx->r9 = S32(ctx->r14 << 2);
    // 0x803B1C8C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803B1C90: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803B1C94: addu        $t1, $t1, $t6
    ctx->r9 = ADD32(ctx->r9, ctx->r14);
    // 0x803B1C98: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x803B1C9C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x803B1CA0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803B1CA4: addu        $t1, $t1, $t6
    ctx->r9 = ADD32(ctx->r9, ctx->r14);
    // 0x803B1CA8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803B1CAC: sll         $t1, $t1, 3
    ctx->r9 = S32(ctx->r9 << 3);
    // 0x803B1CB0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803B1CB4: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x803B1CB8: addu        $t1, $t1, $t6
    ctx->r9 = ADD32(ctx->r9, ctx->r14);
    // 0x803B1CBC: addiu       $t8, $t8, -0x2CF0
    ctx->r24 = ADD32(ctx->r24, -0X2CF0);
    // 0x803B1CC0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803B1CC4: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x803B1CC8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x803B1CCC: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x803B1CD0: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x803B1CD4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x803B1CD8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x803B1CDC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x803B1CE0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803B1CE4: addu        $t1, $t1, $t6
    ctx->r9 = ADD32(ctx->r9, ctx->r14);
    // 0x803B1CE8: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x803B1CEC: sll         $t0, $t6, 4
    ctx->r8 = S32(ctx->r14 << 4);
    // 0x803B1CF0: lbu         $s1, 0x0($t9)
    ctx->r17 = MEM_BU(ctx->r25, 0X0);
    // 0x803B1CF4: addu        $s2, $a0, $t0
    ctx->r18 = ADD32(ctx->r4, ctx->r8);
    // 0x803B1CF8: addu        $s3, $t1, $t8
    ctx->r19 = ADD32(ctx->r9, ctx->r24);
    // 0x803B1CFC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_803B1D00:
    // 0x803B1D00: addu        $t2, $s2, $s0
    ctx->r10 = ADD32(ctx->r18, ctx->r16);
    // 0x803B1D04: lbu         $a1, 0x1A($t2)
    ctx->r5 = MEM_BU(ctx->r10, 0X1A);
    // 0x803B1D08: jal         0x803B1D48
    // 0x803B1D0C: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    func_803B1D48(rdram, ctx);
        goto after_0;
    // 0x803B1D0C: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    after_0:
    // 0x803B1D10: addu        $t3, $s3, $s0
    ctx->r11 = ADD32(ctx->r19, ctx->r16);
    // 0x803B1D14: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x803B1D18: andi        $t4, $s0, 0xFF
    ctx->r12 = ctx->r16 & 0XFF;
    // 0x803B1D1C: slti        $at, $t4, 0x10
    ctx->r1 = SIGNED(ctx->r12) < 0X10 ? 1 : 0;
    // 0x803B1D20: or          $s0, $t4, $zero
    ctx->r16 = ctx->r12 | 0;
    // 0x803B1D24: bne         $at, $zero, L_803B1D00
    if (ctx->r1 != 0) {
        // 0x803B1D28: sb          $v0, 0x308($t3)
        MEM_B(0X308, ctx->r11) = ctx->r2;
            goto L_803B1D00;
    }
    // 0x803B1D28: sb          $v0, 0x308($t3)
    MEM_B(0X308, ctx->r11) = ctx->r2;
    // 0x803B1D2C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803B1D30: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x803B1D34: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x803B1D38: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x803B1D3C: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x803B1D40: jr          $ra
    // 0x803B1D44: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x803B1D44: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_803B1D48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B1D48: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x803B1D4C: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x803B1D50: addiu       $t9, $t9, -0x436C
    ctx->r25 = ADD32(ctx->r25, -0X436C);
    // 0x803B1D54: sll         $t8, $t6, 4
    ctx->r24 = S32(ctx->r14 << 4);
    // 0x803B1D58: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x803B1D5C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x803B1D60: andi        $v0, $a1, 0xFF
    ctx->r2 = ctx->r5 & 0XFF;
    // 0x803B1D64: addu        $a2, $t8, $t9
    ctx->r6 = ADD32(ctx->r24, ctx->r25);
    // 0x803B1D68: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_803B1D6C:
    // 0x803B1D6C: addu        $t0, $a2, $v1
    ctx->r8 = ADD32(ctx->r6, ctx->r3);
    // 0x803B1D70: lbu         $t1, 0x0($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X0);
    // 0x803B1D74: nop

    // 0x803B1D78: bne         $v0, $t1, L_803B1D88
    if (ctx->r2 != ctx->r9) {
        // 0x803B1D7C: nop
    
            goto L_803B1D88;
    }
    // 0x803B1D7C: nop

    // 0x803B1D80: jr          $ra
    // 0x803B1D84: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x803B1D84: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_803B1D88:
    // 0x803B1D88: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x803B1D8C: andi        $t2, $v1, 0xFF
    ctx->r10 = ctx->r3 & 0XFF;
    // 0x803B1D90: slti        $at, $t2, 0x10
    ctx->r1 = SIGNED(ctx->r10) < 0X10 ? 1 : 0;
    // 0x803B1D94: bne         $at, $zero, L_803B1D6C
    if (ctx->r1 != 0) {
        // 0x803B1D98: or          $v1, $t2, $zero
        ctx->r3 = ctx->r10 | 0;
            goto L_803B1D6C;
    }
    // 0x803B1D98: or          $v1, $t2, $zero
    ctx->r3 = ctx->r10 | 0;
    // 0x803B1D9C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803B1DA0: jr          $ra
    // 0x803B1DA4: nop

    return;
    // 0x803B1DA4: nop

;}
RECOMP_FUNC void func_803B1DA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B1DA8: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x803B1DAC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803B1DB0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803B1DB4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803B1DB8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803B1DBC: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x803B1DC0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803B1DC4: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x803B1DC8: subu        $t9, $t9, $t6
    ctx->r25 = SUB32(ctx->r25, ctx->r14);
    // 0x803B1DCC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803B1DD0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803B1DD4: sll         $t9, $t9, 5
    ctx->r25 = S32(ctx->r25 << 5);
    // 0x803B1DD8: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x803B1DDC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x803B1DE0: addiu       $t8, $t8, -0x2CF0
    ctx->r24 = ADD32(ctx->r24, -0X2CF0);
    // 0x803B1DE4: addu        $a3, $a0, $t9
    ctx->r7 = ADD32(ctx->r4, ctx->r25);
    // 0x803B1DE8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803B1DEC: addu        $a2, $t7, $t8
    ctx->r6 = ADD32(ctx->r15, ctx->r24);
    // 0x803B1DF0: addiu       $a0, $zero, 0x2C
    ctx->r4 = ADD32(0, 0X2C);
    // 0x803B1DF4: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x803B1DF8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803B1DFC:
    // 0x803B1DFC: multu       $v0, $a0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x803B1E00: sll         $t0, $v0, 1
    ctx->r8 = S32(ctx->r2 << 1);
    // 0x803B1E04: addu        $t1, $a2, $t0
    ctx->r9 = ADD32(ctx->r6, ctx->r8);
    // 0x803B1E08: lbu         $v1, 0x2E9($t1)
    ctx->r3 = MEM_BU(ctx->r9, 0X2E9);
    // 0x803B1E0C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x803B1E10: andi        $t9, $v0, 0xFF
    ctx->r25 = ctx->r2 & 0XFF;
    // 0x803B1E14: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    // 0x803B1E18: mflo        $t2
    ctx->r10 = lo;
    // 0x803B1E1C: addu        $t3, $a2, $t2
    ctx->r11 = ADD32(ctx->r6, ctx->r10);
    // 0x803B1E20: nop

    // 0x803B1E24: multu       $v1, $a1
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x803B1E28: mflo        $t4
    ctx->r12 = lo;
    // 0x803B1E2C: addu        $t5, $a3, $t4
    ctx->r13 = ADD32(ctx->r7, ctx->r12);
    // 0x803B1E30: lwl         $at, 0x3A($t5)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r13, 0X3A);
    // 0x803B1E34: lwr         $at, 0x3D($t5)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r13, 0X3D);
    // 0x803B1E38: nop

    // 0x803B1E3C: swl         $at, 0x41($t3)
    do_swl(rdram, 0X41, ctx->r11, ctx->r1);
    // 0x803B1E40: swr         $at, 0x44($t3)
    do_swr(rdram, 0X44, ctx->r11, ctx->r1);
    // 0x803B1E44: lbu         $at, 0x3E($t5)
    ctx->r1 = MEM_BU(ctx->r13, 0X3E);
    // 0x803B1E48: nop

    // 0x803B1E4C: sb          $at, 0x45($t3)
    MEM_B(0X45, ctx->r11) = ctx->r1;
    // 0x803B1E50: lbu         $t8, 0x3F($t5)
    ctx->r24 = MEM_BU(ctx->r13, 0X3F);
    // 0x803B1E54: slti        $at, $t9, 0x10
    ctx->r1 = SIGNED(ctx->r25) < 0X10 ? 1 : 0;
    // 0x803B1E58: bne         $at, $zero, L_803B1DFC
    if (ctx->r1 != 0) {
        // 0x803B1E5C: sb          $t8, 0x46($t3)
        MEM_B(0X46, ctx->r11) = ctx->r24;
            goto L_803B1DFC;
    }
    // 0x803B1E5C: sb          $t8, 0x46($t3)
    MEM_B(0X46, ctx->r11) = ctx->r24;
    // 0x803B1E60: jr          $ra
    // 0x803B1E64: nop

    return;
    // 0x803B1E64: nop

;}
RECOMP_FUNC void func_803B1E68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B1E68: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x803B1E6C: jr          $ra
    // 0x803B1E70: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x803B1E70: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_803B1E74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B1E74: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x803B1E78: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803B1E7C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803B1E80: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803B1E84: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803B1E88: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x803B1E8C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803B1E90: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x803B1E94: subu        $t9, $t9, $t6
    ctx->r25 = SUB32(ctx->r25, ctx->r14);
    // 0x803B1E98: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803B1E9C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x803B1EA0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803B1EA4: addu        $v1, $a0, $t9
    ctx->r3 = ADD32(ctx->r4, ctx->r25);
    // 0x803B1EA8: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x803B1EAC: lb          $t0, 0x11A($v1)
    ctx->r8 = MEM_B(ctx->r3, 0X11A);
    // 0x803B1EB0: addiu       $t8, $t8, -0x2CF0
    ctx->r24 = ADD32(ctx->r24, -0X2CF0);
    // 0x803B1EB4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803B1EB8: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x803B1EBC: sb          $t0, 0x8A9($v0)
    MEM_B(0X8A9, ctx->r2) = ctx->r8;
    // 0x803B1EC0: lb          $t1, 0x11B($v1)
    ctx->r9 = MEM_B(ctx->r3, 0X11B);
    // 0x803B1EC4: nop

    // 0x803B1EC8: sb          $t1, 0x8AA($v0)
    MEM_B(0X8AA, ctx->r2) = ctx->r9;
    // 0x803B1ECC: lb          $t2, 0x11C($v1)
    ctx->r10 = MEM_B(ctx->r3, 0X11C);
    // 0x803B1ED0: jr          $ra
    // 0x803B1ED4: sb          $t2, 0x8AB($v0)
    MEM_B(0X8AB, ctx->r2) = ctx->r10;
    return;
    // 0x803B1ED4: sb          $t2, 0x8AB($v0)
    MEM_B(0X8AB, ctx->r2) = ctx->r10;
;}
RECOMP_FUNC void func_803B1ED8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B1ED8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x803B1EDC: addiu       $v0, $v0, -0x30A0
    ctx->r2 = ADD32(ctx->r2, -0X30A0);
    // 0x803B1EE0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x803B1EE4: sb          $v1, 0x3($v0)
    MEM_B(0X3, ctx->r2) = ctx->r3;
    // 0x803B1EE8: sb          $v1, 0x7($v0)
    MEM_B(0X7, ctx->r2) = ctx->r3;
    // 0x803B1EEC: sb          $zero, 0x8($v0)
    MEM_B(0X8, ctx->r2) = 0;
    // 0x803B1EF0: sb          $zero, 0x9($v0)
    MEM_B(0X9, ctx->r2) = 0;
    // 0x803B1EF4: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
    // 0x803B1EF8: sb          $zero, 0xD($v0)
    MEM_B(0XD, ctx->r2) = 0;
    // 0x803B1EFC: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x803B1F00: lbu         $t6, 0xD($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XD);
    // 0x803B1F04: nop

    // 0x803B1F08: sb          $t6, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r14;
    // 0x803B1F0C: lbu         $t7, 0xC($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0XC);
    // 0x803B1F10: nop

    // 0x803B1F14: sb          $t7, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r15;
    // 0x803B1F18: lbu         $t8, 0xE($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0XE);
    // 0x803B1F1C: jr          $ra
    // 0x803B1F20: sb          $t8, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r24;
    return;
    // 0x803B1F20: sb          $t8, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r24;
;}
RECOMP_FUNC void func_803B1F24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B1F24: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x803B1F28: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x803B1F2C: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x803B1F30: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x803B1F34: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x803B1F38: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x803B1F3C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x803B1F40: lui         $s5, 0x8012
    ctx->r21 = S32(0X8012 << 16);
    // 0x803B1F44: lui         $s6, 0x8012
    ctx->r22 = S32(0X8012 << 16);
    // 0x803B1F48: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x803B1F4C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x803B1F50: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x803B1F54: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x803B1F58: addiu       $s6, $s6, -0x2CF0
    ctx->r22 = ADD32(ctx->r22, -0X2CF0);
    // 0x803B1F5C: addiu       $s5, $s5, 0xB88
    ctx->r21 = ADD32(ctx->r21, 0XB88);
    // 0x803B1F60: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x803B1F64: addiu       $s4, $zero, 0xFF
    ctx->r20 = ADD32(0, 0XFF);
    // 0x803B1F68: addiu       $s7, $zero, 0xA94
    ctx->r23 = ADD32(0, 0XA94);
L_803B1F6C:
    // 0x803B1F6C: sll         $v1, $s1, 2
    ctx->r3 = S32(ctx->r17 << 2);
    // 0x803B1F70: addu        $s0, $s3, $v1
    ctx->r16 = ADD32(ctx->r19, ctx->r3);
    // 0x803B1F74: lbu         $a2, 0x120($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X120);
    // 0x803B1F78: addu        $s2, $s5, $v1
    ctx->r18 = ADD32(ctx->r21, ctx->r3);
    // 0x803B1F7C: beq         $s4, $a2, L_803B1FD0
    if (ctx->r20 == ctx->r6) {
        // 0x803B1F80: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_803B1FD0;
    }
    // 0x803B1F80: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x803B1F84: sb          $a2, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r6;
    // 0x803B1F88: lbu         $t6, 0x120($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X120);
    // 0x803B1F8C: lbu         $a1, 0x121($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X121);
    // 0x803B1F90: andi        $t7, $t6, 0xF
    ctx->r15 = ctx->r14 & 0XF;
    // 0x803B1F94: multu       $t7, $s7
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r23)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x803B1F98: mflo        $t8
    ctx->r24 = lo;
    // 0x803B1F9C: addu        $t9, $s6, $t8
    ctx->r25 = ADD32(ctx->r22, ctx->r24);
    // 0x803B1FA0: lbu         $a0, 0x0($t9)
    ctx->r4 = MEM_BU(ctx->r25, 0X0);
    // 0x803B1FA4: jal         0x803B1D48
    // 0x803B1FA8: nop

    func_803B1D48(rdram, ctx);
        goto after_0;
    // 0x803B1FA8: nop

    after_0:
    // 0x803B1FAC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x803B1FB0: sb          $v0, 0x1($s2)
    MEM_B(0X1, ctx->r18) = ctx->r2;
    // 0x803B1FB4: lhu         $t0, 0x122($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X122);
    // 0x803B1FB8: andi        $t1, $s1, 0xFF
    ctx->r9 = ctx->r17 & 0XFF;
    // 0x803B1FBC: slti        $at, $t1, 0xA
    ctx->r1 = SIGNED(ctx->r9) < 0XA ? 1 : 0;
    // 0x803B1FC0: or          $s1, $t1, $zero
    ctx->r17 = ctx->r9 | 0;
    // 0x803B1FC4: bne         $at, $zero, L_803B1F6C
    if (ctx->r1 != 0) {
        // 0x803B1FC8: sh          $t0, 0x2($s2)
        MEM_H(0X2, ctx->r18) = ctx->r8;
            goto L_803B1F6C;
    }
    // 0x803B1FC8: sh          $t0, 0x2($s2)
    MEM_H(0X2, ctx->r18) = ctx->r8;
    // 0x803B1FCC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_803B1FD0:
    // 0x803B1FD0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x803B1FD4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x803B1FD8: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x803B1FDC: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x803B1FE0: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x803B1FE4: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x803B1FE8: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x803B1FEC: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x803B1FF0: jr          $ra
    // 0x803B1FF4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x803B1FF4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_803B1FF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B1FF8: lbu         $t6, 0x6($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X6);
    // 0x803B1FFC: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x803B2000: bne         $t6, $zero, L_803B2020
    if (ctx->r14 != 0) {
        // 0x803B2004: lui         $t0, 0x8009
        ctx->r8 = S32(0X8009 << 16);
            goto L_803B2020;
    }
    // 0x803B2004: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x803B2008: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x803B200C: lw          $t8, 0x3B20($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X3B20);
    // 0x803B2010: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803B2014: addiu       $t7, $t7, -0x225C
    ctx->r15 = ADD32(ctx->r15, -0X225C);
    // 0x803B2018: jr          $ra
    // 0x803B201C: sw          $t7, 0xB4($t8)
    MEM_W(0XB4, ctx->r24) = ctx->r15;
    return;
    // 0x803B201C: sw          $t7, 0xB4($t8)
    MEM_W(0XB4, ctx->r24) = ctx->r15;
L_803B2020:
    // 0x803B2020: lw          $t0, 0x3B20($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X3B20);
    // 0x803B2024: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x803B2028: sw          $t9, 0xB4($t0)
    MEM_W(0XB4, ctx->r8) = ctx->r25;
    // 0x803B202C: jr          $ra
    // 0x803B2030: nop

    return;
    // 0x803B2030: nop

;}
RECOMP_FUNC void func_803B2034(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B2034: lh          $t6, 0x8($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X8);
    // 0x803B2038: addiu       $t7, $zero, 0x37
    ctx->r15 = ADD32(0, 0X37);
    // 0x803B203C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x803B2040: subu        $t8, $t7, $t6
    ctx->r24 = SUB32(ctx->r15, ctx->r14);
    // 0x803B2044: multu       $t8, $a1
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x803B2048: lh          $t1, 0xA($a0)
    ctx->r9 = MEM_H(ctx->r4, 0XA);
    // 0x803B204C: lui         $a2, 0x8009
    ctx->r6 = S32(0X8009 << 16);
    // 0x803B2050: addiu       $a2, $a2, 0x3B20
    ctx->r6 = ADD32(ctx->r6, 0X3B20);
    // 0x803B2054: lw          $t4, 0x0($a2)
    ctx->r12 = MEM_W(ctx->r6, 0X0);
    // 0x803B2058: mflo        $t0
    ctx->r8 = lo;
    // 0x803B205C: sh          $t0, 0xE8($t4)
    MEM_H(0XE8, ctx->r12) = ctx->r8;
    // 0x803B2060: lw          $t5, 0x0($a2)
    ctx->r13 = MEM_W(ctx->r6, 0X0);
    // 0x803B2064: multu       $t1, $a1
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x803B2068: mflo        $v1
    ctx->r3 = lo;
    // 0x803B206C: addiu       $t3, $v1, -0x156
    ctx->r11 = ADD32(ctx->r3, -0X156);
    // 0x803B2070: jr          $ra
    // 0x803B2074: sh          $t3, 0xEA($t5)
    MEM_H(0XEA, ctx->r13) = ctx->r11;
    return;
    // 0x803B2074: sh          $t3, 0xEA($t5)
    MEM_H(0XEA, ctx->r13) = ctx->r11;
;}
RECOMP_FUNC void func_803B2078(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B2078: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x803B207C: addiu       $v0, $v0, -0x2CF0
    ctx->r2 = ADD32(ctx->r2, -0X2CF0);
    // 0x803B2080: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803B2084: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803B2088: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x803B208C: lbu         $a1, 0xA94($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0XA94);
    // 0x803B2090: jal         0x80070410
    // 0x803B2094: nop

    func_80070410(rdram, ctx);
        goto after_0;
    // 0x803B2094: nop

    after_0:
    // 0x803B2098: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803B209C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803B20A0: jr          $ra
    // 0x803B20A4: nop

    return;
    // 0x803B20A4: nop

    // 0x803B20A8: nop

    // 0x803B20AC: nop

;}
RECOMP_FUNC void func_803B20B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B20B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803B20B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803B20B8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803B20BC: jal         0x80036234
    // 0x803B20C0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80036234(rdram, ctx);
        goto after_0;
    // 0x803B20C0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x803B20C4: lui         $a0, 0x803F
    ctx->r4 = S32(0X803F << 16);
    // 0x803B20C8: jal         0x80035FF0
    // 0x803B20CC: addiu       $a0, $a0, -0x3304
    ctx->r4 = ADD32(ctx->r4, -0X3304);
    func_80035FF0(rdram, ctx);
        goto after_1;
    // 0x803B20CC: addiu       $a0, $a0, -0x3304
    ctx->r4 = ADD32(ctx->r4, -0X3304);
    after_1:
    // 0x803B20D0: addiu       $a0, $zero, 0xF00
    ctx->r4 = ADD32(0, 0XF00);
    // 0x803B20D4: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x803B20D8: jal         0x80049E40
    // 0x803B20DC: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_80049E40(rdram, ctx);
        goto after_2;
    // 0x803B20DC: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_2:
    // 0x803B20E0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x803B20E4: jal         0x80020318
    // 0x803B20E8: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    func_80020318(rdram, ctx);
        goto after_3;
    // 0x803B20E8: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    after_3:
    // 0x803B20EC: jal         0x8026E090
    // 0x803B20F0: nop

    LOOKUP_FUNC(0x8026E090)(rdram, ctx);
        goto after_4;
    // 0x803B20F0: nop

    after_4:
    // 0x803B20F4: jal         0x803B23DC
    // 0x803B20F8: nop

    func_803B23DC(rdram, ctx);
        goto after_5;
    // 0x803B20F8: nop

    after_5:
    // 0x803B20FC: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803B2100: addiu       $a0, $a0, 0x211C
    ctx->r4 = ADD32(ctx->r4, 0X211C);
    // 0x803B2104: jal         0x8002989C
    // 0x803B2108: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_8002989C(rdram, ctx);
        goto after_6;
    // 0x803B2108: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_6:
    // 0x803B210C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803B2110: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803B2114: jr          $ra
    // 0x803B2118: nop

    return;
    // 0x803B2118: nop

;}
RECOMP_FUNC void func_803B211C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B211C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803B2120: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803B2124: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803B2128: jal         0x803B2508
    // 0x803B212C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_803B2508(rdram, ctx);
        goto after_0;
    // 0x803B212C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x803B2130: jal         0x803B255C
    // 0x803B2134: nop

    func_803B255C(rdram, ctx);
        goto after_1;
    // 0x803B2134: nop

    after_1:
    // 0x803B2138: jal         0x803B261C
    // 0x803B213C: nop

    func_803B261C(rdram, ctx);
        goto after_2;
    // 0x803B213C: nop

    after_2:
    // 0x803B2140: jal         0x803B26CC
    // 0x803B2144: nop

    func_803B26CC(rdram, ctx);
        goto after_3;
    // 0x803B2144: nop

    after_3:
    // 0x803B2148: jal         0x803B27CC
    // 0x803B214C: nop

    func_803B27CC(rdram, ctx);
        goto after_4;
    // 0x803B214C: nop

    after_4:
    // 0x803B2150: jal         0x803B2680
    // 0x803B2154: nop

    func_803B2680(rdram, ctx);
        goto after_5;
    // 0x803B2154: nop

    after_5:
    // 0x803B2158: jal         0x803B2470
    // 0x803B215C: nop

    func_803B2470(rdram, ctx);
        goto after_6;
    // 0x803B215C: nop

    after_6:
    // 0x803B2160: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x803B2164: addiu       $a0, $a0, 0x6D94
    ctx->r4 = ADD32(ctx->r4, 0X6D94);
    // 0x803B2168: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x803B216C: jal         0x8026E0B4
    // 0x803B2170: addiu       $a2, $zero, 0xD4
    ctx->r6 = ADD32(0, 0XD4);
    LOOKUP_FUNC(0x8026E0B4)(rdram, ctx);
        goto after_7;
    // 0x803B2170: addiu       $a2, $zero, 0xD4
    ctx->r6 = ADD32(0, 0XD4);
    after_7:
    // 0x803B2174: jal         0x80015BC0
    // 0x803B2178: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_80015BC0(rdram, ctx);
        goto after_8;
    // 0x803B2178: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_8:
    // 0x803B217C: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803B2180: addiu       $a0, $a0, 0x219C
    ctx->r4 = ADD32(ctx->r4, 0X219C);
    // 0x803B2184: jal         0x8004AE38
    // 0x803B2188: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_8004AE38(rdram, ctx);
        goto after_9;
    // 0x803B2188: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_9:
    // 0x803B218C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803B2190: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803B2194: jr          $ra
    // 0x803B2198: nop

    return;
    // 0x803B2198: nop

;}
RECOMP_FUNC void func_803B219C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B219C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803B21A0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x803B21A4: lui         $v1, 0x803B
    ctx->r3 = S32(0X803B << 16);
    // 0x803B21A8: addiu       $v1, $v1, 0x6474
    ctx->r3 = ADD32(ctx->r3, 0X6474);
    // 0x803B21AC: lui         $a1, 0x8010
    ctx->r5 = S32(0X8010 << 16);
    // 0x803B21B0: lbu         $t7, 0x0($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X0);
    // 0x803B21B4: addiu       $a1, $a1, 0x4890
    ctx->r5 = ADD32(ctx->r5, 0X4890);
    // 0x803B21B8: lh          $t6, 0xEE0($a1)
    ctx->r14 = MEM_H(ctx->r5, 0XEE0);
    // 0x803B21BC: sltiu       $at, $t7, 0x9
    ctx->r1 = ctx->r15 < 0X9 ? 1 : 0;
    // 0x803B21C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803B21C4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x803B21C8: beq         $at, $zero, L_803B23C0
    if (ctx->r1 == 0) {
        // 0x803B21CC: sh          $t6, 0x1E($sp)
        MEM_H(0X1E, ctx->r29) = ctx->r14;
            goto L_803B23C0;
    }
    // 0x803B21CC: sh          $t6, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r14;
    // 0x803B21D0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803B21D4: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803B21D8: addu        $at, $at, $t7
    gpr jr_addend_803B21E4 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x803B21DC: lw          $t7, 0x5040($at)
    ctx->r15 = ADD32(ctx->r1, 0X5040);
    // 0x803B21E0: nop

    // 0x803B21E4: jr          $t7
    // 0x803B21E8: nop

    switch (jr_addend_803B21E4 >> 2) {
        case 0: goto L_803B21EC; break;
        case 1: goto L_803B2204; break;
        case 2: goto L_803B2234; break;
        case 3: goto L_803B2288; break;
        case 4: goto L_803B22B8; break;
        case 5: goto L_803B22E0; break;
        case 6: goto L_803B2340; break;
        case 7: goto L_803B2360; break;
        case 8: goto L_803B2394; break;
        default: switch_error(__func__, 0x803B21E4, 0x803B5040);
    }
    // 0x803B21E8: nop

L_803B21EC:
    // 0x803B21EC: lui         $v0, 0x803B
    ctx->r2 = S32(0X803B << 16);
    // 0x803B21F0: addiu       $v0, $v0, 0x6472
    ctx->r2 = ADD32(ctx->r2, 0X6472);
    // 0x803B21F4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x803B21F8: sb          $t8, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r24;
    // 0x803B21FC: b           L_803B23C0
    // 0x803B2200: sh          $zero, 0x0($v0)
    MEM_H(0X0, ctx->r2) = 0;
        goto L_803B23C0;
    // 0x803B2200: sh          $zero, 0x0($v0)
    MEM_H(0X0, ctx->r2) = 0;
L_803B2204:
    // 0x803B2204: lui         $v0, 0x803B
    ctx->r2 = S32(0X803B << 16);
    // 0x803B2208: addiu       $v0, $v0, 0x6472
    ctx->r2 = ADD32(ctx->r2, 0X6472);
    // 0x803B220C: lhu         $t9, 0x0($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X0);
    // 0x803B2210: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x803B2214: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x803B2218: andi        $t1, $t0, 0xFFFF
    ctx->r9 = ctx->r8 & 0XFFFF;
    // 0x803B221C: slti        $at, $t1, 0x3C
    ctx->r1 = SIGNED(ctx->r9) < 0X3C ? 1 : 0;
    // 0x803B2220: bne         $at, $zero, L_803B23C0
    if (ctx->r1 != 0) {
        // 0x803B2224: sh          $t0, 0x0($v0)
        MEM_H(0X0, ctx->r2) = ctx->r8;
            goto L_803B23C0;
    }
    // 0x803B2224: sh          $t0, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r8;
    // 0x803B2228: sb          $t2, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r10;
    // 0x803B222C: b           L_803B23C0
    // 0x803B2230: sh          $zero, 0x0($v0)
    MEM_H(0X0, ctx->r2) = 0;
        goto L_803B23C0;
    // 0x803B2230: sh          $zero, 0x0($v0)
    MEM_H(0X0, ctx->r2) = 0;
L_803B2234:
    // 0x803B2234: lui         $v0, 0x803B
    ctx->r2 = S32(0X803B << 16);
    // 0x803B2238: addiu       $v0, $v0, 0x6472
    ctx->r2 = ADD32(ctx->r2, 0X6472);
    // 0x803B223C: lhu         $t3, 0x0($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X0);
    // 0x803B2240: addiu       $t9, $zero, 0x8E0
    ctx->r25 = ADD32(0, 0X8E0);
    // 0x803B2244: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803B2248: andi        $t5, $t4, 0xFFFF
    ctx->r13 = ctx->r12 & 0XFFFF;
    // 0x803B224C: slti        $at, $t5, 0x2
    ctx->r1 = SIGNED(ctx->r13) < 0X2 ? 1 : 0;
    // 0x803B2250: bne         $at, $zero, L_803B2268
    if (ctx->r1 != 0) {
        // 0x803B2254: sh          $t4, 0x0($v0)
        MEM_H(0X0, ctx->r2) = ctx->r12;
            goto L_803B2268;
    }
    // 0x803B2254: sh          $t4, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r12;
    // 0x803B2258: lh          $t6, 0x1E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X1E);
    // 0x803B225C: sh          $zero, 0x0($v0)
    MEM_H(0X0, ctx->r2) = 0;
    // 0x803B2260: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x803B2264: sh          $t7, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r15;
L_803B2268:
    // 0x803B2268: lh          $t8, 0x1E($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X1E);
    // 0x803B226C: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x803B2270: slti        $at, $t8, 0x8E0
    ctx->r1 = SIGNED(ctx->r24) < 0X8E0 ? 1 : 0;
    // 0x803B2274: bne         $at, $zero, L_803B23C4
    if (ctx->r1 != 0) {
        // 0x803B2278: lh          $t3, 0x1E($sp)
        ctx->r11 = MEM_H(ctx->r29, 0X1E);
            goto L_803B23C4;
    }
    // 0x803B2278: lh          $t3, 0x1E($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X1E);
    // 0x803B227C: sh          $t9, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r25;
    // 0x803B2280: b           L_803B23C0
    // 0x803B2284: sb          $t0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r8;
        goto L_803B23C0;
    // 0x803B2284: sb          $t0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r8;
L_803B2288:
    // 0x803B2288: lui         $v0, 0x803B
    ctx->r2 = S32(0X803B << 16);
    // 0x803B228C: addiu       $v0, $v0, 0x6472
    ctx->r2 = ADD32(ctx->r2, 0X6472);
    // 0x803B2290: lhu         $t1, 0x0($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X0);
    // 0x803B2294: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x803B2298: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x803B229C: andi        $t3, $t2, 0xFFFF
    ctx->r11 = ctx->r10 & 0XFFFF;
    // 0x803B22A0: slti        $at, $t3, 0x3D
    ctx->r1 = SIGNED(ctx->r11) < 0X3D ? 1 : 0;
    // 0x803B22A4: bne         $at, $zero, L_803B23C0
    if (ctx->r1 != 0) {
        // 0x803B22A8: sh          $t2, 0x0($v0)
        MEM_H(0X0, ctx->r2) = ctx->r10;
            goto L_803B23C0;
    }
    // 0x803B22A8: sh          $t2, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r10;
    // 0x803B22AC: sb          $t4, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r12;
    // 0x803B22B0: b           L_803B23C0
    // 0x803B22B4: sh          $zero, 0x0($v0)
    MEM_H(0X0, ctx->r2) = 0;
        goto L_803B23C0;
    // 0x803B22B4: sh          $zero, 0x0($v0)
    MEM_H(0X0, ctx->r2) = 0;
L_803B22B8:
    // 0x803B22B8: jal         0x80021940
    // 0x803B22BC: nop

    func_80021940(rdram, ctx);
        goto after_0;
    // 0x803B22BC: nop

    after_0:
    // 0x803B22C0: jal         0x800219BC
    // 0x803B22C4: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_800219BC(rdram, ctx);
        goto after_1;
    // 0x803B22C4: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_1:
    // 0x803B22C8: addiu       $t5, $zero, 0x5
    ctx->r13 = ADD32(0, 0X5);
    // 0x803B22CC: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803B22D0: lui         $a1, 0x8010
    ctx->r5 = S32(0X8010 << 16);
    // 0x803B22D4: sb          $t5, 0x6474($at)
    MEM_B(0X6474, ctx->r1) = ctx->r13;
    // 0x803B22D8: b           L_803B23C0
    // 0x803B22DC: addiu       $a1, $a1, 0x4890
    ctx->r5 = ADD32(ctx->r5, 0X4890);
        goto L_803B23C0;
    // 0x803B22DC: addiu       $a1, $a1, 0x4890
    ctx->r5 = ADD32(ctx->r5, 0X4890);
L_803B22E0:
    // 0x803B22E0: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x803B22E4: lh          $t6, -0x2FAC($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X2FAC);
    // 0x803B22E8: nop

    // 0x803B22EC: slti        $at, $t6, 0xFF
    ctx->r1 = SIGNED(ctx->r14) < 0XFF ? 1 : 0;
    // 0x803B22F0: bne         $at, $zero, L_803B23C4
    if (ctx->r1 != 0) {
        // 0x803B22F4: lh          $t3, 0x1E($sp)
        ctx->r11 = MEM_H(ctx->r29, 0X1E);
            goto L_803B23C4;
    }
    // 0x803B22F4: lh          $t3, 0x1E($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X1E);
    // 0x803B22F8: jal         0x803B2920
    // 0x803B22FC: nop

    func_803B2920(rdram, ctx);
        goto after_2;
    // 0x803B22FC: nop

    after_2:
    // 0x803B2300: jal         0x803B2968
    // 0x803B2304: nop

    func_803B2968(rdram, ctx);
        goto after_3;
    // 0x803B2304: nop

    after_3:
    // 0x803B2308: jal         0x803B29B0
    // 0x803B230C: nop

    func_803B29B0(rdram, ctx);
        goto after_4;
    // 0x803B230C: nop

    after_4:
    // 0x803B2310: jal         0x803B2A1C
    // 0x803B2314: nop

    func_803B2A1C(rdram, ctx);
        goto after_5;
    // 0x803B2314: nop

    after_5:
    // 0x803B2318: jal         0x803B2A60
    // 0x803B231C: nop

    func_803B2A60(rdram, ctx);
        goto after_6;
    // 0x803B231C: nop

    after_6:
    // 0x803B2320: jal         0x803B2AAC
    // 0x803B2324: nop

    func_803B2AAC(rdram, ctx);
        goto after_7;
    // 0x803B2324: nop

    after_7:
    // 0x803B2328: addiu       $t7, $zero, 0x6
    ctx->r15 = ADD32(0, 0X6);
    // 0x803B232C: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803B2330: lui         $a1, 0x8010
    ctx->r5 = S32(0X8010 << 16);
    // 0x803B2334: sb          $t7, 0x6474($at)
    MEM_B(0X6474, ctx->r1) = ctx->r15;
    // 0x803B2338: b           L_803B23C0
    // 0x803B233C: addiu       $a1, $a1, 0x4890
    ctx->r5 = ADD32(ctx->r5, 0X4890);
        goto L_803B23C0;
    // 0x803B233C: addiu       $a1, $a1, 0x4890
    ctx->r5 = ADD32(ctx->r5, 0X4890);
L_803B2340:
    // 0x803B2340: jal         0x800219E4
    // 0x803B2344: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_800219E4(rdram, ctx);
        goto after_8;
    // 0x803B2344: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_8:
    // 0x803B2348: addiu       $t8, $zero, 0x7
    ctx->r24 = ADD32(0, 0X7);
    // 0x803B234C: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803B2350: lui         $a1, 0x8010
    ctx->r5 = S32(0X8010 << 16);
    // 0x803B2354: sb          $t8, 0x6474($at)
    MEM_B(0X6474, ctx->r1) = ctx->r24;
    // 0x803B2358: b           L_803B23C0
    // 0x803B235C: addiu       $a1, $a1, 0x4890
    ctx->r5 = ADD32(ctx->r5, 0X4890);
        goto L_803B23C0;
    // 0x803B235C: addiu       $a1, $a1, 0x4890
    ctx->r5 = ADD32(ctx->r5, 0X4890);
L_803B2360:
    // 0x803B2360: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x803B2364: lh          $t9, -0x2FAC($t9)
    ctx->r25 = MEM_H(ctx->r25, -0X2FAC);
    // 0x803B2368: nop

    // 0x803B236C: bgtz        $t9, L_803B23C4
    if (SIGNED(ctx->r25) > 0) {
        // 0x803B2370: lh          $t3, 0x1E($sp)
        ctx->r11 = MEM_H(ctx->r29, 0X1E);
            goto L_803B23C4;
    }
    // 0x803B2370: lh          $t3, 0x1E($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X1E);
    // 0x803B2374: jal         0x80021940
    // 0x803B2378: nop

    func_80021940(rdram, ctx);
        goto after_9;
    // 0x803B2378: nop

    after_9:
    // 0x803B237C: addiu       $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
    // 0x803B2380: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803B2384: lui         $a1, 0x8010
    ctx->r5 = S32(0X8010 << 16);
    // 0x803B2388: sb          $t0, 0x6474($at)
    MEM_B(0X6474, ctx->r1) = ctx->r8;
    // 0x803B238C: b           L_803B23C0
    // 0x803B2390: addiu       $a1, $a1, 0x4890
    ctx->r5 = ADD32(ctx->r5, 0X4890);
        goto L_803B23C0;
    // 0x803B2390: addiu       $a1, $a1, 0x4890
    ctx->r5 = ADD32(ctx->r5, 0X4890);
L_803B2394:
    // 0x803B2394: lhu         $t1, 0x9AC($a1)
    ctx->r9 = MEM_HU(ctx->r5, 0X9AC);
    // 0x803B2398: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x803B239C: andi        $t2, $t1, 0x8000
    ctx->r10 = ctx->r9 & 0X8000;
    // 0x803B23A0: beq         $t2, $zero, L_803B23C0
    if (ctx->r10 == 0) {
        // 0x803B23A4: addiu       $a0, $zero, 0x7
        ctx->r4 = ADD32(0, 0X7);
            goto L_803B23C0;
    }
    // 0x803B23A4: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x803B23A8: jal         0x80015BC0
    // 0x803B23AC: sb          $zero, -0x3271($at)
    MEM_B(-0X3271, ctx->r1) = 0;
    func_80015BC0(rdram, ctx);
        goto after_10;
    // 0x803B23AC: sb          $zero, -0x3271($at)
    MEM_B(-0X3271, ctx->r1) = 0;
    after_10:
    // 0x803B23B0: jal         0x80037BA8
    // 0x803B23B4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80037BA8(rdram, ctx);
        goto after_11;
    // 0x803B23B4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_11:
    // 0x803B23B8: b           L_803B23D0
    // 0x803B23BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803B23D0;
    // 0x803B23BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803B23C0:
    // 0x803B23C0: lh          $t3, 0x1E($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X1E);
L_803B23C4:
    // 0x803B23C4: nop

    // 0x803B23C8: sh          $t3, 0xEE0($a1)
    MEM_H(0XEE0, ctx->r5) = ctx->r11;
    // 0x803B23CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803B23D0:
    // 0x803B23D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803B23D4: jr          $ra
    // 0x803B23D8: nop

    return;
    // 0x803B23D8: nop

;}
RECOMP_FUNC void func_803B23DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B23DC: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803B23E0: sb          $zero, 0x6474($at)
    MEM_B(0X6474, ctx->r1) = 0;
    // 0x803B23E4: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803B23E8: sh          $zero, 0x6472($at)
    MEM_H(0X6472, ctx->r1) = 0;
    // 0x803B23EC: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x803B23F0: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x803B23F4: addiu       $a1, $a1, -0x32B0
    ctx->r5 = ADD32(ctx->r5, -0X32B0);
    // 0x803B23F8: sh          $zero, 0x5770($at)
    MEM_H(0X5770, ctx->r1) = 0;
    // 0x803B23FC: lbu         $t6, 0x136($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X136);
    // 0x803B2400: lui         $a2, 0x803B
    ctx->r6 = S32(0X803B << 16);
    // 0x803B2404: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803B2408: addiu       $a2, $a2, 0x6470
    ctx->r6 = ADD32(ctx->r6, 0X6470);
    // 0x803B240C: lui         $a3, 0x803B
    ctx->r7 = S32(0X803B << 16);
    // 0x803B2410: sb          $t6, 0x6475($at)
    MEM_B(0X6475, ctx->r1) = ctx->r14;
    // 0x803B2414: sh          $zero, 0x0($a2)
    MEM_H(0X0, ctx->r6) = 0;
    // 0x803B2418: addiu       $a3, $a3, 0x6450
    ctx->r7 = ADD32(ctx->r7, 0X6450);
    // 0x803B241C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803B2420: addiu       $t0, $zero, 0x3E7
    ctx->r8 = ADD32(0, 0X3E7);
L_803B2424:
    // 0x803B2424: addu        $t8, $a1, $v0
    ctx->r24 = ADD32(ctx->r5, ctx->r2);
    // 0x803B2428: lbu         $t9, 0x137($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X137);
    // 0x803B242C: lhu         $t1, 0x0($a2)
    ctx->r9 = MEM_HU(ctx->r6, 0X0);
    // 0x803B2430: andi        $a0, $t9, 0xFFFF
    ctx->r4 = ctx->r25 & 0XFFFF;
    // 0x803B2434: sll         $t7, $v0, 1
    ctx->r15 = S32(ctx->r2 << 1);
    // 0x803B2438: addu        $v1, $a3, $t7
    ctx->r3 = ADD32(ctx->r7, ctx->r15);
    // 0x803B243C: slti        $at, $a0, 0x3E8
    ctx->r1 = SIGNED(ctx->r4) < 0X3E8 ? 1 : 0;
    // 0x803B2440: addu        $t2, $t1, $a0
    ctx->r10 = ADD32(ctx->r9, ctx->r4);
    // 0x803B2444: sh          $t2, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r10;
    // 0x803B2448: bne         $at, $zero, L_803B2454
    if (ctx->r1 != 0) {
        // 0x803B244C: sh          $t9, 0x0($v1)
        MEM_H(0X0, ctx->r3) = ctx->r25;
            goto L_803B2454;
    }
    // 0x803B244C: sh          $t9, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r25;
    // 0x803B2450: sh          $t0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r8;
L_803B2454:
    // 0x803B2454: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x803B2458: andi        $t3, $v0, 0xFF
    ctx->r11 = ctx->r2 & 0XFF;
    // 0x803B245C: slti        $at, $t3, 0x10
    ctx->r1 = SIGNED(ctx->r11) < 0X10 ? 1 : 0;
    // 0x803B2460: bne         $at, $zero, L_803B2424
    if (ctx->r1 != 0) {
        // 0x803B2464: or          $v0, $t3, $zero
        ctx->r2 = ctx->r11 | 0;
            goto L_803B2424;
    }
    // 0x803B2464: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
    // 0x803B2468: jr          $ra
    // 0x803B246C: nop

    return;
    // 0x803B246C: nop

;}
RECOMP_FUNC void func_803B2470(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B2470: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803B2474: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x803B2478: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x803B247C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x803B2480: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x803B2484: lui         $s1, 0x8010
    ctx->r17 = S32(0X8010 << 16);
    // 0x803B2488: lui         $s2, 0x803B
    ctx->r18 = S32(0X803B << 16);
    // 0x803B248C: lui         $s3, 0x803B
    ctx->r19 = S32(0X803B << 16);
    // 0x803B2490: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x803B2494: addiu       $s1, $s1, 0x6DD0
    ctx->r17 = ADD32(ctx->r17, 0X6DD0);
    // 0x803B2498: addiu       $s3, $s3, 0x4F20
    ctx->r19 = ADD32(ctx->r19, 0X4F20);
    // 0x803B249C: addiu       $s2, $s2, 0x4F10
    ctx->r18 = ADD32(ctx->r18, 0X4F10);
    // 0x803B24A0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_803B24A4:
    // 0x803B24A4: sll         $t6, $s0, 3
    ctx->r14 = S32(ctx->r16 << 3);
    // 0x803B24A8: addu        $v0, $s2, $t6
    ctx->r2 = ADD32(ctx->r18, ctx->r14);
    // 0x803B24AC: lhu         $a1, 0x4($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X4);
    // 0x803B24B0: lw          $a3, 0x0($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X0);
    // 0x803B24B4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x803B24B8: jal         0x8004CD24
    // 0x803B24BC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_8004CD24(rdram, ctx);
        goto after_0;
    // 0x803B24BC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_0:
    // 0x803B24C0: addu        $t7, $s3, $s0
    ctx->r15 = ADD32(ctx->r19, ctx->r16);
    // 0x803B24C4: lbu         $a2, 0x0($t7)
    ctx->r6 = MEM_BU(ctx->r15, 0X0);
    // 0x803B24C8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x803B24CC: jal         0x80021408
    // 0x803B24D0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_80021408(rdram, ctx);
        goto after_1;
    // 0x803B24D0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_1:
    // 0x803B24D4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x803B24D8: andi        $t8, $s0, 0xFF
    ctx->r24 = ctx->r16 & 0XFF;
    // 0x803B24DC: slti        $at, $t8, 0x2
    ctx->r1 = SIGNED(ctx->r24) < 0X2 ? 1 : 0;
    // 0x803B24E0: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
    // 0x803B24E4: bne         $at, $zero, L_803B24A4
    if (ctx->r1 != 0) {
        // 0x803B24E8: addiu       $s1, $s1, 0x3C
        ctx->r17 = ADD32(ctx->r17, 0X3C);
            goto L_803B24A4;
    }
    // 0x803B24E8: addiu       $s1, $s1, 0x3C
    ctx->r17 = ADD32(ctx->r17, 0X3C);
    // 0x803B24EC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803B24F0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x803B24F4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x803B24F8: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x803B24FC: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x803B2500: jr          $ra
    // 0x803B2504: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x803B2504: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_803B2508(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B2508: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803B250C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803B2510: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x803B2514: lui         $a3, 0x803E
    ctx->r7 = S32(0X803E << 16);
    // 0x803B2518: addiu       $a3, $a3, 0x7A1C
    ctx->r7 = ADD32(ctx->r7, 0X7A1C);
    // 0x803B251C: addiu       $a0, $a0, 0x6E48
    ctx->r4 = ADD32(ctx->r4, 0X6E48);
    // 0x803B2520: addiu       $a1, $zero, 0x4DF
    ctx->r5 = ADD32(0, 0X4DF);
    // 0x803B2524: jal         0x8004CD24
    // 0x803B2528: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_8004CD24(rdram, ctx);
        goto after_0;
    // 0x803B2528: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x803B252C: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x803B2530: addiu       $a0, $a0, 0x6E48
    ctx->r4 = ADD32(ctx->r4, 0X6E48);
    // 0x803B2534: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x803B2538: jal         0x8002135C
    // 0x803B253C: addiu       $a2, $zero, 0xD3
    ctx->r6 = ADD32(0, 0XD3);
    func_8002135C(rdram, ctx);
        goto after_1;
    // 0x803B253C: addiu       $a2, $zero, 0xD3
    ctx->r6 = ADD32(0, 0XD3);
    after_1:
    // 0x803B2540: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x803B2544: jal         0x8004CDEC
    // 0x803B2548: addiu       $a0, $a0, 0x6E48
    ctx->r4 = ADD32(ctx->r4, 0X6E48);
    func_8004CDEC(rdram, ctx);
        goto after_2;
    // 0x803B2548: addiu       $a0, $a0, 0x6E48
    ctx->r4 = ADD32(ctx->r4, 0X6E48);
    after_2:
    // 0x803B254C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803B2550: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803B2554: jr          $ra
    // 0x803B2558: nop

    return;
    // 0x803B2558: nop

;}
RECOMP_FUNC void func_803B255C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B255C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x803B2560: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x803B2564: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x803B2568: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x803B256C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803B2570: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x803B2574: lui         $s0, 0x8010
    ctx->r16 = S32(0X8010 << 16);
    // 0x803B2578: lui         $s2, 0x803B
    ctx->r18 = S32(0X803B << 16);
    // 0x803B257C: lui         $s3, 0x803B
    ctx->r19 = S32(0X803B << 16);
    // 0x803B2580: lui         $s4, 0x803B
    ctx->r20 = S32(0X803B << 16);
    // 0x803B2584: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x803B2588: addiu       $s0, $s0, 0x6E84
    ctx->r16 = ADD32(ctx->r16, 0X6E84);
    // 0x803B258C: addiu       $s4, $s4, 0x6475
    ctx->r20 = ADD32(ctx->r20, 0X6475);
    // 0x803B2590: addiu       $s3, $s3, 0x4F3C
    ctx->r19 = ADD32(ctx->r19, 0X4F3C);
    // 0x803B2594: addiu       $s2, $s2, 0x4F24
    ctx->r18 = ADD32(ctx->r18, 0X4F24);
    // 0x803B2598: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_803B259C:
    // 0x803B259C: sll         $t6, $s1, 3
    ctx->r14 = S32(ctx->r17 << 3);
    // 0x803B25A0: addu        $v0, $s2, $t6
    ctx->r2 = ADD32(ctx->r18, ctx->r14);
    // 0x803B25A4: lhu         $a1, 0x4($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X4);
    // 0x803B25A8: lw          $a3, 0x0($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X0);
    // 0x803B25AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803B25B0: jal         0x8004CD24
    // 0x803B25B4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_8004CD24(rdram, ctx);
        goto after_0;
    // 0x803B25B4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x803B25B8: jal         0x8004CDEC
    // 0x803B25BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8004CDEC(rdram, ctx);
        goto after_1;
    // 0x803B25BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x803B25C0: lbu         $t7, 0x0($s4)
    ctx->r15 = MEM_BU(ctx->r20, 0X0);
    // 0x803B25C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803B25C8: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x803B25CC: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x803B25D0: addu        $t9, $s3, $t8
    ctx->r25 = ADD32(ctx->r19, ctx->r24);
    // 0x803B25D4: addu        $t0, $t9, $s1
    ctx->r8 = ADD32(ctx->r25, ctx->r17);
    // 0x803B25D8: lbu         $a2, 0x0($t0)
    ctx->r6 = MEM_BU(ctx->r8, 0X0);
    // 0x803B25DC: jal         0x8002135C
    // 0x803B25E0: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x803B25E0: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    after_2:
    // 0x803B25E4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x803B25E8: andi        $t1, $s1, 0xFF
    ctx->r9 = ctx->r17 & 0XFF;
    // 0x803B25EC: slti        $at, $t1, 0x3
    ctx->r1 = SIGNED(ctx->r9) < 0X3 ? 1 : 0;
    // 0x803B25F0: or          $s1, $t1, $zero
    ctx->r17 = ctx->r9 | 0;
    // 0x803B25F4: bne         $at, $zero, L_803B259C
    if (ctx->r1 != 0) {
        // 0x803B25F8: addiu       $s0, $s0, 0x3C
        ctx->r16 = ADD32(ctx->r16, 0X3C);
            goto L_803B259C;
    }
    // 0x803B25F8: addiu       $s0, $s0, 0x3C
    ctx->r16 = ADD32(ctx->r16, 0X3C);
    // 0x803B25FC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x803B2600: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803B2604: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x803B2608: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x803B260C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x803B2610: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x803B2614: jr          $ra
    // 0x803B2618: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x803B2618: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_803B261C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B261C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803B2620: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803B2624: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x803B2628: lui         $a3, 0x803E
    ctx->r7 = S32(0X803E << 16);
    // 0x803B262C: addiu       $a3, $a3, 0x7AF4
    ctx->r7 = ADD32(ctx->r7, 0X7AF4);
    // 0x803B2630: addiu       $a0, $a0, 0x6F38
    ctx->r4 = ADD32(ctx->r4, 0X6F38);
    // 0x803B2634: addiu       $a1, $zero, 0x509
    ctx->r5 = ADD32(0, 0X509);
    // 0x803B2638: jal         0x8004CD24
    // 0x803B263C: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    func_8004CD24(rdram, ctx);
        goto after_0;
    // 0x803B263C: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_0:
    // 0x803B2640: lui         $t6, 0x803B
    ctx->r14 = S32(0X803B << 16);
    // 0x803B2644: lbu         $t6, 0x6475($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X6475);
    // 0x803B2648: lui         $a2, 0x803B
    ctx->r6 = S32(0X803B << 16);
    // 0x803B264C: addu        $a2, $a2, $t6
    ctx->r6 = ADD32(ctx->r6, ctx->r14);
    // 0x803B2650: lbu         $a2, 0x4F7C($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X4F7C);
    // 0x803B2654: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x803B2658: addiu       $a0, $a0, 0x6F38
    ctx->r4 = ADD32(ctx->r4, 0X6F38);
    // 0x803B265C: jal         0x8002135C
    // 0x803B2660: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    func_8002135C(rdram, ctx);
        goto after_1;
    // 0x803B2660: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    after_1:
    // 0x803B2664: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x803B2668: jal         0x8004CDEC
    // 0x803B266C: addiu       $a0, $a0, 0x6F38
    ctx->r4 = ADD32(ctx->r4, 0X6F38);
    func_8004CDEC(rdram, ctx);
        goto after_2;
    // 0x803B266C: addiu       $a0, $a0, 0x6F38
    ctx->r4 = ADD32(ctx->r4, 0X6F38);
    after_2:
    // 0x803B2670: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803B2674: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803B2678: jr          $ra
    // 0x803B267C: nop

    return;
    // 0x803B267C: nop

;}
RECOMP_FUNC void func_803B2680(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B2680: lui         $a3, 0x803B
    ctx->r7 = S32(0X803B << 16);
    // 0x803B2684: lbu         $a3, 0x6475($a3)
    ctx->r7 = MEM_BU(ctx->r7, 0X6475);
    // 0x803B2688: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803B268C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803B2690: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x803B2694: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x803B2698: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x803B269C: addiu       $a0, $a0, -0x3868
    ctx->r4 = ADD32(ctx->r4, -0X3868);
    // 0x803B26A0: addiu       $a1, $zero, 0xC0
    ctx->r5 = ADD32(0, 0XC0);
    // 0x803B26A4: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    // 0x803B26A8: jal         0x8002FCE0
    // 0x803B26AC: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    func_8002FCE0(rdram, ctx);
        goto after_0;
    // 0x803B26AC: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    after_0:
    // 0x803B26B0: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x803B26B4: jal         0x8004CE28
    // 0x803B26B8: addiu       $a0, $a0, -0x3868
    ctx->r4 = ADD32(ctx->r4, -0X3868);
    func_8004CE28(rdram, ctx);
        goto after_1;
    // 0x803B26B8: addiu       $a0, $a0, -0x3868
    ctx->r4 = ADD32(ctx->r4, -0X3868);
    after_1:
    // 0x803B26BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803B26C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803B26C4: jr          $ra
    // 0x803B26C8: nop

    return;
    // 0x803B26C8: nop

;}
RECOMP_FUNC void func_803B26CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B26CC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x803B26D0: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x803B26D4: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x803B26D8: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x803B26DC: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x803B26E0: lui         $s0, 0x8011
    ctx->r16 = S32(0X8011 << 16);
    // 0x803B26E4: lui         $s2, 0x803B
    ctx->r18 = S32(0X803B << 16);
    // 0x803B26E8: lui         $s3, 0x803B
    ctx->r19 = S32(0X803B << 16);
    // 0x803B26EC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x803B26F0: addiu       $s0, $s0, -0x3748
    ctx->r16 = ADD32(ctx->r16, -0X3748);
    // 0x803B26F4: addiu       $s3, $s3, 0x6450
    ctx->r19 = ADD32(ctx->r19, 0X6450);
    // 0x803B26F8: addiu       $s2, $s2, 0x4F84
    ctx->r18 = ADD32(ctx->r18, 0X4F84);
    // 0x803B26FC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_803B2700:
    // 0x803B2700: sll         $t6, $s1, 2
    ctx->r14 = S32(ctx->r17 << 2);
    // 0x803B2704: addu        $v0, $s2, $t6
    ctx->r2 = ADD32(ctx->r18, ctx->r14);
    // 0x803B2708: sll         $t7, $s1, 1
    ctx->r15 = S32(ctx->r17 << 1);
    // 0x803B270C: addu        $t8, $s3, $t7
    ctx->r24 = ADD32(ctx->r19, ctx->r15);
    // 0x803B2710: lhu         $a3, 0x0($t8)
    ctx->r7 = MEM_HU(ctx->r24, 0X0);
    // 0x803B2714: lh          $a1, 0x0($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X0);
    // 0x803B2718: lh          $a2, 0x2($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X2);
    // 0x803B271C: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x803B2720: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x803B2724: jal         0x8002FCE0
    // 0x803B2728: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8002FCE0(rdram, ctx);
        goto after_0;
    // 0x803B2728: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x803B272C: jal         0x8004CE28
    // 0x803B2730: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8004CE28(rdram, ctx);
        goto after_1;
    // 0x803B2730: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x803B2734: jal         0x803B2770
    // 0x803B2738: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_803B2770(rdram, ctx);
        goto after_2;
    // 0x803B2738: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x803B273C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x803B2740: andi        $t0, $s1, 0xFF
    ctx->r8 = ctx->r17 & 0XFF;
    // 0x803B2744: slti        $at, $t0, 0x10
    ctx->r1 = SIGNED(ctx->r8) < 0X10 ? 1 : 0;
    // 0x803B2748: or          $s1, $t0, $zero
    ctx->r17 = ctx->r8 | 0;
    // 0x803B274C: bne         $at, $zero, L_803B2700
    if (ctx->r1 != 0) {
        // 0x803B2750: addiu       $s0, $s0, 0x20
        ctx->r16 = ADD32(ctx->r16, 0X20);
            goto L_803B2700;
    }
    // 0x803B2750: addiu       $s0, $s0, 0x20
    ctx->r16 = ADD32(ctx->r16, 0X20);
    // 0x803B2754: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x803B2758: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x803B275C: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x803B2760: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x803B2764: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x803B2768: jr          $ra
    // 0x803B276C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x803B276C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_803B2770(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B2770: lui         $v0, 0x803B
    ctx->r2 = S32(0X803B << 16);
    // 0x803B2774: lbu         $v0, 0x6475($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X6475);
    // 0x803B2778: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803B277C: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x803B2780: beq         $at, $zero, L_803B2798
    if (ctx->r1 == 0) {
        // 0x803B2784: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_803B2798;
    }
    // 0x803B2784: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803B2788: jal         0x80031B0C
    // 0x803B278C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80031B0C(rdram, ctx);
        goto after_0;
    // 0x803B278C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x803B2790: b           L_803B27C0
    // 0x803B2794: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803B27C0;
    // 0x803B2794: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803B2798:
    // 0x803B2798: slti        $at, $v0, 0x4
    ctx->r1 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x803B279C: beq         $at, $zero, L_803B27B4
    if (ctx->r1 == 0) {
        // 0x803B27A0: nop
    
            goto L_803B27B4;
    }
    // 0x803B27A0: nop

    // 0x803B27A4: jal         0x80031B0C
    // 0x803B27A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80031B0C(rdram, ctx);
        goto after_1;
    // 0x803B27A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x803B27AC: b           L_803B27C0
    // 0x803B27B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803B27C0;
    // 0x803B27B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803B27B4:
    // 0x803B27B4: jal         0x80031B0C
    // 0x803B27B8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80031B0C(rdram, ctx);
        goto after_2;
    // 0x803B27B8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x803B27BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803B27C0:
    // 0x803B27C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803B27C4: jr          $ra
    // 0x803B27C8: nop

    return;
    // 0x803B27C8: nop

;}
RECOMP_FUNC void func_803B27CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B27CC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x803B27D0: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x803B27D4: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x803B27D8: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x803B27DC: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x803B27E0: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x803B27E4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x803B27E8: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x803B27EC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x803B27F0: lui         $s2, 0x803B
    ctx->r18 = S32(0X803B << 16);
    // 0x803B27F4: lui         $s3, 0x800E
    ctx->r19 = S32(0X800E << 16);
    // 0x803B27F8: lui         $s5, 0x2
    ctx->r21 = S32(0X2 << 16);
    // 0x803B27FC: lui         $s6, 0x803B
    ctx->r22 = S32(0X803B << 16);
    // 0x803B2800: lui         $s7, 0x803B
    ctx->r23 = S32(0X803B << 16);
    // 0x803B2804: lui         $fp, 0x803B
    ctx->r30 = S32(0X803B << 16);
    // 0x803B2808: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x803B280C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803B2810: addiu       $fp, $fp, 0x6475
    ctx->r30 = ADD32(ctx->r30, 0X6475);
    // 0x803B2814: addiu       $s7, $s7, 0x4F3C
    ctx->r23 = ADD32(ctx->r23, 0X4F3C);
    // 0x803B2818: addiu       $s6, $s6, 0x4FC4
    ctx->r22 = ADD32(ctx->r22, 0X4FC4);
    // 0x803B281C: ori         $s5, $s5, 0xA6E4
    ctx->r21 = ctx->r21 | 0XA6E4;
    // 0x803B2820: addiu       $s3, $s3, -0x3770
    ctx->r19 = ADD32(ctx->r19, -0X3770);
    // 0x803B2824: addiu       $s2, $s2, 0x6450
    ctx->r18 = ADD32(ctx->r18, 0X6450);
    // 0x803B2828: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x803B282C: addiu       $s4, $zero, 0x3C
    ctx->r20 = ADD32(0, 0X3C);
    // 0x803B2830: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
L_803B2834:
    // 0x803B2834: sll         $t6, $s1, 1
    ctx->r14 = S32(ctx->r17 << 1);
    // 0x803B2838: addu        $t7, $s2, $t6
    ctx->r15 = ADD32(ctx->r18, ctx->r14);
    // 0x803B283C: lhu         $v0, 0x0($t7)
    ctx->r2 = MEM_HU(ctx->r15, 0X0);
    // 0x803B2840: nop

    // 0x803B2844: slti        $at, $v0, 0x4
    ctx->r1 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x803B2848: beq         $at, $zero, L_803B2858
    if (ctx->r1 == 0) {
        // 0x803B284C: nop
    
            goto L_803B2858;
    }
    // 0x803B284C: nop

    // 0x803B2850: bgtz        $v0, L_803B2860
    if (SIGNED(ctx->r2) > 0) {
        // 0x803B2854: addiu       $v1, $v0, -0x1
        ctx->r3 = ADD32(ctx->r2, -0X1);
            goto L_803B2860;
    }
    // 0x803B2854: addiu       $v1, $v0, -0x1
    ctx->r3 = ADD32(ctx->r2, -0X1);
L_803B2858:
    // 0x803B2858: b           L_803B2868
    // 0x803B285C: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
        goto L_803B2868;
    // 0x803B285C: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
L_803B2860:
    // 0x803B2860: andi        $t8, $v1, 0xFF
    ctx->r24 = ctx->r3 & 0XFF;
    // 0x803B2864: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
L_803B2868:
    // 0x803B2868: multu       $t0, $s4
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x803B286C: sll         $t2, $v1, 2
    ctx->r10 = S32(ctx->r3 << 2);
    // 0x803B2870: addu        $t3, $s6, $t2
    ctx->r11 = ADD32(ctx->r22, ctx->r10);
    // 0x803B2874: lw          $a3, 0x0($t3)
    ctx->r7 = MEM_W(ctx->r11, 0X0);
    // 0x803B2878: addiu       $a1, $zero, 0x4F7
    ctx->r5 = ADD32(0, 0X4F7);
    // 0x803B287C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x803B2880: mflo        $t9
    ctx->r25 = lo;
    // 0x803B2884: addu        $t1, $s3, $t9
    ctx->r9 = ADD32(ctx->r19, ctx->r25);
    // 0x803B2888: addu        $s0, $t1, $s5
    ctx->r16 = ADD32(ctx->r9, ctx->r21);
    // 0x803B288C: jal         0x8004CD24
    // 0x803B2890: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8004CD24(rdram, ctx);
        goto after_0;
    // 0x803B2890: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x803B2894: lbu         $t4, 0x0($fp)
    ctx->r12 = MEM_BU(ctx->r30, 0X0);
    // 0x803B2898: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803B289C: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x803B28A0: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x803B28A4: addu        $t6, $s7, $t5
    ctx->r14 = ADD32(ctx->r23, ctx->r13);
    // 0x803B28A8: lbu         $a2, 0x2($t6)
    ctx->r6 = MEM_BU(ctx->r14, 0X2);
    // 0x803B28AC: jal         0x8002135C
    // 0x803B28B0: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    func_8002135C(rdram, ctx);
        goto after_1;
    // 0x803B28B0: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    after_1:
    // 0x803B28B4: lui         $t8, 0x803B
    ctx->r24 = S32(0X803B << 16);
    // 0x803B28B8: addiu       $t8, $t8, 0x4FD4
    ctx->r24 = ADD32(ctx->r24, 0X4FD4);
    // 0x803B28BC: sll         $t7, $s1, 2
    ctx->r15 = S32(ctx->r17 << 2);
    // 0x803B28C0: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x803B28C4: lh          $a1, 0x0($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X0);
    // 0x803B28C8: lh          $a2, 0x2($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X2);
    // 0x803B28CC: jal         0x8004CD44
    // 0x803B28D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8004CD44(rdram, ctx);
        goto after_2;
    // 0x803B28D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x803B28D4: jal         0x8004CDEC
    // 0x803B28D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8004CDEC(rdram, ctx);
        goto after_3;
    // 0x803B28D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x803B28DC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x803B28E0: andi        $t0, $s1, 0xFF
    ctx->r8 = ctx->r17 & 0XFF;
    // 0x803B28E4: slti        $at, $t0, 0x10
    ctx->r1 = SIGNED(ctx->r8) < 0X10 ? 1 : 0;
    // 0x803B28E8: bne         $at, $zero, L_803B2834
    if (ctx->r1 != 0) {
        // 0x803B28EC: or          $s1, $t0, $zero
        ctx->r17 = ctx->r8 | 0;
            goto L_803B2834;
    }
    // 0x803B28EC: or          $s1, $t0, $zero
    ctx->r17 = ctx->r8 | 0;
    // 0x803B28F0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x803B28F4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803B28F8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x803B28FC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x803B2900: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x803B2904: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x803B2908: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x803B290C: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x803B2910: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x803B2914: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x803B2918: jr          $ra
    // 0x803B291C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x803B291C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_803B2920(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B2920: lui         $a1, 0x2
    ctx->r5 = S32(0X2 << 16);
    // 0x803B2924: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x803B2928: addiu       $v1, $v1, -0x3770
    ctx->r3 = ADD32(ctx->r3, -0X3770);
    // 0x803B292C: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x803B2930: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x803B2934: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
L_803B2938:
    // 0x803B2938: multu       $v0, $a0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x803B293C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x803B2940: andi        $t9, $v0, 0xFF
    ctx->r25 = ctx->r2 & 0XFF;
    // 0x803B2944: slti        $at, $t9, 0x29
    ctx->r1 = SIGNED(ctx->r25) < 0X29 ? 1 : 0;
    // 0x803B2948: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    // 0x803B294C: mflo        $t6
    ctx->r14 = lo;
    // 0x803B2950: addu        $t7, $v1, $t6
    ctx->r15 = ADD32(ctx->r3, ctx->r14);
    // 0x803B2954: addu        $t8, $t7, $a1
    ctx->r24 = ADD32(ctx->r15, ctx->r5);
    // 0x803B2958: bne         $at, $zero, L_803B2938
    if (ctx->r1 != 0) {
        // 0x803B295C: sb          $zero, 0x2148($t8)
        MEM_B(0X2148, ctx->r24) = 0;
            goto L_803B2938;
    }
    // 0x803B295C: sb          $zero, 0x2148($t8)
    MEM_B(0X2148, ctx->r24) = 0;
    // 0x803B2960: jr          $ra
    // 0x803B2964: nop

    return;
    // 0x803B2964: nop

;}
RECOMP_FUNC void func_803B2968(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B2968: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803B296C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803B2970: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x803B2974: lui         $a3, 0x803F
    ctx->r7 = S32(0X803F << 16);
    // 0x803B2978: addiu       $a3, $a3, -0x7768
    ctx->r7 = ADD32(ctx->r7, -0X7768);
    // 0x803B297C: addiu       $a0, $a0, 0x7370
    ctx->r4 = ADD32(ctx->r4, 0X7370);
    // 0x803B2980: addiu       $a1, $zero, 0x4F8
    ctx->r5 = ADD32(0, 0X4F8);
    // 0x803B2984: jal         0x8004CD24
    // 0x803B2988: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_8004CD24(rdram, ctx);
        goto after_0;
    // 0x803B2988: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x803B298C: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x803B2990: addiu       $a0, $a0, 0x7370
    ctx->r4 = ADD32(ctx->r4, 0X7370);
    // 0x803B2994: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x803B2998: jal         0x8002135C
    // 0x803B299C: addiu       $a2, $zero, 0xD2
    ctx->r6 = ADD32(0, 0XD2);
    func_8002135C(rdram, ctx);
        goto after_1;
    // 0x803B299C: addiu       $a2, $zero, 0xD2
    ctx->r6 = ADD32(0, 0XD2);
    after_1:
    // 0x803B29A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803B29A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803B29A8: jr          $ra
    // 0x803B29AC: nop

    return;
    // 0x803B29AC: nop

;}
RECOMP_FUNC void func_803B29B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B29B0: lui         $t6, 0x803B
    ctx->r14 = S32(0X803B << 16);
    // 0x803B29B4: lbu         $t6, 0x6475($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X6475);
    // 0x803B29B8: lui         $t8, 0x803B
    ctx->r24 = S32(0X803B << 16);
    // 0x803B29BC: addiu       $t8, $t8, 0x4F4C
    ctx->r24 = ADD32(ctx->r24, 0X4F4C);
    // 0x803B29C0: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x803B29C4: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x803B29C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803B29CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803B29D0: lhu         $a1, 0x4($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X4);
    // 0x803B29D4: lw          $a3, 0x0($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X0);
    // 0x803B29D8: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x803B29DC: addiu       $a0, $a0, 0x73AC
    ctx->r4 = ADD32(ctx->r4, 0X73AC);
    // 0x803B29E0: jal         0x8004CD24
    // 0x803B29E4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_8004CD24(rdram, ctx);
        goto after_0;
    // 0x803B29E4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x803B29E8: lui         $t9, 0x803B
    ctx->r25 = S32(0X803B << 16);
    // 0x803B29EC: lbu         $t9, 0x6475($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X6475);
    // 0x803B29F0: lui         $a2, 0x803B
    ctx->r6 = S32(0X803B << 16);
    // 0x803B29F4: addu        $a2, $a2, $t9
    ctx->r6 = ADD32(ctx->r6, ctx->r25);
    // 0x803B29F8: lbu         $a2, 0x4F74($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X4F74);
    // 0x803B29FC: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x803B2A00: addiu       $a0, $a0, 0x73AC
    ctx->r4 = ADD32(ctx->r4, 0X73AC);
    // 0x803B2A04: jal         0x8002135C
    // 0x803B2A08: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    func_8002135C(rdram, ctx);
        goto after_1;
    // 0x803B2A08: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    after_1:
    // 0x803B2A0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803B2A10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803B2A14: jr          $ra
    // 0x803B2A18: nop

    return;
    // 0x803B2A18: nop

;}
RECOMP_FUNC void func_803B2A1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B2A1C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803B2A20: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803B2A24: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x803B2A28: lui         $a3, 0x8029
    ctx->r7 = S32(0X8029 << 16);
    // 0x803B2A2C: addiu       $t6, $zero, 0x15
    ctx->r14 = ADD32(0, 0X15);
    // 0x803B2A30: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x803B2A34: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x803B2A38: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x803B2A3C: addiu       $a3, $a3, -0x7ACC
    ctx->r7 = ADD32(ctx->r7, -0X7ACC);
    // 0x803B2A40: addiu       $a0, $a0, -0x3888
    ctx->r4 = ADD32(ctx->r4, -0X3888);
    // 0x803B2A44: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x803B2A48: jal         0x8002F3D4
    // 0x803B2A4C: addiu       $a2, $zero, 0x62
    ctx->r6 = ADD32(0, 0X62);
    func_8002F3D4(rdram, ctx);
        goto after_0;
    // 0x803B2A4C: addiu       $a2, $zero, 0x62
    ctx->r6 = ADD32(0, 0X62);
    after_0:
    // 0x803B2A50: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803B2A54: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803B2A58: jr          $ra
    // 0x803B2A5C: nop

    return;
    // 0x803B2A5C: nop

;}
RECOMP_FUNC void func_803B2A60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B2A60: lui         $a3, 0x803B
    ctx->r7 = S32(0X803B << 16);
    // 0x803B2A64: lbu         $a3, 0x6475($a3)
    ctx->r7 = MEM_BU(ctx->r7, 0X6475);
    // 0x803B2A68: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803B2A6C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803B2A70: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x803B2A74: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x803B2A78: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x803B2A7C: addiu       $a0, $a0, -0x34A8
    ctx->r4 = ADD32(ctx->r4, -0X34A8);
    // 0x803B2A80: addiu       $a1, $zero, 0xB8
    ctx->r5 = ADD32(0, 0XB8);
    // 0x803B2A84: addiu       $a2, $zero, 0x42
    ctx->r6 = ADD32(0, 0X42);
    // 0x803B2A88: jal         0x8002FCE0
    // 0x803B2A8C: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    func_8002FCE0(rdram, ctx);
        goto after_0;
    // 0x803B2A8C: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    after_0:
    // 0x803B2A90: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x803B2A94: jal         0x803B2770
    // 0x803B2A98: addiu       $a0, $a0, -0x34A8
    ctx->r4 = ADD32(ctx->r4, -0X34A8);
    func_803B2770(rdram, ctx);
        goto after_1;
    // 0x803B2A98: addiu       $a0, $a0, -0x34A8
    ctx->r4 = ADD32(ctx->r4, -0X34A8);
    after_1:
    // 0x803B2A9C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803B2AA0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803B2AA4: jr          $ra
    // 0x803B2AA8: nop

    return;
    // 0x803B2AA8: nop

;}
RECOMP_FUNC void func_803B2AAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B2AAC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803B2AB0: lui         $a3, 0x803B
    ctx->r7 = S32(0X803B << 16);
    // 0x803B2AB4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803B2AB8: lhu         $a3, 0x6470($a3)
    ctx->r7 = MEM_HU(ctx->r7, 0X6470);
    // 0x803B2ABC: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x803B2AC0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x803B2AC4: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x803B2AC8: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x803B2ACC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x803B2AD0: addiu       $a0, $a0, -0x34C8
    ctx->r4 = ADD32(ctx->r4, -0X34C8);
    // 0x803B2AD4: addiu       $a1, $zero, 0x78
    ctx->r5 = ADD32(0, 0X78);
    // 0x803B2AD8: jal         0x8002F6EC
    // 0x803B2ADC: addiu       $a2, $zero, 0x62
    ctx->r6 = ADD32(0, 0X62);
    func_8002F6EC(rdram, ctx);
        goto after_0;
    // 0x803B2ADC: addiu       $a2, $zero, 0x62
    ctx->r6 = ADD32(0, 0X62);
    after_0:
    // 0x803B2AE0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803B2AE4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803B2AE8: jr          $ra
    // 0x803B2AEC: nop

    return;
    // 0x803B2AEC: nop

;}
RECOMP_FUNC void func_803B2AF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B2AF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803B2AF4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803B2AF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803B2AFC: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803B2B00: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803B2B04: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803B2B08: sb          $zero, 0x6480($at)
    MEM_B(0X6480, ctx->r1) = 0;
    // 0x803B2B0C: jal         0x800296E0
    // 0x803B2B10: addiu       $a0, $a0, 0x2B70
    ctx->r4 = ADD32(ctx->r4, 0X2B70);
    func_800296E0(rdram, ctx);
        goto after_0;
    // 0x803B2B10: addiu       $a0, $a0, 0x2B70
    ctx->r4 = ADD32(ctx->r4, 0X2B70);
    after_0:
    // 0x803B2B14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803B2B18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803B2B1C: jr          $ra
    // 0x803B2B20: nop

    return;
    // 0x803B2B20: nop

;}
RECOMP_FUNC void func_803B2B24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B2B24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803B2B28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803B2B2C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803B2B30: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803B2B34: jal         0x80015BC0
    // 0x803B2B38: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    func_80015BC0(rdram, ctx);
        goto after_0;
    // 0x803B2B38: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_0:
    // 0x803B2B3C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x803B2B40: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x803B2B44: sb          $v0, -0x3271($at)
    MEM_B(-0X3271, ctx->r1) = ctx->r2;
    // 0x803B2B48: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803B2B4C: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803B2B50: sb          $v0, 0x6480($at)
    MEM_B(0X6480, ctx->r1) = ctx->r2;
    // 0x803B2B54: addiu       $a0, $a0, 0x2B70
    ctx->r4 = ADD32(ctx->r4, 0X2B70);
    // 0x803B2B58: jal         0x8002989C
    // 0x803B2B5C: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    func_8002989C(rdram, ctx);
        goto after_1;
    // 0x803B2B5C: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_1:
    // 0x803B2B60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803B2B64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803B2B68: jr          $ra
    // 0x803B2B6C: nop

    return;
    // 0x803B2B6C: nop

;}
RECOMP_FUNC void func_803B2B70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B2B70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803B2B74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803B2B78: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803B2B7C: jal         0x80036B68
    // 0x803B2B80: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80036B68(rdram, ctx);
        goto after_0;
    // 0x803B2B80: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x803B2B84: jal         0x80036234
    // 0x803B2B88: nop

    func_80036234(rdram, ctx);
        goto after_1;
    // 0x803B2B88: nop

    after_1:
    // 0x803B2B8C: lui         $a0, 0x803D
    ctx->r4 = S32(0X803D << 16);
    // 0x803B2B90: jal         0x80035FF0
    // 0x803B2B94: addiu       $a0, $a0, 0x20E4
    ctx->r4 = ADD32(ctx->r4, 0X20E4);
    func_80035FF0(rdram, ctx);
        goto after_2;
    // 0x803B2B94: addiu       $a0, $a0, 0x20E4
    ctx->r4 = ADD32(ctx->r4, 0X20E4);
    after_2:
    // 0x803B2B98: addiu       $a0, $zero, 0xF00
    ctx->r4 = ADD32(0, 0XF00);
    // 0x803B2B9C: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x803B2BA0: jal         0x80049E40
    // 0x803B2BA4: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_80049E40(rdram, ctx);
        goto after_3;
    // 0x803B2BA4: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_3:
    // 0x803B2BA8: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x803B2BAC: jal         0x80039D98
    // 0x803B2BB0: sb          $zero, 0x39($t6)
    MEM_B(0X39, ctx->r14) = 0;
    func_80039D98(rdram, ctx);
        goto after_4;
    // 0x803B2BB0: sb          $zero, 0x39($t6)
    MEM_B(0X39, ctx->r14) = 0;
    after_4:
    // 0x803B2BB4: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803B2BB8: jal         0x8002AAC0
    // 0x803B2BBC: addiu       $a0, $a0, 0x5118
    ctx->r4 = ADD32(ctx->r4, 0X5118);
    func_8002AAC0(rdram, ctx);
        goto after_5;
    // 0x803B2BBC: addiu       $a0, $a0, 0x5118
    ctx->r4 = ADD32(ctx->r4, 0X5118);
    after_5:
    // 0x803B2BC0: jal         0x8006FB58
    // 0x803B2BC4: nop

    func_8006FB58(rdram, ctx);
        goto after_6;
    // 0x803B2BC4: nop

    after_6:
    // 0x803B2BC8: jal         0x803B2DAC
    // 0x803B2BCC: nop

    func_803B2DAC(rdram, ctx);
        goto after_7;
    // 0x803B2BCC: nop

    after_7:
    // 0x803B2BD0: jal         0x803B2D80
    // 0x803B2BD4: nop

    func_803B2D80(rdram, ctx);
        goto after_8;
    // 0x803B2BD4: nop

    after_8:
    // 0x803B2BD8: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803B2BDC: addiu       $a0, $a0, 0x2BF8
    ctx->r4 = ADD32(ctx->r4, 0X2BF8);
    // 0x803B2BE0: jal         0x8004A9B4
    // 0x803B2BE4: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_8004A9B4(rdram, ctx);
        goto after_9;
    // 0x803B2BE4: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_9:
    // 0x803B2BE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803B2BEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803B2BF0: jr          $ra
    // 0x803B2BF4: nop

    return;
    // 0x803B2BF4: nop

;}
RECOMP_FUNC void func_803B2BF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B2BF8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803B2BFC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803B2C00: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x803B2C04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803B2C08: lhu         $a0, -0x3078($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X3078);
    // 0x803B2C0C: jal         0x80035BB8
    // 0x803B2C10: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80035BB8(rdram, ctx);
        goto after_0;
    // 0x803B2C10: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x803B2C14: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x803B2C18: lui         $t9, 0x803B
    ctx->r25 = S32(0X803B << 16);
    // 0x803B2C1C: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x803B2C20: lw          $t9, 0x5144($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X5144);
    // 0x803B2C24: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803B2C28: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x803B2C2C: jalr        $t9
    // 0x803B2C30: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x803B2C30: nop

    after_1:
    // 0x803B2C34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803B2C38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803B2C3C: jr          $ra
    // 0x803B2C40: nop

    return;
    // 0x803B2C40: nop

;}
RECOMP_FUNC void func_803B2C44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B2C44: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803B2C48: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803B2C4C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803B2C50: jal         0x80035770
    // 0x803B2C54: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80035770(rdram, ctx);
        goto after_0;
    // 0x803B2C54: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x803B2C58: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803B2C5C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x803B2C60: lb          $v0, 0x38($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X38);
    // 0x803B2C64: lui         $t6, 0x803B
    ctx->r14 = S32(0X803B << 16);
    // 0x803B2C68: beq         $v0, $zero, L_803B2C90
    if (ctx->r2 == 0) {
        // 0x803B2C6C: sb          $v1, 0x39($a0)
        MEM_B(0X39, ctx->r4) = ctx->r3;
            goto L_803B2C90;
    }
    // 0x803B2C6C: sb          $v1, 0x39($a0)
    MEM_B(0X39, ctx->r4) = ctx->r3;
    // 0x803B2C70: beq         $v0, $v1, L_803B2CC0
    if (ctx->r2 == ctx->r3) {
        // 0x803B2C74: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_803B2CC0;
    }
    // 0x803B2C74: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803B2C78: beq         $v0, $at, L_803B2CC0
    if (ctx->r2 == ctx->r1) {
        // 0x803B2C7C: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_803B2CC0;
    }
    // 0x803B2C7C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x803B2C80: beq         $v0, $at, L_803B2CC0
    if (ctx->r2 == ctx->r1) {
        // 0x803B2C84: nop
    
            goto L_803B2CC0;
    }
    // 0x803B2C84: nop

    // 0x803B2C88: b           L_803B2CCC
    // 0x803B2C8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803B2CCC;
    // 0x803B2C8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803B2C90:
    // 0x803B2C90: lbu         $t6, 0x6480($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X6480);
    // 0x803B2C94: nop

    // 0x803B2C98: bne         $v1, $t6, L_803B2CB0
    if (ctx->r3 != ctx->r14) {
        // 0x803B2C9C: nop
    
            goto L_803B2CB0;
    }
    // 0x803B2C9C: nop

    // 0x803B2CA0: jal         0x803AF628
    // 0x803B2CA4: nop

    LOOKUP_FUNC(0x803AF628)(rdram, ctx);
        goto after_1;
    // 0x803B2CA4: nop

    after_1:
    // 0x803B2CA8: b           L_803B2CCC
    // 0x803B2CAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803B2CCC;
    // 0x803B2CAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803B2CB0:
    // 0x803B2CB0: jal         0x803AF5A4
    // 0x803B2CB4: nop

    LOOKUP_FUNC(0x803AF5A4)(rdram, ctx);
        goto after_2;
    // 0x803B2CB4: nop

    after_2:
    // 0x803B2CB8: b           L_803B2CCC
    // 0x803B2CBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803B2CCC;
    // 0x803B2CBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803B2CC0:
    // 0x803B2CC0: jal         0x803B2EC4
    // 0x803B2CC4: nop

    func_803B2EC4(rdram, ctx);
        goto after_3;
    // 0x803B2CC4: nop

    after_3:
    // 0x803B2CC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803B2CCC:
    // 0x803B2CCC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803B2CD0: jr          $ra
    // 0x803B2CD4: nop

    return;
    // 0x803B2CD4: nop

;}
RECOMP_FUNC void func_803B2CD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B2CD8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x803B2CDC: jr          $ra
    // 0x803B2CE0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x803B2CE0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_803B2CE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B2CE4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803B2CE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803B2CEC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803B2CF0: jal         0x80035734
    // 0x803B2CF4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80035734(rdram, ctx);
        goto after_0;
    // 0x803B2CF4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x803B2CF8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803B2CFC: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x803B2D00: lb          $v0, 0x38($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X38);
    // 0x803B2D04: nop

    // 0x803B2D08: bne         $v0, $zero, L_803B2D18
    if (ctx->r2 != 0) {
        // 0x803B2D0C: addiu       $t7, $v0, -0x1
        ctx->r15 = ADD32(ctx->r2, -0X1);
            goto L_803B2D18;
    }
    // 0x803B2D0C: addiu       $t7, $v0, -0x1
    ctx->r15 = ADD32(ctx->r2, -0X1);
    // 0x803B2D10: b           L_803B2D1C
    // 0x803B2D14: sb          $t6, 0x38($a0)
    MEM_B(0X38, ctx->r4) = ctx->r14;
        goto L_803B2D1C;
    // 0x803B2D14: sb          $t6, 0x38($a0)
    MEM_B(0X38, ctx->r4) = ctx->r14;
L_803B2D18:
    // 0x803B2D18: sb          $t7, 0x38($a0)
    MEM_B(0X38, ctx->r4) = ctx->r15;
L_803B2D1C:
    // 0x803B2D1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803B2D20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803B2D24: jr          $ra
    // 0x803B2D28: nop

    return;
    // 0x803B2D28: nop

;}
RECOMP_FUNC void func_803B2D2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B2D2C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803B2D30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803B2D34: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803B2D38: jal         0x80035734
    // 0x803B2D3C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80035734(rdram, ctx);
        goto after_0;
    // 0x803B2D3C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x803B2D40: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803B2D44: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x803B2D48: lb          $v0, 0x38($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X38);
    // 0x803B2D4C: nop

    // 0x803B2D50: bne         $v0, $at, L_803B2D60
    if (ctx->r2 != ctx->r1) {
        // 0x803B2D54: addiu       $t6, $v0, 0x1
        ctx->r14 = ADD32(ctx->r2, 0X1);
            goto L_803B2D60;
    }
    // 0x803B2D54: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x803B2D58: b           L_803B2D64
    // 0x803B2D5C: sb          $zero, 0x38($a0)
    MEM_B(0X38, ctx->r4) = 0;
        goto L_803B2D64;
    // 0x803B2D5C: sb          $zero, 0x38($a0)
    MEM_B(0X38, ctx->r4) = 0;
L_803B2D60:
    // 0x803B2D60: sb          $t6, 0x38($a0)
    MEM_B(0X38, ctx->r4) = ctx->r14;
L_803B2D64:
    // 0x803B2D64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803B2D68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803B2D6C: jr          $ra
    // 0x803B2D70: nop

    return;
    // 0x803B2D70: nop

;}
RECOMP_FUNC void func_803B2D74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B2D74: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x803B2D78: jr          $ra
    // 0x803B2D7C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x803B2D7C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_803B2D80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B2D80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803B2D84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803B2D88: lui         $a1, 0x803B
    ctx->r5 = S32(0X803B << 16);
    // 0x803B2D8C: addiu       $a1, $a1, 0x5070
    ctx->r5 = ADD32(ctx->r5, 0X5070);
    // 0x803B2D90: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x803B2D94: jal         0x8002F444
    // 0x803B2D98: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    func_8002F444(rdram, ctx);
        goto after_0;
    // 0x803B2D98: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_0:
    // 0x803B2D9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803B2DA0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803B2DA4: jr          $ra
    // 0x803B2DA8: nop

    return;
    // 0x803B2DA8: nop

;}
RECOMP_FUNC void func_803B2DAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B2DAC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803B2DB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803B2DB4: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x803B2DB8: addiu       $a0, $a0, -0x1E98
    ctx->r4 = ADD32(ctx->r4, -0X1E98);
    // 0x803B2DBC: jal         0x800293DC
    // 0x803B2DC0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_800293DC(rdram, ctx);
        goto after_0;
    // 0x803B2DC0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x803B2DC4: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x803B2DC8: lui         $a1, 0x803B
    ctx->r5 = S32(0X803B << 16);
    // 0x803B2DCC: addiu       $a1, $a1, 0x50C0
    ctx->r5 = ADD32(ctx->r5, 0X50C0);
    // 0x803B2DD0: jal         0x8004A298
    // 0x803B2DD4: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    func_8004A298(rdram, ctx);
        goto after_1;
    // 0x803B2DD4: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_1:
    // 0x803B2DD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803B2DDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803B2DE0: jr          $ra
    // 0x803B2DE4: nop

    return;
    // 0x803B2DE4: nop

;}
RECOMP_FUNC void func_803B2DE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B2DE8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803B2DEC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803B2DF0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x803B2DF4: lbu         $t0, 0x71($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X71);
    // 0x803B2DF8: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x803B2DFC: lui         $t8, 0x803B
    ctx->r24 = S32(0X803B << 16);
    // 0x803B2E00: addiu       $t8, $t8, 0x50F4
    ctx->r24 = ADD32(ctx->r24, 0X50F4);
    // 0x803B2E04: sll         $t7, $t0, 2
    ctx->r15 = S32(ctx->r8 << 2);
    // 0x803B2E08: lw          $v1, 0x8($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X8);
    // 0x803B2E0C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x803B2E10: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x803B2E14: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x803B2E18: lh          $a1, 0x0($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X0);
    // 0x803B2E1C: lh          $a2, 0x2($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X2);
    // 0x803B2E20: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    // 0x803B2E24: sb          $t0, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r8;
    // 0x803B2E28: jal         0x8004CD44
    // 0x803B2E2C: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_8004CD44(rdram, ctx);
        goto after_0;
    // 0x803B2E2C: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_0:
    // 0x803B2E30: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x803B2E34: lbu         $t0, 0x1F($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X1F);
    // 0x803B2E38: lb          $t9, 0x38($v1)
    ctx->r25 = MEM_B(ctx->r3, 0X38);
    // 0x803B2E3C: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x803B2E40: bne         $t0, $t9, L_803B2E78
    if (ctx->r8 != ctx->r25) {
        // 0x803B2E44: addiu       $t3, $zero, 0xA
        ctx->r11 = ADD32(0, 0XA);
            goto L_803B2E78;
    }
    // 0x803B2E44: addiu       $t3, $zero, 0xA
    ctx->r11 = ADD32(0, 0XA);
    // 0x803B2E48: lb          $t1, 0x39($v1)
    ctx->r9 = MEM_B(ctx->r3, 0X39);
    // 0x803B2E4C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803B2E50: bne         $t1, $at, L_803B2E64
    if (ctx->r9 != ctx->r1) {
        // 0x803B2E54: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_803B2E64;
    }
    // 0x803B2E54: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x803B2E58: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803B2E5C: b           L_803B2E80
    // 0x803B2E60: sh          $t2, 0x3A($a3)
    MEM_H(0X3A, ctx->r7) = ctx->r10;
        goto L_803B2E80;
    // 0x803B2E60: sh          $t2, 0x3A($a3)
    MEM_H(0X3A, ctx->r7) = ctx->r10;
L_803B2E64:
    // 0x803B2E64: jal         0x8006F678
    // 0x803B2E68: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    func_8006F678(rdram, ctx);
        goto after_1;
    // 0x803B2E68: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    after_1:
    // 0x803B2E6C: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x803B2E70: b           L_803B2E84
    // 0x803B2E74: lhu         $t4, 0x3A($a3)
    ctx->r12 = MEM_HU(ctx->r7, 0X3A);
        goto L_803B2E84;
    // 0x803B2E74: lhu         $t4, 0x3A($a3)
    ctx->r12 = MEM_HU(ctx->r7, 0X3A);
L_803B2E78:
    // 0x803B2E78: sh          $t3, 0x38($a3)
    MEM_H(0X38, ctx->r7) = ctx->r11;
    // 0x803B2E7C: sh          $zero, 0x3A($a3)
    MEM_H(0X3A, ctx->r7) = 0;
L_803B2E80:
    // 0x803B2E80: lhu         $t4, 0x3A($a3)
    ctx->r12 = MEM_HU(ctx->r7, 0X3A);
L_803B2E84:
    // 0x803B2E84: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803B2E88: bne         $t4, $at, L_803B2EA8
    if (ctx->r12 != ctx->r1) {
        // 0x803B2E8C: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_803B2EA8;
    }
    // 0x803B2E8C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x803B2E90: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x803B2E94: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x803B2E98: jal         0x8002135C
    // 0x803B2E9C: addiu       $a2, $zero, 0xE1
    ctx->r6 = ADD32(0, 0XE1);
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x803B2E9C: addiu       $a2, $zero, 0xE1
    ctx->r6 = ADD32(0, 0XE1);
    after_2:
    // 0x803B2EA0: b           L_803B2EB8
    // 0x803B2EA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803B2EB8;
    // 0x803B2EA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803B2EA8:
    // 0x803B2EA8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x803B2EAC: jal         0x8002135C
    // 0x803B2EB0: addiu       $a2, $zero, 0xE0
    ctx->r6 = ADD32(0, 0XE0);
    func_8002135C(rdram, ctx);
        goto after_3;
    // 0x803B2EB0: addiu       $a2, $zero, 0xE0
    ctx->r6 = ADD32(0, 0XE0);
    after_3:
    // 0x803B2EB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803B2EB8:
    // 0x803B2EB8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803B2EBC: jr          $ra
    // 0x803B2EC0: nop

    return;
    // 0x803B2EC0: nop

;}
RECOMP_FUNC void func_803B2EC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B2EC4: lui         $t6, 0x803B
    ctx->r14 = S32(0X803B << 16);
    // 0x803B2EC8: lbu         $t6, 0x6480($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X6480);
    // 0x803B2ECC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803B2ED0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803B2ED4: bne         $t6, $at, L_803B2EFC
    if (ctx->r14 != ctx->r1) {
        // 0x803B2ED8: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_803B2EFC;
    }
    // 0x803B2ED8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803B2EDC: jal         0x80035A3C
    // 0x803B2EE0: nop

    func_80035A3C(rdram, ctx);
        goto after_0;
    // 0x803B2EE0: nop

    after_0:
    // 0x803B2EE4: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803B2EE8: addiu       $a0, $a0, 0x2F1C
    ctx->r4 = ADD32(ctx->r4, 0X2F1C);
    // 0x803B2EEC: jal         0x8002989C
    // 0x803B2EF0: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    func_8002989C(rdram, ctx);
        goto after_1;
    // 0x803B2EF0: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_1:
    // 0x803B2EF4: b           L_803B2F10
    // 0x803B2EF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803B2F10;
    // 0x803B2EF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803B2EFC:
    // 0x803B2EFC: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803B2F00: addiu       $a0, $a0, 0x2F1C
    ctx->r4 = ADD32(ctx->r4, 0X2F1C);
    // 0x803B2F04: jal         0x8002989C
    // 0x803B2F08: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8002989C(rdram, ctx);
        goto after_2;
    // 0x803B2F08: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x803B2F0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803B2F10:
    // 0x803B2F10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803B2F14: jr          $ra
    // 0x803B2F18: nop

    return;
    // 0x803B2F18: nop

;}
RECOMP_FUNC void func_803B2F1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B2F1C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803B2F20: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803B2F24: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803B2F28: lb          $v0, 0x38($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X38);
    // 0x803B2F2C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803B2F30: bne         $v0, $at, L_803B2F54
    if (ctx->r2 != ctx->r1) {
        // 0x803B2F34: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_803B2F54;
    }
    // 0x803B2F34: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803B2F38: jal         0x80036C20
    // 0x803B2F3C: nop

    func_80036C20(rdram, ctx);
        goto after_0;
    // 0x803B2F3C: nop

    after_0:
    // 0x803B2F40: jal         0x80037908
    // 0x803B2F44: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80037908(rdram, ctx);
        goto after_1;
    // 0x803B2F44: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x803B2F48: b           L_803B2F8C
    // 0x803B2F4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803B2F8C;
    // 0x803B2F4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803B2F50: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
L_803B2F54:
    // 0x803B2F54: bne         $v0, $at, L_803B2F78
    if (ctx->r2 != ctx->r1) {
        // 0x803B2F58: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_803B2F78;
    }
    // 0x803B2F58: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x803B2F5C: jal         0x80036C28
    // 0x803B2F60: nop

    func_80036C28(rdram, ctx);
        goto after_2;
    // 0x803B2F60: nop

    after_2:
    // 0x803B2F64: jal         0x80037908
    // 0x803B2F68: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_80037908(rdram, ctx);
        goto after_3;
    // 0x803B2F68: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_3:
    // 0x803B2F6C: b           L_803B2F8C
    // 0x803B2F70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803B2F8C;
    // 0x803B2F70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803B2F74: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
L_803B2F78:
    // 0x803B2F78: bne         $v0, $at, L_803B2F8C
    if (ctx->r2 != ctx->r1) {
        // 0x803B2F7C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_803B2F8C;
    }
    // 0x803B2F7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803B2F80: jal         0x80037908
    // 0x803B2F84: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_80037908(rdram, ctx);
        goto after_4;
    // 0x803B2F84: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_4:
    // 0x803B2F88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803B2F8C:
    // 0x803B2F8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803B2F90: jr          $ra
    // 0x803B2F94: nop

    return;
    // 0x803B2F94: nop

    // 0x803B2F98: nop

    // 0x803B2F9C: nop

;}
RECOMP_FUNC void func_803B2FA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B2FA0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x803B2FA4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x803B2FA8: jr          $ra
    // 0x803B2FAC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x803B2FAC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_803B2FB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B2FB0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x803B2FB4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x803B2FB8: jr          $ra
    // 0x803B2FBC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x803B2FBC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_803B2FC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B2FC0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x803B2FC4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x803B2FC8: jr          $ra
    // 0x803B2FCC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x803B2FCC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_803B2FD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B2FD0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x803B2FD4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x803B2FD8: jr          $ra
    // 0x803B2FDC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x803B2FDC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_803B2FE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B2FE0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x803B2FE4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x803B2FE8: jr          $ra
    // 0x803B2FEC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x803B2FEC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_803B2FF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B2FF0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x803B2FF4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x803B2FF8: jr          $ra
    // 0x803B2FFC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x803B2FFC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_803B3000(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B3000: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x803B3004: addiu       $v0, $v0, -0x750
    ctx->r2 = ADD32(ctx->r2, -0X750);
    // 0x803B3008: lh          $t6, 0xA0($v0)
    ctx->r14 = MEM_H(ctx->r2, 0XA0);
    // 0x803B300C: lh          $t7, 0xE6($v0)
    ctx->r15 = MEM_H(ctx->r2, 0XE6);
    // 0x803B3010: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803B3014: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803B3018: bne         $t6, $t7, L_803B3038
    if (ctx->r14 != ctx->r15) {
        // 0x803B301C: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_803B3038;
    }
    // 0x803B301C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803B3020: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803B3024: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    // 0x803B3028: jal         0x8002B608
    // 0x803B302C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_8002B608(rdram, ctx);
        goto after_0;
    // 0x803B302C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_0:
    // 0x803B3030: b           L_803B304C
    // 0x803B3034: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803B304C;
    // 0x803B3034: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803B3038:
    // 0x803B3038: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803B303C: addiu       $a2, $zero, 0x11
    ctx->r6 = ADD32(0, 0X11);
    // 0x803B3040: jal         0x8002B608
    // 0x803B3044: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_8002B608(rdram, ctx);
        goto after_1;
    // 0x803B3044: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_1:
    // 0x803B3048: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803B304C:
    // 0x803B304C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803B3050: jr          $ra
    // 0x803B3054: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x803B3054: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_803B3058(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B3058: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803B305C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803B3060: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803B3064: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803B3068: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x803B306C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x803B3070: jal         0x80021214
    // 0x803B3074: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80021214(rdram, ctx);
        goto after_0;
    // 0x803B3074: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x803B3078: lui         $t7, 0x803B
    ctx->r15 = S32(0X803B << 16);
    // 0x803B307C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x803B3080: addiu       $t7, $t7, 0x5268
    ctx->r15 = ADD32(ctx->r15, 0X5268);
    // 0x803B3084: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x803B3088: lw          $a0, 0x4($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X4);
    // 0x803B308C: sw          $at, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r1;
    // 0x803B3090: lw          $a2, 0x4($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X4);
    // 0x803B3094: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x803B3098: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x803B309C: lw          $a3, 0x8($t7)
    ctx->r7 = MEM_W(ctx->r15, 0X8);
    // 0x803B30A0: jal         0x8004B078
    // 0x803B30A4: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    func_8004B078(rdram, ctx);
        goto after_1;
    // 0x803B30A4: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    after_1:
    // 0x803B30A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803B30AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803B30B0: jr          $ra
    // 0x803B30B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x803B30B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_803B30B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B30B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803B30BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803B30C0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803B30C4: lw          $a0, 0x4($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X4);
    // 0x803B30C8: lhu         $a1, 0x1E($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X1E);
    // 0x803B30CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x803B30D0: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x803B30D4: subu        $t6, $t6, $a1
    ctx->r14 = SUB32(ctx->r14, ctx->r5);
    // 0x803B30D8: sll         $t7, $t6, 16
    ctx->r15 = S32(ctx->r14 << 16);
    // 0x803B30DC: jal         0x8002AC80
    // 0x803B30E0: sra         $a1, $t7, 16
    ctx->r5 = S32(SIGNED(ctx->r15) >> 16);
    func_8002AC80(rdram, ctx);
        goto after_0;
    // 0x803B30E0: sra         $a1, $t7, 16
    ctx->r5 = S32(SIGNED(ctx->r15) >> 16);
    after_0:
    // 0x803B30E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803B30E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803B30EC: jr          $ra
    // 0x803B30F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x803B30F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_803B30F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B30F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803B30F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803B30FC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803B3100: lhu         $t6, 0x1E($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X1E);
    // 0x803B3104: lw          $a0, 0x4($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X4);
    // 0x803B3108: lui         $a1, 0x803B
    ctx->r5 = S32(0X803B << 16);
    // 0x803B310C: addu        $a1, $a1, $t6
    ctx->r5 = ADD32(ctx->r5, ctx->r14);
    // 0x803B3110: lbu         $a1, 0x55B8($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X55B8);
    // 0x803B3114: jal         0x8002AC80
    // 0x803B3118: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8002AC80(rdram, ctx);
        goto after_0;
    // 0x803B3118: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x803B311C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803B3120: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803B3124: jr          $ra
    // 0x803B3128: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x803B3128: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_803B312C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B312C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803B3130: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803B3134: lhu         $t6, 0x1E($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X1E);
    // 0x803B3138: nop

    // 0x803B313C: slti        $at, $t6, 0x4
    ctx->r1 = SIGNED(ctx->r14) < 0X4 ? 1 : 0;
    // 0x803B3140: beq         $at, $zero, L_803B3158
    if (ctx->r1 == 0) {
        // 0x803B3144: nop
    
            goto L_803B3158;
    }
    // 0x803B3144: nop

    // 0x803B3148: lhu         $t7, 0x1C($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X1C);
    // 0x803B314C: nop

    // 0x803B3150: ori         $t8, $t7, 0x4
    ctx->r24 = ctx->r15 | 0X4;
    // 0x803B3154: sh          $t8, 0x1C($a1)
    MEM_H(0X1C, ctx->r5) = ctx->r24;
L_803B3158:
    // 0x803B3158: lui         $a1, 0x803B
    ctx->r5 = S32(0X803B << 16);
    // 0x803B315C: jal         0x8002BDB0
    // 0x803B3160: addiu       $a1, $a1, 0x5640
    ctx->r5 = ADD32(ctx->r5, 0X5640);
    func_8002BDB0(rdram, ctx);
        goto after_0;
    // 0x803B3160: addiu       $a1, $a1, 0x5640
    ctx->r5 = ADD32(ctx->r5, 0X5640);
    after_0:
    // 0x803B3164: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803B3168: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803B316C: jr          $ra
    // 0x803B3170: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x803B3170: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_803B3174(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B3174: jr          $ra
    // 0x803B3178: nop

    return;
    // 0x803B3178: nop

;}
RECOMP_FUNC void func_803B317C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B317C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x803B3180: lhu         $t6, 0x1E($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X1E);
    // 0x803B3184: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x803B3188: bne         $t6, $at, L_803B3198
    if (ctx->r14 != ctx->r1) {
        // 0x803B318C: addiu       $t7, $zero, 0x2
        ctx->r15 = ADD32(0, 0X2);
            goto L_803B3198;
    }
    // 0x803B318C: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x803B3190: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x803B3194: sh          $t7, -0x32A8($at)
    MEM_H(-0X32A8, ctx->r1) = ctx->r15;
L_803B3198:
    // 0x803B3198: jr          $ra
    // 0x803B319C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x803B319C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_803B31A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B31A0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x803B31A4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x803B31A8: jr          $ra
    // 0x803B31AC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x803B31AC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_803B31B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B31B0: jr          $ra
    // 0x803B31B4: nop

    return;
    // 0x803B31B4: nop

;}
RECOMP_FUNC void func_803B31B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B31B8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x803B31BC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x803B31C0: jr          $ra
    // 0x803B31C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x803B31C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_803B31C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B31C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803B31CC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803B31D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803B31D4: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803B31D8: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803B31DC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803B31E0: sh          $zero, 0x6490($at)
    MEM_H(0X6490, ctx->r1) = 0;
    // 0x803B31E4: jal         0x800296E0
    // 0x803B31E8: addiu       $a0, $a0, 0x3238
    ctx->r4 = ADD32(ctx->r4, 0X3238);
    func_800296E0(rdram, ctx);
        goto after_0;
    // 0x803B31E8: addiu       $a0, $a0, 0x3238
    ctx->r4 = ADD32(ctx->r4, 0X3238);
    after_0:
    // 0x803B31EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803B31F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803B31F4: jr          $ra
    // 0x803B31F8: nop

    return;
    // 0x803B31F8: nop

;}
RECOMP_FUNC void func_803B31FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B31FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803B3200: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803B3204: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x803B3208: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803B320C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803B3210: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803B3214: jal         0x80039DB4
    // 0x803B3218: sh          $t6, 0x6490($at)
    MEM_H(0X6490, ctx->r1) = ctx->r14;
    func_80039DB4(rdram, ctx);
        goto after_0;
    // 0x803B3218: sh          $t6, 0x6490($at)
    MEM_H(0X6490, ctx->r1) = ctx->r14;
    after_0:
    // 0x803B321C: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803B3220: jal         0x800296E0
    // 0x803B3224: addiu       $a0, $a0, 0x3238
    ctx->r4 = ADD32(ctx->r4, 0X3238);
    func_800296E0(rdram, ctx);
        goto after_1;
    // 0x803B3224: addiu       $a0, $a0, 0x3238
    ctx->r4 = ADD32(ctx->r4, 0X3238);
    after_1:
    // 0x803B3228: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803B322C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803B3230: jr          $ra
    // 0x803B3234: nop

    return;
    // 0x803B3234: nop

;}
RECOMP_FUNC void func_803B3238(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B3238: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803B323C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803B3240: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x803B3244: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803B3248: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803B324C: jal         0x80036858
    // 0x803B3250: sh          $zero, 0x6DFE($at)
    MEM_H(0X6DFE, ctx->r1) = 0;
    func_80036858(rdram, ctx);
        goto after_0;
    // 0x803B3250: sh          $zero, 0x6DFE($at)
    MEM_H(0X6DFE, ctx->r1) = 0;
    after_0:
    // 0x803B3254: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803B3258: jal         0x80035FF0
    // 0x803B325C: addiu       $a0, $a0, 0x5160
    ctx->r4 = ADD32(ctx->r4, 0X5160);
    func_80035FF0(rdram, ctx);
        goto after_1;
    // 0x803B325C: addiu       $a0, $a0, 0x5160
    ctx->r4 = ADD32(ctx->r4, 0X5160);
    after_1:
    // 0x803B3260: jal         0x80039DF0
    // 0x803B3264: nop

    func_80039DF0(rdram, ctx);
        goto after_2;
    // 0x803B3264: nop

    after_2:
    // 0x803B3268: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803B326C: lbu         $a0, -0x32A4($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X32A4);
    // 0x803B3270: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803B3274: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x803B3278: jal         0x8001D4C0
    // 0x803B327C: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    func_8001D4C0(rdram, ctx);
        goto after_3;
    // 0x803B327C: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    after_3:
    // 0x803B3280: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x803B3284: lui         $t7, 0x803B
    ctx->r15 = S32(0X803B << 16);
    // 0x803B3288: sh          $v0, 0x2C($a3)
    MEM_H(0X2C, ctx->r7) = ctx->r2;
    // 0x803B328C: lh          $v1, 0x2C($a3)
    ctx->r3 = MEM_H(ctx->r7, 0X2C);
    // 0x803B3290: addiu       $a0, $zero, 0xF00
    ctx->r4 = ADD32(0, 0XF00);
    // 0x803B3294: sra         $t6, $v1, 2
    ctx->r14 = S32(SIGNED(ctx->r3) >> 2);
    // 0x803B3298: sh          $t6, 0x26($a3)
    MEM_H(0X26, ctx->r7) = ctx->r14;
    // 0x803B329C: addu        $t7, $t7, $v1
    ctx->r15 = ADD32(ctx->r15, ctx->r3);
    // 0x803B32A0: lbu         $t7, 0x55B0($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X55B0);
    // 0x803B32A4: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x803B32A8: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    // 0x803B32AC: jal         0x80049E40
    // 0x803B32B0: sh          $t7, 0x2E($a3)
    MEM_H(0X2E, ctx->r7) = ctx->r15;
    func_80049E40(rdram, ctx);
        goto after_4;
    // 0x803B32B0: sh          $t7, 0x2E($a3)
    MEM_H(0X2E, ctx->r7) = ctx->r15;
    after_4:
    // 0x803B32B4: lui         $t8, 0x803B
    ctx->r24 = S32(0X803B << 16);
    // 0x803B32B8: lh          $t8, 0x6490($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X6490);
    // 0x803B32BC: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803B32C0: beq         $t8, $zero, L_803B32DC
    if (ctx->r24 == 0) {
        // 0x803B32C4: nop
    
            goto L_803B32DC;
    }
    // 0x803B32C4: nop

    // 0x803B32C8: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803B32CC: jal         0x8002AAC0
    // 0x803B32D0: addiu       $a0, $a0, 0x5500
    ctx->r4 = ADD32(ctx->r4, 0X5500);
    func_8002AAC0(rdram, ctx);
        goto after_5;
    // 0x803B32D0: addiu       $a0, $a0, 0x5500
    ctx->r4 = ADD32(ctx->r4, 0X5500);
    after_5:
    // 0x803B32D4: b           L_803B32E4
    // 0x803B32D8: nop

        goto L_803B32E4;
    // 0x803B32D8: nop

L_803B32DC:
    // 0x803B32DC: jal         0x8002AAC0
    // 0x803B32E0: addiu       $a0, $a0, 0x54B8
    ctx->r4 = ADD32(ctx->r4, 0X54B8);
    func_8002AAC0(rdram, ctx);
        goto after_6;
    // 0x803B32E0: addiu       $a0, $a0, 0x54B8
    ctx->r4 = ADD32(ctx->r4, 0X54B8);
    after_6:
L_803B32E4:
    // 0x803B32E4: jal         0x8006FF08
    // 0x803B32E8: nop

    func_8006FF08(rdram, ctx);
        goto after_7;
    // 0x803B32E8: nop

    after_7:
    // 0x803B32EC: jal         0x80035A04
    // 0x803B32F0: nop

    func_80035A04(rdram, ctx);
        goto after_8;
    // 0x803B32F0: nop

    after_8:
    // 0x803B32F4: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x803B32F8: lb          $t9, -0x307C($t9)
    ctx->r25 = MEM_B(ctx->r25, -0X307C);
    // 0x803B32FC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803B3300: bne         $t9, $at, L_803B3318
    if (ctx->r25 != ctx->r1) {
        // 0x803B3304: nop
    
            goto L_803B3318;
    }
    // 0x803B3304: nop

    // 0x803B3308: jal         0x80015BC0
    // 0x803B330C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    func_80015BC0(rdram, ctx);
        goto after_9;
    // 0x803B330C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_9:
    // 0x803B3310: b           L_803B3320
    // 0x803B3314: nop

        goto L_803B3320;
    // 0x803B3314: nop

L_803B3318:
    // 0x803B3318: jal         0x80015BC0
    // 0x803B331C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_80015BC0(rdram, ctx);
        goto after_10;
    // 0x803B331C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_10:
L_803B3320:
    // 0x803B3320: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803B3324: jal         0x80029220
    // 0x803B3328: addiu       $a0, $a0, 0x34E0
    ctx->r4 = ADD32(ctx->r4, 0X34E0);
    func_80029220(rdram, ctx);
        goto after_11;
    // 0x803B3328: addiu       $a0, $a0, 0x34E0
    ctx->r4 = ADD32(ctx->r4, 0X34E0);
    after_11:
    // 0x803B332C: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803B3330: addiu       $a0, $a0, 0x334C
    ctx->r4 = ADD32(ctx->r4, 0X334C);
    // 0x803B3334: jal         0x8004A9B4
    // 0x803B3338: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_8004A9B4(rdram, ctx);
        goto after_12;
    // 0x803B3338: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_12:
    // 0x803B333C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803B3340: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803B3344: jr          $ra
    // 0x803B3348: nop

    return;
    // 0x803B3348: nop

;}
RECOMP_FUNC void func_803B334C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B334C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803B3350: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803B3354: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803B3358: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x803B335C: jal         0x8001C820
    // 0x803B3360: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_8001C820(rdram, ctx);
        goto after_0;
    // 0x803B3360: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x803B3364: jal         0x800357CC
    // 0x803B3368: nop

    func_800357CC(rdram, ctx);
        goto after_1;
    // 0x803B3368: nop

    after_1:
    // 0x803B336C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x803B3370: addiu       $v0, $v0, -0x32B0
    ctx->r2 = ADD32(ctx->r2, -0X32B0);
    // 0x803B3374: lhu         $t6, 0x2($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X2);
    // 0x803B3378: nop

    // 0x803B337C: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x803B3380: bne         $t7, $zero, L_803B3400
    if (ctx->r15 != 0) {
        // 0x803B3384: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_803B3400;
    }
    // 0x803B3384: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803B3388: lw          $t8, 0x60($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X60);
    // 0x803B338C: nop

    // 0x803B3390: lhu         $a0, 0x0($t8)
    ctx->r4 = MEM_HU(ctx->r24, 0X0);
    // 0x803B3394: jal         0x80035D2C
    // 0x803B3398: nop

    func_80035D2C(rdram, ctx);
        goto after_2;
    // 0x803B3398: nop

    after_2:
    // 0x803B339C: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x803B33A0: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803B33A4: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x803B33A8: lw          $t9, 0x5584($at)
    ctx->r25 = MEM_W(ctx->r1, 0X5584);
    // 0x803B33AC: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x803B33B0: jalr        $t9
    // 0x803B33B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x803B33B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x803B33B8: lh          $a0, 0x26($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X26);
    // 0x803B33BC: jal         0x8001D6EC
    // 0x803B33C0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001D6EC(rdram, ctx);
        goto after_4;
    // 0x803B33C0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x803B33C4: lh          $a0, 0x2E($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X2E);
    // 0x803B33C8: sh          $v0, 0x26($s0)
    MEM_H(0X26, ctx->r16) = ctx->r2;
    // 0x803B33CC: jal         0x8001D6EC
    // 0x803B33D0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001D6EC(rdram, ctx);
        goto after_5;
    // 0x803B33D0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_5:
    // 0x803B33D4: lh          $t0, 0x26($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X26);
    // 0x803B33D8: sh          $v0, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r2;
    // 0x803B33DC: lh          $t2, 0x2E($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X2E);
    // 0x803B33E0: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x803B33E4: lui         $t4, 0x803B
    ctx->r12 = S32(0X803B << 16);
    // 0x803B33E8: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x803B33EC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803B33F0: lbu         $t4, 0x5758($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X5758);
    // 0x803B33F4: jal         0x80035928
    // 0x803B33F8: sh          $t4, 0x2C($s0)
    MEM_H(0X2C, ctx->r16) = ctx->r12;
    func_80035928(rdram, ctx);
        goto after_6;
    // 0x803B33F8: sh          $t4, 0x2C($s0)
    MEM_H(0X2C, ctx->r16) = ctx->r12;
    after_6:
    // 0x803B33FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803B3400:
    // 0x803B3400: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803B3404: jr          $ra
    // 0x803B3408: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x803B3408: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_803B340C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B340C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803B3410: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803B3414: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803B3418: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803B341C: lhu         $t7, 0x2C($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X2C);
    // 0x803B3420: nop

    // 0x803B3424: sltiu       $at, $t7, 0x8
    ctx->r1 = ctx->r15 < 0X8 ? 1 : 0;
    // 0x803B3428: beq         $at, $zero, L_803B3488
    if (ctx->r1 == 0) {
        // 0x803B342C: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_803B3488;
    }
    // 0x803B342C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803B3430: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803B3434: addu        $at, $at, $t7
    gpr jr_addend_803B3440 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x803B3438: lw          $t7, 0x57EC($at)
    ctx->r15 = ADD32(ctx->r1, 0X57EC);
    // 0x803B343C: nop

    // 0x803B3440: jr          $t7
    // 0x803B3444: nop

    switch (jr_addend_803B3440 >> 2) {
        case 0: goto L_803B3448; break;
        case 1: goto L_803B3448; break;
        case 2: goto L_803B3448; break;
        case 3: goto L_803B3450; break;
        case 4: goto L_803B3448; break;
        case 5: goto L_803B3448; break;
        case 6: goto L_803B3448; break;
        case 7: goto L_803B3448; break;
        default: switch_error(__func__, 0x803B3440, 0x803B57EC);
    }
    // 0x803B3444: nop

L_803B3448:
    // 0x803B3448: jal         0x80037618
    // 0x803B344C: nop

    func_80037618(rdram, ctx);
        goto after_0;
    // 0x803B344C: nop

    after_0:
L_803B3450:
    // 0x803B3450: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x803B3454: addiu       $v0, $v0, -0x32B0
    ctx->r2 = ADD32(ctx->r2, -0X32B0);
    // 0x803B3458: jal         0x80035770
    // 0x803B345C: sh          $zero, 0x6($v0)
    MEM_H(0X6, ctx->r2) = 0;
    func_80035770(rdram, ctx);
        goto after_1;
    // 0x803B345C: sh          $zero, 0x6($v0)
    MEM_H(0X6, ctx->r2) = 0;
    after_1:
    // 0x803B3460: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x803B3464: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x803B3468: lh          $t9, 0x2C($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X2C);
    // 0x803B346C: addiu       $v0, $v0, -0x32B0
    ctx->r2 = ADD32(ctx->r2, -0X32B0);
    // 0x803B3470: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x803B3474: sb          $t0, 0xC($v0)
    MEM_B(0XC, ctx->r2) = ctx->r8;
    // 0x803B3478: jal         0x80037908
    // 0x803B347C: andi        $a0, $t0, 0xFF
    ctx->r4 = ctx->r8 & 0XFF;
    func_80037908(rdram, ctx);
        goto after_2;
    // 0x803B347C: andi        $a0, $t0, 0xFF
    ctx->r4 = ctx->r8 & 0XFF;
    after_2:
    // 0x803B3480: b           L_803B34AC
    // 0x803B3484: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803B34AC;
    // 0x803B3484: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803B3488:
    // 0x803B3488: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x803B348C: addiu       $v0, $v0, -0x32B0
    ctx->r2 = ADD32(ctx->r2, -0X32B0);
    // 0x803B3490: lhu         $t1, 0x2($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X2);
    // 0x803B3494: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803B3498: ori         $t2, $t1, 0x1
    ctx->r10 = ctx->r9 | 0X1;
    // 0x803B349C: sh          $t2, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r10;
    // 0x803B34A0: jal         0x8003725C
    // 0x803B34A4: addiu       $a0, $a0, 0x334C
    ctx->r4 = ADD32(ctx->r4, 0X334C);
    func_8003725C(rdram, ctx);
        goto after_3;
    // 0x803B34A4: addiu       $a0, $a0, 0x334C
    ctx->r4 = ADD32(ctx->r4, 0X334C);
    after_3:
    // 0x803B34A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803B34AC:
    // 0x803B34AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803B34B0: jr          $ra
    // 0x803B34B4: nop

    return;
    // 0x803B34B4: nop

;}
