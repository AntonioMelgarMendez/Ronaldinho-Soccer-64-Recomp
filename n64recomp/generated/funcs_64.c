#include "iss64_recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_80264800_func_80267D8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80267D8C: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x80267D90: lh          $t6, -0x6B4($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X6B4);
    // 0x80267D94: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80267D98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80267D9C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80267DA0: bne         $t6, $zero, L_80267E00
    if (ctx->r14 != 0) {
        // 0x80267DA4: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_80267E00;
    }
    // 0x80267DA4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80267DA8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80267DAC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80267DB0: jal         0x80021214
    // 0x80267DB4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80021214(rdram, ctx);
        goto after_0;
    // 0x80267DB4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80267DB8: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x80267DBC: addiu       $t7, $t7, -0x6CE4
    ctx->r15 = ADD32(ctx->r15, -0X6CE4);
    // 0x80267DC0: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x80267DC4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80267DC8: sw          $at, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r1;
    // 0x80267DCC: lw          $a2, 0x4($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X4);
    // 0x80267DD0: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x80267DD4: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x80267DD8: lw          $a3, 0x8($t7)
    ctx->r7 = MEM_W(ctx->r15, 0X8);
    // 0x80267DDC: jal         0x8004B078
    // 0x80267DE0: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    func_8004B078(rdram, ctx);
        goto after_1;
    // 0x80267DE0: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    after_1:
    // 0x80267DE4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80267DE8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80267DEC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80267DF0: jal         0x8002B608
    // 0x80267DF4: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_8002B608(rdram, ctx);
        goto after_2;
    // 0x80267DF4: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_2:
    // 0x80267DF8: b           L_80267E50
    // 0x80267DFC: nop

        goto L_80267E50;
    // 0x80267DFC: nop

L_80267E00:
    // 0x80267E00: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80267E04: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x80267E08: jal         0x80021214
    // 0x80267E0C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80021214(rdram, ctx);
        goto after_3;
    // 0x80267E0C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x80267E10: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80267E14: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80267E18: addiu       $a2, $zero, 0x11
    ctx->r6 = ADD32(0, 0X11);
    // 0x80267E1C: jal         0x8002B608
    // 0x80267E20: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_8002B608(rdram, ctx);
        goto after_4;
    // 0x80267E20: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_4:
    // 0x80267E24: lui         $t0, 0x800B
    ctx->r8 = S32(0X800B << 16);
    // 0x80267E28: addiu       $t0, $t0, -0x6CC0
    ctx->r8 = ADD32(ctx->r8, -0X6CC0);
    // 0x80267E2C: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x80267E30: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80267E34: sw          $at, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r1;
    // 0x80267E38: lw          $a2, 0x4($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X4);
    // 0x80267E3C: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x80267E40: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x80267E44: lw          $a3, 0x8($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X8);
    // 0x80267E48: jal         0x8004B078
    // 0x80267E4C: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    func_8004B078(rdram, ctx);
        goto after_5;
    // 0x80267E4C: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    after_5:
L_80267E50:
    // 0x80267E50: lui         $a0, 0x8026
    ctx->r4 = S32(0X8026 << 16);
    // 0x80267E54: jal         0x800296E0
    // 0x80267E58: addiu       $a0, $a0, 0x7E6C
    ctx->r4 = ADD32(ctx->r4, 0X7E6C);
    func_800296E0(rdram, ctx);
        goto after_6;
    // 0x80267E58: addiu       $a0, $a0, 0x7E6C
    ctx->r4 = ADD32(ctx->r4, 0X7E6C);
    after_6:
    // 0x80267E5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80267E60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80267E64: jr          $ra
    // 0x80267E68: nop

    return;
    // 0x80267E68: nop

;}
RECOMP_FUNC void ovl_80264800_func_80267DC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80267DC4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80267DC8: sw          $at, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r1;
    // 0x80267DCC: lw          $a2, 0x4($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X4);
    // 0x80267DD0: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x80267DD4: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x80267DD8: lw          $a3, 0x8($t7)
    ctx->r7 = MEM_W(ctx->r15, 0X8);
    // 0x80267DDC: jal         0x8004B078
    // 0x80267DE0: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    func_8004B078(rdram, ctx);
        goto after_0;
    // 0x80267DE0: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    after_0:
    // 0x80267DE4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80267DE8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80267DEC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80267DF0: jal         0x8002B608
    // 0x80267DF4: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_8002B608(rdram, ctx);
        goto after_1;
    // 0x80267DF4: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_1:
    // 0x80267DF8: b           L_80267E50
    // 0x80267DFC: nop

        goto L_80267E50;
    // 0x80267DFC: nop

    // 0x80267E00: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80267E04: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x80267E08: jal         0x80021214
    // 0x80267E0C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80021214(rdram, ctx);
        goto after_2;
    // 0x80267E0C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80267E10: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80267E14: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80267E18: addiu       $a2, $zero, 0x11
    ctx->r6 = ADD32(0, 0X11);
    // 0x80267E1C: jal         0x8002B608
    // 0x80267E20: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_8002B608(rdram, ctx);
        goto after_3;
    // 0x80267E20: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_3:
    // 0x80267E24: lui         $t0, 0x800B
    ctx->r8 = S32(0X800B << 16);
    // 0x80267E28: addiu       $t0, $t0, -0x6CC0
    ctx->r8 = ADD32(ctx->r8, -0X6CC0);
    // 0x80267E2C: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x80267E30: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80267E34: sw          $at, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r1;
    // 0x80267E38: lw          $a2, 0x4($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X4);
    // 0x80267E3C: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x80267E40: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x80267E44: lw          $a3, 0x8($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X8);
    // 0x80267E48: jal         0x8004B078
    // 0x80267E4C: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    func_8004B078(rdram, ctx);
        goto after_4;
    // 0x80267E4C: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    after_4:
L_80267E50:
    // 0x80267E50: lui         $a0, 0x8026
    ctx->r4 = S32(0X8026 << 16);
    // 0x80267E54: jal         0x800296E0
    // 0x80267E58: addiu       $a0, $a0, 0x7E6C
    ctx->r4 = ADD32(ctx->r4, 0X7E6C);
    func_800296E0(rdram, ctx);
        goto after_5;
    // 0x80267E58: addiu       $a0, $a0, 0x7E6C
    ctx->r4 = ADD32(ctx->r4, 0X7E6C);
    after_5:
    // 0x80267E5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80267E60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80267E64: jr          $ra
    // 0x80267E68: nop

    return;
    // 0x80267E68: nop

;}
RECOMP_FUNC void ovl_80264800_func_80267E6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80267E6C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80267E70: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80267E74: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x80267E78: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80267E7C: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x80267E80: lh          $a1, -0x6B0($a1)
    ctx->r5 = MEM_H(ctx->r5, -0X6B0);
    // 0x80267E84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80267E88: addiu       $a1, $a1, 0x6
    ctx->r5 = ADD32(ctx->r5, 0X6);
    // 0x80267E8C: andi        $t6, $a1, 0xFFFF
    ctx->r14 = ctx->r5 & 0XFFFF;
    // 0x80267E90: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x80267E94: jal         0x8002BB50
    // 0x80267E98: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    func_8002BB50(rdram, ctx);
        goto after_0;
    // 0x80267E98: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    after_0:
    // 0x80267E9C: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80267EA0: addiu       $v0, $v0, -0x750
    ctx->r2 = ADD32(ctx->r2, -0X750);
    // 0x80267EA4: lh          $t7, 0x9E($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X9E);
    // 0x80267EA8: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x80267EAC: slti        $at, $t7, 0x2
    ctx->r1 = SIGNED(ctx->r15) < 0X2 ? 1 : 0;
    // 0x80267EB0: bne         $at, $zero, L_80267EC8
    if (ctx->r1 != 0) {
        // 0x80267EB4: addiu       $t9, $zero, 0x9
        ctx->r25 = ADD32(0, 0X9);
            goto L_80267EC8;
    }
    // 0x80267EB4: addiu       $t9, $zero, 0x9
    ctx->r25 = ADD32(0, 0X9);
    // 0x80267EB8: lh          $t8, 0xAA($v0)
    ctx->r24 = MEM_H(ctx->r2, 0XAA);
    // 0x80267EBC: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80267EC0: bne         $t8, $at, L_80267ED0
    if (ctx->r24 != ctx->r1) {
        // 0x80267EC4: addiu       $t0, $zero, 0x414
        ctx->r8 = ADD32(0, 0X414);
            goto L_80267ED0;
    }
    // 0x80267EC4: addiu       $t0, $zero, 0x414
    ctx->r8 = ADD32(0, 0X414);
L_80267EC8:
    // 0x80267EC8: b           L_80267EDC
    // 0x80267ECC: sb          $t9, 0x5($a2)
    MEM_B(0X5, ctx->r6) = ctx->r25;
        goto L_80267EDC;
    // 0x80267ECC: sb          $t9, 0x5($a2)
    MEM_B(0X5, ctx->r6) = ctx->r25;
L_80267ED0:
    // 0x80267ED0: addiu       $t1, $zero, 0x8
    ctx->r9 = ADD32(0, 0X8);
    // 0x80267ED4: sh          $t0, 0x12($a2)
    MEM_H(0X12, ctx->r6) = ctx->r8;
    // 0x80267ED8: sb          $t1, 0x5($a2)
    MEM_B(0X5, ctx->r6) = ctx->r9;
L_80267EDC:
    // 0x80267EDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80267EE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80267EE4: jr          $ra
    // 0x80267EE8: nop

    return;
    // 0x80267EE8: nop

;}
RECOMP_FUNC void ovl_80264800_func_80267EEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80267EEC: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80267EF0: addiu       $v1, $v1, -0x750
    ctx->r3 = ADD32(ctx->r3, -0X750);
    // 0x80267EF4: lh          $v0, 0x9E($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X9E);
    // 0x80267EF8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80267EFC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80267F00: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80267F04: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80267F08: bne         $v0, $at, L_80267F38
    if (ctx->r2 != ctx->r1) {
        // 0x80267F0C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80267F38;
    }
    // 0x80267F0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80267F10: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80267F14: sh          $t6, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r14;
    // 0x80267F18: lh          $a1, 0xC4($v1)
    ctx->r5 = MEM_H(ctx->r3, 0XC4);
    // 0x80267F1C: nop

    // 0x80267F20: addiu       $a1, $a1, 0xC
    ctx->r5 = ADD32(ctx->r5, 0XC);
    // 0x80267F24: andi        $t7, $a1, 0xFFFF
    ctx->r15 = ctx->r5 & 0XFFFF;
    // 0x80267F28: jal         0x8002BB50
    // 0x80267F2C: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    func_8002BB50(rdram, ctx);
        goto after_0;
    // 0x80267F2C: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    after_0:
    // 0x80267F30: b           L_80267F74
    // 0x80267F34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80267F74;
    // 0x80267F34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80267F38:
    // 0x80267F38: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80267F3C: bne         $v0, $at, L_80267F68
    if (ctx->r2 != ctx->r1) {
        // 0x80267F40: addiu       $t8, $zero, -0x1
        ctx->r24 = ADD32(0, -0X1);
            goto L_80267F68;
    }
    // 0x80267F40: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x80267F44: sh          $t8, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r24;
    // 0x80267F48: lh          $a1, 0xC4($v1)
    ctx->r5 = MEM_H(ctx->r3, 0XC4);
    // 0x80267F4C: nop

    // 0x80267F50: addiu       $a1, $a1, 0xE
    ctx->r5 = ADD32(ctx->r5, 0XE);
    // 0x80267F54: andi        $t9, $a1, 0xFFFF
    ctx->r25 = ctx->r5 & 0XFFFF;
    // 0x80267F58: jal         0x8002BB50
    // 0x80267F5C: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    func_8002BB50(rdram, ctx);
        goto after_1;
    // 0x80267F5C: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    after_1:
    // 0x80267F60: b           L_80267F74
    // 0x80267F64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80267F74;
    // 0x80267F64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80267F68:
    // 0x80267F68: jal         0x8002BB50
    // 0x80267F6C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8002BB50(rdram, ctx);
        goto after_2;
    // 0x80267F6C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80267F70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80267F74:
    // 0x80267F74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80267F78: jr          $ra
    // 0x80267F7C: nop

    return;
    // 0x80267F7C: nop

;}
RECOMP_FUNC void ovl_80264800_func_80267F00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80267F00: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80267F04: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80267F08: bne         $v0, $at, L_80267F38
    if (ctx->r2 != ctx->r1) {
        // 0x80267F0C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80267F38;
    }
    // 0x80267F0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80267F10: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80267F14: sh          $t6, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r14;
    // 0x80267F18: lh          $a1, 0xC4($v1)
    ctx->r5 = MEM_H(ctx->r3, 0XC4);
    // 0x80267F1C: nop

    // 0x80267F20: addiu       $a1, $a1, 0xC
    ctx->r5 = ADD32(ctx->r5, 0XC);
    // 0x80267F24: andi        $t7, $a1, 0xFFFF
    ctx->r15 = ctx->r5 & 0XFFFF;
    // 0x80267F28: jal         0x8002BB50
    // 0x80267F2C: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    func_8002BB50(rdram, ctx);
        goto after_0;
    // 0x80267F2C: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    after_0:
    // 0x80267F30: b           L_80267F74
    // 0x80267F34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80267F74;
    // 0x80267F34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80267F38:
    // 0x80267F38: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80267F3C: bne         $v0, $at, L_80267F68
    if (ctx->r2 != ctx->r1) {
        // 0x80267F40: addiu       $t8, $zero, -0x1
        ctx->r24 = ADD32(0, -0X1);
            goto L_80267F68;
    }
    // 0x80267F40: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x80267F44: sh          $t8, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r24;
    // 0x80267F48: lh          $a1, 0xC4($v1)
    ctx->r5 = MEM_H(ctx->r3, 0XC4);
    // 0x80267F4C: nop

    // 0x80267F50: addiu       $a1, $a1, 0xE
    ctx->r5 = ADD32(ctx->r5, 0XE);
    // 0x80267F54: andi        $t9, $a1, 0xFFFF
    ctx->r25 = ctx->r5 & 0XFFFF;
    // 0x80267F58: jal         0x8002BB50
    // 0x80267F5C: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    func_8002BB50(rdram, ctx);
        goto after_1;
    // 0x80267F5C: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    after_1:
    // 0x80267F60: b           L_80267F74
    // 0x80267F64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80267F74;
    // 0x80267F64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80267F68:
    // 0x80267F68: jal         0x8002BB50
    // 0x80267F6C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8002BB50(rdram, ctx);
        goto after_2;
    // 0x80267F6C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80267F70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80267F74:
    // 0x80267F74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80267F78: jr          $ra
    // 0x80267F7C: nop

    return;
    // 0x80267F7C: nop

;}
RECOMP_FUNC void ovl_80264800_func_80267F80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80267F80: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x80267F84: lh          $t6, -0x6AA($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X6AA);
    // 0x80267F88: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80267F8C: bgez        $t6, L_80267F98
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80267F90: nop
    
            goto L_80267F98;
    }
    // 0x80267F90: nop

    // 0x80267F94: sb          $zero, 0x4($a0)
    MEM_B(0X4, ctx->r4) = 0;
L_80267F98:
    // 0x80267F98: jr          $ra
    // 0x80267F9C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80267F9C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void ovl_80264800_func_80267FA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80267FA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80267FA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80267FA8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80267FAC: jal         0x80036234
    // 0x80267FB0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80036234(rdram, ctx);
        goto after_0;
    // 0x80267FB0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80267FB4: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80267FB8: jal         0x80035FF0
    // 0x80267FBC: addiu       $a0, $a0, -0x6540
    ctx->r4 = ADD32(ctx->r4, -0X6540);
    func_80035FF0(rdram, ctx);
        goto after_1;
    // 0x80267FBC: addiu       $a0, $a0, -0x6540
    ctx->r4 = ADD32(ctx->r4, -0X6540);
    after_1:
    // 0x80267FC0: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80267FC4: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80267FC8: addiu       $a0, $a0, -0x7FA4
    ctx->r4 = ADD32(ctx->r4, -0X7FA4);
    // 0x80267FCC: jal         0x800296E0
    // 0x80267FD0: sh          $zero, 0x28($t6)
    MEM_H(0X28, ctx->r14) = 0;
    func_800296E0(rdram, ctx);
        goto after_2;
    // 0x80267FD0: sh          $zero, 0x28($t6)
    MEM_H(0X28, ctx->r14) = 0;
    after_2:
    // 0x80267FD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80267FD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80267FDC: jr          $ra
    // 0x80267FE0: nop

    return;
    // 0x80267FE0: nop

;}
RECOMP_FUNC void ovl_80264800_func_80267FA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80267FA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80267FA8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80267FAC: jal         0x80036234
    // 0x80267FB0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80036234(rdram, ctx);
        goto after_0;
    // 0x80267FB0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80267FB4: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80267FB8: jal         0x80035FF0
    // 0x80267FBC: addiu       $a0, $a0, -0x6540
    ctx->r4 = ADD32(ctx->r4, -0X6540);
    func_80035FF0(rdram, ctx);
        goto after_1;
    // 0x80267FBC: addiu       $a0, $a0, -0x6540
    ctx->r4 = ADD32(ctx->r4, -0X6540);
    after_1:
    // 0x80267FC0: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80267FC4: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80267FC8: addiu       $a0, $a0, -0x7FA4
    ctx->r4 = ADD32(ctx->r4, -0X7FA4);
    // 0x80267FCC: jal         0x800296E0
    // 0x80267FD0: sh          $zero, 0x28($t6)
    MEM_H(0X28, ctx->r14) = 0;
    func_800296E0(rdram, ctx);
        goto after_2;
    // 0x80267FD0: sh          $zero, 0x28($t6)
    MEM_H(0X28, ctx->r14) = 0;
    after_2:
    // 0x80267FD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80267FD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80267FDC: jr          $ra
    // 0x80267FE0: nop

    return;
    // 0x80267FE0: nop

;}
RECOMP_FUNC void ovl_80264800_func_80267FE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80267FE4: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80267FE8: addiu       $v1, $v1, -0x30A0
    ctx->r3 = ADD32(ctx->r3, -0X30A0);
    // 0x80267FEC: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x80267FF0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80267FF4: sb          $t7, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r15;
    // 0x80267FF8: lb          $t8, 0x0($v1)
    ctx->r24 = MEM_B(ctx->r3, 0X0);
    // 0x80267FFC: addiu       $v0, $v0, 0xB72
    ctx->r2 = ADD32(ctx->r2, 0XB72);
    // 0x80268000: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80268004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80268008: sh          $t7, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r15;
    // 0x8026800C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80268010: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80268014: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80268018: jal         0x80039CB4
    // 0x8026801C: sb          $t8, -0x3088($at)
    MEM_B(-0X3088, ctx->r1) = ctx->r24;
    func_80039CB4(rdram, ctx);
        goto after_0;
    // 0x8026801C: sb          $t8, -0x3088($at)
    MEM_B(-0X3088, ctx->r1) = ctx->r24;
    after_0:
    // 0x80268020: jal         0x8003620C
    // 0x80268024: nop

    func_8003620C(rdram, ctx);
        goto after_1;
    // 0x80268024: nop

    after_1:
    // 0x80268028: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8026802C: jal         0x80035FF0
    // 0x80268030: addiu       $a0, $a0, -0x6540
    ctx->r4 = ADD32(ctx->r4, -0X6540);
    func_80035FF0(rdram, ctx);
        goto after_2;
    // 0x80268030: addiu       $a0, $a0, -0x6540
    ctx->r4 = ADD32(ctx->r4, -0X6540);
    after_2:
    // 0x80268034: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x80268038: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8026803C: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80268040: addiu       $a0, $a0, -0x7FA4
    ctx->r4 = ADD32(ctx->r4, -0X7FA4);
    // 0x80268044: jal         0x800296E0
    // 0x80268048: sh          $t9, 0x28($t0)
    MEM_H(0X28, ctx->r8) = ctx->r25;
    func_800296E0(rdram, ctx);
        goto after_3;
    // 0x80268048: sh          $t9, 0x28($t0)
    MEM_H(0X28, ctx->r8) = ctx->r25;
    after_3:
    // 0x8026804C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80268050: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80268054: jr          $ra
    // 0x80268058: nop

    return;
    // 0x80268058: nop

;}
RECOMP_FUNC void ovl_80264800_func_8026805C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026805C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80268060: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80268064: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80268068: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8026806C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80268070: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x80268074: addiu       $a0, $zero, 0xF00
    ctx->r4 = ADD32(0, 0XF00);
    // 0x80268078: jal         0x80049E40
    // 0x8026807C: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_80049E40(rdram, ctx);
        goto after_0;
    // 0x8026807C: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_0:
    // 0x80268080: sh          $zero, 0x2A($s0)
    MEM_H(0X2A, ctx->r16) = 0;
    // 0x80268084: lh          $v0, 0x2A($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X2A);
    // 0x80268088: nop

    // 0x8026808C: sh          $v0, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r2;
    // 0x80268090: jal         0x80268EE0
    // 0x80268094: sh          $v0, 0x36($s0)
    MEM_H(0X36, ctx->r16) = ctx->r2;
    ovl_80264800_func_80268EE0(rdram, ctx);
        goto after_1;
    // 0x80268094: sh          $v0, 0x36($s0)
    MEM_H(0X36, ctx->r16) = ctx->r2;
    after_1:
    // 0x80268098: jal         0x80268FA8
    // 0x8026809C: nop

    ovl_80264800_func_80268FA8(rdram, ctx);
        goto after_2;
    // 0x8026809C: nop

    after_2:
    // 0x802680A0: lbu         $a0, 0x33($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X33);
    // 0x802680A4: jal         0x80268FD0
    // 0x802680A8: nop

    ovl_80264800_func_80268FD0(rdram, ctx);
        goto after_3;
    // 0x802680A8: nop

    after_3:
    // 0x802680AC: lh          $t6, 0x28($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X28);
    // 0x802680B0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x802680B4: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x802680B8: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x802680BC: lh          $a0, -0x306C($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X306C);
    // 0x802680C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802680C4: jal         0x8001D4C0
    // 0x802680C8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_8001D4C0(rdram, ctx);
        goto after_4;
    // 0x802680C8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_4:
    // 0x802680CC: lh          $t8, 0x28($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X28);
    // 0x802680D0: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x802680D4: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x802680D8: sh          $v0, 0x2C($s0)
    MEM_H(0X2C, ctx->r16) = ctx->r2;
    // 0x802680DC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x802680E0: lh          $t0, -0x306C($t0)
    ctx->r8 = MEM_H(ctx->r8, -0X306C);
    // 0x802680E4: lui         $t1, 0x801B
    ctx->r9 = S32(0X801B << 16);
    // 0x802680E8: bltz        $t0, L_802680FC
    if (SIGNED(ctx->r8) < 0) {
        // 0x802680EC: lui         $a0, 0x8027
        ctx->r4 = S32(0X8027 << 16);
            goto L_802680FC;
    }
    // 0x802680EC: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x802680F0: lh          $t1, -0x6AC($t1)
    ctx->r9 = MEM_H(ctx->r9, -0X6AC);
    // 0x802680F4: nop

    // 0x802680F8: bgtz        $t1, L_80268104
    if (SIGNED(ctx->r9) > 0) {
        // 0x802680FC: addiu       $t2, $zero, 0x2
        ctx->r10 = ADD32(0, 0X2);
            goto L_80268104;
    }
L_802680FC:
    // 0x802680FC: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x80268100: sh          $t2, 0x2C($s0)
    MEM_H(0X2C, ctx->r16) = ctx->r10;
L_80268104:
    // 0x80268104: jal         0x8002AAC0
    // 0x80268108: addiu       $a0, $a0, -0x63E0
    ctx->r4 = ADD32(ctx->r4, -0X63E0);
    func_8002AAC0(rdram, ctx);
        goto after_5;
    // 0x80268108: addiu       $a0, $a0, -0x63E0
    ctx->r4 = ADD32(ctx->r4, -0X63E0);
    after_5:
    // 0x8026810C: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80268110: jal         0x800296E0
    // 0x80268114: addiu       $a0, $a0, -0x7ED8
    ctx->r4 = ADD32(ctx->r4, -0X7ED8);
    func_800296E0(rdram, ctx);
        goto after_6;
    // 0x80268114: addiu       $a0, $a0, -0x7ED8
    ctx->r4 = ADD32(ctx->r4, -0X7ED8);
    after_6:
    // 0x80268118: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8026811C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80268120: jr          $ra
    // 0x80268124: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80268124: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_80264800_func_802680F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802680F8: bgtz        $t1, L_80268104
    if (SIGNED(ctx->r9) > 0) {
        // 0x802680FC: addiu       $t2, $zero, 0x2
        ctx->r10 = ADD32(0, 0X2);
            goto L_80268104;
    }
    // 0x802680FC: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x80268100: sh          $t2, 0x2C($s0)
    MEM_H(0X2C, ctx->r16) = ctx->r10;
L_80268104:
    // 0x80268104: jal         0x8002AAC0
    // 0x80268108: addiu       $a0, $a0, -0x63E0
    ctx->r4 = ADD32(ctx->r4, -0X63E0);
    func_8002AAC0(rdram, ctx);
        goto after_0;
    // 0x80268108: addiu       $a0, $a0, -0x63E0
    ctx->r4 = ADD32(ctx->r4, -0X63E0);
    after_0:
    // 0x8026810C: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80268110: jal         0x800296E0
    // 0x80268114: addiu       $a0, $a0, -0x7ED8
    ctx->r4 = ADD32(ctx->r4, -0X7ED8);
    func_800296E0(rdram, ctx);
        goto after_1;
    // 0x80268114: addiu       $a0, $a0, -0x7ED8
    ctx->r4 = ADD32(ctx->r4, -0X7ED8);
    after_1:
    // 0x80268118: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8026811C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80268120: jr          $ra
    // 0x80268124: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80268124: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_80264800_func_80268128(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80268128: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8026812C: lbu         $t6, -0x32A4($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X32A4);
    // 0x80268130: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80268134: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x80268138: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026813C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80268140: bne         $t6, $at, L_80268158
    if (ctx->r14 != ctx->r1) {
        // 0x80268144: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_80268158;
    }
    // 0x80268144: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80268148: jal         0x8006FB58
    // 0x8026814C: nop

    func_8006FB58(rdram, ctx);
        goto after_0;
    // 0x8026814C: nop

    after_0:
    // 0x80268150: b           L_80268160
    // 0x80268154: nop

        goto L_80268160;
    // 0x80268154: nop

L_80268158:
    // 0x80268158: jal         0x8006FF08
    // 0x8026815C: nop

    func_8006FF08(rdram, ctx);
        goto after_1;
    // 0x8026815C: nop

    after_1:
L_80268160:
    // 0x80268160: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80268164: addiu       $a0, $a0, -0x762C
    ctx->r4 = ADD32(ctx->r4, -0X762C);
    // 0x80268168: jal         0x800293DC
    // 0x8026816C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_800293DC(rdram, ctx);
        goto after_2;
    // 0x8026816C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_2:
    // 0x80268170: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80268174: jal         0x80029354
    // 0x80268178: addiu       $a0, $a0, -0x7374
    ctx->r4 = ADD32(ctx->r4, -0X7374);
    func_80029354(rdram, ctx);
        goto after_3;
    // 0x80268178: addiu       $a0, $a0, -0x7374
    ctx->r4 = ADD32(ctx->r4, -0X7374);
    after_3:
    // 0x8026817C: jal         0x80035A04
    // 0x80268180: nop

    func_80035A04(rdram, ctx);
        goto after_4;
    // 0x80268180: nop

    after_4:
    // 0x80268184: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80268188: addiu       $a0, $a0, -0x7E5C
    ctx->r4 = ADD32(ctx->r4, -0X7E5C);
    // 0x8026818C: jal         0x8004AE38
    // 0x80268190: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_8004AE38(rdram, ctx);
        goto after_5;
    // 0x80268190: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_5:
    // 0x80268194: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80268198: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026819C: jr          $ra
    // 0x802681A0: nop

    return;
    // 0x802681A0: nop

;}
RECOMP_FUNC void ovl_80264800_func_802681A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802681A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802681A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802681AC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802681B0: jal         0x800357CC
    // 0x802681B4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800357CC(rdram, ctx);
        goto after_0;
    // 0x802681B4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x802681B8: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x802681BC: lw          $t8, -0x3250($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3250);
    // 0x802681C0: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x802681C4: lhu         $t6, -0x3078($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X3078);
    // 0x802681C8: lhu         $t9, 0x0($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X0);
    // 0x802681CC: andi        $t7, $t6, 0x4000
    ctx->r15 = ctx->r14 & 0X4000;
    // 0x802681D0: or          $a0, $t7, $t9
    ctx->r4 = ctx->r15 | ctx->r25;
    // 0x802681D4: andi        $t0, $a0, 0xFFFF
    ctx->r8 = ctx->r4 & 0XFFFF;
    // 0x802681D8: jal         0x80035D2C
    // 0x802681DC: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    func_80035D2C(rdram, ctx);
        goto after_1;
    // 0x802681DC: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    after_1:
    // 0x802681E0: sll         $t1, $v0, 2
    ctx->r9 = S32(ctx->r2 << 2);
    // 0x802681E4: lui         $t9, 0x8027
    ctx->r25 = S32(0X8027 << 16);
    // 0x802681E8: addu        $t9, $t9, $t1
    ctx->r25 = ADD32(ctx->r25, ctx->r9);
    // 0x802681EC: lw          $t9, -0x6364($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X6364);
    // 0x802681F0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802681F4: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x802681F8: jalr        $t9
    // 0x802681FC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x802681FC: nop

    after_2:
    // 0x80268200: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x80268204: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80268208: lh          $t2, 0x36($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X36);
    // 0x8026820C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80268210: bne         $t2, $at, L_80268220
    if (ctx->r10 != ctx->r1) {
        // 0x80268214: nop
    
            goto L_80268220;
    }
    // 0x80268214: nop

    // 0x80268218: b           L_80268220
    // 0x8026821C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_80268220;
    // 0x8026821C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_80268220:
    // 0x80268220: lh          $a0, 0x2C($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X2C);
    // 0x80268224: jal         0x8001D6EC
    // 0x80268228: nop

    func_8001D6EC(rdram, ctx);
        goto after_3;
    // 0x80268228: nop

    after_3:
    // 0x8026822C: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x80268230: jal         0x80035860
    // 0x80268234: sh          $v0, 0x2C($t3)
    MEM_H(0X2C, ctx->r11) = ctx->r2;
    func_80035860(rdram, ctx);
        goto after_4;
    // 0x80268234: sh          $v0, 0x2C($t3)
    MEM_H(0X2C, ctx->r11) = ctx->r2;
    after_4:
    // 0x80268238: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026823C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80268240: jr          $ra
    // 0x80268244: nop

    return;
    // 0x80268244: nop

