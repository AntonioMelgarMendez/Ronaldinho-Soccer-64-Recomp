#include "iss64_recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_8000AABC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000AABC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000AAC0: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x8000AAC4: lui         $t1, 0x2
    ctx->r9 = S32(0X2 << 16);
    // 0x8000AAC8: lui         $t0, 0x8013
    ctx->r8 = S32(0X8013 << 16);
    // 0x8000AACC: lui         $a3, 0x2
    ctx->r7 = S32(0X2 << 16);
    // 0x8000AAD0: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x8000AAD4: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8000AAD8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000AADC: addiu       $a1, $a1, -0x2F98
    ctx->r5 = ADD32(ctx->r5, -0X2F98);
    // 0x8000AAE0: addiu       $a2, $a2, 0x3EF0
    ctx->r6 = ADD32(ctx->r6, 0X3EF0);
    // 0x8000AAE4: ori         $a3, $a3, 0x95E0
    ctx->r7 = ctx->r7 | 0X95E0;
    // 0x8000AAE8: addiu       $t0, $t0, 0x3F8C
    ctx->r8 = ADD32(ctx->r8, 0X3F8C);
    // 0x8000AAEC: ori         $t1, $t1, 0x9884
    ctx->r9 = ctx->r9 | 0X9884;
    // 0x8000AAF0: addiu       $v0, $v0, 0x3940
    ctx->r2 = ADD32(ctx->r2, 0X3940);
    // 0x8000AAF4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_8000AAF8:
    // 0x8000AAF8: sltu        $at, $v0, $a2
    ctx->r1 = ctx->r2 < ctx->r6 ? 1 : 0;
    // 0x8000AAFC: sh          $zero, 0x0($v0)
    MEM_H(0X0, ctx->r2) = 0;
    // 0x8000AB00: sh          $zero, 0x2($v0)
    MEM_H(0X2, ctx->r2) = 0;
    // 0x8000AB04: sh          $zero, 0x2E($v0)
    MEM_H(0X2E, ctx->r2) = 0;
    // 0x8000AB08: beq         $at, $zero, L_8000AB2C
    if (ctx->r1 == 0) {
        // 0x8000AB0C: sw          $zero, 0x28($v0)
        MEM_W(0X28, ctx->r2) = 0;
            goto L_8000AB2C;
    }
    // 0x8000AB0C: sw          $zero, 0x28($v0)
    MEM_W(0X28, ctx->r2) = 0;
    // 0x8000AB10: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x8000AB14: nop

    // 0x8000AB18: addu        $t7, $t6, $a0
    ctx->r15 = ADD32(ctx->r14, ctx->r4);
    // 0x8000AB1C: addu        $v1, $t7, $a3
    ctx->r3 = ADD32(ctx->r15, ctx->r7);
    // 0x8000AB20: sh          $zero, 0x0($v1)
    MEM_H(0X0, ctx->r3) = 0;
    // 0x8000AB24: b           L_8000AB44
    // 0x8000AB28: sw          $v1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r3;
        goto L_8000AB44;
    // 0x8000AB28: sw          $v1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r3;
L_8000AB2C:
    // 0x8000AB2C: lw          $t8, 0x0($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X0);
    // 0x8000AB30: nop

    // 0x8000AB34: addu        $t9, $t8, $a0
    ctx->r25 = ADD32(ctx->r24, ctx->r4);
    // 0x8000AB38: addu        $v1, $t9, $t1
    ctx->r3 = ADD32(ctx->r25, ctx->r9);
    // 0x8000AB3C: sh          $zero, 0x0($v1)
    MEM_H(0X0, ctx->r3) = 0;
    // 0x8000AB40: sw          $v1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r3;
L_8000AB44:
    // 0x8000AB44: addiu       $v0, $v0, 0x34
    ctx->r2 = ADD32(ctx->r2, 0X34);
    // 0x8000AB48: bne         $v0, $t0, L_8000AAF8
    if (ctx->r2 != ctx->r8) {
        // 0x8000AB4C: addiu       $a0, $a0, 0x34
        ctx->r4 = ADD32(ctx->r4, 0X34);
            goto L_8000AAF8;
    }
    // 0x8000AB4C: addiu       $a0, $a0, 0x34
    ctx->r4 = ADD32(ctx->r4, 0X34);
    // 0x8000AB50: jal         0x80003698
    // 0x8000AB54: nop

    func_80003698(rdram, ctx);
        goto after_0;
    // 0x8000AB54: nop

    after_0:
    // 0x8000AB58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000AB5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8000AB60: jr          $ra
    // 0x8000AB64: nop

    return;
    // 0x8000AB64: nop

;}
RECOMP_FUNC void func_8000AB68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000AB68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000AB6C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000AB70: jal         0x80004A90
    // 0x8000AB74: nop

    func_80004A90(rdram, ctx);
        goto after_0;
    // 0x8000AB74: nop

    after_0:
    // 0x8000AB78: jal         0x8000AABC
    // 0x8000AB7C: nop

    func_8000AABC(rdram, ctx);
        goto after_1;
    // 0x8000AB7C: nop

    after_1:
    // 0x8000AB80: jal         0x8000AB98
    // 0x8000AB84: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8000AB98(rdram, ctx);
        goto after_2;
    // 0x8000AB84: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x8000AB88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000AB8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8000AB90: jr          $ra
    // 0x8000AB94: nop

    return;
    // 0x8000AB94: nop

;}
RECOMP_FUNC void func_8000AB98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000AB98: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8000AB9C: sw          $a0, 0x6980($at)
    MEM_W(0X6980, ctx->r1) = ctx->r4;
    // 0x8000ABA0: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8000ABA4: jr          $ra
    // 0x8000ABA8: sw          $zero, 0x6984($at)
    MEM_W(0X6984, ctx->r1) = 0;
    return;
    // 0x8000ABA8: sw          $zero, 0x6984($at)
    MEM_W(0X6984, ctx->r1) = 0;
;}
RECOMP_FUNC void func_8000ABAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000ABAC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8000ABB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000ABB4: sh          $a1, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r5;
    // 0x8000ABB8: sh          $a2, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r6;
    // 0x8000ABBC: jal         0x80000450
    // 0x8000ABC0: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    func_80000450(rdram, ctx);
        goto after_0;
    // 0x8000ABC0: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_0:
    // 0x8000ABC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000ABC8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8000ABCC: jr          $ra
    // 0x8000ABD0: nop

    return;
    // 0x8000ABD0: nop

;}
RECOMP_FUNC void func_8000ABD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000ABD4: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x8000ABD8: lh          $t6, 0x6A20($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X6A20);
    // 0x8000ABDC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000ABE0: blez        $t6, L_8000AC28
    if (SIGNED(ctx->r14) <= 0) {
        // 0x8000ABE4: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8000AC28;
    }
    // 0x8000ABE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000ABE8: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x8000ABEC: lw          $t7, -0x2F98($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X2F98);
    // 0x8000ABF0: lui         $t8, 0x3
    ctx->r24 = S32(0X3 << 16);
    // 0x8000ABF4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8000ABF8: lh          $t8, -0x13E4($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X13E4);
    // 0x8000ABFC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8000AC00: bgtz        $t8, L_8000AC28
    if (SIGNED(ctx->r24) > 0) {
        // 0x8000AC04: addiu       $t9, $zero, 0xFF
        ctx->r25 = ADD32(0, 0XFF);
            goto L_8000AC28;
    }
    // 0x8000AC04: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x8000AC08: sh          $zero, 0x6A20($at)
    MEM_H(0X6A20, ctx->r1) = 0;
    // 0x8000AC0C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8000AC10: jal         0x8000AABC
    // 0x8000AC14: sh          $t9, 0x6A24($at)
    MEM_H(0X6A24, ctx->r1) = ctx->r25;
    func_8000AABC(rdram, ctx);
        goto after_0;
    // 0x8000AC14: sh          $t9, 0x6A24($at)
    MEM_H(0X6A24, ctx->r1) = ctx->r25;
    after_0:
    // 0x8000AC18: jal         0x8000AB98
    // 0x8000AC1C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8000AB98(rdram, ctx);
        goto after_1;
    // 0x8000AC1C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x8000AC20: b           L_8000ACA0
    // 0x8000AC24: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8000ACA0;
    // 0x8000AC24: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8000AC28:
    // 0x8000AC28: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x8000AC2C: lh          $t0, 0x6A24($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X6A24);
    // 0x8000AC30: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x8000AC34: slti        $at, $t0, 0xFF
    ctx->r1 = SIGNED(ctx->r8) < 0XFF ? 1 : 0;
    // 0x8000AC38: beq         $at, $zero, L_8000AC74
    if (ctx->r1 == 0) {
        // 0x8000AC3C: lui         $t3, 0x8011
        ctx->r11 = S32(0X8011 << 16);
            goto L_8000AC74;
    }
    // 0x8000AC3C: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x8000AC40: lh          $t1, -0x2FAC($t1)
    ctx->r9 = MEM_H(ctx->r9, -0X2FAC);
    // 0x8000AC44: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8000AC48: slti        $at, $t1, 0xFF
    ctx->r1 = SIGNED(ctx->r9) < 0XFF ? 1 : 0;
    // 0x8000AC4C: bne         $at, $zero, L_8000AC74
    if (ctx->r1 != 0) {
        // 0x8000AC50: lui         $at, 0x8009
        ctx->r1 = S32(0X8009 << 16);
            goto L_8000AC74;
    }
    // 0x8000AC50: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8000AC54: sh          $zero, 0x6A20($at)
    MEM_H(0X6A20, ctx->r1) = 0;
    // 0x8000AC58: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8000AC5C: jal         0x8000AABC
    // 0x8000AC60: sh          $t2, 0x6A24($at)
    MEM_H(0X6A24, ctx->r1) = ctx->r10;
    func_8000AABC(rdram, ctx);
        goto after_2;
    // 0x8000AC60: sh          $t2, 0x6A24($at)
    MEM_H(0X6A24, ctx->r1) = ctx->r10;
    after_2:
    // 0x8000AC64: jal         0x8000AB98
    // 0x8000AC68: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8000AB98(rdram, ctx);
        goto after_3;
    // 0x8000AC68: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_3:
    // 0x8000AC6C: b           L_8000ACA0
    // 0x8000AC70: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8000ACA0;
    // 0x8000AC70: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8000AC74:
    // 0x8000AC74: lw          $t3, -0x2F98($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X2F98);
    // 0x8000AC78: lui         $t4, 0x3
    ctx->r12 = S32(0X3 << 16);
    // 0x8000AC7C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8000AC80: lh          $t4, -0x13E4($t4)
    ctx->r12 = MEM_H(ctx->r12, -0X13E4);
    // 0x8000AC84: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8000AC88: lui         $t5, 0x8011
    ctx->r13 = S32(0X8011 << 16);
    // 0x8000AC8C: lh          $t5, -0x2FAC($t5)
    ctx->r13 = MEM_H(ctx->r13, -0X2FAC);
    // 0x8000AC90: sh          $t4, 0x6A20($at)
    MEM_H(0X6A20, ctx->r1) = ctx->r12;
    // 0x8000AC94: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8000AC98: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8000AC9C: sh          $t5, 0x6A24($at)
    MEM_H(0X6A24, ctx->r1) = ctx->r13;
L_8000ACA0:
    // 0x8000ACA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000ACA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8000ACA8: jr          $ra
    // 0x8000ACAC: nop

    return;
    // 0x8000ACAC: nop

;}
RECOMP_FUNC void func_8000ACB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000ACB0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8000ACB4: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x8000ACB8: lui         $t7, 0xE700
    ctx->r15 = S32(0XE700 << 16);
    // 0x8000ACBC: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x8000ACC0: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x8000ACC4: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x8000ACC8: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8000ACCC: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x8000ACD0: lui         $t9, 0xBA00
    ctx->r25 = S32(0XBA00 << 16);
    // 0x8000ACD4: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x8000ACD8: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x8000ACDC: ori         $t9, $t9, 0x1402
    ctx->r25 = ctx->r25 | 0X1402;
    // 0x8000ACE0: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8000ACE4: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x8000ACE8: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x8000ACEC: lui         $t0, 0x8010
    ctx->r8 = S32(0X8010 << 16);
    // 0x8000ACF0: addiu       $t0, $t0, -0x3770
    ctx->r8 = ADD32(ctx->r8, -0X3770);
    // 0x8000ACF4: addiu       $t1, $v1, 0x8
    ctx->r9 = ADD32(ctx->r3, 0X8);
    // 0x8000ACF8: sw          $t1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r9;
    // 0x8000ACFC: addiu       $t2, $t0, 0x7FFF
    ctx->r10 = ADD32(ctx->r8, 0X7FFF);
    // 0x8000AD00: lhu         $t2, 0x98F($t2)
    ctx->r10 = MEM_HU(ctx->r10, 0X98F);
    // 0x8000AD04: lui         $at, 0xFF00
    ctx->r1 = S32(0XFF00 << 16);
    // 0x8000AD08: andi        $t3, $t2, 0x3
    ctx->r11 = ctx->r10 & 0X3;
    // 0x8000AD0C: sll         $t4, $t3, 19
    ctx->r12 = S32(ctx->r11 << 19);
    // 0x8000AD10: or          $t5, $t4, $at
    ctx->r13 = ctx->r12 | ctx->r1;
    // 0x8000AD14: ori         $t6, $t5, 0x13F
    ctx->r14 = ctx->r13 | 0X13F;
    // 0x8000AD18: addiu       $t7, $t0, 0x7FFF
    ctx->r15 = ADD32(ctx->r8, 0X7FFF);
    // 0x8000AD1C: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8000AD20: lh          $t7, 0x981($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X981);
    // 0x8000AD24: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8000AD28: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8000AD2C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8000AD30: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8000AD34: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x8000AD38: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8000AD3C: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x8000AD40: sll         $t8, $t8, 11
    ctx->r24 = S32(ctx->r24 << 11);
    // 0x8000AD44: lui         $t1, 0x8020
    ctx->r9 = S32(0X8020 << 16);
    // 0x8000AD48: addiu       $t1, $t1, 0x0
    ctx->r9 = ADD32(ctx->r9, 0X0);
    // 0x8000AD4C: addu        $t9, $t8, $at
    ctx->r25 = ADD32(ctx->r24, ctx->r1);
    // 0x8000AD50: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x8000AD54: sw          $t2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r10;
    // 0x8000AD58: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x8000AD5C: lui         $t5, 0x8009
    ctx->r13 = S32(0X8009 << 16);
    // 0x8000AD60: addiu       $t3, $v1, 0x8
    ctx->r11 = ADD32(ctx->r3, 0X8);
    // 0x8000AD64: sw          $t3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r11;
    // 0x8000AD68: addiu       $t5, $t5, 0x69C0
    ctx->r13 = ADD32(ctx->r13, 0X69C0);
    // 0x8000AD6C: lui         $t4, 0x600
    ctx->r12 = S32(0X600 << 16);
    // 0x8000AD70: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x8000AD74: jr          $ra
    // 0x8000AD78: sw          $t5, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r13;
    return;
    // 0x8000AD78: sw          $t5, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r13;
;}
RECOMP_FUNC void func_8000AD7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000AD7C: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x8000AD80: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x8000AD84: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x8000AD88: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x8000AD8C: addiu       $t8, $t8, 0x6988
    ctx->r24 = ADD32(ctx->r24, 0X6988);
    // 0x8000AD90: lui         $t7, 0x600
    ctx->r15 = S32(0X600 << 16);
    // 0x8000AD94: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8000AD98: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x8000AD9C: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x8000ADA0: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x8000ADA4: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x8000ADA8: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x8000ADAC: lui         $t1, 0x8010
    ctx->r9 = S32(0X8010 << 16);
    // 0x8000ADB0: lhu         $t1, 0x521E($t1)
    ctx->r9 = MEM_HU(ctx->r9, 0X521E);
    // 0x8000ADB4: addu        $t6, $t6, $a1
    ctx->r14 = ADD32(ctx->r14, ctx->r5);
    // 0x8000ADB8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8000ADBC: subu        $t6, $t6, $a1
    ctx->r14 = SUB32(ctx->r14, ctx->r5);
    // 0x8000ADC0: andi        $t2, $t1, 0x3
    ctx->r10 = ctx->r9 & 0X3;
    // 0x8000ADC4: sll         $t3, $t2, 19
    ctx->r11 = S32(ctx->r10 << 19);
    // 0x8000ADC8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8000ADCC: lui         $at, 0xFF00
    ctx->r1 = S32(0XFF00 << 16);
    // 0x8000ADD0: or          $t4, $t3, $at
    ctx->r12 = ctx->r11 | ctx->r1;
    // 0x8000ADD4: subu        $t6, $t6, $a1
    ctx->r14 = SUB32(ctx->r14, ctx->r5);
    // 0x8000ADD8: sll         $t6, $t6, 11
    ctx->r14 = S32(ctx->r14 << 11);
    // 0x8000ADDC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8000ADE0: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x8000ADE4: addiu       $t8, $t8, 0x0
    ctx->r24 = ADD32(ctx->r24, 0X0);
    // 0x8000ADE8: addu        $t7, $t6, $at
    ctx->r15 = ADD32(ctx->r14, ctx->r1);
    // 0x8000ADEC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8000ADF0: ori         $t5, $t4, 0x13F
    ctx->r13 = ctx->r12 | 0X13F;
    // 0x8000ADF4: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
    // 0x8000ADF8: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x8000ADFC: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x8000AE00: lui         $t2, 0xBA00
    ctx->r10 = S32(0XBA00 << 16);
    // 0x8000AE04: addiu       $t1, $v1, 0x8
    ctx->r9 = ADD32(ctx->r3, 0X8);
    // 0x8000AE08: sw          $t1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r9;
    // 0x8000AE0C: ori         $t2, $t2, 0x1402
    ctx->r10 = ctx->r10 | 0X1402;
    // 0x8000AE10: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
    // 0x8000AE14: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x8000AE18: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x8000AE1C: lui         $t4, 0xE700
    ctx->r12 = S32(0XE700 << 16);
    // 0x8000AE20: addiu       $t3, $v1, 0x8
    ctx->r11 = ADD32(ctx->r3, 0X8);
    // 0x8000AE24: sw          $t3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r11;
    // 0x8000AE28: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x8000AE2C: jr          $ra
    // 0x8000AE30: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    return;
    // 0x8000AE30: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
;}
RECOMP_FUNC void func_8000AE34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000AE34: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x8000AE38: lw          $t7, -0x2F98($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X2F98);
    // 0x8000AE3C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000AE40: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x8000AE44: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000AE48: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8000AE4C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x8000AE50: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8000AE54: sh          $t6, -0x7670($at)
    MEM_H(-0X7670, ctx->r1) = ctx->r14;
    // 0x8000AE58: addiu       $a0, $a0, -0x5530
    ctx->r4 = ADD32(ctx->r4, -0X5530);
    // 0x8000AE5C: jal         0x8001018C
    // 0x8000AE60: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001018C(rdram, ctx);
        goto after_0;
    // 0x8000AE60: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x8000AE64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000AE68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8000AE6C: jr          $ra
    // 0x8000AE70: nop

    return;
    // 0x8000AE70: nop

;}
RECOMP_FUNC void func_8000AE74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000AE74: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x8000AE78: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x8000AE7C: addiu       $v0, $v0, 0x3F8C
    ctx->r2 = ADD32(ctx->r2, 0X3F8C);
    // 0x8000AE80: addiu       $v1, $v1, 0x3940
    ctx->r3 = ADD32(ctx->r3, 0X3940);
L_8000AE84:
    // 0x8000AE84: lw          $t6, 0x4($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X4);
    // 0x8000AE88: addiu       $v1, $v1, 0x34
    ctx->r3 = ADD32(ctx->r3, 0X34);
    // 0x8000AE8C: sltu        $at, $v1, $v0
    ctx->r1 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x8000AE90: bne         $at, $zero, L_8000AE84
    if (ctx->r1 != 0) {
        // 0x8000AE94: sh          $zero, 0x0($t6)
        MEM_H(0X0, ctx->r14) = 0;
            goto L_8000AE84;
    }
    // 0x8000AE94: sh          $zero, 0x0($t6)
    MEM_H(0X0, ctx->r14) = 0;
    // 0x8000AE98: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8000AE9C: addiu       $a0, $a0, -0x2F98
    ctx->r4 = ADD32(ctx->r4, -0X2F98);
    // 0x8000AEA0: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x8000AEA4: lui         $a1, 0x2
    ctx->r5 = S32(0X2 << 16);
    // 0x8000AEA8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8000AEAC: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x8000AEB0: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x8000AEB4: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8000AEB8: addu        $t8, $t7, $a1
    ctx->r24 = ADD32(ctx->r15, ctx->r5);
    // 0x8000AEBC: sh          $zero, 0x1C60($t8)
    MEM_H(0X1C60, ctx->r24) = 0;
    // 0x8000AEC0: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8000AEC4: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x8000AEC8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8000AECC: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8000AED0: addu        $t0, $t9, $v1
    ctx->r8 = ADD32(ctx->r25, ctx->r3);
    // 0x8000AED4: addu        $t1, $t0, $a1
    ctx->r9 = ADD32(ctx->r8, ctx->r5);
    // 0x8000AED8: sh          $zero, 0x1C60($t1)
    MEM_H(0X1C60, ctx->r9) = 0;
    // 0x8000AEDC: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x8000AEE0: nop

    // 0x8000AEE4: addu        $t3, $t2, $v1
    ctx->r11 = ADD32(ctx->r10, ctx->r3);
    // 0x8000AEE8: addu        $t4, $t3, $a1
    ctx->r12 = ADD32(ctx->r11, ctx->r5);
    // 0x8000AEEC: sh          $zero, 0x1C94($t4)
    MEM_H(0X1C94, ctx->r12) = 0;
    // 0x8000AEF0: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x8000AEF4: nop

    // 0x8000AEF8: addu        $t6, $t5, $v1
    ctx->r14 = ADD32(ctx->r13, ctx->r3);
    // 0x8000AEFC: addu        $t7, $t6, $a1
    ctx->r15 = ADD32(ctx->r14, ctx->r5);
    // 0x8000AF00: sh          $zero, 0x1CC8($t7)
    MEM_H(0X1CC8, ctx->r15) = 0;
    // 0x8000AF04: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x8000AF08: nop

    // 0x8000AF0C: addu        $t9, $t8, $v1
    ctx->r25 = ADD32(ctx->r24, ctx->r3);
    // 0x8000AF10: addu        $t0, $t9, $a1
    ctx->r8 = ADD32(ctx->r25, ctx->r5);
    // 0x8000AF14: jr          $ra
    // 0x8000AF18: sh          $zero, 0x1CFC($t0)
    MEM_H(0X1CFC, ctx->r8) = 0;
    return;
    // 0x8000AF18: sh          $zero, 0x1CFC($t0)
    MEM_H(0X1CFC, ctx->r8) = 0;
;}
RECOMP_FUNC void func_8000AF1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000AF1C: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x8000AF20: lw          $t6, 0x3944($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3944);
    // 0x8000AF24: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x8000AF28: lw          $a0, 0x30($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X30);
    // 0x8000AF2C: lui         $t2, 0x8013
    ctx->r10 = S32(0X8013 << 16);
    // 0x8000AF30: lhu         $t7, 0x2($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X2);
    // 0x8000AF34: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x8000AF38: ori         $t8, $t7, 0x2000
    ctx->r24 = ctx->r15 | 0X2000;
    // 0x8000AF3C: sh          $t8, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r24;
    // 0x8000AF40: lw          $t9, 0x3978($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X3978);
    // 0x8000AF44: lui         $a3, 0x8013
    ctx->r7 = S32(0X8013 << 16);
    // 0x8000AF48: lw          $a1, 0x30($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X30);
    // 0x8000AF4C: addiu       $a3, $a3, 0x3F8C
    ctx->r7 = ADD32(ctx->r7, 0X3F8C);
    // 0x8000AF50: lhu         $t0, 0x2($a1)
    ctx->r8 = MEM_HU(ctx->r5, 0X2);
    // 0x8000AF54: addiu       $v1, $v1, 0x39DC
    ctx->r3 = ADD32(ctx->r3, 0X39DC);
    // 0x8000AF58: ori         $t1, $t0, 0x2000
    ctx->r9 = ctx->r8 | 0X2000;
    // 0x8000AF5C: sh          $t1, 0x2($a1)
    MEM_H(0X2, ctx->r5) = ctx->r9;
    // 0x8000AF60: lw          $t2, 0x39AC($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X39AC);
    // 0x8000AF64: nop

    // 0x8000AF68: lw          $a2, 0x30($t2)
    ctx->r6 = MEM_W(ctx->r10, 0X30);
    // 0x8000AF6C: nop

    // 0x8000AF70: lhu         $t3, 0x2($a2)
    ctx->r11 = MEM_HU(ctx->r6, 0X2);
    // 0x8000AF74: nop

    // 0x8000AF78: ori         $t4, $t3, 0x2000
    ctx->r12 = ctx->r11 | 0X2000;
    // 0x8000AF7C: sh          $t4, 0x2($a2)
    MEM_H(0X2, ctx->r6) = ctx->r12;
L_8000AF80:
    // 0x8000AF80: lw          $t5, 0x4($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X4);
    // 0x8000AF84: addiu       $v1, $v1, 0xD0
    ctx->r3 = ADD32(ctx->r3, 0XD0);
    // 0x8000AF88: lw          $v0, 0x30($t5)
    ctx->r2 = MEM_W(ctx->r13, 0X30);
    // 0x8000AF8C: nop

    // 0x8000AF90: lhu         $t6, 0x2($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X2);
    // 0x8000AF94: nop

    // 0x8000AF98: ori         $t7, $t6, 0x2000
    ctx->r15 = ctx->r14 | 0X2000;
    // 0x8000AF9C: sh          $t7, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r15;
    // 0x8000AFA0: lw          $t8, -0x98($v1)
    ctx->r24 = MEM_W(ctx->r3, -0X98);
    // 0x8000AFA4: nop

    // 0x8000AFA8: lw          $a0, 0x30($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X30);
    // 0x8000AFAC: nop

    // 0x8000AFB0: lhu         $t9, 0x2($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X2);
    // 0x8000AFB4: nop

    // 0x8000AFB8: ori         $t0, $t9, 0x2000
    ctx->r8 = ctx->r25 | 0X2000;
    // 0x8000AFBC: sh          $t0, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r8;
    // 0x8000AFC0: lw          $t1, -0x64($v1)
    ctx->r9 = MEM_W(ctx->r3, -0X64);
    // 0x8000AFC4: nop

    // 0x8000AFC8: lw          $a1, 0x30($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X30);
    // 0x8000AFCC: nop

    // 0x8000AFD0: lhu         $t2, 0x2($a1)
    ctx->r10 = MEM_HU(ctx->r5, 0X2);
    // 0x8000AFD4: nop

    // 0x8000AFD8: ori         $t3, $t2, 0x2000
    ctx->r11 = ctx->r10 | 0X2000;
    // 0x8000AFDC: sh          $t3, 0x2($a1)
    MEM_H(0X2, ctx->r5) = ctx->r11;
    // 0x8000AFE0: lw          $t4, -0x30($v1)
    ctx->r12 = MEM_W(ctx->r3, -0X30);
    // 0x8000AFE4: nop

    // 0x8000AFE8: lw          $a2, 0x30($t4)
    ctx->r6 = MEM_W(ctx->r12, 0X30);
    // 0x8000AFEC: nop

    // 0x8000AFF0: lhu         $t5, 0x2($a2)
    ctx->r13 = MEM_HU(ctx->r6, 0X2);
    // 0x8000AFF4: nop

    // 0x8000AFF8: ori         $t6, $t5, 0x2000
    ctx->r14 = ctx->r13 | 0X2000;
    // 0x8000AFFC: bne         $v1, $a3, L_8000AF80
    if (ctx->r3 != ctx->r7) {
        // 0x8000B000: sh          $t6, 0x2($a2)
        MEM_H(0X2, ctx->r6) = ctx->r14;
            goto L_8000AF80;
    }
    // 0x8000B000: sh          $t6, 0x2($a2)
    MEM_H(0X2, ctx->r6) = ctx->r14;
    // 0x8000B004: jr          $ra
    // 0x8000B008: nop

    return;
    // 0x8000B008: nop

;}
RECOMP_FUNC void func_8000B00C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000B00C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8000B010: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x8000B014: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8000B018: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x8000B01C: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x8000B020: addiu       $t7, $t7, 0x3940
    ctx->r15 = ADD32(ctx->r15, 0X3940);
    // 0x8000B024: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8000B028: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x8000B02C: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x8000B030: addiu       $t8, $zero, 0x4000
    ctx->r24 = ADD32(0, 0X4000);
    // 0x8000B034: lw          $a3, 0x30($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X30);
    // 0x8000B038: sh          $a2, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r6;
    // 0x8000B03C: sw          $a1, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r5;
    // 0x8000B040: sh          $t8, 0x2($a3)
    MEM_H(0X2, ctx->r7) = ctx->r24;
    // 0x8000B044: jr          $ra
    // 0x8000B048: sb          $zero, 0x1($a3)
    MEM_B(0X1, ctx->r7) = 0;
    return;
    // 0x8000B048: sb          $zero, 0x1($a3)
    MEM_B(0X1, ctx->r7) = 0;
