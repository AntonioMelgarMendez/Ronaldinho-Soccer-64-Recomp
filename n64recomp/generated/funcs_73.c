#include "iss64_recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_8027A1AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027A1AC: sll         $t6, $a1, 24
    ctx->r14 = S32(ctx->r5 << 24);
    // 0x8027A1B0: sra         $t7, $t6, 24
    ctx->r15 = S32(SIGNED(ctx->r14) >> 24);
    // 0x8027A1B4: lui         $t8, 0x8029
    ctx->r24 = S32(0X8029 << 16);
    // 0x8027A1B8: addiu       $t8, $t8, -0x7A38
    ctx->r24 = ADD32(ctx->r24, -0X7A38);
    // 0x8027A1BC: sll         $v0, $t7, 1
    ctx->r2 = S32(ctx->r15 << 1);
    // 0x8027A1C0: addu        $v1, $v0, $t8
    ctx->r3 = ADD32(ctx->r2, ctx->r24);
    // 0x8027A1C4: lh          $t9, 0x0($v1)
    ctx->r25 = MEM_H(ctx->r3, 0X0);
    // 0x8027A1C8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8027A1CC: addiu       $t0, $t9, -0x9
    ctx->r8 = ADD32(ctx->r25, -0X9);
    // 0x8027A1D0: sh          $t0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r8;
    // 0x8027A1D4: lh          $a0, 0x0($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X0);
    // 0x8027A1D8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8027A1DC: slti        $at, $a0, -0x3B
    ctx->r1 = SIGNED(ctx->r4) < -0X3B ? 1 : 0;
    // 0x8027A1E0: beq         $at, $zero, L_8027A1F4
    if (ctx->r1 == 0) {
        // 0x8027A1E4: addiu       $t1, $zero, -0x3C
        ctx->r9 = ADD32(0, -0X3C);
            goto L_8027A1F4;
    }
    // 0x8027A1E4: addiu       $t1, $zero, -0x3C
    ctx->r9 = ADD32(0, -0X3C);
    // 0x8027A1E8: sh          $t1, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r9;
    // 0x8027A1EC: lh          $a0, 0x0($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X0);
    // 0x8027A1F0: nop

