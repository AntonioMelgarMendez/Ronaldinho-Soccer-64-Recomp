#include "iss64_recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_802A9E50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A9E50: sll         $t7, $a0, 4
    ctx->r15 = S32(ctx->r4 << 4);
    // 0x802A9E54: subu        $t7, $t7, $a0
    ctx->r15 = SUB32(ctx->r15, ctx->r4);
    // 0x802A9E58: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x802A9E5C: addiu       $t8, $t8, -0x3770
    ctx->r24 = ADD32(ctx->r24, -0X3770);
    // 0x802A9E60: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x802A9E64: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x802A9E68: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x802A9E6C: addu        $v1, $t7, $t8
    ctx->r3 = ADD32(ctx->r15, ctx->r24);
    // 0x802A9E70: addu        $v0, $v1, $at
    ctx->r2 = ADD32(ctx->r3, ctx->r1);
    // 0x802A9E74: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802A9E78: lbu         $t9, 0x214C($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X214C);
    // 0x802A9E7C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x802A9E80: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x802A9E84: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x802A9E88: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x802A9E8C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x802A9E90: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x802A9E94: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x802A9E98: ori         $at, $at, 0xA144
    ctx->r1 = ctx->r1 | 0XA144;
    // 0x802A9E9C: andi        $t1, $t9, 0xFF01
    ctx->r9 = ctx->r25 & 0XFF01;
    // 0x802A9EA0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A9EA4: ori         $t2, $t1, 0x4
    ctx->r10 = ctx->r9 | 0X4;
    // 0x802A9EA8: addiu       $t3, $zero, 0xBE
    ctx->r11 = ADD32(0, 0XBE);
    // 0x802A9EAC: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x802A9EB0: addu        $a0, $v1, $at
    ctx->r4 = ADD32(ctx->r3, ctx->r1);
    // 0x802A9EB4: lbu         $a2, 0x3F($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X3F);
    // 0x802A9EB8: lbu         $a1, 0x3B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X3B);
    // 0x802A9EBC: sb          $t2, 0x214C($v0)
    MEM_B(0X214C, ctx->r2) = ctx->r10;
    // 0x802A9EC0: sb          $t0, 0x2152($v0)
    MEM_B(0X2152, ctx->r2) = ctx->r8;
    // 0x802A9EC4: sb          $t0, 0x2153($v0)
    MEM_B(0X2153, ctx->r2) = ctx->r8;
    // 0x802A9EC8: sb          $t0, 0x2154($v0)
    MEM_B(0X2154, ctx->r2) = ctx->r8;
    // 0x802A9ECC: sb          $t3, 0x2155($v0)
    MEM_B(0X2155, ctx->r2) = ctx->r11;
    // 0x802A9ED0: sb          $a3, 0x2149($v0)
    MEM_B(0X2149, ctx->r2) = ctx->r7;
    // 0x802A9ED4: sb          $t4, 0x2148($v0)
    MEM_B(0X2148, ctx->r2) = ctx->r12;
    // 0x802A9ED8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802A9EDC: sh          $t5, 0x2156($v0)
    MEM_H(0X2156, ctx->r2) = ctx->r13;
    // 0x802A9EE0: jal         0x8002135C
    // 0x802A9EE4: sw          $t6, 0x2174($v0)
    MEM_W(0X2174, ctx->r2) = ctx->r14;
    func_8002135C(rdram, ctx);
        goto after_0;
    // 0x802A9EE4: sw          $t6, 0x2174($v0)
    MEM_W(0X2174, ctx->r2) = ctx->r14;
    after_0:
    // 0x802A9EE8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802A9EEC: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x802A9EF0: nop

    // 0x802A9EF4: sh          $t7, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r15;
    // 0x802A9EF8: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x802A9EFC: nop

    // 0x802A9F00: sh          $t8, 0x1C($a0)
    MEM_H(0X1C, ctx->r4) = ctx->r24;
    // 0x802A9F04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A9F08: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802A9F0C: jr          $ra
    // 0x802A9F10: nop

    return;
    // 0x802A9F10: nop

;}
RECOMP_FUNC void func_802A9F14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A9F14: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802A9F18: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x802A9F1C: lh          $t8, 0x2A($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X2A);
    // 0x802A9F20: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x802A9F24: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x802A9F28: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x802A9F2C: addiu       $t0, $t0, -0x3770
    ctx->r8 = ADD32(ctx->r8, -0X3770);
    // 0x802A9F30: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x802A9F34: sll         $t9, $t8, 5
    ctx->r25 = S32(ctx->r24 << 5);
    // 0x802A9F38: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802A9F3C: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x802A9F40: sll         $t6, $a3, 16
    ctx->r14 = S32(ctx->r7 << 16);
    // 0x802A9F44: addu        $v0, $t9, $t0
    ctx->r2 = ADD32(ctx->r25, ctx->r8);
    // 0x802A9F48: ori         $at, $at, 0xFEE8
    ctx->r1 = ctx->r1 | 0XFEE8;
    // 0x802A9F4C: lh          $a2, 0x32($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X32);
    // 0x802A9F50: lh          $a1, 0x2E($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X2E);
    // 0x802A9F54: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x802A9F58: sra         $a3, $t6, 16
    ctx->r7 = S32(SIGNED(ctx->r14) >> 16);
    // 0x802A9F5C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x802A9F60: addu        $a0, $v0, $at
    ctx->r4 = ADD32(ctx->r2, ctx->r1);
    // 0x802A9F64: jal         0x8002FE24
    // 0x802A9F68: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    func_8002FE24(rdram, ctx);
        goto after_0;
    // 0x802A9F68: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_0:
    // 0x802A9F6C: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x802A9F70: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x802A9F74: addiu       $t2, $zero, 0xA
    ctx->r10 = ADD32(0, 0XA);
    // 0x802A9F78: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802A9F7C: sb          $t2, -0x113($at)
    MEM_B(-0X113, ctx->r1) = ctx->r10;
    // 0x802A9F80: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802A9F84: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802A9F88: jr          $ra
    // 0x802A9F8C: nop

    return;
    // 0x802A9F8C: nop

;}
RECOMP_FUNC void func_802A9F90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A9F90: jr          $ra
    // 0x802A9F94: nop

    return;
    // 0x802A9F94: nop

;}
RECOMP_FUNC void func_802A9F98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A9F98: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802A9F9C: sll         $t6, $a3, 16
    ctx->r14 = S32(ctx->r7 << 16);
    // 0x802A9FA0: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x802A9FA4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802A9FA8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x802A9FAC: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x802A9FB0: bne         $t7, $zero, L_802A9FC0
    if (ctx->r15 != 0) {
        // 0x802A9FB4: sw          $a3, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r7;
            goto L_802A9FC0;
    }
    // 0x802A9FB4: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x802A9FB8: b           L_802A9FC4
    // 0x802A9FBC: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
        goto L_802A9FC4;
    // 0x802A9FBC: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
L_802A9FC0:
    // 0x802A9FC0: addiu       $v0, $zero, 0xE0
    ctx->r2 = ADD32(0, 0XE0);
L_802A9FC4:
    // 0x802A9FC4: lh          $t1, 0x32($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X32);
    // 0x802A9FC8: lh          $t8, 0x2A($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X2A);
    // 0x802A9FCC: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x802A9FD0: addu        $t2, $a1, $t1
    ctx->r10 = ADD32(ctx->r5, ctx->r9);
    // 0x802A9FD4: lbu         $a2, 0x308($t2)
    ctx->r6 = MEM_BU(ctx->r10, 0X308);
    // 0x802A9FD8: addiu       $t0, $t0, -0x3770
    ctx->r8 = ADD32(ctx->r8, -0X3770);
    // 0x802A9FDC: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x802A9FE0: sll         $a3, $v0, 16
    ctx->r7 = S32(ctx->r2 << 16);
    // 0x802A9FE4: sll         $t9, $t8, 5
    ctx->r25 = S32(ctx->r24 << 5);
    // 0x802A9FE8: addu        $v1, $t9, $t0
    ctx->r3 = ADD32(ctx->r25, ctx->r8);
    // 0x802A9FEC: sra         $t3, $a3, 16
    ctx->r11 = S32(SIGNED(ctx->r7) >> 16);
    // 0x802A9FF0: ori         $at, $at, 0xFEE8
    ctx->r1 = ctx->r1 | 0XFEE8;
    // 0x802A9FF4: addiu       $t4, $zero, 0xD5
    ctx->r12 = ADD32(0, 0XD5);
    // 0x802A9FF8: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x802A9FFC: addu        $a0, $v1, $at
    ctx->r4 = ADD32(ctx->r3, ctx->r1);
    // 0x802AA000: or          $a3, $t3, $zero
    ctx->r7 = ctx->r11 | 0;
    // 0x802AA004: jal         0x8006ED60
    // 0x802AA008: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    func_8006ED60(rdram, ctx);
        goto after_0;
    // 0x802AA008: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    after_0:
    // 0x802AA00C: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x802AA010: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x802AA014: addiu       $t5, $zero, 0xB
    ctx->r13 = ADD32(0, 0XB);
    // 0x802AA018: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x802AA01C: sb          $t5, -0x113($at)
    MEM_B(-0X113, ctx->r1) = ctx->r13;
    // 0x802AA020: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802AA024: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802AA028: jr          $ra
    // 0x802AA02C: nop

    return;
    // 0x802AA02C: nop

;}
RECOMP_FUNC void func_802AA030(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AA030: sll         $t6, $a0, 4
    ctx->r14 = S32(ctx->r4 << 4);
    // 0x802AA034: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x802AA038: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x802AA03C: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x802AA040: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x802AA044: jr          $ra
    // 0x802AA048: sh          $a1, 0x69F0($at)
    MEM_H(0X69F0, ctx->r1) = ctx->r5;
    return;
    // 0x802AA048: sh          $a1, 0x69F0($at)
    MEM_H(0X69F0, ctx->r1) = ctx->r5;
;}
RECOMP_FUNC void func_802AA04C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AA04C: sll         $t6, $a0, 5
    ctx->r14 = S32(ctx->r4 << 5);
    // 0x802AA050: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x802AA054: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x802AA058: jr          $ra
    // 0x802AA05C: sh          $a1, -0x387C($at)
    MEM_H(-0X387C, ctx->r1) = ctx->r5;
    return;
    // 0x802AA05C: sh          $a1, -0x387C($at)
    MEM_H(-0X387C, ctx->r1) = ctx->r5;