;}
RECOMP_FUNC void func_8000B04C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000B04C: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x8000B050: lw          $t6, 0x6A28($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X6A28);
    // 0x8000B054: addiu       $at, $zero, 0x1C20
    ctx->r1 = ADD32(0, 0X1C20);
    // 0x8000B058: div         $zero, $t6, $at
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r1)));
    // 0x8000B05C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8000B060: lwc1        $f9, 0x3188($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X3188);
    // 0x8000B064: lwc1        $f8, 0x318C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X318C);
    // 0x8000B068: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x8000B06C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8000B070: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x8000B074: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8000B078: sw          $a1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r5;
    // 0x8000B07C: mfhi        $t7
    ctx->r15 = hi;
    // 0x8000B080: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8000B084: nop

    // 0x8000B088: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x8000B08C: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x8000B090: jal         0x80080E80
    // 0x8000B094: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    func_80080E80(rdram, ctx);
        goto after_0;
    // 0x8000B094: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_0:
    // 0x8000B098: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x8000B09C: lw          $t8, 0x6A28($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X6A28);
    // 0x8000B0A0: addiu       $at, $zero, 0x1C20
    ctx->r1 = ADD32(0, 0X1C20);
    // 0x8000B0A4: div         $zero, $t8, $at
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r1)));
    // 0x8000B0A8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8000B0AC: lwc1        $f5, 0x3190($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X3190);
    // 0x8000B0B0: lwc1        $f4, 0x3194($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X3194);
    // 0x8000B0B4: swc1        $f0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f0.u32l;
    // 0x8000B0B8: mfhi        $t9
    ctx->r25 = hi;
    // 0x8000B0BC: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x8000B0C0: nop

    // 0x8000B0C4: cvt.d.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.d = CVT_D_W(ctx->f16.u32l);
    // 0x8000B0C8: mul.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x8000B0CC: jal         0x80081040
    // 0x8000B0D0: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    func_80081040(rdram, ctx);
        goto after_1;
    // 0x8000B0D0: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    after_1:
    // 0x8000B0D4: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8000B0D8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8000B0DC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8000B0E0: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x8000B0E4: lw          $t0, 0x6A28($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X6A28);
    // 0x8000B0E8: lwc1        $f8, 0x5C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x8000B0EC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8000B0F0: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x8000B0F4: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x8000B0F8: mfc1        $a3, $f12
    ctx->r7 = (int32_t)ctx->f12.u32l;
    // 0x8000B0FC: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x8000B100: sw          $t1, 0x6A28($at)
    MEM_W(0X6A28, ctx->r1) = ctx->r9;
    // 0x8000B104: addiu       $a1, $a1, -0x820
    ctx->r5 = ADD32(ctx->r5, -0X820);
    // 0x8000B108: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x8000B10C: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x8000B110: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    // 0x8000B114: swc1        $f2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f2.u32l;
    // 0x8000B118: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
    // 0x8000B11C: swc1        $f2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
    // 0x8000B120: swc1        $f12, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f12.u32l;
    // 0x8000B124: jal         0x800815F0
    // 0x8000B128: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_800815F0(rdram, ctx);
        goto after_2;
    // 0x8000B128: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x8000B12C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x8000B130: lw          $a3, 0xA4($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XA4);
    // 0x8000B134: addiu       $t2, $v0, 0x8
    ctx->r10 = ADD32(ctx->r2, 0X8);
    // 0x8000B138: sw          $t2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r10;
    // 0x8000B13C: lui         $t3, 0xBC00
    ctx->r11 = S32(0XBC00 << 16);
    // 0x8000B140: lui         $t4, 0x8000
    ctx->r12 = S32(0X8000 << 16);
    // 0x8000B144: ori         $t4, $t4, 0x40
    ctx->r12 = ctx->r12 | 0X40;
    // 0x8000B148: ori         $t3, $t3, 0x2
    ctx->r11 = ctx->r11 | 0X2;
    // 0x8000B14C: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    // 0x8000B150: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x8000B154: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x8000B158: lui         $t6, 0x386
    ctx->r14 = S32(0X386 << 16);
    // 0x8000B15C: addiu       $t5, $v0, 0x8
    ctx->r13 = ADD32(ctx->r2, 0X8);
    // 0x8000B160: sw          $t5, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r13;
    // 0x8000B164: ori         $t6, $t6, 0x10
    ctx->r14 = ctx->r14 | 0X10;
    // 0x8000B168: addiu       $t7, $a3, 0x8
    ctx->r15 = ADD32(ctx->r7, 0X8);
    // 0x8000B16C: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x8000B170: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8000B174: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x8000B178: lui         $t9, 0x388
    ctx->r25 = S32(0X388 << 16);
    // 0x8000B17C: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8000B180: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
    // 0x8000B184: ori         $t9, $t9, 0x10
    ctx->r25 = ctx->r25 | 0X10;
    // 0x8000B188: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8000B18C: sw          $a3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r7;
    // 0x8000B190: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x8000B194: lui         $t1, 0x384
    ctx->r9 = S32(0X384 << 16);
    // 0x8000B198: addiu       $t0, $v0, 0x8
    ctx->r8 = ADD32(ctx->r2, 0X8);
    // 0x8000B19C: sw          $t0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r8;
    // 0x8000B1A0: lui         $v1, 0x1B
    ctx->r3 = S32(0X1B << 16);
    // 0x8000B1A4: addiu       $v1, $v1, -0x820
    ctx->r3 = ADD32(ctx->r3, -0X820);
    // 0x8000B1A8: ori         $t1, $t1, 0x10
    ctx->r9 = ctx->r9 | 0X10;
    // 0x8000B1AC: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x8000B1B0: sw          $v1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r3;
    // 0x8000B1B4: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x8000B1B8: lui         $t3, 0x382
    ctx->r11 = S32(0X382 << 16);
    // 0x8000B1BC: addiu       $t2, $v0, 0x8
    ctx->r10 = ADD32(ctx->r2, 0X8);
    // 0x8000B1C0: sw          $t2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r10;
    // 0x8000B1C4: ori         $t3, $t3, 0x10
    ctx->r11 = ctx->r11 | 0X10;
    // 0x8000B1C8: addiu       $t4, $v1, 0x10
    ctx->r12 = ADD32(ctx->r3, 0X10);
    // 0x8000B1CC: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x8000B1D0: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    // 0x8000B1D4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8000B1D8: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x8000B1DC: jr          $ra
    // 0x8000B1E0: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    return;
    // 0x8000B1E0: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void func_8000B1E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000B1E4: sll         $v0, $a3, 2
    ctx->r2 = S32(ctx->r7 << 2);
    // 0x8000B1E8: subu        $v0, $v0, $a3
    ctx->r2 = SUB32(ctx->r2, ctx->r7);
    // 0x8000B1EC: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x8000B1F0: addu        $a1, $a1, $t6
    ctx->r5 = ADD32(ctx->r5, ctx->r14);
    // 0x8000B1F4: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x8000B1F8: addu        $a2, $a2, $t6
    ctx->r6 = ADD32(ctx->r6, ctx->r14);
    // 0x8000B1FC: swc1        $f4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f4.u32l;
    // 0x8000B200: lwc1        $f6, 0x4($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X4);
    // 0x8000B204: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x8000B208: swc1        $f6, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f6.u32l;
    // 0x8000B20C: lwc1        $f8, 0x0($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X0);
    // 0x8000B210: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x8000B214: swc1        $f8, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f8.u32l;
    // 0x8000B218: lwc1        $f10, -0x8($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, -0X8);
    // 0x8000B21C: nop

    // 0x8000B220: swc1        $f10, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f10.u32l;
    // 0x8000B224: lwc1        $f16, -0x4($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, -0X4);
    // 0x8000B228: nop

    // 0x8000B22C: swc1        $f16, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f16.u32l;
    // 0x8000B230: lwc1        $f18, 0x0($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X0);
    // 0x8000B234: jr          $ra
    // 0x8000B238: swc1        $f18, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f18.u32l;
    return;
    // 0x8000B238: swc1        $f18, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f18.u32l;
;}
RECOMP_FUNC void func_8000B23C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000B23C: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8000B240: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x8000B244: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x8000B248: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8000B24C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8000B250: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8000B254: cvt.w.s     $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    ctx->f4.u32l = CVT_W_S(ctx->f12.fl);
    // 0x8000B258: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8000B25C: mfc1        $s0, $f4
    ctx->r16 = (int32_t)ctx->f4.u32l;
    // 0x8000B260: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8000B264: mtc1        $s0, $f6
    ctx->f6.u32l = ctx->r16;
    // 0x8000B268: sw          $a1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r5;
    // 0x8000B26C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8000B270: sw          $a2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r6;
    // 0x8000B274: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x8000B278: sub.s       $f16, $f12, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f12.fl - ctx->f8.fl;
    // 0x8000B27C: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x8000B280: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    // 0x8000B284: jal         0x8000B1E4
    // 0x8000B288: swc1        $f16, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f16.u32l;
    func_8000B1E4(rdram, ctx);
        goto after_0;
    // 0x8000B288: swc1        $f16, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f16.u32l;
    after_0:
    // 0x8000B28C: lw          $a1, 0x7C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X7C);
    // 0x8000B290: lw          $a2, 0x80($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X80);
    // 0x8000B294: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x8000B298: jal         0x8000B1E4
    // 0x8000B29C: addiu       $a3, $s0, 0x1
    ctx->r7 = ADD32(ctx->r16, 0X1);
    func_8000B1E4(rdram, ctx);
        goto after_1;
    // 0x8000B29C: addiu       $a3, $s0, 0x1
    ctx->r7 = ADD32(ctx->r16, 0X1);
    after_1:
    // 0x8000B2A0: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8000B2A4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8000B2A8: lwc1        $f16, 0x40($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8000B2AC: c.eq.s      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.fl == ctx->f4.fl;
    // 0x8000B2B0: lwc1        $f18, 0x60($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X60);
    // 0x8000B2B4: bc1t        L_8000B338
    if (c1cs) {
        // 0x8000B2B8: nop
    
            goto L_8000B338;
    }
    // 0x8000B2B8: nop

    // 0x8000B2BC: lwc1        $f6, 0x48($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8000B2C0: lwc1        $f8, 0x4C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8000B2C4: lwc1        $f10, 0x64($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X64);
    // 0x8000B2C8: sub.s       $f0, $f6, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f18.fl;
    // 0x8000B2CC: lwc1        $f6, 0x68($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X68);
    // 0x8000B2D0: sub.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8000B2D4: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8000B2D8: mul.s       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x8000B2DC: sub.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8000B2E0: swc1        $f16, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f16.u32l;
    // 0x8000B2E4: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8000B2E8: nop

    // 0x8000B2EC: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x8000B2F0: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8000B2F4: jal         0x8007FA40
    // 0x8000B2F8: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    func_8007FA40(rdram, ctx);
        goto after_2;
    // 0x8000B2F8: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    after_2:
    // 0x8000B2FC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8000B300: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8000B304: lwc1        $f16, 0x40($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8000B308: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x8000B30C: lw          $a1, 0x7C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X7C);
    // 0x8000B310: bc1f        L_8000B338
    if (!c1cs) {
        // 0x8000B314: addiu       $a0, $sp, 0x60
        ctx->r4 = ADD32(ctx->r29, 0X60);
            goto L_8000B338;
    }
    // 0x8000B314: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x8000B318: lw          $a2, 0x80($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X80);
    // 0x8000B31C: jal         0x8000B1E4
    // 0x8000B320: addiu       $a3, $s0, 0x2
    ctx->r7 = ADD32(ctx->r16, 0X2);
    func_8000B1E4(rdram, ctx);
        goto after_3;
    // 0x8000B320: addiu       $a3, $s0, 0x2
    ctx->r7 = ADD32(ctx->r16, 0X2);
    after_3:
    // 0x8000B324: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8000B328: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8000B32C: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8000B330: nop

    // 0x8000B334: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
L_8000B338:
    // 0x8000B338: lwc1        $f18, 0x60($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X60);
    // 0x8000B33C: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8000B340: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8000B344: sub.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f18.fl;
    // 0x8000B348: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8000B34C: mul.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f16.fl);
    // 0x8000B350: lwc1        $f14, 0x64($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X64);
    // 0x8000B354: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8000B358: lwc1        $f0, 0x6C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x8000B35C: add.s       $f10, $f8, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x8000B360: lwc1        $f8, 0x4C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8000B364: neg.s       $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = -ctx->f10.fl;
    // 0x8000B368: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x8000B36C: sub.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f14.fl;
    // 0x8000B370: lwc1        $f12, 0x70($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X70);
    // 0x8000B374: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8000B378: mul.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x8000B37C: swc1        $f6, 0x3950($at)
    MEM_W(0X3950, ctx->r1) = ctx->f6.u32l;
    // 0x8000B380: lwc1        $f10, 0x50($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8000B384: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8000B388: add.s       $f6, $f4, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f14.fl;
    // 0x8000B38C: lwc1        $f4, 0x68($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
    // 0x8000B390: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x8000B394: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x8000B398: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8000B39C: swc1        $f8, 0x3954($at)
    MEM_W(0X3954, ctx->r1) = ctx->f8.u32l;
    // 0x8000B3A0: mul.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f16.fl);
    // 0x8000B3A4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8000B3A8: add.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x8000B3AC: lwc1        $f4, 0x54($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8000B3B0: neg.s       $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = -ctx->f10.fl;
    // 0x8000B3B4: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x8000B3B8: sub.s       $f10, $f4, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x8000B3BC: mul.s       $f6, $f10, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x8000B3C0: swc1        $f8, 0x3958($at)
    MEM_W(0X3958, ctx->r1) = ctx->f8.u32l;
    // 0x8000B3C4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8000B3C8: add.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f0.fl;
    // 0x8000B3CC: lwc1        $f6, 0x58($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X58);
    // 0x8000B3D0: neg.s       $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = -ctx->f8.fl;
    // 0x8000B3D4: mul.s       $f10, $f4, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x8000B3D8: sub.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f12.fl;
    // 0x8000B3DC: lwc1        $f0, 0x74($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X74);
    // 0x8000B3E0: mul.s       $f4, $f8, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x8000B3E4: swc1        $f10, 0x395C($at)
    MEM_W(0X395C, ctx->r1) = ctx->f10.u32l;
    // 0x8000B3E8: lwc1        $f8, 0x5C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x8000B3EC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8000B3F0: add.s       $f10, $f4, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f12.fl;
    // 0x8000B3F4: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    // 0x8000B3F8: mul.s       $f6, $f10, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x8000B3FC: sub.s       $f4, $f8, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x8000B400: mul.s       $f10, $f4, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f16.fl);
    // 0x8000B404: swc1        $f6, 0x3960($at)
    MEM_W(0X3960, ctx->r1) = ctx->f6.u32l;
    // 0x8000B408: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8000B40C: add.s       $f6, $f10, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f0.fl;
    // 0x8000B410: neg.s       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = -ctx->f6.fl;
    // 0x8000B414: mul.s       $f4, $f8, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x8000B418: jr          $ra
    // 0x8000B41C: swc1        $f4, 0x3964($at)
    MEM_W(0X3964, ctx->r1) = ctx->f4.u32l;
    return;
    // 0x8000B41C: swc1        $f4, 0x3964($at)
    MEM_W(0X3964, ctx->r1) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_8000B420(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000B420: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x8000B424: lw          $t6, -0x2F98($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X2F98);
    // 0x8000B428: lui         $at, 0xFFFD
    ctx->r1 = S32(0XFFFD << 16);
    // 0x8000B42C: ori         $at, $at, 0x6A20
    ctx->r1 = ctx->r1 | 0X6A20;
    // 0x8000B430: subu        $v0, $a0, $t6
    ctx->r2 = SUB32(ctx->r4, ctx->r14);
    // 0x8000B434: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
    // 0x8000B438: addiu       $at, $zero, 0x34
    ctx->r1 = ADD32(0, 0X34);
    // 0x8000B43C: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x8000B440: addiu       $a3, $zero, 0xE
    ctx->r7 = ADD32(0, 0XE);
    // 0x8000B444: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8000B448: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000B44C: lw          $v1, 0x30($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X30);
    // 0x8000B450: mflo        $t7
    ctx->r15 = lo;
    // 0x8000B454: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x8000B458: nop

    // 0x8000B45C: div         $zero, $t7, $a3
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r7))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r7)));
    // 0x8000B460: bne         $a3, $zero, L_8000B46C
    if (ctx->r7 != 0) {
        // 0x8000B464: nop
    
            goto L_8000B46C;
    }
    // 0x8000B464: nop

    // 0x8000B468: break       7
    do_break(2147529832);
L_8000B46C:
    // 0x8000B46C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8000B470: bne         $a3, $at, L_8000B484
    if (ctx->r7 != ctx->r1) {
        // 0x8000B474: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8000B484;
    }
    // 0x8000B474: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8000B478: bne         $v0, $at, L_8000B484
    if (ctx->r2 != ctx->r1) {
        // 0x8000B47C: nop
    
            goto L_8000B484;
    }
    // 0x8000B47C: nop

    // 0x8000B480: break       6
    do_break(2147529856);
L_8000B484:
    // 0x8000B484: mflo        $a2
    ctx->r6 = lo;
    // 0x8000B488: slti        $at, $a2, 0x2
    ctx->r1 = SIGNED(ctx->r6) < 0X2 ? 1 : 0;
    // 0x8000B48C: bne         $at, $zero, L_8000B4A8
    if (ctx->r1 != 0) {
        // 0x8000B490: nop
    
            goto L_8000B4A8;
    }
    // 0x8000B490: nop

    // 0x8000B494: lhu         $t8, 0x2($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X2);
    // 0x8000B498: nop

    // 0x8000B49C: ori         $t9, $t8, 0x400
    ctx->r25 = ctx->r24 | 0X400;
    // 0x8000B4A0: b           L_8000B500
    // 0x8000B4A4: sh          $t9, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r25;
        goto L_8000B500;
    // 0x8000B4A4: sh          $t9, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r25;
L_8000B4A8:
    // 0x8000B4A8: div         $zero, $v0, $a3
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r7))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r7)));
    // 0x8000B4AC: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x8000B4B0: bne         $a3, $zero, L_8000B4BC
    if (ctx->r7 != 0) {
        // 0x8000B4B4: nop
    
            goto L_8000B4BC;
    }
    // 0x8000B4B4: nop

    // 0x8000B4B8: break       7
    do_break(2147529912);
L_8000B4BC:
    // 0x8000B4BC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8000B4C0: bne         $a3, $at, L_8000B4D4
    if (ctx->r7 != ctx->r1) {
        // 0x8000B4C4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8000B4D4;
    }
    // 0x8000B4C4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8000B4C8: bne         $v0, $at, L_8000B4D4
    if (ctx->r2 != ctx->r1) {
        // 0x8000B4CC: nop
    
            goto L_8000B4D4;
    }
    // 0x8000B4CC: nop

    // 0x8000B4D0: break       6
    do_break(2147529936);
L_8000B4D4:
    // 0x8000B4D4: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x8000B4D8: mfhi        $a1
    ctx->r5 = hi;
    // 0x8000B4DC: jal         0x80014A94
    // 0x8000B4E0: nop

    func_80014A94(rdram, ctx);
        goto after_0;
    // 0x8000B4E0: nop

    after_0:
    // 0x8000B4E4: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x8000B4E8: beq         $v0, $zero, L_8000B504
    if (ctx->r2 == 0) {
        // 0x8000B4EC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8000B504;
    }
    // 0x8000B4EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000B4F0: lhu         $t0, 0x2($v1)
    ctx->r8 = MEM_HU(ctx->r3, 0X2);
    // 0x8000B4F4: nop

    // 0x8000B4F8: ori         $t1, $t0, 0x800
    ctx->r9 = ctx->r8 | 0X800;
    // 0x8000B4FC: sh          $t1, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r9;
L_8000B500:
    // 0x8000B500: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8000B504:
    // 0x8000B504: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8000B508: jr          $ra
    // 0x8000B50C: nop

    return;
    // 0x8000B50C: nop

;}
RECOMP_FUNC void func_8000B510(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000B510: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8000B514: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8000B518: lw          $v0, 0x6984($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6984);
    // 0x8000B51C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8000B520: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x8000B524: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x8000B528: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8000B52C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8000B530: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8000B534: beq         $v0, $zero, L_8000B560
    if (ctx->r2 == 0) {
        // 0x8000B538: sw          $s0, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r16;
            goto L_8000B560;
    }
    // 0x8000B538: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8000B53C: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    // 0x8000B540: beq         $v0, $s5, L_8000B594
    if (ctx->r2 == ctx->r21) {
        // 0x8000B544: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8000B594;
    }
    // 0x8000B544: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8000B548: beq         $v0, $at, L_8000B634
    if (ctx->r2 == ctx->r1) {
        // 0x8000B54C: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8000B634;
    }
    // 0x8000B54C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8000B550: beq         $v0, $at, L_8000B684
    if (ctx->r2 == ctx->r1) {
        // 0x8000B554: nop
    
            goto L_8000B684;
    }
    // 0x8000B554: nop

    // 0x8000B558: b           L_8000B6E4
    // 0x8000B55C: nop

        goto L_8000B6E4;
    // 0x8000B55C: nop

L_8000B560:
    // 0x8000B560: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x8000B564: lw          $t6, -0x2F98($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X2F98);
    // 0x8000B568: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x8000B56C: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8000B570: sh          $zero, -0x5F28($at)
    MEM_H(-0X5F28, ctx->r1) = 0;
    // 0x8000B574: jal         0x8005F560
    // 0x8000B578: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_8005F560(rdram, ctx);
        goto after_0;
    // 0x8000B578: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_0:
    // 0x8000B57C: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x8000B580: lw          $t7, 0x6984($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X6984);
    // 0x8000B584: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8000B588: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8000B58C: b           L_8000B6E4
    // 0x8000B590: sw          $t8, 0x6984($at)
    MEM_W(0X6984, ctx->r1) = ctx->r24;
        goto L_8000B6E4;
    // 0x8000B590: sw          $t8, 0x6984($at)
    MEM_W(0X6984, ctx->r1) = ctx->r24;
L_8000B594:
    // 0x8000B594: jal         0x80013680
    // 0x8000B598: nop

    func_80013680(rdram, ctx);
        goto after_1;
    // 0x8000B598: nop

    after_1:
    // 0x8000B59C: jal         0x800054F4
    // 0x8000B5A0: nop

    func_800054F4(rdram, ctx);
        goto after_2;
    // 0x8000B5A0: nop

    after_2:
    // 0x8000B5A4: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x8000B5A8: lui         $s2, 0x8012
    ctx->r18 = S32(0X8012 << 16);
    // 0x8000B5AC: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x8000B5B0: lui         $s3, 0x802F
    ctx->r19 = S32(0X802F << 16);
    // 0x8000B5B4: lui         $s4, 0x802F
    ctx->r20 = S32(0X802F << 16);
    // 0x8000B5B8: addiu       $s4, $s4, -0x18E8
    ctx->r20 = ADD32(ctx->r20, -0X18E8);
    // 0x8000B5BC: addiu       $s3, $s3, -0x28E8
    ctx->r19 = ADD32(ctx->r19, -0X28E8);
    // 0x8000B5C0: addiu       $s0, $s0, 0x3FA8
    ctx->r16 = ADD32(ctx->r16, 0X3FA8);
    // 0x8000B5C4: addiu       $s2, $s2, -0x2CF0
    ctx->r18 = ADD32(ctx->r18, -0X2CF0);
    // 0x8000B5C8: addiu       $s1, $s1, 0x3FA0
    ctx->r17 = ADD32(ctx->r17, 0X3FA0);
L_8000B5CC:
    // 0x8000B5CC: lhu         $t0, 0x8($s2)
    ctx->r8 = MEM_HU(ctx->r18, 0X8);
    // 0x8000B5D0: lbu         $t9, 0x0($s2)
    ctx->r25 = MEM_BU(ctx->r18, 0X0);
    // 0x8000B5D4: andi        $t1, $t0, 0x200
    ctx->r9 = ctx->r8 & 0X200;
    // 0x8000B5D8: beq         $t1, $zero, L_8000B5E8
    if (ctx->r9 == 0) {
        // 0x8000B5DC: sw          $t9, 0x0($s1)
        MEM_W(0X0, ctx->r17) = ctx->r25;
            goto L_8000B5E8;
    }
    // 0x8000B5DC: sw          $t9, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r25;
    // 0x8000B5E0: b           L_8000B5EC
    // 0x8000B5E4: sw          $s5, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r21;
        goto L_8000B5EC;
    // 0x8000B5E4: sw          $s5, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r21;
L_8000B5E8:
    // 0x8000B5E8: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
L_8000B5EC:
    // 0x8000B5EC: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x8000B5F0: lw          $a2, 0x0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X0);
    // 0x8000B5F4: jal         0x80013968
    // 0x8000B5F8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_80013968(rdram, ctx);
        goto after_3;
    // 0x8000B5F8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_3:
    // 0x8000B5FC: addiu       $s3, $s3, 0x800
    ctx->r19 = ADD32(ctx->r19, 0X800);
    // 0x8000B600: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x8000B604: addiu       $s2, $s2, 0xA94
    ctx->r18 = ADD32(ctx->r18, 0XA94);
    // 0x8000B608: bne         $s3, $s4, L_8000B5CC
    if (ctx->r19 != ctx->r20) {
        // 0x8000B60C: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_8000B5CC;
    }
    // 0x8000B60C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8000B610: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8000B614: addiu       $v0, $v0, 0x6984
    ctx->r2 = ADD32(ctx->r2, 0X6984);
    // 0x8000B618: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x8000B61C: lui         $s3, 0x8013
    ctx->r19 = S32(0X8013 << 16);
    // 0x8000B620: addiu       $s3, $s3, 0x3FB0
    ctx->r19 = ADD32(ctx->r19, 0X3FB0);
    // 0x8000B624: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x8000B628: sw          $zero, 0x0($s3)
    MEM_W(0X0, ctx->r19) = 0;
    // 0x8000B62C: b           L_8000B6E4
    // 0x8000B630: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
        goto L_8000B6E4;
    // 0x8000B630: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
L_8000B634:
    // 0x8000B634: lui         $s0, 0x8001
    ctx->r16 = S32(0X8001 << 16);
    // 0x8000B638: addiu       $s0, $s0, -0x48F0
    ctx->r16 = ADD32(ctx->r16, -0X48F0);
    // 0x8000B63C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8000B640: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8000B644: jal         0x8000B00C
    // 0x8000B648: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8000B00C(rdram, ctx);
        goto after_4;
    // 0x8000B648: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x8000B64C: jal         0x8000C368
    // 0x8000B650: nop

    func_8000C368(rdram, ctx);
        goto after_5;
    // 0x8000B650: nop

    after_5:
    // 0x8000B654: bne         $v0, $zero, L_8000B668
    if (ctx->r2 != 0) {
        // 0x8000B658: addiu       $a0, $zero, 0xF
        ctx->r4 = ADD32(0, 0XF);
            goto L_8000B668;
    }
    // 0x8000B658: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    // 0x8000B65C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8000B660: jal         0x8000B00C
    // 0x8000B664: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_8000B00C(rdram, ctx);
        goto after_6;
    // 0x8000B664: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_6:
L_8000B668:
    // 0x8000B668: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8000B66C: addiu       $v0, $v0, 0x6984
    ctx->r2 = ADD32(ctx->r2, 0X6984);
    // 0x8000B670: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    // 0x8000B674: nop

    // 0x8000B678: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x8000B67C: b           L_8000B6E4
    // 0x8000B680: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
        goto L_8000B6E4;
    // 0x8000B680: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
L_8000B684:
    // 0x8000B684: lui         $s3, 0x8013
    ctx->r19 = S32(0X8013 << 16);
    // 0x8000B688: addiu       $s3, $s3, 0x3FB0
    ctx->r19 = ADD32(ctx->r19, 0X3FB0);
    // 0x8000B68C: lw          $t6, 0x0($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X0);
    // 0x8000B690: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x8000B694: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x8000B698: lui         $s4, 0x802F
    ctx->r20 = S32(0X802F << 16);
    // 0x8000B69C: xori        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 ^ 0X2;
    // 0x8000B6A0: sw          $t7, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r15;
    // 0x8000B6A4: addiu       $s4, $s4, -0x28E8
    ctx->r20 = ADD32(ctx->r20, -0X28E8);
    // 0x8000B6A8: addiu       $s0, $s0, 0x3FA8
    ctx->r16 = ADD32(ctx->r16, 0X3FA8);
    // 0x8000B6AC: addiu       $s1, $s1, 0x3FA0
    ctx->r17 = ADD32(ctx->r17, 0X3FA0);
    // 0x8000B6B0: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8000B6B4: addiu       $s5, $zero, 0x1000
    ctx->r21 = ADD32(0, 0X1000);
L_8000B6B8:
    // 0x8000B6B8: lw          $t8, 0x0($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X0);
    // 0x8000B6BC: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x8000B6C0: sll         $t9, $t8, 11
    ctx->r25 = S32(ctx->r24 << 11);
    // 0x8000B6C4: addu        $t0, $s4, $t9
    ctx->r8 = ADD32(ctx->r20, ctx->r25);
    // 0x8000B6C8: lw          $a2, 0x0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X0);
    // 0x8000B6CC: jal         0x80013968
    // 0x8000B6D0: addu        $a0, $t0, $s2
    ctx->r4 = ADD32(ctx->r8, ctx->r18);
    func_80013968(rdram, ctx);
        goto after_7;
    // 0x8000B6D0: addu        $a0, $t0, $s2
    ctx->r4 = ADD32(ctx->r8, ctx->r18);
    after_7:
    // 0x8000B6D4: addiu       $s2, $s2, 0x800
    ctx->r18 = ADD32(ctx->r18, 0X800);
    // 0x8000B6D8: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x8000B6DC: bne         $s2, $s5, L_8000B6B8
    if (ctx->r18 != ctx->r21) {
        // 0x8000B6E0: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_8000B6B8;
    }
    // 0x8000B6E0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_8000B6E4:
    // 0x8000B6E4: jal         0x8000ABD4
    // 0x8000B6E8: nop

    func_8000ABD4(rdram, ctx);
        goto after_8;
    // 0x8000B6E8: nop

    after_8:
    // 0x8000B6EC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8000B6F0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8000B6F4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8000B6F8: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8000B6FC: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8000B700: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x8000B704: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x8000B708: jr          $ra
    // 0x8000B70C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8000B70C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8000B710(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000B710: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8000B714: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000B718: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8000B71C: lw          $a0, 0x4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4);
    // 0x8000B720: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8000B724: lui         $at, 0xC0D0
    ctx->r1 = S32(0XC0D0 << 16);
    // 0x8000B728: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8000B72C: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x8000B730: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8000B734: sh          $t6, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r14;
    // 0x8000B738: swc1        $f0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f0.u32l;
    // 0x8000B73C: swc1        $f0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f0.u32l;
    // 0x8000B740: swc1        $f0, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f0.u32l;
    // 0x8000B744: swc1        $f0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f0.u32l;
    // 0x8000B748: swc1        $f4, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f4.u32l;
    // 0x8000B74C: lwc1        $f6, 0x3294($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3294);
    // 0x8000B750: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8000B754: swc1        $f6, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f6.u32l;
    // 0x8000B758: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    // 0x8000B75C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8000B760: jal         0x8000ABAC
    // 0x8000B764: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_8000ABAC(rdram, ctx);
        goto after_0;
    // 0x8000B764: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x8000B768: jal         0x8000C368
    // 0x8000B76C: nop

    func_8000C368(rdram, ctx);
        goto after_1;
    // 0x8000B76C: nop

    after_1:
    // 0x8000B770: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8000B774: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x8000B778: beq         $v0, $zero, L_8000B7A8
    if (ctx->r2 == 0) {
        // 0x8000B77C: lui         $t8, 0x8001
        ctx->r24 = S32(0X8001 << 16);
            goto L_8000B7A8;
    }
    // 0x8000B77C: lui         $t8, 0x8001
    ctx->r24 = S32(0X8001 << 16);
    // 0x8000B780: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8000B784: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8000B788: lui         $at, 0x4020
    ctx->r1 = S32(0X4020 << 16);
    // 0x8000B78C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8000B790: lui         $at, 0xC0A0
    ctx->r1 = S32(0XC0A0 << 16);
    // 0x8000B794: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8000B798: swc1        $f8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f8.u32l;
    // 0x8000B79C: swc1        $f10, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f10.u32l;
    // 0x8000B7A0: b           L_8000B7D8
    // 0x8000B7A4: swc1        $f16, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f16.u32l;
        goto L_8000B7D8;
    // 0x8000B7A4: swc1        $f16, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f16.u32l;
L_8000B7A8:
    // 0x8000B7A8: lhu         $t7, 0x2($a3)
    ctx->r15 = MEM_HU(ctx->r7, 0X2);
    // 0x8000B7AC: nop

    // 0x8000B7B0: slti        $at, $t7, 0xE
    ctx->r1 = SIGNED(ctx->r15) < 0XE ? 1 : 0;
    // 0x8000B7B4: beq         $at, $zero, L_8000B7C8
    if (ctx->r1 == 0) {
        // 0x8000B7B8: lui         $at, 0x40C0
        ctx->r1 = S32(0X40C0 << 16);
            goto L_8000B7C8;
    }
    // 0x8000B7B8: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x8000B7BC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8000B7C0: b           L_8000B7D8
    // 0x8000B7C4: swc1        $f18, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f18.u32l;
        goto L_8000B7D8;
    // 0x8000B7C4: swc1        $f18, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f18.u32l;
L_8000B7C8:
    // 0x8000B7C8: lui         $at, 0xC0C0
    ctx->r1 = S32(0XC0C0 << 16);
    // 0x8000B7CC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8000B7D0: nop

    // 0x8000B7D4: swc1        $f4, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f4.u32l;
L_8000B7D8:
    // 0x8000B7D8: addiu       $t8, $t8, -0x4808
    ctx->r24 = ADD32(ctx->r24, -0X4808);
    // 0x8000B7DC: sw          $t8, 0x28($a3)
    MEM_W(0X28, ctx->r7) = ctx->r24;
    // 0x8000B7E0: jal         0x8000C2D0
    // 0x8000B7E4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_8000C2D0(rdram, ctx);
        goto after_2;
    // 0x8000B7E4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_2:
    // 0x8000B7E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000B7EC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8000B7F0: jr          $ra
    // 0x8000B7F4: nop

    return;
    // 0x8000B7F4: nop

;}
RECOMP_FUNC void func_8000B7F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000B7F8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8000B7FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000B800: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8000B804: lw          $a1, 0x4($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X4);
    // 0x8000B808: nop

    // 0x8000B80C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8000B810: jal         0x8000C320
    // 0x8000B814: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8000C320(rdram, ctx);
        goto after_0;
    // 0x8000B814: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8000B818: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8000B81C: nop

    // 0x8000B820: lw          $v0, 0x30($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X30);
    // 0x8000B824: nop

    // 0x8000B828: lhu         $t7, 0x2($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X2);
    // 0x8000B82C: nop

    // 0x8000B830: xori        $t8, $t7, 0x200
    ctx->r24 = ctx->r15 ^ 0X200;
    // 0x8000B834: sh          $t8, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r24;
    // 0x8000B838: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8000B83C: jal         0x8000C2D0
    // 0x8000B840: nop

    func_8000C2D0(rdram, ctx);
        goto after_1;
    // 0x8000B840: nop

    after_1:
    // 0x8000B844: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000B848: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8000B84C: jr          $ra
    // 0x8000B850: nop

    return;
    // 0x8000B850: nop