L_8027A1F4:
    // 0x8027A1F4: lui         $at, 0x8029
    ctx->r1 = S32(0X8029 << 16);
    // 0x8027A1F8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8027A1FC: jr          $ra
    // 0x8027A200: sh          $a0, -0x7A08($at)
    MEM_H(-0X7A08, ctx->r1) = ctx->r4;
    return;
    // 0x8027A200: sh          $a0, -0x7A08($at)
    MEM_H(-0X7A08, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_8027A204(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027A204: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8027A208: lb          $t8, 0x2E($a0)
    ctx->r24 = MEM_B(ctx->r4, 0X2E);
    // 0x8027A20C: sll         $t6, $a1, 24
    ctx->r14 = S32(ctx->r5 << 24);
    // 0x8027A210: sra         $t7, $t6, 24
    ctx->r15 = S32(SIGNED(ctx->r14) >> 24);
    // 0x8027A214: bne         $t8, $zero, L_8027A274
    if (ctx->r24 != 0) {
        // 0x8027A218: or          $a1, $t7, $zero
        ctx->r5 = ctx->r15 | 0;
            goto L_8027A274;
    }
    // 0x8027A218: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x8027A21C: sll         $v0, $t7, 1
    ctx->r2 = S32(ctx->r15 << 1);
    // 0x8027A220: lui         $t0, 0x8029
    ctx->r8 = S32(0X8029 << 16);
    // 0x8027A224: addu        $t0, $t0, $v0
    ctx->r8 = ADD32(ctx->r8, ctx->r2);
    // 0x8027A228: lui         $t1, 0x8029
    ctx->r9 = S32(0X8029 << 16);
    // 0x8027A22C: lh          $t1, -0x79B8($t1)
    ctx->r9 = MEM_H(ctx->r9, -0X79B8);
    // 0x8027A230: lh          $t0, -0x7A08($t0)
    ctx->r8 = MEM_H(ctx->r8, -0X7A08);
    // 0x8027A234: lui         $t9, 0x8029
    ctx->r25 = S32(0X8029 << 16);
    // 0x8027A238: addiu       $t9, $t9, -0x7A38
    ctx->r25 = ADD32(ctx->r25, -0X7A38);
    // 0x8027A23C: addu        $v1, $v0, $t9
    ctx->r3 = ADD32(ctx->r2, ctx->r25);
    // 0x8027A240: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x8027A244: sh          $t2, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r10;
    // 0x8027A248: lui         $t4, 0x8029
    ctx->r12 = S32(0X8029 << 16);
    // 0x8027A24C: addu        $t4, $t4, $v0
    ctx->r12 = ADD32(ctx->r12, ctx->r2);
    // 0x8027A250: lui         $t5, 0x8029
    ctx->r13 = S32(0X8029 << 16);
    // 0x8027A254: lh          $t5, -0x79B6($t5)
    ctx->r13 = MEM_H(ctx->r13, -0X79B6);
    // 0x8027A258: lh          $t4, -0x79F0($t4)
    ctx->r12 = MEM_H(ctx->r12, -0X79F0);
    // 0x8027A25C: lui         $t3, 0x8029
    ctx->r11 = S32(0X8029 << 16);
    // 0x8027A260: addiu       $t3, $t3, -0x7A20
    ctx->r11 = ADD32(ctx->r11, -0X7A20);
    // 0x8027A264: addu        $a0, $v0, $t3
    ctx->r4 = ADD32(ctx->r2, ctx->r11);
    // 0x8027A268: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x8027A26C: b           L_8027A2C8
    // 0x8027A270: sh          $t6, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r14;
        goto L_8027A2C8;
    // 0x8027A270: sh          $t6, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r14;
L_8027A274:
    // 0x8027A274: sll         $v0, $a1, 1
    ctx->r2 = S32(ctx->r5 << 1);
    // 0x8027A278: lui         $t8, 0x8029
    ctx->r24 = S32(0X8029 << 16);
    // 0x8027A27C: addu        $t8, $t8, $v0
    ctx->r24 = ADD32(ctx->r24, ctx->r2);
    // 0x8027A280: lui         $t9, 0x8029
    ctx->r25 = S32(0X8029 << 16);
    // 0x8027A284: lh          $t9, -0x79B8($t9)
    ctx->r25 = MEM_H(ctx->r25, -0X79B8);
    // 0x8027A288: lh          $t8, -0x7A08($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X7A08);
    // 0x8027A28C: lui         $t7, 0x8029
    ctx->r15 = S32(0X8029 << 16);
    // 0x8027A290: addiu       $t7, $t7, -0x7A38
    ctx->r15 = ADD32(ctx->r15, -0X7A38);
    // 0x8027A294: addu        $v1, $v0, $t7
    ctx->r3 = ADD32(ctx->r2, ctx->r15);
    // 0x8027A298: subu        $t0, $t8, $t9
    ctx->r8 = SUB32(ctx->r24, ctx->r25);
    // 0x8027A29C: sh          $t0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r8;
    // 0x8027A2A0: lui         $t2, 0x8029
    ctx->r10 = S32(0X8029 << 16);
    // 0x8027A2A4: addu        $t2, $t2, $v0
    ctx->r10 = ADD32(ctx->r10, ctx->r2);
    // 0x8027A2A8: lui         $t3, 0x8029
    ctx->r11 = S32(0X8029 << 16);
    // 0x8027A2AC: lh          $t3, -0x79B6($t3)
    ctx->r11 = MEM_H(ctx->r11, -0X79B6);
    // 0x8027A2B0: lh          $t2, -0x79F0($t2)
    ctx->r10 = MEM_H(ctx->r10, -0X79F0);
    // 0x8027A2B4: lui         $t1, 0x8029
    ctx->r9 = S32(0X8029 << 16);
    // 0x8027A2B8: addiu       $t1, $t1, -0x7A20
    ctx->r9 = ADD32(ctx->r9, -0X7A20);
    // 0x8027A2BC: addu        $a0, $v0, $t1
    ctx->r4 = ADD32(ctx->r2, ctx->r9);
    // 0x8027A2C0: subu        $t4, $t2, $t3
    ctx->r12 = SUB32(ctx->r10, ctx->r11);
    // 0x8027A2C4: sh          $t4, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r12;
L_8027A2C8:
    // 0x8027A2C8: lh          $v0, 0x0($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X0);
    // 0x8027A2CC: addiu       $t5, $zero, 0x3C
    ctx->r13 = ADD32(0, 0X3C);
    // 0x8027A2D0: slti        $at, $v0, 0x3C
    ctx->r1 = SIGNED(ctx->r2) < 0X3C ? 1 : 0;
    // 0x8027A2D4: bne         $at, $zero, L_8027A2E8
    if (ctx->r1 != 0) {
        // 0x8027A2D8: addiu       $t6, $zero, -0x3C
        ctx->r14 = ADD32(0, -0X3C);
            goto L_8027A2E8;
    }
    // 0x8027A2D8: addiu       $t6, $zero, -0x3C
    ctx->r14 = ADD32(0, -0X3C);
    // 0x8027A2DC: sh          $t5, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r13;
    // 0x8027A2E0: lh          $v0, 0x0($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X0);
    // 0x8027A2E4: nop

L_8027A2E8:
    // 0x8027A2E8: slti        $at, $v0, -0x3B
    ctx->r1 = SIGNED(ctx->r2) < -0X3B ? 1 : 0;
    // 0x8027A2EC: beq         $at, $zero, L_8027A2F8
    if (ctx->r1 == 0) {
        // 0x8027A2F0: addiu       $t7, $zero, 0x12C
        ctx->r15 = ADD32(0, 0X12C);
            goto L_8027A2F8;
    }
    // 0x8027A2F0: addiu       $t7, $zero, 0x12C
    ctx->r15 = ADD32(0, 0X12C);
    // 0x8027A2F4: sh          $t6, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r14;
L_8027A2F8:
    // 0x8027A2F8: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    // 0x8027A2FC: addiu       $t8, $zero, -0x12C
    ctx->r24 = ADD32(0, -0X12C);
    // 0x8027A300: slti        $at, $v0, 0x12C
    ctx->r1 = SIGNED(ctx->r2) < 0X12C ? 1 : 0;
    // 0x8027A304: bne         $at, $zero, L_8027A31C
    if (ctx->r1 != 0) {
        // 0x8027A308: slti        $at, $v0, -0x12B
        ctx->r1 = SIGNED(ctx->r2) < -0X12B ? 1 : 0;
            goto L_8027A31C;
    }
    // 0x8027A308: slti        $at, $v0, -0x12B
    ctx->r1 = SIGNED(ctx->r2) < -0X12B ? 1 : 0;
    // 0x8027A30C: sh          $t7, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r15;
    // 0x8027A310: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    // 0x8027A314: nop

    // 0x8027A318: slti        $at, $v0, -0x12B
    ctx->r1 = SIGNED(ctx->r2) < -0X12B ? 1 : 0;
L_8027A31C:
    // 0x8027A31C: beq         $at, $zero, L_8027A328
    if (ctx->r1 == 0) {
        // 0x8027A320: nop
    
            goto L_8027A328;
    }
    // 0x8027A320: nop

    // 0x8027A324: sh          $t8, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r24;
L_8027A328:
    // 0x8027A328: jr          $ra
    // 0x8027A32C: nop

    return;
    // 0x8027A32C: nop

;}
RECOMP_FUNC void func_8027A258(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027A258: lh          $t4, -0x79F0($t4)
    ctx->r12 = MEM_H(ctx->r12, -0X79F0);
    // 0x8027A25C: lui         $t3, 0x8029
    ctx->r11 = S32(0X8029 << 16);
    // 0x8027A260: addiu       $t3, $t3, -0x7A20
    ctx->r11 = ADD32(ctx->r11, -0X7A20);
    // 0x8027A264: addu        $a0, $v0, $t3
    ctx->r4 = ADD32(ctx->r2, ctx->r11);
    // 0x8027A268: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x8027A26C: b           L_8027A2C8
    // 0x8027A270: sh          $t6, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r14;
        goto L_8027A2C8;
    // 0x8027A270: sh          $t6, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r14;
    // 0x8027A274: sll         $v0, $a1, 1
    ctx->r2 = S32(ctx->r5 << 1);
    // 0x8027A278: lui         $t8, 0x8029
    ctx->r24 = S32(0X8029 << 16);
    // 0x8027A27C: addu        $t8, $t8, $v0
    ctx->r24 = ADD32(ctx->r24, ctx->r2);
    // 0x8027A280: lui         $t9, 0x8029
    ctx->r25 = S32(0X8029 << 16);
    // 0x8027A284: lh          $t9, -0x79B8($t9)
    ctx->r25 = MEM_H(ctx->r25, -0X79B8);
    // 0x8027A288: lh          $t8, -0x7A08($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X7A08);
    // 0x8027A28C: lui         $t7, 0x8029
    ctx->r15 = S32(0X8029 << 16);
    // 0x8027A290: addiu       $t7, $t7, -0x7A38
    ctx->r15 = ADD32(ctx->r15, -0X7A38);
    // 0x8027A294: addu        $v1, $v0, $t7
    ctx->r3 = ADD32(ctx->r2, ctx->r15);
    // 0x8027A298: subu        $t0, $t8, $t9
    ctx->r8 = SUB32(ctx->r24, ctx->r25);
    // 0x8027A29C: sh          $t0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r8;
    // 0x8027A2A0: lui         $t2, 0x8029
    ctx->r10 = S32(0X8029 << 16);
    // 0x8027A2A4: addu        $t2, $t2, $v0
    ctx->r10 = ADD32(ctx->r10, ctx->r2);
    // 0x8027A2A8: lui         $t3, 0x8029
    ctx->r11 = S32(0X8029 << 16);
    // 0x8027A2AC: lh          $t3, -0x79B6($t3)
    ctx->r11 = MEM_H(ctx->r11, -0X79B6);
    // 0x8027A2B0: lh          $t2, -0x79F0($t2)
    ctx->r10 = MEM_H(ctx->r10, -0X79F0);
    // 0x8027A2B4: lui         $t1, 0x8029
    ctx->r9 = S32(0X8029 << 16);
    // 0x8027A2B8: addiu       $t1, $t1, -0x7A20
    ctx->r9 = ADD32(ctx->r9, -0X7A20);
    // 0x8027A2BC: addu        $a0, $v0, $t1
    ctx->r4 = ADD32(ctx->r2, ctx->r9);
    // 0x8027A2C0: subu        $t4, $t2, $t3
    ctx->r12 = SUB32(ctx->r10, ctx->r11);
    // 0x8027A2C4: sh          $t4, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r12;
L_8027A2C8:
    // 0x8027A2C8: lh          $v0, 0x0($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X0);
    // 0x8027A2CC: addiu       $t5, $zero, 0x3C
    ctx->r13 = ADD32(0, 0X3C);
    // 0x8027A2D0: slti        $at, $v0, 0x3C
    ctx->r1 = SIGNED(ctx->r2) < 0X3C ? 1 : 0;
    // 0x8027A2D4: bne         $at, $zero, L_8027A2E8
    if (ctx->r1 != 0) {
        // 0x8027A2D8: addiu       $t6, $zero, -0x3C
        ctx->r14 = ADD32(0, -0X3C);
            goto L_8027A2E8;
    }
    // 0x8027A2D8: addiu       $t6, $zero, -0x3C
    ctx->r14 = ADD32(0, -0X3C);
    // 0x8027A2DC: sh          $t5, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r13;
    // 0x8027A2E0: lh          $v0, 0x0($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X0);
    // 0x8027A2E4: nop

L_8027A2E8:
    // 0x8027A2E8: slti        $at, $v0, -0x3B
    ctx->r1 = SIGNED(ctx->r2) < -0X3B ? 1 : 0;
    // 0x8027A2EC: beq         $at, $zero, L_8027A2F8
    if (ctx->r1 == 0) {
        // 0x8027A2F0: addiu       $t7, $zero, 0x12C
        ctx->r15 = ADD32(0, 0X12C);
            goto L_8027A2F8;
    }
    // 0x8027A2F0: addiu       $t7, $zero, 0x12C
    ctx->r15 = ADD32(0, 0X12C);
    // 0x8027A2F4: sh          $t6, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r14;
L_8027A2F8:
    // 0x8027A2F8: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    // 0x8027A2FC: addiu       $t8, $zero, -0x12C
    ctx->r24 = ADD32(0, -0X12C);
    // 0x8027A300: slti        $at, $v0, 0x12C
    ctx->r1 = SIGNED(ctx->r2) < 0X12C ? 1 : 0;
    // 0x8027A304: bne         $at, $zero, L_8027A31C
    if (ctx->r1 != 0) {
        // 0x8027A308: slti        $at, $v0, -0x12B
        ctx->r1 = SIGNED(ctx->r2) < -0X12B ? 1 : 0;
            goto L_8027A31C;
    }
    // 0x8027A308: slti        $at, $v0, -0x12B
    ctx->r1 = SIGNED(ctx->r2) < -0X12B ? 1 : 0;
    // 0x8027A30C: sh          $t7, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r15;
    // 0x8027A310: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    // 0x8027A314: nop

    // 0x8027A318: slti        $at, $v0, -0x12B
    ctx->r1 = SIGNED(ctx->r2) < -0X12B ? 1 : 0;
L_8027A31C:
    // 0x8027A31C: beq         $at, $zero, L_8027A328
    if (ctx->r1 == 0) {
        // 0x8027A320: nop
    
            goto L_8027A328;
    }
    // 0x8027A320: nop

    // 0x8027A324: sh          $t8, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r24;
L_8027A328:
    // 0x8027A328: jr          $ra
    // 0x8027A32C: nop

    return;
    // 0x8027A32C: nop

;}
RECOMP_FUNC void func_8027A330(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027A330: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8027A334: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8027A338: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8027A33C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8027A340: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8027A344: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8027A348: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8027A34C: lb          $t8, 0x3A($a0)
    ctx->r24 = MEM_B(ctx->r4, 0X3A);
    // 0x8027A350: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x8027A354: sll         $a0, $a1, 24
    ctx->r4 = S32(ctx->r5 << 24);
    // 0x8027A358: sra         $t9, $a0, 24
    ctx->r25 = S32(SIGNED(ctx->r4) >> 24);
    // 0x8027A35C: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x8027A360: jal         0x8027A490
    // 0x8027A364: sb          $t8, 0x2E($sp)
    MEM_B(0X2E, ctx->r29) = ctx->r24;
    func_8027A490(rdram, ctx);
        goto after_0;
    // 0x8027A364: sb          $t8, 0x2E($sp)
    MEM_B(0X2E, ctx->r29) = ctx->r24;
    after_0:
    // 0x8027A368: lbu         $t0, 0x2E($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X2E);
    // 0x8027A36C: lui         $t2, 0x800B
    ctx->r10 = S32(0X800B << 16);
    // 0x8027A370: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8027A374: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x8027A378: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8027A37C: addiu       $t2, $t2, -0x6AA4
    ctx->r10 = ADD32(ctx->r10, -0X6AA4);
    // 0x8027A380: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x8027A384: andi        $s1, $v0, 0xFF
    ctx->r17 = ctx->r2 & 0XFF;
    // 0x8027A388: addu        $s2, $t1, $t2
    ctx->r18 = ADD32(ctx->r9, ctx->r10);
    // 0x8027A38C: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_8027A390:
    // 0x8027A390: addu        $t3, $s2, $s0
    ctx->r11 = ADD32(ctx->r18, ctx->r16);
    // 0x8027A394: lbu         $t4, 0x0($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X0);
    // 0x8027A398: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8027A39C: bne         $s1, $t4, L_8027A3B0
    if (ctx->r17 != ctx->r12) {
        // 0x8027A3A0: sll         $a1, $s0, 24
        ctx->r5 = S32(ctx->r16 << 24);
            goto L_8027A3B0;
    }
    // 0x8027A3A0: sll         $a1, $s0, 24
    ctx->r5 = S32(ctx->r16 << 24);
    // 0x8027A3A4: sra         $t5, $a1, 24
    ctx->r13 = S32(SIGNED(ctx->r5) >> 24);
    // 0x8027A3A8: jal         0x80279E70
    // 0x8027A3AC: or          $a1, $t5, $zero
    ctx->r5 = ctx->r13 | 0;
    func_80279E70(rdram, ctx);
        goto after_1;
    // 0x8027A3AC: or          $a1, $t5, $zero
    ctx->r5 = ctx->r13 | 0;
    after_1:
L_8027A3B0:
    // 0x8027A3B0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8027A3B4: andi        $t6, $s0, 0xFF
    ctx->r14 = ctx->r16 & 0XFF;
    // 0x8027A3B8: slti        $at, $t6, 0xB
    ctx->r1 = SIGNED(ctx->r14) < 0XB ? 1 : 0;
    // 0x8027A3BC: bne         $at, $zero, L_8027A390
    if (ctx->r1 != 0) {
        // 0x8027A3C0: or          $s0, $t6, $zero
        ctx->r16 = ctx->r14 | 0;
            goto L_8027A390;
    }
    // 0x8027A3C0: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x8027A3C4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8027A3C8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8027A3CC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8027A3D0: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8027A3D4: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8027A3D8: jr          $ra
    // 0x8027A3DC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8027A3DC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8027A3E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027A3E0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8027A3E4: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8027A3E8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8027A3EC: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8027A3F0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8027A3F4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8027A3F8: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8027A3FC: lb          $t8, 0x3A($a0)
    ctx->r24 = MEM_B(ctx->r4, 0X3A);
    // 0x8027A400: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x8027A404: sll         $a0, $a1, 24
    ctx->r4 = S32(ctx->r5 << 24);
    // 0x8027A408: sra         $t9, $a0, 24
    ctx->r25 = S32(SIGNED(ctx->r4) >> 24);
    // 0x8027A40C: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x8027A410: jal         0x8027A490
    // 0x8027A414: sb          $t8, 0x2E($sp)
    MEM_B(0X2E, ctx->r29) = ctx->r24;
    func_8027A490(rdram, ctx);
        goto after_0;
    // 0x8027A414: sb          $t8, 0x2E($sp)
    MEM_B(0X2E, ctx->r29) = ctx->r24;
    after_0:
    // 0x8027A418: lbu         $t0, 0x2E($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X2E);
    // 0x8027A41C: lui         $t2, 0x800B
    ctx->r10 = S32(0X800B << 16);
    // 0x8027A420: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8027A424: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x8027A428: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8027A42C: addiu       $t2, $t2, -0x6AA4
    ctx->r10 = ADD32(ctx->r10, -0X6AA4);
    // 0x8027A430: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x8027A434: andi        $s1, $v0, 0xFF
    ctx->r17 = ctx->r2 & 0XFF;
    // 0x8027A438: addu        $s2, $t1, $t2
    ctx->r18 = ADD32(ctx->r9, ctx->r10);
    // 0x8027A43C: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_8027A440:
    // 0x8027A440: addu        $t3, $s2, $s0
    ctx->r11 = ADD32(ctx->r18, ctx->r16);
    // 0x8027A444: lbu         $t4, 0x0($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X0);
    // 0x8027A448: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8027A44C: bne         $s1, $t4, L_8027A460
    if (ctx->r17 != ctx->r12) {
        // 0x8027A450: sll         $a1, $s0, 24
        ctx->r5 = S32(ctx->r16 << 24);
            goto L_8027A460;
    }
    // 0x8027A450: sll         $a1, $s0, 24
    ctx->r5 = S32(ctx->r16 << 24);
    // 0x8027A454: sra         $t5, $a1, 24
    ctx->r13 = S32(SIGNED(ctx->r5) >> 24);
    // 0x8027A458: jal         0x8027A204
    // 0x8027A45C: or          $a1, $t5, $zero
    ctx->r5 = ctx->r13 | 0;
    func_8027A204(rdram, ctx);
        goto after_1;
    // 0x8027A45C: or          $a1, $t5, $zero
    ctx->r5 = ctx->r13 | 0;
    after_1:
L_8027A460:
    // 0x8027A460: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8027A464: andi        $t6, $s0, 0xFF
    ctx->r14 = ctx->r16 & 0XFF;
    // 0x8027A468: slti        $at, $t6, 0xB
    ctx->r1 = SIGNED(ctx->r14) < 0XB ? 1 : 0;
    // 0x8027A46C: bne         $at, $zero, L_8027A440
    if (ctx->r1 != 0) {
        // 0x8027A470: or          $s0, $t6, $zero
        ctx->r16 = ctx->r14 | 0;
            goto L_8027A440;
    }
    // 0x8027A470: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x8027A474: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8027A478: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8027A47C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8027A480: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8027A484: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8027A488: jr          $ra
    // 0x8027A48C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8027A48C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8027A42C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027A42C: addiu       $t2, $t2, -0x6AA4
    ctx->r10 = ADD32(ctx->r10, -0X6AA4);
    // 0x8027A430: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x8027A434: andi        $s1, $v0, 0xFF
    ctx->r17 = ctx->r2 & 0XFF;
    // 0x8027A438: addu        $s2, $t1, $t2
    ctx->r18 = ADD32(ctx->r9, ctx->r10);
    // 0x8027A43C: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_8027A440:
    // 0x8027A440: addu        $t3, $s2, $s0
    ctx->r11 = ADD32(ctx->r18, ctx->r16);
    // 0x8027A444: lbu         $t4, 0x0($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X0);
    // 0x8027A448: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8027A44C: bne         $s1, $t4, L_8027A460
    if (ctx->r17 != ctx->r12) {
        // 0x8027A450: sll         $a1, $s0, 24
        ctx->r5 = S32(ctx->r16 << 24);
            goto L_8027A460;
    }
    // 0x8027A450: sll         $a1, $s0, 24
    ctx->r5 = S32(ctx->r16 << 24);
    // 0x8027A454: sra         $t5, $a1, 24
    ctx->r13 = S32(SIGNED(ctx->r5) >> 24);
    // 0x8027A458: jal         0x8027A204
    // 0x8027A45C: or          $a1, $t5, $zero
    ctx->r5 = ctx->r13 | 0;
    func_8027A204(rdram, ctx);
        goto after_0;
    // 0x8027A45C: or          $a1, $t5, $zero
    ctx->r5 = ctx->r13 | 0;
    after_0:
L_8027A460:
    // 0x8027A460: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8027A464: andi        $t6, $s0, 0xFF
    ctx->r14 = ctx->r16 & 0XFF;
    // 0x8027A468: slti        $at, $t6, 0xB
    ctx->r1 = SIGNED(ctx->r14) < 0XB ? 1 : 0;
    // 0x8027A46C: bne         $at, $zero, L_8027A440
    if (ctx->r1 != 0) {
        // 0x8027A470: or          $s0, $t6, $zero
        ctx->r16 = ctx->r14 | 0;
            goto L_8027A440;
    }
    // 0x8027A470: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x8027A474: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8027A478: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8027A47C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8027A480: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8027A484: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8027A488: jr          $ra
    // 0x8027A48C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8027A48C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8027A490(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027A490: sll         $t6, $a0, 24
    ctx->r14 = S32(ctx->r4 << 24);
    // 0x8027A494: sra         $t7, $t6, 24
    ctx->r15 = S32(SIGNED(ctx->r14) >> 24);
    // 0x8027A498: beq         $t7, $zero, L_8027A4BC
    if (ctx->r15 == 0) {
        // 0x8027A49C: sw          $a0, 0x0($sp)
        MEM_W(0X0, ctx->r29) = ctx->r4;
            goto L_8027A4BC;
    }
    // 0x8027A49C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8027A4A0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8027A4A4: beq         $t7, $at, L_8027A4C4
    if (ctx->r15 == ctx->r1) {
        // 0x8027A4A8: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8027A4C4;
    }
    // 0x8027A4A8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8027A4AC: beq         $t7, $at, L_8027A4CC
    if (ctx->r15 == ctx->r1) {
        // 0x8027A4B0: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8027A4CC;
    }
    // 0x8027A4B0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8027A4B4: b           L_8027A4D4
    // 0x8027A4B8: nop

        goto L_8027A4D4;
    // 0x8027A4B8: nop

L_8027A4BC:
    // 0x8027A4BC: jr          $ra
    // 0x8027A4C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8027A4C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8027A4C4:
    // 0x8027A4C4: jr          $ra
    // 0x8027A4C8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    return;
    // 0x8027A4C8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8027A4CC:
    // 0x8027A4CC: jr          $ra
    // 0x8027A4D0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    return;
    // 0x8027A4D0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_8027A4D4:
    // 0x8027A4D4: jr          $ra
    // 0x8027A4D8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8027A4D8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_8027A4C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027A4C4: jr          $ra
    // 0x8027A4C8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    return;
    // 0x8027A4C8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8027A4CC: jr          $ra
    // 0x8027A4D0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    return;
    // 0x8027A4D0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8027A4D4: jr          $ra
    // 0x8027A4D8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8027A4D8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_8027A4DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027A4DC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8027A4E0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8027A4E4: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x8027A4E8: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x8027A4EC: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x8027A4F0: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8027A4F4: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8027A4F8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8027A4FC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8027A500: addiu       $a0, $a0, -0x5A50
    ctx->r4 = ADD32(ctx->r4, -0X5A50);
    // 0x8027A504: jal         0x800293DC
    // 0x8027A508: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800293DC(rdram, ctx);
        goto after_0;
    // 0x8027A508: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x8027A50C: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x8027A510: lw          $t6, 0x1CF0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1CF0);
    // 0x8027A514: lw          $s0, 0x14($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X14);
    // 0x8027A518: lb          $t7, 0x2E($t6)
    ctx->r15 = MEM_B(ctx->r14, 0X2E);
    // 0x8027A51C: addiu       $s3, $zero, -0x1
    ctx->r19 = ADD32(0, -0X1);
    // 0x8027A520: bne         $t7, $zero, L_8027A534
    if (ctx->r15 != 0) {
        // 0x8027A524: lui         $s5, 0x8028
        ctx->r21 = S32(0X8028 << 16);
            goto L_8027A534;
    }
    // 0x8027A524: lui         $s5, 0x8028
    ctx->r21 = S32(0X8028 << 16);
    // 0x8027A528: lui         $s5, 0x8028
    ctx->r21 = S32(0X8028 << 16);
    // 0x8027A52C: b           L_8027A538
    // 0x8027A530: addiu       $s5, $s5, 0x1424
    ctx->r21 = ADD32(ctx->r21, 0X1424);
        goto L_8027A538;
    // 0x8027A530: addiu       $s5, $s5, 0x1424
    ctx->r21 = ADD32(ctx->r21, 0X1424);
L_8027A534:
    // 0x8027A534: addiu       $s5, $s5, 0x1430
    ctx->r21 = ADD32(ctx->r21, 0X1430);
L_8027A538:
    // 0x8027A538: beq         $s0, $s3, L_8027A58C
    if (ctx->r16 == ctx->r19) {
        // 0x8027A53C: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_8027A58C;
    }
    // 0x8027A53C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8027A540: lui         $s4, 0x8028
    ctx->r20 = S32(0X8028 << 16);
    // 0x8027A544: addiu       $s4, $s4, 0x1418
    ctx->r20 = ADD32(ctx->r20, 0X1418);
L_8027A548:
    // 0x8027A548: sll         $v0, $s1, 2
    ctx->r2 = S32(ctx->r17 << 2);
    // 0x8027A54C: addu        $s2, $s4, $v0
    ctx->r18 = ADD32(ctx->r20, ctx->r2);
    // 0x8027A550: addu        $t8, $s5, $v0
    ctx->r24 = ADD32(ctx->r21, ctx->r2);
    // 0x8027A554: lw          $a3, 0x0($t8)
    ctx->r7 = MEM_W(ctx->r24, 0X0);
    // 0x8027A558: lhu         $a1, 0x0($s2)
    ctx->r5 = MEM_HU(ctx->r18, 0X0);
    // 0x8027A55C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8027A560: jal         0x8004CD24
    // 0x8027A564: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    func_8004CD24(rdram, ctx);
        goto after_1;
    // 0x8027A564: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_1:
    // 0x8027A568: lbu         $a2, 0x2($s2)
    ctx->r6 = MEM_BU(ctx->r18, 0X2);
    // 0x8027A56C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8027A570: jal         0x8002135C
    // 0x8027A574: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x8027A574: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x8027A578: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x8027A57C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8027A580: andi        $t9, $s1, 0xFF
    ctx->r25 = ctx->r17 & 0XFF;
    // 0x8027A584: bne         $s0, $s3, L_8027A548
    if (ctx->r16 != ctx->r19) {
        // 0x8027A588: or          $s1, $t9, $zero
        ctx->r17 = ctx->r25 | 0;
            goto L_8027A548;
    }
    // 0x8027A588: or          $s1, $t9, $zero
    ctx->r17 = ctx->r25 | 0;
L_8027A58C:
    // 0x8027A58C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8027A590: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8027A594: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8027A598: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8027A59C: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8027A5A0: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x8027A5A4: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x8027A5A8: jr          $ra
    // 0x8027A5AC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8027A5AC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8027A58C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027A58C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8027A590: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8027A594: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8027A598: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8027A59C: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8027A5A0: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x8027A5A4: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x8027A5A8: jr          $ra
    // 0x8027A5AC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8027A5AC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8027A5B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027A5B0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8027A5B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027A5B8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8027A5BC: lw          $t1, 0x8($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X8);
    // 0x8027A5C0: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x8027A5C4: lb          $v0, 0x38($t1)
    ctx->r2 = MEM_B(ctx->r9, 0X38);
    // 0x8027A5C8: lbu         $v1, 0x3A($t1)
    ctx->r3 = MEM_BU(ctx->r9, 0X3A);
    // 0x8027A5CC: lbu         $a2, 0x3D($t1)
    ctx->r6 = MEM_BU(ctx->r9, 0X3D);
    // 0x8027A5D0: beq         $v0, $t0, L_8027A5FC
    if (ctx->r2 == ctx->r8) {
        // 0x8027A5D4: or          $a3, $a1, $zero
        ctx->r7 = ctx->r5 | 0;
            goto L_8027A5FC;
    }
    // 0x8027A5D4: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x8027A5D8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8027A5DC: beq         $v0, $at, L_8027A680
    if (ctx->r2 == ctx->r1) {
        // 0x8027A5E0: lui         $a0, 0x8005
        ctx->r4 = S32(0X8005 << 16);
            goto L_8027A680;
    }
    // 0x8027A5E0: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8027A5E4: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8027A5E8: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    // 0x8027A5EC: jal         0x8002A468
    // 0x8027A5F0: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    func_8002A468(rdram, ctx);
        goto after_0;
    // 0x8027A5F0: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    after_0:
    // 0x8027A5F4: b           L_8027A72C
    // 0x8027A5F8: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
        goto L_8027A72C;
    // 0x8027A5F8: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
L_8027A5FC:
    // 0x8027A5FC: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8027A600: addiu       $a0, $a0, -0x3228
    ctx->r4 = ADD32(ctx->r4, -0X3228);
    // 0x8027A604: sb          $v1, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r3;
    // 0x8027A608: sb          $a2, 0x1D($sp)
    MEM_B(0X1D, ctx->r29) = ctx->r6;
    // 0x8027A60C: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x8027A610: jal         0x8002A468
    // 0x8027A614: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    func_8002A468(rdram, ctx);
        goto after_1;
    // 0x8027A614: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    after_1:
    // 0x8027A618: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8027A61C: lbu         $v1, 0x1F($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X1F);
    // 0x8027A620: lb          $v0, 0x3E($t7)
    ctx->r2 = MEM_B(ctx->r15, 0X3E);
    // 0x8027A624: lbu         $a2, 0x1D($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X1D);
    // 0x8027A628: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x8027A62C: beq         $v0, $zero, L_8027A644
    if (ctx->r2 == 0) {
        // 0x8027A630: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_8027A644;
    }
    // 0x8027A630: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8027A634: beq         $v0, $a0, L_8027A654
    if (ctx->r2 == ctx->r4) {
        // 0x8027A638: sll         $t8, $v1, 2
        ctx->r24 = S32(ctx->r3 << 2);
            goto L_8027A654;
    }
    // 0x8027A638: sll         $t8, $v1, 2
    ctx->r24 = S32(ctx->r3 << 2);
    // 0x8027A63C: b           L_8027A72C
    // 0x8027A640: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
        goto L_8027A72C;
    // 0x8027A640: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
L_8027A644:
    // 0x8027A644: jal         0x8027A7E4
    // 0x8027A648: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_8027A7E4(rdram, ctx);
        goto after_2;
    // 0x8027A648: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_2:
    // 0x8027A64C: b           L_8027A72C
    // 0x8027A650: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
        goto L_8027A72C;
    // 0x8027A650: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
L_8027A654:
    // 0x8027A654: subu        $t8, $t8, $v1
    ctx->r24 = SUB32(ctx->r24, ctx->r3);
    // 0x8027A658: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8027A65C: subu        $t8, $t8, $v1
    ctx->r24 = SUB32(ctx->r24, ctx->r3);
    // 0x8027A660: addu        $t9, $t8, $a2
    ctx->r25 = ADD32(ctx->r24, ctx->r6);
    // 0x8027A664: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8027A668: addu        $a1, $a1, $t9
    ctx->r5 = ADD32(ctx->r5, ctx->r25);
    // 0x8027A66C: lbu         $a1, -0x6AA4($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X6AA4);
    // 0x8027A670: jal         0x8027A85C
    // 0x8027A674: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_8027A85C(rdram, ctx);
        goto after_3;
    // 0x8027A674: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_3:
    // 0x8027A678: b           L_8027A72C
    // 0x8027A67C: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
        goto L_8027A72C;
    // 0x8027A67C: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
L_8027A680:
    // 0x8027A680: addiu       $a0, $a0, -0x3228
    ctx->r4 = ADD32(ctx->r4, -0X3228);
    // 0x8027A684: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x8027A688: jal         0x8002A468
    // 0x8027A68C: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    func_8002A468(rdram, ctx);
        goto after_4;
    // 0x8027A68C: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    after_4:
    // 0x8027A690: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x8027A694: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x8027A698: lb          $v0, 0x42($t2)
    ctx->r2 = MEM_B(ctx->r10, 0X42);
    // 0x8027A69C: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x8027A6A0: beq         $v0, $zero, L_8027A6C0
    if (ctx->r2 == 0) {
        // 0x8027A6A4: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_8027A6C0;
    }
    // 0x8027A6A4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8027A6A8: beq         $v0, $a0, L_8027A6D4
    if (ctx->r2 == ctx->r4) {
        // 0x8027A6AC: lw          $t3, 0x18($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X18);
            goto L_8027A6D4;
    }
    // 0x8027A6AC: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x8027A6B0: beq         $v0, $t0, L_8027A6D4
    if (ctx->r2 == ctx->r8) {
        // 0x8027A6B4: lw          $t3, 0x18($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X18);
            goto L_8027A6D4;
    }
    // 0x8027A6B4: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x8027A6B8: b           L_8027A72C
    // 0x8027A6BC: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
        goto L_8027A72C;
    // 0x8027A6BC: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
L_8027A6C0:
    // 0x8027A6C0: jal         0x8027A7E4
    // 0x8027A6C4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_8027A7E4(rdram, ctx);
        goto after_5;
    // 0x8027A6C4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_5:
    // 0x8027A6C8: b           L_8027A72C
    // 0x8027A6CC: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
        goto L_8027A72C;
    // 0x8027A6CC: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x8027A6D0: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
L_8027A6D4:
    // 0x8027A6D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8027A6D8: lb          $v0, 0x43($t3)
    ctx->r2 = MEM_B(ctx->r11, 0X43);
    // 0x8027A6DC: nop

    // 0x8027A6E0: beq         $v0, $zero, L_8027A700
    if (ctx->r2 == 0) {
        // 0x8027A6E4: nop
    
            goto L_8027A700;
    }
    // 0x8027A6E4: nop

    // 0x8027A6E8: beq         $v0, $a0, L_8027A710
    if (ctx->r2 == ctx->r4) {
        // 0x8027A6EC: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_8027A710;
    }
    // 0x8027A6EC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8027A6F0: beq         $v0, $t0, L_8027A720
    if (ctx->r2 == ctx->r8) {
        // 0x8027A6F4: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_8027A720;
    }
    // 0x8027A6F4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8027A6F8: b           L_8027A72C
    // 0x8027A6FC: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
        goto L_8027A72C;
    // 0x8027A6FC: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
L_8027A700:
    // 0x8027A700: jal         0x8027A85C
    // 0x8027A704: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_8027A85C(rdram, ctx);
        goto after_6;
    // 0x8027A704: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_6:
    // 0x8027A708: b           L_8027A72C
    // 0x8027A70C: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
        goto L_8027A72C;
    // 0x8027A70C: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
L_8027A710:
    // 0x8027A710: jal         0x8027A85C
    // 0x8027A714: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_8027A85C(rdram, ctx);
        goto after_7;
    // 0x8027A714: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_7:
    // 0x8027A718: b           L_8027A72C
    // 0x8027A71C: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
        goto L_8027A72C;
    // 0x8027A71C: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
L_8027A720:
    // 0x8027A720: jal         0x8027A85C
    // 0x8027A724: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8027A85C(rdram, ctx);
        goto after_8;
    // 0x8027A724: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_8:
    // 0x8027A728: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
L_8027A72C:
    // 0x8027A72C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8027A730: lw          $a1, 0x14($t4)
    ctx->r5 = MEM_W(ctx->r12, 0X14);
    // 0x8027A734: jal         0x8027A74C
    // 0x8027A738: nop

    func_8027A74C(rdram, ctx);
        goto after_9;
    // 0x8027A738: nop

    after_9:
    // 0x8027A73C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027A740: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8027A744: jr          $ra
    // 0x8027A748: nop

    return;
    // 0x8027A748: nop

;}
RECOMP_FUNC void func_8027A74C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027A74C: lb          $v0, 0x38($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X38);
    // 0x8027A750: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8027A754: beq         $v0, $at, L_8027A76C
    if (ctx->r2 == ctx->r1) {
        // 0x8027A758: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8027A76C;
    }
    // 0x8027A758: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8027A75C: beq         $v0, $at, L_8027A790
    if (ctx->r2 == ctx->r1) {
        // 0x8027A760: nop
    
            goto L_8027A790;
    }
    // 0x8027A760: nop

    // 0x8027A764: jr          $ra
    // 0x8027A768: nop

    return;
    // 0x8027A768: nop

L_8027A76C:
    // 0x8027A76C: lb          $t6, 0x2E($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X2E);
    // 0x8027A770: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x8027A774: bne         $t6, $zero, L_8027A788
    if (ctx->r14 != 0) {
        // 0x8027A778: nop
    
            goto L_8027A788;
    }
    // 0x8027A778: nop

    // 0x8027A77C: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x8027A780: b           L_8027A7AC
    // 0x8027A784: addiu       $v0, $v0, 0x1424
    ctx->r2 = ADD32(ctx->r2, 0X1424);
        goto L_8027A7AC;
    // 0x8027A784: addiu       $v0, $v0, 0x1424
    ctx->r2 = ADD32(ctx->r2, 0X1424);
L_8027A788:
    // 0x8027A788: b           L_8027A7AC
    // 0x8027A78C: addiu       $v0, $v0, 0x1430
    ctx->r2 = ADD32(ctx->r2, 0X1430);
        goto L_8027A7AC;
    // 0x8027A78C: addiu       $v0, $v0, 0x1430
    ctx->r2 = ADD32(ctx->r2, 0X1430);
L_8027A790:
    // 0x8027A790: lb          $t7, 0x2E($a0)
    ctx->r15 = MEM_B(ctx->r4, 0X2E);
    // 0x8027A794: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x8027A798: bne         $t7, $zero, L_8027A7AC
    if (ctx->r15 != 0) {
        // 0x8027A79C: addiu       $v0, $v0, 0x152C
        ctx->r2 = ADD32(ctx->r2, 0X152C);
            goto L_8027A7AC;
    }
    // 0x8027A79C: addiu       $v0, $v0, 0x152C
    ctx->r2 = ADD32(ctx->r2, 0X152C);
    // 0x8027A7A0: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x8027A7A4: b           L_8027A7AC
    // 0x8027A7A8: addiu       $v0, $v0, 0x1520
    ctx->r2 = ADD32(ctx->r2, 0X1520);
        goto L_8027A7AC;
    // 0x8027A7A8: addiu       $v0, $v0, 0x1520
    ctx->r2 = ADD32(ctx->r2, 0X1520);
L_8027A7AC:
    // 0x8027A7AC: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8027A7B0: beq         $a1, $a0, L_8027A7DC
    if (ctx->r5 == ctx->r4) {
        // 0x8027A7B4: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_8027A7DC;
    }
    // 0x8027A7B4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_8027A7B8:
    // 0x8027A7B8: sll         $t8, $v1, 2
    ctx->r24 = S32(ctx->r3 << 2);
    // 0x8027A7BC: addu        $t9, $v0, $t8
    ctx->r25 = ADD32(ctx->r2, ctx->r24);
    // 0x8027A7C0: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x8027A7C4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8027A7C8: sw          $t0, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r8;
    // 0x8027A7CC: lw          $a1, 0x0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X0);
    // 0x8027A7D0: andi        $t1, $v1, 0xFF
    ctx->r9 = ctx->r3 & 0XFF;
    // 0x8027A7D4: bne         $a1, $a0, L_8027A7B8
    if (ctx->r5 != ctx->r4) {
        // 0x8027A7D8: or          $v1, $t1, $zero
        ctx->r3 = ctx->r9 | 0;
            goto L_8027A7B8;
    }
    // 0x8027A7D8: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
L_8027A7DC:
    // 0x8027A7DC: jr          $ra
    // 0x8027A7E0: nop

    return;
    // 0x8027A7E0: nop

;}
RECOMP_FUNC void func_8027A77C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027A77C: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x8027A780: b           L_8027A7AC
    // 0x8027A784: addiu       $v0, $v0, 0x1424
    ctx->r2 = ADD32(ctx->r2, 0X1424);
        goto L_8027A7AC;
    // 0x8027A784: addiu       $v0, $v0, 0x1424
    ctx->r2 = ADD32(ctx->r2, 0X1424);
    // 0x8027A788: b           L_8027A7AC
    // 0x8027A78C: addiu       $v0, $v0, 0x1430
    ctx->r2 = ADD32(ctx->r2, 0X1430);
        goto L_8027A7AC;
    // 0x8027A78C: addiu       $v0, $v0, 0x1430
    ctx->r2 = ADD32(ctx->r2, 0X1430);
    // 0x8027A790: lb          $t7, 0x2E($a0)
    ctx->r15 = MEM_B(ctx->r4, 0X2E);
    // 0x8027A794: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x8027A798: bne         $t7, $zero, L_8027A7AC
    if (ctx->r15 != 0) {
        // 0x8027A79C: addiu       $v0, $v0, 0x152C
        ctx->r2 = ADD32(ctx->r2, 0X152C);
            goto L_8027A7AC;
    }
    // 0x8027A79C: addiu       $v0, $v0, 0x152C
    ctx->r2 = ADD32(ctx->r2, 0X152C);
    // 0x8027A7A0: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x8027A7A4: b           L_8027A7AC
    // 0x8027A7A8: addiu       $v0, $v0, 0x1520
    ctx->r2 = ADD32(ctx->r2, 0X1520);
        goto L_8027A7AC;
    // 0x8027A7A8: addiu       $v0, $v0, 0x1520
    ctx->r2 = ADD32(ctx->r2, 0X1520);