;}
RECOMP_FUNC void func_802AA060(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AA060: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802AA064: sll         $t8, $a1, 16
    ctx->r24 = S32(ctx->r5 << 16);
    // 0x802AA068: sll         $t0, $a2, 16
    ctx->r8 = S32(ctx->r6 << 16);
    // 0x802AA06C: sra         $t1, $t0, 16
    ctx->r9 = S32(SIGNED(ctx->r8) >> 16);
    // 0x802AA070: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x802AA074: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x802AA078: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x802AA07C: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x802AA080: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    // 0x802AA084: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    // 0x802AA088: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802AA08C: bne         $t1, $zero, L_802AA0B0
    if (ctx->r9 != 0) {
        // 0x802AA090: sw          $a2, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r6;
            goto L_802AA0B0;
    }
    // 0x802AA090: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x802AA094: lui         $t3, 0x802C
    ctx->r11 = S32(0X802C << 16);
    // 0x802AA098: addiu       $t3, $t3, -0x158C
    ctx->r11 = ADD32(ctx->r11, -0X158C);
    // 0x802AA09C: sll         $t2, $t9, 4
    ctx->r10 = S32(ctx->r25 << 4);
    // 0x802AA0A0: addu        $v0, $t2, $t3
    ctx->r2 = ADD32(ctx->r10, ctx->r11);
    // 0x802AA0A4: lh          $v1, 0x6($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X6);
    // 0x802AA0A8: b           L_802AA0CC
    // 0x802AA0AC: lh          $t6, 0xC($v0)
    ctx->r14 = MEM_H(ctx->r2, 0XC);
        goto L_802AA0CC;
    // 0x802AA0AC: lh          $t6, 0xC($v0)
    ctx->r14 = MEM_H(ctx->r2, 0XC);
L_802AA0B0:
    // 0x802AA0B0: lui         $t5, 0x802C
    ctx->r13 = S32(0X802C << 16);
    // 0x802AA0B4: addiu       $t5, $t5, -0x158C
    ctx->r13 = ADD32(ctx->r13, -0X158C);
    // 0x802AA0B8: sll         $t4, $a1, 4
    ctx->r12 = S32(ctx->r5 << 4);
    // 0x802AA0BC: addu        $v0, $t4, $t5
    ctx->r2 = ADD32(ctx->r12, ctx->r13);
    // 0x802AA0C0: lh          $v1, 0x8($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X8);
    // 0x802AA0C4: nop

    // 0x802AA0C8: lh          $t6, 0xC($v0)
    ctx->r14 = MEM_H(ctx->r2, 0XC);
L_802AA0CC:
    // 0x802AA0CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802AA0D0: bne         $t6, $zero, L_802AA10C
    if (ctx->r14 != 0) {
        // 0x802AA0D4: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_802AA10C;
    }
    // 0x802AA0D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802AA0D8: lh          $t7, 0x4($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X4);
    // 0x802AA0DC: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x802AA0E0: lh          $a3, 0xA($v0)
    ctx->r7 = MEM_H(ctx->r2, 0XA);
    // 0x802AA0E4: addiu       $t9, $zero, 0x10
    ctx->r25 = ADD32(0, 0X10);
    // 0x802AA0E8: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x802AA0EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802AA0F0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802AA0F4: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x802AA0F8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x802AA0FC: jal         0x802A9DA8
    // 0x802AA100: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    func_802A9DA8(rdram, ctx);
        goto after_0;
    // 0x802AA100: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    after_0:
    // 0x802AA104: b           L_802AA134
    // 0x802AA108: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_802AA134;
    // 0x802AA108: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802AA10C:
    // 0x802AA10C: lh          $t0, 0x4($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X4);
    // 0x802AA110: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x802AA114: lh          $a3, 0xA($v0)
    ctx->r7 = MEM_H(ctx->r2, 0XA);
    // 0x802AA118: addiu       $t2, $zero, 0x10
    ctx->r10 = ADD32(0, 0X10);
    // 0x802AA11C: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x802AA120: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x802AA124: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x802AA128: jal         0x802A9E50
    // 0x802AA12C: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    func_802A9E50(rdram, ctx);
        goto after_1;
    // 0x802AA12C: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    after_1:
    // 0x802AA130: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802AA134:
    // 0x802AA134: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802AA138: jr          $ra
    // 0x802AA13C: nop

    return;
    // 0x802AA13C: nop

;}
RECOMP_FUNC void func_802AA140(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AA140: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802AA144: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802AA148: sll         $s0, $a1, 16
    ctx->r16 = S32(ctx->r5 << 16);
    // 0x802AA14C: sra         $t6, $s0, 16
    ctx->r14 = S32(SIGNED(ctx->r16) >> 16);
    // 0x802AA150: sll         $a2, $t6, 16
    ctx->r6 = S32(ctx->r14 << 16);
    // 0x802AA154: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802AA158: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x802AA15C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x802AA160: sra         $t7, $a2, 16
    ctx->r15 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802AA164: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x802AA168: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x802AA16C: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x802AA170: jal         0x802AA060
    // 0x802AA174: addiu       $a0, $zero, 0x50
    ctx->r4 = ADD32(0, 0X50);
    func_802AA060(rdram, ctx);
        goto after_0;
    // 0x802AA174: addiu       $a0, $zero, 0x50
    ctx->r4 = ADD32(0, 0X50);
    after_0:
    // 0x802AA178: sll         $a2, $s0, 16
    ctx->r6 = S32(ctx->r16 << 16);
    // 0x802AA17C: sra         $t8, $a2, 16
    ctx->r24 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802AA180: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x802AA184: addiu       $a0, $zero, 0x51
    ctx->r4 = ADD32(0, 0X51);
    // 0x802AA188: jal         0x802AA060
    // 0x802AA18C: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    func_802AA060(rdram, ctx);
        goto after_1;
    // 0x802AA18C: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    after_1:
    // 0x802AA190: lh          $v0, 0x22($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X22);
    // 0x802AA194: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802AA198: beq         $v0, $zero, L_802AA22C
    if (ctx->r2 == 0) {
        // 0x802AA19C: addiu       $a0, $zero, 0x46
        ctx->r4 = ADD32(0, 0X46);
            goto L_802AA22C;
    }
    // 0x802AA19C: addiu       $a0, $zero, 0x46
    ctx->r4 = ADD32(0, 0X46);
    // 0x802AA1A0: beq         $v0, $at, L_802AA22C
    if (ctx->r2 == ctx->r1) {
        // 0x802AA1A4: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_802AA22C;
    }
    // 0x802AA1A4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802AA1A8: bne         $v0, $at, L_802AA2A0
    if (ctx->r2 != ctx->r1) {
        // 0x802AA1AC: addiu       $a0, $zero, 0x46
        ctx->r4 = ADD32(0, 0X46);
            goto L_802AA2A0;
    }
    // 0x802AA1AC: addiu       $a0, $zero, 0x46
    ctx->r4 = ADD32(0, 0X46);
    // 0x802AA1B0: sll         $a2, $s0, 16
    ctx->r6 = S32(ctx->r16 << 16);
    // 0x802AA1B4: sra         $t9, $a2, 16
    ctx->r25 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802AA1B8: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    // 0x802AA1BC: jal         0x802AA060
    // 0x802AA1C0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_802AA060(rdram, ctx);
        goto after_2;
    // 0x802AA1C0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x802AA1C4: sll         $a2, $s0, 16
    ctx->r6 = S32(ctx->r16 << 16);
    // 0x802AA1C8: sra         $t0, $a2, 16
    ctx->r8 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802AA1CC: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    // 0x802AA1D0: addiu       $a0, $zero, 0x47
    ctx->r4 = ADD32(0, 0X47);
    // 0x802AA1D4: jal         0x802AA060
    // 0x802AA1D8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_802AA060(rdram, ctx);
        goto after_3;
    // 0x802AA1D8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_3:
    // 0x802AA1DC: sll         $a2, $s0, 16
    ctx->r6 = S32(ctx->r16 << 16);
    // 0x802AA1E0: sra         $t1, $a2, 16
    ctx->r9 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802AA1E4: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    // 0x802AA1E8: addiu       $a0, $zero, 0x48
    ctx->r4 = ADD32(0, 0X48);
    // 0x802AA1EC: jal         0x802AA060
    // 0x802AA1F0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_802AA060(rdram, ctx);
        goto after_4;
    // 0x802AA1F0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_4:
    // 0x802AA1F4: sll         $a2, $s0, 16
    ctx->r6 = S32(ctx->r16 << 16);
    // 0x802AA1F8: sra         $t2, $a2, 16
    ctx->r10 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802AA1FC: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    // 0x802AA200: addiu       $a0, $zero, 0x49
    ctx->r4 = ADD32(0, 0X49);
    // 0x802AA204: jal         0x802AA060
    // 0x802AA208: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_802AA060(rdram, ctx);
        goto after_5;
    // 0x802AA208: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_5:
    // 0x802AA20C: sll         $a2, $s0, 16
    ctx->r6 = S32(ctx->r16 << 16);
    // 0x802AA210: sra         $t3, $a2, 16
    ctx->r11 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802AA214: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    // 0x802AA218: addiu       $a0, $zero, 0x4A
    ctx->r4 = ADD32(0, 0X4A);
    // 0x802AA21C: jal         0x802AA060
    // 0x802AA220: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_802AA060(rdram, ctx);
        goto after_6;
    // 0x802AA220: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_6:
    // 0x802AA224: b           L_802AA2A4
    // 0x802AA228: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802AA2A4;
    // 0x802AA228: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802AA22C:
    // 0x802AA22C: sll         $a2, $s0, 16
    ctx->r6 = S32(ctx->r16 << 16);
    // 0x802AA230: sra         $t4, $a2, 16
    ctx->r12 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802AA234: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    // 0x802AA238: jal         0x802AA060
    // 0x802AA23C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_802AA060(rdram, ctx);
        goto after_7;
    // 0x802AA23C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_7:
    // 0x802AA240: sll         $a2, $s0, 16
    ctx->r6 = S32(ctx->r16 << 16);
    // 0x802AA244: sra         $t5, $a2, 16
    ctx->r13 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802AA248: or          $a2, $t5, $zero
    ctx->r6 = ctx->r13 | 0;
    // 0x802AA24C: addiu       $a0, $zero, 0x47
    ctx->r4 = ADD32(0, 0X47);
    // 0x802AA250: jal         0x802AA060
    // 0x802AA254: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_802AA060(rdram, ctx);
        goto after_8;
    // 0x802AA254: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_8:
    // 0x802AA258: sll         $a2, $s0, 16
    ctx->r6 = S32(ctx->r16 << 16);
    // 0x802AA25C: sra         $t6, $a2, 16
    ctx->r14 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802AA260: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x802AA264: addiu       $a0, $zero, 0x48
    ctx->r4 = ADD32(0, 0X48);
    // 0x802AA268: jal         0x802AA060
    // 0x802AA26C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_802AA060(rdram, ctx);
        goto after_9;
    // 0x802AA26C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_9:
    // 0x802AA270: sll         $a2, $s0, 16
    ctx->r6 = S32(ctx->r16 << 16);
    // 0x802AA274: sra         $t7, $a2, 16
    ctx->r15 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802AA278: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x802AA27C: addiu       $a0, $zero, 0x49
    ctx->r4 = ADD32(0, 0X49);
    // 0x802AA280: jal         0x802AA060
    // 0x802AA284: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_802AA060(rdram, ctx);
        goto after_10;
    // 0x802AA284: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_10:
    // 0x802AA288: sll         $a2, $s0, 16
    ctx->r6 = S32(ctx->r16 << 16);
    // 0x802AA28C: sra         $t8, $a2, 16
    ctx->r24 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802AA290: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x802AA294: addiu       $a0, $zero, 0x4A
    ctx->r4 = ADD32(0, 0X4A);
    // 0x802AA298: jal         0x802AA060
    // 0x802AA29C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_802AA060(rdram, ctx);
        goto after_11;
    // 0x802AA29C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_11:
L_802AA2A0:
    // 0x802AA2A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802AA2A4:
    // 0x802AA2A4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802AA2A8: jr          $ra
    // 0x802AA2AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x802AA2AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802AA2B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AA2B0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802AA2B4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802AA2B8: sll         $s0, $a1, 16
    ctx->r16 = S32(ctx->r5 << 16);
    // 0x802AA2BC: sra         $t6, $s0, 16
    ctx->r14 = S32(SIGNED(ctx->r16) >> 16);
    // 0x802AA2C0: sll         $a2, $t6, 16
    ctx->r6 = S32(ctx->r14 << 16);
    // 0x802AA2C4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802AA2C8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x802AA2CC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x802AA2D0: sra         $t7, $a2, 16
    ctx->r15 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802AA2D4: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x802AA2D8: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x802AA2DC: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x802AA2E0: jal         0x802AA060
    // 0x802AA2E4: addiu       $a0, $zero, 0x50
    ctx->r4 = ADD32(0, 0X50);
    func_802AA060(rdram, ctx);
        goto after_0;
    // 0x802AA2E4: addiu       $a0, $zero, 0x50
    ctx->r4 = ADD32(0, 0X50);
    after_0:
    // 0x802AA2E8: sll         $a2, $s0, 16
    ctx->r6 = S32(ctx->r16 << 16);
    // 0x802AA2EC: sra         $t8, $a2, 16
    ctx->r24 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802AA2F0: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x802AA2F4: addiu       $a0, $zero, 0x51
    ctx->r4 = ADD32(0, 0X51);
    // 0x802AA2F8: jal         0x802AA060
    // 0x802AA2FC: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    func_802AA060(rdram, ctx);
        goto after_1;
    // 0x802AA2FC: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    after_1:
    // 0x802AA300: lh          $v0, 0x22($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X22);
    // 0x802AA304: addiu       $a0, $zero, 0x4B
    ctx->r4 = ADD32(0, 0X4B);
    // 0x802AA308: beq         $v0, $zero, L_802AA408
    if (ctx->r2 == 0) {
        // 0x802AA30C: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_802AA408;
    }
    // 0x802AA30C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802AA310: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802AA314: beq         $v0, $at, L_802AA38C
    if (ctx->r2 == ctx->r1) {
        // 0x802AA318: addiu       $a0, $zero, 0x4B
        ctx->r4 = ADD32(0, 0X4B);
            goto L_802AA38C;
    }
    // 0x802AA318: addiu       $a0, $zero, 0x4B
    ctx->r4 = ADD32(0, 0X4B);
    // 0x802AA31C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802AA320: bne         $v0, $at, L_802AA478
    if (ctx->r2 != ctx->r1) {
        // 0x802AA324: addiu       $a0, $zero, 0x4B
        ctx->r4 = ADD32(0, 0X4B);
            goto L_802AA478;
    }
    // 0x802AA324: addiu       $a0, $zero, 0x4B
    ctx->r4 = ADD32(0, 0X4B);
    // 0x802AA328: sll         $a2, $s0, 16
    ctx->r6 = S32(ctx->r16 << 16);
    // 0x802AA32C: sra         $t9, $a2, 16
    ctx->r25 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802AA330: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    // 0x802AA334: jal         0x802AA060
    // 0x802AA338: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_802AA060(rdram, ctx);
        goto after_2;
    // 0x802AA338: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x802AA33C: sll         $a2, $s0, 16
    ctx->r6 = S32(ctx->r16 << 16);
    // 0x802AA340: sra         $t0, $a2, 16
    ctx->r8 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802AA344: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    // 0x802AA348: addiu       $a0, $zero, 0x4C
    ctx->r4 = ADD32(0, 0X4C);
    // 0x802AA34C: jal         0x802AA060
    // 0x802AA350: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_802AA060(rdram, ctx);
        goto after_3;
    // 0x802AA350: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_3:
    // 0x802AA354: sll         $a2, $s0, 16
    ctx->r6 = S32(ctx->r16 << 16);
    // 0x802AA358: sra         $t1, $a2, 16
    ctx->r9 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802AA35C: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    // 0x802AA360: addiu       $a0, $zero, 0x4D
    ctx->r4 = ADD32(0, 0X4D);
    // 0x802AA364: jal         0x802AA060
    // 0x802AA368: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    func_802AA060(rdram, ctx);
        goto after_4;
    // 0x802AA368: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_4:
    // 0x802AA36C: sll         $a2, $s0, 16
    ctx->r6 = S32(ctx->r16 << 16);
    // 0x802AA370: sra         $t2, $a2, 16
    ctx->r10 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802AA374: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    // 0x802AA378: addiu       $a0, $zero, 0x4E
    ctx->r4 = ADD32(0, 0X4E);
    // 0x802AA37C: jal         0x802AA060
    // 0x802AA380: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_802AA060(rdram, ctx);
        goto after_5;
    // 0x802AA380: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_5:
    // 0x802AA384: b           L_802AA47C
    // 0x802AA388: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802AA47C;
    // 0x802AA388: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802AA38C:
    // 0x802AA38C: sll         $a2, $s0, 16
    ctx->r6 = S32(ctx->r16 << 16);
    // 0x802AA390: sra         $t3, $a2, 16
    ctx->r11 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802AA394: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    // 0x802AA398: jal         0x802AA060
    // 0x802AA39C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_802AA060(rdram, ctx);
        goto after_6;
    // 0x802AA39C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x802AA3A0: sll         $a2, $s0, 16
    ctx->r6 = S32(ctx->r16 << 16);
    // 0x802AA3A4: sra         $t4, $a2, 16
    ctx->r12 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802AA3A8: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    // 0x802AA3AC: addiu       $a0, $zero, 0x4C
    ctx->r4 = ADD32(0, 0X4C);
    // 0x802AA3B0: jal         0x802AA060
    // 0x802AA3B4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_802AA060(rdram, ctx);
        goto after_7;
    // 0x802AA3B4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_7:
    // 0x802AA3B8: sll         $a2, $s0, 16
    ctx->r6 = S32(ctx->r16 << 16);
    // 0x802AA3BC: sra         $t5, $a2, 16
    ctx->r13 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802AA3C0: or          $a2, $t5, $zero
    ctx->r6 = ctx->r13 | 0;
    // 0x802AA3C4: addiu       $a0, $zero, 0x4D
    ctx->r4 = ADD32(0, 0X4D);
    // 0x802AA3C8: jal         0x802AA060
    // 0x802AA3CC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_802AA060(rdram, ctx);
        goto after_8;
    // 0x802AA3CC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_8:
    // 0x802AA3D0: sll         $a2, $s0, 16
    ctx->r6 = S32(ctx->r16 << 16);
    // 0x802AA3D4: sra         $t6, $a2, 16
    ctx->r14 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802AA3D8: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x802AA3DC: addiu       $a0, $zero, 0x4E
    ctx->r4 = ADD32(0, 0X4E);
    // 0x802AA3E0: jal         0x802AA060
    // 0x802AA3E4: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    func_802AA060(rdram, ctx);
        goto after_9;
    // 0x802AA3E4: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    after_9:
    // 0x802AA3E8: sll         $a2, $s0, 16
    ctx->r6 = S32(ctx->r16 << 16);
    // 0x802AA3EC: sra         $t7, $a2, 16
    ctx->r15 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802AA3F0: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x802AA3F4: addiu       $a0, $zero, 0x48
    ctx->r4 = ADD32(0, 0X48);
    // 0x802AA3F8: jal         0x802AA060
    // 0x802AA3FC: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_802AA060(rdram, ctx);
        goto after_10;
    // 0x802AA3FC: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_10:
    // 0x802AA400: b           L_802AA47C
    // 0x802AA404: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802AA47C;
    // 0x802AA404: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802AA408:
    // 0x802AA408: sll         $a2, $s0, 16
    ctx->r6 = S32(ctx->r16 << 16);
    // 0x802AA40C: sra         $t8, $a2, 16
    ctx->r24 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802AA410: jal         0x802AA060
    // 0x802AA414: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    func_802AA060(rdram, ctx);
        goto after_11;
    // 0x802AA414: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    after_11:
    // 0x802AA418: sll         $a2, $s0, 16
    ctx->r6 = S32(ctx->r16 << 16);
    // 0x802AA41C: sra         $t9, $a2, 16
    ctx->r25 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802AA420: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    // 0x802AA424: addiu       $a0, $zero, 0x4C
    ctx->r4 = ADD32(0, 0X4C);
    // 0x802AA428: jal         0x802AA060
    // 0x802AA42C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_802AA060(rdram, ctx);
        goto after_12;
    // 0x802AA42C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_12:
    // 0x802AA430: sll         $a2, $s0, 16
    ctx->r6 = S32(ctx->r16 << 16);
    // 0x802AA434: sra         $t0, $a2, 16
    ctx->r8 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802AA438: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    // 0x802AA43C: addiu       $a0, $zero, 0x4D
    ctx->r4 = ADD32(0, 0X4D);
    // 0x802AA440: jal         0x802AA060
    // 0x802AA444: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_802AA060(rdram, ctx);
        goto after_13;
    // 0x802AA444: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_13:
    // 0x802AA448: sll         $a2, $s0, 16
    ctx->r6 = S32(ctx->r16 << 16);
    // 0x802AA44C: sra         $t1, $a2, 16
    ctx->r9 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802AA450: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    // 0x802AA454: addiu       $a0, $zero, 0x4E
    ctx->r4 = ADD32(0, 0X4E);
    // 0x802AA458: jal         0x802AA060
    // 0x802AA45C: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    func_802AA060(rdram, ctx);
        goto after_14;
    // 0x802AA45C: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    after_14:
    // 0x802AA460: sll         $a2, $s0, 16
    ctx->r6 = S32(ctx->r16 << 16);
    // 0x802AA464: sra         $t2, $a2, 16
    ctx->r10 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802AA468: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    // 0x802AA46C: addiu       $a0, $zero, 0x48
    ctx->r4 = ADD32(0, 0X48);
    // 0x802AA470: jal         0x802AA060
    // 0x802AA474: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_802AA060(rdram, ctx);
        goto after_15;
    // 0x802AA474: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_15:
L_802AA478:
    // 0x802AA478: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802AA47C:
    // 0x802AA47C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802AA480: jr          $ra
    // 0x802AA484: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x802AA484: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802AA488(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AA488: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x802AA48C: lbu         $t6, 0x5426($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X5426);
    // 0x802AA490: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802AA494: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802AA498: beq         $t6, $zero, L_802AA4D4
    if (ctx->r14 == 0) {
        // 0x802AA49C: sw          $a0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r4;
            goto L_802AA4D4;
    }
    // 0x802AA49C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x802AA4A0: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x802AA4A4: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802AA4A8: addiu       $a3, $a3, 0xA8
    ctx->r7 = ADD32(ctx->r7, 0XA8);
    // 0x802AA4AC: andi        $t7, $a3, 0xFFFF
    ctx->r15 = ctx->r7 & 0XFFFF;
    // 0x802AA4B0: lhu         $a1, 0x55F2($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X55F2);
    // 0x802AA4B4: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    // 0x802AA4B8: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x802AA4BC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802AA4C0: jal         0x80294D94
    // 0x802AA4C4: addiu       $a2, $zero, 0x72
    ctx->r6 = ADD32(0, 0X72);
    func_80294D94(rdram, ctx);
        goto after_0;
    // 0x802AA4C4: addiu       $a2, $zero, 0x72
    ctx->r6 = ADD32(0, 0X72);
    after_0:
    // 0x802AA4C8: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x802AA4CC: b           L_802AA504
    // 0x802AA4D0: nop

        goto L_802AA504;
    // 0x802AA4D0: nop

L_802AA4D4:
    // 0x802AA4D4: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x802AA4D8: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802AA4DC: addiu       $a3, $a3, 0xA8
    ctx->r7 = ADD32(ctx->r7, 0XA8);
    // 0x802AA4E0: andi        $t8, $a3, 0xFFFF
    ctx->r24 = ctx->r7 & 0XFFFF;
    // 0x802AA4E4: lhu         $a1, 0x552E($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X552E);
    // 0x802AA4E8: or          $a3, $t8, $zero
    ctx->r7 = ctx->r24 | 0;
    // 0x802AA4EC: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x802AA4F0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802AA4F4: jal         0x80294D94
    // 0x802AA4F8: addiu       $a2, $zero, 0x72
    ctx->r6 = ADD32(0, 0X72);
    func_80294D94(rdram, ctx);
        goto after_1;
    // 0x802AA4F8: addiu       $a2, $zero, 0x72
    ctx->r6 = ADD32(0, 0X72);
    after_1:
    // 0x802AA4FC: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x802AA500: nop

L_802AA504:
    // 0x802AA504: lui         $t9, 0x802C
    ctx->r25 = S32(0X802C << 16);
    // 0x802AA508: lbu         $t9, 0x5426($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X5426);
    // 0x802AA50C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x802AA510: beq         $t9, $zero, L_802AA534
    if (ctx->r25 == 0) {
        // 0x802AA514: lui         $a1, 0x802C
        ctx->r5 = S32(0X802C << 16);
            goto L_802AA534;
    }
    // 0x802AA514: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802AA518: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802AA51C: lhu         $a1, 0x552E($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X552E);
    // 0x802AA520: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x802AA524: jal         0x80294D94
    // 0x802AA528: addiu       $a2, $zero, 0xAC
    ctx->r6 = ADD32(0, 0XAC);
    func_80294D94(rdram, ctx);
        goto after_2;
    // 0x802AA528: addiu       $a2, $zero, 0xAC
    ctx->r6 = ADD32(0, 0XAC);
    after_2:
    // 0x802AA52C: b           L_802AA544
    // 0x802AA530: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802AA544;
    // 0x802AA530: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802AA534:
    // 0x802AA534: lhu         $a1, 0x55F2($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X55F2);
    // 0x802AA538: jal         0x80294D94
    // 0x802AA53C: addiu       $a2, $zero, 0xAC
    ctx->r6 = ADD32(0, 0XAC);
    func_80294D94(rdram, ctx);
        goto after_3;
    // 0x802AA53C: addiu       $a2, $zero, 0xAC
    ctx->r6 = ADD32(0, 0XAC);
    after_3:
    // 0x802AA540: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802AA544:
    // 0x802AA544: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802AA548: jr          $ra
    // 0x802AA54C: nop

    return;
    // 0x802AA54C: nop

;}
RECOMP_FUNC void func_802AA550(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AA550: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802AA554: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x802AA558: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x802AA55C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802AA560: addiu       $t7, $t7, -0x5620
    ctx->r15 = ADD32(ctx->r15, -0X5620);
    // 0x802AA564: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x802AA568: addiu       $t6, $zero, 0x50A
    ctx->r14 = ADD32(0, 0X50A);
    // 0x802AA56C: addiu       $t8, $zero, 0x13
    ctx->r24 = ADD32(0, 0X13);
    // 0x802AA570: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
    // 0x802AA574: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x802AA578: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x802AA57C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x802AA580: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x802AA584: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x802AA588: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802AA58C: jal         0x802A9DA8
    // 0x802AA590: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_802A9DA8(rdram, ctx);
        goto after_0;
    // 0x802AA590: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_0:
    // 0x802AA594: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802AA598: addiu       $v0, $v0, 0x53F8
    ctx->r2 = ADD32(ctx->r2, 0X53F8);
    // 0x802AA59C: lbu         $t0, 0x2E($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X2E);
    // 0x802AA5A0: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x802AA5A4: beq         $t0, $zero, L_802AA5E4
    if (ctx->r8 == 0) {
        // 0x802AA5A8: addiu       $a0, $zero, 0x2
        ctx->r4 = ADD32(0, 0X2);
            goto L_802AA5E4;
    }
    // 0x802AA5A8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x802AA5AC: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x802AA5B0: addiu       $a2, $v1, 0xC4
    ctx->r6 = ADD32(ctx->r3, 0XC4);
    // 0x802AA5B4: lh          $a3, 0xA($t1)
    ctx->r7 = MEM_H(ctx->r9, 0XA);
    // 0x802AA5B8: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    // 0x802AA5BC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x802AA5C0: jal         0x802A9F14
    // 0x802AA5C4: addiu       $a1, $zero, 0x74
    ctx->r5 = ADD32(0, 0X74);
    func_802A9F14(rdram, ctx);
        goto after_1;
    // 0x802AA5C4: addiu       $a1, $zero, 0x74
    ctx->r5 = ADD32(0, 0X74);
    after_1:
    // 0x802AA5C8: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802AA5CC: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x802AA5D0: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x802AA5D4: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x802AA5D8: addiu       $v0, $v0, 0x53F8
    ctx->r2 = ADD32(ctx->r2, 0X53F8);
    // 0x802AA5DC: b           L_802AA614
    // 0x802AA5E0: sb          $t2, -0x3833($at)
    MEM_B(-0X3833, ctx->r1) = ctx->r10;
        goto L_802AA614;
    // 0x802AA5E0: sb          $t2, -0x3833($at)
    MEM_B(-0X3833, ctx->r1) = ctx->r10;
L_802AA5E4:
    // 0x802AA5E4: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x802AA5E8: addiu       $a2, $v1, 0xC4
    ctx->r6 = ADD32(ctx->r3, 0XC4);
    // 0x802AA5EC: lh          $a3, 0xA($t3)
    ctx->r7 = MEM_H(ctx->r11, 0XA);
    // 0x802AA5F0: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    // 0x802AA5F4: jal         0x802A9F14
    // 0x802AA5F8: addiu       $a1, $zero, 0x74
    ctx->r5 = ADD32(0, 0X74);
    func_802A9F14(rdram, ctx);
        goto after_2;
    // 0x802AA5F8: addiu       $a1, $zero, 0x74
    ctx->r5 = ADD32(0, 0X74);
    after_2:
    // 0x802AA5FC: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802AA600: addiu       $t4, $zero, 0x5
    ctx->r12 = ADD32(0, 0X5);
    // 0x802AA604: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x802AA608: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x802AA60C: addiu       $v0, $v0, 0x53F8
    ctx->r2 = ADD32(ctx->r2, 0X53F8);
    // 0x802AA610: sb          $t4, -0x3833($at)
    MEM_B(-0X3833, ctx->r1) = ctx->r12;
L_802AA614:
    // 0x802AA614: lbu         $t5, 0x2E($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X2E);
    // 0x802AA618: nop

    // 0x802AA61C: beq         $t5, $zero, L_802AA648
    if (ctx->r13 == 0) {
        // 0x802AA620: nop
    
            goto L_802AA648;
    }
    // 0x802AA620: nop

    // 0x802AA624: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x802AA628: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x802AA62C: lh          $a3, 0xA($t6)
    ctx->r7 = MEM_H(ctx->r14, 0XA);
    // 0x802AA630: jal         0x802A9F14
    // 0x802AA634: addiu       $a1, $zero, 0xAC
    ctx->r5 = ADD32(0, 0XAC);
    func_802A9F14(rdram, ctx);
        goto after_3;
    // 0x802AA634: addiu       $a1, $zero, 0xAC
    ctx->r5 = ADD32(0, 0XAC);
    after_3:
    // 0x802AA638: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x802AA63C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x802AA640: b           L_802AA668
    // 0x802AA644: sb          $t7, -0x3813($at)
    MEM_B(-0X3813, ctx->r1) = ctx->r15;
        goto L_802AA668;
    // 0x802AA644: sb          $t7, -0x3813($at)
    MEM_B(-0X3813, ctx->r1) = ctx->r15;
L_802AA648:
    // 0x802AA648: lw          $t8, 0x4($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X4);
    // 0x802AA64C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x802AA650: lh          $a3, 0xA($t8)
    ctx->r7 = MEM_H(ctx->r24, 0XA);
    // 0x802AA654: jal         0x802A9F14
    // 0x802AA658: addiu       $a1, $zero, 0xAC
    ctx->r5 = ADD32(0, 0XAC);
    func_802A9F14(rdram, ctx);
        goto after_4;
    // 0x802AA658: addiu       $a1, $zero, 0xAC
    ctx->r5 = ADD32(0, 0XAC);
    after_4:
    // 0x802AA65C: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
    // 0x802AA660: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x802AA664: sb          $t9, -0x3813($at)
    MEM_B(-0X3813, ctx->r1) = ctx->r25;
L_802AA668:
    // 0x802AA668: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802AA66C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x802AA670: jr          $ra
    // 0x802AA674: nop

    return;
    // 0x802AA674: nop

;}
RECOMP_FUNC void func_802AA678(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AA678: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x802AA67C: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x802AA680: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x802AA684: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x802AA688: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x802AA68C: addiu       $t7, $t7, -0x57D0
    ctx->r15 = ADD32(ctx->r15, -0X57D0);
    // 0x802AA690: addiu       $t6, $zero, 0x4BF
    ctx->r14 = ADD32(0, 0X4BF);
    // 0x802AA694: addiu       $t8, $zero, 0x10
    ctx->r24 = ADD32(0, 0X10);
    // 0x802AA698: addiu       $t9, $zero, 0x72
    ctx->r25 = ADD32(0, 0X72);
    // 0x802AA69C: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x802AA6A0: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x802AA6A4: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x802AA6A8: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x802AA6AC: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x802AA6B0: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x802AA6B4: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x802AA6B8: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x802AA6BC: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x802AA6C0: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x802AA6C4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x802AA6C8: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x802AA6CC: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x802AA6D0: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    // 0x802AA6D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802AA6D8: jal         0x802A9E50
    // 0x802AA6DC: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_802A9E50(rdram, ctx);
        goto after_0;
    // 0x802AA6DC: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_0:
    // 0x802AA6E0: lui         $t0, 0x802C
    ctx->r8 = S32(0X802C << 16);
    // 0x802AA6E4: lw          $t0, 0x50D8($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X50D8);
    // 0x802AA6E8: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x802AA6EC: bne         $t0, $at, L_802AA734
    if (ctx->r8 != ctx->r1) {
        // 0x802AA6F0: addiu       $a0, $zero, 0x1F
        ctx->r4 = ADD32(0, 0X1F);
            goto L_802AA734;
    }
    // 0x802AA6F0: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    // 0x802AA6F4: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x802AA6F8: addiu       $t2, $t2, -0x5740
    ctx->r10 = ADD32(ctx->r10, -0X5740);
    // 0x802AA6FC: addiu       $t1, $zero, 0x4BF
    ctx->r9 = ADD32(0, 0X4BF);
    // 0x802AA700: addiu       $t3, $zero, 0x10
    ctx->r11 = ADD32(0, 0X10);
    // 0x802AA704: addiu       $t4, $zero, 0x74
    ctx->r12 = ADD32(0, 0X74);
    // 0x802AA708: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x802AA70C: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x802AA710: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x802AA714: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x802AA718: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    // 0x802AA71C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802AA720: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x802AA724: jal         0x802A9DA8
    // 0x802AA728: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_802A9DA8(rdram, ctx);
        goto after_1;
    // 0x802AA728: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_1:
    // 0x802AA72C: b           L_802AA768
    // 0x802AA730: nop

        goto L_802AA768;
    // 0x802AA730: nop

L_802AA734:
    // 0x802AA734: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x802AA738: addiu       $t6, $t6, -0x5740
    ctx->r14 = ADD32(ctx->r14, -0X5740);
    // 0x802AA73C: addiu       $t5, $zero, 0x4BF
    ctx->r13 = ADD32(0, 0X4BF);
    // 0x802AA740: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x802AA744: addiu       $t8, $zero, 0x72
    ctx->r24 = ADD32(0, 0X72);
    // 0x802AA748: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x802AA74C: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x802AA750: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x802AA754: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x802AA758: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802AA75C: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x802AA760: jal         0x802A9DA8
    // 0x802AA764: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_802A9DA8(rdram, ctx);
        goto after_2;
    // 0x802AA764: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_2:
L_802AA768:
    // 0x802AA768: lui         $s1, 0x802C
    ctx->r17 = S32(0X802C << 16);
    // 0x802AA76C: lui         $s6, 0x800D
    ctx->r22 = S32(0X800D << 16);
    // 0x802AA770: lui         $s3, 0x800D
    ctx->r19 = S32(0X800D << 16);
    // 0x802AA774: addiu       $s3, $s3, -0x5698
    ctx->r19 = ADD32(ctx->r19, -0X5698);
    // 0x802AA778: addiu       $s6, $s6, -0x56B0
    ctx->r22 = ADD32(ctx->r22, -0X56B0);
    // 0x802AA77C: addiu       $s1, $s1, 0x53F8
    ctx->r17 = ADD32(ctx->r17, 0X53F8);
    // 0x802AA780: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x802AA784: addiu       $fp, $zero, 0x2
    ctx->r30 = ADD32(0, 0X2);
    // 0x802AA788: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
L_802AA78C:
    // 0x802AA78C: lbu         $v0, 0x24($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X24);
    // 0x802AA790: addiu       $a0, $s0, 0x21
    ctx->r4 = ADD32(ctx->r16, 0X21);
    // 0x802AA794: bne         $s5, $v0, L_802AA7CC
    if (ctx->r21 != ctx->r2) {
        // 0x802AA798: sll         $a1, $s0, 4
        ctx->r5 = S32(ctx->r16 << 4);
            goto L_802AA7CC;
    }
    // 0x802AA798: sll         $a1, $s0, 4
    ctx->r5 = S32(ctx->r16 << 4);
    // 0x802AA79C: addiu       $t9, $zero, 0x4BF
    ctx->r25 = ADD32(0, 0X4BF);
    // 0x802AA7A0: addiu       $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
    // 0x802AA7A4: addiu       $t1, $zero, 0x71
    ctx->r9 = ADD32(0, 0X71);
    // 0x802AA7A8: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x802AA7AC: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x802AA7B0: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x802AA7B4: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x802AA7B8: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    // 0x802AA7BC: jal         0x802A9DA8
    // 0x802AA7C0: sw          $s6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r22;
    func_802A9DA8(rdram, ctx);
        goto after_3;
    // 0x802AA7C0: sw          $s6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r22;
    after_3:
    // 0x802AA7C4: b           L_802AA83C
    // 0x802AA7C8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
        goto L_802AA83C;
    // 0x802AA7C8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_802AA7CC:
    // 0x802AA7CC: bne         $fp, $v0, L_802AA80C
    if (ctx->r30 != ctx->r2) {
        // 0x802AA7D0: addiu       $a0, $s0, 0x21
        ctx->r4 = ADD32(ctx->r16, 0X21);
            goto L_802AA80C;
    }
    // 0x802AA7D0: addiu       $a0, $s0, 0x21
    ctx->r4 = ADD32(ctx->r16, 0X21);
    // 0x802AA7D4: addiu       $t2, $zero, 0x4BF
    ctx->r10 = ADD32(0, 0X4BF);
    // 0x802AA7D8: addiu       $t3, $zero, 0x10
    ctx->r11 = ADD32(0, 0X10);
    // 0x802AA7DC: addiu       $t4, $zero, 0x70
    ctx->r12 = ADD32(0, 0X70);
    // 0x802AA7E0: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x802AA7E4: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x802AA7E8: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x802AA7EC: addiu       $a0, $s0, 0x21
    ctx->r4 = ADD32(ctx->r16, 0X21);
    // 0x802AA7F0: sll         $a1, $s0, 4
    ctx->r5 = S32(ctx->r16 << 4);
    // 0x802AA7F4: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x802AA7F8: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    // 0x802AA7FC: jal         0x802A9DA8
    // 0x802AA800: sw          $s3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r19;
    func_802A9DA8(rdram, ctx);
        goto after_4;
    // 0x802AA800: sw          $s3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r19;
    after_4:
    // 0x802AA804: b           L_802AA83C
    // 0x802AA808: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
        goto L_802AA83C;
    // 0x802AA808: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_802AA80C:
    // 0x802AA80C: addiu       $t5, $zero, 0x4BF
    ctx->r13 = ADD32(0, 0X4BF);
    // 0x802AA810: addiu       $t6, $zero, 0x10
    ctx->r14 = ADD32(0, 0X10);
    // 0x802AA814: addiu       $t7, $zero, 0x70
    ctx->r15 = ADD32(0, 0X70);
    // 0x802AA818: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x802AA81C: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x802AA820: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x802AA824: addiu       $a1, $zero, -0x64
    ctx->r5 = ADD32(0, -0X64);
    // 0x802AA828: addiu       $a2, $zero, -0x64
    ctx->r6 = ADD32(0, -0X64);
    // 0x802AA82C: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    // 0x802AA830: jal         0x802A9DA8
    // 0x802AA834: sw          $s3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r19;
    func_802A9DA8(rdram, ctx);
        goto after_5;
    // 0x802AA834: sw          $s3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r19;
    after_5:
    // 0x802AA838: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_802AA83C:
    // 0x802AA83C: slti        $at, $s0, 0x5
    ctx->r1 = SIGNED(ctx->r16) < 0X5 ? 1 : 0;
    // 0x802AA840: bne         $at, $zero, L_802AA78C
    if (ctx->r1 != 0) {
        // 0x802AA844: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_802AA78C;
    }
    // 0x802AA844: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x802AA848: lui         $s1, 0x802C
    ctx->r17 = S32(0X802C << 16);
    // 0x802AA84C: addiu       $s1, $s1, 0x53F8
    ctx->r17 = ADD32(ctx->r17, 0X53F8);
    // 0x802AA850: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x802AA854: addiu       $s7, $zero, 0x5
    ctx->r23 = ADD32(0, 0X5);
    // 0x802AA858: addiu       $s2, $zero, 0x102
    ctx->r18 = ADD32(0, 0X102);
L_802AA85C:
    // 0x802AA85C: lbu         $v0, 0x29($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X29);
    // 0x802AA860: addiu       $a0, $s0, 0x26
    ctx->r4 = ADD32(ctx->r16, 0X26);
    // 0x802AA864: bne         $s5, $v0, L_802AA8A0
    if (ctx->r21 != ctx->r2) {
        // 0x802AA868: sll         $t8, $s0, 4
        ctx->r24 = S32(ctx->r16 << 4);
            goto L_802AA8A0;
    }
    // 0x802AA868: sll         $t8, $s0, 4
    ctx->r24 = S32(ctx->r16 << 4);
    // 0x802AA86C: addiu       $t9, $zero, 0x4BF
    ctx->r25 = ADD32(0, 0X4BF);
    // 0x802AA870: addiu       $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
    // 0x802AA874: addiu       $t1, $zero, 0x71
    ctx->r9 = ADD32(0, 0X71);
    // 0x802AA878: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x802AA87C: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x802AA880: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x802AA884: subu        $a1, $s2, $t8
    ctx->r5 = SUB32(ctx->r18, ctx->r24);
    // 0x802AA888: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x802AA88C: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    // 0x802AA890: jal         0x802A9DA8
    // 0x802AA894: sw          $s6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r22;
    func_802A9DA8(rdram, ctx);
        goto after_6;
    // 0x802AA894: sw          $s6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r22;
    after_6:
    // 0x802AA898: b           L_802AA914
    // 0x802AA89C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
        goto L_802AA914;
    // 0x802AA89C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_802AA8A0:
    // 0x802AA8A0: bne         $fp, $v0, L_802AA8E4
    if (ctx->r30 != ctx->r2) {
        // 0x802AA8A4: addiu       $a0, $s0, 0x26
        ctx->r4 = ADD32(ctx->r16, 0X26);
            goto L_802AA8E4;
    }
    // 0x802AA8A4: addiu       $a0, $s0, 0x26
    ctx->r4 = ADD32(ctx->r16, 0X26);
    // 0x802AA8A8: sll         $t2, $s0, 4
    ctx->r10 = S32(ctx->r16 << 4);
    // 0x802AA8AC: addiu       $t3, $zero, 0x4BF
    ctx->r11 = ADD32(0, 0X4BF);
    // 0x802AA8B0: addiu       $t4, $zero, 0x10
    ctx->r12 = ADD32(0, 0X10);
    // 0x802AA8B4: addiu       $t5, $zero, 0x70
    ctx->r13 = ADD32(0, 0X70);
    // 0x802AA8B8: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x802AA8BC: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x802AA8C0: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x802AA8C4: subu        $a1, $s2, $t2
    ctx->r5 = SUB32(ctx->r18, ctx->r10);
    // 0x802AA8C8: addiu       $a0, $s0, 0x26
    ctx->r4 = ADD32(ctx->r16, 0X26);
    // 0x802AA8CC: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x802AA8D0: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    // 0x802AA8D4: jal         0x802A9DA8
    // 0x802AA8D8: sw          $s3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r19;
    func_802A9DA8(rdram, ctx);
        goto after_7;
    // 0x802AA8D8: sw          $s3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r19;
    after_7:
    // 0x802AA8DC: b           L_802AA914
    // 0x802AA8E0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
        goto L_802AA914;
    // 0x802AA8E0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_802AA8E4:
    // 0x802AA8E4: addiu       $t6, $zero, 0x4BF
    ctx->r14 = ADD32(0, 0X4BF);
    // 0x802AA8E8: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x802AA8EC: addiu       $t8, $zero, 0x70
    ctx->r24 = ADD32(0, 0X70);
    // 0x802AA8F0: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x802AA8F4: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x802AA8F8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x802AA8FC: addiu       $a1, $zero, -0x64
    ctx->r5 = ADD32(0, -0X64);
    // 0x802AA900: addiu       $a2, $zero, -0x64
    ctx->r6 = ADD32(0, -0X64);
    // 0x802AA904: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    // 0x802AA908: jal         0x802A9DA8
    // 0x802AA90C: sw          $s3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r19;
    func_802A9DA8(rdram, ctx);
        goto after_8;
    // 0x802AA90C: sw          $s3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r19;
    after_8:
    // 0x802AA910: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_802AA914:
    // 0x802AA914: bne         $s0, $s7, L_802AA85C
    if (ctx->r16 != ctx->r23) {
        // 0x802AA918: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_802AA85C;
    }
    // 0x802AA918: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x802AA91C: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x802AA920: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x802AA924: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x802AA928: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x802AA92C: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x802AA930: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x802AA934: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x802AA938: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x802AA93C: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x802AA940: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x802AA944: jr          $ra
    // 0x802AA948: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x802AA948: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_802AA94C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AA94C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802AA950: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x802AA954: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802AA958: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x802AA95C: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    // 0x802AA960: lh          $t7, 0x2E($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X2E);
    // 0x802AA964: lui         $t0, 0x802C
    ctx->r8 = S32(0X802C << 16);
    // 0x802AA968: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x802AA96C: sll         $a1, $t7, 3
    ctx->r5 = S32(ctx->r15 << 3);
    // 0x802AA970: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x802AA974: subu        $a1, $a1, $t7
    ctx->r5 = SUB32(ctx->r5, ctx->r15);
    // 0x802AA978: lw          $t0, -0x148C($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X148C);
    // 0x802AA97C: sll         $a1, $a1, 3
    ctx->r5 = S32(ctx->r5 << 3);
    // 0x802AA980: addiu       $t8, $zero, 0x4BF
    ctx->r24 = ADD32(0, 0X4BF);
    // 0x802AA984: addiu       $t1, $zero, 0x10
    ctx->r9 = ADD32(0, 0X10);
    // 0x802AA988: addiu       $t2, $zero, 0x73
    ctx->r10 = ADD32(0, 0X73);
    // 0x802AA98C: addu        $a1, $a1, $t7
    ctx->r5 = ADD32(ctx->r5, ctx->r15);
    // 0x802AA990: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x802AA994: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x802AA998: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x802AA99C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x802AA9A0: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    // 0x802AA9A4: addiu       $a0, $t7, 0x5A
    ctx->r4 = ADD32(ctx->r15, 0X5A);
    // 0x802AA9A8: jal         0x802A9DA8
    // 0x802AA9AC: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    func_802A9DA8(rdram, ctx);
        goto after_0;
    // 0x802AA9AC: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    after_0:
    // 0x802AA9B0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802AA9B4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802AA9B8: jr          $ra
    // 0x802AA9BC: nop

    return;
    // 0x802AA9BC: nop

;}
RECOMP_FUNC void func_802AA9C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AA9C0: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x802AA9C4: addiu       $v0, $v0, 0x7A3C
    ctx->r2 = ADD32(ctx->r2, 0X7A3C);
    // 0x802AA9C8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_802AA9CC:
    // 0x802AA9CC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802AA9D0: sll         $t6, $v1, 16
    ctx->r14 = S32(ctx->r3 << 16);
    // 0x802AA9D4: sra         $v1, $t6, 16
    ctx->r3 = S32(SIGNED(ctx->r14) >> 16);
    // 0x802AA9D8: slti        $at, $v1, 0xE
    ctx->r1 = SIGNED(ctx->r3) < 0XE ? 1 : 0;
    // 0x802AA9DC: sb          $zero, 0x4($v0)
    MEM_B(0X4, ctx->r2) = 0;
    // 0x802AA9E0: bne         $at, $zero, L_802AA9CC
    if (ctx->r1 != 0) {
        // 0x802AA9E4: addiu       $v0, $v0, 0x3C
        ctx->r2 = ADD32(ctx->r2, 0X3C);
            goto L_802AA9CC;
    }
    // 0x802AA9E4: addiu       $v0, $v0, 0x3C
    ctx->r2 = ADD32(ctx->r2, 0X3C);
    // 0x802AA9E8: jr          $ra
    // 0x802AA9EC: nop

    return;
    // 0x802AA9EC: nop

;}
RECOMP_FUNC void func_802AA9F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AA9F0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802AA9F4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802AA9F8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x802AA9FC: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x802AAA00: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x802AAA04: jal         0x802AA9C0
    // 0x802AAA08: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_802AA9C0(rdram, ctx);
        goto after_0;
    // 0x802AAA08: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x802AAA0C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802AAA10: addiu       $v0, $v0, 0x5160
    ctx->r2 = ADD32(ctx->r2, 0X5160);
    // 0x802AAA14: lh          $t6, 0x10($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X10);
    // 0x802AAA18: nop

    // 0x802AAA1C: beq         $t6, $zero, L_802AAB4C
    if (ctx->r14 == 0) {
        // 0x802AAA20: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_802AAB4C;
    }
    // 0x802AAA20: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802AAA24: lh          $t7, 0x16($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X16);
    // 0x802AAA28: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x802AAA2C: bne         $t7, $zero, L_802AAB48
    if (ctx->r15 != 0) {
        // 0x802AAA30: addiu       $v1, $v1, 0x54B8
        ctx->r3 = ADD32(ctx->r3, 0X54B8);
            goto L_802AAB48;
    }
    // 0x802AAA30: addiu       $v1, $v1, 0x54B8
    ctx->r3 = ADD32(ctx->r3, 0X54B8);
    // 0x802AAA34: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x802AAA38: addiu       $s0, $zero, 0x2
    ctx->r16 = ADD32(0, 0X2);
    // 0x802AAA3C: bne         $s0, $v0, L_802AAA70
    if (ctx->r16 != ctx->r2) {
        // 0x802AAA40: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_802AAA70;
    }
    // 0x802AAA40: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802AAA44: lw          $t8, 0x7C($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X7C);
    // 0x802AAA48: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x802AAA4C: lh          $t9, 0x0($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X0);
    // 0x802AAA50: addiu       $s1, $s1, -0x32B0
    ctx->r17 = ADD32(ctx->r17, -0X32B0);
    // 0x802AAA54: addu        $t0, $s1, $t9
    ctx->r8 = ADD32(ctx->r17, ctx->r25);
    // 0x802AAA58: lbu         $a0, 0x47($t0)
    ctx->r4 = MEM_BU(ctx->r8, 0X47);
    // 0x802AAA5C: jal         0x802AA140
    // 0x802AAA60: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_802AA140(rdram, ctx);
        goto after_1;
    // 0x802AAA60: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x802AAA64: b           L_802AAA98
    // 0x802AAA68: nop

        goto L_802AAA98;
    // 0x802AAA68: nop

    // 0x802AAA6C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
L_802AAA70:
    // 0x802AAA70: bne         $v0, $at, L_802AAA98
    if (ctx->r2 != ctx->r1) {
        // 0x802AAA74: nop
    
            goto L_802AAA98;
    }
    // 0x802AAA74: nop

    // 0x802AAA78: lw          $t1, 0x7C($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X7C);
    // 0x802AAA7C: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x802AAA80: lh          $t2, 0x0($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X0);
    // 0x802AAA84: addiu       $s1, $s1, -0x32B0
    ctx->r17 = ADD32(ctx->r17, -0X32B0);
    // 0x802AAA88: addu        $t3, $s1, $t2
    ctx->r11 = ADD32(ctx->r17, ctx->r10);
    // 0x802AAA8C: lbu         $a0, 0x47($t3)
    ctx->r4 = MEM_BU(ctx->r11, 0X47);
    // 0x802AAA90: jal         0x802AA140
    // 0x802AAA94: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_802AA140(rdram, ctx);
        goto after_2;
    // 0x802AAA94: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
L_802AAA98:
    // 0x802AAA98: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x802AAA9C: addiu       $v1, $v1, 0x55B8
    ctx->r3 = ADD32(ctx->r3, 0X55B8);
    // 0x802AAAA0: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x802AAAA4: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x802AAAA8: bne         $s0, $v0, L_802AAAD8
    if (ctx->r16 != ctx->r2) {
        // 0x802AAAAC: addiu       $s1, $s1, -0x32B0
        ctx->r17 = ADD32(ctx->r17, -0X32B0);
            goto L_802AAAD8;
    }
    // 0x802AAAAC: addiu       $s1, $s1, -0x32B0
    ctx->r17 = ADD32(ctx->r17, -0X32B0);
    // 0x802AAAB0: lw          $t4, 0x40($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X40);
    // 0x802AAAB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802AAAB8: lh          $t5, 0x0($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X0);
    // 0x802AAABC: nop

    // 0x802AAAC0: addu        $t6, $s1, $t5
    ctx->r14 = ADD32(ctx->r17, ctx->r13);
    // 0x802AAAC4: lbu         $a0, 0x47($t6)
    ctx->r4 = MEM_BU(ctx->r14, 0X47);
    // 0x802AAAC8: jal         0x802AA2B0
    // 0x802AAACC: nop

    func_802AA2B0(rdram, ctx);
        goto after_3;
    // 0x802AAACC: nop

    after_3:
    // 0x802AAAD0: b           L_802AAB08
    // 0x802AAAD4: addiu       $s0, $zero, 0x46
    ctx->r16 = ADD32(0, 0X46);
        goto L_802AAB08;
    // 0x802AAAD4: addiu       $s0, $zero, 0x46
    ctx->r16 = ADD32(0, 0X46);