;}
RECOMP_FUNC void func_8000B854(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000B854: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8000B858: lb          $t6, -0x3088($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X3088);
    // 0x8000B85C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8000B860: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8000B864: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8000B868: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8000B86C: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x8000B870: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8000B874: addiu       $a0, $a0, 0x6984
    ctx->r4 = ADD32(ctx->r4, 0X6984);
    // 0x8000B878: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8000B87C: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x8000B880: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x8000B884: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8000B888: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8000B88C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8000B890: addiu       $t8, $t8, 0x6A54
    ctx->r24 = ADD32(ctx->r24, 0X6A54);
    // 0x8000B894: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8000B898: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8000B89C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8000B8A0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8000B8A4: addu        $s1, $t7, $t8
    ctx->r17 = ADD32(ctx->r15, ctx->r24);
    // 0x8000B8A8: beq         $v1, $zero, L_8000B8D4
    if (ctx->r3 == 0) {
        // 0x8000B8AC: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_8000B8D4;
    }
    // 0x8000B8AC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8000B8B0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8000B8B4: beq         $v0, $at, L_8000B8E0
    if (ctx->r2 == ctx->r1) {
        // 0x8000B8B8: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8000B8E0;
    }
    // 0x8000B8B8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8000B8BC: beq         $v0, $at, L_8000B980
    if (ctx->r2 == ctx->r1) {
        // 0x8000B8C0: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_8000B980;
    }
    // 0x8000B8C0: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x8000B8C4: beq         $v0, $v1, L_8000BA1C
    if (ctx->r2 == ctx->r3) {
        // 0x8000B8C8: nop
    
            goto L_8000BA1C;
    }
    // 0x8000B8C8: nop

    // 0x8000B8CC: b           L_8000BA6C
    // 0x8000B8D0: nop

        goto L_8000BA6C;
    // 0x8000B8D0: nop

L_8000B8D4:
    // 0x8000B8D4: addiu       $t9, $v1, 0x1
    ctx->r25 = ADD32(ctx->r3, 0X1);
    // 0x8000B8D8: b           L_8000BA6C
    // 0x8000B8DC: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
        goto L_8000BA6C;
    // 0x8000B8DC: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
L_8000B8E0:
    // 0x8000B8E0: jal         0x80013680
    // 0x8000B8E4: nop

    func_80013680(rdram, ctx);
        goto after_0;
    // 0x8000B8E4: nop

    after_0:
    // 0x8000B8E8: lui         $s2, 0x8013
    ctx->r18 = S32(0X8013 << 16);
    // 0x8000B8EC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8000B8F0: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x8000B8F4: lui         $s3, 0x802F
    ctx->r19 = S32(0X802F << 16);
    // 0x8000B8F8: lui         $s0, 0x802F
    ctx->r16 = S32(0X802F << 16);
    // 0x8000B8FC: addiu       $s0, $s0, -0x18E8
    ctx->r16 = ADD32(ctx->r16, -0X18E8);
    // 0x8000B900: addiu       $s3, $s3, -0x28E8
    ctx->r19 = ADD32(ctx->r19, -0X28E8);
    // 0x8000B904: addiu       $s1, $s1, 0x3FA8
    ctx->r17 = ADD32(ctx->r17, 0X3FA8);
    // 0x8000B908: addiu       $v0, $v0, -0x2CF0
    ctx->r2 = ADD32(ctx->r2, -0X2CF0);
    // 0x8000B90C: addiu       $s2, $s2, 0x3FA0
    ctx->r18 = ADD32(ctx->r18, 0X3FA0);
L_8000B910:
    // 0x8000B910: lhu         $t1, 0x8($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X8);
    // 0x8000B914: lbu         $t0, 0x0($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X0);
    // 0x8000B918: andi        $t2, $t1, 0x200
    ctx->r10 = ctx->r9 & 0X200;
    // 0x8000B91C: beq         $t2, $zero, L_8000B930
    if (ctx->r10 == 0) {
        // 0x8000B920: sw          $t0, 0x0($s2)
        MEM_W(0X0, ctx->r18) = ctx->r8;
            goto L_8000B930;
    }
    // 0x8000B920: sw          $t0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r8;
    // 0x8000B924: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8000B928: b           L_8000B934
    // 0x8000B92C: sw          $t3, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r11;
        goto L_8000B934;
    // 0x8000B92C: sw          $t3, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r11;
L_8000B930:
    // 0x8000B930: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
L_8000B934:
    // 0x8000B934: lw          $a1, 0x0($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X0);
    // 0x8000B938: lw          $a2, 0x0($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X0);
    // 0x8000B93C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8000B940: jal         0x80013968
    // 0x8000B944: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    func_80013968(rdram, ctx);
        goto after_1;
    // 0x8000B944: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    after_1:
    // 0x8000B948: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x8000B94C: addiu       $s3, $s3, 0x800
    ctx->r19 = ADD32(ctx->r19, 0X800);
    // 0x8000B950: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x8000B954: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x8000B958: bne         $s3, $s0, L_8000B910
    if (ctx->r19 != ctx->r16) {
        // 0x8000B95C: addiu       $v0, $v0, 0xA94
        ctx->r2 = ADD32(ctx->r2, 0XA94);
            goto L_8000B910;
    }
    // 0x8000B95C: addiu       $v0, $v0, 0xA94
    ctx->r2 = ADD32(ctx->r2, 0XA94);
    // 0x8000B960: jal         0x800054F4
    // 0x8000B964: nop

    func_800054F4(rdram, ctx);
        goto after_2;
    // 0x8000B964: nop

    after_2:
    // 0x8000B968: lui         $t4, 0x8009
    ctx->r12 = S32(0X8009 << 16);
    // 0x8000B96C: lw          $t4, 0x6984($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X6984);
    // 0x8000B970: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8000B974: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x8000B978: b           L_8000BA6C
    // 0x8000B97C: sw          $t5, 0x6984($at)
    MEM_W(0X6984, ctx->r1) = ctx->r13;
        goto L_8000BA6C;
    // 0x8000B97C: sw          $t5, 0x6984($at)
    MEM_W(0X6984, ctx->r1) = ctx->r13;
L_8000B980:
    // 0x8000B980: jal         0x8000C464
    // 0x8000B984: nop

    func_8000C464(rdram, ctx);
        goto after_3;
    // 0x8000B984: nop

    after_3:
    // 0x8000B988: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x8000B98C: lw          $t6, 0x6980($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X6980);
    // 0x8000B990: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x8000B994: bne         $v1, $t6, L_8000B9F0
    if (ctx->r3 != ctx->r14) {
        // 0x8000B998: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_8000B9F0;
    }
    // 0x8000B998: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8000B99C: lui         $s3, 0x8001
    ctx->r19 = S32(0X8001 << 16);
    // 0x8000B9A0: addiu       $s3, $s3, -0x4460
    ctx->r19 = ADD32(ctx->r19, -0X4460);
    // 0x8000B9A4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8000B9A8: addiu       $s2, $zero, 0x5
    ctx->r18 = ADD32(0, 0X5);
L_8000B9AC:
    // 0x8000B9AC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8000B9B0: lwc1        $f6, 0x10($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X10);
    // 0x8000B9B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8000B9B8: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x8000B9BC: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x8000B9C0: bc1f        L_8000B9D0
    if (!c1cs) {
        // 0x8000B9C4: or          $a2, $s0, $zero
        ctx->r6 = ctx->r16 | 0;
            goto L_8000B9D0;
    }
    // 0x8000B9C4: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x8000B9C8: b           L_8000B9D0
    // 0x8000B9CC: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
        goto L_8000B9D0;
    // 0x8000B9CC: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
L_8000B9D0:
    // 0x8000B9D0: addu        $a0, $v0, $s0
    ctx->r4 = ADD32(ctx->r2, ctx->r16);
    // 0x8000B9D4: jal         0x8000B00C
    // 0x8000B9D8: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    func_8000B00C(rdram, ctx);
        goto after_4;
    // 0x8000B9D8: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    after_4:
    // 0x8000B9DC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8000B9E0: bne         $s0, $s2, L_8000B9AC
    if (ctx->r16 != ctx->r18) {
        // 0x8000B9E4: addiu       $s1, $s1, 0x24
        ctx->r17 = ADD32(ctx->r17, 0X24);
            goto L_8000B9AC;
    }
    // 0x8000B9E4: addiu       $s1, $s1, 0x24
    ctx->r17 = ADD32(ctx->r17, 0X24);
    // 0x8000B9E8: b           L_8000BA00
    // 0x8000B9EC: nop

        goto L_8000BA00;
    // 0x8000B9EC: nop

L_8000B9F0:
    // 0x8000B9F0: lw          $a2, 0x4C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X4C);
    // 0x8000B9F4: lui         $a1, 0x8001
    ctx->r5 = S32(0X8001 << 16);
    // 0x8000B9F8: jal         0x8000B00C
    // 0x8000B9FC: addiu       $a1, $a1, -0x4484
    ctx->r5 = ADD32(ctx->r5, -0X4484);
    func_8000B00C(rdram, ctx);
        goto after_5;
    // 0x8000B9FC: addiu       $a1, $a1, -0x4484
    ctx->r5 = ADD32(ctx->r5, -0X4484);
    after_5:
L_8000BA00:
    // 0x8000BA00: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8000BA04: addiu       $v0, $v0, 0x6984
    ctx->r2 = ADD32(ctx->r2, 0X6984);
    // 0x8000BA08: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x8000BA0C: nop

    // 0x8000BA10: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8000BA14: b           L_8000BA6C
    // 0x8000BA18: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
        goto L_8000BA6C;
    // 0x8000BA18: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
L_8000BA1C:
    // 0x8000BA1C: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x8000BA20: lw          $t9, 0x6980($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X6980);
    // 0x8000BA24: nop

    // 0x8000BA28: beq         $v1, $t9, L_8000BA6C
    if (ctx->r3 == ctx->r25) {
        // 0x8000BA2C: lui         $t0, 0x8010
        ctx->r8 = S32(0X8010 << 16);
            goto L_8000BA6C;
    }
    // 0x8000BA2C: lui         $t0, 0x8010
    ctx->r8 = S32(0X8010 << 16);
    // 0x8000BA30: addiu       $t0, $t0, 0x4890
    ctx->r8 = ADD32(ctx->r8, 0X4890);
    // 0x8000BA34: lhu         $v1, 0x998($t0)
    ctx->r3 = MEM_HU(ctx->r8, 0X998);
    // 0x8000BA38: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8000BA3C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8000BA40: addiu       $a1, $zero, 0x3E8
    ctx->r5 = ADD32(0, 0X3E8);
    // 0x8000BA44: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_8000BA48:
    // 0x8000BA48: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8000BA4C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8000BA50: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8000BA54: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x8000BA58: bne         $a0, $a1, L_8000BA48
    if (ctx->r4 != ctx->r5) {
        // 0x8000BA5C: addu        $v0, $v0, $v1
        ctx->r2 = ADD32(ctx->r2, ctx->r3);
            goto L_8000BA48;
    }
    // 0x8000BA5C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8000BA60: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8000BA64: bne         $a2, $a1, L_8000BA48
    if (ctx->r6 != ctx->r5) {
        // 0x8000BA68: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_8000BA48;
    }
    // 0x8000BA68: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_8000BA6C:
    // 0x8000BA6C: jal         0x8000ABD4
    // 0x8000BA70: nop

    func_8000ABD4(rdram, ctx);
        goto after_6;
    // 0x8000BA70: nop

    after_6:
    // 0x8000BA74: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8000BA78: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8000BA7C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8000BA80: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8000BA84: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8000BA88: jr          $ra
    // 0x8000BA8C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x8000BA8C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_8000BA90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000BA90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000BA94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000BA98: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8000BA9C: lw          $a0, 0x4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4);
    // 0x8000BAA0: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x8000BAA4: sh          $t7, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r15;
    // 0x8000BAA8: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x8000BAAC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8000BAB0: swc1        $f4, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f4.u32l;
    // 0x8000BAB4: lwc1        $f6, 0x4($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X4);
    // 0x8000BAB8: lw          $t8, 0x30($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X30);
    // 0x8000BABC: swc1        $f6, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f6.u32l;
    // 0x8000BAC0: lwc1        $f8, 0x8($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X8);
    // 0x8000BAC4: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x8000BAC8: swc1        $f8, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f8.u32l;
    // 0x8000BACC: lwc1        $f10, 0x18($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X18);
    // 0x8000BAD0: lwc1        $f18, 0x329C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X329C);
    // 0x8000BAD4: lwc1        $f19, 0x3298($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X3298);
    // 0x8000BAD8: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x8000BADC: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x8000BAE0: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8000BAE4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8000BAE8: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x8000BAEC: swc1        $f6, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f6.u32l;
    // 0x8000BAF0: lwc1        $f8, 0x10($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X10);
    // 0x8000BAF4: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x8000BAF8: swc1        $f8, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f8.u32l;
    // 0x8000BAFC: sh          $v0, 0x1C($t8)
    MEM_H(0X1C, ctx->r24) = ctx->r2;
    // 0x8000BB00: lw          $t9, 0x30($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X30);
    // 0x8000BB04: nop

    // 0x8000BB08: sh          $v0, 0x20($t9)
    MEM_H(0X20, ctx->r25) = ctx->r2;
    // 0x8000BB0C: lw          $t0, 0x30($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X30);
    // 0x8000BB10: nop

    // 0x8000BB14: sh          $zero, 0x1E($t0)
    MEM_H(0X1E, ctx->r8) = 0;
    // 0x8000BB18: lw          $t1, 0x30($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X30);
    // 0x8000BB1C: nop

    // 0x8000BB20: sh          $zero, 0x22($t1)
    MEM_H(0X22, ctx->r9) = 0;
    // 0x8000BB24: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x8000BB28: nop

    // 0x8000BB2C: lhu         $t3, 0x2($t2)
    ctx->r11 = MEM_HU(ctx->r10, 0X2);
    // 0x8000BB30: nop

    // 0x8000BB34: div         $zero, $t3, $at
    lo = S32(S64(S32(ctx->r11)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r11)) % S64(S32(ctx->r1)));
    // 0x8000BB38: mfhi        $t4
    ctx->r12 = hi;
    // 0x8000BB3C: sll         $t5, $t4, 1
    ctx->r13 = S32(ctx->r12 << 1);
    // 0x8000BB40: addu        $a1, $a1, $t5
    ctx->r5 = ADD32(ctx->r5, ctx->r13);
    // 0x8000BB44: lhu         $a1, 0x3F90($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X3F90);
    // 0x8000BB48: jal         0x8000ABAC
    // 0x8000BB4C: nop

    func_8000ABAC(rdram, ctx);
        goto after_0;
    // 0x8000BB4C: nop

    after_0:
    // 0x8000BB50: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8000BB54: jal         0x8000C2D0
    // 0x8000BB58: nop

    func_8000C2D0(rdram, ctx);
        goto after_1;
    // 0x8000BB58: nop

    after_1:
    // 0x8000BB5C: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8000BB60: lui         $t6, 0x8001
    ctx->r14 = S32(0X8001 << 16);
    // 0x8000BB64: addiu       $t6, $t6, -0x4400
    ctx->r14 = ADD32(ctx->r14, -0X4400);
    // 0x8000BB68: sw          $t6, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->r14;
    // 0x8000BB6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000BB70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8000BB74: jr          $ra
    // 0x8000BB78: nop

    return;
    // 0x8000BB78: nop

;}
RECOMP_FUNC void func_8000BB7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000BB7C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000BB80: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000BB84: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x8000BB88: jal         0x8000BA90
    // 0x8000BB8C: addiu       $a1, $a1, 0x6A30
    ctx->r5 = ADD32(ctx->r5, 0X6A30);
    func_8000BA90(rdram, ctx);
        goto after_0;
    // 0x8000BB8C: addiu       $a1, $a1, 0x6A30
    ctx->r5 = ADD32(ctx->r5, 0X6A30);
    after_0:
    // 0x8000BB90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000BB94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8000BB98: jr          $ra
    // 0x8000BB9C: nop

    return;
    // 0x8000BB9C: nop

;}
RECOMP_FUNC void func_8000BBA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000BBA0: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8000BBA4: lb          $t6, -0x3088($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X3088);
    // 0x8000BBA8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000BBAC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8000BBB0: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8000BBB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000BBB8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8000BBBC: lhu         $t9, 0x2($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X2);
    // 0x8000BBC0: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8000BBC4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8000BBC8: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x8000BBCC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8000BBD0: sll         $t0, $t9, 3
    ctx->r8 = S32(ctx->r25 << 3);
    // 0x8000BBD4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8000BBD8: addiu       $t8, $t8, 0x6A54
    ctx->r24 = ADD32(ctx->r24, 0X6A54);
    // 0x8000BBDC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8000BBE0: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x8000BBE4: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8000BBE8: jal         0x8000BA90
    // 0x8000BBEC: addu        $a1, $t0, $v0
    ctx->r5 = ADD32(ctx->r8, ctx->r2);
    func_8000BA90(rdram, ctx);
        goto after_0;
    // 0x8000BBEC: addu        $a1, $t0, $v0
    ctx->r5 = ADD32(ctx->r8, ctx->r2);
    after_0:
    // 0x8000BBF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000BBF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8000BBF8: jr          $ra
    // 0x8000BBFC: nop

    return;
    // 0x8000BBFC: nop

;}
RECOMP_FUNC void func_8000BC00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000BC00: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8000BC04: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8000BC08: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8000BC0C: lhu         $v1, 0x2($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X2);
    // 0x8000BC10: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8000BC14: slti        $at, $v1, 0x4
    ctx->r1 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x8000BC18: beq         $at, $zero, L_8000BDC0
    if (ctx->r1 == 0) {
        // 0x8000BC1C: lui         $t6, 0x8011
        ctx->r14 = S32(0X8011 << 16);
            goto L_8000BDC0;
    }
    // 0x8000BC1C: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x8000BC20: sll         $t7, $v1, 2
    ctx->r15 = S32(ctx->r3 << 2);
    // 0x8000BC24: lw          $t6, -0x2F98($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X2F98);
    // 0x8000BC28: addu        $t7, $t7, $v1
    ctx->r15 = ADD32(ctx->r15, ctx->r3);
    // 0x8000BC2C: sll         $t7, $t7, 1
    ctx->r15 = S32(ctx->r15 << 1);
    // 0x8000BC30: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8000BC34: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x8000BC38: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x8000BC3C: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
    // 0x8000BC40: lh          $t8, 0x9AE($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X9AE);
    // 0x8000BC44: lh          $t9, 0x9B0($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X9B0);
    // 0x8000BC48: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x8000BC4C: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x8000BC50: cvt.s.w     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8000BC54: mul.s       $f8, $f2, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8000BC58: swc1        $f2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f2.u32l;
    // 0x8000BC5C: cvt.s.w     $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    ctx->f16.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8000BC60: mul.s       $f10, $f16, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x8000BC64: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    // 0x8000BC68: jal         0x8007FA40
    // 0x8000BC6C: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    func_8007FA40(rdram, ctx);
        goto after_0;
    // 0x8000BC6C: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    after_0:
    // 0x8000BC70: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8000BC74: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8000BC78: lwc1        $f2, 0x24($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8000BC7C: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x8000BC80: lwc1        $f16, 0x20($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8000BC84: bc1f        L_8000BD24
    if (!c1cs) {
        // 0x8000BC88: lui         $t0, 0x8011
        ctx->r8 = S32(0X8011 << 16);
            goto L_8000BD24;
    }
    // 0x8000BC88: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x8000BC8C: lhu         $t1, 0x2($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X2);
    // 0x8000BC90: lw          $t0, -0x2F98($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X2F98);
    // 0x8000BC94: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8000BC98: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8000BC9C: sll         $t2, $t2, 1
    ctx->r10 = S32(ctx->r10 << 1);
    // 0x8000BCA0: lui         $v0, 0x3
    ctx->r2 = S32(0X3 << 16);
    // 0x8000BCA4: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x8000BCA8: addu        $v0, $v0, $t3
    ctx->r2 = ADD32(ctx->r2, ctx->r11);
    // 0x8000BCAC: lhu         $v0, -0x7656($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X7656);
    // 0x8000BCB0: lui         $at, 0x4300
    ctx->r1 = S32(0X4300 << 16);
    // 0x8000BCB4: andi        $t4, $v0, 0x800
    ctx->r12 = ctx->r2 & 0X800;
    // 0x8000BCB8: beq         $t4, $zero, L_8000BCC8
    if (ctx->r12 == 0) {
        // 0x8000BCBC: andi        $t5, $v0, 0x400
        ctx->r13 = ctx->r2 & 0X400;
            goto L_8000BCC8;
    }
    // 0x8000BCBC: andi        $t5, $v0, 0x400
    ctx->r13 = ctx->r2 & 0X400;
    // 0x8000BCC0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8000BCC4: nop

L_8000BCC8:
    // 0x8000BCC8: beq         $t5, $zero, L_8000BCDC
    if (ctx->r13 == 0) {
        // 0x8000BCCC: andi        $t6, $v0, 0x200
        ctx->r14 = ctx->r2 & 0X200;
            goto L_8000BCDC;
    }
    // 0x8000BCCC: andi        $t6, $v0, 0x200
    ctx->r14 = ctx->r2 & 0X200;
    // 0x8000BCD0: lui         $at, 0xC300
    ctx->r1 = S32(0XC300 << 16);
    // 0x8000BCD4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8000BCD8: nop

L_8000BCDC:
    // 0x8000BCDC: mul.s       $f0, $f16, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x8000BCE0: beq         $t6, $zero, L_8000BCF4
    if (ctx->r14 == 0) {
        // 0x8000BCE4: andi        $t7, $v0, 0x100
        ctx->r15 = ctx->r2 & 0X100;
            goto L_8000BCF4;
    }
    // 0x8000BCE4: andi        $t7, $v0, 0x100
    ctx->r15 = ctx->r2 & 0X100;
    // 0x8000BCE8: lui         $at, 0xC300
    ctx->r1 = S32(0XC300 << 16);
    // 0x8000BCEC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8000BCF0: nop

L_8000BCF4:
    // 0x8000BCF4: beq         $t7, $zero, L_8000BD04
    if (ctx->r15 == 0) {
        // 0x8000BCF8: lui         $at, 0x4300
        ctx->r1 = S32(0X4300 << 16);
            goto L_8000BD04;
    }
    // 0x8000BCF8: lui         $at, 0x4300
    ctx->r1 = S32(0X4300 << 16);
    // 0x8000BCFC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8000BD00: nop

L_8000BD04:
    // 0x8000BD04: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8000BD08: swc1        $f2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f2.u32l;
    // 0x8000BD0C: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    // 0x8000BD10: jal         0x8007FA40
    // 0x8000BD14: add.s       $f12, $f4, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f0.fl;
    func_8007FA40(rdram, ctx);
        goto after_1;
    // 0x8000BD14: add.s       $f12, $f4, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f0.fl;
    after_1:
    // 0x8000BD18: lwc1        $f2, 0x24($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8000BD1C: lwc1        $f16, 0x20($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8000BD20: nop

L_8000BD24:
    // 0x8000BD24: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8000BD28: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8000BD2C: nop

    // 0x8000BD30: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x8000BD34: nop

    // 0x8000BD38: bc1f        L_8000BDC4
    if (!c1cs) {
        // 0x8000BD3C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8000BDC4;
    }
    // 0x8000BD3C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8000BD40: neg.s       $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = -ctx->f16.fl;
    // 0x8000BD44: jal         0x8001C5D0
    // 0x8000BD48: neg.s       $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = -ctx->f2.fl;
    func_8001C5D0(rdram, ctx);
        goto after_2;
    // 0x8000BD48: neg.s       $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = -ctx->f2.fl;
    after_2:
    // 0x8000BD4C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8000BD50: lwc1        $f11, 0x32A0($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X32A0);
    // 0x8000BD54: lwc1        $f10, 0x32A4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X32A4);
    // 0x8000BD58: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x8000BD5C: nop

    // 0x8000BD60: div.d       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f18.d = DIV_D(ctx->f8.d, ctx->f10.d);
    // 0x8000BD64: lw          $t8, 0x4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X4);
    // 0x8000BD68: nop

    // 0x8000BD6C: lwc1        $f14, 0x14($t8)
    ctx->f14.u32l = MEM_W(ctx->r24, 0X14);
    // 0x8000BD70: jal         0x8000BDD0
    // 0x8000BD74: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    func_8000BDD0(rdram, ctx);
        goto after_3;
    // 0x8000BD74: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    after_3:
    // 0x8000BD78: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x8000BD7C: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x8000BD80: lwc1        $f4, 0x14($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X14);
    // 0x8000BD84: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x8000BD88: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x8000BD8C: swc1        $f6, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f6.u32l;
    // 0x8000BD90: lhu         $t0, 0x2($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X2);
    // 0x8000BD94: lw          $t1, -0x2F98($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X2F98);
    // 0x8000BD98: sll         $t2, $t0, 2
    ctx->r10 = S32(ctx->r8 << 2);
    // 0x8000BD9C: subu        $t2, $t2, $t0
    ctx->r10 = SUB32(ctx->r10, ctx->r8);
    // 0x8000BDA0: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8000BDA4: lw          $t9, 0x4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X4);
    // 0x8000BDA8: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x8000BDAC: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8000BDB0: lwc1        $f8, 0x14($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X14);
    // 0x8000BDB4: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x8000BDB8: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8000BDBC: swc1        $f8, -0x638C($at)
    MEM_W(-0X638C, ctx->r1) = ctx->f8.u32l;
L_8000BDC0:
    // 0x8000BDC0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8000BDC4:
    // 0x8000BDC4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8000BDC8: jr          $ra
    // 0x8000BDCC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8000BDCC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8000BDD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000BDD0: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x8000BDD4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8000BDD8: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x8000BDDC: c.lt.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl < ctx->f12.fl;
    // 0x8000BDE0: nop

    // 0x8000BDE4: bc1f        L_8000BDF8
    if (!c1cs) {
        // 0x8000BDE8: nop
    
            goto L_8000BDF8;
    }
    // 0x8000BDE8: nop

    // 0x8000BDEC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8000BDF0: nop

    // 0x8000BDF4: sub.s       $f12, $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f2.fl;
L_8000BDF8:
    // 0x8000BDF8: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x8000BDFC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8000BE00: lui         $at, 0xC334
    ctx->r1 = S32(0XC334 << 16);
    // 0x8000BE04: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8000BE08: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8000BE0C: c.lt.s      $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f12.fl < ctx->f18.fl;
    // 0x8000BE10: nop

    // 0x8000BE14: bc1f        L_8000BE20
    if (!c1cs) {
        // 0x8000BE18: nop
    
            goto L_8000BE20;
    }
    // 0x8000BE18: nop

    // 0x8000BE1C: add.s       $f12, $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f2.fl;
L_8000BE20:
    // 0x8000BE20: lwc1        $f4, 0x70A8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X70A8);
    // 0x8000BE24: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8000BE28: sub.s       $f0, $f12, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f4.fl;
    // 0x8000BE2C: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x8000BE30: nop

    // 0x8000BE34: bc1f        L_8000BE50
    if (!c1cs) {
        // 0x8000BE38: nop
    
            goto L_8000BE50;
    }
    // 0x8000BE38: nop

L_8000BE3C:
    // 0x8000BE3C: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x8000BE40: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x8000BE44: nop

    // 0x8000BE48: bc1t        L_8000BE3C
    if (c1cs) {
        // 0x8000BE4C: nop
    
            goto L_8000BE3C;
    }
    // 0x8000BE4C: nop

L_8000BE50:
    // 0x8000BE50: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x8000BE54: nop

    // 0x8000BE58: bc1f        L_8000BE74
    if (!c1cs) {
        // 0x8000BE5C: nop
    
            goto L_8000BE74;
    }
    // 0x8000BE5C: nop

L_8000BE60:
    // 0x8000BE60: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x8000BE64: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x8000BE68: nop

    // 0x8000BE6C: bc1t        L_8000BE60
    if (c1cs) {
        // 0x8000BE70: nop
    
            goto L_8000BE60;
    }
    // 0x8000BE70: nop

L_8000BE74:
    // 0x8000BE74: swc1        $f12, 0x70A8($at)
    MEM_W(0X70A8, ctx->r1) = ctx->f12.u32l;
    // 0x8000BE78: sub.s       $f12, $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f14.fl;
    // 0x8000BE7C: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x8000BE80: c.lt.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl < ctx->f12.fl;
    // 0x8000BE84: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8000BE88: bc1f        L_8000BEA4
    if (!c1cs) {
        // 0x8000BE8C: lui         $at, 0x8009
        ctx->r1 = S32(0X8009 << 16);
            goto L_8000BEA4;
    }
    // 0x8000BE8C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
L_8000BE90:
    // 0x8000BE90: sub.s       $f12, $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x8000BE94: c.lt.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl < ctx->f12.fl;
    // 0x8000BE98: nop

    // 0x8000BE9C: bc1t        L_8000BE90
    if (c1cs) {
        // 0x8000BEA0: nop
    
            goto L_8000BE90;
    }
    // 0x8000BEA0: nop

L_8000BEA4:
    // 0x8000BEA4: c.lt.s      $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f12.fl < ctx->f18.fl;
    // 0x8000BEA8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8000BEAC: bc1f        L_8000BEC8
    if (!c1cs) {
        // 0x8000BEB0: nop
    
            goto L_8000BEC8;
    }
    // 0x8000BEB0: nop