;}
RECOMP_FUNC void ovl_80264800_func_80268234(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80268234: sh          $v0, 0x2C($t3)
    MEM_H(0X2C, ctx->r11) = ctx->r2;
    // 0x80268238: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026823C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80268240: jr          $ra
    // 0x80268244: nop

    return;
    // 0x80268244: nop

;}
RECOMP_FUNC void ovl_80264800_func_80268248(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80268248: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026824C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80268250: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80268254: lh          $t6, 0x24($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X24);
    // 0x80268258: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8026825C: bne         $t6, $zero, L_80268270
    if (ctx->r14 != 0) {
        // 0x80268260: sh          $zero, 0x2A($a0)
        MEM_H(0X2A, ctx->r4) = 0;
            goto L_80268270;
    }
    // 0x80268260: sh          $zero, 0x2A($a0)
    MEM_H(0X2A, ctx->r4) = 0;
    // 0x80268264: lh          $t7, 0x2C($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X2C);
    // 0x80268268: nop

    // 0x8026826C: sh          $t7, 0x36($a0)
    MEM_H(0X36, ctx->r4) = ctx->r15;
L_80268270:
    // 0x80268270: lhu         $t8, 0x36($a2)
    ctx->r24 = MEM_HU(ctx->r6, 0X36);
    // 0x80268274: lh          $a0, 0x2C($a2)
    ctx->r4 = MEM_H(ctx->r6, 0X2C);
    // 0x80268278: sltiu       $at, $t8, 0x5
    ctx->r1 = ctx->r24 < 0X5 ? 1 : 0;
    // 0x8026827C: beq         $at, $zero, L_802684CC
    if (ctx->r1 == 0) {
        // 0x80268280: sll         $t8, $t8, 2
        ctx->r24 = S32(ctx->r24 << 2);
            goto L_802684CC;
    }
    // 0x80268280: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80268284: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x80268288: addu        $at, $at, $t8
    gpr jr_addend_80268294 = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8026828C: lw          $t8, -0x5F24($at)
    ctx->r24 = ADD32(ctx->r1, -0X5F24);
    // 0x80268290: nop

    // 0x80268294: jr          $t8
    // 0x80268298: nop

    switch (jr_addend_80268294 >> 2) {
        case 0: goto L_8026829C; break;
        case 1: goto L_8026829C; break;
        case 2: goto L_802682EC; break;
        case 3: goto L_80268338; break;
        case 4: goto L_802683E8; break;
        default: switch_error(__func__, 0x80268294, 0x8026A0DC);
    }
    // 0x80268298: nop

L_8026829C:
    // 0x8026829C: lh          $t9, 0x24($a2)
    ctx->r25 = MEM_H(ctx->r6, 0X24);
    // 0x802682A0: sll         $t0, $a0, 1
    ctx->r8 = S32(ctx->r4 << 1);
    // 0x802682A4: bne         $t9, $zero, L_802684C4
    if (ctx->r25 != 0) {
        // 0x802682A8: lui         $t1, 0x8012
        ctx->r9 = S32(0X8012 << 16);
            goto L_802684C4;
    }
    // 0x802682A8: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x802682AC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x802682B0: lh          $t1, -0x3068($t1)
    ctx->r9 = MEM_H(ctx->r9, -0X3068);
    // 0x802682B4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x802682B8: bltz        $t1, L_802682DC
    if (SIGNED(ctx->r9) < 0) {
        // 0x802682BC: addiu       $t2, $zero, 0x11
        ctx->r10 = ADD32(0, 0X11);
            goto L_802682DC;
    }
    // 0x802682BC: addiu       $t2, $zero, 0x11
    ctx->r10 = ADD32(0, 0X11);
    // 0x802682C0: sh          $zero, -0x32A6($at)
    MEM_H(-0X32A6, ctx->r1) = 0;
    // 0x802682C4: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x802682C8: sh          $t2, 0x2A($a2)
    MEM_H(0X2A, ctx->r6) = ctx->r10;
    // 0x802682CC: jal         0x800296E0
    // 0x802682D0: addiu       $a0, $a0, -0x7A80
    ctx->r4 = ADD32(ctx->r4, -0X7A80);
    func_800296E0(rdram, ctx);
        goto after_0;
    // 0x802682D0: addiu       $a0, $a0, -0x7A80
    ctx->r4 = ADD32(ctx->r4, -0X7A80);
    after_0:
    // 0x802682D4: b           L_802684C4
    // 0x802682D8: nop

        goto L_802684C4;
    // 0x802682D8: nop

L_802682DC:
    // 0x802682DC: jal         0x800357AC
    // 0x802682E0: nop

    func_800357AC(rdram, ctx);
        goto after_1;
    // 0x802682E0: nop

    after_1:
    // 0x802682E4: b           L_802684D0
    // 0x802682E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802684D0;
    // 0x802682E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802682EC:
    // 0x802682EC: lh          $v0, 0x24($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X24);
    // 0x802682F0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802682F4: beq         $v0, $zero, L_80268310
    if (ctx->r2 == 0) {
        // 0x802682F8: addiu       $t3, $zero, 0x7
        ctx->r11 = ADD32(0, 0X7);
            goto L_80268310;
    }
    // 0x802682F8: addiu       $t3, $zero, 0x7
    ctx->r11 = ADD32(0, 0X7);
    // 0x802682FC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80268300: beq         $v0, $v1, L_8026831C
    if (ctx->r2 == ctx->r3) {
        // 0x80268304: nop
    
            goto L_8026831C;
    }
    // 0x80268304: nop

    // 0x80268308: b           L_802684C4
    // 0x8026830C: nop

        goto L_802684C4;
    // 0x8026830C: nop

L_80268310:
    // 0x80268310: sh          $t3, 0x2A($a2)
    MEM_H(0X2A, ctx->r6) = ctx->r11;
    // 0x80268314: b           L_802684C4
    // 0x80268318: sh          $v1, 0x24($a2)
    MEM_H(0X24, ctx->r6) = ctx->r3;
        goto L_802684C4;
    // 0x80268318: sh          $v1, 0x24($a2)
    MEM_H(0X24, ctx->r6) = ctx->r3;
L_8026831C:
    // 0x8026831C: lh          $a0, 0x28($a2)
    ctx->r4 = MEM_H(ctx->r6, 0X28);
    // 0x80268320: jal         0x80269334
    // 0x80268324: nop

    ovl_80264800_func_80269334(rdram, ctx);
        goto after_2;
    // 0x80268324: nop

    after_2:
    // 0x80268328: jal         0x80037AB8
    // 0x8026832C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80037AB8(rdram, ctx);
        goto after_3;
    // 0x8026832C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_3:
    // 0x80268330: b           L_802684C4
    // 0x80268334: nop

        goto L_802684C4;
    // 0x80268334: nop

L_80268338:
    // 0x80268338: lh          $v0, 0x24($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X24);
    // 0x8026833C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80268340: beq         $v0, $zero, L_80268358
    if (ctx->r2 == 0) {
        // 0x80268344: nop
    
            goto L_80268358;
    }
    // 0x80268344: nop

    // 0x80268348: beq         $v0, $v1, L_802683A0
    if (ctx->r2 == ctx->r3) {
        // 0x8026834C: nop
    
            goto L_802683A0;
    }
    // 0x8026834C: nop

    // 0x80268350: b           L_802684C4
    // 0x80268354: nop

        goto L_802684C4;
    // 0x80268354: nop

L_80268358:
    // 0x80268358: lh          $t4, 0x38($a2)
    ctx->r12 = MEM_H(ctx->r6, 0X38);
    // 0x8026835C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80268360: bgtz        $t4, L_80268394
    if (SIGNED(ctx->r12) > 0) {
        // 0x80268364: addiu       $t6, $zero, 0x4
        ctx->r14 = ADD32(0, 0X4);
            goto L_80268394;
    }
    // 0x80268364: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x80268368: jal         0x800357AC
    // 0x8026836C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_800357AC(rdram, ctx);
        goto after_4;
    // 0x8026836C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_4:
    // 0x80268370: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x80268374: addiu       $t5, $zero, 0x6
    ctx->r13 = ADD32(0, 0X6);
    // 0x80268378: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8026837C: addiu       $a0, $a0, -0x7B24
    ctx->r4 = ADD32(ctx->r4, -0X7B24);
    // 0x80268380: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x80268384: jal         0x8002989C
    // 0x80268388: sh          $t5, 0x2A($a2)
    MEM_H(0X2A, ctx->r6) = ctx->r13;
    func_8002989C(rdram, ctx);
        goto after_5;
    // 0x80268388: sh          $t5, 0x2A($a2)
    MEM_H(0X2A, ctx->r6) = ctx->r13;
    after_5:
    // 0x8026838C: b           L_802684D0
    // 0x80268390: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802684D0;
    // 0x80268390: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80268394:
    // 0x80268394: sh          $t6, 0x2A($a2)
    MEM_H(0X2A, ctx->r6) = ctx->r14;
    // 0x80268398: b           L_802684C4
    // 0x8026839C: sh          $v1, 0x24($a2)
    MEM_H(0X24, ctx->r6) = ctx->r3;
        goto L_802684C4;
    // 0x8026839C: sh          $v1, 0x24($a2)
    MEM_H(0X24, ctx->r6) = ctx->r3;
L_802683A0:
    // 0x802683A0: lh          $t7, 0x50($a2)
    ctx->r15 = MEM_H(ctx->r6, 0X50);
    // 0x802683A4: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x802683A8: bne         $t7, $zero, L_802683D4
    if (ctx->r15 != 0) {
        // 0x802683AC: addiu       $a0, $a0, -0x7B24
        ctx->r4 = ADD32(ctx->r4, -0X7B24);
            goto L_802683D4;
    }
    // 0x802683AC: addiu       $a0, $a0, -0x7B24
    ctx->r4 = ADD32(ctx->r4, -0X7B24);
    // 0x802683B0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x802683B4: sh          $zero, -0x32A6($at)
    MEM_H(-0X32A6, ctx->r1) = 0;
    // 0x802683B8: addiu       $t8, $zero, 0x14
    ctx->r24 = ADD32(0, 0X14);
    // 0x802683BC: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x802683C0: sh          $t8, 0x2A($a2)
    MEM_H(0X2A, ctx->r6) = ctx->r24;
    // 0x802683C4: jal         0x800296E0
    // 0x802683C8: addiu       $a0, $a0, -0x7904
    ctx->r4 = ADD32(ctx->r4, -0X7904);
    func_800296E0(rdram, ctx);
        goto after_6;
    // 0x802683C8: addiu       $a0, $a0, -0x7904
    ctx->r4 = ADD32(ctx->r4, -0X7904);
    after_6:
    // 0x802683CC: b           L_802684C4
    // 0x802683D0: nop

        goto L_802684C4;
    // 0x802683D0: nop

L_802683D4:
    // 0x802683D4: sh          $zero, 0x24($a2)
    MEM_H(0X24, ctx->r6) = 0;
    // 0x802683D8: jal         0x8002989C
    // 0x802683DC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_8002989C(rdram, ctx);
        goto after_7;
    // 0x802683DC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_7:
    // 0x802683E0: b           L_802684C4
    // 0x802683E4: nop

        goto L_802684C4;
    // 0x802683E4: nop

L_802683E8:
    // 0x802683E8: lh          $v0, 0x24($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X24);
    // 0x802683EC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802683F0: beq         $v0, $zero, L_80268414
    if (ctx->r2 == 0) {
        // 0x802683F4: nop
    
            goto L_80268414;
    }
    // 0x802683F4: nop

    // 0x802683F8: beq         $v0, $v1, L_80268450
    if (ctx->r2 == ctx->r3) {
        // 0x802683FC: sll         $t1, $a0, 1
        ctx->r9 = S32(ctx->r4 << 1);
            goto L_80268450;
    }
    // 0x802683FC: sll         $t1, $a0, 1
    ctx->r9 = S32(ctx->r4 << 1);
    // 0x80268400: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80268404: beq         $v0, $a0, L_80268490
    if (ctx->r2 == ctx->r4) {
        // 0x80268408: nop
    
            goto L_80268490;
    }
    // 0x80268408: nop

    // 0x8026840C: b           L_802684D0
    // 0x80268410: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802684D0;
    // 0x80268410: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80268414:
    // 0x80268414: lh          $t9, 0x30($a2)
    ctx->r25 = MEM_H(ctx->r6, 0X30);
    // 0x80268418: addiu       $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
    // 0x8026841C: bgtz        $t9, L_80268444
    if (SIGNED(ctx->r25) > 0) {
        // 0x80268420: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_80268444;
    }
    // 0x80268420: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80268424: jal         0x800357AC
    // 0x80268428: sh          $t0, 0x2A($a2)
    MEM_H(0X2A, ctx->r6) = ctx->r8;
    func_800357AC(rdram, ctx);
        goto after_8;
    // 0x80268428: sh          $t0, 0x2A($a2)
    MEM_H(0X2A, ctx->r6) = ctx->r8;
    after_8:
    // 0x8026842C: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80268430: addiu       $a0, $a0, -0x7B24
    ctx->r4 = ADD32(ctx->r4, -0X7B24);
    // 0x80268434: jal         0x8002989C
    // 0x80268438: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    func_8002989C(rdram, ctx);
        goto after_9;
    // 0x80268438: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    after_9:
    // 0x8026843C: b           L_802684D0
    // 0x80268440: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802684D0;
    // 0x80268440: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80268444:
    // 0x80268444: sh          $v1, 0x24($a2)
    MEM_H(0X24, ctx->r6) = ctx->r3;
    // 0x80268448: b           L_802684C4
    // 0x8026844C: sh          $v1, 0x2A($a2)
    MEM_H(0X2A, ctx->r6) = ctx->r3;
        goto L_802684C4;
    // 0x8026844C: sh          $v1, 0x2A($a2)
    MEM_H(0X2A, ctx->r6) = ctx->r3;
L_80268450:
    // 0x80268450: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x80268454: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80268458: lh          $t2, -0x3068($t2)
    ctx->r10 = MEM_H(ctx->r10, -0X3068);
    // 0x8026845C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80268460: bgez        $t2, L_80268478
    if (SIGNED(ctx->r10) >= 0) {
        // 0x80268464: nop
    
            goto L_80268478;
    }
    // 0x80268464: nop

    // 0x80268468: jal         0x800357AC
    // 0x8026846C: sh          $v1, 0x2A($a2)
    MEM_H(0X2A, ctx->r6) = ctx->r3;
    func_800357AC(rdram, ctx);
        goto after_10;
    // 0x8026846C: sh          $v1, 0x2A($a2)
    MEM_H(0X2A, ctx->r6) = ctx->r3;
    after_10:
    // 0x80268470: b           L_802684D0
    // 0x80268474: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802684D0;
    // 0x80268474: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80268478:
    // 0x80268478: sb          $v1, 0x54($a2)
    MEM_B(0X54, ctx->r6) = ctx->r3;
    // 0x8026847C: lb          $t3, 0x54($a2)
    ctx->r11 = MEM_B(ctx->r6, 0X54);
    // 0x80268480: sh          $a0, 0x24($a2)
    MEM_H(0X24, ctx->r6) = ctx->r4;
    // 0x80268484: sh          $a0, 0x2A($a2)
    MEM_H(0X2A, ctx->r6) = ctx->r4;
    // 0x80268488: b           L_802684C4
    // 0x8026848C: sh          $t3, 0x50($a2)
    MEM_H(0X50, ctx->r6) = ctx->r11;
        goto L_802684C4;
    // 0x8026848C: sh          $t3, 0x50($a2)
    MEM_H(0X50, ctx->r6) = ctx->r11;
L_80268490:
    // 0x80268490: lh          $t4, 0x50($a2)
    ctx->r12 = MEM_H(ctx->r6, 0X50);
    // 0x80268494: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80268498: bne         $t4, $zero, L_802684BC
    if (ctx->r12 != 0) {
        // 0x8026849C: addiu       $t5, $zero, 0x13
        ctx->r13 = ADD32(0, 0X13);
            goto L_802684BC;
    }
    // 0x8026849C: addiu       $t5, $zero, 0x13
    ctx->r13 = ADD32(0, 0X13);
    // 0x802684A0: sh          $zero, -0x32A6($at)
    MEM_H(-0X32A6, ctx->r1) = 0;
    // 0x802684A4: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x802684A8: sh          $t5, 0x2A($a2)
    MEM_H(0X2A, ctx->r6) = ctx->r13;
    // 0x802684AC: jal         0x800296E0
    // 0x802684B0: addiu       $a0, $a0, -0x7834
    ctx->r4 = ADD32(ctx->r4, -0X7834);
    func_800296E0(rdram, ctx);
        goto after_11;
    // 0x802684B0: addiu       $a0, $a0, -0x7834
    ctx->r4 = ADD32(ctx->r4, -0X7834);
    after_11:
    // 0x802684B4: b           L_802684C4
    // 0x802684B8: nop

        goto L_802684C4;
    // 0x802684B8: nop

L_802684BC:
    // 0x802684BC: sh          $v1, 0x24($a2)
    MEM_H(0X24, ctx->r6) = ctx->r3;
    // 0x802684C0: sh          $v1, 0x2A($a2)
    MEM_H(0X2A, ctx->r6) = ctx->r3;
L_802684C4:
    // 0x802684C4: jal         0x80035770
    // 0x802684C8: nop

    func_80035770(rdram, ctx);
        goto after_12;
    // 0x802684C8: nop

    after_12:
L_802684CC:
    // 0x802684CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802684D0:
    // 0x802684D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802684D4: jr          $ra
    // 0x802684D8: nop

    return;
    // 0x802684D8: nop

;}
RECOMP_FUNC void ovl_80264800_func_80268398(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80268398: b           L_802684C4
    // 0x8026839C: sh          $v1, 0x24($a2)
    MEM_H(0X24, ctx->r6) = ctx->r3;
        goto L_802684C4;
    // 0x8026839C: sh          $v1, 0x24($a2)
    MEM_H(0X24, ctx->r6) = ctx->r3;
    // 0x802683A0: lh          $t7, 0x50($a2)
    ctx->r15 = MEM_H(ctx->r6, 0X50);
    // 0x802683A4: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x802683A8: bne         $t7, $zero, L_802683D4
    if (ctx->r15 != 0) {
        // 0x802683AC: addiu       $a0, $a0, -0x7B24
        ctx->r4 = ADD32(ctx->r4, -0X7B24);
            goto L_802683D4;
    }
    // 0x802683AC: addiu       $a0, $a0, -0x7B24
    ctx->r4 = ADD32(ctx->r4, -0X7B24);
    // 0x802683B0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x802683B4: sh          $zero, -0x32A6($at)
    MEM_H(-0X32A6, ctx->r1) = 0;
    // 0x802683B8: addiu       $t8, $zero, 0x14
    ctx->r24 = ADD32(0, 0X14);
    // 0x802683BC: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x802683C0: sh          $t8, 0x2A($a2)
    MEM_H(0X2A, ctx->r6) = ctx->r24;
    // 0x802683C4: jal         0x800296E0
    // 0x802683C8: addiu       $a0, $a0, -0x7904
    ctx->r4 = ADD32(ctx->r4, -0X7904);
    func_800296E0(rdram, ctx);
        goto after_0;
    // 0x802683C8: addiu       $a0, $a0, -0x7904
    ctx->r4 = ADD32(ctx->r4, -0X7904);
    after_0:
    // 0x802683CC: b           L_802684C4
    // 0x802683D0: nop

        goto L_802684C4;
    // 0x802683D0: nop

L_802683D4:
    // 0x802683D4: sh          $zero, 0x24($a2)
    MEM_H(0X24, ctx->r6) = 0;
    // 0x802683D8: jal         0x8002989C
    // 0x802683DC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_8002989C(rdram, ctx);
        goto after_1;
    // 0x802683DC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_1:
    // 0x802683E0: b           L_802684C4
    // 0x802683E4: nop

        goto L_802684C4;
    // 0x802683E4: nop

    // 0x802683E8: lh          $v0, 0x24($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X24);
    // 0x802683EC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802683F0: beq         $v0, $zero, L_80268414
    if (ctx->r2 == 0) {
        // 0x802683F4: nop
    
            goto L_80268414;
    }
    // 0x802683F4: nop

    // 0x802683F8: beq         $v0, $v1, L_80268450
    if (ctx->r2 == ctx->r3) {
        // 0x802683FC: sll         $t1, $a0, 1
        ctx->r9 = S32(ctx->r4 << 1);
            goto L_80268450;
    }
    // 0x802683FC: sll         $t1, $a0, 1
    ctx->r9 = S32(ctx->r4 << 1);
    // 0x80268400: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80268404: beq         $v0, $a0, L_80268490
    if (ctx->r2 == ctx->r4) {
        // 0x80268408: nop
    
            goto L_80268490;
    }
    // 0x80268408: nop

    // 0x8026840C: b           L_802684D0
    // 0x80268410: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802684D0;
    // 0x80268410: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80268414:
    // 0x80268414: lh          $t9, 0x30($a2)
    ctx->r25 = MEM_H(ctx->r6, 0X30);
    // 0x80268418: addiu       $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
    // 0x8026841C: bgtz        $t9, L_80268444
    if (SIGNED(ctx->r25) > 0) {
        // 0x80268420: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_80268444;
    }
    // 0x80268420: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80268424: jal         0x800357AC
    // 0x80268428: sh          $t0, 0x2A($a2)
    MEM_H(0X2A, ctx->r6) = ctx->r8;
    func_800357AC(rdram, ctx);
        goto after_2;
    // 0x80268428: sh          $t0, 0x2A($a2)
    MEM_H(0X2A, ctx->r6) = ctx->r8;
    after_2:
    // 0x8026842C: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80268430: addiu       $a0, $a0, -0x7B24
    ctx->r4 = ADD32(ctx->r4, -0X7B24);
    // 0x80268434: jal         0x8002989C
    // 0x80268438: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    func_8002989C(rdram, ctx);
        goto after_3;
    // 0x80268438: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    after_3:
    // 0x8026843C: b           L_802684D0
    // 0x80268440: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802684D0;
    // 0x80268440: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80268444:
    // 0x80268444: sh          $v1, 0x24($a2)
    MEM_H(0X24, ctx->r6) = ctx->r3;
    // 0x80268448: b           L_802684C4
    // 0x8026844C: sh          $v1, 0x2A($a2)
    MEM_H(0X2A, ctx->r6) = ctx->r3;
        goto L_802684C4;
    // 0x8026844C: sh          $v1, 0x2A($a2)
    MEM_H(0X2A, ctx->r6) = ctx->r3;
L_80268450:
    // 0x80268450: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x80268454: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80268458: lh          $t2, -0x3068($t2)
    ctx->r10 = MEM_H(ctx->r10, -0X3068);
    // 0x8026845C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80268460: bgez        $t2, L_80268478
    if (SIGNED(ctx->r10) >= 0) {
        // 0x80268464: nop
    
            goto L_80268478;
    }
    // 0x80268464: nop

    // 0x80268468: jal         0x800357AC
    // 0x8026846C: sh          $v1, 0x2A($a2)
    MEM_H(0X2A, ctx->r6) = ctx->r3;
    func_800357AC(rdram, ctx);
        goto after_4;
    // 0x8026846C: sh          $v1, 0x2A($a2)
    MEM_H(0X2A, ctx->r6) = ctx->r3;
    after_4:
    // 0x80268470: b           L_802684D0
    // 0x80268474: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802684D0;
    // 0x80268474: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80268478:
    // 0x80268478: sb          $v1, 0x54($a2)
    MEM_B(0X54, ctx->r6) = ctx->r3;
    // 0x8026847C: lb          $t3, 0x54($a2)
    ctx->r11 = MEM_B(ctx->r6, 0X54);
    // 0x80268480: sh          $a0, 0x24($a2)
    MEM_H(0X24, ctx->r6) = ctx->r4;
    // 0x80268484: sh          $a0, 0x2A($a2)
    MEM_H(0X2A, ctx->r6) = ctx->r4;
    // 0x80268488: b           L_802684C4
    // 0x8026848C: sh          $t3, 0x50($a2)
    MEM_H(0X50, ctx->r6) = ctx->r11;
        goto L_802684C4;
    // 0x8026848C: sh          $t3, 0x50($a2)
    MEM_H(0X50, ctx->r6) = ctx->r11;
L_80268490:
    // 0x80268490: lh          $t4, 0x50($a2)
    ctx->r12 = MEM_H(ctx->r6, 0X50);
    // 0x80268494: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80268498: bne         $t4, $zero, L_802684BC
    if (ctx->r12 != 0) {
        // 0x8026849C: addiu       $t5, $zero, 0x13
        ctx->r13 = ADD32(0, 0X13);
            goto L_802684BC;
    }
    // 0x8026849C: addiu       $t5, $zero, 0x13
    ctx->r13 = ADD32(0, 0X13);
    // 0x802684A0: sh          $zero, -0x32A6($at)
    MEM_H(-0X32A6, ctx->r1) = 0;
    // 0x802684A4: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x802684A8: sh          $t5, 0x2A($a2)
    MEM_H(0X2A, ctx->r6) = ctx->r13;
    // 0x802684AC: jal         0x800296E0
    // 0x802684B0: addiu       $a0, $a0, -0x7834
    ctx->r4 = ADD32(ctx->r4, -0X7834);
    func_800296E0(rdram, ctx);
        goto after_5;
    // 0x802684B0: addiu       $a0, $a0, -0x7834
    ctx->r4 = ADD32(ctx->r4, -0X7834);
    after_5:
    // 0x802684B4: b           L_802684C4
    // 0x802684B8: nop

        goto L_802684C4;
    // 0x802684B8: nop

L_802684BC:
    // 0x802684BC: sh          $v1, 0x24($a2)
    MEM_H(0X24, ctx->r6) = ctx->r3;
    // 0x802684C0: sh          $v1, 0x2A($a2)
    MEM_H(0X2A, ctx->r6) = ctx->r3;
L_802684C4:
    // 0x802684C4: jal         0x80035770
    // 0x802684C8: nop

    func_80035770(rdram, ctx);
        goto after_6;
    // 0x802684C8: nop

    after_6:
    // 0x802684CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802684D0:
    // 0x802684D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802684D4: jr          $ra
    // 0x802684D8: nop

    return;
    // 0x802684D8: nop

;}
RECOMP_FUNC void ovl_80264800_func_802684AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802684AC: jal         0x800296E0
    // 0x802684B0: addiu       $a0, $a0, -0x7834
    ctx->r4 = ADD32(ctx->r4, -0X7834);
    func_800296E0(rdram, ctx);
        goto after_0;
    // 0x802684B0: addiu       $a0, $a0, -0x7834
    ctx->r4 = ADD32(ctx->r4, -0X7834);
    after_0:
    // 0x802684B4: b           L_802684C4
    // 0x802684B8: nop

        goto L_802684C4;
    // 0x802684B8: nop

    // 0x802684BC: sh          $v1, 0x24($a2)
    MEM_H(0X24, ctx->r6) = ctx->r3;
    // 0x802684C0: sh          $v1, 0x2A($a2)
    MEM_H(0X2A, ctx->r6) = ctx->r3;
L_802684C4:
    // 0x802684C4: jal         0x80035770
    // 0x802684C8: nop

    func_80035770(rdram, ctx);
        goto after_1;
    // 0x802684C8: nop

    after_1:
    // 0x802684CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802684D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802684D4: jr          $ra
    // 0x802684D8: nop

    return;
    // 0x802684D8: nop

;}
RECOMP_FUNC void ovl_80264800_func_802684DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802684DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802684E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802684E4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802684E8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802684EC: sh          $zero, 0x2A($a0)
    MEM_H(0X2A, ctx->r4) = 0;
    // 0x802684F0: lh          $v0, 0x2A($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X2A);
    // 0x802684F4: nop

    // 0x802684F8: sh          $v0, 0x24($a0)
    MEM_H(0X24, ctx->r4) = ctx->r2;
    // 0x802684FC: sh          $v0, 0x36($a0)
    MEM_H(0X36, ctx->r4) = ctx->r2;
    // 0x80268500: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80268504: jal         0x800296E0
    // 0x80268508: addiu       $a0, $a0, -0x7E5C
    ctx->r4 = ADD32(ctx->r4, -0X7E5C);
    func_800296E0(rdram, ctx);
        goto after_0;
    // 0x80268508: addiu       $a0, $a0, -0x7E5C
    ctx->r4 = ADD32(ctx->r4, -0X7E5C);
    after_0:
    // 0x8026850C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80268510: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80268514: jr          $ra
    // 0x80268518: nop

    return;
    // 0x80268518: nop

;}
RECOMP_FUNC void ovl_80264800_func_8026851C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026851C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80268520: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80268524: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80268528: lh          $v0, 0x28($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X28);
    // 0x8026852C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80268530: bne         $v0, $zero, L_80268558
    if (ctx->r2 != 0) {
        // 0x80268534: nop
    
            goto L_80268558;
    }
    // 0x80268534: nop

    // 0x80268538: lb          $t6, -0x307C($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X307C);
    // 0x8026853C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80268540: bne         $t6, $at, L_80268558
    if (ctx->r14 != ctx->r1) {
        // 0x80268544: nop
    
            goto L_80268558;
    }
    // 0x80268544: nop

    // 0x80268548: jal         0x80015BC0
    // 0x8026854C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    func_80015BC0(rdram, ctx);
        goto after_0;
    // 0x8026854C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_0:
    // 0x80268550: b           L_80268568
    // 0x80268554: nop

        goto L_80268568;
    // 0x80268554: nop

L_80268558:
    // 0x80268558: bne         $v0, $zero, L_80268568
    if (ctx->r2 != 0) {
        // 0x8026855C: nop
    
            goto L_80268568;
    }
    // 0x8026855C: nop

    // 0x80268560: jal         0x80015BC0
    // 0x80268564: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_80015BC0(rdram, ctx);
        goto after_1;
    // 0x80268564: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_1:
L_80268568:
    // 0x80268568: jal         0x80037AB8
    // 0x8026856C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80037AB8(rdram, ctx);
        goto after_2;
    // 0x8026856C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x80268570: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80268574: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80268578: jr          $ra
    // 0x8026857C: nop

    return;
    // 0x8026857C: nop

;}
RECOMP_FUNC void ovl_80264800_func_80268580(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80268580: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80268584: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80268588: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8026858C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80268590: lh          $a2, 0x2C($a0)
    ctx->r6 = MEM_H(ctx->r4, 0X2C);
    // 0x80268594: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80268598: lh          $a1, 0x32($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X32);
    // 0x8026859C: lh          $a0, 0x28($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X28);
    // 0x802685A0: jal         0x80269040
    // 0x802685A4: sh          $a2, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r6;
    ovl_80264800_func_80269040(rdram, ctx);
        goto after_0;
    // 0x802685A4: sh          $a2, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r6;
    after_0:
    // 0x802685A8: bne         $v0, $zero, L_80268680
    if (ctx->r2 != 0) {
        // 0x802685AC: lui         $v1, 0x8012
        ctx->r3 = S32(0X8012 << 16);
            goto L_80268680;
    }
    // 0x802685AC: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x802685B0: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x802685B4: addiu       $v1, $v1, -0x32B0
    ctx->r3 = ADD32(ctx->r3, -0X32B0);
    // 0x802685B8: lbu         $t6, 0xC($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0XC);
    // 0x802685BC: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x802685C0: bne         $t6, $at, L_802685D4
    if (ctx->r14 != ctx->r1) {
        // 0x802685C4: lui         $t7, 0x8010
        ctx->r15 = S32(0X8010 << 16);
            goto L_802685D4;
    }
    // 0x802685C4: lui         $t7, 0x8010
    ctx->r15 = S32(0X8010 << 16);
    // 0x802685C8: lhu         $t7, 0x5242($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0X5242);
    // 0x802685CC: nop

    // 0x802685D0: bne         $t7, $zero, L_80268604
    if (ctx->r15 != 0) {
        // 0x802685D4: lui         $a0, 0x8011
        ctx->r4 = S32(0X8011 << 16);
            goto L_80268604;
    }
L_802685D4:
    // 0x802685D4: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x802685D8: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x802685DC: addiu       $a1, $a1, -0x6FB0
    ctx->r5 = ADD32(ctx->r5, -0X6FB0);
    // 0x802685E0: addiu       $a0, $a0, 0x5350
    ctx->r4 = ADD32(ctx->r4, 0X5350);
    // 0x802685E4: jal         0x8001DA44
    // 0x802685E8: addiu       $a2, $zero, 0x3CF4
    ctx->r6 = ADD32(0, 0X3CF4);
    func_8001DA44(rdram, ctx);
        goto after_1;
    // 0x802685E8: addiu       $a2, $zero, 0x3CF4
    ctx->r6 = ADD32(0, 0X3CF4);
    after_1:
    // 0x802685EC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x802685F0: lh          $t8, 0x32($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X32);
    // 0x802685F4: lh          $t9, 0x2E($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X2E);
    // 0x802685F8: addiu       $v0, $v0, -0x3070
    ctx->r2 = ADD32(ctx->r2, -0X3070);
    // 0x802685FC: sh          $t8, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r24;
    // 0x80268600: sh          $t9, 0x6($v0)
    MEM_H(0X6, ctx->r2) = ctx->r25;
L_80268604:
    // 0x80268604: lh          $t0, 0x28($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X28);
    // 0x80268608: nop

    // 0x8026860C: bne         $t0, $zero, L_80268638
    if (ctx->r8 != 0) {
        // 0x80268610: addiu       $t1, $zero, 0x9
        ctx->r9 = ADD32(0, 0X9);
            goto L_80268638;
    }
    // 0x80268610: addiu       $t1, $zero, 0x9
    ctx->r9 = ADD32(0, 0X9);
    // 0x80268614: jal         0x8003294C
    // 0x80268618: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8003294C(rdram, ctx);
        goto after_2;
    // 0x80268618: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x8026861C: jal         0x80032310
    // 0x80268620: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80032310(rdram, ctx);
        goto after_3;
    // 0x80268620: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x80268624: jal         0x80032EC0
    // 0x80268628: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80032EC0(rdram, ctx);
        goto after_4;
    // 0x80268628: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_4:
    // 0x8026862C: jal         0x8003331C
    // 0x80268630: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8003331C(rdram, ctx);
        goto after_5;
    // 0x80268630: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_5:
    // 0x80268634: addiu       $t1, $zero, 0x9
    ctx->r9 = ADD32(0, 0X9);
L_80268638:
    // 0x80268638: sh          $t1, 0x2A($s0)
    MEM_H(0X2A, ctx->r16) = ctx->r9;
    // 0x8026863C: lh          $a3, 0x2E($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X2E);
    // 0x80268640: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x80268644: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80268648: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8026864C: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x80268650: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80268654: addiu       $a0, $a0, -0x3128
    ctx->r4 = ADD32(ctx->r4, -0X3128);
    // 0x80268658: addiu       $a1, $zero, 0xC0
    ctx->r5 = ADD32(0, 0XC0);
    // 0x8026865C: addiu       $a2, $zero, 0x96
    ctx->r6 = ADD32(0, 0X96);
    // 0x80268660: jal         0x8002F6EC
    // 0x80268664: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    func_8002F6EC(rdram, ctx);
        goto after_6;
    // 0x80268664: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    after_6:
    // 0x80268668: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8026866C: addiu       $a0, $a0, -0x7AE4
    ctx->r4 = ADD32(ctx->r4, -0X7AE4);
    // 0x80268670: jal         0x8002989C
    // 0x80268674: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    func_8002989C(rdram, ctx);
        goto after_7;
    // 0x80268674: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    after_7:
    // 0x80268678: b           L_802686F0
    // 0x8026867C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_802686F0;
    // 0x8026867C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80268680:
    // 0x80268680: addiu       $v1, $v1, -0x32B0
    ctx->r3 = ADD32(ctx->r3, -0X32B0);
    // 0x80268684: lh          $t4, 0xA($v1)
    ctx->r12 = MEM_H(ctx->r3, 0XA);
    // 0x80268688: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8026868C: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x80268690: sh          $t5, 0xA($v1)
    MEM_H(0XA, ctx->r3) = ctx->r13;
    // 0x80268694: lh          $t6, 0xA($v1)
    ctx->r14 = MEM_H(ctx->r3, 0XA);
    // 0x80268698: addiu       $a0, $a0, -0x7A80
    ctx->r4 = ADD32(ctx->r4, -0X7A80);
    // 0x8026869C: slti        $at, $t6, 0x6
    ctx->r1 = SIGNED(ctx->r14) < 0X6 ? 1 : 0;
    // 0x802686A0: beq         $at, $zero, L_802686BC
    if (ctx->r1 == 0) {
        // 0x802686A4: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_802686BC;
    }
    // 0x802686A4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802686A8: jal         0x8002989C
    // 0x802686AC: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    func_8002989C(rdram, ctx);
        goto after_8;
    // 0x802686AC: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    after_8:
    // 0x802686B0: b           L_802686F0
    // 0x802686B4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_802686F0;
    // 0x802686B4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802686B8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
L_802686BC:
    // 0x802686BC: bne         $v0, $at, L_802686D0
    if (ctx->r2 != ctx->r1) {
        // 0x802686C0: addiu       $t8, $zero, 0x10
        ctx->r24 = ADD32(0, 0X10);
            goto L_802686D0;
    }
    // 0x802686C0: addiu       $t8, $zero, 0x10
    ctx->r24 = ADD32(0, 0X10);
    // 0x802686C4: addiu       $t7, $zero, 0xE
    ctx->r15 = ADD32(0, 0XE);
    // 0x802686C8: b           L_802686D4
    // 0x802686CC: sh          $t7, 0x2A($s0)
    MEM_H(0X2A, ctx->r16) = ctx->r15;
        goto L_802686D4;
    // 0x802686CC: sh          $t7, 0x2A($s0)
    MEM_H(0X2A, ctx->r16) = ctx->r15;
L_802686D0:
    // 0x802686D0: sh          $t8, 0x2A($s0)
    MEM_H(0X2A, ctx->r16) = ctx->r24;
L_802686D4:
    // 0x802686D4: jal         0x800357AC
    // 0x802686D8: nop

    func_800357AC(rdram, ctx);
        goto after_9;
    // 0x802686D8: nop

    after_9:
    // 0x802686DC: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x802686E0: addiu       $a0, $a0, -0x7B24
    ctx->r4 = ADD32(ctx->r4, -0X7B24);
    // 0x802686E4: jal         0x8002989C
    // 0x802686E8: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    func_8002989C(rdram, ctx);
        goto after_10;
    // 0x802686E8: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    after_10:
    // 0x802686EC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802686F0:
    // 0x802686F0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802686F4: jr          $ra
    // 0x802686F8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x802686F8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_80264800_func_802686FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802686FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80268700: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80268704: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80268708: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8026870C: lh          $a0, 0x32($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X32);
    // 0x80268710: jal         0x80269254
    // 0x80268714: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    ovl_80264800_func_80269254(rdram, ctx);
        goto after_0;
    // 0x80268714: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x80268718: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x8026871C: bne         $v0, $zero, L_80268744
    if (ctx->r2 != 0) {
        // 0x80268720: lui         $v1, 0x8012
        ctx->r3 = S32(0X8012 << 16);
            goto L_80268744;
    }
    // 0x80268720: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80268724: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x80268728: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8026872C: sh          $t6, 0x2A($a2)
    MEM_H(0X2A, ctx->r6) = ctx->r14;
    // 0x80268730: addiu       $a0, $a0, -0x7B24
    ctx->r4 = ADD32(ctx->r4, -0X7B24);
    // 0x80268734: jal         0x8002989C
    // 0x80268738: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    func_8002989C(rdram, ctx);
        goto after_1;
    // 0x80268738: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    after_1:
    // 0x8026873C: b           L_802687C0
    // 0x80268740: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802687C0;
    // 0x80268740: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80268744:
    // 0x80268744: addiu       $v1, $v1, -0x32B0
    ctx->r3 = ADD32(ctx->r3, -0X32B0);
    // 0x80268748: lh          $t7, 0xA($v1)
    ctx->r15 = MEM_H(ctx->r3, 0XA);
    // 0x8026874C: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80268750: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80268754: sh          $t8, 0xA($v1)
    MEM_H(0XA, ctx->r3) = ctx->r24;
    // 0x80268758: lh          $t9, 0xA($v1)
    ctx->r25 = MEM_H(ctx->r3, 0XA);
    // 0x8026875C: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x80268760: slti        $at, $t9, 0x6
    ctx->r1 = SIGNED(ctx->r25) < 0X6 ? 1 : 0;
    // 0x80268764: beq         $at, $zero, L_80268780
    if (ctx->r1 == 0) {
        // 0x80268768: addiu       $a0, $a0, -0x7B24
        ctx->r4 = ADD32(ctx->r4, -0X7B24);
            goto L_80268780;
    }
    // 0x80268768: addiu       $a0, $a0, -0x7B24
    ctx->r4 = ADD32(ctx->r4, -0X7B24);
    // 0x8026876C: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80268770: jal         0x8002989C
    // 0x80268774: addiu       $a0, $a0, -0x7904
    ctx->r4 = ADD32(ctx->r4, -0X7904);
    func_8002989C(rdram, ctx);
        goto after_2;
    // 0x80268774: addiu       $a0, $a0, -0x7904
    ctx->r4 = ADD32(ctx->r4, -0X7904);
    after_2:
    // 0x80268778: b           L_802687C0
    // 0x8026877C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802687C0;
    // 0x8026877C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80268780:
    // 0x80268780: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80268784: beq         $v0, $at, L_802687A0
    if (ctx->r2 == ctx->r1) {
        // 0x80268788: addiu       $t0, $zero, 0xE
        ctx->r8 = ADD32(0, 0XE);
            goto L_802687A0;
    }
    // 0x80268788: addiu       $t0, $zero, 0xE
    ctx->r8 = ADD32(0, 0XE);
    // 0x8026878C: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x80268790: beq         $v0, $at, L_802687A8
    if (ctx->r2 == ctx->r1) {
        // 0x80268794: addiu       $t1, $zero, 0xB
        ctx->r9 = ADD32(0, 0XB);
            goto L_802687A8;
    }
    // 0x80268794: addiu       $t1, $zero, 0xB
    ctx->r9 = ADD32(0, 0XB);
    // 0x80268798: b           L_802687B0
    // 0x8026879C: addiu       $t2, $zero, 0xF
    ctx->r10 = ADD32(0, 0XF);
        goto L_802687B0;
    // 0x8026879C: addiu       $t2, $zero, 0xF
    ctx->r10 = ADD32(0, 0XF);
L_802687A0:
    // 0x802687A0: b           L_802687B4
    // 0x802687A4: sh          $t0, 0x2A($a2)
    MEM_H(0X2A, ctx->r6) = ctx->r8;
        goto L_802687B4;
    // 0x802687A4: sh          $t0, 0x2A($a2)
    MEM_H(0X2A, ctx->r6) = ctx->r8;
L_802687A8:
    // 0x802687A8: b           L_802687B4
    // 0x802687AC: sh          $t1, 0x2A($a2)
    MEM_H(0X2A, ctx->r6) = ctx->r9;
        goto L_802687B4;
    // 0x802687AC: sh          $t1, 0x2A($a2)
    MEM_H(0X2A, ctx->r6) = ctx->r9;
L_802687B0:
    // 0x802687B0: sh          $t2, 0x2A($a2)
    MEM_H(0X2A, ctx->r6) = ctx->r10;
L_802687B4:
    // 0x802687B4: jal         0x8002989C
    // 0x802687B8: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    func_8002989C(rdram, ctx);
        goto after_3;
    // 0x802687B8: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    after_3:
    // 0x802687BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802687C0:
    // 0x802687C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802687C4: jr          $ra
    // 0x802687C8: nop

    return;
    // 0x802687C8: nop

;}
RECOMP_FUNC void ovl_80264800_func_80268730(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80268730: addiu       $a0, $a0, -0x7B24
    ctx->r4 = ADD32(ctx->r4, -0X7B24);
    // 0x80268734: jal         0x8002989C
    // 0x80268738: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    func_8002989C(rdram, ctx);
        goto after_0;
    // 0x80268738: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    after_0:
    // 0x8026873C: b           L_802687C0
    // 0x80268740: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802687C0;
    // 0x80268740: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80268744: addiu       $v1, $v1, -0x32B0
    ctx->r3 = ADD32(ctx->r3, -0X32B0);
    // 0x80268748: lh          $t7, 0xA($v1)
    ctx->r15 = MEM_H(ctx->r3, 0XA);
    // 0x8026874C: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80268750: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80268754: sh          $t8, 0xA($v1)
    MEM_H(0XA, ctx->r3) = ctx->r24;
    // 0x80268758: lh          $t9, 0xA($v1)
    ctx->r25 = MEM_H(ctx->r3, 0XA);
    // 0x8026875C: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x80268760: slti        $at, $t9, 0x6
    ctx->r1 = SIGNED(ctx->r25) < 0X6 ? 1 : 0;
    // 0x80268764: beq         $at, $zero, L_80268780
    if (ctx->r1 == 0) {
        // 0x80268768: addiu       $a0, $a0, -0x7B24
        ctx->r4 = ADD32(ctx->r4, -0X7B24);
            goto L_80268780;
    }
    // 0x80268768: addiu       $a0, $a0, -0x7B24
    ctx->r4 = ADD32(ctx->r4, -0X7B24);
    // 0x8026876C: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80268770: jal         0x8002989C
    // 0x80268774: addiu       $a0, $a0, -0x7904
    ctx->r4 = ADD32(ctx->r4, -0X7904);
    func_8002989C(rdram, ctx);
        goto after_1;
    // 0x80268774: addiu       $a0, $a0, -0x7904
    ctx->r4 = ADD32(ctx->r4, -0X7904);
    after_1:
    // 0x80268778: b           L_802687C0
    // 0x8026877C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802687C0;
    // 0x8026877C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80268780:
    // 0x80268780: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80268784: beq         $v0, $at, L_802687A0
    if (ctx->r2 == ctx->r1) {
        // 0x80268788: addiu       $t0, $zero, 0xE
        ctx->r8 = ADD32(0, 0XE);
            goto L_802687A0;
    }
    // 0x80268788: addiu       $t0, $zero, 0xE
    ctx->r8 = ADD32(0, 0XE);
    // 0x8026878C: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x80268790: beq         $v0, $at, L_802687A8
    if (ctx->r2 == ctx->r1) {
        // 0x80268794: addiu       $t1, $zero, 0xB
        ctx->r9 = ADD32(0, 0XB);
            goto L_802687A8;
    }
    // 0x80268794: addiu       $t1, $zero, 0xB
    ctx->r9 = ADD32(0, 0XB);
    // 0x80268798: b           L_802687B0
    // 0x8026879C: addiu       $t2, $zero, 0xF
    ctx->r10 = ADD32(0, 0XF);
        goto L_802687B0;
    // 0x8026879C: addiu       $t2, $zero, 0xF
    ctx->r10 = ADD32(0, 0XF);
L_802687A0:
    // 0x802687A0: b           L_802687B4
    // 0x802687A4: sh          $t0, 0x2A($a2)
    MEM_H(0X2A, ctx->r6) = ctx->r8;
        goto L_802687B4;
    // 0x802687A4: sh          $t0, 0x2A($a2)
    MEM_H(0X2A, ctx->r6) = ctx->r8;
L_802687A8:
    // 0x802687A8: b           L_802687B4
    // 0x802687AC: sh          $t1, 0x2A($a2)
    MEM_H(0X2A, ctx->r6) = ctx->r9;
        goto L_802687B4;
    // 0x802687AC: sh          $t1, 0x2A($a2)
    MEM_H(0X2A, ctx->r6) = ctx->r9;
L_802687B0:
    // 0x802687B0: sh          $t2, 0x2A($a2)
    MEM_H(0X2A, ctx->r6) = ctx->r10;
L_802687B4:
    // 0x802687B4: jal         0x8002989C
    // 0x802687B8: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    func_8002989C(rdram, ctx);
        goto after_2;
    // 0x802687B8: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    after_2:
    // 0x802687BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802687C0:
    // 0x802687C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802687C4: jr          $ra
    // 0x802687C8: nop

    return;
    // 0x802687C8: nop

;}
RECOMP_FUNC void ovl_80264800_func_802687CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802687CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802687D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802687D4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802687D8: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x802687DC: lh          $a1, 0x2C($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X2C);
    // 0x802687E0: lh          $a0, 0x32($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X32);
    // 0x802687E4: jal         0x80269130
    // 0x802687E8: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    ovl_80264800_func_80269130(rdram, ctx);
        goto after_0;
    // 0x802687E8: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x802687EC: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x802687F0: bne         $v0, $zero, L_80268818
    if (ctx->r2 != 0) {
        // 0x802687F4: lui         $v1, 0x8012
        ctx->r3 = S32(0X8012 << 16);
            goto L_80268818;
    }
    // 0x802687F4: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x802687F8: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x802687FC: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80268800: sh          $t6, 0x2A($a2)
    MEM_H(0X2A, ctx->r6) = ctx->r14;
    // 0x80268804: addiu       $a0, $a0, -0x7B24
    ctx->r4 = ADD32(ctx->r4, -0X7B24);
    // 0x80268808: jal         0x8002989C
    // 0x8026880C: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    func_8002989C(rdram, ctx);
        goto after_1;
    // 0x8026880C: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    after_1:
    // 0x80268810: b           L_8026887C
    // 0x80268814: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026887C;
    // 0x80268814: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80268818:
    // 0x80268818: addiu       $v1, $v1, -0x32B0
    ctx->r3 = ADD32(ctx->r3, -0X32B0);
    // 0x8026881C: lh          $t7, 0xA($v1)
    ctx->r15 = MEM_H(ctx->r3, 0XA);
    // 0x80268820: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80268824: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80268828: sh          $t8, 0xA($v1)
    MEM_H(0XA, ctx->r3) = ctx->r24;
    // 0x8026882C: lh          $t9, 0xA($v1)
    ctx->r25 = MEM_H(ctx->r3, 0XA);
    // 0x80268830: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x80268834: slti        $at, $t9, 0x6
    ctx->r1 = SIGNED(ctx->r25) < 0X6 ? 1 : 0;
    // 0x80268838: beq         $at, $zero, L_80268854
    if (ctx->r1 == 0) {
        // 0x8026883C: addiu       $a0, $a0, -0x7B24
        ctx->r4 = ADD32(ctx->r4, -0X7B24);
            goto L_80268854;
    }
    // 0x8026883C: addiu       $a0, $a0, -0x7B24
    ctx->r4 = ADD32(ctx->r4, -0X7B24);
    // 0x80268840: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80268844: jal         0x8002989C
    // 0x80268848: addiu       $a0, $a0, -0x7834
    ctx->r4 = ADD32(ctx->r4, -0X7834);
    func_8002989C(rdram, ctx);
        goto after_2;
    // 0x80268848: addiu       $a0, $a0, -0x7834
    ctx->r4 = ADD32(ctx->r4, -0X7834);
    after_2:
    // 0x8026884C: b           L_8026887C
    // 0x80268850: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026887C;
    // 0x80268850: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80268854:
    // 0x80268854: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80268858: bne         $v0, $at, L_8026886C
    if (ctx->r2 != ctx->r1) {
        // 0x8026885C: addiu       $t1, $zero, 0x8
        ctx->r9 = ADD32(0, 0X8);
            goto L_8026886C;
    }
    // 0x8026885C: addiu       $t1, $zero, 0x8
    ctx->r9 = ADD32(0, 0X8);
    // 0x80268860: addiu       $t0, $zero, 0xE
    ctx->r8 = ADD32(0, 0XE);
    // 0x80268864: b           L_80268870
    // 0x80268868: sh          $t0, 0x2A($a2)
    MEM_H(0X2A, ctx->r6) = ctx->r8;
        goto L_80268870;
    // 0x80268868: sh          $t0, 0x2A($a2)
    MEM_H(0X2A, ctx->r6) = ctx->r8;
L_8026886C:
    // 0x8026886C: sh          $t1, 0x2A($a2)
    MEM_H(0X2A, ctx->r6) = ctx->r9;
L_80268870:
    // 0x80268870: jal         0x8002989C
    // 0x80268874: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    func_8002989C(rdram, ctx);
        goto after_3;
    // 0x80268874: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    after_3:
    // 0x80268878: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026887C:
    // 0x8026887C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80268880: jr          $ra
    // 0x80268884: nop

    return;
    // 0x80268884: nop

;}
RECOMP_FUNC void ovl_80264800_func_80268818(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80268818: addiu       $v1, $v1, -0x32B0
    ctx->r3 = ADD32(ctx->r3, -0X32B0);
    // 0x8026881C: lh          $t7, 0xA($v1)
    ctx->r15 = MEM_H(ctx->r3, 0XA);
    // 0x80268820: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80268824: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80268828: sh          $t8, 0xA($v1)
    MEM_H(0XA, ctx->r3) = ctx->r24;
    // 0x8026882C: lh          $t9, 0xA($v1)
    ctx->r25 = MEM_H(ctx->r3, 0XA);
    // 0x80268830: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x80268834: slti        $at, $t9, 0x6
    ctx->r1 = SIGNED(ctx->r25) < 0X6 ? 1 : 0;
    // 0x80268838: beq         $at, $zero, L_80268854
    if (ctx->r1 == 0) {
        // 0x8026883C: addiu       $a0, $a0, -0x7B24
        ctx->r4 = ADD32(ctx->r4, -0X7B24);
            goto L_80268854;
    }
    // 0x8026883C: addiu       $a0, $a0, -0x7B24
    ctx->r4 = ADD32(ctx->r4, -0X7B24);
    // 0x80268840: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80268844: jal         0x8002989C
    // 0x80268848: addiu       $a0, $a0, -0x7834
    ctx->r4 = ADD32(ctx->r4, -0X7834);
    func_8002989C(rdram, ctx);
        goto after_0;
    // 0x80268848: addiu       $a0, $a0, -0x7834
    ctx->r4 = ADD32(ctx->r4, -0X7834);
    after_0:
    // 0x8026884C: b           L_8026887C
    // 0x80268850: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026887C;
    // 0x80268850: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80268854:
    // 0x80268854: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80268858: bne         $v0, $at, L_8026886C
    if (ctx->r2 != ctx->r1) {
        // 0x8026885C: addiu       $t1, $zero, 0x8
        ctx->r9 = ADD32(0, 0X8);
            goto L_8026886C;
    }
    // 0x8026885C: addiu       $t1, $zero, 0x8
    ctx->r9 = ADD32(0, 0X8);
    // 0x80268860: addiu       $t0, $zero, 0xE
    ctx->r8 = ADD32(0, 0XE);
    // 0x80268864: b           L_80268870
    // 0x80268868: sh          $t0, 0x2A($a2)
    MEM_H(0X2A, ctx->r6) = ctx->r8;
        goto L_80268870;
    // 0x80268868: sh          $t0, 0x2A($a2)
    MEM_H(0X2A, ctx->r6) = ctx->r8;
L_8026886C:
    // 0x8026886C: sh          $t1, 0x2A($a2)
    MEM_H(0X2A, ctx->r6) = ctx->r9;
L_80268870:
    // 0x80268870: jal         0x8002989C
    // 0x80268874: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    func_8002989C(rdram, ctx);
        goto after_1;
    // 0x80268874: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    after_1:
    // 0x80268878: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026887C:
    // 0x8026887C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80268880: jr          $ra
    // 0x80268884: nop

    return;
    // 0x80268884: nop

;}
RECOMP_FUNC void ovl_80264800_func_80268888(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80268888: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026888C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80268890: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80268894: lh          $t6, 0x24($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X24);
    // 0x80268898: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8026889C: bne         $t6, $zero, L_802688C4
    if (ctx->r14 != 0) {
        // 0x802688A0: lui         $a0, 0x8027
        ctx->r4 = S32(0X8027 << 16);
            goto L_802688C4;
    }
    // 0x802688A0: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x802688A4: lbu         $t7, -0x32A4($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X32A4);
    // 0x802688A8: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x802688AC: bne         $t7, $at, L_802688D0
    if (ctx->r15 != ctx->r1) {
        // 0x802688B0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802688D0;
    }
    // 0x802688B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802688B4: jal         0x80037908
    // 0x802688B8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80037908(rdram, ctx);
        goto after_0;
    // 0x802688B8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x802688BC: b           L_802688D0
    // 0x802688C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802688D0;
    // 0x802688C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802688C4:
    // 0x802688C4: jal         0x800296E0
    // 0x802688C8: addiu       $a0, $a0, -0x7B24
    ctx->r4 = ADD32(ctx->r4, -0X7B24);
    func_800296E0(rdram, ctx);
        goto after_1;
    // 0x802688C8: addiu       $a0, $a0, -0x7B24
    ctx->r4 = ADD32(ctx->r4, -0X7B24);
    after_1:
    // 0x802688CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802688D0:
    // 0x802688D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802688D4: jr          $ra
    // 0x802688D8: nop

    return;
    // 0x802688D8: nop

;}
RECOMP_FUNC void ovl_80264800_func_802688DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802688DC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802688E0: lh          $t6, 0x2A($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X2A);
    // 0x802688E4: nop

    // 0x802688E8: beq         $t6, $zero, L_80268910
    if (ctx->r14 == 0) {
        // 0x802688EC: nop
    
            goto L_80268910;
    }
    // 0x802688EC: nop

    // 0x802688F0: lh          $t7, 0x36($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X36);
    // 0x802688F4: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x802688F8: bne         $t7, $at, L_80268920
    if (ctx->r15 != ctx->r1) {
        // 0x802688FC: nop
    
            goto L_80268920;
    }
    // 0x802688FC: nop

    // 0x80268900: lh          $t8, 0x24($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X24);
    // 0x80268904: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80268908: bne         $t8, $at, L_80268920
    if (ctx->r24 != ctx->r1) {
        // 0x8026890C: nop
    
            goto L_80268920;
    }
    // 0x8026890C: nop

L_80268910:
    // 0x80268910: lh          $t9, 0x2C($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X2C);
    // 0x80268914: nop

    // 0x80268918: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x8026891C: sh          $t0, 0x2C($a0)
    MEM_H(0X2C, ctx->r4) = ctx->r8;
L_80268920:
    // 0x80268920: jr          $ra
    // 0x80268924: nop

    return;
    // 0x80268924: nop

;}
RECOMP_FUNC void ovl_80264800_func_80268928(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80268928: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8026892C: lh          $t6, 0x2A($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X2A);
    // 0x80268930: nop

    // 0x80268934: beq         $t6, $zero, L_8026895C
    if (ctx->r14 == 0) {
        // 0x80268938: nop
    
            goto L_8026895C;
    }
    // 0x80268938: nop

    // 0x8026893C: lh          $t7, 0x36($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X36);
    // 0x80268940: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80268944: bne         $t7, $at, L_8026896C
    if (ctx->r15 != ctx->r1) {
        // 0x80268948: nop
    
            goto L_8026896C;
    }
    // 0x80268948: nop

    // 0x8026894C: lh          $t8, 0x24($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X24);
    // 0x80268950: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80268954: bne         $t8, $at, L_8026896C
    if (ctx->r24 != ctx->r1) {
        // 0x80268958: nop
    
            goto L_8026896C;
    }
    // 0x80268958: nop

L_8026895C:
    // 0x8026895C: lh          $t9, 0x2C($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X2C);
    // 0x80268960: nop

    // 0x80268964: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80268968: sh          $t0, 0x2C($a0)
    MEM_H(0X2C, ctx->r4) = ctx->r8;
L_8026896C:
    // 0x8026896C: jr          $ra
    // 0x80268970: nop

    return;
    // 0x80268970: nop

;}
RECOMP_FUNC void ovl_80264800_func_80268958(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80268958: nop

    // 0x8026895C: lh          $t9, 0x2C($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X2C);
    // 0x80268960: nop

    // 0x80268964: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80268968: sh          $t0, 0x2C($a0)
    MEM_H(0X2C, ctx->r4) = ctx->r8;
    // 0x8026896C: jr          $ra
    // 0x80268970: nop

    return;
    // 0x80268970: nop

;}
RECOMP_FUNC void ovl_80264800_func_80268974(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80268974: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80268978: lh          $v0, 0x2A($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X2A);
    // 0x8026897C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80268980: beq         $v0, $at, L_80268990
    if (ctx->r2 == ctx->r1) {
        // 0x80268984: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_80268990;
    }
    // 0x80268984: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80268988: bne         $v0, $at, L_80268994
    if (ctx->r2 != ctx->r1) {
        // 0x8026898C: nop
    
            goto L_80268994;
    }
    // 0x8026898C: nop

L_80268990:
    // 0x80268990: sh          $zero, 0x50($a0)
    MEM_H(0X50, ctx->r4) = 0;
L_80268994:
    // 0x80268994: jr          $ra
    // 0x80268998: nop

    return;
    // 0x80268998: nop

;}
RECOMP_FUNC void ovl_80264800_func_8026899C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026899C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802689A0: lh          $v0, 0x2A($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X2A);
    // 0x802689A4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802689A8: beq         $v0, $at, L_802689BC
    if (ctx->r2 == ctx->r1) {
        // 0x802689AC: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_802689BC;
    }
    // 0x802689AC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802689B0: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x802689B4: bne         $v0, $at, L_802689C0
    if (ctx->r2 != ctx->r1) {
        // 0x802689B8: nop
    
            goto L_802689C0;
    }
    // 0x802689B8: nop