L_802AAAD8:
    // 0x802AAAD8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802AAADC: bne         $v0, $at, L_802AAB08
    if (ctx->r2 != ctx->r1) {
        // 0x802AAAE0: addiu       $s0, $zero, 0x46
        ctx->r16 = ADD32(0, 0X46);
            goto L_802AAB08;
    }
    // 0x802AAAE0: addiu       $s0, $zero, 0x46
    ctx->r16 = ADD32(0, 0X46);
    // 0x802AAAE4: lw          $t7, 0x40($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X40);
    // 0x802AAAE8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802AAAEC: lh          $t8, 0x0($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X0);
    // 0x802AAAF0: nop

    // 0x802AAAF4: addu        $t9, $s1, $t8
    ctx->r25 = ADD32(ctx->r17, ctx->r24);
    // 0x802AAAF8: lbu         $a0, 0x47($t9)
    ctx->r4 = MEM_BU(ctx->r25, 0X47);
    // 0x802AAAFC: jal         0x802AA2B0
    // 0x802AAB00: nop

    func_802AA2B0(rdram, ctx);
        goto after_4;
    // 0x802AAB00: nop

    after_4:
    // 0x802AAB04: addiu       $s0, $zero, 0x46
    ctx->r16 = ADD32(0, 0X46);
L_802AAB08:
    // 0x802AAB08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_802AAB0C:
    // 0x802AAB0C: jal         0x802AA030
    // 0x802AAB10: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_802AA030(rdram, ctx);
        goto after_5;
    // 0x802AAB10: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_5:
    // 0x802AAB14: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x802AAB18: slti        $at, $s0, 0x50
    ctx->r1 = SIGNED(ctx->r16) < 0X50 ? 1 : 0;
    // 0x802AAB1C: bne         $at, $zero, L_802AAB0C
    if (ctx->r1 != 0) {
        // 0x802AAB20: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_802AAB0C;
    }
    // 0x802AAB20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802AAB24: negu        $s1, $s2
    ctx->r17 = SUB32(0, ctx->r18);
    // 0x802AAB28: addiu       $s2, $zero, 0x54
    ctx->r18 = ADD32(0, 0X54);
    // 0x802AAB2C: addiu       $s0, $zero, 0x50
    ctx->r16 = ADD32(0, 0X50);
    // 0x802AAB30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_802AAB34:
    // 0x802AAB34: jal         0x802AA030
    // 0x802AAB38: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_802AA030(rdram, ctx);
        goto after_6;
    // 0x802AAB38: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_6:
    // 0x802AAB3C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x802AAB40: bne         $s0, $s2, L_802AAB34
    if (ctx->r16 != ctx->r18) {
        // 0x802AAB44: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_802AAB34;
    }
    // 0x802AAB44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_802AAB48:
    // 0x802AAB48: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802AAB4C:
    // 0x802AAB4C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802AAB50: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802AAB54: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x802AAB58: jr          $ra
    // 0x802AAB5C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x802AAB5C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802AAB60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AAB60: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802AAB64: addiu       $v0, $v0, 0x5160
    ctx->r2 = ADD32(ctx->r2, 0X5160);
    // 0x802AAB68: lh          $t6, 0x10($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X10);
    // 0x802AAB6C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802AAB70: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x802AAB74: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802AAB78: bne         $t6, $zero, L_802AAB8C
    if (ctx->r14 != 0) {
        // 0x802AAB7C: sw          $ra, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r31;
            goto L_802AAB8C;
    }
    // 0x802AAB7C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802AAB80: lh          $t7, 0x16($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X16);
    // 0x802AAB84: nop

    // 0x802AAB88: beq         $t7, $zero, L_802AAC04
    if (ctx->r15 == 0) {
        // 0x802AAB8C: lui         $t9, 0x800D
        ctx->r25 = S32(0X800D << 16);
            goto L_802AAC04;
    }
L_802AAB8C:
    // 0x802AAB8C: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x802AAB90: addiu       $t9, $t9, -0x4F30
    ctx->r25 = ADD32(ctx->r25, -0X4F30);
    // 0x802AAB94: addiu       $t8, $zero, 0x525
    ctx->r24 = ADD32(0, 0X525);
    // 0x802AAB98: addiu       $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
    // 0x802AAB9C: addiu       $t1, $zero, 0xF4
    ctx->r9 = ADD32(0, 0XF4);
    // 0x802AABA0: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x802AABA4: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x802AABA8: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x802AABAC: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x802AABB0: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    // 0x802AABB4: addiu       $a1, $zero, -0x200
    ctx->r5 = ADD32(0, -0X200);
    // 0x802AABB8: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x802AABBC: jal         0x802A9E50
    // 0x802AABC0: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    func_802A9E50(rdram, ctx);
        goto after_0;
    // 0x802AABC0: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    after_0:
    // 0x802AABC4: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x802AABC8: addiu       $t3, $t3, -0x4EA0
    ctx->r11 = ADD32(ctx->r11, -0X4EA0);
    // 0x802AABCC: addiu       $t2, $zero, 0x525
    ctx->r10 = ADD32(0, 0X525);
    // 0x802AABD0: addiu       $t4, $zero, 0x10
    ctx->r12 = ADD32(0, 0X10);
    // 0x802AABD4: addiu       $t5, $zero, 0xF4
    ctx->r13 = ADD32(0, 0XF4);
    // 0x802AABD8: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x802AABDC: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x802AABE0: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x802AABE4: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x802AABE8: addiu       $a0, $zero, 0x3D
    ctx->r4 = ADD32(0, 0X3D);
    // 0x802AABEC: addiu       $a1, $zero, -0x200
    ctx->r5 = ADD32(0, -0X200);
    // 0x802AABF0: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x802AABF4: jal         0x802A9DA8
    // 0x802AABF8: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    func_802A9DA8(rdram, ctx);
        goto after_1;
    // 0x802AABF8: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    after_1:
    // 0x802AABFC: b           L_802AACF8
    // 0x802AAC00: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_802AACF8;
    // 0x802AAC00: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_802AAC04:
    // 0x802AAC04: lh          $t6, 0x14($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X14);
    // 0x802AAC08: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    // 0x802AAC0C: bne         $t6, $zero, L_802AAC8C
    if (ctx->r14 != 0) {
        // 0x802AAC10: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_802AAC8C;
    }
    // 0x802AAC10: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802AAC14: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x802AAC18: addiu       $t8, $t8, -0x4F30
    ctx->r24 = ADD32(ctx->r24, -0X4F30);
    // 0x802AAC1C: addiu       $t7, $zero, 0x525
    ctx->r15 = ADD32(0, 0X525);
    // 0x802AAC20: addiu       $t9, $zero, 0x10
    ctx->r25 = ADD32(0, 0X10);
    // 0x802AAC24: addiu       $t0, $zero, 0xF4
    ctx->r8 = ADD32(0, 0XF4);
    // 0x802AAC28: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x802AAC2C: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x802AAC30: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x802AAC34: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x802AAC38: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    // 0x802AAC3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802AAC40: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x802AAC44: jal         0x802A9E50
    // 0x802AAC48: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    func_802A9E50(rdram, ctx);
        goto after_2;
    // 0x802AAC48: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    after_2:
    // 0x802AAC4C: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x802AAC50: addiu       $t2, $t2, -0x4EA0
    ctx->r10 = ADD32(ctx->r10, -0X4EA0);
    // 0x802AAC54: addiu       $t1, $zero, 0x525
    ctx->r9 = ADD32(0, 0X525);
    // 0x802AAC58: addiu       $t3, $zero, 0x10
    ctx->r11 = ADD32(0, 0X10);
    // 0x802AAC5C: addiu       $t4, $zero, 0xF4
    ctx->r12 = ADD32(0, 0XF4);
    // 0x802AAC60: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x802AAC64: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x802AAC68: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x802AAC6C: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x802AAC70: addiu       $a0, $zero, 0x3D
    ctx->r4 = ADD32(0, 0X3D);
    // 0x802AAC74: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802AAC78: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x802AAC7C: jal         0x802A9DA8
    // 0x802AAC80: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    func_802A9DA8(rdram, ctx);
        goto after_3;
    // 0x802AAC80: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    after_3:
    // 0x802AAC84: b           L_802AACF8
    // 0x802AAC88: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_802AACF8;
    // 0x802AAC88: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_802AAC8C:
    // 0x802AAC8C: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x802AAC90: addiu       $t6, $t6, -0x4E58
    ctx->r14 = ADD32(ctx->r14, -0X4E58);
    // 0x802AAC94: addiu       $t5, $zero, 0x525
    ctx->r13 = ADD32(0, 0X525);
    // 0x802AAC98: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x802AAC9C: addiu       $t8, $zero, 0xF4
    ctx->r24 = ADD32(0, 0XF4);
    // 0x802AACA0: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x802AACA4: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x802AACA8: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x802AACAC: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x802AACB0: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x802AACB4: jal         0x802A9E50
    // 0x802AACB8: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    func_802A9E50(rdram, ctx);
        goto after_4;
    // 0x802AACB8: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    after_4:
    // 0x802AACBC: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x802AACC0: addiu       $t0, $t0, -0x4DC8
    ctx->r8 = ADD32(ctx->r8, -0X4DC8);
    // 0x802AACC4: addiu       $t9, $zero, 0x525
    ctx->r25 = ADD32(0, 0X525);
    // 0x802AACC8: addiu       $t1, $zero, 0x10
    ctx->r9 = ADD32(0, 0X10);
    // 0x802AACCC: addiu       $t2, $zero, 0xF4
    ctx->r10 = ADD32(0, 0XF4);
    // 0x802AACD0: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x802AACD4: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x802AACD8: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x802AACDC: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x802AACE0: addiu       $a0, $zero, 0x3D
    ctx->r4 = ADD32(0, 0X3D);
    // 0x802AACE4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802AACE8: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x802AACEC: jal         0x802A9DA8
    // 0x802AACF0: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    func_802A9DA8(rdram, ctx);
        goto after_5;
    // 0x802AACF0: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    after_5:
    // 0x802AACF4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_802AACF8:
    // 0x802AACF8: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x802AACFC: jr          $ra
    // 0x802AAD00: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x802AAD00: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_802AAD04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AAD04: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802AAD08: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x802AAD0C: lui         $s0, 0x802C
    ctx->r16 = S32(0X802C << 16);
    // 0x802AAD10: addiu       $s0, $s0, 0x53F8
    ctx->r16 = ADD32(ctx->r16, 0X53F8);
    // 0x802AAD14: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802AAD18: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x802AAD1C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x802AAD20: jal         0x80293E24
    // 0x802AAD24: sb          $zero, 0x2E($s0)
    MEM_B(0X2E, ctx->r16) = 0;
    func_80293E24(rdram, ctx);
        goto after_0;
    // 0x802AAD24: sb          $zero, 0x2E($s0)
    MEM_B(0X2E, ctx->r16) = 0;
    after_0:
    // 0x802AAD28: jal         0x80296240
    // 0x802AAD2C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80296240(rdram, ctx);
        goto after_1;
    // 0x802AAD2C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x802AAD30: jal         0x80296240
    // 0x802AAD34: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80296240(rdram, ctx);
        goto after_2;
    // 0x802AAD34: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x802AAD38: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x802AAD3C: lui         $t0, 0x802C
    ctx->r8 = S32(0X802C << 16);
    // 0x802AAD40: lhu         $t7, 0x8($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X8);
    // 0x802AAD44: nop

    // 0x802AAD48: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x802AAD4C: beq         $t8, $zero, L_802AAD58
    if (ctx->r24 == 0) {
        // 0x802AAD50: addiu       $t9, $zero, 0x1
        ctx->r25 = ADD32(0, 0X1);
            goto L_802AAD58;
    }
    // 0x802AAD50: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802AAD54: sb          $t9, 0x2E($s0)
    MEM_B(0X2E, ctx->r16) = ctx->r25;
L_802AAD58:
    // 0x802AAD58: lw          $t0, 0x54B8($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X54B8);
    // 0x802AAD5C: lbu         $a0, 0x2E($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2E);
    // 0x802AAD60: lw          $t1, 0xD4($t0)
    ctx->r9 = MEM_W(ctx->r8, 0XD4);
    // 0x802AAD64: nop

    // 0x802AAD68: lbu         $t2, 0x4($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X4);
    // 0x802AAD6C: jal         0x80295FA0
    // 0x802AAD70: andi        $a1, $t2, 0x7F
    ctx->r5 = ctx->r10 & 0X7F;
    func_80295FA0(rdram, ctx);
        goto after_3;
    // 0x802AAD70: andi        $a1, $t2, 0x7F
    ctx->r5 = ctx->r10 & 0X7F;
    after_3:
    // 0x802AAD74: lui         $t4, 0x802C
    ctx->r12 = S32(0X802C << 16);
    // 0x802AAD78: lw          $t4, 0x54B8($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X54B8);
    // 0x802AAD7C: lbu         $a0, 0x2E($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2E);
    // 0x802AAD80: lw          $t5, 0xD8($t4)
    ctx->r13 = MEM_W(ctx->r12, 0XD8);
    // 0x802AAD84: nop

    // 0x802AAD88: lbu         $a1, 0x18($t5)
    ctx->r5 = MEM_BU(ctx->r13, 0X18);
    // 0x802AAD8C: nop

    // 0x802AAD90: sra         $t6, $a1, 4
    ctx->r14 = S32(SIGNED(ctx->r5) >> 4);
    // 0x802AAD94: addiu       $a1, $t6, 0x1
    ctx->r5 = ADD32(ctx->r14, 0X1);
    // 0x802AAD98: andi        $t7, $a1, 0xFF
    ctx->r15 = ctx->r5 & 0XFF;
    // 0x802AAD9C: jal         0x80295AC4
    // 0x802AADA0: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    func_80295AC4(rdram, ctx);
        goto after_4;
    // 0x802AADA0: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    after_4:
    // 0x802AADA4: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x802AADA8: lh          $a2, 0x552C($a2)
    ctx->r6 = MEM_H(ctx->r6, 0X552C);
    // 0x802AADAC: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x802AADB0: lbu         $a3, 0x2E($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X2E);
    // 0x802AADB4: jal         0x802A9F98
    // 0x802AADB8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_802A9F98(rdram, ctx);
        goto after_5;
    // 0x802AADB8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_5:
    // 0x802AADBC: lui         $t9, 0x802C
    ctx->r25 = S32(0X802C << 16);
    // 0x802AADC0: lw          $t9, 0x55B8($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X55B8);
    // 0x802AADC4: lbu         $v0, 0x2E($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2E);
    // 0x802AADC8: lw          $t0, 0xD4($t9)
    ctx->r8 = MEM_W(ctx->r25, 0XD4);
    // 0x802AADCC: sltiu       $t8, $v0, 0x1
    ctx->r24 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x802AADD0: lbu         $t1, 0x4($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X4);
    // 0x802AADD4: andi        $a0, $t8, 0xFF
    ctx->r4 = ctx->r24 & 0XFF;
    // 0x802AADD8: jal         0x80295FA0
    // 0x802AADDC: andi        $a1, $t1, 0x7F
    ctx->r5 = ctx->r9 & 0X7F;
    func_80295FA0(rdram, ctx);
        goto after_6;
    // 0x802AADDC: andi        $a1, $t1, 0x7F
    ctx->r5 = ctx->r9 & 0X7F;
    after_6:
    // 0x802AADE0: lui         $t4, 0x802C
    ctx->r12 = S32(0X802C << 16);
    // 0x802AADE4: lw          $t4, 0x55B8($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X55B8);
    // 0x802AADE8: lbu         $v0, 0x2E($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2E);
    // 0x802AADEC: lw          $t5, 0xD8($t4)
    ctx->r13 = MEM_W(ctx->r12, 0XD8);
    // 0x802AADF0: sltiu       $t3, $v0, 0x1
    ctx->r11 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x802AADF4: lbu         $a1, 0x18($t5)
    ctx->r5 = MEM_BU(ctx->r13, 0X18);
    // 0x802AADF8: andi        $a0, $t3, 0xFF
    ctx->r4 = ctx->r11 & 0XFF;
    // 0x802AADFC: sra         $t6, $a1, 4
    ctx->r14 = S32(SIGNED(ctx->r5) >> 4);
    // 0x802AAE00: addiu       $a1, $t6, 0x1
    ctx->r5 = ADD32(ctx->r14, 0X1);
    // 0x802AAE04: andi        $t7, $a1, 0xFF
    ctx->r15 = ctx->r5 & 0XFF;
    // 0x802AAE08: jal         0x80295AC4
    // 0x802AAE0C: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    func_80295AC4(rdram, ctx);
        goto after_7;
    // 0x802AAE0C: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    after_7:
    // 0x802AAE10: lbu         $v0, 0x2E($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2E);
    // 0x802AAE14: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x802AAE18: sltiu       $t8, $v0, 0x1
    ctx->r24 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x802AAE1C: sll         $a3, $t8, 16
    ctx->r7 = S32(ctx->r24 << 16);
    // 0x802AAE20: sra         $t9, $a3, 16
    ctx->r25 = S32(SIGNED(ctx->r7) >> 16);
    // 0x802AAE24: lh          $a2, 0x55F0($a2)
    ctx->r6 = MEM_H(ctx->r6, 0X55F0);
    // 0x802AAE28: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x802AAE2C: or          $a3, $t9, $zero
    ctx->r7 = ctx->r25 | 0;
    // 0x802AAE30: jal         0x802A9F98
    // 0x802AAE34: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_802A9F98(rdram, ctx);
        goto after_8;
    // 0x802AAE34: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_8:
    // 0x802AAE38: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x802AAE3C: lw          $a0, 0x5534($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5534);
    // 0x802AAE40: lbu         $a1, 0x2E($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X2E);
    // 0x802AAE44: jal         0x802AA94C
    // 0x802AAE48: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    func_802AA94C(rdram, ctx);
        goto after_9;
    // 0x802AAE48: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_9:
    // 0x802AAE4C: lbu         $v0, 0x2E($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2E);
    // 0x802AAE50: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x802AAE54: sltiu       $t0, $v0, 0x1
    ctx->r8 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x802AAE58: sll         $a1, $t0, 16
    ctx->r5 = S32(ctx->r8 << 16);
    // 0x802AAE5C: sra         $t1, $a1, 16
    ctx->r9 = S32(SIGNED(ctx->r5) >> 16);
    // 0x802AAE60: lw          $a0, 0x55F8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X55F8);
    // 0x802AAE64: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    // 0x802AAE68: jal         0x802AA94C
    // 0x802AAE6C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    func_802AA94C(rdram, ctx);
        goto after_10;
    // 0x802AAE6C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_10:
    // 0x802AAE70: jal         0x802AAB60
    // 0x802AAE74: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_802AAB60(rdram, ctx);
        goto after_11;
    // 0x802AAE74: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_11:
    // 0x802AAE78: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    // 0x802AAE7C: jal         0x802AA030
    // 0x802AAE80: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_802AA030(rdram, ctx);
        goto after_12;
    // 0x802AAE80: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_12:
    // 0x802AAE84: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    // 0x802AAE88: jal         0x802AA030
    // 0x802AAE8C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_802AA030(rdram, ctx);
        goto after_13;
    // 0x802AAE8C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_13:
    // 0x802AAE90: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    // 0x802AAE94: jal         0x802AA030
    // 0x802AAE98: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_802AA030(rdram, ctx);
        goto after_14;
    // 0x802AAE98: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_14:
    // 0x802AAE9C: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    // 0x802AAEA0: jal         0x802AA030
    // 0x802AAEA4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_802AA030(rdram, ctx);
        goto after_15;
    // 0x802AAEA4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_15:
    // 0x802AAEA8: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x802AAEAC: jal         0x802AA030
    // 0x802AAEB0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_802AA030(rdram, ctx);
        goto after_16;
    // 0x802AAEB0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_16:
    // 0x802AAEB4: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    // 0x802AAEB8: jal         0x802AA030
    // 0x802AAEBC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_802AA030(rdram, ctx);
        goto after_17;
    // 0x802AAEBC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_17:
    // 0x802AAEC0: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    // 0x802AAEC4: jal         0x802AA030
    // 0x802AAEC8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_802AA030(rdram, ctx);
        goto after_18;
    // 0x802AAEC8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_18:
    // 0x802AAECC: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    // 0x802AAED0: jal         0x802AA030
    // 0x802AAED4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_802AA030(rdram, ctx);
        goto after_19;
    // 0x802AAED4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_19:
    // 0x802AAED8: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    // 0x802AAEDC: jal         0x802AA030
    // 0x802AAEE0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_802AA030(rdram, ctx);
        goto after_20;
    // 0x802AAEE0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_20:
    // 0x802AAEE4: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    // 0x802AAEE8: jal         0x802AA030
    // 0x802AAEEC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_802AA030(rdram, ctx);
        goto after_21;
    // 0x802AAEEC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_21:
    // 0x802AAEF0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x802AAEF4: jal         0x802AA030
    // 0x802AAEF8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_802AA030(rdram, ctx);
        goto after_22;
    // 0x802AAEF8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_22:
    // 0x802AAEFC: addiu       $s0, $s1, 0xD4
    ctx->r16 = ADD32(ctx->r17, 0XD4);
    // 0x802AAF00: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x802AAF04: jal         0x802AA04C
    // 0x802AAF08: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_802AA04C(rdram, ctx);
        goto after_23;
    // 0x802AAF08: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_23:
    // 0x802AAF0C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x802AAF10: jal         0x802AA04C
    // 0x802AAF14: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_802AA04C(rdram, ctx);
        goto after_24;
    // 0x802AAF14: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_24:
    // 0x802AAF18: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802AAF1C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x802AAF20: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x802AAF24: jr          $ra
    // 0x802AAF28: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x802AAF28: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802AAF2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AAF2C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802AAF30: lw          $v0, 0x50D8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X50D8);
    // 0x802AAF34: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802AAF38: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802AAF3C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802AAF40: beq         $v0, $at, L_802AAF74
    if (ctx->r2 == ctx->r1) {
        // 0x802AAF44: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_802AAF74;
    }
    // 0x802AAF44: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802AAF48: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802AAF4C: beq         $v0, $at, L_802AAF5C
    if (ctx->r2 == ctx->r1) {
        // 0x802AAF50: lui         $s0, 0x802C
        ctx->r16 = S32(0X802C << 16);
            goto L_802AAF5C;
    }
    // 0x802AAF50: lui         $s0, 0x802C
    ctx->r16 = S32(0X802C << 16);
    // 0x802AAF54: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x802AAF58: bne         $v0, $at, L_802AAFD0
    if (ctx->r2 != ctx->r1) {
        // 0x802AAF5C: addiu       $s0, $s0, 0x5160
        ctx->r16 = ADD32(ctx->r16, 0X5160);
            goto L_802AAFD0;
    }
L_802AAF5C:
    // 0x802AAF5C: addiu       $s0, $s0, 0x5160
    ctx->r16 = ADD32(ctx->r16, 0X5160);
    // 0x802AAF60: lh          $a0, 0xE($s0)
    ctx->r4 = MEM_H(ctx->r16, 0XE);
    // 0x802AAF64: jal         0x802AA678
    // 0x802AAF68: nop

    func_802AA678(rdram, ctx);
        goto after_0;
    // 0x802AAF68: nop

    after_0:
    // 0x802AAF6C: b           L_802AAF8C
    // 0x802AAF70: lh          $a0, 0xE($s0)
    ctx->r4 = MEM_H(ctx->r16, 0XE);
        goto L_802AAF8C;
    // 0x802AAF70: lh          $a0, 0xE($s0)
    ctx->r4 = MEM_H(ctx->r16, 0XE);
L_802AAF74:
    // 0x802AAF74: lui         $s0, 0x802C
    ctx->r16 = S32(0X802C << 16);
    // 0x802AAF78: addiu       $s0, $s0, 0x5160
    ctx->r16 = ADD32(ctx->r16, 0X5160);
    // 0x802AAF7C: lh          $a0, 0xE($s0)
    ctx->r4 = MEM_H(ctx->r16, 0XE);
    // 0x802AAF80: jal         0x802AA550
    // 0x802AAF84: nop

    func_802AA550(rdram, ctx);
        goto after_1;
    // 0x802AAF84: nop

    after_1:
    // 0x802AAF88: lh          $a0, 0xE($s0)
    ctx->r4 = MEM_H(ctx->r16, 0XE);
L_802AAF8C:
    // 0x802AAF8C: jal         0x802AA488
    // 0x802AAF90: nop

    func_802AA488(rdram, ctx);
        goto after_2;
    // 0x802AAF90: nop

    after_2:
    // 0x802AAF94: lh          $a0, 0xE($s0)
    ctx->r4 = MEM_H(ctx->r16, 0XE);
    // 0x802AAF98: jal         0x802AAD04
    // 0x802AAF9C: nop

    func_802AAD04(rdram, ctx);
        goto after_3;
    // 0x802AAF9C: nop

    after_3:
    // 0x802AAFA0: lh          $a0, 0xE($s0)
    ctx->r4 = MEM_H(ctx->r16, 0XE);
    // 0x802AAFA4: jal         0x802AA9F0
    // 0x802AAFA8: negu        $a0, $a0
    ctx->r4 = SUB32(0, ctx->r4);
    func_802AA9F0(rdram, ctx);
        goto after_4;
    // 0x802AAFA8: negu        $a0, $a0
    ctx->r4 = SUB32(0, ctx->r4);
    after_4:
    // 0x802AAFAC: lh          $t6, 0xE($s0)
    ctx->r14 = MEM_H(ctx->r16, 0XE);
    // 0x802AAFB0: nop

    // 0x802AAFB4: addiu       $t7, $t6, -0x10
    ctx->r15 = ADD32(ctx->r14, -0X10);
    // 0x802AAFB8: sh          $t7, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r15;
    // 0x802AAFBC: lh          $t8, 0xE($s0)
    ctx->r24 = MEM_H(ctx->r16, 0XE);
    // 0x802AAFC0: nop

    // 0x802AAFC4: bgez        $t8, L_802AAFD4
    if (SIGNED(ctx->r24) >= 0) {
        // 0x802AAFC8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802AAFD4;
    }
    // 0x802AAFC8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802AAFCC: sh          $zero, 0xE($s0)
    MEM_H(0XE, ctx->r16) = 0;
L_802AAFD0:
    // 0x802AAFD0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802AAFD4:
    // 0x802AAFD4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802AAFD8: jr          $ra
    // 0x802AAFDC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x802AAFDC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802AAFE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AAFE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802AAFE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802AAFE8: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x802AAFEC: jal         0x8002F1F0
    // 0x802AAFF0: sb          $zero, -0x4B5C($at)
    MEM_B(-0X4B5C, ctx->r1) = 0;
    func_8002F1F0(rdram, ctx);
        goto after_0;
    // 0x802AAFF0: sb          $zero, -0x4B5C($at)
    MEM_B(-0X4B5C, ctx->r1) = 0;
    after_0:
    // 0x802AAFF4: jal         0x8002F2AC
    // 0x802AAFF8: nop

    func_8002F2AC(rdram, ctx);
        goto after_1;
    // 0x802AAFF8: nop

    after_1:
    // 0x802AAFFC: jal         0x80021004
    // 0x802AB000: nop

    func_80021004(rdram, ctx);
        goto after_2;
    // 0x802AB000: nop

    after_2:
    // 0x802AB004: jal         0x80020270
    // 0x802AB008: nop

    func_80020270(rdram, ctx);
        goto after_3;
    // 0x802AB008: nop

    after_3:
    // 0x802AB00C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x802AB010: jal         0x8007AAE0
    // 0x802AB014: addiu       $a0, $a0, -0xA30
    ctx->r4 = ADD32(ctx->r4, -0XA30);
    func_8007AAE0(rdram, ctx);
        goto after_4;
    // 0x802AB014: addiu       $a0, $a0, -0xA30
    ctx->r4 = ADD32(ctx->r4, -0XA30);
    after_4:
    // 0x802AB018: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802AB01C: addiu       $v0, $v0, 0x5160
    ctx->r2 = ADD32(ctx->r2, 0X5160);
    // 0x802AB020: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802AB024: addiu       $t6, $zero, 0x32
    ctx->r14 = ADD32(0, 0X32);
    // 0x802AB028: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802AB02C: sh          $zero, 0x4($v0)
    MEM_H(0X4, ctx->r2) = 0;
    // 0x802AB030: sh          $zero, 0x8($v0)
    MEM_H(0X8, ctx->r2) = 0;
    // 0x802AB034: sh          $zero, 0xA($v0)
    MEM_H(0XA, ctx->r2) = 0;
    // 0x802AB038: sh          $t6, 0xE($v0)
    MEM_H(0XE, ctx->r2) = ctx->r14;
    // 0x802AB03C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x802AB040: sh          $zero, 0x10($v0)
    MEM_H(0X10, ctx->r2) = 0;
    // 0x802AB044: jr          $ra
    // 0x802AB048: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x802AB048: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802AB04C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AB04C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802AB050: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802AB054: jal         0x8002F2AC
    // 0x802AB058: nop

    func_8002F2AC(rdram, ctx);
        goto after_0;
    // 0x802AB058: nop

    after_0:
    // 0x802AB05C: jal         0x80020270
    // 0x802AB060: nop

    func_80020270(rdram, ctx);
        goto after_1;
    // 0x802AB060: nop

    after_1:
    // 0x802AB064: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802AB068: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802AB06C: jr          $ra
    // 0x802AB070: nop

    return;
    // 0x802AB070: nop