L_8000BEB4:
    // 0x8000BEB4: add.s       $f12, $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f2.fl;
    // 0x8000BEB8: c.lt.s      $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f12.fl < ctx->f18.fl;
    // 0x8000BEBC: nop

    // 0x8000BEC0: bc1t        L_8000BEB4
    if (c1cs) {
        // 0x8000BEC4: nop
    
            goto L_8000BEB4;
    }
    // 0x8000BEC4: nop

L_8000BEC8:
    // 0x8000BEC8: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
    // 0x8000BECC: nop

    // 0x8000BED0: bc1f        L_8000BEE0
    if (!c1cs) {
        // 0x8000BED4: nop
    
            goto L_8000BEE0;
    }
    // 0x8000BED4: nop

    // 0x8000BED8: b           L_8000BEE4
    // 0x8000BEDC: neg.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = -ctx->f12.fl;
        goto L_8000BEE4;
    // 0x8000BEDC: neg.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = -ctx->f12.fl;
L_8000BEE0:
    // 0x8000BEE0: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
L_8000BEE4:
    // 0x8000BEE4: c.lt.s      $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f6.fl < ctx->f14.fl;
    // 0x8000BEE8: nop

    // 0x8000BEEC: bc1f        L_8000BFEC
    if (!c1cs) {
        // 0x8000BEF0: nop
    
            goto L_8000BFEC;
    }
    // 0x8000BEF0: nop

    // 0x8000BEF4: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x8000BEF8: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8000BEFC: bc1f        L_8000BF0C
    if (!c1cs) {
        // 0x8000BF00: nop
    
            goto L_8000BF0C;
    }
    // 0x8000BF00: nop

    // 0x8000BF04: b           L_8000BF10
    // 0x8000BF08: neg.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = -ctx->f0.fl;
        goto L_8000BF10;
    // 0x8000BF08: neg.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = -ctx->f0.fl;
L_8000BF0C:
    // 0x8000BF0C: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
L_8000BF10:
    // 0x8000BF10: swc1        $f0, 0x70AC($at)
    MEM_W(0X70AC, ctx->r1) = ctx->f0.u32l;
    // 0x8000BF14: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8000BF18: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8000BF1C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8000BF20: c.lt.s      $f8, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f8.fl < ctx->f14.fl;
    // 0x8000BF24: nop

    // 0x8000BF28: bc1f        L_8000BFA4
    if (!c1cs) {
        // 0x8000BF2C: nop
    
            goto L_8000BFA4;
    }
    // 0x8000BF2C: nop

    // 0x8000BF30: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
    // 0x8000BF34: nop

    // 0x8000BF38: bc1f        L_8000BF48
    if (!c1cs) {
        // 0x8000BF3C: nop
    
            goto L_8000BF48;
    }
    // 0x8000BF3C: nop

    // 0x8000BF40: b           L_8000BF4C
    // 0x8000BF44: neg.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = -ctx->f12.fl;
        goto L_8000BF4C;
    // 0x8000BF44: neg.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = -ctx->f12.fl;
L_8000BF48:
    // 0x8000BF48: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
L_8000BF4C:
    // 0x8000BF4C: swc1        $f0, 0x70AC($at)
    MEM_W(0X70AC, ctx->r1) = ctx->f0.u32l;
    // 0x8000BF50: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8000BF54: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8000BF58: nop

    // 0x8000BF5C: c.lt.s      $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f10.fl < ctx->f14.fl;
    // 0x8000BF60: nop

    // 0x8000BF64: bc1f        L_8000BFA8
    if (!c1cs) {
        // 0x8000BF68: lui         $at, 0x41A0
        ctx->r1 = S32(0X41A0 << 16);
            goto L_8000BFA8;
    }
    // 0x8000BF68: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x8000BF6C: mul.s       $f4, $f12, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x8000BF70: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8000BF74: swc1        $f0, 0x70AC($at)
    MEM_W(0X70AC, ctx->r1) = ctx->f0.u32l;
    // 0x8000BF78: c.lt.s      $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f4.fl < ctx->f16.fl;
    // 0x8000BF7C: nop

    // 0x8000BF80: bc1f        L_8000BFA8
    if (!c1cs) {
        // 0x8000BF84: lui         $at, 0x41A0
        ctx->r1 = S32(0X41A0 << 16);
            goto L_8000BFA8;
    }
    // 0x8000BF84: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x8000BF88: c.lt.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl < ctx->f12.fl;
    // 0x8000BF8C: nop

    // 0x8000BF90: bc1f        L_8000BFA0
    if (!c1cs) {
        // 0x8000BF94: nop
    
            goto L_8000BFA0;
    }
    // 0x8000BF94: nop

    // 0x8000BF98: b           L_8000BFA4
    // 0x8000BF9C: sub.s       $f12, $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f2.fl;
        goto L_8000BFA4;
    // 0x8000BF9C: sub.s       $f12, $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f2.fl;
L_8000BFA0:
    // 0x8000BFA0: add.s       $f12, $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f2.fl;
L_8000BFA4:
    // 0x8000BFA4: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
L_8000BFA8:
    // 0x8000BFA8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8000BFAC: lui         $at, 0xC1A0
    ctx->r1 = S32(0XC1A0 << 16);
    // 0x8000BFB0: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x8000BFB4: nop

    // 0x8000BFB8: bc1f        L_8000BFC4
    if (!c1cs) {
        // 0x8000BFBC: nop
    
            goto L_8000BFC4;
    }
    // 0x8000BFBC: nop

    // 0x8000BFC0: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
L_8000BFC4:
    // 0x8000BFC4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8000BFC8: nop

    // 0x8000BFCC: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x8000BFD0: nop

    // 0x8000BFD4: bc1f        L_8000BFE0
    if (!c1cs) {
        // 0x8000BFD8: nop
    
            goto L_8000BFE0;
    }
    // 0x8000BFD8: nop

    // 0x8000BFDC: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
L_8000BFE0:
    // 0x8000BFE0: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
    // 0x8000BFE4: jr          $ra
    // 0x8000BFE8: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    return;
    // 0x8000BFE8: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
L_8000BFEC:
    // 0x8000BFEC: swc1        $f0, 0x70AC($at)
    MEM_W(0X70AC, ctx->r1) = ctx->f0.u32l;
    // 0x8000BFF0: mov.s       $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = ctx->f16.fl;
    // 0x8000BFF4: jr          $ra
    // 0x8000BFF8: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    return;
    // 0x8000BFF8: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
;}
RECOMP_FUNC void func_8000BFFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000BFFC: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x8000C000: addiu       $a1, $a1, 0x6984
    ctx->r5 = ADD32(ctx->r5, 0X6984);
    // 0x8000C004: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x8000C008: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8000C00C: beq         $v1, $zero, L_8000C028
    if (ctx->r3 == 0) {
        // 0x8000C010: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8000C028;
    }
    // 0x8000C010: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000C014: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8000C018: beq         $v1, $at, L_8000C0AC
    if (ctx->r3 == ctx->r1) {
        // 0x8000C01C: addiu       $t8, $v1, 0x1
        ctx->r24 = ADD32(ctx->r3, 0X1);
            goto L_8000C0AC;
    }
    // 0x8000C01C: addiu       $t8, $v1, 0x1
    ctx->r24 = ADD32(ctx->r3, 0X1);
    // 0x8000C020: b           L_8000C0B0
    // 0x8000C024: nop

        goto L_8000C0B0;
    // 0x8000C024: nop

L_8000C028:
    // 0x8000C028: jal         0x8005F560
    // 0x8000C02C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_8005F560(rdram, ctx);
        goto after_0;
    // 0x8000C02C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_0:
    // 0x8000C030: jal         0x80013680
    // 0x8000C034: nop

    func_80013680(rdram, ctx);
        goto after_1;
    // 0x8000C034: nop

    after_1:
    // 0x8000C038: lui         $a1, 0x8001
    ctx->r5 = S32(0X8001 << 16);
    // 0x8000C03C: addiu       $a1, $a1, -0x3F38
    ctx->r5 = ADD32(ctx->r5, -0X3F38);
    // 0x8000C040: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x8000C044: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    // 0x8000C048: jal         0x8000B00C
    // 0x8000C04C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8000B00C(rdram, ctx);
        goto after_2;
    // 0x8000C04C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x8000C050: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x8000C054: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    // 0x8000C058: jal         0x8000B00C
    // 0x8000C05C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8000B00C(rdram, ctx);
        goto after_3;
    // 0x8000C05C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x8000C060: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x8000C064: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    // 0x8000C068: jal         0x8000B00C
    // 0x8000C06C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8000B00C(rdram, ctx);
        goto after_4;
    // 0x8000C06C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_4:
    // 0x8000C070: lui         $a0, 0x802F
    ctx->r4 = S32(0X802F << 16);
    // 0x8000C074: addiu       $a0, $a0, -0x8E8
    ctx->r4 = ADD32(ctx->r4, -0X8E8);
    // 0x8000C078: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8000C07C: jal         0x80013968
    // 0x8000C080: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_80013968(rdram, ctx);
        goto after_5;
    // 0x8000C080: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_5:
    // 0x8000C084: jal         0x800054F4
    // 0x8000C088: nop

    func_800054F4(rdram, ctx);
        goto after_6;
    // 0x8000C088: nop

    after_6:
    // 0x8000C08C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8000C090: addiu       $v0, $v0, 0x6984
    ctx->r2 = ADD32(ctx->r2, 0X6984);
    // 0x8000C094: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x8000C098: nop

    // 0x8000C09C: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8000C0A0: b           L_8000C0B0
    // 0x8000C0A4: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
        goto L_8000C0B0;
    // 0x8000C0A4: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8000C0A8: addiu       $t8, $v1, 0x1
    ctx->r24 = ADD32(ctx->r3, 0X1);
L_8000C0AC:
    // 0x8000C0AC: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
L_8000C0B0:
    // 0x8000C0B0: jal         0x8000ABD4
    // 0x8000C0B4: nop

    func_8000ABD4(rdram, ctx);
        goto after_7;
    // 0x8000C0B4: nop

    after_7:
    // 0x8000C0B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000C0BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8000C0C0: jr          $ra
    // 0x8000C0C4: nop

    return;
    // 0x8000C0C4: nop

;}
RECOMP_FUNC void func_8000C0C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000C0C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000C0CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000C0D0: lhu         $t6, 0x2($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X2);
    // 0x8000C0D4: lui         $t8, 0x800A
    ctx->r24 = S32(0X800A << 16);
    // 0x8000C0D8: lw          $a2, 0x4($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X4);
    // 0x8000C0DC: addiu       $t8, $t8, -0x1C50
    ctx->r24 = ADD32(ctx->r24, -0X1C50);
    // 0x8000C0E0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8000C0E4: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x8000C0E8: lbu         $t9, 0x0($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X0);
    // 0x8000C0EC: lw          $v1, 0x30($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X30);
    // 0x8000C0F0: lui         $t4, 0x801D
    ctx->r12 = S32(0X801D << 16);
    // 0x8000C0F4: sb          $t9, 0x2C($v1)
    MEM_B(0X2C, ctx->r3) = ctx->r25;
    // 0x8000C0F8: lbu         $t0, 0x1($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X1);
    // 0x8000C0FC: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8000C100: sb          $t0, 0x2D($v1)
    MEM_B(0X2D, ctx->r3) = ctx->r8;
    // 0x8000C104: lbu         $t1, 0x2($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X2);
    // 0x8000C108: addiu       $t4, $t4, 0x7800
    ctx->r12 = ADD32(ctx->r12, 0X7800);
    // 0x8000C10C: sb          $t1, 0x2E($v1)
    MEM_B(0X2E, ctx->r3) = ctx->r9;
    // 0x8000C110: lhu         $a1, 0x2($a0)
    ctx->r5 = MEM_HU(ctx->r4, 0X2);
    // 0x8000C114: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    // 0x8000C118: sll         $t2, $a1, 8
    ctx->r10 = S32(ctx->r5 << 8);
    // 0x8000C11C: addiu       $t3, $t2, 0x1C00
    ctx->r11 = ADD32(ctx->r10, 0X1C00);
    // 0x8000C120: addu        $a0, $t3, $t4
    ctx->r4 = ADD32(ctx->r11, ctx->r12);
    // 0x8000C124: jal         0x80014404
    // 0x8000C128: addiu       $v1, $v1, 0x2C
    ctx->r3 = ADD32(ctx->r3, 0X2C);
    func_80014404(rdram, ctx);
        goto after_0;
    // 0x8000C128: addiu       $v1, $v1, 0x2C
    ctx->r3 = ADD32(ctx->r3, 0X2C);
    after_0:
    // 0x8000C12C: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x8000C130: lui         $t5, 0x8001
    ctx->r13 = S32(0X8001 << 16);
    // 0x8000C134: addiu       $t5, $t5, -0x3EB4
    ctx->r13 = ADD32(ctx->r13, -0X3EB4);
    // 0x8000C138: sw          $t5, 0x28($a3)
    MEM_W(0X28, ctx->r7) = ctx->r13;
    // 0x8000C13C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000C140: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8000C144: jr          $ra
    // 0x8000C148: nop

    return;
    // 0x8000C148: nop

;}
RECOMP_FUNC void func_8000C14C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000C14C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8000C150: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000C154: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8000C158: lw          $a0, 0x4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4);
    // 0x8000C15C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8000C160: lw          $v0, 0x30($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X30);
    // 0x8000C164: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8000C168: lhu         $t6, 0x2($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X2);
    // 0x8000C16C: sh          $zero, 0x4($v0)
    MEM_H(0X4, ctx->r2) = 0;
    // 0x8000C170: andi        $t7, $t6, 0xDFFF
    ctx->r15 = ctx->r14 & 0XDFFF;
    // 0x8000C174: sh          $t7, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r15;
    // 0x8000C178: swc1        $f0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f0.u32l;
    // 0x8000C17C: swc1        $f0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f0.u32l;
    // 0x8000C180: swc1        $f0, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f0.u32l;
    // 0x8000C184: lwc1        $f4, 0x32A8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X32A8);
    // 0x8000C188: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8000C18C: swc1        $f4, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f4.u32l;
    // 0x8000C190: lwc1        $f6, 0x32AC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X32AC);
    // 0x8000C194: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x8000C198: swc1        $f6, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f6.u32l;
    // 0x8000C19C: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    // 0x8000C1A0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8000C1A4: jal         0x8000ABAC
    // 0x8000C1A8: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_8000ABAC(rdram, ctx);
        goto after_0;
    // 0x8000C1A8: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x8000C1AC: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x8000C1B0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8000C1B4: lhu         $v0, 0x2($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X2);
    // 0x8000C1B8: lui         $t8, 0x8001
    ctx->r24 = S32(0X8001 << 16);
    // 0x8000C1BC: beq         $v0, $zero, L_8000C1E8
    if (ctx->r2 == 0) {
        // 0x8000C1C0: addiu       $t8, $t8, -0x3DC8
        ctx->r24 = ADD32(ctx->r24, -0X3DC8);
            goto L_8000C1E8;
    }
    // 0x8000C1C0: addiu       $t8, $t8, -0x3DC8
    ctx->r24 = ADD32(ctx->r24, -0X3DC8);
    // 0x8000C1C4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8000C1C8: beq         $v0, $at, L_8000C204
    if (ctx->r2 == ctx->r1) {
        // 0x8000C1CC: lui         $at, 0xC020
        ctx->r1 = S32(0XC020 << 16);
            goto L_8000C204;
    }
    // 0x8000C1CC: lui         $at, 0xC020
    ctx->r1 = S32(0XC020 << 16);
    // 0x8000C1D0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8000C1D4: lui         $at, 0x42D2
    ctx->r1 = S32(0X42D2 << 16);
    // 0x8000C1D8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8000C1DC: swc1        $f8, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f8.u32l;
    // 0x8000C1E0: b           L_8000C21C
    // 0x8000C1E4: swc1        $f10, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f10.u32l;
        goto L_8000C21C;
    // 0x8000C1E4: swc1        $f10, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f10.u32l;
L_8000C1E8:
    // 0x8000C1E8: lui         $at, 0x40D0
    ctx->r1 = S32(0X40D0 << 16);
    // 0x8000C1EC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8000C1F0: lui         $at, 0x4296
    ctx->r1 = S32(0X4296 << 16);
    // 0x8000C1F4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8000C1F8: swc1        $f16, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f16.u32l;
    // 0x8000C1FC: b           L_8000C21C
    // 0x8000C200: swc1        $f18, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f18.u32l;
        goto L_8000C21C;
    // 0x8000C200: swc1        $f18, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f18.u32l;
L_8000C204:
    // 0x8000C204: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8000C208: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8000C20C: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x8000C210: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8000C214: swc1        $f4, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f4.u32l;
    // 0x8000C218: swc1        $f6, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f6.u32l;
L_8000C21C:
    // 0x8000C21C: lwc1        $f8, 0xC($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0XC);
    // 0x8000C220: sw          $t8, 0x28($a3)
    MEM_W(0X28, ctx->r7) = ctx->r24;
    // 0x8000C224: swc1        $f8, 0xC($a3)
    MEM_W(0XC, ctx->r7) = ctx->f8.u32l;
    // 0x8000C228: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000C22C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8000C230: jr          $ra
    // 0x8000C234: nop

    return;
    // 0x8000C234: nop

;}
RECOMP_FUNC void func_8000C238(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000C238: lui         $t6, 0x8010
    ctx->r14 = S32(0X8010 << 16);
    // 0x8000C23C: lw          $t6, 0x59BC($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X59BC);
    // 0x8000C240: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x8000C244: bgez        $t6, L_8000C258
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8000C248: sra         $t7, $t6, 16
        ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
            goto L_8000C258;
    }
    // 0x8000C248: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8000C24C: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x8000C250: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8000C254: sra         $t7, $at, 16
    ctx->r15 = S32(SIGNED(ctx->r1) >> 16);
L_8000C258:
    // 0x8000C258: slti        $at, $t7, 0x100
    ctx->r1 = SIGNED(ctx->r15) < 0X100 ? 1 : 0;
    // 0x8000C25C: bne         $at, $zero, L_8000C26C
    if (ctx->r1 != 0) {
        // 0x8000C260: addiu       $t8, $zero, 0x2
        ctx->r24 = ADD32(0, 0X2);
            goto L_8000C26C;
    }
    // 0x8000C260: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x8000C264: jr          $ra
    // 0x8000C268: sh          $t8, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r24;
    return;
    // 0x8000C268: sh          $t8, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r24;
L_8000C26C:
    // 0x8000C26C: sh          $zero, 0x0($v0)
    MEM_H(0X0, ctx->r2) = 0;
    // 0x8000C270: jr          $ra
    // 0x8000C274: nop

    return;
    // 0x8000C274: nop

;}
RECOMP_FUNC void func_8000C278(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000C278: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x8000C27C: addiu       $t7, $t7, 0x3FA0
    ctx->r15 = ADD32(ctx->r15, 0X3FA0);
    // 0x8000C280: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8000C284: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x8000C288: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x8000C28C: nop

    // 0x8000C290: beq         $a1, $t8, L_8000C29C
    if (ctx->r5 == ctx->r24) {
        // 0x8000C294: nop
    
            goto L_8000C29C;
    }
    // 0x8000C294: nop

    // 0x8000C298: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
L_8000C29C:
    // 0x8000C29C: jr          $ra
    // 0x8000C2A0: nop

    return;
    // 0x8000C2A0: nop

;}
RECOMP_FUNC void func_8000C2A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000C2A4: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x8000C2A8: addiu       $t7, $t7, 0x3FA8
    ctx->r15 = ADD32(ctx->r15, 0X3FA8);
    // 0x8000C2AC: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8000C2B0: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x8000C2B4: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x8000C2B8: nop

    // 0x8000C2BC: beq         $a1, $t8, L_8000C2C8
    if (ctx->r5 == ctx->r24) {
        // 0x8000C2C0: nop
    
            goto L_8000C2C8;
    }
    // 0x8000C2C0: nop

    // 0x8000C2C4: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
L_8000C2C8:
    // 0x8000C2C8: jr          $ra
    // 0x8000C2CC: nop

    return;
    // 0x8000C2CC: nop

;}
RECOMP_FUNC void func_8000C2D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000C2D0: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x8000C2D4: addiu       $t6, $t6, 0x3940
    ctx->r14 = ADD32(ctx->r14, 0X3940);
    // 0x8000C2D8: subu        $t7, $a0, $t6
    ctx->r15 = SUB32(ctx->r4, ctx->r14);
    // 0x8000C2DC: addiu       $at, $zero, 0x34
    ctx->r1 = ADD32(0, 0X34);
    // 0x8000C2E0: div         $zero, $t7, $at
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r1)));
    // 0x8000C2E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000C2E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000C2EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8000C2F0: mflo        $t8
    ctx->r24 = lo;
    // 0x8000C2F4: slti        $at, $t8, 0xE
    ctx->r1 = SIGNED(ctx->r24) < 0XE ? 1 : 0;
    // 0x8000C2F8: beq         $at, $zero, L_8000C308
    if (ctx->r1 == 0) {
        // 0x8000C2FC: nop
    
            goto L_8000C308;
    }
    // 0x8000C2FC: nop

    // 0x8000C300: b           L_8000C308
    // 0x8000C304: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
        goto L_8000C308;
    // 0x8000C304: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_8000C308:
    // 0x8000C308: jal         0x8000C68C
    // 0x8000C30C: nop

    func_8000C68C(rdram, ctx);
        goto after_0;
    // 0x8000C30C: nop

    after_0:
    // 0x8000C310: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000C314: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8000C318: jr          $ra
    // 0x8000C31C: nop

    return;
    // 0x8000C31C: nop