L_802689BC:
    // 0x802689BC: sh          $t6, 0x50($a0)
    MEM_H(0X50, ctx->r4) = ctx->r14;
L_802689C0:
    // 0x802689C0: jr          $ra
    // 0x802689C4: nop

    return;
    // 0x802689C4: nop

;}
RECOMP_FUNC void ovl_80264800_func_802689C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802689C8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802689CC: jr          $ra
    // 0x802689D0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x802689D0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void ovl_80264800_func_802689D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802689D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802689D8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802689DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802689E0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802689E4: addiu       $t6, $zero, 0x147
    ctx->r14 = ADD32(0, 0X147);
    // 0x802689E8: addiu       $t8, $zero, 0xB
    ctx->r24 = ADD32(0, 0XB);
    // 0x802689EC: sh          $t6, 0x12($a1)
    MEM_H(0X12, ctx->r5) = ctx->r14;
    // 0x802689F0: sb          $t8, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r24;
    // 0x802689F4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x802689F8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802689FC: addiu       $a2, $zero, 0xE0
    ctx->r6 = ADD32(0, 0XE0);
    // 0x80268A00: jal         0x8002B608
    // 0x80268A04: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_8002B608(rdram, ctx);
        goto after_0;
    // 0x80268A04: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_0:
    // 0x80268A08: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80268A0C: jal         0x800296E0
    // 0x80268A10: addiu       $a0, $a0, -0x75DC
    ctx->r4 = ADD32(ctx->r4, -0X75DC);
    func_800296E0(rdram, ctx);
        goto after_1;
    // 0x80268A10: addiu       $a0, $a0, -0x75DC
    ctx->r4 = ADD32(ctx->r4, -0X75DC);
    after_1:
    // 0x80268A14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80268A18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80268A1C: jr          $ra
    // 0x80268A20: nop

    return;
    // 0x80268A20: nop

;}
RECOMP_FUNC void ovl_80264800_func_80268A24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80268A24: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80268A28: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x80268A2C: lui         $s0, 0x801B
    ctx->r16 = S32(0X801B << 16);
    // 0x80268A30: addiu       $s0, $s0, -0x750
    ctx->r16 = ADD32(ctx->r16, -0X750);
    // 0x80268A34: lh          $v1, 0x9C($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X9C);
    // 0x80268A38: lui         $t7, 0x8027
    ctx->r15 = S32(0X8027 << 16);
    // 0x80268A3C: addiu       $t7, $t7, -0x6068
    ctx->r15 = ADD32(ctx->r15, -0X6068);
    // 0x80268A40: sll         $t6, $v1, 3
    ctx->r14 = S32(ctx->r3 << 3);
    // 0x80268A44: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x80268A48: lhu         $t8, 0x0($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X0);
    // 0x80268A4C: lui         $a3, 0x8028
    ctx->r7 = S32(0X8028 << 16);
    // 0x80268A50: sll         $t4, $v1, 2
    ctx->r12 = S32(ctx->r3 << 2);
    // 0x80268A54: lhu         $t9, 0x2($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X2);
    // 0x80268A58: lhu         $t2, 0x4($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X4);
    // 0x80268A5C: lhu         $t3, 0x6($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X6);
    // 0x80268A60: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x80268A64: addu        $a3, $a3, $t4
    ctx->r7 = ADD32(ctx->r7, ctx->r12);
    // 0x80268A68: sh          $t8, 0x54($sp)
    MEM_H(0X54, ctx->r29) = ctx->r24;
    // 0x80268A6C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80268A70: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x80268A74: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x80268A78: lw          $a3, 0x3AA4($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X3AA4);
    // 0x80268A7C: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x80268A80: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x80268A84: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80268A88: addiu       $t5, $zero, 0x14
    ctx->r13 = ADD32(0, 0X14);
    // 0x80268A8C: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x80268A90: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80268A94: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x80268A98: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x80268A9C: addiu       $a0, $a0, -0x3888
    ctx->r4 = ADD32(ctx->r4, -0X3888);
    // 0x80268AA0: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x80268AA4: addiu       $a1, $zero, 0x7C
    ctx->r5 = ADD32(0, 0X7C);
    // 0x80268AA8: addiu       $a2, $zero, 0x1A
    ctx->r6 = ADD32(0, 0X1A);
    // 0x80268AAC: sh          $t9, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r25;
    // 0x80268AB0: sh          $t2, 0x50($sp)
    MEM_H(0X50, ctx->r29) = ctx->r10;
    // 0x80268AB4: jal         0x8002F528
    // 0x80268AB8: sh          $t3, 0x4E($sp)
    MEM_H(0X4E, ctx->r29) = ctx->r11;
    func_8002F528(rdram, ctx);
        goto after_0;
    // 0x80268AB8: sh          $t3, 0x4E($sp)
    MEM_H(0X4E, ctx->r29) = ctx->r11;
    after_0:
    // 0x80268ABC: addiu       $t9, $zero, 0x9
    ctx->r25 = ADD32(0, 0X9);
    // 0x80268AC0: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80268AC4: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x80268AC8: lui         $a3, 0x8028
    ctx->r7 = S32(0X8028 << 16);
    // 0x80268ACC: addiu       $t2, $zero, 0x18
    ctx->r10 = ADD32(0, 0X18);
    // 0x80268AD0: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x80268AD4: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x80268AD8: addiu       $t5, $zero, 0xC
    ctx->r13 = ADD32(0, 0XC);
    // 0x80268ADC: sb          $t9, -0x3883($at)
    MEM_B(-0X3883, ctx->r1) = ctx->r25;
    // 0x80268AE0: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x80268AE4: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x80268AE8: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x80268AEC: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80268AF0: addiu       $a3, $a3, 0x7568
    ctx->r7 = ADD32(ctx->r7, 0X7568);
    // 0x80268AF4: addiu       $a0, $a0, -0x3868
    ctx->r4 = ADD32(ctx->r4, -0X3868);
    // 0x80268AF8: addiu       $a1, $zero, 0x4D
    ctx->r5 = ADD32(0, 0X4D);
    // 0x80268AFC: addiu       $a2, $zero, 0x92
    ctx->r6 = ADD32(0, 0X92);
    // 0x80268B00: jal         0x8002F528
    // 0x80268B04: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
    func_8002F528(rdram, ctx);
        goto after_1;
    // 0x80268B04: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
    after_1:
    // 0x80268B08: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x80268B0C: addiu       $t7, $t7, -0x3770
    ctx->r15 = ADD32(ctx->r15, -0X3770);
    // 0x80268B10: sll         $t6, $s1, 5
    ctx->r14 = S32(ctx->r17 << 5);
    // 0x80268B14: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x80268B18: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x80268B1C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80268B20: addiu       $t8, $zero, 0x9
    ctx->r24 = ADD32(0, 0X9);
    // 0x80268B24: sb          $t8, -0x133($at)
    MEM_B(-0X133, ctx->r1) = ctx->r24;
    // 0x80268B28: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x80268B2C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80268B30: sll         $t3, $s1, 16
    ctx->r11 = S32(ctx->r17 << 16);
    // 0x80268B34: ori         $at, $at, 0xFEE8
    ctx->r1 = ctx->r1 | 0XFEE8;
    // 0x80268B38: lh          $a3, 0xAC($s0)
    ctx->r7 = MEM_H(ctx->r16, 0XAC);
    // 0x80268B3C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80268B40: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80268B44: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x80268B48: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80268B4C: addu        $a0, $v0, $at
    ctx->r4 = ADD32(ctx->r2, ctx->r1);
    // 0x80268B50: sra         $s1, $t3, 16
    ctx->r17 = S32(SIGNED(ctx->r11) >> 16);
    // 0x80268B54: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    // 0x80268B58: jal         0x8002F6EC
    // 0x80268B5C: addiu       $a2, $zero, 0xAA
    ctx->r6 = ADD32(0, 0XAA);
    func_8002F6EC(rdram, ctx);
        goto after_2;
    // 0x80268B5C: addiu       $a2, $zero, 0xAA
    ctx->r6 = ADD32(0, 0XAA);
    after_2:
    // 0x80268B60: sll         $t6, $s1, 5
    ctx->r14 = S32(ctx->r17 << 5);
    // 0x80268B64: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80268B68: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x80268B6C: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80268B70: addiu       $t5, $zero, 0x9
    ctx->r13 = ADD32(0, 0X9);
    // 0x80268B74: sb          $t5, -0x38A3($at)
    MEM_B(-0X38A3, ctx->r1) = ctx->r13;
    // 0x80268B78: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x80268B7C: lbu         $v0, 0x55($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X55);
    // 0x80268B80: lw          $s0, 0x0($t8)
    ctx->r16 = MEM_W(ctx->r24, 0X0);
    // 0x80268B84: lbu         $v1, 0x53($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X53);
    // 0x80268B88: lbu         $t0, 0x51($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X51);
    // 0x80268B8C: lbu         $t1, 0x4F($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X4F);
    // 0x80268B90: addiu       $t9, $zero, 0x88
    ctx->r25 = ADD32(0, 0X88);
    // 0x80268B94: addiu       $t2, $zero, 0x20
    ctx->r10 = ADD32(0, 0X20);
    // 0x80268B98: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x80268B9C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80268BA0: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    // 0x80268BA4: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    // 0x80268BA8: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    // 0x80268BAC: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    // 0x80268BB0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80268BB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80268BB8: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x80268BBC: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    // 0x80268BC0: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x80268BC4: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
    // 0x80268BC8: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x80268BCC: jal         0x8004A5E4
    // 0x80268BD0: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    func_8004A5E4(rdram, ctx);
        goto after_3;
    // 0x80268BD0: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    after_3:
    // 0x80268BD4: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80268BD8: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x80268BDC: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x80268BE0: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80268BE4: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x80268BE8: addiu       $t3, $zero, 0x30
    ctx->r11 = ADD32(0, 0X30);
    // 0x80268BEC: addiu       $t4, $zero, 0x20
    ctx->r12 = ADD32(0, 0X20);
    // 0x80268BF0: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x80268BF4: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80268BF8: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    // 0x80268BFC: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x80268C00: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x80268C04: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x80268C08: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x80268C0C: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x80268C10: jal         0x8004A5E4
    // 0x80268C14: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    func_8004A5E4(rdram, ctx);
        goto after_4;
    // 0x80268C14: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    after_4:
    // 0x80268C18: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x80268C1C: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x80268C20: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    // 0x80268C24: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x80268C28: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80268C2C: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x80268C30: addiu       $t2, $zero, 0xC0
    ctx->r10 = ADD32(0, 0XC0);
    // 0x80268C34: addiu       $t3, $zero, 0x98
    ctx->r11 = ADD32(0, 0X98);
    // 0x80268C38: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x80268C3C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80268C40: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    // 0x80268C44: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x80268C48: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    // 0x80268C4C: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x80268C50: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x80268C54: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x80268C58: jal         0x8004A5E4
    // 0x80268C5C: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    func_8004A5E4(rdram, ctx);
        goto after_5;
    // 0x80268C5C: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    after_5:
    // 0x80268C60: sll         $a1, $s1, 16
    ctx->r5 = S32(ctx->r17 << 16);
    // 0x80268C64: sra         $t8, $a1, 16
    ctx->r24 = S32(SIGNED(ctx->r5) >> 16);
    // 0x80268C68: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    // 0x80268C6C: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x80268C70: jal         0x80268D30
    // 0x80268C74: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_80264800_func_80268D30(rdram, ctx);
        goto after_6;
    // 0x80268C74: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x80268C78: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80268C7C: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x80268C80: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x80268C84: jr          $ra
    // 0x80268C88: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x80268C88: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void ovl_80264800_func_80268A30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80268A30: addiu       $s0, $s0, -0x750
    ctx->r16 = ADD32(ctx->r16, -0X750);
    // 0x80268A34: lh          $v1, 0x9C($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X9C);
    // 0x80268A38: lui         $t7, 0x8027
    ctx->r15 = S32(0X8027 << 16);
    // 0x80268A3C: addiu       $t7, $t7, -0x6068
    ctx->r15 = ADD32(ctx->r15, -0X6068);
    // 0x80268A40: sll         $t6, $v1, 3
    ctx->r14 = S32(ctx->r3 << 3);
    // 0x80268A44: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x80268A48: lhu         $t8, 0x0($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X0);
    // 0x80268A4C: lui         $a3, 0x8028
    ctx->r7 = S32(0X8028 << 16);
    // 0x80268A50: sll         $t4, $v1, 2
    ctx->r12 = S32(ctx->r3 << 2);
    // 0x80268A54: lhu         $t9, 0x2($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X2);
    // 0x80268A58: lhu         $t2, 0x4($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X4);
    // 0x80268A5C: lhu         $t3, 0x6($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X6);
    // 0x80268A60: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x80268A64: addu        $a3, $a3, $t4
    ctx->r7 = ADD32(ctx->r7, ctx->r12);
    // 0x80268A68: sh          $t8, 0x54($sp)
    MEM_H(0X54, ctx->r29) = ctx->r24;
    // 0x80268A6C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80268A70: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x80268A74: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x80268A78: lw          $a3, 0x3AA4($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X3AA4);
    // 0x80268A7C: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x80268A80: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x80268A84: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80268A88: addiu       $t5, $zero, 0x14
    ctx->r13 = ADD32(0, 0X14);
    // 0x80268A8C: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x80268A90: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80268A94: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x80268A98: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x80268A9C: addiu       $a0, $a0, -0x3888
    ctx->r4 = ADD32(ctx->r4, -0X3888);
    // 0x80268AA0: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x80268AA4: addiu       $a1, $zero, 0x7C
    ctx->r5 = ADD32(0, 0X7C);
    // 0x80268AA8: addiu       $a2, $zero, 0x1A
    ctx->r6 = ADD32(0, 0X1A);
    // 0x80268AAC: sh          $t9, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r25;
    // 0x80268AB0: sh          $t2, 0x50($sp)
    MEM_H(0X50, ctx->r29) = ctx->r10;
    // 0x80268AB4: jal         0x8002F528
    // 0x80268AB8: sh          $t3, 0x4E($sp)
    MEM_H(0X4E, ctx->r29) = ctx->r11;
    func_8002F528(rdram, ctx);
        goto after_0;
    // 0x80268AB8: sh          $t3, 0x4E($sp)
    MEM_H(0X4E, ctx->r29) = ctx->r11;
    after_0:
    // 0x80268ABC: addiu       $t9, $zero, 0x9
    ctx->r25 = ADD32(0, 0X9);
    // 0x80268AC0: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80268AC4: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x80268AC8: lui         $a3, 0x8028
    ctx->r7 = S32(0X8028 << 16);
    // 0x80268ACC: addiu       $t2, $zero, 0x18
    ctx->r10 = ADD32(0, 0X18);
    // 0x80268AD0: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x80268AD4: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x80268AD8: addiu       $t5, $zero, 0xC
    ctx->r13 = ADD32(0, 0XC);
    // 0x80268ADC: sb          $t9, -0x3883($at)
    MEM_B(-0X3883, ctx->r1) = ctx->r25;
    // 0x80268AE0: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x80268AE4: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x80268AE8: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x80268AEC: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80268AF0: addiu       $a3, $a3, 0x7568
    ctx->r7 = ADD32(ctx->r7, 0X7568);
    // 0x80268AF4: addiu       $a0, $a0, -0x3868
    ctx->r4 = ADD32(ctx->r4, -0X3868);
    // 0x80268AF8: addiu       $a1, $zero, 0x4D
    ctx->r5 = ADD32(0, 0X4D);
    // 0x80268AFC: addiu       $a2, $zero, 0x92
    ctx->r6 = ADD32(0, 0X92);
    // 0x80268B00: jal         0x8002F528
    // 0x80268B04: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
    func_8002F528(rdram, ctx);
        goto after_1;
    // 0x80268B04: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
    after_1:
    // 0x80268B08: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x80268B0C: addiu       $t7, $t7, -0x3770
    ctx->r15 = ADD32(ctx->r15, -0X3770);
    // 0x80268B10: sll         $t6, $s1, 5
    ctx->r14 = S32(ctx->r17 << 5);
    // 0x80268B14: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x80268B18: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x80268B1C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80268B20: addiu       $t8, $zero, 0x9
    ctx->r24 = ADD32(0, 0X9);
    // 0x80268B24: sb          $t8, -0x133($at)
    MEM_B(-0X133, ctx->r1) = ctx->r24;
    // 0x80268B28: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x80268B2C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80268B30: sll         $t3, $s1, 16
    ctx->r11 = S32(ctx->r17 << 16);
    // 0x80268B34: ori         $at, $at, 0xFEE8
    ctx->r1 = ctx->r1 | 0XFEE8;
    // 0x80268B38: lh          $a3, 0xAC($s0)
    ctx->r7 = MEM_H(ctx->r16, 0XAC);
    // 0x80268B3C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80268B40: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80268B44: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x80268B48: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80268B4C: addu        $a0, $v0, $at
    ctx->r4 = ADD32(ctx->r2, ctx->r1);
    // 0x80268B50: sra         $s1, $t3, 16
    ctx->r17 = S32(SIGNED(ctx->r11) >> 16);
    // 0x80268B54: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    // 0x80268B58: jal         0x8002F6EC
    // 0x80268B5C: addiu       $a2, $zero, 0xAA
    ctx->r6 = ADD32(0, 0XAA);
    func_8002F6EC(rdram, ctx);
        goto after_2;
    // 0x80268B5C: addiu       $a2, $zero, 0xAA
    ctx->r6 = ADD32(0, 0XAA);
    after_2:
    // 0x80268B60: sll         $t6, $s1, 5
    ctx->r14 = S32(ctx->r17 << 5);
    // 0x80268B64: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80268B68: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x80268B6C: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80268B70: addiu       $t5, $zero, 0x9
    ctx->r13 = ADD32(0, 0X9);
    // 0x80268B74: sb          $t5, -0x38A3($at)
    MEM_B(-0X38A3, ctx->r1) = ctx->r13;
    // 0x80268B78: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x80268B7C: lbu         $v0, 0x55($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X55);
    // 0x80268B80: lw          $s0, 0x0($t8)
    ctx->r16 = MEM_W(ctx->r24, 0X0);
    // 0x80268B84: lbu         $v1, 0x53($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X53);
    // 0x80268B88: lbu         $t0, 0x51($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X51);
    // 0x80268B8C: lbu         $t1, 0x4F($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X4F);
    // 0x80268B90: addiu       $t9, $zero, 0x88
    ctx->r25 = ADD32(0, 0X88);
    // 0x80268B94: addiu       $t2, $zero, 0x20
    ctx->r10 = ADD32(0, 0X20);
    // 0x80268B98: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x80268B9C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80268BA0: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    // 0x80268BA4: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    // 0x80268BA8: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    // 0x80268BAC: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    // 0x80268BB0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80268BB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80268BB8: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x80268BBC: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    // 0x80268BC0: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x80268BC4: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
    // 0x80268BC8: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x80268BCC: jal         0x8004A5E4
    // 0x80268BD0: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    func_8004A5E4(rdram, ctx);
        goto after_3;
    // 0x80268BD0: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    after_3:
    // 0x80268BD4: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80268BD8: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x80268BDC: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x80268BE0: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80268BE4: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x80268BE8: addiu       $t3, $zero, 0x30
    ctx->r11 = ADD32(0, 0X30);
    // 0x80268BEC: addiu       $t4, $zero, 0x20
    ctx->r12 = ADD32(0, 0X20);
    // 0x80268BF0: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x80268BF4: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80268BF8: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    // 0x80268BFC: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x80268C00: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x80268C04: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x80268C08: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x80268C0C: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x80268C10: jal         0x8004A5E4
    // 0x80268C14: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    func_8004A5E4(rdram, ctx);
        goto after_4;
    // 0x80268C14: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    after_4:
    // 0x80268C18: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x80268C1C: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x80268C20: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    // 0x80268C24: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x80268C28: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80268C2C: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x80268C30: addiu       $t2, $zero, 0xC0
    ctx->r10 = ADD32(0, 0XC0);
    // 0x80268C34: addiu       $t3, $zero, 0x98
    ctx->r11 = ADD32(0, 0X98);
    // 0x80268C38: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x80268C3C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80268C40: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    // 0x80268C44: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x80268C48: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    // 0x80268C4C: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x80268C50: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x80268C54: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x80268C58: jal         0x8004A5E4
    // 0x80268C5C: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    func_8004A5E4(rdram, ctx);
        goto after_5;
    // 0x80268C5C: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    after_5:
    // 0x80268C60: sll         $a1, $s1, 16
    ctx->r5 = S32(ctx->r17 << 16);
    // 0x80268C64: sra         $t8, $a1, 16
    ctx->r24 = S32(SIGNED(ctx->r5) >> 16);
    // 0x80268C68: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    // 0x80268C6C: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x80268C70: jal         0x80268D30
    // 0x80268C74: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_80264800_func_80268D30(rdram, ctx);
        goto after_6;
    // 0x80268C74: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x80268C78: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80268C7C: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x80268C80: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x80268C84: jr          $ra
    // 0x80268C88: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x80268C88: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void ovl_80264800_func_80268A8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80268A8C: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x80268A90: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80268A94: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x80268A98: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x80268A9C: addiu       $a0, $a0, -0x3888
    ctx->r4 = ADD32(ctx->r4, -0X3888);
    // 0x80268AA0: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x80268AA4: addiu       $a1, $zero, 0x7C
    ctx->r5 = ADD32(0, 0X7C);
    // 0x80268AA8: addiu       $a2, $zero, 0x1A
    ctx->r6 = ADD32(0, 0X1A);
    // 0x80268AAC: sh          $t9, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r25;
    // 0x80268AB0: sh          $t2, 0x50($sp)
    MEM_H(0X50, ctx->r29) = ctx->r10;
    // 0x80268AB4: jal         0x8002F528
    // 0x80268AB8: sh          $t3, 0x4E($sp)
    MEM_H(0X4E, ctx->r29) = ctx->r11;
    func_8002F528(rdram, ctx);
        goto after_0;
    // 0x80268AB8: sh          $t3, 0x4E($sp)
    MEM_H(0X4E, ctx->r29) = ctx->r11;
    after_0:
    // 0x80268ABC: addiu       $t9, $zero, 0x9
    ctx->r25 = ADD32(0, 0X9);
    // 0x80268AC0: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80268AC4: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x80268AC8: lui         $a3, 0x8028
    ctx->r7 = S32(0X8028 << 16);
    // 0x80268ACC: addiu       $t2, $zero, 0x18
    ctx->r10 = ADD32(0, 0X18);
    // 0x80268AD0: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x80268AD4: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x80268AD8: addiu       $t5, $zero, 0xC
    ctx->r13 = ADD32(0, 0XC);
    // 0x80268ADC: sb          $t9, -0x3883($at)
    MEM_B(-0X3883, ctx->r1) = ctx->r25;
    // 0x80268AE0: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x80268AE4: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x80268AE8: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x80268AEC: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80268AF0: addiu       $a3, $a3, 0x7568
    ctx->r7 = ADD32(ctx->r7, 0X7568);
    // 0x80268AF4: addiu       $a0, $a0, -0x3868
    ctx->r4 = ADD32(ctx->r4, -0X3868);
    // 0x80268AF8: addiu       $a1, $zero, 0x4D
    ctx->r5 = ADD32(0, 0X4D);
    // 0x80268AFC: addiu       $a2, $zero, 0x92
    ctx->r6 = ADD32(0, 0X92);
    // 0x80268B00: jal         0x8002F528
    // 0x80268B04: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
    func_8002F528(rdram, ctx);
        goto after_1;
    // 0x80268B04: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
    after_1:
    // 0x80268B08: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x80268B0C: addiu       $t7, $t7, -0x3770
    ctx->r15 = ADD32(ctx->r15, -0X3770);
    // 0x80268B10: sll         $t6, $s1, 5
    ctx->r14 = S32(ctx->r17 << 5);
    // 0x80268B14: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x80268B18: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x80268B1C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80268B20: addiu       $t8, $zero, 0x9
    ctx->r24 = ADD32(0, 0X9);
    // 0x80268B24: sb          $t8, -0x133($at)
    MEM_B(-0X133, ctx->r1) = ctx->r24;
    // 0x80268B28: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x80268B2C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80268B30: sll         $t3, $s1, 16
    ctx->r11 = S32(ctx->r17 << 16);
    // 0x80268B34: ori         $at, $at, 0xFEE8
    ctx->r1 = ctx->r1 | 0XFEE8;
    // 0x80268B38: lh          $a3, 0xAC($s0)
    ctx->r7 = MEM_H(ctx->r16, 0XAC);
    // 0x80268B3C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80268B40: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80268B44: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x80268B48: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80268B4C: addu        $a0, $v0, $at
    ctx->r4 = ADD32(ctx->r2, ctx->r1);
    // 0x80268B50: sra         $s1, $t3, 16
    ctx->r17 = S32(SIGNED(ctx->r11) >> 16);
    // 0x80268B54: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    // 0x80268B58: jal         0x8002F6EC
    // 0x80268B5C: addiu       $a2, $zero, 0xAA
    ctx->r6 = ADD32(0, 0XAA);
    func_8002F6EC(rdram, ctx);
        goto after_2;
    // 0x80268B5C: addiu       $a2, $zero, 0xAA
    ctx->r6 = ADD32(0, 0XAA);
    after_2:
    // 0x80268B60: sll         $t6, $s1, 5
    ctx->r14 = S32(ctx->r17 << 5);
    // 0x80268B64: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80268B68: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x80268B6C: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80268B70: addiu       $t5, $zero, 0x9
    ctx->r13 = ADD32(0, 0X9);
    // 0x80268B74: sb          $t5, -0x38A3($at)
    MEM_B(-0X38A3, ctx->r1) = ctx->r13;
    // 0x80268B78: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x80268B7C: lbu         $v0, 0x55($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X55);
    // 0x80268B80: lw          $s0, 0x0($t8)
    ctx->r16 = MEM_W(ctx->r24, 0X0);
    // 0x80268B84: lbu         $v1, 0x53($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X53);
    // 0x80268B88: lbu         $t0, 0x51($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X51);
    // 0x80268B8C: lbu         $t1, 0x4F($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X4F);
    // 0x80268B90: addiu       $t9, $zero, 0x88
    ctx->r25 = ADD32(0, 0X88);
    // 0x80268B94: addiu       $t2, $zero, 0x20
    ctx->r10 = ADD32(0, 0X20);
    // 0x80268B98: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x80268B9C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80268BA0: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    // 0x80268BA4: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    // 0x80268BA8: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    // 0x80268BAC: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    // 0x80268BB0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80268BB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80268BB8: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x80268BBC: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    // 0x80268BC0: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x80268BC4: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
    // 0x80268BC8: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x80268BCC: jal         0x8004A5E4
    // 0x80268BD0: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    func_8004A5E4(rdram, ctx);
        goto after_3;
    // 0x80268BD0: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    after_3:
    // 0x80268BD4: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80268BD8: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x80268BDC: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x80268BE0: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80268BE4: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x80268BE8: addiu       $t3, $zero, 0x30
    ctx->r11 = ADD32(0, 0X30);
    // 0x80268BEC: addiu       $t4, $zero, 0x20
    ctx->r12 = ADD32(0, 0X20);
    // 0x80268BF0: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x80268BF4: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80268BF8: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    // 0x80268BFC: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x80268C00: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x80268C04: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x80268C08: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x80268C0C: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x80268C10: jal         0x8004A5E4
    // 0x80268C14: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    func_8004A5E4(rdram, ctx);
        goto after_4;
    // 0x80268C14: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    after_4:
    // 0x80268C18: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x80268C1C: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x80268C20: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    // 0x80268C24: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x80268C28: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80268C2C: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x80268C30: addiu       $t2, $zero, 0xC0
    ctx->r10 = ADD32(0, 0XC0);
    // 0x80268C34: addiu       $t3, $zero, 0x98
    ctx->r11 = ADD32(0, 0X98);
    // 0x80268C38: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x80268C3C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80268C40: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    // 0x80268C44: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x80268C48: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    // 0x80268C4C: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x80268C50: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x80268C54: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x80268C58: jal         0x8004A5E4
    // 0x80268C5C: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    func_8004A5E4(rdram, ctx);
        goto after_5;
    // 0x80268C5C: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    after_5:
    // 0x80268C60: sll         $a1, $s1, 16
    ctx->r5 = S32(ctx->r17 << 16);
    // 0x80268C64: sra         $t8, $a1, 16
    ctx->r24 = S32(SIGNED(ctx->r5) >> 16);
    // 0x80268C68: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    // 0x80268C6C: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x80268C70: jal         0x80268D30
    // 0x80268C74: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_80264800_func_80268D30(rdram, ctx);
        goto after_6;
    // 0x80268C74: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x80268C78: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80268C7C: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x80268C80: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x80268C84: jr          $ra
    // 0x80268C88: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x80268C88: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void ovl_80264800_func_80268C8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80268C8C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80268C90: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80268C94: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80268C98: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80268C9C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80268CA0: addiu       $t6, $zero, 0x140
    ctx->r14 = ADD32(0, 0X140);
    // 0x80268CA4: addiu       $t7, $zero, 0xF0
    ctx->r15 = ADD32(0, 0XF0);
    // 0x80268CA8: addiu       $t8, $zero, 0xA3
    ctx->r24 = ADD32(0, 0XA3);
    // 0x80268CAC: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x80268CB0: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80268CB4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80268CB8: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    // 0x80268CBC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80268CC0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80268CC4: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80268CC8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80268CCC: jal         0x8004A5E4
    // 0x80268CD0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8004A5E4(rdram, ctx);
        goto after_0;
    // 0x80268CD0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x80268CD4: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80268CD8: addiu       $v0, $v0, -0x750
    ctx->r2 = ADD32(ctx->r2, -0X750);
    // 0x80268CDC: lh          $t9, 0x9E($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X9E);
    // 0x80268CE0: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x80268CE4: beq         $t9, $zero, L_80268D0C
    if (ctx->r25 == 0) {
        // 0x80268CE8: nop
    
            goto L_80268D0C;
    }
    // 0x80268CE8: nop

    // 0x80268CEC: lh          $t0, 0xAA($v0)
    ctx->r8 = MEM_H(ctx->r2, 0XAA);
    // 0x80268CF0: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80268CF4: bne         $t0, $at, L_80268D14
    if (ctx->r8 != ctx->r1) {
        // 0x80268CF8: addiu       $t2, $zero, 0x1
        ctx->r10 = ADD32(0, 0X1);
            goto L_80268D14;
    }
    // 0x80268CF8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80268CFC: lh          $t1, 0x98($v0)
    ctx->r9 = MEM_H(ctx->r2, 0X98);
    // 0x80268D00: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80268D04: bne         $t1, $at, L_80268D18
    if (ctx->r9 != ctx->r1) {
        // 0x80268D08: addiu       $t3, $zero, 0xA
        ctx->r11 = ADD32(0, 0XA);
            goto L_80268D18;
    }
    // 0x80268D08: addiu       $t3, $zero, 0xA
    ctx->r11 = ADD32(0, 0XA);