;}
RECOMP_FUNC void func_802AB074(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AB074: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802AB078: sll         $a2, $a0, 16
    ctx->r6 = S32(ctx->r4 << 16);
    // 0x802AB07C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802AB080: lbu         $a0, 0x5421($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X5421);
    // 0x802AB084: sra         $t6, $a2, 16
    ctx->r14 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802AB088: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x802AB08C: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x802AB090: bne         $a3, $a0, L_802AB09C
    if (ctx->r7 != ctx->r4) {
        // 0x802AB094: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_802AB09C;
    }
    // 0x802AB094: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x802AB098: or          $v1, $a3, $zero
    ctx->r3 = ctx->r7 | 0;
L_802AB09C:
    // 0x802AB09C: beq         $a2, $zero, L_802AB0B0
    if (ctx->r6 == 0) {
        // 0x802AB0A0: lui         $t7, 0x802C
        ctx->r15 = S32(0X802C << 16);
            goto L_802AB0B0;
    }
    // 0x802AB0A0: lui         $t7, 0x802C
    ctx->r15 = S32(0X802C << 16);
    // 0x802AB0A4: bne         $a0, $zero, L_802AB0B0
    if (ctx->r4 != 0) {
        // 0x802AB0A8: nop
    
            goto L_802AB0B0;
    }
    // 0x802AB0A8: nop

    // 0x802AB0AC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_802AB0B0:
    // 0x802AB0B0: addiu       $t7, $t7, 0x53F8
    ctx->r15 = ADD32(ctx->r15, 0X53F8);
    // 0x802AB0B4: addu        $a0, $a3, $t7
    ctx->r4 = ADD32(ctx->r7, ctx->r15);
    // 0x802AB0B8: lbu         $a1, 0x29($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X29);
    // 0x802AB0BC: nop

    // 0x802AB0C0: bne         $a3, $a1, L_802AB0CC
    if (ctx->r7 != ctx->r5) {
        // 0x802AB0C4: nop
    
            goto L_802AB0CC;
    }
    // 0x802AB0C4: nop

    // 0x802AB0C8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_802AB0CC:
    // 0x802AB0CC: beq         $a2, $zero, L_802AB0E0
    if (ctx->r6 == 0) {
        // 0x802AB0D0: nop
    
            goto L_802AB0E0;
    }
    // 0x802AB0D0: nop

    // 0x802AB0D4: bne         $a1, $zero, L_802AB0E0
    if (ctx->r5 != 0) {
        // 0x802AB0D8: nop
    
            goto L_802AB0E0;
    }
    // 0x802AB0D8: nop

    // 0x802AB0DC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_802AB0E0:
    // 0x802AB0E0: lbu         $v0, 0x2A($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X2A);
    // 0x802AB0E4: nop

    // 0x802AB0E8: bne         $a3, $v0, L_802AB0F4
    if (ctx->r7 != ctx->r2) {
        // 0x802AB0EC: nop
    
            goto L_802AB0F4;
    }
    // 0x802AB0EC: nop

    // 0x802AB0F0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_802AB0F4:
    // 0x802AB0F4: beq         $a2, $zero, L_802AB108
    if (ctx->r6 == 0) {
        // 0x802AB0F8: nop
    
            goto L_802AB108;
    }
    // 0x802AB0F8: nop

    // 0x802AB0FC: bne         $v0, $zero, L_802AB108
    if (ctx->r2 != 0) {
        // 0x802AB100: nop
    
            goto L_802AB108;
    }
    // 0x802AB100: nop

    // 0x802AB104: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_802AB108:
    // 0x802AB108: lbu         $v0, 0x2B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X2B);
    // 0x802AB10C: nop

    // 0x802AB110: bne         $a3, $v0, L_802AB11C
    if (ctx->r7 != ctx->r2) {
        // 0x802AB114: nop
    
            goto L_802AB11C;
    }
    // 0x802AB114: nop

    // 0x802AB118: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_802AB11C:
    // 0x802AB11C: beq         $a2, $zero, L_802AB130
    if (ctx->r6 == 0) {
        // 0x802AB120: nop
    
            goto L_802AB130;
    }
    // 0x802AB120: nop

    // 0x802AB124: bne         $v0, $zero, L_802AB130
    if (ctx->r2 != 0) {
        // 0x802AB128: nop
    
            goto L_802AB130;
    }
    // 0x802AB128: nop

    // 0x802AB12C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_802AB130:
    // 0x802AB130: lbu         $v0, 0x2C($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X2C);
    // 0x802AB134: nop

    // 0x802AB138: bne         $a3, $v0, L_802AB144
    if (ctx->r7 != ctx->r2) {
        // 0x802AB13C: nop
    
            goto L_802AB144;
    }
    // 0x802AB13C: nop

    // 0x802AB140: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_802AB144:
    // 0x802AB144: beq         $a2, $zero, L_802AB158
    if (ctx->r6 == 0) {
        // 0x802AB148: nop
    
            goto L_802AB158;
    }
    // 0x802AB148: nop

    // 0x802AB14C: bne         $v0, $zero, L_802AB15C
    if (ctx->r2 != 0) {
        // 0x802AB150: sll         $v0, $v1, 16
        ctx->r2 = S32(ctx->r3 << 16);
            goto L_802AB15C;
    }
    // 0x802AB150: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x802AB154: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_802AB158:
    // 0x802AB158: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
L_802AB15C:
    // 0x802AB15C: sra         $t8, $v0, 16
    ctx->r24 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802AB160: jr          $ra
    // 0x802AB164: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    return;
    // 0x802AB164: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
;}
RECOMP_FUNC void func_802AB168(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AB168: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802AB16C: sll         $a2, $a0, 16
    ctx->r6 = S32(ctx->r4 << 16);
    // 0x802AB170: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802AB174: lbu         $a0, 0x541C($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X541C);
    // 0x802AB178: sra         $t6, $a2, 16
    ctx->r14 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802AB17C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x802AB180: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x802AB184: bne         $a3, $a0, L_802AB190
    if (ctx->r7 != ctx->r4) {
        // 0x802AB188: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_802AB190;
    }
    // 0x802AB188: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x802AB18C: or          $v1, $a3, $zero
    ctx->r3 = ctx->r7 | 0;
L_802AB190:
    // 0x802AB190: beq         $a2, $zero, L_802AB1A4
    if (ctx->r6 == 0) {
        // 0x802AB194: lui         $t7, 0x802C
        ctx->r15 = S32(0X802C << 16);
            goto L_802AB1A4;
    }
    // 0x802AB194: lui         $t7, 0x802C
    ctx->r15 = S32(0X802C << 16);
    // 0x802AB198: bne         $a0, $zero, L_802AB1A4
    if (ctx->r4 != 0) {
        // 0x802AB19C: nop
    
            goto L_802AB1A4;
    }
    // 0x802AB19C: nop

    // 0x802AB1A0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_802AB1A4:
    // 0x802AB1A4: addiu       $t7, $t7, 0x53F8
    ctx->r15 = ADD32(ctx->r15, 0X53F8);
    // 0x802AB1A8: addu        $a0, $a3, $t7
    ctx->r4 = ADD32(ctx->r7, ctx->r15);
    // 0x802AB1AC: lbu         $a1, 0x24($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X24);
    // 0x802AB1B0: nop

    // 0x802AB1B4: bne         $a3, $a1, L_802AB1C0
    if (ctx->r7 != ctx->r5) {
        // 0x802AB1B8: nop
    
            goto L_802AB1C0;
    }
    // 0x802AB1B8: nop

    // 0x802AB1BC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_802AB1C0:
    // 0x802AB1C0: beq         $a2, $zero, L_802AB1D4
    if (ctx->r6 == 0) {
        // 0x802AB1C4: nop
    
            goto L_802AB1D4;
    }
    // 0x802AB1C4: nop

    // 0x802AB1C8: bne         $a1, $zero, L_802AB1D4
    if (ctx->r5 != 0) {
        // 0x802AB1CC: nop
    
            goto L_802AB1D4;
    }
    // 0x802AB1CC: nop

    // 0x802AB1D0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_802AB1D4:
    // 0x802AB1D4: lbu         $v0, 0x25($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X25);
    // 0x802AB1D8: nop

    // 0x802AB1DC: bne         $a3, $v0, L_802AB1E8
    if (ctx->r7 != ctx->r2) {
        // 0x802AB1E0: nop
    
            goto L_802AB1E8;
    }
    // 0x802AB1E0: nop

    // 0x802AB1E4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_802AB1E8:
    // 0x802AB1E8: beq         $a2, $zero, L_802AB1FC
    if (ctx->r6 == 0) {
        // 0x802AB1EC: nop
    
            goto L_802AB1FC;
    }
    // 0x802AB1EC: nop

    // 0x802AB1F0: bne         $v0, $zero, L_802AB1FC
    if (ctx->r2 != 0) {
        // 0x802AB1F4: nop
    
            goto L_802AB1FC;
    }
    // 0x802AB1F4: nop

    // 0x802AB1F8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_802AB1FC:
    // 0x802AB1FC: lbu         $v0, 0x26($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X26);
    // 0x802AB200: nop

    // 0x802AB204: bne         $a3, $v0, L_802AB210
    if (ctx->r7 != ctx->r2) {
        // 0x802AB208: nop
    
            goto L_802AB210;
    }
    // 0x802AB208: nop

    // 0x802AB20C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_802AB210:
    // 0x802AB210: beq         $a2, $zero, L_802AB224
    if (ctx->r6 == 0) {
        // 0x802AB214: nop
    
            goto L_802AB224;
    }
    // 0x802AB214: nop

    // 0x802AB218: bne         $v0, $zero, L_802AB224
    if (ctx->r2 != 0) {
        // 0x802AB21C: nop
    
            goto L_802AB224;
    }
    // 0x802AB21C: nop

    // 0x802AB220: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_802AB224:
    // 0x802AB224: lbu         $v0, 0x27($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X27);
    // 0x802AB228: nop

    // 0x802AB22C: bne         $a3, $v0, L_802AB238
    if (ctx->r7 != ctx->r2) {
        // 0x802AB230: nop
    
            goto L_802AB238;
    }
    // 0x802AB230: nop

    // 0x802AB234: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_802AB238:
    // 0x802AB238: beq         $a2, $zero, L_802AB24C
    if (ctx->r6 == 0) {
        // 0x802AB23C: nop
    
            goto L_802AB24C;
    }
    // 0x802AB23C: nop

    // 0x802AB240: bne         $v0, $zero, L_802AB250
    if (ctx->r2 != 0) {
        // 0x802AB244: sll         $v0, $v1, 16
        ctx->r2 = S32(ctx->r3 << 16);
            goto L_802AB250;
    }
    // 0x802AB244: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x802AB248: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_802AB24C:
    // 0x802AB24C: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
L_802AB250:
    // 0x802AB250: sra         $t8, $v0, 16
    ctx->r24 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802AB254: jr          $ra
    // 0x802AB258: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    return;
    // 0x802AB258: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
;}
RECOMP_FUNC void func_802AB25C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AB25C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802AB260: lbu         $v0, 0x5423($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X5423);
    // 0x802AB264: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802AB268: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x802AB26C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802AB270: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    // 0x802AB274: bne         $v0, $at, L_802AB280
    if (ctx->r2 != ctx->r1) {
        // 0x802AB278: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_802AB280;
    }
    // 0x802AB278: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x802AB27C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_802AB280:
    // 0x802AB280: beq         $a0, $zero, L_802AB294
    if (ctx->r4 == 0) {
        // 0x802AB284: nop
    
            goto L_802AB294;
    }
    // 0x802AB284: nop

    // 0x802AB288: bne         $v0, $zero, L_802AB298
    if (ctx->r2 != 0) {
        // 0x802AB28C: sll         $v0, $v1, 16
        ctx->r2 = S32(ctx->r3 << 16);
            goto L_802AB298;
    }
    // 0x802AB28C: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x802AB290: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_802AB294:
    // 0x802AB294: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
L_802AB298:
    // 0x802AB298: sra         $t8, $v0, 16
    ctx->r24 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802AB29C: jr          $ra
    // 0x802AB2A0: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    return;
    // 0x802AB2A0: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
;}
RECOMP_FUNC void func_802AB2A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AB2A4: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802AB2A8: lbu         $v0, 0x541E($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X541E);
    // 0x802AB2AC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802AB2B0: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x802AB2B4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802AB2B8: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    // 0x802AB2BC: bne         $v0, $at, L_802AB2C8
    if (ctx->r2 != ctx->r1) {
        // 0x802AB2C0: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_802AB2C8;
    }
    // 0x802AB2C0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x802AB2C4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_802AB2C8:
    // 0x802AB2C8: beq         $a0, $zero, L_802AB2DC
    if (ctx->r4 == 0) {
        // 0x802AB2CC: nop
    
            goto L_802AB2DC;
    }
    // 0x802AB2CC: nop

    // 0x802AB2D0: bne         $v0, $zero, L_802AB2E0
    if (ctx->r2 != 0) {
        // 0x802AB2D4: sll         $v0, $v1, 16
        ctx->r2 = S32(ctx->r3 << 16);
            goto L_802AB2E0;
    }
    // 0x802AB2D4: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x802AB2D8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_802AB2DC:
    // 0x802AB2DC: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
L_802AB2E0:
    // 0x802AB2E0: sra         $t8, $v0, 16
    ctx->r24 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802AB2E4: jr          $ra
    // 0x802AB2E8: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    return;
    // 0x802AB2E8: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
;}
RECOMP_FUNC void func_802AB2EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AB2EC: lui         $t8, 0x802C
    ctx->r24 = S32(0X802C << 16);
    // 0x802AB2F0: lbu         $t8, 0x5426($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X5426);
    // 0x802AB2F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802AB2F8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802AB2FC: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x802AB300: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    // 0x802AB304: bne         $t8, $zero, L_802AB31C
    if (ctx->r24 != 0) {
        // 0x802AB308: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802AB31C;
    }
    // 0x802AB308: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802AB30C: jal         0x802AB168
    // 0x802AB310: nop

    func_802AB168(rdram, ctx);
        goto after_0;
    // 0x802AB310: nop

    after_0:
    // 0x802AB314: b           L_802AB328
    // 0x802AB318: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802AB328;
    // 0x802AB318: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802AB31C:
    // 0x802AB31C: jal         0x802AB074
    // 0x802AB320: nop

    func_802AB074(rdram, ctx);
        goto after_1;
    // 0x802AB320: nop

    after_1:
    // 0x802AB324: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802AB328:
    // 0x802AB328: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802AB32C: jr          $ra
    // 0x802AB330: nop

    return;
    // 0x802AB330: nop

;}
RECOMP_FUNC void func_802AB334(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AB334: lui         $t8, 0x802C
    ctx->r24 = S32(0X802C << 16);
    // 0x802AB338: lbu         $t8, 0x5426($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X5426);
    // 0x802AB33C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802AB340: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802AB344: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x802AB348: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    // 0x802AB34C: bne         $t8, $zero, L_802AB364
    if (ctx->r24 != 0) {
        // 0x802AB350: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802AB364;
    }
    // 0x802AB350: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802AB354: jal         0x802AB074
    // 0x802AB358: nop

    func_802AB074(rdram, ctx);
        goto after_0;
    // 0x802AB358: nop

    after_0:
    // 0x802AB35C: b           L_802AB370
    // 0x802AB360: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802AB370;
    // 0x802AB360: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802AB364:
    // 0x802AB364: jal         0x802AB168
    // 0x802AB368: nop

    func_802AB168(rdram, ctx);
        goto after_1;
    // 0x802AB368: nop

    after_1:
    // 0x802AB36C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802AB370:
    // 0x802AB370: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802AB374: jr          $ra
    // 0x802AB378: nop

    return;
    // 0x802AB378: nop

;}
RECOMP_FUNC void func_802AB37C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AB37C: lui         $t8, 0x802C
    ctx->r24 = S32(0X802C << 16);
    // 0x802AB380: lbu         $t8, 0x5426($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X5426);
    // 0x802AB384: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802AB388: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802AB38C: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x802AB390: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    // 0x802AB394: bne         $t8, $zero, L_802AB3AC
    if (ctx->r24 != 0) {
        // 0x802AB398: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802AB3AC;
    }
    // 0x802AB398: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802AB39C: jal         0x802AB2A4
    // 0x802AB3A0: nop

    func_802AB2A4(rdram, ctx);
        goto after_0;
    // 0x802AB3A0: nop

    after_0:
    // 0x802AB3A4: b           L_802AB3B8
    // 0x802AB3A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802AB3B8;
    // 0x802AB3A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802AB3AC:
    // 0x802AB3AC: jal         0x802AB25C
    // 0x802AB3B0: nop

    func_802AB25C(rdram, ctx);
        goto after_1;
    // 0x802AB3B0: nop

    after_1:
    // 0x802AB3B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802AB3B8:
    // 0x802AB3B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802AB3BC: jr          $ra
    // 0x802AB3C0: nop

    return;
    // 0x802AB3C0: nop

;}
RECOMP_FUNC void func_802AB3C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AB3C4: lui         $t8, 0x802C
    ctx->r24 = S32(0X802C << 16);
    // 0x802AB3C8: lbu         $t8, 0x5426($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X5426);
    // 0x802AB3CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802AB3D0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802AB3D4: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x802AB3D8: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    // 0x802AB3DC: bne         $t8, $zero, L_802AB3F4
    if (ctx->r24 != 0) {
        // 0x802AB3E0: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802AB3F4;
    }
    // 0x802AB3E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802AB3E4: jal         0x802AB25C
    // 0x802AB3E8: nop

    func_802AB25C(rdram, ctx);
        goto after_0;
    // 0x802AB3E8: nop

    after_0:
    // 0x802AB3EC: b           L_802AB400
    // 0x802AB3F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802AB400;
    // 0x802AB3F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802AB3F4:
    // 0x802AB3F4: jal         0x802AB2A4
    // 0x802AB3F8: nop

    func_802AB2A4(rdram, ctx);
        goto after_1;
    // 0x802AB3F8: nop

    after_1:
    // 0x802AB3FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802AB400:
    // 0x802AB400: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802AB404: jr          $ra
    // 0x802AB408: nop

    return;
    // 0x802AB408: nop

;}
RECOMP_FUNC void func_802AB40C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AB40C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802AB410: addiu       $v0, $v0, 0x5160
    ctx->r2 = ADD32(ctx->r2, 0X5160);
    // 0x802AB414: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x802AB418: sll         $t8, $a1, 16
    ctx->r24 = S32(ctx->r5 << 16);
    // 0x802AB41C: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x802AB420: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x802AB424: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802AB428: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x802AB42C: addiu       $t1, $zero, 0x6
    ctx->r9 = ADD32(0, 0X6);
    // 0x802AB430: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    // 0x802AB434: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802AB438: sh          $t0, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r8;
    // 0x802AB43C: sh          $t1, 0x6($v0)
    MEM_H(0X6, ctx->r2) = ctx->r9;
    // 0x802AB440: sh          $t7, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r15;
    // 0x802AB444: bne         $t7, $zero, L_802AB460
    if (ctx->r15 != 0) {
        // 0x802AB448: sh          $t9, 0xA($v0)
        MEM_H(0XA, ctx->r2) = ctx->r25;
            goto L_802AB460;
    }
    // 0x802AB448: sh          $t9, 0xA($v0)
    MEM_H(0XA, ctx->r2) = ctx->r25;
    // 0x802AB44C: lui         $t2, 0x802C
    ctx->r10 = S32(0X802C << 16);
    // 0x802AB450: addu        $t2, $t2, $t9
    ctx->r10 = ADD32(ctx->r10, ctx->r25);
    // 0x802AB454: lbu         $t2, 0x541C($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X541C);
    // 0x802AB458: b           L_802AB474
    // 0x802AB45C: sh          $t2, 0xC($v0)
    MEM_H(0XC, ctx->r2) = ctx->r10;
        goto L_802AB474;
    // 0x802AB45C: sh          $t2, 0xC($v0)
    MEM_H(0XC, ctx->r2) = ctx->r10;
L_802AB460:
    // 0x802AB460: lui         $t3, 0x802C
    ctx->r11 = S32(0X802C << 16);
    // 0x802AB464: addu        $t3, $t3, $a1
    ctx->r11 = ADD32(ctx->r11, ctx->r5);
    // 0x802AB468: lbu         $t3, 0x5421($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X5421);
    // 0x802AB46C: nop

    // 0x802AB470: sh          $t3, 0xC($v0)
    MEM_H(0XC, ctx->r2) = ctx->r11;
L_802AB474:
    // 0x802AB474: jr          $ra
    // 0x802AB478: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    return;
    // 0x802AB478: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
;}
RECOMP_FUNC void func_802AB47C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AB47C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802AB480: jr          $ra
    // 0x802AB484: sh          $zero, 0x5170($at)
    MEM_H(0X5170, ctx->r1) = 0;
    return;
    // 0x802AB484: sh          $zero, 0x5170($at)
    MEM_H(0X5170, ctx->r1) = 0;
;}
RECOMP_FUNC void func_802AB488(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AB488: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802AB48C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802AB490: jr          $ra
    // 0x802AB494: sh          $t6, 0x5170($at)
    MEM_H(0X5170, ctx->r1) = ctx->r14;
    return;
    // 0x802AB494: sh          $t6, 0x5170($at)
    MEM_H(0X5170, ctx->r1) = ctx->r14;
;}
RECOMP_FUNC void func_802AB498(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AB498: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x802AB49C: addiu       $v1, $v1, 0x54B8
    ctx->r3 = ADD32(ctx->r3, 0X54B8);
    // 0x802AB4A0: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x802AB4A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802AB4A8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802AB4AC: beq         $a1, $v0, L_802AB4C0
    if (ctx->r5 == ctx->r2) {
        // 0x802AB4B0: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802AB4C0;
    }
    // 0x802AB4B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802AB4B4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802AB4B8: bne         $v0, $at, L_802AB504
    if (ctx->r2 != ctx->r1) {
        // 0x802AB4BC: nop
    
            goto L_802AB504;
    }
    // 0x802AB4BC: nop

L_802AB4C0:
    // 0x802AB4C0: lw          $t6, 0x4C($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X4C);
    // 0x802AB4C4: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x802AB4C8: lw          $v0, 0x0($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X0);
    // 0x802AB4CC: addiu       $a2, $a2, 0x53F8
    ctx->r6 = ADD32(ctx->r6, 0X53F8);
    // 0x802AB4D0: andi        $t7, $v0, 0x20
    ctx->r15 = ctx->r2 & 0X20;
    // 0x802AB4D4: bne         $t7, $zero, L_802AB4E4
    if (ctx->r15 != 0) {
        // 0x802AB4D8: andi        $t8, $v0, 0x2000
        ctx->r24 = ctx->r2 & 0X2000;
            goto L_802AB4E4;
    }
    // 0x802AB4D8: andi        $t8, $v0, 0x2000
    ctx->r24 = ctx->r2 & 0X2000;
    // 0x802AB4DC: beq         $t8, $zero, L_802AB504
    if (ctx->r24 == 0) {
        // 0x802AB4E0: nop
    
            goto L_802AB504;
    }
    // 0x802AB4E0: nop

L_802AB4E4:
    // 0x802AB4E4: lh          $t9, 0x3C($a2)
    ctx->r25 = MEM_H(ctx->r6, 0X3C);
    // 0x802AB4E8: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802AB4EC: bgez        $t9, L_802AB504
    if (SIGNED(ctx->r25) >= 0) {
        // 0x802AB4F0: addiu       $v0, $v0, 0x5160
        ctx->r2 = ADD32(ctx->r2, 0X5160);
            goto L_802AB504;
    }
    // 0x802AB4F0: addiu       $v0, $v0, 0x5160
    ctx->r2 = ADD32(ctx->r2, 0X5160);
    // 0x802AB4F4: lh          $v1, 0x10($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X10);
    // 0x802AB4F8: nop

    // 0x802AB4FC: sltiu       $t0, $v1, 0x1
    ctx->r8 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x802AB500: sh          $t0, 0x10($v0)
    MEM_H(0X10, ctx->r2) = ctx->r8;
L_802AB504:
    // 0x802AB504: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x802AB508: addiu       $a0, $a0, 0x55B8
    ctx->r4 = ADD32(ctx->r4, 0X55B8);
    // 0x802AB50C: lw          $v1, 0x4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X4);
    // 0x802AB510: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802AB514: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x802AB518: addiu       $a2, $a2, 0x53F8
    ctx->r6 = ADD32(ctx->r6, 0X53F8);
    // 0x802AB51C: beq         $a1, $v1, L_802AB530
    if (ctx->r5 == ctx->r3) {
        // 0x802AB520: addiu       $v0, $v0, 0x5160
        ctx->r2 = ADD32(ctx->r2, 0X5160);
            goto L_802AB530;
    }
    // 0x802AB520: addiu       $v0, $v0, 0x5160
    ctx->r2 = ADD32(ctx->r2, 0X5160);
    // 0x802AB524: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802AB528: bne         $v1, $at, L_802AB574
    if (ctx->r3 != ctx->r1) {
        // 0x802AB52C: nop
    
            goto L_802AB574;
    }
    // 0x802AB52C: nop

L_802AB530:
    // 0x802AB530: lw          $t1, 0x30($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X30);
    // 0x802AB534: nop

    // 0x802AB538: lw          $v1, 0x0($t1)
    ctx->r3 = MEM_W(ctx->r9, 0X0);
    // 0x802AB53C: nop

    // 0x802AB540: andi        $t2, $v1, 0x20
    ctx->r10 = ctx->r3 & 0X20;
    // 0x802AB544: bne         $t2, $zero, L_802AB554
    if (ctx->r10 != 0) {
        // 0x802AB548: andi        $t3, $v1, 0x2000
        ctx->r11 = ctx->r3 & 0X2000;
            goto L_802AB554;
    }
    // 0x802AB548: andi        $t3, $v1, 0x2000
    ctx->r11 = ctx->r3 & 0X2000;
    // 0x802AB54C: beq         $t3, $zero, L_802AB574
    if (ctx->r11 == 0) {
        // 0x802AB550: nop
    
            goto L_802AB574;
    }
    // 0x802AB550: nop

L_802AB554:
    // 0x802AB554: lh          $t4, 0x3C($a2)
    ctx->r12 = MEM_H(ctx->r6, 0X3C);
    // 0x802AB558: nop

    // 0x802AB55C: bgez        $t4, L_802AB574
    if (SIGNED(ctx->r12) >= 0) {
        // 0x802AB560: nop
    
            goto L_802AB574;
    }
    // 0x802AB560: nop

    // 0x802AB564: lh          $v1, 0x10($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X10);
    // 0x802AB568: nop

    // 0x802AB56C: sltiu       $t5, $v1, 0x1
    ctx->r13 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x802AB570: sh          $t5, 0x10($v0)
    MEM_H(0X10, ctx->r2) = ctx->r13;
L_802AB574:
    // 0x802AB574: lh          $t6, 0x12($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X12);
    // 0x802AB578: nop

    // 0x802AB57C: bne         $t6, $zero, L_802AB594
    if (ctx->r14 != 0) {
        // 0x802AB580: nop
    
            goto L_802AB594;
    }
    // 0x802AB580: nop

    // 0x802AB584: jal         0x802AB04C
    // 0x802AB588: nop

    func_802AB04C(rdram, ctx);
        goto after_0;
    // 0x802AB588: nop

    after_0:
    // 0x802AB58C: b           L_802AB658
    // 0x802AB590: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802AB658;
    // 0x802AB590: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802AB594:
    // 0x802AB594: jal         0x802AAF2C
    // 0x802AB598: nop

    func_802AAF2C(rdram, ctx);
        goto after_1;
    // 0x802AB598: nop

    after_1:
    // 0x802AB59C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802AB5A0: addiu       $v0, $v0, 0x5160
    ctx->r2 = ADD32(ctx->r2, 0X5160);
    // 0x802AB5A4: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x802AB5A8: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x802AB5AC: bne         $t7, $zero, L_802AB654
    if (ctx->r15 != 0) {
        // 0x802AB5B0: addiu       $a2, $a2, 0x53F8
        ctx->r6 = ADD32(ctx->r6, 0X53F8);
            goto L_802AB654;
    }
    // 0x802AB5B0: addiu       $a2, $a2, 0x53F8
    ctx->r6 = ADD32(ctx->r6, 0X53F8);
    // 0x802AB5B4: lh          $t8, 0x4($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X4);
    // 0x802AB5B8: nop

    // 0x802AB5BC: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x802AB5C0: sh          $t9, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r25;
    // 0x802AB5C4: lh          $t0, 0x4($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X4);
    // 0x802AB5C8: nop

    // 0x802AB5CC: bne         $t0, $zero, L_802AB658
    if (ctx->r8 != 0) {
        // 0x802AB5D0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802AB658;
    }
    // 0x802AB5D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802AB5D4: lh          $t2, 0x8($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X8);
    // 0x802AB5D8: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x802AB5DC: bne         $t2, $zero, L_802AB5F8
    if (ctx->r10 != 0) {
        // 0x802AB5E0: sh          $t1, 0x4($v0)
        MEM_H(0X4, ctx->r2) = ctx->r9;
            goto L_802AB5F8;
    }
    // 0x802AB5E0: sh          $t1, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r9;
    // 0x802AB5E4: lh          $t3, 0xA($v0)
    ctx->r11 = MEM_H(ctx->r2, 0XA);
    // 0x802AB5E8: nop

    // 0x802AB5EC: addu        $v1, $a2, $t3
    ctx->r3 = ADD32(ctx->r6, ctx->r11);
    // 0x802AB5F0: b           L_802AB608
    // 0x802AB5F4: addiu       $v1, $v1, 0x24
    ctx->r3 = ADD32(ctx->r3, 0X24);
        goto L_802AB608;
    // 0x802AB5F4: addiu       $v1, $v1, 0x24
    ctx->r3 = ADD32(ctx->r3, 0X24);
L_802AB5F8:
    // 0x802AB5F8: lh          $t4, 0xA($v0)
    ctx->r12 = MEM_H(ctx->r2, 0XA);
    // 0x802AB5FC: nop

    // 0x802AB600: addu        $v1, $a2, $t4
    ctx->r3 = ADD32(ctx->r6, ctx->r12);
    // 0x802AB604: addiu       $v1, $v1, 0x29
    ctx->r3 = ADD32(ctx->r3, 0X29);
L_802AB608:
    // 0x802AB608: lbu         $t5, 0x0($v1)
    ctx->r13 = MEM_BU(ctx->r3, 0X0);
    // 0x802AB60C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x802AB610: bne         $t5, $zero, L_802AB624
    if (ctx->r13 != 0) {
        // 0x802AB614: nop
    
            goto L_802AB624;
    }
    // 0x802AB614: nop

    // 0x802AB618: lh          $t6, 0xC($v0)
    ctx->r14 = MEM_H(ctx->r2, 0XC);
    // 0x802AB61C: b           L_802AB628
    // 0x802AB620: sb          $t6, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r14;
        goto L_802AB628;
    // 0x802AB620: sb          $t6, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r14;
L_802AB624:
    // 0x802AB624: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
L_802AB628:
    // 0x802AB628: lh          $t7, 0x6($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X6);
    // 0x802AB62C: nop

    // 0x802AB630: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x802AB634: sh          $t8, 0x6($v0)
    MEM_H(0X6, ctx->r2) = ctx->r24;
    // 0x802AB638: lh          $t9, 0x6($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X6);
    // 0x802AB63C: nop

    // 0x802AB640: bne         $t9, $zero, L_802AB658
    if (ctx->r25 != 0) {
        // 0x802AB644: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802AB658;
    }
    // 0x802AB644: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802AB648: lh          $t1, 0xC($v0)
    ctx->r9 = MEM_H(ctx->r2, 0XC);
    // 0x802AB64C: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x802AB650: sb          $t1, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r9;
L_802AB654:
    // 0x802AB654: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802AB658:
    // 0x802AB658: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802AB65C: jr          $ra
    // 0x802AB660: nop

    return;
    // 0x802AB660: nop

;}
RECOMP_FUNC void func_802AB664(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AB664: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802AB668: addiu       $v0, $v0, 0x53F8
    ctx->r2 = ADD32(ctx->r2, 0X53F8);
    // 0x802AB66C: lh          $a1, 0x1E($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X1E);
    // 0x802AB670: lui         $t1, 0x802C
    ctx->r9 = S32(0X802C << 16);
    // 0x802AB674: lw          $t1, 0x50D8($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X50D8);
    // 0x802AB678: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802AB67C: sra         $t8, $a1, 1
    ctx->r24 = S32(SIGNED(ctx->r5) >> 1);
    // 0x802AB680: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802AB684: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x802AB688: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x802AB68C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x802AB690: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    // 0x802AB694: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802AB698: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x802AB69C: bne         $t1, $at, L_802AB6A8
    if (ctx->r9 != ctx->r1) {
        // 0x802AB6A0: sra         $a1, $t9, 16
        ctx->r5 = S32(SIGNED(ctx->r25) >> 16);
            goto L_802AB6A8;
    }
    // 0x802AB6A0: sra         $a1, $t9, 16
    ctx->r5 = S32(SIGNED(ctx->r25) >> 16);
    // 0x802AB6A4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
L_802AB6A8:
    // 0x802AB6A8: lbu         $t2, 0x2E($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X2E);
    // 0x802AB6AC: addu        $t3, $v0, $a1
    ctx->r11 = ADD32(ctx->r2, ctx->r5);
    // 0x802AB6B0: bne         $t2, $zero, L_802AB6C0
    if (ctx->r10 != 0) {
        // 0x802AB6B4: addu        $t4, $v0, $a1
        ctx->r12 = ADD32(ctx->r2, ctx->r5);
            goto L_802AB6C0;
    }
    // 0x802AB6B4: addu        $t4, $v0, $a1
    ctx->r12 = ADD32(ctx->r2, ctx->r5);
    // 0x802AB6B8: b           L_802AB6C8
    // 0x802AB6BC: sb          $a0, 0x29($t3)
    MEM_B(0X29, ctx->r11) = ctx->r4;
        goto L_802AB6C8;
    // 0x802AB6BC: sb          $a0, 0x29($t3)
    MEM_B(0X29, ctx->r11) = ctx->r4;
L_802AB6C0:
    // 0x802AB6C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802AB6C4: sb          $a0, 0x24($t4)
    MEM_B(0X24, ctx->r12) = ctx->r4;
L_802AB6C8:
    // 0x802AB6C8: sll         $a0, $a2, 16
    ctx->r4 = S32(ctx->r6 << 16);
    // 0x802AB6CC: sra         $t5, $a0, 16
    ctx->r13 = S32(SIGNED(ctx->r4) >> 16);
    // 0x802AB6D0: jal         0x802AB40C
    // 0x802AB6D4: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    func_802AB40C(rdram, ctx);
        goto after_0;
    // 0x802AB6D4: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    after_0:
    // 0x802AB6D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802AB6DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802AB6E0: jr          $ra
    // 0x802AB6E4: nop

    return;
    // 0x802AB6E4: nop

;}
RECOMP_FUNC void func_802AB6E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AB6E8: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x802AB6EC: lw          $t6, 0x5408($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5408);
    // 0x802AB6F0: lui         $t7, 0x802C
    ctx->r15 = S32(0X802C << 16);
    // 0x802AB6F4: bne         $t6, $zero, L_802AB71C
    if (ctx->r14 != 0) {
        // 0x802AB6F8: lui         $t8, 0x802C
        ctx->r24 = S32(0X802C << 16);
            goto L_802AB71C;
    }
    // 0x802AB6F8: lui         $t8, 0x802C
    ctx->r24 = S32(0X802C << 16);
    // 0x802AB6FC: lw          $t7, 0x55E4($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X55E4);
    // 0x802AB700: nop

    // 0x802AB704: bne         $t7, $zero, L_802AB714
    if (ctx->r15 != 0) {
        // 0x802AB708: nop
    
            goto L_802AB714;
    }
    // 0x802AB708: nop

    // 0x802AB70C: jr          $ra
    // 0x802AB710: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x802AB710: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802AB714:
    // 0x802AB714: jr          $ra
    // 0x802AB718: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x802AB718: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802AB71C:
    // 0x802AB71C: lw          $t8, 0x55E4($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X55E4);
    // 0x802AB720: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x802AB724: bne         $t8, $zero, L_802AB734
    if (ctx->r24 != 0) {
        // 0x802AB728: nop
    
            goto L_802AB734;
    }
    // 0x802AB728: nop

    // 0x802AB72C: jr          $ra
    // 0x802AB730: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    return;
    // 0x802AB730: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_802AB734:
    // 0x802AB734: jr          $ra
    // 0x802AB738: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x802AB738: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_802AB73C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AB73C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802AB740: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802AB744: jal         0x802AB6E8
    // 0x802AB748: nop

    func_802AB6E8(rdram, ctx);
        goto after_0;
    // 0x802AB748: nop

    after_0:
    // 0x802AB74C: sll         $t6, $v0, 1
    ctx->r14 = S32(ctx->r2 << 1);
    // 0x802AB750: lui         $t7, 0x802C
    ctx->r15 = S32(0X802C << 16);
    // 0x802AB754: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x802AB758: lh          $t7, -0x1478($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X1478);
    // 0x802AB75C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802AB760: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x802AB764: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802AB768: jr          $ra
    // 0x802AB76C: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    return;
    // 0x802AB76C: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