L_8027A7AC:
    // 0x8027A7AC: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8027A7B0: beq         $a1, $a0, L_8027A7DC
    if (ctx->r5 == ctx->r4) {
        // 0x8027A7B4: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_8027A7DC;
    }
    // 0x8027A7B4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_8027A7B8:
    // 0x8027A7B8: sll         $t8, $v1, 2
    ctx->r24 = S32(ctx->r3 << 2);
    // 0x8027A7BC: addu        $t9, $v0, $t8
    ctx->r25 = ADD32(ctx->r2, ctx->r24);
    // 0x8027A7C0: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x8027A7C4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8027A7C8: sw          $t0, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r8;
    // 0x8027A7CC: lw          $a1, 0x0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X0);
    // 0x8027A7D0: andi        $t1, $v1, 0xFF
    ctx->r9 = ctx->r3 & 0XFF;
    // 0x8027A7D4: bne         $a1, $a0, L_8027A7B8
    if (ctx->r5 != ctx->r4) {
        // 0x8027A7D8: or          $v1, $t1, $zero
        ctx->r3 = ctx->r9 | 0;
            goto L_8027A7B8;
    }
    // 0x8027A7D8: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
L_8027A7DC:
    // 0x8027A7DC: jr          $ra
    // 0x8027A7E0: nop

    return;
    // 0x8027A7E0: nop

;}
RECOMP_FUNC void func_8027A7E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027A7E4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8027A7E8: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8027A7EC: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x8027A7F0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8027A7F4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8027A7F8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8027A7FC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8027A800: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8027A804: beq         $a0, $s2, L_8027A840
    if (ctx->r4 == ctx->r18) {
        // 0x8027A808: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_8027A840;
    }
    // 0x8027A808: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8027A80C: lui         $s3, 0x8028
    ctx->r19 = S32(0X8028 << 16);
    // 0x8027A810: addiu       $s3, $s3, 0x1418
    ctx->r19 = ADD32(ctx->r19, 0X1418);
L_8027A814:
    // 0x8027A814: sll         $t6, $s1, 2
    ctx->r14 = S32(ctx->r17 << 2);
    // 0x8027A818: addu        $t7, $s3, $t6
    ctx->r15 = ADD32(ctx->r19, ctx->r14);
    // 0x8027A81C: lbu         $a2, 0x2($t7)
    ctx->r6 = MEM_BU(ctx->r15, 0X2);
    // 0x8027A820: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8027A824: jal         0x8002135C
    // 0x8027A828: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8002135C(rdram, ctx);
        goto after_0;
    // 0x8027A828: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x8027A82C: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x8027A830: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8027A834: andi        $t8, $s1, 0xFF
    ctx->r24 = ctx->r17 & 0XFF;
    // 0x8027A838: bne         $s0, $s2, L_8027A814
    if (ctx->r16 != ctx->r18) {
        // 0x8027A83C: or          $s1, $t8, $zero
        ctx->r17 = ctx->r24 | 0;
            goto L_8027A814;
    }
    // 0x8027A83C: or          $s1, $t8, $zero
    ctx->r17 = ctx->r24 | 0;
L_8027A840:
    // 0x8027A840: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8027A844: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8027A848: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8027A84C: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8027A850: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8027A854: jr          $ra
    // 0x8027A858: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8027A858: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8027A85C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027A85C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8027A860: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027A864: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8027A868: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8027A86C: jal         0x8002A7F8
    // 0x8027A870: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_8002A7F8(rdram, ctx);
        goto after_0;
    // 0x8027A870: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x8027A874: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8027A878: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8027A87C: jal         0x8002A7F8
    // 0x8027A880: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8002A7F8(rdram, ctx);
        goto after_1;
    // 0x8027A880: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x8027A884: lbu         $v1, 0x27($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X27);
    // 0x8027A888: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8027A88C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8027A890: beq         $v1, $at, L_8027A8B8
    if (ctx->r3 == ctx->r1) {
        // 0x8027A894: sw          $v0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r2;
            goto L_8027A8B8;
    }
    // 0x8027A894: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8027A898: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8027A89C: beq         $v1, $at, L_8027A8EC
    if (ctx->r3 == ctx->r1) {
        // 0x8027A8A0: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_8027A8EC;
    }
    // 0x8027A8A0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8027A8A4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8027A8A8: beq         $v1, $at, L_8027A91C
    if (ctx->r3 == ctx->r1) {
        // 0x8027A8AC: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_8027A91C;
    }
    // 0x8027A8AC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8027A8B0: b           L_8027A948
    // 0x8027A8B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8027A948;
    // 0x8027A8B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027A8B8:
    // 0x8027A8B8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8027A8BC: jal         0x8002135C
    // 0x8027A8C0: addiu       $a2, $zero, 0xCA
    ctx->r6 = ADD32(0, 0XCA);
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x8027A8C0: addiu       $a2, $zero, 0xCA
    ctx->r6 = ADD32(0, 0XCA);
    after_2:
    // 0x8027A8C4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8027A8C8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8027A8CC: jal         0x8002135C
    // 0x8027A8D0: addiu       $a2, $zero, 0xCD
    ctx->r6 = ADD32(0, 0XCD);
    func_8002135C(rdram, ctx);
        goto after_3;
    // 0x8027A8D0: addiu       $a2, $zero, 0xCD
    ctx->r6 = ADD32(0, 0XCD);
    after_3:
    // 0x8027A8D4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8027A8D8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8027A8DC: jal         0x8002135C
    // 0x8027A8E0: addiu       $a2, $zero, 0xCD
    ctx->r6 = ADD32(0, 0XCD);
    func_8002135C(rdram, ctx);
        goto after_4;
    // 0x8027A8E0: addiu       $a2, $zero, 0xCD
    ctx->r6 = ADD32(0, 0XCD);
    after_4:
    // 0x8027A8E4: b           L_8027A948
    // 0x8027A8E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8027A948;
    // 0x8027A8E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027A8EC:
    // 0x8027A8EC: jal         0x8002135C
    // 0x8027A8F0: addiu       $a2, $zero, 0xCD
    ctx->r6 = ADD32(0, 0XCD);
    func_8002135C(rdram, ctx);
        goto after_5;
    // 0x8027A8F0: addiu       $a2, $zero, 0xCD
    ctx->r6 = ADD32(0, 0XCD);
    after_5:
    // 0x8027A8F4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8027A8F8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8027A8FC: jal         0x8002135C
    // 0x8027A900: addiu       $a2, $zero, 0xCB
    ctx->r6 = ADD32(0, 0XCB);
    func_8002135C(rdram, ctx);
        goto after_6;
    // 0x8027A900: addiu       $a2, $zero, 0xCB
    ctx->r6 = ADD32(0, 0XCB);
    after_6:
    // 0x8027A904: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8027A908: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8027A90C: jal         0x8002135C
    // 0x8027A910: addiu       $a2, $zero, 0xCD
    ctx->r6 = ADD32(0, 0XCD);
    func_8002135C(rdram, ctx);
        goto after_7;
    // 0x8027A910: addiu       $a2, $zero, 0xCD
    ctx->r6 = ADD32(0, 0XCD);
    after_7:
    // 0x8027A914: b           L_8027A948
    // 0x8027A918: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8027A948;
    // 0x8027A918: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027A91C:
    // 0x8027A91C: jal         0x8002135C
    // 0x8027A920: addiu       $a2, $zero, 0xCD
    ctx->r6 = ADD32(0, 0XCD);
    func_8002135C(rdram, ctx);
        goto after_8;
    // 0x8027A920: addiu       $a2, $zero, 0xCD
    ctx->r6 = ADD32(0, 0XCD);
    after_8:
    // 0x8027A924: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8027A928: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8027A92C: jal         0x8002135C
    // 0x8027A930: addiu       $a2, $zero, 0xCD
    ctx->r6 = ADD32(0, 0XCD);
    func_8002135C(rdram, ctx);
        goto after_9;
    // 0x8027A930: addiu       $a2, $zero, 0xCD
    ctx->r6 = ADD32(0, 0XCD);
    after_9:
    // 0x8027A934: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8027A938: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8027A93C: jal         0x8002135C
    // 0x8027A940: addiu       $a2, $zero, 0xCC
    ctx->r6 = ADD32(0, 0XCC);
    func_8002135C(rdram, ctx);
        goto after_10;
    // 0x8027A940: addiu       $a2, $zero, 0xCC
    ctx->r6 = ADD32(0, 0XCC);
    after_10:
    // 0x8027A944: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027A948:
    // 0x8027A948: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8027A94C: jr          $ra
    // 0x8027A950: nop

    return;
    // 0x8027A950: nop

;}
RECOMP_FUNC void func_8027A954(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027A954: jr          $ra
    // 0x8027A958: nop

    return;
    // 0x8027A958: nop

;}
RECOMP_FUNC void func_8027A95C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027A95C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8027A960: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8027A964: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x8027A968: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x8027A96C: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x8027A970: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8027A974: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8027A978: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8027A97C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8027A980: addiu       $a0, $a0, -0x55D0
    ctx->r4 = ADD32(ctx->r4, -0X55D0);
    // 0x8027A984: jal         0x800293DC
    // 0x8027A988: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800293DC(rdram, ctx);
        goto after_0;
    // 0x8027A988: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x8027A98C: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x8027A990: lw          $t6, 0x1CF0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1CF0);
    // 0x8027A994: lui         $s5, 0x8028
    ctx->r21 = S32(0X8028 << 16);
    // 0x8027A998: lb          $t7, 0x2E($t6)
    ctx->r15 = MEM_B(ctx->r14, 0X2E);
    // 0x8027A99C: addiu       $s5, $s5, 0x1550
    ctx->r21 = ADD32(ctx->r21, 0X1550);
    // 0x8027A9A0: bne         $t7, $zero, L_8027A9B4
    if (ctx->r15 != 0) {
        // 0x8027A9A4: lui         $s4, 0x8028
        ctx->r20 = S32(0X8028 << 16);
            goto L_8027A9B4;
    }
    // 0x8027A9A4: lui         $s4, 0x8028
    ctx->r20 = S32(0X8028 << 16);
    // 0x8027A9A8: lui         $s5, 0x8028
    ctx->r21 = S32(0X8028 << 16);
    // 0x8027A9AC: b           L_8027A9B4
    // 0x8027A9B0: addiu       $s5, $s5, 0x1544
    ctx->r21 = ADD32(ctx->r21, 0X1544);
        goto L_8027A9B4;
    // 0x8027A9B0: addiu       $s5, $s5, 0x1544
    ctx->r21 = ADD32(ctx->r21, 0X1544);
L_8027A9B4:
    // 0x8027A9B4: lw          $s0, 0x14($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X14);
    // 0x8027A9B8: addiu       $s3, $zero, -0x1
    ctx->r19 = ADD32(0, -0X1);
    // 0x8027A9BC: beq         $s0, $s3, L_8027AA0C
    if (ctx->r16 == ctx->r19) {
        // 0x8027A9C0: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_8027AA0C;
    }
    // 0x8027A9C0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8027A9C4: addiu       $s4, $s4, 0x1538
    ctx->r20 = ADD32(ctx->r20, 0X1538);
L_8027A9C8:
    // 0x8027A9C8: sll         $v0, $s1, 2
    ctx->r2 = S32(ctx->r17 << 2);
    // 0x8027A9CC: addu        $s2, $s4, $v0
    ctx->r18 = ADD32(ctx->r20, ctx->r2);
    // 0x8027A9D0: addu        $t8, $s5, $v0
    ctx->r24 = ADD32(ctx->r21, ctx->r2);
    // 0x8027A9D4: lw          $a3, 0x0($t8)
    ctx->r7 = MEM_W(ctx->r24, 0X0);
    // 0x8027A9D8: lhu         $a1, 0x0($s2)
    ctx->r5 = MEM_HU(ctx->r18, 0X0);
    // 0x8027A9DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8027A9E0: jal         0x8004CD24
    // 0x8027A9E4: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    func_8004CD24(rdram, ctx);
        goto after_1;
    // 0x8027A9E4: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_1:
    // 0x8027A9E8: lbu         $a2, 0x2($s2)
    ctx->r6 = MEM_BU(ctx->r18, 0X2);
    // 0x8027A9EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8027A9F0: jal         0x8002135C
    // 0x8027A9F4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x8027A9F4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x8027A9F8: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x8027A9FC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8027AA00: andi        $t9, $s1, 0xFF
    ctx->r25 = ctx->r17 & 0XFF;
    // 0x8027AA04: bne         $s0, $s3, L_8027A9C8
    if (ctx->r16 != ctx->r19) {
        // 0x8027AA08: or          $s1, $t9, $zero
        ctx->r17 = ctx->r25 | 0;
            goto L_8027A9C8;
    }
    // 0x8027AA08: or          $s1, $t9, $zero
    ctx->r17 = ctx->r25 | 0;
L_8027AA0C:
    // 0x8027AA0C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8027AA10: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8027AA14: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8027AA18: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8027AA1C: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8027AA20: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x8027AA24: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x8027AA28: jr          $ra
    // 0x8027AA2C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8027AA2C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8027AA30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027AA30: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8027AA34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027AA38: lw          $v1, 0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X8);
    // 0x8027AA3C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8027AA40: lb          $t6, 0x38($v1)
    ctx->r14 = MEM_B(ctx->r3, 0X38);
    // 0x8027AA44: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x8027AA48: beq         $t6, $at, L_8027AA64
    if (ctx->r14 == ctx->r1) {
        // 0x8027AA4C: lui         $a0, 0x8005
        ctx->r4 = S32(0X8005 << 16);
            goto L_8027AA64;
    }
    // 0x8027AA4C: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8027AA50: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8027AA54: jal         0x8002A468
    // 0x8027AA58: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    func_8002A468(rdram, ctx);
        goto after_0;
    // 0x8027AA58: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    after_0:
    // 0x8027AA5C: b           L_8027AB0C
    // 0x8027AA60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8027AB0C;
    // 0x8027AA60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027AA64:
    // 0x8027AA64: addiu       $a0, $a0, -0x3228
    ctx->r4 = ADD32(ctx->r4, -0X3228);
    // 0x8027AA68: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x8027AA6C: jal         0x8002A468
    // 0x8027AA70: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    func_8002A468(rdram, ctx);
        goto after_1;
    // 0x8027AA70: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    after_1:
    // 0x8027AA74: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x8027AA78: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x8027AA7C: lb          $v0, 0x42($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X42);
    // 0x8027AA80: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8027AA84: beq         $v0, $zero, L_8027AAA4
    if (ctx->r2 == 0) {
        // 0x8027AA88: nop
    
            goto L_8027AAA4;
    }
    // 0x8027AA88: nop

    // 0x8027AA8C: beq         $v0, $a0, L_8027AAB4
    if (ctx->r2 == ctx->r4) {
        // 0x8027AA90: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8027AAB4;
    }
    // 0x8027AA90: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8027AA94: beq         $v0, $at, L_8027AAB4
    if (ctx->r2 == ctx->r1) {
        // 0x8027AA98: nop
    
            goto L_8027AAB4;
    }
    // 0x8027AA98: nop

    // 0x8027AA9C: b           L_8027AB0C
    // 0x8027AAA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8027AB0C;
    // 0x8027AAA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027AAA4:
    // 0x8027AAA4: jal         0x8027A7E4
    // 0x8027AAA8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_8027A7E4(rdram, ctx);
        goto after_2;
    // 0x8027AAA8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_2:
    // 0x8027AAAC: b           L_8027AB0C
    // 0x8027AAB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8027AB0C;
    // 0x8027AAB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027AAB4:
    // 0x8027AAB4: lb          $v0, 0x43($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X43);
    // 0x8027AAB8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8027AABC: beq         $v0, $zero, L_8027AAE0
    if (ctx->r2 == 0) {
        // 0x8027AAC0: nop
    
            goto L_8027AAE0;
    }
    // 0x8027AAC0: nop

    // 0x8027AAC4: beq         $v0, $a0, L_8027AAF0
    if (ctx->r2 == ctx->r4) {
        // 0x8027AAC8: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_8027AAF0;
    }
    // 0x8027AAC8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8027AACC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8027AAD0: beq         $v0, $at, L_8027AB00
    if (ctx->r2 == ctx->r1) {
        // 0x8027AAD4: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_8027AB00;
    }
    // 0x8027AAD4: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x8027AAD8: b           L_8027AB0C
    // 0x8027AADC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8027AB0C;
    // 0x8027AADC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027AAE0:
    // 0x8027AAE0: jal         0x8027A85C
    // 0x8027AAE4: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_8027A85C(rdram, ctx);
        goto after_3;
    // 0x8027AAE4: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_3:
    // 0x8027AAE8: b           L_8027AB0C
    // 0x8027AAEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8027AB0C;
    // 0x8027AAEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027AAF0:
    // 0x8027AAF0: jal         0x8027A85C
    // 0x8027AAF4: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_8027A85C(rdram, ctx);
        goto after_4;
    // 0x8027AAF4: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_4:
    // 0x8027AAF8: b           L_8027AB0C
    // 0x8027AAFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8027AB0C;
    // 0x8027AAFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027AB00:
    // 0x8027AB00: jal         0x8027A85C
    // 0x8027AB04: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8027A85C(rdram, ctx);
        goto after_5;
    // 0x8027AB04: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_5:
    // 0x8027AB08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027AB0C:
    // 0x8027AB0C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8027AB10: jr          $ra
    // 0x8027AB14: nop

    return;
    // 0x8027AB14: nop

;}
RECOMP_FUNC void func_8027AB18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027AB18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027AB1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027AB20: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x8027AB24: addiu       $a0, $a0, -0x54AC
    ctx->r4 = ADD32(ctx->r4, -0X54AC);
    // 0x8027AB28: jal         0x800293DC
    // 0x8027AB2C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_800293DC(rdram, ctx);
        goto after_0;
    // 0x8027AB2C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x8027AB30: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x8027AB34: addiu       $a1, $zero, 0xB0
    ctx->r5 = ADD32(0, 0XB0);
    // 0x8027AB38: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x8027AB3C: jal         0x8006E170
    // 0x8027AB40: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8006E170(rdram, ctx);
        goto after_1;
    // 0x8027AB40: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x8027AB44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027AB48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027AB4C: jr          $ra
    // 0x8027AB50: nop

    return;
    // 0x8027AB50: nop

;}
RECOMP_FUNC void func_8027AB54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027AB54: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8027AB58: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8027AB5C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8027AB60: lw          $v1, 0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X8);
    // 0x8027AB64: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    // 0x8027AB68: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x8027AB6C: jal         0x8002F224
    // 0x8027AB70: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    func_8002F224(rdram, ctx);
        goto after_0;
    // 0x8027AB70: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    after_0:
    // 0x8027AB74: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x8027AB78: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x8027AB7C: lb          $v0, 0x38($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X38);
    // 0x8027AB80: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8027AB84: beq         $v0, $at, L_8027ABAC
    if (ctx->r2 == ctx->r1) {
        // 0x8027AB88: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_8027ABAC;
    }
    // 0x8027AB88: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8027AB8C: beq         $v0, $at, L_8027ABF8
    if (ctx->r2 == ctx->r1) {
        // 0x8027AB90: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_8027ABF8;
    }
    // 0x8027AB90: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8027AB94: beq         $v0, $at, L_8027AC44
    if (ctx->r2 == ctx->r1) {
        // 0x8027AB98: lui         $a0, 0x8005
        ctx->r4 = S32(0X8005 << 16);
            goto L_8027AC44;
    }
    // 0x8027AB98: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8027AB9C: jal         0x8002A468
    // 0x8027ABA0: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    func_8002A468(rdram, ctx);
        goto after_1;
    // 0x8027ABA0: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    after_1:
    // 0x8027ABA4: b           L_8027AC8C
    // 0x8027ABA8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8027AC8C;
    // 0x8027ABA8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8027ABAC:
    // 0x8027ABAC: lb          $a1, 0x3D($v1)
    ctx->r5 = MEM_B(ctx->r3, 0X3D);
    // 0x8027ABB0: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x8027ABB4: bne         $a1, $at, L_8027ABD0
    if (ctx->r5 != ctx->r1) {
        // 0x8027ABB8: lui         $a0, 0x8012
        ctx->r4 = S32(0X8012 << 16);
            goto L_8027ABD0;
    }
    // 0x8027ABB8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8027ABBC: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8027ABC0: jal         0x8002A468
    // 0x8027ABC4: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    func_8002A468(rdram, ctx);
        goto after_2;
    // 0x8027ABC4: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    after_2:
    // 0x8027ABC8: b           L_8027AC8C
    // 0x8027ABCC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8027AC8C;
    // 0x8027ABCC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8027ABD0:
    // 0x8027ABD0: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x8027ABD4: addiu       $t6, $zero, 0xB0
    ctx->r14 = ADD32(0, 0XB0);
    // 0x8027ABD8: addiu       $t7, $zero, 0x38
    ctx->r15 = ADD32(0, 0X38);
    // 0x8027ABDC: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x8027ABE0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8027ABE4: addiu       $a3, $zero, 0x14
    ctx->r7 = ADD32(0, 0X14);
    // 0x8027ABE8: jal         0x8006E244
    // 0x8027ABEC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    func_8006E244(rdram, ctx);
        goto after_3;
    // 0x8027ABEC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_3:
    // 0x8027ABF0: b           L_8027AC8C
    // 0x8027ABF4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8027AC8C;
    // 0x8027ABF4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8027ABF8:
    // 0x8027ABF8: lb          $a1, 0x44($v1)
    ctx->r5 = MEM_B(ctx->r3, 0X44);
    // 0x8027ABFC: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x8027AC00: bne         $a1, $at, L_8027AC1C
    if (ctx->r5 != ctx->r1) {
        // 0x8027AC04: lui         $a0, 0x8012
        ctx->r4 = S32(0X8012 << 16);
            goto L_8027AC1C;
    }
    // 0x8027AC04: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8027AC08: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8027AC0C: jal         0x8002A468
    // 0x8027AC10: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    func_8002A468(rdram, ctx);
        goto after_4;
    // 0x8027AC10: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    after_4:
    // 0x8027AC14: b           L_8027AC8C
    // 0x8027AC18: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8027AC8C;
    // 0x8027AC18: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8027AC1C:
    // 0x8027AC1C: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x8027AC20: addiu       $t8, $zero, 0xB0
    ctx->r24 = ADD32(0, 0XB0);
    // 0x8027AC24: addiu       $t9, $zero, 0x40
    ctx->r25 = ADD32(0, 0X40);
    // 0x8027AC28: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x8027AC2C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8027AC30: addiu       $a3, $zero, 0x14
    ctx->r7 = ADD32(0, 0X14);
    // 0x8027AC34: jal         0x8006E244
    // 0x8027AC38: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    func_8006E244(rdram, ctx);
        goto after_5;
    // 0x8027AC38: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_5:
    // 0x8027AC3C: b           L_8027AC8C
    // 0x8027AC40: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8027AC8C;
    // 0x8027AC40: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8027AC44:
    // 0x8027AC44: lb          $a1, 0x46($v1)
    ctx->r5 = MEM_B(ctx->r3, 0X46);
    // 0x8027AC48: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x8027AC4C: bne         $a1, $at, L_8027AC68
    if (ctx->r5 != ctx->r1) {
        // 0x8027AC50: lui         $a0, 0x8012
        ctx->r4 = S32(0X8012 << 16);
            goto L_8027AC68;
    }
    // 0x8027AC50: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8027AC54: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8027AC58: jal         0x8002A468
    // 0x8027AC5C: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    func_8002A468(rdram, ctx);
        goto after_6;
    // 0x8027AC5C: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    after_6:
    // 0x8027AC60: b           L_8027AC8C
    // 0x8027AC64: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8027AC8C;
    // 0x8027AC64: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8027AC68:
    // 0x8027AC68: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x8027AC6C: addiu       $t0, $zero, 0xB0
    ctx->r8 = ADD32(0, 0XB0);
    // 0x8027AC70: addiu       $t1, $zero, 0x40
    ctx->r9 = ADD32(0, 0X40);
    // 0x8027AC74: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x8027AC78: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x8027AC7C: addiu       $a3, $zero, 0x14
    ctx->r7 = ADD32(0, 0X14);
    // 0x8027AC80: jal         0x8006E244
    // 0x8027AC84: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    func_8006E244(rdram, ctx);
        goto after_7;
    // 0x8027AC84: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_7:
    // 0x8027AC88: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8027AC8C:
    // 0x8027AC8C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8027AC90: jr          $ra
    // 0x8027AC94: nop

    return;
    // 0x8027AC94: nop