L_80268D0C:
    // 0x80268D0C: b           L_80268D20
    // 0x80268D10: sb          $zero, 0x4($v1)
    MEM_B(0X4, ctx->r3) = 0;
        goto L_80268D20;
    // 0x80268D10: sb          $zero, 0x4($v1)
    MEM_B(0X4, ctx->r3) = 0;
L_80268D14:
    // 0x80268D14: addiu       $t3, $zero, 0xA
    ctx->r11 = ADD32(0, 0XA);
L_80268D18:
    // 0x80268D18: sb          $t2, 0x4($v1)
    MEM_B(0X4, ctx->r3) = ctx->r10;
    // 0x80268D1C: sb          $t3, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r11;
L_80268D20:
    // 0x80268D20: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80268D24: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80268D28: jr          $ra
    // 0x80268D2C: nop

    return;
    // 0x80268D2C: nop

;}
RECOMP_FUNC void ovl_80264800_func_80268D30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80268D30: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80268D34: lui         $t4, 0x801B
    ctx->r12 = S32(0X801B << 16);
    // 0x80268D38: addiu       $t4, $t4, -0x750
    ctx->r12 = ADD32(ctx->r12, -0X750);
    // 0x80268D3C: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x80268D40: lh          $t7, 0x9E($t4)
    ctx->r15 = MEM_H(ctx->r12, 0X9E);
    // 0x80268D44: sll         $s1, $a1, 16
    ctx->r17 = S32(ctx->r5 << 16);
    // 0x80268D48: sra         $t6, $s1, 16
    ctx->r14 = S32(SIGNED(ctx->r17) >> 16);
    // 0x80268D4C: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x80268D50: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80268D54: or          $s1, $t6, $zero
    ctx->r17 = ctx->r14 | 0;
    // 0x80268D58: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80268D5C: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x80268D60: bne         $t7, $zero, L_80268D9C
    if (ctx->r15 != 0) {
        // 0x80268D64: sw          $a2, 0x40($sp)
        MEM_W(0X40, ctx->r29) = ctx->r6;
            goto L_80268D9C;
    }
    // 0x80268D64: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x80268D68: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x80268D6C: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x80268D70: sll         $t8, $t6, 5
    ctx->r24 = S32(ctx->r14 << 5);
    // 0x80268D74: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x80268D78: addiu       $t5, $t5, -0x3770
    ctx->r13 = ADD32(ctx->r13, -0X3770);
    // 0x80268D7C: addu        $t9, $t8, $at
    ctx->r25 = ADD32(ctx->r24, ctx->r1);
    // 0x80268D80: addu        $v0, $t9, $t5
    ctx->r2 = ADD32(ctx->r25, ctx->r13);
    // 0x80268D84: sb          $zero, 0x7EEC($v0)
    MEM_B(0X7EEC, ctx->r2) = 0;
    // 0x80268D88: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x80268D8C: nop

    // 0x80268D90: sb          $zero, 0x4($t6)
    MEM_B(0X4, ctx->r14) = 0;
    // 0x80268D94: b           L_80268EC8
    // 0x80268D98: sb          $zero, 0x4($a0)
    MEM_B(0X4, ctx->r4) = 0;
        goto L_80268EC8;
    // 0x80268D98: sb          $zero, 0x4($a0)
    MEM_B(0X4, ctx->r4) = 0;
L_80268D9C:
    // 0x80268D9C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x80268DA0: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x80268DA4: sll         $t7, $s1, 5
    ctx->r15 = S32(ctx->r17 << 5);
    // 0x80268DA8: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x80268DAC: addiu       $t9, $t9, -0x3770
    ctx->r25 = ADD32(ctx->r25, -0X3770);
    // 0x80268DB0: addu        $t8, $t7, $at
    ctx->r24 = ADD32(ctx->r15, ctx->r1);
    // 0x80268DB4: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x80268DB8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80268DBC: sb          $v1, 0x7EEC($v0)
    MEM_B(0X7EEC, ctx->r2) = ctx->r3;
    // 0x80268DC0: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x80268DC4: lui         $t9, 0x8027
    ctx->r25 = S32(0X8027 << 16);
    // 0x80268DC8: sb          $v1, 0x4($t6)
    MEM_B(0X4, ctx->r14) = ctx->r3;
    // 0x80268DCC: sb          $v1, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r3;
    // 0x80268DD0: lh          $t7, 0x9E($t4)
    ctx->r15 = MEM_H(ctx->r12, 0X9E);
    // 0x80268DD4: addiu       $t5, $zero, 0xB
    ctx->r13 = ADD32(0, 0XB);
    // 0x80268DD8: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80268DDC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80268DE0: lw          $t9, -0x6344($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X6344);
    // 0x80268DE4: sb          $t5, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r13;
    // 0x80268DE8: sw          $t9, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r25;
    // 0x80268DEC: lh          $t7, 0x9E($t4)
    ctx->r15 = MEM_H(ctx->r12, 0X9E);
    // 0x80268DF0: lui         $t9, 0x8027
    ctx->r25 = S32(0X8027 << 16);
    // 0x80268DF4: sll         $a0, $s1, 16
    ctx->r4 = S32(ctx->r17 << 16);
    // 0x80268DF8: sra         $t6, $a0, 16
    ctx->r14 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80268DFC: addiu       $t9, $t9, -0x62F0
    ctx->r25 = ADD32(ctx->r25, -0X62F0);
    // 0x80268E00: sll         $t8, $t7, 4
    ctx->r24 = S32(ctx->r15 << 4);
    // 0x80268E04: addu        $a1, $t8, $t9
    ctx->r5 = ADD32(ctx->r24, ctx->r25);
    // 0x80268E08: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x80268E0C: jal         0x8002F444
    // 0x80268E10: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8002F444(rdram, ctx);
        goto after_0;
    // 0x80268E10: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x80268E14: lb          $t8, 0x43($sp)
    ctx->r24 = MEM_B(ctx->r29, 0X43);
    // 0x80268E18: sll         $s1, $v0, 16
    ctx->r17 = S32(ctx->r2 << 16);
    // 0x80268E1C: sll         $t7, $v0, 5
    ctx->r15 = S32(ctx->r2 << 5);
    // 0x80268E20: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80268E24: sra         $t5, $s1, 16
    ctx->r13 = S32(SIGNED(ctx->r17) >> 16);
    // 0x80268E28: lui         $t4, 0x801B
    ctx->r12 = S32(0X801B << 16);
    // 0x80268E2C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80268E30: addiu       $t6, $zero, 0xB
    ctx->r14 = ADD32(0, 0XB);
    // 0x80268E34: addiu       $t4, $t4, -0x750
    ctx->r12 = ADD32(ctx->r12, -0X750);
    // 0x80268E38: or          $s1, $t5, $zero
    ctx->r17 = ctx->r13 | 0;
    // 0x80268E3C: bne         $t8, $zero, L_80268E54
    if (ctx->r24 != 0) {
        // 0x80268E40: sb          $t6, -0x38A3($at)
        MEM_B(-0X38A3, ctx->r1) = ctx->r14;
            goto L_80268E54;
    }
    // 0x80268E40: sb          $t6, -0x38A3($at)
    MEM_B(-0X38A3, ctx->r1) = ctx->r14;
    // 0x80268E44: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
    // 0x80268E48: or          $t2, $zero, $zero
    ctx->r10 = 0 | 0;
    // 0x80268E4C: b           L_80268E60
    // 0x80268E50: addiu       $t3, $zero, 0x2C
    ctx->r11 = ADD32(0, 0X2C);
        goto L_80268E60;
    // 0x80268E50: addiu       $t3, $zero, 0x2C
    ctx->r11 = ADD32(0, 0X2C);
L_80268E54:
    // 0x80268E54: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80268E58: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80268E5C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
L_80268E60:
    // 0x80268E60: lh          $v0, 0x9E($t4)
    ctx->r2 = MEM_H(ctx->r12, 0X9E);
    // 0x80268E64: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80268E68: lui         $t5, 0x8027
    ctx->r13 = S32(0X8027 << 16);
    // 0x80268E6C: lui         $t6, 0x8027
    ctx->r14 = S32(0X8027 << 16);
    // 0x80268E70: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x80268E74: addiu       $t6, $t6, -0x6004
    ctx->r14 = ADD32(ctx->r14, -0X6004);
    // 0x80268E78: addiu       $t5, $t5, -0x6058
    ctx->r13 = ADD32(ctx->r13, -0X6058);
    // 0x80268E7C: addu        $v1, $t9, $t5
    ctx->r3 = ADD32(ctx->r25, ctx->r13);
    // 0x80268E80: addu        $t0, $t9, $t6
    ctx->r8 = ADD32(ctx->r25, ctx->r14);
    // 0x80268E84: lh          $t7, 0x0($t0)
    ctx->r15 = MEM_H(ctx->r8, 0X0);
    // 0x80268E88: lh          $t8, 0x2($t0)
    ctx->r24 = MEM_H(ctx->r8, 0X2);
    // 0x80268E8C: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    // 0x80268E90: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x80268E94: lh          $a2, 0x0($v1)
    ctx->r6 = MEM_H(ctx->r3, 0X0);
    // 0x80268E98: lh          $a3, 0x2($v1)
    ctx->r7 = MEM_H(ctx->r3, 0X2);
    // 0x80268E9C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80268EA0: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x80268EA4: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x80268EA8: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x80268EAC: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    // 0x80268EB0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80268EB4: jal         0x8004A5E4
    // 0x80268EB8: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    func_8004A5E4(rdram, ctx);
        goto after_1;
    // 0x80268EB8: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    after_1:
    // 0x80268EBC: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x80268EC0: addiu       $t5, $zero, 0xA
    ctx->r13 = ADD32(0, 0XA);
    // 0x80268EC4: sb          $t5, 0x5($t6)
    MEM_B(0X5, ctx->r14) = ctx->r13;
L_80268EC8:
    // 0x80268EC8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80268ECC: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x80268ED0: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x80268ED4: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x80268ED8: jr          $ra
    // 0x80268EDC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80268EDC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_80264800_func_80268D7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80268D7C: addu        $t9, $t8, $at
    ctx->r25 = ADD32(ctx->r24, ctx->r1);
    // 0x80268D80: addu        $v0, $t9, $t5
    ctx->r2 = ADD32(ctx->r25, ctx->r13);
    // 0x80268D84: sb          $zero, 0x7EEC($v0)
    MEM_B(0X7EEC, ctx->r2) = 0;
    // 0x80268D88: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x80268D8C: nop

    // 0x80268D90: sb          $zero, 0x4($t6)
    MEM_B(0X4, ctx->r14) = 0;
    // 0x80268D94: b           L_80268EC8
    // 0x80268D98: sb          $zero, 0x4($a0)
    MEM_B(0X4, ctx->r4) = 0;
        goto L_80268EC8;
    // 0x80268D98: sb          $zero, 0x4($a0)
    MEM_B(0X4, ctx->r4) = 0;
    // 0x80268D9C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x80268DA0: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x80268DA4: sll         $t7, $s1, 5
    ctx->r15 = S32(ctx->r17 << 5);
    // 0x80268DA8: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x80268DAC: addiu       $t9, $t9, -0x3770
    ctx->r25 = ADD32(ctx->r25, -0X3770);
    // 0x80268DB0: addu        $t8, $t7, $at
    ctx->r24 = ADD32(ctx->r15, ctx->r1);
    // 0x80268DB4: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x80268DB8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80268DBC: sb          $v1, 0x7EEC($v0)
    MEM_B(0X7EEC, ctx->r2) = ctx->r3;
    // 0x80268DC0: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x80268DC4: lui         $t9, 0x8027
    ctx->r25 = S32(0X8027 << 16);
    // 0x80268DC8: sb          $v1, 0x4($t6)
    MEM_B(0X4, ctx->r14) = ctx->r3;
    // 0x80268DCC: sb          $v1, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r3;
    // 0x80268DD0: lh          $t7, 0x9E($t4)
    ctx->r15 = MEM_H(ctx->r12, 0X9E);
    // 0x80268DD4: addiu       $t5, $zero, 0xB
    ctx->r13 = ADD32(0, 0XB);
    // 0x80268DD8: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80268DDC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80268DE0: lw          $t9, -0x6344($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X6344);
    // 0x80268DE4: sb          $t5, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r13;
    // 0x80268DE8: sw          $t9, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r25;
    // 0x80268DEC: lh          $t7, 0x9E($t4)
    ctx->r15 = MEM_H(ctx->r12, 0X9E);
    // 0x80268DF0: lui         $t9, 0x8027
    ctx->r25 = S32(0X8027 << 16);
    // 0x80268DF4: sll         $a0, $s1, 16
    ctx->r4 = S32(ctx->r17 << 16);
    // 0x80268DF8: sra         $t6, $a0, 16
    ctx->r14 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80268DFC: addiu       $t9, $t9, -0x62F0
    ctx->r25 = ADD32(ctx->r25, -0X62F0);
    // 0x80268E00: sll         $t8, $t7, 4
    ctx->r24 = S32(ctx->r15 << 4);
    // 0x80268E04: addu        $a1, $t8, $t9
    ctx->r5 = ADD32(ctx->r24, ctx->r25);
    // 0x80268E08: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x80268E0C: jal         0x8002F444
    // 0x80268E10: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8002F444(rdram, ctx);
        goto after_0;
    // 0x80268E10: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x80268E14: lb          $t8, 0x43($sp)
    ctx->r24 = MEM_B(ctx->r29, 0X43);
    // 0x80268E18: sll         $s1, $v0, 16
    ctx->r17 = S32(ctx->r2 << 16);
    // 0x80268E1C: sll         $t7, $v0, 5
    ctx->r15 = S32(ctx->r2 << 5);
    // 0x80268E20: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80268E24: sra         $t5, $s1, 16
    ctx->r13 = S32(SIGNED(ctx->r17) >> 16);
    // 0x80268E28: lui         $t4, 0x801B
    ctx->r12 = S32(0X801B << 16);
    // 0x80268E2C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80268E30: addiu       $t6, $zero, 0xB
    ctx->r14 = ADD32(0, 0XB);
    // 0x80268E34: addiu       $t4, $t4, -0x750
    ctx->r12 = ADD32(ctx->r12, -0X750);
    // 0x80268E38: or          $s1, $t5, $zero
    ctx->r17 = ctx->r13 | 0;
    // 0x80268E3C: bne         $t8, $zero, L_80268E54
    if (ctx->r24 != 0) {
        // 0x80268E40: sb          $t6, -0x38A3($at)
        MEM_B(-0X38A3, ctx->r1) = ctx->r14;
            goto L_80268E54;
    }
    // 0x80268E40: sb          $t6, -0x38A3($at)
    MEM_B(-0X38A3, ctx->r1) = ctx->r14;
    // 0x80268E44: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
    // 0x80268E48: or          $t2, $zero, $zero
    ctx->r10 = 0 | 0;
    // 0x80268E4C: b           L_80268E60
    // 0x80268E50: addiu       $t3, $zero, 0x2C
    ctx->r11 = ADD32(0, 0X2C);
        goto L_80268E60;
    // 0x80268E50: addiu       $t3, $zero, 0x2C
    ctx->r11 = ADD32(0, 0X2C);
L_80268E54:
    // 0x80268E54: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80268E58: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80268E5C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
L_80268E60:
    // 0x80268E60: lh          $v0, 0x9E($t4)
    ctx->r2 = MEM_H(ctx->r12, 0X9E);
    // 0x80268E64: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80268E68: lui         $t5, 0x8027
    ctx->r13 = S32(0X8027 << 16);
    // 0x80268E6C: lui         $t6, 0x8027
    ctx->r14 = S32(0X8027 << 16);
    // 0x80268E70: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x80268E74: addiu       $t6, $t6, -0x6004
    ctx->r14 = ADD32(ctx->r14, -0X6004);
    // 0x80268E78: addiu       $t5, $t5, -0x6058
    ctx->r13 = ADD32(ctx->r13, -0X6058);
    // 0x80268E7C: addu        $v1, $t9, $t5
    ctx->r3 = ADD32(ctx->r25, ctx->r13);
    // 0x80268E80: addu        $t0, $t9, $t6
    ctx->r8 = ADD32(ctx->r25, ctx->r14);
    // 0x80268E84: lh          $t7, 0x0($t0)
    ctx->r15 = MEM_H(ctx->r8, 0X0);
    // 0x80268E88: lh          $t8, 0x2($t0)
    ctx->r24 = MEM_H(ctx->r8, 0X2);
    // 0x80268E8C: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    // 0x80268E90: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x80268E94: lh          $a2, 0x0($v1)
    ctx->r6 = MEM_H(ctx->r3, 0X0);
    // 0x80268E98: lh          $a3, 0x2($v1)
    ctx->r7 = MEM_H(ctx->r3, 0X2);
    // 0x80268E9C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80268EA0: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x80268EA4: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x80268EA8: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x80268EAC: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    // 0x80268EB0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80268EB4: jal         0x8004A5E4
    // 0x80268EB8: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    func_8004A5E4(rdram, ctx);
        goto after_1;
    // 0x80268EB8: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    after_1:
    // 0x80268EBC: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x80268EC0: addiu       $t5, $zero, 0xA
    ctx->r13 = ADD32(0, 0XA);
    // 0x80268EC4: sb          $t5, 0x5($t6)
    MEM_B(0X5, ctx->r14) = ctx->r13;
L_80268EC8:
    // 0x80268EC8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80268ECC: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x80268ED0: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x80268ED4: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x80268ED8: jr          $ra
    // 0x80268EDC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80268EDC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_80264800_func_80268E54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80268E54: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80268E58: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80268E5C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80268E60: lh          $v0, 0x9E($t4)
    ctx->r2 = MEM_H(ctx->r12, 0X9E);
    // 0x80268E64: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80268E68: lui         $t5, 0x8027
    ctx->r13 = S32(0X8027 << 16);
    // 0x80268E6C: lui         $t6, 0x8027
    ctx->r14 = S32(0X8027 << 16);
    // 0x80268E70: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x80268E74: addiu       $t6, $t6, -0x6004
    ctx->r14 = ADD32(ctx->r14, -0X6004);
    // 0x80268E78: addiu       $t5, $t5, -0x6058
    ctx->r13 = ADD32(ctx->r13, -0X6058);
    // 0x80268E7C: addu        $v1, $t9, $t5
    ctx->r3 = ADD32(ctx->r25, ctx->r13);
    // 0x80268E80: addu        $t0, $t9, $t6
    ctx->r8 = ADD32(ctx->r25, ctx->r14);
    // 0x80268E84: lh          $t7, 0x0($t0)
    ctx->r15 = MEM_H(ctx->r8, 0X0);
    // 0x80268E88: lh          $t8, 0x2($t0)
    ctx->r24 = MEM_H(ctx->r8, 0X2);
    // 0x80268E8C: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    // 0x80268E90: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x80268E94: lh          $a2, 0x0($v1)
    ctx->r6 = MEM_H(ctx->r3, 0X0);
    // 0x80268E98: lh          $a3, 0x2($v1)
    ctx->r7 = MEM_H(ctx->r3, 0X2);
    // 0x80268E9C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80268EA0: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x80268EA4: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x80268EA8: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x80268EAC: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    // 0x80268EB0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80268EB4: jal         0x8004A5E4
    // 0x80268EB8: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    func_8004A5E4(rdram, ctx);
        goto after_0;
    // 0x80268EB8: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    after_0:
    // 0x80268EBC: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x80268EC0: addiu       $t5, $zero, 0xA
    ctx->r13 = ADD32(0, 0XA);
    // 0x80268EC4: sb          $t5, 0x5($t6)
    MEM_B(0X5, ctx->r14) = ctx->r13;
    // 0x80268EC8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80268ECC: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x80268ED0: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x80268ED4: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x80268ED8: jr          $ra
    // 0x80268EDC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80268EDC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_80264800_func_80268EBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80268EBC: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x80268EC0: addiu       $t5, $zero, 0xA
    ctx->r13 = ADD32(0, 0XA);
    // 0x80268EC4: sb          $t5, 0x5($t6)
    MEM_B(0X5, ctx->r14) = ctx->r13;
    // 0x80268EC8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80268ECC: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x80268ED0: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x80268ED4: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x80268ED8: jr          $ra
    // 0x80268EDC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80268EDC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_80264800_func_80268EE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80268EE0: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80268EE4: addiu       $v1, $v1, -0x750
    ctx->r3 = ADD32(ctx->r3, -0X750);
    // 0x80268EE8: lh          $t6, 0x9C($v1)
    ctx->r14 = MEM_H(ctx->r3, 0X9C);
    // 0x80268EEC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80268EF0: bne         $t6, $zero, L_80268F20
    if (ctx->r14 != 0) {
        // 0x80268EF4: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80268F20;
    }
    // 0x80268EF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80268EF8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80268EFC: addiu       $v0, $v0, 0xE30
    ctx->r2 = ADD32(ctx->r2, 0XE30);
    // 0x80268F00: lbu         $t7, 0x0($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X0);
    // 0x80268F04: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x80268F08: bne         $t7, $zero, L_80268F18
    if (ctx->r15 != 0) {
        // 0x80268F0C: nop
    
            goto L_80268F18;
    }
    // 0x80268F0C: nop

    // 0x80268F10: b           L_80268F5C
    // 0x80268F14: sh          $zero, 0xA6($v1)
    MEM_H(0XA6, ctx->r3) = 0;
        goto L_80268F5C;
    // 0x80268F14: sh          $zero, 0xA6($v1)
    MEM_H(0XA6, ctx->r3) = 0;
L_80268F18:
    // 0x80268F18: b           L_80268F5C
    // 0x80268F1C: sh          $t8, 0xA6($v1)
    MEM_H(0XA6, ctx->r3) = ctx->r24;
        goto L_80268F5C;
    // 0x80268F1C: sh          $t8, 0xA6($v1)
    MEM_H(0XA6, ctx->r3) = ctx->r24;
L_80268F20:
    // 0x80268F20: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80268F24: addiu       $v0, $v0, 0xE30
    ctx->r2 = ADD32(ctx->r2, 0XE30);
    // 0x80268F28: lbu         $t9, 0x1($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X1);
    // 0x80268F2C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80268F30: bne         $t9, $zero, L_80268F40
    if (ctx->r25 != 0) {
        // 0x80268F34: nop
    
            goto L_80268F40;
    }
    // 0x80268F34: nop

    // 0x80268F38: b           L_80268F5C
    // 0x80268F3C: sh          $t0, 0xA6($v1)
    MEM_H(0XA6, ctx->r3) = ctx->r8;
        goto L_80268F5C;
    // 0x80268F3C: sh          $t0, 0xA6($v1)
    MEM_H(0XA6, ctx->r3) = ctx->r8;
L_80268F40:
    // 0x80268F40: lbu         $t1, 0x0($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X0);
    // 0x80268F44: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x80268F48: bne         $t1, $zero, L_80268F58
    if (ctx->r9 != 0) {
        // 0x80268F4C: nop
    
            goto L_80268F58;
    }
    // 0x80268F4C: nop

    // 0x80268F50: b           L_80268F5C
    // 0x80268F54: sh          $zero, 0xA6($v1)
    MEM_H(0XA6, ctx->r3) = 0;
        goto L_80268F5C;
    // 0x80268F54: sh          $zero, 0xA6($v1)
    MEM_H(0XA6, ctx->r3) = 0;
L_80268F58:
    // 0x80268F58: sh          $t2, 0xA6($v1)
    MEM_H(0XA6, ctx->r3) = ctx->r10;
L_80268F5C:
    // 0x80268F5C: lh          $v0, 0xA6($v1)
    ctx->r2 = MEM_H(ctx->r3, 0XA6);
    // 0x80268F60: nop

    // 0x80268F64: bltz        $v0, L_80268F98
    if (SIGNED(ctx->r2) < 0) {
        // 0x80268F68: sll         $a0, $v0, 24
        ctx->r4 = S32(ctx->r2 << 24);
            goto L_80268F98;
    }
    // 0x80268F68: sll         $a0, $v0, 24
    ctx->r4 = S32(ctx->r2 << 24);
    // 0x80268F6C: sra         $t3, $a0, 24
    ctx->r11 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80268F70: jal         0x80034940
    // 0x80268F74: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    func_80034940(rdram, ctx);
        goto after_0;
    // 0x80268F74: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    after_0:
    // 0x80268F78: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80268F7C: beq         $v0, $zero, L_80268F98
    if (ctx->r2 == 0) {
        // 0x80268F80: addiu       $v1, $v1, -0x750
        ctx->r3 = ADD32(ctx->r3, -0X750);
            goto L_80268F98;
    }
    // 0x80268F80: addiu       $v1, $v1, -0x750
    ctx->r3 = ADD32(ctx->r3, -0X750);
    // 0x80268F84: lb          $a0, 0xA7($v1)
    ctx->r4 = MEM_B(ctx->r3, 0XA7);
    // 0x80268F88: jal         0x80034940
    // 0x80268F8C: nop

    func_80034940(rdram, ctx);
        goto after_1;
    // 0x80268F8C: nop

    after_1:
    // 0x80268F90: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80268F94: addiu       $v1, $v1, -0x750
    ctx->r3 = ADD32(ctx->r3, -0X750);
L_80268F98:
    // 0x80268F98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80268F9C: lh          $v0, 0xA6($v1)
    ctx->r2 = MEM_H(ctx->r3, 0XA6);
    // 0x80268FA0: jr          $ra
    // 0x80268FA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80268FA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void ovl_80264800_func_80268FA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80268FA8: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80268FAC: lw          $t6, -0x3040($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3040);
    // 0x80268FB0: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80268FB4: addiu       $v1, $v1, -0x750
    ctx->r3 = ADD32(ctx->r3, -0X750);
    // 0x80268FB8: sh          $t6, 0xA4($v1)
    MEM_H(0XA4, ctx->r3) = ctx->r14;
    // 0x80268FBC: lh          $v0, 0xA4($v1)
    ctx->r2 = MEM_H(ctx->r3, 0XA4);
    // 0x80268FC0: jr          $ra
    // 0x80268FC4: nop

    return;
    // 0x80268FC4: nop

;}
RECOMP_FUNC void ovl_80264800_func_80268FC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80268FC8: jr          $ra
    // 0x80268FCC: nop

    return;
    // 0x80268FCC: nop

