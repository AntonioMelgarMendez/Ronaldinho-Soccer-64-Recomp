#include "iss64_recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_8001CC34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001CC34: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001CC38: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8001CC3C: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x8001CC40: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8001CC44: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001CC48: blez        $a0, L_8001CC74
    if (SIGNED(ctx->r4) <= 0) {
        // 0x8001CC4C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8001CC74;
    }
    // 0x8001CC4C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8001CC50: sll         $t8, $v0, 1
    ctx->r24 = S32(ctx->r2 << 1);
L_8001CC54:
    // 0x8001CC54: addu        $t9, $a1, $t8
    ctx->r25 = ADD32(ctx->r5, ctx->r24);
    // 0x8001CC58: sh          $v0, 0x0($t9)
    MEM_H(0X0, ctx->r25) = ctx->r2;
    // 0x8001CC5C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8001CC60: sll         $t0, $v0, 16
    ctx->r8 = S32(ctx->r2 << 16);
    // 0x8001CC64: sra         $v0, $t0, 16
    ctx->r2 = S32(SIGNED(ctx->r8) >> 16);
    // 0x8001CC68: slt         $at, $v0, $a0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8001CC6C: bne         $at, $zero, L_8001CC54
    if (ctx->r1 != 0) {
        // 0x8001CC70: sll         $t8, $v0, 1
        ctx->r24 = S32(ctx->r2 << 1);
            goto L_8001CC54;
    }
    // 0x8001CC70: sll         $t8, $v0, 1
    ctx->r24 = S32(ctx->r2 << 1);
L_8001CC74:
    // 0x8001CC74: jal         0x8001CB74
    // 0x8001CC78: nop

    func_8001CB74(rdram, ctx);
        goto after_0;
    // 0x8001CC78: nop

    after_0:
    // 0x8001CC7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001CC80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001CC84: jr          $ra
    // 0x8001CC88: nop

    return;
    // 0x8001CC88: nop

;}
RECOMP_FUNC void func_8001CD30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001CD30: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x8001CD34: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8001CD38: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x8001CD3C: sll         $t0, $t7, 3
    ctx->r8 = S32(ctx->r15 << 3);
    // 0x8001CD40: sw          $a0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r4;
    // 0x8001CD44: sw          $a1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r5;
    // 0x8001CD48: addu        $t1, $a2, $t0
    ctx->r9 = ADD32(ctx->r6, ctx->r8);
    // 0x8001CD4C: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x8001CD50: lw          $t3, 0x4($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X4);
    // 0x8001CD54: sll         $t8, $a1, 16
    ctx->r24 = S32(ctx->r5 << 16);
    // 0x8001CD58: sra         $a1, $t8, 16
    ctx->r5 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8001CD5C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8001CD60: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8001CD64: sw          $t2, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r10;
    // 0x8001CD68: blez        $a1, L_8001CDC8
    if (SIGNED(ctx->r5) <= 0) {
        // 0x8001CD6C: sw          $t3, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r11;
            goto L_8001CDC8;
    }
    // 0x8001CD6C: sw          $t3, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r11;
    // 0x8001CD70: sll         $t6, $v0, 3
    ctx->r14 = S32(ctx->r2 << 3);
L_8001CD74:
    // 0x8001CD74: addu        $t7, $a2, $t6
    ctx->r15 = ADD32(ctx->r6, ctx->r14);
    // 0x8001CD78: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x8001CD7C: lw          $t4, 0x0($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X0);
    // 0x8001CD80: lw          $t9, 0x4($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X4);
    // 0x8001CD84: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x8001CD88: slt         $at, $t8, $t4
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x8001CD8C: bne         $at, $zero, L_8001CDB4
    if (ctx->r1 != 0) {
        // 0x8001CD90: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_8001CDB4;
    }
    // 0x8001CD90: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8001CD94: slt         $at, $t4, $t8
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x8001CD98: bne         $at, $zero, L_8001CDA8
    if (ctx->r1 != 0) {
        // 0x8001CD9C: sltu        $at, $t5, $t9
        ctx->r1 = ctx->r13 < ctx->r25 ? 1 : 0;
            goto L_8001CDA8;
    }
    // 0x8001CD9C: sltu        $at, $t5, $t9
    ctx->r1 = ctx->r13 < ctx->r25 ? 1 : 0;
    // 0x8001CDA0: beq         $at, $zero, L_8001CDB8
    if (ctx->r1 == 0) {
        // 0x8001CDA4: sll         $t2, $v0, 16
        ctx->r10 = S32(ctx->r2 << 16);
            goto L_8001CDB8;
    }
    // 0x8001CDA4: sll         $t2, $v0, 16
    ctx->r10 = S32(ctx->r2 << 16);
L_8001CDA8:
    // 0x8001CDA8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8001CDAC: sll         $t0, $v1, 16
    ctx->r8 = S32(ctx->r3 << 16);
    // 0x8001CDB0: sra         $v1, $t0, 16
    ctx->r3 = S32(SIGNED(ctx->r8) >> 16);
L_8001CDB4:
    // 0x8001CDB4: sll         $t2, $v0, 16
    ctx->r10 = S32(ctx->r2 << 16);
L_8001CDB8:
    // 0x8001CDB8: sra         $v0, $t2, 16
    ctx->r2 = S32(SIGNED(ctx->r10) >> 16);
    // 0x8001CDBC: slt         $at, $v0, $a1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8001CDC0: bne         $at, $zero, L_8001CD74
    if (ctx->r1 != 0) {
        // 0x8001CDC4: sll         $t6, $v0, 3
        ctx->r14 = S32(ctx->r2 << 3);
            goto L_8001CD74;
    }
    // 0x8001CDC4: sll         $t6, $v0, 3
    ctx->r14 = S32(ctx->r2 << 3);
L_8001CDC8:
    // 0x8001CDC8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8001CDCC: jr          $ra
    // 0x8001CDD0: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x8001CDD0: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_8001CDFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001CDFC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8001CE00: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8001CE04: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8001CE08: sll         $s0, $a1, 16
    ctx->r16 = S32(ctx->r5 << 16);
    // 0x8001CE0C: sll         $s1, $a0, 16
    ctx->r17 = S32(ctx->r4 << 16);
    // 0x8001CE10: sra         $t6, $s1, 16
    ctx->r14 = S32(SIGNED(ctx->r17) >> 16);
    // 0x8001CE14: sra         $t7, $s0, 16
    ctx->r15 = S32(SIGNED(ctx->r16) >> 16);
    // 0x8001CE18: slt         $at, $t6, $t7
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x8001CE1C: or          $s0, $t7, $zero
    ctx->r16 = ctx->r15 | 0;
    // 0x8001CE20: or          $s1, $t6, $zero
    ctx->r17 = ctx->r14 | 0;
    // 0x8001CE24: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8001CE28: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x8001CE2C: beq         $at, $zero, L_8001D0A8
    if (ctx->r1 == 0) {
        // 0x8001CE30: sw          $a1, 0x44($sp)
        MEM_W(0X44, ctx->r29) = ctx->r5;
            goto L_8001D0A8;
    }
    // 0x8001CE30: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x8001CE34: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x8001CE38: bgez        $v1, L_8001CE48
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8001CE3C: sra         $t8, $v1, 1
        ctx->r24 = S32(SIGNED(ctx->r3) >> 1);
            goto L_8001CE48;
    }
    // 0x8001CE3C: sra         $t8, $v1, 1
    ctx->r24 = S32(SIGNED(ctx->r3) >> 1);
    // 0x8001CE40: addiu       $at, $v1, 0x1
    ctx->r1 = ADD32(ctx->r3, 0X1);
    // 0x8001CE44: sra         $t8, $at, 1
    ctx->r24 = S32(SIGNED(ctx->r1) >> 1);
L_8001CE48:
    // 0x8001CE48: sll         $a1, $t8, 16
    ctx->r5 = S32(ctx->r24 << 16);
    // 0x8001CE4C: sll         $a0, $s1, 16
    ctx->r4 = S32(ctx->r17 << 16);
    // 0x8001CE50: sra         $t1, $a0, 16
    ctx->r9 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8001CE54: sra         $t2, $a1, 16
    ctx->r10 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8001CE58: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
    // 0x8001CE5C: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    // 0x8001CE60: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x8001CE64: jal         0x8001CDFC
    // 0x8001CE68: sh          $t8, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r24;
    func_8001CDFC(rdram, ctx);
        goto after_0;
    // 0x8001CE68: sh          $t8, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r24;
    after_0:
    // 0x8001CE6C: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x8001CE70: sll         $a1, $s0, 16
    ctx->r5 = S32(ctx->r16 << 16);
    // 0x8001CE74: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x8001CE78: sll         $a0, $t0, 16
    ctx->r4 = S32(ctx->r8 << 16);
    // 0x8001CE7C: sra         $t3, $a0, 16
    ctx->r11 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8001CE80: sra         $t4, $a1, 16
    ctx->r12 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8001CE84: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
    // 0x8001CE88: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    // 0x8001CE8C: jal         0x8001CDFC
    // 0x8001CE90: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    func_8001CDFC(rdram, ctx);
        goto after_1;
    // 0x8001CE90: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    after_1:
    // 0x8001CE94: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x8001CE98: sll         $a0, $s1, 16
    ctx->r4 = S32(ctx->r17 << 16);
    // 0x8001CE9C: lh          $v0, 0x3E($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X3E);
    // 0x8001CEA0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8001CEA4: sra         $t5, $a0, 16
    ctx->r13 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8001CEA8: slt         $at, $t6, $s1
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x8001CEAC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8001CEB0: bne         $at, $zero, L_8001CF08
    if (ctx->r1 != 0) {
        // 0x8001CEB4: or          $a0, $t5, $zero
        ctx->r4 = ctx->r13 | 0;
            goto L_8001CF08;
    }
    // 0x8001CEB4: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    // 0x8001CEB8: lui         $a3, 0x801B
    ctx->r7 = S32(0X801B << 16);
    // 0x8001CEBC: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x8001CEC0: addiu       $a1, $a1, -0x4280
    ctx->r5 = ADD32(ctx->r5, -0X4280);
    // 0x8001CEC4: addiu       $a3, $a3, -0x4100
    ctx->r7 = ADD32(ctx->r7, -0X4100);
L_8001CEC8:
    // 0x8001CEC8: sll         $t7, $a0, 3
    ctx->r15 = S32(ctx->r4 << 3);
    // 0x8001CECC: addu        $t8, $a1, $t7
    ctx->r24 = ADD32(ctx->r5, ctx->r15);
    // 0x8001CED0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8001CED4: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x8001CED8: sll         $t9, $a2, 3
    ctx->r25 = S32(ctx->r6 << 3);
    // 0x8001CEDC: lw          $t2, 0x0($t8)
    ctx->r10 = MEM_W(ctx->r24, 0X0);
    // 0x8001CEE0: lw          $t3, 0x4($t8)
    ctx->r11 = MEM_W(ctx->r24, 0X4);
    // 0x8001CEE4: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8001CEE8: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8001CEEC: slt         $at, $v0, $a0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8001CEF0: sll         $t4, $a2, 16
    ctx->r12 = S32(ctx->r6 << 16);
    // 0x8001CEF4: addu        $t1, $a3, $t9
    ctx->r9 = ADD32(ctx->r7, ctx->r25);
    // 0x8001CEF8: sra         $a2, $t4, 16
    ctx->r6 = S32(SIGNED(ctx->r12) >> 16);
    // 0x8001CEFC: sw          $t2, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r10;
    // 0x8001CF00: beq         $at, $zero, L_8001CEC8
    if (ctx->r1 == 0) {
        // 0x8001CF04: sw          $t3, 0x4($t1)
        MEM_W(0X4, ctx->r9) = ctx->r11;
            goto L_8001CEC8;
    }
    // 0x8001CF04: sw          $t3, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r11;
L_8001CF08:
    // 0x8001CF08: sll         $a0, $t0, 16
    ctx->r4 = S32(ctx->r8 << 16);
    // 0x8001CF0C: sra         $t8, $a0, 16
    ctx->r24 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8001CF10: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8001CF14: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x8001CF18: sh          $t8, -0x4034($at)
    MEM_H(-0X4034, ctx->r1) = ctx->r24;
    // 0x8001CF1C: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x8001CF20: lui         $a3, 0x801B
    ctx->r7 = S32(0X801B << 16);
    // 0x8001CF24: sra         $t9, $v0, 16
    ctx->r25 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8001CF28: slt         $at, $s0, $t8
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x8001CF2C: addiu       $a3, $a3, -0x4100
    ctx->r7 = ADD32(ctx->r7, -0X4100);
    // 0x8001CF30: addiu       $a1, $a1, -0x4280
    ctx->r5 = ADD32(ctx->r5, -0X4280);
    // 0x8001CF34: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    // 0x8001CF38: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x8001CF3C: bne         $at, $zero, L_8001D028
    if (ctx->r1 != 0) {
        // 0x8001CF40: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_8001D028;
    }
    // 0x8001CF40: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8001CF44: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8001CF48: blez        $a2, L_8001D028
    if (SIGNED(ctx->r6) <= 0) {
        // 0x8001CF4C: sh          $t8, -0x4034($at)
        MEM_H(-0X4034, ctx->r1) = ctx->r24;
            goto L_8001D028;
    }
    // 0x8001CF4C: sh          $t8, -0x4034($at)
    MEM_H(-0X4034, ctx->r1) = ctx->r24;
    // 0x8001CF50: sll         $t2, $a0, 3
    ctx->r10 = S32(ctx->r4 << 3);
L_8001CF54:
    // 0x8001CF54: addu        $t3, $a1, $t2
    ctx->r11 = ADD32(ctx->r5, ctx->r10);
    // 0x8001CF58: lw          $t2, 0x0($t3)
    ctx->r10 = MEM_W(ctx->r11, 0X0);
    // 0x8001CF5C: lw          $t5, 0x4($t3)
    ctx->r13 = MEM_W(ctx->r11, 0X4);
    // 0x8001CF60: sll         $t1, $v1, 3
    ctx->r9 = S32(ctx->r3 << 3);
    // 0x8001CF64: addu        $t6, $a3, $t1
    ctx->r14 = ADD32(ctx->r7, ctx->r9);
    // 0x8001CF68: lw          $t8, 0x0($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X0);
    // 0x8001CF6C: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x8001CF70: sw          $t5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r13;
    // 0x8001CF74: or          $t3, $t5, $zero
    ctx->r11 = ctx->r13 | 0;
    // 0x8001CF78: slt         $at, $t2, $t8
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x8001CF7C: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    // 0x8001CF80: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x8001CF84: or          $t4, $t8, $zero
    ctx->r12 = ctx->r24 | 0;
    // 0x8001CF88: or          $t5, $t9, $zero
    ctx->r13 = ctx->r25 | 0;
    // 0x8001CF8C: bne         $at, $zero, L_8001CFD4
    if (ctx->r1 != 0) {
        // 0x8001CF90: sw          $t9, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r25;
            goto L_8001CFD4;
    }
    // 0x8001CF90: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x8001CF94: slt         $at, $t8, $t2
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x8001CF98: bne         $at, $zero, L_8001CFAC
    if (ctx->r1 != 0) {
        // 0x8001CF9C: sll         $t7, $v0, 3
        ctx->r15 = S32(ctx->r2 << 3);
            goto L_8001CFAC;
    }
    // 0x8001CF9C: sll         $t7, $v0, 3
    ctx->r15 = S32(ctx->r2 << 3);
    // 0x8001CFA0: sltu        $at, $t3, $t9
    ctx->r1 = ctx->r11 < ctx->r25 ? 1 : 0;
    // 0x8001CFA4: bne         $at, $zero, L_8001CFD8
    if (ctx->r1 != 0) {
        // 0x8001CFA8: sll         $t3, $v0, 3
        ctx->r11 = S32(ctx->r2 << 3);
            goto L_8001CFD8;
    }
    // 0x8001CFA8: sll         $t3, $v0, 3
    ctx->r11 = S32(ctx->r2 << 3);
L_8001CFAC:
    // 0x8001CFAC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8001CFB0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8001CFB4: sll         $t9, $v1, 16
    ctx->r25 = S32(ctx->r3 << 16);
    // 0x8001CFB8: sll         $t6, $v0, 16
    ctx->r14 = S32(ctx->r2 << 16);
    // 0x8001CFBC: addu        $t1, $a1, $t7
    ctx->r9 = ADD32(ctx->r5, ctx->r15);
    // 0x8001CFC0: sw          $t4, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r12;
    // 0x8001CFC4: sw          $t5, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r13;
    // 0x8001CFC8: sra         $v0, $t6, 16
    ctx->r2 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8001CFCC: b           L_8001D004
    // 0x8001CFD0: sra         $v1, $t9, 16
    ctx->r3 = S32(SIGNED(ctx->r25) >> 16);
        goto L_8001D004;
    // 0x8001CFD0: sra         $v1, $t9, 16
    ctx->r3 = S32(SIGNED(ctx->r25) >> 16);
L_8001CFD4:
    // 0x8001CFD4: sll         $t3, $v0, 3
    ctx->r11 = S32(ctx->r2 << 3);
L_8001CFD8:
    // 0x8001CFD8: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x8001CFDC: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x8001CFE0: addu        $t7, $a1, $t3
    ctx->r15 = ADD32(ctx->r5, ctx->r11);
    // 0x8001CFE4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8001CFE8: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8001CFEC: sll         $t8, $a0, 16
    ctx->r24 = S32(ctx->r4 << 16);
    // 0x8001CFF0: sll         $t1, $v0, 16
    ctx->r9 = S32(ctx->r2 << 16);
    // 0x8001CFF4: sra         $v0, $t1, 16
    ctx->r2 = S32(SIGNED(ctx->r9) >> 16);
    // 0x8001CFF8: sra         $a0, $t8, 16
    ctx->r4 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8001CFFC: sw          $t4, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r12;
    // 0x8001D000: sw          $t5, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r13;
L_8001D004:
    // 0x8001D004: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8001D008: sh          $a0, -0x4034($at)
    MEM_H(-0X4034, ctx->r1) = ctx->r4;
    // 0x8001D00C: slt         $at, $s0, $a0
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8001D010: bne         $at, $zero, L_8001D028
    if (ctx->r1 != 0) {
        // 0x8001D014: slt         $at, $v1, $a2
        ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r6) ? 1 : 0;
            goto L_8001D028;
    }
    // 0x8001D014: slt         $at, $v1, $a2
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x8001D018: bne         $at, $zero, L_8001CF54
    if (ctx->r1 != 0) {
        // 0x8001D01C: sll         $t2, $a0, 3
        ctx->r10 = S32(ctx->r4 << 3);
            goto L_8001CF54;
    }
    // 0x8001D01C: sll         $t2, $a0, 3
    ctx->r10 = S32(ctx->r4 << 3);
    // 0x8001D020: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8001D024: sh          $a0, -0x4034($at)
    MEM_H(-0X4034, ctx->r1) = ctx->r4;
L_8001D028:
    // 0x8001D028: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8001D02C: sh          $v0, -0x4030($at)
    MEM_H(-0X4030, ctx->r1) = ctx->r2;
    // 0x8001D030: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8001D034: sh          $v1, -0x4032($at)
    MEM_H(-0X4032, ctx->r1) = ctx->r3;
    // 0x8001D038: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8001D03C: sh          $a2, -0x402E($at)
    MEM_H(-0X402E, ctx->r1) = ctx->r6;
    // 0x8001D040: slt         $at, $v1, $a2
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x8001D044: beq         $at, $zero, L_8001D0A8
    if (ctx->r1 == 0) {
        // 0x8001D048: sll         $t2, $v1, 3
        ctx->r10 = S32(ctx->r3 << 3);
            goto L_8001D0A8;
    }
L_8001D048:
    // 0x8001D048: sll         $t2, $v1, 3
    ctx->r10 = S32(ctx->r3 << 3);
    // 0x8001D04C: addu        $t3, $a3, $t2
    ctx->r11 = ADD32(ctx->r7, ctx->r10);
    // 0x8001D050: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8001D054: sll         $t7, $v0, 3
    ctx->r15 = S32(ctx->r2 << 3);
    // 0x8001D058: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8001D05C: sll         $t9, $v1, 16
    ctx->r25 = S32(ctx->r3 << 16);
    // 0x8001D060: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x8001D064: lw          $t5, 0x4($t3)
    ctx->r13 = MEM_W(ctx->r11, 0X4);
    // 0x8001D068: sra         $t2, $t9, 16
    ctx->r10 = S32(SIGNED(ctx->r25) >> 16);
    // 0x8001D06C: sll         $t6, $v0, 16
    ctx->r14 = S32(ctx->r2 << 16);
    // 0x8001D070: sra         $t8, $t6, 16
    ctx->r24 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8001D074: slt         $at, $t2, $a2
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x8001D078: addu        $t1, $a1, $t7
    ctx->r9 = ADD32(ctx->r5, ctx->r15);
    // 0x8001D07C: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x8001D080: or          $v1, $t2, $zero
    ctx->r3 = ctx->r10 | 0;
    // 0x8001D084: sw          $t4, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r12;
    // 0x8001D088: bne         $at, $zero, L_8001D048
    if (ctx->r1 != 0) {
        // 0x8001D08C: sw          $t5, 0x4($t1)
        MEM_W(0X4, ctx->r9) = ctx->r13;
            goto L_8001D048;
    }
    // 0x8001D08C: sw          $t5, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r13;
    // 0x8001D090: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8001D094: sh          $a2, -0x402E($at)
    MEM_H(-0X402E, ctx->r1) = ctx->r6;
    // 0x8001D098: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8001D09C: sh          $t2, -0x4032($at)
    MEM_H(-0X4032, ctx->r1) = ctx->r10;
    // 0x8001D0A0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8001D0A4: sh          $t8, -0x4030($at)
    MEM_H(-0X4030, ctx->r1) = ctx->r24;
L_8001D0A8:
    // 0x8001D0A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8001D0AC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8001D0B0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8001D0B4: jr          $ra
    // 0x8001D0B8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x8001D0B8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8001D444(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001D444: mtc1        $zero, $f3
    ctx->f_odd[(3 - 1) * 2] = 0;
    // 0x8001D448: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8001D44C: nop

    // 0x8001D450: c.eq.d      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.d == ctx->f2.d;
    // 0x8001D454: nop

    // 0x8001D458: bc1t        L_8001D470
    if (c1cs) {
        // 0x8001D45C: nop
    
            goto L_8001D470;
    }
    // 0x8001D45C: nop

    // 0x8001D460: c.eq.d      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.d == ctx->f2.d;
    // 0x8001D464: nop

    // 0x8001D468: bc1f        L_8001D47C
    if (!c1cs) {
        // 0x8001D46C: nop
    
            goto L_8001D47C;
    }
    // 0x8001D46C: nop

L_8001D470:
    // 0x8001D470: jr          $ra
    // 0x8001D474: mov.d       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.d = ctx->f2.d;
    return;
    // 0x8001D474: mov.d       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.d = ctx->f2.d;
    // 0x8001D478: nop

L_8001D47C:
    // 0x8001D47C: div.d       $f4, $f12, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f14.d); 
    ctx->f4.d = DIV_D(ctx->f12.d, ctx->f14.d);
    // 0x8001D480: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8001D484: nop

    // 0x8001D488: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x8001D48C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8001D490: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8001D494: nop

    // 0x8001D498: cvt.w.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_D(ctx->f4.d);
    // 0x8001D49C: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x8001D4A0: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8001D4A4: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x8001D4A8: nop

    // 0x8001D4AC: cvt.d.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.d = CVT_D_W(ctx->f8.u32l);
    // 0x8001D4B0: mul.d       $f16, $f10, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f14.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f14.d);
    // 0x8001D4B4: sub.d       $f0, $f12, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f16.d); 
    ctx->f0.d = ctx->f12.d - ctx->f16.d;
    // 0x8001D4B8: jr          $ra
    // 0x8001D4BC: nop

    return;
    // 0x8001D4BC: nop

;}
RECOMP_FUNC void func_8001D4C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001D4C0: slt         $at, $a0, $a2
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x8001D4C4: bne         $at, $zero, L_8001D4D4
    if (ctx->r1 != 0) {
        // 0x8001D4C8: slt         $at, $a1, $a0
        ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
            goto L_8001D4D4;
    }
    // 0x8001D4C8: slt         $at, $a1, $a0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8001D4CC: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x8001D4D0: slt         $at, $a1, $a0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
L_8001D4D4:
    // 0x8001D4D4: bne         $at, $zero, L_8001D4E0
    if (ctx->r1 != 0) {
        // 0x8001D4D8: nop
    
            goto L_8001D4E0;
    }
    // 0x8001D4D8: nop

    // 0x8001D4DC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
L_8001D4E0:
    // 0x8001D4E0: jr          $ra
    // 0x8001D4E4: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    return;
    // 0x8001D4E4: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
;}
RECOMP_FUNC void func_8001D6EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001D6EC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8001D6F0: slt         $at, $a1, $a0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8001D6F4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8001D6F8: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8001D6FC: beq         $at, $zero, L_8001D7B4
    if (ctx->r1 == 0) {
        // 0x8001D700: swc1        $f20, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
            goto L_8001D7B4;
    }
    // 0x8001D700: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8001D704: slti        $at, $a1, 0x2
    ctx->r1 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
    // 0x8001D708: beq         $at, $zero, L_8001D718
    if (ctx->r1 == 0) {
        // 0x8001D70C: addiu       $t6, $a1, 0x1
        ctx->r14 = ADD32(ctx->r5, 0X1);
            goto L_8001D718;
    }
    // 0x8001D70C: addiu       $t6, $a1, 0x1
    ctx->r14 = ADD32(ctx->r5, 0X1);
    // 0x8001D710: b           L_8001D7B0
    // 0x8001D714: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
        goto L_8001D7B0;
    // 0x8001D714: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
L_8001D718:
    // 0x8001D718: mtc1        $a0, $f4
    ctx->f4.u32l = ctx->r4;
    // 0x8001D71C: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x8001D720: cvt.d.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.d = CVT_D_W(ctx->f4.u32l);
    // 0x8001D724: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x8001D728: cvt.d.w     $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    ctx->f20.d = CVT_D_W(ctx->f6.u32l);
    // 0x8001D72C: swc1        $f12, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f12.u32l;
    // 0x8001D730: swc1        $f13, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(13 - 1) * 2];
    // 0x8001D734: jal         0x8001D444
    // 0x8001D738: mov.d       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.d = ctx->f20.d;
    func_8001D444(rdram, ctx);
        goto after_0;
    // 0x8001D738: mov.d       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.d = ctx->f20.d;
    after_0:
    // 0x8001D73C: mtc1        $zero, $f9
    ctx->f_odd[(9 - 1) * 2] = 0;
    // 0x8001D740: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8001D744: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x8001D748: c.lt.d      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.d < ctx->f8.d;
    // 0x8001D74C: lwc1        $f13, 0x20($sp)
    ctx->f_odd[(13 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x8001D750: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8001D754: bc1f        L_8001D774
    if (!c1cs) {
        // 0x8001D758: nop
    
            goto L_8001D774;
    }
    // 0x8001D758: nop

    // 0x8001D75C: mov.d       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.d = ctx->f20.d;
    // 0x8001D760: jal         0x8001D444
    // 0x8001D764: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    func_8001D444(rdram, ctx);
        goto after_1;
    // 0x8001D764: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    after_1:
    // 0x8001D768: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x8001D76C: b           L_8001D788
    // 0x8001D770: neg.d       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = -ctx->f0.d;
        goto L_8001D788;
    // 0x8001D770: neg.d       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = -ctx->f0.d;
L_8001D774:
    // 0x8001D774: mov.d       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.d = ctx->f20.d;
    // 0x8001D778: jal         0x8001D444
    // 0x8001D77C: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    func_8001D444(rdram, ctx);
        goto after_2;
    // 0x8001D77C: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    after_2:
    // 0x8001D780: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x8001D784: mov.d       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.d = ctx->f0.d;
L_8001D788:
    // 0x8001D788: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8001D78C: nop

    // 0x8001D790: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x8001D794: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8001D798: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8001D79C: nop

    // 0x8001D7A0: cvt.w.d     $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    ctx->f10.u32l = CVT_W_D(ctx->f2.d);
    // 0x8001D7A4: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8001D7A8: mfc1        $v0, $f10
    ctx->r2 = (int32_t)ctx->f10.u32l;
    // 0x8001D7AC: nop

L_8001D7B0:
    // 0x8001D7B0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_8001D7B4:
    // 0x8001D7B4: bgez        $a0, L_8001D85C
    if (SIGNED(ctx->r4) >= 0) {
        // 0x8001D7B8: slti        $at, $a1, 0x2
        ctx->r1 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
            goto L_8001D85C;
    }
    // 0x8001D7B8: slti        $at, $a1, 0x2
    ctx->r1 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
    // 0x8001D7BC: beq         $at, $zero, L_8001D7D4
    if (ctx->r1 == 0) {
        // 0x8001D7C0: addiu       $t8, $a1, 0x1
        ctx->r24 = ADD32(ctx->r5, 0X1);
            goto L_8001D7D4;
    }
    // 0x8001D7C0: addiu       $t8, $a1, 0x1
    ctx->r24 = ADD32(ctx->r5, 0X1);
    // 0x8001D7C4: mtc1        $zero, $f3
    ctx->f_odd[(3 - 1) * 2] = 0;
    // 0x8001D7C8: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8001D7CC: b           L_8001D834
    // 0x8001D7D0: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
        goto L_8001D834;
    // 0x8001D7D0: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
L_8001D7D4:
    // 0x8001D7D4: mtc1        $a0, $f16
    ctx->f16.u32l = ctx->r4;
    // 0x8001D7D8: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x8001D7DC: cvt.d.w     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.d = CVT_D_W(ctx->f16.u32l);
    // 0x8001D7E0: cvt.d.w     $f20, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    ctx->f20.d = CVT_D_W(ctx->f18.u32l);
    // 0x8001D7E4: swc1        $f12, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f12.u32l;
    // 0x8001D7E8: swc1        $f13, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(13 - 1) * 2];
    // 0x8001D7EC: jal         0x8001D444
    // 0x8001D7F0: mov.d       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.d = ctx->f20.d;
    func_8001D444(rdram, ctx);
        goto after_3;
    // 0x8001D7F0: mov.d       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.d = ctx->f20.d;
    after_3:
    // 0x8001D7F4: mtc1        $zero, $f5
    ctx->f_odd[(5 - 1) * 2] = 0;
    // 0x8001D7F8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8001D7FC: lwc1        $f13, 0x20($sp)
    ctx->f_odd[(13 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x8001D800: c.lt.d      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.d < ctx->f4.d;
    // 0x8001D804: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8001D808: bc1f        L_8001D820
    if (!c1cs) {
        // 0x8001D80C: nop
    
            goto L_8001D820;
    }
    // 0x8001D80C: nop

    // 0x8001D810: jal         0x8001D444
    // 0x8001D814: mov.d       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.d = ctx->f20.d;
    func_8001D444(rdram, ctx);
        goto after_4;
    // 0x8001D814: mov.d       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.d = ctx->f20.d;
    after_4:
    // 0x8001D818: b           L_8001D82C
    // 0x8001D81C: neg.d       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f12.d = -ctx->f0.d;
        goto L_8001D82C;
    // 0x8001D81C: neg.d       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f12.d = -ctx->f0.d;
L_8001D820:
    // 0x8001D820: jal         0x8001D444
    // 0x8001D824: mov.d       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.d = ctx->f20.d;
    func_8001D444(rdram, ctx);
        goto after_5;
    // 0x8001D824: mov.d       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.d = ctx->f20.d;
    after_5:
    // 0x8001D828: mov.d       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.d = ctx->f0.d;
L_8001D82C:
    // 0x8001D82C: sub.d       $f2, $f20, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f20.d); NAN_CHECK(ctx->f12.d); 
    ctx->f2.d = ctx->f20.d - ctx->f12.d;
    // 0x8001D830: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
L_8001D834:
    // 0x8001D834: nop

    // 0x8001D838: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x8001D83C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8001D840: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8001D844: nop

    // 0x8001D848: cvt.w.d     $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    ctx->f6.u32l = CVT_W_D(ctx->f2.d);
    // 0x8001D84C: mfc1        $a0, $f6
    ctx->r4 = (int32_t)ctx->f6.u32l;
    // 0x8001D850: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8001D854: b           L_8001D894
    // 0x8001D858: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8001D894;
    // 0x8001D858: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8001D85C:
    // 0x8001D85C: mtc1        $a0, $f8
    ctx->f8.u32l = ctx->r4;
    // 0x8001D860: nop

    // 0x8001D864: cvt.d.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.d = CVT_D_W(ctx->f8.u32l);
    // 0x8001D868: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x8001D86C: nop

    // 0x8001D870: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x8001D874: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8001D878: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8001D87C: nop

    // 0x8001D880: cvt.w.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_D(ctx->f10.d);
    // 0x8001D884: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x8001D888: mfc1        $a0, $f16
    ctx->r4 = (int32_t)ctx->f16.u32l;
    // 0x8001D88C: nop

    // 0x8001D890: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8001D894:
    // 0x8001D894: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x8001D898: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8001D89C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x8001D8A0: jr          $ra
    // 0x8001D8A4: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    return;
    // 0x8001D8A4: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
;}
RECOMP_FUNC void func_8001D8A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001D8A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001D8AC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8001D8B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001D8B4: lbu         $t6, 0x0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X0);
    // 0x8001D8B8: lh          $t7, 0x1E($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X1E);
    // 0x8001D8BC: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8001D8C0: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    // 0x8001D8C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8001D8C8: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x8001D8CC: jal         0x8001D4C0
    // 0x8001D8D0: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
    func_8001D4C0(rdram, ctx);
        goto after_0;
    // 0x8001D8D0: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
    after_0:
    // 0x8001D8D4: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x8001D8D8: nop

    // 0x8001D8DC: sb          $v0, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r2;
    // 0x8001D8E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001D8E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001D8E8: jr          $ra
    // 0x8001D8EC: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    return;
    // 0x8001D8EC: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
;}
RECOMP_FUNC void func_8001D8F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001D8F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001D8F4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8001D8F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001D8FC: lbu         $t6, 0x0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X0);
    // 0x8001D900: lh          $t7, 0x1E($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X1E);
    // 0x8001D904: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8001D908: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    // 0x8001D90C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8001D910: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x8001D914: jal         0x8001D4C0
    // 0x8001D918: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
    func_8001D4C0(rdram, ctx);
        goto after_0;
    // 0x8001D918: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
    after_0:
    // 0x8001D91C: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x8001D920: nop

    // 0x8001D924: sb          $v0, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r2;
    // 0x8001D928: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001D92C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001D930: jr          $ra
    // 0x8001D934: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    return;
    // 0x8001D934: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
;}
RECOMP_FUNC void func_8001D938(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001D938: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001D93C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001D940: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8001D944: lhu         $t6, 0x0($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X0);
    // 0x8001D948: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8001D94C: addu        $a0, $t6, $a1
    ctx->r4 = ADD32(ctx->r14, ctx->r5);
    // 0x8001D950: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8001D954: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    // 0x8001D958: jal         0x8001D4C0
    // 0x8001D95C: ori         $a2, $zero, 0xFFFF
    ctx->r6 = 0 | 0XFFFF;
    func_8001D4C0(rdram, ctx);
        goto after_0;
    // 0x8001D95C: ori         $a2, $zero, 0xFFFF
    ctx->r6 = 0 | 0XFFFF;
    after_0:
    // 0x8001D960: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x8001D964: nop

    // 0x8001D968: sh          $v0, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r2;
    // 0x8001D96C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001D970: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001D974: jr          $ra
    // 0x8001D978: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    return;
    // 0x8001D978: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
;}
RECOMP_FUNC void func_8001D97C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001D97C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001D980: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001D984: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8001D988: lhu         $t6, 0x0($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X0);
    // 0x8001D98C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8001D990: subu        $a0, $t6, $a1
    ctx->r4 = SUB32(ctx->r14, ctx->r5);
    // 0x8001D994: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8001D998: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    // 0x8001D99C: jal         0x8001D4C0
    // 0x8001D9A0: ori         $a2, $zero, 0xFFFF
    ctx->r6 = 0 | 0XFFFF;
    func_8001D4C0(rdram, ctx);
        goto after_0;
    // 0x8001D9A0: ori         $a2, $zero, 0xFFFF
    ctx->r6 = 0 | 0XFFFF;
    after_0:
    // 0x8001D9A4: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x8001D9A8: nop

    // 0x8001D9AC: sh          $v0, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r2;
    // 0x8001D9B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001D9B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001D9B8: jr          $ra
    // 0x8001D9BC: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    return;
    // 0x8001D9BC: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
;}
RECOMP_FUNC void func_8001D9C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001D9C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001D9C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001D9C8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8001D9CC: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x8001D9D0: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8001D9D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8001D9D8: jal         0x8001D4C0
    // 0x8001D9DC: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_8001D4C0(rdram, ctx);
        goto after_0;
    // 0x8001D9DC: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_0:
    // 0x8001D9E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001D9E4: sll         $t8, $v0, 16
    ctx->r24 = S32(ctx->r2 << 16);
    // 0x8001D9E8: sra         $v0, $t8, 16
    ctx->r2 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8001D9EC: jr          $ra
    // 0x8001D9F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8001D9F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8001DA18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001DA18: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x8001DA1C: beq         $a1, $zero, L_8001DA3C
    if (ctx->r5 == 0) {
        // 0x8001DA20: addiu       $a1, $a1, -0x1
        ctx->r5 = ADD32(ctx->r5, -0X1);
            goto L_8001DA3C;
    }
    // 0x8001DA20: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x8001DA24: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
L_8001DA28:
    // 0x8001DA28: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x8001DA2C: sb          $v1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r3;
    // 0x8001DA30: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8001DA34: bne         $a1, $zero, L_8001DA28
    if (ctx->r5 != 0) {
        // 0x8001DA38: addiu       $a1, $a1, -0x1
        ctx->r5 = ADD32(ctx->r5, -0X1);
            goto L_8001DA28;
    }
    // 0x8001DA38: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
L_8001DA3C:
    // 0x8001DA3C: jr          $ra
    // 0x8001DA40: nop

    return;
    // 0x8001DA40: nop

;}
RECOMP_FUNC void func_8001DA44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001DA44: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x8001DA48: beq         $a2, $zero, L_8001DA6C
    if (ctx->r6 == 0) {
        // 0x8001DA4C: addiu       $a2, $a2, -0x1
        ctx->r6 = ADD32(ctx->r6, -0X1);
            goto L_8001DA6C;
    }
    // 0x8001DA4C: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
L_8001DA50:
    // 0x8001DA50: lbu         $t6, 0x0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X0);
    // 0x8001DA54: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x8001DA58: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8001DA5C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8001DA60: sb          $t6, -0x1($a1)
    MEM_B(-0X1, ctx->r5) = ctx->r14;
    // 0x8001DA64: bne         $a2, $zero, L_8001DA50
    if (ctx->r6 != 0) {
        // 0x8001DA68: addiu       $a2, $a2, -0x1
        ctx->r6 = ADD32(ctx->r6, -0X1);
            goto L_8001DA50;
    }
    // 0x8001DA68: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
L_8001DA6C:
    // 0x8001DA6C: jr          $ra
    // 0x8001DA70: nop

    return;
    // 0x8001DA70: nop

;}
RECOMP_FUNC void func_8001DAB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001DAB4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8001DAB8: nop

    // 0x8001DABC: c.le.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl <= ctx->f12.fl;
    // 0x8001DAC0: nop

    // 0x8001DAC4: bc1f        L_8001DAD8
    if (!c1cs) {
        // 0x8001DAC8: nop
    
            goto L_8001DAD8;
    }
    // 0x8001DAC8: nop

    // 0x8001DACC: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
    // 0x8001DAD0: jr          $ra
    // 0x8001DAD4: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    return;
    // 0x8001DAD4: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
L_8001DAD8:
    // 0x8001DAD8: neg.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = -ctx->f12.fl;
    // 0x8001DADC: jr          $ra
    // 0x8001DAE0: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    return;
    // 0x8001DAE0: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
;}
RECOMP_FUNC void func_8001DC24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001DC24: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x8001DC28: beq         $a1, $zero, L_8001DCDC
    if (ctx->r5 == 0) {
        // 0x8001DC2C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8001DCDC;
    }
    // 0x8001DC2C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8001DC30: lui         $t0, 0x4C1
    ctx->r8 = S32(0X4C1 << 16);
    // 0x8001DC34: ori         $t0, $t0, 0x1DB7
    ctx->r8 = ctx->r8 | 0X1DB7;
    // 0x8001DC38: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8001DC3C: addiu       $t1, $zero, 0x8
    ctx->r9 = ADD32(0, 0X8);
    // 0x8001DC40: lui         $a3, 0x8000
    ctx->r7 = S32(0X8000 << 16);
L_8001DC44:
    // 0x8001DC44: lbu         $t6, 0x0($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0X0);
    // 0x8001DC48: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8001DC4C: sll         $t7, $t6, 24
    ctx->r15 = S32(ctx->r14 << 24);
    // 0x8001DC50: xor         $v1, $v1, $t7
    ctx->r3 = ctx->r3 ^ ctx->r15;
    // 0x8001DC54: and         $t8, $v1, $a3
    ctx->r24 = ctx->r3 & ctx->r7;
L_8001DC58:
    // 0x8001DC58: beq         $t8, $zero, L_8001DC6C
    if (ctx->r24 == 0) {
        // 0x8001DC5C: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_8001DC6C;
    }
    // 0x8001DC5C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x8001DC60: sll         $t9, $v1, 1
    ctx->r25 = S32(ctx->r3 << 1);
    // 0x8001DC64: b           L_8001DC74
    // 0x8001DC68: xor         $v1, $t9, $t0
    ctx->r3 = ctx->r25 ^ ctx->r8;
        goto L_8001DC74;
    // 0x8001DC68: xor         $v1, $t9, $t0
    ctx->r3 = ctx->r25 ^ ctx->r8;
L_8001DC6C:
    // 0x8001DC6C: sll         $t2, $v1, 1
    ctx->r10 = S32(ctx->r3 << 1);
    // 0x8001DC70: or          $v1, $t2, $zero
    ctx->r3 = ctx->r10 | 0;
L_8001DC74:
    // 0x8001DC74: and         $t3, $v1, $a3
    ctx->r11 = ctx->r3 & ctx->r7;
    // 0x8001DC78: beq         $t3, $zero, L_8001DC8C
    if (ctx->r11 == 0) {
        // 0x8001DC7C: sll         $t5, $v1, 1
        ctx->r13 = S32(ctx->r3 << 1);
            goto L_8001DC8C;
    }
    // 0x8001DC7C: sll         $t5, $v1, 1
    ctx->r13 = S32(ctx->r3 << 1);
    // 0x8001DC80: sll         $t4, $v1, 1
    ctx->r12 = S32(ctx->r3 << 1);
    // 0x8001DC84: b           L_8001DC90
    // 0x8001DC88: xor         $v1, $t4, $t0
    ctx->r3 = ctx->r12 ^ ctx->r8;
        goto L_8001DC90;
    // 0x8001DC88: xor         $v1, $t4, $t0
    ctx->r3 = ctx->r12 ^ ctx->r8;
L_8001DC8C:
    // 0x8001DC8C: or          $v1, $t5, $zero
    ctx->r3 = ctx->r13 | 0;
L_8001DC90:
    // 0x8001DC90: and         $t6, $v1, $a3
    ctx->r14 = ctx->r3 & ctx->r7;
    // 0x8001DC94: beq         $t6, $zero, L_8001DCA8
    if (ctx->r14 == 0) {
        // 0x8001DC98: sll         $t8, $v1, 1
        ctx->r24 = S32(ctx->r3 << 1);
            goto L_8001DCA8;
    }
    // 0x8001DC98: sll         $t8, $v1, 1
    ctx->r24 = S32(ctx->r3 << 1);
    // 0x8001DC9C: sll         $t7, $v1, 1
    ctx->r15 = S32(ctx->r3 << 1);
    // 0x8001DCA0: b           L_8001DCAC
    // 0x8001DCA4: xor         $v1, $t7, $t0
    ctx->r3 = ctx->r15 ^ ctx->r8;
        goto L_8001DCAC;
    // 0x8001DCA4: xor         $v1, $t7, $t0
    ctx->r3 = ctx->r15 ^ ctx->r8;
L_8001DCA8:
    // 0x8001DCA8: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
L_8001DCAC:
    // 0x8001DCAC: and         $t9, $v1, $a3
    ctx->r25 = ctx->r3 & ctx->r7;
    // 0x8001DCB0: beq         $t9, $zero, L_8001DCC4
    if (ctx->r25 == 0) {
        // 0x8001DCB4: sll         $t3, $v1, 1
        ctx->r11 = S32(ctx->r3 << 1);
            goto L_8001DCC4;
    }
    // 0x8001DCB4: sll         $t3, $v1, 1
    ctx->r11 = S32(ctx->r3 << 1);
    // 0x8001DCB8: sll         $t2, $v1, 1
    ctx->r10 = S32(ctx->r3 << 1);
    // 0x8001DCBC: b           L_8001DCC8
    // 0x8001DCC0: xor         $v1, $t2, $t0
    ctx->r3 = ctx->r10 ^ ctx->r8;
        goto L_8001DCC8;
    // 0x8001DCC0: xor         $v1, $t2, $t0
    ctx->r3 = ctx->r10 ^ ctx->r8;
L_8001DCC4:
    // 0x8001DCC4: or          $v1, $t3, $zero
    ctx->r3 = ctx->r11 | 0;
L_8001DCC8:
    // 0x8001DCC8: bne         $a0, $t1, L_8001DC58
    if (ctx->r4 != ctx->r9) {
        // 0x8001DCCC: and         $t8, $v1, $a3
        ctx->r24 = ctx->r3 & ctx->r7;
            goto L_8001DC58;
    }
    // 0x8001DCCC: and         $t8, $v1, $a3
    ctx->r24 = ctx->r3 & ctx->r7;
    // 0x8001DCD0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8001DCD4: bne         $v0, $a1, L_8001DC44
    if (ctx->r2 != ctx->r5) {
        // 0x8001DCD8: addiu       $a2, $a2, 0x1
        ctx->r6 = ADD32(ctx->r6, 0X1);
            goto L_8001DC44;
    }
    // 0x8001DCD8: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
L_8001DCDC:
    // 0x8001DCDC: jr          $ra
    // 0x8001DCE0: nor         $v0, $v1, $zero
    ctx->r2 = ~(ctx->r3 | 0);
    return;
    // 0x8001DCE0: nor         $v0, $v1, $zero
    ctx->r2 = ~(ctx->r3 | 0);
    // 0x8001DCE4: nop

    // 0x8001DCE8: nop

    // 0x8001DCEC: nop

;}
RECOMP_FUNC void func_8001DCF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001DCF0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8001DCF4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8001DCF8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8001DCFC: lui         $s0, 0x8010
    ctx->r16 = S32(0X8010 << 16);
    // 0x8001DD00: lui         $s1, 0x8010
    ctx->r17 = S32(0X8010 << 16);
    // 0x8001DD04: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8001DD08: addiu       $s1, $s1, 0x5C00
    ctx->r17 = ADD32(ctx->r17, 0X5C00);
    // 0x8001DD0C: addiu       $s0, $s0, 0x5760
    ctx->r16 = ADD32(ctx->r16, 0X5760);
L_8001DD10:
    // 0x8001DD10: jal         0x800204C0
    // 0x8001DD14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800204C0(rdram, ctx);
        goto after_0;
    // 0x8001DD14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x8001DD18: addiu       $s0, $s0, 0x250
    ctx->r16 = ADD32(ctx->r16, 0X250);
    // 0x8001DD1C: bne         $s0, $s1, L_8001DD10
    if (ctx->r16 != ctx->r17) {
        // 0x8001DD20: nop
    
            goto L_8001DD10;
    }
    // 0x8001DD20: nop

    // 0x8001DD24: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8001DD28: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8001DD2C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8001DD30: jr          $ra
    // 0x8001DD34: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8001DD34: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8001DD38: nop

    // 0x8001DD3C: nop

;}
RECOMP_FUNC void func_8001DD40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001DD40: lui         $t6, 0x8002
    ctx->r14 = S32(0X8002 << 16);
    // 0x8001DD44: addiu       $t6, $t6, -0x22C0
    ctx->r14 = ADD32(ctx->r14, -0X22C0);
    // 0x8001DD48: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8001DD4C: sw          $t6, -0x4020($at)
    MEM_W(-0X4020, ctx->r1) = ctx->r14;
    // 0x8001DD50: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x8001DD54: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x8001DD58: ori         $t9, $zero, 0xFFFF
    ctx->r25 = 0 | 0XFFFF;
    // 0x8001DD5C: addiu       $a1, $a1, -0x401A
    ctx->r5 = ADD32(ctx->r5, -0X401A);
    // 0x8001DD60: addiu       $a0, $a0, -0x4018
    ctx->r4 = ADD32(ctx->r4, -0X4018);
    // 0x8001DD64: sh          $t9, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r25;
    // 0x8001DD68: sh          $t9, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r25;
    // 0x8001DD6C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8001DD70: sh          $t9, -0x401C($at)
    MEM_H(-0X401C, ctx->r1) = ctx->r25;
    // 0x8001DD74: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x8001DD78: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8001DD7C: addiu       $a2, $a2, -0x2F94
    ctx->r6 = ADD32(ctx->r6, -0X2F94);
    // 0x8001DD80: sh          $zero, -0x4014($at)
    MEM_H(-0X4014, ctx->r1) = 0;
    // 0x8001DD84: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x8001DD88: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001DD8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001DD90: lui         $t2, 0x300
    ctx->r10 = S32(0X300 << 16);
    // 0x8001DD94: addiu       $t0, $v1, 0x8
    ctx->r8 = ADD32(ctx->r3, 0X8);
    // 0x8001DD98: sw          $t0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r8;
    // 0x8001DD9C: addiu       $t2, $t2, 0x150
    ctx->r10 = ADD32(ctx->r10, 0X150);
    // 0x8001DDA0: lui         $t1, 0x600
    ctx->r9 = S32(0X600 << 16);
    // 0x8001DDA4: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x8001DDA8: jal         0x8001DDC0
    // 0x8001DDAC: sw          $t2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r10;
    func_8001DDC0(rdram, ctx);
        goto after_0;
    // 0x8001DDAC: sw          $t2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r10;
    after_0:
    // 0x8001DDB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001DDB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001DDB8: jr          $ra
    // 0x8001DDBC: nop

    return;
    // 0x8001DDBC: nop

;}
RECOMP_FUNC void func_8001DDC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001DDC0: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x8001DDC4: lw          $a0, -0x4B50($t6)
    ctx->r4 = MEM_W(ctx->r14, -0X4B50);
    // 0x8001DDC8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8001DDCC: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x8001DDD0: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x8001DDD4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8001DDD8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8001DDDC: addiu       $t7, $v0, 0x7FFF
    ctx->r15 = ADD32(ctx->r2, 0X7FFF);
    // 0x8001DDE0: lh          $t7, 0x6C1B($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X6C1B);
    // 0x8001DDE4: addiu       $a2, $v0, 0x7FFF
    ctx->r6 = ADD32(ctx->r2, 0X7FFF);
    // 0x8001DDE8: addiu       $a3, $v0, 0x7FFF
    ctx->r7 = ADD32(ctx->r2, 0X7FFF);
    // 0x8001DDEC: lbu         $a3, 0x6C1A($a3)
    ctx->r7 = MEM_BU(ctx->r7, 0X6C1A);
    // 0x8001DDF0: lbu         $a2, 0x6C18($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X6C18);
    // 0x8001DDF4: addiu       $t8, $v0, 0x7FFF
    ctx->r24 = ADD32(ctx->r2, 0X7FFF);
    // 0x8001DDF8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8001DDFC: lh          $t8, 0x6C1D($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X6C1D);
    // 0x8001DE00: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8001DE04: jal         0x8001ECD0
    // 0x8001DE08: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    func_8001ECD0(rdram, ctx);
        goto after_0;
    // 0x8001DE08: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    after_0:
    // 0x8001DE0C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8001DE10: ori         $t9, $zero, 0xFFFF
    ctx->r25 = 0 | 0XFFFF;
    // 0x8001DE14: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8001DE18: sh          $t9, -0x4016($at)
    MEM_H(-0X4016, ctx->r1) = ctx->r25;
    // 0x8001DE1C: jr          $ra
    // 0x8001DE20: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8001DE20: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8001DE24_inner(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001DE24: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8001DE28: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x8001DE2C: lbu         $t6, -0x4B5C($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X4B5C);
    // 0x8001DE30: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8001DE34: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8001DE38: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x8001DE3C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8001DE40: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x8001DE44: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x8001DE48: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x8001DE4C: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x8001DE50: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8001DE54: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8001DE58: beq         $t6, $at, L_8001DF2C
    if (ctx->r14 == ctx->r1) {
        // 0x8001DE5C: sw          $s0, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r16;
            goto L_8001DF2C;
    }
    // 0x8001DE5C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8001DE60: lbu         $v0, 0x2C8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X2C8);
    // 0x8001DE64: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8001DE68: blez        $v0, L_8001DF2C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8001DE6C: lui         $s7, 0x8002
        ctx->r23 = S32(0X8002 << 16);
            goto L_8001DF2C;
    }
    // 0x8001DE6C: lui         $s7, 0x8002
    ctx->r23 = S32(0X8002 << 16);
    // 0x8001DE70: lui         $s6, 0x801B
    ctx->r22 = S32(0X801B << 16);
    // 0x8001DE74: lui         $s5, 0x801B
    ctx->r21 = S32(0X801B << 16);
    // 0x8001DE78: lui         $s4, 0x801B
    ctx->r20 = S32(0X801B << 16);
    // 0x8001DE7C: addiu       $s4, $s4, -0x4018
    ctx->r20 = ADD32(ctx->r20, -0X4018);
    // 0x8001DE80: addiu       $s5, $s5, -0x4020
    ctx->r21 = ADD32(ctx->r21, -0X4020);
    // 0x8001DE84: addiu       $s6, $s6, -0x401C
    ctx->r22 = ADD32(ctx->r22, -0X401C);
    // 0x8001DE88: addiu       $s7, $s7, -0x22C0
    ctx->r23 = ADD32(ctx->r23, -0X22C0);
    // 0x8001DE8C: ori         $s3, $zero, 0xFFFF
    ctx->r19 = 0 | 0XFFFF;
    // 0x8001DE90: sll         $t7, $s0, 2
    ctx->r15 = S32(ctx->r16 << 2);
L_8001DE94:
    // 0x8001DE94: addu        $t8, $s1, $t7
    ctx->r24 = ADD32(ctx->r17, ctx->r15);
    // 0x8001DE98: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    // 0x8001DE9C: nop

    // 0x8001DEA0: lbu         $t9, 0x4($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X4);
    // 0x8001DEA4: nop

    // 0x8001DEA8: sltiu       $at, $t9, 0x5
    ctx->r1 = ctx->r25 < 0X5 ? 1 : 0;
    // 0x8001DEAC: beq         $at, $zero, L_8001DF14
    if (ctx->r1 == 0) {
        // 0x8001DEB0: sll         $t9, $t9, 2
        ctx->r25 = S32(ctx->r25 << 2);
            goto L_8001DF14;
    }
    // 0x8001DEB0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8001DEB4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8001DEB8: addu        $at, $at, $t9
    gpr jr_addend_8001DEC4 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8001DEBC: lw          $t9, 0x3978($at)
    ctx->r25 = ADD32(ctx->r1, 0X3978);
    // 0x8001DEC0: nop

    // 0x8001DEC4: jr          $t9
    // 0x8001DEC8: nop

    switch (jr_addend_8001DEC4 >> 2) {
        case 0: goto L_8001DF14; break;
        case 1: goto L_8001DECC; break;
        case 2: goto L_8001DF14; break;
        case 3: goto L_8001DF00; break;
        case 4: goto L_8001DEE0; break;
        default: switch_error(__func__, 0x8001DEC4, 0x800D3978);
    }
    // 0x8001DEC8: nop

L_8001DECC:
    // 0x8001DECC: jal         0x8001DF58
    // 0x8001DED0: nop

    func_8001DF58(rdram, ctx);
        goto after_0;
    // 0x8001DED0: nop

    after_0:
    // 0x8001DED4: lbu         $v0, 0x2C8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2C8);
    // 0x8001DED8: b           L_8001DF18
    // 0x8001DEDC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
        goto L_8001DF18;
    // 0x8001DEDC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_8001DEE0:
    // 0x8001DEE0: jal         0x8002FE90
    // 0x8001DEE4: or          $s2, $s7, $zero
    ctx->r18 = ctx->r23 | 0;
    func_8002FE90(rdram, ctx);
        goto after_1;
    // 0x8001DEE4: or          $s2, $s7, $zero
    ctx->r18 = ctx->r23 | 0;
    after_1:
    // 0x8001DEE8: sw          $s2, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r18;
    // 0x8001DEEC: sh          $s3, 0x0($s6)
    MEM_H(0X0, ctx->r22) = ctx->r19;
    // 0x8001DEF0: sh          $s3, 0x0($s4)
    MEM_H(0X0, ctx->r20) = ctx->r19;
    // 0x8001DEF4: lbu         $v0, 0x2C8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2C8);
    // 0x8001DEF8: b           L_8001DF18
    // 0x8001DEFC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
        goto L_8001DF18;
    // 0x8001DEFC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_8001DF00:
    // 0x8001DF00: sw          $s7, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r23;
    // 0x8001DF04: sh          $s3, 0x0($s4)
    MEM_H(0X0, ctx->r20) = ctx->r19;
    // 0x8001DF08: sh          $s3, 0x0($s6)
    MEM_H(0X0, ctx->r22) = ctx->r19;
    // 0x8001DF0C: lbu         $v0, 0x2C8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2C8);
    // 0x8001DF10: nop

L_8001DF14:
    // 0x8001DF14: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_8001DF18:
    // 0x8001DF18: sll         $t1, $s0, 16
    ctx->r9 = S32(ctx->r16 << 16);
    // 0x8001DF1C: sra         $s0, $t1, 16
    ctx->r16 = S32(SIGNED(ctx->r9) >> 16);
    // 0x8001DF20: slt         $at, $s0, $v0
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8001DF24: bne         $at, $zero, L_8001DE94
    if (ctx->r1 != 0) {
        // 0x8001DF28: sll         $t7, $s0, 2
        ctx->r15 = S32(ctx->r16 << 2);
            goto L_8001DE94;
    }
    // 0x8001DF28: sll         $t7, $s0, 2
    ctx->r15 = S32(ctx->r16 << 2);
L_8001DF2C:
    // 0x8001DF2C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8001DF30: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8001DF34: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8001DF38: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8001DF3C: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8001DF40: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x8001DF44: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x8001DF48: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x8001DF4C: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x8001DF50: jr          $ra
    // 0x8001DF54: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8001DF54: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8001DF58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001DF58: addiu       $sp, $sp, -0xD8
    ctx->r29 = ADD32(ctx->r29, -0XD8);
    // 0x8001DF5C: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8001DF60: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x8001DF64: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x8001DF68: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x8001DF6C: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x8001DF70: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x8001DF74: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x8001DF78: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8001DF7C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8001DF80: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8001DF84: lhu         $t6, 0x12($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X12);
    // 0x8001DF88: addiu       $v1, $zero, 0xC
    ctx->r3 = ADD32(0, 0XC);
    // 0x8001DF8C: multu       $t6, $v1
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001DF90: lui         $s1, 0x8010
    ctx->r17 = S32(0X8010 << 16);
    // 0x8001DF94: addiu       $s1, $s1, -0x3770
    ctx->r17 = ADD32(ctx->r17, -0X3770);
    // 0x8001DF98: addiu       $v0, $s1, 0x7FFF
    ctx->r2 = ADD32(ctx->r17, 0X7FFF);
    // 0x8001DF9C: lw          $v0, 0x6E89($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6E89);
    // 0x8001DFA0: lw          $t4, 0x30($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X30);
    // 0x8001DFA4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8001DFA8: mflo        $t7
    ctx->r15 = lo;
    // 0x8001DFAC: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x8001DFB0: sw          $t8, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r24;
    // 0x8001DFB4: lhu         $t9, 0x14($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X14);
    // 0x8001DFB8: nop

    // 0x8001DFBC: multu       $t9, $v1
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001DFC0: mflo        $t6
    ctx->r14 = lo;
    // 0x8001DFC4: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x8001DFC8: beq         $t4, $zero, L_8001ECA0
    if (ctx->r12 == 0) {
        // 0x8001DFCC: sw          $t7, 0xB4($sp)
        MEM_W(0XB4, ctx->r29) = ctx->r15;
            goto L_8001ECA0;
    }
    // 0x8001DFCC: sw          $t7, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r15;
    // 0x8001DFD0: lhu         $v1, 0x16($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X16);
    // 0x8001DFD4: addiu       $s6, $s1, 0x7FFF
    ctx->r22 = ADD32(ctx->r17, 0X7FFF);
    // 0x8001DFD8: andi        $t8, $v1, 0x400
    ctx->r24 = ctx->r3 & 0X400;
    // 0x8001DFDC: beq         $t8, $zero, L_8001E06C
    if (ctx->r24 == 0) {
        // 0x8001DFE0: addiu       $s7, $s1, 0x7FFF
        ctx->r23 = ADD32(ctx->r17, 0X7FFF);
            goto L_8001E06C;
    }
    // 0x8001DFE0: addiu       $s7, $s1, 0x7FFF
    ctx->r23 = ADD32(ctx->r17, 0X7FFF);
    // 0x8001DFE4: andi        $t9, $v1, 0xF0
    ctx->r25 = ctx->r3 & 0XF0;
    // 0x8001DFE8: sra         $t6, $t9, 4
    ctx->r14 = S32(SIGNED(ctx->r25) >> 4);
    // 0x8001DFEC: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x8001DFF0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8001DFF4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8001DFF8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8001DFFC: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8001E000: ori         $at, $at, 0x8ED0
    ctx->r1 = ctx->r1 | 0X8ED0;
    // 0x8001E004: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8001E008: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x8001E00C: addiu       $t9, $t9, -0x3770
    ctx->r25 = ADD32(ctx->r25, -0X3770);
    // 0x8001E010: addu        $t8, $t7, $at
    ctx->r24 = ADD32(ctx->r15, ctx->r1);
    // 0x8001E014: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x8001E018: lhu         $s6, 0x34($v0)
    ctx->r22 = MEM_HU(ctx->r2, 0X34);
    // 0x8001E01C: lhu         $s7, 0x36($v0)
    ctx->r23 = MEM_HU(ctx->r2, 0X36);
    // 0x8001E020: sll         $t6, $s6, 2
    ctx->r14 = S32(ctx->r22 << 2);
    // 0x8001E024: sll         $t7, $s7, 2
    ctx->r15 = S32(ctx->r23 << 2);
    // 0x8001E028: addiu       $t8, $t6, 0x4
    ctx->r24 = ADD32(ctx->r14, 0X4);
    // 0x8001E02C: addiu       $t9, $t7, 0x4
    ctx->r25 = ADD32(ctx->r15, 0X4);
    // 0x8001E030: or          $s6, $t6, $zero
    ctx->r22 = ctx->r14 | 0;
    // 0x8001E034: sw          $t8, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r24;
    // 0x8001E038: sw          $t9, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r25;
    // 0x8001E03C: lhu         $t6, 0x38($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X38);
    // 0x8001E040: or          $s7, $t7, $zero
    ctx->r23 = ctx->r15 | 0;
    // 0x8001E044: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8001E048: sw          $t7, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r15;
    // 0x8001E04C: lhu         $t8, 0x3A($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X3A);
    // 0x8001E050: addiu       $t7, $t7, -0x4
    ctx->r15 = ADD32(ctx->r15, -0X4);
    // 0x8001E054: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8001E058: sw          $t9, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r25;
    // 0x8001E05C: addiu       $t9, $t9, -0x4
    ctx->r25 = ADD32(ctx->r25, -0X4);
    // 0x8001E060: sw          $t7, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r15;
    // 0x8001E064: b           L_8001E0C0
    // 0x8001E068: sw          $t9, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r25;
        goto L_8001E0C0;
    // 0x8001E068: sw          $t9, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r25;
L_8001E06C:
    // 0x8001E06C: addiu       $t6, $s1, 0x7FFF
    ctx->r14 = ADD32(ctx->r17, 0X7FFF);
    // 0x8001E070: lw          $t6, 0x6E99($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X6E99);
    // 0x8001E074: lw          $s6, 0x6E91($s6)
    ctx->r22 = MEM_W(ctx->r22, 0X6E91);
    // 0x8001E078: lw          $s7, 0x6E95($s7)
    ctx->r23 = MEM_W(ctx->r23, 0X6E95);
    // 0x8001E07C: addiu       $t7, $s1, 0x7FFF
    ctx->r15 = ADD32(ctx->r17, 0X7FFF);
    // 0x8001E080: sw          $t6, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r14;
    // 0x8001E084: lw          $t7, 0x6E9D($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X6E9D);
    // 0x8001E088: addiu       $t8, $s1, 0x7FFF
    ctx->r24 = ADD32(ctx->r17, 0X7FFF);
    // 0x8001E08C: sw          $t7, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r15;
    // 0x8001E090: lw          $t8, 0x6EA1($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X6EA1);
    // 0x8001E094: addiu       $t9, $s1, 0x7FFF
    ctx->r25 = ADD32(ctx->r17, 0X7FFF);
    // 0x8001E098: sw          $t8, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r24;
    // 0x8001E09C: lw          $t9, 0x6EA5($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X6EA5);
    // 0x8001E0A0: addiu       $t6, $s1, 0x7FFF
    ctx->r14 = ADD32(ctx->r17, 0X7FFF);
    // 0x8001E0A4: sw          $t9, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r25;
    // 0x8001E0A8: lw          $t6, 0x6EA9($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X6EA9);
    // 0x8001E0AC: addiu       $t7, $s1, 0x7FFF
    ctx->r15 = ADD32(ctx->r17, 0X7FFF);
    // 0x8001E0B0: sw          $t6, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r14;
    // 0x8001E0B4: lw          $t7, 0x6EAD($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X6EAD);
    // 0x8001E0B8: nop

    // 0x8001E0BC: sw          $t7, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r15;
L_8001E0C0:
    // 0x8001E0C0: andi        $t8, $v1, 0xF
    ctx->r24 = ctx->r3 & 0XF;
    // 0x8001E0C4: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x8001E0C8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8001E0CC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8001E0D0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8001E0D4: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8001E0D8: ori         $at, $at, 0x8ED0
    ctx->r1 = ctx->r1 | 0X8ED0;
    // 0x8001E0DC: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8001E0E0: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x8001E0E4: addiu       $t7, $t7, -0x3770
    ctx->r15 = ADD32(ctx->r15, -0X3770);
    // 0x8001E0E8: addu        $t6, $t9, $at
    ctx->r14 = ADD32(ctx->r25, ctx->r1);
    // 0x8001E0EC: andi        $t8, $v1, 0x100
    ctx->r24 = ctx->r3 & 0X100;
    // 0x8001E0F0: beq         $t8, $zero, L_8001E110
    if (ctx->r24 == 0) {
        // 0x8001E0F4: addu        $v0, $t6, $t7
        ctx->r2 = ADD32(ctx->r14, ctx->r15);
            goto L_8001E110;
    }
    // 0x8001E0F4: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x8001E0F8: lh          $t9, 0x18($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X18);
    // 0x8001E0FC: lh          $t6, 0xC($v0)
    ctx->r14 = MEM_H(ctx->r2, 0XC);
    // 0x8001E100: nop

    // 0x8001E104: subu        $t7, $t9, $t6
    ctx->r15 = SUB32(ctx->r25, ctx->r14);
    // 0x8001E108: b           L_8001E11C
    // 0x8001E10C: sw          $t7, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r15;
        goto L_8001E11C;
    // 0x8001E10C: sw          $t7, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r15;
L_8001E110:
    // 0x8001E110: lh          $t8, 0x18($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X18);
    // 0x8001E114: nop

    // 0x8001E118: sw          $t8, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r24;
L_8001E11C:
    // 0x8001E11C: andi        $t9, $v1, 0x200
    ctx->r25 = ctx->r3 & 0X200;
    // 0x8001E120: beq         $t9, $zero, L_8001E138
    if (ctx->r25 == 0) {
        // 0x8001E124: nop
    
            goto L_8001E138;
    }
    // 0x8001E124: nop

    // 0x8001E128: lh          $t6, 0x1C($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X1C);
    // 0x8001E12C: lh          $t7, 0x10($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X10);
    // 0x8001E130: b           L_8001E140
    // 0x8001E134: subu        $fp, $t6, $t7
    ctx->r30 = SUB32(ctx->r14, ctx->r15);
        goto L_8001E140;
    // 0x8001E134: subu        $fp, $t6, $t7
    ctx->r30 = SUB32(ctx->r14, ctx->r15);
L_8001E138:
    // 0x8001E138: lh          $fp, 0x1C($s0)
    ctx->r30 = MEM_H(ctx->r16, 0X1C);
    // 0x8001E13C: nop

L_8001E140:
    // 0x8001E140: addiu       $v0, $s1, 0x7FFF
    ctx->r2 = ADD32(ctx->r17, 0X7FFF);
    // 0x8001E144: lw          $v0, 0x6C21($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6C21);
    // 0x8001E148: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x8001E14C: sll         $t8, $v0, 10
    ctx->r24 = S32(ctx->r2 << 10);
    // 0x8001E150: srl         $t9, $t8, 31
    ctx->r25 = S32(U32(ctx->r24) >> 31);
    // 0x8001E154: bne         $s3, $t9, L_8001E2A0
    if (ctx->r19 != ctx->r25) {
        // 0x8001E158: addiu       $s2, $zero, 0x400
        ctx->r18 = ADD32(0, 0X400);
            goto L_8001E2A0;
    }
    // 0x8001E158: addiu       $s2, $zero, 0x400
    ctx->r18 = ADD32(0, 0X400);
    // 0x8001E15C: lw          $t6, 0x8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X8);
    // 0x8001E160: lui         $t9, 0x801B
    ctx->r25 = S32(0X801B << 16);
    // 0x8001E164: sll         $t8, $t6, 11
    ctx->r24 = S32(ctx->r14 << 11);
    // 0x8001E168: bltz        $t8, L_8001E2A0
    if (SIGNED(ctx->r24) < 0) {
        // 0x8001E16C: nop
    
            goto L_8001E2A0;
    }
    // 0x8001E16C: nop

    // 0x8001E170: lhu         $t9, -0x4016($t9)
    ctx->r25 = MEM_HU(ctx->r25, -0X4016);
    // 0x8001E174: nop

    // 0x8001E178: bne         $t9, $zero, L_8001E19C
    if (ctx->r25 != 0) {
        // 0x8001E17C: srl         $t6, $v0, 25
        ctx->r14 = S32(U32(ctx->r2) >> 25);
            goto L_8001E19C;
    }
    // 0x8001E17C: srl         $t6, $v0, 25
    ctx->r14 = S32(U32(ctx->r2) >> 25);
    // 0x8001E180: jal         0x8001DDC0
    // 0x8001E184: sw          $t4, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r12;
    func_8001DDC0(rdram, ctx);
        goto after_0;
    // 0x8001E184: sw          $t4, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r12;
    after_0:
    // 0x8001E188: addiu       $v0, $s1, 0x7FFF
    ctx->r2 = ADD32(ctx->r17, 0X7FFF);
    // 0x8001E18C: lw          $v0, 0x6C21($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6C21);
    // 0x8001E190: lw          $t4, 0xD4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XD4);
    // 0x8001E194: nop

    // 0x8001E198: srl         $t6, $v0, 25
    ctx->r14 = S32(U32(ctx->r2) >> 25);
L_8001E19C:
    // 0x8001E19C: bne         $t6, $zero, L_8001E1C0
    if (ctx->r14 != 0) {
        // 0x8001E1A0: addiu       $t7, $s1, 0x7FFF
        ctx->r15 = ADD32(ctx->r17, 0X7FFF);
            goto L_8001E1C0;
    }
    // 0x8001E1A0: addiu       $t7, $s1, 0x7FFF
    ctx->r15 = ADD32(ctx->r17, 0X7FFF);
    // 0x8001E1A4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8001E1A8: lui         $s3, 0x8011
    ctx->r19 = S32(0X8011 << 16);
    // 0x8001E1AC: addiu       $s2, $zero, 0x1000
    ctx->r18 = ADD32(0, 0X1000);
    // 0x8001E1B0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8001E1B4: sh          $t7, 0xBC($sp)
    MEM_H(0XBC, ctx->r29) = ctx->r15;
    // 0x8001E1B8: b           L_8001E310
    // 0x8001E1BC: addiu       $s3, $s3, -0x2F94
    ctx->r19 = ADD32(ctx->r19, -0X2F94);
        goto L_8001E310;
    // 0x8001E1BC: addiu       $s3, $s3, -0x2F94
    ctx->r19 = ADD32(ctx->r19, -0X2F94);
L_8001E1C0:
    // 0x8001E1C0: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x8001E1C4: sh          $zero, 0xBC($sp)
    MEM_H(0XBC, ctx->r29) = 0;
    // 0x8001E1C8: lbu         $t7, 0x6C22($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X6C22);
    // 0x8001E1CC: sll         $t8, $a0, 9
    ctx->r24 = S32(ctx->r4 << 9);
    // 0x8001E1D0: srl         $t9, $t8, 31
    ctx->r25 = S32(U32(ctx->r24) >> 31);
    // 0x8001E1D4: srl         $t8, $t7, 7
    ctx->r24 = S32(U32(ctx->r15) >> 7);
    // 0x8001E1D8: bne         $s3, $t8, L_8001E294
    if (ctx->r19 != ctx->r24) {
        // 0x8001E1DC: andi        $a0, $t9, 0xFFFF
        ctx->r4 = ctx->r25 & 0XFFFF;
            goto L_8001E294;
    }
    // 0x8001E1DC: andi        $a0, $t9, 0xFFFF
    ctx->r4 = ctx->r25 & 0XFFFF;
    // 0x8001E1E0: lui         $s3, 0x8011
    ctx->r19 = S32(0X8011 << 16);
    // 0x8001E1E4: addiu       $s3, $s3, -0x2F94
    ctx->r19 = ADD32(ctx->r19, -0X2F94);
    // 0x8001E1E8: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x8001E1EC: lui         $at, 0xFA00
    ctx->r1 = S32(0XFA00 << 16);
    // 0x8001E1F0: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8001E1F4: sw          $t9, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r25;
    // 0x8001E1F8: lbu         $t7, 0xD($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0XD);
    // 0x8001E1FC: addiu       $t6, $s1, 0x7FFF
    ctx->r14 = ADD32(ctx->r17, 0X7FFF);
    // 0x8001E200: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x8001E204: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8001E208: lh          $t6, 0x6C17($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X6C17);
    // 0x8001E20C: lbu         $t9, 0xE($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0XE);
    // 0x8001E210: addiu       $t8, $s1, 0x7FFF
    ctx->r24 = ADD32(ctx->r17, 0X7FFF);
    // 0x8001E214: multu       $t9, $t6
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001E218: lh          $t8, 0x6C19($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X6C19);
    // 0x8001E21C: mflo        $t7
    ctx->r15 = lo;
    // 0x8001E220: sra         $t9, $t7, 8
    ctx->r25 = S32(SIGNED(ctx->r15) >> 8);
    // 0x8001E224: lbu         $t7, 0xF($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0XF);
    // 0x8001E228: sll         $t6, $t9, 24
    ctx->r14 = S32(ctx->r25 << 24);
    // 0x8001E22C: multu       $t7, $t8
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001E230: mflo        $t9
    ctx->r25 = lo;
    // 0x8001E234: sra         $t7, $t9, 8
    ctx->r15 = S32(SIGNED(ctx->r25) >> 8);
    // 0x8001E238: andi        $t8, $t7, 0xFF
    ctx->r24 = ctx->r15 & 0XFF;
    // 0x8001E23C: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x8001E240: or          $t7, $t6, $t9
    ctx->r15 = ctx->r14 | ctx->r25;
    // 0x8001E244: addiu       $t6, $s1, 0x7FFF
    ctx->r14 = ADD32(ctx->r17, 0X7FFF);
    // 0x8001E248: lh          $t6, 0x6C1B($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X6C1B);
    // 0x8001E24C: lbu         $t8, 0x10($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X10);
    // 0x8001E250: nop

    // 0x8001E254: multu       $t8, $t6
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001E258: mflo        $t9
    ctx->r25 = lo;
    // 0x8001E25C: sra         $t8, $t9, 8
    ctx->r24 = S32(SIGNED(ctx->r25) >> 8);
    // 0x8001E260: andi        $t6, $t8, 0xFF
    ctx->r14 = ctx->r24 & 0XFF;
    // 0x8001E264: sll         $t9, $t6, 8
    ctx->r25 = S32(ctx->r14 << 8);
    // 0x8001E268: or          $t8, $t7, $t9
    ctx->r24 = ctx->r15 | ctx->r25;
    // 0x8001E26C: addiu       $t7, $s1, 0x7FFF
    ctx->r15 = ADD32(ctx->r17, 0X7FFF);
    // 0x8001E270: lh          $t7, 0x6C1D($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X6C1D);
    // 0x8001E274: lbu         $t6, 0x11($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X11);
    // 0x8001E278: nop

    // 0x8001E27C: multu       $t6, $t7
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001E280: mflo        $t9
    ctx->r25 = lo;
    // 0x8001E284: sra         $t6, $t9, 8
    ctx->r14 = S32(SIGNED(ctx->r25) >> 8);
    // 0x8001E288: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x8001E28C: or          $t9, $t8, $t7
    ctx->r25 = ctx->r24 | ctx->r15;
    // 0x8001E290: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
L_8001E294:
    // 0x8001E294: lui         $s3, 0x8011
    ctx->r19 = S32(0X8011 << 16);
    // 0x8001E298: b           L_8001E310
    // 0x8001E29C: addiu       $s3, $s3, -0x2F94
    ctx->r19 = ADD32(ctx->r19, -0X2F94);
        goto L_8001E310;
    // 0x8001E29C: addiu       $s3, $s3, -0x2F94
    ctx->r19 = ADD32(ctx->r19, -0X2F94);
L_8001E2A0:
    // 0x8001E2A0: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x8001E2A4: nop

    // 0x8001E2A8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8001E2AC: lbu         $t7, 0x10($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X10);
    // 0x8001E2B0: lbu         $a3, 0xF($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XF);
    // 0x8001E2B4: lbu         $a2, 0xE($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0XE);
    // 0x8001E2B8: lbu         $a1, 0xD($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XD);
    // 0x8001E2BC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8001E2C0: lbu         $t9, 0x11($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X11);
    // 0x8001E2C4: sw          $t4, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r12;
    // 0x8001E2C8: jal         0x8001ECD0
    // 0x8001E2CC: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    func_8001ECD0(rdram, ctx);
        goto after_1;
    // 0x8001E2CC: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    after_1:
    // 0x8001E2D0: lw          $t4, 0xD4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XD4);
    // 0x8001E2D4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8001E2D8: bne         $v0, $at, L_8001E2EC
    if (ctx->r2 != ctx->r1) {
        // 0x8001E2DC: sh          $v0, 0xBC($sp)
        MEM_H(0XBC, ctx->r29) = ctx->r2;
            goto L_8001E2EC;
    }
    // 0x8001E2DC: sh          $v0, 0xBC($sp)
    MEM_H(0XBC, ctx->r29) = ctx->r2;
    // 0x8001E2E0: addiu       $s2, $zero, 0x1000
    ctx->r18 = ADD32(0, 0X1000);
    // 0x8001E2E4: b           L_8001E300
    // 0x8001E2E8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
        goto L_8001E300;
    // 0x8001E2E8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_8001E2EC:
    // 0x8001E2EC: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x8001E2F0: nop

    // 0x8001E2F4: sll         $t6, $a0, 9
    ctx->r14 = S32(ctx->r4 << 9);
    // 0x8001E2F8: srl         $t8, $t6, 31
    ctx->r24 = S32(U32(ctx->r14) >> 31);
    // 0x8001E2FC: andi        $a0, $t8, 0xFFFF
    ctx->r4 = ctx->r24 & 0XFFFF;
L_8001E300:
    // 0x8001E300: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8001E304: lui         $s3, 0x8011
    ctx->r19 = S32(0X8011 << 16);
    // 0x8001E308: addiu       $s3, $s3, -0x2F94
    ctx->r19 = ADD32(ctx->r19, -0X2F94);
    // 0x8001E30C: sh          $zero, -0x4016($at)
    MEM_H(-0X4016, ctx->r1) = 0;
L_8001E310:
    // 0x8001E310: bne         $a0, $zero, L_8001E328
    if (ctx->r4 != 0) {
        // 0x8001E314: or          $v1, $a0, $zero
        ctx->r3 = ctx->r4 | 0;
            goto L_8001E328;
    }
    // 0x8001E314: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x8001E318: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x8001E31C: or          $s4, $s2, $zero
    ctx->r20 = ctx->r18 | 0;
    // 0x8001E320: b           L_8001E3C4
    // 0x8001E324: addiu       $s5, $zero, 0x400
    ctx->r21 = ADD32(0, 0X400);
        goto L_8001E3C4;
    // 0x8001E324: addiu       $s5, $zero, 0x400
    ctx->r21 = ADD32(0, 0X400);
L_8001E328:
    // 0x8001E328: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8001E32C: lwc1        $f0, 0x28($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X28);
    // 0x8001E330: lwc1        $f13, 0x3990($at)
    ctx->f_odd[(13 - 1) * 2] = MEM_W(ctx->r1, 0X3990);
    // 0x8001E334: lwc1        $f12, 0x3994($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X3994);
    // 0x8001E338: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x8001E33C: c.le.d      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.d <= ctx->f12.d;
    // 0x8001E340: nop

    // 0x8001E344: bc1t        L_8001ECA4
    if (c1cs) {
        // 0x8001E348: lw          $ra, 0x44($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X44);
            goto L_8001ECA4;
    }
    // 0x8001E348: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8001E34C: lwc1        $f2, 0x2C($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x8001E350: lui         $at, 0x4480
    ctx->r1 = S32(0X4480 << 16);
    // 0x8001E354: cvt.d.s     $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f6.d = CVT_D_S(ctx->f2.fl);
    // 0x8001E358: c.le.d      $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f6.d <= ctx->f12.d;
    // 0x8001E35C: nop

    // 0x8001E360: bc1t        L_8001ECA4
    if (c1cs) {
        // 0x8001E364: lw          $ra, 0x44($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X44);
            goto L_8001ECA4;
    }
    // 0x8001E364: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8001E368: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8001E36C: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x8001E370: div.s       $f8, $f12, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f12.fl, ctx->f0.fl);
    // 0x8001E374: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8001E378: nop

    // 0x8001E37C: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x8001E380: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8001E384: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8001E388: nop

    // 0x8001E38C: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8001E390: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8001E394: mfc1        $s4, $f10
    ctx->r20 = (int32_t)ctx->f10.u32l;
    // 0x8001E398: div.s       $f16, $f12, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = DIV_S(ctx->f12.fl, ctx->f2.fl);
    // 0x8001E39C: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8001E3A0: nop

    // 0x8001E3A4: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x8001E3A8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8001E3AC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8001E3B0: nop

    // 0x8001E3B4: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x8001E3B8: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8001E3BC: mfc1        $s5, $f18
    ctx->r21 = (int32_t)ctx->f18.u32l;
    // 0x8001E3C0: nop

L_8001E3C4:
    // 0x8001E3C4: sll         $t7, $v0, 26
    ctx->r15 = S32(ctx->r2 << 26);
    // 0x8001E3C8: bgez        $t7, L_8001E3D8
    if (SIGNED(ctx->r15) >= 0) {
        // 0x8001E3CC: sll         $t6, $v0, 27
        ctx->r14 = S32(ctx->r2 << 27);
            goto L_8001E3D8;
    }
    // 0x8001E3CC: sll         $t6, $v0, 27
    ctx->r14 = S32(ctx->r2 << 27);
    // 0x8001E3D0: b           L_8001E3DC
    // 0x8001E3D4: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
        goto L_8001E3DC;
    // 0x8001E3D4: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
L_8001E3D8:
    // 0x8001E3D8: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_8001E3DC:
    // 0x8001E3DC: bgez        $t6, L_8001E3EC
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8001E3E0: sw          $v1, 0x4C($sp)
        MEM_W(0X4C, ctx->r29) = ctx->r3;
            goto L_8001E3EC;
    }
    // 0x8001E3E0: sw          $v1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r3;
    // 0x8001E3E4: b           L_8001E3F0
    // 0x8001E3E8: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
        goto L_8001E3F0;
    // 0x8001E3E8: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
L_8001E3EC:
    // 0x8001E3EC: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
L_8001E3F0:
    // 0x8001E3F0: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x8001E3F4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8001E3F8: nop

L_8001E3FC:
    // 0x8001E3FC: lbu         $t8, 0x0($t4)
    ctx->r24 = MEM_BU(ctx->r12, 0X0);
    // 0x8001E400: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x8001E404: andi        $t7, $t8, 0x10
    ctx->r15 = ctx->r24 & 0X10;
    // 0x8001E408: bne         $t7, $at, L_8001E4A4
    if (ctx->r15 != ctx->r1) {
        // 0x8001E40C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8001E4A4;
    }
    // 0x8001E40C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8001E410: lw          $a1, 0xB8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XB8);
    // 0x8001E414: jal         0x8001EE34
    // 0x8001E418: sw          $t4, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r12;
    func_8001EE34(rdram, ctx);
        goto after_2;
    // 0x8001E418: sw          $t4, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r12;
    after_2:
    // 0x8001E41C: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x8001E420: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x8001E424: srl         $t9, $v0, 25
    ctx->r25 = S32(U32(ctx->r2) >> 25);
    // 0x8001E428: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8001E42C: lw          $t4, 0xD4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XD4);
    // 0x8001E430: andi        $t6, $t9, 0x20
    ctx->r14 = ctx->r25 & 0X20;
    // 0x8001E434: beq         $t6, $zero, L_8001E468
    if (ctx->r14 == 0) {
        // 0x8001E438: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8001E468;
    }
    // 0x8001E438: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8001E43C: lw          $a1, 0xB4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XB4);
    // 0x8001E440: jal         0x8001F8FC
    // 0x8001E444: sw          $t4, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r12;
    func_8001F8FC(rdram, ctx);
        goto after_3;
    // 0x8001E444: sw          $t4, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r12;
    after_3:
    // 0x8001E448: lw          $t8, 0xB4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XB4);
    // 0x8001E44C: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x8001E450: addiu       $t7, $t8, 0xC
    ctx->r15 = ADD32(ctx->r24, 0XC);
    // 0x8001E454: sw          $t7, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r15;
    // 0x8001E458: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8001E45C: lw          $t4, 0xD4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XD4);
    // 0x8001E460: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x8001E464: nop

L_8001E468:
    // 0x8001E468: sll         $t9, $v0, 18
    ctx->r25 = S32(ctx->r2 << 18);
    // 0x8001E46C: srl         $t6, $t9, 28
    ctx->r14 = S32(U32(ctx->r25) >> 28);
    // 0x8001E470: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8001E474: sllv        $t7, $t8, $t6
    ctx->r15 = S32(ctx->r24 << (ctx->r14 & 31));
    // 0x8001E478: sll         $t9, $t7, 5
    ctx->r25 = S32(ctx->r15 << 5);
    // 0x8001E47C: sll         $t8, $v0, 22
    ctx->r24 = S32(ctx->r2 << 22);
    // 0x8001E480: sw          $t9, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r25;
    // 0x8001E484: srl         $t6, $t8, 28
    ctx->r14 = S32(U32(ctx->r24) >> 28);
    // 0x8001E488: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8001E48C: sllv        $t9, $t7, $t6
    ctx->r25 = S32(ctx->r15 << (ctx->r14 & 31));
    // 0x8001E490: lw          $t7, 0xB8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XB8);
    // 0x8001E494: sll         $t8, $t9, 5
    ctx->r24 = S32(ctx->r25 << 5);
    // 0x8001E498: addiu       $t6, $t7, 0xC
    ctx->r14 = ADD32(ctx->r15, 0XC);
    // 0x8001E49C: sw          $t8, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r24;
    // 0x8001E4A0: sw          $t6, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r14;
L_8001E4A4:
    // 0x8001E4A4: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x8001E4A8: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8001E4AC: sll         $a2, $v0, 26
    ctx->r6 = S32(ctx->r2 << 26);
    // 0x8001E4B0: sll         $a3, $v0, 27
    ctx->r7 = S32(ctx->r2 << 27);
    // 0x8001E4B4: srl         $t8, $a3, 31
    ctx->r24 = S32(U32(ctx->r7) >> 31);
    // 0x8001E4B8: srl         $t9, $a2, 31
    ctx->r25 = S32(U32(ctx->r6) >> 31);
    // 0x8001E4BC: lhu         $v1, -0x4014($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X4014);
    // 0x8001E4C0: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    // 0x8001E4C4: beq         $t9, $zero, L_8001E4F8
    if (ctx->r25 == 0) {
        // 0x8001E4C8: or          $a3, $t8, $zero
        ctx->r7 = ctx->r24 | 0;
            goto L_8001E4F8;
    }
    // 0x8001E4C8: or          $a3, $t8, $zero
    ctx->r7 = ctx->r24 | 0;
    // 0x8001E4CC: lw          $v0, 0xA4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XA4);
    // 0x8001E4D0: lbu         $a0, 0x1($t4)
    ctx->r4 = MEM_BU(ctx->r12, 0X1);
    // 0x8001E4D4: lhu         $t7, 0x8($t4)
    ctx->r15 = MEM_HU(ctx->r12, 0X8);
    // 0x8001E4D8: sll         $t9, $a0, 5
    ctx->r25 = S32(ctx->r4 << 5);
    // 0x8001E4DC: subu        $t6, $t7, $v0
    ctx->r14 = SUB32(ctx->r15, ctx->r2);
    // 0x8001E4E0: addu        $t8, $t6, $t9
    ctx->r24 = ADD32(ctx->r14, ctx->r25);
    // 0x8001E4E4: multu       $t8, $s1
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001E4E8: mflo        $t7
    ctx->r15 = lo;
    // 0x8001E4EC: addu        $t6, $t7, $v0
    ctx->r14 = ADD32(ctx->r15, ctx->r2);
    // 0x8001E4F0: b           L_8001E504
    // 0x8001E4F4: subu        $ra, $t6, $v1
    ctx->r31 = SUB32(ctx->r14, ctx->r3);
        goto L_8001E504;
    // 0x8001E4F4: subu        $ra, $t6, $v1
    ctx->r31 = SUB32(ctx->r14, ctx->r3);
L_8001E4F8:
    // 0x8001E4F8: lhu         $t9, 0x8($t4)
    ctx->r25 = MEM_HU(ctx->r12, 0X8);
    // 0x8001E4FC: lbu         $a0, 0x1($t4)
    ctx->r4 = MEM_BU(ctx->r12, 0X1);
    // 0x8001E500: subu        $ra, $t9, $v1
    ctx->r31 = SUB32(ctx->r25, ctx->r3);
L_8001E504:
    // 0x8001E504: beq         $a3, $zero, L_8001E538
    if (ctx->r7 == 0) {
        // 0x8001E508: nop
    
            goto L_8001E538;
    }
    // 0x8001E508: nop

    // 0x8001E50C: lw          $v0, 0xA0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XA0);
    // 0x8001E510: lbu         $a1, 0x2($t4)
    ctx->r5 = MEM_BU(ctx->r12, 0X2);
    // 0x8001E514: lhu         $t8, 0xA($t4)
    ctx->r24 = MEM_HU(ctx->r12, 0XA);
    // 0x8001E518: sll         $t6, $a1, 5
    ctx->r14 = S32(ctx->r5 << 5);
    // 0x8001E51C: subu        $t7, $t8, $v0
    ctx->r15 = SUB32(ctx->r24, ctx->r2);
    // 0x8001E520: addu        $t9, $t7, $t6
    ctx->r25 = ADD32(ctx->r15, ctx->r14);
    // 0x8001E524: multu       $t9, $s2
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001E528: mflo        $t8
    ctx->r24 = lo;
    // 0x8001E52C: addu        $t7, $t8, $v0
    ctx->r15 = ADD32(ctx->r24, ctx->r2);
    // 0x8001E530: b           L_8001E544
    // 0x8001E534: subu        $t5, $t7, $v1
    ctx->r13 = SUB32(ctx->r15, ctx->r3);
        goto L_8001E544;
    // 0x8001E534: subu        $t5, $t7, $v1
    ctx->r13 = SUB32(ctx->r15, ctx->r3);
L_8001E538:
    // 0x8001E538: lhu         $t6, 0xA($t4)
    ctx->r14 = MEM_HU(ctx->r12, 0XA);
    // 0x8001E53C: lbu         $a1, 0x2($t4)
    ctx->r5 = MEM_BU(ctx->r12, 0X2);
    // 0x8001E540: subu        $t5, $t6, $v1
    ctx->r13 = SUB32(ctx->r14, ctx->r3);
L_8001E544:
    // 0x8001E544: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x8001E548: nop

    // 0x8001E54C: bne         $t9, $zero, L_8001E6D0
    if (ctx->r25 != 0) {
        // 0x8001E550: nop
    
            goto L_8001E6D0;
    }
    // 0x8001E550: nop

    // 0x8001E554: lhu         $v1, 0xBC($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0XBC);
    // 0x8001E558: beq         $a2, $zero, L_8001E59C
    if (ctx->r6 == 0) {
        // 0x8001E55C: nop
    
            goto L_8001E59C;
    }
    // 0x8001E55C: nop

    // 0x8001E560: lh          $v0, 0x4($t4)
    ctx->r2 = MEM_H(ctx->r12, 0X4);
    // 0x8001E564: lw          $a2, 0xC4($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XC4);
    // 0x8001E568: addu        $t8, $v0, $a0
    ctx->r24 = ADD32(ctx->r2, ctx->r4);
    // 0x8001E56C: multu       $t8, $s1
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001E570: subu        $t9, $a2, $v1
    ctx->r25 = SUB32(ctx->r6, ctx->r3);
    // 0x8001E574: mflo        $t7
    ctx->r15 = lo;
    // 0x8001E578: addu        $t1, $t7, $a2
    ctx->r9 = ADD32(ctx->r15, ctx->r6);
    // 0x8001E57C: sll         $t6, $t1, 2
    ctx->r14 = S32(ctx->r9 << 2);
    // 0x8001E580: multu       $v0, $s1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001E584: or          $t1, $t6, $zero
    ctx->r9 = ctx->r14 | 0;
    // 0x8001E588: mflo        $t8
    ctx->r24 = lo;
    // 0x8001E58C: addu        $t3, $t9, $t8
    ctx->r11 = ADD32(ctx->r25, ctx->r24);
    // 0x8001E590: sll         $t7, $t3, 2
    ctx->r15 = S32(ctx->r11 << 2);
    // 0x8001E594: b           L_8001E5CC
    // 0x8001E598: or          $t3, $t7, $zero
    ctx->r11 = ctx->r15 | 0;
        goto L_8001E5CC;
    // 0x8001E598: or          $t3, $t7, $zero
    ctx->r11 = ctx->r15 | 0;
L_8001E59C:
    // 0x8001E59C: lh          $t6, 0x4($t4)
    ctx->r14 = MEM_H(ctx->r12, 0X4);
    // 0x8001E5A0: lw          $t8, 0xC4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC4);
    // 0x8001E5A4: multu       $t6, $s1
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001E5A8: subu        $t6, $a0, $v1
    ctx->r14 = SUB32(ctx->r4, ctx->r3);
    // 0x8001E5AC: mflo        $t9
    ctx->r25 = lo;
    // 0x8001E5B0: addu        $t1, $t9, $t8
    ctx->r9 = ADD32(ctx->r25, ctx->r24);
    // 0x8001E5B4: sll         $t7, $t1, 2
    ctx->r15 = S32(ctx->r9 << 2);
    // 0x8001E5B8: multu       $t6, $s1
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001E5BC: or          $t1, $t7, $zero
    ctx->r9 = ctx->r15 | 0;
    // 0x8001E5C0: mflo        $t9
    ctx->r25 = lo;
    // 0x8001E5C4: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x8001E5C8: addu        $t3, $t8, $t7
    ctx->r11 = ADD32(ctx->r24, ctx->r15);
L_8001E5CC:
    // 0x8001E5CC: beq         $a3, $zero, L_8001E60C
    if (ctx->r7 == 0) {
        // 0x8001E5D0: slt         $at, $t1, $s6
        ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r22) ? 1 : 0;
            goto L_8001E60C;
    }
    // 0x8001E5D0: slt         $at, $t1, $s6
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r22) ? 1 : 0;
    // 0x8001E5D4: lh          $v0, 0x6($t4)
    ctx->r2 = MEM_H(ctx->r12, 0X6);
    // 0x8001E5D8: subu        $t8, $fp, $v1
    ctx->r24 = SUB32(ctx->r30, ctx->r3);
    // 0x8001E5DC: addu        $t7, $v0, $a1
    ctx->r15 = ADD32(ctx->r2, ctx->r5);
    // 0x8001E5E0: multu       $t7, $s2
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001E5E4: mflo        $t6
    ctx->r14 = lo;
    // 0x8001E5E8: addu        $t0, $t6, $fp
    ctx->r8 = ADD32(ctx->r14, ctx->r30);
    // 0x8001E5EC: sll         $t9, $t0, 2
    ctx->r25 = S32(ctx->r8 << 2);
    // 0x8001E5F0: multu       $v0, $s2
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001E5F4: or          $t0, $t9, $zero
    ctx->r8 = ctx->r25 | 0;
    // 0x8001E5F8: mflo        $t7
    ctx->r15 = lo;
    // 0x8001E5FC: addu        $t2, $t8, $t7
    ctx->r10 = ADD32(ctx->r24, ctx->r15);
    // 0x8001E600: sll         $t6, $t2, 2
    ctx->r14 = S32(ctx->r10 << 2);
    // 0x8001E604: b           L_8001E638
    // 0x8001E608: or          $t2, $t6, $zero
    ctx->r10 = ctx->r14 | 0;
        goto L_8001E638;
    // 0x8001E608: or          $t2, $t6, $zero
    ctx->r10 = ctx->r14 | 0;
L_8001E60C:
    // 0x8001E60C: lh          $t9, 0x6($t4)
    ctx->r25 = MEM_H(ctx->r12, 0X6);
    // 0x8001E610: subu        $t6, $a1, $v1
    ctx->r14 = SUB32(ctx->r5, ctx->r3);
    // 0x8001E614: multu       $t9, $s2
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001E618: mflo        $t8
    ctx->r24 = lo;
    // 0x8001E61C: addu        $t0, $t8, $fp
    ctx->r8 = ADD32(ctx->r24, ctx->r30);
    // 0x8001E620: sll         $t7, $t0, 2
    ctx->r15 = S32(ctx->r8 << 2);
    // 0x8001E624: multu       $t6, $s2
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001E628: or          $t0, $t7, $zero
    ctx->r8 = ctx->r15 | 0;
    // 0x8001E62C: mflo        $t9
    ctx->r25 = lo;
    // 0x8001E630: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x8001E634: addu        $t2, $t8, $t7
    ctx->r10 = ADD32(ctx->r24, ctx->r15);
L_8001E638:
    // 0x8001E638: beq         $at, $zero, L_8001E684
    if (ctx->r1 == 0) {
        // 0x8001E63C: slt         $at, $t0, $s7
        ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r23) ? 1 : 0;
            goto L_8001E684;
    }
    // 0x8001E63C: slt         $at, $t0, $s7
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r23) ? 1 : 0;
    // 0x8001E640: lw          $t7, 0x94($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X94);
    // 0x8001E644: subu        $t8, $s6, $t1
    ctx->r24 = SUB32(ctx->r22, ctx->r9);
    // 0x8001E648: slt         $at, $t3, $t7
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x8001E64C: beq         $at, $zero, L_8001E678
    if (ctx->r1 == 0) {
        // 0x8001E650: sll         $t7, $t8, 3
        ctx->r15 = S32(ctx->r24 << 3);
            goto L_8001E678;
    }
    // 0x8001E650: sll         $t7, $t8, 3
    ctx->r15 = S32(ctx->r24 << 3);
    // 0x8001E654: lhu         $t6, 0x16($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X16);
    // 0x8001E658: nop

    // 0x8001E65C: andi        $t9, $t6, 0x2000
    ctx->r25 = ctx->r14 & 0X2000;
    // 0x8001E660: beq         $t9, $zero, L_8001E66C
    if (ctx->r25 == 0) {
        // 0x8001E664: nop
    
            goto L_8001E66C;
    }
    // 0x8001E664: nop

    // 0x8001E668: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
L_8001E66C:
    // 0x8001E66C: lbu         $a3, 0x0($t4)
    ctx->r7 = MEM_BU(ctx->r12, 0X0);
    // 0x8001E670: b           L_8001EC90
    // 0x8001E674: slti        $at, $a3, 0x80
    ctx->r1 = SIGNED(ctx->r7) < 0X80 ? 1 : 0;
        goto L_8001EC90;
    // 0x8001E674: slti        $at, $a3, 0x80
    ctx->r1 = SIGNED(ctx->r7) < 0X80 ? 1 : 0;
L_8001E678:
    // 0x8001E678: addu        $ra, $ra, $t7
    ctx->r31 = ADD32(ctx->r31, ctx->r15);
    // 0x8001E67C: or          $t1, $s6, $zero
    ctx->r9 = ctx->r22 | 0;
    // 0x8001E680: slt         $at, $t0, $s7
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r23) ? 1 : 0;
L_8001E684:
    // 0x8001E684: beq         $at, $zero, L_8001EB5C
    if (ctx->r1 == 0) {
        // 0x8001E688: lw          $t8, 0x8C($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X8C);
            goto L_8001EB5C;
    }
    // 0x8001E688: lw          $t8, 0x8C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X8C);
    // 0x8001E68C: lw          $t6, 0x90($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X90);
    // 0x8001E690: subu        $t7, $s7, $t0
    ctx->r15 = SUB32(ctx->r23, ctx->r8);
    // 0x8001E694: slt         $at, $t2, $t6
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x8001E698: beq         $at, $zero, L_8001E6C4
    if (ctx->r1 == 0) {
        // 0x8001E69C: sll         $t6, $t7, 3
        ctx->r14 = S32(ctx->r15 << 3);
            goto L_8001E6C4;
    }
    // 0x8001E69C: sll         $t6, $t7, 3
    ctx->r14 = S32(ctx->r15 << 3);
    // 0x8001E6A0: lhu         $t9, 0x16($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X16);
    // 0x8001E6A4: nop

    // 0x8001E6A8: andi        $t8, $t9, 0x4000
    ctx->r24 = ctx->r25 & 0X4000;
    // 0x8001E6AC: beq         $t8, $zero, L_8001E6B8
    if (ctx->r24 == 0) {
        // 0x8001E6B0: nop
    
            goto L_8001E6B8;
    }
    // 0x8001E6B0: nop

    // 0x8001E6B4: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
L_8001E6B8:
    // 0x8001E6B8: lbu         $a3, 0x0($t4)
    ctx->r7 = MEM_BU(ctx->r12, 0X0);
    // 0x8001E6BC: b           L_8001EC90
    // 0x8001E6C0: slti        $at, $a3, 0x80
    ctx->r1 = SIGNED(ctx->r7) < 0X80 ? 1 : 0;
        goto L_8001EC90;
    // 0x8001E6C0: slti        $at, $a3, 0x80
    ctx->r1 = SIGNED(ctx->r7) < 0X80 ? 1 : 0;
L_8001E6C4:
    // 0x8001E6C4: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x8001E6C8: b           L_8001EB58
    // 0x8001E6CC: or          $t0, $s7, $zero
    ctx->r8 = ctx->r23 | 0;
        goto L_8001EB58;
    // 0x8001E6CC: or          $t0, $s7, $zero
    ctx->r8 = ctx->r23 | 0;
L_8001E6D0:
    // 0x8001E6D0: mtc1        $fp, $f6
    ctx->f6.u32l = ctx->r30;
    // 0x8001E6D4: lw          $t9, 0xC4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC4);
    // 0x8001E6D8: cvt.s.w     $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    ctx->f2.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8001E6DC: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x8001E6E0: beq         $a2, $zero, L_8001E7D8
    if (ctx->r6 == 0) {
        // 0x8001E6E4: cvt.s.w     $f0, $f4
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
            goto L_8001E7D8;
    }
    // 0x8001E6E4: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8001E6E8: lh          $v0, 0x4($t4)
    ctx->r2 = MEM_H(ctx->r12, 0X4);
    // 0x8001E6EC: nop

    // 0x8001E6F0: multu       $s1, $v0
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001E6F4: mflo        $t8
    ctx->r24 = lo;
    // 0x8001E6F8: sll         $t7, $t8, 10
    ctx->r15 = S32(ctx->r24 << 10);
    // 0x8001E6FC: addu        $t8, $v0, $a0
    ctx->r24 = ADD32(ctx->r2, ctx->r4);
    // 0x8001E700: div         $zero, $t7, $s4
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r20))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r20)));
    // 0x8001E704: bne         $s4, $zero, L_8001E710
    if (ctx->r20 != 0) {
        // 0x8001E708: nop
    
            goto L_8001E710;
    }
    // 0x8001E708: nop

    // 0x8001E70C: break       7
    do_break(2147608332);
L_8001E710:
    // 0x8001E710: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8001E714: bne         $s4, $at, L_8001E728
    if (ctx->r20 != ctx->r1) {
        // 0x8001E718: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8001E728;
    }
    // 0x8001E718: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8001E71C: bne         $t7, $at, L_8001E728
    if (ctx->r15 != ctx->r1) {
        // 0x8001E720: nop
    
            goto L_8001E728;
    }
    // 0x8001E720: nop

    // 0x8001E724: break       6
    do_break(2147608356);
L_8001E728:
    // 0x8001E728: mflo        $t6
    ctx->r14 = lo;
    // 0x8001E72C: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x8001E730: nop

    // 0x8001E734: multu       $s1, $t8
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001E738: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8001E73C: add.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f0.fl + ctx->f10.fl;
    // 0x8001E740: mul.s       $f18, $f16, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x8001E744: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8001E748: mflo        $t7
    ctx->r15 = lo;
    // 0x8001E74C: sll         $t6, $t7, 10
    ctx->r14 = S32(ctx->r15 << 10);
    // 0x8001E750: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x8001E754: div         $zero, $t6, $s4
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r20))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r20)));
    // 0x8001E758: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8001E75C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8001E760: nop

    // 0x8001E764: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8001E768: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8001E76C: mfc1        $t3, $f4
    ctx->r11 = (int32_t)ctx->f4.u32l;
    // 0x8001E770: bne         $s4, $zero, L_8001E77C
    if (ctx->r20 != 0) {
        // 0x8001E774: nop
    
            goto L_8001E77C;
    }
    // 0x8001E774: nop

    // 0x8001E778: break       7
    do_break(2147608440);
L_8001E77C:
    // 0x8001E77C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8001E780: bne         $s4, $at, L_8001E794
    if (ctx->r20 != ctx->r1) {
        // 0x8001E784: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8001E794;
    }
    // 0x8001E784: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8001E788: bne         $t6, $at, L_8001E794
    if (ctx->r14 != ctx->r1) {
        // 0x8001E78C: nop
    
            goto L_8001E794;
    }
    // 0x8001E78C: nop

    // 0x8001E790: break       6
    do_break(2147608464);
L_8001E794:
    // 0x8001E794: mflo        $t9
    ctx->r25 = lo;
    // 0x8001E798: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x8001E79C: nop

    // 0x8001E7A0: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8001E7A4: add.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x8001E7A8: mul.s       $f16, $f10, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x8001E7AC: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8001E7B0: nop

    // 0x8001E7B4: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x8001E7B8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8001E7BC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8001E7C0: nop

    // 0x8001E7C4: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x8001E7C8: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    // 0x8001E7CC: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8001E7D0: b           L_8001E8C4
    // 0x8001E7D4: nop

        goto L_8001E8C4;
    // 0x8001E7D4: nop

L_8001E7D8:
    // 0x8001E7D8: lh          $v0, 0x4($t4)
    ctx->r2 = MEM_H(ctx->r12, 0X4);
    // 0x8001E7DC: nop

    // 0x8001E7E0: multu       $s1, $v0
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001E7E4: mflo        $t7
    ctx->r15 = lo;
    // 0x8001E7E8: sll         $t6, $t7, 10
    ctx->r14 = S32(ctx->r15 << 10);
    // 0x8001E7EC: addu        $t7, $v0, $a0
    ctx->r15 = ADD32(ctx->r2, ctx->r4);
    // 0x8001E7F0: div         $zero, $t6, $s4
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r20))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r20)));
    // 0x8001E7F4: bne         $s4, $zero, L_8001E800
    if (ctx->r20 != 0) {
        // 0x8001E7F8: nop
    
            goto L_8001E800;
    }
    // 0x8001E7F8: nop

    // 0x8001E7FC: break       7
    do_break(2147608572);
L_8001E800:
    // 0x8001E800: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8001E804: bne         $s4, $at, L_8001E818
    if (ctx->r20 != ctx->r1) {
        // 0x8001E808: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8001E818;
    }
    // 0x8001E808: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8001E80C: bne         $t6, $at, L_8001E818
    if (ctx->r14 != ctx->r1) {
        // 0x8001E810: nop
    
            goto L_8001E818;
    }
    // 0x8001E810: nop

    // 0x8001E814: break       6
    do_break(2147608596);
L_8001E818:
    // 0x8001E818: mflo        $t9
    ctx->r25 = lo;
    // 0x8001E81C: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x8001E820: nop

    // 0x8001E824: multu       $s1, $t7
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001E828: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8001E82C: add.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f6.fl;
    // 0x8001E830: mul.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x8001E834: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8001E838: mflo        $t6
    ctx->r14 = lo;
    // 0x8001E83C: sll         $t9, $t6, 10
    ctx->r25 = S32(ctx->r14 << 10);
    // 0x8001E840: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x8001E844: div         $zero, $t9, $s4
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r20))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r20)));
    // 0x8001E848: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8001E84C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8001E850: nop

    // 0x8001E854: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8001E858: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8001E85C: mfc1        $t1, $f16
    ctx->r9 = (int32_t)ctx->f16.u32l;
    // 0x8001E860: bne         $s4, $zero, L_8001E86C
    if (ctx->r20 != 0) {
        // 0x8001E864: nop
    
            goto L_8001E86C;
    }
    // 0x8001E864: nop

    // 0x8001E868: break       7
    do_break(2147608680);
L_8001E86C:
    // 0x8001E86C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8001E870: bne         $s4, $at, L_8001E884
    if (ctx->r20 != ctx->r1) {
        // 0x8001E874: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8001E884;
    }
    // 0x8001E874: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8001E878: bne         $t9, $at, L_8001E884
    if (ctx->r25 != ctx->r1) {
        // 0x8001E87C: nop
    
            goto L_8001E884;
    }
    // 0x8001E87C: nop

    // 0x8001E880: break       6
    do_break(2147608704);
L_8001E884:
    // 0x8001E884: mflo        $t8
    ctx->r24 = lo;
    // 0x8001E888: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x8001E88C: nop

    // 0x8001E890: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8001E894: add.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x8001E898: mul.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x8001E89C: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8001E8A0: nop

    // 0x8001E8A4: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x8001E8A8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8001E8AC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8001E8B0: nop

    // 0x8001E8B4: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8001E8B8: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8001E8BC: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x8001E8C0: nop

L_8001E8C4:
    // 0x8001E8C4: beq         $a3, $zero, L_8001E9BC
    if (ctx->r7 == 0) {
        // 0x8001E8C8: nop
    
            goto L_8001E9BC;
    }
    // 0x8001E8C8: nop

    // 0x8001E8CC: lh          $v0, 0x6($t4)
    ctx->r2 = MEM_H(ctx->r12, 0X6);
    // 0x8001E8D0: nop

    // 0x8001E8D4: multu       $s2, $v0
    result = U64(U32(ctx->r18)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001E8D8: mflo        $t6
    ctx->r14 = lo;
    // 0x8001E8DC: sll         $t9, $t6, 10
    ctx->r25 = S32(ctx->r14 << 10);
    // 0x8001E8E0: addu        $t6, $v0, $a1
    ctx->r14 = ADD32(ctx->r2, ctx->r5);
    // 0x8001E8E4: div         $zero, $t9, $s5
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r21))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r21)));
    // 0x8001E8E8: bne         $s5, $zero, L_8001E8F4
    if (ctx->r21 != 0) {
        // 0x8001E8EC: nop
    
            goto L_8001E8F4;
    }
    // 0x8001E8EC: nop

    // 0x8001E8F0: break       7
    do_break(2147608816);
L_8001E8F4:
    // 0x8001E8F4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8001E8F8: bne         $s5, $at, L_8001E90C
    if (ctx->r21 != ctx->r1) {
        // 0x8001E8FC: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8001E90C;
    }
    // 0x8001E8FC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8001E900: bne         $t9, $at, L_8001E90C
    if (ctx->r25 != ctx->r1) {
        // 0x8001E904: nop
    
            goto L_8001E90C;
    }
    // 0x8001E904: nop

    // 0x8001E908: break       6
    do_break(2147608840);
L_8001E90C:
    // 0x8001E90C: mflo        $t8
    ctx->r24 = lo;
    // 0x8001E910: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x8001E914: nop

    // 0x8001E918: multu       $s2, $t6
    result = U64(U32(ctx->r18)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001E91C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8001E920: add.s       $f4, $f2, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f18.fl;
    // 0x8001E924: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x8001E928: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8001E92C: mflo        $t9
    ctx->r25 = lo;
    // 0x8001E930: sll         $t8, $t9, 10
    ctx->r24 = S32(ctx->r25 << 10);
    // 0x8001E934: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x8001E938: div         $zero, $t8, $s5
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r21))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r21)));
    // 0x8001E93C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8001E940: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8001E944: nop

    // 0x8001E948: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8001E94C: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8001E950: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
    // 0x8001E954: bne         $s5, $zero, L_8001E960
    if (ctx->r21 != 0) {
        // 0x8001E958: nop
    
            goto L_8001E960;
    }
    // 0x8001E958: nop

    // 0x8001E95C: break       7
    do_break(2147608924);
L_8001E960:
    // 0x8001E960: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8001E964: bne         $s5, $at, L_8001E978
    if (ctx->r21 != ctx->r1) {
        // 0x8001E968: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8001E978;
    }
    // 0x8001E968: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8001E96C: bne         $t8, $at, L_8001E978
    if (ctx->r24 != ctx->r1) {
        // 0x8001E970: nop
    
            goto L_8001E978;
    }
    // 0x8001E970: nop

    // 0x8001E974: break       6
    do_break(2147608948);
L_8001E978:
    // 0x8001E978: mflo        $t7
    ctx->r15 = lo;
    // 0x8001E97C: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x8001E980: nop

    // 0x8001E984: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8001E988: add.s       $f18, $f2, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f2.fl + ctx->f16.fl;
    // 0x8001E98C: mul.s       $f4, $f18, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f12.fl);
    // 0x8001E990: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8001E994: nop

    // 0x8001E998: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x8001E99C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8001E9A0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8001E9A4: nop

    // 0x8001E9A8: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8001E9AC: mfc1        $t0, $f6
    ctx->r8 = (int32_t)ctx->f6.u32l;
    // 0x8001E9B0: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8001E9B4: b           L_8001EAAC
    // 0x8001E9B8: slt         $at, $t1, $s6
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r22) ? 1 : 0;
        goto L_8001EAAC;
    // 0x8001E9B8: slt         $at, $t1, $s6
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r22) ? 1 : 0;
L_8001E9BC:
    // 0x8001E9BC: lh          $v0, 0x6($t4)
    ctx->r2 = MEM_H(ctx->r12, 0X6);
    // 0x8001E9C0: nop

    // 0x8001E9C4: multu       $s2, $v0
    result = U64(U32(ctx->r18)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001E9C8: mflo        $t9
    ctx->r25 = lo;
    // 0x8001E9CC: sll         $t8, $t9, 10
    ctx->r24 = S32(ctx->r25 << 10);
    // 0x8001E9D0: addu        $t9, $v0, $a1
    ctx->r25 = ADD32(ctx->r2, ctx->r5);
    // 0x8001E9D4: div         $zero, $t8, $s5
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r21))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r21)));
    // 0x8001E9D8: bne         $s5, $zero, L_8001E9E4
    if (ctx->r21 != 0) {
        // 0x8001E9DC: nop
    
            goto L_8001E9E4;
    }
    // 0x8001E9DC: nop

    // 0x8001E9E0: break       7
    do_break(2147609056);
L_8001E9E4:
    // 0x8001E9E4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8001E9E8: bne         $s5, $at, L_8001E9FC
    if (ctx->r21 != ctx->r1) {
        // 0x8001E9EC: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8001E9FC;
    }
    // 0x8001E9EC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8001E9F0: bne         $t8, $at, L_8001E9FC
    if (ctx->r24 != ctx->r1) {
        // 0x8001E9F4: nop
    
            goto L_8001E9FC;
    }
    // 0x8001E9F4: nop

    // 0x8001E9F8: break       6
    do_break(2147609080);
L_8001E9FC:
    // 0x8001E9FC: mflo        $t7
    ctx->r15 = lo;
    // 0x8001EA00: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x8001EA04: nop

    // 0x8001EA08: multu       $s2, $t9
    result = U64(U32(ctx->r18)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001EA0C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8001EA10: add.s       $f16, $f2, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f2.fl + ctx->f10.fl;
    // 0x8001EA14: mul.s       $f18, $f16, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x8001EA18: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8001EA1C: mflo        $t8
    ctx->r24 = lo;
    // 0x8001EA20: sll         $t7, $t8, 10
    ctx->r15 = S32(ctx->r24 << 10);
    // 0x8001EA24: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x8001EA28: div         $zero, $t7, $s5
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r21))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r21)));
    // 0x8001EA2C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8001EA30: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8001EA34: nop

    // 0x8001EA38: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8001EA3C: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8001EA40: mfc1        $t0, $f4
    ctx->r8 = (int32_t)ctx->f4.u32l;
    // 0x8001EA44: bne         $s5, $zero, L_8001EA50
    if (ctx->r21 != 0) {
        // 0x8001EA48: nop
    
            goto L_8001EA50;
    }
    // 0x8001EA48: nop

    // 0x8001EA4C: break       7
    do_break(2147609164);
L_8001EA50:
    // 0x8001EA50: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8001EA54: bne         $s5, $at, L_8001EA68
    if (ctx->r21 != ctx->r1) {
        // 0x8001EA58: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8001EA68;
    }
    // 0x8001EA58: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8001EA5C: bne         $t7, $at, L_8001EA68
    if (ctx->r15 != ctx->r1) {
        // 0x8001EA60: nop
    
            goto L_8001EA68;
    }
    // 0x8001EA60: nop

    // 0x8001EA64: break       6
    do_break(2147609188);
L_8001EA68:
    // 0x8001EA68: mflo        $t6
    ctx->r14 = lo;
    // 0x8001EA6C: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x8001EA70: nop

    // 0x8001EA74: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8001EA78: add.s       $f10, $f2, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f8.fl;
    // 0x8001EA7C: mul.s       $f16, $f10, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x8001EA80: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8001EA84: nop

    // 0x8001EA88: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x8001EA8C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8001EA90: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8001EA94: nop

    // 0x8001EA98: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x8001EA9C: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8001EAA0: mfc1        $t2, $f18
    ctx->r10 = (int32_t)ctx->f18.u32l;
    // 0x8001EAA4: nop

    // 0x8001EAA8: slt         $at, $t1, $s6
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r22) ? 1 : 0;
L_8001EAAC:
    // 0x8001EAAC: beq         $at, $zero, L_8001EB04
    if (ctx->r1 == 0) {
        // 0x8001EAB0: slt         $at, $t0, $s7
        ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r23) ? 1 : 0;
            goto L_8001EB04;
    }
    // 0x8001EAB0: slt         $at, $t0, $s7
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r23) ? 1 : 0;
    // 0x8001EAB4: lw          $t8, 0x94($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X94);
    // 0x8001EAB8: subu        $t9, $s6, $t1
    ctx->r25 = SUB32(ctx->r22, ctx->r9);
    // 0x8001EABC: slt         $at, $t3, $t8
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x8001EAC0: beq         $at, $zero, L_8001EAEC
    if (ctx->r1 == 0) {
        // 0x8001EAC4: nop
    
            goto L_8001EAEC;
    }
    // 0x8001EAC4: nop

    // 0x8001EAC8: lhu         $t7, 0x16($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X16);
    // 0x8001EACC: nop

    // 0x8001EAD0: andi        $t6, $t7, 0x2000
    ctx->r14 = ctx->r15 & 0X2000;
    // 0x8001EAD4: beq         $t6, $zero, L_8001EAE0
    if (ctx->r14 == 0) {
        // 0x8001EAD8: nop
    
            goto L_8001EAE0;
    }
    // 0x8001EAD8: nop

    // 0x8001EADC: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
L_8001EAE0:
    // 0x8001EAE0: lbu         $a3, 0x0($t4)
    ctx->r7 = MEM_BU(ctx->r12, 0X0);
    // 0x8001EAE4: b           L_8001EC90
    // 0x8001EAE8: slti        $at, $a3, 0x80
    ctx->r1 = SIGNED(ctx->r7) < 0X80 ? 1 : 0;
        goto L_8001EC90;
    // 0x8001EAE8: slti        $at, $a3, 0x80
    ctx->r1 = SIGNED(ctx->r7) < 0X80 ? 1 : 0;
L_8001EAEC:
    // 0x8001EAEC: multu       $t9, $s4
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001EAF0: or          $t1, $s6, $zero
    ctx->r9 = ctx->r22 | 0;
    // 0x8001EAF4: mflo        $t8
    ctx->r24 = lo;
    // 0x8001EAF8: sra         $t7, $t8, 7
    ctx->r15 = S32(SIGNED(ctx->r24) >> 7);
    // 0x8001EAFC: addu        $ra, $ra, $t7
    ctx->r31 = ADD32(ctx->r31, ctx->r15);
    // 0x8001EB00: slt         $at, $t0, $s7
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r23) ? 1 : 0;
L_8001EB04:
    // 0x8001EB04: beq         $at, $zero, L_8001EB5C
    if (ctx->r1 == 0) {
        // 0x8001EB08: lw          $t8, 0x8C($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X8C);
            goto L_8001EB5C;
    }
    // 0x8001EB08: lw          $t8, 0x8C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X8C);
    // 0x8001EB0C: lw          $t6, 0x90($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X90);
    // 0x8001EB10: subu        $t7, $s7, $t0
    ctx->r15 = SUB32(ctx->r23, ctx->r8);
    // 0x8001EB14: slt         $at, $t2, $t6
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x8001EB18: beq         $at, $zero, L_8001EB44
    if (ctx->r1 == 0) {
        // 0x8001EB1C: nop
    
            goto L_8001EB44;
    }
    // 0x8001EB1C: nop

    // 0x8001EB20: lhu         $t9, 0x16($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X16);
    // 0x8001EB24: nop

    // 0x8001EB28: andi        $t8, $t9, 0x4000
    ctx->r24 = ctx->r25 & 0X4000;
    // 0x8001EB2C: beq         $t8, $zero, L_8001EB38
    if (ctx->r24 == 0) {
        // 0x8001EB30: nop
    
            goto L_8001EB38;
    }
    // 0x8001EB30: nop

    // 0x8001EB34: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
L_8001EB38:
    // 0x8001EB38: lbu         $a3, 0x0($t4)
    ctx->r7 = MEM_BU(ctx->r12, 0X0);
    // 0x8001EB3C: b           L_8001EC90
    // 0x8001EB40: slti        $at, $a3, 0x80
    ctx->r1 = SIGNED(ctx->r7) < 0X80 ? 1 : 0;
        goto L_8001EC90;
    // 0x8001EB40: slti        $at, $a3, 0x80
    ctx->r1 = SIGNED(ctx->r7) < 0X80 ? 1 : 0;
L_8001EB44:
    // 0x8001EB44: multu       $t7, $s5
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001EB48: or          $t0, $s7, $zero
    ctx->r8 = ctx->r23 | 0;
    // 0x8001EB4C: mflo        $t6
    ctx->r14 = lo;
    // 0x8001EB50: sra         $t9, $t6, 7
    ctx->r25 = S32(SIGNED(ctx->r14) >> 7);
    // 0x8001EB54: addu        $t5, $t5, $t9
    ctx->r13 = ADD32(ctx->r13, ctx->r25);
L_8001EB58:
    // 0x8001EB58: lw          $t8, 0x8C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X8C);
L_8001EB5C:
    // 0x8001EB5C: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
    // 0x8001EB60: slt         $at, $t8, $t3
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x8001EB64: beq         $at, $zero, L_8001EBA0
    if (ctx->r1 == 0) {
        // 0x8001EB68: slt         $at, $t7, $t1
        ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r9) ? 1 : 0;
            goto L_8001EBA0;
    }
    // 0x8001EB68: slt         $at, $t7, $t1
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x8001EB6C: beq         $at, $zero, L_8001EB98
    if (ctx->r1 == 0) {
        // 0x8001EB70: nop
    
            goto L_8001EB98;
    }
    // 0x8001EB70: nop

    // 0x8001EB74: lhu         $t6, 0x16($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X16);
    // 0x8001EB78: nop

    // 0x8001EB7C: andi        $t9, $t6, 0x2000
    ctx->r25 = ctx->r14 & 0X2000;
    // 0x8001EB80: beq         $t9, $zero, L_8001EB8C
    if (ctx->r25 == 0) {
        // 0x8001EB84: nop
    
            goto L_8001EB8C;
    }
    // 0x8001EB84: nop

    // 0x8001EB88: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
L_8001EB8C:
    // 0x8001EB8C: lbu         $a3, 0x0($t4)
    ctx->r7 = MEM_BU(ctx->r12, 0X0);
    // 0x8001EB90: b           L_8001EC90
    // 0x8001EB94: slti        $at, $a3, 0x80
    ctx->r1 = SIGNED(ctx->r7) < 0X80 ? 1 : 0;
        goto L_8001EC90;
    // 0x8001EB94: slti        $at, $a3, 0x80
    ctx->r1 = SIGNED(ctx->r7) < 0X80 ? 1 : 0;
L_8001EB98:
    // 0x8001EB98: lw          $t3, 0x8C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X8C);
    // 0x8001EB9C: nop

L_8001EBA0:
    // 0x8001EBA0: lw          $t8, 0x88($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X88);
    // 0x8001EBA4: lw          $t7, 0x80($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X80);
    // 0x8001EBA8: slt         $at, $t8, $t2
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x8001EBAC: beq         $at, $zero, L_8001EBE8
    if (ctx->r1 == 0) {
        // 0x8001EBB0: slt         $at, $t7, $t0
        ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r8) ? 1 : 0;
            goto L_8001EBE8;
    }
    // 0x8001EBB0: slt         $at, $t7, $t0
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x8001EBB4: beq         $at, $zero, L_8001EBE0
    if (ctx->r1 == 0) {
        // 0x8001EBB8: nop
    
            goto L_8001EBE0;
    }
    // 0x8001EBB8: nop

    // 0x8001EBBC: lhu         $t6, 0x16($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X16);
    // 0x8001EBC0: nop

    // 0x8001EBC4: andi        $t9, $t6, 0x4000
    ctx->r25 = ctx->r14 & 0X4000;
    // 0x8001EBC8: beq         $t9, $zero, L_8001EBD4
    if (ctx->r25 == 0) {
        // 0x8001EBCC: nop
    
            goto L_8001EBD4;
    }
    // 0x8001EBCC: nop

    // 0x8001EBD0: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
L_8001EBD4:
    // 0x8001EBD4: lbu         $a3, 0x0($t4)
    ctx->r7 = MEM_BU(ctx->r12, 0X0);
    // 0x8001EBD8: b           L_8001EC90
    // 0x8001EBDC: slti        $at, $a3, 0x80
    ctx->r1 = SIGNED(ctx->r7) < 0X80 ? 1 : 0;
        goto L_8001EC90;
    // 0x8001EBDC: slti        $at, $a3, 0x80
    ctx->r1 = SIGNED(ctx->r7) < 0X80 ? 1 : 0;
L_8001EBE0:
    // 0x8001EBE0: lw          $t2, 0x88($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X88);
    // 0x8001EBE4: nop

L_8001EBE8:
    // 0x8001EBE8: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x8001EBEC: andi        $t7, $t3, 0xFFF
    ctx->r15 = ctx->r11 & 0XFFF;
    // 0x8001EBF0: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8001EBF4: sw          $t8, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r24;
    // 0x8001EBF8: sll         $t6, $t7, 12
    ctx->r14 = S32(ctx->r15 << 12);
    // 0x8001EBFC: lui         $at, 0xE400
    ctx->r1 = S32(0XE400 << 16);
    // 0x8001EC00: or          $t9, $t6, $at
    ctx->r25 = ctx->r14 | ctx->r1;
    // 0x8001EC04: andi        $t8, $t2, 0xFFF
    ctx->r24 = ctx->r10 & 0XFFF;
    // 0x8001EC08: or          $t7, $t9, $t8
    ctx->r15 = ctx->r25 | ctx->r24;
    // 0x8001EC0C: andi        $t6, $t1, 0xFFF
    ctx->r14 = ctx->r9 & 0XFFF;
    // 0x8001EC10: sll         $t9, $t6, 12
    ctx->r25 = S32(ctx->r14 << 12);
    // 0x8001EC14: andi        $t8, $t0, 0xFFF
    ctx->r24 = ctx->r8 & 0XFFF;
    // 0x8001EC18: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8001EC1C: or          $t7, $t9, $t8
    ctx->r15 = ctx->r25 | ctx->r24;
    // 0x8001EC20: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x8001EC24: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x8001EC28: lui         $t9, 0xB400
    ctx->r25 = S32(0XB400 << 16);
    // 0x8001EC2C: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8001EC30: sw          $t6, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r14;
    // 0x8001EC34: andi        $t6, $t5, 0xFFFF
    ctx->r14 = ctx->r13 & 0XFFFF;
    // 0x8001EC38: sll         $t7, $ra, 16
    ctx->r15 = S32(ctx->r31 << 16);
    // 0x8001EC3C: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8001EC40: or          $t9, $t7, $t6
    ctx->r25 = ctx->r15 | ctx->r14;
    // 0x8001EC44: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x8001EC48: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x8001EC4C: lui         $t7, 0xB300
    ctx->r15 = S32(0XB300 << 16);
    // 0x8001EC50: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8001EC54: sw          $t8, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r24;
    // 0x8001EC58: andi        $t8, $s5, 0xFFFF
    ctx->r24 = ctx->r21 & 0XFFFF;
    // 0x8001EC5C: sll         $t9, $s4, 16
    ctx->r25 = S32(ctx->r20 << 16);
    // 0x8001EC60: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8001EC64: or          $t7, $t9, $t8
    ctx->r15 = ctx->r25 | ctx->r24;
    // 0x8001EC68: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x8001EC6C: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x8001EC70: lui         $t9, 0xE700
    ctx->r25 = S32(0XE700 << 16);
    // 0x8001EC74: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8001EC78: sw          $t6, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r14;
    // 0x8001EC7C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8001EC80: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8001EC84: lbu         $a3, 0x0($t4)
    ctx->r7 = MEM_BU(ctx->r12, 0X0);
    // 0x8001EC88: nop

    // 0x8001EC8C: slti        $at, $a3, 0x80
    ctx->r1 = SIGNED(ctx->r7) < 0X80 ? 1 : 0;
L_8001EC90:
    // 0x8001EC90: beq         $at, $zero, L_8001ECA4
    if (ctx->r1 == 0) {
        // 0x8001EC94: lw          $ra, 0x44($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X44);
            goto L_8001ECA4;
    }
    // 0x8001EC94: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8001EC98: b           L_8001E3FC
    // 0x8001EC9C: addiu       $t4, $t4, 0xC
    ctx->r12 = ADD32(ctx->r12, 0XC);
        goto L_8001E3FC;
    // 0x8001EC9C: addiu       $t4, $t4, 0xC
    ctx->r12 = ADD32(ctx->r12, 0XC);
L_8001ECA0:
    // 0x8001ECA0: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_8001ECA4:
    // 0x8001ECA4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8001ECA8: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8001ECAC: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8001ECB0: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8001ECB4: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x8001ECB8: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x8001ECBC: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x8001ECC0: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x8001ECC4: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x8001ECC8: jr          $ra
    // 0x8001ECCC: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
    return;
    // 0x8001ECCC: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
;}
RECOMP_FUNC void func_8001ECD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001ECD0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8001ECD4: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x8001ECD8: lw          $t9, 0x0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X0);
    // 0x8001ECDC: addiu       $a0, $a0, -0x401A
    ctx->r4 = ADD32(ctx->r4, -0X401A);
    // 0x8001ECE0: lhu         $t2, 0x0($a0)
    ctx->r10 = MEM_HU(ctx->r4, 0X0);
    // 0x8001ECE4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8001ECE8: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x8001ECEC: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x8001ECF0: andi        $t7, $a2, 0xFF
    ctx->r15 = ctx->r6 & 0XFF;
    // 0x8001ECF4: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x8001ECF8: andi        $t8, $a3, 0xFF
    ctx->r24 = ctx->r7 & 0XFF;
    // 0x8001ECFC: srl         $t1, $t9, 25
    ctx->r9 = S32(U32(ctx->r25) >> 25);
    // 0x8001ED00: or          $a3, $t8, $zero
    ctx->r7 = ctx->r24 | 0;
    // 0x8001ED04: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x8001ED08: beq         $t1, $t2, L_8001ED74
    if (ctx->r9 == ctx->r10) {
        // 0x8001ED0C: or          $a1, $t6, $zero
        ctx->r5 = ctx->r14 | 0;
            goto L_8001ED74;
    }
    // 0x8001ED0C: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x8001ED10: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x8001ED14: addiu       $t0, $t0, -0x2F94
    ctx->r8 = ADD32(ctx->r8, -0X2F94);
    // 0x8001ED18: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x8001ED1C: sh          $t1, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r9;
    // 0x8001ED20: addiu       $t3, $v1, 0x8
    ctx->r11 = ADD32(ctx->r3, 0X8);
    // 0x8001ED24: sw          $t3, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r11;
    // 0x8001ED28: lui         $t4, 0x600
    ctx->r12 = S32(0X600 << 16);
    // 0x8001ED2C: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x8001ED30: lhu         $t5, 0x0($a0)
    ctx->r13 = MEM_HU(ctx->r4, 0X0);
    // 0x8001ED34: lui         $t8, 0x800A
    ctx->r24 = S32(0X800A << 16);
    // 0x8001ED38: andi        $t6, $t5, 0x1F
    ctx->r14 = ctx->r13 & 0X1F;
    // 0x8001ED3C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8001ED40: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8001ED44: lw          $t8, 0x6A30($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X6A30);
    // 0x8001ED48: addiu       $t1, $zero, 0x10
    ctx->r9 = ADD32(0, 0X10);
    // 0x8001ED4C: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x8001ED50: lhu         $t9, 0x0($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X0);
    // 0x8001ED54: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8001ED58: andi        $t2, $t9, 0x40
    ctx->r10 = ctx->r25 & 0X40;
    // 0x8001ED5C: beq         $t2, $zero, L_8001ED70
    if (ctx->r10 == 0) {
        // 0x8001ED60: nop
    
            goto L_8001ED70;
    }
    // 0x8001ED60: nop

    // 0x8001ED64: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8001ED68: b           L_8001ED74
    // 0x8001ED6C: sh          $t1, -0x4014($at)
    MEM_H(-0X4014, ctx->r1) = ctx->r9;
        goto L_8001ED74;
    // 0x8001ED6C: sh          $t1, -0x4014($at)
    MEM_H(-0X4014, ctx->r1) = ctx->r9;
L_8001ED70:
    // 0x8001ED70: sh          $zero, -0x4014($at)
    MEM_H(-0X4014, ctx->r1) = 0;
L_8001ED74:
    // 0x8001ED74: lw          $t3, 0x0($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X0);
    // 0x8001ED78: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x8001ED7C: srl         $t4, $t3, 25
    ctx->r12 = S32(U32(ctx->r11) >> 25);
    // 0x8001ED80: beq         $t4, $zero, L_8001EE28
    if (ctx->r12 == 0) {
        // 0x8001ED84: addiu       $t0, $t0, -0x2F94
        ctx->r8 = ADD32(ctx->r8, -0X2F94);
            goto L_8001EE28;
    }
    // 0x8001ED84: addiu       $t0, $t0, -0x2F94
    ctx->r8 = ADD32(ctx->r8, -0X2F94);
    // 0x8001ED88: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x8001ED8C: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x8001ED90: lui         $at, 0xFA00
    ctx->r1 = S32(0XFA00 << 16);
    // 0x8001ED94: addiu       $t5, $v1, 0x8
    ctx->r13 = ADD32(ctx->r3, 0X8);
    // 0x8001ED98: sw          $t5, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r13;
    // 0x8001ED9C: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x8001EDA0: andi        $t2, $a3, 0xFF
    ctx->r10 = ctx->r7 & 0XFF;
    // 0x8001EDA4: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8001EDA8: lbu         $t5, 0x13($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X13);
    // 0x8001EDAC: sll         $t1, $t2, 16
    ctx->r9 = S32(ctx->r10 << 16);
    // 0x8001EDB0: sll         $t9, $a2, 24
    ctx->r25 = S32(ctx->r6 << 24);
    // 0x8001EDB4: lbu         $t2, 0x17($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X17);
    // 0x8001EDB8: or          $t3, $t9, $t1
    ctx->r11 = ctx->r25 | ctx->r9;
    // 0x8001EDBC: sll         $t6, $t5, 8
    ctx->r14 = S32(ctx->r13 << 8);
    // 0x8001EDC0: or          $t7, $t3, $t6
    ctx->r15 = ctx->r11 | ctx->r14;
    // 0x8001EDC4: or          $t9, $t7, $t2
    ctx->r25 = ctx->r15 | ctx->r10;
    // 0x8001EDC8: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x8001EDCC: lbu         $t1, 0x0($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X0);
    // 0x8001EDD0: lui         $t7, 0xB900
    ctx->r15 = S32(0XB900 << 16);
    // 0x8001EDD4: andi        $t4, $t1, 0x1
    ctx->r12 = ctx->r9 & 0X1;
    // 0x8001EDD8: bne         $t4, $zero, L_8001EE08
    if (ctx->r12 != 0) {
        // 0x8001EDDC: ori         $t7, $t7, 0x2
        ctx->r15 = ctx->r15 | 0X2;
            goto L_8001EE08;
    }
    // 0x8001EDDC: ori         $t7, $t7, 0x2
    ctx->r15 = ctx->r15 | 0X2;
    // 0x8001EDE0: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x8001EDE4: lui         $t3, 0xB900
    ctx->r11 = S32(0XB900 << 16);
    // 0x8001EDE8: addiu       $t5, $v1, 0x8
    ctx->r13 = ADD32(ctx->r3, 0X8);
    // 0x8001EDEC: sw          $t5, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r13;
    // 0x8001EDF0: ori         $t3, $t3, 0x2
    ctx->r11 = ctx->r11 | 0X2;
    // 0x8001EDF4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8001EDF8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8001EDFC: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
    // 0x8001EE00: jr          $ra
    // 0x8001EE04: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
    return;
    // 0x8001EE04: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
L_8001EE08:
    // 0x8001EE08: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x8001EE0C: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x8001EE10: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x8001EE14: sw          $t8, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r24;
    // 0x8001EE18: sw          $t2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r10;
    // 0x8001EE1C: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8001EE20: jr          $ra
    // 0x8001EE24: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8001EE24: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8001EE28:
    // 0x8001EE28: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8001EE2C: jr          $ra
    // 0x8001EE30: nop

    return;
    // 0x8001EE30: nop

;}
RECOMP_FUNC void func_8001EE34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001EE34: addiu       $sp, $sp, -0xD0
    ctx->r29 = ADD32(ctx->r29, -0XD0);
    // 0x8001EE38: sw          $s0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r16;
    // 0x8001EE3C: sw          $a0, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r4;
    // 0x8001EE40: lbu         $v0, 0xC($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XC);
    // 0x8001EE44: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8001EE48: slti        $at, $v0, 0x10
    ctx->r1 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x8001EE4C: bne         $at, $zero, L_8001EE60
    if (ctx->r1 != 0) {
        // 0x8001EE50: lui         $t1, 0x801B
        ctx->r9 = S32(0X801B << 16);
            goto L_8001EE60;
    }
    // 0x8001EE50: lui         $t1, 0x801B
    ctx->r9 = S32(0X801B << 16);
    // 0x8001EE54: lbu         $t2, 0x5($a1)
    ctx->r10 = MEM_BU(ctx->r5, 0X5);
    // 0x8001EE58: b           L_8001EE64
    // 0x8001EE5C: nop

        goto L_8001EE64;
    // 0x8001EE5C: nop

L_8001EE60:
    // 0x8001EE60: or          $t2, $v0, $zero
    ctx->r10 = ctx->r2 | 0;
L_8001EE64:
    // 0x8001EE64: addiu       $t1, $t1, -0x4020
    ctx->r9 = ADD32(ctx->r9, -0X4020);
    // 0x8001EE68: lw          $t7, 0x0($t1)
    ctx->r15 = MEM_W(ctx->r9, 0X0);
    // 0x8001EE6C: lw          $v1, 0x8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X8);
    // 0x8001EE70: lui         $t8, 0x801B
    ctx->r24 = S32(0X801B << 16);
    // 0x8001EE74: bne         $t7, $v1, L_8001EE8C
    if (ctx->r15 != ctx->r3) {
        // 0x8001EE78: lui         $a0, 0x8011
        ctx->r4 = S32(0X8011 << 16);
            goto L_8001EE8C;
    }
    // 0x8001EE78: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8001EE7C: lhu         $t8, -0x401C($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X401C);
    // 0x8001EE80: nop

    // 0x8001EE84: beq         $t2, $t8, L_8001F8F0
    if (ctx->r10 == ctx->r24) {
        // 0x8001EE88: nop
    
            goto L_8001F8F0;
    }
    // 0x8001EE88: nop

L_8001EE8C:
    // 0x8001EE8C: sw          $v1, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r3;
    // 0x8001EE90: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8001EE94: sh          $t2, -0x401C($at)
    MEM_H(-0X401C, ctx->r1) = ctx->r10;
    // 0x8001EE98: lbu         $a2, 0x4($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X4);
    // 0x8001EE9C: addiu       $a0, $a0, -0x2F94
    ctx->r4 = ADD32(ctx->r4, -0X2F94);
    // 0x8001EEA0: andi        $t9, $a2, 0x7
    ctx->r25 = ctx->r6 & 0X7;
    // 0x8001EEA4: sll         $a3, $t9, 2
    ctx->r7 = S32(ctx->r25 << 2);
    // 0x8001EEA8: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x8001EEAC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8001EEB0: addu        $t6, $t6, $a3
    ctx->r14 = ADD32(ctx->r14, ctx->r7);
    // 0x8001EEB4: lw          $t6, 0x3944($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3944);
    // 0x8001EEB8: lui         $t8, 0xBA00
    ctx->r24 = S32(0XBA00 << 16);
    // 0x8001EEBC: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x8001EEC0: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x8001EEC4: ori         $t8, $t8, 0xE02
    ctx->r24 = ctx->r24 | 0XE02;
    // 0x8001EEC8: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x8001EECC: sw          $t6, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r14;
    // 0x8001EED0: addu        $t9, $t9, $a3
    ctx->r25 = ADD32(ctx->r25, ctx->r7);
    // 0x8001EED4: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8001EED8: lw          $t9, 0x3930($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X3930);
    // 0x8001EEDC: lui         $t3, 0x801B
    ctx->r11 = S32(0X801B << 16);
    // 0x8001EEE0: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x8001EEE4: lbu         $a1, 0x4($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X4);
    // 0x8001EEE8: addiu       $t3, $t3, -0x4018
    ctx->r11 = ADD32(ctx->r11, -0X4018);
    // 0x8001EEEC: andi        $t6, $a1, 0x18
    ctx->r14 = ctx->r5 & 0X18;
    // 0x8001EEF0: beq         $t6, $zero, L_8001EF14
    if (ctx->r14 == 0) {
        // 0x8001EEF4: addiu       $at, $zero, 0xF
        ctx->r1 = ADD32(0, 0XF);
            goto L_8001EF14;
    }
    // 0x8001EEF4: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x8001EEF8: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x8001EEFC: beq         $t6, $at, L_8001F314
    if (ctx->r14 == ctx->r1) {
        // 0x8001EF00: addiu       $at, $zero, 0x10
        ctx->r1 = ADD32(0, 0X10);
            goto L_8001F314;
    }
    // 0x8001EF00: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x8001EF04: beq         $t6, $at, L_8001F668
    if (ctx->r14 == ctx->r1) {
        // 0x8001EF08: lw          $a1, 0xCC($sp)
        ctx->r5 = MEM_W(ctx->r29, 0XCC);
            goto L_8001F668;
    }
    // 0x8001EF08: lw          $a1, 0xCC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XCC);
    // 0x8001EF0C: b           L_8001F318
    // 0x8001EF10: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
        goto L_8001F318;
    // 0x8001EF10: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
L_8001EF14:
    // 0x8001EF14: lhu         $t7, 0x0($t3)
    ctx->r15 = MEM_HU(ctx->r11, 0X0);
    // 0x8001EF18: lui         $t5, 0xE600
    ctx->r13 = S32(0XE600 << 16);
    // 0x8001EF1C: beq         $t7, $zero, L_8001EFCC
    if (ctx->r15 == 0) {
        // 0x8001EF20: lui         $t0, 0x10
        ctx->r8 = S32(0X10 << 16);
            goto L_8001EFCC;
    }
    // 0x8001EF20: lui         $t0, 0x10
    ctx->r8 = S32(0X10 << 16);
    // 0x8001EF24: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8001EF28: sh          $zero, 0x0($t3)
    MEM_H(0X0, ctx->r11) = 0;
    // 0x8001EF2C: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8001EF30: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x8001EF34: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x8001EF38: addiu       $t6, $t6, -0x4B48
    ctx->r14 = ADD32(ctx->r14, -0X4B48);
    // 0x8001EF3C: lui         $t9, 0xFD10
    ctx->r25 = S32(0XFD10 << 16);
    // 0x8001EF40: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8001EF44: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x8001EF48: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8001EF4C: lui         $t8, 0xE800
    ctx->r24 = S32(0XE800 << 16);
    // 0x8001EF50: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x8001EF54: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x8001EF58: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8001EF5C: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8001EF60: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8001EF64: lui         $t6, 0xF500
    ctx->r14 = S32(0XF500 << 16);
    // 0x8001EF68: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8001EF6C: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x8001EF70: ori         $t6, $t6, 0x100
    ctx->r14 = ctx->r14 | 0X100;
    // 0x8001EF74: lui         $t7, 0x700
    ctx->r15 = S32(0X700 << 16);
    // 0x8001EF78: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x8001EF7C: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8001EF80: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8001EF84: lui         $t7, 0x73F
    ctx->r15 = S32(0X73F << 16);
    // 0x8001EF88: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8001EF8C: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x8001EF90: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8001EF94: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x8001EF98: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8001EF9C: ori         $t7, $t7, 0xC000
    ctx->r15 = ctx->r15 | 0XC000;
    // 0x8001EFA0: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8001EFA4: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x8001EFA8: lui         $t6, 0xF000
    ctx->r14 = S32(0XF000 << 16);
    // 0x8001EFAC: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8001EFB0: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x8001EFB4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8001EFB8: lui         $t9, 0xE700
    ctx->r25 = S32(0XE700 << 16);
    // 0x8001EFBC: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8001EFC0: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x8001EFC4: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8001EFC8: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
L_8001EFCC:
    // 0x8001EFCC: bne         $t2, $at, L_8001F080
    if (ctx->r10 != ctx->r1) {
        // 0x8001EFD0: lui         $t5, 0xE600
        ctx->r13 = S32(0XE600 << 16);
            goto L_8001F080;
    }
    // 0x8001EFD0: lui         $t5, 0xE600
    ctx->r13 = S32(0XE600 << 16);
    // 0x8001EFD4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8001EFD8: lui         $t7, 0xFD10
    ctx->r15 = S32(0XFD10 << 16);
    // 0x8001EFDC: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8001EFE0: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x8001EFE4: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8001EFE8: lw          $t8, 0xD0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XD0);
    // 0x8001EFEC: lui         $t7, 0xE800
    ctx->r15 = S32(0XE800 << 16);
    // 0x8001EFF0: lw          $t9, 0x34($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X34);
    // 0x8001EFF4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8001EFF8: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x8001EFFC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8001F000: lui         $t9, 0xF500
    ctx->r25 = S32(0XF500 << 16);
    // 0x8001F004: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8001F008: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x8001F00C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8001F010: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8001F014: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8001F018: lui         $t6, 0x700
    ctx->r14 = S32(0X700 << 16);
    // 0x8001F01C: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8001F020: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x8001F024: ori         $t9, $t9, 0x1F0
    ctx->r25 = ctx->r25 | 0X1F0;
    // 0x8001F028: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8001F02C: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x8001F030: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8001F034: lui         $t6, 0x703
    ctx->r14 = S32(0X703 << 16);
    // 0x8001F038: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x8001F03C: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x8001F040: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8001F044: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x8001F048: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8001F04C: ori         $t6, $t6, 0xC000
    ctx->r14 = ctx->r14 | 0XC000;
    // 0x8001F050: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8001F054: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x8001F058: lui         $t9, 0xF000
    ctx->r25 = S32(0XF000 << 16);
    // 0x8001F05C: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8001F060: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x8001F064: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8001F068: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x8001F06C: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x8001F070: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x8001F074: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8001F078: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8001F07C: sh          $zero, -0x401C($at)
    MEM_H(-0X401C, ctx->r1) = 0;
L_8001F080:
    // 0x8001F080: lw          $a1, 0xCC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XCC);
    // 0x8001F084: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x8001F088: andi        $t6, $a1, 0x7
    ctx->r14 = ctx->r5 & 0X7;
    // 0x8001F08C: sll         $t7, $t6, 21
    ctx->r15 = S32(ctx->r14 << 21);
    // 0x8001F090: lui         $at, 0xFD00
    ctx->r1 = S32(0XFD00 << 16);
    // 0x8001F094: addiu       $t9, $t3, 0x8
    ctx->r25 = ADD32(ctx->r11, 0X8);
    // 0x8001F098: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x8001F09C: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x8001F0A0: or          $t9, $t8, $t0
    ctx->r25 = ctx->r24 | ctx->r8;
    // 0x8001F0A4: sw          $t9, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r25;
    // 0x8001F0A8: lw          $t6, 0x8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X8);
    // 0x8001F0AC: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x8001F0B0: sw          $t6, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r14;
    // 0x8001F0B4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8001F0B8: lui         $at, 0xF500
    ctx->r1 = S32(0XF500 << 16);
    // 0x8001F0BC: or          $t4, $a1, $at
    ctx->r12 = ctx->r5 | ctx->r1;
    // 0x8001F0C0: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x8001F0C4: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x8001F0C8: or          $t8, $t4, $t0
    ctx->r24 = ctx->r12 | ctx->r8;
    // 0x8001F0CC: sw          $v0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r2;
    // 0x8001F0D0: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8001F0D4: lw          $t6, 0xD0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XD0);
    // 0x8001F0D8: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x8001F0DC: lw          $v1, 0x8($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X8);
    // 0x8001F0E0: lui         $t9, 0xF300
    ctx->r25 = S32(0XF300 << 16);
    // 0x8001F0E4: sll         $t7, $v1, 15
    ctx->r15 = S32(ctx->r3 << 15);
    // 0x8001F0E8: srl         $t8, $t7, 29
    ctx->r24 = S32(U32(ctx->r15) >> 29);
    // 0x8001F0EC: andi        $t6, $t8, 0x3
    ctx->r14 = ctx->r24 & 0X3;
    // 0x8001F0F0: sll         $t7, $t6, 18
    ctx->r15 = S32(ctx->r14 << 18);
    // 0x8001F0F4: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x8001F0F8: sll         $t6, $v1, 22
    ctx->r14 = S32(ctx->r3 << 22);
    // 0x8001F0FC: srl         $t7, $t6, 28
    ctx->r15 = S32(U32(ctx->r14) >> 28);
    // 0x8001F100: andi        $t6, $t7, 0xF
    ctx->r14 = ctx->r15 & 0XF;
    // 0x8001F104: sll         $t7, $t6, 14
    ctx->r15 = S32(ctx->r14 << 14);
    // 0x8001F108: or          $t6, $t8, $t7
    ctx->r14 = ctx->r24 | ctx->r15;
    // 0x8001F10C: sll         $t8, $v1, 12
    ctx->r24 = S32(ctx->r3 << 12);
    // 0x8001F110: srl         $t7, $t8, 29
    ctx->r15 = S32(U32(ctx->r24) >> 29);
    // 0x8001F114: andi        $t8, $t7, 0x3
    ctx->r24 = ctx->r15 & 0X3;
    // 0x8001F118: sll         $t7, $t8, 8
    ctx->r15 = S32(ctx->r24 << 8);
    // 0x8001F11C: or          $t8, $t6, $t7
    ctx->r24 = ctx->r14 | ctx->r15;
    // 0x8001F120: sll         $t6, $v1, 18
    ctx->r14 = S32(ctx->r3 << 18);
    // 0x8001F124: srl         $t7, $t6, 28
    ctx->r15 = S32(U32(ctx->r14) >> 28);
    // 0x8001F128: andi        $t6, $t7, 0xF
    ctx->r14 = ctx->r15 & 0XF;
    // 0x8001F12C: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x8001F130: or          $t6, $t8, $t7
    ctx->r14 = ctx->r24 | ctx->r15;
    // 0x8001F134: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x8001F138: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8001F13C: addiu       $t0, $zero, 0x7FF
    ctx->r8 = ADD32(0, 0X7FF);
    // 0x8001F140: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8001F144: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x8001F148: sw          $v0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r2;
    // 0x8001F14C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8001F150: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x8001F154: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x8001F158: nop

    // 0x8001F15C: addiu       $t6, $t1, 0x8
    ctx->r14 = ADD32(ctx->r9, 0X8);
    // 0x8001F160: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x8001F164: sw          $t9, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r25;
    // 0x8001F168: lhu         $t8, 0x2($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X2);
    // 0x8001F16C: lhu         $a2, 0x0($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X0);
    // 0x8001F170: nop

    // 0x8001F174: multu       $a2, $t8
    result = U64(U32(ctx->r6)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001F178: mflo        $a3
    ctx->r7 = lo;
    // 0x8001F17C: addiu       $a3, $a3, 0x3
    ctx->r7 = ADD32(ctx->r7, 0X3);
    // 0x8001F180: sra         $t7, $a3, 2
    ctx->r15 = S32(SIGNED(ctx->r7) >> 2);
    // 0x8001F184: addiu       $a3, $t7, -0x1
    ctx->r7 = ADD32(ctx->r15, -0X1);
    // 0x8001F188: slti        $at, $a3, 0x7FF
    ctx->r1 = SIGNED(ctx->r7) < 0X7FF ? 1 : 0;
    // 0x8001F18C: beq         $at, $zero, L_8001F19C
    if (ctx->r1 == 0) {
        // 0x8001F190: nop
    
            goto L_8001F19C;
    }
    // 0x8001F190: nop

    // 0x8001F194: b           L_8001F19C
    // 0x8001F198: or          $t0, $a3, $zero
    ctx->r8 = ctx->r7 | 0;
        goto L_8001F19C;
    // 0x8001F198: or          $t0, $a3, $zero
    ctx->r8 = ctx->r7 | 0;
L_8001F19C:
    // 0x8001F19C: bgez        $a2, L_8001F1AC
    if (SIGNED(ctx->r6) >= 0) {
        // 0x8001F1A0: sra         $v0, $a2, 4
        ctx->r2 = S32(SIGNED(ctx->r6) >> 4);
            goto L_8001F1AC;
    }
    // 0x8001F1A0: sra         $v0, $a2, 4
    ctx->r2 = S32(SIGNED(ctx->r6) >> 4);
    // 0x8001F1A4: addiu       $at, $a2, 0xF
    ctx->r1 = ADD32(ctx->r6, 0XF);
    // 0x8001F1A8: sra         $v0, $at, 4
    ctx->r2 = S32(SIGNED(ctx->r1) >> 4);
L_8001F1AC:
    // 0x8001F1AC: bgtz        $v0, L_8001F1BC
    if (SIGNED(ctx->r2) > 0) {
        // 0x8001F1B0: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_8001F1BC;
    }
    // 0x8001F1B0: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x8001F1B4: b           L_8001F1BC
    // 0x8001F1B8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
        goto L_8001F1BC;
    // 0x8001F1B8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_8001F1BC:
    // 0x8001F1BC: bgtz        $v0, L_8001F1CC
    if (SIGNED(ctx->r2) > 0) {
        // 0x8001F1C0: addiu       $t6, $a2, 0x7FF
        ctx->r14 = ADD32(ctx->r6, 0X7FF);
            goto L_8001F1CC;
    }
    // 0x8001F1C0: addiu       $t6, $a2, 0x7FF
    ctx->r14 = ADD32(ctx->r6, 0X7FF);
    // 0x8001F1C4: b           L_8001F1D0
    // 0x8001F1C8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_8001F1D0;
    // 0x8001F1C8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_8001F1CC:
    // 0x8001F1CC: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
L_8001F1D0:
    // 0x8001F1D0: div         $zero, $t6, $a1
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r5)));
    // 0x8001F1D4: bne         $a1, $zero, L_8001F1E0
    if (ctx->r5 != 0) {
        // 0x8001F1D8: nop
    
            goto L_8001F1E0;
    }
    // 0x8001F1D8: nop

    // 0x8001F1DC: break       7
    do_break(2147611100);
L_8001F1E0:
    // 0x8001F1E0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8001F1E4: bne         $a1, $at, L_8001F1F8
    if (ctx->r5 != ctx->r1) {
        // 0x8001F1E8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8001F1F8;
    }
    // 0x8001F1E8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8001F1EC: bne         $t6, $at, L_8001F1F8
    if (ctx->r14 != ctx->r1) {
        // 0x8001F1F0: nop
    
            goto L_8001F1F8;
    }
    // 0x8001F1F0: nop

    // 0x8001F1F4: break       6
    do_break(2147611124);
L_8001F1F8:
    // 0x8001F1F8: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x8001F1FC: andi        $t6, $t0, 0xFFF
    ctx->r14 = ctx->r8 & 0XFFF;
    // 0x8001F200: mflo        $t9
    ctx->r25 = lo;
    // 0x8001F204: andi        $t8, $t9, 0xFFF
    ctx->r24 = ctx->r25 & 0XFFF;
    // 0x8001F208: or          $t7, $t8, $at
    ctx->r15 = ctx->r24 | ctx->r1;
    // 0x8001F20C: sll         $t9, $t6, 12
    ctx->r25 = S32(ctx->r14 << 12);
    // 0x8001F210: or          $t8, $t7, $t9
    ctx->r24 = ctx->r15 | ctx->r25;
    // 0x8001F214: sw          $t8, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r24;
    // 0x8001F218: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8001F21C: lui         $t7, 0xE700
    ctx->r15 = S32(0XE700 << 16);
    // 0x8001F220: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8001F224: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x8001F228: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8001F22C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8001F230: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x8001F234: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8001F238: nop

    // 0x8001F23C: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8001F240: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x8001F244: lhu         $t8, 0x0($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X0);
    // 0x8001F248: or          $t3, $v0, $zero
    ctx->r11 = ctx->r2 | 0;
    // 0x8001F24C: sra         $t6, $t8, 1
    ctx->r14 = S32(SIGNED(ctx->r24) >> 1);
    // 0x8001F250: addiu       $t7, $t6, 0x7
    ctx->r15 = ADD32(ctx->r14, 0X7);
    // 0x8001F254: sra         $t9, $t7, 3
    ctx->r25 = S32(SIGNED(ctx->r15) >> 3);
    // 0x8001F258: andi        $t8, $t9, 0x1FF
    ctx->r24 = ctx->r25 & 0X1FF;
    // 0x8001F25C: sll         $t6, $t8, 9
    ctx->r14 = S32(ctx->r24 << 9);
    // 0x8001F260: or          $t7, $t4, $t6
    ctx->r15 = ctx->r12 | ctx->r14;
    // 0x8001F264: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8001F268: lw          $t9, 0xD0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XD0);
    // 0x8001F26C: andi        $t8, $t2, 0xF
    ctx->r24 = ctx->r10 & 0XF;
    // 0x8001F270: lw          $v1, 0x8($t9)
    ctx->r3 = MEM_W(ctx->r25, 0X8);
    // 0x8001F274: sll         $t6, $t8, 20
    ctx->r14 = S32(ctx->r24 << 20);
    // 0x8001F278: sll         $t7, $v1, 15
    ctx->r15 = S32(ctx->r3 << 15);
    // 0x8001F27C: srl         $t9, $t7, 29
    ctx->r25 = S32(U32(ctx->r15) >> 29);
    // 0x8001F280: andi        $t8, $t9, 0x3
    ctx->r24 = ctx->r25 & 0X3;
    // 0x8001F284: sll         $t7, $t8, 18
    ctx->r15 = S32(ctx->r24 << 18);
    // 0x8001F288: or          $t9, $t6, $t7
    ctx->r25 = ctx->r14 | ctx->r15;
    // 0x8001F28C: sll         $t8, $v1, 22
    ctx->r24 = S32(ctx->r3 << 22);
    // 0x8001F290: srl         $t6, $t8, 28
    ctx->r14 = S32(U32(ctx->r24) >> 28);
    // 0x8001F294: andi        $t7, $t6, 0xF
    ctx->r15 = ctx->r14 & 0XF;
    // 0x8001F298: sll         $t8, $t7, 14
    ctx->r24 = S32(ctx->r15 << 14);
    // 0x8001F29C: or          $t6, $t9, $t8
    ctx->r14 = ctx->r25 | ctx->r24;
    // 0x8001F2A0: sll         $t7, $v1, 12
    ctx->r15 = S32(ctx->r3 << 12);
    // 0x8001F2A4: srl         $t9, $t7, 29
    ctx->r25 = S32(U32(ctx->r15) >> 29);
    // 0x8001F2A8: andi        $t8, $t9, 0x3
    ctx->r24 = ctx->r25 & 0X3;
    // 0x8001F2AC: sll         $t7, $t8, 8
    ctx->r15 = S32(ctx->r24 << 8);
    // 0x8001F2B0: or          $t9, $t6, $t7
    ctx->r25 = ctx->r14 | ctx->r15;
    // 0x8001F2B4: sll         $t8, $v1, 18
    ctx->r24 = S32(ctx->r3 << 18);
    // 0x8001F2B8: srl         $t6, $t8, 28
    ctx->r14 = S32(U32(ctx->r24) >> 28);
    // 0x8001F2BC: andi        $t7, $t6, 0xF
    ctx->r15 = ctx->r14 & 0XF;
    // 0x8001F2C0: sll         $t8, $t7, 4
    ctx->r24 = S32(ctx->r15 << 4);
    // 0x8001F2C4: or          $t6, $t9, $t8
    ctx->r14 = ctx->r25 | ctx->r24;
    // 0x8001F2C8: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x8001F2CC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8001F2D0: lui         $t9, 0xF200
    ctx->r25 = S32(0XF200 << 16);
    // 0x8001F2D4: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x8001F2D8: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x8001F2DC: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8001F2E0: lhu         $t8, 0x0($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X0);
    // 0x8001F2E4: or          $t5, $v0, $zero
    ctx->r13 = ctx->r2 | 0;
    // 0x8001F2E8: addiu       $t6, $t8, -0x1
    ctx->r14 = ADD32(ctx->r24, -0X1);
    // 0x8001F2EC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8001F2F0: lhu         $t6, 0x2($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X2);
    // 0x8001F2F4: andi        $t9, $t7, 0xFFF
    ctx->r25 = ctx->r15 & 0XFFF;
    // 0x8001F2F8: sll         $t8, $t9, 12
    ctx->r24 = S32(ctx->r25 << 12);
    // 0x8001F2FC: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8001F300: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x8001F304: andi        $t6, $t9, 0xFFF
    ctx->r14 = ctx->r25 & 0XFFF;
    // 0x8001F308: or          $t7, $t8, $t6
    ctx->r15 = ctx->r24 | ctx->r14;
    // 0x8001F30C: b           L_8001F8F0
    // 0x8001F310: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
        goto L_8001F8F0;
    // 0x8001F310: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
L_8001F314:
    // 0x8001F314: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
L_8001F318:
    // 0x8001F318: lui         $t8, 0xFD10
    ctx->r24 = S32(0XFD10 << 16);
    // 0x8001F31C: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8001F320: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x8001F324: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8001F328: lw          $t6, 0xD0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XD0);
    // 0x8001F32C: lui         $t8, 0xE800
    ctx->r24 = S32(0XE800 << 16);
    // 0x8001F330: lw          $t7, 0x34($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X34);
    // 0x8001F334: lui         $at, 0xFD00
    ctx->r1 = S32(0XFD00 << 16);
    // 0x8001F338: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x8001F33C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8001F340: lui         $t7, 0xF500
    ctx->r15 = S32(0XF500 << 16);
    // 0x8001F344: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8001F348: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x8001F34C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8001F350: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8001F354: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8001F358: lui         $t9, 0x700
    ctx->r25 = S32(0X700 << 16);
    // 0x8001F35C: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8001F360: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x8001F364: ori         $t7, $t7, 0x100
    ctx->r15 = ctx->r15 | 0X100;
    // 0x8001F368: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8001F36C: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x8001F370: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x8001F374: lui         $t6, 0xE600
    ctx->r14 = S32(0XE600 << 16);
    // 0x8001F378: addiu       $t8, $t1, 0x8
    ctx->r24 = ADD32(ctx->r9, 0X8);
    // 0x8001F37C: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x8001F380: sw          $zero, 0x4($t1)
    MEM_W(0X4, ctx->r9) = 0;
    // 0x8001F384: sw          $t6, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r14;
    // 0x8001F388: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x8001F38C: lui         $t8, 0x73F
    ctx->r24 = S32(0X73F << 16);
    // 0x8001F390: addiu       $t7, $t2, 0x8
    ctx->r15 = ADD32(ctx->r10, 0X8);
    // 0x8001F394: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x8001F398: ori         $t8, $t8, 0xC000
    ctx->r24 = ctx->r24 | 0XC000;
    // 0x8001F39C: lui         $t9, 0xF000
    ctx->r25 = S32(0XF000 << 16);
    // 0x8001F3A0: sw          $t9, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r25;
    // 0x8001F3A4: sw          $t8, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r24;
    // 0x8001F3A8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8001F3AC: lui         $t7, 0xE700
    ctx->r15 = S32(0XE700 << 16);
    // 0x8001F3B0: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8001F3B4: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x8001F3B8: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8001F3BC: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8001F3C0: lw          $a1, 0xCC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XCC);
    // 0x8001F3C4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8001F3C8: andi        $t8, $a1, 0x7
    ctx->r24 = ctx->r5 & 0X7;
    // 0x8001F3CC: sll         $t6, $t8, 21
    ctx->r14 = S32(ctx->r24 << 21);
    // 0x8001F3D0: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x8001F3D4: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8001F3D8: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x8001F3DC: lui         $at, 0x10
    ctx->r1 = S32(0X10 << 16);
    // 0x8001F3E0: or          $t9, $t7, $at
    ctx->r25 = ctx->r15 | ctx->r1;
    // 0x8001F3E4: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8001F3E8: lw          $t8, 0x8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X8);
    // 0x8001F3EC: lui         $at, 0xF500
    ctx->r1 = S32(0XF500 << 16);
    // 0x8001F3F0: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x8001F3F4: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x8001F3F8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8001F3FC: or          $t7, $a1, $at
    ctx->r15 = ctx->r5 | ctx->r1;
    // 0x8001F400: lui         $at, 0x10
    ctx->r1 = S32(0X10 << 16);
    // 0x8001F404: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8001F408: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x8001F40C: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x8001F410: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x8001F414: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8001F418: lw          $t6, 0xD0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XD0);
    // 0x8001F41C: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x8001F420: lw          $v1, 0x8($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X8);
    // 0x8001F424: lui         $t5, 0xE600
    ctx->r13 = S32(0XE600 << 16);
    // 0x8001F428: sll         $t7, $v1, 15
    ctx->r15 = S32(ctx->r3 << 15);
    // 0x8001F42C: srl         $t9, $t7, 29
    ctx->r25 = S32(U32(ctx->r15) >> 29);
    // 0x8001F430: andi        $t8, $t9, 0x3
    ctx->r24 = ctx->r25 & 0X3;
    // 0x8001F434: sll         $t6, $t8, 18
    ctx->r14 = S32(ctx->r24 << 18);
    // 0x8001F438: sll         $t9, $v1, 22
    ctx->r25 = S32(ctx->r3 << 22);
    // 0x8001F43C: srl         $t8, $t9, 28
    ctx->r24 = S32(U32(ctx->r25) >> 28);
    // 0x8001F440: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x8001F444: andi        $t6, $t8, 0xF
    ctx->r14 = ctx->r24 & 0XF;
    // 0x8001F448: sll         $t9, $t6, 14
    ctx->r25 = S32(ctx->r14 << 14);
    // 0x8001F44C: or          $t8, $t7, $t9
    ctx->r24 = ctx->r15 | ctx->r25;
    // 0x8001F450: sll         $t6, $v1, 12
    ctx->r14 = S32(ctx->r3 << 12);
    // 0x8001F454: srl         $t7, $t6, 29
    ctx->r15 = S32(U32(ctx->r14) >> 29);
    // 0x8001F458: andi        $t9, $t7, 0x3
    ctx->r25 = ctx->r15 & 0X3;
    // 0x8001F45C: sll         $t6, $t9, 8
    ctx->r14 = S32(ctx->r25 << 8);
    // 0x8001F460: or          $t7, $t8, $t6
    ctx->r15 = ctx->r24 | ctx->r14;
    // 0x8001F464: sll         $t9, $v1, 18
    ctx->r25 = S32(ctx->r3 << 18);
    // 0x8001F468: srl         $t8, $t9, 28
    ctx->r24 = S32(U32(ctx->r25) >> 28);
    // 0x8001F46C: andi        $t6, $t8, 0xF
    ctx->r14 = ctx->r24 & 0XF;
    // 0x8001F470: sll         $t9, $t6, 4
    ctx->r25 = S32(ctx->r14 << 4);
    // 0x8001F474: or          $t8, $t7, $t9
    ctx->r24 = ctx->r15 | ctx->r25;
    // 0x8001F478: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x8001F47C: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x8001F480: lw          $t4, 0x14($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X14);
    // 0x8001F484: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x8001F488: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x8001F48C: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x8001F490: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
    // 0x8001F494: lw          $a3, 0x0($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X0);
    // 0x8001F498: lui         $t9, 0xF300
    ctx->r25 = S32(0XF300 << 16);
    // 0x8001F49C: addiu       $t7, $a3, 0x8
    ctx->r15 = ADD32(ctx->r7, 0X8);
    // 0x8001F4A0: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x8001F4A4: sw          $t9, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r25;
    // 0x8001F4A8: lhu         $t8, 0x2($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X2);
    // 0x8001F4AC: lhu         $a2, 0x0($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X0);
    // 0x8001F4B0: addiu       $t0, $zero, 0x7FF
    ctx->r8 = ADD32(0, 0X7FF);
    // 0x8001F4B4: multu       $a2, $t8
    result = U64(U32(ctx->r6)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001F4B8: mflo        $a1
    ctx->r5 = lo;
    // 0x8001F4BC: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8001F4C0: sra         $t6, $a1, 1
    ctx->r14 = S32(SIGNED(ctx->r5) >> 1);
    // 0x8001F4C4: addiu       $a1, $t6, -0x1
    ctx->r5 = ADD32(ctx->r14, -0X1);
    // 0x8001F4C8: slti        $at, $a1, 0x7FF
    ctx->r1 = SIGNED(ctx->r5) < 0X7FF ? 1 : 0;
    // 0x8001F4CC: beq         $at, $zero, L_8001F4DC
    if (ctx->r1 == 0) {
        // 0x8001F4D0: nop
    
            goto L_8001F4DC;
    }
    // 0x8001F4D0: nop

    // 0x8001F4D4: b           L_8001F4DC
    // 0x8001F4D8: or          $t0, $a1, $zero
    ctx->r8 = ctx->r5 | 0;
        goto L_8001F4DC;
    // 0x8001F4D8: or          $t0, $a1, $zero
    ctx->r8 = ctx->r5 | 0;
L_8001F4DC:
    // 0x8001F4DC: bgez        $a2, L_8001F4EC
    if (SIGNED(ctx->r6) >= 0) {
        // 0x8001F4E0: sra         $v0, $a2, 3
        ctx->r2 = S32(SIGNED(ctx->r6) >> 3);
            goto L_8001F4EC;
    }
    // 0x8001F4E0: sra         $v0, $a2, 3
    ctx->r2 = S32(SIGNED(ctx->r6) >> 3);
    // 0x8001F4E4: addiu       $at, $a2, 0x7
    ctx->r1 = ADD32(ctx->r6, 0X7);
    // 0x8001F4E8: sra         $v0, $at, 3
    ctx->r2 = S32(SIGNED(ctx->r1) >> 3);
L_8001F4EC:
    // 0x8001F4EC: bgtz        $v0, L_8001F4FC
    if (SIGNED(ctx->r2) > 0) {
        // 0x8001F4F0: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_8001F4FC;
    }
    // 0x8001F4F0: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x8001F4F4: b           L_8001F4FC
    // 0x8001F4F8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
        goto L_8001F4FC;
    // 0x8001F4F8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_8001F4FC:
    // 0x8001F4FC: bgtz        $v0, L_8001F50C
    if (SIGNED(ctx->r2) > 0) {
        // 0x8001F500: addiu       $t7, $a2, 0x7FF
        ctx->r15 = ADD32(ctx->r6, 0X7FF);
            goto L_8001F50C;
    }
    // 0x8001F500: addiu       $t7, $a2, 0x7FF
    ctx->r15 = ADD32(ctx->r6, 0X7FF);
    // 0x8001F504: b           L_8001F510
    // 0x8001F508: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_8001F510;
    // 0x8001F508: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_8001F50C:
    // 0x8001F50C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
L_8001F510:
    // 0x8001F510: div         $zero, $t7, $a1
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r5)));
    // 0x8001F514: lui         $t3, 0x801B
    ctx->r11 = S32(0X801B << 16);
    // 0x8001F518: addiu       $t3, $t3, -0x4018
    ctx->r11 = ADD32(ctx->r11, -0X4018);
    // 0x8001F51C: bne         $a1, $zero, L_8001F528
    if (ctx->r5 != 0) {
        // 0x8001F520: nop
    
            goto L_8001F528;
    }
    // 0x8001F520: nop

    // 0x8001F524: break       7
    do_break(2147611940);
L_8001F528:
    // 0x8001F528: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8001F52C: bne         $a1, $at, L_8001F540
    if (ctx->r5 != ctx->r1) {
        // 0x8001F530: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8001F540;
    }
    // 0x8001F530: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8001F534: bne         $t7, $at, L_8001F540
    if (ctx->r15 != ctx->r1) {
        // 0x8001F538: nop
    
            goto L_8001F540;
    }
    // 0x8001F538: nop

    // 0x8001F53C: break       6
    do_break(2147611964);
L_8001F540:
    // 0x8001F540: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x8001F544: andi        $t7, $t0, 0xFFF
    ctx->r15 = ctx->r8 & 0XFFF;
    // 0x8001F548: mflo        $t9
    ctx->r25 = lo;
    // 0x8001F54C: andi        $t8, $t9, 0xFFF
    ctx->r24 = ctx->r25 & 0XFFF;
    // 0x8001F550: or          $t6, $t8, $at
    ctx->r14 = ctx->r24 | ctx->r1;
    // 0x8001F554: sll         $t9, $t7, 12
    ctx->r25 = S32(ctx->r15 << 12);
    // 0x8001F558: or          $t8, $t6, $t9
    ctx->r24 = ctx->r14 | ctx->r25;
    // 0x8001F55C: sw          $t8, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r24;
    // 0x8001F560: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8001F564: lui         $t6, 0xE700
    ctx->r14 = S32(0XE700 << 16);
    // 0x8001F568: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x8001F56C: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x8001F570: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8001F574: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8001F578: or          $t1, $v0, $zero
    ctx->r9 = ctx->r2 | 0;
    // 0x8001F57C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8001F580: lui         $at, 0x8
    ctx->r1 = S32(0X8 << 16);
    // 0x8001F584: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8001F588: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x8001F58C: lhu         $t7, 0x0($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X0);
    // 0x8001F590: or          $t8, $t4, $at
    ctx->r24 = ctx->r12 | ctx->r1;
    // 0x8001F594: addiu       $t6, $t7, 0x7
    ctx->r14 = ADD32(ctx->r15, 0X7);
    // 0x8001F598: sra         $t9, $t6, 3
    ctx->r25 = S32(SIGNED(ctx->r14) >> 3);
    // 0x8001F59C: andi        $t7, $t9, 0x1FF
    ctx->r15 = ctx->r25 & 0X1FF;
    // 0x8001F5A0: sll         $t6, $t7, 9
    ctx->r14 = S32(ctx->r15 << 9);
    // 0x8001F5A4: or          $t9, $t8, $t6
    ctx->r25 = ctx->r24 | ctx->r14;
    // 0x8001F5A8: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8001F5AC: lw          $t7, 0xD0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XD0);
    // 0x8001F5B0: or          $t2, $v0, $zero
    ctx->r10 = ctx->r2 | 0;
    // 0x8001F5B4: lw          $v1, 0x8($t7)
    ctx->r3 = MEM_W(ctx->r15, 0X8);
    // 0x8001F5B8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8001F5BC: sll         $t8, $v1, 15
    ctx->r24 = S32(ctx->r3 << 15);
    // 0x8001F5C0: srl         $t6, $t8, 29
    ctx->r14 = S32(U32(ctx->r24) >> 29);
    // 0x8001F5C4: andi        $t9, $t6, 0x3
    ctx->r25 = ctx->r14 & 0X3;
    // 0x8001F5C8: sll         $t8, $v1, 22
    ctx->r24 = S32(ctx->r3 << 22);
    // 0x8001F5CC: srl         $t6, $t8, 28
    ctx->r14 = S32(U32(ctx->r24) >> 28);
    // 0x8001F5D0: sll         $t7, $t9, 18
    ctx->r15 = S32(ctx->r25 << 18);
    // 0x8001F5D4: andi        $t9, $t6, 0xF
    ctx->r25 = ctx->r14 & 0XF;
    // 0x8001F5D8: sll         $t8, $t9, 14
    ctx->r24 = S32(ctx->r25 << 14);
    // 0x8001F5DC: or          $t6, $t7, $t8
    ctx->r14 = ctx->r15 | ctx->r24;
    // 0x8001F5E0: sll         $t9, $v1, 12
    ctx->r25 = S32(ctx->r3 << 12);
    // 0x8001F5E4: srl         $t7, $t9, 29
    ctx->r15 = S32(U32(ctx->r25) >> 29);
    // 0x8001F5E8: andi        $t8, $t7, 0x3
    ctx->r24 = ctx->r15 & 0X3;
    // 0x8001F5EC: sll         $t9, $t8, 8
    ctx->r25 = S32(ctx->r24 << 8);
    // 0x8001F5F0: or          $t7, $t6, $t9
    ctx->r15 = ctx->r14 | ctx->r25;
    // 0x8001F5F4: sll         $t8, $v1, 18
    ctx->r24 = S32(ctx->r3 << 18);
    // 0x8001F5F8: srl         $t6, $t8, 28
    ctx->r14 = S32(U32(ctx->r24) >> 28);
    // 0x8001F5FC: andi        $t9, $t6, 0xF
    ctx->r25 = ctx->r14 & 0XF;
    // 0x8001F600: sll         $t8, $t9, 4
    ctx->r24 = S32(ctx->r25 << 4);
    // 0x8001F604: or          $t6, $t7, $t8
    ctx->r14 = ctx->r15 | ctx->r24;
    // 0x8001F608: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x8001F60C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8001F610: lui         $t7, 0xF200
    ctx->r15 = S32(0XF200 << 16);
    // 0x8001F614: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8001F618: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x8001F61C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8001F620: lhu         $t8, 0x0($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X0);
    // 0x8001F624: or          $t5, $v0, $zero
    ctx->r13 = ctx->r2 | 0;
    // 0x8001F628: addiu       $t6, $t8, -0x1
    ctx->r14 = ADD32(ctx->r24, -0X1);
    // 0x8001F62C: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x8001F630: lhu         $t6, 0x2($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X2);
    // 0x8001F634: andi        $t7, $t9, 0xFFF
    ctx->r15 = ctx->r25 & 0XFFF;
    // 0x8001F638: sll         $t8, $t7, 12
    ctx->r24 = S32(ctx->r15 << 12);
    // 0x8001F63C: addiu       $t9, $t6, -0x1
    ctx->r25 = ADD32(ctx->r14, -0X1);
    // 0x8001F640: sll         $t7, $t9, 2
    ctx->r15 = S32(ctx->r25 << 2);
    // 0x8001F644: andi        $t6, $t7, 0xFFF
    ctx->r14 = ctx->r15 & 0XFFF;
    // 0x8001F648: or          $t9, $t8, $t6
    ctx->r25 = ctx->r24 | ctx->r14;
    // 0x8001F64C: ori         $t7, $zero, 0xFFFF
    ctx->r15 = 0 | 0XFFFF;
    // 0x8001F650: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x8001F654: sh          $t7, 0x0($t3)
    MEM_H(0X0, ctx->r11) = ctx->r15;
    // 0x8001F658: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x8001F65C: b           L_8001F8F0
    // 0x8001F660: sh          $t8, -0x401C($at)
    MEM_H(-0X401C, ctx->r1) = ctx->r24;
        goto L_8001F8F0;
    // 0x8001F660: sh          $t8, -0x401C($at)
    MEM_H(-0X401C, ctx->r1) = ctx->r24;
    // 0x8001F664: lw          $a1, 0xCC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XCC);
L_8001F668:
    // 0x8001F668: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x8001F66C: andi        $t9, $a1, 0x7
    ctx->r25 = ctx->r5 & 0X7;
    // 0x8001F670: sll         $t7, $t9, 21
    ctx->r15 = S32(ctx->r25 << 21);
    // 0x8001F674: lui         $at, 0xFD00
    ctx->r1 = S32(0XFD00 << 16);
    // 0x8001F678: addiu       $t6, $t3, 0x8
    ctx->r14 = ADD32(ctx->r11, 0X8);
    // 0x8001F67C: lui         $t0, 0x10
    ctx->r8 = S32(0X10 << 16);
    // 0x8001F680: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x8001F684: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x8001F688: or          $t6, $t8, $t0
    ctx->r14 = ctx->r24 | ctx->r8;
    // 0x8001F68C: sw          $t6, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r14;
    // 0x8001F690: lw          $t9, 0x8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X8);
    // 0x8001F694: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x8001F698: sw          $t9, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r25;
    // 0x8001F69C: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x8001F6A0: lui         $at, 0xF500
    ctx->r1 = S32(0XF500 << 16);
    // 0x8001F6A4: or          $t8, $a1, $at
    ctx->r24 = ctx->r5 | ctx->r1;
    // 0x8001F6A8: addiu       $t7, $t4, 0x8
    ctx->r15 = ADD32(ctx->r12, 0X8);
    // 0x8001F6AC: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x8001F6B0: or          $a3, $t8, $t0
    ctx->r7 = ctx->r24 | ctx->r8;
    // 0x8001F6B4: sw          $a3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r7;
    // 0x8001F6B8: lw          $t6, 0xD0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XD0);
    // 0x8001F6BC: lui         $t2, 0x700
    ctx->r10 = S32(0X700 << 16);
    // 0x8001F6C0: lw          $v1, 0x8($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X8);
    // 0x8001F6C4: lui         $t5, 0xE600
    ctx->r13 = S32(0XE600 << 16);
    // 0x8001F6C8: sll         $t9, $v1, 15
    ctx->r25 = S32(ctx->r3 << 15);
    // 0x8001F6CC: srl         $t7, $t9, 29
    ctx->r15 = S32(U32(ctx->r25) >> 29);
    // 0x8001F6D0: andi        $t8, $t7, 0x3
    ctx->r24 = ctx->r15 & 0X3;
    // 0x8001F6D4: sll         $t6, $t8, 18
    ctx->r14 = S32(ctx->r24 << 18);
    // 0x8001F6D8: sll         $t7, $v1, 22
    ctx->r15 = S32(ctx->r3 << 22);
    // 0x8001F6DC: srl         $t8, $t7, 28
    ctx->r24 = S32(U32(ctx->r15) >> 28);
    // 0x8001F6E0: or          $t9, $t6, $t2
    ctx->r25 = ctx->r14 | ctx->r10;
    // 0x8001F6E4: andi        $t6, $t8, 0xF
    ctx->r14 = ctx->r24 & 0XF;
    // 0x8001F6E8: sll         $t7, $t6, 14
    ctx->r15 = S32(ctx->r14 << 14);
    // 0x8001F6EC: or          $t8, $t9, $t7
    ctx->r24 = ctx->r25 | ctx->r15;
    // 0x8001F6F0: sll         $t6, $v1, 12
    ctx->r14 = S32(ctx->r3 << 12);
    // 0x8001F6F4: srl         $t9, $t6, 29
    ctx->r25 = S32(U32(ctx->r14) >> 29);
    // 0x8001F6F8: andi        $t7, $t9, 0x3
    ctx->r15 = ctx->r25 & 0X3;
    // 0x8001F6FC: sll         $t6, $t7, 8
    ctx->r14 = S32(ctx->r15 << 8);
    // 0x8001F700: or          $t9, $t8, $t6
    ctx->r25 = ctx->r24 | ctx->r14;
    // 0x8001F704: sll         $t7, $v1, 18
    ctx->r15 = S32(ctx->r3 << 18);
    // 0x8001F708: srl         $t8, $t7, 28
    ctx->r24 = S32(U32(ctx->r15) >> 28);
    // 0x8001F70C: andi        $t6, $t8, 0xF
    ctx->r14 = ctx->r24 & 0XF;
    // 0x8001F710: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x8001F714: or          $t8, $t9, $t7
    ctx->r24 = ctx->r25 | ctx->r15;
    // 0x8001F718: sw          $t8, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r24;
    // 0x8001F71C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8001F720: lui         $t8, 0xF300
    ctx->r24 = S32(0XF300 << 16);
    // 0x8001F724: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8001F728: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x8001F72C: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x8001F730: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8001F734: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x8001F738: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x8001F73C: nop

    // 0x8001F740: addiu       $t7, $t1, 0x8
    ctx->r15 = ADD32(ctx->r9, 0X8);
    // 0x8001F744: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x8001F748: sw          $t8, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r24;
    // 0x8001F74C: lhu         $t6, 0x2($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X2);
    // 0x8001F750: lhu         $a2, 0x0($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X0);
    // 0x8001F754: nop

    // 0x8001F758: multu       $a2, $t6
    result = U64(U32(ctx->r6)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001F75C: sll         $v0, $a2, 1
    ctx->r2 = S32(ctx->r6 << 1);
    // 0x8001F760: mflo        $t9
    ctx->r25 = lo;
    // 0x8001F764: addiu       $t7, $t9, -0x1
    ctx->r15 = ADD32(ctx->r25, -0X1);
    // 0x8001F768: slti        $at, $t7, 0x7FF
    ctx->r1 = SIGNED(ctx->r15) < 0X7FF ? 1 : 0;
    // 0x8001F76C: beq         $at, $zero, L_8001F77C
    if (ctx->r1 == 0) {
        // 0x8001F770: sw          $t7, 0xC($sp)
        MEM_W(0XC, ctx->r29) = ctx->r15;
            goto L_8001F77C;
    }
    // 0x8001F770: sw          $t7, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r15;
    // 0x8001F774: b           L_8001F780
    // 0x8001F778: or          $t0, $t7, $zero
    ctx->r8 = ctx->r15 | 0;
        goto L_8001F780;
    // 0x8001F778: or          $t0, $t7, $zero
    ctx->r8 = ctx->r15 | 0;
L_8001F77C:
    // 0x8001F77C: addiu       $t0, $zero, 0x7FF
    ctx->r8 = ADD32(0, 0X7FF);
L_8001F780:
    // 0x8001F780: bgez        $v0, L_8001F790
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8001F784: sra         $t8, $v0, 3
        ctx->r24 = S32(SIGNED(ctx->r2) >> 3);
            goto L_8001F790;
    }
    // 0x8001F784: sra         $t8, $v0, 3
    ctx->r24 = S32(SIGNED(ctx->r2) >> 3);
    // 0x8001F788: addiu       $at, $v0, 0x7
    ctx->r1 = ADD32(ctx->r2, 0X7);
    // 0x8001F78C: sra         $t8, $at, 3
    ctx->r24 = S32(SIGNED(ctx->r1) >> 3);
L_8001F790:
    // 0x8001F790: bgtz        $t8, L_8001F7A0
    if (SIGNED(ctx->r24) > 0) {
        // 0x8001F794: or          $v0, $t8, $zero
        ctx->r2 = ctx->r24 | 0;
            goto L_8001F7A0;
    }
    // 0x8001F794: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x8001F798: b           L_8001F7A4
    // 0x8001F79C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
        goto L_8001F7A4;
    // 0x8001F79C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_8001F7A0:
    // 0x8001F7A0: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
L_8001F7A4:
    // 0x8001F7A4: bgtz        $v0, L_8001F7B4
    if (SIGNED(ctx->r2) > 0) {
        // 0x8001F7A8: addiu       $t6, $a2, 0x7FF
        ctx->r14 = ADD32(ctx->r6, 0X7FF);
            goto L_8001F7B4;
    }
    // 0x8001F7A8: addiu       $t6, $a2, 0x7FF
    ctx->r14 = ADD32(ctx->r6, 0X7FF);
    // 0x8001F7AC: b           L_8001F7B8
    // 0x8001F7B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_8001F7B8;
    // 0x8001F7B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_8001F7B4:
    // 0x8001F7B4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
L_8001F7B8:
    // 0x8001F7B8: div         $zero, $t6, $a1
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r5)));
    // 0x8001F7BC: bne         $a1, $zero, L_8001F7C8
    if (ctx->r5 != 0) {
        // 0x8001F7C0: nop
    
            goto L_8001F7C8;
    }
    // 0x8001F7C0: nop

    // 0x8001F7C4: break       7
    do_break(2147612612);
L_8001F7C8:
    // 0x8001F7C8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8001F7CC: bne         $a1, $at, L_8001F7E0
    if (ctx->r5 != ctx->r1) {
        // 0x8001F7D0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8001F7E0;
    }
    // 0x8001F7D0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8001F7D4: bne         $t6, $at, L_8001F7E0
    if (ctx->r14 != ctx->r1) {
        // 0x8001F7D8: nop
    
            goto L_8001F7E0;
    }
    // 0x8001F7D8: nop

    // 0x8001F7DC: break       6
    do_break(2147612636);
L_8001F7E0:
    // 0x8001F7E0: andi        $t6, $t0, 0xFFF
    ctx->r14 = ctx->r8 & 0XFFF;
    // 0x8001F7E4: mflo        $t9
    ctx->r25 = lo;
    // 0x8001F7E8: andi        $t7, $t9, 0xFFF
    ctx->r15 = ctx->r25 & 0XFFF;
    // 0x8001F7EC: or          $t8, $t7, $t2
    ctx->r24 = ctx->r15 | ctx->r10;
    // 0x8001F7F0: sll         $t9, $t6, 12
    ctx->r25 = S32(ctx->r14 << 12);
    // 0x8001F7F4: or          $t7, $t8, $t9
    ctx->r15 = ctx->r24 | ctx->r25;
    // 0x8001F7F8: sw          $t7, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r15;
    // 0x8001F7FC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8001F800: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x8001F804: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8001F808: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x8001F80C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8001F810: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8001F814: or          $t3, $v0, $zero
    ctx->r11 = ctx->r2 | 0;
    // 0x8001F818: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8001F81C: nop

    // 0x8001F820: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8001F824: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x8001F828: lhu         $t7, 0x0($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X0);
    // 0x8001F82C: or          $t4, $v0, $zero
    ctx->r12 = ctx->r2 | 0;
    // 0x8001F830: sll         $t6, $t7, 1
    ctx->r14 = S32(ctx->r15 << 1);
    // 0x8001F834: addiu       $t8, $t6, 0x7
    ctx->r24 = ADD32(ctx->r14, 0X7);
    // 0x8001F838: sra         $t9, $t8, 3
    ctx->r25 = S32(SIGNED(ctx->r24) >> 3);
    // 0x8001F83C: andi        $t7, $t9, 0x1FF
    ctx->r15 = ctx->r25 & 0X1FF;
    // 0x8001F840: sll         $t6, $t7, 9
    ctx->r14 = S32(ctx->r15 << 9);
    // 0x8001F844: or          $t8, $a3, $t6
    ctx->r24 = ctx->r7 | ctx->r14;
    // 0x8001F848: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8001F84C: lw          $t9, 0xD0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XD0);
    // 0x8001F850: nop

    // 0x8001F854: lw          $v1, 0x8($t9)
    ctx->r3 = MEM_W(ctx->r25, 0X8);
    // 0x8001F858: nop

    // 0x8001F85C: sll         $t7, $v1, 15
    ctx->r15 = S32(ctx->r3 << 15);
    // 0x8001F860: srl         $t6, $t7, 29
    ctx->r14 = S32(U32(ctx->r15) >> 29);
    // 0x8001F864: andi        $t8, $t6, 0x3
    ctx->r24 = ctx->r14 & 0X3;
    // 0x8001F868: sll         $t7, $v1, 22
    ctx->r15 = S32(ctx->r3 << 22);
    // 0x8001F86C: srl         $t6, $t7, 28
    ctx->r14 = S32(U32(ctx->r15) >> 28);
    // 0x8001F870: sll         $t9, $t8, 18
    ctx->r25 = S32(ctx->r24 << 18);
    // 0x8001F874: andi        $t8, $t6, 0xF
    ctx->r24 = ctx->r14 & 0XF;
    // 0x8001F878: sll         $t7, $t8, 14
    ctx->r15 = S32(ctx->r24 << 14);
    // 0x8001F87C: or          $t6, $t9, $t7
    ctx->r14 = ctx->r25 | ctx->r15;
    // 0x8001F880: sll         $t8, $v1, 12
    ctx->r24 = S32(ctx->r3 << 12);
    // 0x8001F884: srl         $t9, $t8, 29
    ctx->r25 = S32(U32(ctx->r24) >> 29);
    // 0x8001F888: andi        $t7, $t9, 0x3
    ctx->r15 = ctx->r25 & 0X3;
    // 0x8001F88C: sll         $t8, $t7, 8
    ctx->r24 = S32(ctx->r15 << 8);
    // 0x8001F890: or          $t9, $t6, $t8
    ctx->r25 = ctx->r14 | ctx->r24;
    // 0x8001F894: sll         $t7, $v1, 18
    ctx->r15 = S32(ctx->r3 << 18);
    // 0x8001F898: srl         $t6, $t7, 28
    ctx->r14 = S32(U32(ctx->r15) >> 28);
    // 0x8001F89C: andi        $t8, $t6, 0xF
    ctx->r24 = ctx->r14 & 0XF;
    // 0x8001F8A0: sll         $t7, $t8, 4
    ctx->r15 = S32(ctx->r24 << 4);
    // 0x8001F8A4: or          $t6, $t9, $t7
    ctx->r14 = ctx->r25 | ctx->r15;
    // 0x8001F8A8: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x8001F8AC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8001F8B0: lui         $t9, 0xF200
    ctx->r25 = S32(0XF200 << 16);
    // 0x8001F8B4: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8001F8B8: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x8001F8BC: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8001F8C0: lhu         $t7, 0x0($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X0);
    // 0x8001F8C4: or          $t5, $v0, $zero
    ctx->r13 = ctx->r2 | 0;
    // 0x8001F8C8: addiu       $t6, $t7, -0x1
    ctx->r14 = ADD32(ctx->r15, -0X1);
    // 0x8001F8CC: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x8001F8D0: lhu         $t6, 0x2($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X2);
    // 0x8001F8D4: andi        $t9, $t8, 0xFFF
    ctx->r25 = ctx->r24 & 0XFFF;
    // 0x8001F8D8: sll         $t7, $t9, 12
    ctx->r15 = S32(ctx->r25 << 12);
    // 0x8001F8DC: addiu       $t8, $t6, -0x1
    ctx->r24 = ADD32(ctx->r14, -0X1);
    // 0x8001F8E0: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8001F8E4: andi        $t6, $t9, 0xFFF
    ctx->r14 = ctx->r25 & 0XFFF;
    // 0x8001F8E8: or          $t8, $t7, $t6
    ctx->r24 = ctx->r15 | ctx->r14;
    // 0x8001F8EC: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
L_8001F8F0:
    // 0x8001F8F0: lw          $s0, 0x4($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4);
    // 0x8001F8F4: jr          $ra
    // 0x8001F8F8: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    return;
    // 0x8001F8F8: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
;}
RECOMP_FUNC void func_8001F8FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001F8FC: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x8001F900: sw          $a0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r4;
    // 0x8001F904: lbu         $v0, 0x4($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X4);
    // 0x8001F908: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x8001F90C: andi        $t6, $v0, 0x7
    ctx->r14 = ctx->r2 & 0X7;
    // 0x8001F910: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8001F914: addu        $t1, $t1, $t7
    ctx->r9 = ADD32(ctx->r9, ctx->r15);
    // 0x8001F918: lw          $t1, 0x3944($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X3944);
    // 0x8001F91C: andi        $a2, $v0, 0x18
    ctx->r6 = ctx->r2 & 0X18;
    // 0x8001F920: beq         $a2, $zero, L_8001F944
    if (ctx->r6 == 0) {
        // 0x8001F924: or          $a3, $a1, $zero
        ctx->r7 = ctx->r5 | 0;
            goto L_8001F944;
    }
    // 0x8001F924: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x8001F928: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x8001F92C: beq         $a2, $at, L_8001FC1C
    if (ctx->r6 == ctx->r1) {
        // 0x8001F930: addiu       $at, $zero, 0x10
        ctx->r1 = ADD32(0, 0X10);
            goto L_8001FC1C;
    }
    // 0x8001F930: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x8001F934: beq         $a2, $at, L_8001FEE4
    if (ctx->r6 == ctx->r1) {
        // 0x8001F938: lui         $a1, 0x8011
        ctx->r5 = S32(0X8011 << 16);
            goto L_8001FEE4;
    }
    // 0x8001F938: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8001F93C: b           L_8001FC1C
    // 0x8001F940: nop

        goto L_8001FC1C;
    // 0x8001F940: nop

L_8001F944:
    // 0x8001F944: lw          $t8, 0x78($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X78);
    // 0x8001F948: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8001F94C: lbu         $v0, 0xC($t8)
    ctx->r2 = MEM_BU(ctx->r24, 0XC);
    // 0x8001F950: addiu       $a1, $a1, -0x2F94
    ctx->r5 = ADD32(ctx->r5, -0X2F94);
    // 0x8001F954: slti        $at, $v0, 0x10
    ctx->r1 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x8001F958: bne         $at, $zero, L_8001F96C
    if (ctx->r1 != 0) {
        // 0x8001F95C: lui         $t0, 0x10
        ctx->r8 = S32(0X10 << 16);
            goto L_8001F96C;
    }
    // 0x8001F95C: lui         $t0, 0x10
    ctx->r8 = S32(0X10 << 16);
    // 0x8001F960: lbu         $t3, 0x5($a3)
    ctx->r11 = MEM_BU(ctx->r7, 0X5);
    // 0x8001F964: b           L_8001F974
    // 0x8001F968: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
        goto L_8001F974;
    // 0x8001F968: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
L_8001F96C:
    // 0x8001F96C: or          $t3, $v0, $zero
    ctx->r11 = ctx->r2 | 0;
    // 0x8001F970: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
L_8001F974:
    // 0x8001F974: andi        $a0, $t1, 0x7
    ctx->r4 = ctx->r9 & 0X7;
    // 0x8001F978: sll         $t6, $a0, 21
    ctx->r14 = S32(ctx->r4 << 21);
    // 0x8001F97C: lui         $at, 0xFD00
    ctx->r1 = S32(0XFD00 << 16);
    // 0x8001F980: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x8001F984: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8001F988: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x8001F98C: or          $t8, $t7, $t0
    ctx->r24 = ctx->r15 | ctx->r8;
    // 0x8001F990: sw          $v0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r2;
    // 0x8001F994: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x8001F998: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8001F99C: lw          $t6, 0x8($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X8);
    // 0x8001F9A0: lui         $at, 0xF500
    ctx->r1 = S32(0XF500 << 16);
    // 0x8001F9A4: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x8001F9A8: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x8001F9AC: or          $t2, $a0, $at
    ctx->r10 = ctx->r4 | ctx->r1;
    // 0x8001F9B0: or          $t8, $t2, $t0
    ctx->r24 = ctx->r10 | ctx->r8;
    // 0x8001F9B4: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x8001F9B8: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x8001F9BC: ori         $t6, $t8, 0x80
    ctx->r14 = ctx->r24 | 0X80;
    // 0x8001F9C0: sw          $v0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r2;
    // 0x8001F9C4: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8001F9C8: lw          $t7, 0x78($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X78);
    // 0x8001F9CC: lui         $t5, 0x700
    ctx->r13 = S32(0X700 << 16);
    // 0x8001F9D0: lw          $v1, 0x8($t7)
    ctx->r3 = MEM_W(ctx->r15, 0X8);
    // 0x8001F9D4: addiu       $t1, $zero, 0x7FF
    ctx->r9 = ADD32(0, 0X7FF);
    // 0x8001F9D8: sll         $t8, $v1, 15
    ctx->r24 = S32(ctx->r3 << 15);
    // 0x8001F9DC: srl         $t6, $t8, 29
    ctx->r14 = S32(U32(ctx->r24) >> 29);
    // 0x8001F9E0: andi        $t7, $t6, 0x3
    ctx->r15 = ctx->r14 & 0X3;
    // 0x8001F9E4: sll         $t8, $t7, 18
    ctx->r24 = S32(ctx->r15 << 18);
    // 0x8001F9E8: or          $t6, $t8, $t5
    ctx->r14 = ctx->r24 | ctx->r13;
    // 0x8001F9EC: sll         $t7, $v1, 22
    ctx->r15 = S32(ctx->r3 << 22);
    // 0x8001F9F0: srl         $t8, $t7, 28
    ctx->r24 = S32(U32(ctx->r15) >> 28);
    // 0x8001F9F4: andi        $t7, $t8, 0xF
    ctx->r15 = ctx->r24 & 0XF;
    // 0x8001F9F8: sll         $t8, $t7, 14
    ctx->r24 = S32(ctx->r15 << 14);
    // 0x8001F9FC: or          $t7, $t6, $t8
    ctx->r15 = ctx->r14 | ctx->r24;
    // 0x8001FA00: sll         $t6, $v1, 12
    ctx->r14 = S32(ctx->r3 << 12);
    // 0x8001FA04: srl         $t8, $t6, 29
    ctx->r24 = S32(U32(ctx->r14) >> 29);
    // 0x8001FA08: andi        $t6, $t8, 0x3
    ctx->r14 = ctx->r24 & 0X3;
    // 0x8001FA0C: sll         $t8, $t6, 8
    ctx->r24 = S32(ctx->r14 << 8);
    // 0x8001FA10: or          $t6, $t7, $t8
    ctx->r14 = ctx->r15 | ctx->r24;
    // 0x8001FA14: sll         $t7, $v1, 18
    ctx->r15 = S32(ctx->r3 << 18);
    // 0x8001FA18: srl         $t8, $t7, 28
    ctx->r24 = S32(U32(ctx->r15) >> 28);
    // 0x8001FA1C: andi        $t7, $t8, 0xF
    ctx->r15 = ctx->r24 & 0XF;
    // 0x8001FA20: sll         $t8, $t7, 4
    ctx->r24 = S32(ctx->r15 << 4);
    // 0x8001FA24: or          $t7, $t6, $t8
    ctx->r15 = ctx->r14 | ctx->r24;
    // 0x8001FA28: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x8001FA2C: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x8001FA30: lui         $t8, 0xE600
    ctx->r24 = S32(0XE600 << 16);
    // 0x8001FA34: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8001FA38: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x8001FA3C: sw          $v0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r2;
    // 0x8001FA40: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8001FA44: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8001FA48: lw          $t4, 0x0($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X0);
    // 0x8001FA4C: lui         $t6, 0xF300
    ctx->r14 = S32(0XF300 << 16);
    // 0x8001FA50: addiu       $t9, $t4, 0x8
    ctx->r25 = ADD32(ctx->r12, 0X8);
    // 0x8001FA54: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x8001FA58: sw          $t6, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r14;
    // 0x8001FA5C: lhu         $t8, 0x2($a3)
    ctx->r24 = MEM_HU(ctx->r7, 0X2);
    // 0x8001FA60: lhu         $a2, 0x0($a3)
    ctx->r6 = MEM_HU(ctx->r7, 0X0);
    // 0x8001FA64: nop

    // 0x8001FA68: multu       $a2, $t8
    result = U64(U32(ctx->r6)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001FA6C: mflo        $t7
    ctx->r15 = lo;
    // 0x8001FA70: addiu       $t9, $t7, 0x3
    ctx->r25 = ADD32(ctx->r15, 0X3);
    // 0x8001FA74: sra         $t6, $t9, 2
    ctx->r14 = S32(SIGNED(ctx->r25) >> 2);
    // 0x8001FA78: addiu       $t8, $t6, -0x1
    ctx->r24 = ADD32(ctx->r14, -0X1);
    // 0x8001FA7C: slti        $at, $t8, 0x7FF
    ctx->r1 = SIGNED(ctx->r24) < 0X7FF ? 1 : 0;
    // 0x8001FA80: beq         $at, $zero, L_8001FA90
    if (ctx->r1 == 0) {
        // 0x8001FA84: sw          $t8, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r24;
            goto L_8001FA90;
    }
    // 0x8001FA84: sw          $t8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r24;
    // 0x8001FA88: b           L_8001FA90
    // 0x8001FA8C: or          $t1, $t8, $zero
    ctx->r9 = ctx->r24 | 0;
        goto L_8001FA90;
    // 0x8001FA8C: or          $t1, $t8, $zero
    ctx->r9 = ctx->r24 | 0;
L_8001FA90:
    // 0x8001FA90: bgez        $a2, L_8001FAA0
    if (SIGNED(ctx->r6) >= 0) {
        // 0x8001FA94: sra         $v0, $a2, 4
        ctx->r2 = S32(SIGNED(ctx->r6) >> 4);
            goto L_8001FAA0;
    }
    // 0x8001FA94: sra         $v0, $a2, 4
    ctx->r2 = S32(SIGNED(ctx->r6) >> 4);
    // 0x8001FA98: addiu       $at, $a2, 0xF
    ctx->r1 = ADD32(ctx->r6, 0XF);
    // 0x8001FA9C: sra         $v0, $at, 4
    ctx->r2 = S32(SIGNED(ctx->r1) >> 4);
L_8001FAA0:
    // 0x8001FAA0: bgtz        $v0, L_8001FAB0
    if (SIGNED(ctx->r2) > 0) {
        // 0x8001FAA4: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_8001FAB0;
    }
    // 0x8001FAA4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8001FAA8: b           L_8001FAB0
    // 0x8001FAAC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
        goto L_8001FAB0;
    // 0x8001FAAC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_8001FAB0:
    // 0x8001FAB0: bgtz        $v0, L_8001FAC0
    if (SIGNED(ctx->r2) > 0) {
        // 0x8001FAB4: addiu       $t7, $a0, 0x7FF
        ctx->r15 = ADD32(ctx->r4, 0X7FF);
            goto L_8001FAC0;
    }
    // 0x8001FAB4: addiu       $t7, $a0, 0x7FF
    ctx->r15 = ADD32(ctx->r4, 0X7FF);
    // 0x8001FAB8: b           L_8001FAC4
    // 0x8001FABC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
        goto L_8001FAC4;
    // 0x8001FABC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_8001FAC0:
    // 0x8001FAC0: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
L_8001FAC4:
    // 0x8001FAC4: div         $zero, $t7, $a2
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r6)));
    // 0x8001FAC8: lui         $t0, 0x100
    ctx->r8 = S32(0X100 << 16);
    // 0x8001FACC: bne         $a2, $zero, L_8001FAD8
    if (ctx->r6 != 0) {
        // 0x8001FAD0: nop
    
            goto L_8001FAD8;
    }
    // 0x8001FAD0: nop

    // 0x8001FAD4: break       7
    do_break(2147613396);
L_8001FAD8:
    // 0x8001FAD8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8001FADC: bne         $a2, $at, L_8001FAF0
    if (ctx->r6 != ctx->r1) {
        // 0x8001FAE0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8001FAF0;
    }
    // 0x8001FAE0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8001FAE4: bne         $t7, $at, L_8001FAF0
    if (ctx->r15 != ctx->r1) {
        // 0x8001FAE8: nop
    
            goto L_8001FAF0;
    }
    // 0x8001FAE8: nop

    // 0x8001FAEC: break       6
    do_break(2147613420);
L_8001FAF0:
    // 0x8001FAF0: andi        $t7, $t1, 0xFFF
    ctx->r15 = ctx->r9 & 0XFFF;
    // 0x8001FAF4: mflo        $t9
    ctx->r25 = lo;
    // 0x8001FAF8: andi        $t6, $t9, 0xFFF
    ctx->r14 = ctx->r25 & 0XFFF;
    // 0x8001FAFC: or          $t8, $t6, $t5
    ctx->r24 = ctx->r14 | ctx->r13;
    // 0x8001FB00: sll         $t9, $t7, 12
    ctx->r25 = S32(ctx->r15 << 12);
    // 0x8001FB04: or          $t6, $t8, $t9
    ctx->r14 = ctx->r24 | ctx->r25;
    // 0x8001FB08: sw          $t6, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r14;
    // 0x8001FB0C: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x8001FB10: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x8001FB14: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x8001FB18: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x8001FB1C: sw          $v0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r2;
    // 0x8001FB20: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8001FB24: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8001FB28: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x8001FB2C: nop

    // 0x8001FB30: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8001FB34: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x8001FB38: sw          $v0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r2;
    // 0x8001FB3C: lhu         $t7, 0x0($a3)
    ctx->r15 = MEM_HU(ctx->r7, 0X0);
    // 0x8001FB40: nop

    // 0x8001FB44: sra         $t8, $t7, 1
    ctx->r24 = S32(SIGNED(ctx->r15) >> 1);
    // 0x8001FB48: addiu       $t9, $t8, 0x7
    ctx->r25 = ADD32(ctx->r24, 0X7);
    // 0x8001FB4C: sra         $t6, $t9, 3
    ctx->r14 = S32(SIGNED(ctx->r25) >> 3);
    // 0x8001FB50: andi        $t7, $t6, 0x1FF
    ctx->r15 = ctx->r14 & 0X1FF;
    // 0x8001FB54: sll         $t8, $t7, 9
    ctx->r24 = S32(ctx->r15 << 9);
    // 0x8001FB58: or          $t9, $t2, $t8
    ctx->r25 = ctx->r10 | ctx->r24;
    // 0x8001FB5C: ori         $t6, $t9, 0x80
    ctx->r14 = ctx->r25 | 0X80;
    // 0x8001FB60: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8001FB64: lw          $t8, 0x78($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X78);
    // 0x8001FB68: andi        $t9, $t3, 0xF
    ctx->r25 = ctx->r11 & 0XF;
    // 0x8001FB6C: lw          $v1, 0x8($t8)
    ctx->r3 = MEM_W(ctx->r24, 0X8);
    // 0x8001FB70: sll         $t6, $t9, 20
    ctx->r14 = S32(ctx->r25 << 20);
    // 0x8001FB74: or          $t8, $t6, $t0
    ctx->r24 = ctx->r14 | ctx->r8;
    // 0x8001FB78: sll         $t9, $v1, 15
    ctx->r25 = S32(ctx->r3 << 15);
    // 0x8001FB7C: srl         $t6, $t9, 29
    ctx->r14 = S32(U32(ctx->r25) >> 29);
    // 0x8001FB80: andi        $t9, $t6, 0x3
    ctx->r25 = ctx->r14 & 0X3;
    // 0x8001FB84: sll         $t6, $t9, 18
    ctx->r14 = S32(ctx->r25 << 18);
    // 0x8001FB88: or          $t9, $t8, $t6
    ctx->r25 = ctx->r24 | ctx->r14;
    // 0x8001FB8C: sll         $t8, $v1, 22
    ctx->r24 = S32(ctx->r3 << 22);
    // 0x8001FB90: srl         $t6, $t8, 28
    ctx->r14 = S32(U32(ctx->r24) >> 28);
    // 0x8001FB94: andi        $t8, $t6, 0xF
    ctx->r24 = ctx->r14 & 0XF;
    // 0x8001FB98: sll         $t6, $t8, 14
    ctx->r14 = S32(ctx->r24 << 14);
    // 0x8001FB9C: or          $t8, $t9, $t6
    ctx->r24 = ctx->r25 | ctx->r14;
    // 0x8001FBA0: sll         $t9, $v1, 12
    ctx->r25 = S32(ctx->r3 << 12);
    // 0x8001FBA4: srl         $t6, $t9, 29
    ctx->r14 = S32(U32(ctx->r25) >> 29);
    // 0x8001FBA8: andi        $t9, $t6, 0x3
    ctx->r25 = ctx->r14 & 0X3;
    // 0x8001FBAC: sll         $t6, $t9, 8
    ctx->r14 = S32(ctx->r25 << 8);
    // 0x8001FBB0: or          $t9, $t8, $t6
    ctx->r25 = ctx->r24 | ctx->r14;
    // 0x8001FBB4: sll         $t8, $v1, 18
    ctx->r24 = S32(ctx->r3 << 18);
    // 0x8001FBB8: srl         $t6, $t8, 28
    ctx->r14 = S32(U32(ctx->r24) >> 28);
    // 0x8001FBBC: andi        $t8, $t6, 0xF
    ctx->r24 = ctx->r14 & 0XF;
    // 0x8001FBC0: sll         $t6, $t8, 4
    ctx->r14 = S32(ctx->r24 << 4);
    // 0x8001FBC4: or          $t8, $t9, $t6
    ctx->r24 = ctx->r25 | ctx->r14;
    // 0x8001FBC8: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x8001FBCC: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x8001FBD0: lui         $t6, 0xF200
    ctx->r14 = S32(0XF200 << 16);
    // 0x8001FBD4: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8001FBD8: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x8001FBDC: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    // 0x8001FBE0: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8001FBE4: lhu         $t7, 0x0($a3)
    ctx->r15 = MEM_HU(ctx->r7, 0X0);
    // 0x8001FBE8: or          $t8, $v0, $zero
    ctx->r24 = ctx->r2 | 0;
    // 0x8001FBEC: addiu       $t9, $t7, -0x1
    ctx->r25 = ADD32(ctx->r15, -0X1);
    // 0x8001FBF0: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x8001FBF4: andi        $t7, $t6, 0xFFF
    ctx->r15 = ctx->r14 & 0XFFF;
    // 0x8001FBF8: sll         $t9, $t7, 12
    ctx->r25 = S32(ctx->r15 << 12);
    // 0x8001FBFC: lhu         $t7, 0x2($a3)
    ctx->r15 = MEM_HU(ctx->r7, 0X2);
    // 0x8001FC00: or          $t6, $t9, $t0
    ctx->r14 = ctx->r25 | ctx->r8;
    // 0x8001FC04: addiu       $t9, $t7, -0x1
    ctx->r25 = ADD32(ctx->r15, -0X1);
    // 0x8001FC08: sll         $t7, $t9, 2
    ctx->r15 = S32(ctx->r25 << 2);
    // 0x8001FC0C: andi        $t9, $t7, 0xFFF
    ctx->r25 = ctx->r15 & 0XFFF;
    // 0x8001FC10: or          $t7, $t6, $t9
    ctx->r15 = ctx->r14 | ctx->r25;
    // 0x8001FC14: b           L_800201A0
    // 0x8001FC18: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
        goto L_800201A0;
    // 0x8001FC18: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
L_8001FC1C:
    // 0x8001FC1C: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8001FC20: addiu       $a1, $a1, -0x2F94
    ctx->r5 = ADD32(ctx->r5, -0X2F94);
    // 0x8001FC24: lw          $t4, 0x0($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X0);
    // 0x8001FC28: andi        $a0, $t1, 0x7
    ctx->r4 = ctx->r9 & 0X7;
    // 0x8001FC2C: sll         $t9, $a0, 21
    ctx->r25 = S32(ctx->r4 << 21);
    // 0x8001FC30: lui         $at, 0xFD00
    ctx->r1 = S32(0XFD00 << 16);
    // 0x8001FC34: lui         $t0, 0x10
    ctx->r8 = S32(0X10 << 16);
    // 0x8001FC38: or          $t7, $t9, $at
    ctx->r15 = ctx->r25 | ctx->r1;
    // 0x8001FC3C: addiu       $t6, $t4, 0x8
    ctx->r14 = ADD32(ctx->r12, 0X8);
    // 0x8001FC40: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x8001FC44: or          $t8, $t7, $t0
    ctx->r24 = ctx->r15 | ctx->r8;
    // 0x8001FC48: sw          $t8, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r24;
    // 0x8001FC4C: lw          $t6, 0x8($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X8);
    // 0x8001FC50: lui         $at, 0xF500
    ctx->r1 = S32(0XF500 << 16);
    // 0x8001FC54: sw          $t6, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r14;
    // 0x8001FC58: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x8001FC5C: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x8001FC60: or          $t2, $a0, $at
    ctx->r10 = ctx->r4 | ctx->r1;
    // 0x8001FC64: or          $t7, $t2, $t0
    ctx->r15 = ctx->r10 | ctx->r8;
    // 0x8001FC68: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8001FC6C: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x8001FC70: ori         $t8, $t7, 0x80
    ctx->r24 = ctx->r15 | 0X80;
    // 0x8001FC74: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    // 0x8001FC78: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8001FC7C: lw          $t9, 0x78($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X78);
    // 0x8001FC80: lui         $t5, 0x700
    ctx->r13 = S32(0X700 << 16);
    // 0x8001FC84: lw          $v1, 0x8($t9)
    ctx->r3 = MEM_W(ctx->r25, 0X8);
    // 0x8001FC88: nop

    // 0x8001FC8C: sll         $t7, $v1, 15
    ctx->r15 = S32(ctx->r3 << 15);
    // 0x8001FC90: srl         $t8, $t7, 29
    ctx->r24 = S32(U32(ctx->r15) >> 29);
    // 0x8001FC94: andi        $t9, $t8, 0x3
    ctx->r25 = ctx->r24 & 0X3;
    // 0x8001FC98: sll         $t7, $t9, 18
    ctx->r15 = S32(ctx->r25 << 18);
    // 0x8001FC9C: or          $t8, $t7, $t5
    ctx->r24 = ctx->r15 | ctx->r13;
    // 0x8001FCA0: sll         $t9, $v1, 22
    ctx->r25 = S32(ctx->r3 << 22);
    // 0x8001FCA4: srl         $t7, $t9, 28
    ctx->r15 = S32(U32(ctx->r25) >> 28);
    // 0x8001FCA8: andi        $t9, $t7, 0xF
    ctx->r25 = ctx->r15 & 0XF;
    // 0x8001FCAC: sll         $t7, $t9, 14
    ctx->r15 = S32(ctx->r25 << 14);
    // 0x8001FCB0: or          $t9, $t8, $t7
    ctx->r25 = ctx->r24 | ctx->r15;
    // 0x8001FCB4: sll         $t8, $v1, 12
    ctx->r24 = S32(ctx->r3 << 12);
    // 0x8001FCB8: srl         $t7, $t8, 29
    ctx->r15 = S32(U32(ctx->r24) >> 29);
    // 0x8001FCBC: andi        $t8, $t7, 0x3
    ctx->r24 = ctx->r15 & 0X3;
    // 0x8001FCC0: sll         $t7, $t8, 8
    ctx->r15 = S32(ctx->r24 << 8);
    // 0x8001FCC4: or          $t8, $t9, $t7
    ctx->r24 = ctx->r25 | ctx->r15;
    // 0x8001FCC8: sll         $t9, $v1, 18
    ctx->r25 = S32(ctx->r3 << 18);
    // 0x8001FCCC: srl         $t7, $t9, 28
    ctx->r15 = S32(U32(ctx->r25) >> 28);
    // 0x8001FCD0: andi        $t9, $t7, 0xF
    ctx->r25 = ctx->r15 & 0XF;
    // 0x8001FCD4: sll         $t7, $t9, 4
    ctx->r15 = S32(ctx->r25 << 4);
    // 0x8001FCD8: or          $t9, $t8, $t7
    ctx->r25 = ctx->r24 | ctx->r15;
    // 0x8001FCDC: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x8001FCE0: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x8001FCE4: lui         $t7, 0xE600
    ctx->r15 = S32(0XE600 << 16);
    // 0x8001FCE8: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8001FCEC: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x8001FCF0: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    // 0x8001FCF4: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8001FCF8: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x8001FCFC: lui         $t7, 0xF300
    ctx->r15 = S32(0XF300 << 16);
    // 0x8001FD00: sw          $zero, 0x4($t6)
    MEM_W(0X4, ctx->r14) = 0;
    // 0x8001FD04: lw          $t3, 0x0($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X0);
    // 0x8001FD08: nop

    // 0x8001FD0C: addiu       $t8, $t3, 0x8
    ctx->r24 = ADD32(ctx->r11, 0X8);
    // 0x8001FD10: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x8001FD14: sw          $t7, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r15;
    // 0x8001FD18: lhu         $t9, 0x2($a3)
    ctx->r25 = MEM_HU(ctx->r7, 0X2);
    // 0x8001FD1C: lhu         $a2, 0x0($a3)
    ctx->r6 = MEM_HU(ctx->r7, 0X0);
    // 0x8001FD20: nop

    // 0x8001FD24: multu       $a2, $t9
    result = U64(U32(ctx->r6)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001FD28: mflo        $t6
    ctx->r14 = lo;
    // 0x8001FD2C: addiu       $t8, $t6, 0x1
    ctx->r24 = ADD32(ctx->r14, 0X1);
    // 0x8001FD30: sra         $t7, $t8, 1
    ctx->r15 = S32(SIGNED(ctx->r24) >> 1);
    // 0x8001FD34: addiu       $t9, $t7, -0x1
    ctx->r25 = ADD32(ctx->r15, -0X1);
    // 0x8001FD38: slti        $at, $t9, 0x7FF
    ctx->r1 = SIGNED(ctx->r25) < 0X7FF ? 1 : 0;
    // 0x8001FD3C: beq         $at, $zero, L_8001FD4C
    if (ctx->r1 == 0) {
        // 0x8001FD40: sw          $t9, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r25;
            goto L_8001FD4C;
    }
    // 0x8001FD40: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x8001FD44: b           L_8001FD50
    // 0x8001FD48: or          $t1, $t9, $zero
    ctx->r9 = ctx->r25 | 0;
        goto L_8001FD50;
    // 0x8001FD48: or          $t1, $t9, $zero
    ctx->r9 = ctx->r25 | 0;
L_8001FD4C:
    // 0x8001FD4C: addiu       $t1, $zero, 0x7FF
    ctx->r9 = ADD32(0, 0X7FF);
L_8001FD50:
    // 0x8001FD50: bgez        $a2, L_8001FD60
    if (SIGNED(ctx->r6) >= 0) {
        // 0x8001FD54: sra         $v0, $a2, 3
        ctx->r2 = S32(SIGNED(ctx->r6) >> 3);
            goto L_8001FD60;
    }
    // 0x8001FD54: sra         $v0, $a2, 3
    ctx->r2 = S32(SIGNED(ctx->r6) >> 3);
    // 0x8001FD58: addiu       $at, $a2, 0x7
    ctx->r1 = ADD32(ctx->r6, 0X7);
    // 0x8001FD5C: sra         $v0, $at, 3
    ctx->r2 = S32(SIGNED(ctx->r1) >> 3);
L_8001FD60:
    // 0x8001FD60: bgtz        $v0, L_8001FD74
    if (SIGNED(ctx->r2) > 0) {
        // 0x8001FD64: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_8001FD74;
    }
    // 0x8001FD64: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8001FD68: b           L_8001FD74
    // 0x8001FD6C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
        goto L_8001FD74;
    // 0x8001FD6C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8001FD70: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_8001FD74:
    // 0x8001FD74: bgtz        $v0, L_8001FD84
    if (SIGNED(ctx->r2) > 0) {
        // 0x8001FD78: addiu       $t6, $a0, 0x7FF
        ctx->r14 = ADD32(ctx->r4, 0X7FF);
            goto L_8001FD84;
    }
    // 0x8001FD78: addiu       $t6, $a0, 0x7FF
    ctx->r14 = ADD32(ctx->r4, 0X7FF);
    // 0x8001FD7C: b           L_8001FD88
    // 0x8001FD80: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
        goto L_8001FD88;
    // 0x8001FD80: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_8001FD84:
    // 0x8001FD84: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
L_8001FD88:
    // 0x8001FD88: div         $zero, $t6, $a2
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r6)));
    // 0x8001FD8C: lui         $t0, 0x100
    ctx->r8 = S32(0X100 << 16);
    // 0x8001FD90: bne         $a2, $zero, L_8001FD9C
    if (ctx->r6 != 0) {
        // 0x8001FD94: nop
    
            goto L_8001FD9C;
    }
    // 0x8001FD94: nop

    // 0x8001FD98: break       7
    do_break(2147614104);
L_8001FD9C:
    // 0x8001FD9C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8001FDA0: bne         $a2, $at, L_8001FDB4
    if (ctx->r6 != ctx->r1) {
        // 0x8001FDA4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8001FDB4;
    }
    // 0x8001FDA4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8001FDA8: bne         $t6, $at, L_8001FDB4
    if (ctx->r14 != ctx->r1) {
        // 0x8001FDAC: nop
    
            goto L_8001FDB4;
    }
    // 0x8001FDAC: nop

    // 0x8001FDB0: break       6
    do_break(2147614128);
L_8001FDB4:
    // 0x8001FDB4: andi        $t6, $t1, 0xFFF
    ctx->r14 = ctx->r9 & 0XFFF;
    // 0x8001FDB8: lui         $at, 0x8
    ctx->r1 = S32(0X8 << 16);
    // 0x8001FDBC: mflo        $t8
    ctx->r24 = lo;
    // 0x8001FDC0: andi        $t7, $t8, 0xFFF
    ctx->r15 = ctx->r24 & 0XFFF;
    // 0x8001FDC4: or          $t9, $t7, $t5
    ctx->r25 = ctx->r15 | ctx->r13;
    // 0x8001FDC8: sll         $t8, $t6, 12
    ctx->r24 = S32(ctx->r14 << 12);
    // 0x8001FDCC: or          $t7, $t9, $t8
    ctx->r15 = ctx->r25 | ctx->r24;
    // 0x8001FDD0: sw          $t7, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r15;
    // 0x8001FDD4: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x8001FDD8: lui         $t9, 0xE700
    ctx->r25 = S32(0XE700 << 16);
    // 0x8001FDDC: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8001FDE0: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x8001FDE4: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8001FDE8: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8001FDEC: or          $t4, $v0, $zero
    ctx->r12 = ctx->r2 | 0;
    // 0x8001FDF0: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x8001FDF4: or          $t7, $t2, $at
    ctx->r15 = ctx->r10 | ctx->r1;
    // 0x8001FDF8: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8001FDFC: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x8001FE00: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x8001FE04: lhu         $t6, 0x0($a3)
    ctx->r14 = MEM_HU(ctx->r7, 0X0);
    // 0x8001FE08: nop

    // 0x8001FE0C: addiu       $t9, $t6, 0x7
    ctx->r25 = ADD32(ctx->r14, 0X7);
    // 0x8001FE10: sra         $t8, $t9, 3
    ctx->r24 = S32(SIGNED(ctx->r25) >> 3);
    // 0x8001FE14: andi        $t6, $t8, 0x1FF
    ctx->r14 = ctx->r24 & 0X1FF;
    // 0x8001FE18: sll         $t9, $t6, 9
    ctx->r25 = S32(ctx->r14 << 9);
    // 0x8001FE1C: or          $t8, $t7, $t9
    ctx->r24 = ctx->r15 | ctx->r25;
    // 0x8001FE20: ori         $t6, $t8, 0x80
    ctx->r14 = ctx->r24 | 0X80;
    // 0x8001FE24: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8001FE28: lw          $t9, 0x78($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X78);
    // 0x8001FE2C: nop

    // 0x8001FE30: lw          $v1, 0x8($t9)
    ctx->r3 = MEM_W(ctx->r25, 0X8);
    // 0x8001FE34: nop

    // 0x8001FE38: sll         $t8, $v1, 15
    ctx->r24 = S32(ctx->r3 << 15);
    // 0x8001FE3C: srl         $t6, $t8, 29
    ctx->r14 = S32(U32(ctx->r24) >> 29);
    // 0x8001FE40: andi        $t7, $t6, 0x3
    ctx->r15 = ctx->r14 & 0X3;
    // 0x8001FE44: sll         $t9, $t7, 18
    ctx->r25 = S32(ctx->r15 << 18);
    // 0x8001FE48: sll         $t6, $v1, 22
    ctx->r14 = S32(ctx->r3 << 22);
    // 0x8001FE4C: srl         $t7, $t6, 28
    ctx->r15 = S32(U32(ctx->r14) >> 28);
    // 0x8001FE50: or          $t8, $t9, $t0
    ctx->r24 = ctx->r25 | ctx->r8;
    // 0x8001FE54: andi        $t9, $t7, 0xF
    ctx->r25 = ctx->r15 & 0XF;
    // 0x8001FE58: sll         $t6, $t9, 14
    ctx->r14 = S32(ctx->r25 << 14);
    // 0x8001FE5C: or          $t7, $t8, $t6
    ctx->r15 = ctx->r24 | ctx->r14;
    // 0x8001FE60: sll         $t9, $v1, 12
    ctx->r25 = S32(ctx->r3 << 12);
    // 0x8001FE64: srl         $t8, $t9, 29
    ctx->r24 = S32(U32(ctx->r25) >> 29);
    // 0x8001FE68: andi        $t6, $t8, 0x3
    ctx->r14 = ctx->r24 & 0X3;
    // 0x8001FE6C: sll         $t9, $t6, 8
    ctx->r25 = S32(ctx->r14 << 8);
    // 0x8001FE70: or          $t8, $t7, $t9
    ctx->r24 = ctx->r15 | ctx->r25;
    // 0x8001FE74: sll         $t6, $v1, 18
    ctx->r14 = S32(ctx->r3 << 18);
    // 0x8001FE78: srl         $t7, $t6, 28
    ctx->r15 = S32(U32(ctx->r14) >> 28);
    // 0x8001FE7C: andi        $t9, $t7, 0xF
    ctx->r25 = ctx->r15 & 0XF;
    // 0x8001FE80: sll         $t6, $t9, 4
    ctx->r14 = S32(ctx->r25 << 4);
    // 0x8001FE84: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x8001FE88: or          $t7, $t8, $t6
    ctx->r15 = ctx->r24 | ctx->r14;
    // 0x8001FE8C: sw          $t7, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r15;
    // 0x8001FE90: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x8001FE94: lui         $t6, 0xF200
    ctx->r14 = S32(0XF200 << 16);
    // 0x8001FE98: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8001FE9C: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x8001FEA0: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x8001FEA4: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8001FEA8: lhu         $t9, 0x0($a3)
    ctx->r25 = MEM_HU(ctx->r7, 0X0);
    // 0x8001FEAC: nop

    // 0x8001FEB0: addiu       $t8, $t9, -0x1
    ctx->r24 = ADD32(ctx->r25, -0X1);
    // 0x8001FEB4: sll         $t6, $t8, 2
    ctx->r14 = S32(ctx->r24 << 2);
    // 0x8001FEB8: andi        $t7, $t6, 0xFFF
    ctx->r15 = ctx->r14 & 0XFFF;
    // 0x8001FEBC: lhu         $t6, 0x2($a3)
    ctx->r14 = MEM_HU(ctx->r7, 0X2);
    // 0x8001FEC0: sll         $t9, $t7, 12
    ctx->r25 = S32(ctx->r15 << 12);
    // 0x8001FEC4: or          $t8, $t9, $t0
    ctx->r24 = ctx->r25 | ctx->r8;
    // 0x8001FEC8: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8001FECC: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x8001FED0: andi        $t6, $t9, 0xFFF
    ctx->r14 = ctx->r25 & 0XFFF;
    // 0x8001FED4: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x8001FED8: or          $t7, $t8, $t6
    ctx->r15 = ctx->r24 | ctx->r14;
    // 0x8001FEDC: b           L_800201A0
    // 0x8001FEE0: sw          $t7, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r15;
        goto L_800201A0;
    // 0x8001FEE0: sw          $t7, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r15;
L_8001FEE4:
    // 0x8001FEE4: addiu       $a1, $a1, -0x2F94
    ctx->r5 = ADD32(ctx->r5, -0X2F94);
    // 0x8001FEE8: lw          $t4, 0x0($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X0);
    // 0x8001FEEC: andi        $a0, $t1, 0x7
    ctx->r4 = ctx->r9 & 0X7;
    // 0x8001FEF0: sll         $t6, $a0, 21
    ctx->r14 = S32(ctx->r4 << 21);
    // 0x8001FEF4: lui         $at, 0xFD00
    ctx->r1 = S32(0XFD00 << 16);
    // 0x8001FEF8: lui         $t0, 0x10
    ctx->r8 = S32(0X10 << 16);
    // 0x8001FEFC: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x8001FF00: addiu       $t8, $t4, 0x8
    ctx->r24 = ADD32(ctx->r12, 0X8);
    // 0x8001FF04: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x8001FF08: or          $t9, $t7, $t0
    ctx->r25 = ctx->r15 | ctx->r8;
    // 0x8001FF0C: sw          $t9, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r25;
    // 0x8001FF10: lw          $t8, 0x8($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X8);
    // 0x8001FF14: lui         $at, 0xF500
    ctx->r1 = S32(0XF500 << 16);
    // 0x8001FF18: sw          $t8, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r24;
    // 0x8001FF1C: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x8001FF20: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x8001FF24: or          $t7, $a0, $at
    ctx->r15 = ctx->r4 | ctx->r1;
    // 0x8001FF28: or          $t2, $t7, $t0
    ctx->r10 = ctx->r15 | ctx->r8;
    // 0x8001FF2C: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8001FF30: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x8001FF34: ori         $t9, $t2, 0x100
    ctx->r25 = ctx->r10 | 0X100;
    // 0x8001FF38: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x8001FF3C: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8001FF40: lw          $t6, 0x78($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X78);
    // 0x8001FF44: lui         $t5, 0x700
    ctx->r13 = S32(0X700 << 16);
    // 0x8001FF48: lw          $v1, 0x8($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X8);
    // 0x8001FF4C: addiu       $t1, $zero, 0x7FF
    ctx->r9 = ADD32(0, 0X7FF);
    // 0x8001FF50: sll         $t7, $v1, 15
    ctx->r15 = S32(ctx->r3 << 15);
    // 0x8001FF54: srl         $t9, $t7, 29
    ctx->r25 = S32(U32(ctx->r15) >> 29);
    // 0x8001FF58: andi        $t8, $t9, 0x3
    ctx->r24 = ctx->r25 & 0X3;
    // 0x8001FF5C: sll         $t6, $t8, 18
    ctx->r14 = S32(ctx->r24 << 18);
    // 0x8001FF60: sll         $t9, $v1, 22
    ctx->r25 = S32(ctx->r3 << 22);
    // 0x8001FF64: srl         $t8, $t9, 28
    ctx->r24 = S32(U32(ctx->r25) >> 28);
    // 0x8001FF68: or          $t7, $t6, $t5
    ctx->r15 = ctx->r14 | ctx->r13;
    // 0x8001FF6C: andi        $t6, $t8, 0xF
    ctx->r14 = ctx->r24 & 0XF;
    // 0x8001FF70: sll         $t9, $t6, 14
    ctx->r25 = S32(ctx->r14 << 14);
    // 0x8001FF74: or          $t8, $t7, $t9
    ctx->r24 = ctx->r15 | ctx->r25;
    // 0x8001FF78: sll         $t6, $v1, 12
    ctx->r14 = S32(ctx->r3 << 12);
    // 0x8001FF7C: srl         $t7, $t6, 29
    ctx->r15 = S32(U32(ctx->r14) >> 29);
    // 0x8001FF80: andi        $t9, $t7, 0x3
    ctx->r25 = ctx->r15 & 0X3;
    // 0x8001FF84: sll         $t6, $t9, 8
    ctx->r14 = S32(ctx->r25 << 8);
    // 0x8001FF88: or          $t7, $t8, $t6
    ctx->r15 = ctx->r24 | ctx->r14;
    // 0x8001FF8C: sll         $t9, $v1, 18
    ctx->r25 = S32(ctx->r3 << 18);
    // 0x8001FF90: srl         $t8, $t9, 28
    ctx->r24 = S32(U32(ctx->r25) >> 28);
    // 0x8001FF94: andi        $t6, $t8, 0xF
    ctx->r14 = ctx->r24 & 0XF;
    // 0x8001FF98: sll         $t9, $t6, 4
    ctx->r25 = S32(ctx->r14 << 4);
    // 0x8001FF9C: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x8001FFA0: or          $t8, $t7, $t9
    ctx->r24 = ctx->r15 | ctx->r25;
    // 0x8001FFA4: sw          $t8, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r24;
    // 0x8001FFA8: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x8001FFAC: lui         $t9, 0xE600
    ctx->r25 = S32(0XE600 << 16);
    // 0x8001FFB0: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x8001FFB4: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x8001FFB8: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x8001FFBC: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8001FFC0: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8001FFC4: lui         $t9, 0xF300
    ctx->r25 = S32(0XF300 << 16);
    // 0x8001FFC8: sw          $zero, 0x4($t6)
    MEM_W(0X4, ctx->r14) = 0;
    // 0x8001FFCC: lw          $t3, 0x0($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X0);
    // 0x8001FFD0: nop

    // 0x8001FFD4: addiu       $t7, $t3, 0x8
    ctx->r15 = ADD32(ctx->r11, 0X8);
    // 0x8001FFD8: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x8001FFDC: sw          $t9, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r25;
    // 0x8001FFE0: lhu         $t8, 0x2($a3)
    ctx->r24 = MEM_HU(ctx->r7, 0X2);
    // 0x8001FFE4: lhu         $a2, 0x0($a3)
    ctx->r6 = MEM_HU(ctx->r7, 0X0);
    // 0x8001FFE8: nop

    // 0x8001FFEC: multu       $a2, $t8
    result = U64(U32(ctx->r6)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001FFF0: sll         $v0, $a2, 1
    ctx->r2 = S32(ctx->r6 << 1);
    // 0x8001FFF4: mflo        $t6
    ctx->r14 = lo;
    // 0x8001FFF8: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8001FFFC: slti        $at, $t7, 0x7FF
    ctx->r1 = SIGNED(ctx->r15) < 0X7FF ? 1 : 0;
    // 0x80020000: beq         $at, $zero, L_80020010
    if (ctx->r1 == 0) {
        // 0x80020004: sw          $t7, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r15;
            goto L_80020010;
    }
    // 0x80020004: sw          $t7, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r15;
    // 0x80020008: b           L_80020010
    // 0x8002000C: or          $t1, $t7, $zero
    ctx->r9 = ctx->r15 | 0;
        goto L_80020010;
    // 0x8002000C: or          $t1, $t7, $zero
    ctx->r9 = ctx->r15 | 0;
L_80020010:
    // 0x80020010: bgez        $v0, L_80020020
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80020014: sra         $t9, $v0, 3
        ctx->r25 = S32(SIGNED(ctx->r2) >> 3);
            goto L_80020020;
    }
    // 0x80020014: sra         $t9, $v0, 3
    ctx->r25 = S32(SIGNED(ctx->r2) >> 3);
    // 0x80020018: addiu       $at, $v0, 0x7
    ctx->r1 = ADD32(ctx->r2, 0X7);
    // 0x8002001C: sra         $t9, $at, 3
    ctx->r25 = S32(SIGNED(ctx->r1) >> 3);
L_80020020:
    // 0x80020020: bgtz        $t9, L_80020030
    if (SIGNED(ctx->r25) > 0) {
        // 0x80020024: or          $v0, $t9, $zero
        ctx->r2 = ctx->r25 | 0;
            goto L_80020030;
    }
    // 0x80020024: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    // 0x80020028: b           L_80020034
    // 0x8002002C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
        goto L_80020034;
    // 0x8002002C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_80020030:
    // 0x80020030: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_80020034:
    // 0x80020034: bgtz        $v0, L_80020044
    if (SIGNED(ctx->r2) > 0) {
        // 0x80020038: addiu       $t8, $a0, 0x7FF
        ctx->r24 = ADD32(ctx->r4, 0X7FF);
            goto L_80020044;
    }
    // 0x80020038: addiu       $t8, $a0, 0x7FF
    ctx->r24 = ADD32(ctx->r4, 0X7FF);
    // 0x8002003C: b           L_80020048
    // 0x80020040: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
        goto L_80020048;
    // 0x80020040: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_80020044:
    // 0x80020044: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
L_80020048:
    // 0x80020048: div         $zero, $t8, $a2
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r6)));
    // 0x8002004C: lui         $t0, 0x100
    ctx->r8 = S32(0X100 << 16);
    // 0x80020050: bne         $a2, $zero, L_8002005C
    if (ctx->r6 != 0) {
        // 0x80020054: nop
    
            goto L_8002005C;
    }
    // 0x80020054: nop

    // 0x80020058: break       7
    do_break(2147614808);
L_8002005C:
    // 0x8002005C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80020060: bne         $a2, $at, L_80020074
    if (ctx->r6 != ctx->r1) {
        // 0x80020064: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80020074;
    }
    // 0x80020064: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80020068: bne         $t8, $at, L_80020074
    if (ctx->r24 != ctx->r1) {
        // 0x8002006C: nop
    
            goto L_80020074;
    }
    // 0x8002006C: nop

    // 0x80020070: break       6
    do_break(2147614832);
L_80020074:
    // 0x80020074: andi        $t8, $t1, 0xFFF
    ctx->r24 = ctx->r9 & 0XFFF;
    // 0x80020078: mflo        $t6
    ctx->r14 = lo;
    // 0x8002007C: andi        $t7, $t6, 0xFFF
    ctx->r15 = ctx->r14 & 0XFFF;
    // 0x80020080: or          $t9, $t7, $t5
    ctx->r25 = ctx->r15 | ctx->r13;
    // 0x80020084: sll         $t6, $t8, 12
    ctx->r14 = S32(ctx->r24 << 12);
    // 0x80020088: or          $t7, $t9, $t6
    ctx->r15 = ctx->r25 | ctx->r14;
    // 0x8002008C: sw          $t7, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r15;
    // 0x80020090: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x80020094: lui         $t9, 0xE700
    ctx->r25 = S32(0XE700 << 16);
    // 0x80020098: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8002009C: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x800200A0: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x800200A4: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x800200A8: or          $t4, $v0, $zero
    ctx->r12 = ctx->r2 | 0;
    // 0x800200AC: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x800200B0: nop

    // 0x800200B4: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x800200B8: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x800200BC: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x800200C0: lhu         $t7, 0x0($a3)
    ctx->r15 = MEM_HU(ctx->r7, 0X0);
    // 0x800200C4: nop

    // 0x800200C8: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x800200CC: addiu       $t9, $t8, 0x7
    ctx->r25 = ADD32(ctx->r24, 0X7);
    // 0x800200D0: sra         $t6, $t9, 3
    ctx->r14 = S32(SIGNED(ctx->r25) >> 3);
    // 0x800200D4: andi        $t7, $t6, 0x1FF
    ctx->r15 = ctx->r14 & 0X1FF;
    // 0x800200D8: sll         $t8, $t7, 9
    ctx->r24 = S32(ctx->r15 << 9);
    // 0x800200DC: or          $t9, $t2, $t8
    ctx->r25 = ctx->r10 | ctx->r24;
    // 0x800200E0: ori         $t6, $t9, 0x100
    ctx->r14 = ctx->r25 | 0X100;
    // 0x800200E4: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x800200E8: lw          $t8, 0x78($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X78);
    // 0x800200EC: nop

    // 0x800200F0: lw          $v1, 0x8($t8)
    ctx->r3 = MEM_W(ctx->r24, 0X8);
    // 0x800200F4: nop

    // 0x800200F8: sll         $t9, $v1, 15
    ctx->r25 = S32(ctx->r3 << 15);
    // 0x800200FC: srl         $t6, $t9, 29
    ctx->r14 = S32(U32(ctx->r25) >> 29);
    // 0x80020100: andi        $t7, $t6, 0x3
    ctx->r15 = ctx->r14 & 0X3;
    // 0x80020104: sll         $t8, $t7, 18
    ctx->r24 = S32(ctx->r15 << 18);
    // 0x80020108: sll         $t6, $v1, 22
    ctx->r14 = S32(ctx->r3 << 22);
    // 0x8002010C: srl         $t7, $t6, 28
    ctx->r15 = S32(U32(ctx->r14) >> 28);
    // 0x80020110: or          $t9, $t8, $t0
    ctx->r25 = ctx->r24 | ctx->r8;
    // 0x80020114: andi        $t8, $t7, 0xF
    ctx->r24 = ctx->r15 & 0XF;
    // 0x80020118: sll         $t6, $t8, 14
    ctx->r14 = S32(ctx->r24 << 14);
    // 0x8002011C: or          $t7, $t9, $t6
    ctx->r15 = ctx->r25 | ctx->r14;
    // 0x80020120: sll         $t8, $v1, 12
    ctx->r24 = S32(ctx->r3 << 12);
    // 0x80020124: srl         $t9, $t8, 29
    ctx->r25 = S32(U32(ctx->r24) >> 29);
    // 0x80020128: andi        $t6, $t9, 0x3
    ctx->r14 = ctx->r25 & 0X3;
    // 0x8002012C: sll         $t8, $t6, 8
    ctx->r24 = S32(ctx->r14 << 8);
    // 0x80020130: or          $t9, $t7, $t8
    ctx->r25 = ctx->r15 | ctx->r24;
    // 0x80020134: sll         $t6, $v1, 18
    ctx->r14 = S32(ctx->r3 << 18);
    // 0x80020138: srl         $t7, $t6, 28
    ctx->r15 = S32(U32(ctx->r14) >> 28);
    // 0x8002013C: andi        $t8, $t7, 0xF
    ctx->r24 = ctx->r15 & 0XF;
    // 0x80020140: sll         $t6, $t8, 4
    ctx->r14 = S32(ctx->r24 << 4);
    // 0x80020144: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x80020148: or          $t7, $t9, $t6
    ctx->r15 = ctx->r25 | ctx->r14;
    // 0x8002014C: sw          $t7, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r15;
    // 0x80020150: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x80020154: lui         $t6, 0xF200
    ctx->r14 = S32(0XF200 << 16);
    // 0x80020158: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8002015C: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x80020160: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80020164: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x80020168: lhu         $t8, 0x0($a3)
    ctx->r24 = MEM_HU(ctx->r7, 0X0);
    // 0x8002016C: nop

    // 0x80020170: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x80020174: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x80020178: andi        $t7, $t6, 0xFFF
    ctx->r15 = ctx->r14 & 0XFFF;
    // 0x8002017C: lhu         $t6, 0x2($a3)
    ctx->r14 = MEM_HU(ctx->r7, 0X2);
    // 0x80020180: sll         $t8, $t7, 12
    ctx->r24 = S32(ctx->r15 << 12);
    // 0x80020184: or          $t9, $t8, $t0
    ctx->r25 = ctx->r24 | ctx->r8;
    // 0x80020188: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8002018C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80020190: andi        $t6, $t8, 0xFFF
    ctx->r14 = ctx->r24 & 0XFFF;
    // 0x80020194: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80020198: or          $t7, $t9, $t6
    ctx->r15 = ctx->r25 | ctx->r14;
    // 0x8002019C: sw          $t7, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r15;
L_800201A0:
    // 0x800201A0: jr          $ra
    // 0x800201A4: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x800201A4: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_800201A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800201A8: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x800201AC: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x800201B0: addiu       $at, $v0, 0x7FFF
    ctx->r1 = ADD32(ctx->r2, 0X7FFF);
    // 0x800201B4: addiu       $t8, $a0, 0x1
    ctx->r24 = ADD32(ctx->r4, 0X1);
    // 0x800201B8: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800201BC: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800201C0: sw          $t6, 0x6E91($at)
    MEM_W(0X6E91, ctx->r1) = ctx->r14;
    // 0x800201C4: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x800201C8: sw          $t7, 0x6E95($at)
    MEM_W(0X6E95, ctx->r1) = ctx->r15;
    // 0x800201CC: sw          $t9, 0x6E99($at)
    MEM_W(0X6E99, ctx->r1) = ctx->r25;
    // 0x800201D0: addiu       $t0, $a1, 0x1
    ctx->r8 = ADD32(ctx->r5, 0X1);
    // 0x800201D4: addiu       $t2, $a2, -0x1
    ctx->r10 = ADD32(ctx->r6, -0X1);
    // 0x800201D8: addiu       $t4, $a3, -0x1
    ctx->r12 = ADD32(ctx->r7, -0X1);
    // 0x800201DC: addiu       $t6, $a2, -0x2
    ctx->r14 = ADD32(ctx->r6, -0X2);
    // 0x800201E0: addiu       $t8, $a3, -0x2
    ctx->r24 = ADD32(ctx->r7, -0X2);
    // 0x800201E4: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800201E8: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800201EC: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x800201F0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800201F4: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800201F8: sw          $t1, 0x6E9D($at)
    MEM_W(0X6E9D, ctx->r1) = ctx->r9;
    // 0x800201FC: sw          $t3, 0x6EA1($at)
    MEM_W(0X6EA1, ctx->r1) = ctx->r11;
    // 0x80020200: sw          $t5, 0x6EA5($at)
    MEM_W(0X6EA5, ctx->r1) = ctx->r13;
    // 0x80020204: sw          $t7, 0x6EA9($at)
    MEM_W(0X6EA9, ctx->r1) = ctx->r15;
    // 0x80020208: jr          $ra
    // 0x8002020C: sw          $t9, 0x6EAD($at)
    MEM_W(0X6EAD, ctx->r1) = ctx->r25;
    return;
    // 0x8002020C: sw          $t9, 0x6EAD($at)
    MEM_W(0X6EAD, ctx->r1) = ctx->r25;
;}
RECOMP_FUNC void func_80020270(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80020270: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80020274: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80020278: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8002027C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80020280: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80020284: lui         $s0, 0x8010
    ctx->r16 = S32(0X8010 << 16);
    // 0x80020288: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8002028C: addiu       $s0, $s0, 0x69D4
    ctx->r16 = ADD32(ctx->r16, 0X69D4);
    // 0x80020290: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80020294: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x80020298: addiu       $s3, $zero, 0xB1
    ctx->r19 = ADD32(0, 0XB1);
L_8002029C:
    // 0x8002029C: jal         0x8002038C
    // 0x800202A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8002038C(rdram, ctx);
        goto after_0;
    // 0x800202A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x800202A4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x800202A8: addiu       $s0, $s0, 0x3C
    ctx->r16 = ADD32(ctx->r16, 0X3C);
    // 0x800202AC: bne         $s1, $s3, L_8002029C
    if (ctx->r17 != ctx->r19) {
        // 0x800202B0: sw          $s2, -0x4($s0)
        MEM_W(-0X4, ctx->r16) = ctx->r18;
            goto L_8002029C;
    }
    // 0x800202B0: sw          $s2, -0x4($s0)
    MEM_W(-0X4, ctx->r16) = ctx->r18;
    // 0x800202B4: jal         0x800202D8
    // 0x800202B8: nop

    func_800202D8(rdram, ctx);
        goto after_1;
    // 0x800202B8: nop

    after_1:
    // 0x800202BC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800202C0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800202C4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800202C8: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x800202CC: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x800202D0: jr          $ra
    // 0x800202D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800202D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800202D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800202D8: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x800202DC: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x800202E0: addiu       $at, $v0, 0x7FFF
    ctx->r1 = ADD32(ctx->r2, 0X7FFF);
    // 0x800202E4: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x800202E8: sw          $zero, 0x6C21($at)
    MEM_W(0X6C21, ctx->r1) = 0;
    // 0x800202EC: sh          $t6, 0x6C1D($at)
    MEM_H(0X6C1D, ctx->r1) = ctx->r14;
    // 0x800202F0: addiu       $t7, $v0, 0x7FFF
    ctx->r15 = ADD32(ctx->r2, 0X7FFF);
    // 0x800202F4: lh          $t7, 0x6C1D($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X6C1D);
    // 0x800202F8: addiu       $t8, $v0, 0x7FFF
    ctx->r24 = ADD32(ctx->r2, 0X7FFF);
    // 0x800202FC: sh          $t7, 0x6C1B($at)
    MEM_H(0X6C1B, ctx->r1) = ctx->r15;
    // 0x80020300: lh          $t8, 0x6C1B($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X6C1B);
    // 0x80020304: addiu       $t9, $v0, 0x7FFF
    ctx->r25 = ADD32(ctx->r2, 0X7FFF);
    // 0x80020308: sh          $t8, 0x6C19($at)
    MEM_H(0X6C19, ctx->r1) = ctx->r24;
    // 0x8002030C: lh          $t9, 0x6C19($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X6C19);
    // 0x80020310: jr          $ra
    // 0x80020314: sh          $t9, 0x6C17($at)
    MEM_H(0X6C17, ctx->r1) = ctx->r25;
    return;
    // 0x80020314: sh          $t9, 0x6C17($at)
    MEM_H(0X6C17, ctx->r1) = ctx->r25;
;}
RECOMP_FUNC void func_80020318(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80020318: sll         $t6, $a0, 4
    ctx->r14 = S32(ctx->r4 << 4);
    // 0x8002031C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80020320: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x80020324: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x80020328: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8002032C: ori         $at, $at, 0xA144
    ctx->r1 = ctx->r1 | 0XA144;
    // 0x80020330: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80020334: addu        $t7, $t6, $at
    ctx->r15 = ADD32(ctx->r14, ctx->r1);
    // 0x80020338: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x8002033C: addiu       $s2, $a1, 0x1
    ctx->r18 = ADD32(ctx->r5, 0X1);
    // 0x80020340: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80020344: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80020348: addiu       $t8, $t8, -0x3770
    ctx->r24 = ADD32(ctx->r24, -0X3770);
    // 0x8002034C: slt         $at, $a0, $s2
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x80020350: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80020354: addu        $s0, $t7, $t8
    ctx->r16 = ADD32(ctx->r15, ctx->r24);
    // 0x80020358: beq         $at, $zero, L_80020374
    if (ctx->r1 == 0) {
        // 0x8002035C: or          $s1, $a0, $zero
        ctx->r17 = ctx->r4 | 0;
            goto L_80020374;
    }
    // 0x8002035C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
L_80020360:
    // 0x80020360: jal         0x8002038C
    // 0x80020364: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8002038C(rdram, ctx);
        goto after_0;
    // 0x80020364: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x80020368: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8002036C: bne         $s1, $s2, L_80020360
    if (ctx->r17 != ctx->r18) {
        // 0x80020370: addiu       $s0, $s0, 0x3C
        ctx->r16 = ADD32(ctx->r16, 0X3C);
            goto L_80020360;
    }
    // 0x80020370: addiu       $s0, $s0, 0x3C
    ctx->r16 = ADD32(ctx->r16, 0X3C);
L_80020374:
    // 0x80020374: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80020378: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8002037C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80020380: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80020384: jr          $ra
    // 0x80020388: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80020388: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8002038C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002038C: sw          $zero, 0x8($a0)
    MEM_W(0X8, ctx->r4) = 0;
    // 0x80020390: lbu         $t6, 0x9($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X9);
    // 0x80020394: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    // 0x80020398: andi        $t7, $t6, 0xFFF1
    ctx->r15 = ctx->r14 & 0XFFF1;
    // 0x8002039C: ori         $t8, $t7, 0x2
    ctx->r24 = ctx->r15 | 0X2;
    // 0x800203A0: sb          $t8, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r24;
    // 0x800203A4: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x800203A8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800203AC: srl         $t9, $v0, 14
    ctx->r25 = S32(U32(ctx->r2) >> 14);
    // 0x800203B0: xori        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 ^ 0X1;
    // 0x800203B4: sll         $t1, $t0, 29
    ctx->r9 = S32(ctx->r8 << 29);
    // 0x800203B8: srl         $t2, $t1, 15
    ctx->r10 = S32(U32(ctx->r9) >> 15);
    // 0x800203BC: xor         $t3, $t2, $v0
    ctx->r11 = ctx->r10 ^ ctx->r2;
    // 0x800203C0: sw          $t3, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r11;
    // 0x800203C4: lbu         $t4, 0xA($a0)
    ctx->r12 = MEM_BU(ctx->r4, 0XA);
    // 0x800203C8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x800203CC: andi        $t5, $t4, 0xFFC3
    ctx->r13 = ctx->r12 & 0XFFC3;
    // 0x800203D0: ori         $t6, $t5, 0x24
    ctx->r14 = ctx->r13 | 0X24;
    // 0x800203D4: sb          $t6, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r14;
    // 0x800203D8: lhu         $t7, 0xA($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0XA);
    // 0x800203DC: sb          $zero, 0x4($a0)
    MEM_B(0X4, ctx->r4) = 0;
    // 0x800203E0: andi        $t8, $t7, 0xFC3F
    ctx->r24 = ctx->r15 & 0XFC3F;
    // 0x800203E4: ori         $t9, $t8, 0x240
    ctx->r25 = ctx->r24 | 0X240;
    // 0x800203E8: sh          $t9, 0xA($a0)
    MEM_H(0XA, ctx->r4) = ctx->r25;
    // 0x800203EC: lbu         $t0, 0xB($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0XB);
    // 0x800203F0: sw          $zero, 0x18($a0)
    MEM_W(0X18, ctx->r4) = 0;
    // 0x800203F4: andi        $t1, $t0, 0xFFF1
    ctx->r9 = ctx->r8 & 0XFFF1;
    // 0x800203F8: ori         $t2, $t1, 0x2
    ctx->r10 = ctx->r9 | 0X2;
    // 0x800203FC: sw          $zero, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = 0;
    // 0x80020400: sb          $v1, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r3;
    // 0x80020404: sb          $t2, 0xB($a0)
    MEM_B(0XB, ctx->r4) = ctx->r10;
    // 0x80020408: sh          $zero, 0x16($a0)
    MEM_H(0X16, ctx->r4) = 0;
    // 0x8002040C: sb          $zero, 0x5($a0)
    MEM_B(0X5, ctx->r4) = 0;
    // 0x80020410: sh          $zero, 0x6($a0)
    MEM_H(0X6, ctx->r4) = 0;
    // 0x80020414: sw          $zero, 0x30($a0)
    MEM_W(0X30, ctx->r4) = 0;
    // 0x80020418: sh          $zero, 0x12($a0)
    MEM_H(0X12, ctx->r4) = 0;
    // 0x8002041C: sh          $zero, 0x14($a0)
    MEM_H(0X14, ctx->r4) = 0;
    // 0x80020420: sb          $zero, 0xD($a0)
    MEM_B(0XD, ctx->r4) = 0;
    // 0x80020424: sb          $v1, 0xE($a0)
    MEM_B(0XE, ctx->r4) = ctx->r3;
    // 0x80020428: sb          $v1, 0xF($a0)
    MEM_B(0XF, ctx->r4) = ctx->r3;
    // 0x8002042C: sb          $v1, 0x10($a0)
    MEM_B(0X10, ctx->r4) = ctx->r3;
    // 0x80020430: sb          $v1, 0x11($a0)
    MEM_B(0X11, ctx->r4) = ctx->r3;
    // 0x80020434: swc1        $f0, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f0.u32l;
    // 0x80020438: jr          $ra
    // 0x8002043C: swc1        $f0, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f0.u32l;
    return;
    // 0x8002043C: swc1        $f0, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_800204C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800204C0: sw          $zero, 0x8($a0)
    MEM_W(0X8, ctx->r4) = 0;
    // 0x800204C4: lbu         $t6, 0xB($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XB);
    // 0x800204C8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x800204CC: andi        $t7, $t6, 0xFFF1
    ctx->r15 = ctx->r14 & 0XFFF1;
    // 0x800204D0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x800204D4: ori         $t8, $t7, 0x6
    ctx->r24 = ctx->r15 | 0X6;
    // 0x800204D8: addiu       $t9, $zero, 0x140
    ctx->r25 = ADD32(0, 0X140);
    // 0x800204DC: addiu       $t0, $zero, 0xF0
    ctx->r8 = ADD32(0, 0XF0);
    // 0x800204E0: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x800204E4: addiu       $t2, $zero, 0x140
    ctx->r10 = ADD32(0, 0X140);
    // 0x800204E8: addiu       $t3, $zero, 0xF0
    ctx->r11 = ADD32(0, 0XF0);
    // 0x800204EC: addiu       $t4, $zero, 0xA
    ctx->r12 = ADD32(0, 0XA);
    // 0x800204F0: addiu       $t5, $zero, 0x7
    ctx->r13 = ADD32(0, 0X7);
    // 0x800204F4: sb          $zero, 0x4($a0)
    MEM_B(0X4, ctx->r4) = 0;
    // 0x800204F8: sb          $zero, 0x31($a0)
    MEM_B(0X31, ctx->r4) = 0;
    // 0x800204FC: sb          $zero, 0x5($a0)
    MEM_B(0X5, ctx->r4) = 0;
    // 0x80020500: sh          $zero, 0x6($a0)
    MEM_H(0X6, ctx->r4) = 0;
    // 0x80020504: sb          $t8, 0xB($a0)
    MEM_B(0XB, ctx->r4) = ctx->r24;
    // 0x80020508: sh          $v0, 0x3C($a0)
    MEM_H(0X3C, ctx->r4) = ctx->r2;
    // 0x8002050C: sh          $v0, 0x3E($a0)
    MEM_H(0X3E, ctx->r4) = ctx->r2;
    // 0x80020510: sh          $v0, 0x40($a0)
    MEM_H(0X40, ctx->r4) = ctx->r2;
    // 0x80020514: sh          $v0, 0x42($a0)
    MEM_H(0X42, ctx->r4) = ctx->r2;
    // 0x80020518: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
    // 0x8002051C: sw          $zero, 0x10($a0)
    MEM_W(0X10, ctx->r4) = 0;
    // 0x80020520: sw          $zero, 0x14($a0)
    MEM_W(0X14, ctx->r4) = 0;
    // 0x80020524: sw          $zero, 0x18($a0)
    MEM_W(0X18, ctx->r4) = 0;
    // 0x80020528: sw          $zero, 0x28($a0)
    MEM_W(0X28, ctx->r4) = 0;
    // 0x8002052C: sh          $t9, 0x1C($a0)
    MEM_H(0X1C, ctx->r4) = ctx->r25;
    // 0x80020530: sh          $t0, 0x1E($a0)
    MEM_H(0X1E, ctx->r4) = ctx->r8;
    // 0x80020534: sh          $v1, 0x20($a0)
    MEM_H(0X20, ctx->r4) = ctx->r3;
    // 0x80020538: sh          $v1, 0x22($a0)
    MEM_H(0X22, ctx->r4) = ctx->r3;
    // 0x8002053C: sb          $t1, 0x30($a0)
    MEM_B(0X30, ctx->r4) = ctx->r9;
    // 0x80020540: sh          $zero, 0x32($a0)
    MEM_H(0X32, ctx->r4) = 0;
    // 0x80020544: sh          $zero, 0x34($a0)
    MEM_H(0X34, ctx->r4) = 0;
    // 0x80020548: sh          $zero, 0x36($a0)
    MEM_H(0X36, ctx->r4) = 0;
    // 0x8002054C: sh          $t2, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r10;
    // 0x80020550: sh          $t3, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = ctx->r11;
    // 0x80020554: sh          $zero, 0x44($a0)
    MEM_H(0X44, ctx->r4) = 0;
    // 0x80020558: sh          $zero, 0x46($a0)
    MEM_H(0X46, ctx->r4) = 0;
    // 0x8002055C: sh          $t4, 0x48($a0)
    MEM_H(0X48, ctx->r4) = ctx->r12;
    // 0x80020560: jr          $ra
    // 0x80020564: sh          $t5, 0x4A($a0)
    MEM_H(0X4A, ctx->r4) = ctx->r13;
    return;
    // 0x80020564: sh          $t5, 0x4A($a0)
    MEM_H(0X4A, ctx->r4) = ctx->r13;
    // 0x80020568: nop

    // 0x8002056C: nop

;}
RECOMP_FUNC void func_80020570(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80020570: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x80020574: sw          $s0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r16;
    // 0x80020578: slti        $at, $a2, 0x2
    ctx->r1 = SIGNED(ctx->r6) < 0X2 ? 1 : 0;
    // 0x8002057C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80020580: sw          $s1, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r17;
    // 0x80020584: bne         $at, $zero, L_80020630
    if (ctx->r1 != 0) {
        // 0x80020588: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80020630;
    }
    // 0x80020588: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8002058C: addiu       $a0, $a1, 0x2
    ctx->r4 = ADD32(ctx->r5, 0X2);
    // 0x80020590: addiu       $t0, $s0, 0x4
    ctx->r8 = ADD32(ctx->r16, 0X4);
    // 0x80020594: or          $t2, $zero, $zero
    ctx->r10 = 0 | 0;
L_80020598:
    // 0x80020598: lhu         $v1, 0x0($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X0);
    // 0x8002059C: lw          $a3, 0x0($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X0);
    // 0x800205A0: bltz        $t2, L_80020604
    if (SIGNED(ctx->r10) < 0) {
        // 0x800205A4: or          $t1, $t2, $zero
        ctx->r9 = ctx->r10 | 0;
            goto L_80020604;
    }
    // 0x800205A4: or          $t1, $t2, $zero
    ctx->r9 = ctx->r10 | 0;
    // 0x800205A8: sll         $t6, $t2, 1
    ctx->r14 = S32(ctx->r10 << 1);
    // 0x800205AC: addu        $t7, $a1, $t6
    ctx->r15 = ADD32(ctx->r5, ctx->r14);
    // 0x800205B0: lhu         $t8, 0x0($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X0);
    // 0x800205B4: or          $t3, $v1, $zero
    ctx->r11 = ctx->r3 | 0;
    // 0x800205B8: slt         $at, $v1, $t8
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x800205BC: beq         $at, $zero, L_80020604
    if (ctx->r1 == 0) {
        // 0x800205C0: sll         $t9, $t1, 1
        ctx->r25 = S32(ctx->r9 << 1);
            goto L_80020604;
    }
    // 0x800205C0: sll         $t9, $t1, 1
    ctx->r25 = S32(ctx->r9 << 1);
    // 0x800205C4: addu        $t4, $a1, $t9
    ctx->r12 = ADD32(ctx->r5, ctx->r25);
    // 0x800205C8: sll         $t6, $t1, 2
    ctx->r14 = S32(ctx->r9 << 2);
    // 0x800205CC: lhu         $t5, 0x0($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0X0);
    // 0x800205D0: addu        $s1, $s0, $t6
    ctx->r17 = ADD32(ctx->r16, ctx->r14);
L_800205D4:
    // 0x800205D4: sh          $t5, 0x2($t4)
    MEM_H(0X2, ctx->r12) = ctx->r13;
    // 0x800205D8: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    // 0x800205DC: addiu       $t1, $t1, -0x1
    ctx->r9 = ADD32(ctx->r9, -0X1);
    // 0x800205E0: addiu       $t4, $t4, -0x2
    ctx->r12 = ADD32(ctx->r12, -0X2);
    // 0x800205E4: addiu       $s1, $s1, -0x4
    ctx->r17 = ADD32(ctx->r17, -0X4);
    // 0x800205E8: bltz        $t1, L_80020604
    if (SIGNED(ctx->r9) < 0) {
        // 0x800205EC: sw          $t7, 0x8($s1)
        MEM_W(0X8, ctx->r17) = ctx->r15;
            goto L_80020604;
    }
    // 0x800205EC: sw          $t7, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r15;
    // 0x800205F0: lhu         $t5, 0x0($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0X0);
    // 0x800205F4: nop

    // 0x800205F8: slt         $at, $t3, $t5
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x800205FC: bne         $at, $zero, L_800205D4
    if (ctx->r1 != 0) {
        // 0x80020600: nop
    
            goto L_800205D4;
    }
    // 0x80020600: nop

L_80020604:
    // 0x80020604: sll         $t8, $t1, 1
    ctx->r24 = S32(ctx->r9 << 1);
    // 0x80020608: addu        $t9, $a1, $t8
    ctx->r25 = ADD32(ctx->r5, ctx->r24);
    // 0x8002060C: sll         $t6, $t1, 2
    ctx->r14 = S32(ctx->r9 << 2);
    // 0x80020610: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80020614: sh          $v1, 0x2($t9)
    MEM_H(0X2, ctx->r25) = ctx->r3;
    // 0x80020618: addu        $t7, $s0, $t6
    ctx->r15 = ADD32(ctx->r16, ctx->r14);
    // 0x8002061C: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x80020620: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x80020624: addiu       $t2, $t2, 0x1
    ctx->r10 = ADD32(ctx->r10, 0X1);
    // 0x80020628: bne         $v0, $a2, L_80020598
    if (ctx->r2 != ctx->r6) {
        // 0x8002062C: sw          $a3, 0x4($t7)
        MEM_W(0X4, ctx->r15) = ctx->r7;
            goto L_80020598;
    }
    // 0x8002062C: sw          $a3, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r7;
L_80020630:
    // 0x80020630: lw          $s0, 0x8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X8);
    // 0x80020634: lw          $s1, 0xC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XC);
    // 0x80020638: jr          $ra
    // 0x8002063C: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x8002063C: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_80020640(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80020640: addiu       $sp, $sp, -0x160
    ctx->r29 = ADD32(ctx->r29, -0X160);
    // 0x80020644: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80020648: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8002064C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80020650: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80020654: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80020658: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8002065C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80020660: or          $s4, $a1, $zero
    ctx->r20 = ctx->r5 | 0;
    // 0x80020664: sw          $a2, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->r6;
    // 0x80020668: addiu       $s1, $a2, -0x1
    ctx->r17 = ADD32(ctx->r6, -0X1);
    // 0x8002066C: or          $ra, $zero, $zero
    ctx->r31 = 0 | 0;
    // 0x80020670: or          $t5, $zero, $zero
    ctx->r13 = 0 | 0;
    // 0x80020674: addiu       $s2, $sp, 0xCC
    ctx->r18 = ADD32(ctx->r29, 0XCC);
    // 0x80020678: addiu       $s3, $sp, 0x4C
    ctx->r19 = ADD32(ctx->r29, 0X4C);
L_8002067C:
    // 0x8002067C: subu        $t6, $s1, $ra
    ctx->r14 = SUB32(ctx->r17, ctx->r31);
    // 0x80020680: slti        $at, $t6, 0xB
    ctx->r1 = SIGNED(ctx->r14) < 0XB ? 1 : 0;
    // 0x80020684: beq         $at, $zero, L_800206B0
    if (ctx->r1 == 0) {
        // 0x80020688: addu        $t9, $ra, $s1
        ctx->r25 = ADD32(ctx->r31, ctx->r17);
            goto L_800206B0;
    }
    // 0x80020688: addu        $t9, $ra, $s1
    ctx->r25 = ADD32(ctx->r31, ctx->r17);
    // 0x8002068C: beq         $t5, $zero, L_800207D8
    if (ctx->r13 == 0) {
        // 0x80020690: addiu       $t5, $t5, -0x1
        ctx->r13 = ADD32(ctx->r13, -0X1);
            goto L_800207D8;
    }
    // 0x80020690: addiu       $t5, $t5, -0x1
    ctx->r13 = ADD32(ctx->r13, -0X1);
    // 0x80020694: sll         $v0, $t5, 2
    ctx->r2 = S32(ctx->r13 << 2);
    // 0x80020698: addu        $t7, $s2, $v0
    ctx->r15 = ADD32(ctx->r18, ctx->r2);
    // 0x8002069C: addu        $t8, $s3, $v0
    ctx->r24 = ADD32(ctx->r19, ctx->r2);
    // 0x800206A0: lw          $ra, 0x0($t7)
    ctx->r31 = MEM_W(ctx->r15, 0X0);
    // 0x800206A4: lw          $s1, 0x0($t8)
    ctx->r17 = MEM_W(ctx->r24, 0X0);
    // 0x800206A8: nop

    // 0x800206AC: addu        $t9, $ra, $s1
    ctx->r25 = ADD32(ctx->r31, ctx->r17);
L_800206B0:
    // 0x800206B0: bgez        $t9, L_800206C0
    if (SIGNED(ctx->r25) >= 0) {
        // 0x800206B4: sra         $t6, $t9, 1
        ctx->r14 = S32(SIGNED(ctx->r25) >> 1);
            goto L_800206C0;
    }
    // 0x800206B4: sra         $t6, $t9, 1
    ctx->r14 = S32(SIGNED(ctx->r25) >> 1);
    // 0x800206B8: addiu       $at, $t9, 0x1
    ctx->r1 = ADD32(ctx->r25, 0X1);
    // 0x800206BC: sra         $t6, $at, 1
    ctx->r14 = S32(SIGNED(ctx->r1) >> 1);
L_800206C0:
    // 0x800206C0: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x800206C4: addu        $t8, $s4, $t7
    ctx->r24 = ADD32(ctx->r20, ctx->r15);
    // 0x800206C8: sll         $t6, $s1, 1
    ctx->r14 = S32(ctx->r17 << 1);
    // 0x800206CC: sll         $t9, $ra, 1
    ctx->r25 = S32(ctx->r31 << 1);
    // 0x800206D0: lhu         $a2, 0x0($t8)
    ctx->r6 = MEM_HU(ctx->r24, 0X0);
    // 0x800206D4: or          $a3, $ra, $zero
    ctx->r7 = ctx->r31 | 0;
    // 0x800206D8: or          $t0, $s1, $zero
    ctx->r8 = ctx->r17 | 0;
    // 0x800206DC: addu        $v1, $s4, $t9
    ctx->r3 = ADD32(ctx->r20, ctx->r25);
    // 0x800206E0: addu        $a0, $s4, $t6
    ctx->r4 = ADD32(ctx->r20, ctx->r14);
L_800206E4:
    // 0x800206E4: lhu         $a1, 0x0($v1)
    ctx->r5 = MEM_HU(ctx->r3, 0X0);
    // 0x800206E8: nop

    // 0x800206EC: slt         $at, $a1, $a2
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x800206F0: beq         $at, $zero, L_8002070C
    if (ctx->r1 == 0) {
        // 0x800206F4: nop
    
            goto L_8002070C;
    }
    // 0x800206F4: nop

L_800206F8:
    // 0x800206F8: lhu         $a1, 0x2($v1)
    ctx->r5 = MEM_HU(ctx->r3, 0X2);
    // 0x800206FC: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x80020700: slt         $at, $a1, $a2
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x80020704: bne         $at, $zero, L_800206F8
    if (ctx->r1 != 0) {
        // 0x80020708: addiu       $v1, $v1, 0x2
        ctx->r3 = ADD32(ctx->r3, 0X2);
            goto L_800206F8;
    }
    // 0x80020708: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
L_8002070C:
    // 0x8002070C: lhu         $v0, 0x0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X0);
    // 0x80020710: sll         $t7, $a3, 2
    ctx->r15 = S32(ctx->r7 << 2);
    // 0x80020714: slt         $at, $a2, $v0
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80020718: beq         $at, $zero, L_80020734
    if (ctx->r1 == 0) {
        // 0x8002071C: addu        $t1, $s0, $t7
        ctx->r9 = ADD32(ctx->r16, ctx->r15);
            goto L_80020734;
    }
    // 0x8002071C: addu        $t1, $s0, $t7
    ctx->r9 = ADD32(ctx->r16, ctx->r15);
L_80020720:
    // 0x80020720: lhu         $v0, -0x2($a0)
    ctx->r2 = MEM_HU(ctx->r4, -0X2);
    // 0x80020724: addiu       $t0, $t0, -0x1
    ctx->r8 = ADD32(ctx->r8, -0X1);
    // 0x80020728: slt         $at, $a2, $v0
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8002072C: bne         $at, $zero, L_80020720
    if (ctx->r1 != 0) {
        // 0x80020730: addiu       $a0, $a0, -0x2
        ctx->r4 = ADD32(ctx->r4, -0X2);
            goto L_80020720;
    }
    // 0x80020730: addiu       $a0, $a0, -0x2
    ctx->r4 = ADD32(ctx->r4, -0X2);
L_80020734:
    // 0x80020734: slt         $at, $a3, $t0
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x80020738: beq         $at, $zero, L_80020770
    if (ctx->r1 == 0) {
        // 0x8002073C: sll         $t8, $t0, 2
        ctx->r24 = S32(ctx->r8 << 2);
            goto L_80020770;
    }
    // 0x8002073C: sll         $t8, $t0, 2
    ctx->r24 = S32(ctx->r8 << 2);
    // 0x80020740: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    // 0x80020744: sh          $a1, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r5;
    // 0x80020748: addu        $t2, $s0, $t8
    ctx->r10 = ADD32(ctx->r16, ctx->r24);
    // 0x8002074C: lw          $t4, 0x0($t1)
    ctx->r12 = MEM_W(ctx->r9, 0X0);
    // 0x80020750: lw          $t9, 0x0($t2)
    ctx->r25 = MEM_W(ctx->r10, 0X0);
    // 0x80020754: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x80020758: sw          $t9, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r25;
    // 0x8002075C: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x80020760: addiu       $t0, $t0, -0x1
    ctx->r8 = ADD32(ctx->r8, -0X1);
    // 0x80020764: addiu       $a0, $a0, -0x2
    ctx->r4 = ADD32(ctx->r4, -0X2);
    // 0x80020768: b           L_800206E4
    // 0x8002076C: sw          $t4, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r12;
        goto L_800206E4;
    // 0x8002076C: sw          $t4, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r12;
L_80020770:
    // 0x80020770: subu        $v0, $s1, $t0
    ctx->r2 = SUB32(ctx->r17, ctx->r8);
    // 0x80020774: subu        $v1, $a3, $ra
    ctx->r3 = SUB32(ctx->r7, ctx->r31);
    // 0x80020778: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8002077C: beq         $at, $zero, L_800207AC
    if (ctx->r1 == 0) {
        // 0x80020780: slti        $at, $v1, 0xB
        ctx->r1 = SIGNED(ctx->r3) < 0XB ? 1 : 0;
            goto L_800207AC;
    }
    // 0x80020780: slti        $at, $v1, 0xB
    ctx->r1 = SIGNED(ctx->r3) < 0XB ? 1 : 0;
    // 0x80020784: bne         $at, $zero, L_800207A4
    if (ctx->r1 != 0) {
        // 0x80020788: sll         $v0, $t5, 2
        ctx->r2 = S32(ctx->r13 << 2);
            goto L_800207A4;
    }
    // 0x80020788: sll         $v0, $t5, 2
    ctx->r2 = S32(ctx->r13 << 2);
    // 0x8002078C: addu        $t6, $s2, $v0
    ctx->r14 = ADD32(ctx->r18, ctx->r2);
    // 0x80020790: sw          $ra, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r31;
    // 0x80020794: addiu       $t7, $a3, -0x1
    ctx->r15 = ADD32(ctx->r7, -0X1);
    // 0x80020798: addu        $t8, $s3, $v0
    ctx->r24 = ADD32(ctx->r19, ctx->r2);
    // 0x8002079C: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x800207A0: addiu       $t5, $t5, 0x1
    ctx->r13 = ADD32(ctx->r13, 0X1);
L_800207A4:
    // 0x800207A4: b           L_8002067C
    // 0x800207A8: addiu       $ra, $t0, 0x1
    ctx->r31 = ADD32(ctx->r8, 0X1);
        goto L_8002067C;
    // 0x800207A8: addiu       $ra, $t0, 0x1
    ctx->r31 = ADD32(ctx->r8, 0X1);
L_800207AC:
    // 0x800207AC: slti        $at, $v0, 0xB
    ctx->r1 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
    // 0x800207B0: bne         $at, $zero, L_800207D0
    if (ctx->r1 != 0) {
        // 0x800207B4: sll         $v0, $t5, 2
        ctx->r2 = S32(ctx->r13 << 2);
            goto L_800207D0;
    }
    // 0x800207B4: sll         $v0, $t5, 2
    ctx->r2 = S32(ctx->r13 << 2);
    // 0x800207B8: addiu       $t9, $t0, 0x1
    ctx->r25 = ADD32(ctx->r8, 0X1);
    // 0x800207BC: addu        $t6, $s2, $v0
    ctx->r14 = ADD32(ctx->r18, ctx->r2);
    // 0x800207C0: sw          $t9, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r25;
    // 0x800207C4: addu        $t7, $s3, $v0
    ctx->r15 = ADD32(ctx->r19, ctx->r2);
    // 0x800207C8: sw          $s1, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r17;
    // 0x800207CC: addiu       $t5, $t5, 0x1
    ctx->r13 = ADD32(ctx->r13, 0X1);
L_800207D0:
    // 0x800207D0: b           L_8002067C
    // 0x800207D4: addiu       $s1, $a3, -0x1
    ctx->r17 = ADD32(ctx->r7, -0X1);
        goto L_8002067C;
    // 0x800207D4: addiu       $s1, $a3, -0x1
    ctx->r17 = ADD32(ctx->r7, -0X1);
L_800207D8:
    // 0x800207D8: lw          $a2, 0x168($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X168);
    // 0x800207DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800207E0: jal         0x80020570
    // 0x800207E4: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    func_80020570(rdram, ctx);
        goto after_0;
    // 0x800207E4: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_0:
    // 0x800207E8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800207EC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800207F0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800207F4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800207F8: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x800207FC: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80020800: jr          $ra
    // 0x80020804: addiu       $sp, $sp, 0x160
    ctx->r29 = ADD32(ctx->r29, 0X160);
    return;
    // 0x80020804: addiu       $sp, $sp, 0x160
    ctx->r29 = ADD32(ctx->r29, 0X160);
;}
RECOMP_FUNC void func_80020808(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80020808: lbu         $v1, 0x2C8($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X2C8);
    // 0x8002080C: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x80020810: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80020814: blez        $v1, L_80020860
    if (SIGNED(ctx->r3) <= 0) {
        // 0x80020818: or          $a2, $v1, $zero
        ctx->r6 = ctx->r3 | 0;
            goto L_80020860;
    }
    // 0x80020818: or          $a2, $v1, $zero
    ctx->r6 = ctx->r3 | 0;
L_8002081C:
    // 0x8002081C: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x80020820: addu        $t7, $a0, $t6
    ctx->r15 = ADD32(ctx->r4, ctx->r14);
    // 0x80020824: lw          $a1, 0x0($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X0);
    // 0x80020828: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8002082C: lbu         $t8, 0x4($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X4);
    // 0x80020830: sll         $t0, $v0, 16
    ctx->r8 = S32(ctx->r2 << 16);
    // 0x80020834: beq         $t8, $zero, L_80020854
    if (ctx->r24 == 0) {
        // 0x80020838: sra         $v0, $t0, 16
        ctx->r2 = S32(SIGNED(ctx->r8) >> 16);
            goto L_80020854;
    }
    // 0x80020838: sra         $v0, $t0, 16
    ctx->r2 = S32(SIGNED(ctx->r8) >> 16);
    // 0x8002083C: lh          $t9, 0x6($a1)
    ctx->r25 = MEM_H(ctx->r5, 0X6);
    // 0x80020840: nop

    // 0x80020844: sh          $t9, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r25;
    // 0x80020848: lbu         $v1, 0x2C8($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X2C8);
    // 0x8002084C: nop

    // 0x80020850: or          $a2, $v1, $zero
    ctx->r6 = ctx->r3 | 0;
L_80020854:
    // 0x80020854: slt         $at, $v0, $a2
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x80020858: bne         $at, $zero, L_8002081C
    if (ctx->r1 != 0) {
        // 0x8002085C: addiu       $a3, $a3, 0x2
        ctx->r7 = ADD32(ctx->r7, 0X2);
            goto L_8002081C;
    }
    // 0x8002085C: addiu       $a3, $a3, 0x2
    ctx->r7 = ADD32(ctx->r7, 0X2);
L_80020860:
    // 0x80020860: jr          $ra
    // 0x80020864: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x80020864: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_80020868(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80020868: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002086C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80020870: lbu         $t6, 0x2C9($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X2C9);
    // 0x80020874: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80020878: bne         $t6, $at, L_800208B8
    if (ctx->r14 != ctx->r1) {
        // 0x8002087C: lui         $a1, 0x801B
        ctx->r5 = S32(0X801B << 16);
            goto L_800208B8;
    }
    // 0x8002087C: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x80020880: addiu       $a1, $a1, -0x4010
    ctx->r5 = ADD32(ctx->r5, -0X4010);
    // 0x80020884: jal         0x80020808
    // 0x80020888: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80020808(rdram, ctx);
        goto after_0;
    // 0x80020888: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8002088C: sll         $t8, $v0, 16
    ctx->r24 = S32(ctx->r2 << 16);
    // 0x80020890: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x80020894: sll         $a2, $v0, 16
    ctx->r6 = S32(ctx->r2 << 16);
    // 0x80020898: sra         $t7, $a2, 16
    ctx->r15 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8002089C: slti        $at, $t9, 0x2
    ctx->r1 = SIGNED(ctx->r25) < 0X2 ? 1 : 0;
    // 0x800208A0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800208A4: bne         $at, $zero, L_800208B8
    if (ctx->r1 != 0) {
        // 0x800208A8: or          $a2, $t7, $zero
        ctx->r6 = ctx->r15 | 0;
            goto L_800208B8;
    }
    // 0x800208A8: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x800208AC: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x800208B0: jal         0x80020640
    // 0x800208B4: addiu       $a1, $a1, -0x4010
    ctx->r5 = ADD32(ctx->r5, -0X4010);
    func_80020640(rdram, ctx);
        goto after_1;
    // 0x800208B4: addiu       $a1, $a1, -0x4010
    ctx->r5 = ADD32(ctx->r5, -0X4010);
    after_1:
L_800208B8:
    // 0x800208B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800208BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800208C0: jr          $ra
    // 0x800208C4: nop

    return;
    // 0x800208C4: nop

;}
RECOMP_FUNC void func_800208C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800208C8: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x800208CC: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800208D0: addiu       $v0, $v0, 0x5760
    ctx->r2 = ADD32(ctx->r2, 0X5760);
    // 0x800208D4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x800208D8: addiu       $a2, $zero, 0x2CC
    ctx->r6 = ADD32(0, 0X2CC);
L_800208DC:
    // 0x800208DC: lbu         $t6, 0x4($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X4);
    // 0x800208E0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x800208E4: beq         $t6, $zero, L_80020924
    if (ctx->r14 == 0) {
        // 0x800208E8: sll         $t4, $v1, 16
        ctx->r12 = S32(ctx->r3 << 16);
            goto L_80020924;
    }
    // 0x800208E8: sll         $t4, $v1, 16
    ctx->r12 = S32(ctx->r3 << 16);
    // 0x800208EC: lbu         $t7, 0x5($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X5);
    // 0x800208F0: nop

    // 0x800208F4: multu       $t7, $a2
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800208F8: mflo        $t8
    ctx->r24 = lo;
    // 0x800208FC: addu        $a0, $t8, $a1
    ctx->r4 = ADD32(ctx->r24, ctx->r5);
    // 0x80020900: lbu         $t9, 0x2C8($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X2C8);
    // 0x80020904: nop

    // 0x80020908: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8002090C: addu        $t1, $a0, $t0
    ctx->r9 = ADD32(ctx->r4, ctx->r8);
    // 0x80020910: sw          $v0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r2;
    // 0x80020914: lbu         $t2, 0x2C8($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0X2C8);
    // 0x80020918: nop

    // 0x8002091C: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x80020920: sb          $t3, 0x2C8($a0)
    MEM_B(0X2C8, ctx->r4) = ctx->r11;
L_80020924:
    // 0x80020924: sra         $v1, $t4, 16
    ctx->r3 = S32(SIGNED(ctx->r12) >> 16);
    // 0x80020928: slti        $at, $v1, 0x2
    ctx->r1 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8002092C: bne         $at, $zero, L_800208DC
    if (ctx->r1 != 0) {
        // 0x80020930: addiu       $v0, $v0, 0x250
        ctx->r2 = ADD32(ctx->r2, 0X250);
            goto L_800208DC;
    }
    // 0x80020930: addiu       $v0, $v0, 0x250
    ctx->r2 = ADD32(ctx->r2, 0X250);
    // 0x80020934: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x80020938: addiu       $v0, $v0, 0x69D4
    ctx->r2 = ADD32(ctx->r2, 0X69D4);
    // 0x8002093C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_80020940:
    // 0x80020940: lbu         $t6, 0x4($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X4);
    // 0x80020944: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80020948: beq         $t6, $zero, L_80020988
    if (ctx->r14 == 0) {
        // 0x8002094C: sll         $t4, $v1, 16
        ctx->r12 = S32(ctx->r3 << 16);
            goto L_80020988;
    }
    // 0x8002094C: sll         $t4, $v1, 16
    ctx->r12 = S32(ctx->r3 << 16);
    // 0x80020950: lbu         $t7, 0x5($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X5);
    // 0x80020954: nop

    // 0x80020958: multu       $t7, $a2
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002095C: mflo        $t8
    ctx->r24 = lo;
    // 0x80020960: addu        $a0, $t8, $a1
    ctx->r4 = ADD32(ctx->r24, ctx->r5);
    // 0x80020964: lbu         $t9, 0x2C8($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X2C8);
    // 0x80020968: nop

    // 0x8002096C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80020970: addu        $t1, $a0, $t0
    ctx->r9 = ADD32(ctx->r4, ctx->r8);
    // 0x80020974: sw          $v0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r2;
    // 0x80020978: lbu         $t2, 0x2C8($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0X2C8);
    // 0x8002097C: nop

    // 0x80020980: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x80020984: sb          $t3, 0x2C8($a0)
    MEM_B(0X2C8, ctx->r4) = ctx->r11;
L_80020988:
    // 0x80020988: sra         $v1, $t4, 16
    ctx->r3 = S32(SIGNED(ctx->r12) >> 16);
    // 0x8002098C: slti        $at, $v1, 0xB0
    ctx->r1 = SIGNED(ctx->r3) < 0XB0 ? 1 : 0;
    // 0x80020990: bne         $at, $zero, L_80020940
    if (ctx->r1 != 0) {
        // 0x80020994: addiu       $v0, $v0, 0x3C
        ctx->r2 = ADD32(ctx->r2, 0X3C);
            goto L_80020940;
    }
    // 0x80020994: addiu       $v0, $v0, 0x3C
    ctx->r2 = ADD32(ctx->r2, 0X3C);
    // 0x80020998: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x8002099C: addiu       $v0, $v0, -0x3888
    ctx->r2 = ADD32(ctx->r2, -0X3888);
    // 0x800209A0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_800209A4:
    // 0x800209A4: lbu         $t6, 0x4($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X4);
    // 0x800209A8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x800209AC: beq         $t6, $zero, L_800209EC
    if (ctx->r14 == 0) {
        // 0x800209B0: sll         $t4, $v1, 16
        ctx->r12 = S32(ctx->r3 << 16);
            goto L_800209EC;
    }
    // 0x800209B0: sll         $t4, $v1, 16
    ctx->r12 = S32(ctx->r3 << 16);
    // 0x800209B4: lbu         $t7, 0x5($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X5);
    // 0x800209B8: nop

    // 0x800209BC: multu       $t7, $a2
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800209C0: mflo        $t8
    ctx->r24 = lo;
    // 0x800209C4: addu        $a0, $t8, $a1
    ctx->r4 = ADD32(ctx->r24, ctx->r5);
    // 0x800209C8: lbu         $t9, 0x2C8($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X2C8);
    // 0x800209CC: nop

    // 0x800209D0: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x800209D4: addu        $t1, $a0, $t0
    ctx->r9 = ADD32(ctx->r4, ctx->r8);
    // 0x800209D8: sw          $v0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r2;
    // 0x800209DC: lbu         $t2, 0x2C8($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0X2C8);
    // 0x800209E0: nop

    // 0x800209E4: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x800209E8: sb          $t3, 0x2C8($a0)
    MEM_B(0X2C8, ctx->r4) = ctx->r11;
L_800209EC:
    // 0x800209EC: sra         $v1, $t4, 16
    ctx->r3 = S32(SIGNED(ctx->r12) >> 16);
    // 0x800209F0: slti        $at, $v1, 0x40
    ctx->r1 = SIGNED(ctx->r3) < 0X40 ? 1 : 0;
    // 0x800209F4: bne         $at, $zero, L_800209A4
    if (ctx->r1 != 0) {
        // 0x800209F8: addiu       $v0, $v0, 0x20
        ctx->r2 = ADD32(ctx->r2, 0X20);
            goto L_800209A4;
    }
    // 0x800209F8: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
    // 0x800209FC: jr          $ra
    // 0x80020A00: nop

    return;
    // 0x80020A00: nop

;}
RECOMP_FUNC void func_80020A04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80020A04: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80020A08:
    // 0x80020A08: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80020A0C: sll         $t6, $v0, 16
    ctx->r14 = S32(ctx->r2 << 16);
    // 0x80020A10: sra         $v0, $t6, 16
    ctx->r2 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80020A14: slti        $at, $v0, 0xC
    ctx->r1 = SIGNED(ctx->r2) < 0XC ? 1 : 0;
    // 0x80020A18: addiu       $a0, $a0, 0x2CC
    ctx->r4 = ADD32(ctx->r4, 0X2CC);
    // 0x80020A1C: bne         $at, $zero, L_80020A08
    if (ctx->r1 != 0) {
        // 0x80020A20: sb          $zero, -0x4($a0)
        MEM_B(-0X4, ctx->r4) = 0;
            goto L_80020A08;
    }
    // 0x80020A20: sb          $zero, -0x4($a0)
    MEM_B(-0X4, ctx->r4) = 0;
    // 0x80020A24: jr          $ra
    // 0x80020A28: nop

    return;
    // 0x80020A28: nop

;}
RECOMP_FUNC void func_80020A2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80020A2C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80020A30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80020A34: jal         0x800218E0
    // 0x80020A38: addiu       $a1, $zero, 0x2190
    ctx->r5 = ADD32(0, 0X2190);
    func_800218E0(rdram, ctx);
        goto after_0;
    // 0x80020A38: addiu       $a1, $zero, 0x2190
    ctx->r5 = ADD32(0, 0X2190);
    after_0:
    // 0x80020A3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80020A40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80020A44: jr          $ra
    // 0x80020A48: nop

    return;
    // 0x80020A48: nop

;}
RECOMP_FUNC void func_80020A4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80020A4C: lui         $a1, 0x2
    ctx->r5 = S32(0X2 << 16);
    // 0x80020A50: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x80020A54: addiu       $v1, $v1, -0x3770
    ctx->r3 = ADD32(ctx->r3, -0X3770);
    // 0x80020A58: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x80020A5C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80020A60: addiu       $a0, $zero, 0x2CC
    ctx->r4 = ADD32(0, 0X2CC);
L_80020A64:
    // 0x80020A64: multu       $v0, $a0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80020A68: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80020A6C: sll         $t9, $v0, 16
    ctx->r25 = S32(ctx->r2 << 16);
    // 0x80020A70: sra         $v0, $t9, 16
    ctx->r2 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80020A74: slti        $at, $v0, 0xC
    ctx->r1 = SIGNED(ctx->r2) < 0XC ? 1 : 0;
    // 0x80020A78: mflo        $t6
    ctx->r14 = lo;
    // 0x80020A7C: addu        $t7, $v1, $t6
    ctx->r15 = ADD32(ctx->r3, ctx->r14);
    // 0x80020A80: addu        $t8, $t7, $a1
    ctx->r24 = ADD32(ctx->r15, ctx->r5);
    // 0x80020A84: bne         $at, $zero, L_80020A64
    if (ctx->r1 != 0) {
        // 0x80020A88: sb          $zero, 0x4D4D($t8)
        MEM_B(0X4D4D, ctx->r24) = 0;
            goto L_80020A64;
    }
    // 0x80020A88: sb          $zero, 0x4D4D($t8)
    MEM_B(0X4D4D, ctx->r24) = 0;
    // 0x80020A8C: jr          $ra
    // 0x80020A90: nop

    return;
    // 0x80020A90: nop

    // 0x80020A94: nop

    // 0x80020A98: nop

    // 0x80020A9C: nop

;}
RECOMP_FUNC void func_80020AA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80020AA0: andi        $v0, $a2, 0xFFFF
    ctx->r2 = ctx->r6 & 0XFFFF;
    // 0x80020AA4: slti        $at, $v0, 0x101
    ctx->r1 = SIGNED(ctx->r2) < 0X101 ? 1 : 0;
    // 0x80020AA8: bne         $at, $zero, L_80020AB8
    if (ctx->r1 != 0) {
        // 0x80020AAC: sw          $a2, 0x8($sp)
        MEM_W(0X8, ctx->r29) = ctx->r6;
            goto L_80020AB8;
    }
    // 0x80020AAC: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x80020AB0: jr          $ra
    // 0x80020AB4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80020AB4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80020AB8:
    // 0x80020AB8: blez        $v0, L_80020AE4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80020ABC: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_80020AE4;
    }
    // 0x80020ABC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_80020AC0:
    // 0x80020AC0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80020AC4: sll         $t8, $v1, 16
    ctx->r24 = S32(ctx->r3 << 16);
    // 0x80020AC8: lhu         $t7, 0x0($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X0);
    // 0x80020ACC: sra         $v1, $t8, 16
    ctx->r3 = S32(SIGNED(ctx->r24) >> 16);
    // 0x80020AD0: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80020AD4: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x80020AD8: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x80020ADC: bne         $at, $zero, L_80020AC0
    if (ctx->r1 != 0) {
        // 0x80020AE0: sh          $t7, -0x2($a1)
        MEM_H(-0X2, ctx->r5) = ctx->r15;
            goto L_80020AC0;
    }
    // 0x80020AE0: sh          $t7, -0x2($a1)
    MEM_H(-0X2, ctx->r5) = ctx->r15;
L_80020AE4:
    // 0x80020AE4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80020AE8: jr          $ra
    // 0x80020AEC: nop

    return;
    // 0x80020AEC: nop

;}
RECOMP_FUNC void func_80020AF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80020AF0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80020AF4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80020AF8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80020AFC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80020B00: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80020B04: lhu         $t6, 0x12($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X12);
    // 0x80020B08: lhu         $t9, 0x16($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X16);
    // 0x80020B0C: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x80020B10: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80020B14: lw          $t8, -0x48E8($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X48E8);
    // 0x80020B18: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80020B1C: lui         $s0, 0x8011
    ctx->r16 = S32(0X8011 << 16);
    // 0x80020B20: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80020B24: andi        $t1, $t9, 0x8000
    ctx->r9 = ctx->r25 & 0X8000;
    // 0x80020B28: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x80020B2C: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x80020B30: addiu       $s0, $s0, -0x4B48
    ctx->r16 = ADD32(ctx->r16, -0X4B48);
    // 0x80020B34: beq         $t1, $zero, L_80020B4C
    if (ctx->r9 == 0) {
        // 0x80020B38: addu        $v1, $t7, $t8
        ctx->r3 = ADD32(ctx->r15, ctx->r24);
            goto L_80020B4C;
    }
    // 0x80020B38: addu        $v1, $t7, $t8
    ctx->r3 = ADD32(ctx->r15, ctx->r24);
    // 0x80020B3C: jal         0x80020E04
    // 0x80020B40: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    func_80020E04(rdram, ctx);
        goto after_0;
    // 0x80020B40: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    after_0:
    // 0x80020B44: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x80020B48: nop

L_80020B4C:
    // 0x80020B4C: lbu         $v0, 0x4($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X4);
    // 0x80020B50: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80020B54: andi        $t2, $v0, 0x18
    ctx->r10 = ctx->r2 & 0X18;
    // 0x80020B58: beq         $t2, $zero, L_80020B74
    if (ctx->r10 == 0) {
        // 0x80020B5C: lui         $a0, 0x2
        ctx->r4 = S32(0X2 << 16);
            goto L_80020B74;
    }
    // 0x80020B5C: lui         $a0, 0x2
    ctx->r4 = S32(0X2 << 16);
    // 0x80020B60: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x80020B64: beq         $t2, $at, L_80020C5C
    if (ctx->r10 == ctx->r1) {
        // 0x80020B68: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80020C5C;
    }
    // 0x80020B68: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80020B6C: b           L_80020C78
    // 0x80020B70: nop

        goto L_80020C78;
    // 0x80020B70: nop

L_80020B74:
    // 0x80020B74: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x80020B78: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x80020B7C: ori         $a0, $a0, 0x8000
    ctx->r4 = ctx->r4 | 0X8000;
L_80020B80:
    // 0x80020B80: sll         $t3, $v1, 1
    ctx->r11 = S32(ctx->r3 << 1);
    // 0x80020B84: addu        $t4, $v0, $t3
    ctx->r12 = ADD32(ctx->r2, ctx->r11);
    // 0x80020B88: addu        $a3, $t4, $a0
    ctx->r7 = ADD32(ctx->r12, ctx->r4);
    // 0x80020B8C: lhu         $a1, 0x6E28($a3)
    ctx->r5 = MEM_HU(ctx->r7, 0X6E28);
    // 0x80020B90: sll         $t5, $v1, 2
    ctx->r13 = S32(ctx->r3 << 2);
    // 0x80020B94: beq         $a1, $zero, L_80020BAC
    if (ctx->r5 == 0) {
        // 0x80020B98: addu        $t6, $v0, $t5
        ctx->r14 = ADD32(ctx->r2, ctx->r13);
            goto L_80020BAC;
    }
    // 0x80020B98: addu        $t6, $v0, $t5
    ctx->r14 = ADD32(ctx->r2, ctx->r13);
    // 0x80020B9C: addu        $t7, $t6, $a0
    ctx->r15 = ADD32(ctx->r14, ctx->r4);
    // 0x80020BA0: lw          $t8, 0x6E48($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X6E48);
    // 0x80020BA4: nop

    // 0x80020BA8: bne         $s1, $t8, L_80020C18
    if (ctx->r17 != ctx->r24) {
        // 0x80020BAC: sll         $t9, $v1, 2
        ctx->r25 = S32(ctx->r3 << 2);
            goto L_80020C18;
    }
L_80020BAC:
    // 0x80020BAC: sll         $t9, $v1, 2
    ctx->r25 = S32(ctx->r3 << 2);
    // 0x80020BB0: addu        $t1, $v0, $t9
    ctx->r9 = ADD32(ctx->r2, ctx->r25);
    // 0x80020BB4: addu        $t0, $t1, $a0
    ctx->r8 = ADD32(ctx->r9, ctx->r4);
    // 0x80020BB8: lw          $t2, 0x6E48($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X6E48);
    // 0x80020BBC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80020BC0: beq         $s1, $t2, L_80020BF0
    if (ctx->r17 == ctx->r10) {
        // 0x80020BC4: addiu       $a2, $zero, 0x10
        ctx->r6 = ADD32(0, 0X10);
            goto L_80020BF0;
    }
    // 0x80020BC4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80020BC8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80020BCC: sh          $v1, 0x46($sp)
    MEM_H(0X46, ctx->r29) = ctx->r3;
    // 0x80020BD0: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x80020BD4: jal         0x80020AA0
    // 0x80020BD8: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    func_80020AA0(rdram, ctx);
        goto after_1;
    // 0x80020BD8: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    after_1:
    // 0x80020BDC: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x80020BE0: lh          $v1, 0x46($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X46);
    // 0x80020BE4: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80020BE8: lhu         $a1, 0x6E28($a3)
    ctx->r5 = MEM_HU(ctx->r7, 0X6E28);
    // 0x80020BEC: nop

L_80020BF0:
    // 0x80020BF0: addiu       $t3, $a1, 0x1
    ctx->r11 = ADD32(ctx->r5, 0X1);
    // 0x80020BF4: sh          $t3, 0x6E28($a3)
    MEM_H(0X6E28, ctx->r7) = ctx->r11;
    // 0x80020BF8: sw          $s1, 0x6E48($t0)
    MEM_W(0X6E48, ctx->r8) = ctx->r17;
    // 0x80020BFC: lhu         $t4, 0x16($s2)
    ctx->r12 = MEM_HU(ctx->r18, 0X16);
    // 0x80020C00: sb          $v1, 0xC($s2)
    MEM_B(0XC, ctx->r18) = ctx->r3;
    // 0x80020C04: ori         $t5, $t4, 0x8000
    ctx->r13 = ctx->r12 | 0X8000;
    // 0x80020C08: sw          $s1, 0x34($s2)
    MEM_W(0X34, ctx->r18) = ctx->r17;
    // 0x80020C0C: sh          $t5, 0x16($s2)
    MEM_H(0X16, ctx->r18) = ctx->r13;
    // 0x80020C10: b           L_80020C78
    // 0x80020C14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80020C78;
    // 0x80020C14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80020C18:
    // 0x80020C18: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80020C1C: sll         $t6, $v1, 16
    ctx->r14 = S32(ctx->r3 << 16);
    // 0x80020C20: sra         $v1, $t6, 16
    ctx->r3 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80020C24: slti        $at, $v1, 0xF
    ctx->r1 = SIGNED(ctx->r3) < 0XF ? 1 : 0;
    // 0x80020C28: bne         $at, $zero, L_80020B80
    if (ctx->r1 != 0) {
        // 0x80020C2C: addiu       $s0, $s0, 0x20
        ctx->r16 = ADD32(ctx->r16, 0X20);
            goto L_80020B80;
    }
    // 0x80020C2C: addiu       $s0, $s0, 0x20
    ctx->r16 = ADD32(ctx->r16, 0X20);
    // 0x80020C30: lui         $v1, 0x8010
    ctx->r3 = S32(0X8010 << 16);
    // 0x80020C34: addiu       $v1, $v1, 0x4890
    ctx->r3 = ADD32(ctx->r3, 0X4890);
    // 0x80020C38: lhu         $t8, 0x6E46($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X6E46);
    // 0x80020C3C: sw          $s1, 0x6E84($v1)
    MEM_W(0X6E84, ctx->r3) = ctx->r17;
    // 0x80020C40: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80020C44: sh          $t9, 0x6E46($v1)
    MEM_H(0X6E46, ctx->r3) = ctx->r25;
    // 0x80020C48: addiu       $t1, $zero, 0xF
    ctx->r9 = ADD32(0, 0XF);
    // 0x80020C4C: sb          $t1, 0xC($s2)
    MEM_B(0XC, ctx->r18) = ctx->r9;
    // 0x80020C50: sw          $s1, 0x34($s2)
    MEM_W(0X34, ctx->r18) = ctx->r17;
    // 0x80020C54: b           L_80020C78
    // 0x80020C58: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80020C78;
    // 0x80020C58: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80020C5C:
    // 0x80020C5C: lhu         $t2, 0x16($s2)
    ctx->r10 = MEM_HU(ctx->r18, 0X16);
    // 0x80020C60: sb          $zero, 0xC($s2)
    MEM_B(0XC, ctx->r18) = 0;
    // 0x80020C64: ori         $t3, $t2, 0x8000
    ctx->r11 = ctx->r10 | 0X8000;
    // 0x80020C68: sw          $s1, 0x34($s2)
    MEM_W(0X34, ctx->r18) = ctx->r17;
    // 0x80020C6C: sh          $t3, 0x16($s2)
    MEM_H(0X16, ctx->r18) = ctx->r11;
    // 0x80020C70: b           L_80020C78
    // 0x80020C74: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80020C78;
    // 0x80020C74: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80020C78:
    // 0x80020C78: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80020C7C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80020C80: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80020C84: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80020C88: jr          $ra
    // 0x80020C8C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80020C8C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80020CE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80020CE0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80020CE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80020CE8: lhu         $t6, 0x12($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X12);
    // 0x80020CEC: lhu         $t9, 0x16($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X16);
    // 0x80020CF0: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x80020CF4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80020CF8: lw          $t8, -0x48E8($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X48E8);
    // 0x80020CFC: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80020D00: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80020D04: andi        $t1, $t9, 0x8000
    ctx->r9 = ctx->r25 & 0X8000;
    // 0x80020D08: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80020D0C: beq         $t1, $zero, L_80020DF0
    if (ctx->r9 == 0) {
        // 0x80020D10: addu        $v0, $t7, $t8
        ctx->r2 = ADD32(ctx->r15, ctx->r24);
            goto L_80020DF0;
    }
    // 0x80020D10: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x80020D14: lhu         $t2, 0x16($a1)
    ctx->r10 = MEM_HU(ctx->r5, 0X16);
    // 0x80020D18: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80020D1C: andi        $t3, $t2, 0x8000
    ctx->r11 = ctx->r10 & 0X8000;
    // 0x80020D20: beq         $t3, $zero, L_80020D48
    if (ctx->r11 == 0) {
        // 0x80020D24: nop
    
            goto L_80020D48;
    }
    // 0x80020D24: nop

    // 0x80020D28: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80020D2C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80020D30: jal         0x80020E04
    // 0x80020D34: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_80020E04(rdram, ctx);
        goto after_0;
    // 0x80020D34: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x80020D38: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x80020D3C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x80020D40: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x80020D44: nop

L_80020D48:
    // 0x80020D48: lbu         $v1, 0x4($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X4);
    // 0x80020D4C: lui         $a3, 0x800E
    ctx->r7 = S32(0X800E << 16);
    // 0x80020D50: andi        $t4, $v1, 0x18
    ctx->r12 = ctx->r3 & 0X18;
    // 0x80020D54: beq         $t4, $zero, L_80020D70
    if (ctx->r12 == 0) {
        // 0x80020D58: addiu       $a3, $a3, -0x3770
        ctx->r7 = ADD32(ctx->r7, -0X3770);
            goto L_80020D70;
    }
    // 0x80020D58: addiu       $a3, $a3, -0x3770
    ctx->r7 = ADD32(ctx->r7, -0X3770);
    // 0x80020D5C: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x80020D60: beq         $t4, $at, L_80020DCC
    if (ctx->r12 == ctx->r1) {
        // 0x80020D64: nop
    
            goto L_80020DCC;
    }
    // 0x80020D64: nop

    // 0x80020D68: b           L_80020DF4
    // 0x80020D6C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80020DF4;
    // 0x80020D6C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80020D70:
    // 0x80020D70: lbu         $t5, 0xC($a2)
    ctx->r13 = MEM_BU(ctx->r6, 0XC);
    // 0x80020D74: lui         $t0, 0x2
    ctx->r8 = S32(0X2 << 16);
    // 0x80020D78: sb          $t5, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r13;
    // 0x80020D7C: lbu         $t6, 0xC($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0XC);
    // 0x80020D80: ori         $t0, $t0, 0x8000
    ctx->r8 = ctx->r8 | 0X8000;
    // 0x80020D84: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x80020D88: addu        $t8, $a3, $t7
    ctx->r24 = ADD32(ctx->r7, ctx->r15);
    // 0x80020D8C: addu        $a0, $t8, $t0
    ctx->r4 = ADD32(ctx->r24, ctx->r8);
    // 0x80020D90: lhu         $t9, 0x6E28($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X6E28);
    // 0x80020D94: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80020D98: addiu       $t1, $t9, 0x1
    ctx->r9 = ADD32(ctx->r25, 0X1);
    // 0x80020D9C: sh          $t1, 0x6E28($a0)
    MEM_H(0X6E28, ctx->r4) = ctx->r9;
    // 0x80020DA0: lbu         $t2, 0xC($a1)
    ctx->r10 = MEM_BU(ctx->r5, 0XC);
    // 0x80020DA4: lw          $v1, 0x34($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X34);
    // 0x80020DA8: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80020DAC: addu        $t4, $a3, $t3
    ctx->r12 = ADD32(ctx->r7, ctx->r11);
    // 0x80020DB0: addu        $t5, $t4, $t0
    ctx->r13 = ADD32(ctx->r12, ctx->r8);
    // 0x80020DB4: sw          $v1, 0x6E48($t5)
    MEM_W(0X6E48, ctx->r13) = ctx->r3;
    // 0x80020DB8: lhu         $t6, 0x16($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X16);
    // 0x80020DBC: sw          $v1, 0x34($a1)
    MEM_W(0X34, ctx->r5) = ctx->r3;
    // 0x80020DC0: ori         $t7, $t6, 0x8000
    ctx->r15 = ctx->r14 | 0X8000;
    // 0x80020DC4: b           L_80020DF4
    // 0x80020DC8: sh          $t7, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r15;
        goto L_80020DF4;
    // 0x80020DC8: sh          $t7, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r15;
L_80020DCC:
    // 0x80020DCC: lbu         $t8, 0xC($a2)
    ctx->r24 = MEM_BU(ctx->r6, 0XC);
    // 0x80020DD0: lhu         $t1, 0x16($a1)
    ctx->r9 = MEM_HU(ctx->r5, 0X16);
    // 0x80020DD4: sb          $t8, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r24;
    // 0x80020DD8: lw          $t9, 0x34($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X34);
    // 0x80020DDC: ori         $t2, $t1, 0x8000
    ctx->r10 = ctx->r9 | 0X8000;
    // 0x80020DE0: sh          $t2, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r10;
    // 0x80020DE4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80020DE8: b           L_80020DF4
    // 0x80020DEC: sw          $t9, 0x34($a1)
    MEM_W(0X34, ctx->r5) = ctx->r25;
        goto L_80020DF4;
    // 0x80020DEC: sw          $t9, 0x34($a1)
    MEM_W(0X34, ctx->r5) = ctx->r25;
L_80020DF0:
    // 0x80020DF0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80020DF4:
    // 0x80020DF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80020DF8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80020DFC: jr          $ra
    // 0x80020E00: nop

    return;
    // 0x80020E00: nop

;}
RECOMP_FUNC void func_80020E04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80020E04: lhu         $t6, 0x12($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X12);
    // 0x80020E08: lhu         $v1, 0x16($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X16);
    // 0x80020E0C: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x80020E10: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80020E14: lw          $t8, -0x48E8($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X48E8);
    // 0x80020E18: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80020E1C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80020E20: andi        $t9, $v1, 0x8000
    ctx->r25 = ctx->r3 & 0X8000;
    // 0x80020E24: beq         $t9, $zero, L_80020ECC
    if (ctx->r25 == 0) {
        // 0x80020E28: addu        $v0, $t7, $t8
        ctx->r2 = ADD32(ctx->r15, ctx->r24);
            goto L_80020ECC;
    }
    // 0x80020E28: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x80020E2C: lbu         $a1, 0x4($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X4);
    // 0x80020E30: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x80020E34: andi        $t0, $a1, 0x18
    ctx->r8 = ctx->r5 & 0X18;
    // 0x80020E38: beq         $t0, $zero, L_80020E54
    if (ctx->r8 == 0) {
        // 0x80020E3C: addiu       $t3, $t3, -0x3770
        ctx->r11 = ADD32(ctx->r11, -0X3770);
            goto L_80020E54;
    }
    // 0x80020E3C: addiu       $t3, $t3, -0x3770
    ctx->r11 = ADD32(ctx->r11, -0X3770);
    // 0x80020E40: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x80020E44: beq         $t0, $at, L_80020EB8
    if (ctx->r8 == ctx->r1) {
        // 0x80020E48: addiu       $t7, $zero, 0xFF
        ctx->r15 = ADD32(0, 0XFF);
            goto L_80020EB8;
    }
    // 0x80020E48: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x80020E4C: b           L_80020ED0
    // 0x80020E50: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80020ED0;
    // 0x80020E50: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80020E54:
    // 0x80020E54: lbu         $a1, 0xC($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0XC);
    // 0x80020E58: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x80020E5C: slti        $at, $a1, 0x10
    ctx->r1 = SIGNED(ctx->r5) < 0X10 ? 1 : 0;
    // 0x80020E60: bne         $at, $zero, L_80020E74
    if (ctx->r1 != 0) {
        // 0x80020E64: andi        $a2, $a1, 0xFF
        ctx->r6 = ctx->r5 & 0XFF;
            goto L_80020E74;
    }
    // 0x80020E64: andi        $a2, $a1, 0xFF
    ctx->r6 = ctx->r5 & 0XFF;
    // 0x80020E68: lbu         $a2, 0x5($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X5);
    // 0x80020E6C: b           L_80020E78
    // 0x80020E70: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
        goto L_80020E78;
    // 0x80020E70: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
L_80020E74:
    // 0x80020E74: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
L_80020E78:
    // 0x80020E78: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x80020E7C: sll         $t1, $a2, 1
    ctx->r9 = S32(ctx->r6 << 1);
    // 0x80020E80: addu        $t2, $t1, $at
    ctx->r10 = ADD32(ctx->r9, ctx->r1);
    // 0x80020E84: addu        $v0, $t2, $t3
    ctx->r2 = ADD32(ctx->r10, ctx->r11);
    // 0x80020E88: lhu         $a1, 0x6E28($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X6E28);
    // 0x80020E8C: nop

    // 0x80020E90: blez        $a1, L_80020EA4
    if (SIGNED(ctx->r5) <= 0) {
        // 0x80020E94: addiu       $t4, $a1, -0x1
        ctx->r12 = ADD32(ctx->r5, -0X1);
            goto L_80020EA4;
    }
    // 0x80020E94: addiu       $t4, $a1, -0x1
    ctx->r12 = ADD32(ctx->r5, -0X1);
    // 0x80020E98: sh          $t4, 0x6E28($v0)
    MEM_H(0X6E28, ctx->r2) = ctx->r12;
    // 0x80020E9C: lhu         $v1, 0x16($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X16);
    // 0x80020EA0: nop

L_80020EA4:
    // 0x80020EA4: andi        $t6, $v1, 0x7FFF
    ctx->r14 = ctx->r3 & 0X7FFF;
    // 0x80020EA8: sb          $t5, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r13;
    // 0x80020EAC: sh          $t6, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r14;
    // 0x80020EB0: jr          $ra
    // 0x80020EB4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80020EB4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80020EB8:
    // 0x80020EB8: andi        $t8, $v1, 0x7FFF
    ctx->r24 = ctx->r3 & 0X7FFF;
    // 0x80020EBC: sb          $t7, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r15;
    // 0x80020EC0: sh          $t8, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r24;
    // 0x80020EC4: jr          $ra
    // 0x80020EC8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80020EC8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80020ECC:
    // 0x80020ECC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80020ED0:
    // 0x80020ED0: jr          $ra
    // 0x80020ED4: nop

    return;
    // 0x80020ED4: nop

;}
RECOMP_FUNC void func_80020F44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80020F44: andi        $t8, $a1, 0xFFFF
    ctx->r24 = ctx->r5 & 0XFFFF;
    // 0x80020F48: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x80020F4C: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x80020F50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80020F54: sll         $t6, $t8, 2
    ctx->r14 = S32(ctx->r24 << 2);
    // 0x80020F58: addu        $t7, $v0, $t6
    ctx->r15 = ADD32(ctx->r2, ctx->r14);
    // 0x80020F5C: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x80020F60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80020F64: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80020F68: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80020F6C: sw          $a0, -0x11B8($at)
    MEM_W(-0X11B8, ctx->r1) = ctx->r4;
    // 0x80020F70: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x80020F74: sll         $t9, $t8, 5
    ctx->r25 = S32(ctx->r24 << 5);
    // 0x80020F78: addu        $a1, $v0, $t9
    ctx->r5 = ADD32(ctx->r2, ctx->r25);
    // 0x80020F7C: ori         $at, $at, 0xEC28
    ctx->r1 = ctx->r1 | 0XEC28;
    // 0x80020F80: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x80020F84: jal         0x80020AA0
    // 0x80020F88: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    func_80020AA0(rdram, ctx);
        goto after_0;
    // 0x80020F88: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_0:
    // 0x80020F8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80020F90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80020F94: jr          $ra
    // 0x80020F98: nop

    return;
    // 0x80020F98: nop

;}
RECOMP_FUNC void func_80021004(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80021004: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80021008: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8002100C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80021010: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_80021014:
    // 0x80021014: jal         0x80021044
    // 0x80021018: andi        $a0, $s0, 0xFFFF
    ctx->r4 = ctx->r16 & 0XFFFF;
    func_80021044(rdram, ctx);
        goto after_0;
    // 0x80021018: andi        $a0, $s0, 0xFFFF
    ctx->r4 = ctx->r16 & 0XFFFF;
    after_0:
    // 0x8002101C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80021020: sll         $t6, $s0, 16
    ctx->r14 = S32(ctx->r16 << 16);
    // 0x80021024: sra         $s0, $t6, 16
    ctx->r16 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80021028: slti        $at, $s0, 0x10
    ctx->r1 = SIGNED(ctx->r16) < 0X10 ? 1 : 0;
    // 0x8002102C: bne         $at, $zero, L_80021014
    if (ctx->r1 != 0) {
        // 0x80021030: nop
    
            goto L_80021014;
    }
    // 0x80021030: nop

    // 0x80021034: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80021038: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8002103C: jr          $ra
    // 0x80021040: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80021040: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80021044(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80021044: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x80021048: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x8002104C: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x80021050: lui         $v1, 0x2
    ctx->r3 = S32(0X2 << 16);
    // 0x80021054: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x80021058: ori         $v1, $v1, 0x8000
    ctx->r3 = ctx->r3 | 0X8000;
    // 0x8002105C: addu        $t8, $v0, $t7
    ctx->r24 = ADD32(ctx->r2, ctx->r15);
    // 0x80021060: sll         $t0, $t6, 2
    ctx->r8 = S32(ctx->r14 << 2);
    // 0x80021064: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80021068: addu        $t9, $t8, $v1
    ctx->r25 = ADD32(ctx->r24, ctx->r3);
    // 0x8002106C: addu        $t1, $v0, $t0
    ctx->r9 = ADD32(ctx->r2, ctx->r8);
    // 0x80021070: sh          $zero, 0x6E28($t9)
    MEM_H(0X6E28, ctx->r25) = 0;
    // 0x80021074: addu        $t2, $t1, $v1
    ctx->r10 = ADD32(ctx->r9, ctx->r3);
    // 0x80021078: jr          $ra
    // 0x8002107C: sw          $zero, 0x6E48($t2)
    MEM_W(0X6E48, ctx->r10) = 0;
    return;
    // 0x8002107C: sw          $zero, 0x6E48($t2)
    MEM_W(0X6E48, ctx->r10) = 0;
;}
RECOMP_FUNC void func_80021214(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80021214: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80021218: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8002121C: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x80021220: andi        $t7, $a2, 0xFF
    ctx->r15 = ctx->r6 & 0XFF;
    // 0x80021224: addiu       $at, $zero, 0xFE
    ctx->r1 = ADD32(0, 0XFE);
    // 0x80021228: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x8002122C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80021230: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80021234: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80021238: andi        $a3, $a0, 0xFF
    ctx->r7 = ctx->r4 & 0XFF;
    // 0x8002123C: beq         $t6, $at, L_80021258
    if (ctx->r14 == ctx->r1) {
        // 0x80021240: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_80021258;
    }
    // 0x80021240: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x80021244: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x80021248: beq         $t6, $at, L_800212EC
    if (ctx->r14 == ctx->r1) {
        // 0x8002124C: sll         $t7, $a3, 2
        ctx->r15 = S32(ctx->r7 << 2);
            goto L_800212EC;
    }
    // 0x8002124C: sll         $t7, $a3, 2
    ctx->r15 = S32(ctx->r7 << 2);
    // 0x80021250: b           L_800212B4
    // 0x80021254: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
        goto L_800212B4;
    // 0x80021254: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
L_80021258:
    // 0x80021258: lui         $a0, 0x2
    ctx->r4 = S32(0X2 << 16);
    // 0x8002125C: ori         $a0, $a0, 0x8000
    ctx->r4 = ctx->r4 | 0X8000;
    // 0x80021260: sll         $t8, $a2, 2
    ctx->r24 = S32(ctx->r6 << 2);
    // 0x80021264: addu        $t9, $t8, $a0
    ctx->r25 = ADD32(ctx->r24, ctx->r4);
    // 0x80021268: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8002126C: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x80021270: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80021274: addiu       $t2, $t2, -0x3770
    ctx->r10 = ADD32(ctx->r10, -0X3770);
    // 0x80021278: sll         $t1, $a2, 5
    ctx->r9 = S32(ctx->r6 << 5);
    // 0x8002127C: sw          $zero, 0x36D8($at)
    MEM_W(0X36D8, ctx->r1) = 0;
    // 0x80021280: addu        $v1, $t1, $t2
    ctx->r3 = ADD32(ctx->r9, ctx->r10);
    // 0x80021284: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80021288:
    // 0x80021288: sll         $t3, $v0, 1
    ctx->r11 = S32(ctx->r2 << 1);
    // 0x8002128C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80021290: andi        $t6, $v0, 0xFF
    ctx->r14 = ctx->r2 & 0XFF;
    // 0x80021294: addu        $t4, $v1, $t3
    ctx->r12 = ADD32(ctx->r3, ctx->r11);
    // 0x80021298: slti        $at, $t6, 0x10
    ctx->r1 = SIGNED(ctx->r14) < 0X10 ? 1 : 0;
    // 0x8002129C: addu        $t5, $t4, $a0
    ctx->r13 = ADD32(ctx->r12, ctx->r4);
    // 0x800212A0: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x800212A4: bne         $at, $zero, L_80021288
    if (ctx->r1 != 0) {
        // 0x800212A8: sh          $zero, 0x6C28($t5)
        MEM_H(0X6C28, ctx->r13) = 0;
            goto L_80021288;
    }
    // 0x800212A8: sh          $zero, 0x6C28($t5)
    MEM_H(0X6C28, ctx->r13) = 0;
    // 0x800212AC: b           L_800212F0
    // 0x800212B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800212F0;
    // 0x800212B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800212B4:
    // 0x800212B4: andi        $t9, $v0, 0xF0
    ctx->r25 = ctx->r2 & 0XF0;
    // 0x800212B8: sra         $t0, $t9, 4
    ctx->r8 = S32(SIGNED(ctx->r25) >> 4);
    // 0x800212BC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800212C0: lw          $t8, 0x4830($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X4830);
    // 0x800212C4: andi        $t1, $t0, 0xFF
    ctx->r9 = ctx->r8 & 0XFF;
    // 0x800212C8: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x800212CC: sll         $t6, $v0, 4
    ctx->r14 = S32(ctx->r2 << 4);
    // 0x800212D0: addu        $t3, $t8, $t2
    ctx->r11 = ADD32(ctx->r24, ctx->r10);
    // 0x800212D4: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x800212D8: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x800212DC: sll         $t9, $t7, 1
    ctx->r25 = S32(ctx->r15 << 1);
    // 0x800212E0: andi        $a1, $a2, 0xFFFF
    ctx->r5 = ctx->r6 & 0XFFFF;
    // 0x800212E4: jal         0x80020F44
    // 0x800212E8: addu        $a0, $t4, $t9
    ctx->r4 = ADD32(ctx->r12, ctx->r25);
    func_80020F44(rdram, ctx);
        goto after_0;
    // 0x800212E8: addu        $a0, $t4, $t9
    ctx->r4 = ADD32(ctx->r12, ctx->r25);
    after_0:
L_800212EC:
    // 0x800212EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800212F0:
    // 0x800212F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800212F4: jr          $ra
    // 0x800212F8: nop

    return;
    // 0x800212F8: nop

;}
RECOMP_FUNC void func_8002135C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002135C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80021360: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x80021364: addiu       $at, $zero, 0xFE
    ctx->r1 = ADD32(0, 0XFE);
    // 0x80021368: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002136C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80021370: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80021374: andi        $a3, $a1, 0xFF
    ctx->r7 = ctx->r5 & 0XFF;
    // 0x80021378: beq         $t6, $at, L_80021394
    if (ctx->r14 == ctx->r1) {
        // 0x8002137C: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_80021394;
    }
    // 0x8002137C: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x80021380: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x80021384: beq         $t6, $at, L_800213F8
    if (ctx->r14 == ctx->r1) {
        // 0x80021388: sll         $t1, $a3, 2
        ctx->r9 = S32(ctx->r7 << 2);
            goto L_800213F8;
    }
    // 0x80021388: sll         $t1, $a3, 2
    ctx->r9 = S32(ctx->r7 << 2);
    // 0x8002138C: b           L_800213C4
    // 0x80021390: lui         $t2, 0x800C
    ctx->r10 = S32(0X800C << 16);
        goto L_800213C4;
    // 0x80021390: lui         $t2, 0x800C
    ctx->r10 = S32(0X800C << 16);
L_80021394:
    // 0x80021394: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80021398:
    // 0x80021398: sll         $t8, $v0, 1
    ctx->r24 = S32(ctx->r2 << 1);
    // 0x8002139C: lw          $t7, 0x34($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X34);
    // 0x800213A0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800213A4: andi        $t0, $v0, 0xFF
    ctx->r8 = ctx->r2 & 0XFF;
    // 0x800213A8: slti        $at, $t0, 0x10
    ctx->r1 = SIGNED(ctx->r8) < 0X10 ? 1 : 0;
    // 0x800213AC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800213B0: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    // 0x800213B4: bne         $at, $zero, L_80021398
    if (ctx->r1 != 0) {
        // 0x800213B8: sh          $zero, 0x0($t9)
        MEM_H(0X0, ctx->r25) = 0;
            goto L_80021398;
    }
    // 0x800213B8: sh          $zero, 0x0($t9)
    MEM_H(0X0, ctx->r25) = 0;
    // 0x800213BC: b           L_800213FC
    // 0x800213C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800213FC;
    // 0x800213C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800213C4:
    // 0x800213C4: andi        $t3, $v0, 0xF0
    ctx->r11 = ctx->r2 & 0XF0;
    // 0x800213C8: sra         $t4, $t3, 4
    ctx->r12 = S32(SIGNED(ctx->r11) >> 4);
    // 0x800213CC: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800213D0: lw          $t2, 0x4830($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X4830);
    // 0x800213D4: andi        $t5, $t4, 0xFF
    ctx->r13 = ctx->r12 & 0XFF;
    // 0x800213D8: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x800213DC: sll         $t0, $v0, 4
    ctx->r8 = S32(ctx->r2 << 4);
    // 0x800213E0: addu        $t7, $t2, $t6
    ctx->r15 = ADD32(ctx->r10, ctx->r14);
    // 0x800213E4: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x800213E8: andi        $t1, $t0, 0xFF
    ctx->r9 = ctx->r8 & 0XFF;
    // 0x800213EC: sll         $t3, $t1, 1
    ctx->r11 = S32(ctx->r9 << 1);
    // 0x800213F0: jal         0x80020AF0
    // 0x800213F4: addu        $a1, $t8, $t3
    ctx->r5 = ADD32(ctx->r24, ctx->r11);
    func_80020AF0(rdram, ctx);
        goto after_0;
    // 0x800213F4: addu        $a1, $t8, $t3
    ctx->r5 = ADD32(ctx->r24, ctx->r11);
    after_0:
L_800213F8:
    // 0x800213F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800213FC:
    // 0x800213FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80021400: jr          $ra
    // 0x80021404: nop

    return;
    // 0x80021404: nop

;}
RECOMP_FUNC void func_80021408(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80021408: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x8002140C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80021410: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x80021414: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x80021418: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x8002141C: andi        $t0, $a2, 0xF0
    ctx->r8 = ctx->r6 & 0XF0;
    // 0x80021420: sb          $zero, 0xC($a0)
    MEM_B(0XC, ctx->r4) = 0;
    // 0x80021424: sra         $t1, $t0, 4
    ctx->r9 = S32(SIGNED(ctx->r8) >> 4);
    // 0x80021428: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8002142C: lw          $t9, 0x4830($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X4830);
    // 0x80021430: andi        $t2, $t1, 0xFF
    ctx->r10 = ctx->r9 & 0XFF;
    // 0x80021434: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80021438: sll         $t7, $a2, 4
    ctx->r15 = S32(ctx->r6 << 4);
    // 0x8002143C: addu        $t4, $t9, $t3
    ctx->r12 = ADD32(ctx->r25, ctx->r11);
    // 0x80021440: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x80021444: lhu         $t2, 0x16($a0)
    ctx->r10 = MEM_HU(ctx->r4, 0X16);
    // 0x80021448: andi        $t8, $t7, 0xFF
    ctx->r24 = ctx->r15 & 0XFF;
    // 0x8002144C: sll         $t0, $t8, 1
    ctx->r8 = S32(ctx->r24 << 1);
    // 0x80021450: addu        $t1, $t5, $t0
    ctx->r9 = ADD32(ctx->r13, ctx->r8);
    // 0x80021454: ori         $t9, $t2, 0x8000
    ctx->r25 = ctx->r10 | 0X8000;
    // 0x80021458: sw          $t1, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->r9;
    // 0x8002145C: jr          $ra
    // 0x80021460: sh          $t9, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r25;
    return;
    // 0x80021460: sh          $t9, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r25;
;}
RECOMP_FUNC void func_800217F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800217F8: addiu       $t6, $zero, 0xF
    ctx->r14 = ADD32(0, 0XF);
    // 0x800217FC: sw          $a1, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->r5;
    // 0x80021800: jr          $ra
    // 0x80021804: sb          $t6, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r14;
    return;
    // 0x80021804: sb          $t6, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r14;
;}
RECOMP_FUNC void func_80021808(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80021808: andi        $a3, $a1, 0xFF
    ctx->r7 = ctx->r5 & 0XFF;
    // 0x8002180C: sll         $t7, $a3, 2
    ctx->r15 = S32(ctx->r7 << 2);
    // 0x80021810: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x80021814: andi        $t9, $a2, 0xF0
    ctx->r25 = ctx->r6 & 0XF0;
    // 0x80021818: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002181C: sra         $t0, $t9, 4
    ctx->r8 = S32(SIGNED(ctx->r25) >> 4);
    // 0x80021820: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80021824: lw          $t8, 0x4830($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X4830);
    // 0x80021828: andi        $t1, $t0, 0xFF
    ctx->r9 = ctx->r8 & 0XFF;
    // 0x8002182C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80021830: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80021834: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80021838: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8002183C: sll         $t6, $a2, 4
    ctx->r14 = S32(ctx->r6 << 4);
    // 0x80021840: addu        $t3, $t8, $t2
    ctx->r11 = ADD32(ctx->r24, ctx->r10);
    // 0x80021844: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x80021848: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x8002184C: sll         $t9, $t7, 1
    ctx->r25 = S32(ctx->r15 << 1);
    // 0x80021850: jal         0x800217F8
    // 0x80021854: addu        $a1, $t4, $t9
    ctx->r5 = ADD32(ctx->r12, ctx->r25);
    func_800217F8(rdram, ctx);
        goto after_0;
    // 0x80021854: addu        $a1, $t4, $t9
    ctx->r5 = ADD32(ctx->r12, ctx->r25);
    after_0:
    // 0x80021858: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002185C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80021860: jr          $ra
    // 0x80021864: nop

    return;
    // 0x80021864: nop

    // 0x80021868: nop

    // 0x8002186C: nop

;}
RECOMP_FUNC void func_80021870(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80021870: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80021874: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80021878: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8002187C: lui         $a1, 0x3
    ctx->r5 = S32(0X3 << 16);
    // 0x80021880: ori         $a1, $a1, 0x7D8
    ctx->r5 = ctx->r5 | 0X7D8;
    // 0x80021884: jal         0x800218E0
    // 0x80021888: addiu       $a0, $a0, -0x3770
    ctx->r4 = ADD32(ctx->r4, -0X3770);
    func_800218E0(rdram, ctx);
        goto after_0;
    // 0x80021888: addiu       $a0, $a0, -0x3770
    ctx->r4 = ADD32(ctx->r4, -0X3770);
    after_0:
    // 0x8002188C: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x80021890: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x80021894: addiu       $t6, $t6, -0x3770
    ctx->r14 = ADD32(ctx->r14, -0X3770);
    // 0x80021898: addiu       $v0, $v0, -0x2F98
    ctx->r2 = ADD32(ctx->r2, -0X2F98);
    // 0x8002189C: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x800218A0: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x800218A4: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800218A8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800218AC: sh          $t7, -0x7674($at)
    MEM_H(-0X7674, ctx->r1) = ctx->r15;
    // 0x800218B0: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x800218B4: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x800218B8: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x800218BC: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x800218C0: sh          $t9, -0x7672($at)
    MEM_H(-0X7672, ctx->r1) = ctx->r25;
    // 0x800218C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800218C8: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800218CC: sb          $zero, -0x2F8C($at)
    MEM_B(-0X2F8C, ctx->r1) = 0;
    // 0x800218D0: jr          $ra
    // 0x800218D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800218D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800218D8: nop

    // 0x800218DC: nop

;}
RECOMP_FUNC void func_800218E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800218E0: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x800218E4: beq         $a1, $zero, L_80021900
    if (ctx->r5 == 0) {
        // 0x800218E8: addiu       $a1, $a1, -0x1
        ctx->r5 = ADD32(ctx->r5, -0X1);
            goto L_80021900;
    }
    // 0x800218E8: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
L_800218EC:
    // 0x800218EC: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x800218F0: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
    // 0x800218F4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x800218F8: bne         $a1, $zero, L_800218EC
    if (ctx->r5 != 0) {
        // 0x800218FC: addiu       $a1, $a1, -0x1
        ctx->r5 = ADD32(ctx->r5, -0X1);
            goto L_800218EC;
    }
    // 0x800218FC: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
L_80021900:
    // 0x80021900: jr          $ra
    // 0x80021904: nop

    return;
    // 0x80021904: nop

;}
RECOMP_FUNC void func_80021940(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80021940: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x80021944: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x80021948: sh          $zero, 0x7C4($v0)
    MEM_H(0X7C4, ctx->r2) = 0;
    // 0x8002194C: sh          $zero, 0x7C2($v0)
    MEM_H(0X7C2, ctx->r2) = 0;
    // 0x80021950: sh          $zero, 0x7C6($v0)
    MEM_H(0X7C6, ctx->r2) = 0;
    // 0x80021954: sh          $zero, 0x7C8($v0)
    MEM_H(0X7C8, ctx->r2) = 0;
    // 0x80021958: jr          $ra
    // 0x8002195C: sh          $zero, 0x7CA($v0)
    MEM_H(0X7CA, ctx->r2) = 0;
    return;
    // 0x8002195C: sh          $zero, 0x7CA($v0)
    MEM_H(0X7CA, ctx->r2) = 0;
;}
RECOMP_FUNC void func_80021960(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80021960: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x80021964: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x80021968: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8002196C: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x80021970: addiu       $t8, $zero, 0xF
    ctx->r24 = ADD32(0, 0XF);
    // 0x80021974: sh          $zero, 0x7C4($v0)
    MEM_H(0X7C4, ctx->r2) = 0;
    // 0x80021978: sh          $t6, 0x7C2($v0)
    MEM_H(0X7C2, ctx->r2) = ctx->r14;
    // 0x8002197C: sh          $t7, 0x7C6($v0)
    MEM_H(0X7C6, ctx->r2) = ctx->r15;
    // 0x80021980: sh          $t8, 0x7C8($v0)
    MEM_H(0X7C8, ctx->r2) = ctx->r24;
    // 0x80021984: jr          $ra
    // 0x80021988: sh          $zero, 0x7CA($v0)
    MEM_H(0X7CA, ctx->r2) = 0;
    return;
    // 0x80021988: sh          $zero, 0x7CA($v0)
    MEM_H(0X7CA, ctx->r2) = 0;
;}
RECOMP_FUNC void func_8002198C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002198C: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x80021990: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x80021994: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x80021998: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8002199C: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x800219A0: addiu       $t9, $zero, -0xF
    ctx->r25 = ADD32(0, -0XF);
    // 0x800219A4: sh          $t6, 0x7C4($v0)
    MEM_H(0X7C4, ctx->r2) = ctx->r14;
    // 0x800219A8: sh          $t7, 0x7C2($v0)
    MEM_H(0X7C2, ctx->r2) = ctx->r15;
    // 0x800219AC: sh          $t8, 0x7C6($v0)
    MEM_H(0X7C6, ctx->r2) = ctx->r24;
    // 0x800219B0: sh          $t9, 0x7C8($v0)
    MEM_H(0X7C8, ctx->r2) = ctx->r25;
    // 0x800219B4: jr          $ra
    // 0x800219B8: sh          $zero, 0x7CA($v0)
    MEM_H(0X7CA, ctx->r2) = 0;
    return;
    // 0x800219B8: sh          $zero, 0x7CA($v0)
    MEM_H(0X7CA, ctx->r2) = 0;
;}
RECOMP_FUNC void func_800219BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800219BC: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x800219C0: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x800219C4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x800219C8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x800219CC: sh          $zero, 0x7C4($v0)
    MEM_H(0X7C4, ctx->r2) = 0;
    // 0x800219D0: sh          $v1, 0x7C2($v0)
    MEM_H(0X7C2, ctx->r2) = ctx->r3;
    // 0x800219D4: sh          $v1, 0x7C6($v0)
    MEM_H(0X7C6, ctx->r2) = ctx->r3;
    // 0x800219D8: sh          $a0, 0x7C8($v0)
    MEM_H(0X7C8, ctx->r2) = ctx->r4;
    // 0x800219DC: jr          $ra
    // 0x800219E0: sh          $zero, 0x7CA($v0)
    MEM_H(0X7CA, ctx->r2) = 0;
    return;
    // 0x800219E0: sh          $zero, 0x7CA($v0)
    MEM_H(0X7CA, ctx->r2) = 0;
;}
RECOMP_FUNC void func_800219E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800219E4: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x800219E8: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x800219EC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x800219F0: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x800219F4: negu        $t9, $a0
    ctx->r25 = SUB32(0, ctx->r4);
    // 0x800219F8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x800219FC: sh          $t8, 0x7C4($v0)
    MEM_H(0X7C4, ctx->r2) = ctx->r24;
    // 0x80021A00: sh          $v1, 0x7C2($v0)
    MEM_H(0X7C2, ctx->r2) = ctx->r3;
    // 0x80021A04: sh          $v1, 0x7C6($v0)
    MEM_H(0X7C6, ctx->r2) = ctx->r3;
    // 0x80021A08: sh          $t9, 0x7C8($v0)
    MEM_H(0X7C8, ctx->r2) = ctx->r25;
    // 0x80021A0C: jr          $ra
    // 0x80021A10: sh          $zero, 0x7CA($v0)
    MEM_H(0X7CA, ctx->r2) = 0;
    return;
    // 0x80021A10: sh          $zero, 0x7CA($v0)
    MEM_H(0X7CA, ctx->r2) = 0;
;}
RECOMP_FUNC void func_80021A14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80021A14: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x80021A18: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x80021A1C: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x80021A20: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80021A24: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80021A28: sh          $zero, 0x7C4($v0)
    MEM_H(0X7C4, ctx->r2) = 0;
    // 0x80021A2C: sh          $t8, 0x7C2($v0)
    MEM_H(0X7C2, ctx->r2) = ctx->r24;
    // 0x80021A30: sh          $t9, 0x7C6($v0)
    MEM_H(0X7C6, ctx->r2) = ctx->r25;
    // 0x80021A34: sh          $a0, 0x7C8($v0)
    MEM_H(0X7C8, ctx->r2) = ctx->r4;
    // 0x80021A38: jr          $ra
    // 0x80021A3C: sh          $zero, 0x7CA($v0)
    MEM_H(0X7CA, ctx->r2) = 0;
    return;
    // 0x80021A3C: sh          $zero, 0x7CA($v0)
    MEM_H(0X7CA, ctx->r2) = 0;
;}
RECOMP_FUNC void func_80021A40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80021A40: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x80021A44: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x80021A48: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x80021A4C: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x80021A50: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80021A54: negu        $t1, $a0
    ctx->r9 = SUB32(0, ctx->r4);
    // 0x80021A58: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80021A5C: sh          $t8, 0x7C4($v0)
    MEM_H(0X7C4, ctx->r2) = ctx->r24;
    // 0x80021A60: sh          $t9, 0x7C2($v0)
    MEM_H(0X7C2, ctx->r2) = ctx->r25;
    // 0x80021A64: sh          $t0, 0x7C6($v0)
    MEM_H(0X7C6, ctx->r2) = ctx->r8;
    // 0x80021A68: sh          $t1, 0x7C8($v0)
    MEM_H(0X7C8, ctx->r2) = ctx->r9;
    // 0x80021A6C: jr          $ra
    // 0x80021A70: sh          $zero, 0x7CA($v0)
    MEM_H(0X7CA, ctx->r2) = 0;
    return;
    // 0x80021A70: sh          $zero, 0x7CA($v0)
    MEM_H(0X7CA, ctx->r2) = 0;
;}
RECOMP_FUNC void func_80021A74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80021A74: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80021A78: addiu       $a1, $a1, -0x3770
    ctx->r5 = ADD32(ctx->r5, -0X3770);
    // 0x80021A7C: lh          $t6, 0x7C2($a1)
    ctx->r14 = MEM_H(ctx->r5, 0X7C2);
    // 0x80021A80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80021A84: beq         $t6, $zero, L_80021B44
    if (ctx->r14 == 0) {
        // 0x80021A88: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80021B44;
    }
    // 0x80021A88: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80021A8C: jal         0x80021B54
    // 0x80021A90: nop

    func_80021B54(rdram, ctx);
        goto after_0;
    // 0x80021A90: nop

    after_0:
    // 0x80021A94: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80021A98: addiu       $a1, $a1, -0x3770
    ctx->r5 = ADD32(ctx->r5, -0X3770);
    // 0x80021A9C: lh          $v0, 0x7C2($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X7C2);
    // 0x80021AA0: nop

    // 0x80021AA4: beq         $v0, $zero, L_80021B44
    if (ctx->r2 == 0) {
        // 0x80021AA8: addiu       $v1, $v0, -0x1
        ctx->r3 = ADD32(ctx->r2, -0X1);
            goto L_80021B44;
    }
    // 0x80021AA8: addiu       $v1, $v0, -0x1
    ctx->r3 = ADD32(ctx->r2, -0X1);
    // 0x80021AAC: beq         $v1, $zero, L_80021ACC
    if (ctx->r3 == 0) {
        // 0x80021AB0: lui         $a0, 0x8011
        ctx->r4 = S32(0X8011 << 16);
            goto L_80021ACC;
    }
    // 0x80021AB0: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x80021AB4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80021AB8: beq         $v1, $at, L_80021AF8
    if (ctx->r3 == ctx->r1) {
        // 0x80021ABC: lui         $a0, 0x8011
        ctx->r4 = S32(0X8011 << 16);
            goto L_80021AF8;
    }
    // 0x80021ABC: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x80021AC0: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x80021AC4: b           L_80021B24
    // 0x80021AC8: addiu       $a0, $a0, -0x2F94
    ctx->r4 = ADD32(ctx->r4, -0X2F94);
        goto L_80021B24;
    // 0x80021AC8: addiu       $a0, $a0, -0x2F94
    ctx->r4 = ADD32(ctx->r4, -0X2F94);
L_80021ACC:
    // 0x80021ACC: addiu       $a0, $a0, -0x2F94
    ctx->r4 = ADD32(ctx->r4, -0X2F94);
    // 0x80021AD0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80021AD4: lui         $t8, 0xFA00
    ctx->r24 = S32(0XFA00 << 16);
    // 0x80021AD8: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x80021ADC: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x80021AE0: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x80021AE4: lh          $t9, 0x7C4($a1)
    ctx->r25 = MEM_H(ctx->r5, 0X7C4);
    // 0x80021AE8: nop

    // 0x80021AEC: andi        $t0, $t9, 0xFF
    ctx->r8 = ctx->r25 & 0XFF;
    // 0x80021AF0: b           L_80021B24
    // 0x80021AF4: sw          $t0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r8;
        goto L_80021B24;
    // 0x80021AF4: sw          $t0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r8;
L_80021AF8:
    // 0x80021AF8: addiu       $a0, $a0, -0x2F94
    ctx->r4 = ADD32(ctx->r4, -0X2F94);
    // 0x80021AFC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80021B00: lui         $t2, 0xFA00
    ctx->r10 = S32(0XFA00 << 16);
    // 0x80021B04: addiu       $t1, $v0, 0x8
    ctx->r9 = ADD32(ctx->r2, 0X8);
    // 0x80021B08: sw          $t1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r9;
    // 0x80021B0C: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    // 0x80021B10: lh          $t3, 0x7C4($a1)
    ctx->r11 = MEM_H(ctx->r5, 0X7C4);
    // 0x80021B14: addiu       $at, $zero, -0x100
    ctx->r1 = ADD32(0, -0X100);
    // 0x80021B18: andi        $t4, $t3, 0xFF
    ctx->r12 = ctx->r11 & 0XFF;
    // 0x80021B1C: or          $t5, $t4, $at
    ctx->r13 = ctx->r12 | ctx->r1;
    // 0x80021B20: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
L_80021B24:
    // 0x80021B24: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80021B28: lui         $t8, 0x800A
    ctx->r24 = S32(0X800A << 16);
    // 0x80021B2C: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x80021B30: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x80021B34: addiu       $t8, $t8, 0x6AC0
    ctx->r24 = ADD32(ctx->r24, 0X6AC0);
    // 0x80021B38: lui         $t7, 0x600
    ctx->r15 = S32(0X600 << 16);
    // 0x80021B3C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80021B40: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
L_80021B44:
    // 0x80021B44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80021B48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80021B4C: jr          $ra
    // 0x80021B50: nop

    return;
    // 0x80021B50: nop

;}
RECOMP_FUNC void func_80021B54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80021B54: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x80021B58: addiu       $a0, $a0, -0x3770
    ctx->r4 = ADD32(ctx->r4, -0X3770);
    // 0x80021B5C: lh          $v1, 0x7CA($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X7CA);
    // 0x80021B60: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80021B64: beq         $v1, $zero, L_80021B7C
    if (ctx->r3 == 0) {
        // 0x80021B68: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_80021B7C;
    }
    // 0x80021B68: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80021B6C: beq         $v0, $at, L_80021BEC
    if (ctx->r2 == ctx->r1) {
        // 0x80021B70: nop
    
            goto L_80021BEC;
    }
    // 0x80021B70: nop

    // 0x80021B74: jr          $ra
    // 0x80021B78: nop

    return;
    // 0x80021B78: nop

L_80021B7C:
    // 0x80021B7C: lh          $t6, 0x7C6($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X7C6);
    // 0x80021B80: nop

    // 0x80021B84: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80021B88: sh          $t7, 0x7C6($a0)
    MEM_H(0X7C6, ctx->r4) = ctx->r15;
    // 0x80021B8C: lh          $t8, 0x7C6($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X7C6);
    // 0x80021B90: nop

    // 0x80021B94: bgez        $t8, L_80021BEC
    if (SIGNED(ctx->r24) >= 0) {
        // 0x80021B98: nop
    
            goto L_80021BEC;
    }
    // 0x80021B98: nop

    // 0x80021B9C: lh          $v0, 0x7C8($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X7C8);
    // 0x80021BA0: lh          $t9, 0x7C4($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X7C4);
    // 0x80021BA4: sh          $zero, 0x7C6($a0)
    MEM_H(0X7C6, ctx->r4) = 0;
    // 0x80021BA8: addu        $t0, $t9, $v0
    ctx->r8 = ADD32(ctx->r25, ctx->r2);
    // 0x80021BAC: bgez        $v0, L_80021BD0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80021BB0: sh          $t0, 0x7C4($a0)
        MEM_H(0X7C4, ctx->r4) = ctx->r8;
            goto L_80021BD0;
    }
    // 0x80021BB0: sh          $t0, 0x7C4($a0)
    MEM_H(0X7C4, ctx->r4) = ctx->r8;
    // 0x80021BB4: lh          $t1, 0x7C4($a0)
    ctx->r9 = MEM_H(ctx->r4, 0X7C4);
    // 0x80021BB8: nop

    // 0x80021BBC: bgtz        $t1, L_80021BEC
    if (SIGNED(ctx->r9) > 0) {
        // 0x80021BC0: nop
    
            goto L_80021BEC;
    }
    // 0x80021BC0: nop

    // 0x80021BC4: sh          $zero, 0x7C4($a0)
    MEM_H(0X7C4, ctx->r4) = 0;
    // 0x80021BC8: jr          $ra
    // 0x80021BCC: sh          $zero, 0x7C2($a0)
    MEM_H(0X7C2, ctx->r4) = 0;
    return;
    // 0x80021BCC: sh          $zero, 0x7C2($a0)
    MEM_H(0X7C2, ctx->r4) = 0;
L_80021BD0:
    // 0x80021BD0: lh          $t2, 0x7C4($a0)
    ctx->r10 = MEM_H(ctx->r4, 0X7C4);
    // 0x80021BD4: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x80021BD8: slti        $at, $t2, 0x100
    ctx->r1 = SIGNED(ctx->r10) < 0X100 ? 1 : 0;
    // 0x80021BDC: bne         $at, $zero, L_80021BEC
    if (ctx->r1 != 0) {
        // 0x80021BE0: addiu       $t4, $v1, 0x1
        ctx->r12 = ADD32(ctx->r3, 0X1);
            goto L_80021BEC;
    }
    // 0x80021BE0: addiu       $t4, $v1, 0x1
    ctx->r12 = ADD32(ctx->r3, 0X1);
    // 0x80021BE4: sh          $t3, 0x7C4($a0)
    MEM_H(0X7C4, ctx->r4) = ctx->r11;
    // 0x80021BE8: sh          $t4, 0x7CA($a0)
    MEM_H(0X7CA, ctx->r4) = ctx->r12;
L_80021BEC:
    // 0x80021BEC: jr          $ra
    // 0x80021BF0: nop

    return;
    // 0x80021BF0: nop

    // 0x80021BF4: nop

    // 0x80021BF8: nop

    // 0x80021BFC: nop

;}
RECOMP_FUNC void func_80021C00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80021C00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80021C04: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80021C08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80021C0C: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80021C10: jal         0x80084BD0
    // 0x80021C14: addiu       $a0, $a0, -0x3A80
    ctx->r4 = ADD32(ctx->r4, -0X3A80);
    osContStartQuery_recomp(rdram, ctx);
        goto after_0;
    // 0x80021C14: addiu       $a0, $a0, -0x3A80
    ctx->r4 = ADD32(ctx->r4, -0X3A80);
    after_0:
    // 0x80021C18: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80021C1C: addiu       $a0, $a0, -0x3A80
    ctx->r4 = ADD32(ctx->r4, -0X3A80);
    // 0x80021C20: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80021C24: jal         0x80081F50
    // 0x80021C28: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x80021C28: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x80021C2C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80021C30: jal         0x80084C54
    // 0x80021C34: nop

    osContGetQuery_recomp(rdram, ctx);
        goto after_2;
    // 0x80021C34: nop

    after_2:
    // 0x80021C38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80021C3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80021C40: jr          $ra
    // 0x80021C44: nop

    return;
    // 0x80021C44: nop

;}
RECOMP_FUNC void func_80021C48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80021C48: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80021C4C: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80021C50: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80021C54: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80021C58: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80021C5C: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x80021C60: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80021C64: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80021C68: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80021C6C: lui         $s2, 0x8012
    ctx->r18 = S32(0X8012 << 16);
    // 0x80021C70: lui         $s5, 0x801B
    ctx->r21 = S32(0X801B << 16);
    // 0x80021C74: lui         $s6, 0x801B
    ctx->r22 = S32(0X801B << 16);
    // 0x80021C78: lui         $s7, 0x8012
    ctx->r23 = S32(0X8012 << 16);
    // 0x80021C7C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80021C80: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80021C84: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x80021C88: addiu       $s7, $s7, 0xC90
    ctx->r23 = ADD32(ctx->r23, 0XC90);
    // 0x80021C8C: addiu       $s6, $s6, -0x3A80
    ctx->r22 = ADD32(ctx->r22, -0X3A80);
    // 0x80021C90: addiu       $s5, $s5, -0x3A60
    ctx->r21 = ADD32(ctx->r21, -0X3A60);
    // 0x80021C94: addiu       $s2, $s2, 0xE30
    ctx->r18 = ADD32(ctx->r18, 0XE30);
    // 0x80021C98: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80021C9C: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x80021CA0: addiu       $fp, $zero, 0x68
    ctx->r30 = ADD32(0, 0X68);
L_80021CA4:
    // 0x80021CA4: sll         $t6, $s0, 2
    ctx->r14 = S32(ctx->r16 << 2);
    // 0x80021CA8: addu        $t7, $s5, $t6
    ctx->r15 = ADD32(ctx->r21, ctx->r14);
    // 0x80021CAC: lbu         $t8, 0x2($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X2);
    // 0x80021CB0: addu        $t6, $s2, $s0
    ctx->r14 = ADD32(ctx->r18, ctx->r16);
    // 0x80021CB4: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x80021CB8: beq         $t9, $zero, L_80021D10
    if (ctx->r25 == 0) {
        // 0x80021CBC: nop
    
            goto L_80021D10;
    }
    // 0x80021CBC: nop

    // 0x80021CC0: multu       $s0, $fp
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r30)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80021CC4: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x80021CC8: or          $s1, $s0, $zero
    ctx->r17 = ctx->r16 | 0;
    // 0x80021CCC: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x80021CD0: mflo        $t0
    ctx->r8 = lo;
    // 0x80021CD4: addu        $a1, $s7, $t0
    ctx->r5 = ADD32(ctx->r23, ctx->r8);
    // 0x80021CD8: jal         0x80084C80
    // 0x80021CDC: nop

    osPfsInitPak_recomp(rdram, ctx);
        goto after_0;
    // 0x80021CDC: nop

    after_0:
    // 0x80021CE0: bne         $v0, $zero, L_80021CF4
    if (ctx->r2 != 0) {
        // 0x80021CE4: addu        $t2, $s2, $s0
        ctx->r10 = ADD32(ctx->r18, ctx->r16);
            goto L_80021CF4;
    }
    // 0x80021CE4: addu        $t2, $s2, $s0
    ctx->r10 = ADD32(ctx->r18, ctx->r16);
    // 0x80021CE8: addu        $t1, $s2, $s0
    ctx->r9 = ADD32(ctx->r18, ctx->r16);
    // 0x80021CEC: b           L_80021D14
    // 0x80021CF0: sb          $zero, 0x0($t1)
    MEM_B(0X0, ctx->r9) = 0;
        goto L_80021D14;
    // 0x80021CF0: sb          $zero, 0x0($t1)
    MEM_B(0X0, ctx->r9) = 0;
L_80021CF4:
    // 0x80021CF4: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80021CF8: sllv        $t4, $t3, $s1
    ctx->r12 = S32(ctx->r11 << (ctx->r17 & 31));
    // 0x80021CFC: or          $s4, $s4, $t4
    ctx->r20 = ctx->r20 | ctx->r12;
    // 0x80021D00: andi        $t5, $s4, 0xFFFF
    ctx->r13 = ctx->r20 & 0XFFFF;
    // 0x80021D04: sb          $s3, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r19;
    // 0x80021D08: b           L_80021D14
    // 0x80021D0C: or          $s4, $t5, $zero
    ctx->r20 = ctx->r13 | 0;
        goto L_80021D14;
    // 0x80021D0C: or          $s4, $t5, $zero
    ctx->r20 = ctx->r13 | 0;
L_80021D10:
    // 0x80021D10: sb          $s3, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r19;
L_80021D14:
    // 0x80021D14: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80021D18: andi        $t7, $s0, 0xFF
    ctx->r15 = ctx->r16 & 0XFF;
    // 0x80021D1C: slti        $at, $t7, 0x4
    ctx->r1 = SIGNED(ctx->r15) < 0X4 ? 1 : 0;
    // 0x80021D20: bne         $at, $zero, L_80021CA4
    if (ctx->r1 != 0) {
        // 0x80021D24: or          $s0, $t7, $zero
        ctx->r16 = ctx->r15 | 0;
            goto L_80021CA4;
    }
    // 0x80021D24: or          $s0, $t7, $zero
    ctx->r16 = ctx->r15 | 0;
    // 0x80021D28: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80021D2C: or          $v0, $s4, $zero
    ctx->r2 = ctx->r20 | 0;
    // 0x80021D30: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80021D34: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80021D38: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80021D3C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80021D40: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80021D44: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80021D48: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80021D4C: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80021D50: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80021D54: jr          $ra
    // 0x80021D58: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80021D58: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80021D5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80021D5C: andi        $a2, $a0, 0xFF
    ctx->r6 = ctx->r4 & 0XFF;
    // 0x80021D60: sll         $t6, $a2, 2
    ctx->r14 = S32(ctx->r6 << 2);
    // 0x80021D64: subu        $t6, $t6, $a2
    ctx->r14 = SUB32(ctx->r14, ctx->r6);
    // 0x80021D68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80021D6C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80021D70: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80021D74: addu        $t6, $t6, $a2
    ctx->r14 = ADD32(ctx->r14, ctx->r6);
    // 0x80021D78: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80021D7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80021D80: addiu       $t7, $t7, 0xC90
    ctx->r15 = ADD32(ctx->r15, 0XC90);
    // 0x80021D84: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x80021D88: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80021D8C: addiu       $a0, $a0, -0x3A80
    ctx->r4 = ADD32(ctx->r4, -0X3A80);
    // 0x80021D90: addu        $a1, $t6, $t7
    ctx->r5 = ADD32(ctx->r14, ctx->r15);
    // 0x80021D94: jal         0x80084C80
    // 0x80021D98: sb          $a2, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r6;
    osPfsInitPak_recomp(rdram, ctx);
        goto after_0;
    // 0x80021D98: sb          $a2, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r6;
    after_0:
    // 0x80021D9C: lbu         $a3, 0x1B($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X1B);
    // 0x80021DA0: bne         $v0, $zero, L_80021DB8
    if (ctx->r2 != 0) {
        // 0x80021DA4: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80021DB8;
    }
    // 0x80021DA4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80021DA8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80021DAC: addu        $at, $at, $a3
    ctx->r1 = ADD32(ctx->r1, ctx->r7);
    // 0x80021DB0: b           L_80021DC8
    // 0x80021DB4: sb          $zero, 0xE30($at)
    MEM_B(0XE30, ctx->r1) = 0;
        goto L_80021DC8;
    // 0x80021DB4: sb          $zero, 0xE30($at)
    MEM_B(0XE30, ctx->r1) = 0;
L_80021DB8:
    // 0x80021DB8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80021DBC: addu        $at, $at, $a3
    ctx->r1 = ADD32(ctx->r1, ctx->r7);
    // 0x80021DC0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80021DC4: sb          $t8, 0xE30($at)
    MEM_B(0XE30, ctx->r1) = ctx->r24;
L_80021DC8:
    // 0x80021DC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80021DCC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80021DD0: jr          $ra
    // 0x80021DD4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x80021DD4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_80021DD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80021DD8: andi        $a1, $a0, 0xFF
    ctx->r5 = ctx->r4 & 0XFF;
    // 0x80021DDC: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x80021DE0: subu        $t6, $t6, $a1
    ctx->r14 = SUB32(ctx->r14, ctx->r5);
    // 0x80021DE4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80021DE8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80021DEC: addu        $t6, $t6, $a1
    ctx->r14 = ADD32(ctx->r14, ctx->r5);
    // 0x80021DF0: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80021DF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80021DF8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80021DFC: addiu       $t7, $t7, 0xC90
    ctx->r15 = ADD32(ctx->r15, 0XC90);
    // 0x80021E00: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x80021E04: jal         0x80084EF0
    // 0x80021E08: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
    func_80084EF0(rdram, ctx);
        goto after_0;
    // 0x80021E08: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
    after_0:
    // 0x80021E0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80021E10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80021E14: jr          $ra
    // 0x80021E18: nop

    return;
    // 0x80021E18: nop

;}