;}
RECOMP_FUNC void func_8027AC98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027AC98: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027AC9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027ACA0: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x8027ACA4: addiu       $a0, $a0, -0x52BC
    ctx->r4 = ADD32(ctx->r4, -0X52BC);
    // 0x8027ACA8: jal         0x800293DC
    // 0x8027ACAC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_800293DC(rdram, ctx);
        goto after_0;
    // 0x8027ACAC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_0:
    // 0x8027ACB0: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x8027ACB4: jal         0x8027ACCC
    // 0x8027ACB8: nop

    func_8027ACCC(rdram, ctx);
        goto after_1;
    // 0x8027ACB8: nop

    after_1:
    // 0x8027ACBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027ACC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027ACC4: jr          $ra
    // 0x8027ACC8: nop

    return;
    // 0x8027ACC8: nop

;}
RECOMP_FUNC void func_8027ACCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027ACCC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8027ACD0: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8027ACD4: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x8027ACD8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8027ACDC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8027ACE0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8027ACE4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8027ACE8: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8027ACEC: beq         $a0, $s2, L_8027AD28
    if (ctx->r4 == ctx->r18) {
        // 0x8027ACF0: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_8027AD28;
    }
    // 0x8027ACF0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8027ACF4: lui         $s3, 0x8028
    ctx->r19 = S32(0X8028 << 16);
    // 0x8027ACF8: addiu       $s3, $s3, 0x1678
    ctx->r19 = ADD32(ctx->r19, 0X1678);
L_8027ACFC:
    // 0x8027ACFC: sll         $t6, $s1, 2
    ctx->r14 = S32(ctx->r17 << 2);
    // 0x8027AD00: addu        $v0, $s3, $t6
    ctx->r2 = ADD32(ctx->r19, ctx->r14);
    // 0x8027AD04: lh          $a1, 0x0($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X0);
    // 0x8027AD08: lh          $a2, 0x2($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X2);
    // 0x8027AD0C: jal         0x8004CD44
    // 0x8027AD10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8004CD44(rdram, ctx);
        goto after_0;
    // 0x8027AD10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x8027AD14: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x8027AD18: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8027AD1C: andi        $t7, $s1, 0xFF
    ctx->r15 = ctx->r17 & 0XFF;
    // 0x8027AD20: bne         $s0, $s2, L_8027ACFC
    if (ctx->r16 != ctx->r18) {
        // 0x8027AD24: or          $s1, $t7, $zero
        ctx->r17 = ctx->r15 | 0;
            goto L_8027ACFC;
    }
    // 0x8027AD24: or          $s1, $t7, $zero
    ctx->r17 = ctx->r15 | 0;
L_8027AD28:
    // 0x8027AD28: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8027AD2C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8027AD30: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8027AD34: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8027AD38: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8027AD3C: jr          $ra
    // 0x8027AD40: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8027AD40: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8027AD44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027AD44: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8027AD48: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027AD4C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8027AD50: lw          $a2, 0x8($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X8);
    // 0x8027AD54: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8027AD58: lb          $v0, 0x38($a2)
    ctx->r2 = MEM_B(ctx->r6, 0X38);
    // 0x8027AD5C: nop

    // 0x8027AD60: beq         $v0, $at, L_8027AD78
    if (ctx->r2 == ctx->r1) {
        // 0x8027AD64: addiu       $at, $zero, 0x6
        ctx->r1 = ADD32(0, 0X6);
            goto L_8027AD78;
    }
    // 0x8027AD64: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x8027AD68: beq         $v0, $at, L_8027ADFC
    if (ctx->r2 == ctx->r1) {
        // 0x8027AD6C: lui         $a0, 0x8005
        ctx->r4 = S32(0X8005 << 16);
            goto L_8027ADFC;
    }
    // 0x8027AD6C: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8027AD70: b           L_8027AE54
    // 0x8027AD74: nop

        goto L_8027AE54;
    // 0x8027AD74: nop

L_8027AD78:
    // 0x8027AD78: lb          $a1, 0x46($a2)
    ctx->r5 = MEM_B(ctx->r6, 0X46);
    // 0x8027AD7C: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x8027AD80: beq         $a1, $at, L_8027ADEC
    if (ctx->r5 == ctx->r1) {
        // 0x8027AD84: lui         $a0, 0x8005
        ctx->r4 = S32(0X8005 << 16);
            goto L_8027ADEC;
    }
    // 0x8027AD84: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8027AD88: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x8027AD8C: jal         0x8027B014
    // 0x8027AD90: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_8027B014(rdram, ctx);
        goto after_0;
    // 0x8027AD90: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x8027AD94: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8027AD98: jal         0x8027AE6C
    // 0x8027AD9C: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    func_8027AE6C(rdram, ctx);
        goto after_1;
    // 0x8027AD9C: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    after_1:
    // 0x8027ADA0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8027ADA4: jal         0x8027ACCC
    // 0x8027ADA8: nop

    func_8027ACCC(rdram, ctx);
        goto after_2;
    // 0x8027ADA8: nop

    after_2:
    // 0x8027ADAC: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x8027ADB0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8027ADB4: lb          $v0, 0x45($a2)
    ctx->r2 = MEM_B(ctx->r6, 0X45);
    // 0x8027ADB8: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8027ADBC: beq         $v0, $zero, L_8027ADD4
    if (ctx->r2 == 0) {
        // 0x8027ADC0: nop
    
            goto L_8027ADD4;
    }
    // 0x8027ADC0: nop

    // 0x8027ADC4: beq         $v0, $at, L_8027AE60
    if (ctx->r2 == ctx->r1) {
        // 0x8027ADC8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8027AE60;
    }
    // 0x8027ADC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027ADCC: b           L_8027AE60
    // 0x8027ADD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8027AE60;
    // 0x8027ADD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027ADD4:
    // 0x8027ADD4: jal         0x8002A468
    // 0x8027ADD8: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    func_8002A468(rdram, ctx);
        goto after_3;
    // 0x8027ADD8: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    after_3:
    // 0x8027ADDC: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8027ADE0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8027ADE4: b           L_8027AE5C
    // 0x8027ADE8: sb          $t6, 0x4($t7)
    MEM_B(0X4, ctx->r15) = ctx->r14;
        goto L_8027AE5C;
    // 0x8027ADE8: sb          $t6, 0x4($t7)
    MEM_B(0X4, ctx->r15) = ctx->r14;
L_8027ADEC:
    // 0x8027ADEC: jal         0x8002A468
    // 0x8027ADF0: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    func_8002A468(rdram, ctx);
        goto after_4;
    // 0x8027ADF0: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    after_4:
    // 0x8027ADF4: b           L_8027AE60
    // 0x8027ADF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8027AE60;
    // 0x8027ADF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027ADFC:
    // 0x8027ADFC: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8027AE00: lbu         $a1, 0x4D($a2)
    ctx->r5 = MEM_BU(ctx->r6, 0X4D);
    // 0x8027AE04: jal         0x8027AF4C
    // 0x8027AE08: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_8027AF4C(rdram, ctx);
        goto after_5;
    // 0x8027AE08: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_5:
    // 0x8027AE0C: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x8027AE10: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8027AE14: lb          $v0, 0x4C($a2)
    ctx->r2 = MEM_B(ctx->r6, 0X4C);
    // 0x8027AE18: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8027AE1C: beq         $v0, $zero, L_8027AE34
    if (ctx->r2 == 0) {
        // 0x8027AE20: nop
    
            goto L_8027AE34;
    }
    // 0x8027AE20: nop

    // 0x8027AE24: beq         $v0, $at, L_8027AE3C
    if (ctx->r2 == ctx->r1) {
        // 0x8027AE28: lui         $a0, 0x8005
        ctx->r4 = S32(0X8005 << 16);
            goto L_8027AE3C;
    }
    // 0x8027AE28: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8027AE2C: b           L_8027AE60
    // 0x8027AE30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8027AE60;
    // 0x8027AE30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027AE34:
    // 0x8027AE34: b           L_8027AE5C
    // 0x8027AE38: sb          $zero, 0x4($t8)
    MEM_B(0X4, ctx->r24) = 0;
        goto L_8027AE5C;
    // 0x8027AE38: sb          $zero, 0x4($t8)
    MEM_B(0X4, ctx->r24) = 0;
L_8027AE3C:
    // 0x8027AE3C: jal         0x8002A468
    // 0x8027AE40: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    func_8002A468(rdram, ctx);
        goto after_6;
    // 0x8027AE40: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    after_6:
    // 0x8027AE44: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8027AE48: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8027AE4C: b           L_8027AE5C
    // 0x8027AE50: sb          $t9, 0x4($t0)
    MEM_B(0X4, ctx->r8) = ctx->r25;
        goto L_8027AE5C;
    // 0x8027AE50: sb          $t9, 0x4($t0)
    MEM_B(0X4, ctx->r8) = ctx->r25;
L_8027AE54:
    // 0x8027AE54: jal         0x8002A468
    // 0x8027AE58: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    func_8002A468(rdram, ctx);
        goto after_7;
    // 0x8027AE58: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    after_7:
L_8027AE5C:
    // 0x8027AE5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027AE60:
    // 0x8027AE60: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8027AE64: jr          $ra
    // 0x8027AE68: nop

    return;
    // 0x8027AE68: nop

;}
RECOMP_FUNC void func_8027AE6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027AE6C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8027AE70: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8027AE74: addiu       $s3, $zero, -0x1
    ctx->r19 = ADD32(0, -0X1);
    // 0x8027AE78: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8027AE7C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8027AE80: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8027AE84: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8027AE88: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8027AE8C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8027AE90: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x8027AE94: beq         $a0, $s3, L_8027AED0
    if (ctx->r4 == ctx->r19) {
        // 0x8027AE98: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_8027AED0;
    }
    // 0x8027AE98: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8027AE9C: lui         $t8, 0x8028
    ctx->r24 = S32(0X8028 << 16);
    // 0x8027AEA0: addiu       $t8, $t8, 0x164C
    ctx->r24 = ADD32(ctx->r24, 0X164C);
    // 0x8027AEA4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8027AEA8: addu        $s2, $t7, $t8
    ctx->r18 = ADD32(ctx->r15, ctx->r24);
L_8027AEAC:
    // 0x8027AEAC: addu        $t9, $s2, $s1
    ctx->r25 = ADD32(ctx->r18, ctx->r17);
    // 0x8027AEB0: lbu         $a1, 0x0($t9)
    ctx->r5 = MEM_BU(ctx->r25, 0X0);
    // 0x8027AEB4: jal         0x8027AEEC
    // 0x8027AEB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8027AEEC(rdram, ctx);
        goto after_0;
    // 0x8027AEB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x8027AEBC: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x8027AEC0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8027AEC4: andi        $t0, $s1, 0xFF
    ctx->r8 = ctx->r17 & 0XFF;
    // 0x8027AEC8: bne         $s0, $s3, L_8027AEAC
    if (ctx->r16 != ctx->r19) {
        // 0x8027AECC: or          $s1, $t0, $zero
        ctx->r17 = ctx->r8 | 0;
            goto L_8027AEAC;
    }
    // 0x8027AECC: or          $s1, $t0, $zero
    ctx->r17 = ctx->r8 | 0;
L_8027AED0:
    // 0x8027AED0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8027AED4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8027AED8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8027AEDC: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8027AEE0: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8027AEE4: jr          $ra
    // 0x8027AEE8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8027AEE8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8027AEEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027AEEC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027AEF0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027AEF4: lbu         $t6, 0x1F($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X1F);
    // 0x8027AEF8: lui         $t8, 0x8028
    ctx->r24 = S32(0X8028 << 16);
    // 0x8027AEFC: addiu       $t8, $t8, 0x15E8
    ctx->r24 = ADD32(ctx->r24, 0X15E8);
    // 0x8027AF00: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x8027AF04: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x8027AF08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027AF0C: lhu         $a1, 0x4($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X4);
    // 0x8027AF10: lw          $a3, 0x0($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X0);
    // 0x8027AF14: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027AF18: jal         0x8004CD24
    // 0x8027AF1C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_8004CD24(rdram, ctx);
        goto after_0;
    // 0x8027AF1C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_0:
    // 0x8027AF20: lbu         $t9, 0x1F($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X1F);
    // 0x8027AF24: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x8027AF28: addu        $a2, $a2, $t9
    ctx->r6 = ADD32(ctx->r6, ctx->r25);
    // 0x8027AF2C: lbu         $a2, 0x1640($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X1640);
    // 0x8027AF30: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8027AF34: jal         0x8002135C
    // 0x8027AF38: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8002135C(rdram, ctx);
        goto after_1;
    // 0x8027AF38: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x8027AF3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027AF40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027AF44: jr          $ra
    // 0x8027AF48: nop

    return;
    // 0x8027AF48: nop

;}
RECOMP_FUNC void func_8027AF4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027AF4C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8027AF50: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8027AF54: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8027AF58: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8027AF5C: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x8027AF60: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x8027AF64: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x8027AF68: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8027AF6C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8027AF70: jal         0x8027AEEC
    // 0x8027AF74: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    func_8027AEEC(rdram, ctx);
        goto after_0;
    // 0x8027AF74: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x8027AF78: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8027AF7C: addiu       $a1, $zero, 0x34
    ctx->r5 = ADD32(0, 0X34);
    // 0x8027AF80: jal         0x8004CD44
    // 0x8027AF84: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    func_8004CD44(rdram, ctx);
        goto after_1;
    // 0x8027AF84: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    after_1:
    // 0x8027AF88: lui         $s3, 0x8028
    ctx->r19 = S32(0X8028 << 16);
    // 0x8027AF8C: lui         $s2, 0x8028
    ctx->r18 = S32(0X8028 << 16);
    // 0x8027AF90: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
    // 0x8027AF94: addiu       $s2, $s2, 0x16C8
    ctx->r18 = ADD32(ctx->r18, 0X16C8);
    // 0x8027AF98: addiu       $s3, $s3, 0x16E0
    ctx->r19 = ADD32(ctx->r19, 0X16E0);
    // 0x8027AF9C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_8027AFA0:
    // 0x8027AFA0: sll         $t7, $s0, 3
    ctx->r15 = S32(ctx->r16 << 3);
    // 0x8027AFA4: addu        $v0, $s2, $t7
    ctx->r2 = ADD32(ctx->r18, ctx->r15);
    // 0x8027AFA8: lhu         $a1, 0x4($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X4);
    // 0x8027AFAC: lw          $a3, 0x0($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X0);
    // 0x8027AFB0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8027AFB4: jal         0x8004CD24
    // 0x8027AFB8: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_8004CD24(rdram, ctx);
        goto after_2;
    // 0x8027AFB8: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_2:
    // 0x8027AFBC: addu        $t8, $s3, $s0
    ctx->r24 = ADD32(ctx->r19, ctx->r16);
    // 0x8027AFC0: lbu         $a2, 0x0($t8)
    ctx->r6 = MEM_BU(ctx->r24, 0X0);
    // 0x8027AFC4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8027AFC8: jal         0x8002135C
    // 0x8027AFCC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8002135C(rdram, ctx);
        goto after_3;
    // 0x8027AFCC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x8027AFD0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8027AFD4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8027AFD8: jal         0x8004CD44
    // 0x8027AFDC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8004CD44(rdram, ctx);
        goto after_4;
    // 0x8027AFDC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x8027AFE0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8027AFE4: andi        $t9, $s0, 0xFF
    ctx->r25 = ctx->r16 & 0XFF;
    // 0x8027AFE8: slti        $at, $t9, 0x3
    ctx->r1 = SIGNED(ctx->r25) < 0X3 ? 1 : 0;
    // 0x8027AFEC: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
    // 0x8027AFF0: bne         $at, $zero, L_8027AFA0
    if (ctx->r1 != 0) {
        // 0x8027AFF4: or          $s0, $t9, $zero
        ctx->r16 = ctx->r25 | 0;
            goto L_8027AFA0;
    }
    // 0x8027AFF4: or          $s0, $t9, $zero
    ctx->r16 = ctx->r25 | 0;
    // 0x8027AFF8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8027AFFC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8027B000: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8027B004: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8027B008: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8027B00C: jr          $ra
    // 0x8027B010: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8027B010: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8027B014(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027B014: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8027B018: lbu         $v1, 0x3A($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X3A);
    // 0x8027B01C: sll         $t6, $a1, 24
    ctx->r14 = S32(ctx->r5 << 24);
    // 0x8027B020: sll         $t9, $v1, 2
    ctx->r25 = S32(ctx->r3 << 2);
    // 0x8027B024: subu        $t9, $t9, $v1
    ctx->r25 = SUB32(ctx->r25, ctx->r3);
    // 0x8027B028: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8027B02C: subu        $t9, $t9, $v1
    ctx->r25 = SUB32(ctx->r25, ctx->r3);
    // 0x8027B030: sra         $t7, $t6, 24
    ctx->r15 = S32(SIGNED(ctx->r14) >> 24);
    // 0x8027B034: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8027B038: lui         $t8, 0x8028
    ctx->r24 = S32(0X8028 << 16);
    // 0x8027B03C: lw          $t8, 0xFA0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0XFA0);
    // 0x8027B040: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x8027B044: sll         $t2, $t7, 2
    ctx->r10 = S32(ctx->r15 << 2);
    // 0x8027B048: subu        $t2, $t2, $t7
    ctx->r10 = SUB32(ctx->r10, ctx->r15);
    // 0x8027B04C: sll         $t0, $t0, 1
    ctx->r8 = S32(ctx->r8 << 1);
    // 0x8027B050: sll         $t2, $t2, 1
    ctx->r10 = S32(ctx->r10 << 1);
    // 0x8027B054: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x8027B058: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x8027B05C: lbu         $v0, 0x5($t3)
    ctx->r2 = MEM_BU(ctx->r11, 0X5);
    // 0x8027B060: jr          $ra
    // 0x8027B064: nop

    return;
    // 0x8027B064: nop

;}
RECOMP_FUNC void func_8027B068(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027B068: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x8027B06C: lw          $a0, 0x1CF0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1CF0);
    // 0x8027B070: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8027B074: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027B078: lb          $t6, 0x3A($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X3A);
    // 0x8027B07C: nop

    // 0x8027B080: sb          $t6, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r14;
    // 0x8027B084: lb          $a1, 0x46($a0)
    ctx->r5 = MEM_B(ctx->r4, 0X46);
    // 0x8027B088: jal         0x8027B014
    // 0x8027B08C: nop

    func_8027B014(rdram, ctx);
        goto after_0;
    // 0x8027B08C: nop

    after_0:
    // 0x8027B090: lbu         $t1, 0x1F($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X1F);
    // 0x8027B094: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x8027B098: lw          $a0, 0x1CF0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1CF0);
    // 0x8027B09C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8027B0A0: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x8027B0A4: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8027B0A8: lb          $t8, 0x48($a0)
    ctx->r24 = MEM_B(ctx->r4, 0X48);
    // 0x8027B0AC: lb          $t5, 0x46($a0)
    ctx->r13 = MEM_B(ctx->r4, 0X46);
    // 0x8027B0B0: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x8027B0B4: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x8027B0B8: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8027B0BC: lui         $t0, 0x8028
    ctx->r8 = S32(0X8028 << 16);
    // 0x8027B0C0: lw          $t0, 0xFA0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0XFA0);
    // 0x8027B0C4: lui         $v1, 0x8028
    ctx->r3 = S32(0X8028 << 16);
    // 0x8027B0C8: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x8027B0CC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8027B0D0: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x8027B0D4: addu        $v1, $v1, $t9
    ctx->r3 = ADD32(ctx->r3, ctx->r25);
    // 0x8027B0D8: sll         $t3, $t3, 1
    ctx->r11 = S32(ctx->r11 << 1);
    // 0x8027B0DC: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x8027B0E0: lbu         $v1, 0x164C($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X164C);
    // 0x8027B0E4: sll         $t6, $t6, 1
    ctx->r14 = S32(ctx->r14 << 1);
    // 0x8027B0E8: addu        $t4, $t0, $t3
    ctx->r12 = ADD32(ctx->r8, ctx->r11);
    // 0x8027B0EC: addu        $t7, $t4, $t6
    ctx->r15 = ADD32(ctx->r12, ctx->r14);
    // 0x8027B0F0: sb          $v1, 0x5($t7)
    MEM_B(0X5, ctx->r15) = ctx->r3;
    // 0x8027B0F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027B0F8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8027B0FC: jr          $ra
    // 0x8027B100: nop

    return;
    // 0x8027B100: nop