;}
RECOMP_FUNC void func_8000C320(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000C320: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x8000C324: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8000C328: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8000C32C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8000C330: lwc1        $f4, 0x14($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X14);
    // 0x8000C334: nop

    // 0x8000C338: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8000C33C: swc1        $f8, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f8.u32l;
    // 0x8000C340: lwc1        $f0, 0x14($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X14);
    // 0x8000C344: nop

    // 0x8000C348: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x8000C34C: nop

    // 0x8000C350: bc1f        L_8000C360
    if (!c1cs) {
        // 0x8000C354: nop
    
            goto L_8000C360;
    }
    // 0x8000C354: nop

    // 0x8000C358: sub.s       $f10, $f0, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x8000C35C: swc1        $f10, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f10.u32l;
L_8000C360:
    // 0x8000C360: jr          $ra
    // 0x8000C364: nop

    return;
    // 0x8000C364: nop

;}
RECOMP_FUNC void func_8000C368(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000C368: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8000C36C: lbu         $v0, -0x32A4($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X32A4);
    // 0x8000C370: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8000C374: beq         $v0, $at, L_8000C384
    if (ctx->r2 == ctx->r1) {
        // 0x8000C378: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_8000C384;
    }
    // 0x8000C378: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8000C37C: bne         $v0, $at, L_8000C390
    if (ctx->r2 != ctx->r1) {
        // 0x8000C380: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8000C390;
    }
    // 0x8000C380: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8000C384:
    // 0x8000C384: jr          $ra
    // 0x8000C388: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8000C388: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8000C38C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8000C390:
    // 0x8000C390: jr          $ra
    // 0x8000C394: nop

    return;
    // 0x8000C394: nop

;}
RECOMP_FUNC void func_8000C398(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000C398: blez        $a1, L_8000C458
    if (SIGNED(ctx->r5) <= 0) {
        // 0x8000C39C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8000C458;
    }
    // 0x8000C39C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8000C3A0: andi        $a3, $a1, 0x3
    ctx->r7 = ctx->r5 & 0X3;
    // 0x8000C3A4: beq         $a3, $zero, L_8000C3E0
    if (ctx->r7 == 0) {
        // 0x8000C3A8: or          $a2, $a3, $zero
        ctx->r6 = ctx->r7 | 0;
            goto L_8000C3E0;
    }
    // 0x8000C3A8: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    // 0x8000C3AC: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x8000C3B0: addiu       $t7, $t7, 0x3F90
    ctx->r15 = ADD32(ctx->r15, 0X3F90);
    // 0x8000C3B4: sll         $t6, $zero, 1
    ctx->r14 = S32(0 << 1);
    // 0x8000C3B8: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
L_8000C3BC:
    // 0x8000C3BC: lhu         $t8, 0x0($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X0);
    // 0x8000C3C0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8000C3C4: bne         $a0, $t8, L_8000C3D4
    if (ctx->r4 != ctx->r24) {
        // 0x8000C3C8: nop
    
            goto L_8000C3D4;
    }
    // 0x8000C3C8: nop

    // 0x8000C3CC: jr          $ra
    // 0x8000C3D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8000C3D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8000C3D4:
    // 0x8000C3D4: bne         $a2, $v0, L_8000C3BC
    if (ctx->r6 != ctx->r2) {
        // 0x8000C3D8: addiu       $v1, $v1, 0x2
        ctx->r3 = ADD32(ctx->r3, 0X2);
            goto L_8000C3BC;
    }
    // 0x8000C3D8: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x8000C3DC: beq         $v0, $a1, L_8000C458
    if (ctx->r2 == ctx->r5) {
        // 0x8000C3E0: lui         $t0, 0x8013
        ctx->r8 = S32(0X8013 << 16);
            goto L_8000C458;
    }
L_8000C3E0:
    // 0x8000C3E0: lui         $t0, 0x8013
    ctx->r8 = S32(0X8013 << 16);
    // 0x8000C3E4: addiu       $t0, $t0, 0x3F90
    ctx->r8 = ADD32(ctx->r8, 0X3F90);
    // 0x8000C3E8: sll         $t9, $v0, 1
    ctx->r25 = S32(ctx->r2 << 1);
    // 0x8000C3EC: addu        $v1, $t9, $t0
    ctx->r3 = ADD32(ctx->r25, ctx->r8);
L_8000C3F0:
    // 0x8000C3F0: lhu         $t1, 0x0($v1)
    ctx->r9 = MEM_HU(ctx->r3, 0X0);
    // 0x8000C3F4: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8000C3F8: bne         $a0, $t1, L_8000C408
    if (ctx->r4 != ctx->r9) {
        // 0x8000C3FC: nop
    
            goto L_8000C408;
    }
    // 0x8000C3FC: nop

    // 0x8000C400: jr          $ra
    // 0x8000C404: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8000C404: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8000C408:
    // 0x8000C408: lhu         $t2, 0x2($v1)
    ctx->r10 = MEM_HU(ctx->r3, 0X2);
    // 0x8000C40C: nop

    // 0x8000C410: bne         $a0, $t2, L_8000C420
    if (ctx->r4 != ctx->r10) {
        // 0x8000C414: nop
    
            goto L_8000C420;
    }
    // 0x8000C414: nop

    // 0x8000C418: jr          $ra
    // 0x8000C41C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8000C41C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8000C420:
    // 0x8000C420: lhu         $t3, 0x4($v1)
    ctx->r11 = MEM_HU(ctx->r3, 0X4);
    // 0x8000C424: nop

    // 0x8000C428: bne         $a0, $t3, L_8000C438
    if (ctx->r4 != ctx->r11) {
        // 0x8000C42C: nop
    
            goto L_8000C438;
    }
    // 0x8000C42C: nop

    // 0x8000C430: jr          $ra
    // 0x8000C434: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8000C434: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8000C438:
    // 0x8000C438: lhu         $t4, 0x6($v1)
    ctx->r12 = MEM_HU(ctx->r3, 0X6);
    // 0x8000C43C: nop

    // 0x8000C440: bne         $a0, $t4, L_8000C450
    if (ctx->r4 != ctx->r12) {
        // 0x8000C444: nop
    
            goto L_8000C450;
    }
    // 0x8000C444: nop

    // 0x8000C448: jr          $ra
    // 0x8000C44C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8000C44C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8000C450:
    // 0x8000C450: bne         $v0, $a1, L_8000C3F0
    if (ctx->r2 != ctx->r5) {
        // 0x8000C454: addiu       $v1, $v1, 0x8
        ctx->r3 = ADD32(ctx->r3, 0X8);
            goto L_8000C3F0;
    }
    // 0x8000C454: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
L_8000C458:
    // 0x8000C458: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8000C45C: jr          $ra
    // 0x8000C460: nop

    return;
    // 0x8000C460: nop

;}
RECOMP_FUNC void func_8000C464(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000C464: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8000C468: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8000C46C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8000C470: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8000C474: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8000C478: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8000C47C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8000C480: lui         $s1, 0x8009
    ctx->r17 = S32(0X8009 << 16);
    // 0x8000C484: lui         $s2, 0x8011
    ctx->r18 = S32(0X8011 << 16);
    // 0x8000C488: lui         $s3, 0x2
    ctx->r19 = S32(0X2 << 16);
    // 0x8000C48C: lui         $s6, 0x8013
    ctx->r22 = S32(0X8013 << 16);
    // 0x8000C490: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8000C494: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8000C498: addiu       $s6, $s6, 0x3F90
    ctx->r22 = ADD32(ctx->r22, 0X3F90);
    // 0x8000C49C: ori         $s3, $s3, 0x8000
    ctx->r19 = ctx->r19 | 0X8000;
    // 0x8000C4A0: addiu       $s2, $s2, -0x2F98
    ctx->r18 = ADD32(ctx->r18, -0X2F98);
    // 0x8000C4A4: addiu       $s1, $s1, 0x70B0
    ctx->r17 = ADD32(ctx->r17, 0X70B0);
    // 0x8000C4A8: addiu       $s4, $zero, 0x6
    ctx->r20 = ADD32(0, 0X6);
    // 0x8000C4AC: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
L_8000C4B0:
    // 0x8000C4B0: jal         0x8000DFBC
    // 0x8000C4B4: nop

    func_8000DFBC(rdram, ctx);
        goto after_0;
    // 0x8000C4B4: nop

    after_0:
    // 0x8000C4B8: lw          $t6, 0x0($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X0);
    // 0x8000C4BC: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x8000C4C0: addu        $t7, $t6, $s3
    ctx->r15 = ADD32(ctx->r14, ctx->r19);
    // 0x8000C4C4: lhu         $t8, 0x998($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X998);
    // 0x8000C4C8: nop

    // 0x8000C4CC: addu        $t9, $v0, $t8
    ctx->r25 = ADD32(ctx->r2, ctx->r24);
    // 0x8000C4D0: divu        $zero, $t9, $s4
    lo = S32(U32(ctx->r25) / U32(ctx->r20)); hi = S32(U32(ctx->r25) % U32(ctx->r20));
    // 0x8000C4D4: bne         $s4, $zero, L_8000C4E0
    if (ctx->r20 != 0) {
        // 0x8000C4D8: nop
    
            goto L_8000C4E0;
    }
    // 0x8000C4D8: nop

    // 0x8000C4DC: break       7
    do_break(2147534044);
L_8000C4E0:
    // 0x8000C4E0: mfhi        $t0
    ctx->r8 = hi;
    // 0x8000C4E4: sll         $t1, $t0, 1
    ctx->r9 = S32(ctx->r8 << 1);
    // 0x8000C4E8: addu        $t2, $s1, $t1
    ctx->r10 = ADD32(ctx->r17, ctx->r9);
    // 0x8000C4EC: lhu         $s0, 0x0($t2)
    ctx->r16 = MEM_HU(ctx->r10, 0X0);
    // 0x8000C4F0: jal         0x8000C398
    // 0x8000C4F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8000C398(rdram, ctx);
        goto after_1;
    // 0x8000C4F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8000C4F8: bne         $v0, $zero, L_8000C4B0
    if (ctx->r2 != 0) {
        // 0x8000C4FC: nop
    
            goto L_8000C4B0;
    }
    // 0x8000C4FC: nop

    // 0x8000C500: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x8000C504: slti        $at, $s5, 0x5
    ctx->r1 = SIGNED(ctx->r21) < 0X5 ? 1 : 0;
    // 0x8000C508: addiu       $s6, $s6, 0x2
    ctx->r22 = ADD32(ctx->r22, 0X2);
    // 0x8000C50C: bne         $at, $zero, L_8000C4B0
    if (ctx->r1 != 0) {
        // 0x8000C510: sh          $s0, -0x2($s6)
        MEM_H(-0X2, ctx->r22) = ctx->r16;
            goto L_8000C4B0;
    }
    // 0x8000C510: sh          $s0, -0x2($s6)
    MEM_H(-0X2, ctx->r22) = ctx->r16;
    // 0x8000C514: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8000C518: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8000C51C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8000C520: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8000C524: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8000C528: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8000C52C: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8000C530: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8000C534: jr          $ra
    // 0x8000C538: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8000C538: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8000C53C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000C53C: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
    // 0x8000C540: div         $zero, $a1, $t0
    lo = S32(S64(S32(ctx->r5)) / S64(S32(ctx->r8))); hi = S32(S64(S32(ctx->r5)) % S64(S32(ctx->r8)));
    // 0x8000C544: lui         $a3, 0x8013
    ctx->r7 = S32(0X8013 << 16);
    // 0x8000C548: addiu       $a3, $a3, 0x3FB8
    ctx->r7 = ADD32(ctx->r7, 0X3FB8);
    // 0x8000C54C: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x8000C550: addiu       $t1, $zero, 0x20
    ctx->r9 = ADD32(0, 0X20);
    // 0x8000C554: addiu       $t7, $t7, -0x69A0
    ctx->r15 = ADD32(ctx->r15, -0X69A0);
    // 0x8000C558: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x8000C55C: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x8000C560: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x8000C564: bne         $t0, $zero, L_8000C570
    if (ctx->r8 != 0) {
        // 0x8000C568: nop
    
            goto L_8000C570;
    }
    // 0x8000C568: nop

    // 0x8000C56C: break       7
    do_break(2147534188);
L_8000C570:
    // 0x8000C570: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8000C574: bne         $t0, $at, L_8000C588
    if (ctx->r8 != ctx->r1) {
        // 0x8000C578: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8000C588;
    }
    // 0x8000C578: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8000C57C: bne         $a1, $at, L_8000C588
    if (ctx->r5 != ctx->r1) {
        // 0x8000C580: nop
    
            goto L_8000C588;
    }
    // 0x8000C580: nop

    // 0x8000C584: break       6
    do_break(2147534212);
L_8000C588:
    // 0x8000C588: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x8000C58C: sb          $t1, 0x2($a3)
    MEM_B(0X2, ctx->r7) = ctx->r9;
    // 0x8000C590: addiu       $a1, $a1, 0x3FC0
    ctx->r5 = ADD32(ctx->r5, 0X3FC0);
    // 0x8000C594: addiu       $a2, $a2, 0x3FB8
    ctx->r6 = ADD32(ctx->r6, 0X3FB8);
    // 0x8000C598: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8000C59C: mflo        $t8
    ctx->r24 = lo;
    // 0x8000C5A0: mfhi        $t2
    ctx->r10 = hi;
    // 0x8000C5A4: addiu       $t9, $t8, 0x30
    ctx->r25 = ADD32(ctx->r24, 0X30);
    // 0x8000C5A8: addiu       $t3, $t2, 0x30
    ctx->r11 = ADD32(ctx->r10, 0X30);
    // 0x8000C5AC: sb          $t9, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r25;
    // 0x8000C5B0: sb          $t3, 0x1($a3)
    MEM_B(0X1, ctx->r7) = ctx->r11;
L_8000C5B4:
    // 0x8000C5B4: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x8000C5B8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8000C5BC: bne         $a0, $zero, L_8000C5CC
    if (ctx->r4 != 0) {
        // 0x8000C5C0: slti        $at, $a0, 0x1B
        ctx->r1 = SIGNED(ctx->r4) < 0X1B ? 1 : 0;
            goto L_8000C5CC;
    }
    // 0x8000C5C0: slti        $at, $a0, 0x1B
    ctx->r1 = SIGNED(ctx->r4) < 0X1B ? 1 : 0;
    // 0x8000C5C4: b           L_8000C5E4
    // 0x8000C5C8: sb          $t1, 0x3($a2)
    MEM_B(0X3, ctx->r6) = ctx->r9;
        goto L_8000C5E4;
    // 0x8000C5C8: sb          $t1, 0x3($a2)
    MEM_B(0X3, ctx->r6) = ctx->r9;
L_8000C5CC:
    // 0x8000C5CC: beq         $at, $zero, L_8000C5E0
    if (ctx->r1 == 0) {
        // 0x8000C5D0: addiu       $t5, $a0, 0x26
        ctx->r13 = ADD32(ctx->r4, 0X26);
            goto L_8000C5E0;
    }
    // 0x8000C5D0: addiu       $t5, $a0, 0x26
    ctx->r13 = ADD32(ctx->r4, 0X26);
    // 0x8000C5D4: addiu       $t4, $a0, 0x40
    ctx->r12 = ADD32(ctx->r4, 0X40);
    // 0x8000C5D8: b           L_8000C5E4
    // 0x8000C5DC: sb          $t4, 0x3($a2)
    MEM_B(0X3, ctx->r6) = ctx->r12;
        goto L_8000C5E4;
    // 0x8000C5DC: sb          $t4, 0x3($a2)
    MEM_B(0X3, ctx->r6) = ctx->r12;
L_8000C5E0:
    // 0x8000C5E0: sb          $t5, 0x3($a2)
    MEM_B(0X3, ctx->r6) = ctx->r13;
L_8000C5E4:
    // 0x8000C5E4: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x8000C5E8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8000C5EC: bne         $a0, $zero, L_8000C5FC
    if (ctx->r4 != 0) {
        // 0x8000C5F0: slti        $at, $a0, 0x1B
        ctx->r1 = SIGNED(ctx->r4) < 0X1B ? 1 : 0;
            goto L_8000C5FC;
    }
    // 0x8000C5F0: slti        $at, $a0, 0x1B
    ctx->r1 = SIGNED(ctx->r4) < 0X1B ? 1 : 0;
    // 0x8000C5F4: b           L_8000C614
    // 0x8000C5F8: sb          $t1, 0x4($a2)
    MEM_B(0X4, ctx->r6) = ctx->r9;
        goto L_8000C614;
    // 0x8000C5F8: sb          $t1, 0x4($a2)
    MEM_B(0X4, ctx->r6) = ctx->r9;
L_8000C5FC:
    // 0x8000C5FC: beq         $at, $zero, L_8000C610
    if (ctx->r1 == 0) {
        // 0x8000C600: addiu       $t7, $a0, 0x26
        ctx->r15 = ADD32(ctx->r4, 0X26);
            goto L_8000C610;
    }
    // 0x8000C600: addiu       $t7, $a0, 0x26
    ctx->r15 = ADD32(ctx->r4, 0X26);
    // 0x8000C604: addiu       $t6, $a0, 0x40
    ctx->r14 = ADD32(ctx->r4, 0X40);
    // 0x8000C608: b           L_8000C614
    // 0x8000C60C: sb          $t6, 0x4($a2)
    MEM_B(0X4, ctx->r6) = ctx->r14;
        goto L_8000C614;
    // 0x8000C60C: sb          $t6, 0x4($a2)
    MEM_B(0X4, ctx->r6) = ctx->r14;
L_8000C610:
    // 0x8000C610: sb          $t7, 0x4($a2)
    MEM_B(0X4, ctx->r6) = ctx->r15;
L_8000C614:
    // 0x8000C614: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x8000C618: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8000C61C: bne         $a0, $zero, L_8000C62C
    if (ctx->r4 != 0) {
        // 0x8000C620: slti        $at, $a0, 0x1B
        ctx->r1 = SIGNED(ctx->r4) < 0X1B ? 1 : 0;
            goto L_8000C62C;
    }
    // 0x8000C620: slti        $at, $a0, 0x1B
    ctx->r1 = SIGNED(ctx->r4) < 0X1B ? 1 : 0;
    // 0x8000C624: b           L_8000C644
    // 0x8000C628: sb          $t1, 0x5($a2)
    MEM_B(0X5, ctx->r6) = ctx->r9;
        goto L_8000C644;
    // 0x8000C628: sb          $t1, 0x5($a2)
    MEM_B(0X5, ctx->r6) = ctx->r9;
L_8000C62C:
    // 0x8000C62C: beq         $at, $zero, L_8000C640
    if (ctx->r1 == 0) {
        // 0x8000C630: addiu       $t9, $a0, 0x26
        ctx->r25 = ADD32(ctx->r4, 0X26);
            goto L_8000C640;
    }
    // 0x8000C630: addiu       $t9, $a0, 0x26
    ctx->r25 = ADD32(ctx->r4, 0X26);
    // 0x8000C634: addiu       $t8, $a0, 0x40
    ctx->r24 = ADD32(ctx->r4, 0X40);
    // 0x8000C638: b           L_8000C644
    // 0x8000C63C: sb          $t8, 0x5($a2)
    MEM_B(0X5, ctx->r6) = ctx->r24;
        goto L_8000C644;
    // 0x8000C63C: sb          $t8, 0x5($a2)
    MEM_B(0X5, ctx->r6) = ctx->r24;
L_8000C640:
    // 0x8000C640: sb          $t9, 0x5($a2)
    MEM_B(0X5, ctx->r6) = ctx->r25;
L_8000C644:
    // 0x8000C644: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x8000C648: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8000C64C: bne         $a0, $zero, L_8000C65C
    if (ctx->r4 != 0) {
        // 0x8000C650: slti        $at, $a0, 0x1B
        ctx->r1 = SIGNED(ctx->r4) < 0X1B ? 1 : 0;
            goto L_8000C65C;
    }
    // 0x8000C650: slti        $at, $a0, 0x1B
    ctx->r1 = SIGNED(ctx->r4) < 0X1B ? 1 : 0;
    // 0x8000C654: b           L_8000C674
    // 0x8000C658: sb          $t1, 0x6($a2)
    MEM_B(0X6, ctx->r6) = ctx->r9;
        goto L_8000C674;
    // 0x8000C658: sb          $t1, 0x6($a2)
    MEM_B(0X6, ctx->r6) = ctx->r9;
L_8000C65C:
    // 0x8000C65C: beq         $at, $zero, L_8000C670
    if (ctx->r1 == 0) {
        // 0x8000C660: addiu       $t3, $a0, 0x26
        ctx->r11 = ADD32(ctx->r4, 0X26);
            goto L_8000C670;
    }
    // 0x8000C660: addiu       $t3, $a0, 0x26
    ctx->r11 = ADD32(ctx->r4, 0X26);
    // 0x8000C664: addiu       $t2, $a0, 0x40
    ctx->r10 = ADD32(ctx->r4, 0X40);
    // 0x8000C668: b           L_8000C674
    // 0x8000C66C: sb          $t2, 0x6($a2)
    MEM_B(0X6, ctx->r6) = ctx->r10;
        goto L_8000C674;
    // 0x8000C66C: sb          $t2, 0x6($a2)
    MEM_B(0X6, ctx->r6) = ctx->r10;
L_8000C670:
    // 0x8000C670: sb          $t3, 0x6($a2)
    MEM_B(0X6, ctx->r6) = ctx->r11;
L_8000C674:
    // 0x8000C674: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x8000C678: bne         $a2, $a1, L_8000C5B4
    if (ctx->r6 != ctx->r5) {
        // 0x8000C67C: nop
    
            goto L_8000C5B4;
    }
    // 0x8000C67C: nop

    // 0x8000C680: sb          $zero, 0xB($a3)
    MEM_B(0XB, ctx->r7) = 0;
    // 0x8000C684: jr          $ra
    // 0x8000C688: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    return;
    // 0x8000C688: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
;}
RECOMP_FUNC void func_8000C68C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000C68C: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x8000C690: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8000C694: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8000C698: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8000C69C: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x8000C6A0: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
    // 0x8000C6A4: lw          $t7, 0x4($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X4);
    // 0x8000C6A8: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x8000C6AC: addiu       $t8, $t8, 0x3FA0
    ctx->r24 = ADD32(ctx->r24, 0X3FA0);
    // 0x8000C6B0: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x8000C6B4: lw          $s1, 0x30($t7)
    ctx->r17 = MEM_W(ctx->r15, 0X30);
    // 0x8000C6B8: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x8000C6BC: addu        $s0, $v0, $t8
    ctx->r16 = ADD32(ctx->r2, ctx->r24);
    // 0x8000C6C0: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8000C6C4: lw          $a1, 0x3FA8($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X3FA8);
    // 0x8000C6C8: jal         0x800139E0
    // 0x8000C6CC: addiu       $s1, $s1, 0x2C
    ctx->r17 = ADD32(ctx->r17, 0X2C);
    func_800139E0(rdram, ctx);
        goto after_0;
    // 0x8000C6CC: addiu       $s1, $s1, 0x2C
    ctx->r17 = ADD32(ctx->r17, 0X2C);
    after_0:
    // 0x8000C6D0: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x8000C6D4: lw          $t9, 0x6980($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X6980);
    // 0x8000C6D8: sw          $v0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r2;
    // 0x8000C6DC: slti        $at, $t9, 0x2
    ctx->r1 = SIGNED(ctx->r25) < 0X2 ? 1 : 0;
    // 0x8000C6E0: beq         $at, $zero, L_8000C6F4
    if (ctx->r1 == 0) {
        // 0x8000C6E4: lui         $a0, 0x8025
        ctx->r4 = S32(0X8025 << 16);
            goto L_8000C6F4;
    }
    // 0x8000C6E4: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8000C6E8: lui         $a0, 0x803C
    ctx->r4 = S32(0X803C << 16);
    // 0x8000C6EC: b           L_8000C6F8
    // 0x8000C6F0: addiu       $a0, $a0, 0x1A00
    ctx->r4 = ADD32(ctx->r4, 0X1A00);
        goto L_8000C6F8;
    // 0x8000C6F0: addiu       $a0, $a0, 0x1A00
    ctx->r4 = ADD32(ctx->r4, 0X1A00);
L_8000C6F4:
    // 0x8000C6F4: addiu       $a0, $a0, -0x4800
    ctx->r4 = ADD32(ctx->r4, -0X4800);
L_8000C6F8:
    // 0x8000C6F8: lw          $t0, 0x8($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X8);
    // 0x8000C6FC: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x8000C700: lui         $at, 0xFA00
    ctx->r1 = S32(0XFA00 << 16);
    // 0x8000C704: addu        $t1, $a0, $t0
    ctx->r9 = ADD32(ctx->r4, ctx->r8);
    // 0x8000C708: addu        $t2, $t1, $at
    ctx->r10 = ADD32(ctx->r9, ctx->r1);
    // 0x8000C70C: slti        $at, $v1, 0x24
    ctx->r1 = SIGNED(ctx->r3) < 0X24 ? 1 : 0;
    // 0x8000C710: beq         $at, $zero, L_8000C758
    if (ctx->r1 == 0) {
        // 0x8000C714: sw          $t2, 0x54($sp)
        MEM_W(0X54, ctx->r29) = ctx->r10;
            goto L_8000C758;
    }
    // 0x8000C714: sw          $t2, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r10;
    // 0x8000C718: lui         $t5, 0x8009
    ctx->r13 = S32(0X8009 << 16);
    // 0x8000C71C: lw          $t5, 0x70D4($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X70D4);
    // 0x8000C720: sll         $t3, $v1, 4
    ctx->r11 = S32(ctx->r3 << 4);
    // 0x8000C724: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8000C728: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x8000C72C: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x8000C730: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x8000C734: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x8000C738: sll         $t4, $t4, 3
    ctx->r12 = S32(ctx->r12 << 3);
    // 0x8000C73C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8000C740: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x8000C744: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8000C748: addu        $t7, $t4, $t6
    ctx->r15 = ADD32(ctx->r12, ctx->r14);
    // 0x8000C74C: addiu       $t8, $t8, 0x4F30
    ctx->r24 = ADD32(ctx->r24, 0X4F30);
    // 0x8000C750: b           L_8000C7F4
    // 0x8000C754: addu        $a3, $t7, $t8
    ctx->r7 = ADD32(ctx->r15, ctx->r24);
        goto L_8000C7F4;
    // 0x8000C754: addu        $a3, $t7, $t8
    ctx->r7 = ADD32(ctx->r15, ctx->r24);
L_8000C758:
    // 0x8000C758: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x8000C75C: addiu       $t9, $t9, 0x70BC
    ctx->r25 = ADD32(ctx->r25, 0X70BC);
    // 0x8000C760: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x8000C764: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x8000C768: sw          $at, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r1;
    // 0x8000C76C: lw          $t1, 0x4($t9)
    ctx->r9 = MEM_W(ctx->r25, 0X4);
    // 0x8000C770: sll         $t2, $v1, 2
    ctx->r10 = S32(ctx->r3 << 2);
    // 0x8000C774: sw          $t1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r9;
    // 0x8000C778: lw          $at, 0x8($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X8);
    // 0x8000C77C: lui         $t4, 0x8009
    ctx->r12 = S32(0X8009 << 16);
    // 0x8000C780: sw          $at, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r1;
    // 0x8000C784: lw          $t1, 0xC($t9)
    ctx->r9 = MEM_W(ctx->r25, 0XC);
    // 0x8000C788: addu        $t3, $a0, $t2
    ctx->r11 = ADD32(ctx->r4, ctx->r10);
    // 0x8000C78C: sw          $t1, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r9;
    // 0x8000C790: lw          $at, 0x10($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X10);
    // 0x8000C794: nop

    // 0x8000C798: sw          $at, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r1;
    // 0x8000C79C: lw          $t1, 0x14($t9)
    ctx->r9 = MEM_W(ctx->r25, 0X14);
    // 0x8000C7A0: nop

    // 0x8000C7A4: sw          $t1, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r9;
    // 0x8000C7A8: lw          $t4, 0x70D4($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X70D4);
    // 0x8000C7AC: lw          $t5, -0x90($t3)
    ctx->r13 = MEM_W(ctx->r11, -0X90);
    // 0x8000C7B0: sll         $t6, $t4, 1
    ctx->r14 = S32(ctx->r12 << 1);
    // 0x8000C7B4: addu        $v0, $t5, $t6
    ctx->r2 = ADD32(ctx->r13, ctx->r14);
    // 0x8000C7B8: lbu         $t7, 0x0($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X0);
    // 0x8000C7BC: lbu         $t9, 0x1($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X1);
    // 0x8000C7C0: sll         $t8, $t7, 4
    ctx->r24 = S32(ctx->r15 << 4);
    // 0x8000C7C4: sll         $t0, $t8, 2
    ctx->r8 = S32(ctx->r24 << 2);
    // 0x8000C7C8: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x8000C7CC: subu        $t0, $t0, $t8
    ctx->r8 = SUB32(ctx->r8, ctx->r24);
    // 0x8000C7D0: subu        $t1, $t1, $t9
    ctx->r9 = SUB32(ctx->r9, ctx->r25);
    // 0x8000C7D4: sll         $t1, $t1, 3
    ctx->r9 = S32(ctx->r9 << 3);
    // 0x8000C7D8: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x8000C7DC: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x8000C7E0: lui         $t3, 0x800B
    ctx->r11 = S32(0X800B << 16);
    // 0x8000C7E4: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x8000C7E8: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x8000C7EC: addiu       $t3, $t3, 0x4F30
    ctx->r11 = ADD32(ctx->r11, 0X4F30);
    // 0x8000C7F0: addu        $a3, $t2, $t3
    ctx->r7 = ADD32(ctx->r10, ctx->r11);
L_8000C7F4:
    // 0x8000C7F4: addiu       $v0, $a3, 0x15
    ctx->r2 = ADD32(ctx->r7, 0X15);
    // 0x8000C7F8: lbu         $t4, 0x0($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X0);
    // 0x8000C7FC: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x8000C800: sb          $t4, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r12;
    // 0x8000C804: lbu         $t5, 0x1($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X1);
    // 0x8000C808: addiu       $t9, $t9, 0x3940
    ctx->r25 = ADD32(ctx->r25, 0X3940);
    // 0x8000C80C: sb          $t5, 0x1($s1)
    MEM_B(0X1, ctx->r17) = ctx->r13;
    // 0x8000C810: lbu         $t6, 0x2($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X2);
    // 0x8000C814: addiu       $at, $zero, 0x34
    ctx->r1 = ADD32(0, 0X34);
    // 0x8000C818: sb          $t6, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r14;
    // 0x8000C81C: lbu         $t7, 0x3($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X3);
    // 0x8000C820: lui         $t3, 0x801D
    ctx->r11 = S32(0X801D << 16);
    // 0x8000C824: sb          $t7, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r15;
    // 0x8000C828: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
    // 0x8000C82C: addiu       $t3, $t3, 0x7800
    ctx->r11 = ADD32(ctx->r11, 0X7800);
    // 0x8000C830: subu        $t0, $t8, $t9
    ctx->r8 = SUB32(ctx->r24, ctx->r25);
    // 0x8000C834: div         $zero, $t0, $at
    lo = S32(S64(S32(ctx->r8)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r8)) % S64(S32(ctx->r1)));
    // 0x8000C838: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    // 0x8000C83C: addiu       $a2, $zero, 0x100
    ctx->r6 = ADD32(0, 0X100);
    // 0x8000C840: mflo        $t1
    ctx->r9 = lo;
    // 0x8000C844: sll         $t2, $t1, 8
    ctx->r10 = S32(ctx->r9 << 8);
    // 0x8000C848: addu        $s0, $t2, $t3
    ctx->r16 = ADD32(ctx->r10, ctx->r11);
    // 0x8000C84C: jal         0x80081670
    // 0x8000C850: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80081670(rdram, ctx);
        goto after_1;
    // 0x8000C850: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
    // 0x8000C854: lw          $t4, 0x58($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X58);
    // 0x8000C858: lbu         $a1, 0x0($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X0);
    // 0x8000C85C: lw          $a2, 0x0($t4)
    ctx->r6 = MEM_W(ctx->r12, 0X0);
    // 0x8000C860: jal         0x80014524
    // 0x8000C864: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80014524(rdram, ctx);
        goto after_2;
    // 0x8000C864: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8000C868: lbu         $a1, 0x2($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X2);
    // 0x8000C86C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8000C870: andi        $t5, $a1, 0xF
    ctx->r13 = ctx->r5 & 0XF;
    // 0x8000C874: jal         0x80014620
    // 0x8000C878: or          $a1, $t5, $zero
    ctx->r5 = ctx->r13 | 0;
    func_80014620(rdram, ctx);
        goto after_3;
    // 0x8000C878: or          $a1, $t5, $zero
    ctx->r5 = ctx->r13 | 0;
    after_3:
    // 0x8000C87C: lw          $t6, 0x58($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X58);
    // 0x8000C880: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8000C884: lw          $a1, 0x0($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X0);
    // 0x8000C888: jal         0x800146A4
    // 0x8000C88C: nop

    func_800146A4(rdram, ctx);
        goto after_4;
    // 0x8000C88C: nop

    after_4:
    // 0x8000C890: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8000C894: jal         0x80081980
    // 0x8000C898: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    func_80081980(rdram, ctx);
        goto after_5;
    // 0x8000C898: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    after_5:
    // 0x8000C89C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8000C8A0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8000C8A4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8000C8A8: jr          $ra
    // 0x8000C8AC: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x8000C8AC: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_8000C8B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000C8B0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8000C8B4: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x8000C8B8: lw          $t6, -0x2F98($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X2F98);
    // 0x8000C8BC: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8000C8C0: lui         $t7, 0x3
    ctx->r15 = S32(0X3 << 16);
    // 0x8000C8C4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8000C8C8: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8000C8CC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8000C8D0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8000C8D4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8000C8D8: lui         $s4, 0x8009
    ctx->r20 = S32(0X8009 << 16);
    // 0x8000C8DC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8000C8E0: lw          $s4, 0x6980($s4)
    ctx->r20 = MEM_W(ctx->r20, 0X6980);
    // 0x8000C8E4: lbu         $t7, -0x765E($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X765E);
    // 0x8000C8E8: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x8000C8EC: bne         $t7, $at, L_8000CA38
    if (ctx->r15 != ctx->r1) {
        // 0x8000C8F0: addiu       $s4, $s4, -0x9
        ctx->r20 = ADD32(ctx->r20, -0X9);
            goto L_8000CA38;
    }
    // 0x8000C8F0: addiu       $s4, $s4, -0x9
    ctx->r20 = ADD32(ctx->r20, -0X9);
    // 0x8000C8F4: jal         0x8000AE34
    // 0x8000C8F8: nop

    func_8000AE34(rdram, ctx);
        goto after_0;
    // 0x8000C8F8: nop

    after_0:
    // 0x8000C8FC: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x8000C900: addiu       $a0, $a0, 0x6984
    ctx->r4 = ADD32(ctx->r4, 0X6984);
    // 0x8000C904: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x8000C908: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8000C90C: beq         $v1, $zero, L_8000C930
    if (ctx->r3 == 0) {
        // 0x8000C910: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_8000C930;
    }
    // 0x8000C910: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8000C914: beq         $v1, $at, L_8000C9A4
    if (ctx->r3 == ctx->r1) {
        // 0x8000C918: addiu       $t0, $v1, 0x1
        ctx->r8 = ADD32(ctx->r3, 0X1);
            goto L_8000C9A4;
    }
    // 0x8000C918: addiu       $t0, $v1, 0x1
    ctx->r8 = ADD32(ctx->r3, 0X1);
    // 0x8000C91C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8000C920: beq         $v0, $at, L_8000C9AC
    if (ctx->r2 == ctx->r1) {
        // 0x8000C924: nop
    
            goto L_8000C9AC;
    }
    // 0x8000C924: nop

    // 0x8000C928: b           L_8000CA3C
    // 0x8000C92C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_8000CA3C;
    // 0x8000C92C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_8000C930:
    // 0x8000C930: jal         0x8000AABC
    // 0x8000C934: nop

    func_8000AABC(rdram, ctx);
        goto after_1;
    // 0x8000C934: nop

    after_1:
    // 0x8000C938: lui         $at, 0xC282
    ctx->r1 = S32(0XC282 << 16);
    // 0x8000C93C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8000C940: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8000C944: swc1        $f4, 0x3950($at)
    MEM_W(0X3950, ctx->r1) = ctx->f4.u32l;
    // 0x8000C948: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x8000C94C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8000C950: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8000C954: swc1        $f6, 0x3954($at)
    MEM_W(0X3954, ctx->r1) = ctx->f6.u32l;
    // 0x8000C958: lui         $at, 0xC000
    ctx->r1 = S32(0XC000 << 16);
    // 0x8000C95C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8000C960: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8000C964: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8000C968: swc1        $f8, 0x3958($at)
    MEM_W(0X3958, ctx->r1) = ctx->f8.u32l;
    // 0x8000C96C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8000C970: swc1        $f0, 0x395C($at)
    MEM_W(0X395C, ctx->r1) = ctx->f0.u32l;
    // 0x8000C974: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x8000C978: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8000C97C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8000C980: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x8000C984: swc1        $f10, 0x3960($at)
    MEM_W(0X3960, ctx->r1) = ctx->f10.u32l;
    // 0x8000C988: lw          $t8, 0x6984($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X6984);
    // 0x8000C98C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8000C990: swc1        $f0, 0x3964($at)
    MEM_W(0X3964, ctx->r1) = ctx->f0.u32l;
    // 0x8000C994: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8000C998: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8000C99C: b           L_8000CA38
    // 0x8000C9A0: sw          $t9, 0x6984($at)
    MEM_W(0X6984, ctx->r1) = ctx->r25;
        goto L_8000CA38;
    // 0x8000C9A0: sw          $t9, 0x6984($at)
    MEM_W(0X6984, ctx->r1) = ctx->r25;
L_8000C9A4:
    // 0x8000C9A4: b           L_8000CA38
    // 0x8000C9A8: sw          $t0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r8;
        goto L_8000CA38;
    // 0x8000C9A8: sw          $t0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r8;
L_8000C9AC:
    // 0x8000C9AC: jal         0x8000AE74
    // 0x8000C9B0: nop

    func_8000AE74(rdram, ctx);
        goto after_2;
    // 0x8000C9B0: nop

    after_2:
    // 0x8000C9B4: jal         0x800054F4
    // 0x8000C9B8: nop

    func_800054F4(rdram, ctx);
        goto after_3;
    // 0x8000C9B8: nop

    after_3:
    // 0x8000C9BC: lui         $a1, 0x8001
    ctx->r5 = S32(0X8001 << 16);
    // 0x8000C9C0: addiu       $a1, $a1, -0x34B8
    ctx->r5 = ADD32(ctx->r5, -0X34B8);
    // 0x8000C9C4: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    // 0x8000C9C8: jal         0x8000B00C
    // 0x8000C9CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8000B00C(rdram, ctx);
        goto after_4;
    // 0x8000C9CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x8000C9D0: sll         $s0, $s4, 2
    ctx->r16 = S32(ctx->r20 << 2);
    // 0x8000C9D4: subu        $s0, $s0, $s4
    ctx->r16 = SUB32(ctx->r16, ctx->r20);
    // 0x8000C9D8: sll         $t1, $s0, 2
    ctx->r9 = S32(ctx->r16 << 2);
    // 0x8000C9DC: subu        $t1, $t1, $s0
    ctx->r9 = SUB32(ctx->r9, ctx->r16);
    // 0x8000C9E0: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x8000C9E4: addiu       $t2, $t2, 0x7F20
    ctx->r10 = ADD32(ctx->r10, 0X7F20);
    // 0x8000C9E8: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8000C9EC: lui         $s3, 0x8001
    ctx->r19 = S32(0X8001 << 16);
    // 0x8000C9F0: addiu       $s3, $s3, -0x35A8
    ctx->r19 = ADD32(ctx->r19, -0X35A8);
    // 0x8000C9F4: addu        $s2, $t1, $t2
    ctx->r18 = ADD32(ctx->r9, ctx->r10);
    // 0x8000C9F8: addiu       $s4, $zero, 0x3
    ctx->r20 = ADD32(0, 0X3);
    // 0x8000C9FC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_8000CA00:
    // 0x8000CA00: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x8000CA04: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x8000CA08: jal         0x8000B00C
    // 0x8000CA0C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_8000B00C(rdram, ctx);
        goto after_5;
    // 0x8000CA0C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_5:
    // 0x8000CA10: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8000CA14: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8000CA18: bne         $s1, $s4, L_8000CA00
    if (ctx->r17 != ctx->r20) {
        // 0x8000CA1C: addiu       $s2, $s2, 0x30
        ctx->r18 = ADD32(ctx->r18, 0X30);
            goto L_8000CA00;
    }
    // 0x8000CA1C: addiu       $s2, $s2, 0x30
    ctx->r18 = ADD32(ctx->r18, 0X30);
    // 0x8000CA20: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8000CA24: addiu       $v0, $v0, 0x6984
    ctx->r2 = ADD32(ctx->r2, 0X6984);
    // 0x8000CA28: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x8000CA2C: nop

    // 0x8000CA30: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8000CA34: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