;}
RECOMP_FUNC void ovl_80264800_func_80268FD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80268FD0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80268FD4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80268FD8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80268FDC: lbu         $a0, 0x23($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X23);
    // 0x80268FE0: jal         0x80022094
    // 0x80268FE4: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    func_80022094(rdram, ctx);
        goto after_0;
    // 0x80268FE4: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_0:
    // 0x80268FE8: lbu         $t6, 0x23($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X23);
    // 0x80268FEC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80268FF0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80268FF4: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80268FF8: bne         $v0, $zero, L_80269024
    if (ctx->r2 != 0) {
        // 0x80268FFC: sw          $v0, -0x303C($at)
        MEM_W(-0X303C, ctx->r1) = ctx->r2;
            goto L_80269024;
    }
    // 0x80268FFC: sw          $v0, -0x303C($at)
    MEM_W(-0X303C, ctx->r1) = ctx->r2;
    // 0x80269000: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80269004: addiu       $at, $zero, 0x3D00
    ctx->r1 = ADD32(0, 0X3D00);
    // 0x80269008: divu        $zero, $t8, $at
    lo = S32(U32(ctx->r24) / U32(ctx->r1)); hi = S32(U32(ctx->r24) % U32(ctx->r1));
    // 0x8026900C: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80269010: addiu       $v1, $v1, -0x750
    ctx->r3 = ADD32(ctx->r3, -0X750);
    // 0x80269014: mflo        $t9
    ctx->r25 = lo;
    // 0x80269018: sh          $t9, 0xAC($v1)
    MEM_H(0XAC, ctx->r3) = ctx->r25;
    // 0x8026901C: b           L_80269034
    // 0x80269020: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80269034;
    // 0x80269020: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80269024:
    // 0x80269024: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80269028: addiu       $v1, $v1, -0x750
    ctx->r3 = ADD32(ctx->r3, -0X750);
    // 0x8026902C: sh          $zero, 0xAC($v1)
    MEM_H(0XAC, ctx->r3) = 0;
    // 0x80269030: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80269034:
    // 0x80269034: lh          $v0, 0xAC($v1)
    ctx->r2 = MEM_H(ctx->r3, 0XAC);
    // 0x80269038: jr          $ra
    // 0x8026903C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8026903C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_80264800_func_80269040(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80269040: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80269044: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80269048: sll         $s0, $a1, 16
    ctx->r16 = S32(ctx->r5 << 16);
    // 0x8026904C: sra         $t6, $s0, 16
    ctx->r14 = S32(SIGNED(ctx->r16) >> 16);
    // 0x80269050: sll         $t7, $a2, 16
    ctx->r15 = S32(ctx->r6 << 16);
    // 0x80269054: sra         $t8, $t7, 16
    ctx->r24 = S32(SIGNED(ctx->r15) >> 16);
    // 0x80269058: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x8026905C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80269060: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80269064: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80269068: bltz        $t6, L_8026911C
    if (SIGNED(ctx->r14) < 0) {
        // 0x8026906C: sw          $a2, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r6;
            goto L_8026911C;
    }
    // 0x8026906C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80269070: sll         $a0, $t6, 24
    ctx->r4 = S32(ctx->r14 << 24);
    // 0x80269074: sra         $t9, $a0, 24
    ctx->r25 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80269078: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x8026907C: jal         0x80034940
    // 0x80269080: sh          $t8, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r24;
    func_80034940(rdram, ctx);
        goto after_0;
    // 0x80269080: sh          $t8, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r24;
    after_0:
    // 0x80269084: lh          $a2, 0x2A($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X2A);
    // 0x80269088: bne         $v0, $zero, L_802690F4
    if (ctx->r2 != 0) {
        // 0x8026908C: lui         $a1, 0x8012
        ctx->r5 = S32(0X8012 << 16);
            goto L_802690F4;
    }
    // 0x8026908C: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80269090: addiu       $a1, $a1, -0x3070
    ctx->r5 = ADD32(ctx->r5, -0X3070);
    // 0x80269094: sll         $t0, $a2, 1
    ctx->r8 = S32(ctx->r6 << 1);
    // 0x80269098: addu        $t1, $a1, $t0
    ctx->r9 = ADD32(ctx->r5, ctx->r8);
    // 0x8026909C: lh          $t2, 0x8($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X8);
    // 0x802690A0: lh          $v1, 0x22($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X22);
    // 0x802690A4: bltz        $t2, L_802690EC
    if (SIGNED(ctx->r10) < 0) {
        // 0x802690A8: sll         $t3, $v1, 1
        ctx->r11 = S32(ctx->r3 << 1);
            goto L_802690EC;
    }
    // 0x802690A8: sll         $t3, $v1, 1
    ctx->r11 = S32(ctx->r3 << 1);
    // 0x802690AC: addu        $v0, $a1, $t3
    ctx->r2 = ADD32(ctx->r5, ctx->r11);
    // 0x802690B0: sh          $s0, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r16;
    // 0x802690B4: sh          $a2, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r6;
    // 0x802690B8: jal         0x80034EE0
    // 0x802690BC: andi        $a0, $v1, 0xFF
    ctx->r4 = ctx->r3 & 0XFF;
    func_80034EE0(rdram, ctx);
        goto after_1;
    // 0x802690BC: andi        $a0, $v1, 0xFF
    ctx->r4 = ctx->r3 & 0XFF;
    after_1:
    // 0x802690C0: beq         $v0, $zero, L_802690F4
    if (ctx->r2 == 0) {
        // 0x802690C4: nop
    
            goto L_802690F4;
    }
    // 0x802690C4: nop

    // 0x802690C8: lh          $a0, 0x22($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X22);
    // 0x802690CC: jal         0x80269334
    // 0x802690D0: nop

    ovl_80264800_func_80269334(rdram, ctx);
        goto after_2;
    // 0x802690D0: nop

    after_2:
    // 0x802690D4: sll         $t4, $s0, 2
    ctx->r12 = S32(ctx->r16 << 2);
    // 0x802690D8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x802690DC: addu        $v0, $v0, $t4
    ctx->r2 = ADD32(ctx->r2, ctx->r12);
    // 0x802690E0: lh          $v0, -0x303A($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X303A);
    // 0x802690E4: b           L_80269124
    // 0x802690E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80269124;
    // 0x802690E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802690EC:
    // 0x802690EC: b           L_80269120
    // 0x802690F0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_80269120;
    // 0x802690F0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_802690F4:
    // 0x802690F4: jal         0x80268FA8
    // 0x802690F8: nop

    ovl_80264800_func_80268FA8(rdram, ctx);
        goto after_3;
    // 0x802690F8: nop

    after_3:
    // 0x802690FC: jal         0x80268FD0
    // 0x80269100: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    ovl_80264800_func_80268FD0(rdram, ctx);
        goto after_4;
    // 0x80269100: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_4:
    // 0x80269104: sll         $t5, $s0, 2
    ctx->r13 = S32(ctx->r16 << 2);
    // 0x80269108: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8026910C: addu        $v0, $v0, $t5
    ctx->r2 = ADD32(ctx->r2, ctx->r13);
    // 0x80269110: lh          $v0, -0x303A($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X303A);
    // 0x80269114: b           L_80269124
    // 0x80269118: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80269124;
    // 0x80269118: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8026911C:
    // 0x8026911C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_80269120:
    // 0x80269120: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80269124:
    // 0x80269124: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80269128: jr          $ra
    // 0x8026912C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8026912C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_80264800_func_80269130(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80269130: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80269134: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80269138: sll         $s0, $a0, 16
    ctx->r16 = S32(ctx->r4 << 16);
    // 0x8026913C: sra         $t6, $s0, 16
    ctx->r14 = S32(SIGNED(ctx->r16) >> 16);
    // 0x80269140: sll         $t7, $a1, 16
    ctx->r15 = S32(ctx->r5 << 16);
    // 0x80269144: sra         $t8, $t7, 16
    ctx->r24 = S32(SIGNED(ctx->r15) >> 16);
    // 0x80269148: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x8026914C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80269150: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80269154: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80269158: bltz        $t6, L_8026923C
    if (SIGNED(ctx->r14) < 0) {
        // 0x8026915C: sw          $a1, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r5;
            goto L_8026923C;
    }
    // 0x8026915C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80269160: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x80269164: addiu       $s1, $s1, -0x3070
    ctx->r17 = ADD32(ctx->r17, -0X3070);
    // 0x80269168: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x8026916C: addu        $t0, $s1, $t9
    ctx->r8 = ADD32(ctx->r17, ctx->r25);
    // 0x80269170: lh          $t1, 0x8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X8);
    // 0x80269174: sll         $a0, $t8, 16
    ctx->r4 = S32(ctx->r24 << 16);
    // 0x80269178: bltz        $t1, L_80269234
    if (SIGNED(ctx->r9) < 0) {
        // 0x8026917C: sra         $t2, $a0, 16
        ctx->r10 = S32(SIGNED(ctx->r4) >> 16);
            goto L_80269234;
    }
    // 0x8026917C: sra         $t2, $a0, 16
    ctx->r10 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80269180: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x80269184: jal         0x80035438
    // 0x80269188: sh          $t8, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r24;
    func_80035438(rdram, ctx);
        goto after_0;
    // 0x80269188: sh          $t8, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r24;
    after_0:
    // 0x8026918C: sll         $a0, $s0, 24
    ctx->r4 = S32(ctx->r16 << 24);
    // 0x80269190: sll         $a1, $v0, 24
    ctx->r5 = S32(ctx->r2 << 24);
    // 0x80269194: sra         $t4, $a1, 24
    ctx->r12 = S32(SIGNED(ctx->r5) >> 24);
    // 0x80269198: sra         $t3, $a0, 24
    ctx->r11 = S32(SIGNED(ctx->r4) >> 24);
    // 0x8026919C: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    // 0x802691A0: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x802691A4: jal         0x80034D7C
    // 0x802691A8: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
    func_80034D7C(rdram, ctx);
        goto after_1;
    // 0x802691A8: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
    after_1:
    // 0x802691AC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x802691B0: bne         $v0, $zero, L_80269224
    if (ctx->r2 != 0) {
        // 0x802691B4: sll         $t1, $s0, 2
        ctx->r9 = S32(ctx->r16 << 2);
            goto L_80269224;
    }
    // 0x802691B4: sll         $t1, $s0, 2
    ctx->r9 = S32(ctx->r16 << 2);
    // 0x802691B8: jal         0x80034940
    // 0x802691BC: nop

    func_80034940(rdram, ctx);
        goto after_2;
    // 0x802691BC: nop

    after_2:
    // 0x802691C0: jal         0x80268FA8
    // 0x802691C4: nop

    ovl_80264800_func_80268FA8(rdram, ctx);
        goto after_3;
    // 0x802691C4: nop

    after_3:
    // 0x802691C8: jal         0x80268FD0
    // 0x802691CC: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    ovl_80264800_func_80268FD0(rdram, ctx);
        goto after_4;
    // 0x802691CC: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_4:
    // 0x802691D0: lh          $t5, 0x0($s1)
    ctx->r13 = MEM_H(ctx->r17, 0X0);
    // 0x802691D4: lh          $t6, 0x2E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X2E);
    // 0x802691D8: bne         $s0, $t5, L_802691F8
    if (ctx->r16 != ctx->r13) {
        // 0x802691DC: nop
    
            goto L_802691F8;
    }
    // 0x802691DC: nop

    // 0x802691E0: lh          $t7, 0x4($s1)
    ctx->r15 = MEM_H(ctx->r17, 0X4);
    // 0x802691E4: nop

    // 0x802691E8: bne         $t6, $t7, L_802691F8
    if (ctx->r14 != ctx->r15) {
        // 0x802691EC: nop
    
            goto L_802691F8;
    }
    // 0x802691EC: nop

    // 0x802691F0: jal         0x80269334
    // 0x802691F4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_80264800_func_80269334(rdram, ctx);
        goto after_5;
    // 0x802691F4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_5:
L_802691F8:
    // 0x802691F8: lh          $t8, 0x2($s1)
    ctx->r24 = MEM_H(ctx->r17, 0X2);
    // 0x802691FC: lh          $t9, 0x2E($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X2E);
    // 0x80269200: bne         $s0, $t8, L_80269224
    if (ctx->r16 != ctx->r24) {
        // 0x80269204: sll         $t1, $s0, 2
        ctx->r9 = S32(ctx->r16 << 2);
            goto L_80269224;
    }
    // 0x80269204: sll         $t1, $s0, 2
    ctx->r9 = S32(ctx->r16 << 2);
    // 0x80269208: lh          $t0, 0x6($s1)
    ctx->r8 = MEM_H(ctx->r17, 0X6);
    // 0x8026920C: nop

    // 0x80269210: bne         $t9, $t0, L_80269224
    if (ctx->r25 != ctx->r8) {
        // 0x80269214: sll         $t1, $s0, 2
        ctx->r9 = S32(ctx->r16 << 2);
            goto L_80269224;
    }
    // 0x80269214: sll         $t1, $s0, 2
    ctx->r9 = S32(ctx->r16 << 2);
    // 0x80269218: jal         0x80269334
    // 0x8026921C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_80264800_func_80269334(rdram, ctx);
        goto after_6;
    // 0x8026921C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_6:
    // 0x80269220: sll         $t1, $s0, 2
    ctx->r9 = S32(ctx->r16 << 2);
L_80269224:
    // 0x80269224: addu        $t2, $s1, $t1
    ctx->r10 = ADD32(ctx->r17, ctx->r9);
    // 0x80269228: lh          $v0, 0x36($t2)
    ctx->r2 = MEM_H(ctx->r10, 0X36);
    // 0x8026922C: b           L_80269244
    // 0x80269230: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80269244;
    // 0x80269230: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80269234:
    // 0x80269234: b           L_80269240
    // 0x80269238: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_80269240;
    // 0x80269238: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_8026923C:
    // 0x8026923C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80269240:
    // 0x80269240: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80269244:
    // 0x80269244: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80269248: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8026924C: jr          $ra
    // 0x80269250: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80269250: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_80264800_func_80269218(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80269218: jal         0x80269334
    // 0x8026921C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_80264800_func_80269334(rdram, ctx);
        goto after_0;
    // 0x8026921C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x80269220: sll         $t1, $s0, 2
    ctx->r9 = S32(ctx->r16 << 2);
    // 0x80269224: addu        $t2, $s1, $t1
    ctx->r10 = ADD32(ctx->r17, ctx->r9);
    // 0x80269228: lh          $v0, 0x36($t2)
    ctx->r2 = MEM_H(ctx->r10, 0X36);
    // 0x8026922C: b           L_80269244
    // 0x80269230: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80269244;
    // 0x80269230: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80269234: b           L_80269240
    // 0x80269238: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_80269240;
    // 0x80269238: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8026923C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80269240:
    // 0x80269240: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80269244:
    // 0x80269244: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80269248: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8026924C: jr          $ra
    // 0x80269250: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80269250: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_80264800_func_80269254(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80269254: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80269258: sll         $a3, $a0, 16
    ctx->r7 = S32(ctx->r4 << 16);
    // 0x8026925C: sra         $t6, $a3, 16
    ctx->r14 = S32(SIGNED(ctx->r7) >> 16);
    // 0x80269260: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80269264: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80269268: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8026926C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80269270: bltz        $t6, L_80269318
    if (SIGNED(ctx->r14) < 0) {
        // 0x80269274: sw          $a0, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r4;
            goto L_80269318;
    }
    // 0x80269274: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80269278: sll         $s1, $t6, 24
    ctx->r17 = S32(ctx->r14 << 24);
    // 0x8026927C: sra         $t7, $s1, 24
    ctx->r15 = S32(SIGNED(ctx->r17) >> 24);
    // 0x80269280: lui         $s2, 0x801B
    ctx->r18 = S32(0X801B << 16);
    // 0x80269284: addiu       $s2, $s2, -0x750
    ctx->r18 = ADD32(ctx->r18, -0X750);
    // 0x80269288: or          $s1, $t7, $zero
    ctx->r17 = ctx->r15 | 0;
    // 0x8026928C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80269290: sh          $t6, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r14;
    // 0x80269294: sll         $a1, $s1, 24
    ctx->r5 = S32(ctx->r17 << 24);
L_80269298:
    // 0x80269298: sll         $a2, $s0, 24
    ctx->r6 = S32(ctx->r16 << 24);
    // 0x8026929C: sra         $t9, $a2, 24
    ctx->r25 = S32(SIGNED(ctx->r6) >> 24);
    // 0x802692A0: sra         $t8, $a1, 24
    ctx->r24 = S32(SIGNED(ctx->r5) >> 24);
    // 0x802692A4: lbu         $a0, 0x9D($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X9D);
    // 0x802692A8: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x802692AC: jal         0x80034B9C
    // 0x802692B0: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    func_80034B9C(rdram, ctx);
        goto after_0;
    // 0x802692B0: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    after_0:
    // 0x802692B4: bltz        $v0, L_802692E8
    if (SIGNED(ctx->r2) < 0) {
        // 0x802692B8: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_802692E8;
    }
    // 0x802692B8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x802692BC: sll         $a0, $s1, 24
    ctx->r4 = S32(ctx->r17 << 24);
    // 0x802692C0: sra         $t0, $a0, 24
    ctx->r8 = S32(SIGNED(ctx->r4) >> 24);
    // 0x802692C4: jal         0x80034940
    // 0x802692C8: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    func_80034940(rdram, ctx);
        goto after_1;
    // 0x802692C8: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    after_1:
    // 0x802692CC: jal         0x80268FA8
    // 0x802692D0: nop

    ovl_80264800_func_80268FA8(rdram, ctx);
        goto after_2;
    // 0x802692D0: nop

    after_2:
    // 0x802692D4: lbu         $a0, 0x2B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X2B);
    // 0x802692D8: jal         0x80268FD0
    // 0x802692DC: nop

    ovl_80264800_func_80268FD0(rdram, ctx);
        goto after_3;
    // 0x802692DC: nop

    after_3:
    // 0x802692E0: b           L_8026931C
    // 0x802692E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8026931C;
    // 0x802692E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802692E8:
    // 0x802692E8: sll         $t1, $s0, 16
    ctx->r9 = S32(ctx->r16 << 16);
    // 0x802692EC: sra         $s0, $t1, 16
    ctx->r16 = S32(SIGNED(ctx->r9) >> 16);
    // 0x802692F0: slti        $at, $s0, 0x10
    ctx->r1 = SIGNED(ctx->r16) < 0X10 ? 1 : 0;
    // 0x802692F4: bne         $at, $zero, L_80269298
    if (ctx->r1 != 0) {
        // 0x802692F8: sll         $a1, $s1, 24
        ctx->r5 = S32(ctx->r17 << 24);
            goto L_80269298;
    }
    // 0x802692F8: sll         $a1, $s1, 24
    ctx->r5 = S32(ctx->r17 << 24);
    // 0x802692FC: lh          $t3, 0x2A($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X2A);
    // 0x80269300: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80269304: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80269308: addu        $v0, $v0, $t4
    ctx->r2 = ADD32(ctx->r2, ctx->r12);
    // 0x8026930C: lh          $v0, -0x303A($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X303A);
    // 0x80269310: b           L_80269320
    // 0x80269314: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80269320;
    // 0x80269314: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80269318:
    // 0x80269318: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8026931C:
    // 0x8026931C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80269320:
    // 0x80269320: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80269324: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80269328: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8026932C: jr          $ra
    // 0x80269330: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80269330: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_80264800_func_80269298(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_80269298:
    // 0x80269298: sll         $a2, $s0, 24
    ctx->r6 = S32(ctx->r16 << 24);
    // 0x8026929C: sra         $t9, $a2, 24
    ctx->r25 = S32(SIGNED(ctx->r6) >> 24);
    // 0x802692A0: sra         $t8, $a1, 24
    ctx->r24 = S32(SIGNED(ctx->r5) >> 24);
    // 0x802692A4: lbu         $a0, 0x9D($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X9D);
    // 0x802692A8: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x802692AC: jal         0x80034B9C
    // 0x802692B0: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    func_80034B9C(rdram, ctx);
        goto after_0;
    // 0x802692B0: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    after_0:
    // 0x802692B4: bltz        $v0, L_802692E8
    if (SIGNED(ctx->r2) < 0) {
        // 0x802692B8: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_802692E8;
    }
    // 0x802692B8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x802692BC: sll         $a0, $s1, 24
    ctx->r4 = S32(ctx->r17 << 24);
    // 0x802692C0: sra         $t0, $a0, 24
    ctx->r8 = S32(SIGNED(ctx->r4) >> 24);
    // 0x802692C4: jal         0x80034940
    // 0x802692C8: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    func_80034940(rdram, ctx);
        goto after_1;
    // 0x802692C8: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    after_1:
    // 0x802692CC: jal         0x80268FA8
    // 0x802692D0: nop

    ovl_80264800_func_80268FA8(rdram, ctx);
        goto after_2;
    // 0x802692D0: nop

    after_2:
    // 0x802692D4: lbu         $a0, 0x2B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X2B);
    // 0x802692D8: jal         0x80268FD0
    // 0x802692DC: nop

    ovl_80264800_func_80268FD0(rdram, ctx);
        goto after_3;
    // 0x802692DC: nop

    after_3:
    // 0x802692E0: b           L_8026931C
    // 0x802692E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8026931C;
    // 0x802692E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802692E8:
    // 0x802692E8: sll         $t1, $s0, 16
    ctx->r9 = S32(ctx->r16 << 16);
    // 0x802692EC: sra         $s0, $t1, 16
    ctx->r16 = S32(SIGNED(ctx->r9) >> 16);
    // 0x802692F0: slti        $at, $s0, 0x10
    ctx->r1 = SIGNED(ctx->r16) < 0X10 ? 1 : 0;
    // 0x802692F4: bne         $at, $zero, L_80269298
    if (ctx->r1 != 0) {
        // 0x802692F8: sll         $a1, $s1, 24
        ctx->r5 = S32(ctx->r17 << 24);
            goto L_80269298;
    }
    // 0x802692F8: sll         $a1, $s1, 24
    ctx->r5 = S32(ctx->r17 << 24);
    // 0x802692FC: lh          $t3, 0x2A($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X2A);
    // 0x80269300: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80269304: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80269308: addu        $v0, $v0, $t4
    ctx->r2 = ADD32(ctx->r2, ctx->r12);
    // 0x8026930C: lh          $v0, -0x303A($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X303A);
    // 0x80269310: b           L_80269320
    // 0x80269314: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80269320;
    // 0x80269314: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80269318: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8026931C:
    // 0x8026931C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80269320:
    // 0x80269320: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80269324: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80269328: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8026932C: jr          $ra
    // 0x80269330: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80269330: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_80264800_func_802692A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_80269298:
    // 0x802692A8: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x802692AC: jal         0x80034B9C
    // 0x802692B0: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    func_80034B9C(rdram, ctx);
        goto after_0;
    // 0x802692B0: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    after_0:
    // 0x802692B4: bltz        $v0, L_802692E8
    if (SIGNED(ctx->r2) < 0) {
        // 0x802692B8: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_802692E8;
    }
    // 0x802692B8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x802692BC: sll         $a0, $s1, 24
    ctx->r4 = S32(ctx->r17 << 24);
    // 0x802692C0: sra         $t0, $a0, 24
    ctx->r8 = S32(SIGNED(ctx->r4) >> 24);
    // 0x802692C4: jal         0x80034940
    // 0x802692C8: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    func_80034940(rdram, ctx);
        goto after_1;
    // 0x802692C8: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    after_1:
    // 0x802692CC: jal         0x80268FA8
    // 0x802692D0: nop

    ovl_80264800_func_80268FA8(rdram, ctx);
        goto after_2;
    // 0x802692D0: nop

    after_2:
    // 0x802692D4: lbu         $a0, 0x2B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X2B);
    // 0x802692D8: jal         0x80268FD0
    // 0x802692DC: nop

    ovl_80264800_func_80268FD0(rdram, ctx);
        goto after_3;
    // 0x802692DC: nop

    after_3:
    // 0x802692E0: b           L_8026931C
    // 0x802692E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8026931C;
    // 0x802692E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802692E8:
    // 0x802692E8: sll         $t1, $s0, 16
    ctx->r9 = S32(ctx->r16 << 16);
    // 0x802692EC: sra         $s0, $t1, 16
    ctx->r16 = S32(SIGNED(ctx->r9) >> 16);
    // 0x802692F0: slti        $at, $s0, 0x10
    ctx->r1 = SIGNED(ctx->r16) < 0X10 ? 1 : 0;
    // 0x802692F4: bne         $at, $zero, L_80269298
    if (ctx->r1 != 0) {
            // 0x802692F8: sll         $a1, $s1, 24
    ctx->r5 = S32(ctx->r17 << 24);
    ovl_80264800_func_80269298(rdram, ctx);
    return;
    }
    // 0x802692F8: sll         $a1, $s1, 24
    ctx->r5 = S32(ctx->r17 << 24);
    // 0x802692FC: lh          $t3, 0x2A($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X2A);
    // 0x80269300: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80269304: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80269308: addu        $v0, $v0, $t4
    ctx->r2 = ADD32(ctx->r2, ctx->r12);
    // 0x8026930C: lh          $v0, -0x303A($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X303A);
    // 0x80269310: b           L_80269320
    // 0x80269314: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80269320;
    // 0x80269314: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80269318: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8026931C:
    // 0x8026931C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80269320:
    // 0x80269320: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80269324: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80269328: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8026932C: jr          $ra
    // 0x80269330: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80269330: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_80264800_func_80269334(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80269334: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80269338: lbu         $t8, -0x32A4($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X32A4);
    // 0x8026933C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80269340: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x80269344: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x80269348: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8026934C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80269350: bne         $t8, $at, L_80269394
    if (ctx->r24 != ctx->r1) {
        // 0x80269354: sw          $a0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r4;
            goto L_80269394;
    }
    // 0x80269354: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80269358: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x8026935C: addiu       $a1, $a1, -0x3070
    ctx->r5 = ADD32(ctx->r5, -0X3070);
    // 0x80269360: sll         $t9, $t7, 1
    ctx->r25 = S32(ctx->r15 << 1);
    // 0x80269364: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x80269368: addu        $v0, $a1, $t9
    ctx->r2 = ADD32(ctx->r5, ctx->r25);
    // 0x8026936C: sh          $v1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r3;
    // 0x80269370: sh          $v1, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r3;
    // 0x80269374: lui         $t0, 0x8010
    ctx->r8 = S32(0X8010 << 16);
    // 0x80269378: lhu         $t0, 0x5242($t0)
    ctx->r8 = MEM_HU(ctx->r8, 0X5242);
    // 0x8026937C: nop

    // 0x80269380: bne         $t0, $zero, L_802693C4
    if (ctx->r8 != 0) {
        // 0x80269384: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802693C4;
    }
    // 0x80269384: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80269388: sh          $v1, 0x2($a1)
    MEM_H(0X2, ctx->r5) = ctx->r3;
    // 0x8026938C: b           L_802693C0
    // 0x80269390: sh          $v1, 0x6($a1)
    MEM_H(0X6, ctx->r5) = ctx->r3;
        goto L_802693C0;
    // 0x80269390: sh          $v1, 0x6($a1)
    MEM_H(0X6, ctx->r5) = ctx->r3;
L_80269394:
    // 0x80269394: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80269398: addiu       $a1, $a1, -0x3070
    ctx->r5 = ADD32(ctx->r5, -0X3070);
    // 0x8026939C: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x802693A0: sh          $v1, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r3;
    // 0x802693A4: sh          $v1, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r3;
    // 0x802693A8: sh          $v1, 0x2($a1)
    MEM_H(0X2, ctx->r5) = ctx->r3;
    // 0x802693AC: sh          $v1, 0x6($a1)
    MEM_H(0X6, ctx->r5) = ctx->r3;
    // 0x802693B0: jal         0x80031FCC
    // 0x802693B4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80031FCC(rdram, ctx);
        goto after_0;
    // 0x802693B4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x802693B8: jal         0x80031FCC
    // 0x802693BC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80031FCC(rdram, ctx);
        goto after_1;
    // 0x802693BC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