;}
RECOMP_FUNC void func_8027B104(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027B104: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8027B108: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8027B10C: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x8027B110: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8027B114: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8027B118: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8027B11C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8027B120: addiu       $a0, $a0, -0x4E44
    ctx->r4 = ADD32(ctx->r4, -0X4E44);
    // 0x8027B124: jal         0x800293DC
    // 0x8027B128: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_800293DC(rdram, ctx);
        goto after_0;
    // 0x8027B128: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x8027B12C: lui         $s3, 0x8028
    ctx->r19 = S32(0X8028 << 16);
    // 0x8027B130: lui         $s2, 0x8028
    ctx->r18 = S32(0X8028 << 16);
    // 0x8027B134: lw          $s0, 0x14($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X14);
    // 0x8027B138: addiu       $s2, $s2, 0x1778
    ctx->r18 = ADD32(ctx->r18, 0X1778);
    // 0x8027B13C: addiu       $s3, $s3, 0x17A0
    ctx->r19 = ADD32(ctx->r19, 0X17A0);
    // 0x8027B140: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_8027B144:
    // 0x8027B144: sll         $t6, $s1, 3
    ctx->r14 = S32(ctx->r17 << 3);
    // 0x8027B148: addu        $v0, $s2, $t6
    ctx->r2 = ADD32(ctx->r18, ctx->r14);
    // 0x8027B14C: lhu         $a1, 0x4($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X4);
    // 0x8027B150: lw          $a3, 0x0($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X0);
    // 0x8027B154: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8027B158: jal         0x8004CD24
    // 0x8027B15C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_8004CD24(rdram, ctx);
        goto after_1;
    // 0x8027B15C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_1:
    // 0x8027B160: sll         $t7, $s1, 2
    ctx->r15 = S32(ctx->r17 << 2);
    // 0x8027B164: addu        $v0, $s3, $t7
    ctx->r2 = ADD32(ctx->r19, ctx->r15);
    // 0x8027B168: lh          $a1, 0x0($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X0);
    // 0x8027B16C: lh          $a2, 0x2($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X2);
    // 0x8027B170: jal         0x8004CD44
    // 0x8027B174: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8004CD44(rdram, ctx);
        goto after_2;
    // 0x8027B174: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8027B178: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8027B17C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x8027B180: jal         0x8002135C
    // 0x8027B184: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    func_8002135C(rdram, ctx);
        goto after_3;
    // 0x8027B184: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    after_3:
    // 0x8027B188: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8027B18C: andi        $t8, $s1, 0xFF
    ctx->r24 = ctx->r17 & 0XFF;
    // 0x8027B190: slti        $at, $t8, 0x5
    ctx->r1 = SIGNED(ctx->r24) < 0X5 ? 1 : 0;
    // 0x8027B194: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x8027B198: bne         $at, $zero, L_8027B144
    if (ctx->r1 != 0) {
        // 0x8027B19C: or          $s1, $t8, $zero
        ctx->r17 = ctx->r24 | 0;
            goto L_8027B144;
    }
    // 0x8027B19C: or          $s1, $t8, $zero
    ctx->r17 = ctx->r24 | 0;
    // 0x8027B1A0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8027B1A4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8027B1A8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8027B1AC: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8027B1B0: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8027B1B4: jr          $ra
    // 0x8027B1B8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8027B1B8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8027B1BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027B1BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027B1C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027B1C4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027B1C8: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x8027B1CC: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x8027B1D0: lb          $t6, 0x38($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X38);
    // 0x8027B1D4: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8027B1D8: bne         $t6, $at, L_8027B1F4
    if (ctx->r14 != ctx->r1) {
        // 0x8027B1DC: nop
    
            goto L_8027B1F4;
    }
    // 0x8027B1DC: nop

    // 0x8027B1E0: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8027B1E4: jal         0x8002A468
    // 0x8027B1E8: addiu       $a0, $a0, -0x3228
    ctx->r4 = ADD32(ctx->r4, -0X3228);
    func_8002A468(rdram, ctx);
        goto after_0;
    // 0x8027B1E8: addiu       $a0, $a0, -0x3228
    ctx->r4 = ADD32(ctx->r4, -0X3228);
    after_0:
    // 0x8027B1EC: b           L_8027B200
    // 0x8027B1F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8027B200;
    // 0x8027B1F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027B1F4:
    // 0x8027B1F4: jal         0x8002A468
    // 0x8027B1F8: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    func_8002A468(rdram, ctx);
        goto after_1;
    // 0x8027B1F8: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    after_1:
    // 0x8027B1FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027B200:
    // 0x8027B200: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027B204: jr          $ra
    // 0x8027B208: nop

    return;
    // 0x8027B208: nop

;}
RECOMP_FUNC void func_8027B20C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027B20C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8027B210: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027B214: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8027B218: lw          $v1, 0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X8);
    // 0x8027B21C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8027B220: lb          $t6, 0x4F($v1)
    ctx->r14 = MEM_B(ctx->r3, 0X4F);
    // 0x8027B224: nop

    // 0x8027B228: beq         $t6, $zero, L_8027B280
    if (ctx->r14 == 0) {
        // 0x8027B22C: nop
    
            goto L_8027B280;
    }
    // 0x8027B22C: nop

    // 0x8027B230: lb          $t7, 0x38($a0)
    ctx->r15 = MEM_B(ctx->r4, 0X38);
    // 0x8027B234: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8027B238: bne         $t7, $zero, L_8027B280
    if (ctx->r15 != 0) {
        // 0x8027B23C: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_8027B280;
    }
    // 0x8027B23C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8027B240: sb          $t8, 0x38($a0)
    MEM_B(0X38, ctx->r4) = ctx->r24;
    // 0x8027B244: lbu         $a0, 0x4D($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X4D);
    // 0x8027B248: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    // 0x8027B24C: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x8027B250: jal         0x8001D4C0
    // 0x8027B254: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_8001D4C0(rdram, ctx);
        goto after_0;
    // 0x8027B254: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_0:
    // 0x8027B258: andi        $t9, $v0, 0xFF
    ctx->r25 = ctx->r2 & 0XFF;
    // 0x8027B25C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8027B260: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x8027B264: addu        $a0, $a0, $t0
    ctx->r4 = ADD32(ctx->r4, ctx->r8);
    // 0x8027B268: lw          $a0, 0x1830($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1830);
    // 0x8027B26C: jal         0x8002AAC0
    // 0x8027B270: nop

    func_8002AAC0(rdram, ctx);
        goto after_1;
    // 0x8027B270: nop

    after_1:
    // 0x8027B274: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x8027B278: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x8027B27C: nop

L_8027B280:
    // 0x8027B280: lb          $t1, 0x50($v1)
    ctx->r9 = MEM_B(ctx->r3, 0X50);
    // 0x8027B284: nop

    // 0x8027B288: beq         $t1, $zero, L_8027B2B8
    if (ctx->r9 == 0) {
        // 0x8027B28C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8027B2B8;
    }
    // 0x8027B28C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027B290: lb          $t2, 0x38($a3)
    ctx->r10 = MEM_B(ctx->r7, 0X38);
    // 0x8027B294: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8027B298: bne         $t2, $at, L_8027B2B8
    if (ctx->r10 != ctx->r1) {
        // 0x8027B29C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8027B2B8;
    }
    // 0x8027B29C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027B2A0: jal         0x80029520
    // 0x8027B2A4: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    func_80029520(rdram, ctx);
        goto after_2;
    // 0x8027B2A4: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    after_2:
    // 0x8027B2A8: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x8027B2AC: nop

    // 0x8027B2B0: sb          $zero, 0x38($a3)
    MEM_B(0X38, ctx->r7) = 0;
    // 0x8027B2B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027B2B8:
    // 0x8027B2B8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8027B2BC: jr          $ra
    // 0x8027B2C0: nop

    return;
    // 0x8027B2C0: nop

;}
RECOMP_FUNC void func_8027B2C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027B2C4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8027B2C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027B2CC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8027B2D0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8027B2D4: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x8027B2D8: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8027B2DC: lb          $t6, 0x51($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X51);
    // 0x8027B2E0: nop

    // 0x8027B2E4: beq         $t6, $zero, L_8027B320
    if (ctx->r14 == 0) {
        // 0x8027B2E8: nop
    
            goto L_8027B320;
    }
    // 0x8027B2E8: nop

    // 0x8027B2EC: lb          $t7, 0x38($a0)
    ctx->r15 = MEM_B(ctx->r4, 0X38);
    // 0x8027B2F0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8027B2F4: bne         $t7, $zero, L_8027B320
    if (ctx->r15 != 0) {
        // 0x8027B2F8: nop
    
            goto L_8027B320;
    }
    // 0x8027B2F8: nop

    // 0x8027B2FC: sb          $t8, 0x38($a0)
    MEM_B(0X38, ctx->r4) = ctx->r24;
    // 0x8027B300: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x8027B304: addiu       $a0, $a0, 0x1A1C
    ctx->r4 = ADD32(ctx->r4, 0X1A1C);
    // 0x8027B308: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    // 0x8027B30C: jal         0x8002AAC0
    // 0x8027B310: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_8002AAC0(rdram, ctx);
        goto after_0;
    // 0x8027B310: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_0:
    // 0x8027B314: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x8027B318: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x8027B31C: nop

L_8027B320:
    // 0x8027B320: lb          $t9, 0x52($v0)
    ctx->r25 = MEM_B(ctx->r2, 0X52);
    // 0x8027B324: nop

    // 0x8027B328: beq         $t9, $zero, L_8027B358
    if (ctx->r25 == 0) {
        // 0x8027B32C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8027B358;
    }
    // 0x8027B32C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027B330: lb          $t0, 0x38($a1)
    ctx->r8 = MEM_B(ctx->r5, 0X38);
    // 0x8027B334: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8027B338: bne         $t0, $at, L_8027B358
    if (ctx->r8 != ctx->r1) {
        // 0x8027B33C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8027B358;
    }
    // 0x8027B33C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027B340: jal         0x80029520
    // 0x8027B344: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    func_80029520(rdram, ctx);
        goto after_1;
    // 0x8027B344: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    after_1:
    // 0x8027B348: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x8027B34C: nop

    // 0x8027B350: sb          $zero, 0x38($a1)
    MEM_B(0X38, ctx->r5) = 0;
    // 0x8027B354: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027B358:
    // 0x8027B358: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8027B35C: jr          $ra
    // 0x8027B360: nop

    return;
    // 0x8027B360: nop

;}
RECOMP_FUNC void func_8027B364(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027B364: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8027B368: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027B36C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8027B370: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8027B374: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x8027B378: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8027B37C: lb          $t6, 0x53($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X53);
    // 0x8027B380: nop

    // 0x8027B384: beq         $t6, $zero, L_8027B3C0
    if (ctx->r14 == 0) {
        // 0x8027B388: nop
    
            goto L_8027B3C0;
    }
    // 0x8027B388: nop

    // 0x8027B38C: lb          $t7, 0x38($a0)
    ctx->r15 = MEM_B(ctx->r4, 0X38);
    // 0x8027B390: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8027B394: bne         $t7, $zero, L_8027B3C0
    if (ctx->r15 != 0) {
        // 0x8027B398: nop
    
            goto L_8027B3C0;
    }
    // 0x8027B398: nop

    // 0x8027B39C: sb          $t8, 0x38($a0)
    MEM_B(0X38, ctx->r4) = ctx->r24;
    // 0x8027B3A0: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x8027B3A4: addiu       $a0, $a0, 0x1AC8
    ctx->r4 = ADD32(ctx->r4, 0X1AC8);
    // 0x8027B3A8: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    // 0x8027B3AC: jal         0x8002AAC0
    // 0x8027B3B0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_8002AAC0(rdram, ctx);
        goto after_0;
    // 0x8027B3B0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_0:
    // 0x8027B3B4: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x8027B3B8: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x8027B3BC: nop

L_8027B3C0:
    // 0x8027B3C0: lb          $t9, 0x54($v0)
    ctx->r25 = MEM_B(ctx->r2, 0X54);
    // 0x8027B3C4: nop

    // 0x8027B3C8: beq         $t9, $zero, L_8027B3FC
    if (ctx->r25 == 0) {
        // 0x8027B3CC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8027B3FC;
    }
    // 0x8027B3CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027B3D0: lb          $t0, 0x38($a1)
    ctx->r8 = MEM_B(ctx->r5, 0X38);
    // 0x8027B3D4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8027B3D8: bne         $t0, $at, L_8027B3FC
    if (ctx->r8 != ctx->r1) {
        // 0x8027B3DC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8027B3FC;
    }
    // 0x8027B3DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027B3E0: sb          $zero, 0x38($a1)
    MEM_B(0X38, ctx->r5) = 0;
    // 0x8027B3E4: jal         0x80029520
    // 0x8027B3E8: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    func_80029520(rdram, ctx);
        goto after_1;
    // 0x8027B3E8: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    after_1:
    // 0x8027B3EC: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x8027B3F0: nop

    // 0x8027B3F4: sb          $zero, 0x38($a1)
    MEM_B(0X38, ctx->r5) = 0;
    // 0x8027B3F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027B3FC:
    // 0x8027B3FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8027B400: jr          $ra
    // 0x8027B404: nop

    return;
    // 0x8027B404: nop

;}
RECOMP_FUNC void func_8027B408(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027B408: jr          $ra
    // 0x8027B40C: nop

    return;
    // 0x8027B40C: nop

;}
RECOMP_FUNC void func_8027B410(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027B410: jr          $ra
    // 0x8027B414: nop

    return;
    // 0x8027B414: nop

;}
RECOMP_FUNC void func_8027B418(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027B418: jr          $ra
    // 0x8027B41C: nop

    return;
    // 0x8027B41C: nop

;}
RECOMP_FUNC void func_8027B420(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027B420: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8027B424: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8027B428: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8027B42C: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x8027B430: lbu         $a2, 0x71($a0)
    ctx->r6 = MEM_BU(ctx->r4, 0X71);
    // 0x8027B434: lw          $t7, 0x8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X8);
    // 0x8027B438: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8027B43C: lw          $a1, 0x8($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X8);
    // 0x8027B440: addiu       $t8, $zero, 0x8
    ctx->r24 = ADD32(0, 0X8);
    // 0x8027B444: sb          $t8, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r24;
    // 0x8027B448: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x8027B44C: sb          $a2, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r6;
    // 0x8027B450: jal         0x80279914
    // 0x8027B454: sw          $a1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r5;
    func_80279914(rdram, ctx);
        goto after_0;
    // 0x8027B454: sw          $a1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r5;
    after_0:
    // 0x8027B458: lh          $t9, 0x24($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X24);
    // 0x8027B45C: lw          $t0, 0x38($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X38);
    // 0x8027B460: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8027B464: sh          $t9, 0x20($t0)
    MEM_H(0X20, ctx->r8) = ctx->r25;
    // 0x8027B468: lw          $t2, 0x38($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X38);
    // 0x8027B46C: lh          $t1, 0x26($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X26);
    // 0x8027B470: nop

    // 0x8027B474: sh          $t1, 0x22($t2)
    MEM_H(0X22, ctx->r10) = ctx->r9;
    // 0x8027B478: lw          $a1, 0x38($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X38);
    // 0x8027B47C: jal         0x8002AF64
    // 0x8027B480: nop

    func_8002AF64(rdram, ctx);
        goto after_1;
    // 0x8027B480: nop

    after_1:
    // 0x8027B484: lwl         $t3, 0x24($sp)
    ctx->r11 = do_lwl(rdram, ctx->r11, ctx->r29, 0X24);
    // 0x8027B488: lwr         $t3, 0x27($sp)
    ctx->r11 = do_lwr(rdram, ctx->r11, ctx->r29, 0X27);
    // 0x8027B48C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8027B490: swl         $t3, 0xC($sp)
    do_swl(rdram, 0XC, ctx->r29, ctx->r11);
    // 0x8027B494: swr         $t3, 0xF($sp)
    do_swr(rdram, 0XF, ctx->r29, ctx->r11);
    // 0x8027B498: lw          $a3, 0xC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC);
    // 0x8027B49C: lb          $a2, 0x2F($sp)
    ctx->r6 = MEM_B(ctx->r29, 0X2F);
    // 0x8027B4A0: jal         0x8027B650
    // 0x8027B4A4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8027B650(rdram, ctx);
        goto after_2;
    // 0x8027B4A4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_2:
    // 0x8027B4A8: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x8027B4AC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8027B4B0: lb          $v0, 0x38($t4)
    ctx->r2 = MEM_B(ctx->r12, 0X38);
    // 0x8027B4B4: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8027B4B8: beq         $v0, $at, L_8027B4DC
    if (ctx->r2 == ctx->r1) {
        // 0x8027B4BC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8027B4DC;
    }
    // 0x8027B4BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8027B4C0: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x8027B4C4: beq         $v0, $at, L_8027B4F4
    if (ctx->r2 == ctx->r1) {
        // 0x8027B4C8: addiu       $at, $zero, 0x7
        ctx->r1 = ADD32(0, 0X7);
            goto L_8027B4F4;
    }
    // 0x8027B4C8: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x8027B4CC: beq         $v0, $at, L_8027B4DC
    if (ctx->r2 == ctx->r1) {
        // 0x8027B4D0: addiu       $at, $zero, 0x8
        ctx->r1 = ADD32(0, 0X8);
            goto L_8027B4DC;
    }
    // 0x8027B4D0: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x8027B4D4: bne         $v0, $at, L_8027B4FC
    if (ctx->r2 != ctx->r1) {
        // 0x8027B4D8: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_8027B4FC;
    }
    // 0x8027B4D8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
L_8027B4DC:
    // 0x8027B4DC: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027B4E0: sb          $t5, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r13;
    // 0x8027B4E4: jal         0x8002BE08
    // 0x8027B4E8: addiu       $a1, $a1, 0x185C
    ctx->r5 = ADD32(ctx->r5, 0X185C);
    func_8002BE08(rdram, ctx);
        goto after_3;
    // 0x8027B4E8: addiu       $a1, $a1, 0x185C
    ctx->r5 = ADD32(ctx->r5, 0X185C);
    after_3:
    // 0x8027B4EC: b           L_8027B514
    // 0x8027B4F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8027B514;
    // 0x8027B4F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8027B4F4:
    // 0x8027B4F4: b           L_8027B510
    // 0x8027B4F8: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
        goto L_8027B510;
    // 0x8027B4F8: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
L_8027B4FC:
    // 0x8027B4FC: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027B500: sb          $t6, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r14;
    // 0x8027B504: addiu       $a1, $a1, 0x1864
    ctx->r5 = ADD32(ctx->r5, 0X1864);
    // 0x8027B508: jal         0x8002BE08
    // 0x8027B50C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8002BE08(rdram, ctx);
        goto after_4;
    // 0x8027B50C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
L_8027B510:
    // 0x8027B510: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8027B514:
    // 0x8027B514: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8027B518: jr          $ra
    // 0x8027B51C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8027B51C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8027B520(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027B520: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8027B524: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8027B528: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8027B52C: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x8027B530: lb          $v0, 0x71($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X71);
    // 0x8027B534: lw          $t7, 0x8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X8);
    // 0x8027B538: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8027B53C: lw          $a1, 0x8($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X8);
    // 0x8027B540: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x8027B544: sb          $v0, 0x37($sp)
    MEM_B(0X37, ctx->r29) = ctx->r2;
    // 0x8027B548: andi        $a2, $v0, 0xFF
    ctx->r6 = ctx->r2 & 0XFF;
    // 0x8027B54C: jal         0x80279914
    // 0x8027B550: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    func_80279914(rdram, ctx);
        goto after_0;
    // 0x8027B550: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8027B554: lh          $t8, 0x28($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X28);
    // 0x8027B558: lw          $t9, 0x38($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X38);
    // 0x8027B55C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8027B560: sh          $t8, 0x20($t9)
    MEM_H(0X20, ctx->r25) = ctx->r24;
    // 0x8027B564: lw          $t1, 0x38($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X38);
    // 0x8027B568: lh          $t0, 0x2A($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X2A);
    // 0x8027B56C: nop

    // 0x8027B570: sh          $t0, 0x22($t1)
    MEM_H(0X22, ctx->r9) = ctx->r8;
    // 0x8027B574: lw          $a1, 0x38($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X38);
    // 0x8027B578: jal         0x8002AF64
    // 0x8027B57C: nop

    func_8002AF64(rdram, ctx);
        goto after_1;
    // 0x8027B57C: nop

    after_1:
    // 0x8027B580: lwl         $t2, 0x28($sp)
    ctx->r10 = do_lwl(rdram, ctx->r10, ctx->r29, 0X28);
    // 0x8027B584: lwr         $t2, 0x2B($sp)
    ctx->r10 = do_lwr(rdram, ctx->r10, ctx->r29, 0X2B);
    // 0x8027B588: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x8027B58C: swl         $t2, 0xC($sp)
    do_swl(rdram, 0XC, ctx->r29, ctx->r10);
    // 0x8027B590: swr         $t2, 0xF($sp)
    do_swr(rdram, 0XF, ctx->r29, ctx->r10);
    // 0x8027B594: lw          $a3, 0xC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC);
    // 0x8027B598: lb          $a2, 0x37($sp)
    ctx->r6 = MEM_B(ctx->r29, 0X37);
    // 0x8027B59C: jal         0x8027B650
    // 0x8027B5A0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8027B650(rdram, ctx);
        goto after_2;
    // 0x8027B5A0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_2:
    // 0x8027B5A4: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x8027B5A8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8027B5AC: lb          $v0, 0x38($a2)
    ctx->r2 = MEM_B(ctx->r6, 0X38);
    // 0x8027B5B0: lb          $a1, 0x37($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X37);
    // 0x8027B5B4: beq         $v0, $at, L_8027B5D4
    if (ctx->r2 == ctx->r1) {
        // 0x8027B5B8: addiu       $at, $zero, 0x6
        ctx->r1 = ADD32(0, 0X6);
            goto L_8027B5D4;
    }
    // 0x8027B5B8: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x8027B5BC: beq         $v0, $at, L_8027B608
    if (ctx->r2 == ctx->r1) {
        // 0x8027B5C0: addiu       $at, $zero, 0x7
        ctx->r1 = ADD32(0, 0X7);
            goto L_8027B608;
    }
    // 0x8027B5C0: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x8027B5C4: beq         $v0, $at, L_8027B5D4
    if (ctx->r2 == ctx->r1) {
        // 0x8027B5C8: addiu       $at, $zero, 0x8
        ctx->r1 = ADD32(0, 0X8);
            goto L_8027B5D4;
    }
    // 0x8027B5C8: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x8027B5CC: bne         $v0, $at, L_8027B610
    if (ctx->r2 != ctx->r1) {
        // 0x8027B5D0: nop
    
            goto L_8027B610;
    }
    // 0x8027B5D0: nop

L_8027B5D4:
    // 0x8027B5D4: jal         0x80279568
    // 0x8027B5D8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_80279568(rdram, ctx);
        goto after_3;
    // 0x8027B5D8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_3:
    // 0x8027B5DC: bne         $v0, $zero, L_8027B5EC
    if (ctx->r2 != 0) {
        // 0x8027B5E0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8027B5EC;
    }
    // 0x8027B5E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8027B5E4: b           L_8027B5F4
    // 0x8027B5E8: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
        goto L_8027B5F4;
    // 0x8027B5E8: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
L_8027B5EC:
    // 0x8027B5EC: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8027B5F0: sb          $t3, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r11;
L_8027B5F4:
    // 0x8027B5F4: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027B5F8: jal         0x8002BE08
    // 0x8027B5FC: addiu       $a1, $a1, 0x185C
    ctx->r5 = ADD32(ctx->r5, 0X185C);
    func_8002BE08(rdram, ctx);
        goto after_4;
    // 0x8027B5FC: addiu       $a1, $a1, 0x185C
    ctx->r5 = ADD32(ctx->r5, 0X185C);
    after_4:
    // 0x8027B600: b           L_8027B644
    // 0x8027B604: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8027B644;
    // 0x8027B604: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8027B608:
    // 0x8027B608: b           L_8027B640
    // 0x8027B60C: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
        goto L_8027B640;
    // 0x8027B60C: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
L_8027B610:
    // 0x8027B610: lb          $a1, 0x37($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X37);
    // 0x8027B614: jal         0x80279568
    // 0x8027B618: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_80279568(rdram, ctx);
        goto after_5;
    // 0x8027B618: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_5:
    // 0x8027B61C: bne         $v0, $zero, L_8027B62C
    if (ctx->r2 != 0) {
        // 0x8027B620: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8027B62C;
    }
    // 0x8027B620: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8027B624: b           L_8027B634
    // 0x8027B628: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
        goto L_8027B634;
    // 0x8027B628: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
L_8027B62C:
    // 0x8027B62C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8027B630: sb          $t4, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r12;
L_8027B634:
    // 0x8027B634: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027B638: jal         0x8002BE08
    // 0x8027B63C: addiu       $a1, $a1, 0x1864
    ctx->r5 = ADD32(ctx->r5, 0X1864);
    func_8002BE08(rdram, ctx);
        goto after_6;
    // 0x8027B63C: addiu       $a1, $a1, 0x1864
    ctx->r5 = ADD32(ctx->r5, 0X1864);
    after_6:
L_8027B640:
    // 0x8027B640: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8027B644:
    // 0x8027B644: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8027B648: jr          $ra
    // 0x8027B64C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8027B64C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8027B650(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027B650: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x8027B654: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x8027B658: lb          $v0, 0x38($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X38);
    // 0x8027B65C: sll         $t6, $a2, 24
    ctx->r14 = S32(ctx->r6 << 24);
    // 0x8027B660: sra         $t7, $t6, 24
    ctx->r15 = S32(SIGNED(ctx->r14) >> 24);
    // 0x8027B664: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8027B668: beq         $v0, $at, L_8027B698
    if (ctx->r2 == ctx->r1) {
        // 0x8027B66C: or          $a2, $t7, $zero
        ctx->r6 = ctx->r15 | 0;
            goto L_8027B698;
    }
    // 0x8027B66C: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x8027B670: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8027B674: beq         $v0, $at, L_8027B6BC
    if (ctx->r2 == ctx->r1) {
        // 0x8027B678: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_8027B6BC;
    }
    // 0x8027B678: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8027B67C: beq         $v0, $at, L_8027B6E0
    if (ctx->r2 == ctx->r1) {
        // 0x8027B680: nop
    
            goto L_8027B6E0;
    }
    // 0x8027B680: nop

    // 0x8027B684: lh          $t8, 0xE($sp)
    ctx->r24 = MEM_H(ctx->r29, 0XE);
    // 0x8027B688: nop

    // 0x8027B68C: addu        $t9, $t8, $t7
    ctx->r25 = ADD32(ctx->r24, ctx->r15);
    // 0x8027B690: jr          $ra
    // 0x8027B694: sh          $t9, 0x6($a1)
    MEM_H(0X6, ctx->r5) = ctx->r25;
    return;
    // 0x8027B694: sh          $t9, 0x6($a1)
    MEM_H(0X6, ctx->r5) = ctx->r25;
L_8027B698:
    // 0x8027B698: lb          $t0, 0x3D($a0)
    ctx->r8 = MEM_B(ctx->r4, 0X3D);
    // 0x8027B69C: lh          $t2, 0xE($sp)
    ctx->r10 = MEM_H(ctx->r29, 0XE);
    // 0x8027B6A0: bne         $a2, $t0, L_8027B6B4
    if (ctx->r6 != ctx->r8) {
        // 0x8027B6A4: addu        $t3, $t2, $a2
        ctx->r11 = ADD32(ctx->r10, ctx->r6);
            goto L_8027B6B4;
    }
    // 0x8027B6A4: addu        $t3, $t2, $a2
    ctx->r11 = ADD32(ctx->r10, ctx->r6);
    // 0x8027B6A8: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8027B6AC: jr          $ra
    // 0x8027B6B0: sh          $t1, 0x6($a1)
    MEM_H(0X6, ctx->r5) = ctx->r9;
    return;
    // 0x8027B6B0: sh          $t1, 0x6($a1)
    MEM_H(0X6, ctx->r5) = ctx->r9;
L_8027B6B4:
    // 0x8027B6B4: jr          $ra
    // 0x8027B6B8: sh          $t3, 0x6($a1)
    MEM_H(0X6, ctx->r5) = ctx->r11;
    return;
    // 0x8027B6B8: sh          $t3, 0x6($a1)
    MEM_H(0X6, ctx->r5) = ctx->r11;
L_8027B6BC:
    // 0x8027B6BC: lb          $t4, 0x44($a0)
    ctx->r12 = MEM_B(ctx->r4, 0X44);
    // 0x8027B6C0: lh          $t6, 0xE($sp)
    ctx->r14 = MEM_H(ctx->r29, 0XE);
    // 0x8027B6C4: bne         $a2, $t4, L_8027B6D8
    if (ctx->r6 != ctx->r12) {
        // 0x8027B6C8: addu        $t7, $t6, $a2
        ctx->r15 = ADD32(ctx->r14, ctx->r6);
            goto L_8027B6D8;
    }
    // 0x8027B6C8: addu        $t7, $t6, $a2
    ctx->r15 = ADD32(ctx->r14, ctx->r6);
    // 0x8027B6CC: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x8027B6D0: jr          $ra
    // 0x8027B6D4: sh          $t5, 0x6($a1)
    MEM_H(0X6, ctx->r5) = ctx->r13;
    return;
    // 0x8027B6D4: sh          $t5, 0x6($a1)
    MEM_H(0X6, ctx->r5) = ctx->r13;
L_8027B6D8:
    // 0x8027B6D8: jr          $ra
    // 0x8027B6DC: sh          $t7, 0x6($a1)
    MEM_H(0X6, ctx->r5) = ctx->r15;
    return;
    // 0x8027B6DC: sh          $t7, 0x6($a1)
    MEM_H(0X6, ctx->r5) = ctx->r15;
L_8027B6E0:
    // 0x8027B6E0: lb          $t8, 0x46($a0)
    ctx->r24 = MEM_B(ctx->r4, 0X46);
    // 0x8027B6E4: lh          $t0, 0xE($sp)
    ctx->r8 = MEM_H(ctx->r29, 0XE);
    // 0x8027B6E8: bne         $a2, $t8, L_8027B6FC
    if (ctx->r6 != ctx->r24) {
        // 0x8027B6EC: addu        $t1, $t0, $a2
        ctx->r9 = ADD32(ctx->r8, ctx->r6);
            goto L_8027B6FC;
    }
    // 0x8027B6EC: addu        $t1, $t0, $a2
    ctx->r9 = ADD32(ctx->r8, ctx->r6);
    // 0x8027B6F0: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x8027B6F4: jr          $ra
    // 0x8027B6F8: sh          $t9, 0x6($a1)
    MEM_H(0X6, ctx->r5) = ctx->r25;
    return;
    // 0x8027B6F8: sh          $t9, 0x6($a1)
    MEM_H(0X6, ctx->r5) = ctx->r25;
L_8027B6FC:
    // 0x8027B6FC: sh          $t1, 0x6($a1)
    MEM_H(0X6, ctx->r5) = ctx->r9;
    // 0x8027B700: jr          $ra
    // 0x8027B704: nop

    return;
    // 0x8027B704: nop

;}
RECOMP_FUNC void func_8027B708(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027B708: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8027B70C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027B710: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x8027B714: nop

    // 0x8027B718: lw          $a0, 0x8($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X8);
    // 0x8027B71C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8027B720: jal         0x80279E2C
    // 0x8027B724: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_80279E2C(rdram, ctx);
        goto after_0;
    // 0x8027B724: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x8027B728: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8027B72C: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x8027B730: beq         $v0, $zero, L_8027B77C
    if (ctx->r2 == 0) {
        // 0x8027B734: addiu       $a1, $zero, 0x50
        ctx->r5 = ADD32(0, 0X50);
            goto L_8027B77C;
    }
    // 0x8027B734: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x8027B738: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8027B73C: bne         $v0, $at, L_8027B7AC
    if (ctx->r2 != ctx->r1) {
        // 0x8027B740: addiu       $a1, $zero, 0x98
        ctx->r5 = ADD32(0, 0X98);
            goto L_8027B7AC;
    }
    // 0x8027B740: addiu       $a1, $zero, 0x98
    ctx->r5 = ADD32(0, 0X98);
    // 0x8027B744: lb          $t7, 0x2E($a0)
    ctx->r15 = MEM_B(ctx->r4, 0X2E);
    // 0x8027B748: lui         $t9, 0x803D
    ctx->r25 = S32(0X803D << 16);
    // 0x8027B74C: bne         $t7, $zero, L_8027B764
    if (ctx->r15 != 0) {
        // 0x8027B750: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_8027B764;
    }
    // 0x8027B750: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8027B754: lui         $t8, 0x803D
    ctx->r24 = S32(0X803D << 16);
    // 0x8027B758: addiu       $t8, $t8, 0x6350
    ctx->r24 = ADD32(ctx->r24, 0X6350);
    // 0x8027B75C: b           L_8027B76C
    // 0x8027B760: sw          $t8, 0x30($a3)
    MEM_W(0X30, ctx->r7) = ctx->r24;
        goto L_8027B76C;
    // 0x8027B760: sw          $t8, 0x30($a3)
    MEM_W(0X30, ctx->r7) = ctx->r24;
L_8027B764:
    // 0x8027B764: addiu       $t9, $t9, 0x677C
    ctx->r25 = ADD32(ctx->r25, 0X677C);
    // 0x8027B768: sw          $t9, 0x30($a3)
    MEM_W(0X30, ctx->r7) = ctx->r25;
L_8027B76C:
    // 0x8027B76C: jal         0x8004CD44
    // 0x8027B770: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    func_8004CD44(rdram, ctx);
        goto after_1;
    // 0x8027B770: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    after_1:
    // 0x8027B774: b           L_8027B7B0
    // 0x8027B778: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8027B7B0;
    // 0x8027B778: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027B77C:
    // 0x8027B77C: lb          $t0, 0x2E($a0)
    ctx->r8 = MEM_B(ctx->r4, 0X2E);
    // 0x8027B780: lui         $t2, 0x803D
    ctx->r10 = S32(0X803D << 16);
    // 0x8027B784: bne         $t0, $zero, L_8027B79C
    if (ctx->r8 != 0) {
        // 0x8027B788: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_8027B79C;
    }
    // 0x8027B788: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8027B78C: lui         $t1, 0x803D
    ctx->r9 = S32(0X803D << 16);
    // 0x8027B790: addiu       $t1, $t1, 0x53B4
    ctx->r9 = ADD32(ctx->r9, 0X53B4);
    // 0x8027B794: b           L_8027B7A4
    // 0x8027B798: sw          $t1, 0x30($a3)
    MEM_W(0X30, ctx->r7) = ctx->r9;
        goto L_8027B7A4;
    // 0x8027B798: sw          $t1, 0x30($a3)
    MEM_W(0X30, ctx->r7) = ctx->r9;
L_8027B79C:
    // 0x8027B79C: addiu       $t2, $t2, 0x5D8C
    ctx->r10 = ADD32(ctx->r10, 0X5D8C);
    // 0x8027B7A0: sw          $t2, 0x30($a3)
    MEM_W(0X30, ctx->r7) = ctx->r10;
L_8027B7A4:
    // 0x8027B7A4: jal         0x8004CD44
    // 0x8027B7A8: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    func_8004CD44(rdram, ctx);
        goto after_2;
    // 0x8027B7A8: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    after_2:
L_8027B7AC:
    // 0x8027B7AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027B7B0:
    // 0x8027B7B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8027B7B4: jr          $ra
    // 0x8027B7B8: nop

    return;
    // 0x8027B7B8: nop

;}
RECOMP_FUNC void func_8027B7BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027B7BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027B7C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027B7C4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027B7C8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027B7CC: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x8027B7D0: nop

    // 0x8027B7D4: lw          $a0, 0x8($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X8);
    // 0x8027B7D8: jal         0x80279E2C
    // 0x8027B7DC: nop

    func_80279E2C(rdram, ctx);
        goto after_0;
    // 0x8027B7DC: nop

    after_0:
    // 0x8027B7E0: beq         $v0, $zero, L_8027B804
    if (ctx->r2 == 0) {
        // 0x8027B7E4: lui         $a0, 0x8005
        ctx->r4 = S32(0X8005 << 16);
            goto L_8027B804;
    }
    // 0x8027B7E4: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8027B7E8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8027B7EC: bne         $v0, $at, L_8027B80C
    if (ctx->r2 != ctx->r1) {
        // 0x8027B7F0: lui         $a0, 0x8005
        ctx->r4 = S32(0X8005 << 16);
            goto L_8027B80C;
    }
    // 0x8027B7F0: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8027B7F4: jal         0x8002A468
    // 0x8027B7F8: addiu       $a0, $a0, -0x3228
    ctx->r4 = ADD32(ctx->r4, -0X3228);
    func_8002A468(rdram, ctx);
        goto after_1;
    // 0x8027B7F8: addiu       $a0, $a0, -0x3228
    ctx->r4 = ADD32(ctx->r4, -0X3228);
    after_1:
    // 0x8027B7FC: b           L_8027B810
    // 0x8027B800: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8027B810;
    // 0x8027B800: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027B804:
    // 0x8027B804: jal         0x8002A468
    // 0x8027B808: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    func_8002A468(rdram, ctx);
        goto after_2;
    // 0x8027B808: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    after_2:
L_8027B80C:
    // 0x8027B80C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027B810:
    // 0x8027B810: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027B814: jr          $ra
    // 0x8027B818: nop

    return;
    // 0x8027B818: nop

;}
RECOMP_FUNC void func_8027B81C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027B81C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8027B820: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027B824: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8027B828: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8027B82C: lw          $t7, 0x8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X8);
    // 0x8027B830: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8027B834: lw          $v1, 0x8($t7)
    ctx->r3 = MEM_W(ctx->r15, 0X8);
    // 0x8027B838: addiu       $a1, $zero, 0x29B
    ctx->r5 = ADD32(0, 0X29B);
    // 0x8027B83C: lb          $v0, 0x38($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X38);
    // 0x8027B840: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x8027B844: beq         $v0, $at, L_8027B8B8
    if (ctx->r2 == ctx->r1) {
        // 0x8027B848: lui         $a3, 0x803C
        ctx->r7 = S32(0X803C << 16);
            goto L_8027B8B8;
    }
    // 0x8027B848: lui         $a3, 0x803C
    ctx->r7 = S32(0X803C << 16);
    // 0x8027B84C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8027B850: beq         $v0, $at, L_8027B918
    if (ctx->r2 == ctx->r1) {
        // 0x8027B854: addiu       $a1, $zero, 0x41B
        ctx->r5 = ADD32(0, 0X41B);
            goto L_8027B918;
    }
    // 0x8027B854: addiu       $a1, $zero, 0x41B
    ctx->r5 = ADD32(0, 0X41B);
    // 0x8027B858: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8027B85C: beq         $v0, $at, L_8027B884
    if (ctx->r2 == ctx->r1) {
        // 0x8027B860: addiu       $a1, $zero, 0x29B
        ctx->r5 = ADD32(0, 0X29B);
            goto L_8027B884;
    }
    // 0x8027B860: addiu       $a1, $zero, 0x29B
    ctx->r5 = ADD32(0, 0X29B);
    // 0x8027B864: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8027B868: beq         $v0, $at, L_8027B8E4
    if (ctx->r2 == ctx->r1) {
        // 0x8027B86C: addiu       $a1, $zero, 0x29B
        ctx->r5 = ADD32(0, 0X29B);
            goto L_8027B8E4;
    }
    // 0x8027B86C: addiu       $a1, $zero, 0x29B
    ctx->r5 = ADD32(0, 0X29B);
    // 0x8027B870: sh          $zero, 0x38($a0)
    MEM_H(0X38, ctx->r4) = 0;
    // 0x8027B874: sh          $zero, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = 0;
    // 0x8027B878: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8027B87C: b           L_8027B95C
    // 0x8027B880: sb          $zero, 0x4($t9)
    MEM_B(0X4, ctx->r25) = 0;
        goto L_8027B95C;
    // 0x8027B880: sb          $zero, 0x4($t9)
    MEM_B(0X4, ctx->r25) = 0;
L_8027B884:
    // 0x8027B884: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8027B888: lui         $a3, 0x803C
    ctx->r7 = S32(0X803C << 16);
    // 0x8027B88C: addiu       $a3, $a3, 0x6740
    ctx->r7 = ADD32(ctx->r7, 0X6740);
    // 0x8027B890: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x8027B894: jal         0x8004CD24
    // 0x8027B898: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_8004CD24(rdram, ctx);
        goto after_0;
    // 0x8027B898: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x8027B89C: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x8027B8A0: nop

    // 0x8027B8A4: lb          $a0, 0x44($v1)
    ctx->r4 = MEM_B(ctx->r3, 0X44);
    // 0x8027B8A8: jal         0x8027B9A4
    // 0x8027B8AC: nop

    func_8027B9A4(rdram, ctx);
        goto after_1;
    // 0x8027B8AC: nop

    after_1:
    // 0x8027B8B0: b           L_8027B960
    // 0x8027B8B4: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
        goto L_8027B960;
    // 0x8027B8B4: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
L_8027B8B8:
    // 0x8027B8B8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8027B8BC: addiu       $a3, $a3, 0x6740
    ctx->r7 = ADD32(ctx->r7, 0X6740);
    // 0x8027B8C0: jal         0x8004CD24
    // 0x8027B8C4: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_8004CD24(rdram, ctx);
        goto after_2;
    // 0x8027B8C4: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_2:
    // 0x8027B8C8: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x8027B8CC: nop

    // 0x8027B8D0: lb          $a0, 0x3D($v1)
    ctx->r4 = MEM_B(ctx->r3, 0X3D);
    // 0x8027B8D4: jal         0x8027B9A4
    // 0x8027B8D8: nop

    func_8027B9A4(rdram, ctx);
        goto after_3;
    // 0x8027B8D8: nop

    after_3:
    // 0x8027B8DC: b           L_8027B960
    // 0x8027B8E0: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
        goto L_8027B960;
    // 0x8027B8E0: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
L_8027B8E4:
    // 0x8027B8E4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8027B8E8: lui         $a3, 0x803C
    ctx->r7 = S32(0X803C << 16);
    // 0x8027B8EC: addiu       $a3, $a3, 0x6740
    ctx->r7 = ADD32(ctx->r7, 0X6740);
    // 0x8027B8F0: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x8027B8F4: jal         0x8004CD24
    // 0x8027B8F8: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_8004CD24(rdram, ctx);
        goto after_4;
    // 0x8027B8F8: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_4:
    // 0x8027B8FC: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x8027B900: nop

    // 0x8027B904: lb          $a0, 0x46($v1)
    ctx->r4 = MEM_B(ctx->r3, 0X46);
    // 0x8027B908: jal         0x8027B9A4
    // 0x8027B90C: nop

    func_8027B9A4(rdram, ctx);
        goto after_5;
    // 0x8027B90C: nop

    after_5:
    // 0x8027B910: b           L_8027B960
    // 0x8027B914: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
        goto L_8027B960;
    // 0x8027B914: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
L_8027B918:
    // 0x8027B918: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8027B91C: lui         $a3, 0x803D
    ctx->r7 = S32(0X803D << 16);
    // 0x8027B920: addiu       $a3, $a3, -0x7874
    ctx->r7 = ADD32(ctx->r7, -0X7874);
    // 0x8027B924: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x8027B928: jal         0x8004CD24
    // 0x8027B92C: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_8004CD24(rdram, ctx);
        goto after_6;
    // 0x8027B92C: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_6:
    // 0x8027B930: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x8027B934: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8027B938: lb          $t0, 0x42($v1)
    ctx->r8 = MEM_B(ctx->r3, 0X42);
    // 0x8027B93C: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x8027B940: bne         $t0, $zero, L_8027B958
    if (ctx->r8 != 0) {
        // 0x8027B944: nop
    
            goto L_8027B958;
    }
    // 0x8027B944: nop

    // 0x8027B948: jal         0x8006F678
    // 0x8027B94C: nop

    func_8006F678(rdram, ctx);
        goto after_7;
    // 0x8027B94C: nop

    after_7:
    // 0x8027B950: b           L_8027B960
    // 0x8027B954: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
        goto L_8027B960;
    // 0x8027B954: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
L_8027B958:
    // 0x8027B958: sh          $zero, 0x3A($t1)
    MEM_H(0X3A, ctx->r9) = 0;
L_8027B95C:
    // 0x8027B95C: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
L_8027B960:
    // 0x8027B960: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8027B964: lhu         $t3, 0x3A($t2)
    ctx->r11 = MEM_HU(ctx->r10, 0X3A);
    // 0x8027B968: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8027B96C: bne         $t3, $at, L_8027B98C
    if (ctx->r11 != ctx->r1) {
        // 0x8027B970: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_8027B98C;
    }
    // 0x8027B970: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8027B974: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8027B978: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8027B97C: jal         0x8002135C
    // 0x8027B980: addiu       $a2, $zero, 0xDB
    ctx->r6 = ADD32(0, 0XDB);
    func_8002135C(rdram, ctx);
        goto after_8;
    // 0x8027B980: addiu       $a2, $zero, 0xDB
    ctx->r6 = ADD32(0, 0XDB);
    after_8:
    // 0x8027B984: b           L_8027B998
    // 0x8027B988: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8027B998;
    // 0x8027B988: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027B98C:
    // 0x8027B98C: jal         0x8002135C
    // 0x8027B990: addiu       $a2, $zero, 0xDA
    ctx->r6 = ADD32(0, 0XDA);
    func_8002135C(rdram, ctx);
        goto after_9;
    // 0x8027B990: addiu       $a2, $zero, 0xDA
    ctx->r6 = ADD32(0, 0XDA);
    after_9:
    // 0x8027B994: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027B998:
    // 0x8027B998: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8027B99C: jr          $ra
    // 0x8027B9A0: nop

    return;
    // 0x8027B9A0: nop

;}
RECOMP_FUNC void func_8027B9A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027B9A4: sll         $t6, $a0, 24
    ctx->r14 = S32(ctx->r4 << 24);
    // 0x8027B9A8: sra         $t7, $t6, 24
    ctx->r15 = S32(SIGNED(ctx->r14) >> 24);
    // 0x8027B9AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027B9B0: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x8027B9B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027B9B8: bne         $t7, $at, L_8027B9DC
    if (ctx->r15 != ctx->r1) {
        // 0x8027B9BC: sw          $a0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r4;
            goto L_8027B9DC;
    }
    // 0x8027B9BC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027B9C0: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8027B9C4: addiu       $v0, $v0, 0x1CF0
    ctx->r2 = ADD32(ctx->r2, 0X1CF0);
    // 0x8027B9C8: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x8027B9CC: jal         0x8006F678
    // 0x8027B9D0: nop

    func_8006F678(rdram, ctx);
        goto after_0;
    // 0x8027B9D0: nop

    after_0:
    // 0x8027B9D4: b           L_8027BA00
    // 0x8027B9D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8027BA00;
    // 0x8027B9D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027B9DC:
    // 0x8027B9DC: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8027B9E0: addiu       $v0, $v0, 0x1CF0
    ctx->r2 = ADD32(ctx->r2, 0X1CF0);
    // 0x8027B9E4: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x8027B9E8: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x8027B9EC: sh          $t8, 0x38($t9)
    MEM_H(0X38, ctx->r25) = ctx->r24;
    // 0x8027B9F0: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x8027B9F4: nop

    // 0x8027B9F8: sh          $zero, 0x3A($t0)
    MEM_H(0X3A, ctx->r8) = 0;
    // 0x8027B9FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027BA00:
    // 0x8027BA00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027BA04: jr          $ra
    // 0x8027BA08: nop

    return;
    // 0x8027BA08: nop