L_8000CA38:
    // 0x8000CA38: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_8000CA3C:
    // 0x8000CA3C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8000CA40: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8000CA44: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8000CA48: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8000CA4C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8000CA50: jr          $ra
    // 0x8000CA54: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8000CA54: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8000CA58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000CA58: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8000CA5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000CA60: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8000CA64: lw          $a0, 0x4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4);
    // 0x8000CA68: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8000CA6C: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x8000CA70: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8000CA74: sh          $t6, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r14;
    // 0x8000CA78: swc1        $f4, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f4.u32l;
    // 0x8000CA7C: lwc1        $f6, 0x3330($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3330);
    // 0x8000CA80: addiu       $v1, $zero, 0x30
    ctx->r3 = ADD32(0, 0X30);
    // 0x8000CA84: swc1        $f6, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f6.u32l;
    // 0x8000CA88: lhu         $t7, 0x2($a3)
    ctx->r15 = MEM_HU(ctx->r7, 0X2);
    // 0x8000CA8C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8000CA90: multu       $t7, $v1
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8000CA94: addiu       $v0, $v0, 0x7F20
    ctx->r2 = ADD32(ctx->r2, 0X7F20);
    // 0x8000CA98: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8000CA9C: mflo        $t8
    ctx->r24 = lo;
    // 0x8000CAA0: addu        $t9, $v0, $t8
    ctx->r25 = ADD32(ctx->r2, ctx->r24);
    // 0x8000CAA4: lwc1        $f8, 0x4($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X4);
    // 0x8000CAA8: nop

    // 0x8000CAAC: swc1        $f8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f8.u32l;
    // 0x8000CAB0: lhu         $t0, 0x2($a3)
    ctx->r8 = MEM_HU(ctx->r7, 0X2);
    // 0x8000CAB4: nop

    // 0x8000CAB8: multu       $t0, $v1
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8000CABC: mflo        $t1
    ctx->r9 = lo;
    // 0x8000CAC0: addu        $t2, $v0, $t1
    ctx->r10 = ADD32(ctx->r2, ctx->r9);
    // 0x8000CAC4: lwc1        $f10, 0xC($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0XC);
    // 0x8000CAC8: nop

    // 0x8000CACC: swc1        $f10, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f10.u32l;
    // 0x8000CAD0: lhu         $t3, 0x2($a3)
    ctx->r11 = MEM_HU(ctx->r7, 0X2);
    // 0x8000CAD4: nop

    // 0x8000CAD8: multu       $t3, $v1
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8000CADC: mflo        $t4
    ctx->r12 = lo;
    // 0x8000CAE0: addu        $t5, $v0, $t4
    ctx->r13 = ADD32(ctx->r2, ctx->r12);
    // 0x8000CAE4: lwc1        $f16, 0x14($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X14);
    // 0x8000CAE8: nop

    // 0x8000CAEC: swc1        $f16, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f16.u32l;
    // 0x8000CAF0: lhu         $t6, 0x2($a3)
    ctx->r14 = MEM_HU(ctx->r7, 0X2);
    // 0x8000CAF4: nop

    // 0x8000CAF8: multu       $t6, $v1
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8000CAFC: mflo        $t7
    ctx->r15 = lo;
    // 0x8000CB00: addu        $t8, $v0, $t7
    ctx->r24 = ADD32(ctx->r2, ctx->r15);
    // 0x8000CB04: lhu         $a1, 0x2C($t8)
    ctx->r5 = MEM_HU(ctx->r24, 0X2C);
    // 0x8000CB08: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    // 0x8000CB0C: jal         0x8000ABAC
    // 0x8000CB10: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_8000ABAC(rdram, ctx);
        goto after_0;
    // 0x8000CB10: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x8000CB14: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8000CB18: jal         0x8000B420
    // 0x8000CB1C: nop

    func_8000B420(rdram, ctx);
        goto after_1;
    // 0x8000CB1C: nop

    after_1:
    // 0x8000CB20: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x8000CB24: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x8000CB28: addiu       $t9, $t9, -0x34C0
    ctx->r25 = ADD32(ctx->r25, -0X34C0);
    // 0x8000CB2C: sw          $t9, 0x28($a3)
    MEM_W(0X28, ctx->r7) = ctx->r25;
    // 0x8000CB30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000CB34: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8000CB38: jr          $ra
    // 0x8000CB3C: nop

    return;
    // 0x8000CB3C: nop

;}
RECOMP_FUNC void func_8000CB40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000CB40: jr          $ra
    // 0x8000CB44: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x8000CB44: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void func_8000CB48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000CB48: lui         $t6, 0x8001
    ctx->r14 = S32(0X8001 << 16);
    // 0x8000CB4C: lw          $t8, 0x4($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X4);
    // 0x8000CB50: addiu       $t6, $t6, -0x3498
    ctx->r14 = ADD32(ctx->r14, -0X3498);
    // 0x8000CB54: addiu       $t7, $zero, 0x96
    ctx->r15 = ADD32(0, 0X96);
    // 0x8000CB58: sw          $t6, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r14;
    // 0x8000CB5C: sh          $t7, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r15;
    // 0x8000CB60: jr          $ra
    // 0x8000CB64: sh          $zero, 0x0($t8)
    MEM_H(0X0, ctx->r24) = 0;
    return;
    // 0x8000CB64: sh          $zero, 0x0($t8)
    MEM_H(0X0, ctx->r24) = 0;
;}
RECOMP_FUNC void func_8000CB68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000CB68: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8000CB6C: addiu       $v0, $v0, 0x3958
    ctx->r2 = ADD32(ctx->r2, 0X3958);
    // 0x8000CB70: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8000CB74: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8000CB78: lwc1        $f9, 0x3338($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X3338);
    // 0x8000CB7C: lwc1        $f8, 0x333C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X333C);
    // 0x8000CB80: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8000CB84: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x8000CB88: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x8000CB8C: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x8000CB90: addiu       $v1, $v1, 0x3950
    ctx->r3 = ADD32(ctx->r3, 0X3950);
    // 0x8000CB94: swc1        $f16, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f16.u32l;
    // 0x8000CB98: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8000CB9C: lwc1        $f18, 0x0($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X0);
    // 0x8000CBA0: lwc1        $f7, 0x3340($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X3340);
    // 0x8000CBA4: lwc1        $f6, 0x3344($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3344);
    // 0x8000CBA8: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x8000CBAC: sub.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d - ctx->f6.d;
    // 0x8000CBB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000CBB4: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x8000CBB8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000CBBC: swc1        $f10, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f10.u32l;
    // 0x8000CBC0: lhu         $t6, 0x30($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X30);
    // 0x8000CBC4: nop

    // 0x8000CBC8: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8000CBCC: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x8000CBD0: bgtz        $t8, L_8000CC08
    if (SIGNED(ctx->r24) > 0) {
        // 0x8000CBD4: sh          $t7, 0x30($a0)
        MEM_H(0X30, ctx->r4) = ctx->r15;
            goto L_8000CC08;
    }
    // 0x8000CBD4: sh          $t7, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r15;
    // 0x8000CBD8: jal         0x8000AF1C
    // 0x8000CBDC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8000AF1C(rdram, ctx);
        goto after_0;
    // 0x8000CBDC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8000CBE0: jal         0x802B4220
    // 0x8000CBE4: nop

    LOOKUP_FUNC(0x802B4220)(rdram, ctx);
        goto after_1;
    // 0x8000CBE4: nop

    after_1:
    // 0x8000CBE8: jal         0x80021A14
    // 0x8000CBEC: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    func_80021A14(rdram, ctx);
        goto after_2;
    // 0x8000CBEC: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    after_2:
    // 0x8000CBF0: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x8000CBF4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x8000CBF8: addiu       $t9, $t9, -0x33E8
    ctx->r25 = ADD32(ctx->r25, -0X33E8);
    // 0x8000CBFC: addiu       $t0, $zero, 0x1E
    ctx->r8 = ADD32(0, 0X1E);
    // 0x8000CC00: sw          $t9, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->r25;
    // 0x8000CC04: sh          $t0, 0x30($a1)
    MEM_H(0X30, ctx->r5) = ctx->r8;
L_8000CC08:
    // 0x8000CC08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000CC0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8000CC10: jr          $ra
    // 0x8000CC14: nop

    return;
    // 0x8000CC14: nop

;}
RECOMP_FUNC void func_8000CC18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000CC18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000CC1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000CC20: lhu         $t6, 0x30($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X30);
    // 0x8000CC24: nop

    // 0x8000CC28: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8000CC2C: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x8000CC30: bgtz        $t8, L_8000CC50
    if (SIGNED(ctx->r24) > 0) {
        // 0x8000CC34: sh          $t7, 0x30($a0)
        MEM_H(0X30, ctx->r4) = ctx->r15;
            goto L_8000CC50;
    }
    // 0x8000CC34: sh          $t7, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r15;
    // 0x8000CC38: jal         0x8000AABC
    // 0x8000CC3C: nop

    func_8000AABC(rdram, ctx);
        goto after_0;
    // 0x8000CC3C: nop

    after_0:
    // 0x8000CC40: jal         0x8000AB98
    // 0x8000CC44: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8000AB98(rdram, ctx);
        goto after_1;
    // 0x8000CC44: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x8000CC48: jal         0x8001B80C
    // 0x8000CC4C: nop

    func_8001B80C(rdram, ctx);
        goto after_2;
    // 0x8000CC4C: nop

    after_2:
L_8000CC50:
    // 0x8000CC50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000CC54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8000CC58: jr          $ra
    // 0x8000CC5C: nop

    return;
    // 0x8000CC5C: nop

;}
RECOMP_FUNC void func_8000CC60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000CC60: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8000CC64: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x8000CC68: lw          $t6, -0x2F98($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X2F98);
    // 0x8000CC6C: lui         $t7, 0x3
    ctx->r15 = S32(0X3 << 16);
    // 0x8000CC70: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8000CC74: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8000CC78: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8000CC7C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8000CC80: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8000CC84: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8000CC88: lbu         $t7, -0x765E($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X765E);
    // 0x8000CC8C: addiu       $s3, $zero, 0xE
    ctx->r19 = ADD32(0, 0XE);
    // 0x8000CC90: bne         $s3, $t7, L_8000CDE8
    if (ctx->r19 != ctx->r15) {
        // 0x8000CC94: lui         $v0, 0x8009
        ctx->r2 = S32(0X8009 << 16);
            goto L_8000CDE8;
    }
    // 0x8000CC94: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8000CC98: lw          $v0, 0x6984($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6984);
    // 0x8000CC9C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8000CCA0: bne         $v0, $at, L_8000CCC8
    if (ctx->r2 != ctx->r1) {
        // 0x8000CCA4: sltiu       $at, $v0, 0x6
        ctx->r1 = ctx->r2 < 0X6 ? 1 : 0;
            goto L_8000CCC8;
    }
    // 0x8000CCA4: sltiu       $at, $v0, 0x6
    ctx->r1 = ctx->r2 < 0X6 ? 1 : 0;
    // 0x8000CCA8: jal         0x8000AB98
    // 0x8000CCAC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8000AB98(rdram, ctx);
        goto after_0;
    // 0x8000CCAC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x8000CCB0: jal         0x8001B80C
    // 0x8000CCB4: nop

    func_8001B80C(rdram, ctx);
        goto after_1;
    // 0x8000CCB4: nop

    after_1:
    // 0x8000CCB8: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8000CCBC: lw          $v0, 0x6984($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6984);
    // 0x8000CCC0: nop

    // 0x8000CCC4: sltiu       $at, $v0, 0x6
    ctx->r1 = ctx->r2 < 0X6 ? 1 : 0;
L_8000CCC8:
    // 0x8000CCC8: beq         $at, $zero, L_8000CDE8
    if (ctx->r1 == 0) {
        // 0x8000CCCC: sll         $t8, $v0, 2
        ctx->r24 = S32(ctx->r2 << 2);
            goto L_8000CDE8;
    }
    // 0x8000CCCC: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x8000CCD0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8000CCD4: addu        $at, $at, $t8
    gpr jr_addend_8000CCE0 = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8000CCD8: lw          $t8, 0x3348($at)
    ctx->r24 = ADD32(ctx->r1, 0X3348);
    // 0x8000CCDC: nop

    // 0x8000CCE0: jr          $t8
    // 0x8000CCE4: nop

    switch (jr_addend_8000CCE0 >> 2) {
        case 0: goto L_8000CCE8; break;
        case 1: goto L_8000CD3C; break;
        case 2: goto L_8000CD3C; break;
        case 3: goto L_8000CD4C; break;
        case 4: goto L_8000CDC0; break;
        case 5: goto L_8000CDD0; break;
        default: switch_error(__func__, 0x8000CCE0, 0x800D3348);
    }
    // 0x8000CCE4: nop

L_8000CCE8:
    // 0x8000CCE8: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x8000CCEC: jal         0x80025A10
    // 0x8000CCF0: addiu       $a0, $a0, 0x3CA0
    ctx->r4 = ADD32(ctx->r4, 0X3CA0);
    func_80025A10(rdram, ctx);
        goto after_2;
    // 0x8000CCF0: addiu       $a0, $a0, 0x3CA0
    ctx->r4 = ADD32(ctx->r4, 0X3CA0);
    after_2:
    // 0x8000CCF4: lui         $t9, 0x8036
    ctx->r25 = S32(0X8036 << 16);
    // 0x8000CCF8: addiu       $t9, $t9, -0x2A00
    ctx->r25 = ADD32(ctx->r25, -0X2A00);
    // 0x8000CCFC: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8000CD00: jal         0x8000AABC
    // 0x8000CD04: sw          $t9, 0x36F0($at)
    MEM_W(0X36F0, ctx->r1) = ctx->r25;
    func_8000AABC(rdram, ctx);
        goto after_3;
    // 0x8000CD04: sw          $t9, 0x36F0($at)
    MEM_W(0X36F0, ctx->r1) = ctx->r25;
    after_3:
    // 0x8000CD08: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x8000CD0C: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x8000CD10: lui         $a2, 0x8009
    ctx->r6 = S32(0X8009 << 16);
    // 0x8000CD14: addiu       $a2, $a2, 0x7800
    ctx->r6 = ADD32(ctx->r6, 0X7800);
    // 0x8000CD18: jal         0x8000B23C
    // 0x8000CD1C: addiu       $a1, $a1, 0x70E0
    ctx->r5 = ADD32(ctx->r5, 0X70E0);
    func_8000B23C(rdram, ctx);
        goto after_4;
    // 0x8000CD1C: addiu       $a1, $a1, 0x70E0
    ctx->r5 = ADD32(ctx->r5, 0X70E0);
    after_4:
    // 0x8000CD20: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8000CD24: addiu       $v0, $v0, 0x6984
    ctx->r2 = ADD32(ctx->r2, 0X6984);
    // 0x8000CD28: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x8000CD2C: nop

    // 0x8000CD30: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x8000CD34: b           L_8000CDE8
    // 0x8000CD38: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
        goto L_8000CDE8;
    // 0x8000CD38: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
L_8000CD3C:
    // 0x8000CD3C: addiu       $t2, $v0, 0x1
    ctx->r10 = ADD32(ctx->r2, 0X1);
    // 0x8000CD40: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8000CD44: b           L_8000CDE8
    // 0x8000CD48: sw          $t2, 0x6984($at)
    MEM_W(0X6984, ctx->r1) = ctx->r10;
        goto L_8000CDE8;
    // 0x8000CD48: sw          $t2, 0x6984($at)
    MEM_W(0X6984, ctx->r1) = ctx->r10;
L_8000CD4C:
    // 0x8000CD4C: jal         0x8000AE34
    // 0x8000CD50: nop

    func_8000AE34(rdram, ctx);
        goto after_5;
    // 0x8000CD50: nop

    after_5:
    // 0x8000CD54: jal         0x8000AE74
    // 0x8000CD58: nop

    func_8000AE74(rdram, ctx);
        goto after_6;
    // 0x8000CD58: nop

    after_6:
    // 0x8000CD5C: jal         0x800054F4
    // 0x8000CD60: nop

    func_800054F4(rdram, ctx);
        goto after_7;
    // 0x8000CD60: nop

    after_7:
    // 0x8000CD64: lui         $a1, 0x8001
    ctx->r5 = S32(0X8001 << 16);
    // 0x8000CD68: addiu       $a1, $a1, -0x2EB4
    ctx->r5 = ADD32(ctx->r5, -0X2EB4);
    // 0x8000CD6C: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    // 0x8000CD70: jal         0x8000B00C
    // 0x8000CD74: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_8000B00C(rdram, ctx);
        goto after_8;
    // 0x8000CD74: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_8:
    // 0x8000CD78: lui         $s1, 0x800A
    ctx->r17 = S32(0X800A << 16);
    // 0x8000CD7C: lui         $s2, 0x8001
    ctx->r18 = S32(0X8001 << 16);
    // 0x8000CD80: addiu       $s2, $s2, -0x31FC
    ctx->r18 = ADD32(ctx->r18, -0X31FC);
    // 0x8000CD84: addiu       $s1, $s1, -0x7F30
    ctx->r17 = ADD32(ctx->r17, -0X7F30);
    // 0x8000CD88: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_8000CD8C:
    // 0x8000CD8C: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x8000CD90: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x8000CD94: jal         0x8000B00C
    // 0x8000CD98: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_8000B00C(rdram, ctx);
        goto after_9;
    // 0x8000CD98: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_9:
    // 0x8000CD9C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8000CDA0: bne         $s0, $s3, L_8000CD8C
    if (ctx->r16 != ctx->r19) {
        // 0x8000CDA4: addiu       $s1, $s1, 0x30
        ctx->r17 = ADD32(ctx->r17, 0X30);
            goto L_8000CD8C;
    }
    // 0x8000CDA4: addiu       $s1, $s1, 0x30
    ctx->r17 = ADD32(ctx->r17, 0X30);
    // 0x8000CDA8: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x8000CDAC: lw          $t3, 0x6984($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X6984);
    // 0x8000CDB0: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8000CDB4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8000CDB8: b           L_8000CDE8
    // 0x8000CDBC: sw          $t4, 0x6984($at)
    MEM_W(0X6984, ctx->r1) = ctx->r12;
        goto L_8000CDE8;
    // 0x8000CDBC: sw          $t4, 0x6984($at)
    MEM_W(0X6984, ctx->r1) = ctx->r12;
L_8000CDC0:
    // 0x8000CDC0: jal         0x8000AE34
    // 0x8000CDC4: nop

    func_8000AE34(rdram, ctx);
        goto after_10;
    // 0x8000CDC4: nop

    after_10:
    // 0x8000CDC8: b           L_8000CDEC
    // 0x8000CDCC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8000CDEC;
    // 0x8000CDCC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8000CDD0:
    // 0x8000CDD0: jal         0x8000AABC
    // 0x8000CDD4: nop

    func_8000AABC(rdram, ctx);
        goto after_11;
    // 0x8000CDD4: nop

    after_11:
    // 0x8000CDD8: jal         0x8000AB98
    // 0x8000CDDC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8000AB98(rdram, ctx);
        goto after_12;
    // 0x8000CDDC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_12:
    // 0x8000CDE0: jal         0x8001B80C
    // 0x8000CDE4: nop

    func_8001B80C(rdram, ctx);
        goto after_13;
    // 0x8000CDE4: nop

    after_13:
L_8000CDE8:
    // 0x8000CDE8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8000CDEC:
    // 0x8000CDEC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8000CDF0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8000CDF4: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8000CDF8: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8000CDFC: jr          $ra
    // 0x8000CE00: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8000CE00: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8000CE04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000CE04: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8000CE08: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8000CE0C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8000CE10: lw          $s0, 0x4($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X4);
    // 0x8000CE14: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x8000CE18: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8000CE1C: sh          $t6, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r14;
    // 0x8000CE20: lwc1        $f4, 0x3360($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X3360);
    // 0x8000CE24: addiu       $t0, $zero, 0x30
    ctx->r8 = ADD32(0, 0X30);
    // 0x8000CE28: swc1        $f4, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f4.u32l;
    // 0x8000CE2C: lhu         $t7, 0x2($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X2);
    // 0x8000CE30: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x8000CE34: multu       $t7, $t0
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8000CE38: addiu       $v1, $v1, -0x7F30
    ctx->r3 = ADD32(ctx->r3, -0X7F30);
    // 0x8000CE3C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8000CE40: mflo        $t8
    ctx->r24 = lo;
    // 0x8000CE44: addu        $t9, $v1, $t8
    ctx->r25 = ADD32(ctx->r3, ctx->r24);
    // 0x8000CE48: lwc1        $f6, 0x4($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X4);
    // 0x8000CE4C: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x8000CE50: swc1        $f6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f6.u32l;
    // 0x8000CE54: lhu         $t1, 0x2($a0)
    ctx->r9 = MEM_HU(ctx->r4, 0X2);
    // 0x8000CE58: nop

    // 0x8000CE5C: multu       $t1, $t0
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8000CE60: mflo        $t2
    ctx->r10 = lo;
    // 0x8000CE64: addu        $t3, $v1, $t2
    ctx->r11 = ADD32(ctx->r3, ctx->r10);
    // 0x8000CE68: lwc1        $f8, 0xC($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0XC);
    // 0x8000CE6C: nop

    // 0x8000CE70: swc1        $f8, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f8.u32l;
    // 0x8000CE74: lhu         $t4, 0x2($a0)
    ctx->r12 = MEM_HU(ctx->r4, 0X2);
    // 0x8000CE78: nop

    // 0x8000CE7C: multu       $t4, $t0
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8000CE80: mflo        $t5
    ctx->r13 = lo;
    // 0x8000CE84: addu        $t6, $v1, $t5
    ctx->r14 = ADD32(ctx->r3, ctx->r13);
    // 0x8000CE88: lwc1        $f10, 0x14($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X14);
    // 0x8000CE8C: nop

    // 0x8000CE90: swc1        $f10, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f10.u32l;
    // 0x8000CE94: lhu         $v0, 0x2($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X2);
    // 0x8000CE98: nop

    // 0x8000CE9C: beq         $v0, $zero, L_8000CED0
    if (ctx->r2 == 0) {
        // 0x8000CEA0: nop
    
            goto L_8000CED0;
    }
    // 0x8000CEA0: nop

    // 0x8000CEA4: multu       $v0, $t0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8000CEA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8000CEAC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8000CEB0: mflo        $t7
    ctx->r15 = lo;
    // 0x8000CEB4: addu        $t8, $v1, $t7
    ctx->r24 = ADD32(ctx->r3, ctx->r15);
    // 0x8000CEB8: lhu         $a1, 0x2C($t8)
    ctx->r5 = MEM_HU(ctx->r24, 0X2C);
    // 0x8000CEBC: jal         0x8000ABAC
    // 0x8000CEC0: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    func_8000ABAC(rdram, ctx);
        goto after_0;
    // 0x8000CEC0: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    after_0:
    // 0x8000CEC4: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x8000CEC8: b           L_8000CF1C
    // 0x8000CECC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_8000CF1C;
    // 0x8000CECC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8000CED0:
    // 0x8000CED0: lw          $t9, 0x6980($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X6980);
    // 0x8000CED4: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x8000CED8: bne         $t9, $at, L_8000CF00
    if (ctx->r25 != ctx->r1) {
        // 0x8000CEDC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8000CF00;
    }
    // 0x8000CEDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8000CEE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8000CEE4: addiu       $a1, $zero, 0x25F
    ctx->r5 = ADD32(0, 0X25F);
    // 0x8000CEE8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8000CEEC: jal         0x8000ABAC
    // 0x8000CEF0: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    func_8000ABAC(rdram, ctx);
        goto after_1;
    // 0x8000CEF0: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    after_1:
    // 0x8000CEF4: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x8000CEF8: b           L_8000CF1C
    // 0x8000CEFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_8000CF1C;
    // 0x8000CEFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8000CF00:
    // 0x8000CF00: addiu       $a1, $zero, 0x260
    ctx->r5 = ADD32(0, 0X260);
    // 0x8000CF04: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8000CF08: jal         0x8000ABAC
    // 0x8000CF0C: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    func_8000ABAC(rdram, ctx);
        goto after_2;
    // 0x8000CF0C: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    after_2:
    // 0x8000CF10: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x8000CF14: nop

    // 0x8000CF18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8000CF1C:
    // 0x8000CF1C: jal         0x8000B420
    // 0x8000CF20: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    func_8000B420(rdram, ctx);
        goto after_3;
    // 0x8000CF20: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    after_3:
    // 0x8000CF24: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x8000CF28: lui         $t1, 0x8001
    ctx->r9 = S32(0X8001 << 16);
    // 0x8000CF2C: addiu       $t1, $t1, -0x30BC
    ctx->r9 = ADD32(ctx->r9, -0X30BC);
    // 0x8000CF30: sw          $t1, 0x28($a3)
    MEM_W(0X28, ctx->r7) = ctx->r9;
    // 0x8000CF34: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8000CF38: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8000CF3C: jr          $ra
    // 0x8000CF40: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8000CF40: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8000CF44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000CF44: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000CF48: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000CF4C: lhu         $v0, 0x2($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X2);
    // 0x8000CF50: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8000CF54: beq         $v0, $zero, L_8000CF74
    if (ctx->r2 == 0) {
        // 0x8000CF58: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_8000CF74;
    }
    // 0x8000CF58: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8000CF5C: beq         $v0, $at, L_8000CFD8
    if (ctx->r2 == ctx->r1) {
        // 0x8000CF60: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8000CFD8;
    }
    // 0x8000CF60: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8000CF64: beq         $v0, $at, L_8000CFD8
    if (ctx->r2 == ctx->r1) {
        // 0x8000CF68: nop
    
            goto L_8000CFD8;
    }
    // 0x8000CF68: nop

    // 0x8000CF6C: b           L_8000D000
    // 0x8000CF70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8000D000;
    // 0x8000CF70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8000CF74:
    // 0x8000CF74: lw          $a0, 0x4($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X4);
    // 0x8000CF78: jal         0x8000D2F4
    // 0x8000CF7C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_8000D2F4(rdram, ctx);
        goto after_0;
    // 0x8000CF7C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x8000CF80: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x8000CF84: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8000CF88: lw          $v0, 0x4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4);
    // 0x8000CF8C: lwc1        $f9, 0x3368($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X3368);
    // 0x8000CF90: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8000CF94: lwc1        $f8, 0x336C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X336C);
    // 0x8000CF98: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8000CF9C: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x8000CFA0: lui         $at, 0x4391
    ctx->r1 = S32(0X4391 << 16);
    // 0x8000CFA4: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x8000CFA8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8000CFAC: swc1        $f16, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f16.u32l;
    // 0x8000CFB0: lw          $t6, 0x4($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X4);
    // 0x8000CFB4: lui         $t7, 0x8001
    ctx->r15 = S32(0X8001 << 16);
    // 0x8000CFB8: lwc1        $f18, 0x4($t6)
    ctx->f18.u32l = MEM_W(ctx->r14, 0X4);
    // 0x8000CFBC: addiu       $t7, $t7, -0x2FF4
    ctx->r15 = ADD32(ctx->r15, -0X2FF4);
    // 0x8000CFC0: c.le.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl <= ctx->f18.fl;
    // 0x8000CFC4: nop

    // 0x8000CFC8: bc1f        L_8000D000
    if (!c1cs) {
        // 0x8000CFCC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8000D000;
    }
    // 0x8000CFCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000CFD0: b           L_8000CFFC
    // 0x8000CFD4: sw          $t7, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->r15;
        goto L_8000CFFC;
    // 0x8000CFD4: sw          $t7, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->r15;
L_8000CFD8:
    // 0x8000CFD8: lw          $v0, 0x4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4);
    // 0x8000CFDC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8000CFE0: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8000CFE4: lwc1        $f11, 0x3370($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X3370);
    // 0x8000CFE8: lwc1        $f10, 0x3374($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X3374);
    // 0x8000CFEC: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x8000CFF0: add.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d + ctx->f10.d;
    // 0x8000CFF4: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x8000CFF8: swc1        $f18, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f18.u32l;
L_8000CFFC:
    // 0x8000CFFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8000D000:
    // 0x8000D000: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8000D004: jr          $ra
    // 0x8000D008: nop

    return;
    // 0x8000D008: nop

;}
RECOMP_FUNC void func_8000D00C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000D00C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8000D010: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8000D014: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8000D018: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8000D01C: lw          $a0, 0x4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4);
    // 0x8000D020: jal         0x8000D2F4
    // 0x8000D024: nop

    func_8000D2F4(rdram, ctx);
        goto after_0;
    // 0x8000D024: nop

    after_0:
    // 0x8000D028: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x8000D02C: lw          $t6, 0x6980($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X6980);
    // 0x8000D030: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x8000D034: bne         $t6, $at, L_8000D054
    if (ctx->r14 != ctx->r1) {
        // 0x8000D038: addiu       $a1, $zero, 0x264
        ctx->r5 = ADD32(0, 0X264);
            goto L_8000D054;
    }
    // 0x8000D038: addiu       $a1, $zero, 0x264
    ctx->r5 = ADD32(0, 0X264);
    // 0x8000D03C: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x8000D040: addiu       $a1, $zero, 0x263
    ctx->r5 = ADD32(0, 0X263);
    // 0x8000D044: jal         0x8000ABAC
    // 0x8000D048: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8000ABAC(rdram, ctx);
        goto after_1;
    // 0x8000D048: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8000D04C: b           L_8000D060
    // 0x8000D050: nop

        goto L_8000D060;
    // 0x8000D050: nop

L_8000D054:
    // 0x8000D054: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x8000D058: jal         0x8000ABAC
    // 0x8000D05C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8000ABAC(rdram, ctx);
        goto after_2;
    // 0x8000D05C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
L_8000D060:
    // 0x8000D060: lui         $t7, 0x8001
    ctx->r15 = S32(0X8001 << 16);
    // 0x8000D064: addiu       $t7, $t7, -0x2F7C
    ctx->r15 = ADD32(ctx->r15, -0X2F7C);
    // 0x8000D068: addiu       $t8, $zero, 0xA0
    ctx->r24 = ADD32(0, 0XA0);
    // 0x8000D06C: sw          $t7, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r15;
    // 0x8000D070: sh          $t8, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r24;
    // 0x8000D074: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8000D078: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8000D07C: jr          $ra
    // 0x8000D080: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8000D080: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8000D084(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000D084: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8000D088: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8000D08C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8000D090: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8000D094: lw          $a0, 0x4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4);
    // 0x8000D098: jal         0x8000D2F4
    // 0x8000D09C: nop

    func_8000D2F4(rdram, ctx);
        goto after_0;
    // 0x8000D09C: nop

    after_0:
    // 0x8000D0A0: lw          $t6, 0x4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X4);
    // 0x8000D0A4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8000D0A8: lwc1        $f4, 0x4($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X4);
    // 0x8000D0AC: nop

    // 0x8000D0B0: swc1        $f4, 0x395C($at)
    MEM_W(0X395C, ctx->r1) = ctx->f4.u32l;
    // 0x8000D0B4: lw          $t7, 0x4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X4);
    // 0x8000D0B8: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x8000D0BC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8000D0C0: lwc1        $f6, 0x8($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X8);
    // 0x8000D0C4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8000D0C8: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8000D0CC: swc1        $f10, 0x3960($at)
    MEM_W(0X3960, ctx->r1) = ctx->f10.u32l;
    // 0x8000D0D0: lw          $t8, 0x4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X4);
    // 0x8000D0D4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8000D0D8: lwc1        $f16, 0xC($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0XC);
    // 0x8000D0DC: nop

    // 0x8000D0E0: swc1        $f16, 0x3964($at)
    MEM_W(0X3964, ctx->r1) = ctx->f16.u32l;
    // 0x8000D0E4: lhu         $t9, 0x30($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X30);
    // 0x8000D0E8: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x8000D0EC: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x8000D0F0: andi        $v0, $t0, 0xFFFF
    ctx->r2 = ctx->r8 & 0XFFFF;
    // 0x8000D0F4: bne         $v0, $at, L_8000D11C
    if (ctx->r2 != ctx->r1) {
        // 0x8000D0F8: sh          $t0, 0x30($s0)
        MEM_H(0X30, ctx->r16) = ctx->r8;
            goto L_8000D11C;
    }
    // 0x8000D0F8: sh          $t0, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r8;
    // 0x8000D0FC: jal         0x8000AF1C
    // 0x8000D100: nop

    func_8000AF1C(rdram, ctx);
        goto after_1;
    // 0x8000D100: nop

    after_1:
    // 0x8000D104: jal         0x80021A14
    // 0x8000D108: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    func_80021A14(rdram, ctx);
        goto after_2;
    // 0x8000D108: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    after_2:
    // 0x8000D10C: jal         0x80015BC0
    // 0x8000D110: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_80015BC0(rdram, ctx);
        goto after_3;
    // 0x8000D110: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_3:
    // 0x8000D114: lhu         $v0, 0x30($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X30);
    // 0x8000D118: nop