L_802693C0:
    // 0x802693C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802693C4:
    // 0x802693C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802693C8: jr          $ra
    // 0x802693CC: nop

    return;
    // 0x802693CC: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026A0F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026A0F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026A0F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026A0F8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8026A0FC: jal         0x80036258
    // 0x8026A100: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80036258(rdram, ctx);
        goto after_0;
    // 0x8026A100: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8026A104: lui         $a0, 0x803D
    ctx->r4 = S32(0X803D << 16);
    // 0x8026A108: jal         0x80035FF0
    // 0x8026A10C: addiu       $a0, $a0, 0x1D3C
    ctx->r4 = ADD32(ctx->r4, 0X1D3C);
    func_80035FF0(rdram, ctx);
        goto after_1;
    // 0x8026A10C: addiu       $a0, $a0, 0x1D3C
    ctx->r4 = ADD32(ctx->r4, 0X1D3C);
    after_1:
    // 0x8026A110: addiu       $a0, $zero, 0xF00
    ctx->r4 = ADD32(0, 0XF00);
    // 0x8026A114: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x8026A118: jal         0x80049E40
    // 0x8026A11C: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_80049E40(rdram, ctx);
        goto after_2;
    // 0x8026A11C: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_2:
    // 0x8026A120: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x8026A124: addiu       $v0, $v0, -0x2F98
    ctx->r2 = ADD32(ctx->r2, -0X2F98);
    // 0x8026A128: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x8026A12C: lui         $v1, 0x2
    ctx->r3 = S32(0X2 << 16);
    // 0x8026A130: ori         $v1, $v1, 0x8000
    ctx->r3 = ctx->r3 | 0X8000;
    // 0x8026A134: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8026A138: addu        $t7, $t6, $v1
    ctx->r15 = ADD32(ctx->r14, ctx->r3);
    // 0x8026A13C: sb          $a1, 0x60E1($t7)
    MEM_B(0X60E1, ctx->r15) = ctx->r5;
    // 0x8026A140: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x8026A144: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8026A148: addu        $t9, $t8, $v1
    ctx->r25 = ADD32(ctx->r24, ctx->r3);
    // 0x8026A14C: sb          $a1, 0x63AD($t9)
    MEM_B(0X63AD, ctx->r25) = ctx->r5;
    // 0x8026A150: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x8026A154: jal         0x8003708C
    // 0x8026A158: nop

    func_8003708C(rdram, ctx);
        goto after_3;
    // 0x8026A158: nop

    after_3:
    // 0x8026A15C: jal         0x8026AAE4
    // 0x8026A160: nop

    ovl_8026A0F0_func_8026AAE4(rdram, ctx);
        goto after_4;
    // 0x8026A160: nop

    after_4:
    // 0x8026A164: jal         0x8026AFD0
    // 0x8026A168: nop

    ovl_8026A0F0_func_8026AFD0(rdram, ctx);
        goto after_5;
    // 0x8026A168: nop

    after_5:
    // 0x8026A16C: jal         0x8026B0FC
    // 0x8026A170: nop

    ovl_8026A0F0_func_8026B0FC(rdram, ctx);
        goto after_6;
    // 0x8026A170: nop

    after_6:
    // 0x8026A174: jal         0x8026B240
    // 0x8026A178: nop

    ovl_8026A0F0_func_8026B240(rdram, ctx);
        goto after_7;
    // 0x8026A178: nop

    after_7:
    // 0x8026A17C: jal         0x8026B304
    // 0x8026A180: nop

    ovl_8026A0F0_func_8026B304(rdram, ctx);
        goto after_8;
    // 0x8026A180: nop

    after_8:
    // 0x8026A184: lui         $t0, 0x800B
    ctx->r8 = S32(0X800B << 16);
    // 0x8026A188: addiu       $t0, $t0, -0x6C78
    ctx->r8 = ADD32(ctx->r8, -0X6C78);
    // 0x8026A18C: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x8026A190: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8026A194: sw          $at, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r1;
    // 0x8026A198: lw          $a2, 0x4($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X4);
    // 0x8026A19C: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x8026A1A0: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x8026A1A4: lw          $a3, 0x8($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X8);
    // 0x8026A1A8: jal         0x8004B1A0
    // 0x8026A1AC: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    func_8004B1A0(rdram, ctx);
        goto after_9;
    // 0x8026A1AC: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    after_9:
    // 0x8026A1B0: jal         0x8026BC0C
    // 0x8026A1B4: nop

    ovl_8026A0F0_func_8026BC0C(rdram, ctx);
        goto after_10;
    // 0x8026A1B4: nop

    after_10:
    // 0x8026A1B8: jal         0x8026B504
    // 0x8026A1BC: nop

    ovl_8026A0F0_func_8026B504(rdram, ctx);
        goto after_11;
    // 0x8026A1BC: nop

    after_11:
    // 0x8026A1C0: jal         0x8026B654
    // 0x8026A1C4: nop

    ovl_8026A0F0_func_8026B654(rdram, ctx);
        goto after_12;
    // 0x8026A1C4: nop

    after_12:
    // 0x8026A1C8: jal         0x8026B9D0
    // 0x8026A1CC: nop

    ovl_8026A0F0_func_8026B9D0(rdram, ctx);
        goto after_13;
    // 0x8026A1CC: nop

    after_13:
    // 0x8026A1D0: jal         0x8026BA74
    // 0x8026A1D4: nop

    ovl_8026A0F0_func_8026BA74(rdram, ctx);
        goto after_14;
    // 0x8026A1D4: nop

    after_14:
    // 0x8026A1D8: jal         0x8026C364
    // 0x8026A1DC: nop

    ovl_8026A0F0_func_8026C364(rdram, ctx);
        goto after_15;
    // 0x8026A1DC: nop

    after_15:
    // 0x8026A1E0: jal         0x8026C4FC
    // 0x8026A1E4: nop

    ovl_8026A0F0_func_8026C4FC(rdram, ctx);
        goto after_16;
    // 0x8026A1E4: nop

    after_16:
    // 0x8026A1E8: jal         0x8026C610
    // 0x8026A1EC: nop

    ovl_8026A0F0_func_8026C610(rdram, ctx);
        goto after_17;
    // 0x8026A1EC: nop

    after_17:
    // 0x8026A1F0: jal         0x8026C784
    // 0x8026A1F4: nop

    ovl_8026A0F0_func_8026C784(rdram, ctx);
        goto after_18;
    // 0x8026A1F4: nop

    after_18:
    // 0x8026A1F8: jal         0x8026C6CC
    // 0x8026A1FC: nop

    ovl_8026A0F0_func_8026C6CC(rdram, ctx);
        goto after_19;
    // 0x8026A1FC: nop

    after_19:
    // 0x8026A200: jal         0x8026C828
    // 0x8026A204: nop

    ovl_8026A0F0_func_8026C828(rdram, ctx);
        goto after_20;
    // 0x8026A204: nop

    after_20:
    // 0x8026A208: jal         0x8026B8AC
    // 0x8026A20C: nop

    ovl_8026A0F0_func_8026B8AC(rdram, ctx);
        goto after_21;
    // 0x8026A20C: nop

    after_21:
    // 0x8026A210: jal         0x8026BEF4
    // 0x8026A214: nop

    ovl_8026A0F0_func_8026BEF4(rdram, ctx);
        goto after_22;
    // 0x8026A214: nop

    after_22:
    // 0x8026A218: jal         0x8026C090
    // 0x8026A21C: nop

    ovl_8026A0F0_func_8026C090(rdram, ctx);
        goto after_23;
    // 0x8026A21C: nop

    after_23:
    // 0x8026A220: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8026A224: jal         0x8002AAC0
    // 0x8026A228: addiu       $a0, $a0, -0x132C
    ctx->r4 = ADD32(ctx->r4, -0X132C);
    func_8002AAC0(rdram, ctx);
        goto after_24;
    // 0x8026A228: addiu       $a0, $a0, -0x132C
    ctx->r4 = ADD32(ctx->r4, -0X132C);
    after_24:
    // 0x8026A22C: jal         0x8026AD00
    // 0x8026A230: nop

    ovl_8026A0F0_func_8026AD00(rdram, ctx);
        goto after_25;
    // 0x8026A230: nop

    after_25:
    // 0x8026A234: jal         0x8026ADCC
    // 0x8026A238: nop

    ovl_8026A0F0_func_8026ADCC(rdram, ctx);
        goto after_26;
    // 0x8026A238: nop

    after_26:
    // 0x8026A23C: jal         0x8026AEFC
    // 0x8026A240: nop

    ovl_8026A0F0_func_8026AEFC(rdram, ctx);
        goto after_27;
    // 0x8026A240: nop

    after_27:
    // 0x8026A244: jal         0x8026C8B8
    // 0x8026A248: nop

    ovl_8026A0F0_func_8026C8B8(rdram, ctx);
        goto after_28;
    // 0x8026A248: nop

    after_28:
    // 0x8026A24C: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8026A250: jal         0x80029220
    // 0x8026A254: addiu       $a0, $a0, -0x35B4
    ctx->r4 = ADD32(ctx->r4, -0X35B4);
    func_80029220(rdram, ctx);
        goto after_29;
    // 0x8026A254: addiu       $a0, $a0, -0x35B4
    ctx->r4 = ADD32(ctx->r4, -0X35B4);
    after_29:
    // 0x8026A258: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8026A25C: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x8026A260: jal         0x8006F918
    // 0x8026A264: nop

    func_8006F918(rdram, ctx);
        goto after_30;
    // 0x8026A264: nop

    after_30:
    // 0x8026A268: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8026A26C: addiu       $a0, $a0, -0x5D78
    ctx->r4 = ADD32(ctx->r4, -0X5D78);
    // 0x8026A270: jal         0x8004AE38
    // 0x8026A274: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_8004AE38(rdram, ctx);
        goto after_31;
    // 0x8026A274: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_31:
    // 0x8026A278: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026A27C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026A280: jr          $ra
    // 0x8026A284: nop

    return;
    // 0x8026A284: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026A288(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026A288: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026A28C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026A290: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8026A294: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8026A298: sb          $zero, 0x45($a0)
    MEM_B(0X45, ctx->r4) = 0;
    // 0x8026A29C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8026A2A0: lb          $t7, -0x326C($t7)
    ctx->r15 = MEM_B(ctx->r15, -0X326C);
    // 0x8026A2A4: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8026A2A8: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8026A2AC: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x8026A2B0: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x8026A2B4: addu        $a0, $a0, $t8
    ctx->r4 = ADD32(ctx->r4, ctx->r24);
    // 0x8026A2B8: lhu         $a0, -0x3078($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X3078);
    // 0x8026A2BC: jal         0x80035DE8
    // 0x8026A2C0: nop

    func_80035DE8(rdram, ctx);
        goto after_0;
    // 0x8026A2C0: nop

    after_0:
    // 0x8026A2C4: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x8026A2C8: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x8026A2CC: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8026A2D0: lw          $t9, -0x128C($at)
    ctx->r25 = MEM_W(ctx->r1, -0X128C);
    // 0x8026A2D4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8026A2D8: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8026A2DC: jalr        $t9
    // 0x8026A2E0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x8026A2E0: nop

    after_1:
    // 0x8026A2E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026A2E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026A2EC: jr          $ra
    // 0x8026A2F0: nop

    return;
    // 0x8026A2F0: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026A2F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026A2F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026A2F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026A2FC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8026A300: lb          $v0, 0x38($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X38);
    // 0x8026A304: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8026A308: beq         $v0, $zero, L_8026A330
    if (ctx->r2 == 0) {
        // 0x8026A30C: addiu       $a3, $zero, 0x1
        ctx->r7 = ADD32(0, 0X1);
            goto L_8026A330;
    }
    // 0x8026A30C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x8026A310: beq         $v0, $a3, L_8026A360
    if (ctx->r2 == ctx->r7) {
        // 0x8026A314: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8026A360;
    }
    // 0x8026A314: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8026A318: beq         $v0, $at, L_8026A3C8
    if (ctx->r2 == ctx->r1) {
        // 0x8026A31C: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8026A3C8;
    }
    // 0x8026A31C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8026A320: beq         $v0, $at, L_8026A468
    if (ctx->r2 == ctx->r1) {
        // 0x8026A324: nop
    
            goto L_8026A468;
    }
    // 0x8026A324: nop

    // 0x8026A328: b           L_8026A4BC
    // 0x8026A32C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026A4BC;
    // 0x8026A32C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026A330:
    // 0x8026A330: lb          $t6, 0x44($a2)
    ctx->r14 = MEM_B(ctx->r6, 0X44);
    // 0x8026A334: nop

    // 0x8026A338: bne         $t6, $zero, L_8026A4BC
    if (ctx->r14 != 0) {
        // 0x8026A33C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8026A4BC;
    }
    // 0x8026A33C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026A340: jal         0x80035770
    // 0x8026A344: nop

    func_80035770(rdram, ctx);
        goto after_0;
    // 0x8026A344: nop

    after_0:
    // 0x8026A348: jal         0x8026AC48
    // 0x8026A34C: nop

    ovl_8026A0F0_func_8026AC48(rdram, ctx);
        goto after_1;
    // 0x8026A34C: nop

    after_1:
    // 0x8026A350: jal         0x800373A4
    // 0x8026A354: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800373A4(rdram, ctx);
        goto after_2;
    // 0x8026A354: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x8026A358: b           L_8026A4BC
    // 0x8026A35C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026A4BC;
    // 0x8026A35C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026A360:
    // 0x8026A360: lb          $t7, 0x44($a2)
    ctx->r15 = MEM_B(ctx->r6, 0X44);
    // 0x8026A364: nop

    // 0x8026A368: bne         $t7, $zero, L_8026A4BC
    if (ctx->r15 != 0) {
        // 0x8026A36C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8026A4BC;
    }
    // 0x8026A36C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026A370: jal         0x80035770
    // 0x8026A374: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_80035770(rdram, ctx);
        goto after_3;
    // 0x8026A374: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_3:
    // 0x8026A378: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x8026A37C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x8026A380: lb          $t8, 0x39($a2)
    ctx->r24 = MEM_B(ctx->r6, 0X39);
    // 0x8026A384: nop

    // 0x8026A388: bne         $t8, $zero, L_8026A39C
    if (ctx->r24 != 0) {
        // 0x8026A38C: nop
    
            goto L_8026A39C;
    }
    // 0x8026A38C: nop

    // 0x8026A390: sb          $a3, 0x39($a2)
    MEM_B(0X39, ctx->r6) = ctx->r7;
    // 0x8026A394: b           L_8026A4B8
    // 0x8026A398: sb          $a3, 0x3C($a2)
    MEM_B(0X3C, ctx->r6) = ctx->r7;
        goto L_8026A4B8;
    // 0x8026A398: sb          $a3, 0x3C($a2)
    MEM_B(0X3C, ctx->r6) = ctx->r7;
L_8026A39C:
    // 0x8026A39C: lb          $t9, 0x3C($a2)
    ctx->r25 = MEM_B(ctx->r6, 0X3C);
    // 0x8026A3A0: nop

    // 0x8026A3A4: bne         $t9, $zero, L_8026A3C0
    if (ctx->r25 != 0) {
        // 0x8026A3A8: nop
    
            goto L_8026A3C0;
    }
    // 0x8026A3A8: nop

    // 0x8026A3AC: jal         0x8026ACB8
    // 0x8026A3B0: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    ovl_8026A0F0_func_8026ACB8(rdram, ctx);
        goto after_4;
    // 0x8026A3B0: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_4:
    // 0x8026A3B4: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x8026A3B8: b           L_8026A4B8
    // 0x8026A3BC: sb          $zero, 0x39($a2)
    MEM_B(0X39, ctx->r6) = 0;
        goto L_8026A4B8;
    // 0x8026A3BC: sb          $zero, 0x39($a2)
    MEM_B(0X39, ctx->r6) = 0;
L_8026A3C0:
    // 0x8026A3C0: b           L_8026A4B8
    // 0x8026A3C4: sb          $zero, 0x39($a2)
    MEM_B(0X39, ctx->r6) = 0;
        goto L_8026A4B8;
    // 0x8026A3C4: sb          $zero, 0x39($a2)
    MEM_B(0X39, ctx->r6) = 0;
L_8026A3C8:
    // 0x8026A3C8: lb          $t0, 0x44($a2)
    ctx->r8 = MEM_B(ctx->r6, 0X44);
    // 0x8026A3CC: nop

    // 0x8026A3D0: bne         $t0, $zero, L_8026A450
    if (ctx->r8 != 0) {
        // 0x8026A3D4: nop
    
            goto L_8026A450;
    }
    // 0x8026A3D4: nop

    // 0x8026A3D8: lb          $a0, 0x3A($a2)
    ctx->r4 = MEM_B(ctx->r6, 0X3A);
    // 0x8026A3DC: jal         0x8006DED4
    // 0x8026A3E0: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_8006DED4(rdram, ctx);
        goto after_5;
    // 0x8026A3E0: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_5:
    // 0x8026A3E4: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x8026A3E8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x8026A3EC: bne         $a3, $v0, L_8026A448
    if (ctx->r7 != ctx->r2) {
        // 0x8026A3F0: nop
    
            goto L_8026A448;
    }
    // 0x8026A3F0: nop

    // 0x8026A3F4: jal         0x80035770
    // 0x8026A3F8: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_80035770(rdram, ctx);
        goto after_6;
    // 0x8026A3F8: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_6:
    // 0x8026A3FC: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x8026A400: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x8026A404: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8026A408: sb          $t1, 0x38($a2)
    MEM_B(0X38, ctx->r6) = ctx->r9;
    // 0x8026A40C: lw          $v0, 0x1CF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1CF0);
    // 0x8026A410: lb          $t2, 0x3A($a2)
    ctx->r10 = MEM_B(ctx->r6, 0X3A);
    // 0x8026A414: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x8026A418: addu        $t3, $v0, $t2
    ctx->r11 = ADD32(ctx->r2, ctx->r10);
    // 0x8026A41C: lb          $v1, 0x48($t3)
    ctx->r3 = MEM_B(ctx->r11, 0X48);
    // 0x8026A420: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8026A424: bne         $v1, $zero, L_8026A434
    if (ctx->r3 != 0) {
        // 0x8026A428: nop
    
            goto L_8026A434;
    }
    // 0x8026A428: nop

    // 0x8026A42C: b           L_8026A438
    // 0x8026A430: sb          $a3, 0x3B($v0)
    MEM_B(0X3B, ctx->r2) = ctx->r7;
        goto L_8026A438;
    // 0x8026A430: sb          $a3, 0x3B($v0)
    MEM_B(0X3B, ctx->r2) = ctx->r7;
L_8026A434:
    // 0x8026A434: sb          $v1, 0x3B($v0)
    MEM_B(0X3B, ctx->r2) = ctx->r3;
L_8026A438:
    // 0x8026A438: jal         0x80029220
    // 0x8026A43C: addiu       $a0, $a0, -0x323C
    ctx->r4 = ADD32(ctx->r4, -0X323C);
    func_80029220(rdram, ctx);
        goto after_7;
    // 0x8026A43C: addiu       $a0, $a0, -0x323C
    ctx->r4 = ADD32(ctx->r4, -0X323C);
    after_7:
    // 0x8026A440: b           L_8026A450
    // 0x8026A444: nop

        goto L_8026A450;
    // 0x8026A444: nop

L_8026A448:
    // 0x8026A448: jal         0x800357AC
    // 0x8026A44C: nop

    func_800357AC(rdram, ctx);
        goto after_8;
    // 0x8026A44C: nop

    after_8:
L_8026A450:
    // 0x8026A450: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8026A454: addiu       $a0, $a0, -0x5D78
    ctx->r4 = ADD32(ctx->r4, -0X5D78);
    // 0x8026A458: jal         0x8002989C
    // 0x8026A45C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_8002989C(rdram, ctx);
        goto after_9;
    // 0x8026A45C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_9:
    // 0x8026A460: b           L_8026A4BC
    // 0x8026A464: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026A4BC;
    // 0x8026A464: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026A468:
    // 0x8026A468: lb          $t4, 0x44($a2)
    ctx->r12 = MEM_B(ctx->r6, 0X44);
    // 0x8026A46C: nop

    // 0x8026A470: bne         $a3, $t4, L_8026A4BC
    if (ctx->r7 != ctx->r12) {
        // 0x8026A474: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8026A4BC;
    }
    // 0x8026A474: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026A478: lbu         $a0, 0x40($a2)
    ctx->r4 = MEM_BU(ctx->r6, 0X40);
    // 0x8026A47C: lb          $a1, 0x3B($a2)
    ctx->r5 = MEM_B(ctx->r6, 0X3B);
    // 0x8026A480: jal         0x8006DEA0
    // 0x8026A484: nop

    func_8006DEA0(rdram, ctx);
        goto after_10;
    // 0x8026A484: nop

    after_10:
    // 0x8026A488: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x8026A48C: bne         $a3, $v0, L_8026A4B0
    if (ctx->r7 != ctx->r2) {
        // 0x8026A490: nop
    
            goto L_8026A4B0;
    }
    // 0x8026A490: nop

    // 0x8026A494: jal         0x80035770
    // 0x8026A498: nop

    func_80035770(rdram, ctx);
        goto after_11;
    // 0x8026A498: nop

    after_11:
    // 0x8026A49C: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8026A4A0: jal         0x80029220
    // 0x8026A4A4: addiu       $a0, $a0, -0x34F0
    ctx->r4 = ADD32(ctx->r4, -0X34F0);
    func_80029220(rdram, ctx);
        goto after_12;
    // 0x8026A4A4: addiu       $a0, $a0, -0x34F0
    ctx->r4 = ADD32(ctx->r4, -0X34F0);
    after_12:
    // 0x8026A4A8: b           L_8026A4BC
    // 0x8026A4AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026A4BC;
    // 0x8026A4AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026A4B0:
    // 0x8026A4B0: jal         0x800357AC
    // 0x8026A4B4: nop

    func_800357AC(rdram, ctx);
        goto after_13;
    // 0x8026A4B4: nop

    after_13:
L_8026A4B8:
    // 0x8026A4B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026A4BC:
    // 0x8026A4BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026A4C0: jr          $ra
    // 0x8026A4C4: nop

    return;
    // 0x8026A4C4: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026A368(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026A368: bne         $t7, $zero, L_8026A4BC
    if (ctx->r15 != 0) {
        // 0x8026A36C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8026A4BC;
    }
    // 0x8026A36C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026A370: jal         0x80035770
    // 0x8026A374: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_80035770(rdram, ctx);
        goto after_0;
    // 0x8026A374: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x8026A378: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x8026A37C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x8026A380: lb          $t8, 0x39($a2)
    ctx->r24 = MEM_B(ctx->r6, 0X39);
    // 0x8026A384: nop

    // 0x8026A388: bne         $t8, $zero, L_8026A39C
    if (ctx->r24 != 0) {
        // 0x8026A38C: nop
    
            goto L_8026A39C;
    }
    // 0x8026A38C: nop

    // 0x8026A390: sb          $a3, 0x39($a2)
    MEM_B(0X39, ctx->r6) = ctx->r7;
    // 0x8026A394: b           L_8026A4B8
    // 0x8026A398: sb          $a3, 0x3C($a2)
    MEM_B(0X3C, ctx->r6) = ctx->r7;
        goto L_8026A4B8;
    // 0x8026A398: sb          $a3, 0x3C($a2)
    MEM_B(0X3C, ctx->r6) = ctx->r7;
L_8026A39C:
    // 0x8026A39C: lb          $t9, 0x3C($a2)
    ctx->r25 = MEM_B(ctx->r6, 0X3C);
    // 0x8026A3A0: nop

    // 0x8026A3A4: bne         $t9, $zero, L_8026A3C0
    if (ctx->r25 != 0) {
        // 0x8026A3A8: nop
    
            goto L_8026A3C0;
    }
    // 0x8026A3A8: nop

    // 0x8026A3AC: jal         0x8026ACB8
    // 0x8026A3B0: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    ovl_8026A0F0_func_8026ACB8(rdram, ctx);
        goto after_1;
    // 0x8026A3B0: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_1:
    // 0x8026A3B4: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x8026A3B8: b           L_8026A4B8
    // 0x8026A3BC: sb          $zero, 0x39($a2)
    MEM_B(0X39, ctx->r6) = 0;
        goto L_8026A4B8;
    // 0x8026A3BC: sb          $zero, 0x39($a2)
    MEM_B(0X39, ctx->r6) = 0;
L_8026A3C0:
    // 0x8026A3C0: b           L_8026A4B8
    // 0x8026A3C4: sb          $zero, 0x39($a2)
    MEM_B(0X39, ctx->r6) = 0;
        goto L_8026A4B8;
    // 0x8026A3C4: sb          $zero, 0x39($a2)
    MEM_B(0X39, ctx->r6) = 0;
    // 0x8026A3C8: lb          $t0, 0x44($a2)
    ctx->r8 = MEM_B(ctx->r6, 0X44);
    // 0x8026A3CC: nop

    // 0x8026A3D0: bne         $t0, $zero, L_8026A450
    if (ctx->r8 != 0) {
        // 0x8026A3D4: nop
    
            goto L_8026A450;
    }
    // 0x8026A3D4: nop

    // 0x8026A3D8: lb          $a0, 0x3A($a2)
    ctx->r4 = MEM_B(ctx->r6, 0X3A);
    // 0x8026A3DC: jal         0x8006DED4
    // 0x8026A3E0: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_8006DED4(rdram, ctx);
        goto after_2;
    // 0x8026A3E0: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_2:
    // 0x8026A3E4: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x8026A3E8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x8026A3EC: bne         $a3, $v0, L_8026A448
    if (ctx->r7 != ctx->r2) {
        // 0x8026A3F0: nop
    
            goto L_8026A448;
    }
    // 0x8026A3F0: nop

    // 0x8026A3F4: jal         0x80035770
    // 0x8026A3F8: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_80035770(rdram, ctx);
        goto after_3;
    // 0x8026A3F8: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_3:
    // 0x8026A3FC: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x8026A400: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x8026A404: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8026A408: sb          $t1, 0x38($a2)
    MEM_B(0X38, ctx->r6) = ctx->r9;
    // 0x8026A40C: lw          $v0, 0x1CF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1CF0);
    // 0x8026A410: lb          $t2, 0x3A($a2)
    ctx->r10 = MEM_B(ctx->r6, 0X3A);
    // 0x8026A414: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x8026A418: addu        $t3, $v0, $t2
    ctx->r11 = ADD32(ctx->r2, ctx->r10);
    // 0x8026A41C: lb          $v1, 0x48($t3)
    ctx->r3 = MEM_B(ctx->r11, 0X48);
    // 0x8026A420: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8026A424: bne         $v1, $zero, L_8026A434
    if (ctx->r3 != 0) {
        // 0x8026A428: nop
    
            goto L_8026A434;
    }
    // 0x8026A428: nop

    // 0x8026A42C: b           L_8026A438
    // 0x8026A430: sb          $a3, 0x3B($v0)
    MEM_B(0X3B, ctx->r2) = ctx->r7;
        goto L_8026A438;
    // 0x8026A430: sb          $a3, 0x3B($v0)
    MEM_B(0X3B, ctx->r2) = ctx->r7;
L_8026A434:
    // 0x8026A434: sb          $v1, 0x3B($v0)
    MEM_B(0X3B, ctx->r2) = ctx->r3;
L_8026A438:
    // 0x8026A438: jal         0x80029220
    // 0x8026A43C: addiu       $a0, $a0, -0x323C
    ctx->r4 = ADD32(ctx->r4, -0X323C);
    func_80029220(rdram, ctx);
        goto after_4;
    // 0x8026A43C: addiu       $a0, $a0, -0x323C
    ctx->r4 = ADD32(ctx->r4, -0X323C);
    after_4:
    // 0x8026A440: b           L_8026A450
    // 0x8026A444: nop

        goto L_8026A450;
    // 0x8026A444: nop

L_8026A448:
    // 0x8026A448: jal         0x800357AC
    // 0x8026A44C: nop

    func_800357AC(rdram, ctx);
        goto after_5;
    // 0x8026A44C: nop

    after_5:
L_8026A450:
    // 0x8026A450: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8026A454: addiu       $a0, $a0, -0x5D78
    ctx->r4 = ADD32(ctx->r4, -0X5D78);
    // 0x8026A458: jal         0x8002989C
    // 0x8026A45C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_8002989C(rdram, ctx);
        goto after_6;
    // 0x8026A45C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_6:
    // 0x8026A460: b           L_8026A4BC
    // 0x8026A464: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026A4BC;
    // 0x8026A464: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026A468: lb          $t4, 0x44($a2)
    ctx->r12 = MEM_B(ctx->r6, 0X44);
    // 0x8026A46C: nop

    // 0x8026A470: bne         $a3, $t4, L_8026A4BC
    if (ctx->r7 != ctx->r12) {
        // 0x8026A474: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8026A4BC;
    }
    // 0x8026A474: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026A478: lbu         $a0, 0x40($a2)
    ctx->r4 = MEM_BU(ctx->r6, 0X40);
    // 0x8026A47C: lb          $a1, 0x3B($a2)
    ctx->r5 = MEM_B(ctx->r6, 0X3B);
    // 0x8026A480: jal         0x8006DEA0
    // 0x8026A484: nop

    func_8006DEA0(rdram, ctx);
        goto after_7;
    // 0x8026A484: nop

    after_7:
    // 0x8026A488: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x8026A48C: bne         $a3, $v0, L_8026A4B0
    if (ctx->r7 != ctx->r2) {
        // 0x8026A490: nop
    
            goto L_8026A4B0;
    }
    // 0x8026A490: nop

    // 0x8026A494: jal         0x80035770
    // 0x8026A498: nop

    func_80035770(rdram, ctx);
        goto after_8;
    // 0x8026A498: nop

    after_8:
    // 0x8026A49C: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8026A4A0: jal         0x80029220
    // 0x8026A4A4: addiu       $a0, $a0, -0x34F0
    ctx->r4 = ADD32(ctx->r4, -0X34F0);
    func_80029220(rdram, ctx);
        goto after_9;
    // 0x8026A4A4: addiu       $a0, $a0, -0x34F0
    ctx->r4 = ADD32(ctx->r4, -0X34F0);
    after_9:
    // 0x8026A4A8: b           L_8026A4BC
    // 0x8026A4AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026A4BC;
    // 0x8026A4AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026A4B0:
    // 0x8026A4B0: jal         0x800357AC
    // 0x8026A4B4: nop

    func_800357AC(rdram, ctx);
        goto after_10;
    // 0x8026A4B4: nop

    after_10:
L_8026A4B8:
    // 0x8026A4B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026A4BC:
    // 0x8026A4BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026A4C0: jr          $ra
    // 0x8026A4C4: nop

    return;
    // 0x8026A4C4: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026A4C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026A4C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026A4CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026A4D0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8026A4D4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8026A4D8: lb          $v0, 0x38($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X38);
    // 0x8026A4DC: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8026A4E0: beq         $v0, $zero, L_8026A508
    if (ctx->r2 == 0) {
        // 0x8026A4E4: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8026A508;
    }
    // 0x8026A4E4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8026A4E8: beq         $v0, $v1, L_8026A528
    if (ctx->r2 == ctx->r3) {
        // 0x8026A4EC: addiu       $a2, $zero, 0x2
        ctx->r6 = ADD32(0, 0X2);
            goto L_8026A528;
    }
    // 0x8026A4EC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x8026A4F0: beq         $v0, $a2, L_8026A568
    if (ctx->r2 == ctx->r6) {
        // 0x8026A4F4: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8026A568;
    }
    // 0x8026A4F4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8026A4F8: beq         $v0, $at, L_8026A590
    if (ctx->r2 == ctx->r1) {
        // 0x8026A4FC: nop
    
            goto L_8026A590;
    }
    // 0x8026A4FC: nop

    // 0x8026A500: b           L_8026A5BC
    // 0x8026A504: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026A5BC;
    // 0x8026A504: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026A508:
    // 0x8026A508: lb          $t6, 0x44($a1)
    ctx->r14 = MEM_B(ctx->r5, 0X44);
    // 0x8026A50C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8026A510: bne         $v1, $t6, L_8026A5BC
    if (ctx->r3 != ctx->r14) {
        // 0x8026A514: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8026A5BC;
    }
    // 0x8026A514: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026A518: jal         0x8026CD78
    // 0x8026A51C: nop

    ovl_8026A0F0_func_8026CD78(rdram, ctx);
        goto after_0;
    // 0x8026A51C: nop

    after_0:
    // 0x8026A520: b           L_8026A5BC
    // 0x8026A524: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026A5BC;
    // 0x8026A524: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026A528:
    // 0x8026A528: lb          $t7, 0x44($a1)
    ctx->r15 = MEM_B(ctx->r5, 0X44);
    // 0x8026A52C: nop

    // 0x8026A530: bne         $t7, $zero, L_8026A558
    if (ctx->r15 != 0) {
        // 0x8026A534: nop
    
            goto L_8026A558;
    }
    // 0x8026A534: nop

    // 0x8026A538: lb          $t8, 0x39($a1)
    ctx->r24 = MEM_B(ctx->r5, 0X39);
    // 0x8026A53C: nop

    // 0x8026A540: bne         $t8, $zero, L_8026A550
    if (ctx->r24 != 0) {
        // 0x8026A544: nop
    
            goto L_8026A550;
    }
    // 0x8026A544: nop

    // 0x8026A548: b           L_8026A5B8
    // 0x8026A54C: sb          $zero, 0x38($a1)
    MEM_B(0X38, ctx->r5) = 0;
        goto L_8026A5B8;
    // 0x8026A54C: sb          $zero, 0x38($a1)
    MEM_B(0X38, ctx->r5) = 0;
L_8026A550:
    // 0x8026A550: b           L_8026A5B8
    // 0x8026A554: sb          $zero, 0x39($a1)
    MEM_B(0X39, ctx->r5) = 0;
        goto L_8026A5B8;
    // 0x8026A554: sb          $zero, 0x39($a1)
    MEM_B(0X39, ctx->r5) = 0;
L_8026A558:
    // 0x8026A558: jal         0x8026CD78
    // 0x8026A55C: nop

    ovl_8026A0F0_func_8026CD78(rdram, ctx);
        goto after_1;
    // 0x8026A55C: nop

    after_1:
    // 0x8026A560: b           L_8026A5BC
    // 0x8026A564: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026A5BC;
    // 0x8026A564: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026A568:
    // 0x8026A568: lb          $t9, 0x44($a1)
    ctx->r25 = MEM_B(ctx->r5, 0X44);
    // 0x8026A56C: nop

    // 0x8026A570: bne         $t9, $zero, L_8026A580
    if (ctx->r25 != 0) {
        // 0x8026A574: nop
    
            goto L_8026A580;
    }
    // 0x8026A574: nop

    // 0x8026A578: b           L_8026A5B8
    // 0x8026A57C: sb          $zero, 0x38($a1)
    MEM_B(0X38, ctx->r5) = 0;
        goto L_8026A5B8;
    // 0x8026A57C: sb          $zero, 0x38($a1)
    MEM_B(0X38, ctx->r5) = 0;