;}
RECOMP_FUNC void func_8027BA0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027BA0C: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x8027BA10: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8027BA14: lw          $v0, 0x8($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X8);
    // 0x8027BA18: sb          $t7, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r15;
    // 0x8027BA1C: lb          $t8, 0x38($v0)
    ctx->r24 = MEM_B(ctx->r2, 0X38);
    // 0x8027BA20: nop

    // 0x8027BA24: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x8027BA28: sltiu       $at, $t9, 0x8
    ctx->r1 = ctx->r25 < 0X8 ? 1 : 0;
    // 0x8027BA2C: beq         $at, $zero, L_8027BAB0
    if (ctx->r1 == 0) {
        // 0x8027BA30: sll         $t9, $t9, 2
        ctx->r25 = S32(ctx->r25 << 2);
            goto L_8027BAB0;
    }
    // 0x8027BA30: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8027BA34: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8027BA38: addu        $at, $at, $t9
    gpr jr_addend_8027BA44 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8027BA3C: lw          $t9, 0x1F64($at)
    ctx->r25 = ADD32(ctx->r1, 0X1F64);
    // 0x8027BA40: nop

    // 0x8027BA44: jr          $t9
    // 0x8027BA48: nop

    switch (jr_addend_8027BA44 >> 2) {
        case 0: goto L_8027BA4C; break;
        case 1: goto L_8027BA5C; break;
        case 2: goto L_8027BAB0; break;
        case 3: goto L_8027BAB0; break;
        case 4: goto L_8027BA5C; break;
        case 5: goto L_8027BA6C; break;
        case 6: goto L_8027BAA0; break;
        case 7: goto L_8027BAA0; break;
        default: switch_error(__func__, 0x8027BA44, 0x80281F64);
    }
    // 0x8027BA48: nop

L_8027BA4C:
    // 0x8027BA4C: lui         $t0, 0x803C
    ctx->r8 = S32(0X803C << 16);
    // 0x8027BA50: addiu       $t0, $t0, 0x6D58
    ctx->r8 = ADD32(ctx->r8, 0X6D58);
    // 0x8027BA54: jr          $ra
    // 0x8027BA58: sw          $t0, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r8;
    return;
    // 0x8027BA58: sw          $t0, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r8;
L_8027BA5C:
    // 0x8027BA5C: lui         $t1, 0x803C
    ctx->r9 = S32(0X803C << 16);
    // 0x8027BA60: addiu       $t1, $t1, 0x71CC
    ctx->r9 = ADD32(ctx->r9, 0X71CC);
    // 0x8027BA64: jr          $ra
    // 0x8027BA68: sw          $t1, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r9;
    return;
    // 0x8027BA68: sw          $t1, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r9;
L_8027BA6C:
    // 0x8027BA6C: lb          $v1, 0x4C($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X4C);
    // 0x8027BA70: lui         $t2, 0x803C
    ctx->r10 = S32(0X803C << 16);
    // 0x8027BA74: beq         $v1, $zero, L_8027BA90
    if (ctx->r3 == 0) {
        // 0x8027BA78: addiu       $t2, $t2, 0x7E14
        ctx->r10 = ADD32(ctx->r10, 0X7E14);
            goto L_8027BA90;
    }
    // 0x8027BA78: addiu       $t2, $t2, 0x7E14
    ctx->r10 = ADD32(ctx->r10, 0X7E14);
    // 0x8027BA7C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8027BA80: beq         $v1, $at, L_8027BA98
    if (ctx->r3 == ctx->r1) {
        // 0x8027BA84: nop
    
            goto L_8027BA98;
    }
    // 0x8027BA84: nop

    // 0x8027BA88: jr          $ra
    // 0x8027BA8C: nop

    return;
    // 0x8027BA8C: nop

L_8027BA90:
    // 0x8027BA90: jr          $ra
    // 0x8027BA94: sw          $t2, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r10;
    return;
    // 0x8027BA94: sw          $t2, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r10;
L_8027BA98:
    // 0x8027BA98: jr          $ra
    // 0x8027BA9C: sw          $zero, 0x30($a1)
    MEM_W(0X30, ctx->r5) = 0;
    return;
    // 0x8027BA9C: sw          $zero, 0x30($a1)
    MEM_W(0X30, ctx->r5) = 0;
L_8027BAA0:
    // 0x8027BAA0: lui         $t3, 0x803D
    ctx->r11 = S32(0X803D << 16);
    // 0x8027BAA4: addiu       $t3, $t3, -0x785C
    ctx->r11 = ADD32(ctx->r11, -0X785C);
    // 0x8027BAA8: jr          $ra
    // 0x8027BAAC: sw          $t3, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r11;
    return;
    // 0x8027BAAC: sw          $t3, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r11;
L_8027BAB0:
    // 0x8027BAB0: sb          $zero, 0x4($a1)
    MEM_B(0X4, ctx->r5) = 0;
    // 0x8027BAB4: jr          $ra
    // 0x8027BAB8: nop

    return;
    // 0x8027BAB8: nop

;}
RECOMP_FUNC void func_8027BABC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027BABC: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x8027BAC0: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x8027BAC4: lw          $v0, 0x8($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X8);
    // 0x8027BAC8: sb          $zero, 0x4($a1)
    MEM_B(0X4, ctx->r5) = 0;
    // 0x8027BACC: lb          $t7, 0x38($v0)
    ctx->r15 = MEM_B(ctx->r2, 0X38);
    // 0x8027BAD0: nop

    // 0x8027BAD4: bne         $t7, $at, L_8027BAF0
    if (ctx->r15 != ctx->r1) {
        // 0x8027BAD8: nop
    
            goto L_8027BAF0;
    }
    // 0x8027BAD8: nop

    // 0x8027BADC: lb          $t8, 0x4C($v0)
    ctx->r24 = MEM_B(ctx->r2, 0X4C);
    // 0x8027BAE0: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8027BAE4: bne         $t8, $zero, L_8027BAF0
    if (ctx->r24 != 0) {
        // 0x8027BAE8: nop
    
            goto L_8027BAF0;
    }
    // 0x8027BAE8: nop

    // 0x8027BAEC: sb          $t9, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r25;
L_8027BAF0:
    // 0x8027BAF0: jr          $ra
    // 0x8027BAF4: nop

    return;
    // 0x8027BAF4: nop

;}
RECOMP_FUNC void func_8027BAF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027BAF8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8027BAFC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8027BB00: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8027BB04: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x8027BB08: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8027BB0C: lw          $t7, 0x8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X8);
    // 0x8027BB10: lhu         $t8, 0x70($a2)
    ctx->r24 = MEM_HU(ctx->r6, 0X70);
    // 0x8027BB14: lw          $a0, 0x8($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X8);
    // 0x8027BB18: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8027BB1C: sb          $t8, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r24;
    // 0x8027BB20: jal         0x80279E2C
    // 0x8027BB24: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    func_80279E2C(rdram, ctx);
        goto after_0;
    // 0x8027BB24: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    after_0:
    // 0x8027BB28: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8027BB2C: beq         $v0, $zero, L_8027BBA8
    if (ctx->r2 == 0) {
        // 0x8027BB30: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_8027BBA8;
    }
    // 0x8027BB30: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8027BB34: bne         $v0, $a1, L_8027BBAC
    if (ctx->r2 != ctx->r5) {
        // 0x8027BB38: nop
    
            goto L_8027BBAC;
    }
    // 0x8027BB38: nop

    // 0x8027BB3C: lb          $t9, 0x41($a0)
    ctx->r25 = MEM_B(ctx->r4, 0X41);
    // 0x8027BB40: nop

    // 0x8027BB44: beq         $t9, $zero, L_8027BBAC
    if (ctx->r25 == 0) {
        // 0x8027BB48: nop
    
            goto L_8027BBAC;
    }
    // 0x8027BB48: nop

    // 0x8027BB4C: lb          $v0, 0x40($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X40);
    // 0x8027BB50: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8027BB54: beq         $v0, $zero, L_8027BB8C
    if (ctx->r2 == 0) {
        // 0x8027BB58: lui         $a0, 0x8012
        ctx->r4 = S32(0X8012 << 16);
            goto L_8027BB8C;
    }
    // 0x8027BB58: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8027BB5C: bne         $v0, $a1, L_8027BBAC
    if (ctx->r2 != ctx->r5) {
        // 0x8027BB60: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8027BBAC;
    }
    // 0x8027BB60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8027BB64: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8027BB68: jal         0x8002B9DC
    // 0x8027BB6C: addiu       $a1, $a1, -0x1060
    ctx->r5 = ADD32(ctx->r5, -0X1060);
    func_8002B9DC(rdram, ctx);
        goto after_1;
    // 0x8027BB6C: addiu       $a1, $a1, -0x1060
    ctx->r5 = ADD32(ctx->r5, -0X1060);
    after_1:
    // 0x8027BB70: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8027BB74: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x8027BB78: lbu         $a2, 0x2F($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X2F);
    // 0x8027BB7C: jal         0x8006DAD8
    // 0x8027BB80: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8006DAD8(rdram, ctx);
        goto after_2;
    // 0x8027BB80: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_2:
    // 0x8027BB84: b           L_8027BBB0
    // 0x8027BB88: lw          $a1, 0x38($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X38);
        goto L_8027BBB0;
    // 0x8027BB88: lw          $a1, 0x38($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X38);
L_8027BB8C:
    // 0x8027BB8C: sb          $t0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r8;
    // 0x8027BB90: lbu         $a2, 0x2F($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X2F);
    // 0x8027BB94: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x8027BB98: jal         0x8006DB98
    // 0x8027BB9C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8006DB98(rdram, ctx);
        goto after_3;
    // 0x8027BB9C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_3:
    // 0x8027BBA0: b           L_8027BBB0
    // 0x8027BBA4: lw          $a1, 0x38($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X38);
        goto L_8027BBB0;
    // 0x8027BBA4: lw          $a1, 0x38($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X38);
L_8027BBA8:
    // 0x8027BBA8: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
L_8027BBAC:
    // 0x8027BBAC: lw          $a1, 0x38($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X38);
L_8027BBB0:
    // 0x8027BBB0: jal         0x8002BEC4
    // 0x8027BBB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8002BEC4(rdram, ctx);
        goto after_4;
    // 0x8027BBB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8027BBB8: lw          $a1, 0x38($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X38);
    // 0x8027BBBC: jal         0x8002BFF4
    // 0x8027BBC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8002BFF4(rdram, ctx);
        goto after_5;
    // 0x8027BBC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x8027BBC4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8027BBC8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8027BBCC: jr          $ra
    // 0x8027BBD0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8027BBD0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8027BBD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027BBD4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8027BBD8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8027BBDC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8027BBE0: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x8027BBE4: addiu       $t7, $zero, 0xB
    ctx->r15 = ADD32(0, 0XB);
    // 0x8027BBE8: lw          $a3, 0x8($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X8);
    // 0x8027BBEC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x8027BBF0: lbu         $v1, 0x3A($a3)
    ctx->r3 = MEM_BU(ctx->r7, 0X3A);
    // 0x8027BBF4: lbu         $t0, 0x3D($a3)
    ctx->r8 = MEM_BU(ctx->r7, 0X3D);
    // 0x8027BBF8: sb          $t7, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r15;
    // 0x8027BBFC: lb          $v0, 0x38($a3)
    ctx->r2 = MEM_B(ctx->r7, 0X38);
    // 0x8027BC00: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8027BC04: beq         $v0, $a2, L_8027BC1C
    if (ctx->r2 == ctx->r6) {
        // 0x8027BC08: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8027BC1C;
    }
    // 0x8027BC08: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8027BC0C: beq         $v0, $at, L_8027BC94
    if (ctx->r2 == ctx->r1) {
        // 0x8027BC10: nop
    
            goto L_8027BC94;
    }
    // 0x8027BC10: nop

    // 0x8027BC14: b           L_8027BD44
    // 0x8027BC18: sb          $zero, 0x4($a1)
    MEM_B(0X4, ctx->r5) = 0;
        goto L_8027BD44;
    // 0x8027BC18: sb          $zero, 0x4($a1)
    MEM_B(0X4, ctx->r5) = 0;
L_8027BC1C:
    // 0x8027BC1C: lb          $v0, 0x3E($a3)
    ctx->r2 = MEM_B(ctx->r7, 0X3E);
    // 0x8027BC20: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8027BC24: beq         $v0, $zero, L_8027BC3C
    if (ctx->r2 == 0) {
        // 0x8027BC28: nop
    
            goto L_8027BC3C;
    }
    // 0x8027BC28: nop

    // 0x8027BC2C: beq         $v0, $a0, L_8027BC44
    if (ctx->r2 == ctx->r4) {
        // 0x8027BC30: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_8027BC44;
    }
    // 0x8027BC30: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8027BC34: b           L_8027BD48
    // 0x8027BC38: lw          $a1, 0x38($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X38);
        goto L_8027BD48;
    // 0x8027BC38: lw          $a1, 0x38($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X38);
L_8027BC3C:
    // 0x8027BC3C: b           L_8027BD44
    // 0x8027BC40: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
        goto L_8027BD44;
    // 0x8027BC40: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
L_8027BC44:
    // 0x8027BC44: sll         $t9, $v1, 2
    ctx->r25 = S32(ctx->r3 << 2);
    // 0x8027BC48: subu        $t9, $t9, $v1
    ctx->r25 = SUB32(ctx->r25, ctx->r3);
    // 0x8027BC4C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8027BC50: subu        $t9, $t9, $v1
    ctx->r25 = SUB32(ctx->r25, ctx->r3);
    // 0x8027BC54: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x8027BC58: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x8027BC5C: sb          $t8, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r24;
    // 0x8027BC60: addu        $a2, $a2, $t1
    ctx->r6 = ADD32(ctx->r6, ctx->r9);
    // 0x8027BC64: lbu         $a2, -0x6AA4($a2)
    ctx->r6 = MEM_BU(ctx->r6, -0X6AA4);
    // 0x8027BC68: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8027BC6C: jal         0x802784C0
    // 0x8027BC70: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_802784C0(rdram, ctx);
        goto after_0;
    // 0x8027BC70: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_0:
    // 0x8027BC74: lw          $t2, 0x18($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X18);
    // 0x8027BC78: lw          $t3, 0x38($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X38);
    // 0x8027BC7C: nop

    // 0x8027BC80: sw          $t2, 0x14($t3)
    MEM_W(0X14, ctx->r11) = ctx->r10;
    // 0x8027BC84: lw          $t5, 0x38($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X38);
    // 0x8027BC88: lw          $t4, 0x1C($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X1C);
    // 0x8027BC8C: b           L_8027BD44
    // 0x8027BC90: sw          $t4, 0x18($t5)
    MEM_W(0X18, ctx->r13) = ctx->r12;
        goto L_8027BD44;
    // 0x8027BC90: sw          $t4, 0x18($t5)
    MEM_W(0X18, ctx->r13) = ctx->r12;
L_8027BC94:
    // 0x8027BC94: lb          $v0, 0x42($a3)
    ctx->r2 = MEM_B(ctx->r7, 0X42);
    // 0x8027BC98: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8027BC9C: beq         $v0, $zero, L_8027BCBC
    if (ctx->r2 == 0) {
        // 0x8027BCA0: nop
    
            goto L_8027BCBC;
    }
    // 0x8027BCA0: nop

    // 0x8027BCA4: beq         $v0, $a0, L_8027BCBC
    if (ctx->r2 == ctx->r4) {
        // 0x8027BCA8: nop
    
            goto L_8027BCBC;
    }
    // 0x8027BCA8: nop

    // 0x8027BCAC: beq         $v0, $a2, L_8027BCC4
    if (ctx->r2 == ctx->r6) {
        // 0x8027BCB0: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_8027BCC4;
    }
    // 0x8027BCB0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8027BCB4: b           L_8027BD48
    // 0x8027BCB8: lw          $a1, 0x38($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X38);
        goto L_8027BD48;
    // 0x8027BCB8: lw          $a1, 0x38($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X38);
L_8027BCBC:
    // 0x8027BCBC: b           L_8027BD44
    // 0x8027BCC0: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
        goto L_8027BD44;
    // 0x8027BCC0: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
L_8027BCC4:
    // 0x8027BCC4: sb          $t6, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r14;
    // 0x8027BCC8: lb          $v0, 0x43($a3)
    ctx->r2 = MEM_B(ctx->r7, 0X43);
    // 0x8027BCCC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8027BCD0: beq         $v0, $zero, L_8027BCF0
    if (ctx->r2 == 0) {
        // 0x8027BCD4: nop
    
            goto L_8027BCF0;
    }
    // 0x8027BCD4: nop

    // 0x8027BCD8: beq         $v0, $a0, L_8027BD04
    if (ctx->r2 == ctx->r4) {
        // 0x8027BCDC: or          $a1, $s0, $zero
        ctx->r5 = ctx->r16 | 0;
            goto L_8027BD04;
    }
    // 0x8027BCDC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8027BCE0: beq         $v0, $a2, L_8027BD18
    if (ctx->r2 == ctx->r6) {
        // 0x8027BCE4: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_8027BD18;
    }
    // 0x8027BCE4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8027BCE8: b           L_8027BD28
    // 0x8027BCEC: lw          $t7, 0x18($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X18);
        goto L_8027BD28;
    // 0x8027BCEC: lw          $t7, 0x18($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X18);
L_8027BCF0:
    // 0x8027BCF0: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8027BCF4: jal         0x802784C0
    // 0x8027BCF8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_802784C0(rdram, ctx);
        goto after_1;
    // 0x8027BCF8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x8027BCFC: b           L_8027BD28
    // 0x8027BD00: lw          $t7, 0x18($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X18);
        goto L_8027BD28;
    // 0x8027BD00: lw          $t7, 0x18($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X18);
L_8027BD04:
    // 0x8027BD04: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8027BD08: jal         0x802784C0
    // 0x8027BD0C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_802784C0(rdram, ctx);
        goto after_2;
    // 0x8027BD0C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_2:
    // 0x8027BD10: b           L_8027BD28
    // 0x8027BD14: lw          $t7, 0x18($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X18);
        goto L_8027BD28;
    // 0x8027BD14: lw          $t7, 0x18($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X18);
L_8027BD18:
    // 0x8027BD18: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8027BD1C: jal         0x802784C0
    // 0x8027BD20: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_802784C0(rdram, ctx);
        goto after_3;
    // 0x8027BD20: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_3:
    // 0x8027BD24: lw          $t7, 0x18($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X18);
L_8027BD28:
    // 0x8027BD28: lw          $t8, 0x38($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X38);
    // 0x8027BD2C: nop

    // 0x8027BD30: sw          $t7, 0x14($t8)
    MEM_W(0X14, ctx->r24) = ctx->r15;
    // 0x8027BD34: lw          $t1, 0x38($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X38);
    // 0x8027BD38: lw          $t9, 0x1C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X1C);
    // 0x8027BD3C: nop

    // 0x8027BD40: sw          $t9, 0x18($t1)
    MEM_W(0X18, ctx->r9) = ctx->r25;
L_8027BD44:
    // 0x8027BD44: lw          $a1, 0x38($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X38);
L_8027BD48:
    // 0x8027BD48: jal         0x8002BEC4
    // 0x8027BD4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8002BEC4(rdram, ctx);
        goto after_4;
    // 0x8027BD4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8027BD50: lw          $a1, 0x38($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X38);
    // 0x8027BD54: jal         0x8002BFF4
    // 0x8027BD58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8002BFF4(rdram, ctx);
        goto after_5;
    // 0x8027BD58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x8027BD5C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8027BD60: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8027BD64: jr          $ra
    // 0x8027BD68: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8027BD68: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8027BD6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027BD6C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027BD70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027BD74: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x8027BD78: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x8027BD7C: lw          $v1, 0x8($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X8);
    // 0x8027BD80: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8027BD84: lb          $v0, 0x38($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X38);
    // 0x8027BD88: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x8027BD8C: beq         $v0, $at, L_8027BDE0
    if (ctx->r2 == ctx->r1) {
        // 0x8027BD90: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_8027BDE0;
    }
    // 0x8027BD90: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8027BD94: beq         $v0, $at, L_8027BDE0
    if (ctx->r2 == ctx->r1) {
        // 0x8027BD98: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_8027BDE0;
    }
    // 0x8027BD98: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8027BD9C: beq         $v0, $at, L_8027BDE0
    if (ctx->r2 == ctx->r1) {
        // 0x8027BDA0: addiu       $at, $zero, 0x6
        ctx->r1 = ADD32(0, 0X6);
            goto L_8027BDE0;
    }
    // 0x8027BDA0: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x8027BDA4: bne         $v0, $at, L_8027BDF0
    if (ctx->r2 != ctx->r1) {
        // 0x8027BDA8: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_8027BDF0;
    }
    // 0x8027BDA8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x8027BDAC: lb          $t7, 0x4C($v1)
    ctx->r15 = MEM_B(ctx->r3, 0X4C);
    // 0x8027BDB0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8027BDB4: bne         $t7, $at, L_8027BDD0
    if (ctx->r15 != ctx->r1) {
        // 0x8027BDB8: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_8027BDD0;
    }
    // 0x8027BDB8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x8027BDBC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8027BDC0: jal         0x8002BB50
    // 0x8027BDC4: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    func_8002BB50(rdram, ctx);
        goto after_0;
    // 0x8027BDC4: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    after_0:
    // 0x8027BDC8: b           L_8027BDFC
    // 0x8027BDCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8027BDFC;
    // 0x8027BDCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027BDD0:
    // 0x8027BDD0: jal         0x8002BB50
    // 0x8027BDD4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8002BB50(rdram, ctx);
        goto after_1;
    // 0x8027BDD4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x8027BDD8: b           L_8027BDFC
    // 0x8027BDDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8027BDFC;
    // 0x8027BDDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027BDE0:
    // 0x8027BDE0: jal         0x8002BB50
    // 0x8027BDE4: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    func_8002BB50(rdram, ctx);
        goto after_2;
    // 0x8027BDE4: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    after_2:
    // 0x8027BDE8: b           L_8027BDFC
    // 0x8027BDEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8027BDFC;
    // 0x8027BDEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027BDF0:
    // 0x8027BDF0: jal         0x8002BB50
    // 0x8027BDF4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8002BB50(rdram, ctx);
        goto after_3;
    // 0x8027BDF4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x8027BDF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027BDFC:
    // 0x8027BDFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027BE00: jr          $ra
    // 0x8027BE04: nop

    return;
    // 0x8027BE04: nop

;}
RECOMP_FUNC void func_8027BE08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027BE08: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x8027BE0C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8027BE10: lw          $v0, 0x8($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X8);
    // 0x8027BE14: sb          $t7, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r15;
    // 0x8027BE18: lb          $v1, 0x38($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X38);
    // 0x8027BE1C: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x8027BE20: bne         $v1, $at, L_8027BE54
    if (ctx->r3 != ctx->r1) {
        // 0x8027BE24: addiu       $at, $zero, 0x7
        ctx->r1 = ADD32(0, 0X7);
            goto L_8027BE54;
    }
    // 0x8027BE24: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x8027BE28: lb          $t8, 0x4C($v0)
    ctx->r24 = MEM_B(ctx->r2, 0X4C);
    // 0x8027BE2C: lui         $t0, 0x803C
    ctx->r8 = S32(0X803C << 16);
    // 0x8027BE30: bne         $t8, $zero, L_8027BE48
    if (ctx->r24 != 0) {
        // 0x8027BE34: addiu       $t0, $t0, 0x7730
        ctx->r8 = ADD32(ctx->r8, 0X7730);
            goto L_8027BE48;
    }
    // 0x8027BE34: addiu       $t0, $t0, 0x7730
    ctx->r8 = ADD32(ctx->r8, 0X7730);
    // 0x8027BE38: lui         $t9, 0x803C
    ctx->r25 = S32(0X803C << 16);
    // 0x8027BE3C: addiu       $t9, $t9, 0x7388
    ctx->r25 = ADD32(ctx->r25, 0X7388);
    // 0x8027BE40: jr          $ra
    // 0x8027BE44: sw          $t9, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r25;
    return;
    // 0x8027BE44: sw          $t9, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r25;