;}
RECOMP_FUNC void func_802AB770(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AB770: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x802AB774: lw          $t6, 0x5408($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5408);
    // 0x802AB778: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x802AB77C: bne         $t6, $zero, L_802AB790
    if (ctx->r14 != 0) {
        // 0x802AB780: nop
    
            goto L_802AB790;
    }
    // 0x802AB780: nop

    // 0x802AB784: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802AB788: jr          $ra
    // 0x802AB78C: nop

    return;
    // 0x802AB78C: nop

L_802AB790:
    // 0x802AB790: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802AB794: nop

    // 0x802AB798: jr          $ra
    // 0x802AB79C: nop

    return;
    // 0x802AB79C: nop

;}
RECOMP_FUNC void func_802AB7A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AB7A0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802AB7A4: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x802AB7A8: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x802AB7AC: lui         $a0, 0x802B
    ctx->r4 = S32(0X802B << 16);
    // 0x802AB7B0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802AB7B4: addiu       $a0, $a0, -0x6348
    ctx->r4 = ADD32(ctx->r4, -0X6348);
    // 0x802AB7B8: addiu       $t6, $t6, -0x1E90
    ctx->r14 = ADD32(ctx->r14, -0X1E90);
    // 0x802AB7BC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x802AB7C0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x802AB7C4: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x802AB7C8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x802AB7CC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x802AB7D0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802AB7D4: lui         $a2, 0xC391
    ctx->r6 = S32(0XC391 << 16);
    // 0x802AB7D8: addiu       $a3, $zero, 0x108
    ctx->r7 = ADD32(0, 0X108);
    // 0x802AB7DC: jal         0x80028C74
    // 0x802AB7E0: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    func_80028C74(rdram, ctx);
        goto after_0;
    // 0x802AB7E0: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    after_0:
    // 0x802AB7E4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x802AB7E8: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x802AB7EC: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x802AB7F0: addiu       $a2, $a2, 0x50C0
    ctx->r6 = ADD32(ctx->r6, 0X50C0);
    // 0x802AB7F4: sw          $a1, 0x9C($v0)
    MEM_W(0X9C, ctx->r2) = ctx->r5;
    // 0x802AB7F8: lw          $t7, 0xC($a2)
    ctx->r15 = MEM_W(ctx->r6, 0XC);
    // 0x802AB7FC: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x802AB800: bne         $t7, $zero, L_802AB810
    if (ctx->r15 != 0) {
        // 0x802AB804: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_802AB810;
    }
    // 0x802AB804: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x802AB808: b           L_802AB818
    // 0x802AB80C: sw          $zero, 0x90($v0)
    MEM_W(0X90, ctx->r2) = 0;
        goto L_802AB818;
    // 0x802AB80C: sw          $zero, 0x90($v0)
    MEM_W(0X90, ctx->r2) = 0;
L_802AB810:
    // 0x802AB810: addiu       $t8, $zero, 0x33
    ctx->r24 = ADD32(0, 0X33);
    // 0x802AB814: sw          $t8, 0x90($v0)
    MEM_W(0X90, ctx->r2) = ctx->r24;
L_802AB818:
    // 0x802AB818: lw          $t9, 0xC($a2)
    ctx->r25 = MEM_W(ctx->r6, 0XC);
    // 0x802AB81C: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x802AB820: bne         $t9, $zero, L_802AB830
    if (ctx->r25 != 0) {
        // 0x802AB824: mov.s       $f14, $f12
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
            goto L_802AB830;
    }
    // 0x802AB824: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    // 0x802AB828: b           L_802AB834
    // 0x802AB82C: sw          $zero, 0x94($v0)
    MEM_W(0X94, ctx->r2) = 0;
        goto L_802AB834;
    // 0x802AB82C: sw          $zero, 0x94($v0)
    MEM_W(0X94, ctx->r2) = 0;
L_802AB830:
    // 0x802AB830: sw          $zero, 0x94($v0)
    MEM_W(0X94, ctx->r2) = 0;
L_802AB834:
    // 0x802AB834: lw          $t0, 0xC($a2)
    ctx->r8 = MEM_W(ctx->r6, 0XC);
    // 0x802AB838: lui         $a2, 0xC391
    ctx->r6 = S32(0XC391 << 16);
    // 0x802AB83C: bne         $t0, $zero, L_802AB850
    if (ctx->r8 != 0) {
        // 0x802AB840: addiu       $a3, $zero, 0x108
        ctx->r7 = ADD32(0, 0X108);
            goto L_802AB850;
    }
    // 0x802AB840: addiu       $a3, $zero, 0x108
    ctx->r7 = ADD32(0, 0X108);
    // 0x802AB844: addiu       $t1, $zero, 0x7F
    ctx->r9 = ADD32(0, 0X7F);
    // 0x802AB848: b           L_802AB854
    // 0x802AB84C: sw          $t1, 0x98($v0)
    MEM_W(0X98, ctx->r2) = ctx->r9;
        goto L_802AB854;
    // 0x802AB84C: sw          $t1, 0x98($v0)
    MEM_W(0X98, ctx->r2) = ctx->r9;
L_802AB850:
    // 0x802AB850: sw          $zero, 0x98($v0)
    MEM_W(0X98, ctx->r2) = 0;
L_802AB854:
    // 0x802AB854: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x802AB858: lui         $t4, 0x802C
    ctx->r12 = S32(0X802C << 16);
    // 0x802AB85C: and         $t3, $t2, $at
    ctx->r11 = ctx->r10 & ctx->r1;
    // 0x802AB860: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
    // 0x802AB864: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802AB868: addiu       $t4, $t4, -0x1E90
    ctx->r12 = ADD32(ctx->r12, -0X1E90);
    // 0x802AB86C: sw          $v1, 0x50D4($at)
    MEM_W(0X50D4, ctx->r1) = ctx->r3;
    // 0x802AB870: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x802AB874: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x802AB878: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802AB87C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x802AB880: jal         0x80028C74
    // 0x802AB884: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_80028C74(rdram, ctx);
        goto after_1;
    // 0x802AB884: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_1:
    // 0x802AB888: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x802AB88C: addiu       $v1, $v1, 0x4FDC
    ctx->r3 = ADD32(ctx->r3, 0X4FDC);
    // 0x802AB890: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x802AB894: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x802AB898: sw          $a1, 0x9C($v0)
    MEM_W(0X9C, ctx->r2) = ctx->r5;
    // 0x802AB89C: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x802AB8A0: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x802AB8A4: sw          $a1, 0x90($t6)
    MEM_W(0X90, ctx->r14) = ctx->r5;
    // 0x802AB8A8: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x802AB8AC: nop

    // 0x802AB8B0: sw          $a1, 0x94($t7)
    MEM_W(0X94, ctx->r15) = ctx->r5;
    // 0x802AB8B4: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x802AB8B8: nop

    // 0x802AB8BC: sw          $a1, 0x98($t8)
    MEM_W(0X98, ctx->r24) = ctx->r5;
    // 0x802AB8C0: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x802AB8C4: nop

    // 0x802AB8C8: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x802AB8CC: nop

    // 0x802AB8D0: and         $t0, $t9, $at
    ctx->r8 = ctx->r25 & ctx->r1;
    // 0x802AB8D4: sw          $t0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r8;
    // 0x802AB8D8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802AB8DC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x802AB8E0: jr          $ra
    // 0x802AB8E4: nop

    return;
    // 0x802AB8E4: nop

;}
RECOMP_FUNC void func_802AB8E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AB8E8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802AB8EC: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x802AB8F0: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x802AB8F4: lw          $t6, 0x50AC($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X50AC);
    // 0x802AB8F8: lui         $t7, 0x802B
    ctx->r15 = S32(0X802B << 16);
    // 0x802AB8FC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802AB900: addiu       $t7, $t7, -0x67F8
    ctx->r15 = ADD32(ctx->r15, -0X67F8);
    // 0x802AB904: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x802AB908: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x802AB90C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x802AB910: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802AB914: lui         $a2, 0xC391
    ctx->r6 = S32(0XC391 << 16);
    // 0x802AB918: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    // 0x802AB91C: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    // 0x802AB920: jal         0x80028C74
    // 0x802AB924: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_80028C74(rdram, ctx);
        goto after_0;
    // 0x802AB924: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x802AB928: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x802AB92C: addiu       $t8, $zero, 0xBE
    ctx->r24 = ADD32(0, 0XBE);
    // 0x802AB930: sw          $t8, 0x9C($v0)
    MEM_W(0X9C, ctx->r2) = ctx->r24;
    // 0x802AB934: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802AB938: swc1        $f12, 0x80($v0)
    MEM_W(0X80, ctx->r2) = ctx->f12.u32l;
    // 0x802AB93C: lwc1        $f4, 0x150C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X150C);
    // 0x802AB940: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x802AB944: addiu       $a0, $a0, 0x50A8
    ctx->r4 = ADD32(ctx->r4, 0X50A8);
    // 0x802AB948: swc1        $f4, 0x84($v0)
    MEM_W(0X84, ctx->r2) = ctx->f4.u32l;
    // 0x802AB94C: lw          $t9, 0xC($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XC);
    // 0x802AB950: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x802AB954: bne         $t9, $zero, L_802AB96C
    if (ctx->r25 != 0) {
        // 0x802AB958: addiu       $t2, $zero, 0x1
        ctx->r10 = ADD32(0, 0X1);
            goto L_802AB96C;
    }
    // 0x802AB958: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x802AB95C: lui         $t0, 0x802C
    ctx->r8 = S32(0X802C << 16);
    // 0x802AB960: addiu       $t0, $t0, -0x1CDC
    ctx->r8 = ADD32(ctx->r8, -0X1CDC);
    // 0x802AB964: b           L_802AB978
    // 0x802AB968: sw          $t0, 0x64($v0)
    MEM_W(0X64, ctx->r2) = ctx->r8;
        goto L_802AB978;
    // 0x802AB968: sw          $t0, 0x64($v0)
    MEM_W(0X64, ctx->r2) = ctx->r8;
L_802AB96C:
    // 0x802AB96C: lui         $t1, 0x802C
    ctx->r9 = S32(0X802C << 16);
    // 0x802AB970: addiu       $t1, $t1, -0x1CD0
    ctx->r9 = ADD32(ctx->r9, -0X1CD0);
    // 0x802AB974: sw          $t1, 0x64($v0)
    MEM_W(0X64, ctx->r2) = ctx->r9;
L_802AB978:
    // 0x802AB978: sw          $t2, 0x68($v1)
    MEM_W(0X68, ctx->r3) = ctx->r10;
    // 0x802AB97C: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    // 0x802AB980: lui         $t3, 0x802C
    ctx->r11 = S32(0X802C << 16);
    // 0x802AB984: lw          $t3, 0x50C4($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X50C4);
    // 0x802AB988: lui         $t4, 0x802B
    ctx->r12 = S32(0X802B << 16);
    // 0x802AB98C: addiu       $t4, $t4, -0x657C
    ctx->r12 = ADD32(ctx->r12, -0X657C);
    // 0x802AB990: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x802AB994: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802AB998: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x802AB99C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x802AB9A0: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    // 0x802AB9A4: lui         $a2, 0xC391
    ctx->r6 = S32(0XC391 << 16);
    // 0x802AB9A8: addiu       $a3, $zero, 0x180
    ctx->r7 = ADD32(0, 0X180);
    // 0x802AB9AC: jal         0x80028C74
    // 0x802AB9B0: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    func_80028C74(rdram, ctx);
        goto after_1;
    // 0x802AB9B0: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    after_1:
    // 0x802AB9B4: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x802AB9B8: addiu       $t5, $zero, 0xBE
    ctx->r13 = ADD32(0, 0XBE);
    // 0x802AB9BC: sw          $t5, 0x9C($v0)
    MEM_W(0X9C, ctx->r2) = ctx->r13;
    // 0x802AB9C0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802AB9C4: swc1        $f12, 0x80($v0)
    MEM_W(0X80, ctx->r2) = ctx->f12.u32l;
    // 0x802AB9C8: lwc1        $f6, 0x1510($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X1510);
    // 0x802AB9CC: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x802AB9D0: swc1        $f6, 0x84($v0)
    MEM_W(0X84, ctx->r2) = ctx->f6.u32l;
    // 0x802AB9D4: lw          $t6, 0x50CC($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X50CC);
    // 0x802AB9D8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802AB9DC: bne         $t6, $zero, L_802AB9F4
    if (ctx->r14 != 0) {
        // 0x802AB9E0: lui         $at, 0x802C
        ctx->r1 = S32(0X802C << 16);
            goto L_802AB9F4;
    }
    // 0x802AB9E0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802AB9E4: lui         $t7, 0x802C
    ctx->r15 = S32(0X802C << 16);
    // 0x802AB9E8: addiu       $t7, $t7, -0x1CDC
    ctx->r15 = ADD32(ctx->r15, -0X1CDC);
    // 0x802AB9EC: b           L_802ABA00
    // 0x802AB9F0: sw          $t7, 0x64($v0)
    MEM_W(0X64, ctx->r2) = ctx->r15;
        goto L_802ABA00;
    // 0x802AB9F0: sw          $t7, 0x64($v0)
    MEM_W(0X64, ctx->r2) = ctx->r15;
L_802AB9F4:
    // 0x802AB9F4: lui         $t8, 0x802C
    ctx->r24 = S32(0X802C << 16);
    // 0x802AB9F8: addiu       $t8, $t8, -0x1CD0
    ctx->r24 = ADD32(ctx->r24, -0X1CD0);
    // 0x802AB9FC: sw          $t8, 0x64($v0)
    MEM_W(0X64, ctx->r2) = ctx->r24;
L_802ABA00:
    // 0x802ABA00: sw          $t9, 0x68($v0)
    MEM_W(0X68, ctx->r2) = ctx->r25;
    // 0x802ABA04: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802ABA08: sw          $v0, 0x50C0($at)
    MEM_W(0X50C0, ctx->r1) = ctx->r2;
    // 0x802ABA0C: jr          $ra
    // 0x802ABA10: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x802ABA10: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_802ABA14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802ABA14: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x802ABA18: lw          $t6, 0x53F8($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X53F8);
    // 0x802ABA1C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x802ABA20: addiu       $t7, $t7, -0x2CF0
    ctx->r15 = ADD32(ctx->r15, -0X2CF0);
    // 0x802ABA24: bne         $t6, $t7, L_802ABA3C
    if (ctx->r14 != ctx->r15) {
        // 0x802ABA28: lui         $v0, 0x802C
        ctx->r2 = S32(0X802C << 16);
            goto L_802ABA3C;
    }
    // 0x802ABA28: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802ABA2C: addiu       $v0, $v0, 0x54B8
    ctx->r2 = ADD32(ctx->r2, 0X54B8);
    // 0x802ABA30: sw          $a0, 0x7C($v0)
    MEM_W(0X7C, ctx->r2) = ctx->r4;
    // 0x802ABA34: jr          $ra
    // 0x802ABA38: sw          $a0, 0x78($v0)
    MEM_W(0X78, ctx->r2) = ctx->r4;
    return;
    // 0x802ABA38: sw          $a0, 0x78($v0)
    MEM_W(0X78, ctx->r2) = ctx->r4;
L_802ABA3C:
    // 0x802ABA3C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802ABA40: addiu       $v0, $v0, 0x55B8
    ctx->r2 = ADD32(ctx->r2, 0X55B8);
    // 0x802ABA44: sw          $a0, 0x40($v0)
    MEM_W(0X40, ctx->r2) = ctx->r4;
    // 0x802ABA48: sw          $a0, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->r4;
    // 0x802ABA4C: jr          $ra
    // 0x802ABA50: nop

    return;
    // 0x802ABA50: nop

;}
RECOMP_FUNC void func_802ABA54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802ABA54: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x802ABA58: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x802ABA5C: lw          $t6, 0x53F8($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X53F8);
    // 0x802ABA60: addiu       $t7, $t7, -0x2CF0
    ctx->r15 = ADD32(ctx->r15, -0X2CF0);
    // 0x802ABA64: addiu       $t8, $t7, 0xA94
    ctx->r24 = ADD32(ctx->r15, 0XA94);
    // 0x802ABA68: bne         $t6, $t8, L_802ABA80
    if (ctx->r14 != ctx->r24) {
        // 0x802ABA6C: lui         $v0, 0x802C
        ctx->r2 = S32(0X802C << 16);
            goto L_802ABA80;
    }
    // 0x802ABA6C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802ABA70: addiu       $v0, $v0, 0x54B8
    ctx->r2 = ADD32(ctx->r2, 0X54B8);
    // 0x802ABA74: sw          $a0, 0x7C($v0)
    MEM_W(0X7C, ctx->r2) = ctx->r4;
    // 0x802ABA78: jr          $ra
    // 0x802ABA7C: sw          $a0, 0x78($v0)
    MEM_W(0X78, ctx->r2) = ctx->r4;
    return;
    // 0x802ABA7C: sw          $a0, 0x78($v0)
    MEM_W(0X78, ctx->r2) = ctx->r4;
L_802ABA80:
    // 0x802ABA80: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802ABA84: addiu       $v0, $v0, 0x55B8
    ctx->r2 = ADD32(ctx->r2, 0X55B8);
    // 0x802ABA88: sw          $a0, 0x40($v0)
    MEM_W(0X40, ctx->r2) = ctx->r4;
    // 0x802ABA8C: sw          $a0, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->r4;
    // 0x802ABA90: jr          $ra
    // 0x802ABA94: nop

    return;
    // 0x802ABA94: nop

;}
RECOMP_FUNC void func_802ABA98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802ABA98: lui         $t8, 0x802C
    ctx->r24 = S32(0X802C << 16);
    // 0x802ABA9C: lw          $t8, 0x53F8($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X53F8);
    // 0x802ABAA0: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x802ABAA4: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x802ABAA8: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x802ABAAC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802ABAB0: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x802ABAB4: bne         $t8, $t9, L_802ABAC8
    if (ctx->r24 != ctx->r25) {
        // 0x802ABAB8: or          $a0, $t7, $zero
        ctx->r4 = ctx->r15 | 0;
            goto L_802ABAC8;
    }
    // 0x802ABAB8: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x802ABABC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802ABAC0: jr          $ra
    // 0x802ABAC4: sw          $t7, 0x54BC($at)
    MEM_W(0X54BC, ctx->r1) = ctx->r15;
    return;
    // 0x802ABAC4: sw          $t7, 0x54BC($at)
    MEM_W(0X54BC, ctx->r1) = ctx->r15;
L_802ABAC8:
    // 0x802ABAC8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802ABACC: sw          $a0, 0x55BC($at)
    MEM_W(0X55BC, ctx->r1) = ctx->r4;
    // 0x802ABAD0: jr          $ra
    // 0x802ABAD4: nop

    return;
    // 0x802ABAD4: nop

;}
RECOMP_FUNC void func_802ABAD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802ABAD8: lui         $t8, 0x802C
    ctx->r24 = S32(0X802C << 16);
    // 0x802ABADC: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x802ABAE0: lw          $t8, 0x53F8($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X53F8);
    // 0x802ABAE4: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x802ABAE8: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x802ABAEC: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x802ABAF0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802ABAF4: addiu       $t0, $t9, 0xA94
    ctx->r8 = ADD32(ctx->r25, 0XA94);
    // 0x802ABAF8: bne         $t8, $t0, L_802ABB0C
    if (ctx->r24 != ctx->r8) {
        // 0x802ABAFC: or          $a0, $t7, $zero
        ctx->r4 = ctx->r15 | 0;
            goto L_802ABB0C;
    }
    // 0x802ABAFC: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x802ABB00: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802ABB04: jr          $ra
    // 0x802ABB08: sw          $t7, 0x54BC($at)
    MEM_W(0X54BC, ctx->r1) = ctx->r15;
    return;
    // 0x802ABB08: sw          $t7, 0x54BC($at)
    MEM_W(0X54BC, ctx->r1) = ctx->r15;
L_802ABB0C:
    // 0x802ABB0C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802ABB10: sw          $a0, 0x55BC($at)
    MEM_W(0X55BC, ctx->r1) = ctx->r4;
    // 0x802ABB14: jr          $ra
    // 0x802ABB18: nop

    return;
    // 0x802ABB18: nop

;}
RECOMP_FUNC void func_802ABB1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802ABB1C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802ABB20: addiu       $v0, $v0, 0x55B8
    ctx->r2 = ADD32(ctx->r2, 0X55B8);
    // 0x802ABB24: lw          $t6, 0x40($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X40);
    // 0x802ABB28: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x802ABB2C: addiu       $t7, $t6, 0x2
    ctx->r15 = ADD32(ctx->r14, 0X2);
    // 0x802ABB30: sw          $t7, 0x40($v0)
    MEM_W(0X40, ctx->r2) = ctx->r15;
    // 0x802ABB34: lh          $t9, 0x0($t7)
    ctx->r25 = MEM_H(ctx->r15, 0X0);
    // 0x802ABB38: nop

    // 0x802ABB3C: bne         $v1, $t9, L_802ABB50
    if (ctx->r3 != ctx->r25) {
        // 0x802ABB40: nop
    
            goto L_802ABB50;
    }
    // 0x802ABB40: nop

    // 0x802ABB44: lw          $t0, 0x3C($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X3C);
    // 0x802ABB48: nop

    // 0x802ABB4C: sw          $t0, 0x40($v0)
    MEM_W(0X40, ctx->r2) = ctx->r8;
L_802ABB50:
    // 0x802ABB50: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802ABB54: addiu       $v0, $v0, 0x54B8
    ctx->r2 = ADD32(ctx->r2, 0X54B8);
    // 0x802ABB58: lw          $t1, 0x7C($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X7C);
    // 0x802ABB5C: nop

    // 0x802ABB60: addiu       $t2, $t1, 0x2
    ctx->r10 = ADD32(ctx->r9, 0X2);
    // 0x802ABB64: sw          $t2, 0x7C($v0)
    MEM_W(0X7C, ctx->r2) = ctx->r10;
    // 0x802ABB68: lh          $t4, 0x0($t2)
    ctx->r12 = MEM_H(ctx->r10, 0X0);
    // 0x802ABB6C: nop

    // 0x802ABB70: bne         $v1, $t4, L_802ABB84
    if (ctx->r3 != ctx->r12) {
        // 0x802ABB74: nop
    
            goto L_802ABB84;
    }
    // 0x802ABB74: nop

    // 0x802ABB78: lw          $t5, 0x78($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X78);
    // 0x802ABB7C: nop

    // 0x802ABB80: sw          $t5, 0x7C($v0)
    MEM_W(0X7C, ctx->r2) = ctx->r13;
L_802ABB84:
    // 0x802ABB84: jr          $ra
    // 0x802ABB88: nop

    return;
    // 0x802ABB88: nop

;}
RECOMP_FUNC void func_802ABB8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802ABB8C: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x802ABB90: addiu       $v1, $v1, 0x55B8
    ctx->r3 = ADD32(ctx->r3, 0X55B8);
    // 0x802ABB94: lw          $t6, 0x40($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X40);
    // 0x802ABB98: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x802ABB9C: lh          $v0, 0x0($t6)
    ctx->r2 = MEM_H(ctx->r14, 0X0);
    // 0x802ABBA0: addiu       $a0, $a0, 0x358
    ctx->r4 = ADD32(ctx->r4, 0X358);
    // 0x802ABBA4: beq         $v0, $zero, L_802ABBD4
    if (ctx->r2 == 0) {
        // 0x802ABBA8: sll         $t7, $v0, 2
        ctx->r15 = S32(ctx->r2 << 2);
            goto L_802ABBD4;
    }
    // 0x802ABBA8: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x802ABBAC: subu        $t7, $t7, $v0
    ctx->r15 = SUB32(ctx->r15, ctx->r2);
    // 0x802ABBB0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x802ABBB4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x802ABBB8: subu        $t7, $t7, $v0
    ctx->r15 = SUB32(ctx->r15, ctx->r2);
    // 0x802ABBBC: addiu       $a0, $a0, 0x358
    ctx->r4 = ADD32(ctx->r4, 0X358);
    // 0x802ABBC0: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x802ABBC4: addu        $t8, $a0, $t7
    ctx->r24 = ADD32(ctx->r4, ctx->r15);
    // 0x802ABBC8: addiu       $t9, $t8, -0x58
    ctx->r25 = ADD32(ctx->r24, -0X58);
    // 0x802ABBCC: b           L_802ABBD8
    // 0x802ABBD0: sw          $t9, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r25;
        goto L_802ABBD8;
    // 0x802ABBD0: sw          $t9, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r25;
L_802ABBD4:
    // 0x802ABBD4: sw          $a0, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r4;
L_802ABBD8:
    // 0x802ABBD8: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x802ABBDC: addiu       $v1, $v1, 0x54B8
    ctx->r3 = ADD32(ctx->r3, 0X54B8);
    // 0x802ABBE0: lw          $t0, 0x7C($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X7C);
    // 0x802ABBE4: nop

    // 0x802ABBE8: lh          $v0, 0x0($t0)
    ctx->r2 = MEM_H(ctx->r8, 0X0);
    // 0x802ABBEC: nop

    // 0x802ABBF0: beq         $v0, $zero, L_802ABC18
    if (ctx->r2 == 0) {
        // 0x802ABBF4: sll         $t1, $v0, 2
        ctx->r9 = S32(ctx->r2 << 2);
            goto L_802ABC18;
    }
    // 0x802ABBF4: sll         $t1, $v0, 2
    ctx->r9 = S32(ctx->r2 << 2);
    // 0x802ABBF8: subu        $t1, $t1, $v0
    ctx->r9 = SUB32(ctx->r9, ctx->r2);
    // 0x802ABBFC: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x802ABC00: subu        $t1, $t1, $v0
    ctx->r9 = SUB32(ctx->r9, ctx->r2);
    // 0x802ABC04: sll         $t1, $t1, 3
    ctx->r9 = S32(ctx->r9 << 3);
    // 0x802ABC08: addu        $t2, $a0, $t1
    ctx->r10 = ADD32(ctx->r4, ctx->r9);
    // 0x802ABC0C: addiu       $t3, $t2, -0x58
    ctx->r11 = ADD32(ctx->r10, -0X58);
    // 0x802ABC10: jr          $ra
    // 0x802ABC14: sw          $t3, 0x48($v1)
    MEM_W(0X48, ctx->r3) = ctx->r11;
    return;
    // 0x802ABC14: sw          $t3, 0x48($v1)
    MEM_W(0X48, ctx->r3) = ctx->r11;
L_802ABC18:
    // 0x802ABC18: sw          $a0, 0x48($v1)
    MEM_W(0X48, ctx->r3) = ctx->r4;
    // 0x802ABC1C: jr          $ra
    // 0x802ABC20: nop

    return;
    // 0x802ABC20: nop

;}
RECOMP_FUNC void func_802ABC24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802ABC24: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x802ABC28: addiu       $v1, $v1, 0x55B8
    ctx->r3 = ADD32(ctx->r3, 0X55B8);
    // 0x802ABC2C: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x802ABC30: lw          $v0, 0x3C($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X3C);
    // 0x802ABC34: addiu       $a0, $a0, 0x54B8
    ctx->r4 = ADD32(ctx->r4, 0X54B8);
    // 0x802ABC38: lw          $t6, 0x78($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X78);
    // 0x802ABC3C: sw          $v0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->r2;
    // 0x802ABC40: lw          $v0, 0x40($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X40);
    // 0x802ABC44: lw          $t7, 0x7C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X7C);
    // 0x802ABC48: sw          $t6, 0x3C($v1)
    MEM_W(0X3C, ctx->r3) = ctx->r14;
    // 0x802ABC4C: sw          $v0, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r2;
    // 0x802ABC50: jr          $ra
    // 0x802ABC54: sw          $t7, 0x40($v1)
    MEM_W(0X40, ctx->r3) = ctx->r15;
    return;
    // 0x802ABC54: sw          $t7, 0x40($v1)
    MEM_W(0X40, ctx->r3) = ctx->r15;