L_8026A580:
    // 0x8026A580: jal         0x8026CD78
    // 0x8026A584: nop

    ovl_8026A0F0_func_8026CD78(rdram, ctx);
        goto after_2;
    // 0x8026A584: nop

    after_2:
    // 0x8026A588: b           L_8026A5BC
    // 0x8026A58C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026A5BC;
    // 0x8026A58C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026A590:
    // 0x8026A590: lb          $t0, 0x44($a1)
    ctx->r8 = MEM_B(ctx->r5, 0X44);
    // 0x8026A594: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8026A598: bne         $v1, $t0, L_8026A5B0
    if (ctx->r3 != ctx->r8) {
        // 0x8026A59C: addiu       $a0, $a0, -0x31A0
        ctx->r4 = ADD32(ctx->r4, -0X31A0);
            goto L_8026A5B0;
    }
    // 0x8026A59C: addiu       $a0, $a0, -0x31A0
    ctx->r4 = ADD32(ctx->r4, -0X31A0);
    // 0x8026A5A0: jal         0x80029220
    // 0x8026A5A4: sb          $a2, 0x38($a1)
    MEM_B(0X38, ctx->r5) = ctx->r6;
    func_80029220(rdram, ctx);
        goto after_3;
    // 0x8026A5A4: sb          $a2, 0x38($a1)
    MEM_B(0X38, ctx->r5) = ctx->r6;
    after_3:
    // 0x8026A5A8: b           L_8026A5BC
    // 0x8026A5AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026A5BC;
    // 0x8026A5AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026A5B0:
    // 0x8026A5B0: jal         0x8026CD78
    // 0x8026A5B4: nop

    ovl_8026A0F0_func_8026CD78(rdram, ctx);
        goto after_4;
    // 0x8026A5B4: nop

    after_4:
L_8026A5B8:
    // 0x8026A5B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026A5BC:
    // 0x8026A5BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026A5C0: jr          $ra
    // 0x8026A5C4: nop

    return;
    // 0x8026A5C4: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026A5AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026A5AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026A5B0: jal         0x8026CD78
    // 0x8026A5B4: nop

    ovl_8026A0F0_func_8026CD78(rdram, ctx);
        goto after_0;
    // 0x8026A5B4: nop

    after_0:
    // 0x8026A5B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026A5BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026A5C0: jr          $ra
    // 0x8026A5C4: nop

    return;
    // 0x8026A5C4: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026A5C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026A5C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026A5CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026A5D0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8026A5D4: lb          $v0, 0x38($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X38);
    // 0x8026A5D8: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8026A5DC: beq         $v0, $zero, L_8026A604
    if (ctx->r2 == 0) {
        // 0x8026A5E0: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8026A604;
    }
    // 0x8026A5E0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8026A5E4: beq         $v0, $v1, L_8026A634
    if (ctx->r2 == ctx->r3) {
        // 0x8026A5E8: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8026A634;
    }
    // 0x8026A5E8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8026A5EC: beq         $v0, $at, L_8026A674
    if (ctx->r2 == ctx->r1) {
        // 0x8026A5F0: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8026A674;
    }
    // 0x8026A5F0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8026A5F4: beq         $v0, $at, L_8026A6B4
    if (ctx->r2 == ctx->r1) {
        // 0x8026A5F8: nop
    
            goto L_8026A6B4;
    }
    // 0x8026A5F8: nop

    // 0x8026A5FC: b           L_8026A6E0
    // 0x8026A600: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026A6E0;
    // 0x8026A600: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026A604:
    // 0x8026A604: lb          $t6, 0x44($a2)
    ctx->r14 = MEM_B(ctx->r6, 0X44);
    // 0x8026A608: nop

    // 0x8026A60C: bne         $t6, $zero, L_8026A6E0
    if (ctx->r14 != 0) {
        // 0x8026A610: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8026A6E0;
    }
    // 0x8026A610: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026A614: jal         0x80035734
    // 0x8026A618: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_80035734(rdram, ctx);
        goto after_0;
    // 0x8026A618: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x8026A61C: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x8026A620: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x8026A624: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x8026A628: sb          $t7, 0x38($a2)
    MEM_B(0X38, ctx->r6) = ctx->r15;
    // 0x8026A62C: b           L_8026A6DC
    // 0x8026A630: sb          $t8, 0x3A($a2)
    MEM_B(0X3A, ctx->r6) = ctx->r24;
        goto L_8026A6DC;
    // 0x8026A630: sb          $t8, 0x3A($a2)
    MEM_B(0X3A, ctx->r6) = ctx->r24;
L_8026A634:
    // 0x8026A634: lb          $t9, 0x44($a2)
    ctx->r25 = MEM_B(ctx->r6, 0X44);
    // 0x8026A638: nop

    // 0x8026A63C: bne         $t9, $zero, L_8026A6E0
    if (ctx->r25 != 0) {
        // 0x8026A640: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8026A6E0;
    }
    // 0x8026A640: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026A644: lb          $t0, 0x39($a2)
    ctx->r8 = MEM_B(ctx->r6, 0X39);
    // 0x8026A648: nop

    // 0x8026A64C: bne         $t0, $zero, L_8026A6E0
    if (ctx->r8 != 0) {
        // 0x8026A650: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8026A6E0;
    }
    // 0x8026A650: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026A654: jal         0x80035734
    // 0x8026A658: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_80035734(rdram, ctx);
        goto after_1;
    // 0x8026A658: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_1:
    // 0x8026A65C: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x8026A660: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x8026A664: addiu       $t2, $zero, 0xA
    ctx->r10 = ADD32(0, 0XA);
    // 0x8026A668: sb          $t1, 0x38($a2)
    MEM_B(0X38, ctx->r6) = ctx->r9;
    // 0x8026A66C: b           L_8026A6DC
    // 0x8026A670: sb          $t2, 0x3A($a2)
    MEM_B(0X3A, ctx->r6) = ctx->r10;
        goto L_8026A6DC;
    // 0x8026A670: sb          $t2, 0x3A($a2)
    MEM_B(0X3A, ctx->r6) = ctx->r10;
L_8026A674:
    // 0x8026A674: lb          $t3, 0x44($a2)
    ctx->r11 = MEM_B(ctx->r6, 0X44);
    // 0x8026A678: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x8026A67C: bne         $t3, $zero, L_8026A6DC
    if (ctx->r11 != 0) {
        // 0x8026A680: addiu       $a1, $a1, -0x14D0
        ctx->r5 = ADD32(ctx->r5, -0X14D0);
            goto L_8026A6DC;
    }
    // 0x8026A680: addiu       $a1, $a1, -0x14D0
    ctx->r5 = ADD32(ctx->r5, -0X14D0);
    // 0x8026A684: lb          $a0, 0x3A($a2)
    ctx->r4 = MEM_B(ctx->r6, 0X3A);
    // 0x8026A688: jal         0x8004BF30
    // 0x8026A68C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_8004BF30(rdram, ctx);
        goto after_2;
    // 0x8026A68C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_2:
    // 0x8026A690: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x8026A694: nop

    // 0x8026A698: sb          $v0, 0x3A($a2)
    MEM_B(0X3A, ctx->r6) = ctx->r2;
    // 0x8026A69C: lb          $t4, 0x3A($a2)
    ctx->r12 = MEM_B(ctx->r6, 0X3A);
    // 0x8026A6A0: nop

    // 0x8026A6A4: bne         $t4, $zero, L_8026A6E0
    if (ctx->r12 != 0) {
        // 0x8026A6A8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8026A6E0;
    }
    // 0x8026A6A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026A6AC: b           L_8026A6DC
    // 0x8026A6B0: sb          $zero, 0x38($a2)
    MEM_B(0X38, ctx->r6) = 0;
        goto L_8026A6DC;
    // 0x8026A6B0: sb          $zero, 0x38($a2)
    MEM_B(0X38, ctx->r6) = 0;
L_8026A6B4:
    // 0x8026A6B4: lb          $t5, 0x44($a2)
    ctx->r13 = MEM_B(ctx->r6, 0X44);
    // 0x8026A6B8: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x8026A6BC: bne         $v1, $t5, L_8026A6DC
    if (ctx->r3 != ctx->r13) {
        // 0x8026A6C0: addiu       $a1, $a1, -0x1498
        ctx->r5 = ADD32(ctx->r5, -0X1498);
            goto L_8026A6DC;
    }
    // 0x8026A6C0: addiu       $a1, $a1, -0x1498
    ctx->r5 = ADD32(ctx->r5, -0X1498);
    // 0x8026A6C4: lb          $a0, 0x3B($a2)
    ctx->r4 = MEM_B(ctx->r6, 0X3B);
    // 0x8026A6C8: jal         0x8004BF30
    // 0x8026A6CC: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_8004BF30(rdram, ctx);
        goto after_3;
    // 0x8026A6CC: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_3:
    // 0x8026A6D0: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x8026A6D4: nop

    // 0x8026A6D8: sb          $v0, 0x3B($a2)
    MEM_B(0X3B, ctx->r6) = ctx->r2;
L_8026A6DC:
    // 0x8026A6DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026A6E0:
    // 0x8026A6E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026A6E4: jr          $ra
    // 0x8026A6E8: nop

    return;
    // 0x8026A6E8: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026A674(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026A674: lb          $t3, 0x44($a2)
    ctx->r11 = MEM_B(ctx->r6, 0X44);
    // 0x8026A678: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x8026A67C: bne         $t3, $zero, L_8026A6DC
    if (ctx->r11 != 0) {
        // 0x8026A680: addiu       $a1, $a1, -0x14D0
        ctx->r5 = ADD32(ctx->r5, -0X14D0);
            goto L_8026A6DC;
    }
    // 0x8026A680: addiu       $a1, $a1, -0x14D0
    ctx->r5 = ADD32(ctx->r5, -0X14D0);
    // 0x8026A684: lb          $a0, 0x3A($a2)
    ctx->r4 = MEM_B(ctx->r6, 0X3A);
    // 0x8026A688: jal         0x8004BF30
    // 0x8026A68C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_8004BF30(rdram, ctx);
        goto after_0;
    // 0x8026A68C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x8026A690: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x8026A694: nop

    // 0x8026A698: sb          $v0, 0x3A($a2)
    MEM_B(0X3A, ctx->r6) = ctx->r2;
    // 0x8026A69C: lb          $t4, 0x3A($a2)
    ctx->r12 = MEM_B(ctx->r6, 0X3A);
    // 0x8026A6A0: nop

    // 0x8026A6A4: bne         $t4, $zero, L_8026A6E0
    if (ctx->r12 != 0) {
        // 0x8026A6A8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8026A6E0;
    }
    // 0x8026A6A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026A6AC: b           L_8026A6DC
    // 0x8026A6B0: sb          $zero, 0x38($a2)
    MEM_B(0X38, ctx->r6) = 0;
        goto L_8026A6DC;
    // 0x8026A6B0: sb          $zero, 0x38($a2)
    MEM_B(0X38, ctx->r6) = 0;
    // 0x8026A6B4: lb          $t5, 0x44($a2)
    ctx->r13 = MEM_B(ctx->r6, 0X44);
    // 0x8026A6B8: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x8026A6BC: bne         $v1, $t5, L_8026A6DC
    if (ctx->r3 != ctx->r13) {
        // 0x8026A6C0: addiu       $a1, $a1, -0x1498
        ctx->r5 = ADD32(ctx->r5, -0X1498);
            goto L_8026A6DC;
    }
    // 0x8026A6C0: addiu       $a1, $a1, -0x1498
    ctx->r5 = ADD32(ctx->r5, -0X1498);
    // 0x8026A6C4: lb          $a0, 0x3B($a2)
    ctx->r4 = MEM_B(ctx->r6, 0X3B);
    // 0x8026A6C8: jal         0x8004BF30
    // 0x8026A6CC: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_8004BF30(rdram, ctx);
        goto after_1;
    // 0x8026A6CC: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_1:
    // 0x8026A6D0: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x8026A6D4: nop

    // 0x8026A6D8: sb          $v0, 0x3B($a2)
    MEM_B(0X3B, ctx->r6) = ctx->r2;
L_8026A6DC:
    // 0x8026A6DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026A6E0:
    // 0x8026A6E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026A6E4: jr          $ra
    // 0x8026A6E8: nop

    return;
    // 0x8026A6E8: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026A6EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026A6EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026A6F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026A6F4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8026A6F8: lb          $v0, 0x38($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X38);
    // 0x8026A6FC: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8026A700: beq         $v0, $zero, L_8026A728
    if (ctx->r2 == 0) {
        // 0x8026A704: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8026A728;
    }
    // 0x8026A704: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8026A708: beq         $v0, $v1, L_8026A758
    if (ctx->r2 == ctx->r3) {
        // 0x8026A70C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8026A758;
    }
    // 0x8026A70C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8026A710: beq         $v0, $at, L_8026A784
    if (ctx->r2 == ctx->r1) {
        // 0x8026A714: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8026A784;
    }
    // 0x8026A714: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8026A718: beq         $v0, $at, L_8026A7C4
    if (ctx->r2 == ctx->r1) {
        // 0x8026A71C: nop
    
            goto L_8026A7C4;
    }
    // 0x8026A71C: nop

    // 0x8026A720: b           L_8026A7F0
    // 0x8026A724: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026A7F0;
    // 0x8026A724: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026A728:
    // 0x8026A728: lb          $t6, 0x44($a2)
    ctx->r14 = MEM_B(ctx->r6, 0X44);
    // 0x8026A72C: nop

    // 0x8026A730: bne         $t6, $zero, L_8026A7F0
    if (ctx->r14 != 0) {
        // 0x8026A734: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8026A7F0;
    }
    // 0x8026A734: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026A738: jal         0x80035734
    // 0x8026A73C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_80035734(rdram, ctx);
        goto after_0;
    // 0x8026A73C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x8026A740: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x8026A744: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8026A748: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x8026A74C: sb          $t7, 0x38($a2)
    MEM_B(0X38, ctx->r6) = ctx->r15;
    // 0x8026A750: b           L_8026A7EC
    // 0x8026A754: sb          $v1, 0x3A($a2)
    MEM_B(0X3A, ctx->r6) = ctx->r3;
        goto L_8026A7EC;
    // 0x8026A754: sb          $v1, 0x3A($a2)
    MEM_B(0X3A, ctx->r6) = ctx->r3;
L_8026A758:
    // 0x8026A758: lb          $t8, 0x44($a2)
    ctx->r24 = MEM_B(ctx->r6, 0X44);
    // 0x8026A75C: nop

    // 0x8026A760: bne         $t8, $zero, L_8026A7F0
    if (ctx->r24 != 0) {
        // 0x8026A764: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8026A7F0;
    }
    // 0x8026A764: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026A768: lb          $t9, 0x39($a2)
    ctx->r25 = MEM_B(ctx->r6, 0X39);
    // 0x8026A76C: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x8026A770: bne         $t9, $zero, L_8026A7F0
    if (ctx->r25 != 0) {
        // 0x8026A774: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8026A7F0;
    }
    // 0x8026A774: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026A778: sb          $t0, 0x38($a2)
    MEM_B(0X38, ctx->r6) = ctx->r8;
    // 0x8026A77C: b           L_8026A7EC
    // 0x8026A780: sb          $v1, 0x3A($a2)
    MEM_B(0X3A, ctx->r6) = ctx->r3;
        goto L_8026A7EC;
    // 0x8026A780: sb          $v1, 0x3A($a2)
    MEM_B(0X3A, ctx->r6) = ctx->r3;
L_8026A784:
    // 0x8026A784: lb          $t1, 0x44($a2)
    ctx->r9 = MEM_B(ctx->r6, 0X44);
    // 0x8026A788: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x8026A78C: bne         $t1, $zero, L_8026A7EC
    if (ctx->r9 != 0) {
        // 0x8026A790: addiu       $a1, $a1, -0x14D0
        ctx->r5 = ADD32(ctx->r5, -0X14D0);
            goto L_8026A7EC;
    }
    // 0x8026A790: addiu       $a1, $a1, -0x14D0
    ctx->r5 = ADD32(ctx->r5, -0X14D0);
    // 0x8026A794: lb          $a0, 0x3A($a2)
    ctx->r4 = MEM_B(ctx->r6, 0X3A);
    // 0x8026A798: jal         0x8004BFBC
    // 0x8026A79C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_8004BFBC(rdram, ctx);
        goto after_1;
    // 0x8026A79C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_1:
    // 0x8026A7A0: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x8026A7A4: nop

    // 0x8026A7A8: sb          $v0, 0x3A($a2)
    MEM_B(0X3A, ctx->r6) = ctx->r2;
    // 0x8026A7AC: lb          $t2, 0x3A($a2)
    ctx->r10 = MEM_B(ctx->r6, 0X3A);
    // 0x8026A7B0: nop

    // 0x8026A7B4: bne         $t2, $zero, L_8026A7F0
    if (ctx->r10 != 0) {
        // 0x8026A7B8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8026A7F0;
    }
    // 0x8026A7B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026A7BC: b           L_8026A7EC
    // 0x8026A7C0: sb          $zero, 0x38($a2)
    MEM_B(0X38, ctx->r6) = 0;
        goto L_8026A7EC;
    // 0x8026A7C0: sb          $zero, 0x38($a2)
    MEM_B(0X38, ctx->r6) = 0;
L_8026A7C4:
    // 0x8026A7C4: lb          $t3, 0x44($a2)
    ctx->r11 = MEM_B(ctx->r6, 0X44);
    // 0x8026A7C8: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x8026A7CC: bne         $v1, $t3, L_8026A7EC
    if (ctx->r3 != ctx->r11) {
        // 0x8026A7D0: addiu       $a1, $a1, -0x1498
        ctx->r5 = ADD32(ctx->r5, -0X1498);
            goto L_8026A7EC;
    }
    // 0x8026A7D0: addiu       $a1, $a1, -0x1498
    ctx->r5 = ADD32(ctx->r5, -0X1498);
    // 0x8026A7D4: lb          $a0, 0x3B($a2)
    ctx->r4 = MEM_B(ctx->r6, 0X3B);
    // 0x8026A7D8: jal         0x8004BFBC
    // 0x8026A7DC: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_8004BFBC(rdram, ctx);
        goto after_2;
    // 0x8026A7DC: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_2:
    // 0x8026A7E0: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x8026A7E4: nop

    // 0x8026A7E8: sb          $v0, 0x3B($a2)
    MEM_B(0X3B, ctx->r6) = ctx->r2;
L_8026A7EC:
    // 0x8026A7EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026A7F0:
    // 0x8026A7F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026A7F4: jr          $ra
    // 0x8026A7F8: nop

    return;
    // 0x8026A7F8: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026A7C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026A7C8: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x8026A7CC: bne         $v1, $t3, L_8026A7EC
    if (ctx->r3 != ctx->r11) {
        // 0x8026A7D0: addiu       $a1, $a1, -0x1498
        ctx->r5 = ADD32(ctx->r5, -0X1498);
            goto L_8026A7EC;
    }
    // 0x8026A7D0: addiu       $a1, $a1, -0x1498
    ctx->r5 = ADD32(ctx->r5, -0X1498);
    // 0x8026A7D4: lb          $a0, 0x3B($a2)
    ctx->r4 = MEM_B(ctx->r6, 0X3B);
    // 0x8026A7D8: jal         0x8004BFBC
    // 0x8026A7DC: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_8004BFBC(rdram, ctx);
        goto after_0;
    // 0x8026A7DC: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x8026A7E0: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x8026A7E4: nop

    // 0x8026A7E8: sb          $v0, 0x3B($a2)
    MEM_B(0X3B, ctx->r6) = ctx->r2;
L_8026A7EC:
    // 0x8026A7EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026A7F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026A7F4: jr          $ra
    // 0x8026A7F8: nop

    return;
    // 0x8026A7F8: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026A7FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026A7FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026A800: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026A804: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8026A808: lb          $a3, 0x38($a0)
    ctx->r7 = MEM_B(ctx->r4, 0X38);
    // 0x8026A80C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8026A810: beq         $a3, $zero, L_8026A89C
    if (ctx->r7 == 0) {
        // 0x8026A814: or          $v0, $a3, $zero
        ctx->r2 = ctx->r7 | 0;
            goto L_8026A89C;
    }
    // 0x8026A814: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    // 0x8026A818: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8026A81C: beq         $a3, $at, L_8026A83C
    if (ctx->r7 == ctx->r1) {
        // 0x8026A820: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8026A83C;
    }
    // 0x8026A820: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8026A824: beq         $v0, $at, L_8026A89C
    if (ctx->r2 == ctx->r1) {
        // 0x8026A828: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8026A89C;
    }
    // 0x8026A828: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8026A82C: beq         $v0, $at, L_8026A8A0
    if (ctx->r2 == ctx->r1) {
        // 0x8026A830: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8026A8A0;
    }
    // 0x8026A830: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026A834: b           L_8026A8A0
    // 0x8026A838: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026A8A0;
    // 0x8026A838: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026A83C:
    // 0x8026A83C: lb          $t6, 0x44($a2)
    ctx->r14 = MEM_B(ctx->r6, 0X44);
    // 0x8026A840: nop

    // 0x8026A844: bne         $t6, $zero, L_8026A8A0
    if (ctx->r14 != 0) {
        // 0x8026A848: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8026A8A0;
    }
    // 0x8026A848: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026A84C: lb          $t7, 0x39($a2)
    ctx->r15 = MEM_B(ctx->r6, 0X39);
    // 0x8026A850: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x8026A854: bne         $t7, $zero, L_8026A884
    if (ctx->r15 != 0) {
        // 0x8026A858: addiu       $a1, $a1, -0x1458
        ctx->r5 = ADD32(ctx->r5, -0X1458);
            goto L_8026A884;
    }
    // 0x8026A858: addiu       $a1, $a1, -0x1458
    ctx->r5 = ADD32(ctx->r5, -0X1458);
    // 0x8026A85C: sll         $a0, $a3, 24
    ctx->r4 = S32(ctx->r7 << 24);
    // 0x8026A860: sra         $t8, $a0, 24
    ctx->r24 = S32(SIGNED(ctx->r4) >> 24);
    // 0x8026A864: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x8026A868: addiu       $a1, $a1, -0x144C
    ctx->r5 = ADD32(ctx->r5, -0X144C);
    // 0x8026A86C: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x8026A870: jal         0x8004C0D4
    // 0x8026A874: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_8004C0D4(rdram, ctx);
        goto after_0;
    // 0x8026A874: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x8026A878: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x8026A87C: b           L_8026A89C
    // 0x8026A880: sb          $v0, 0x38($a2)
    MEM_B(0X38, ctx->r6) = ctx->r2;
        goto L_8026A89C;
    // 0x8026A880: sb          $v0, 0x38($a2)
    MEM_B(0X38, ctx->r6) = ctx->r2;
L_8026A884:
    // 0x8026A884: lb          $a0, 0x3C($a2)
    ctx->r4 = MEM_B(ctx->r6, 0X3C);
    // 0x8026A888: jal         0x8004C0D4
    // 0x8026A88C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_8004C0D4(rdram, ctx);
        goto after_1;
    // 0x8026A88C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_1:
    // 0x8026A890: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x8026A894: nop

    // 0x8026A898: sb          $v0, 0x3C($a2)
    MEM_B(0X3C, ctx->r6) = ctx->r2;
L_8026A89C:
    // 0x8026A89C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026A8A0:
    // 0x8026A8A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026A8A4: jr          $ra
    // 0x8026A8A8: nop

    return;
    // 0x8026A8A8: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026A828(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026A828: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8026A82C: beq         $v0, $at, L_8026A8A0
    if (ctx->r2 == ctx->r1) {
        // 0x8026A830: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8026A8A0;
    }
    // 0x8026A830: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026A834: b           L_8026A8A0
    // 0x8026A838: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026A8A0;
    // 0x8026A838: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026A83C: lb          $t6, 0x44($a2)
    ctx->r14 = MEM_B(ctx->r6, 0X44);
    // 0x8026A840: nop

    // 0x8026A844: bne         $t6, $zero, L_8026A8A0
    if (ctx->r14 != 0) {
        // 0x8026A848: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8026A8A0;
    }
    // 0x8026A848: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026A84C: lb          $t7, 0x39($a2)
    ctx->r15 = MEM_B(ctx->r6, 0X39);
    // 0x8026A850: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x8026A854: bne         $t7, $zero, L_8026A884
    if (ctx->r15 != 0) {
        // 0x8026A858: addiu       $a1, $a1, -0x1458
        ctx->r5 = ADD32(ctx->r5, -0X1458);
            goto L_8026A884;
    }
    // 0x8026A858: addiu       $a1, $a1, -0x1458
    ctx->r5 = ADD32(ctx->r5, -0X1458);
    // 0x8026A85C: sll         $a0, $a3, 24
    ctx->r4 = S32(ctx->r7 << 24);
    // 0x8026A860: sra         $t8, $a0, 24
    ctx->r24 = S32(SIGNED(ctx->r4) >> 24);
    // 0x8026A864: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x8026A868: addiu       $a1, $a1, -0x144C
    ctx->r5 = ADD32(ctx->r5, -0X144C);
    // 0x8026A86C: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x8026A870: jal         0x8004C0D4
    // 0x8026A874: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_8004C0D4(rdram, ctx);
        goto after_0;
    // 0x8026A874: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x8026A878: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x8026A87C: b           L_8026A89C
    // 0x8026A880: sb          $v0, 0x38($a2)
    MEM_B(0X38, ctx->r6) = ctx->r2;
        goto L_8026A89C;
    // 0x8026A880: sb          $v0, 0x38($a2)
    MEM_B(0X38, ctx->r6) = ctx->r2;
L_8026A884:
    // 0x8026A884: lb          $a0, 0x3C($a2)
    ctx->r4 = MEM_B(ctx->r6, 0X3C);
    // 0x8026A888: jal         0x8004C0D4
    // 0x8026A88C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_8004C0D4(rdram, ctx);
        goto after_1;
    // 0x8026A88C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_1:
    // 0x8026A890: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x8026A894: nop

    // 0x8026A898: sb          $v0, 0x3C($a2)
    MEM_B(0X3C, ctx->r6) = ctx->r2;
L_8026A89C:
    // 0x8026A89C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026A8A0:
    // 0x8026A8A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026A8A4: jr          $ra
    // 0x8026A8A8: nop

    return;
    // 0x8026A8A8: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026A8AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026A8AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026A8B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026A8B4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8026A8B8: lb          $a3, 0x38($a0)
    ctx->r7 = MEM_B(ctx->r4, 0X38);
    // 0x8026A8BC: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8026A8C0: beq         $a3, $zero, L_8026A8EC
    if (ctx->r7 == 0) {
        // 0x8026A8C4: or          $v0, $a3, $zero
        ctx->r2 = ctx->r7 | 0;
            goto L_8026A8EC;
    }
    // 0x8026A8C4: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    // 0x8026A8C8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8026A8CC: beq         $v0, $v1, L_8026A91C
    if (ctx->r2 == ctx->r3) {
        // 0x8026A8D0: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8026A91C;
    }
    // 0x8026A8D0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8026A8D4: beq         $v0, $at, L_8026A954
    if (ctx->r2 == ctx->r1) {
        // 0x8026A8D8: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8026A954;
    }
    // 0x8026A8D8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8026A8DC: beq         $v0, $at, L_8026A958
    if (ctx->r2 == ctx->r1) {
        // 0x8026A8E0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8026A958;
    }
    // 0x8026A8E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026A8E4: b           L_8026A958
    // 0x8026A8E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026A958;
    // 0x8026A8E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026A8EC:
    // 0x8026A8EC: lb          $t6, 0x44($a2)
    ctx->r14 = MEM_B(ctx->r6, 0X44);
    // 0x8026A8F0: sll         $a0, $a3, 24
    ctx->r4 = S32(ctx->r7 << 24);
    // 0x8026A8F4: bne         $t6, $zero, L_8026A954
    if (ctx->r14 != 0) {
        // 0x8026A8F8: sra         $t7, $a0, 24
        ctx->r15 = S32(SIGNED(ctx->r4) >> 24);
            goto L_8026A954;
    }
    // 0x8026A8F8: sra         $t7, $a0, 24
    ctx->r15 = S32(SIGNED(ctx->r4) >> 24);
    // 0x8026A8FC: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x8026A900: addiu       $a1, $a1, -0x144C
    ctx->r5 = ADD32(ctx->r5, -0X144C);
    // 0x8026A904: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x8026A908: jal         0x8004C048
    // 0x8026A90C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_8004C048(rdram, ctx);
        goto after_0;
    // 0x8026A90C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x8026A910: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x8026A914: b           L_8026A954
    // 0x8026A918: sb          $v0, 0x38($a2)
    MEM_B(0X38, ctx->r6) = ctx->r2;
        goto L_8026A954;
    // 0x8026A918: sb          $v0, 0x38($a2)
    MEM_B(0X38, ctx->r6) = ctx->r2;
L_8026A91C:
    // 0x8026A91C: lb          $t8, 0x44($a2)
    ctx->r24 = MEM_B(ctx->r6, 0X44);
    // 0x8026A920: nop

    // 0x8026A924: bne         $t8, $zero, L_8026A958
    if (ctx->r24 != 0) {
        // 0x8026A928: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8026A958;
    }
    // 0x8026A928: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026A92C: lb          $t9, 0x39($a2)
    ctx->r25 = MEM_B(ctx->r6, 0X39);
    // 0x8026A930: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x8026A934: bne         $v1, $t9, L_8026A954
    if (ctx->r3 != ctx->r25) {
        // 0x8026A938: addiu       $a1, $a1, -0x1458
        ctx->r5 = ADD32(ctx->r5, -0X1458);
            goto L_8026A954;
    }
    // 0x8026A938: addiu       $a1, $a1, -0x1458
    ctx->r5 = ADD32(ctx->r5, -0X1458);
    // 0x8026A93C: lb          $a0, 0x3C($a2)
    ctx->r4 = MEM_B(ctx->r6, 0X3C);
    // 0x8026A940: jal         0x8004C048
    // 0x8026A944: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_8004C048(rdram, ctx);
        goto after_1;
    // 0x8026A944: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_1:
    // 0x8026A948: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x8026A94C: nop

    // 0x8026A950: sb          $v0, 0x3C($a2)
    MEM_B(0X3C, ctx->r6) = ctx->r2;
L_8026A954:
    // 0x8026A954: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026A958:
    // 0x8026A958: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026A95C: jr          $ra
    // 0x8026A960: nop

    return;
    // 0x8026A960: nop

;}