L_8027BE48:
    // 0x8027BE48: jr          $ra
    // 0x8027BE4C: sw          $t0, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r8;
    return;
    // 0x8027BE4C: sw          $t0, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r8;
    // 0x8027BE50: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
L_8027BE54:
    // 0x8027BE54: bne         $v1, $at, L_8027BE68
    if (ctx->r3 != ctx->r1) {
        // 0x8027BE58: lui         $t1, 0x803D
        ctx->r9 = S32(0X803D << 16);
            goto L_8027BE68;
    }
    // 0x8027BE58: lui         $t1, 0x803D
    ctx->r9 = S32(0X803D << 16);
    // 0x8027BE5C: addiu       $t1, $t1, -0x7CAC
    ctx->r9 = ADD32(ctx->r9, -0X7CAC);
    // 0x8027BE60: jr          $ra
    // 0x8027BE64: sw          $t1, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r9;
    return;
    // 0x8027BE64: sw          $t1, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r9;
L_8027BE68:
    // 0x8027BE68: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x8027BE6C: bne         $v1, $at, L_8027BE80
    if (ctx->r3 != ctx->r1) {
        // 0x8027BE70: lui         $t2, 0x803D
        ctx->r10 = S32(0X803D << 16);
            goto L_8027BE80;
    }
    // 0x8027BE70: lui         $t2, 0x803D
    ctx->r10 = S32(0X803D << 16);
    // 0x8027BE74: addiu       $t2, $t2, -0x7CAC
    ctx->r10 = ADD32(ctx->r10, -0X7CAC);
    // 0x8027BE78: jr          $ra
    // 0x8027BE7C: sw          $t2, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r10;
    return;
    // 0x8027BE7C: sw          $t2, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r10;
L_8027BE80:
    // 0x8027BE80: sb          $zero, 0x4($a1)
    MEM_B(0X4, ctx->r5) = 0;
    // 0x8027BE84: jr          $ra
    // 0x8027BE88: nop

    return;
    // 0x8027BE88: nop

;}
RECOMP_FUNC void func_8027BE8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027BE8C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027BE90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027BE94: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x8027BE98: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x8027BE9C: lw          $v0, 0x8($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X8);
    // 0x8027BEA0: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x8027BEA4: lb          $v1, 0x38($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X38);
    // 0x8027BEA8: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8027BEAC: beq         $v1, $at, L_8027BEC0
    if (ctx->r3 == ctx->r1) {
        // 0x8027BEB0: addiu       $a1, $zero, 0x15
        ctx->r5 = ADD32(0, 0X15);
            goto L_8027BEC0;
    }
    // 0x8027BEB0: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    // 0x8027BEB4: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x8027BEB8: bne         $v1, $at, L_8027BEE4
    if (ctx->r3 != ctx->r1) {
        // 0x8027BEBC: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_8027BEE4;
    }
    // 0x8027BEBC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_8027BEC0:
    // 0x8027BEC0: jal         0x8002BB50
    // 0x8027BEC4: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    func_8002BB50(rdram, ctx);
        goto after_0;
    // 0x8027BEC4: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_0:
    // 0x8027BEC8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8027BECC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8027BED0: jal         0x8002135C
    // 0x8027BED4: addiu       $a2, $zero, 0xD2
    ctx->r6 = ADD32(0, 0XD2);
    func_8002135C(rdram, ctx);
        goto after_1;
    // 0x8027BED4: addiu       $a2, $zero, 0xD2
    ctx->r6 = ADD32(0, 0XD2);
    after_1:
    // 0x8027BED8: b           L_8027BF20
    // 0x8027BEDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8027BF20;
    // 0x8027BEDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027BEE0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_8027BEE4:
    // 0x8027BEE4: bne         $v1, $at, L_8027BF14
    if (ctx->r3 != ctx->r1) {
        // 0x8027BEE8: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_8027BF14;
    }
    // 0x8027BEE8: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8027BEEC: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8027BEF0: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    // 0x8027BEF4: jal         0x8002BB50
    // 0x8027BEF8: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    func_8002BB50(rdram, ctx);
        goto after_2;
    // 0x8027BEF8: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_2:
    // 0x8027BEFC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8027BF00: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8027BF04: jal         0x8002135C
    // 0x8027BF08: addiu       $a2, $zero, 0xD1
    ctx->r6 = ADD32(0, 0XD1);
    func_8002135C(rdram, ctx);
        goto after_3;
    // 0x8027BF08: addiu       $a2, $zero, 0xD1
    ctx->r6 = ADD32(0, 0XD1);
    after_3:
    // 0x8027BF0C: b           L_8027BF20
    // 0x8027BF10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8027BF20;
    // 0x8027BF10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027BF14:
    // 0x8027BF14: jal         0x8002BB50
    // 0x8027BF18: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8002BB50(rdram, ctx);
        goto after_4;
    // 0x8027BF18: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x8027BF1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027BF20:
    // 0x8027BF20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027BF24: jr          $ra
    // 0x8027BF28: nop

    return;
    // 0x8027BF28: nop

;}
RECOMP_FUNC void func_8027BF2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027BF2C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027BF30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027BF34: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027BF38: lw          $t6, 0x4($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X4);
    // 0x8027BF3C: nop

    // 0x8027BF40: lw          $t7, 0x8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X8);
    // 0x8027BF44: nop

    // 0x8027BF48: lw          $a0, 0x8($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X8);
    // 0x8027BF4C: jal         0x8006D620
    // 0x8027BF50: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8006D620(rdram, ctx);
        goto after_0;
    // 0x8027BF50: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8027BF54: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8027BF58: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8027BF5C: jal         0x8006D6B8
    // 0x8027BF60: nop

    func_8006D6B8(rdram, ctx);
        goto after_1;
    // 0x8027BF60: nop

    after_1:
    // 0x8027BF64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027BF68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027BF6C: jr          $ra
    // 0x8027BF70: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8027BF70: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8027BF74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027BF74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027BF78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027BF7C: lhu         $v1, 0x1E($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X1E);
    // 0x8027BF80: lui         $t7, 0x8028
    ctx->r15 = S32(0X8028 << 16);
    // 0x8027BF84: addiu       $t7, $t7, 0x13E8
    ctx->r15 = ADD32(ctx->r15, 0X13E8);
    // 0x8027BF88: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
    // 0x8027BF8C: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x8027BF90: lh          $a1, 0x0($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X0);
    // 0x8027BF94: lh          $a2, 0x2($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X2);
    // 0x8027BF98: jal         0x8002AB30
    // 0x8027BF9C: nop

    func_8002AB30(rdram, ctx);
        goto after_0;
    // 0x8027BF9C: nop

    after_0:
    // 0x8027BFA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027BFA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027BFA8: jr          $ra
    // 0x8027BFAC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8027BFAC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8027BFB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027BFB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027BFB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027BFB8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027BFBC: lw          $t6, 0x4($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X4);
    // 0x8027BFC0: nop

    // 0x8027BFC4: lw          $t7, 0x8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X8);
    // 0x8027BFC8: nop

    // 0x8027BFCC: lw          $t8, 0x8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X8);
    // 0x8027BFD0: nop

    // 0x8027BFD4: lw          $a0, 0x8($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X8);
    // 0x8027BFD8: jal         0x8006D620
    // 0x8027BFDC: nop

    func_8006D620(rdram, ctx);
        goto after_0;
    // 0x8027BFDC: nop

    after_0:
    // 0x8027BFE0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8027BFE4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8027BFE8: addiu       $a2, $zero, 0xFA
    ctx->r6 = ADD32(0, 0XFA);
    // 0x8027BFEC: jal         0x8002B608
    // 0x8027BFF0: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_8002B608(rdram, ctx);
        goto after_1;
    // 0x8027BFF0: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_1:
    // 0x8027BFF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027BFF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027BFFC: jr          $ra
    // 0x8027C000: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8027C000: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8027C004(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027C004: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8027C008: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027C00C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8027C010: lw          $t6, 0x4($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X4);
    // 0x8027C014: lb          $v0, 0x1F($a1)
    ctx->r2 = MEM_B(ctx->r5, 0X1F);
    // 0x8027C018: lw          $t7, 0x8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X8);
    // 0x8027C01C: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x8027C020: lw          $t8, 0x8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X8);
    // 0x8027C024: andi        $a2, $v0, 0xFF
    ctx->r6 = ctx->r2 & 0XFF;
    // 0x8027C028: lw          $a1, 0x8($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X8);
    // 0x8027C02C: jal         0x80279914
    // 0x8027C030: nop

    func_80279914(rdram, ctx);
        goto after_0;
    // 0x8027C030: nop

    after_0:
    // 0x8027C034: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8027C038: lh          $a1, 0x1C($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X1C);
    // 0x8027C03C: lh          $a2, 0x1E($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X1E);
    // 0x8027C040: jal         0x8002AB30
    // 0x8027C044: nop

    func_8002AB30(rdram, ctx);
        goto after_1;
    // 0x8027C044: nop

    after_1:
    // 0x8027C048: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027C04C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8027C050: jr          $ra
    // 0x8027C054: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8027C054: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8027C058: nop

    // 0x8027C05C: nop

;}
RECOMP_FUNC void func_8027C060(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027C060: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027C064: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027C068: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027C06C: lw          $t6, 0x4($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X4);
    // 0x8027C070: nop

    // 0x8027C074: lw          $t7, 0x8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X8);
    // 0x8027C078: nop

    // 0x8027C07C: lw          $t8, 0x8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X8);
    // 0x8027C080: nop

    // 0x8027C084: lw          $a0, 0x8($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X8);
    // 0x8027C088: jal         0x8006D620
    // 0x8027C08C: nop

    func_8006D620(rdram, ctx);
        goto after_0;
    // 0x8027C08C: nop

    after_0:
    // 0x8027C090: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027C094: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027C098: jr          $ra
    // 0x8027C09C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8027C09C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8027C0A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027C0A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027C0A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027C0A8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027C0AC: lw          $t6, 0x4($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X4);
    // 0x8027C0B0: nop

    // 0x8027C0B4: lw          $t7, 0x8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X8);
    // 0x8027C0B8: nop

    // 0x8027C0BC: lw          $t8, 0x8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X8);
    // 0x8027C0C0: nop

    // 0x8027C0C4: lw          $a0, 0x8($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X8);
    // 0x8027C0C8: jal         0x8006D66C
    // 0x8027C0CC: nop

    func_8006D66C(rdram, ctx);
        goto after_0;
    // 0x8027C0CC: nop

    after_0:
    // 0x8027C0D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027C0D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027C0D8: jr          $ra
    // 0x8027C0DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8027C0DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8027C0E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027C0E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027C0E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027C0E8: lw          $t6, 0x4($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X4);
    // 0x8027C0EC: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x8027C0F0: lw          $t7, 0x8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X8);
    // 0x8027C0F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8027C0F8: lw          $t8, 0x8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X8);
    // 0x8027C0FC: nop

    // 0x8027C100: lw          $v1, 0x8($t8)
    ctx->r3 = MEM_W(ctx->r24, 0X8);
    // 0x8027C104: nop

    // 0x8027C108: lb          $v0, 0x2E($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X2E);
    // 0x8027C10C: nop

    // 0x8027C110: beq         $v0, $zero, L_8027C180
    if (ctx->r2 == 0) {
        // 0x8027C114: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8027C180;
    }
    // 0x8027C114: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027C118: bne         $v0, $a1, L_8027C180
    if (ctx->r2 != ctx->r5) {
        // 0x8027C11C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8027C180;
    }
    // 0x8027C11C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027C120: lb          $v0, 0x2F($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X2F);
    // 0x8027C124: nop

    // 0x8027C128: beq         $v0, $zero, L_8027C140
    if (ctx->r2 == 0) {
        // 0x8027C12C: nop
    
            goto L_8027C140;
    }
    // 0x8027C12C: nop

    // 0x8027C130: beq         $v0, $a1, L_8027C15C
    if (ctx->r2 == ctx->r5) {
        // 0x8027C134: addiu       $a1, $zero, 0xD8
        ctx->r5 = ADD32(0, 0XD8);
            goto L_8027C15C;
    }
    // 0x8027C134: addiu       $a1, $zero, 0xD8
    ctx->r5 = ADD32(0, 0XD8);
    // 0x8027C138: b           L_8027C170
    // 0x8027C13C: lhu         $t9, 0x1C($a2)
    ctx->r25 = MEM_HU(ctx->r6, 0X1C);
        goto L_8027C170;
    // 0x8027C13C: lhu         $t9, 0x1C($a2)
    ctx->r25 = MEM_HU(ctx->r6, 0X1C);
L_8027C140:
    // 0x8027C140: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    // 0x8027C144: jal         0x8027C18C
    // 0x8027C148: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    func_8027C18C(rdram, ctx);
        goto after_0;
    // 0x8027C148: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    after_0:
    // 0x8027C14C: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8027C150: b           L_8027C170
    // 0x8027C154: lhu         $t9, 0x1C($a2)
    ctx->r25 = MEM_HU(ctx->r6, 0X1C);
        goto L_8027C170;
    // 0x8027C154: lhu         $t9, 0x1C($a2)
    ctx->r25 = MEM_HU(ctx->r6, 0X1C);
    // 0x8027C158: addiu       $a1, $zero, 0xD8
    ctx->r5 = ADD32(0, 0XD8);
L_8027C15C:
    // 0x8027C15C: jal         0x8027C18C
    // 0x8027C160: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    func_8027C18C(rdram, ctx);
        goto after_1;
    // 0x8027C160: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    after_1:
    // 0x8027C164: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8027C168: nop

    // 0x8027C16C: lhu         $t9, 0x1C($a2)
    ctx->r25 = MEM_HU(ctx->r6, 0X1C);
L_8027C170:
    // 0x8027C170: nop

    // 0x8027C174: ori         $t0, $t9, 0x2
    ctx->r8 = ctx->r25 | 0X2;
    // 0x8027C178: sh          $t0, 0x1C($a2)
    MEM_H(0X1C, ctx->r6) = ctx->r8;
    // 0x8027C17C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027C180:
    // 0x8027C180: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027C184: jr          $ra
    // 0x8027C188: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8027C188: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8027C18C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027C18C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027C190: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027C194: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027C198: lw          $v0, 0x38($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X38);
    // 0x8027C19C: or          $t6, $a1, $zero
    ctx->r14 = ctx->r5 | 0;
    // 0x8027C1A0: lh          $t8, 0x14($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X14);
    // 0x8027C1A4: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x8027C1A8: subu        $a1, $t7, $t8
    ctx->r5 = SUB32(ctx->r15, ctx->r24);
    // 0x8027C1AC: sll         $t9, $a1, 16
    ctx->r25 = S32(ctx->r5 << 16);
    // 0x8027C1B0: lh          $a2, 0x18($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X18);
    // 0x8027C1B4: jal         0x8002AB30
    // 0x8027C1B8: sra         $a1, $t9, 16
    ctx->r5 = S32(SIGNED(ctx->r25) >> 16);
    func_8002AB30(rdram, ctx);
        goto after_0;
    // 0x8027C1B8: sra         $a1, $t9, 16
    ctx->r5 = S32(SIGNED(ctx->r25) >> 16);
    after_0:
    // 0x8027C1BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027C1C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027C1C4: jr          $ra
    // 0x8027C1C8: nop

    return;
    // 0x8027C1C8: nop

    // 0x8027C1CC: nop

;}
RECOMP_FUNC void func_8027C1D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027C1D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027C1D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027C1D8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027C1DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027C1E0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8027C1E4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8027C1E8: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027C1EC: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x8027C1F0: sb          $t6, -0x32A1($at)
    MEM_B(-0X32A1, ctx->r1) = ctx->r14;
    // 0x8027C1F4: addiu       $a0, $a0, -0x1820
    ctx->r4 = ADD32(ctx->r4, -0X1820);
    // 0x8027C1F8: jal         0x80035490
    // 0x8027C1FC: addiu       $a1, $a1, 0x2F40
    ctx->r5 = ADD32(ctx->r5, 0X2F40);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027C1FC: addiu       $a1, $a1, 0x2F40
    ctx->r5 = ADD32(ctx->r5, 0X2F40);
    after_0:
    // 0x8027C200: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027C204: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027C208: jr          $ra
    // 0x8027C20C: nop

    return;
    // 0x8027C20C: nop

;}
RECOMP_FUNC void func_8027C210(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027C210: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027C214: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027C218: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027C21C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027C220: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8027C224: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8027C228: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027C22C: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8027C230: sb          $t6, -0x32A1($at)
    MEM_B(-0X32A1, ctx->r1) = ctx->r14;
    // 0x8027C234: addiu       $a0, $a0, 0x4930
    ctx->r4 = ADD32(ctx->r4, 0X4930);
    // 0x8027C238: jal         0x80035490
    // 0x8027C23C: addiu       $a1, $a1, 0x2F80
    ctx->r5 = ADD32(ctx->r5, 0X2F80);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027C23C: addiu       $a1, $a1, 0x2F80
    ctx->r5 = ADD32(ctx->r5, 0X2F80);
    after_0:
    // 0x8027C240: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027C244: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027C248: jr          $ra
    // 0x8027C24C: nop

    return;
    // 0x8027C24C: nop

;}
RECOMP_FUNC void func_8027C250(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027C250: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027C254: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027C258: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027C25C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027C260: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027C264: lui         $a0, 0x803F
    ctx->r4 = S32(0X803F << 16);
    // 0x8027C268: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8027C26C: jal         0x80035490
    // 0x8027C270: addiu       $a1, $a1, 0x2F88
    ctx->r5 = ADD32(ctx->r5, 0X2F88);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027C270: addiu       $a1, $a1, 0x2F88
    ctx->r5 = ADD32(ctx->r5, 0X2F88);
    after_0:
    // 0x8027C274: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027C278: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027C27C: jr          $ra
    // 0x8027C280: nop

    return;
    // 0x8027C280: nop

;}
RECOMP_FUNC void func_8027C284(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027C284: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027C288: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027C28C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027C290: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027C294: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8027C298: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8027C29C: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027C2A0: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8027C2A4: sb          $t6, 0x418($at)
    MEM_B(0X418, ctx->r1) = ctx->r14;
    // 0x8027C2A8: addiu       $a0, $a0, 0x6754
    ctx->r4 = ADD32(ctx->r4, 0X6754);
    // 0x8027C2AC: jal         0x80035490
    // 0x8027C2B0: addiu       $a1, $a1, 0x2F90
    ctx->r5 = ADD32(ctx->r5, 0X2F90);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027C2B0: addiu       $a1, $a1, 0x2F90
    ctx->r5 = ADD32(ctx->r5, 0X2F90);
    after_0:
    // 0x8027C2B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027C2B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027C2BC: jr          $ra
    // 0x8027C2C0: nop

    return;
    // 0x8027C2C0: nop

;}
RECOMP_FUNC void func_8027C2C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027C2C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027C2C8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027C2CC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027C2D0: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x8027C2D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027C2D8: addiu       $t6, $t6, -0x3D3C
    ctx->r14 = ADD32(ctx->r14, -0X3D3C);
    // 0x8027C2DC: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8027C2E0: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027C2E4: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8027C2E8: sw          $t6, 0x2F98($at)
    MEM_W(0X2F98, ctx->r1) = ctx->r14;
    // 0x8027C2EC: addiu       $a0, $a0, 0xF00
    ctx->r4 = ADD32(ctx->r4, 0XF00);
    // 0x8027C2F0: jal         0x80035490
    // 0x8027C2F4: addiu       $a1, $a1, 0x2FBC
    ctx->r5 = ADD32(ctx->r5, 0X2FBC);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027C2F4: addiu       $a1, $a1, 0x2FBC
    ctx->r5 = ADD32(ctx->r5, 0X2FBC);
    after_0:
    // 0x8027C2F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027C2FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027C300: jr          $ra
    // 0x8027C304: nop

    return;
    // 0x8027C304: nop

;}
RECOMP_FUNC void func_8027C308(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027C308: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8027C30C: lbu         $t6, -0x32B0($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X32B0);
    // 0x8027C310: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027C314: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027C318: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027C31C: beq         $t6, $zero, L_8027C370
    if (ctx->r14 == 0) {
        // 0x8027C320: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_8027C370;
    }
    // 0x8027C320: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027C324: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x8027C328: lb          $v0, 0x418($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X418);
    // 0x8027C32C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8027C330: beq         $v0, $at, L_8027C34C
    if (ctx->r2 == ctx->r1) {
        // 0x8027C334: lui         $a0, 0x8028
        ctx->r4 = S32(0X8028 << 16);
            goto L_8027C34C;
    }
    // 0x8027C334: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x8027C338: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x8027C33C: beq         $v0, $at, L_8027C34C
    if (ctx->r2 == ctx->r1) {
        // 0x8027C340: addiu       $at, $zero, 0xA
        ctx->r1 = ADD32(0, 0XA);
            goto L_8027C34C;
    }
    // 0x8027C340: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x8027C344: bne         $v0, $at, L_8027C35C
    if (ctx->r2 != ctx->r1) {
        // 0x8027C348: nop
    
            goto L_8027C35C;
    }
    // 0x8027C348: nop

L_8027C34C:
    // 0x8027C34C: jal         0x800297B4
    // 0x8027C350: addiu       $a0, $a0, -0x38D8
    ctx->r4 = ADD32(ctx->r4, -0X38D8);
    func_800297B4(rdram, ctx);
        goto after_0;
    // 0x8027C350: addiu       $a0, $a0, -0x38D8
    ctx->r4 = ADD32(ctx->r4, -0X38D8);
    after_0:
    // 0x8027C354: b           L_8027C388
    // 0x8027C358: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8027C388;
    // 0x8027C358: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027C35C:
    // 0x8027C35C: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x8027C360: jal         0x800297B4
    // 0x8027C364: addiu       $a0, $a0, -0x3B6C
    ctx->r4 = ADD32(ctx->r4, -0X3B6C);
    func_800297B4(rdram, ctx);
        goto after_1;
    // 0x8027C364: addiu       $a0, $a0, -0x3B6C
    ctx->r4 = ADD32(ctx->r4, -0X3B6C);
    after_1:
    // 0x8027C368: b           L_8027C388
    // 0x8027C36C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8027C388;
    // 0x8027C36C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027C370:
    // 0x8027C370: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8027C374: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027C378: addiu       $a1, $a1, 0x2FC4
    ctx->r5 = ADD32(ctx->r5, 0X2FC4);
    // 0x8027C37C: jal         0x80035490
    // 0x8027C380: addiu       $a0, $a0, 0x158
    ctx->r4 = ADD32(ctx->r4, 0X158);
    func_80035490(rdram, ctx);
        goto after_2;
    // 0x8027C380: addiu       $a0, $a0, 0x158
    ctx->r4 = ADD32(ctx->r4, 0X158);
    after_2:
    // 0x8027C384: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027C388:
    // 0x8027C388: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027C38C: jr          $ra
    // 0x8027C390: nop

    return;
    // 0x8027C390: nop

;}