;}
RECOMP_FUNC void func_802ABC58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802ABC58: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x802ABC5C: lhu         $t6, 0xB72($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB72);
    // 0x802ABC60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802ABC64: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x802ABC68: lui         $t8, 0x802C
    ctx->r24 = S32(0X802C << 16);
    // 0x802ABC6C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x802ABC70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802ABC74: sll         $t7, $t7, 1
    ctx->r15 = S32(ctx->r15 << 1);
    // 0x802ABC78: addiu       $t8, $t8, -0x1C8C
    ctx->r24 = ADD32(ctx->r24, -0X1C8C);
    // 0x802ABC7C: jal         0x802ABA14
    // 0x802ABC80: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    func_802ABA14(rdram, ctx);
        goto after_0;
    // 0x802ABC80: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    after_0:
    // 0x802ABC84: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x802ABC88: lhu         $t9, 0xB72($t9)
    ctx->r25 = MEM_HU(ctx->r25, 0XB72);
    // 0x802ABC8C: lui         $t1, 0x802C
    ctx->r9 = S32(0X802C << 16);
    // 0x802ABC90: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x802ABC94: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x802ABC98: sll         $t0, $t0, 1
    ctx->r8 = S32(ctx->r8 << 1);
    // 0x802ABC9C: addiu       $t1, $t1, -0x1C30
    ctx->r9 = ADD32(ctx->r9, -0X1C30);
    // 0x802ABCA0: jal         0x802ABA54
    // 0x802ABCA4: addu        $a0, $t0, $t1
    ctx->r4 = ADD32(ctx->r8, ctx->r9);
    func_802ABA54(rdram, ctx);
        goto after_1;
    // 0x802ABCA4: addu        $a0, $t0, $t1
    ctx->r4 = ADD32(ctx->r8, ctx->r9);
    after_1:
    // 0x802ABCA8: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x802ABCAC: lhu         $t2, 0xB72($t2)
    ctx->r10 = MEM_HU(ctx->r10, 0XB72);
    // 0x802ABCB0: nop

    // 0x802ABCB4: sltiu       $at, $t2, 0x9
    ctx->r1 = ctx->r10 < 0X9 ? 1 : 0;
    // 0x802ABCB8: beq         $at, $zero, L_802ABD18
    if (ctx->r1 == 0) {
        // 0x802ABCBC: sll         $t2, $t2, 2
        ctx->r10 = S32(ctx->r10 << 2);
            goto L_802ABD18;
    }
    // 0x802ABCBC: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x802ABCC0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802ABCC4: addu        $at, $at, $t2
    gpr jr_addend_802ABCD0 = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x802ABCC8: lw          $t2, 0x1514($at)
    ctx->r10 = ADD32(ctx->r1, 0X1514);
    // 0x802ABCCC: nop

    // 0x802ABCD0: jr          $t2
    // 0x802ABCD4: nop

    switch (jr_addend_802ABCD0 >> 2) {
        case 0: goto L_802ABCD8; break;
        case 1: goto L_802ABCD8; break;
        case 2: goto L_802ABCD8; break;
        case 3: goto L_802ABCD8; break;
        case 4: goto L_802ABCF0; break;
        case 5: goto L_802ABCF0; break;
        case 6: goto L_802ABCF0; break;
        case 7: goto L_802ABCF0; break;
        case 8: goto L_802ABD08; break;
        default: switch_error(__func__, 0x802ABCD0, 0x802C1514);
    }
    // 0x802ABCD4: nop

L_802ABCD8:
    // 0x802ABCD8: jal         0x802ABA98
    // 0x802ABCDC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_802ABA98(rdram, ctx);
        goto after_2;
    // 0x802ABCDC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_2:
    // 0x802ABCE0: jal         0x802ABAD8
    // 0x802ABCE4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_802ABAD8(rdram, ctx);
        goto after_3;
    // 0x802ABCE4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_3:
    // 0x802ABCE8: b           L_802ABD1C
    // 0x802ABCEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802ABD1C;
    // 0x802ABCEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802ABCF0:
    // 0x802ABCF0: jal         0x802ABA98
    // 0x802ABCF4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_802ABA98(rdram, ctx);
        goto after_4;
    // 0x802ABCF4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_4:
    // 0x802ABCF8: jal         0x802ABAD8
    // 0x802ABCFC: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_802ABAD8(rdram, ctx);
        goto after_5;
    // 0x802ABCFC: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_5:
    // 0x802ABD00: b           L_802ABD1C
    // 0x802ABD04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802ABD1C;
    // 0x802ABD04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802ABD08:
    // 0x802ABD08: jal         0x802ABA98
    // 0x802ABD0C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_802ABA98(rdram, ctx);
        goto after_6;
    // 0x802ABD0C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_6:
    // 0x802ABD10: jal         0x802ABAD8
    // 0x802ABD14: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_802ABAD8(rdram, ctx);
        goto after_7;
    // 0x802ABD14: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_7:
L_802ABD18:
    // 0x802ABD18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802ABD1C:
    // 0x802ABD1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802ABD20: jr          $ra
    // 0x802ABD24: nop

    return;
    // 0x802ABD24: nop

;}
RECOMP_FUNC void func_802ABD28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802ABD28: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802ABD2C: lwc1        $f0, 0x5108($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5108);
    // 0x802ABD30: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x802ABD34: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802ABD38: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802ABD3C: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x802ABD40: addiu       $v0, $v0, 0x50A8
    ctx->r2 = ADD32(ctx->r2, 0X50A8);
    // 0x802ABD44: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x802ABD48: nop

    // 0x802ABD4C: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x802ABD50: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802ABD54: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802ABD58: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x802ABD5C: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x802ABD60: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802ABD64: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x802ABD68: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x802ABD6C: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x802ABD70: sh          $t7, 0x10($v0)
    MEM_H(0X10, ctx->r2) = ctx->r15;
    // 0x802ABD74: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x802ABD78: nop

    // 0x802ABD7C: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x802ABD80: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802ABD84: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802ABD88: nop

    // 0x802ABD8C: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x802ABD90: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x802ABD94: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x802ABD98: jr          $ra
    // 0x802ABD9C: sh          $t9, 0x12($v0)
    MEM_H(0X12, ctx->r2) = ctx->r25;
    return;
    // 0x802ABD9C: sh          $t9, 0x12($v0)
    MEM_H(0X12, ctx->r2) = ctx->r25;
;}
RECOMP_FUNC void func_802ABDA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802ABDA0: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x802ABDA4: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x802ABDA8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802ABDAC: lwc1        $f6, 0x5158($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X5158);
    // 0x802ABDB0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802ABDB4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802ABDB8: lwc1        $f17, 0x1538($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X1538);
    // 0x802ABDBC: lwc1        $f16, 0x153C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X153C);
    // 0x802ABDC0: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x802ABDC4: sub.d       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f4.d - ctx->f8.d;
    // 0x802ABDC8: lui         $at, 0x4049
    ctx->r1 = S32(0X4049 << 16);
    // 0x802ABDCC: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x802ABDD0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x802ABDD4: add.d       $f0, $f10, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f0.d = ctx->f10.d + ctx->f16.d;
    // 0x802ABDD8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802ABDDC: mul.d       $f6, $f0, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f18.d); 
    ctx->f6.d = MUL_D(ctx->f0.d, ctx->f18.d);
    // 0x802ABDE0: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802ABDE4: addiu       $v0, $v0, 0x50C0
    ctx->r2 = ADD32(ctx->r2, 0X50C0);
    // 0x802ABDE8: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x802ABDEC: nop

    // 0x802ABDF0: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x802ABDF4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802ABDF8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802ABDFC: lui         $at, 0x402E
    ctx->r1 = S32(0X402E << 16);
    // 0x802ABE00: cvt.w.d     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.u32l = CVT_W_D(ctx->f6.d);
    // 0x802ABE04: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x802ABE08: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x802ABE0C: mfc1        $t7, $f4
    ctx->r15 = (int32_t)ctx->f4.u32l;
    // 0x802ABE10: mul.d       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f0.d, ctx->f8.d);
    // 0x802ABE14: sh          $t7, 0x10($v0)
    MEM_H(0X10, ctx->r2) = ctx->r15;
    // 0x802ABE18: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x802ABE1C: nop

    // 0x802ABE20: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x802ABE24: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802ABE28: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802ABE2C: nop

    // 0x802ABE30: cvt.w.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_D(ctx->f10.d);
    // 0x802ABE34: mfc1        $t9, $f16
    ctx->r25 = (int32_t)ctx->f16.u32l;
    // 0x802ABE38: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x802ABE3C: jr          $ra
    // 0x802ABE40: sh          $t9, 0x12($v0)
    MEM_H(0X12, ctx->r2) = ctx->r25;
    return;
    // 0x802ABE40: sh          $t9, 0x12($v0)
    MEM_H(0X12, ctx->r2) = ctx->r25;
;}
RECOMP_FUNC void func_802ABE44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802ABE44: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x802ABE48: lhu         $t6, 0xB80($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB80);
    // 0x802ABE4C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802ABE50: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x802ABE54: addiu       $v0, $v0, 0x50E0
    ctx->r2 = ADD32(ctx->r2, 0X50E0);
    // 0x802ABE58: bgez        $t6, L_802ABE74
    if (SIGNED(ctx->r14) >= 0) {
        // 0x802ABE5C: cvt.d.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
            goto L_802ABE74;
    }
    // 0x802ABE5C: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x802ABE60: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x802ABE64: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x802ABE68: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802ABE6C: nop

    // 0x802ABE70: add.d       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = ctx->f6.d + ctx->f8.d;
L_802ABE74:
    // 0x802ABE74: lui         $at, 0x3FD0
    ctx->r1 = S32(0X3FD0 << 16);
    // 0x802ABE78: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x802ABE7C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802ABE80: lui         $at, 0x4020
    ctx->r1 = S32(0X4020 << 16);
    // 0x802ABE84: mul.d       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f6.d, ctx->f10.d);
    // 0x802ABE88: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x802ABE8C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802ABE90: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802ABE94: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x802ABE98: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x802ABE9C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802ABEA0: cvt.d.s     $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f2.d = CVT_D_S(ctx->f18.fl);
    // 0x802ABEA4: mul.d       $f6, $f2, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = MUL_D(ctx->f2.d, ctx->f8.d);
    // 0x802ABEA8: lwc1        $f4, 0x28($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X28);
    // 0x802ABEAC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802ABEB0: cvt.d.s     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f12.d = CVT_D_S(ctx->f4.fl);
    // 0x802ABEB4: lwc1        $f4, 0x1544($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X1544);
    // 0x802ABEB8: add.d       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f6.d + ctx->f10.d;
    // 0x802ABEBC: lwc1        $f5, 0x1540($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X1540);
    // 0x802ABEC0: mul.d       $f18, $f16, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f12.d); 
    ctx->f18.d = MUL_D(ctx->f16.d, ctx->f12.d);
    // 0x802ABEC4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802ABEC8: lwc1        $f7, 0x1548($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X1548);
    // 0x802ABECC: lwc1        $f6, 0x154C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X154C);
    // 0x802ABED0: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x802ABED4: mul.d       $f8, $f2, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f4.d); 
    ctx->f8.d = MUL_D(ctx->f2.d, ctx->f4.d);
    // 0x802ABED8: cvt.s.d     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f0.fl = CVT_S_D(ctx->f18.d);
    // 0x802ABEDC: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x802ABEE0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x802ABEE4: lui         $at, 0x4008
    ctx->r1 = S32(0X4008 << 16);
    // 0x802ABEE8: add.d       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = ctx->f8.d + ctx->f6.d;
    // 0x802ABEEC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802ABEF0: mul.d       $f16, $f10, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f12.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f12.d);
    // 0x802ABEF4: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x802ABEF8: sub.d       $f4, $f18, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f12.d); 
    ctx->f4.d = ctx->f18.d - ctx->f12.d;
    // 0x802ABEFC: swc1        $f0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f0.u32l;
    // 0x802ABF00: swc1        $f0, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->f0.u32l;
    // 0x802ABF04: mul.d       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f8.d);
    // 0x802ABF08: cvt.s.d     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f14.fl = CVT_S_D(ctx->f16.d);
    // 0x802ABF0C: swc1        $f14, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f14.u32l;
    // 0x802ABF10: swc1        $f14, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->f14.u32l;
    // 0x802ABF14: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x802ABF18: nop

    // 0x802ABF1C: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x802ABF20: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802ABF24: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802ABF28: nop

    // 0x802ABF2C: cvt.w.d     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = CVT_W_D(ctx->f6.d);
    // 0x802ABF30: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    // 0x802ABF34: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x802ABF38: jr          $ra
    // 0x802ABF3C: sh          $t8, 0x26($v0)
    MEM_H(0X26, ctx->r2) = ctx->r24;
    return;
    // 0x802ABF3C: sh          $t8, 0x26($v0)
    MEM_H(0X26, ctx->r2) = ctx->r24;
;}
RECOMP_FUNC void func_802ABF40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802ABF40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802ABF44: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802ABF48: jal         0x802ABE44
    // 0x802ABF4C: nop

    func_802ABE44(rdram, ctx);
        goto after_0;
    // 0x802ABF4C: nop

    after_0:
    // 0x802ABF50: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802ABF54: addiu       $v0, $v0, 0x50E0
    ctx->r2 = ADD32(ctx->r2, 0X50E0);
    // 0x802ABF58: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802ABF5C: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x802ABF60: lwc1        $f1, 0x1550($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X1550);
    // 0x802ABF64: lwc1        $f0, 0x1554($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X1554);
    // 0x802ABF68: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x802ABF6C: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x802ABF70: lwc1        $f16, 0x4($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X4);
    // 0x802ABF74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802ABF78: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x802ABF7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802ABF80: mul.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f0.d);
    // 0x802ABF84: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x802ABF88: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
    // 0x802ABF8C: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x802ABF90: jr          $ra
    // 0x802ABF94: swc1        $f6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f6.u32l;
    return;
    // 0x802ABF94: swc1        $f6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f6.u32l;
;}
RECOMP_FUNC void func_802ABF98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802ABF98: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x802ABF9C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802ABFA0: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x802ABFA4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802ABFA8: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802ABFAC: addiu       $v0, $v0, 0x50E0
    ctx->r2 = ADD32(ctx->r2, 0X50E0);
    // 0x802ABFB0: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
    // 0x802ABFB4: jr          $ra
    // 0x802ABFB8: swc1        $f6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f6.u32l;
    return;
    // 0x802ABFB8: swc1        $f6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f6.u32l;
;}
RECOMP_FUNC void func_802ABFBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802ABFBC: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x802ABFC0: lhu         $t6, 0xB80($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB80);
    // 0x802ABFC4: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802ABFC8: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x802ABFCC: addiu       $v0, $v0, 0x5130
    ctx->r2 = ADD32(ctx->r2, 0X5130);
    // 0x802ABFD0: bgez        $t6, L_802ABFEC
    if (SIGNED(ctx->r14) >= 0) {
        // 0x802ABFD4: cvt.d.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
            goto L_802ABFEC;
    }
    // 0x802ABFD4: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x802ABFD8: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x802ABFDC: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x802ABFE0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802ABFE4: nop

    // 0x802ABFE8: add.d       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = ctx->f6.d + ctx->f8.d;
L_802ABFEC:
    // 0x802ABFEC: lui         $at, 0x3FD0
    ctx->r1 = S32(0X3FD0 << 16);
    // 0x802ABFF0: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x802ABFF4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802ABFF8: lui         $at, 0x4020
    ctx->r1 = S32(0X4020 << 16);
    // 0x802ABFFC: mul.d       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f6.d, ctx->f10.d);
    // 0x802AC000: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x802AC004: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802AC008: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802AC00C: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x802AC010: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x802AC014: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802AC018: cvt.d.s     $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f2.d = CVT_D_S(ctx->f18.fl);
    // 0x802AC01C: mul.d       $f6, $f2, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = MUL_D(ctx->f2.d, ctx->f8.d);
    // 0x802AC020: lwc1        $f4, 0x28($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X28);
    // 0x802AC024: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802AC028: cvt.d.s     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f12.d = CVT_D_S(ctx->f4.fl);
    // 0x802AC02C: lwc1        $f4, 0x155C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X155C);
    // 0x802AC030: add.d       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f6.d + ctx->f10.d;
    // 0x802AC034: lwc1        $f5, 0x1558($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X1558);
    // 0x802AC038: mul.d       $f18, $f16, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f12.d); 
    ctx->f18.d = MUL_D(ctx->f16.d, ctx->f12.d);
    // 0x802AC03C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802AC040: lwc1        $f7, 0x1560($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X1560);
    // 0x802AC044: lwc1        $f6, 0x1564($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X1564);
    // 0x802AC048: mul.d       $f8, $f2, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f4.d); 
    ctx->f8.d = MUL_D(ctx->f2.d, ctx->f4.d);
    // 0x802AC04C: cvt.s.d     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f0.fl = CVT_S_D(ctx->f18.d);
    // 0x802AC050: swc1        $f0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f0.u32l;
    // 0x802AC054: add.d       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = ctx->f8.d + ctx->f6.d;
    // 0x802AC058: mul.d       $f16, $f10, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f12.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f12.d);
    // 0x802AC05C: cvt.s.d     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f14.fl = CVT_S_D(ctx->f16.d);
    // 0x802AC060: jr          $ra
    // 0x802AC064: swc1        $f14, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f14.u32l;
    return;
    // 0x802AC064: swc1        $f14, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f14.u32l;
;}
RECOMP_FUNC void func_802AC068(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AC068: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802AC06C: lw          $v0, 0x54B8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X54B8);
    // 0x802AC070: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802AC074: lw          $a0, 0xD8($v0)
    ctx->r4 = MEM_W(ctx->r2, 0XD8);
    // 0x802AC078: lwc1        $f9, 0x1568($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X1568);
    // 0x802AC07C: lbu         $v1, 0x19($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X19);
    // 0x802AC080: lwc1        $f8, 0x156C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X156C);
    // 0x802AC084: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x802AC088: lbu         $a1, 0xA($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0XA);
    // 0x802AC08C: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x802AC090: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802AC094: mtc1        $a1, $f4
    ctx->f4.u32l = ctx->r5;
    // 0x802AC098: div.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = DIV_D(ctx->f6.d, ctx->f8.d);
    // 0x802AC09C: lwc1        $f17, 0x1570($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X1570);
    // 0x802AC0A0: lwc1        $f16, 0x1574($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X1574);
    // 0x802AC0A4: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x802AC0A8: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x802AC0AC: addiu       $a2, $a2, 0x50E0
    ctx->r6 = ADD32(ctx->r6, 0X50E0);
    // 0x802AC0B0: add.d       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f10.d); 
    ctx->f18.d = ctx->f16.d + ctx->f10.d;
    // 0x802AC0B4: mul.d       $f8, $f6, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f18.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f18.d);
    // 0x802AC0B8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x802AC0BC: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x802AC0C0: nop

    // 0x802AC0C4: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x802AC0C8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802AC0CC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802AC0D0: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x802AC0D4: cvt.w.d     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.u32l = CVT_W_D(ctx->f8.d);
    // 0x802AC0D8: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x802AC0DC: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x802AC0E0: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x802AC0E4: mtc1        $a1, $f10
    ctx->f10.u32l = ctx->r5;
    // 0x802AC0E8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802AC0EC: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x802AC0F0: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x802AC0F4: nop

    // 0x802AC0F8: div.d       $f8, $f6, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f18.d); 
    ctx->f8.d = DIV_D(ctx->f6.d, ctx->f18.d);
    // 0x802AC0FC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802AC100: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x802AC104: cvt.s.d     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f16.fl = CVT_S_D(ctx->f8.d);
    // 0x802AC108: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802AC10C: swc1        $f16, 0x28($a2)
    MEM_W(0X28, ctx->r6) = ctx->f16.u32l;
    // 0x802AC110: lwc1        $f10, 0x28($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X28);
    // 0x802AC114: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x802AC118: div.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f10.fl, ctx->f4.fl);
    // 0x802AC11C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802AC120: cvt.d.s     $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f18.d = CVT_D_S(ctx->f6.fl);
    // 0x802AC124: add.d       $f16, $f18, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f8.d); 
    ctx->f16.d = ctx->f18.d + ctx->f8.d;
    // 0x802AC128: cvt.s.d     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f10.fl = CVT_S_D(ctx->f16.d);
    // 0x802AC12C: swc1        $f10, 0x28($a2)
    MEM_W(0X28, ctx->r6) = ctx->f10.u32l;
    // 0x802AC130: lw          $t7, 0xD8($v0)
    ctx->r15 = MEM_W(ctx->r2, 0XD8);
    // 0x802AC134: nop

    // 0x802AC138: lbu         $t8, 0x18($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X18);
    // 0x802AC13C: nop

    // 0x802AC140: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x802AC144: beq         $t9, $zero, L_802AC178
    if (ctx->r25 == 0) {
        // 0x802AC148: nop
    
            goto L_802AC178;
    }
    // 0x802AC148: nop

    // 0x802AC14C: lwc1        $f4, 0x28($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X28);
    // 0x802AC150: lwc1        $f19, 0x1578($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X1578);
    // 0x802AC154: lwc1        $f18, 0x157C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X157C);
    // 0x802AC158: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x802AC15C: c.lt.d      $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f6.d < ctx->f18.d;
    // 0x802AC160: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802AC164: bc1f        L_802AC178
    if (!c1cs) {
        // 0x802AC168: nop
    
            goto L_802AC178;
    }
    // 0x802AC168: nop

    // 0x802AC16C: lwc1        $f8, 0x1580($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X1580);
    // 0x802AC170: nop

    // 0x802AC174: swc1        $f8, 0x28($a2)
    MEM_W(0X28, ctx->r6) = ctx->f8.u32l;
L_802AC178:
    // 0x802AC178: jr          $ra
    // 0x802AC17C: nop

    return;
    // 0x802AC17C: nop

;}
RECOMP_FUNC void func_802AC180(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AC180: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802AC184: lw          $v0, 0x55B8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X55B8);
    // 0x802AC188: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x802AC18C: lw          $a0, 0xD8($v0)
    ctx->r4 = MEM_W(ctx->r2, 0XD8);
    // 0x802AC190: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x802AC194: lbu         $a1, 0x0($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X0);
    // 0x802AC198: lbu         $a2, 0x1($a0)
    ctx->r6 = MEM_BU(ctx->r4, 0X1);
    // 0x802AC19C: mtc1        $a1, $f4
    ctx->f4.u32l = ctx->r5;
    // 0x802AC1A0: mtc1        $a2, $f8
    ctx->f8.u32l = ctx->r6;
    // 0x802AC1A4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802AC1A8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802AC1AC: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x802AC1B0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x802AC1B4: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x802AC1B8: lbu         $v1, 0x19($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X19);
    // 0x802AC1BC: add.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x802AC1C0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802AC1C4: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x802AC1C8: mul.d       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f8.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x802AC1CC: lui         $a3, 0x802C
    ctx->r7 = S32(0X802C << 16);
    // 0x802AC1D0: mtc1        $v1, $f18
    ctx->f18.u32l = ctx->r3;
    // 0x802AC1D4: addiu       $a3, $a3, 0x5130
    ctx->r7 = ADD32(ctx->r7, 0X5130);
    // 0x802AC1D8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802AC1DC: div.d       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = DIV_D(ctx->f8.d, ctx->f6.d);
    // 0x802AC1E0: cvt.d.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.d = CVT_D_W(ctx->f18.u32l);
    // 0x802AC1E4: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x802AC1E8: swc1        $f16, 0x28($a3)
    MEM_W(0X28, ctx->r7) = ctx->f16.u32l;
    // 0x802AC1EC: lwc1        $f8, 0x158C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X158C);
    // 0x802AC1F0: lwc1        $f9, 0x1588($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X1588);
    // 0x802AC1F4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802AC1F8: div.d       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = DIV_D(ctx->f4.d, ctx->f8.d);
    // 0x802AC1FC: lwc1        $f11, 0x1590($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X1590);
    // 0x802AC200: lwc1        $f10, 0x1594($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X1594);
    // 0x802AC204: lwc1        $f18, 0x28($a3)
    ctx->f18.u32l = MEM_W(ctx->r7, 0X28);
    // 0x802AC208: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802AC20C: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x802AC210: add.d       $f16, $f10, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f6.d); 
    ctx->f16.d = ctx->f10.d + ctx->f6.d;
    // 0x802AC214: mul.d       $f8, $f4, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f16.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f16.d);
    // 0x802AC218: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x802AC21C: swc1        $f10, 0x28($a3)
    MEM_W(0X28, ctx->r7) = ctx->f10.u32l;
    // 0x802AC220: lwc1        $f6, 0x28($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X28);
    // 0x802AC224: lwc1        $f4, 0x159C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X159C);
    // 0x802AC228: lwc1        $f5, 0x1598($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X1598);
    // 0x802AC22C: cvt.d.s     $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f18.d = CVT_D_S(ctx->f6.fl);
    // 0x802AC230: mul.d       $f16, $f18, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f16.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x802AC234: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802AC238: lwc1        $f9, 0x15A0($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X15A0);
    // 0x802AC23C: lwc1        $f8, 0x15A4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X15A4);
    // 0x802AC240: nop

    // 0x802AC244: add.d       $f10, $f16, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f16.d + ctx->f8.d;
    // 0x802AC248: cvt.s.d     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f6.fl = CVT_S_D(ctx->f10.d);
    // 0x802AC24C: jr          $ra
    // 0x802AC250: swc1        $f6, 0x28($a3)
    MEM_W(0X28, ctx->r7) = ctx->f6.u32l;
    return;
    // 0x802AC250: swc1        $f6, 0x28($a3)
    MEM_W(0X28, ctx->r7) = ctx->f6.u32l;
;}
RECOMP_FUNC void func_802AC254(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AC254: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x802AC258: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x802AC25C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802AC260: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x802AC264: beq         $t7, $zero, L_802AC28C
    if (ctx->r15 == 0) {
        // 0x802AC268: sw          $a0, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->r4;
            goto L_802AC28C;
    }
    // 0x802AC268: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x802AC26C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802AC270: beq         $t7, $v0, L_802AC364
    if (ctx->r15 == ctx->r2) {
        // 0x802AC274: lui         $t9, 0x802C
        ctx->r25 = S32(0X802C << 16);
            goto L_802AC364;
    }
    // 0x802AC274: lui         $t9, 0x802C
    ctx->r25 = S32(0X802C << 16);
    // 0x802AC278: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802AC27C: beq         $t7, $at, L_802AC3EC
    if (ctx->r15 == ctx->r1) {
        // 0x802AC280: lui         $t0, 0x802C
        ctx->r8 = S32(0X802C << 16);
            goto L_802AC3EC;
    }
    // 0x802AC280: lui         $t0, 0x802C
    ctx->r8 = S32(0X802C << 16);
    // 0x802AC284: b           L_802AC478
    // 0x802AC288: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_802AC478;
    // 0x802AC288: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_802AC28C:
    // 0x802AC28C: lui         $t8, 0x802C
    ctx->r24 = S32(0X802C << 16);
    // 0x802AC290: lw          $t8, 0x5408($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X5408);
    // 0x802AC294: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802AC298: bne         $v0, $t8, L_802AC304
    if (ctx->r2 != ctx->r24) {
        // 0x802AC29C: lui         $at, 0x43C8
        ctx->r1 = S32(0X43C8 << 16);
            goto L_802AC304;
    }
    // 0x802AC29C: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x802AC2A0: lui         $at, 0xC3C8
    ctx->r1 = S32(0XC3C8 << 16);
    // 0x802AC2A4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802AC2A8: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x802AC2AC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x802AC2B0: lui         $at, 0x42B2
    ctx->r1 = S32(0X42B2 << 16);
    // 0x802AC2B4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x802AC2B8: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x802AC2BC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802AC2C0: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x802AC2C4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802AC2C8: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x802AC2CC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802AC2D0: lwc1        $f8, 0x15A8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X15A8);
    // 0x802AC2D4: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x802AC2D8: lui         $a2, 0x447A
    ctx->r6 = S32(0X447A << 16);
    // 0x802AC2DC: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x802AC2E0: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x802AC2E4: swc1        $f12, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f12.u32l;
    // 0x802AC2E8: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x802AC2EC: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x802AC2F0: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
    // 0x802AC2F4: jal         0x802A8DC0
    // 0x802AC2F8: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    func_802A8DC0(rdram, ctx);
        goto after_0;
    // 0x802AC2F8: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x802AC2FC: b           L_802AC478
    // 0x802AC300: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_802AC478;
    // 0x802AC300: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_802AC304:
    // 0x802AC304: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802AC308: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x802AC30C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x802AC310: lui         $at, 0x42B2
    ctx->r1 = S32(0X42B2 << 16);
    // 0x802AC314: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x802AC318: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x802AC31C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802AC320: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x802AC324: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802AC328: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x802AC32C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802AC330: lwc1        $f18, 0x15AC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X15AC);
    // 0x802AC334: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x802AC338: lui         $a2, 0x447A
    ctx->r6 = S32(0X447A << 16);
    // 0x802AC33C: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x802AC340: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x802AC344: swc1        $f12, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f12.u32l;
    // 0x802AC348: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    // 0x802AC34C: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    // 0x802AC350: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
    // 0x802AC354: jal         0x802A8DC0
    // 0x802AC358: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    func_802A8DC0(rdram, ctx);
        goto after_1;
    // 0x802AC358: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    after_1:
    // 0x802AC35C: b           L_802AC478
    // 0x802AC360: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_802AC478;
    // 0x802AC360: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_802AC364:
    // 0x802AC364: lw          $t9, 0x5408($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X5408);
    // 0x802AC368: lui         $at, 0x4383
    ctx->r1 = S32(0X4383 << 16);
    // 0x802AC36C: bne         $v0, $t9, L_802AC3B4
    if (ctx->r2 != ctx->r25) {
        // 0x802AC370: lui         $a2, 0x4396
        ctx->r6 = S32(0X4396 << 16);
            goto L_802AC3B4;
    }
    // 0x802AC370: lui         $a2, 0x4396
    ctx->r6 = S32(0X4396 << 16);
    // 0x802AC374: lui         $at, 0x42C4
    ctx->r1 = S32(0X42C4 << 16);
    // 0x802AC378: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x802AC37C: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x802AC380: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x802AC384: lui         $at, 0xC3FF
    ctx->r1 = S32(0XC3FF << 16);
    // 0x802AC388: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802AC38C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x802AC390: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802AC394: lwc1        $f6, 0x15B0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X15B0);
    // 0x802AC398: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x802AC39C: lui         $a2, 0x4396
    ctx->r6 = S32(0X4396 << 16);
    // 0x802AC3A0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x802AC3A4: jal         0x802A8F18
    // 0x802AC3A8: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_802A8F18(rdram, ctx);
        goto after_2;
    // 0x802AC3A8: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x802AC3AC: b           L_802AC478
    // 0x802AC3B0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_802AC478;
    // 0x802AC3B0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_802AC3B4:
    // 0x802AC3B4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x802AC3B8: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x802AC3BC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x802AC3C0: lui         $at, 0x43FF
    ctx->r1 = S32(0X43FF << 16);
    // 0x802AC3C4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802AC3C8: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x802AC3CC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802AC3D0: lwc1        $f10, 0x15B4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X15B4);
    // 0x802AC3D4: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x802AC3D8: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x802AC3DC: jal         0x802A8F18
    // 0x802AC3E0: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_802A8F18(rdram, ctx);
        goto after_3;
    // 0x802AC3E0: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_3:
    // 0x802AC3E4: b           L_802AC478
    // 0x802AC3E8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_802AC478;
    // 0x802AC3E8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_802AC3EC:
    // 0x802AC3EC: lw          $t0, 0x5408($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X5408);
    // 0x802AC3F0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802AC3F4: bne         $v0, $t0, L_802AC440
    if (ctx->r2 != ctx->r8) {
        // 0x802AC3F8: lui         $a2, 0x4422
        ctx->r6 = S32(0X4422 << 16);
            goto L_802AC440;
    }
    // 0x802AC3F8: lui         $a2, 0x4422
    ctx->r6 = S32(0X4422 << 16);
    // 0x802AC3FC: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x802AC400: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x802AC404: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x802AC408: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x802AC40C: lui         $at, 0xC3E1
    ctx->r1 = S32(0XC3E1 << 16);
    // 0x802AC410: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802AC414: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x802AC418: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802AC41C: lwc1        $f18, 0x15B8($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X15B8);
    // 0x802AC420: lui         $a2, 0x4422
    ctx->r6 = S32(0X4422 << 16);
    // 0x802AC424: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x802AC428: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x802AC42C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x802AC430: jal         0x802A8F18
    // 0x802AC434: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_802A8F18(rdram, ctx);
        goto after_4;
    // 0x802AC434: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_4:
    // 0x802AC438: b           L_802AC478
    // 0x802AC43C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_802AC478;
    // 0x802AC43C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_802AC440:
    // 0x802AC440: lwc1        $f12, 0x15BC($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X15BC);
    // 0x802AC444: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x802AC448: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x802AC44C: lui         $at, 0x43E1
    ctx->r1 = S32(0X43E1 << 16);
    // 0x802AC450: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802AC454: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x802AC458: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802AC45C: lwc1        $f6, 0x15C0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X15C0);
    // 0x802AC460: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x802AC464: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x802AC468: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x802AC46C: jal         0x802A8F18
    // 0x802AC470: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_802A8F18(rdram, ctx);
        goto after_5;
    // 0x802AC470: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_5:
    // 0x802AC474: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_802AC478:
    // 0x802AC478: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x802AC47C: jr          $ra
    // 0x802AC480: nop

    return;
    // 0x802AC480: nop

;}
RECOMP_FUNC void func_802AC484(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AC484: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802AC488: addiu       $v0, $v0, 0x53F8
    ctx->r2 = ADD32(ctx->r2, 0X53F8);
    // 0x802AC48C: lw          $t6, 0x14($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X14);
    // 0x802AC490: lui         $t9, 0x802C
    ctx->r25 = S32(0X802C << 16);
    // 0x802AC494: beq         $t6, $zero, L_802AC4B8
    if (ctx->r14 == 0) {
        // 0x802AC498: nop
    
            goto L_802AC4B8;
    }
    // 0x802AC498: nop

    // 0x802AC49C: lh          $t7, 0x20($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X20);
    // 0x802AC4A0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802AC4A4: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x802AC4A8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x802AC4AC: lh          $t9, 0x53E0($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X53E0);
    // 0x802AC4B0: jr          $ra
    // 0x802AC4B4: sh          $t9, 0x55F0($at)
    MEM_H(0X55F0, ctx->r1) = ctx->r25;
    return;
    // 0x802AC4B4: sh          $t9, 0x55F0($at)
    MEM_H(0X55F0, ctx->r1) = ctx->r25;
L_802AC4B8:
    // 0x802AC4B8: lw          $t0, 0x4($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X4);
    // 0x802AC4BC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802AC4C0: lbu         $t1, 0x8AB($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X8AB);
    // 0x802AC4C4: nop

    // 0x802AC4C8: sh          $t1, 0x55F0($at)
    MEM_H(0X55F0, ctx->r1) = ctx->r9;
    // 0x802AC4CC: jr          $ra
    // 0x802AC4D0: nop

    return;
    // 0x802AC4D0: nop

;}
RECOMP_FUNC void func_802AC4D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AC4D4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802AC4D8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802AC4DC: lui         $s0, 0x802C
    ctx->r16 = S32(0X802C << 16);
    // 0x802AC4E0: addiu       $s0, $s0, 0x53F8
    ctx->r16 = ADD32(ctx->r16, 0X53F8);
    // 0x802AC4E4: lw          $t6, 0x14($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X14);
    // 0x802AC4E8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802AC4EC: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x802AC4F0: beq         $t6, $zero, L_802AC574
    if (ctx->r14 == 0) {
        // 0x802AC4F4: swc1        $f20, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
            goto L_802AC574;
    }
    // 0x802AC4F4: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x802AC4F8: lui         $a2, 0x2
    ctx->r6 = S32(0X2 << 16);
    // 0x802AC4FC: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x802AC500: addiu       $a0, $a0, -0x2F98
    ctx->r4 = ADD32(ctx->r4, -0X2F98);
    // 0x802AC504: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x802AC508: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802AC50C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x802AC510: addiu       $a1, $zero, 0x34
    ctx->r5 = ADD32(0, 0X34);