L_8000D11C:
    // 0x8000D11C: bgtz        $v0, L_8000D13C
    if (SIGNED(ctx->r2) > 0) {
        // 0x8000D120: lui         $v0, 0x8009
        ctx->r2 = S32(0X8009 << 16);
            goto L_8000D13C;
    }
    // 0x8000D120: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8000D124: addiu       $v0, $v0, 0x6984
    ctx->r2 = ADD32(ctx->r2, 0X6984);
    // 0x8000D128: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x8000D12C: nop

    // 0x8000D130: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x8000D134: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    // 0x8000D138: sw          $zero, 0x28($s0)
    MEM_W(0X28, ctx->r16) = 0;
L_8000D13C:
    // 0x8000D13C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8000D140: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8000D144: jr          $ra
    // 0x8000D148: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8000D148: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8000D14C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000D14C: lui         $t6, 0x8001
    ctx->r14 = S32(0X8001 << 16);
    // 0x8000D150: lw          $t7, 0x4($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X4);
    // 0x8000D154: addiu       $t6, $t6, -0x2E98
    ctx->r14 = ADD32(ctx->r14, -0X2E98);
    // 0x8000D158: sw          $t6, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r14;
    // 0x8000D15C: sh          $zero, 0x30($a0)
    MEM_H(0X30, ctx->r4) = 0;
    // 0x8000D160: jr          $ra
    // 0x8000D164: sh          $zero, 0x0($t7)
    MEM_H(0X0, ctx->r15) = 0;
    return;
    // 0x8000D164: sh          $zero, 0x0($t7)
    MEM_H(0X0, ctx->r15) = 0;
;}
RECOMP_FUNC void func_8000D168(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000D168: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000D16C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000D170: lhu         $t6, 0x30($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X30);
    // 0x8000D174: lhu         $t7, 0x2($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X2);
    // 0x8000D178: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8000D17C: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8000D180: andi        $t9, $t8, 0xFFFF
    ctx->r25 = ctx->r24 & 0XFFFF;
    // 0x8000D184: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x8000D188: sh          $t8, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r24;
    // 0x8000D18C: bgez        $t9, L_8000D1A4
    if (SIGNED(ctx->r25) >= 0) {
        // 0x8000D190: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_8000D1A4;
    }
    // 0x8000D190: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8000D194: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8000D198: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8000D19C: nop

    // 0x8000D1A0: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_8000D1A4:
    // 0x8000D1A4: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x8000D1A8: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x8000D1AC: cvt.d.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f10.d = CVT_D_S(ctx->f6.fl);
    // 0x8000D1B0: nop

    // 0x8000D1B4: div.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = DIV_D(ctx->f10.d, ctx->f16.d);
    // 0x8000D1B8: lui         $at, 0x430C
    ctx->r1 = S32(0X430C << 16);
    // 0x8000D1BC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8000D1C0: lui         $t0, 0x8001
    ctx->r8 = S32(0X8001 << 16);
    // 0x8000D1C4: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x8000D1C8: addiu       $t0, $t0, -0x2DFC
    ctx->r8 = ADD32(ctx->r8, -0X2DFC);
    // 0x8000D1CC: addiu       $a1, $a1, 0x70E0
    ctx->r5 = ADD32(ctx->r5, 0X70E0);
    // 0x8000D1D0: lui         $a2, 0x8009
    ctx->r6 = S32(0X8009 << 16);
    // 0x8000D1D4: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    // 0x8000D1D8: c.le.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl <= ctx->f12.fl;
    // 0x8000D1DC: nop

    // 0x8000D1E0: bc1f        L_8000D1EC
    if (!c1cs) {
        // 0x8000D1E4: nop
    
            goto L_8000D1EC;
    }
    // 0x8000D1E4: nop

    // 0x8000D1E8: sw          $t0, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r8;
L_8000D1EC:
    // 0x8000D1EC: jal         0x8000B23C
    // 0x8000D1F0: addiu       $a2, $a2, 0x7800
    ctx->r6 = ADD32(ctx->r6, 0X7800);
    func_8000B23C(rdram, ctx);
        goto after_0;
    // 0x8000D1F0: addiu       $a2, $a2, 0x7800
    ctx->r6 = ADD32(ctx->r6, 0X7800);
    after_0:
    // 0x8000D1F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000D1F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8000D1FC: jr          $ra
    // 0x8000D200: nop

    return;
    // 0x8000D200: nop

;}
RECOMP_FUNC void func_8000D204(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000D204: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x8000D208: addiu       $v0, $v0, 0x3FE0
    ctx->r2 = ADD32(ctx->r2, 0X3FE0);
    // 0x8000D20C: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8000D210: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8000D214: swc1        $f4, 0x395C($at)
    MEM_W(0X395C, ctx->r1) = ctx->f4.u32l;
    // 0x8000D218: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8000D21C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8000D220: swc1        $f6, 0x3960($at)
    MEM_W(0X3960, ctx->r1) = ctx->f6.u32l;
    // 0x8000D224: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8000D228: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8000D22C: swc1        $f8, 0x3964($at)
    MEM_W(0X3964, ctx->r1) = ctx->f8.u32l;
    // 0x8000D230: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8000D234: lwc1        $f10, 0x3378($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X3378);
    // 0x8000D238: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8000D23C: swc1        $f10, 0x3950($at)
    MEM_W(0X3950, ctx->r1) = ctx->f10.u32l;
    // 0x8000D240: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x8000D244: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8000D248: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8000D24C: swc1        $f16, 0x3954($at)
    MEM_W(0X3954, ctx->r1) = ctx->f16.u32l;
    // 0x8000D250: lui         $at, 0xC1E0
    ctx->r1 = S32(0XC1E0 << 16);
    // 0x8000D254: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8000D258: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8000D25C: lui         $t6, 0x8001
    ctx->r14 = S32(0X8001 << 16);
    // 0x8000D260: addiu       $t6, $t6, -0x2D90
    ctx->r14 = ADD32(ctx->r14, -0X2D90);
    // 0x8000D264: swc1        $f18, 0x3958($at)
    MEM_W(0X3958, ctx->r1) = ctx->f18.u32l;
    // 0x8000D268: jr          $ra
    // 0x8000D26C: sw          $t6, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r14;
    return;
    // 0x8000D26C: sw          $t6, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r14;
;}
RECOMP_FUNC void func_8000D270(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000D270: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x8000D274: addiu       $v0, $v0, 0x3FE0
    ctx->r2 = ADD32(ctx->r2, 0X3FE0);
    // 0x8000D278: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8000D27C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8000D280: swc1        $f4, 0x395C($at)
    MEM_W(0X395C, ctx->r1) = ctx->f4.u32l;
    // 0x8000D284: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8000D288: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8000D28C: swc1        $f6, 0x3960($at)
    MEM_W(0X3960, ctx->r1) = ctx->f6.u32l;
    // 0x8000D290: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8000D294: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8000D298: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x8000D29C: swc1        $f8, 0x3964($at)
    MEM_W(0X3964, ctx->r1) = ctx->f8.u32l;
    // 0x8000D2A0: addiu       $v1, $v1, 0x3950
    ctx->r3 = ADD32(ctx->r3, 0X3950);
    // 0x8000D2A4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8000D2A8: lwc1        $f10, 0x0($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X0);
    // 0x8000D2AC: lwc1        $f19, 0x3380($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X3380);
    // 0x8000D2B0: lwc1        $f18, 0x3384($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X3384);
    // 0x8000D2B4: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x8000D2B8: sub.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d - ctx->f18.d;
    // 0x8000D2BC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8000D2C0: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x8000D2C4: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x8000D2C8: addiu       $a0, $a0, 0x3958
    ctx->r4 = ADD32(ctx->r4, 0X3958);
    // 0x8000D2CC: swc1        $f6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f6.u32l;
    // 0x8000D2D0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8000D2D4: lwc1        $f8, 0x0($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8000D2D8: lwc1        $f17, 0x3388($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X3388);
    // 0x8000D2DC: lwc1        $f16, 0x338C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X338C);
    // 0x8000D2E0: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x8000D2E4: add.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d + ctx->f16.d;
    // 0x8000D2E8: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x8000D2EC: jr          $ra
    // 0x8000D2F0: swc1        $f4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f4.u32l;
    return;
    // 0x8000D2F0: swc1        $f4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_8000D2F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000D2F4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8000D2F8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8000D2FC: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8000D300: lw          $v0, 0x30($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X30);
    // 0x8000D304: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x8000D308: lhu         $t6, 0x2($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X2);
    // 0x8000D30C: addiu       $a0, $a0, 0x3FE0
    ctx->r4 = ADD32(ctx->r4, 0X3FE0);
    // 0x8000D310: andi        $t7, $t6, 0x8
    ctx->r15 = ctx->r14 & 0X8;
    // 0x8000D314: bne         $t7, $zero, L_8000D4E0
    if (ctx->r15 != 0) {
        // 0x8000D318: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_8000D4E0;
    }
    // 0x8000D318: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8000D31C: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x8000D320: jal         0x800043AC
    // 0x8000D324: addiu       $a1, $a1, 0x40
    ctx->r5 = ADD32(ctx->r5, 0X40);
    func_800043AC(rdram, ctx);
        goto after_0;
    // 0x8000D324: addiu       $a1, $a1, 0x40
    ctx->r5 = ADD32(ctx->r5, 0X40);
    after_0:
    // 0x8000D328: jal         0x80003768
    // 0x8000D32C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80003768(rdram, ctx);
        goto after_1;
    // 0x8000D32C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x8000D330: beq         $v0, $zero, L_8000D4DC
    if (ctx->r2 == 0) {
        // 0x8000D334: sw          $v0, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->r2;
            goto L_8000D4DC;
    }
    // 0x8000D334: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x8000D338: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8000D33C: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x8000D340: lw          $t8, 0x6980($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X6980);
    // 0x8000D344: lwc1        $f0, 0x3390($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X3390);
    // 0x8000D348: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8000D34C: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x8000D350: beq         $t8, $at, L_8000D36C
    if (ctx->r24 == ctx->r1) {
        // 0x8000D354: lui         $s0, 0x8013
        ctx->r16 = S32(0X8013 << 16);
            goto L_8000D36C;
    }
    // 0x8000D354: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x8000D358: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8000D35C: lwc1        $f0, 0x3394($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X3394);
    // 0x8000D360: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x8000D364: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8000D368: nop

L_8000D36C:
    // 0x8000D36C: addiu       $s0, $s0, -0x5530
    ctx->r16 = ADD32(ctx->r16, -0X5530);
    // 0x8000D370: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x8000D374: addiu       $a1, $a1, -0x7C90
    ctx->r5 = ADD32(ctx->r5, -0X7C90);
    // 0x8000D378: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8000D37C: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x8000D380: jal         0x8000B04C
    // 0x8000D384: swc1        $f2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f2.u32l;
    func_8000B04C(rdram, ctx);
        goto after_2;
    // 0x8000D384: swc1        $f2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f2.u32l;
    after_2:
    // 0x8000D388: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x8000D38C: addiu       $v0, $v0, 0x3FE0
    ctx->r2 = ADD32(ctx->r2, 0X3FE0);
    // 0x8000D390: lwc1        $f2, 0x30($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8000D394: lwc1        $f0, 0x34($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8000D398: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8000D39C: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8000D3A0: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8000D3A4: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8000D3A8: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x8000D3AC: lui         $a2, 0x42B4
    ctx->r6 = S32(0X42B4 << 16);
    // 0x8000D3B0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8000D3B4: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x8000D3B8: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x8000D3BC: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    // 0x8000D3C0: jal         0x8007F870
    // 0x8000D3C4: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    func_8007F870(rdram, ctx);
        goto after_3;
    // 0x8000D3C4: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    after_3:
    // 0x8000D3C8: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x8000D3CC: lui         $t1, 0x102
    ctx->r9 = S32(0X102 << 16);
    // 0x8000D3D0: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8000D3D4: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x8000D3D8: ori         $t1, $t1, 0x40
    ctx->r9 = ctx->r9 | 0X40;
    // 0x8000D3DC: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x8000D3E0: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x8000D3E4: lui         $t4, 0xBC00
    ctx->r12 = S32(0XBC00 << 16);
    // 0x8000D3E8: sw          $t2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r10;
    // 0x8000D3EC: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x8000D3F0: ori         $t4, $t4, 0x1806
    ctx->r12 = ctx->r12 | 0X1806;
    // 0x8000D3F4: addiu       $t3, $v0, 0x8
    ctx->r11 = ADD32(ctx->r2, 0X8);
    // 0x8000D3F8: sw          $t3, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r11;
    // 0x8000D3FC: lui         $t5, 0x801B
    ctx->r13 = S32(0X801B << 16);
    // 0x8000D400: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    // 0x8000D404: lw          $t5, 0x36F0($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X36F0);
    // 0x8000D408: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8000D40C: addu        $t6, $t5, $at
    ctx->r14 = ADD32(ctx->r13, ctx->r1);
    // 0x8000D410: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x8000D414: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x8000D418: lui         $t9, 0xE
    ctx->r25 = S32(0XE << 16);
    // 0x8000D41C: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x8000D420: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    // 0x8000D424: ori         $t9, $t9, 0x205
    ctx->r25 = ctx->r25 | 0X205;
    // 0x8000D428: lui         $t8, 0xB700
    ctx->r24 = S32(0XB700 << 16);
    // 0x8000D42C: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8000D430: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x8000D434: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x8000D438: lui         $t0, 0xE700
    ctx->r8 = S32(0XE700 << 16);
    // 0x8000D43C: addiu       $t1, $v0, 0x8
    ctx->r9 = ADD32(ctx->r2, 0X8);
    // 0x8000D440: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
    // 0x8000D444: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8000D448: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x8000D44C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x8000D450: lui         $t4, 0x55
    ctx->r12 = S32(0X55 << 16);
    // 0x8000D454: addiu       $t2, $v0, 0x8
    ctx->r10 = ADD32(ctx->r2, 0X8);
    // 0x8000D458: sw          $t2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r10;
    // 0x8000D45C: lui         $t3, 0xB900
    ctx->r11 = S32(0XB900 << 16);
    // 0x8000D460: ori         $t3, $t3, 0x31D
    ctx->r11 = ctx->r11 | 0X31D;
    // 0x8000D464: ori         $t4, $t4, 0x3078
    ctx->r12 = ctx->r12 | 0X3078;
    // 0x8000D468: lui         $t5, 0x8009
    ctx->r13 = S32(0X8009 << 16);
    // 0x8000D46C: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x8000D470: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    // 0x8000D474: lw          $t5, 0x6980($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X6980);
    // 0x8000D478: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x8000D47C: bne         $t5, $at, L_8000D4A8
    if (ctx->r13 != ctx->r1) {
        // 0x8000D480: lui         $t1, 0x600
        ctx->r9 = S32(0X600 << 16);
            goto L_8000D4A8;
    }
    // 0x8000D480: lui         $t1, 0x600
    ctx->r9 = S32(0X600 << 16);
    // 0x8000D484: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x8000D488: lui         $t8, 0x600
    ctx->r24 = S32(0X600 << 16);
    // 0x8000D48C: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8000D490: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
    // 0x8000D494: addiu       $t8, $t8, 0x4FF0
    ctx->r24 = ADD32(ctx->r24, 0X4FF0);
    // 0x8000D498: lui         $t7, 0x600
    ctx->r15 = S32(0X600 << 16);
    // 0x8000D49C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8000D4A0: b           L_8000D4C4
    // 0x8000D4A4: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
        goto L_8000D4C4;
    // 0x8000D4A4: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
L_8000D4A8:
    // 0x8000D4A8: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x8000D4AC: lui         $t2, 0x601
    ctx->r10 = S32(0X601 << 16);
    // 0x8000D4B0: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8000D4B4: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x8000D4B8: addiu       $t2, $t2, -0x6D50
    ctx->r10 = ADD32(ctx->r10, -0X6D50);
    // 0x8000D4BC: sw          $t2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r10;
    // 0x8000D4C0: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
L_8000D4C4:
    // 0x8000D4C4: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x8000D4C8: nop

    // 0x8000D4CC: addiu       $t3, $v0, 0x8
    ctx->r11 = ADD32(ctx->r2, 0X8);
    // 0x8000D4D0: sw          $t3, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r11;
    // 0x8000D4D4: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8000D4D8: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
L_8000D4DC:
    // 0x8000D4DC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_8000D4E0:
    // 0x8000D4E0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8000D4E4: jr          $ra
    // 0x8000D4E8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x8000D4E8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x8000D4EC: nop

;}
RECOMP_FUNC void func_8000D4F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000D4F0: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8000D4F4: addiu       $v0, $v0, 0x6984
    ctx->r2 = ADD32(ctx->r2, 0X6984);
    // 0x8000D4F8: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x8000D4FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000D500: sltiu       $at, $v1, 0x6
    ctx->r1 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x8000D504: beq         $at, $zero, L_8000D64C
    if (ctx->r1 == 0) {
        // 0x8000D508: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8000D64C;
    }
    // 0x8000D508: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000D50C: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
    // 0x8000D510: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8000D514: addu        $at, $at, $t6
    gpr jr_addend_8000D520 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8000D518: lw          $t6, 0x3490($at)
    ctx->r14 = ADD32(ctx->r1, 0X3490);
    // 0x8000D51C: nop

    // 0x8000D520: jr          $t6
    // 0x8000D524: nop

    switch (jr_addend_8000D520 >> 2) {
        case 0: goto L_8000D528; break;
        case 1: goto L_8000D54C; break;
        case 2: goto L_8000D5B4; break;
        case 3: goto L_8000D5DC; break;
        case 4: goto L_8000D64C; break;
        case 5: goto L_8000D644; break;
        default: switch_error(__func__, 0x8000D520, 0x800D3490);
    }
    // 0x8000D524: nop

L_8000D528:
    // 0x8000D528: jal         0x8000AABC
    // 0x8000D52C: nop

    func_8000AABC(rdram, ctx);
        goto after_0;
    // 0x8000D52C: nop

    after_0:
    // 0x8000D530: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8000D534: addiu       $v0, $v0, 0x6984
    ctx->r2 = ADD32(ctx->r2, 0X6984);
    // 0x8000D538: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x8000D53C: nop

    // 0x8000D540: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8000D544: b           L_8000D64C
    // 0x8000D548: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
        goto L_8000D64C;
    // 0x8000D548: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
L_8000D54C:
    // 0x8000D54C: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x8000D550: lw          $t0, -0x2F98($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X2F98);
    // 0x8000D554: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x8000D558: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8000D55C: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8000D560: jal         0x800054F4
    // 0x8000D564: sh          $t9, -0x766A($at)
    MEM_H(-0X766A, ctx->r1) = ctx->r25;
    func_800054F4(rdram, ctx);
        goto after_1;
    // 0x8000D564: sh          $t9, -0x766A($at)
    MEM_H(-0X766A, ctx->r1) = ctx->r25;
    after_1:
    // 0x8000D568: jal         0x8005F560
    // 0x8000D56C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_8005F560(rdram, ctx);
        goto after_2;
    // 0x8000D56C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_2:
    // 0x8000D570: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8000D574: addiu       $v0, $v0, 0x6984
    ctx->r2 = ADD32(ctx->r2, 0X6984);
    // 0x8000D578: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x8000D57C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8000D580: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x8000D584: lui         $a3, 0x800A
    ctx->r7 = S32(0X800A << 16);
    // 0x8000D588: addiu       $a3, $a3, -0x4BEC
    ctx->r7 = ADD32(ctx->r7, -0X4BEC);
    // 0x8000D58C: addiu       $a0, $a0, -0x4BE8
    ctx->r4 = ADD32(ctx->r4, -0X4BE8);
    // 0x8000D590: addiu       $v1, $v1, -0x32B0
    ctx->r3 = ADD32(ctx->r3, -0X32B0);
    // 0x8000D594: addiu       $t1, $zero, 0xA
    ctx->r9 = ADD32(0, 0XA);
    // 0x8000D598: addiu       $t2, $zero, 0xB4
    ctx->r10 = ADD32(0, 0XB4);
    // 0x8000D59C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8000D5A0: sw          $zero, 0x0($a3)
    MEM_W(0X0, ctx->r7) = 0;
    // 0x8000D5A4: sh          $t1, 0x8($v1)
    MEM_H(0X8, ctx->r3) = ctx->r9;
    // 0x8000D5A8: sw          $t2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r10;
    // 0x8000D5AC: b           L_8000D64C
    // 0x8000D5B0: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
        goto L_8000D64C;
    // 0x8000D5B0: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
L_8000D5B4:
    // 0x8000D5B4: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x8000D5B8: addiu       $a0, $a0, -0x4BE8
    ctx->r4 = ADD32(ctx->r4, -0X4BE8);
    // 0x8000D5BC: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x8000D5C0: nop

    // 0x8000D5C4: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x8000D5C8: bgez        $t6, L_8000D64C
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8000D5CC: sw          $t6, 0x0($a0)
        MEM_W(0X0, ctx->r4) = ctx->r14;
            goto L_8000D64C;
    }
    // 0x8000D5CC: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x8000D5D0: addiu       $t8, $v1, 0x1
    ctx->r24 = ADD32(ctx->r3, 0X1);
    // 0x8000D5D4: b           L_8000D64C
    // 0x8000D5D8: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
        goto L_8000D64C;
    // 0x8000D5D8: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
L_8000D5DC:
    // 0x8000D5DC: lui         $a3, 0x800A
    ctx->r7 = S32(0X800A << 16);
    // 0x8000D5E0: addiu       $a3, $a3, -0x4BEC
    ctx->r7 = ADD32(ctx->r7, -0X4BEC);
    // 0x8000D5E4: lw          $a2, 0x0($a3)
    ctx->r6 = MEM_W(ctx->r7, 0X0);
    // 0x8000D5E8: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8000D5EC: addiu       $v1, $v1, -0x32B0
    ctx->r3 = ADD32(ctx->r3, -0X32B0);
    // 0x8000D5F0: lh          $t9, 0x8($v1)
    ctx->r25 = MEM_H(ctx->r3, 0X8);
    // 0x8000D5F4: sll         $t1, $a2, 2
    ctx->r9 = S32(ctx->r6 << 2);
    // 0x8000D5F8: subu        $t1, $t1, $a2
    ctx->r9 = SUB32(ctx->r9, ctx->r6);
    // 0x8000D5FC: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8000D600: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x8000D604: addiu       $t0, $t9, 0xA
    ctx->r8 = ADD32(ctx->r25, 0XA);
    // 0x8000D608: sh          $t0, 0x8($v1)
    MEM_H(0X8, ctx->r3) = ctx->r8;
    // 0x8000D60C: addu        $a0, $a0, $t1
    ctx->r4 = ADD32(ctx->r4, ctx->r9);
    // 0x8000D610: lw          $a0, -0x4E80($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4E80);
    // 0x8000D614: lui         $a1, 0x8001
    ctx->r5 = S32(0X8001 << 16);
    // 0x8000D618: addiu       $t2, $a2, 0x1
    ctx->r10 = ADD32(ctx->r6, 0X1);
    // 0x8000D61C: sw          $t2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r10;
    // 0x8000D620: jal         0x8000B00C
    // 0x8000D624: addiu       $a1, $a1, -0x2984
    ctx->r5 = ADD32(ctx->r5, -0X2984);
    func_8000B00C(rdram, ctx);
        goto after_3;
    // 0x8000D624: addiu       $a1, $a1, -0x2984
    ctx->r5 = ADD32(ctx->r5, -0X2984);
    after_3:
    // 0x8000D628: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8000D62C: addiu       $v0, $v0, 0x6984
    ctx->r2 = ADD32(ctx->r2, 0X6984);
    // 0x8000D630: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x8000D634: nop

    // 0x8000D638: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8000D63C: b           L_8000D64C
    // 0x8000D640: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
        goto L_8000D64C;
    // 0x8000D640: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
L_8000D644:
    // 0x8000D644: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x8000D648: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
L_8000D64C:
    // 0x8000D64C: jal         0x8000ABD4
    // 0x8000D650: nop

    func_8000ABD4(rdram, ctx);
        goto after_4;
    // 0x8000D650: nop

    after_4:
    // 0x8000D654: beq         $v0, $zero, L_8000D66C
    if (ctx->r2 == 0) {
        // 0x8000D658: lui         $t6, 0x8011
        ctx->r14 = S32(0X8011 << 16);
            goto L_8000D66C;
    }
    // 0x8000D658: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x8000D65C: lw          $t6, -0x2F98($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X2F98);
    // 0x8000D660: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x8000D664: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8000D668: sh          $zero, -0x766A($at)
    MEM_H(-0X766A, ctx->r1) = 0;
L_8000D66C:
    // 0x8000D66C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000D670: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8000D674: jr          $ra
    // 0x8000D678: nop

    return;
    // 0x8000D678: nop

;}
RECOMP_FUNC void func_8000D67C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000D67C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8000D680: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8000D684: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8000D688: lhu         $t6, 0x2($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X2);
    // 0x8000D68C: lui         $t8, 0x800A
    ctx->r24 = S32(0X800A << 16);
    // 0x8000D690: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8000D694: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8000D698: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8000D69C: addiu       $t8, $t8, -0x4E80
    ctx->r24 = ADD32(ctx->r24, -0X4E80);
    // 0x8000D6A0: lw          $a3, 0x4($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X4);
    // 0x8000D6A4: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x8000D6A8: lwc1        $f4, 0x20($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X20);
    // 0x8000D6AC: lw          $v1, 0x30($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X30);
    // 0x8000D6B0: swc1        $f4, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f4.u32l;
    // 0x8000D6B4: lwc1        $f6, 0x24($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X24);
    // 0x8000D6B8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8000D6BC: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8000D6C0: swc1        $f6, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f6.u32l;
    // 0x8000D6C4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8000D6C8: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x8000D6CC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8000D6D0: sh          $t9, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r25;
    // 0x8000D6D4: swc1        $f8, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->f8.u32l;
    // 0x8000D6D8: lwc1        $f10, 0x34A8($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X34A8);
    // 0x8000D6DC: addiu       $t2, $zero, 0x1E
    ctx->r10 = ADD32(0, 0X1E);
    // 0x8000D6E0: swc1        $f10, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->f10.u32l;
    // 0x8000D6E4: lwc1        $f16, 0x10($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8000D6E8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8000D6EC: swc1        $f16, 0x10($a3)
    MEM_W(0X10, ctx->r7) = ctx->f16.u32l;
    // 0x8000D6F0: lwc1        $f18, 0x14($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X14);
    // 0x8000D6F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8000D6F8: swc1        $f18, 0x14($a3)
    MEM_W(0X14, ctx->r7) = ctx->f18.u32l;
    // 0x8000D6FC: lwc1        $f4, 0x18($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X18);
    // 0x8000D700: nop

    // 0x8000D704: swc1        $f4, 0x18($a3)
    MEM_W(0X18, ctx->r7) = ctx->f4.u32l;
    // 0x8000D708: lwc1        $f8, 0x14($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X14);
    // 0x8000D70C: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8000D710: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x8000D714: sub.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x8000D718: swc1        $f16, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->f16.u32l;
    // 0x8000D71C: lwc1        $f4, 0x18($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X18);
    // 0x8000D720: lwc1        $f18, 0xC($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0XC);
    // 0x8000D724: mul.s       $f8, $f4, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x8000D728: sub.s       $f6, $f18, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f8.fl;
    // 0x8000D72C: swc1        $f6, 0xC($a3)
    MEM_W(0XC, ctx->r7) = ctx->f6.u32l;
    // 0x8000D730: lhu         $t0, 0x2($v1)
    ctx->r8 = MEM_HU(ctx->r3, 0X2);
    // 0x8000D734: sh          $zero, 0x4($v1)
    MEM_H(0X4, ctx->r3) = 0;
    // 0x8000D738: andi        $t1, $t0, 0xDFFF
    ctx->r9 = ctx->r8 & 0XDFFF;
    // 0x8000D73C: sh          $t1, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r9;
    // 0x8000D740: sh          $t2, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r10;
    // 0x8000D744: lhu         $a1, 0x2C($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X2C);
    // 0x8000D748: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    // 0x8000D74C: jal         0x8000ABAC
    // 0x8000D750: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_8000ABAC(rdram, ctx);
        goto after_0;
    // 0x8000D750: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_0:
    // 0x8000D754: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8000D758: jal         0x8000B420
    // 0x8000D75C: nop

    func_8000B420(rdram, ctx);
        goto after_1;
    // 0x8000D75C: nop

    after_1:
    // 0x8000D760: lui         $t3, 0x8001
    ctx->r11 = S32(0X8001 << 16);
    // 0x8000D764: addiu       $t3, $t3, -0x2884
    ctx->r11 = ADD32(ctx->r11, -0X2884);
    // 0x8000D768: sw          $t3, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r11;
    // 0x8000D76C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8000D770: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8000D774: jr          $ra
    // 0x8000D778: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8000D778: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8000D77C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000D77C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000D780: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000D784: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x8000D788: lwc1        $f6, 0x14($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X14);
    // 0x8000D78C: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8000D790: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    // 0x8000D794: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8000D798: swc1        $f8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f8.u32l;
    // 0x8000D79C: lwc1        $f16, 0x18($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X18);
    // 0x8000D7A0: nop

    // 0x8000D7A4: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8000D7A8: swc1        $f18, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f18.u32l;
    // 0x8000D7AC: lhu         $t6, 0x30($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X30);
    // 0x8000D7B0: nop

    // 0x8000D7B4: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8000D7B8: sh          $t7, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r15;
    // 0x8000D7BC: jal         0x8000DB60
    // 0x8000D7C0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8000DB60(rdram, ctx);
        goto after_0;
    // 0x8000D7C0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8000D7C4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8000D7C8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x8000D7CC: lhu         $t8, 0x30($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X30);
    // 0x8000D7D0: addiu       $t9, $t9, -0x280C
    ctx->r25 = ADD32(ctx->r25, -0X280C);
    // 0x8000D7D4: bgtz        $t8, L_8000D7E8
    if (SIGNED(ctx->r24) > 0) {
        // 0x8000D7D8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8000D7E8;
    }
    // 0x8000D7D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000D7DC: sh          $zero, 0x30($a0)
    MEM_H(0X30, ctx->r4) = 0;
    // 0x8000D7E0: sw          $t9, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r25;
    // 0x8000D7E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8000D7E8:
    // 0x8000D7E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8000D7EC: jr          $ra
    // 0x8000D7F0: nop

    return;
    // 0x8000D7F0: nop