L_802AC514:
    // 0x802AC514: multu       $v1, $a1
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802AC518: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x802AC51C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802AC520: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x802AC524: slti        $at, $v1, 0x1C
    ctx->r1 = SIGNED(ctx->r3) < 0X1C ? 1 : 0;
    // 0x802AC528: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x802AC52C: mflo        $t8
    ctx->r24 = lo;
    // 0x802AC530: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x802AC534: addu        $t3, $t9, $a2
    ctx->r11 = ADD32(ctx->r25, ctx->r6);
    // 0x802AC538: bne         $at, $zero, L_802AC514
    if (ctx->r1 != 0) {
        // 0x802AC53C: sh          $zero, 0x15E0($t3)
        MEM_H(0X15E0, ctx->r11) = 0;
            goto L_802AC514;
    }
    // 0x802AC53C: sh          $zero, 0x15E0($t3)
    MEM_H(0X15E0, ctx->r11) = 0;
    // 0x802AC540: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802AC544: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_802AC548:
    // 0x802AC548: multu       $v1, $a1
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802AC54C: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x802AC550: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802AC554: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x802AC558: slti        $at, $v1, 0x3
    ctx->r1 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
    // 0x802AC55C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x802AC560: mflo        $t6
    ctx->r14 = lo;
    // 0x802AC564: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x802AC568: addu        $t8, $t7, $a2
    ctx->r24 = ADD32(ctx->r15, ctx->r6);
    // 0x802AC56C: bne         $at, $zero, L_802AC548
    if (ctx->r1 != 0) {
        // 0x802AC570: sh          $zero, 0x1E34($t8)
        MEM_H(0X1E34, ctx->r24) = 0;
            goto L_802AC548;
    }
    // 0x802AC570: sh          $zero, 0x1E34($t8)
    MEM_H(0X1E34, ctx->r24) = 0;
L_802AC574:
    // 0x802AC574: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x802AC578: addiu       $a2, $a2, 0x5198
    ctx->r6 = ADD32(ctx->r6, 0X5198);
    // 0x802AC57C: sh          $zero, 0x50($s0)
    MEM_H(0X50, ctx->r16) = 0;
    // 0x802AC580: sh          $zero, 0x52($s0)
    MEM_H(0X52, ctx->r16) = 0;
    // 0x802AC584: sw          $zero, 0x8($a2)
    MEM_W(0X8, ctx->r6) = 0;
    // 0x802AC588: sw          $zero, 0x5C($a2)
    MEM_W(0X5C, ctx->r6) = 0;
    // 0x802AC58C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x802AC590: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802AC594: sh          $t3, 0x5274($at)
    MEM_H(0X5274, ctx->r1) = ctx->r11;
    // 0x802AC598: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802AC59C: sh          $zero, 0x5176($at)
    MEM_H(0X5176, ctx->r1) = 0;
    // 0x802AC5A0: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x802AC5A4: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x802AC5A8: sw          $t4, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r12;
    // 0x802AC5AC: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x802AC5B0: lbu         $t5, 0x308($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X308);
    // 0x802AC5B4: lw          $t1, 0x18($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X18);
    // 0x802AC5B8: sll         $t6, $t5, 1
    ctx->r14 = S32(ctx->r13 << 1);
    // 0x802AC5BC: addu        $t7, $v0, $t6
    ctx->r15 = ADD32(ctx->r2, ctx->r14);
    // 0x802AC5C0: lbu         $t8, 0x2E8($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X2E8);
    // 0x802AC5C4: lui         $t0, 0x802C
    ctx->r8 = S32(0X802C << 16);
    // 0x802AC5C8: sh          $t8, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r24;
    // 0x802AC5CC: lbu         $t9, 0x308($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X308);
    // 0x802AC5D0: addiu       $t0, $t0, 0x54B8
    ctx->r8 = ADD32(ctx->r8, 0X54B8);
    // 0x802AC5D4: sll         $t3, $t9, 1
    ctx->r11 = S32(ctx->r25 << 1);
    // 0x802AC5D8: addu        $t4, $v0, $t3
    ctx->r12 = ADD32(ctx->r2, ctx->r11);
    // 0x802AC5DC: lbu         $t5, 0x2E9($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X2E9);
    // 0x802AC5E0: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x802AC5E4: sh          $t5, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r13;
    // 0x802AC5E8: lw          $t6, 0xCC($t1)
    ctx->r14 = MEM_W(ctx->r9, 0XCC);
    // 0x802AC5EC: lui         $t4, 0x802C
    ctx->r12 = S32(0X802C << 16);
    // 0x802AC5F0: lw          $v1, 0x30($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X30);
    // 0x802AC5F4: lui         $t5, 0x802C
    ctx->r13 = S32(0X802C << 16);
    // 0x802AC5F8: lhu         $t7, 0x2($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X2);
    // 0x802AC5FC: addiu       $t4, $t4, 0x50A8
    ctx->r12 = ADD32(ctx->r12, 0X50A8);
    // 0x802AC600: andi        $t8, $t7, 0x1FFF
    ctx->r24 = ctx->r15 & 0X1FFF;
    // 0x802AC604: sh          $t8, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r24;
    // 0x802AC608: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x802AC60C: sh          $zero, 0x74($t0)
    MEM_H(0X74, ctx->r8) = 0;
    // 0x802AC610: lbu         $t3, 0x0($t9)
    ctx->r11 = MEM_BU(ctx->r25, 0X0);
    // 0x802AC614: swc1        $f20, 0x2C($t0)
    MEM_W(0X2C, ctx->r8) = ctx->f20.u32l;
    // 0x802AC618: lwc1        $f4, 0x2C($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X2C);
    // 0x802AC61C: addiu       $t5, $t5, 0x5180
    ctx->r13 = ADD32(ctx->r13, 0X5180);
    // 0x802AC620: sh          $zero, 0x72($t0)
    MEM_H(0X72, ctx->r8) = 0;
    // 0x802AC624: sw          $zero, 0x8($t0)
    MEM_W(0X8, ctx->r8) = 0;
    // 0x802AC628: sw          $t4, 0x38($t0)
    MEM_W(0X38, ctx->r8) = ctx->r12;
    // 0x802AC62C: sw          $t5, 0x4C($t0)
    MEM_W(0X4C, ctx->r8) = ctx->r13;
    // 0x802AC630: sw          $a2, 0x50($t0)
    MEM_W(0X50, ctx->r8) = ctx->r6;
    // 0x802AC634: sw          $t1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r9;
    // 0x802AC638: sw          $t1, 0x3C($a2)
    MEM_W(0X3C, ctx->r6) = ctx->r9;
    // 0x802AC63C: sh          $t3, 0x76($t0)
    MEM_H(0X76, ctx->r8) = ctx->r11;
    // 0x802AC640: swc1        $f4, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f4.u32l;
    // 0x802AC644: lw          $t6, 0xCC($t1)
    ctx->r14 = MEM_W(ctx->r9, 0XCC);
    // 0x802AC648: nop

    // 0x802AC64C: lw          $v1, 0x30($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X30);
    // 0x802AC650: nop

    // 0x802AC654: lhu         $t7, 0x2($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X2);
    // 0x802AC658: nop

    // 0x802AC65C: andi        $t8, $t7, 0xDFFF
    ctx->r24 = ctx->r15 & 0XDFFF;
    // 0x802AC660: sh          $t8, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r24;
    // 0x802AC664: lw          $a1, 0x10($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X10);
    // 0x802AC668: nop

    // 0x802AC66C: bne         $a1, $zero, L_802AC680
    if (ctx->r5 != 0) {
        // 0x802AC670: addiu       $a0, $zero, -0x1F4
        ctx->r4 = ADD32(0, -0X1F4);
            goto L_802AC680;
    }
    // 0x802AC670: addiu       $a0, $zero, -0x1F4
    ctx->r4 = ADD32(0, -0X1F4);
    // 0x802AC674: b           L_802AC680
    // 0x802AC678: addiu       $a0, $zero, 0x1F4
    ctx->r4 = ADD32(0, 0X1F4);
        goto L_802AC680;
    // 0x802AC678: addiu       $a0, $zero, 0x1F4
    ctx->r4 = ADD32(0, 0X1F4);
    // 0x802AC67C: addiu       $a0, $zero, -0x1F4
    ctx->r4 = ADD32(0, -0X1F4);
L_802AC680:
    // 0x802AC680: mtc1        $a0, $f6
    ctx->f6.u32l = ctx->r4;
    // 0x802AC684: nop

    // 0x802AC688: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x802AC68C: swc1        $f8, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->f8.u32l;
    // 0x802AC690: lwc1        $f10, 0x3C($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x802AC694: bne         $a1, $zero, L_802AC6A4
    if (ctx->r5 != 0) {
        // 0x802AC698: swc1        $f10, 0x30($t0)
        MEM_W(0X30, ctx->r8) = ctx->f10.u32l;
            goto L_802AC6A4;
    }
    // 0x802AC698: swc1        $f10, 0x30($t0)
    MEM_W(0X30, ctx->r8) = ctx->f10.u32l;
    // 0x802AC69C: b           L_802AC6A8
    // 0x802AC6A0: addiu       $a0, $zero, 0xB4
    ctx->r4 = ADD32(0, 0XB4);
        goto L_802AC6A8;
    // 0x802AC6A0: addiu       $a0, $zero, 0xB4
    ctx->r4 = ADD32(0, 0XB4);
L_802AC6A4:
    // 0x802AC6A4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_802AC6A8:
    // 0x802AC6A8: mtc1        $a0, $f16
    ctx->f16.u32l = ctx->r4;
    // 0x802AC6AC: nop

    // 0x802AC6B0: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x802AC6B4: swc1        $f18, 0x40($t0)
    MEM_W(0X40, ctx->r8) = ctx->f18.u32l;
    // 0x802AC6B8: lwc1        $f4, 0x40($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X40);
    // 0x802AC6BC: jal         0x80087D40
    // 0x802AC6C0: swc1        $f4, 0x34($t0)
    MEM_W(0X34, ctx->r8) = ctx->f4.u32l;
    func_80087D40(rdram, ctx);
        goto after_0;
    // 0x802AC6C0: swc1        $f4, 0x34($t0)
    MEM_W(0X34, ctx->r8) = ctx->f4.u32l;
    after_0:
    // 0x802AC6C4: addiu       $t9, $v0, 0x1
    ctx->r25 = ADD32(ctx->r2, 0X1);
    // 0x802AC6C8: lui         $t0, 0x802C
    ctx->r8 = S32(0X802C << 16);
    // 0x802AC6CC: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802AC6D0: addiu       $t0, $t0, 0x54B8
    ctx->r8 = ADD32(ctx->r8, 0X54B8);
    // 0x802AC6D4: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    // 0x802AC6D8: bgez        $t9, L_802AC6EC
    if (SIGNED(ctx->r25) >= 0) {
        // 0x802AC6DC: andi        $t3, $t9, 0x1
        ctx->r11 = ctx->r25 & 0X1;
            goto L_802AC6EC;
    }
    // 0x802AC6DC: andi        $t3, $t9, 0x1
    ctx->r11 = ctx->r25 & 0X1;
    // 0x802AC6E0: beq         $t3, $zero, L_802AC6EC
    if (ctx->r11 == 0) {
        // 0x802AC6E4: nop
    
            goto L_802AC6EC;
    }
    // 0x802AC6E4: nop

    // 0x802AC6E8: addiu       $t3, $t3, -0x2
    ctx->r11 = ADD32(ctx->r11, -0X2);
L_802AC6EC:
    // 0x802AC6EC: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x802AC6F0: addu        $a1, $a1, $t4
    ctx->r5 = ADD32(ctx->r5, ctx->r12);
    // 0x802AC6F4: lhu         $a1, -0x1CC4($a1)
    ctx->r5 = MEM_HU(ctx->r5, -0X1CC4);
    // 0x802AC6F8: jal         0x80272D3C
    // 0x802AC6FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(0x80272D3C)(rdram, ctx);
        goto after_1;
    // 0x802AC6FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x802AC700: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802AC704: addiu       $v0, $v0, 0x50E0
    ctx->r2 = ADD32(ctx->r2, 0X50E0);
    // 0x802AC708: swc1        $f20, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f20.u32l;
    // 0x802AC70C: swc1        $f20, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f20.u32l;
    // 0x802AC710: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x802AC714: lwc1        $f8, 0x14($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X14);
    // 0x802AC718: lui         $t0, 0x802C
    ctx->r8 = S32(0X802C << 16);
    // 0x802AC71C: addiu       $t0, $t0, 0x54B8
    ctx->r8 = ADD32(ctx->r8, 0X54B8);
    // 0x802AC720: sh          $zero, 0xC($t0)
    MEM_H(0XC, ctx->r8) = 0;
    // 0x802AC724: sh          $zero, 0xE($t0)
    MEM_H(0XE, ctx->r8) = 0;
    // 0x802AC728: swc1        $f20, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f20.u32l;
    // 0x802AC72C: swc1        $f6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f6.u32l;
    // 0x802AC730: jal         0x802AC068
    // 0x802AC734: swc1        $f8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f8.u32l;
    func_802AC068(rdram, ctx);
        goto after_2;
    // 0x802AC734: swc1        $f8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f8.u32l;
    after_2:
    // 0x802AC738: lui         $a3, 0x802C
    ctx->r7 = S32(0X802C << 16);
    // 0x802AC73C: addiu       $a3, $a3, 0x55B8
    ctx->r7 = ADD32(ctx->r7, 0X55B8);
    // 0x802AC740: lh          $a0, 0x38($a3)
    ctx->r4 = MEM_H(ctx->r7, 0X38);
    // 0x802AC744: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x802AC748: sll         $t6, $a0, 5
    ctx->r14 = S32(ctx->r4 << 5);
    // 0x802AC74C: addu        $a1, $v0, $a0
    ctx->r5 = ADD32(ctx->r2, ctx->r4);
    // 0x802AC750: lbu         $t7, 0x308($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X308);
    // 0x802AC754: lw          $t5, 0x18($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X18);
    // 0x802AC758: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x802AC75C: addu        $t9, $v0, $t8
    ctx->r25 = ADD32(ctx->r2, ctx->r24);
    // 0x802AC760: lbu         $t3, 0x2E8($t9)
    ctx->r11 = MEM_BU(ctx->r25, 0X2E8);
    // 0x802AC764: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x802AC768: sh          $t3, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r11;
    // 0x802AC76C: lbu         $t4, 0x308($a1)
    ctx->r12 = MEM_BU(ctx->r5, 0X308);
    // 0x802AC770: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x802AC774: addu        $t1, $t5, $t6
    ctx->r9 = ADD32(ctx->r13, ctx->r14);
    // 0x802AC778: sll         $t5, $t4, 1
    ctx->r13 = S32(ctx->r12 << 1);
    // 0x802AC77C: addu        $t6, $v0, $t5
    ctx->r14 = ADD32(ctx->r2, ctx->r13);
    // 0x802AC780: lbu         $t7, 0x2E9($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X2E9);
    // 0x802AC784: lui         $t2, 0x802C
    ctx->r10 = S32(0X802C << 16);
    // 0x802AC788: sh          $t7, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r15;
    // 0x802AC78C: lw          $t8, 0xCC($t1)
    ctx->r24 = MEM_W(ctx->r9, 0XCC);
    // 0x802AC790: addiu       $t2, $t2, 0x50C0
    ctx->r10 = ADD32(ctx->r10, 0X50C0);
    // 0x802AC794: lw          $v1, 0x30($t8)
    ctx->r3 = MEM_W(ctx->r24, 0X30);
    // 0x802AC798: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802AC79C: lhu         $t9, 0x2($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0X2);
    // 0x802AC7A0: nop

    // 0x802AC7A4: andi        $t3, $t9, 0x1FFF
    ctx->r11 = ctx->r25 & 0X1FFF;
    // 0x802AC7A8: sh          $t3, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r11;
    // 0x802AC7AC: lw          $t4, 0x4($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X4);
    // 0x802AC7B0: nop

    // 0x802AC7B4: lbu         $t5, 0x0($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X0);
    // 0x802AC7B8: sw          $t1, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r9;
    // 0x802AC7BC: sw          $zero, 0x8($a3)
    MEM_W(0X8, ctx->r7) = 0;
    // 0x802AC7C0: swc1        $f20, 0x10($a3)
    MEM_W(0X10, ctx->r7) = ctx->f20.u32l;
    // 0x802AC7C4: sw          $t2, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->r10;
    // 0x802AC7C8: sh          $t5, 0x3A($a3)
    MEM_H(0X3A, ctx->r7) = ctx->r13;
    // 0x802AC7CC: lw          $t6, 0xD8($t1)
    ctx->r14 = MEM_W(ctx->r9, 0XD8);
    // 0x802AC7D0: nop

    // 0x802AC7D4: lbu         $t7, 0x13($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X13);
    // 0x802AC7D8: nop

    // 0x802AC7DC: andi        $t8, $t7, 0x40
    ctx->r24 = ctx->r15 & 0X40;
    // 0x802AC7E0: bne         $t8, $zero, L_802AC7F0
    if (ctx->r24 != 0) {
        // 0x802AC7E4: addiu       $t9, $zero, 0x1
        ctx->r25 = ADD32(0, 0X1);
            goto L_802AC7F0;
    }
    // 0x802AC7E4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802AC7E8: b           L_802AC7F4
    // 0x802AC7EC: sw          $t9, 0x2C($a3)
    MEM_W(0X2C, ctx->r7) = ctx->r25;
        goto L_802AC7F4;
    // 0x802AC7EC: sw          $t9, 0x2C($a3)
    MEM_W(0X2C, ctx->r7) = ctx->r25;
L_802AC7F0:
    // 0x802AC7F0: sw          $zero, 0x2C($a3)
    MEM_W(0X2C, ctx->r7) = 0;
L_802AC7F4:
    // 0x802AC7F4: lw          $t3, 0x2C($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X2C);
    // 0x802AC7F8: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x802AC7FC: jal         0x802AB73C
    // 0x802AC800: sh          $t3, 0x5174($at)
    MEM_H(0X5174, ctx->r1) = ctx->r11;
    func_802AB73C(rdram, ctx);
        goto after_3;
    // 0x802AC800: sh          $t3, 0x5174($at)
    MEM_H(0X5174, ctx->r1) = ctx->r11;
    after_3:
    // 0x802AC804: lui         $a3, 0x802C
    ctx->r7 = S32(0X802C << 16);
    // 0x802AC808: addiu       $a3, $a3, 0x55B8
    ctx->r7 = ADD32(ctx->r7, 0X55B8);
    // 0x802AC80C: lui         $t4, 0x802C
    ctx->r12 = S32(0X802C << 16);
    // 0x802AC810: lui         $t5, 0x802C
    ctx->r13 = S32(0X802C << 16);
    // 0x802AC814: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x802AC818: addiu       $t4, $t4, 0x518C
    ctx->r12 = ADD32(ctx->r12, 0X518C);
    // 0x802AC81C: addiu       $t5, $t5, 0x51EC
    ctx->r13 = ADD32(ctx->r13, 0X51EC);
    // 0x802AC820: swc1        $f0, 0xC($a3)
    MEM_W(0XC, ctx->r7) = ctx->f0.u32l;
    // 0x802AC824: sw          $t4, 0x30($a3)
    MEM_W(0X30, ctx->r7) = ctx->r12;
    // 0x802AC828: sw          $t5, 0x34($a3)
    MEM_W(0X34, ctx->r7) = ctx->r13;
    // 0x802AC82C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802AC830: sw          $t1, 0x5228($at)
    MEM_W(0X5228, ctx->r1) = ctx->r9;
    // 0x802AC834: lw          $t6, 0x10($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X10);
    // 0x802AC838: nop

    // 0x802AC83C: bne         $t6, $zero, L_802AC850
    if (ctx->r14 != 0) {
        // 0x802AC840: addiu       $a0, $zero, -0x168
        ctx->r4 = ADD32(0, -0X168);
            goto L_802AC850;
    }
    // 0x802AC840: addiu       $a0, $zero, -0x168
    ctx->r4 = ADD32(0, -0X168);
    // 0x802AC844: b           L_802AC850
    // 0x802AC848: addiu       $a0, $zero, 0x168
    ctx->r4 = ADD32(0, 0X168);
        goto L_802AC850;
    // 0x802AC848: addiu       $a0, $zero, 0x168
    ctx->r4 = ADD32(0, 0X168);
    // 0x802AC84C: addiu       $a0, $zero, -0x168
    ctx->r4 = ADD32(0, -0X168);
L_802AC850:
    // 0x802AC850: mtc1        $a0, $f10
    ctx->f10.u32l = ctx->r4;
    // 0x802AC854: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x802AC858: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x802AC85C: swc1        $f16, 0x20($a3)
    MEM_W(0X20, ctx->r7) = ctx->f16.u32l;
    // 0x802AC860: lwc1        $f18, 0x20($a3)
    ctx->f18.u32l = MEM_W(ctx->r7, 0X20);
    // 0x802AC864: jal         0x802AB770
    // 0x802AC868: swc1        $f18, 0x14($a3)
    MEM_W(0X14, ctx->r7) = ctx->f18.u32l;
    func_802AB770(rdram, ctx);
        goto after_4;
    // 0x802AC868: swc1        $f18, 0x14($a3)
    MEM_W(0X14, ctx->r7) = ctx->f18.u32l;
    after_4:
    // 0x802AC86C: lui         $a3, 0x802C
    ctx->r7 = S32(0X802C << 16);
    // 0x802AC870: addiu       $a3, $a3, 0x55B8
    ctx->r7 = ADD32(ctx->r7, 0X55B8);
    // 0x802AC874: swc1        $f0, 0x18($a3)
    MEM_W(0X18, ctx->r7) = ctx->f0.u32l;
    // 0x802AC878: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802AC87C: lhu         $a1, -0x1CBE($a1)
    ctx->r5 = MEM_HU(ctx->r5, -0X1CBE);
    // 0x802AC880: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    // 0x802AC884: jal         0x80272D3C
    // 0x802AC888: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(0x80272D3C)(rdram, ctx);
        goto after_5;
    // 0x802AC888: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x802AC88C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802AC890: addiu       $v0, $v0, 0x5130
    ctx->r2 = ADD32(ctx->r2, 0X5130);
    // 0x802AC894: swc1        $f20, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f20.u32l;
    // 0x802AC898: swc1        $f20, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f20.u32l;
    // 0x802AC89C: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x802AC8A0: lwc1        $f6, 0x14($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X14);
    // 0x802AC8A4: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x802AC8A8: addiu       $t7, $zero, 0x96
    ctx->r15 = ADD32(0, 0X96);
    // 0x802AC8AC: swc1        $f20, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f20.u32l;
    // 0x802AC8B0: sh          $t7, 0x24($v0)
    MEM_H(0X24, ctx->r2) = ctx->r15;
    // 0x802AC8B4: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
    // 0x802AC8B8: swc1        $f6, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f6.u32l;
    // 0x802AC8BC: lw          $t8, 0xCC($t1)
    ctx->r24 = MEM_W(ctx->r9, 0XCC);
    // 0x802AC8C0: nop

    // 0x802AC8C4: lw          $v1, 0x30($t8)
    ctx->r3 = MEM_W(ctx->r24, 0X30);
    // 0x802AC8C8: nop

    // 0x802AC8CC: lhu         $t9, 0x2($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0X2);
    // 0x802AC8D0: nop

    // 0x802AC8D4: andi        $t3, $t9, 0xDFFF
    ctx->r11 = ctx->r25 & 0XDFFF;
    // 0x802AC8D8: jal         0x802AC180
    // 0x802AC8DC: sh          $t3, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r11;
    func_802AC180(rdram, ctx);
        goto after_6;
    // 0x802AC8DC: sh          $t3, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r11;
    after_6:
    // 0x802AC8E0: jal         0x802ABB8C
    // 0x802AC8E4: nop

    func_802ABB8C(rdram, ctx);
        goto after_7;
    // 0x802AC8E4: nop

    after_7:
    // 0x802AC8E8: lui         $t0, 0x802C
    ctx->r8 = S32(0X802C << 16);
    // 0x802AC8EC: addiu       $t0, $t0, 0x54B8
    ctx->r8 = ADD32(ctx->r8, 0X54B8);
    // 0x802AC8F0: lw          $v0, 0x4($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X4);
    // 0x802AC8F4: lui         $a3, 0x802C
    ctx->r7 = S32(0X802C << 16);
    // 0x802AC8F8: lui         $t2, 0x802C
    ctx->r10 = S32(0X802C << 16);
    // 0x802AC8FC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802AC900: addiu       $t2, $t2, 0x50C0
    ctx->r10 = ADD32(ctx->r10, 0X50C0);
    // 0x802AC904: beq         $v0, $at, L_802AC914
    if (ctx->r2 == ctx->r1) {
        // 0x802AC908: addiu       $a3, $a3, 0x55B8
        ctx->r7 = ADD32(ctx->r7, 0X55B8);
            goto L_802AC914;
    }
    // 0x802AC908: addiu       $a3, $a3, 0x55B8
    ctx->r7 = ADD32(ctx->r7, 0X55B8);
    // 0x802AC90C: bne         $v0, $zero, L_802AC95C
    if (ctx->r2 != 0) {
        // 0x802AC910: lui         $t9, 0x802C
        ctx->r25 = S32(0X802C << 16);
            goto L_802AC95C;
    }
    // 0x802AC910: lui         $t9, 0x802C
    ctx->r25 = S32(0X802C << 16);
L_802AC914:
    // 0x802AC914: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802AC918: addiu       $v0, $v0, 0x50A8
    ctx->r2 = ADD32(ctx->r2, 0X50A8);
    // 0x802AC91C: lui         $t4, 0x802C
    ctx->r12 = S32(0X802C << 16);
    // 0x802AC920: lui         $t5, 0x802C
    ctx->r13 = S32(0X802C << 16);
    // 0x802AC924: lui         $t7, 0x802C
    ctx->r15 = S32(0X802C << 16);
    // 0x802AC928: lui         $t8, 0x802C
    ctx->r24 = S32(0X802C << 16);
    // 0x802AC92C: addiu       $t4, $t4, -0x2028
    ctx->r12 = ADD32(ctx->r12, -0X2028);
    // 0x802AC930: addiu       $t5, $t5, -0x2180
    ctx->r13 = ADD32(ctx->r13, -0X2180);
    // 0x802AC934: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802AC938: addiu       $t7, $t7, -0x20C0
    ctx->r15 = ADD32(ctx->r15, -0X20C0);
    // 0x802AC93C: addiu       $t8, $t8, -0x2240
    ctx->r24 = ADD32(ctx->r24, -0X2240);
    // 0x802AC940: sw          $zero, 0xC($v0)
    MEM_W(0XC, ctx->r2) = 0;
    // 0x802AC944: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x802AC948: sw          $t5, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r13;
    // 0x802AC94C: sw          $t6, 0xC($t2)
    MEM_W(0XC, ctx->r10) = ctx->r14;
    // 0x802AC950: sw          $t7, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r15;
    // 0x802AC954: b           L_802AC99C
    // 0x802AC958: sw          $t8, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->r24;
        goto L_802AC99C;
    // 0x802AC958: sw          $t8, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->r24;
L_802AC95C:
    // 0x802AC95C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802AC960: addiu       $v0, $v0, 0x50A8
    ctx->r2 = ADD32(ctx->r2, 0X50A8);
    // 0x802AC964: lui         $t3, 0x802C
    ctx->r11 = S32(0X802C << 16);
    // 0x802AC968: lui         $t5, 0x802C
    ctx->r13 = S32(0X802C << 16);
    // 0x802AC96C: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x802AC970: addiu       $t9, $t9, -0x2028
    ctx->r25 = ADD32(ctx->r25, -0X2028);
    // 0x802AC974: addiu       $t3, $t3, -0x2180
    ctx->r11 = ADD32(ctx->r11, -0X2180);
    // 0x802AC978: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x802AC97C: addiu       $t5, $t5, -0x20C0
    ctx->r13 = ADD32(ctx->r13, -0X20C0);
    // 0x802AC980: addiu       $t6, $t6, -0x2240
    ctx->r14 = ADD32(ctx->r14, -0X2240);
    // 0x802AC984: sw          $zero, 0xC($t2)
    MEM_W(0XC, ctx->r10) = 0;
    // 0x802AC988: sw          $t9, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r25;
    // 0x802AC98C: sw          $t3, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->r11;
    // 0x802AC990: sw          $t4, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r12;
    // 0x802AC994: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
    // 0x802AC998: sw          $t6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r14;
L_802AC99C:
    // 0x802AC99C: lw          $t7, 0x28($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X28);
    // 0x802AC9A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802AC9A4: sh          $v0, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r2;
    // 0x802AC9A8: lw          $t8, 0x48($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X48);
    // 0x802AC9AC: nop

    // 0x802AC9B0: sh          $v0, 0x0($t8)
    MEM_H(0X0, ctx->r24) = ctx->r2;
    // 0x802AC9B4: lw          $t9, 0x30($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X30);
    // 0x802AC9B8: nop

    // 0x802AC9BC: sw          $zero, 0x4($t9)
    MEM_W(0X4, ctx->r25) = 0;
    // 0x802AC9C0: lw          $t3, 0x30($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X30);
    // 0x802AC9C4: lw          $t5, 0x4C($t0)
    ctx->r13 = MEM_W(ctx->r8, 0X4C);
    // 0x802AC9C8: lw          $t4, 0x4($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X4);
    // 0x802AC9CC: nop

    // 0x802AC9D0: sw          $t4, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r12;
    // 0x802AC9D4: lw          $t6, 0x30($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X30);
    // 0x802AC9D8: nop

    // 0x802AC9DC: sw          $zero, 0x0($t6)
    MEM_W(0X0, ctx->r14) = 0;
    // 0x802AC9E0: lw          $t7, 0x30($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X30);
    // 0x802AC9E4: lw          $t9, 0x4C($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X4C);
    // 0x802AC9E8: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x802AC9EC: jal         0x802ABD28
    // 0x802AC9F0: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    func_802ABD28(rdram, ctx);
        goto after_8;
    // 0x802AC9F0: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    after_8:
    // 0x802AC9F4: jal         0x802ABDA0
    // 0x802AC9F8: nop

    func_802ABDA0(rdram, ctx);
        goto after_9;
    // 0x802AC9F8: nop

    after_9:
    // 0x802AC9FC: jal         0x802A921C
    // 0x802ACA00: nop

    func_802A921C(rdram, ctx);
        goto after_10;
    // 0x802ACA00: nop

    after_10:
    // 0x802ACA04: jal         0x802ABFBC
    // 0x802ACA08: nop

    func_802ABFBC(rdram, ctx);
        goto after_11;
    // 0x802ACA08: nop

    after_11:
    // 0x802ACA0C: jal         0x802ABE44
    // 0x802ACA10: nop

    func_802ABE44(rdram, ctx);
        goto after_12;
    // 0x802ACA10: nop

    after_12:
    // 0x802ACA14: jal         0x802A8E30
    // 0x802ACA18: nop

    func_802A8E30(rdram, ctx);
        goto after_13;
    // 0x802ACA18: nop

    after_13:
    // 0x802ACA1C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802ACA20: addiu       $v0, $v0, 0x5648
    ctx->r2 = ADD32(ctx->r2, 0X5648);
    // 0x802ACA24: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x802ACA28: addiu       $a1, $a1, 0x3B20
    ctx->r5 = ADD32(ctx->r5, 0X3B20);
    // 0x802ACA2C: swc1        $f20, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f20.u32l;
    // 0x802ACA30: lwc1        $f8, 0x1C($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x802ACA34: lw          $t3, 0x0($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X0);
    // 0x802ACA38: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x802ACA3C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802ACA40: swc1        $f8, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->f8.u32l;
    // 0x802ACA44: swc1        $f10, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f10.u32l;
    // 0x802ACA48: lwc1        $f16, 0x20($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X20);
    // 0x802ACA4C: lw          $t4, 0x0($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X0);
    // 0x802ACA50: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x802ACA54: swc1        $f16, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->f16.u32l;
    // 0x802ACA58: lw          $t5, 0x10($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X10);
    // 0x802ACA5C: addiu       $a0, $zero, 0x190
    ctx->r4 = ADD32(0, 0X190);
    // 0x802ACA60: bne         $a3, $t5, L_802ACA70
    if (ctx->r7 != ctx->r13) {
        // 0x802ACA64: nop
    
            goto L_802ACA70;
    }
    // 0x802ACA64: nop

    // 0x802ACA68: b           L_802ACA70
    // 0x802ACA6C: addiu       $a0, $zero, -0x190
    ctx->r4 = ADD32(0, -0X190);
        goto L_802ACA70;
    // 0x802ACA6C: addiu       $a0, $zero, -0x190
    ctx->r4 = ADD32(0, -0X190);
L_802ACA70:
    // 0x802ACA70: mtc1        $a0, $f18
    ctx->f18.u32l = ctx->r4;
    // 0x802ACA74: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x802ACA78: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x802ACA7C: lui         $a2, 0x1
    ctx->r6 = S32(0X1 << 16);
    // 0x802ACA80: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802ACA84: swc1        $f4, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f4.u32l;
    // 0x802ACA88: lwc1        $f6, 0x24($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X24);
    // 0x802ACA8C: nop

    // 0x802ACA90: swc1        $f6, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->f6.u32l;
    // 0x802ACA94: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x802ACA98: nop

    // 0x802ACA9C: lw          $t7, 0x7C($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X7C);
    // 0x802ACAA0: swc1        $f20, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->f20.u32l;
    // 0x802ACAA4: lwc1        $f8, 0x30($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X30);
    // 0x802ACAA8: swc1        $f20, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f20.u32l;
    // 0x802ACAAC: swc1        $f8, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->f8.u32l;
    // 0x802ACAB0: lwc1        $f10, 0x2C($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X2C);
    // 0x802ACAB4: swc1        $f20, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f20.u32l;
    // 0x802ACAB8: sw          $zero, 0x34($v0)
    MEM_W(0X34, ctx->r2) = 0;
    // 0x802ACABC: sw          $zero, 0x5C($v0)
    MEM_W(0X5C, ctx->r2) = 0;
    // 0x802ACAC0: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x802ACAC4: swc1        $f10, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f10.u32l;
    // 0x802ACAC8: swc1        $f20, 0x58($v1)
    MEM_W(0X58, ctx->r3) = ctx->f20.u32l;
    // 0x802ACACC: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x802ACAD0: nop

    // 0x802ACAD4: lwc1        $f16, 0x58($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X58);
    // 0x802ACAD8: nop

    // 0x802ACADC: swc1        $f16, 0x5C($v1)
    MEM_W(0X5C, ctx->r3) = ctx->f16.u32l;
    // 0x802ACAE0: lw          $t8, 0x0($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X0);
    // 0x802ACAE4: nop

    // 0x802ACAE8: sw          $a2, 0x54($t8)
    MEM_W(0X54, ctx->r24) = ctx->r6;
    // 0x802ACAEC: lw          $t9, 0x0($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X0);
    // 0x802ACAF0: nop

    // 0x802ACAF4: sw          $a2, 0x50($t9)
    MEM_W(0X50, ctx->r25) = ctx->r6;
    // 0x802ACAF8: swc1        $f20, 0x44($v0)
    MEM_W(0X44, ctx->r2) = ctx->f20.u32l;
    // 0x802ACAFC: sw          $zero, 0x30($s0)
    MEM_W(0X30, ctx->r16) = 0;
    // 0x802ACB00: sw          $zero, 0x34($s0)
    MEM_W(0X34, ctx->r16) = 0;
    // 0x802ACB04: sw          $zero, 0x38($s0)
    MEM_W(0X38, ctx->r16) = 0;
    // 0x802ACB08: sh          $zero, 0x3E($s0)
    MEM_H(0X3E, ctx->r16) = 0;
    // 0x802ACB0C: sh          $zero, 0x5104($at)
    MEM_H(0X5104, ctx->r1) = 0;
    // 0x802ACB10: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802ACB14: sh          $a3, 0x5172($at)
    MEM_H(0X5172, ctx->r1) = ctx->r7;
    // 0x802ACB18: sh          $a3, 0x3C($s0)
    MEM_H(0X3C, ctx->r16) = ctx->r7;
    // 0x802ACB1C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802ACB20: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802ACB24: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802ACB28: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x802ACB2C: jr          $ra
    // 0x802ACB30: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x802ACB30: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_802ACB34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802ACB34: jr          $ra
    // 0x802ACB38: nop

    return;
    // 0x802ACB38: nop

;}
RECOMP_FUNC void func_802ACB3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802ACB3C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802ACB40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802ACB44: jal         0x8000E300
    // 0x802ACB48: nop

    func_8000E300(rdram, ctx);
        goto after_0;
    // 0x802ACB48: nop

    after_0:
    // 0x802ACB4C: jal         0x802A93EC
    // 0x802ACB50: nop

    func_802A93EC(rdram, ctx);
        goto after_1;
    // 0x802ACB50: nop

    after_1:
    // 0x802ACB54: jal         0x802AC484
    // 0x802ACB58: nop

    func_802AC484(rdram, ctx);
        goto after_2;
    // 0x802ACB58: nop

    after_2:
    // 0x802ACB5C: jal         0x802AC4D4
    // 0x802ACB60: nop

    func_802AC4D4(rdram, ctx);
        goto after_3;
    // 0x802ACB60: nop

    after_3:
    // 0x802ACB64: jal         0x802AAFE0
    // 0x802ACB68: nop

    func_802AAFE0(rdram, ctx);
        goto after_4;
    // 0x802ACB68: nop

    after_4:
    // 0x802ACB6C: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x802ACB70: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802ACB74: sw          $t6, 0x50D8($at)
    MEM_W(0X50D8, ctx->r1) = ctx->r14;
    // 0x802ACB78: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802ACB7C: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x802ACB80: jal         0x802A8A6C
    // 0x802ACB84: sh          $t7, 0x4FD4($at)
    MEM_H(0X4FD4, ctx->r1) = ctx->r15;
    func_802A8A6C(rdram, ctx);
        goto after_5;
    // 0x802ACB84: sh          $t7, 0x4FD4($at)
    MEM_H(0X4FD4, ctx->r1) = ctx->r15;
    after_5:
    // 0x802ACB88: jal         0x802A6FBC
    // 0x802ACB8C: nop

    func_802A6FBC(rdram, ctx);
        goto after_6;
    // 0x802ACB8C: nop

    after_6:
    // 0x802ACB90: jal         0x802AC254
    // 0x802ACB94: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_802AC254(rdram, ctx);
        goto after_7;
    // 0x802ACB94: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_7:
    // 0x802ACB98: jal         0x802A6BD4
    // 0x802ACB9C: nop

    func_802A6BD4(rdram, ctx);
        goto after_8;
    // 0x802ACB9C: nop

    after_8:
    // 0x802ACBA0: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802ACBA4: lw          $v0, 0x540C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X540C);
    // 0x802ACBA8: nop

    // 0x802ACBAC: bne         $v0, $zero, L_802ACBCC
    if (ctx->r2 != 0) {
        // 0x802ACBB0: nop
    
            goto L_802ACBCC;
    }
    // 0x802ACBB0: nop

    // 0x802ACBB4: bne         $v0, $zero, L_802ACBE0
    if (ctx->r2 != 0) {
        // 0x802ACBB8: lui         $t8, 0x802C
        ctx->r24 = S32(0X802C << 16);
            goto L_802ACBE0;
    }
    // 0x802ACBB8: lui         $t8, 0x802C
    ctx->r24 = S32(0X802C << 16);
    // 0x802ACBBC: lbu         $t8, 0x5450($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X5450);
    // 0x802ACBC0: nop

    // 0x802ACBC4: beq         $t8, $zero, L_802ACBE0
    if (ctx->r24 == 0) {
        // 0x802ACBC8: nop
    
            goto L_802ACBE0;
    }
    // 0x802ACBC8: nop

L_802ACBCC:
    // 0x802ACBCC: jal         0x802A6F3C
    // 0x802ACBD0: nop

    func_802A6F3C(rdram, ctx);
        goto after_9;
    // 0x802ACBD0: nop

    after_9:
    // 0x802ACBD4: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802ACBD8: lw          $v0, 0x540C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X540C);
    // 0x802ACBDC: nop

L_802ACBE0:
    // 0x802ACBE0: bne         $v0, $zero, L_802ACBFC
    if (ctx->r2 != 0) {
        // 0x802ACBE4: nop
    
            goto L_802ACBFC;
    }
    // 0x802ACBE4: nop

    // 0x802ACBE8: jal         0x802A6F80
    // 0x802ACBEC: nop

    func_802A6F80(rdram, ctx);
        goto after_10;
    // 0x802ACBEC: nop

    after_10:
    // 0x802ACBF0: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802ACBF4: lw          $v0, 0x540C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X540C);
    // 0x802ACBF8: nop

L_802ACBFC:
    // 0x802ACBFC: beq         $v0, $zero, L_802ACC2C
    if (ctx->r2 == 0) {
        // 0x802ACC00: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802ACC2C;
    }
    // 0x802ACC00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802ACC04: jal         0x802A811C
    // 0x802ACC08: nop

    func_802A811C(rdram, ctx);
        goto after_11;
    // 0x802ACC08: nop

    after_11:
    // 0x802ACC0C: lui         $t9, 0x802C
    ctx->r25 = S32(0X802C << 16);
    // 0x802ACC10: lw          $t9, 0x540C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X540C);
    // 0x802ACC14: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802ACC18: bne         $t9, $at, L_802ACC2C
    if (ctx->r25 != ctx->r1) {
        // 0x802ACC1C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802ACC2C;
    }
    // 0x802ACC1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802ACC20: jal         0x80015B94
    // 0x802ACC24: addiu       $a0, $zero, 0x12F
    ctx->r4 = ADD32(0, 0X12F);
    func_80015B94(rdram, ctx);
        goto after_12;
    // 0x802ACC24: addiu       $a0, $zero, 0x12F
    ctx->r4 = ADD32(0, 0X12F);
    after_12:
    // 0x802ACC28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802ACC2C:
    // 0x802ACC2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802ACC30: jr          $ra
    // 0x802ACC34: nop

    return;
    // 0x802ACC34: nop

;}
RECOMP_FUNC void func_802ACC38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802ACC38: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802ACC3C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802ACC40: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x802ACC44: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x802ACC48: lwc1        $f6, 0x10($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X10);
    // 0x802ACC4C: lwc1        $f4, 0x18($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X18);
    // 0x802ACC50: lwc1        $f10, 0x14($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X14);
    // 0x802ACC54: sub.s       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x802ACC58: lwc1        $f8, 0x1C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x802ACC5C: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x802ACC60: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x802ACC64: swc1        $f2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f2.u32l;
    // 0x802ACC68: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    // 0x802ACC6C: mul.s       $f6, $f16, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x802ACC70: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x802ACC74: jal         0x8007FA40
    // 0x802ACC78: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    func_8007FA40(rdram, ctx);
        goto after_0;
    // 0x802ACC78: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    after_0:
    // 0x802ACC7C: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x802ACC80: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x802ACC84: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802ACC88: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x802ACC8C: c.le.d      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.d <= ctx->f8.d;
    // 0x802ACC90: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x802ACC94: lwc1        $f2, 0x24($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X24);
    // 0x802ACC98: lwc1        $f16, 0x20($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X20);
    // 0x802ACC9C: bc1f        L_802ACCB0
    if (!c1cs) {
        // 0x802ACCA0: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_802ACCB0;
    }
    // 0x802ACCA0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802ACCA4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802ACCA8: b           L_802ACE2C
    // 0x802ACCAC: swc1        $f4, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f4.u32l;
        goto L_802ACE2C;
    // 0x802ACCAC: swc1        $f4, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f4.u32l;
L_802ACCB0:
    // 0x802ACCB0: lwc1        $f20, 0x4($a0)
    ctx->f20.u32l = MEM_W(ctx->r4, 0X4);
    // 0x802ACCB4: nop

    // 0x802ACCB8: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x802ACCBC: neg.s       $f18, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = -ctx->f20.fl;
    // 0x802ACCC0: bc1f        L_802ACCE4
    if (!c1cs) {
        // 0x802ACCC4: nop
    
            goto L_802ACCE4;
    }
    // 0x802ACCC4: nop

    // 0x802ACCC8: div.s       $f6, $f2, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = DIV_S(ctx->f2.fl, ctx->f0.fl);
    // 0x802ACCCC: nop

    // 0x802ACCD0: div.s       $f8, $f16, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f16.fl, ctx->f0.fl);
    // 0x802ACCD4: mul.s       $f2, $f6, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x802ACCD8: nop

    // 0x802ACCDC: mul.s       $f16, $f8, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x802ACCE0: nop

L_802ACCE4:
    // 0x802ACCE4: lwc1        $f12, 0x8($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X8);
    // 0x802ACCE8: lwc1        $f14, 0xC($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0XC);
    // 0x802ACCEC: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x802ACCF0: nop

    // 0x802ACCF4: bc1f        L_802ACD20
    if (!c1cs) {
        // 0x802ACCF8: nop
    
            goto L_802ACD20;
    }
    // 0x802ACCF8: nop

    // 0x802ACCFC: lwc1        $f10, 0x0($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X0);
    // 0x802ACD00: nop

    // 0x802ACD04: add.s       $f12, $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f10.fl;
    // 0x802ACD08: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x802ACD0C: nop

    // 0x802ACD10: bc1f        L_802ACD50
    if (!c1cs) {
        // 0x802ACD14: nop
    
            goto L_802ACD50;
    }
    // 0x802ACD14: nop

    // 0x802ACD18: b           L_802ACD50
    // 0x802ACD1C: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
        goto L_802ACD50;
    // 0x802ACD1C: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
L_802ACD20:
    // 0x802ACD20: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x802ACD24: nop

    // 0x802ACD28: bc1f        L_802ACD50
    if (!c1cs) {
        // 0x802ACD2C: nop
    
            goto L_802ACD50;
    }
    // 0x802ACD2C: nop

    // 0x802ACD30: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x802ACD34: nop

    // 0x802ACD38: sub.s       $f12, $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f4.fl;
    // 0x802ACD3C: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x802ACD40: nop

    // 0x802ACD44: bc1f        L_802ACD50
    if (!c1cs) {
        // 0x802ACD48: nop
    
            goto L_802ACD50;
    }
    // 0x802ACD48: nop

    // 0x802ACD4C: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
L_802ACD50:
    // 0x802ACD50: c.lt.s      $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f14.fl < ctx->f16.fl;
    // 0x802ACD54: nop

    // 0x802ACD58: bc1f        L_802ACD84
    if (!c1cs) {
        // 0x802ACD5C: nop
    
            goto L_802ACD84;
    }
    // 0x802ACD5C: nop

    // 0x802ACD60: lwc1        $f6, 0x0($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X0);
    // 0x802ACD64: nop

    // 0x802ACD68: add.s       $f14, $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f6.fl;
    // 0x802ACD6C: c.lt.s      $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f16.fl < ctx->f14.fl;
    // 0x802ACD70: nop

    // 0x802ACD74: bc1f        L_802ACDB4
    if (!c1cs) {
        // 0x802ACD78: nop
    
            goto L_802ACDB4;
    }
    // 0x802ACD78: nop

    // 0x802ACD7C: b           L_802ACDB4
    // 0x802ACD80: mov.s       $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = ctx->f16.fl;
        goto L_802ACDB4;
    // 0x802ACD80: mov.s       $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = ctx->f16.fl;
L_802ACD84:
    // 0x802ACD84: c.lt.s      $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f16.fl < ctx->f14.fl;
    // 0x802ACD88: nop

    // 0x802ACD8C: bc1f        L_802ACDB4
    if (!c1cs) {
        // 0x802ACD90: nop
    
            goto L_802ACDB4;
    }
    // 0x802ACD90: nop

    // 0x802ACD94: lwc1        $f8, 0x0($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X0);
    // 0x802ACD98: nop

    // 0x802ACD9C: sub.s       $f14, $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f14.fl - ctx->f8.fl;
    // 0x802ACDA0: c.lt.s      $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f14.fl < ctx->f16.fl;
    // 0x802ACDA4: nop

    // 0x802ACDA8: bc1f        L_802ACDB4
    if (!c1cs) {
        // 0x802ACDAC: nop
    
            goto L_802ACDB4;
    }
    // 0x802ACDAC: nop

    // 0x802ACDB0: mov.s       $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = ctx->f16.fl;
L_802ACDB4:
    // 0x802ACDB4: lwc1        $f2, 0x10($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X10);
    // 0x802ACDB8: lwc1        $f10, 0x18($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X18);
    // 0x802ACDBC: add.s       $f2, $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f12.fl;
    // 0x802ACDC0: lwc1        $f16, 0x14($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X14);
    // 0x802ACDC4: sub.s       $f0, $f10, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f10.fl - ctx->f2.fl;
    // 0x802ACDC8: swc1        $f12, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f12.u32l;
    // 0x802ACDCC: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x802ACDD0: swc1        $f14, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f14.u32l;
    // 0x802ACDD4: bc1f        L_802ACE24
    if (!c1cs) {
        // 0x802ACDD8: add.s       $f16, $f16, $f14
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f14.fl;
            goto L_802ACE24;
    }
    // 0x802ACDD8: add.s       $f16, $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f14.fl;
    // 0x802ACDDC: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x802ACDE0: nop

    // 0x802ACDE4: bc1f        L_802ACE24
    if (!c1cs) {
        // 0x802ACDE8: nop
    
            goto L_802ACE24;
    }
    // 0x802ACDE8: nop

    // 0x802ACDEC: lwc1        $f4, 0x1C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x802ACDF0: nop

    // 0x802ACDF4: sub.s       $f0, $f4, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f16.fl;
    // 0x802ACDF8: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x802ACDFC: nop

    // 0x802ACE00: bc1f        L_802ACE24
    if (!c1cs) {
        // 0x802ACE04: nop
    
            goto L_802ACE24;
    }
    // 0x802ACE04: nop

    // 0x802ACE08: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x802ACE0C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802ACE10: bc1f        L_802ACE24
    if (!c1cs) {
        // 0x802ACE14: nop
    
            goto L_802ACE24;
    }
    // 0x802ACE14: nop

    // 0x802ACE18: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802ACE1C: nop

    // 0x802ACE20: swc1        $f6, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f6.u32l;
L_802ACE24:
    // 0x802ACE24: swc1        $f2, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f2.u32l;
    // 0x802ACE28: swc1        $f16, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f16.u32l;
L_802ACE2C:
    // 0x802ACE2C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802ACE30: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x802ACE34: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x802ACE38: jr          $ra
    // 0x802ACE3C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x802ACE3C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802ACE40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802ACE40: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802ACE44: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802ACE48: addiu       $v0, $v0, 0x50E0
    ctx->r2 = ADD32(ctx->r2, 0X50E0);
    // 0x802ACE4C: swc1        $f12, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f12.u32l;
    // 0x802ACE50: swc1        $f14, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f14.u32l;
    // 0x802ACE54: jr          $ra
    // 0x802ACE58: swc1        $f4, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f4.u32l;
    return;
    // 0x802ACE58: swc1        $f4, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_802ACE5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802ACE5C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802ACE60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802ACE64: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x802ACE68: jal         0x802ACC38
    // 0x802ACE6C: addiu       $a0, $a0, 0x50E0
    ctx->r4 = ADD32(ctx->r4, 0X50E0);
    func_802ACC38(rdram, ctx);
        goto after_0;
    // 0x802ACE6C: addiu       $a0, $a0, 0x50E0
    ctx->r4 = ADD32(ctx->r4, 0X50E0);
    after_0:
    // 0x802ACE70: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x802ACE74: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x802ACE78: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x802ACE7C: addiu       $v1, $v1, 0x50E0
    ctx->r3 = ADD32(ctx->r3, 0X50E0);
    // 0x802ACE80: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802ACE84: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802ACE88: lwc1        $f4, 0x10($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X10);
    // 0x802ACE8C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802ACE90: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x802ACE94: addiu       $v0, $v0, 0x54B8
    ctx->r2 = ADD32(ctx->r2, 0X54B8);
    // 0x802ACE98: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x802ACE9C: lw          $t8, 0x4C($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X4C);
    // 0x802ACEA0: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x802ACEA4: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x802ACEA8: sh          $t7, 0x8($t8)
    MEM_H(0X8, ctx->r24) = ctx->r15;
    // 0x802ACEAC: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x802ACEB0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802ACEB4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802ACEB8: lwc1        $f8, 0x14($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X14);
    // 0x802ACEBC: lw          $t1, 0x4C($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4C);
    // 0x802ACEC0: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x802ACEC4: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
    // 0x802ACEC8: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x802ACECC: sh          $t0, 0xA($t1)
    MEM_H(0XA, ctx->r9) = ctx->r8;
    // 0x802ACED0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802ACED4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802ACED8: jr          $ra
    // 0x802ACEDC: nop

    return;
    // 0x802ACEDC: nop

;}
RECOMP_FUNC void func_802ACEE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802ACEE0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802ACEE4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x802ACEE8: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x802ACEEC: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    // 0x802ACEF0: mtc1        $a0, $f10
    ctx->f10.u32l = ctx->r4;
    // 0x802ACEF4: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802ACEF8: lw          $v0, 0x50D4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X50D4);
    // 0x802ACEFC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x802ACF00: sll         $t8, $a1, 16
    ctx->r24 = S32(ctx->r5 << 16);
    // 0x802ACF04: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x802ACF08: sra         $a1, $t8, 16
    ctx->r5 = S32(SIGNED(ctx->r24) >> 16);
    // 0x802ACF0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802ACF10: mtc1        $a1, $f6
    ctx->f6.u32l = ctx->r5;
    // 0x802ACF14: lwc1        $f14, 0xC($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0XC);
    // 0x802ACF18: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x802ACF1C: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x802ACF20: swc1        $f14, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f14.u32l;
    // 0x802ACF24: sub.s       $f0, $f14, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f14.fl - ctx->f16.fl;
    // 0x802ACF28: mul.s       $f18, $f0, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x802ACF2C: sub.s       $f2, $f4, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x802ACF30: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x802ACF34: jal         0x8007FA40
    // 0x802ACF38: add.s       $f12, $f18, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f18.fl + ctx->f6.fl;
    func_8007FA40(rdram, ctx);
        goto after_0;
    // 0x802ACF38: add.s       $f12, $f18, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f18.fl + ctx->f6.fl;
    after_0:
    // 0x802ACF3C: lui         $at, 0x4034
    ctx->r1 = S32(0X4034 << 16);
    // 0x802ACF40: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x802ACF44: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802ACF48: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x802ACF4C: c.le.d      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.d <= ctx->f4.d;
    // 0x802ACF50: lwc1        $f14, 0x18($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X18);
    // 0x802ACF54: bc1f        L_802ACFBC
    if (!c1cs) {
        // 0x802ACF58: lui         $at, 0x802C
        ctx->r1 = S32(0X802C << 16);
            goto L_802ACFBC;
    }
    // 0x802ACF58: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802ACF5C: lwc1        $f11, 0x15C8($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X15C8);
    // 0x802ACF60: lwc1        $f10, 0x15CC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X15CC);
    // 0x802ACF64: cvt.d.s     $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.d = CVT_D_S(ctx->f14.fl);
    // 0x802ACF68: c.lt.d      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.d < ctx->f10.d;
    // 0x802ACF6C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802ACF70: bc1f        L_802ACFC0
    if (!c1cs) {
        // 0x802ACF74: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802ACFC0;
    }
    // 0x802ACF74: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802ACF78: lwc1        $f17, 0x15D0($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X15D0);
    // 0x802ACF7C: lwc1        $f16, 0x15D4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X15D4);
    // 0x802ACF80: nop

    // 0x802ACF84: c.lt.d      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.d < ctx->f0.d;
    // 0x802ACF88: nop

    // 0x802ACF8C: bc1f        L_802ACFC0
    if (!c1cs) {
        // 0x802ACF90: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802ACFC0;
    }
    // 0x802ACF90: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802ACF94: jal         0x80087D40
    // 0x802ACF98: nop

    func_80087D40(rdram, ctx);
        goto after_1;
    // 0x802ACF98: nop

    after_1:
    // 0x802ACF9C: addiu       $at, $zero, 0x7D0
    ctx->r1 = ADD32(0, 0X7D0);
    // 0x802ACFA0: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x802ACFA4: mfhi        $t0
    ctx->r8 = hi;
    // 0x802ACFA8: slti        $at, $t0, 0x3E8
    ctx->r1 = SIGNED(ctx->r8) < 0X3E8 ? 1 : 0;
    // 0x802ACFAC: beq         $at, $zero, L_802ACFC0
    if (ctx->r1 == 0) {
        // 0x802ACFB0: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802ACFC0;
    }
    // 0x802ACFB0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802ACFB4: b           L_802ACFC0
    // 0x802ACFB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802ACFC0;
    // 0x802ACFB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802ACFBC:
    // 0x802ACFBC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802ACFC0:
    // 0x802ACFC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802ACFC4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802ACFC8: jr          $ra
    // 0x802ACFCC: nop

    return;
    // 0x802ACFCC: nop

;}
RECOMP_FUNC void func_802ACFD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802ACFD0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802ACFD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802ACFD8: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x802ACFDC: jal         0x802ACC38
    // 0x802ACFE0: addiu       $a0, $a0, 0x510C
    ctx->r4 = ADD32(ctx->r4, 0X510C);
    func_802ACC38(rdram, ctx);
        goto after_0;
    // 0x802ACFE0: addiu       $a0, $a0, 0x510C
    ctx->r4 = ADD32(ctx->r4, 0X510C);
    after_0:
    // 0x802ACFE4: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x802ACFE8: addiu       $v1, $v1, 0x50E0
    ctx->r3 = ADD32(ctx->r3, 0X50E0);
    // 0x802ACFEC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802ACFF0: lwc1        $f4, 0x4C($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X4C);
    // 0x802ACFF4: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x802ACFF8: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x802ACFFC: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802AD000: bc1t        L_802AD00C
    if (c1cs) {
        // 0x802AD004: nop
    
            goto L_802AD00C;
    }
    // 0x802AD004: nop

    // 0x802AD008: swc1        $f0, 0x4C($v1)
    MEM_W(0X4C, ctx->r3) = ctx->f0.u32l;
L_802AD00C:
    // 0x802AD00C: lw          $v0, 0x50C0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X50C0);
    // 0x802AD010: addiu       $a0, $a0, 0x4FDC
    ctx->r4 = ADD32(ctx->r4, 0X4FDC);
    // 0x802AD014: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x802AD018: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x802AD01C: swc1        $f6, 0x44($v1)
    MEM_W(0X44, ctx->r3) = ctx->f6.u32l;
    // 0x802AD020: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x802AD024: lwc1        $f10, 0x3C($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X3C);
    // 0x802AD028: swc1        $f8, 0x48($v1)
    MEM_W(0X48, ctx->r3) = ctx->f8.u32l;
    // 0x802AD02C: swc1        $f10, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->f10.u32l;
    // 0x802AD030: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x802AD034: lwc1        $f16, 0x40($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X40);
    // 0x802AD038: nop

    // 0x802AD03C: swc1        $f16, 0x10($t7)
    MEM_W(0X10, ctx->r15) = ctx->f16.u32l;
    // 0x802AD040: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802AD044: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802AD048: jr          $ra
    // 0x802AD04C: nop

    return;
    // 0x802AD04C: nop

;}