;}
RECOMP_FUNC void func_8000D7F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000D7F4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8000D7F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000D7FC: lw          $v1, 0x4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X4);
    // 0x8000D800: nop

    // 0x8000D804: lw          $v0, 0x30($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X30);
    // 0x8000D808: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8000D80C: jal         0x8000DB60
    // 0x8000D810: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_8000DB60(rdram, ctx);
        goto after_0;
    // 0x8000D810: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_0:
    // 0x8000D814: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x8000D818: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8000D81C: lhu         $v1, 0x4($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X4);
    // 0x8000D820: addiu       $at, $zero, 0x16
    ctx->r1 = ADD32(0, 0X16);
    // 0x8000D824: bne         $v1, $at, L_8000D850
    if (ctx->r3 != ctx->r1) {
        // 0x8000D828: lui         $a1, 0x8012
        ctx->r5 = S32(0X8012 << 16);
            goto L_8000D850;
    }
    // 0x8000D828: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x8000D82C: addiu       $a1, $a1, -0x32B0
    ctx->r5 = ADD32(ctx->r5, -0X32B0);
    // 0x8000D830: lh          $t6, 0x8($a1)
    ctx->r14 = MEM_H(ctx->r5, 0X8);
    // 0x8000D834: lui         $t8, 0x8001
    ctx->r24 = S32(0X8001 << 16);
    // 0x8000D838: addiu       $t7, $t6, 0xA
    ctx->r15 = ADD32(ctx->r14, 0XA);
    // 0x8000D83C: sh          $t7, 0x8($a1)
    MEM_H(0X8, ctx->r5) = ctx->r15;
    // 0x8000D840: addiu       $t8, $t8, -0x26C8
    ctx->r24 = ADD32(ctx->r24, -0X26C8);
    // 0x8000D844: sw          $t8, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r24;
    // 0x8000D848: sh          $zero, 0x4($v0)
    MEM_H(0X4, ctx->r2) = 0;
    // 0x8000D84C: andi        $v1, $zero, 0xFFFF
    ctx->r3 = 0 & 0XFFFF;
L_8000D850:
    // 0x8000D850: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x8000D854: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8000D858: bne         $v1, $at, L_8000D888
    if (ctx->r3 != ctx->r1) {
        // 0x8000D85C: addiu       $a1, $a1, -0x32B0
        ctx->r5 = ADD32(ctx->r5, -0X32B0);
            goto L_8000D888;
    }
    // 0x8000D85C: addiu       $a1, $a1, -0x32B0
    ctx->r5 = ADD32(ctx->r5, -0X32B0);
    // 0x8000D860: lui         $t0, 0x8001
    ctx->r8 = S32(0X8001 << 16);
    // 0x8000D864: addiu       $t9, $zero, 0x1E
    ctx->r25 = ADD32(0, 0X1E);
    // 0x8000D868: addiu       $t0, $t0, -0x2758
    ctx->r8 = ADD32(ctx->r8, -0X2758);
    // 0x8000D86C: sh          $t9, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r25;
    // 0x8000D870: sw          $t0, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r8;
    // 0x8000D874: sh          $zero, 0x4($v0)
    MEM_H(0X4, ctx->r2) = 0;
    // 0x8000D878: lh          $t1, 0x8($a1)
    ctx->r9 = MEM_H(ctx->r5, 0X8);
    // 0x8000D87C: nop

    // 0x8000D880: addiu       $t2, $t1, 0xA
    ctx->r10 = ADD32(ctx->r9, 0XA);
    // 0x8000D884: sh          $t2, 0x8($a1)
    MEM_H(0X8, ctx->r5) = ctx->r10;
L_8000D888:
    // 0x8000D888: lhu         $t3, 0x30($a0)
    ctx->r11 = MEM_HU(ctx->r4, 0X30);
    // 0x8000D88C: nop

    // 0x8000D890: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8000D894: sh          $t4, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r12;
    // 0x8000D898: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000D89C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8000D8A0: jr          $ra
    // 0x8000D8A4: nop

    return;
    // 0x8000D8A4: nop

;}
RECOMP_FUNC void func_8000D8A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000D8A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000D8AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000D8B0: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x8000D8B4: lwc1        $f6, 0x14($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X14);
    // 0x8000D8B8: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8000D8BC: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    // 0x8000D8C0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8000D8C4: swc1        $f8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f8.u32l;
    // 0x8000D8C8: lwc1        $f16, 0x18($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X18);
    // 0x8000D8CC: nop

    // 0x8000D8D0: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8000D8D4: swc1        $f18, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f18.u32l;
    // 0x8000D8D8: lhu         $t6, 0x30($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X30);
    // 0x8000D8DC: nop

    // 0x8000D8E0: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8000D8E4: sh          $t7, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r15;
    // 0x8000D8E8: jal         0x8000DB60
    // 0x8000D8EC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8000DB60(rdram, ctx);
        goto after_0;
    // 0x8000D8EC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8000D8F0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8000D8F4: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8000D8F8: lhu         $t8, 0x30($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X30);
    // 0x8000D8FC: nop

    // 0x8000D900: bgtz        $t8, L_8000D92C
    if (SIGNED(ctx->r24) > 0) {
        // 0x8000D904: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8000D92C;
    }
    // 0x8000D904: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000D908: lw          $t9, 0x4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X4);
    // 0x8000D90C: addiu       $v0, $v0, 0x6984
    ctx->r2 = ADD32(ctx->r2, 0X6984);
    // 0x8000D910: sh          $zero, 0x0($t9)
    MEM_H(0X0, ctx->r25) = 0;
    // 0x8000D914: sw          $zero, 0x28($a0)
    MEM_W(0X28, ctx->r4) = 0;
    // 0x8000D918: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x8000D91C: nop

    // 0x8000D920: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x8000D924: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x8000D928: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8000D92C:
    // 0x8000D92C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8000D930: jr          $ra
    // 0x8000D934: nop

    return;
    // 0x8000D934: nop

;}
RECOMP_FUNC void func_8000D938(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000D938: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000D93C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000D940: jal         0x8000DB60
    // 0x8000D944: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8000DB60(rdram, ctx);
        goto after_0;
    // 0x8000D944: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8000D948: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x8000D94C: addiu       $v1, $v1, -0x2F98
    ctx->r3 = ADD32(ctx->r3, -0X2F98);
    // 0x8000D950: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x8000D954: lui         $a0, 0x2
    ctx->r4 = S32(0X2 << 16);
    // 0x8000D958: ori         $a0, $a0, 0x8000
    ctx->r4 = ctx->r4 | 0X8000;
    // 0x8000D95C: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x8000D960: addu        $v0, $t6, $a0
    ctx->r2 = ADD32(ctx->r14, ctx->r4);
    // 0x8000D964: lwc1        $f4, 0x20DC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X20DC);
    // 0x8000D968: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8000D96C: lui         $at, 0x4150
    ctx->r1 = S32(0X4150 << 16);
    // 0x8000D970: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8000D974: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8000D978: swc1        $f8, 0x20DC($v0)
    MEM_W(0X20DC, ctx->r2) = ctx->f8.u32l;
    // 0x8000D97C: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x8000D980: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x8000D984: addu        $v0, $t7, $a0
    ctx->r2 = ADD32(ctx->r15, ctx->r4);
    // 0x8000D988: lwc1        $f10, 0x20DC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X20DC);
    // 0x8000D98C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8000D990: div.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x8000D994: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x8000D998: lui         $at, 0x3FD0
    ctx->r1 = S32(0X3FD0 << 16);
    // 0x8000D99C: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x8000D9A0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8000D9A4: lui         $t0, 0x8001
    ctx->r8 = S32(0X8001 << 16);
    // 0x8000D9A8: sub.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f18.fl;
    // 0x8000D9AC: swc1        $f6, 0x20E0($v0)
    MEM_W(0X20E0, ctx->r2) = ctx->f6.u32l;
    // 0x8000D9B0: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x8000D9B4: nop

    // 0x8000D9B8: addu        $v0, $t8, $a0
    ctx->r2 = ADD32(ctx->r24, ctx->r4);
    // 0x8000D9BC: lwc1        $f0, 0x20DC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X20DC);
    // 0x8000D9C0: nop

    // 0x8000D9C4: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x8000D9C8: nop

    // 0x8000D9CC: bc1f        L_8000D9DC
    if (!c1cs) {
        // 0x8000D9D0: nop
    
            goto L_8000D9DC;
    }
    // 0x8000D9D0: nop

    // 0x8000D9D4: b           L_8000D9E0
    // 0x8000D9D8: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
        goto L_8000D9E0;
    // 0x8000D9D8: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
L_8000D9DC:
    // 0x8000D9DC: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_8000D9E0:
    // 0x8000D9E0: cvt.d.s     $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.d = CVT_D_S(ctx->f2.fl);
    // 0x8000D9E4: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x8000D9E8: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x8000D9EC: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x8000D9F0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8000D9F4: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8000D9F8: sub.d       $f18, $f4, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f4.d - ctx->f16.d;
    // 0x8000D9FC: cvt.s.d     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f6.fl = CVT_S_D(ctx->f18.d);
    // 0x8000DA00: swc1        $f6, 0x20E4($v0)
    MEM_W(0X20E4, ctx->r2) = ctx->f6.u32l;
    // 0x8000DA04: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x8000DA08: nop

    // 0x8000DA0C: addu        $v0, $t9, $a0
    ctx->r2 = ADD32(ctx->r25, ctx->r4);
    // 0x8000DA10: lwc1        $f8, 0x20E0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X20E0);
    // 0x8000DA14: nop

    // 0x8000DA18: c.lt.s      $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f8.fl < ctx->f12.fl;
    // 0x8000DA1C: nop

    // 0x8000DA20: bc1f        L_8000DA3C
    if (!c1cs) {
        // 0x8000DA24: nop
    
            goto L_8000DA3C;
    }
    // 0x8000DA24: nop

    // 0x8000DA28: swc1        $f12, 0x20E0($v0)
    MEM_W(0X20E0, ctx->r2) = ctx->f12.u32l;
    // 0x8000DA2C: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x8000DA30: lw          $v0, -0x2F98($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2F98);
    // 0x8000DA34: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x8000DA38: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
L_8000DA3C:
    // 0x8000DA3C: lwc1        $f10, 0x20E4($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X20E4);
    // 0x8000DA40: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8000DA44: c.lt.s      $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f10.fl < ctx->f12.fl;
    // 0x8000DA48: nop

    // 0x8000DA4C: bc1f        L_8000DA68
    if (!c1cs) {
        // 0x8000DA50: nop
    
            goto L_8000DA68;
    }
    // 0x8000DA50: nop

    // 0x8000DA54: swc1        $f12, 0x20E4($v0)
    MEM_W(0X20E4, ctx->r2) = ctx->f12.u32l;
    // 0x8000DA58: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x8000DA5C: lw          $v0, -0x2F98($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2F98);
    // 0x8000DA60: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x8000DA64: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
L_8000DA68:
    // 0x8000DA68: lui         $at, 0xC416
    ctx->r1 = S32(0XC416 << 16);
    // 0x8000DA6C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8000DA70: lwc1        $f16, 0x20DC($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X20DC);
    // 0x8000DA74: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x8000DA78: c.le.s      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.fl <= ctx->f4.fl;
    // 0x8000DA7C: nop

    // 0x8000DA80: bc1f        L_8000DA8C
    if (!c1cs) {
        // 0x8000DA84: addiu       $t0, $t0, -0x2564
        ctx->r8 = ADD32(ctx->r8, -0X2564);
            goto L_8000DA8C;
    }
    // 0x8000DA84: addiu       $t0, $t0, -0x2564
    ctx->r8 = ADD32(ctx->r8, -0X2564);
    // 0x8000DA88: sw          $t0, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->r8;
L_8000DA8C:
    // 0x8000DA8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000DA90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8000DA94: jr          $ra
    // 0x8000DA98: nop

    return;
    // 0x8000DA98: nop

;}
RECOMP_FUNC void func_8000DA9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000DA9C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8000DAA0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000DAA4: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x8000DAA8: nop

    // 0x8000DAAC: lw          $v1, 0x30($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X30);
    // 0x8000DAB0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8000DAB4: jal         0x8000DB60
    // 0x8000DAB8: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_8000DB60(rdram, ctx);
        goto after_0;
    // 0x8000DAB8: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_0:
    // 0x8000DABC: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x8000DAC0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8000DAC4: lhu         $t6, 0x4($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X4);
    // 0x8000DAC8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8000DACC: bne         $t6, $at, L_8000DAFC
    if (ctx->r14 != ctx->r1) {
        // 0x8000DAD0: lui         $v0, 0x8012
        ctx->r2 = S32(0X8012 << 16);
            goto L_8000DAFC;
    }
    // 0x8000DAD0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8000DAD4: addiu       $v0, $v0, -0x32B0
    ctx->r2 = ADD32(ctx->r2, -0X32B0);
    // 0x8000DAD8: sh          $zero, 0x4($v1)
    MEM_H(0X4, ctx->r3) = 0;
    // 0x8000DADC: lh          $t7, 0x8($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X8);
    // 0x8000DAE0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x8000DAE4: addiu       $t8, $t7, 0xA
    ctx->r24 = ADD32(ctx->r15, 0XA);
    // 0x8000DAE8: sh          $t8, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r24;
    // 0x8000DAEC: addiu       $t9, $t9, -0x24F4
    ctx->r25 = ADD32(ctx->r25, -0X24F4);
    // 0x8000DAF0: addiu       $t0, $zero, 0x5A
    ctx->r8 = ADD32(0, 0X5A);
    // 0x8000DAF4: sw          $t9, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r25;
    // 0x8000DAF8: sh          $t0, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r8;
L_8000DAFC:
    // 0x8000DAFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000DB00: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8000DB04: jr          $ra
    // 0x8000DB08: nop

    return;
    // 0x8000DB08: nop

;}
RECOMP_FUNC void func_8000DB0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000DB0C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000DB10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000DB14: jal         0x8000DB60
    // 0x8000DB18: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8000DB60(rdram, ctx);
        goto after_0;
    // 0x8000DB18: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8000DB1C: jal         0x8000ABD4
    // 0x8000DB20: nop

    func_8000ABD4(rdram, ctx);
        goto after_1;
    // 0x8000DB20: nop

    after_1:
    // 0x8000DB24: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8000DB28: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x8000DB2C: lhu         $v0, 0x30($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X30);
    // 0x8000DB30: nop

    // 0x8000DB34: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x8000DB38: bgtz        $v0, L_8000DB50
    if (SIGNED(ctx->r2) > 0) {
        // 0x8000DB3C: sh          $t6, 0x30($a0)
        MEM_H(0X30, ctx->r4) = ctx->r14;
            goto L_8000DB50;
    }
    // 0x8000DB3C: sh          $t6, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r14;
    // 0x8000DB40: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8000DB44: lw          $t7, 0x4($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X4);
    // 0x8000DB48: nop

    // 0x8000DB4C: swc1        $f4, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->f4.u32l;
L_8000DB50:
    // 0x8000DB50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000DB54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8000DB58: jr          $ra
    // 0x8000DB5C: nop

    return;
    // 0x8000DB5C: nop

;}
RECOMP_FUNC void func_8000DB60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000DB60: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8000DB64: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8000DB68: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8000DB6C: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8000DB70: lw          $s0, 0x4($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X4);
    // 0x8000DB74: jal         0x80003768
    // 0x8000DB78: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_80003768(rdram, ctx);
        goto after_0;
    // 0x8000DB78: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_0:
    // 0x8000DB7C: beq         $v0, $zero, L_8000DCF4
    if (ctx->r2 == 0) {
        // 0x8000DB80: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_8000DCF4;
    }
    // 0x8000DB80: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8000DB84: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8000DB88: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8000DB8C: lw          $a1, 0x10($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X10);
    // 0x8000DB90: lw          $a2, 0x14($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X14);
    // 0x8000DB94: lw          $a3, 0x18($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X18);
    // 0x8000DB98: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8000DB9C: lwc1        $f6, 0x4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4);
    // 0x8000DBA0: nop

    // 0x8000DBA4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x8000DBA8: lwc1        $f8, 0x8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8);
    // 0x8000DBAC: nop

    // 0x8000DBB0: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x8000DBB4: lwc1        $f10, 0xC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XC);
    // 0x8000DBB8: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x8000DBBC: jal         0x8007F870
    // 0x8000DBC0: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    func_8007F870(rdram, ctx);
        goto after_1;
    // 0x8000DBC0: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    after_1:
    // 0x8000DBC4: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x8000DBC8: addiu       $a2, $a2, -0x2F94
    ctx->r6 = ADD32(ctx->r6, -0X2F94);
    // 0x8000DBCC: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x8000DBD0: lui         $t8, 0x100
    ctx->r24 = S32(0X100 << 16);
    // 0x8000DBD4: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x8000DBD8: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x8000DBDC: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
    // 0x8000DBE0: ori         $t8, $t8, 0x40
    ctx->r24 = ctx->r24 | 0X40;
    // 0x8000DBE4: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8000DBE8: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x8000DBEC: lui         $t3, 0x800A
    ctx->r11 = S32(0X800A << 16);
    // 0x8000DBF0: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x8000DBF4: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x8000DBF8: addiu       $t3, $t3, -0x4F70
    ctx->r11 = ADD32(ctx->r11, -0X4F70);
    // 0x8000DBFC: addiu       $t1, $v0, 0x8
    ctx->r9 = ADD32(ctx->r2, 0X8);
    // 0x8000DC00: sw          $t1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r9;
    // 0x8000DC04: lui         $t2, 0x600
    ctx->r10 = S32(0X600 << 16);
    // 0x8000DC08: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    // 0x8000DC0C: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
    // 0x8000DC10: lw          $a1, 0x28($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X28);
    // 0x8000DC14: lui         $t4, 0x8001
    ctx->r12 = S32(0X8001 << 16);
    // 0x8000DC18: addiu       $t4, $t4, -0x280C
    ctx->r12 = ADD32(ctx->r12, -0X280C);
    // 0x8000DC1C: beq         $t4, $a1, L_8000DC30
    if (ctx->r12 == ctx->r5) {
        // 0x8000DC20: lui         $t5, 0x8001
        ctx->r13 = S32(0X8001 << 16);
            goto L_8000DC30;
    }
    // 0x8000DC20: lui         $t5, 0x8001
    ctx->r13 = S32(0X8001 << 16);
    // 0x8000DC24: addiu       $t5, $t5, -0x2884
    ctx->r13 = ADD32(ctx->r13, -0X2884);
    // 0x8000DC28: bne         $t5, $a1, L_8000DCA8
    if (ctx->r13 != ctx->r5) {
        // 0x8000DC2C: lui         $t8, 0x8001
        ctx->r24 = S32(0X8001 << 16);
            goto L_8000DCA8;
    }
    // 0x8000DC2C: lui         $t8, 0x8001
    ctx->r24 = S32(0X8001 << 16);
L_8000DC30:
    // 0x8000DC30: lhu         $v1, 0x2($t0)
    ctx->r3 = MEM_HU(ctx->r8, 0X2);
    // 0x8000DC34: lui         $t7, 0x800A
    ctx->r15 = S32(0X800A << 16);
    // 0x8000DC38: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
    // 0x8000DC3C: subu        $t6, $t6, $v1
    ctx->r14 = SUB32(ctx->r14, ctx->r3);
    // 0x8000DC40: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8000DC44: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8000DC48: lw          $t7, -0x4E58($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X4E58);
    // 0x8000DC4C: lhu         $a0, 0x30($t0)
    ctx->r4 = MEM_HU(ctx->r8, 0X30);
    // 0x8000DC50: nop

    // 0x8000DC54: slt         $at, $t7, $a0
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8000DC58: bne         $at, $zero, L_8000DCDC
    if (ctx->r1 != 0) {
        // 0x8000DC5C: addiu       $at, $zero, 0x6
        ctx->r1 = ADD32(0, 0X6);
            goto L_8000DCDC;
    }
    // 0x8000DC5C: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x8000DC60: beq         $v1, $at, L_8000DCDC
    if (ctx->r3 == ctx->r1) {
        // 0x8000DC64: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_8000DCDC;
    }
    // 0x8000DC64: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8000DC68: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x8000DC6C: beq         $v1, $at, L_8000DCDC
    if (ctx->r3 == ctx->r1) {
        // 0x8000DC70: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_8000DCDC;
    }
    // 0x8000DC70: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8000DC74: bne         $v1, $at, L_8000DC80
    if (ctx->r3 != ctx->r1) {
        // 0x8000DC78: slti        $at, $a0, 0x21
        ctx->r1 = SIGNED(ctx->r4) < 0X21 ? 1 : 0;
            goto L_8000DC80;
    }
    // 0x8000DC78: slti        $at, $a0, 0x21
    ctx->r1 = SIGNED(ctx->r4) < 0X21 ? 1 : 0;
    // 0x8000DC7C: bne         $at, $zero, L_8000DCDC
    if (ctx->r1 != 0) {
        // 0x8000DC80: addiu       $at, $zero, 0xB
        ctx->r1 = ADD32(0, 0XB);
            goto L_8000DCDC;
    }
L_8000DC80:
    // 0x8000DC80: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x8000DC84: bne         $v0, $at, L_8000DC94
    if (ctx->r2 != ctx->r1) {
        // 0x8000DC88: slti        $at, $a0, 0x21
        ctx->r1 = SIGNED(ctx->r4) < 0X21 ? 1 : 0;
            goto L_8000DC94;
    }
    // 0x8000DC88: slti        $at, $a0, 0x21
    ctx->r1 = SIGNED(ctx->r4) < 0X21 ? 1 : 0;
    // 0x8000DC8C: bne         $at, $zero, L_8000DCDC
    if (ctx->r1 != 0) {
        // 0x8000DC90: nop
    
            goto L_8000DCDC;
    }
    // 0x8000DC90: nop

L_8000DC94:
    // 0x8000DC94: jal         0x8000DD04
    // 0x8000DC98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8000DD04(rdram, ctx);
        goto after_2;
    // 0x8000DC98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8000DC9C: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x8000DCA0: b           L_8000DCDC
    // 0x8000DCA4: addiu       $a2, $a2, -0x2F94
    ctx->r6 = ADD32(ctx->r6, -0X2F94);
        goto L_8000DCDC;
    // 0x8000DCA4: addiu       $a2, $a2, -0x2F94
    ctx->r6 = ADD32(ctx->r6, -0X2F94);
L_8000DCA8:
    // 0x8000DCA8: addiu       $t8, $t8, -0x2758
    ctx->r24 = ADD32(ctx->r24, -0X2758);
    // 0x8000DCAC: bne         $t8, $a1, L_8000DCDC
    if (ctx->r24 != ctx->r5) {
        // 0x8000DCB0: nop
    
            goto L_8000DCDC;
    }
    // 0x8000DCB0: nop

    // 0x8000DCB4: lhu         $v0, 0x2($t0)
    ctx->r2 = MEM_HU(ctx->r8, 0X2);
    // 0x8000DCB8: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x8000DCBC: beq         $v0, $at, L_8000DCCC
    if (ctx->r2 == ctx->r1) {
        // 0x8000DCC0: addiu       $at, $zero, 0xA
        ctx->r1 = ADD32(0, 0XA);
            goto L_8000DCCC;
    }
    // 0x8000DCC0: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x8000DCC4: bne         $v0, $at, L_8000DCDC
    if (ctx->r2 != ctx->r1) {
        // 0x8000DCC8: nop
    
            goto L_8000DCDC;
    }
    // 0x8000DCC8: nop

L_8000DCCC:
    // 0x8000DCCC: jal         0x8000DD04
    // 0x8000DCD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8000DD04(rdram, ctx);
        goto after_3;
    // 0x8000DCD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8000DCD4: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x8000DCD8: addiu       $a2, $a2, -0x2F94
    ctx->r6 = ADD32(ctx->r6, -0X2F94);
L_8000DCDC:
    // 0x8000DCDC: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x8000DCE0: lui         $t1, 0xBD00
    ctx->r9 = S32(0XBD00 << 16);
    // 0x8000DCE4: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8000DCE8: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
    // 0x8000DCEC: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8000DCF0: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
L_8000DCF4:
    // 0x8000DCF4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8000DCF8: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8000DCFC: jr          $ra
    // 0x8000DD00: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8000DD00: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8000DD04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000DD04: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x8000DD08: lw          $t6, -0x2F98($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X2F98);
    // 0x8000DD0C: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x8000DD10: lui         $t7, 0x3
    ctx->r15 = S32(0X3 << 16);
    // 0x8000DD14: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8000DD18: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8000DD1C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8000DD20: lh          $t7, -0x7680($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X7680);
    // 0x8000DD24: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x8000DD28: lw          $v0, 0x30($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X30);
    // 0x8000DD2C: addiu       $t9, $t9, 0x4010
    ctx->r25 = ADD32(ctx->r25, 0X4010);
    // 0x8000DD30: sll         $t8, $t7, 6
    ctx->r24 = S32(ctx->r15 << 6);
    // 0x8000DD34: addu        $t2, $t8, $t9
    ctx->r10 = ADD32(ctx->r24, ctx->r25);
    // 0x8000DD38: sw          $t2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r10;
    // 0x8000DD3C: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x8000DD40: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x8000DD44: jal         0x800043AC
    // 0x8000DD48: addiu       $a1, $a1, 0x40
    ctx->r5 = ADD32(ctx->r5, 0X40);
    func_800043AC(rdram, ctx);
        goto after_0;
    // 0x8000DD48: addiu       $a1, $a1, 0x40
    ctx->r5 = ADD32(ctx->r5, 0X40);
    after_0:
    // 0x8000DD4C: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x8000DD50: lui         $s0, 0x8011
    ctx->r16 = S32(0X8011 << 16);
    // 0x8000DD54: beq         $t3, $zero, L_8000DE1C
    if (ctx->r11 == 0) {
        // 0x8000DD58: addiu       $s0, $s0, -0x2F94
        ctx->r16 = ADD32(ctx->r16, -0X2F94);
            goto L_8000DE1C;
    }
    // 0x8000DD58: addiu       $s0, $s0, -0x2F94
    ctx->r16 = ADD32(ctx->r16, -0X2F94);
    // 0x8000DD5C: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x8000DD60: addiu       $a1, $a1, -0x4BE0
    ctx->r5 = ADD32(ctx->r5, -0X4BE0);
    // 0x8000DD64: jal         0x8000B04C
    // 0x8000DD68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8000B04C(rdram, ctx);
        goto after_1;
    // 0x8000DD68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8000DD6C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8000DD70: lwc1        $f4, 0x34AC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X34AC);
    // 0x8000DD74: lwc1        $f6, 0x4C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8000DD78: lwc1        $f8, 0x50($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8000DD7C: lwc1        $f10, 0x54($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8000DD80: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x8000DD84: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x8000DD88: lw          $a2, 0x5C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X5C);
    // 0x8000DD8C: lw          $a3, 0x60($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X60);
    // 0x8000DD90: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8000DD94: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x8000DD98: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x8000DD9C: jal         0x8007F870
    // 0x8000DDA0: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    func_8007F870(rdram, ctx);
        goto after_2;
    // 0x8000DDA0: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    after_2:
    // 0x8000DDA4: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x8000DDA8: lui         $t5, 0x102
    ctx->r13 = S32(0X102 << 16);
    // 0x8000DDAC: addiu       $t4, $v0, 0x8
    ctx->r12 = ADD32(ctx->r2, 0X8);
    // 0x8000DDB0: sw          $t4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r12;
    // 0x8000DDB4: ori         $t5, $t5, 0x40
    ctx->r13 = ctx->r13 | 0X40;
    // 0x8000DDB8: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x8000DDBC: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x8000DDC0: lui         $t9, 0x800A
    ctx->r25 = S32(0X800A << 16);
    // 0x8000DDC4: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x8000DDC8: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x8000DDCC: addiu       $t9, $t9, -0x56C8
    ctx->r25 = ADD32(ctx->r25, -0X56C8);
    // 0x8000DDD0: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x8000DDD4: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    // 0x8000DDD8: lui         $t8, 0x600
    ctx->r24 = S32(0X600 << 16);
    // 0x8000DDDC: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8000DDE0: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x8000DDE4: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x8000DDE8: lui         $t0, 0xE700
    ctx->r8 = S32(0XE700 << 16);
    // 0x8000DDEC: addiu       $t2, $v0, 0x8
    ctx->r10 = ADD32(ctx->r2, 0X8);
    // 0x8000DDF0: sw          $t2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r10;
    // 0x8000DDF4: lui         $t1, 0x8013
    ctx->r9 = S32(0X8013 << 16);
    // 0x8000DDF8: addiu       $t1, $t1, -0x5530
    ctx->r9 = ADD32(ctx->r9, -0X5530);
    // 0x8000DDFC: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8000DE00: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x8000DE04: lw          $a3, 0x0($t1)
    ctx->r7 = MEM_W(ctx->r9, 0X0);
    // 0x8000DE08: nop

    // 0x8000DE0C: addiu       $t3, $a3, 0x8
    ctx->r11 = ADD32(ctx->r7, 0X8);
    // 0x8000DE10: sw          $t3, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r11;
    // 0x8000DE14: sw          $zero, 0x4($a3)
    MEM_W(0X4, ctx->r7) = 0;
    // 0x8000DE18: sw          $t0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r8;
L_8000DE1C:
    // 0x8000DE1C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8000DE20: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8000DE24: jr          $ra
    // 0x8000DE28: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x8000DE28: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x8000DE2C: nop

;}
RECOMP_FUNC void func_8000DE30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000DE30: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8000DE34: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8000DE38: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8000DE3C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8000DE40: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8000DE44: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x8000DE48: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8000DE4C: addiu       $s0, $s0, 0x4090
    ctx->r16 = ADD32(ctx->r16, 0X4090);
    // 0x8000DE50: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8000DE54: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x8000DE58: addiu       $s3, $zero, 0x5
    ctx->r19 = ADD32(0, 0X5);
L_8000DE5C:
    // 0x8000DE5C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x8000DE60: nop

    // 0x8000DE64: beq         $v0, $zero, L_8000DE7C
    if (ctx->r2 == 0) {
        // 0x8000DE68: nop
    
            goto L_8000DE7C;
    }
    // 0x8000DE68: nop

    // 0x8000DE6C: bne         $v0, $s2, L_8000DE7C
    if (ctx->r2 != ctx->r18) {
        // 0x8000DE70: nop
    
            goto L_8000DE7C;
    }
    // 0x8000DE70: nop

    // 0x8000DE74: jal         0x8028C1A0
    // 0x8000DE78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(0x8028C1A0)(rdram, ctx);
        goto after_0;
    // 0x8000DE78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
L_8000DE7C:
    // 0x8000DE7C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8000DE80: bne         $s1, $s3, L_8000DE5C
    if (ctx->r17 != ctx->r19) {
        // 0x8000DE84: addiu       $s0, $s0, 0x34
        ctx->r16 = ADD32(ctx->r16, 0X34);
            goto L_8000DE5C;
    }
    // 0x8000DE84: addiu       $s0, $s0, 0x34
    ctx->r16 = ADD32(ctx->r16, 0X34);
    // 0x8000DE88: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8000DE8C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8000DE90: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8000DE94: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8000DE98: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8000DE9C: jr          $ra
    // 0x8000DEA0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8000DEA0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
