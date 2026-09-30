#include "iss64_recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_8006EDB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006EDB0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8006EDB4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8006EDB8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8006EDBC: lh          $t6, 0x36($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X36);
    // 0x8006EDC0: lbu         $t7, 0x3B($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X3B);
    // 0x8006EDC4: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8006EDC8: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x8006EDCC: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x8006EDD0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8006EDD4: lbu         $a2, 0x27($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X27);
    // 0x8006EDD8: lh          $a3, 0x32($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X32);
    // 0x8006EDDC: lbu         $a1, 0x23($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X23);
    // 0x8006EDE0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8006EDE4: jal         0x8006EE5C
    // 0x8006EDE8: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    func_8006EE5C(rdram, ctx);
        goto after_0;
    // 0x8006EDE8: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    after_0:
    // 0x8006EDEC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8006EDF0: jal         0x8002A7F8
    // 0x8006EDF4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8002A7F8(rdram, ctx);
        goto after_1;
    // 0x8006EDF4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_1:
    // 0x8006EDF8: lh          $t8, 0x32($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X32);
    // 0x8006EDFC: lh          $t0, 0x36($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X36);
    // 0x8006EE00: lbu         $a1, 0x2F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X2F);
    // 0x8006EE04: lbu         $a2, 0x23($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X23);
    // 0x8006EE08: lbu         $a3, 0x27($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X27);
    // 0x8006EE0C: addiu       $t9, $t8, 0x2
    ctx->r25 = ADD32(ctx->r24, 0X2);
    // 0x8006EE10: addiu       $t1, $t0, 0x2
    ctx->r9 = ADD32(ctx->r8, 0X2);
    // 0x8006EE14: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x8006EE18: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x8006EE1C: jal         0x8006EF64
    // 0x8006EE20: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8006EF64(rdram, ctx);
        goto after_2;
    // 0x8006EE20: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x8006EE24: lbu         $a0, 0x2F($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X2F);
    // 0x8006EE28: lh          $t3, 0x36($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X36);
    // 0x8006EE2C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8006EE30: andi        $t2, $a0, 0xFF
    ctx->r10 = ctx->r4 & 0XFF;
    // 0x8006EE34: lbu         $a1, 0x23($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X23);
    // 0x8006EE38: lbu         $a2, 0x27($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X27);
    // 0x8006EE3C: lh          $a3, 0x32($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X32);
    // 0x8006EE40: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x8006EE44: jal         0x8006F028
    // 0x8006EE48: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    func_8006F028(rdram, ctx);
        goto after_3;
    // 0x8006EE48: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    after_3:
    // 0x8006EE4C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8006EE50: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8006EE54: jr          $ra
    // 0x8006EE58: nop

    return;
    // 0x8006EE58: nop

;}
RECOMP_FUNC void func_8006EE5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006EE5C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8006EE60: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8006EE64: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8006EE68: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8006EE6C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8006EE70: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x8006EE74: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x8006EE78: jal         0x8002A7F8
    // 0x8006EE7C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8002A7F8(rdram, ctx);
        goto after_0;
    // 0x8006EE7C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x8006EE80: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x8006EE84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006EE88: jal         0x8002A7F8
    // 0x8006EE8C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8002A7F8(rdram, ctx);
        goto after_1;
    // 0x8006EE8C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x8006EE90: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x8006EE94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006EE98: jal         0x8002A7F8
    // 0x8006EE9C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8002A7F8(rdram, ctx);
        goto after_2;
    // 0x8006EE9C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_2:
    // 0x8006EEA0: lh          $a1, 0x3E($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X3E);
    // 0x8006EEA4: lh          $a2, 0x42($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X42);
    // 0x8006EEA8: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8006EEAC: jal         0x8004CD44
    // 0x8006EEB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8004CD44(rdram, ctx);
        goto after_3;
    // 0x8006EEB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8006EEB4: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x8006EEB8: lh          $a1, 0x3E($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X3E);
    // 0x8006EEBC: lh          $a2, 0x42($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X42);
    // 0x8006EEC0: jal         0x8004CD44
    // 0x8006EEC4: nop

    func_8004CD44(rdram, ctx);
        goto after_4;
    // 0x8006EEC4: nop

    after_4:
    // 0x8006EEC8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8006EECC: lh          $a1, 0x3E($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X3E);
    // 0x8006EED0: lh          $a2, 0x42($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X42);
    // 0x8006EED4: jal         0x8004CD44
    // 0x8006EED8: nop

    func_8004CD44(rdram, ctx);
        goto after_5;
    // 0x8006EED8: nop

    after_5:
    // 0x8006EEDC: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8006EEE0: lh          $a1, 0x3E($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X3E);
    // 0x8006EEE4: lh          $a2, 0x42($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X42);
    // 0x8006EEE8: jal         0x8004CD44
    // 0x8006EEEC: nop

    func_8004CD44(rdram, ctx);
        goto after_6;
    // 0x8006EEEC: nop

    after_6:
    // 0x8006EEF0: jal         0x8006E48C
    // 0x8006EEF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8006E48C(rdram, ctx);
        goto after_7;
    // 0x8006EEF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x8006EEF8: lbu         $a0, 0x37($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X37);
    // 0x8006EEFC: lbu         $a1, 0x3B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X3B);
    // 0x8006EF00: jal         0x8006ECA4
    // 0x8006EF04: nop

    func_8006ECA4(rdram, ctx);
        goto after_8;
    // 0x8006EF04: nop

    after_8:
    // 0x8006EF08: bne         $v0, $zero, L_8006EF28
    if (ctx->r2 != 0) {
        // 0x8006EF0C: lw          $t6, 0x2C($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X2C);
            goto L_8006EF28;
    }
    // 0x8006EF0C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8006EF10: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x8006EF14: jal         0x8006E50C
    // 0x8006EF18: nop

    func_8006E50C(rdram, ctx);
        goto after_9;
    // 0x8006EF18: nop

    after_9:
    // 0x8006EF1C: b           L_8006EF34
    // 0x8006EF20: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
        goto L_8006EF34;
    // 0x8006EF20: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8006EF24: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
L_8006EF28:
    // 0x8006EF28: nop

    // 0x8006EF2C: sb          $zero, 0x4($t6)
    MEM_B(0X4, ctx->r14) = 0;
    // 0x8006EF30: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
L_8006EF34:
    // 0x8006EF34: jal         0x8006E54C
    // 0x8006EF38: nop

    func_8006E54C(rdram, ctx);
        goto after_10;
    // 0x8006EF38: nop

    after_10:
    // 0x8006EF3C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8006EF40: lbu         $a1, 0x37($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X37);
    // 0x8006EF44: lbu         $a2, 0x3B($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X3B);
    // 0x8006EF48: lbu         $a3, 0x47($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X47);
    // 0x8006EF4C: jal         0x8006F2DC
    // 0x8006EF50: nop

    func_8006F2DC(rdram, ctx);
        goto after_11;
    // 0x8006EF50: nop

    after_11:
    // 0x8006EF54: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8006EF58: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8006EF5C: jr          $ra
    // 0x8006EF60: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8006EF60: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8006EF64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006EF64: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8006EF68: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x8006EF6C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8006EF70: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x8006EF74: lb          $a2, 0x3F($sp)
    ctx->r6 = MEM_B(ctx->r29, 0X3F);
    // 0x8006EF78: lb          $a1, 0x3B($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X3B);
    // 0x8006EF7C: lh          $t6, 0x46($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X46);
    // 0x8006EF80: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8006EF84: lh          $a3, 0x42($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X42);
    // 0x8006EF88: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8006EF8C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8006EF90: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8006EF94: jal         0x8006EC44
    // 0x8006EF98: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_8006EC44(rdram, ctx);
        goto after_0;
    // 0x8006EF98: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x8006EF9C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8006EFA0: addiu       $t7, $zero, 0x9
    ctx->r15 = ADD32(0, 0X9);
    // 0x8006EFA4: addiu       $t8, $zero, 0x80
    ctx->r24 = ADD32(0, 0X80);
    // 0x8006EFA8: sb          $t7, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r15;
    // 0x8006EFAC: sh          $t8, 0x6($a0)
    MEM_H(0X6, ctx->r4) = ctx->r24;
    // 0x8006EFB0: lh          $a2, 0x46($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X46);
    // 0x8006EFB4: lh          $a1, 0x42($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X42);
    // 0x8006EFB8: jal         0x8004CD44
    // 0x8006EFBC: nop

    func_8004CD44(rdram, ctx);
        goto after_1;
    // 0x8006EFBC: nop

    after_1:
    // 0x8006EFC0: lbu         $t9, 0x37($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X37);
    // 0x8006EFC4: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x8006EFC8: lh          $t2, 0x46($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X46);
    // 0x8006EFCC: addiu       $t1, $t1, -0x3770
    ctx->r9 = ADD32(ctx->r9, -0X3770);
    // 0x8006EFD0: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8006EFD4: sll         $t0, $t9, 5
    ctx->r8 = S32(ctx->r25 << 5);
    // 0x8006EFD8: addu        $v1, $t0, $t1
    ctx->r3 = ADD32(ctx->r8, ctx->r9);
    // 0x8006EFDC: ori         $at, $at, 0xFEE8
    ctx->r1 = ctx->r1 | 0XFEE8;
    // 0x8006EFE0: lb          $a1, 0x2F($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X2F);
    // 0x8006EFE4: lb          $a2, 0x2B($sp)
    ctx->r6 = MEM_B(ctx->r29, 0X2B);
    // 0x8006EFE8: lh          $a3, 0x42($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X42);
    // 0x8006EFEC: addu        $a0, $v1, $at
    ctx->r4 = ADD32(ctx->r3, ctx->r1);
    // 0x8006EFF0: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x8006EFF4: jal         0x8006ED00
    // 0x8006EFF8: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    func_8006ED00(rdram, ctx);
        goto after_2;
    // 0x8006EFF8: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    after_2:
    // 0x8006EFFC: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x8006F000: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8006F004: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8006F008: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x8006F00C: addiu       $t3, $zero, 0x70
    ctx->r11 = ADD32(0, 0X70);
    // 0x8006F010: addiu       $t4, $zero, 0xA
    ctx->r12 = ADD32(0, 0XA);
    // 0x8006F014: addu        $v0, $v1, $at
    ctx->r2 = ADD32(ctx->r3, ctx->r1);
    // 0x8006F018: sh          $t3, 0x7EEE($v0)
    MEM_H(0X7EEE, ctx->r2) = ctx->r11;
    // 0x8006F01C: sb          $t4, 0x7EED($v0)
    MEM_B(0X7EED, ctx->r2) = ctx->r12;
    // 0x8006F020: jr          $ra
    // 0x8006F024: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8006F024: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8006F028(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006F028: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006F02C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8006F030: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8006F034: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006F038: lbu         $a0, 0x1F($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1F);
    // 0x8006F03C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8006F040: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x8006F044: jal         0x8006F224
    // 0x8006F048: andi        $a1, $a2, 0xFF
    ctx->r5 = ctx->r6 & 0XFF;
    func_8006F224(rdram, ctx);
        goto after_0;
    // 0x8006F048: andi        $a1, $a2, 0xFF
    ctx->r5 = ctx->r6 & 0XFF;
    after_0:
    // 0x8006F04C: lbu         $a0, 0x1B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1B);
    // 0x8006F050: lh          $a2, 0x26($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X26);
    // 0x8006F054: lh          $a3, 0x2A($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X2A);
    // 0x8006F058: jal         0x8006F070
    // 0x8006F05C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_8006F070(rdram, ctx);
        goto after_1;
    // 0x8006F05C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_1:
    // 0x8006F060: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006F064: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8006F068: jr          $ra
    // 0x8006F06C: nop

    return;
    // 0x8006F06C: nop

;}
RECOMP_FUNC void func_8006F070(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006F070: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8006F074: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x8006F078: sll         $fp, $a2, 16
    ctx->r30 = S32(ctx->r6 << 16);
    // 0x8006F07C: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x8006F080: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x8006F084: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x8006F088: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x8006F08C: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x8006F090: sra         $t7, $fp, 16
    ctx->r15 = S32(SIGNED(ctx->r30) >> 16);
    // 0x8006F094: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x8006F098: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x8006F09C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8006F0A0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8006F0A4: addiu       $t9, $t9, -0x3770
    ctx->r25 = ADD32(ctx->r25, -0X3770);
    // 0x8006F0A8: sll         $t8, $t6, 5
    ctx->r24 = S32(ctx->r14 << 5);
    // 0x8006F0AC: lui         $s4, 0x2
    ctx->r20 = S32(0X2 << 16);
    // 0x8006F0B0: lui         $s5, 0x2
    ctx->r21 = S32(0X2 << 16);
    // 0x8006F0B4: lui         $s6, 0x800E
    ctx->r22 = S32(0X800E << 16);
    // 0x8006F0B8: or          $s7, $a1, $zero
    ctx->r23 = ctx->r5 | 0;
    // 0x8006F0BC: or          $fp, $t7, $zero
    ctx->r30 = ctx->r15 | 0;
    // 0x8006F0C0: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8006F0C4: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8006F0C8: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x8006F0CC: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x8006F0D0: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x8006F0D4: addiu       $s6, $s6, -0x57B0
    ctx->r22 = ADD32(ctx->r22, -0X57B0);
    // 0x8006F0D8: ori         $s5, $s5, 0x8000
    ctx->r21 = ctx->r21 | 0X8000;
    // 0x8006F0DC: ori         $s4, $s4, 0xFEE8
    ctx->r20 = ctx->r20 | 0XFEE8;
    // 0x8006F0E0: addu        $s3, $t8, $t9
    ctx->r19 = ADD32(ctx->r24, ctx->r25);
    // 0x8006F0E4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8006F0E8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8006F0EC: sw          $t6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r14;
L_8006F0F0:
    // 0x8006F0F0: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x8006F0F4: jal         0x8004DE44
    // 0x8006F0F8: andi        $a1, $s0, 0xFF
    ctx->r5 = ctx->r16 & 0XFF;
    func_8004DE44(rdram, ctx);
        goto after_0;
    // 0x8006F0F8: andi        $a1, $s0, 0xFF
    ctx->r5 = ctx->r16 & 0XFF;
    after_0:
    // 0x8006F0FC: sll         $t1, $s0, 2
    ctx->r9 = S32(ctx->r16 << 2);
    // 0x8006F100: addu        $v1, $s6, $t1
    ctx->r3 = ADD32(ctx->r22, ctx->r9);
    // 0x8006F104: lh          $t2, 0x0($v1)
    ctx->r10 = MEM_H(ctx->r3, 0X0);
    // 0x8006F108: lh          $t5, 0x2($v1)
    ctx->r13 = MEM_H(ctx->r3, 0X2);
    // 0x8006F10C: lh          $t6, 0x5E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X5E);
    // 0x8006F110: sll         $t0, $s1, 5
    ctx->r8 = S32(ctx->r17 << 5);
    // 0x8006F114: addu        $a1, $t2, $fp
    ctx->r5 = ADD32(ctx->r10, ctx->r30);
    // 0x8006F118: addu        $a2, $t5, $t6
    ctx->r6 = ADD32(ctx->r13, ctx->r14);
    // 0x8006F11C: sll         $t7, $a2, 16
    ctx->r15 = S32(ctx->r6 << 16);
    // 0x8006F120: sll         $t3, $a1, 16
    ctx->r11 = S32(ctx->r5 << 16);
    // 0x8006F124: addu        $s2, $s3, $t0
    ctx->r18 = ADD32(ctx->r19, ctx->r8);
    // 0x8006F128: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x8006F12C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x8006F130: addu        $a0, $s2, $s4
    ctx->r4 = ADD32(ctx->r18, ctx->r20);
    // 0x8006F134: sra         $a1, $t3, 16
    ctx->r5 = S32(SIGNED(ctx->r11) >> 16);
    // 0x8006F138: sra         $a2, $t7, 16
    ctx->r6 = S32(SIGNED(ctx->r15) >> 16);
    // 0x8006F13C: jal         0x8002F9EC
    // 0x8006F140: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    func_8002F9EC(rdram, ctx);
        goto after_1;
    // 0x8006F140: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    after_1:
    // 0x8006F144: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8006F148: andi        $s1, $s0, 0xFF
    ctx->r17 = ctx->r16 & 0XFF;
    // 0x8006F14C: slti        $at, $s1, 0x9
    ctx->r1 = SIGNED(ctx->r17) < 0X9 ? 1 : 0;
    // 0x8006F150: addiu       $t0, $zero, 0x9
    ctx->r8 = ADD32(0, 0X9);
    // 0x8006F154: addu        $t1, $s2, $s5
    ctx->r9 = ADD32(ctx->r18, ctx->r21);
    // 0x8006F158: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
    // 0x8006F15C: bne         $at, $zero, L_8006F0F0
    if (ctx->r1 != 0) {
        // 0x8006F160: sb          $t0, 0x7EED($t1)
        MEM_B(0X7EED, ctx->r9) = ctx->r8;
            goto L_8006F0F0;
    }
    // 0x8006F160: sb          $t0, 0x7EED($t1)
    MEM_B(0X7EED, ctx->r9) = ctx->r8;
    // 0x8006F164: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x8006F168: jal         0x8004DE44
    // 0x8006F16C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_8004DE44(rdram, ctx);
        goto after_2;
    // 0x8006F16C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_2:
    // 0x8006F170: lw          $t3, 0x48($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X48);
    // 0x8006F174: lh          $t6, 0x24($s6)
    ctx->r14 = MEM_H(ctx->r22, 0X24);
    // 0x8006F178: lh          $t9, 0x26($s6)
    ctx->r25 = MEM_H(ctx->r22, 0X26);
    // 0x8006F17C: lh          $t0, 0x5E($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X5E);
    // 0x8006F180: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x8006F184: addiu       $t5, $t5, -0x3770
    ctx->r13 = ADD32(ctx->r13, -0X3770);
    // 0x8006F188: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x8006F18C: sll         $t4, $t3, 5
    ctx->r12 = S32(ctx->r11 << 5);
    // 0x8006F190: addu        $s0, $t4, $t5
    ctx->r16 = ADD32(ctx->r12, ctx->r13);
    // 0x8006F194: ori         $at, $at, 0x8
    ctx->r1 = ctx->r1 | 0X8;
    // 0x8006F198: addu        $a1, $t6, $fp
    ctx->r5 = ADD32(ctx->r14, ctx->r30);
    // 0x8006F19C: addu        $a2, $t9, $t0
    ctx->r6 = ADD32(ctx->r25, ctx->r8);
    // 0x8006F1A0: sll         $t1, $a2, 16
    ctx->r9 = S32(ctx->r6 << 16);
    // 0x8006F1A4: sll         $t7, $a1, 16
    ctx->r15 = S32(ctx->r5 << 16);
    // 0x8006F1A8: addu        $s1, $s0, $at
    ctx->r17 = ADD32(ctx->r16, ctx->r1);
    // 0x8006F1AC: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x8006F1B0: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x8006F1B4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8006F1B8: sra         $a1, $t7, 16
    ctx->r5 = S32(SIGNED(ctx->r15) >> 16);
    // 0x8006F1BC: sra         $a2, $t1, 16
    ctx->r6 = S32(SIGNED(ctx->r9) >> 16);
    // 0x8006F1C0: jal         0x8002F914
    // 0x8006F1C4: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    func_8002F914(rdram, ctx);
        goto after_3;
    // 0x8006F1C4: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    after_3:
    // 0x8006F1C8: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x8006F1CC: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x8006F1D0: addiu       $t4, $zero, 0x9
    ctx->r12 = ADD32(0, 0X9);
    // 0x8006F1D4: sb          $t4, 0xD($at)
    MEM_B(0XD, ctx->r1) = ctx->r12;
    // 0x8006F1D8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8006F1DC: jal         0x80031B0C
    // 0x8006F1E0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80031B0C(rdram, ctx);
        goto after_4;
    // 0x8006F1E0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_4:
    // 0x8006F1E4: lw          $v0, 0x48($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X48);
    // 0x8006F1E8: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8006F1EC: addiu       $v0, $v0, 0xA
    ctx->r2 = ADD32(ctx->r2, 0XA);
    // 0x8006F1F0: sll         $t5, $v0, 16
    ctx->r13 = S32(ctx->r2 << 16);
    // 0x8006F1F4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8006F1F8: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8006F1FC: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8006F200: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8006F204: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x8006F208: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x8006F20C: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x8006F210: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x8006F214: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x8006F218: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x8006F21C: jr          $ra
    // 0x8006F220: sra         $v0, $t5, 16
    ctx->r2 = S32(SIGNED(ctx->r13) >> 16);
    return;
    // 0x8006F220: sra         $v0, $t5, 16
    ctx->r2 = S32(SIGNED(ctx->r13) >> 16);
;}
RECOMP_FUNC void func_8006F224(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006F224: andi        $a2, $a0, 0xFF
    ctx->r6 = ctx->r4 & 0XFF;
    // 0x8006F228: andi        $a3, $a1, 0xFF
    ctx->r7 = ctx->r5 & 0XFF;
    // 0x8006F22C: sll         $t7, $a3, 1
    ctx->r15 = S32(ctx->r7 << 1);
    // 0x8006F230: sll         $t6, $a2, 5
    ctx->r14 = S32(ctx->r6 << 5);
    // 0x8006F234: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x8006F238: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006F23C: addiu       $t9, $t9, 0x37B0
    ctx->r25 = ADD32(ctx->r25, 0X37B0);
    // 0x8006F240: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8006F244: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x8006F248: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8006F24C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8006F250: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006F254: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x8006F258: lbu         $a1, 0x1($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X1);
    // 0x8006F25C: jal         0x8006F274
    // 0x8006F260: nop

    func_8006F274(rdram, ctx);
        goto after_0;
    // 0x8006F260: nop

    after_0:
    // 0x8006F264: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006F268: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8006F26C: jr          $ra
    // 0x8006F270: nop

    return;
    // 0x8006F270: nop

;}
RECOMP_FUNC void func_8006F274(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006F274: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x8006F278: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8006F27C: andi        $t7, $a1, 0xFF
    ctx->r15 = ctx->r5 & 0XFF;
    // 0x8006F280: slti        $at, $t6, 0x2A
    ctx->r1 = SIGNED(ctx->r14) < 0X2A ? 1 : 0;
    // 0x8006F284: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x8006F288: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8006F28C: bne         $at, $zero, L_8006F2A4
    if (ctx->r1 != 0) {
        // 0x8006F290: or          $v1, $t6, $zero
        ctx->r3 = ctx->r14 | 0;
            goto L_8006F2A4;
    }
    // 0x8006F290: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x8006F294: slti        $at, $t6, 0x2C
    ctx->r1 = SIGNED(ctx->r14) < 0X2C ? 1 : 0;
    // 0x8006F298: beq         $at, $zero, L_8006F2A4
    if (ctx->r1 == 0) {
        // 0x8006F29C: addiu       $a0, $t6, -0x6
        ctx->r4 = ADD32(ctx->r14, -0X6);
            goto L_8006F2A4;
    }
    // 0x8006F29C: addiu       $a0, $t6, -0x6
    ctx->r4 = ADD32(ctx->r14, -0X6);
    // 0x8006F2A0: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
L_8006F2A4:
    // 0x8006F2A4: sll         $t9, $v1, 4
    ctx->r25 = S32(ctx->r3 << 4);
    // 0x8006F2A8: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8006F2AC: sll         $t1, $a1, 2
    ctx->r9 = S32(ctx->r5 << 2);
    // 0x8006F2B0: subu        $t1, $t1, $a1
    ctx->r9 = SUB32(ctx->r9, ctx->r5);
    // 0x8006F2B4: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x8006F2B8: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x8006F2BC: sll         $t1, $t1, 3
    ctx->r9 = S32(ctx->r9 << 3);
    // 0x8006F2C0: addu        $t1, $t1, $a1
    ctx->r9 = ADD32(ctx->r9, ctx->r5);
    // 0x8006F2C4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8006F2C8: lui         $t3, 0x800B
    ctx->r11 = S32(0X800B << 16);
    // 0x8006F2CC: addiu       $t3, $t3, 0x4F30
    ctx->r11 = ADD32(ctx->r11, 0X4F30);
    // 0x8006F2D0: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x8006F2D4: jr          $ra
    // 0x8006F2D8: addu        $v0, $t2, $t3
    ctx->r2 = ADD32(ctx->r10, ctx->r11);
    return;
    // 0x8006F2D8: addu        $v0, $t2, $t3
    ctx->r2 = ADD32(ctx->r10, ctx->r11);
;}
RECOMP_FUNC void func_8006F2DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006F2DC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8006F2E0: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x8006F2E4: andi        $t7, $a2, 0xFF
    ctx->r15 = ctx->r6 & 0XFF;
    // 0x8006F2E8: sll         $t9, $t7, 1
    ctx->r25 = S32(ctx->r15 << 1);
    // 0x8006F2EC: sll         $t8, $t6, 5
    ctx->r24 = S32(ctx->r14 << 5);
    // 0x8006F2F0: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x8006F2F4: addiu       $t1, $t1, 0x37B0
    ctx->r9 = ADD32(ctx->r9, 0X37B0);
    // 0x8006F2F8: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x8006F2FC: addu        $v0, $t0, $t1
    ctx->r2 = ADD32(ctx->r8, ctx->r9);
    // 0x8006F300: lbu         $t2, 0x1($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X1);
    // 0x8006F304: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x8006F308: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006F30C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8006F310: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8006F314: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8006F318: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x8006F31C: lui         $t3, 0x803D
    ctx->r11 = S32(0X803D << 16);
    // 0x8006F320: sb          $t2, 0x1E($sp)
    MEM_B(0X1E, ctx->r29) = ctx->r10;
    // 0x8006F324: addiu       $t3, $t3, -0x5780
    ctx->r11 = ADD32(ctx->r11, -0X5780);
    // 0x8006F328: addiu       $t5, $zero, 0x8
    ctx->r13 = ADD32(0, 0X8);
    // 0x8006F32C: sw          $t3, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r11;
    // 0x8006F330: sb          $t5, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r13;
    // 0x8006F334: sll         $a0, $v1, 16
    ctx->r4 = S32(ctx->r3 << 16);
    // 0x8006F338: sra         $t6, $a0, 16
    ctx->r14 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8006F33C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x8006F340: jal         0x8006E7F0
    // 0x8006F344: sb          $v1, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r3;
    func_8006E7F0(rdram, ctx);
        goto after_0;
    // 0x8006F344: sb          $v1, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r3;
    after_0:
    // 0x8006F348: lbu         $a2, 0x1E($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X1E);
    // 0x8006F34C: bltz        $v0, L_8006F368
    if (SIGNED(ctx->r2) < 0) {
        // 0x8006F350: sll         $t7, $v0, 4
        ctx->r15 = S32(ctx->r2 << 4);
            goto L_8006F368;
    }
    // 0x8006F350: sll         $t7, $v0, 4
    ctx->r15 = S32(ctx->r2 << 4);
    // 0x8006F354: addu        $t8, $t7, $a2
    ctx->r24 = ADD32(ctx->r15, ctx->r6);
    // 0x8006F358: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x8006F35C: addu        $a2, $a2, $t8
    ctx->r6 = ADD32(ctx->r6, ctx->r24);
    // 0x8006F360: lbu         $a2, 0x5330($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X5330);
    // 0x8006F364: nop

L_8006F368:
    // 0x8006F368: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8006F36C: lbu         $a1, 0x1F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X1F);
    // 0x8006F370: lbu         $a3, 0x2F($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X2F);
    // 0x8006F374: jal         0x800392F4
    // 0x8006F378: nop

    func_800392F4(rdram, ctx);
        goto after_1;
    // 0x8006F378: nop

    after_1:
    // 0x8006F37C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006F380: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8006F384: jr          $ra
    // 0x8006F388: nop

    return;
    // 0x8006F388: nop

;}
RECOMP_FUNC void func_8006F3FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006F3FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006F400: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x8006F404: andi        $a3, $a1, 0xFF
    ctx->r7 = ctx->r5 & 0XFF;
    // 0x8006F408: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8006F40C: sll         $t8, $t6, 4
    ctx->r24 = S32(ctx->r14 << 4);
    // 0x8006F410: addu        $t9, $t8, $a3
    ctx->r25 = ADD32(ctx->r24, ctx->r7);
    // 0x8006F414: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x8006F418: addu        $a1, $a1, $t9
    ctx->r5 = ADD32(ctx->r5, ctx->r25);
    // 0x8006F41C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006F420: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8006F424: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8006F428: andi        $t7, $a2, 0xFF
    ctx->r15 = ctx->r6 & 0XFF;
    // 0x8006F42C: lbu         $a1, -0x3292($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X3292);
    // 0x8006F430: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x8006F434: jal         0x8006F44C
    // 0x8006F438: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_8006F44C(rdram, ctx);
        goto after_0;
    // 0x8006F438: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_0:
    // 0x8006F43C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006F440: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8006F444: jr          $ra
    // 0x8006F448: nop

    return;
    // 0x8006F448: nop

;}
RECOMP_FUNC void func_8006F44C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006F44C: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x8006F450: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x8006F454: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x8006F458: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8006F45C: andi        $t7, $a1, 0xFF
    ctx->r15 = ctx->r5 & 0XFF;
    // 0x8006F460: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x8006F464: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x8006F468: sll         $t0, $t7, 2
    ctx->r8 = S32(ctx->r15 << 2);
    // 0x8006F46C: subu        $t0, $t0, $t7
    ctx->r8 = SUB32(ctx->r8, ctx->r15);
    // 0x8006F470: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x8006F474: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8006F478: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8006F47C: subu        $t0, $t0, $t7
    ctx->r8 = SUB32(ctx->r8, ctx->r15);
    // 0x8006F480: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x8006F484: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8006F488: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8006F48C: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x8006F490: addiu       $t2, $t2, -0x2CF0
    ctx->r10 = ADD32(ctx->r10, -0X2CF0);
    // 0x8006F494: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x8006F498: addu        $v1, $t1, $t2
    ctx->r3 = ADD32(ctx->r9, ctx->r10);
    // 0x8006F49C: lbu         $v0, 0x40($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X40);
    // 0x8006F4A0: sll         $t5, $a2, 4
    ctx->r13 = S32(ctx->r6 << 4);
    // 0x8006F4A4: andi        $t4, $v0, 0xF
    ctx->r12 = ctx->r2 & 0XF;
    // 0x8006F4A8: or          $t6, $t4, $t5
    ctx->r14 = ctx->r12 | ctx->r13;
    // 0x8006F4AC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8006F4B0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8006F4B4: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x8006F4B8: jr          $ra
    // 0x8006F4BC: sb          $t6, 0x40($v1)
    MEM_B(0X40, ctx->r3) = ctx->r14;
    return;
    // 0x8006F4BC: sb          $t6, 0x40($v1)
    MEM_B(0X40, ctx->r3) = ctx->r14;
;}
RECOMP_FUNC void func_8006F4C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006F4C0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8006F4C4: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8006F4C8: andi        $s3, $a0, 0xFF
    ctx->r19 = ctx->r4 & 0XFF;
    // 0x8006F4CC: sll         $t6, $s3, 2
    ctx->r14 = S32(ctx->r19 << 2);
    // 0x8006F4D0: addu        $t6, $t6, $s3
    ctx->r14 = ADD32(ctx->r14, ctx->r19);
    // 0x8006F4D4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8006F4D8: addu        $t6, $t6, $s3
    ctx->r14 = ADD32(ctx->r14, ctx->r19);
    // 0x8006F4DC: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x8006F4E0: addu        $t6, $t6, $s3
    ctx->r14 = ADD32(ctx->r14, ctx->r19);
    // 0x8006F4E4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8006F4E8: addu        $t6, $t6, $s3
    ctx->r14 = ADD32(ctx->r14, ctx->r19);
    // 0x8006F4EC: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8006F4F0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8006F4F4: addiu       $t7, $t7, -0x2CF0
    ctx->r15 = ADD32(ctx->r15, -0X2CF0);
    // 0x8006F4F8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8006F4FC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8006F500: addu        $s1, $t6, $t7
    ctx->r17 = ADD32(ctx->r14, ctx->r15);
    // 0x8006F504: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8006F508: lbu         $a0, 0x0($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X0);
    // 0x8006F50C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8006F510: jal         0x8006FF70
    // 0x8006F514: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    func_8006FF70(rdram, ctx);
        goto after_0;
    // 0x8006F514: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x8006F518: bne         $v0, $zero, L_8006F530
    if (ctx->r2 != 0) {
        // 0x8006F51C: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_8006F530;
    }
    // 0x8006F51C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8006F520: jal         0x802B542C
    // 0x8006F524: andi        $a0, $s3, 0xFF
    ctx->r4 = ctx->r19 & 0XFF;
    LOOKUP_FUNC(0x802B542C)(rdram, ctx);
        goto after_1;
    // 0x8006F524: andi        $a0, $s3, 0xFF
    ctx->r4 = ctx->r19 & 0XFF;
    after_1:
    // 0x8006F528: b           L_8006F598
    // 0x8006F52C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8006F598;
    // 0x8006F52C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8006F530:
    // 0x8006F530: lui         $s2, 0x800B
    ctx->r18 = S32(0X800B << 16);
    // 0x8006F534: addiu       $s2, $s2, -0x436C
    ctx->r18 = ADD32(ctx->r18, -0X436C);
L_8006F538:
    // 0x8006F538: sll         $t8, $s0, 1
    ctx->r24 = S32(ctx->r16 << 1);
    // 0x8006F53C: lbu         $a0, 0x0($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X0);
    // 0x8006F540: addu        $t9, $s1, $t8
    ctx->r25 = ADD32(ctx->r17, ctx->r24);
    // 0x8006F544: lbu         $v0, 0x2E8($t9)
    ctx->r2 = MEM_BU(ctx->r25, 0X2E8);
    // 0x8006F548: sll         $t0, $a0, 4
    ctx->r8 = S32(ctx->r4 << 4);
    // 0x8006F54C: beq         $a0, $v0, L_8006F580
    if (ctx->r4 == ctx->r2) {
        // 0x8006F550: addu        $t1, $s2, $t0
        ctx->r9 = ADD32(ctx->r18, ctx->r8);
            goto L_8006F580;
    }
    // 0x8006F550: addu        $t1, $s2, $t0
    ctx->r9 = ADD32(ctx->r18, ctx->r8);
    // 0x8006F554: addu        $t2, $t1, $s0
    ctx->r10 = ADD32(ctx->r9, ctx->r16);
    // 0x8006F558: lbu         $a1, 0x0($t2)
    ctx->r5 = MEM_BU(ctx->r10, 0X0);
    // 0x8006F55C: jal         0x8006F274
    // 0x8006F560: nop

    func_8006F274(rdram, ctx);
        goto after_2;
    // 0x8006F560: nop

    after_2:
    // 0x8006F564: lbu         $v1, 0x18($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X18);
    // 0x8006F568: andi        $a0, $s3, 0xFF
    ctx->r4 = ctx->r19 & 0XFF;
    // 0x8006F56C: andi        $t4, $v1, 0xF0
    ctx->r12 = ctx->r3 & 0XF0;
    // 0x8006F570: sra         $t5, $t4, 4
    ctx->r13 = S32(SIGNED(ctx->r12) >> 4);
    // 0x8006F574: andi        $a2, $t5, 0xF
    ctx->r6 = ctx->r13 & 0XF;
    // 0x8006F578: jal         0x8006F3FC
    // 0x8006F57C: andi        $a1, $s0, 0xFF
    ctx->r5 = ctx->r16 & 0XFF;
    func_8006F3FC(rdram, ctx);
        goto after_3;
    // 0x8006F57C: andi        $a1, $s0, 0xFF
    ctx->r5 = ctx->r16 & 0XFF;
    after_3:
L_8006F580:
    // 0x8006F580: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8006F584: andi        $t7, $s0, 0xFF
    ctx->r15 = ctx->r16 & 0XFF;
    // 0x8006F588: slti        $at, $t7, 0x10
    ctx->r1 = SIGNED(ctx->r15) < 0X10 ? 1 : 0;
    // 0x8006F58C: bne         $at, $zero, L_8006F538
    if (ctx->r1 != 0) {
        // 0x8006F590: or          $s0, $t7, $zero
        ctx->r16 = ctx->r15 | 0;
            goto L_8006F538;
    }
    // 0x8006F590: or          $s0, $t7, $zero
    ctx->r16 = ctx->r15 | 0;
    // 0x8006F594: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8006F598:
    // 0x8006F598: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8006F59C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8006F5A0: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8006F5A4: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8006F5A8: jr          $ra
    // 0x8006F5AC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8006F5AC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8006F5B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006F5B8: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8006F5BC: lbu         $t6, -0x3272($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X3272);
    // 0x8006F5C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006F5C4: bne         $t6, $zero, L_8006F5DC
    if (ctx->r14 != 0) {
        // 0x8006F5C8: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8006F5DC;
    }
    // 0x8006F5C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006F5CC: jal         0x8006F5F4
    // 0x8006F5D0: nop

    func_8006F5F4(rdram, ctx);
        goto after_0;
    // 0x8006F5D0: nop

    after_0:
    // 0x8006F5D4: b           L_8006F5E8
    // 0x8006F5D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8006F5E8;
    // 0x8006F5D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8006F5DC:
    // 0x8006F5DC: jal         0x8006F61C
    // 0x8006F5E0: nop

    func_8006F61C(rdram, ctx);
        goto after_1;
    // 0x8006F5E0: nop

    after_1:
    // 0x8006F5E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8006F5E8:
    // 0x8006F5E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8006F5EC: jr          $ra
    // 0x8006F5F0: nop

    return;
    // 0x8006F5F0: nop

;}
RECOMP_FUNC void func_8006F5F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006F5F4: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8006F5F8: lb          $t6, -0x326C($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X326C);
    // 0x8006F5FC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8006F600: bne         $t6, $zero, L_8006F610
    if (ctx->r14 != 0) {
        // 0x8006F604: nop
    
            goto L_8006F610;
    }
    // 0x8006F604: nop

    // 0x8006F608: jr          $ra
    // 0x8006F60C: sb          $zero, 0x2E($a0)
    MEM_B(0X2E, ctx->r4) = 0;
    return;
    // 0x8006F60C: sb          $zero, 0x2E($a0)
    MEM_B(0X2E, ctx->r4) = 0;
L_8006F610:
    // 0x8006F610: sb          $t7, 0x2E($a0)
    MEM_B(0X2E, ctx->r4) = ctx->r15;
    // 0x8006F614: jr          $ra
    // 0x8006F618: nop

    return;
    // 0x8006F618: nop

;}
RECOMP_FUNC void func_8006F61C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006F61C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8006F620: lb          $t6, -0x326C($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X326C);
    // 0x8006F624: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x8006F628: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8006F62C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8006F630: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8006F634: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8006F638: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8006F63C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8006F640: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8006F644: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8006F648: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8006F64C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8006F650: lhu         $t8, -0x2CE8($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X2CE8);
    // 0x8006F654: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8006F658: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x8006F65C: beq         $t9, $zero, L_8006F66C
    if (ctx->r25 == 0) {
        // 0x8006F660: nop
    
            goto L_8006F66C;
    }
    // 0x8006F660: nop

    // 0x8006F664: jr          $ra
    // 0x8006F668: sb          $t0, 0x2E($a0)
    MEM_B(0X2E, ctx->r4) = ctx->r8;
    return;
    // 0x8006F668: sb          $t0, 0x2E($a0)
    MEM_B(0X2E, ctx->r4) = ctx->r8;
L_8006F66C:
    // 0x8006F66C: sb          $zero, 0x2E($a0)
    MEM_B(0X2E, ctx->r4) = 0;
    // 0x8006F670: jr          $ra
    // 0x8006F674: nop

    return;
    // 0x8006F674: nop

;}
RECOMP_FUNC void func_8006F678(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006F678: lhu         $t6, 0x38($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X38);
    // 0x8006F67C: nop

    // 0x8006F680: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8006F684: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x8006F688: slti        $at, $t8, 0xB
    ctx->r1 = SIGNED(ctx->r24) < 0XB ? 1 : 0;
    // 0x8006F68C: bne         $at, $zero, L_8006F6B4
    if (ctx->r1 != 0) {
        // 0x8006F690: sh          $t7, 0x38($a0)
        MEM_H(0X38, ctx->r4) = ctx->r15;
            goto L_8006F6B4;
    }
    // 0x8006F690: sh          $t7, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r15;
    // 0x8006F694: lhu         $t9, 0x3A($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X3A);
    // 0x8006F698: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8006F69C: bne         $t9, $at, L_8006F6AC
    if (ctx->r25 != ctx->r1) {
        // 0x8006F6A0: sh          $zero, 0x38($a0)
        MEM_H(0X38, ctx->r4) = 0;
            goto L_8006F6AC;
    }
    // 0x8006F6A0: sh          $zero, 0x38($a0)
    MEM_H(0X38, ctx->r4) = 0;
    // 0x8006F6A4: jr          $ra
    // 0x8006F6A8: sh          $zero, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = 0;
    return;
    // 0x8006F6A8: sh          $zero, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = 0;
L_8006F6AC:
    // 0x8006F6AC: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8006F6B0: sh          $t0, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = ctx->r8;
L_8006F6B4:
    // 0x8006F6B4: jr          $ra
    // 0x8006F6B8: nop

    return;
    // 0x8006F6B8: nop

;}
RECOMP_FUNC void func_8006F6BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006F6BC: lhu         $t6, 0x38($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X38);
    // 0x8006F6C0: nop

    // 0x8006F6C4: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8006F6C8: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x8006F6CC: slti        $at, $t8, 0x6
    ctx->r1 = SIGNED(ctx->r24) < 0X6 ? 1 : 0;
    // 0x8006F6D0: bne         $at, $zero, L_8006F6F8
    if (ctx->r1 != 0) {
        // 0x8006F6D4: sh          $t7, 0x38($a0)
        MEM_H(0X38, ctx->r4) = ctx->r15;
            goto L_8006F6F8;
    }
    // 0x8006F6D4: sh          $t7, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r15;
    // 0x8006F6D8: lhu         $t9, 0x3A($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X3A);
    // 0x8006F6DC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8006F6E0: bne         $t9, $at, L_8006F6F0
    if (ctx->r25 != ctx->r1) {
        // 0x8006F6E4: sh          $zero, 0x38($a0)
        MEM_H(0X38, ctx->r4) = 0;
            goto L_8006F6F0;
    }
    // 0x8006F6E4: sh          $zero, 0x38($a0)
    MEM_H(0X38, ctx->r4) = 0;
    // 0x8006F6E8: jr          $ra
    // 0x8006F6EC: sh          $zero, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = 0;
    return;
    // 0x8006F6EC: sh          $zero, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = 0;
L_8006F6F0:
    // 0x8006F6F0: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8006F6F4: sh          $t0, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = ctx->r8;
L_8006F6F8:
    // 0x8006F6F8: jr          $ra
    // 0x8006F6FC: nop

    return;
    // 0x8006F6FC: nop

;}
RECOMP_FUNC void func_8006F700(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006F700: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006F704: andi        $a2, $a1, 0xFF
    ctx->r6 = ctx->r5 & 0XFF;
    // 0x8006F708: sll         $t7, $a2, 2
    ctx->r15 = S32(ctx->r6 << 2);
    // 0x8006F70C: subu        $t7, $t7, $a2
    ctx->r15 = SUB32(ctx->r15, ctx->r6);
    // 0x8006F710: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x8006F714: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006F718: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8006F71C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8006F720: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x8006F724: addiu       $t8, $t8, -0x11C8
    ctx->r24 = ADD32(ctx->r24, -0X11C8);
    // 0x8006F728: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8006F72C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x8006F730: jal         0x8006F748
    // 0x8006F734: addu        $a1, $t7, $t8
    ctx->r5 = ADD32(ctx->r15, ctx->r24);
    func_8006F748(rdram, ctx);
        goto after_0;
    // 0x8006F734: addu        $a1, $t7, $t8
    ctx->r5 = ADD32(ctx->r15, ctx->r24);
    after_0:
    // 0x8006F738: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006F73C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8006F740: jr          $ra
    // 0x8006F744: nop

    return;
    // 0x8006F744: nop

;}
RECOMP_FUNC void func_8006F748(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006F748: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x8006F74C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8006F750: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8006F754: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x8006F758: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x8006F75C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8006F760: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8006F764: ori         $at, $at, 0x89A8
    ctx->r1 = ctx->r1 | 0X89A8;
    // 0x8006F768: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8006F76C: sll         $t9, $t9, 1
    ctx->r25 = S32(ctx->r25 << 1);
    // 0x8006F770: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x8006F774: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x8006F778: addiu       $t1, $t1, -0x3770
    ctx->r9 = ADD32(ctx->r9, -0X3770);
    // 0x8006F77C: addiu       $t8, $t8, 0x358
    ctx->r24 = ADD32(ctx->r24, 0X358);
    // 0x8006F780: addu        $t0, $t9, $at
    ctx->r8 = ADD32(ctx->r25, ctx->r1);
    // 0x8006F784: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8006F788: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x8006F78C: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x8006F790: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8006F794: sw          $t2, 0x38($v0)
    MEM_W(0X38, ctx->r2) = ctx->r10;
    // 0x8006F798: lhu         $t3, 0x0($a1)
    ctx->r11 = MEM_HU(ctx->r5, 0X0);
    // 0x8006F79C: nop

    // 0x8006F7A0: sh          $t3, 0xA($v0)
    MEM_H(0XA, ctx->r2) = ctx->r11;
    // 0x8006F7A4: lhu         $t4, 0x2($a1)
    ctx->r12 = MEM_HU(ctx->r5, 0X2);
    // 0x8006F7A8: nop

    // 0x8006F7AC: sh          $t4, 0xC($v0)
    MEM_H(0XC, ctx->r2) = ctx->r12;
    // 0x8006F7B0: lhu         $t5, 0x4($a1)
    ctx->r13 = MEM_HU(ctx->r5, 0X4);
    // 0x8006F7B4: nop

    // 0x8006F7B8: sh          $t5, 0xE($v0)
    MEM_H(0XE, ctx->r2) = ctx->r13;
    // 0x8006F7BC: lhu         $t6, 0x6($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X6);
    // 0x8006F7C0: nop

    // 0x8006F7C4: sh          $t6, 0x10($v0)
    MEM_H(0X10, ctx->r2) = ctx->r14;
    // 0x8006F7C8: lhu         $t7, 0x8($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X8);
    // 0x8006F7CC: nop

    // 0x8006F7D0: sh          $t7, 0x12($v0)
    MEM_H(0X12, ctx->r2) = ctx->r15;
    // 0x8006F7D4: lhu         $t8, 0xA($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0XA);
    // 0x8006F7D8: jr          $ra
    // 0x8006F7DC: sh          $t8, 0x14($v0)
    MEM_H(0X14, ctx->r2) = ctx->r24;
    return;
    // 0x8006F7DC: sh          $t8, 0x14($v0)
    MEM_H(0X14, ctx->r2) = ctx->r24;
;}
RECOMP_FUNC void func_8006F820(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006F820: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8006F824: lbu         $t6, -0x32A4($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X32A4);
    // 0x8006F828: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006F82C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8006F830: bne         $t6, $at, L_8006F84C
    if (ctx->r14 != ctx->r1) {
        // 0x8006F834: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8006F84C;
    }
    // 0x8006F834: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006F838: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8006F83C: jal         0x8006F868
    // 0x8006F840: addiu       $a0, $a0, -0x3088
    ctx->r4 = ADD32(ctx->r4, -0X3088);
    func_8006F868(rdram, ctx);
        goto after_0;
    // 0x8006F840: addiu       $a0, $a0, -0x3088
    ctx->r4 = ADD32(ctx->r4, -0X3088);
    after_0:
    // 0x8006F844: b           L_8006F85C
    // 0x8006F848: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8006F85C;
    // 0x8006F848: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8006F84C:
    // 0x8006F84C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8006F850: jal         0x8006F868
    // 0x8006F854: addiu       $a0, $a0, -0x30A0
    ctx->r4 = ADD32(ctx->r4, -0X30A0);
    func_8006F868(rdram, ctx);
        goto after_1;
    // 0x8006F854: addiu       $a0, $a0, -0x30A0
    ctx->r4 = ADD32(ctx->r4, -0X30A0);
    after_1:
    // 0x8006F858: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8006F85C:
    // 0x8006F85C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8006F860: jr          $ra
    // 0x8006F864: nop

    return;
    // 0x8006F864: nop

;}
RECOMP_FUNC void func_8006F868(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006F868: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006F86C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006F870: lb          $t6, 0x4($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X4);
    // 0x8006F874: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8006F878: bne         $v1, $t6, L_8006F8C8
    if (ctx->r3 != ctx->r14) {
        // 0x8006F87C: nop
    
            goto L_8006F8C8;
    }
    // 0x8006F87C: nop

    // 0x8006F880: lb          $v0, 0x1($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X1);
    // 0x8006F884: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8006F888: bne         $v1, $v0, L_8006F8A0
    if (ctx->r3 != ctx->r2) {
        // 0x8006F88C: nop
    
            goto L_8006F8A0;
    }
    // 0x8006F88C: nop

    // 0x8006F890: jal         0x8006F958
    // 0x8006F894: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_8006F958(rdram, ctx);
        goto after_0;
    // 0x8006F894: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_0:
    // 0x8006F898: b           L_8006F90C
    // 0x8006F89C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8006F90C;
    // 0x8006F89C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8006F8A0:
    // 0x8006F8A0: bne         $v0, $at, L_8006F8B8
    if (ctx->r2 != ctx->r1) {
        // 0x8006F8A4: nop
    
            goto L_8006F8B8;
    }
    // 0x8006F8A4: nop

    // 0x8006F8A8: jal         0x8006F958
    // 0x8006F8AC: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_8006F958(rdram, ctx);
        goto after_1;
    // 0x8006F8AC: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_1:
    // 0x8006F8B0: b           L_8006F90C
    // 0x8006F8B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8006F90C;
    // 0x8006F8B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8006F8B8:
    // 0x8006F8B8: jal         0x8006F958
    // 0x8006F8BC: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_8006F958(rdram, ctx);
        goto after_2;
    // 0x8006F8BC: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_2:
    // 0x8006F8C0: b           L_8006F90C
    // 0x8006F8C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8006F90C;
    // 0x8006F8C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8006F8C8:
    // 0x8006F8C8: lb          $v0, 0x1($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X1);
    // 0x8006F8CC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8006F8D0: bne         $v1, $v0, L_8006F8E8
    if (ctx->r3 != ctx->r2) {
        // 0x8006F8D4: nop
    
            goto L_8006F8E8;
    }
    // 0x8006F8D4: nop

    // 0x8006F8D8: jal         0x8006F958
    // 0x8006F8DC: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_8006F958(rdram, ctx);
        goto after_3;
    // 0x8006F8DC: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_3:
    // 0x8006F8E0: b           L_8006F90C
    // 0x8006F8E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8006F90C;
    // 0x8006F8E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8006F8E8:
    // 0x8006F8E8: bne         $v0, $at, L_8006F900
    if (ctx->r2 != ctx->r1) {
        // 0x8006F8EC: nop
    
            goto L_8006F900;
    }
    // 0x8006F8EC: nop

    // 0x8006F8F0: jal         0x8006F958
    // 0x8006F8F4: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    func_8006F958(rdram, ctx);
        goto after_4;
    // 0x8006F8F4: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_4:
    // 0x8006F8F8: b           L_8006F90C
    // 0x8006F8FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8006F90C;
    // 0x8006F8FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8006F900:
    // 0x8006F900: jal         0x8006F958
    // 0x8006F904: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_8006F958(rdram, ctx);
        goto after_5;
    // 0x8006F904: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_5:
    // 0x8006F908: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8006F90C:
    // 0x8006F90C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8006F910: jr          $ra
    // 0x8006F914: nop

    return;
    // 0x8006F914: nop

;}
RECOMP_FUNC void func_8006F918(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006F918: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006F91C: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x8006F920: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8006F924: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006F928: bne         $t6, $at, L_8006F940
    if (ctx->r14 != ctx->r1) {
        // 0x8006F92C: sw          $a0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r4;
            goto L_8006F940;
    }
    // 0x8006F92C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8006F930: jal         0x8006F958
    // 0x8006F934: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8006F958(rdram, ctx);
        goto after_0;
    // 0x8006F934: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x8006F938: b           L_8006F94C
    // 0x8006F93C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8006F94C;
    // 0x8006F93C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8006F940:
    // 0x8006F940: jal         0x8006F958
    // 0x8006F944: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8006F958(rdram, ctx);
        goto after_1;
    // 0x8006F944: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x8006F948: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8006F94C:
    // 0x8006F94C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8006F950: jr          $ra
    // 0x8006F954: nop

    return;
    // 0x8006F954: nop

;}
RECOMP_FUNC void func_8006F958(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006F958: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8006F95C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8006F960: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8006F964: andi        $s3, $a0, 0xFF
    ctx->r19 = ctx->r4 & 0XFF;
    // 0x8006F968: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x8006F96C: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x8006F970: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8006F974: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8006F978: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8006F97C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8006F980: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8006F984: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8006F988: jal         0x8006FF28
    // 0x8006F98C: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    func_8006FF28(rdram, ctx);
        goto after_0;
    // 0x8006F98C: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    after_0:
    // 0x8006F990: jal         0x8006FF4C
    // 0x8006F994: nop

    func_8006FF4C(rdram, ctx);
        goto after_1;
    // 0x8006F994: nop

    after_1:
    // 0x8006F998: or          $s2, $s3, $zero
    ctx->r18 = ctx->r19 | 0;
    // 0x8006F99C: lui         $s0, 0x8010
    ctx->r16 = S32(0X8010 << 16);
    // 0x8006F9A0: lui         $s3, 0x800B
    ctx->r19 = S32(0X800B << 16);
    // 0x8006F9A4: lui         $s7, 0x800B
    ctx->r23 = S32(0X800B << 16);
    // 0x8006F9A8: lui         $s5, 0x800B
    ctx->r21 = S32(0X800B << 16);
    // 0x8006F9AC: addiu       $s0, $s0, 0x69D4
    ctx->r16 = ADD32(ctx->r16, 0X69D4);
    // 0x8006F9B0: addiu       $s5, $s5, -0x10C0
    ctx->r21 = ADD32(ctx->r21, -0X10C0);
    // 0x8006F9B4: addiu       $s7, $s7, -0x1114
    ctx->r23 = ADD32(ctx->r23, -0X1114);
    // 0x8006F9B8: addiu       $s3, $s3, -0x1164
    ctx->r19 = ADD32(ctx->r19, -0X1164);
    // 0x8006F9BC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8006F9C0: addiu       $fp, $zero, 0x3
    ctx->r30 = ADD32(0, 0X3);
    // 0x8006F9C4: addiu       $s6, $zero, 0x2
    ctx->r22 = ADD32(0, 0X2);
    // 0x8006F9C8: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
L_8006F9CC:
    // 0x8006F9CC: sll         $t6, $s1, 3
    ctx->r14 = S32(ctx->r17 << 3);
    // 0x8006F9D0: addu        $v0, $s3, $t6
    ctx->r2 = ADD32(ctx->r19, ctx->r14);
    // 0x8006F9D4: lhu         $a1, 0x4($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X4);
    // 0x8006F9D8: lw          $a3, 0x0($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X0);
    // 0x8006F9DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006F9E0: jal         0x8004CD24
    // 0x8006F9E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8004CD24(rdram, ctx);
        goto after_2;
    // 0x8006F9E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x8006F9E8: bne         $s4, $s2, L_8006FA08
    if (ctx->r20 != ctx->r18) {
        // 0x8006F9EC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8006FA08;
    }
    // 0x8006F9EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006F9F0: addu        $t7, $s5, $s1
    ctx->r15 = ADD32(ctx->r21, ctx->r17);
    // 0x8006F9F4: lbu         $a2, 0x0($t7)
    ctx->r6 = MEM_BU(ctx->r15, 0X0);
    // 0x8006F9F8: jal         0x8002135C
    // 0x8006F9FC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_8002135C(rdram, ctx);
        goto after_3;
    // 0x8006F9FC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_3:
    // 0x8006FA00: b           L_8006FB08
    // 0x8006FA04: lbu         $t9, 0x9($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X9);
        goto L_8006FB08;
    // 0x8006FA04: lbu         $t9, 0x9($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X9);
L_8006FA08:
    // 0x8006FA08: bne         $s6, $s2, L_8006FA28
    if (ctx->r22 != ctx->r18) {
        // 0x8006FA0C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8006FA28;
    }
    // 0x8006FA0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006FA10: addu        $t8, $s7, $s1
    ctx->r24 = ADD32(ctx->r23, ctx->r17);
    // 0x8006FA14: lbu         $a2, 0x0($t8)
    ctx->r6 = MEM_BU(ctx->r24, 0X0);
    // 0x8006FA18: jal         0x8002135C
    // 0x8006FA1C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_8002135C(rdram, ctx);
        goto after_4;
    // 0x8006FA1C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_4:
    // 0x8006FA20: b           L_8006FB08
    // 0x8006FA24: lbu         $t9, 0x9($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X9);
        goto L_8006FB08;
    // 0x8006FA24: lbu         $t9, 0x9($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X9);
L_8006FA28:
    // 0x8006FA28: bne         $fp, $s2, L_8006FA50
    if (ctx->r30 != ctx->r18) {
        // 0x8006FA2C: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_8006FA50;
    }
    // 0x8006FA2C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8006FA30: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x8006FA34: addu        $a2, $a2, $s1
    ctx->r6 = ADD32(ctx->r6, ctx->r17);
    // 0x8006FA38: lbu         $a2, -0x1108($a2)
    ctx->r6 = MEM_BU(ctx->r6, -0X1108);
    // 0x8006FA3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006FA40: jal         0x8002135C
    // 0x8006FA44: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_8002135C(rdram, ctx);
        goto after_5;
    // 0x8006FA44: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_5:
    // 0x8006FA48: b           L_8006FB08
    // 0x8006FA4C: lbu         $t9, 0x9($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X9);
        goto L_8006FB08;
    // 0x8006FA4C: lbu         $t9, 0x9($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X9);
L_8006FA50:
    // 0x8006FA50: bne         $s2, $at, L_8006FA74
    if (ctx->r18 != ctx->r1) {
        // 0x8006FA54: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8006FA74;
    }
    // 0x8006FA54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006FA58: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x8006FA5C: addu        $a2, $a2, $s1
    ctx->r6 = ADD32(ctx->r6, ctx->r17);
    // 0x8006FA60: lbu         $a2, -0x10FC($a2)
    ctx->r6 = MEM_BU(ctx->r6, -0X10FC);
    // 0x8006FA64: jal         0x8002135C
    // 0x8006FA68: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_8002135C(rdram, ctx);
        goto after_6;
    // 0x8006FA68: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_6:
    // 0x8006FA6C: b           L_8006FB08
    // 0x8006FA70: lbu         $t9, 0x9($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X9);
        goto L_8006FB08;
    // 0x8006FA70: lbu         $t9, 0x9($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X9);
L_8006FA74:
    // 0x8006FA74: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8006FA78: bne         $s2, $at, L_8006FA9C
    if (ctx->r18 != ctx->r1) {
        // 0x8006FA7C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8006FA9C;
    }
    // 0x8006FA7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006FA80: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x8006FA84: addu        $a2, $a2, $s1
    ctx->r6 = ADD32(ctx->r6, ctx->r17);
    // 0x8006FA88: lbu         $a2, -0x10F0($a2)
    ctx->r6 = MEM_BU(ctx->r6, -0X10F0);
    // 0x8006FA8C: jal         0x8002135C
    // 0x8006FA90: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_8002135C(rdram, ctx);
        goto after_7;
    // 0x8006FA90: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_7:
    // 0x8006FA94: b           L_8006FB08
    // 0x8006FA98: lbu         $t9, 0x9($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X9);
        goto L_8006FB08;
    // 0x8006FA98: lbu         $t9, 0x9($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X9);
L_8006FA9C:
    // 0x8006FA9C: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x8006FAA0: bne         $s2, $at, L_8006FAC4
    if (ctx->r18 != ctx->r1) {
        // 0x8006FAA4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8006FAC4;
    }
    // 0x8006FAA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006FAA8: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x8006FAAC: addu        $a2, $a2, $s1
    ctx->r6 = ADD32(ctx->r6, ctx->r17);
    // 0x8006FAB0: lbu         $a2, -0x10E4($a2)
    ctx->r6 = MEM_BU(ctx->r6, -0X10E4);
    // 0x8006FAB4: jal         0x8002135C
    // 0x8006FAB8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_8002135C(rdram, ctx);
        goto after_8;
    // 0x8006FAB8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_8:
    // 0x8006FABC: b           L_8006FB08
    // 0x8006FAC0: lbu         $t9, 0x9($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X9);
        goto L_8006FB08;
    // 0x8006FAC0: lbu         $t9, 0x9($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X9);
L_8006FAC4:
    // 0x8006FAC4: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x8006FAC8: bne         $s2, $at, L_8006FAF0
    if (ctx->r18 != ctx->r1) {
        // 0x8006FACC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8006FAF0;
    }
    // 0x8006FACC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006FAD0: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x8006FAD4: addu        $a2, $a2, $s1
    ctx->r6 = ADD32(ctx->r6, ctx->r17);
    // 0x8006FAD8: lbu         $a2, -0x10D8($a2)
    ctx->r6 = MEM_BU(ctx->r6, -0X10D8);
    // 0x8006FADC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006FAE0: jal         0x8002135C
    // 0x8006FAE4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_8002135C(rdram, ctx);
        goto after_9;
    // 0x8006FAE4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_9:
    // 0x8006FAE8: b           L_8006FB08
    // 0x8006FAEC: lbu         $t9, 0x9($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X9);
        goto L_8006FB08;
    // 0x8006FAEC: lbu         $t9, 0x9($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X9);
L_8006FAF0:
    // 0x8006FAF0: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x8006FAF4: addu        $a2, $a2, $s1
    ctx->r6 = ADD32(ctx->r6, ctx->r17);
    // 0x8006FAF8: lbu         $a2, -0x10CC($a2)
    ctx->r6 = MEM_BU(ctx->r6, -0X10CC);
    // 0x8006FAFC: jal         0x8002135C
    // 0x8006FB00: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_8002135C(rdram, ctx);
        goto after_10;
    // 0x8006FB00: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_10:
    // 0x8006FB04: lbu         $t9, 0x9($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X9);
L_8006FB08:
    // 0x8006FB08: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8006FB0C: andi        $t1, $s1, 0xFF
    ctx->r9 = ctx->r17 & 0XFF;
    // 0x8006FB10: slti        $at, $t1, 0xA
    ctx->r1 = SIGNED(ctx->r9) < 0XA ? 1 : 0;
    // 0x8006FB14: andi        $t0, $t9, 0xFFEF
    ctx->r8 = ctx->r25 & 0XFFEF;
    // 0x8006FB18: or          $s1, $t1, $zero
    ctx->r17 = ctx->r9 | 0;
    // 0x8006FB1C: addiu       $s0, $s0, 0x3C
    ctx->r16 = ADD32(ctx->r16, 0X3C);
    // 0x8006FB20: bne         $at, $zero, L_8006F9CC
    if (ctx->r1 != 0) {
        // 0x8006FB24: sb          $t0, -0x33($s0)
        MEM_B(-0X33, ctx->r16) = ctx->r8;
            goto L_8006F9CC;
    }
    // 0x8006FB24: sb          $t0, -0x33($s0)
    MEM_B(-0X33, ctx->r16) = ctx->r8;
    // 0x8006FB28: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8006FB2C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8006FB30: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8006FB34: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8006FB38: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8006FB3C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8006FB40: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8006FB44: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8006FB48: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8006FB4C: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x8006FB50: jr          $ra
    // 0x8006FB54: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x8006FB54: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8006FB58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006FB58: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8006FB5C: lb          $t6, -0x32A1($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X32A1);
    // 0x8006FB60: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8006FB64: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8006FB68: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8006FB6C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8006FB70: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8006FB74: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8006FB78: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8006FB7C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8006FB80: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8006FB84: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8006FB88: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8006FB8C: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8006FB90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006FB94: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x8006FB98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006FB9C: lb          $a0, -0x2F7F($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X2F7F);
    // 0x8006FBA0: jal         0x80049A4C
    // 0x8006FBA4: nop

    func_80049A4C(rdram, ctx);
        goto after_0;
    // 0x8006FBA4: nop

    after_0:
    // 0x8006FBA8: bne         $v0, $zero, L_8006FBD4
    if (ctx->r2 != 0) {
        // 0x8006FBAC: lui         $t8, 0x8011
        ctx->r24 = S32(0X8011 << 16);
            goto L_8006FBD4;
    }
    // 0x8006FBAC: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8006FBB0: lb          $t8, -0x2F80($t8)
    ctx->r24 = MEM_B(ctx->r24, -0X2F80);
    // 0x8006FBB4: nop

    // 0x8006FBB8: slti        $at, $t8, 0x8
    ctx->r1 = SIGNED(ctx->r24) < 0X8 ? 1 : 0;
    // 0x8006FBBC: bne         $at, $zero, L_8006FBD4
    if (ctx->r1 != 0) {
        // 0x8006FBC0: nop
    
            goto L_8006FBD4;
    }
    // 0x8006FBC0: nop

    // 0x8006FBC4: jal         0x8006FCD4
    // 0x8006FBC8: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_8006FCD4(rdram, ctx);
        goto after_1;
    // 0x8006FBC8: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_1:
    // 0x8006FBCC: b           L_8006FCC8
    // 0x8006FBD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8006FCC8;
    // 0x8006FBD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8006FBD4:
    // 0x8006FBD4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8006FBD8: lbu         $v0, -0x32A4($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X32A4);
    // 0x8006FBDC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8006FBE0: bne         $v0, $at, L_8006FBFC
    if (ctx->r2 != ctx->r1) {
        // 0x8006FBE4: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8006FBFC;
    }
    // 0x8006FBE4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8006FBE8: jal         0x8006FCD4
    // 0x8006FBEC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8006FCD4(rdram, ctx);
        goto after_2;
    // 0x8006FBEC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x8006FBF0: b           L_8006FCC8
    // 0x8006FBF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8006FCC8;
    // 0x8006FBF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006FBF8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
L_8006FBFC:
    // 0x8006FBFC: bne         $v0, $at, L_8006FC18
    if (ctx->r2 != ctx->r1) {
        // 0x8006FC00: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8006FC18;
    }
    // 0x8006FC00: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8006FC04: jal         0x8006FCD4
    // 0x8006FC08: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_8006FCD4(rdram, ctx);
        goto after_3;
    // 0x8006FC08: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_3:
    // 0x8006FC0C: b           L_8006FCC8
    // 0x8006FC10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8006FCC8;
    // 0x8006FC10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006FC14: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
L_8006FC18:
    // 0x8006FC18: bne         $v0, $at, L_8006FC34
    if (ctx->r2 != ctx->r1) {
        // 0x8006FC1C: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_8006FC34;
    }
    // 0x8006FC1C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8006FC20: jal         0x8006FCD4
    // 0x8006FC24: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_8006FCD4(rdram, ctx);
        goto after_4;
    // 0x8006FC24: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_4:
    // 0x8006FC28: b           L_8006FCC8
    // 0x8006FC2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8006FCC8;
    // 0x8006FC2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006FC30: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
L_8006FC34:
    // 0x8006FC34: bne         $v0, $at, L_8006FC50
    if (ctx->r2 != ctx->r1) {
        // 0x8006FC38: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_8006FC50;
    }
    // 0x8006FC38: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8006FC3C: jal         0x8006FCD4
    // 0x8006FC40: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    func_8006FCD4(rdram, ctx);
        goto after_5;
    // 0x8006FC40: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_5:
    // 0x8006FC44: b           L_8006FCC8
    // 0x8006FC48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8006FCC8;
    // 0x8006FC48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006FC4C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
L_8006FC50:
    // 0x8006FC50: bne         $v0, $at, L_8006FC6C
    if (ctx->r2 != ctx->r1) {
        // 0x8006FC54: addiu       $at, $zero, 0x6
        ctx->r1 = ADD32(0, 0X6);
            goto L_8006FC6C;
    }
    // 0x8006FC54: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x8006FC58: jal         0x8006FCD4
    // 0x8006FC5C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8006FCD4(rdram, ctx);
        goto after_6;
    // 0x8006FC5C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_6:
    // 0x8006FC60: b           L_8006FCC8
    // 0x8006FC64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8006FCC8;
    // 0x8006FC64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006FC68: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
L_8006FC6C:
    // 0x8006FC6C: bne         $v0, $at, L_8006FC88
    if (ctx->r2 != ctx->r1) {
        // 0x8006FC70: addiu       $at, $zero, 0x7
        ctx->r1 = ADD32(0, 0X7);
            goto L_8006FC88;
    }
    // 0x8006FC70: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x8006FC74: jal         0x8006FCD4
    // 0x8006FC78: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_8006FCD4(rdram, ctx);
        goto after_7;
    // 0x8006FC78: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_7:
    // 0x8006FC7C: b           L_8006FCC8
    // 0x8006FC80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8006FCC8;
    // 0x8006FC80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006FC84: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
L_8006FC88:
    // 0x8006FC88: bne         $v0, $at, L_8006FCA4
    if (ctx->r2 != ctx->r1) {
        // 0x8006FC8C: addiu       $at, $zero, 0x8
        ctx->r1 = ADD32(0, 0X8);
            goto L_8006FCA4;
    }
    // 0x8006FC8C: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x8006FC90: jal         0x8006FCD4
    // 0x8006FC94: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_8006FCD4(rdram, ctx);
        goto after_8;
    // 0x8006FC94: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_8:
    // 0x8006FC98: b           L_8006FCC8
    // 0x8006FC9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8006FCC8;
    // 0x8006FC9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006FCA0: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
L_8006FCA4:
    // 0x8006FCA4: bne         $v0, $at, L_8006FCBC
    if (ctx->r2 != ctx->r1) {
        // 0x8006FCA8: nop
    
            goto L_8006FCBC;
    }
    // 0x8006FCA8: nop

    // 0x8006FCAC: jal         0x8006FCD4
    // 0x8006FCB0: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    func_8006FCD4(rdram, ctx);
        goto after_9;
    // 0x8006FCB0: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_9:
    // 0x8006FCB4: b           L_8006FCC8
    // 0x8006FCB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8006FCC8;
    // 0x8006FCB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8006FCBC:
    // 0x8006FCBC: jal         0x8006FCD4
    // 0x8006FCC0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8006FCD4(rdram, ctx);
        goto after_10;
    // 0x8006FCC0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_10:
    // 0x8006FCC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8006FCC8:
    // 0x8006FCC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8006FCCC: jr          $ra
    // 0x8006FCD0: nop

    return;
    // 0x8006FCD0: nop

;}
RECOMP_FUNC void func_8006FCD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006FCD4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8006FCD8: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8006FCDC: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8006FCE0: andi        $s4, $a0, 0xFF
    ctx->r20 = ctx->r4 & 0XFF;
    // 0x8006FCE4: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x8006FCE8: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x8006FCEC: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8006FCF0: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8006FCF4: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8006FCF8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8006FCFC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8006FD00: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8006FD04: jal         0x8006FF28
    // 0x8006FD08: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    func_8006FF28(rdram, ctx);
        goto after_0;
    // 0x8006FD08: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    after_0:
    // 0x8006FD0C: jal         0x8006FF4C
    // 0x8006FD10: nop

    func_8006FF4C(rdram, ctx);
        goto after_1;
    // 0x8006FD10: nop

    after_1:
    // 0x8006FD14: or          $s2, $s4, $zero
    ctx->r18 = ctx->r20 | 0;
    // 0x8006FD18: lui         $s0, 0x8010
    ctx->r16 = S32(0X8010 << 16);
    // 0x8006FD1C: lui         $s4, 0x800B
    ctx->r20 = S32(0X800B << 16);
    // 0x8006FD20: lui         $fp, 0x800B
    ctx->r30 = S32(0X800B << 16);
    // 0x8006FD24: lui         $s6, 0x800B
    ctx->r22 = S32(0X800B << 16);
    // 0x8006FD28: addiu       $s0, $s0, 0x69D4
    ctx->r16 = ADD32(ctx->r16, 0X69D4);
    // 0x8006FD2C: addiu       $s6, $s6, -0x11A4
    ctx->r22 = ADD32(ctx->r22, -0X11A4);
    // 0x8006FD30: addiu       $fp, $fp, -0x1180
    ctx->r30 = ADD32(ctx->r30, -0X1180);
    // 0x8006FD34: addiu       $s4, $s4, -0x1184
    ctx->r20 = ADD32(ctx->r20, -0X1184);
    // 0x8006FD38: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8006FD3C: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x8006FD40: addiu       $s7, $zero, 0x1
    ctx->r23 = ADD32(0, 0X1);
    // 0x8006FD44: addiu       $s5, $zero, 0x2
    ctx->r21 = ADD32(0, 0X2);
L_8006FD48:
    // 0x8006FD48: sll         $t6, $s1, 3
    ctx->r14 = S32(ctx->r17 << 3);
    // 0x8006FD4C: addu        $v0, $s6, $t6
    ctx->r2 = ADD32(ctx->r22, ctx->r14);
    // 0x8006FD50: lhu         $a1, 0x4($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X4);
    // 0x8006FD54: lw          $a3, 0x0($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X0);
    // 0x8006FD58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006FD5C: jal         0x8004CD24
    // 0x8006FD60: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8004CD24(rdram, ctx);
        goto after_2;
    // 0x8006FD60: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x8006FD64: bne         $s2, $zero, L_8006FD84
    if (ctx->r18 != 0) {
        // 0x8006FD68: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8006FD84;
    }
    // 0x8006FD68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006FD6C: addu        $t7, $s4, $s1
    ctx->r15 = ADD32(ctx->r20, ctx->r17);
    // 0x8006FD70: lbu         $a2, 0x0($t7)
    ctx->r6 = MEM_BU(ctx->r15, 0X0);
    // 0x8006FD74: jal         0x80021808
    // 0x8006FD78: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80021808(rdram, ctx);
        goto after_3;
    // 0x8006FD78: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_3:
    // 0x8006FD7C: b           L_8006FEA4
    // 0x8006FD80: nop

        goto L_8006FEA4;
    // 0x8006FD80: nop

L_8006FD84:
    // 0x8006FD84: bne         $s7, $s2, L_8006FDA4
    if (ctx->r23 != ctx->r18) {
        // 0x8006FD88: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8006FDA4;
    }
    // 0x8006FD88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006FD8C: addu        $t8, $fp, $s1
    ctx->r24 = ADD32(ctx->r30, ctx->r17);
    // 0x8006FD90: lbu         $a2, 0x0($t8)
    ctx->r6 = MEM_BU(ctx->r24, 0X0);
    // 0x8006FD94: jal         0x80021808
    // 0x8006FD98: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80021808(rdram, ctx);
        goto after_4;
    // 0x8006FD98: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_4:
    // 0x8006FD9C: b           L_8006FEA4
    // 0x8006FDA0: nop

        goto L_8006FEA4;
    // 0x8006FDA0: nop

L_8006FDA4:
    // 0x8006FDA4: bne         $s5, $s2, L_8006FDCC
    if (ctx->r21 != ctx->r18) {
        // 0x8006FDA8: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8006FDCC;
    }
    // 0x8006FDA8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8006FDAC: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x8006FDB0: addu        $a2, $a2, $s1
    ctx->r6 = ADD32(ctx->r6, ctx->r17);
    // 0x8006FDB4: lbu         $a2, -0x117C($a2)
    ctx->r6 = MEM_BU(ctx->r6, -0X117C);
    // 0x8006FDB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006FDBC: jal         0x80021808
    // 0x8006FDC0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80021808(rdram, ctx);
        goto after_5;
    // 0x8006FDC0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_5:
    // 0x8006FDC4: b           L_8006FEA4
    // 0x8006FDC8: nop

        goto L_8006FEA4;
    // 0x8006FDC8: nop

L_8006FDCC:
    // 0x8006FDCC: bne         $s2, $at, L_8006FDF0
    if (ctx->r18 != ctx->r1) {
        // 0x8006FDD0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8006FDF0;
    }
    // 0x8006FDD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006FDD4: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x8006FDD8: addu        $a2, $a2, $s1
    ctx->r6 = ADD32(ctx->r6, ctx->r17);
    // 0x8006FDDC: lbu         $a2, -0x1178($a2)
    ctx->r6 = MEM_BU(ctx->r6, -0X1178);
    // 0x8006FDE0: jal         0x80021808
    // 0x8006FDE4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80021808(rdram, ctx);
        goto after_6;
    // 0x8006FDE4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_6:
    // 0x8006FDE8: b           L_8006FEA4
    // 0x8006FDEC: nop

        goto L_8006FEA4;
    // 0x8006FDEC: nop

L_8006FDF0:
    // 0x8006FDF0: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8006FDF4: bne         $s2, $at, L_8006FE18
    if (ctx->r18 != ctx->r1) {
        // 0x8006FDF8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8006FE18;
    }
    // 0x8006FDF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006FDFC: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x8006FE00: addu        $a2, $a2, $s1
    ctx->r6 = ADD32(ctx->r6, ctx->r17);
    // 0x8006FE04: lbu         $a2, -0x1174($a2)
    ctx->r6 = MEM_BU(ctx->r6, -0X1174);
    // 0x8006FE08: jal         0x80021808
    // 0x8006FE0C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80021808(rdram, ctx);
        goto after_7;
    // 0x8006FE0C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_7:
    // 0x8006FE10: b           L_8006FEA4
    // 0x8006FE14: nop

        goto L_8006FEA4;
    // 0x8006FE14: nop

L_8006FE18:
    // 0x8006FE18: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8006FE1C: bne         $s2, $at, L_8006FE40
    if (ctx->r18 != ctx->r1) {
        // 0x8006FE20: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8006FE40;
    }
    // 0x8006FE20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006FE24: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x8006FE28: addu        $a2, $a2, $s1
    ctx->r6 = ADD32(ctx->r6, ctx->r17);
    // 0x8006FE2C: lbu         $a2, -0x1170($a2)
    ctx->r6 = MEM_BU(ctx->r6, -0X1170);
    // 0x8006FE30: jal         0x80021808
    // 0x8006FE34: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80021808(rdram, ctx);
        goto after_8;
    // 0x8006FE34: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_8:
    // 0x8006FE38: b           L_8006FEA4
    // 0x8006FE3C: nop

        goto L_8006FEA4;
    // 0x8006FE3C: nop

L_8006FE40:
    // 0x8006FE40: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x8006FE44: bne         $s2, $at, L_8006FE68
    if (ctx->r18 != ctx->r1) {
        // 0x8006FE48: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8006FE68;
    }
    // 0x8006FE48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006FE4C: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x8006FE50: addu        $a2, $a2, $s1
    ctx->r6 = ADD32(ctx->r6, ctx->r17);
    // 0x8006FE54: lbu         $a2, -0x116C($a2)
    ctx->r6 = MEM_BU(ctx->r6, -0X116C);
    // 0x8006FE58: jal         0x80021808
    // 0x8006FE5C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80021808(rdram, ctx);
        goto after_9;
    // 0x8006FE5C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_9:
    // 0x8006FE60: b           L_8006FEA4
    // 0x8006FE64: nop

        goto L_8006FEA4;
    // 0x8006FE64: nop

L_8006FE68:
    // 0x8006FE68: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x8006FE6C: bne         $s2, $at, L_8006FE94
    if (ctx->r18 != ctx->r1) {
        // 0x8006FE70: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8006FE94;
    }
    // 0x8006FE70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006FE74: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x8006FE78: addu        $a2, $a2, $s1
    ctx->r6 = ADD32(ctx->r6, ctx->r17);
    // 0x8006FE7C: lbu         $a2, -0x1168($a2)
    ctx->r6 = MEM_BU(ctx->r6, -0X1168);
    // 0x8006FE80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006FE84: jal         0x80021808
    // 0x8006FE88: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80021808(rdram, ctx);
        goto after_10;
    // 0x8006FE88: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_10:
    // 0x8006FE8C: b           L_8006FEA4
    // 0x8006FE90: nop

        goto L_8006FEA4;
    // 0x8006FE90: nop

L_8006FE94:
    // 0x8006FE94: addu        $t9, $s4, $s1
    ctx->r25 = ADD32(ctx->r20, ctx->r17);
    // 0x8006FE98: lbu         $a2, 0x0($t9)
    ctx->r6 = MEM_BU(ctx->r25, 0X0);
    // 0x8006FE9C: jal         0x80021808
    // 0x8006FEA0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80021808(rdram, ctx);
        goto after_11;
    // 0x8006FEA0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_11:
L_8006FEA4:
    // 0x8006FEA4: bne         $s5, $s3, L_8006FEB4
    if (ctx->r21 != ctx->r19) {
        // 0x8006FEA8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8006FEB4;
    }
    // 0x8006FEA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006FEAC: jal         0x8004CD90
    // 0x8006FEB0: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_8004CD90(rdram, ctx);
        goto after_12;
    // 0x8006FEB0: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_12:
L_8006FEB4:
    // 0x8006FEB4: lbu         $t1, 0x9($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X9);
    // 0x8006FEB8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8006FEBC: andi        $s3, $s1, 0xFF
    ctx->r19 = ctx->r17 & 0XFF;
    // 0x8006FEC0: slti        $at, $s3, 0x4
    ctx->r1 = SIGNED(ctx->r19) < 0X4 ? 1 : 0;
    // 0x8006FEC4: ori         $t2, $t1, 0x10
    ctx->r10 = ctx->r9 | 0X10;
    // 0x8006FEC8: or          $s1, $s3, $zero
    ctx->r17 = ctx->r19 | 0;
    // 0x8006FECC: addiu       $s0, $s0, 0x3C
    ctx->r16 = ADD32(ctx->r16, 0X3C);
    // 0x8006FED0: bne         $at, $zero, L_8006FD48
    if (ctx->r1 != 0) {
        // 0x8006FED4: sb          $t2, -0x33($s0)
        MEM_B(-0X33, ctx->r16) = ctx->r10;
            goto L_8006FD48;
    }
    // 0x8006FED4: sb          $t2, -0x33($s0)
    MEM_B(-0X33, ctx->r16) = ctx->r10;
    // 0x8006FED8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8006FEDC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8006FEE0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8006FEE4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8006FEE8: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8006FEEC: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8006FEF0: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8006FEF4: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8006FEF8: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8006FEFC: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x8006FF00: jr          $ra
    // 0x8006FF04: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x8006FF04: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8006FF08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006FF08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006FF0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006FF10: jal         0x8006FCD4
    // 0x8006FF14: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8006FCD4(rdram, ctx);
        goto after_0;
    // 0x8006FF14: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x8006FF18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006FF1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8006FF20: jr          $ra
    // 0x8006FF24: nop

    return;
    // 0x8006FF24: nop

;}
RECOMP_FUNC void func_8006FF28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006FF28: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006FF2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006FF30: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8006FF34: jal         0x80020318
    // 0x8006FF38: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_80020318(rdram, ctx);
        goto after_0;
    // 0x8006FF38: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_0:
    // 0x8006FF3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006FF40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8006FF44: jr          $ra
    // 0x8006FF48: nop

    return;
    // 0x8006FF48: nop

;}
RECOMP_FUNC void func_8006FF4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006FF4C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006FF50: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006FF54: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8006FF58: jal         0x80020318
    // 0x8006FF5C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_80020318(rdram, ctx);
        goto after_0;
    // 0x8006FF5C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_0:
    // 0x8006FF60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006FF64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8006FF68: jr          $ra
    // 0x8006FF6C: nop

    return;
    // 0x8006FF6C: nop

;}
RECOMP_FUNC void func_8006FF70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006FF70: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x8006FF74: slti        $at, $t6, 0x24
    ctx->r1 = SIGNED(ctx->r14) < 0X24 ? 1 : 0;
    // 0x8006FF78: bne         $at, $zero, L_8006FF94
    if (ctx->r1 != 0) {
        // 0x8006FF7C: sw          $a0, 0x0($sp)
        MEM_W(0X0, ctx->r29) = ctx->r4;
            goto L_8006FF94;
    }
    // 0x8006FF7C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8006FF80: slti        $at, $t6, 0x2A
    ctx->r1 = SIGNED(ctx->r14) < 0X2A ? 1 : 0;
    // 0x8006FF84: beq         $at, $zero, L_8006FF98
    if (ctx->r1 == 0) {
        // 0x8006FF88: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8006FF98;
    }
    // 0x8006FF88: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006FF8C: jr          $ra
    // 0x8006FF90: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8006FF90: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8006FF94:
    // 0x8006FF94: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8006FF98:
    // 0x8006FF98: jr          $ra
    // 0x8006FF9C: nop

    return;
    // 0x8006FF9C: nop

;}
RECOMP_FUNC void func_8006FFA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006FFA0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8006FFA4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8006FFA8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8006FFAC: lh          $t6, 0x36($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X36);
    // 0x8006FFB0: lbu         $t7, 0x3B($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X3B);
    // 0x8006FFB4: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8006FFB8: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x8006FFBC: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x8006FFC0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8006FFC4: lbu         $a2, 0x27($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X27);
    // 0x8006FFC8: lh          $a3, 0x32($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X32);
    // 0x8006FFCC: lbu         $a1, 0x23($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X23);
    // 0x8006FFD0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8006FFD4: jal         0x8007004C
    // 0x8006FFD8: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    func_8007004C(rdram, ctx);
        goto after_0;
    // 0x8006FFD8: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    after_0:
    // 0x8006FFDC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8006FFE0: jal         0x8002A7F8
    // 0x8006FFE4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8002A7F8(rdram, ctx);
        goto after_1;
    // 0x8006FFE4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_1:
    // 0x8006FFE8: lh          $t8, 0x32($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X32);
    // 0x8006FFEC: lh          $t0, 0x36($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X36);
    // 0x8006FFF0: lbu         $a1, 0x2F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X2F);
    // 0x8006FFF4: lbu         $a2, 0x23($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X23);
    // 0x8006FFF8: lbu         $a3, 0x27($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X27);
    // 0x8006FFFC: addiu       $t9, $t8, 0x2
    ctx->r25 = ADD32(ctx->r24, 0X2);
    // 0x80070000: addiu       $t1, $t0, 0x2
    ctx->r9 = ADD32(ctx->r8, 0X2);
    // 0x80070004: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x80070008: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x8007000C: jal         0x800701B8
    // 0x80070010: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800701B8(rdram, ctx);
        goto after_2;
    // 0x80070010: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x80070014: lbu         $a0, 0x2F($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X2F);
    // 0x80070018: lh          $t3, 0x36($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X36);
    // 0x8007001C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80070020: andi        $t2, $a0, 0xFF
    ctx->r10 = ctx->r4 & 0XFF;
    // 0x80070024: lbu         $a1, 0x23($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X23);
    // 0x80070028: lbu         $a2, 0x27($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X27);
    // 0x8007002C: lh          $a3, 0x32($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X32);
    // 0x80070030: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x80070034: jal         0x80070274
    // 0x80070038: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    func_80070274(rdram, ctx);
        goto after_3;
    // 0x80070038: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    after_3:
    // 0x8007003C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80070040: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80070044: jr          $ra
    // 0x80070048: nop

    return;
    // 0x80070048: nop

;}
RECOMP_FUNC void func_8007004C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007004C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80070050: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80070054: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80070058: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8007005C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80070060: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x80070064: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x80070068: jal         0x8002A7F8
    // 0x8007006C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8002A7F8(rdram, ctx);
        goto after_0;
    // 0x8007006C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x80070070: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x80070074: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80070078: jal         0x8002A7F8
    // 0x8007007C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8002A7F8(rdram, ctx);
        goto after_1;
    // 0x8007007C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x80070080: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x80070084: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80070088: jal         0x8002A7F8
    // 0x8007008C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8002A7F8(rdram, ctx);
        goto after_2;
    // 0x8007008C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_2:
    // 0x80070090: lh          $a1, 0x3E($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X3E);
    // 0x80070094: lh          $a2, 0x42($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X42);
    // 0x80070098: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8007009C: jal         0x8004CD44
    // 0x800700A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8004CD44(rdram, ctx);
        goto after_3;
    // 0x800700A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x800700A4: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x800700A8: lh          $a1, 0x3E($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X3E);
    // 0x800700AC: lh          $a2, 0x42($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X42);
    // 0x800700B0: jal         0x8004CD44
    // 0x800700B4: nop

    func_8004CD44(rdram, ctx);
        goto after_4;
    // 0x800700B4: nop

    after_4:
    // 0x800700B8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800700BC: lh          $a1, 0x3E($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X3E);
    // 0x800700C0: lh          $a2, 0x42($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X42);
    // 0x800700C4: jal         0x8004CD44
    // 0x800700C8: nop

    func_8004CD44(rdram, ctx);
        goto after_5;
    // 0x800700C8: nop

    after_5:
    // 0x800700CC: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x800700D0: lh          $a1, 0x3E($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X3E);
    // 0x800700D4: lh          $a2, 0x42($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X42);
    // 0x800700D8: jal         0x8004CD44
    // 0x800700DC: nop

    func_8004CD44(rdram, ctx);
        goto after_6;
    // 0x800700DC: nop

    after_6:
    // 0x800700E0: jal         0x8006E48C
    // 0x800700E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8006E48C(rdram, ctx);
        goto after_7;
    // 0x800700E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x800700E8: lbu         $a0, 0x37($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X37);
    // 0x800700EC: lbu         $a1, 0x3B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X3B);
    // 0x800700F0: jal         0x8004C714
    // 0x800700F4: nop

    func_8004C714(rdram, ctx);
        goto after_8;
    // 0x800700F4: nop

    after_8:
    // 0x800700F8: bne         $v0, $zero, L_80070118
    if (ctx->r2 != 0) {
        // 0x800700FC: lw          $t6, 0x2C($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X2C);
            goto L_80070118;
    }
    // 0x800700FC: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80070100: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x80070104: jal         0x8006E50C
    // 0x80070108: nop

    func_8006E50C(rdram, ctx);
        goto after_9;
    // 0x80070108: nop

    after_9:
    // 0x8007010C: b           L_80070124
    // 0x80070110: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
        goto L_80070124;
    // 0x80070110: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80070114: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
L_80070118:
    // 0x80070118: nop

    // 0x8007011C: sb          $zero, 0x4($t6)
    MEM_B(0X4, ctx->r14) = 0;
    // 0x80070120: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
L_80070124:
    // 0x80070124: jal         0x8006E54C
    // 0x80070128: nop

    func_8006E54C(rdram, ctx);
        goto after_10;
    // 0x80070128: nop

    after_10:
    // 0x8007012C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80070130: lbu         $a1, 0x37($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X37);
    // 0x80070134: lbu         $a2, 0x3B($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X3B);
    // 0x80070138: lbu         $a3, 0x47($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X47);
    // 0x8007013C: jal         0x80070154
    // 0x80070140: nop

    func_80070154(rdram, ctx);
        goto after_11;
    // 0x80070140: nop

    after_11:
    // 0x80070144: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80070148: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8007014C: jr          $ra
    // 0x80070150: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80070150: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80070154(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80070154: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80070158: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007015C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80070160: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80070164: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x80070168: lui         $t8, 0x803D
    ctx->r24 = S32(0X803D << 16);
    // 0x8007016C: addiu       $t8, $t8, -0x5780
    ctx->r24 = ADD32(ctx->r24, -0X5780);
    // 0x80070170: addiu       $t9, $zero, 0x8
    ctx->r25 = ADD32(0, 0X8);
    // 0x80070174: sw          $t8, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r24;
    // 0x80070178: sb          $t9, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r25;
    // 0x8007017C: lbu         $t1, 0x23($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X23);
    // 0x80070180: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x80070184: sll         $t0, $t6, 4
    ctx->r8 = S32(ctx->r14 << 4);
    // 0x80070188: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x8007018C: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x80070190: addu        $a2, $a2, $t2
    ctx->r6 = ADD32(ctx->r6, ctx->r10);
    // 0x80070194: andi        $t7, $a3, 0xFF
    ctx->r15 = ctx->r7 & 0XFF;
    // 0x80070198: lbu         $a2, -0x436C($a2)
    ctx->r6 = MEM_BU(ctx->r6, -0X436C);
    // 0x8007019C: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    // 0x800701A0: jal         0x800392F4
    // 0x800701A4: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    func_800392F4(rdram, ctx);
        goto after_0;
    // 0x800701A4: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    after_0:
    // 0x800701A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800701AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800701B0: jr          $ra
    // 0x800701B4: nop

    return;
    // 0x800701B4: nop

;}
RECOMP_FUNC void func_800701B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800701B8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800701BC: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x800701C0: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x800701C4: lh          $t6, 0x3E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X3E);
    // 0x800701C8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x800701CC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800701D0: lbu         $a1, 0x33($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X33);
    // 0x800701D4: lbu         $a2, 0x37($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X37);
    // 0x800701D8: lh          $a3, 0x3A($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X3A);
    // 0x800701DC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800701E0: jal         0x8004C6B4
    // 0x800701E4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_8004C6B4(rdram, ctx);
        goto after_0;
    // 0x800701E4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x800701E8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800701EC: addiu       $t7, $zero, 0x9
    ctx->r15 = ADD32(0, 0X9);
    // 0x800701F0: addiu       $t8, $zero, 0x80
    ctx->r24 = ADD32(0, 0X80);
    // 0x800701F4: sb          $t7, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r15;
    // 0x800701F8: sh          $t8, 0x6($a0)
    MEM_H(0X6, ctx->r4) = ctx->r24;
    // 0x800701FC: lh          $a2, 0x3E($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X3E);
    // 0x80070200: lh          $a1, 0x3A($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X3A);
    // 0x80070204: jal         0x8004CD44
    // 0x80070208: nop

    func_8004CD44(rdram, ctx);
        goto after_1;
    // 0x80070208: nop

    after_1:
    // 0x8007020C: lbu         $t9, 0x2F($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X2F);
    // 0x80070210: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x80070214: lh          $t2, 0x3E($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X3E);
    // 0x80070218: addiu       $t1, $t1, -0x3770
    ctx->r9 = ADD32(ctx->r9, -0X3770);
    // 0x8007021C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x80070220: sll         $t0, $t9, 5
    ctx->r8 = S32(ctx->r25 << 5);
    // 0x80070224: addu        $v1, $t0, $t1
    ctx->r3 = ADD32(ctx->r8, ctx->r9);
    // 0x80070228: ori         $at, $at, 0xFEE8
    ctx->r1 = ctx->r1 | 0XFEE8;
    // 0x8007022C: lbu         $a1, 0x33($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X33);
    // 0x80070230: lbu         $a2, 0x37($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X37);
    // 0x80070234: lh          $a3, 0x3A($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X3A);
    // 0x80070238: addu        $a0, $v1, $at
    ctx->r4 = ADD32(ctx->r3, ctx->r1);
    // 0x8007023C: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x80070240: jal         0x8004D2C8
    // 0x80070244: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    func_8004D2C8(rdram, ctx);
        goto after_2;
    // 0x80070244: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    after_2:
    // 0x80070248: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x8007024C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x80070250: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80070254: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x80070258: addiu       $t3, $zero, 0x70
    ctx->r11 = ADD32(0, 0X70);
    // 0x8007025C: addiu       $t4, $zero, 0xA
    ctx->r12 = ADD32(0, 0XA);
    // 0x80070260: addu        $v0, $v1, $at
    ctx->r2 = ADD32(ctx->r3, ctx->r1);
    // 0x80070264: sh          $t3, 0x7EEE($v0)
    MEM_H(0X7EEE, ctx->r2) = ctx->r11;
    // 0x80070268: sb          $t4, 0x7EED($v0)
    MEM_B(0X7EED, ctx->r2) = ctx->r12;
    // 0x8007026C: jr          $ra
    // 0x80070270: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80070270: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80070274(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80070274: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80070278: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8007027C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80070280: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80070284: lbu         $a0, 0x1F($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1F);
    // 0x80070288: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8007028C: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x80070290: jal         0x800702BC
    // 0x80070294: andi        $a1, $a2, 0xFF
    ctx->r5 = ctx->r6 & 0XFF;
    func_800702BC(rdram, ctx);
        goto after_0;
    // 0x80070294: andi        $a1, $a2, 0xFF
    ctx->r5 = ctx->r6 & 0XFF;
    after_0:
    // 0x80070298: lbu         $a0, 0x1B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1B);
    // 0x8007029C: lh          $a2, 0x26($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X26);
    // 0x800702A0: lh          $a3, 0x2A($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X2A);
    // 0x800702A4: jal         0x8006F070
    // 0x800702A8: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_8006F070(rdram, ctx);
        goto after_1;
    // 0x800702A8: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_1:
    // 0x800702AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800702B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800702B4: jr          $ra
    // 0x800702B8: nop

    return;
    // 0x800702B8: nop

;}
RECOMP_FUNC void func_800702BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800702BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800702C0: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x800702C4: andi        $a2, $a1, 0xFF
    ctx->r6 = ctx->r5 & 0XFF;
    // 0x800702C8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800702CC: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x800702D0: addu        $t8, $t7, $a2
    ctx->r24 = ADD32(ctx->r15, ctx->r6);
    // 0x800702D4: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x800702D8: addu        $a1, $a1, $t8
    ctx->r5 = ADD32(ctx->r5, ctx->r24);
    // 0x800702DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800702E0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800702E4: lbu         $a1, -0x436C($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X436C);
    // 0x800702E8: jal         0x8006F274
    // 0x800702EC: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_8006F274(rdram, ctx);
        goto after_0;
    // 0x800702EC: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_0:
    // 0x800702F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800702F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800702F8: jr          $ra
    // 0x800702FC: nop

    return;
    // 0x800702FC: nop

;}
RECOMP_FUNC void func_80070300(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80070300: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80070304: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80070308: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8007030C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80070310: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80070314: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80070318: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8007031C: addiu       $a0, $a0, -0x1E98
    ctx->r4 = ADD32(ctx->r4, -0X1E98);
    // 0x80070320: jal         0x800293DC
    // 0x80070324: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    func_800293DC(rdram, ctx);
        goto after_0;
    // 0x80070324: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    after_0:
    // 0x80070328: lw          $s0, 0x14($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X14);
    // 0x8007032C: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x80070330: beq         $s0, $s2, L_80070380
    if (ctx->r16 == ctx->r18) {
        // 0x80070334: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_80070380;
    }
    // 0x80070334: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80070338: lui         $s3, 0x800B
    ctx->r19 = S32(0X800B << 16);
    // 0x8007033C: addiu       $s3, $s3, -0x1260
    ctx->r19 = ADD32(ctx->r19, -0X1260);
L_80070340:
    // 0x80070340: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80070344: addiu       $a1, $zero, 0x2E6
    ctx->r5 = ADD32(0, 0X2E6);
    // 0x80070348: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8007034C: jal         0x8004CD24
    // 0x80070350: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8004CD24(rdram, ctx);
        goto after_1;
    // 0x80070350: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x80070354: addu        $t6, $s3, $s1
    ctx->r14 = ADD32(ctx->r19, ctx->r17);
    // 0x80070358: lbu         $a2, 0x0($t6)
    ctx->r6 = MEM_BU(ctx->r14, 0X0);
    // 0x8007035C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80070360: jal         0x8002135C
    // 0x80070364: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x80070364: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_2:
    // 0x80070368: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
    // 0x8007036C: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x80070370: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80070374: andi        $t7, $s1, 0xFF
    ctx->r15 = ctx->r17 & 0XFF;
    // 0x80070378: bne         $s0, $s2, L_80070340
    if (ctx->r16 != ctx->r18) {
        // 0x8007037C: or          $s1, $t7, $zero
        ctx->r17 = ctx->r15 | 0;
            goto L_80070340;
    }
    // 0x8007037C: or          $s1, $t7, $zero
    ctx->r17 = ctx->r15 | 0;
L_80070380:
    // 0x80070380: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80070384: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80070388: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8007038C: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80070390: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80070394: jr          $ra
    // 0x80070398: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80070398: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8007039C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007039C: andi        $t7, $a1, 0xFF
    ctx->r15 = ctx->r5 & 0XFF;
    // 0x800703A0: lui         $t0, 0x800B
    ctx->r8 = S32(0X800B << 16);
    // 0x800703A4: addiu       $t0, $t0, -0x10B4
    ctx->r8 = ADD32(ctx->r8, -0X10B4);
    // 0x800703A8: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x800703AC: sll         $t9, $t7, 1
    ctx->r25 = S32(ctx->r15 << 1);
    // 0x800703B0: andi        $t8, $a2, 0xFF
    ctx->r24 = ctx->r6 & 0XFF;
    // 0x800703B4: addu        $t1, $t0, $t9
    ctx->r9 = ADD32(ctx->r8, ctx->r25);
    // 0x800703B8: sll         $t3, $t6, 1
    ctx->r11 = S32(ctx->r14 << 1);
    // 0x800703BC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x800703C0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x800703C4: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x800703C8: addu        $t2, $t1, $t8
    ctx->r10 = ADD32(ctx->r9, ctx->r24);
    // 0x800703CC: addu        $a3, $t0, $t3
    ctx->r7 = ADD32(ctx->r8, ctx->r11);
    // 0x800703D0: lbu         $v0, 0x0($t2)
    ctx->r2 = MEM_BU(ctx->r10, 0X0);
    // 0x800703D4: lbu         $t4, 0x0($a3)
    ctx->r12 = MEM_BU(ctx->r7, 0X0);
    // 0x800703D8: nop

    // 0x800703DC: bne         $v0, $t4, L_80070404
    if (ctx->r2 != ctx->r12) {
        // 0x800703E0: nop
    
            goto L_80070404;
    }
    // 0x800703E0: nop

    // 0x800703E4: lbu         $t5, 0x1($a3)
    ctx->r13 = MEM_BU(ctx->r7, 0X1);
    // 0x800703E8: nop

    // 0x800703EC: bne         $v0, $t5, L_800703FC
    if (ctx->r2 != ctx->r13) {
        // 0x800703F0: nop
    
            goto L_800703FC;
    }
    // 0x800703F0: nop

    // 0x800703F4: jr          $ra
    // 0x800703F8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x800703F8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800703FC:
    // 0x800703FC: jr          $ra
    // 0x80070400: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80070400: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80070404:
    // 0x80070404: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80070408: jr          $ra
    // 0x8007040C: nop

    return;
    // 0x8007040C: nop

;}
RECOMP_FUNC void func_80070410(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80070410: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80070414: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80070418: addiu       $v1, $v1, -0x2CF0
    ctx->r3 = ADD32(ctx->r3, -0X2CF0);
    // 0x8007041C: lhu         $t6, 0x8($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X8);
    // 0x80070420: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80070424: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80070428: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x8007042C: lbu         $a1, 0x1B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X1B);
    // 0x80070430: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80070434: andi        $t7, $t6, 0xFDFF
    ctx->r15 = ctx->r14 & 0XFDFF;
    // 0x80070438: sh          $t7, 0x8($v1)
    MEM_H(0X8, ctx->r3) = ctx->r15;
    // 0x8007043C: andi        $a0, $a3, 0xFF
    ctx->r4 = ctx->r7 & 0XFF;
    // 0x80070440: jal         0x8007039C
    // 0x80070444: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8007039C(rdram, ctx);
        goto after_0;
    // 0x80070444: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80070448: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8007044C: bne         $v0, $zero, L_80070468
    if (ctx->r2 != 0) {
        // 0x80070450: addiu       $v1, $v1, -0x2CF0
        ctx->r3 = ADD32(ctx->r3, -0X2CF0);
            goto L_80070468;
    }
    // 0x80070450: addiu       $v1, $v1, -0x2CF0
    ctx->r3 = ADD32(ctx->r3, -0X2CF0);
    // 0x80070454: lhu         $t8, 0xA9C($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0XA9C);
    // 0x80070458: nop

    // 0x8007045C: andi        $t9, $t8, 0xFDFF
    ctx->r25 = ctx->r24 & 0XFDFF;
    // 0x80070460: b           L_80070478
    // 0x80070464: sh          $t9, 0xA9C($v1)
    MEM_H(0XA9C, ctx->r3) = ctx->r25;
        goto L_80070478;
    // 0x80070464: sh          $t9, 0xA9C($v1)
    MEM_H(0XA9C, ctx->r3) = ctx->r25;
L_80070468:
    // 0x80070468: lhu         $t0, 0xA9C($v1)
    ctx->r8 = MEM_HU(ctx->r3, 0XA9C);
    // 0x8007046C: nop

    // 0x80070470: ori         $t1, $t0, 0x200
    ctx->r9 = ctx->r8 | 0X200;
    // 0x80070474: sh          $t1, 0xA9C($v1)
    MEM_H(0XA9C, ctx->r3) = ctx->r9;
L_80070478:
    // 0x80070478: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007047C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80070480: jr          $ra
    // 0x80070484: nop

    return;
    // 0x80070484: nop

    // 0x80070488: nop

    // 0x8007048C: nop

;}
RECOMP_FUNC void func_80070490(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80070490: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80070494: lwc1        $f12, -0x598($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X598);
    // 0x80070498: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8007049C: lwc1        $f7, -0x5428($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X5428);
    // 0x800704A0: lwc1        $f6, -0x5424($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X5424);
    // 0x800704A4: cvt.d.s     $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f4.d = CVT_D_S(ctx->f12.fl);
    // 0x800704A8: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x800704AC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800704B0: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    // 0x800704B4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800704B8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800704BC: jal         0x80081040
    // 0x800704C0: swc1        $f12, -0x598($at)
    MEM_W(-0X598, ctx->r1) = ctx->f12.u32l;
    func_80081040(rdram, ctx);
        goto after_0;
    // 0x800704C0: swc1        $f12, -0x598($at)
    MEM_W(-0X598, ctx->r1) = ctx->f12.u32l;
    after_0:
    // 0x800704C4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800704C8: lwc1        $f12, -0x598($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X598);
    // 0x800704CC: jal         0x80080E80
    // 0x800704D0: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    func_80080E80(rdram, ctx);
        goto after_1;
    // 0x800704D0: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x800704D4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800704D8: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x800704DC: lwc1        $f16, 0x20($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X20);
    // 0x800704E0: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x800704E4: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x800704E8: mfc1        $a3, $f14
    ctx->r7 = (int32_t)ctx->f14.u32l;
    // 0x800704EC: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x800704F0: mul.d       $f10, $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f10.d = MUL_D(ctx->f10.d, ctx->f18.d);
    // 0x800704F4: cvt.d.s     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f16.d = CVT_D_S(ctx->f16.fl);
    // 0x800704F8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800704FC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80070500: swc1        $f14, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f14.u32l;
    // 0x80070504: mul.d       $f18, $f16, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f18.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x80070508: cvt.s.d     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f10.fl = CVT_S_D(ctx->f10.d);
    // 0x8007050C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x80070510: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x80070514: jal         0x80028FD4
    // 0x80070518: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    func_80028FD4(rdram, ctx);
        goto after_2;
    // 0x80070518: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    after_2:
    // 0x8007051C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80070520: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80070524: jr          $ra
    // 0x80070528: nop

    return;
    // 0x80070528: nop

;}
RECOMP_FUNC void func_8007052C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007052C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80070530: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80070534: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x80070538: jal         0x80070490
    // 0x8007053C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_80070490(rdram, ctx);
        goto after_0;
    // 0x8007053C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80070540: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80070544: lw          $v0, 0x3A54($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3A54);
    // 0x80070548: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8007054C: bne         $v0, $zero, L_80070600
    if (ctx->r2 != 0) {
        // 0x80070550: nop
    
            goto L_80070600;
    }
    // 0x80070550: nop

    // 0x80070554: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x80070558: lw          $t8, 0x68($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X68);
    // 0x8007055C: ori         $t7, $t6, 0x4
    ctx->r15 = ctx->r14 | 0X4;
    // 0x80070560: beq         $t8, $zero, L_80070654
    if (ctx->r24 == 0) {
        // 0x80070564: sw          $t7, 0x0($s0)
        MEM_W(0X0, ctx->r16) = ctx->r15;
            goto L_80070654;
    }
    // 0x80070564: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    // 0x80070568: lw          $a0, 0x64($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X64);
    // 0x8007056C: lw          $a1, 0x6C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X6C);
    // 0x80070570: addiu       $t9, $s0, 0x14
    ctx->r25 = ADD32(ctx->r16, 0X14);
    // 0x80070574: addiu       $t0, $s0, 0x24
    ctx->r8 = ADD32(ctx->r16, 0X24);
    // 0x80070578: addiu       $t1, $s0, 0x28
    ctx->r9 = ADD32(ctx->r16, 0X28);
    // 0x8007057C: addiu       $t2, $s0, 0x2C
    ctx->r10 = ADD32(ctx->r16, 0X2C);
    // 0x80070580: addiu       $t3, $s0, 0x30
    ctx->r11 = ADD32(ctx->r16, 0X30);
    // 0x80070584: addiu       $t4, $s0, 0x34
    ctx->r12 = ADD32(ctx->r16, 0X34);
    // 0x80070588: addiu       $t5, $s0, 0x38
    ctx->r13 = ADD32(ctx->r16, 0X38);
    // 0x8007058C: sw          $t5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r13;
    // 0x80070590: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
    // 0x80070594: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x80070598: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x8007059C: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x800705A0: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x800705A4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x800705A8: addiu       $a2, $s0, 0xC
    ctx->r6 = ADD32(ctx->r16, 0XC);
    // 0x800705AC: addiu       $a3, $s0, 0x10
    ctx->r7 = ADD32(ctx->r16, 0X10);
    // 0x800705B0: jal         0x800638F0
    // 0x800705B4: sw          $a0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r4;
    func_800638F0(rdram, ctx);
        goto after_1;
    // 0x800705B4: sw          $a0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r4;
    after_1:
    // 0x800705B8: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x800705BC: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800705C0: lw          $t6, 0x20($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X20);
    // 0x800705C4: nop

    // 0x800705C8: beq         $t6, $zero, L_800705EC
    if (ctx->r14 == 0) {
        // 0x800705CC: nop
    
            goto L_800705EC;
    }
    // 0x800705CC: nop

    // 0x800705D0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x800705D4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800705D8: sw          $zero, 0x68($s0)
    MEM_W(0X68, ctx->r16) = 0;
    // 0x800705DC: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x800705E0: swc1        $f0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f0.u32l;
    // 0x800705E4: b           L_80070654
    // 0x800705E8: swc1        $f4, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f4.u32l;
        goto L_80070654;
    // 0x800705E8: swc1        $f4, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f4.u32l;
L_800705EC:
    // 0x800705EC: lw          $t7, 0x6C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X6C);
    // 0x800705F0: nop

    // 0x800705F4: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x800705F8: b           L_80070654
    // 0x800705FC: sw          $t8, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->r24;
        goto L_80070654;
    // 0x800705FC: sw          $t8, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->r24;
L_80070600:
    // 0x80070600: beq         $v0, $at, L_80070658
    if (ctx->r2 == ctx->r1) {
        // 0x80070604: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_80070658;
    }
    // 0x80070604: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80070608: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x8007060C: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x80070610: and         $t0, $t9, $at
    ctx->r8 = ctx->r25 & ctx->r1;
    // 0x80070614: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80070618: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8007061C: lwc1        $f2, 0x88($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X88);
    // 0x80070620: lwc1        $f0, 0x80($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X80);
    // 0x80070624: lwc1        $f6, 0x1C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x80070628: c.le.s      $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f10.fl <= ctx->f2.fl;
    // 0x8007062C: add.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f0.fl;
    // 0x80070630: sw          $t0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r8;
    // 0x80070634: bc1f        L_80070644
    if (!c1cs) {
        // 0x80070638: swc1        $f8, 0x1C($s0)
        MEM_W(0X1C, ctx->r16) = ctx->f8.u32l;
            goto L_80070644;
    }
    // 0x80070638: swc1        $f8, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f8.u32l;
    // 0x8007063C: b           L_80070654
    // 0x80070640: swc1        $f2, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f2.u32l;
        goto L_80070654;
    // 0x80070640: swc1        $f2, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f2.u32l;
L_80070644:
    // 0x80070644: lwc1        $f16, 0x84($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X84);
    // 0x80070648: nop

    // 0x8007064C: add.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f16.fl;
    // 0x80070650: swc1        $f18, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f18.u32l;
L_80070654:
    // 0x80070654: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80070658:
    // 0x80070658: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x8007065C: jr          $ra
    // 0x80070660: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80070660: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80070664(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80070664: lw          $v0, 0x64($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X64);
    // 0x80070668: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8007066C: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80070670: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80070674: swc1        $f4, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f4.u32l;
    // 0x80070678: lwc1        $f6, 0x10($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8007067C: nop

    // 0x80070680: swc1        $f6, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f6.u32l;
    // 0x80070684: lwc1        $f8, 0x14($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X14);
    // 0x80070688: nop

    // 0x8007068C: swc1        $f8, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f8.u32l;
    // 0x80070690: lw          $v1, 0x3A54($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3A54);
    // 0x80070694: nop

    // 0x80070698: bne         $v1, $zero, L_800706F8
    if (ctx->r3 != 0) {
        // 0x8007069C: nop
    
            goto L_800706F8;
    }
    // 0x8007069C: nop

    // 0x800706A0: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x800706A4: nop

    // 0x800706A8: ori         $t7, $t6, 0x4
    ctx->r15 = ctx->r14 | 0X4;
    // 0x800706AC: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x800706B0: lwc1        $f10, 0x24($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X24);
    // 0x800706B4: nop

    // 0x800706B8: swc1        $f10, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f10.u32l;
    // 0x800706BC: lwc1        $f16, 0x28($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X28);
    // 0x800706C0: nop

    // 0x800706C4: swc1        $f16, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f16.u32l;
    // 0x800706C8: lwc1        $f18, 0x2C($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X2C);
    // 0x800706CC: nop

    // 0x800706D0: swc1        $f18, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f18.u32l;
    // 0x800706D4: lwc1        $f4, 0x30($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X30);
    // 0x800706D8: nop

    // 0x800706DC: swc1        $f4, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f4.u32l;
    // 0x800706E0: lwc1        $f6, 0x34($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X34);
    // 0x800706E4: nop

    // 0x800706E8: swc1        $f6, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f6.u32l;
    // 0x800706EC: lwc1        $f8, 0x38($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X38);
    // 0x800706F0: jr          $ra
    // 0x800706F4: swc1        $f8, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f8.u32l;
    return;
    // 0x800706F4: swc1        $f8, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f8.u32l;
L_800706F8:
    // 0x800706F8: beq         $v1, $at, L_80070758
    if (ctx->r3 == ctx->r1) {
        // 0x800706FC: nop
    
            goto L_80070758;
    }
    // 0x800706FC: nop

    // 0x80070700: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x80070704: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x80070708: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x8007070C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80070710: lwc1        $f0, 0x80($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X80);
    // 0x80070714: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80070718: lwc1        $f2, 0x88($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X88);
    // 0x8007071C: lwc1        $f10, 0x1C($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x80070720: lwc1        $f18, 0x20($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X20);
    // 0x80070724: c.le.s      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl <= ctx->f2.fl;
    // 0x80070728: add.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f0.fl;
    // 0x8007072C: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x80070730: add.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f0.fl;
    // 0x80070734: swc1        $f16, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f16.u32l;
    // 0x80070738: bc1f        L_80070748
    if (!c1cs) {
        // 0x8007073C: swc1        $f4, 0x20($a0)
        MEM_W(0X20, ctx->r4) = ctx->f4.u32l;
            goto L_80070748;
    }
    // 0x8007073C: swc1        $f4, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f4.u32l;
    // 0x80070740: jr          $ra
    // 0x80070744: swc1        $f2, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f2.u32l;
    return;
    // 0x80070744: swc1        $f2, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f2.u32l;
L_80070748:
    // 0x80070748: lwc1        $f8, 0x84($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X84);
    // 0x8007074C: nop

    // 0x80070750: add.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x80070754: swc1        $f10, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f10.u32l;
L_80070758:
    // 0x80070758: jr          $ra
    // 0x8007075C: nop

    return;
    // 0x8007075C: nop

;}
RECOMP_FUNC void func_80070760(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80070760: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x80070764: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x80070768: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x8007076C: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x80070770: lui         $t8, 0x801B
    ctx->r24 = S32(0X801B << 16);
    // 0x80070774: lh          $t8, 0x3F78($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X3F78);
    // 0x80070778: ori         $t1, $t7, 0x1
    ctx->r9 = ctx->r15 | 0X1;
    // 0x8007077C: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x80070780: beq         $t9, $zero, L_8007078C
    if (ctx->r25 == 0) {
        // 0x80070784: lui         $at, 0x4000
        ctx->r1 = S32(0X4000 << 16);
            goto L_8007078C;
    }
    // 0x80070784: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80070788: sw          $t1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r9;
L_8007078C:
    // 0x8007078C: lw          $v1, 0x64($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X64);
    // 0x80070790: lw          $t2, 0x9C($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X9C);
    // 0x80070794: lwc1        $f4, 0x1C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x80070798: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8007079C: addu        $t3, $t2, $v1
    ctx->r11 = ADD32(ctx->r10, ctx->r3);
    // 0x800707A0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800707A4: slti        $at, $t3, 0x78
    ctx->r1 = SIGNED(ctx->r11) < 0X78 ? 1 : 0;
    // 0x800707A8: swc1        $f8, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f8.u32l;
    // 0x800707AC: sw          $t3, 0x9C($a0)
    MEM_W(0X9C, ctx->r4) = ctx->r11;
    // 0x800707B0: bne         $at, $zero, L_800707C0
    if (ctx->r1 != 0) {
        // 0x800707B4: or          $v0, $t3, $zero
        ctx->r2 = ctx->r11 | 0;
            goto L_800707C0;
    }
    // 0x800707B4: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
    // 0x800707B8: slti        $at, $t3, 0xE7
    ctx->r1 = SIGNED(ctx->r11) < 0XE7 ? 1 : 0;
    // 0x800707BC: bne         $at, $zero, L_800707D0
    if (ctx->r1 != 0) {
        // 0x800707C0: negu        $t4, $v1
        ctx->r12 = SUB32(0, ctx->r3);
            goto L_800707D0;
    }
L_800707C0:
    // 0x800707C0: negu        $t4, $v1
    ctx->r12 = SUB32(0, ctx->r3);
    // 0x800707C4: addu        $t6, $v0, $t4
    ctx->r14 = ADD32(ctx->r2, ctx->r12);
    // 0x800707C8: sw          $t4, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r12;
    // 0x800707CC: sw          $t6, 0x9C($a0)
    MEM_W(0X9C, ctx->r4) = ctx->r14;
L_800707D0:
    // 0x800707D0: jr          $ra
    // 0x800707D4: nop

    return;
    // 0x800707D4: nop

;}
RECOMP_FUNC void func_800707D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800707D8: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x800707DC: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x800707E0: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x800707E4: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x800707E8: lui         $t8, 0x801B
    ctx->r24 = S32(0X801B << 16);
    // 0x800707EC: lh          $t8, 0x3F78($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X3F78);
    // 0x800707F0: ori         $t1, $t7, 0x1
    ctx->r9 = ctx->r15 | 0X1;
    // 0x800707F4: andi        $t9, $t8, 0x2
    ctx->r25 = ctx->r24 & 0X2;
    // 0x800707F8: beq         $t9, $zero, L_80070804
    if (ctx->r25 == 0) {
        // 0x800707FC: lui         $at, 0x4334
        ctx->r1 = S32(0X4334 << 16);
            goto L_80070804;
    }
    // 0x800707FC: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80070800: sw          $t1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r9;
L_80070804:
    // 0x80070804: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80070808: lw          $v1, 0x64($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X64);
    // 0x8007080C: lw          $t2, 0x9C($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X9C);
    // 0x80070810: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80070814: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80070818: lwc1        $f6, 0x1C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x8007081C: addu        $t3, $t2, $v1
    ctx->r11 = ADD32(ctx->r10, ctx->r3);
    // 0x80070820: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80070824: slti        $at, $t3, 0x78
    ctx->r1 = SIGNED(ctx->r11) < 0X78 ? 1 : 0;
    // 0x80070828: swc1        $f10, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f10.u32l;
    // 0x8007082C: sw          $t3, 0x9C($a0)
    MEM_W(0X9C, ctx->r4) = ctx->r11;
    // 0x80070830: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
    // 0x80070834: bne         $at, $zero, L_80070844
    if (ctx->r1 != 0) {
        // 0x80070838: swc1        $f4, 0x18($a0)
        MEM_W(0X18, ctx->r4) = ctx->f4.u32l;
            goto L_80070844;
    }
    // 0x80070838: swc1        $f4, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f4.u32l;
    // 0x8007083C: slti        $at, $t3, 0xE7
    ctx->r1 = SIGNED(ctx->r11) < 0XE7 ? 1 : 0;
    // 0x80070840: bne         $at, $zero, L_80070854
    if (ctx->r1 != 0) {
        // 0x80070844: negu        $t4, $v1
        ctx->r12 = SUB32(0, ctx->r3);
            goto L_80070854;
    }
L_80070844:
    // 0x80070844: negu        $t4, $v1
    ctx->r12 = SUB32(0, ctx->r3);
    // 0x80070848: addu        $t6, $v0, $t4
    ctx->r14 = ADD32(ctx->r2, ctx->r12);
    // 0x8007084C: sw          $t4, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r12;
    // 0x80070850: sw          $t6, 0x9C($a0)
    MEM_W(0X9C, ctx->r4) = ctx->r14;
L_80070854:
    // 0x80070854: jr          $ra
    // 0x80070858: nop

    return;
    // 0x80070858: nop

;}
RECOMP_FUNC void func_8007085C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007085C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80070860: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80070864: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x80070868: jal         0x80070490
    // 0x8007086C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_80070490(rdram, ctx);
        goto after_0;
    // 0x8007086C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80070870: lw          $t6, 0x68($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X68);
    // 0x80070874: addiu       $a2, $s0, 0xC
    ctx->r6 = ADD32(ctx->r16, 0XC);
    // 0x80070878: bne         $t6, $zero, L_80070904
    if (ctx->r14 != 0) {
        // 0x8007087C: addiu       $a3, $s0, 0x10
        ctx->r7 = ADD32(ctx->r16, 0X10);
            goto L_80070904;
    }
    // 0x8007087C: addiu       $a3, $s0, 0x10
    ctx->r7 = ADD32(ctx->r16, 0X10);
    // 0x80070880: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x80070884: lw          $a0, 0x64($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X64);
    // 0x80070888: lw          $a1, 0x6C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X6C);
    // 0x8007088C: ori         $t8, $t7, 0x4
    ctx->r24 = ctx->r15 | 0X4;
    // 0x80070890: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
    // 0x80070894: addiu       $t9, $s0, 0x14
    ctx->r25 = ADD32(ctx->r16, 0X14);
    // 0x80070898: addiu       $t0, $s0, 0x24
    ctx->r8 = ADD32(ctx->r16, 0X24);
    // 0x8007089C: addiu       $t1, $s0, 0x28
    ctx->r9 = ADD32(ctx->r16, 0X28);
    // 0x800708A0: addiu       $t2, $s0, 0x2C
    ctx->r10 = ADD32(ctx->r16, 0X2C);
    // 0x800708A4: addiu       $t3, $s0, 0x30
    ctx->r11 = ADD32(ctx->r16, 0X30);
    // 0x800708A8: addiu       $t4, $s0, 0x34
    ctx->r12 = ADD32(ctx->r16, 0X34);
    // 0x800708AC: addiu       $t5, $s0, 0x38
    ctx->r13 = ADD32(ctx->r16, 0X38);
    // 0x800708B0: sw          $t5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r13;
    // 0x800708B4: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
    // 0x800708B8: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x800708BC: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x800708C0: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x800708C4: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x800708C8: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x800708CC: jal         0x800638F0
    // 0x800708D0: sw          $a0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r4;
    func_800638F0(rdram, ctx);
        goto after_1;
    // 0x800708D0: sw          $a0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r4;
    after_1:
    // 0x800708D4: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x800708D8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800708DC: lw          $t6, 0x20($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X20);
    // 0x800708E0: nop

    // 0x800708E4: beq         $t6, $zero, L_800708F4
    if (ctx->r14 == 0) {
        // 0x800708E8: nop
    
            goto L_800708F4;
    }
    // 0x800708E8: nop

    // 0x800708EC: b           L_80070904
    // 0x800708F0: sw          $t7, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->r15;
        goto L_80070904;
    // 0x800708F0: sw          $t7, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->r15;
L_800708F4:
    // 0x800708F4: lw          $t8, 0x6C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X6C);
    // 0x800708F8: nop

    // 0x800708FC: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80070900: sw          $t9, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->r25;
L_80070904:
    // 0x80070904: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80070908: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x8007090C: jr          $ra
    // 0x80070910: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80070910: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80070914(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80070914: lw          $v0, 0x64($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X64);
    // 0x80070918: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8007091C: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80070920: ori         $t7, $t6, 0x4
    ctx->r15 = ctx->r14 | 0X4;
    // 0x80070924: swc1        $f4, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f4.u32l;
    // 0x80070928: lwc1        $f6, 0x10($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8007092C: nop

    // 0x80070930: swc1        $f6, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f6.u32l;
    // 0x80070934: lwc1        $f8, 0x14($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X14);
    // 0x80070938: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x8007093C: swc1        $f8, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f8.u32l;
    // 0x80070940: lwc1        $f10, 0x24($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X24);
    // 0x80070944: nop

    // 0x80070948: swc1        $f10, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f10.u32l;
    // 0x8007094C: lwc1        $f16, 0x28($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X28);
    // 0x80070950: nop

    // 0x80070954: swc1        $f16, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f16.u32l;
    // 0x80070958: lwc1        $f18, 0x2C($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X2C);
    // 0x8007095C: nop

    // 0x80070960: swc1        $f18, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f18.u32l;
    // 0x80070964: lwc1        $f4, 0x30($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X30);
    // 0x80070968: nop

    // 0x8007096C: swc1        $f4, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f4.u32l;
    // 0x80070970: lwc1        $f6, 0x34($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X34);
    // 0x80070974: nop

    // 0x80070978: swc1        $f6, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f6.u32l;
    // 0x8007097C: lwc1        $f8, 0x38($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X38);
    // 0x80070980: jr          $ra
    // 0x80070984: swc1        $f8, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f8.u32l;
    return;
    // 0x80070984: swc1        $f8, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_80070988(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80070988: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007098C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80070990: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80070994: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80070998: lbu         $t6, 0x8($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X8);
    // 0x8007099C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800709A0: andi        $t7, $t6, 0xFF01
    ctx->r15 = ctx->r14 & 0XFF01;
    // 0x800709A4: sb          $t7, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r15;
    // 0x800709A8: sb          $a3, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r7;
    // 0x800709AC: sb          $t8, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r24;
    // 0x800709B0: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x800709B4: lui         $t1, 0x800B
    ctx->r9 = S32(0X800B << 16);
    // 0x800709B8: addiu       $t1, $t1, -0x980
    ctx->r9 = ADD32(ctx->r9, -0X980);
    // 0x800709BC: sll         $t0, $t9, 3
    ctx->r8 = S32(ctx->r25 << 3);
    // 0x800709C0: addu        $v0, $t0, $t1
    ctx->r2 = ADD32(ctx->r8, ctx->r9);
    // 0x800709C4: lhu         $t2, 0x0($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X0);
    // 0x800709C8: lui         $t5, 0x800B
    ctx->r13 = S32(0X800B << 16);
    // 0x800709CC: sh          $t2, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r10;
    // 0x800709D0: lw          $t3, 0x4($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X4);
    // 0x800709D4: addiu       $t5, $t5, -0x8C8
    ctx->r13 = ADD32(ctx->r13, -0X8C8);
    // 0x800709D8: sw          $t3, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r11;
    // 0x800709DC: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x800709E0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x800709E4: slti        $at, $t4, 0xD
    ctx->r1 = SIGNED(ctx->r12) < 0XD ? 1 : 0;
    // 0x800709E8: bne         $at, $zero, L_80070A14
    if (ctx->r1 != 0) {
        // 0x800709EC: sltu        $at, $v0, $t5
        ctx->r1 = ctx->r2 < ctx->r13 ? 1 : 0;
            goto L_80070A14;
    }
    // 0x800709EC: sltu        $at, $v0, $t5
    ctx->r1 = ctx->r2 < ctx->r13 ? 1 : 0;
    // 0x800709F0: beq         $at, $zero, L_80070A14
    if (ctx->r1 == 0) {
        // 0x800709F4: nop
    
            goto L_80070A14;
    }
    // 0x800709F4: nop

    // 0x800709F8: lbu         $a2, 0x3($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X3);
    // 0x800709FC: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x80070A00: jal         0x8002135C
    // 0x80070A04: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8002135C(rdram, ctx);
        goto after_0;
    // 0x80070A04: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80070A08: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80070A0C: b           L_80070A2C
    // 0x80070A10: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
        goto L_80070A2C;
    // 0x80070A10: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
L_80070A14:
    // 0x80070A14: lbu         $a2, 0x3($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X3);
    // 0x80070A18: jal         0x8002135C
    // 0x80070A1C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8002135C(rdram, ctx);
        goto after_1;
    // 0x80070A1C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x80070A20: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80070A24: nop

    // 0x80070A28: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
L_80070A2C:
    // 0x80070A2C: lui         $t0, 0x801B
    ctx->r8 = S32(0X801B << 16);
    // 0x80070A30: sh          $t6, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r14;
    // 0x80070A34: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x80070A38: addiu       $t0, $t0, 0x3A68
    ctx->r8 = ADD32(ctx->r8, 0X3A68);
    // 0x80070A3C: sh          $t7, 0x1C($a0)
    MEM_H(0X1C, ctx->r4) = ctx->r15;
    // 0x80070A40: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80070A44: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80070A48: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80070A4C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80070A50: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80070A54: addu        $v0, $t9, $t0
    ctx->r2 = ADD32(ctx->r25, ctx->r8);
    // 0x80070A58: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x80070A5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80070A60: sw          $a0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r4;
    // 0x80070A64: sh          $zero, 0x0($v0)
    MEM_H(0X0, ctx->r2) = 0;
    // 0x80070A68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80070A6C: sw          $t1, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r9;
    // 0x80070A70: jr          $ra
    // 0x80070A74: sw          $t2, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r10;
    return;
    // 0x80070A74: sw          $t2, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r10;
;}
RECOMP_FUNC void func_80070A78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80070A78: lbu         $t6, 0x8($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X8);
    // 0x80070A7C: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x80070A80: andi        $t7, $t6, 0xFF01
    ctx->r15 = ctx->r14 & 0XFF01;
    // 0x80070A84: ori         $t8, $t7, 0x4
    ctx->r24 = ctx->r15 | 0X4;
    // 0x80070A88: addiu       $t9, $zero, 0x7F
    ctx->r25 = ADD32(0, 0X7F);
    // 0x80070A8C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80070A90: sb          $t8, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r24;
    // 0x80070A94: sb          $t0, 0xE($a0)
    MEM_B(0XE, ctx->r4) = ctx->r8;
    // 0x80070A98: sb          $t0, 0xF($a0)
    MEM_B(0XF, ctx->r4) = ctx->r8;
    // 0x80070A9C: sb          $t0, 0x10($a0)
    MEM_B(0X10, ctx->r4) = ctx->r8;
    // 0x80070AA0: sb          $t9, 0x11($a0)
    MEM_B(0X11, ctx->r4) = ctx->r25;
    // 0x80070AA4: sb          $a3, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r7;
    // 0x80070AA8: sb          $t1, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r9;
    // 0x80070AAC: lw          $t2, 0x10($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X10);
    // 0x80070AB0: lui         $t4, 0x800B
    ctx->r12 = S32(0X800B << 16);
    // 0x80070AB4: addiu       $t4, $t4, -0x980
    ctx->r12 = ADD32(ctx->r12, -0X980);
    // 0x80070AB8: sll         $t3, $t2, 3
    ctx->r11 = S32(ctx->r10 << 3);
    // 0x80070ABC: addu        $v0, $t3, $t4
    ctx->r2 = ADD32(ctx->r11, ctx->r12);
    // 0x80070AC0: lhu         $t5, 0x0($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X0);
    // 0x80070AC4: lui         $t9, 0x801B
    ctx->r25 = S32(0X801B << 16);
    // 0x80070AC8: sh          $t5, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r13;
    // 0x80070ACC: lw          $t6, 0x4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X4);
    // 0x80070AD0: sh          $a1, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r5;
    // 0x80070AD4: sh          $a2, 0x1C($a0)
    MEM_H(0X1C, ctx->r4) = ctx->r6;
    // 0x80070AD8: sw          $t6, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r14;
    // 0x80070ADC: lw          $t7, 0x14($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X14);
    // 0x80070AE0: addiu       $t9, $t9, 0x3A68
    ctx->r25 = ADD32(ctx->r25, 0X3A68);
    // 0x80070AE4: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80070AE8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80070AEC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80070AF0: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
    // 0x80070AF4: sw          $a1, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r5;
    // 0x80070AF8: sw          $a2, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r6;
    // 0x80070AFC: sw          $a0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r4;
    // 0x80070B00: jr          $ra
    // 0x80070B04: sh          $zero, 0x0($v1)
    MEM_H(0X0, ctx->r3) = 0;
    return;
    // 0x80070B04: sh          $zero, 0x0($v1)
    MEM_H(0X0, ctx->r3) = 0;
;}
RECOMP_FUNC void func_80070B08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80070B08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80070B0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80070B10: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80070B14: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80070B18: lbu         $t6, 0x8($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X8);
    // 0x80070B1C: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    // 0x80070B20: andi        $t7, $t6, 0xFF01
    ctx->r15 = ctx->r14 & 0XFF01;
    // 0x80070B24: ori         $t8, $t7, 0x4
    ctx->r24 = ctx->r15 | 0X4;
    // 0x80070B28: addiu       $t9, $zero, 0xC8
    ctx->r25 = ADD32(0, 0XC8);
    // 0x80070B2C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80070B30: sb          $t8, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r24;
    // 0x80070B34: sb          $v1, 0xE($a0)
    MEM_B(0XE, ctx->r4) = ctx->r3;
    // 0x80070B38: sb          $v1, 0xF($a0)
    MEM_B(0XF, ctx->r4) = ctx->r3;
    // 0x80070B3C: sb          $v1, 0x10($a0)
    MEM_B(0X10, ctx->r4) = ctx->r3;
    // 0x80070B40: sb          $t9, 0x11($a0)
    MEM_B(0X11, ctx->r4) = ctx->r25;
    // 0x80070B44: sb          $a3, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r7;
    // 0x80070B48: sb          $t0, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r8;
    // 0x80070B4C: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80070B50: lui         $t3, 0x800B
    ctx->r11 = S32(0X800B << 16);
    // 0x80070B54: addiu       $t3, $t3, -0x980
    ctx->r11 = ADD32(ctx->r11, -0X980);
    // 0x80070B58: sll         $t2, $t1, 3
    ctx->r10 = S32(ctx->r9 << 3);
    // 0x80070B5C: addu        $v0, $t2, $t3
    ctx->r2 = ADD32(ctx->r10, ctx->r11);
    // 0x80070B60: lhu         $t4, 0x0($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X0);
    // 0x80070B64: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80070B68: sh          $t4, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r12;
    // 0x80070B6C: lw          $t5, 0x4($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X4);
    // 0x80070B70: nop

    // 0x80070B74: sw          $t5, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r13;
    // 0x80070B78: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80070B7C: nop

    // 0x80070B80: sh          $t6, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r14;
    // 0x80070B84: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x80070B88: nop

    // 0x80070B8C: sh          $t7, 0x1C($a0)
    MEM_H(0X1C, ctx->r4) = ctx->r15;
    // 0x80070B90: lbu         $a2, 0x3($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X3);
    // 0x80070B94: jal         0x8002135C
    // 0x80070B98: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8002135C(rdram, ctx);
        goto after_0;
    // 0x80070B98: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80070B9C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80070BA0: lui         $t0, 0x801B
    ctx->r8 = S32(0X801B << 16);
    // 0x80070BA4: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80070BA8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80070BAC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80070BB0: addiu       $t0, $t0, 0x3A68
    ctx->r8 = ADD32(ctx->r8, 0X3A68);
    // 0x80070BB4: addu        $v0, $t9, $t0
    ctx->r2 = ADD32(ctx->r25, ctx->r8);
    // 0x80070BB8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80070BBC: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80070BC0: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x80070BC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80070BC8: sh          $zero, 0x0($v0)
    MEM_H(0X0, ctx->r2) = 0;
    // 0x80070BCC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80070BD0: sw          $a0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r4;
    // 0x80070BD4: sw          $t1, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r9;
    // 0x80070BD8: jr          $ra
    // 0x80070BDC: sw          $t2, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r10;
    return;
    // 0x80070BDC: sw          $t2, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r10;
;}
RECOMP_FUNC void func_80070BE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80070BE0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80070BE4: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80070BE8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80070BEC: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80070BF0: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x80070BF4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80070BF8: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x80070BFC: lh          $a2, 0x2A($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X2A);
    // 0x80070C00: lh          $a1, 0x26($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X26);
    // 0x80070C04: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80070C08: jal         0x8002FC74
    // 0x80070C0C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_8002FC74(rdram, ctx);
        goto after_0;
    // 0x80070C0C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x80070C10: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80070C14: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80070C18: sb          $t7, 0x15($a0)
    MEM_B(0X15, ctx->r4) = ctx->r15;
    // 0x80070C1C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80070C20: lui         $t1, 0x801B
    ctx->r9 = S32(0X801B << 16);
    // 0x80070C24: sb          $t8, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r24;
    // 0x80070C28: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x80070C2C: addiu       $t1, $t1, 0x3A68
    ctx->r9 = ADD32(ctx->r9, 0X3A68);
    // 0x80070C30: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80070C34: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80070C38: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80070C3C: addu        $v0, $t0, $t1
    ctx->r2 = ADD32(ctx->r8, ctx->r9);
    // 0x80070C40: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80070C44: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80070C48: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80070C4C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80070C50: sh          $t4, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r12;
    // 0x80070C54: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80070C58: sw          $a0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r4;
    // 0x80070C5C: sw          $t2, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r10;
    // 0x80070C60: jr          $ra
    // 0x80070C64: sw          $t3, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r11;
    return;
    // 0x80070C64: sw          $t3, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r11;
;}
RECOMP_FUNC void func_80070C68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80070C68: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80070C6C: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80070C70: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80070C74: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80070C78: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x80070C7C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80070C80: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x80070C84: lh          $a2, 0x2A($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X2A);
    // 0x80070C88: lh          $a1, 0x26($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X26);
    // 0x80070C8C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80070C90: jal         0x8002FB30
    // 0x80070C94: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_8002FB30(rdram, ctx);
        goto after_0;
    // 0x80070C94: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x80070C98: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80070C9C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80070CA0: lui         $t0, 0x801B
    ctx->r8 = S32(0X801B << 16);
    // 0x80070CA4: sb          $t7, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r15;
    // 0x80070CA8: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x80070CAC: addiu       $t0, $t0, 0x3A68
    ctx->r8 = ADD32(ctx->r8, 0X3A68);
    // 0x80070CB0: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80070CB4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80070CB8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80070CBC: addu        $v0, $t9, $t0
    ctx->r2 = ADD32(ctx->r25, ctx->r8);
    // 0x80070CC0: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80070CC4: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80070CC8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80070CCC: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80070CD0: sh          $t3, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r11;
    // 0x80070CD4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80070CD8: sw          $a0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r4;
    // 0x80070CDC: sw          $t1, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r9;
    // 0x80070CE0: jr          $ra
    // 0x80070CE4: sw          $t2, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r10;
    return;
    // 0x80070CE4: sw          $t2, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r10;
;}
RECOMP_FUNC void func_80070CE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80070CE8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80070CEC: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80070CF0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80070CF4: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80070CF8: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x80070CFC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80070D00: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x80070D04: lh          $a2, 0x2A($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X2A);
    // 0x80070D08: lh          $a1, 0x26($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X26);
    // 0x80070D0C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80070D10: jal         0x8002FC08
    // 0x80070D14: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_8002FC08(rdram, ctx);
        goto after_0;
    // 0x80070D14: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x80070D18: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80070D1C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80070D20: sb          $t7, 0x15($a0)
    MEM_B(0X15, ctx->r4) = ctx->r15;
    // 0x80070D24: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80070D28: lui         $t1, 0x801B
    ctx->r9 = S32(0X801B << 16);
    // 0x80070D2C: sb          $t8, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r24;
    // 0x80070D30: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x80070D34: addiu       $t1, $t1, 0x3A68
    ctx->r9 = ADD32(ctx->r9, 0X3A68);
    // 0x80070D38: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80070D3C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80070D40: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80070D44: addu        $v0, $t0, $t1
    ctx->r2 = ADD32(ctx->r8, ctx->r9);
    // 0x80070D48: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80070D4C: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80070D50: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80070D54: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80070D58: sh          $t4, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r12;
    // 0x80070D5C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80070D60: sw          $a0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r4;
    // 0x80070D64: sw          $t2, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r10;
    // 0x80070D68: jr          $ra
    // 0x80070D6C: sw          $t3, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r11;
    return;
    // 0x80070D6C: sw          $t3, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r11;
;}
RECOMP_FUNC void func_80070D70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80070D70: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80070D74: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80070D78: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80070D7C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80070D80: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x80070D84: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80070D88: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x80070D8C: lh          $a2, 0x2A($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X2A);
    // 0x80070D90: lh          $a1, 0x26($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X26);
    // 0x80070D94: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80070D98: jal         0x8002FB9C
    // 0x80070D9C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_8002FB9C(rdram, ctx);
        goto after_0;
    // 0x80070D9C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x80070DA0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80070DA4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80070DA8: sb          $t7, 0x15($a0)
    MEM_B(0X15, ctx->r4) = ctx->r15;
    // 0x80070DAC: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80070DB0: lui         $t1, 0x801B
    ctx->r9 = S32(0X801B << 16);
    // 0x80070DB4: sb          $t8, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r24;
    // 0x80070DB8: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x80070DBC: addiu       $t1, $t1, 0x3A68
    ctx->r9 = ADD32(ctx->r9, 0X3A68);
    // 0x80070DC0: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80070DC4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80070DC8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80070DCC: addu        $v0, $t0, $t1
    ctx->r2 = ADD32(ctx->r8, ctx->r9);
    // 0x80070DD0: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80070DD4: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80070DD8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80070DDC: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80070DE0: sh          $t4, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r12;
    // 0x80070DE4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80070DE8: sw          $a0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r4;
    // 0x80070DEC: sw          $t2, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r10;
    // 0x80070DF0: jr          $ra
    // 0x80070DF4: sw          $t3, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r11;
    return;
    // 0x80070DF4: sw          $t3, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r11;
;}
RECOMP_FUNC void func_80070DF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80070DF8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80070DFC: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80070E00: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x80070E04: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80070E08: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80070E0C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80070E10: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80070E14: bne         $t6, $at, L_80070E50
    if (ctx->r14 != ctx->r1) {
        // 0x80070E18: sw          $a3, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r7;
            goto L_80070E50;
    }
    // 0x80070E18: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x80070E1C: lh          $a1, 0x2E($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X2E);
    // 0x80070E20: lh          $a2, 0x32($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X32);
    // 0x80070E24: lui         $a3, 0x8029
    ctx->r7 = S32(0X8029 << 16);
    // 0x80070E28: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
    // 0x80070E2C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80070E30: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x80070E34: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80070E38: addiu       $a3, $a3, -0x7AB4
    ctx->r7 = ADD32(ctx->r7, -0X7AB4);
    // 0x80070E3C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80070E40: jal         0x8002F528
    // 0x80070E44: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_8002F528(rdram, ctx);
        goto after_0;
    // 0x80070E44: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x80070E48: b           L_80070E70
    // 0x80070E4C: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
        goto L_80070E70;
    // 0x80070E4C: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
L_80070E50:
    // 0x80070E50: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x80070E54: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80070E58: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x80070E5C: lbu         $a2, 0x3F($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X3F);
    // 0x80070E60: lh          $a3, 0x2E($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X2E);
    // 0x80070E64: jal         0x8006ED60
    // 0x80070E68: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    func_8006ED60(rdram, ctx);
        goto after_1;
    // 0x80070E68: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_1:
    // 0x80070E6C: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
L_80070E70:
    // 0x80070E70: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80070E74: lui         $t4, 0x801B
    ctx->r12 = S32(0X801B << 16);
    // 0x80070E78: sb          $t0, 0x5($t1)
    MEM_B(0X5, ctx->r9) = ctx->r8;
    // 0x80070E7C: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x80070E80: addiu       $t4, $t4, 0x3A68
    ctx->r12 = ADD32(ctx->r12, 0X3A68);
    // 0x80070E84: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80070E88: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80070E8C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80070E90: addu        $v0, $t3, $t4
    ctx->r2 = ADD32(ctx->r11, ctx->r12);
    // 0x80070E94: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80070E98: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80070E9C: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80070EA0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80070EA4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80070EA8: sh          $t8, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r24;
    // 0x80070EAC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80070EB0: sw          $t5, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r13;
    // 0x80070EB4: sw          $t6, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r14;
    // 0x80070EB8: jr          $ra
    // 0x80070EBC: sw          $t7, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r15;
    return;
    // 0x80070EBC: sw          $t7, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r15;
;}
RECOMP_FUNC void func_80070EC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80070EC0: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x80070EC4: addiu       $t7, $t7, -0x5570
    ctx->r15 = ADD32(ctx->r15, -0X5570);
    // 0x80070EC8: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80070ECC: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x80070ED0: lh          $v0, 0x0($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X0);
    // 0x80070ED4: lh          $a3, 0x2($v1)
    ctx->r7 = MEM_H(ctx->r3, 0X2);
    // 0x80070ED8: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x80070EDC: slt         $at, $a3, $v0
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80070EE0: bne         $at, $zero, L_80070F6C
    if (ctx->r1 != 0) {
        // 0x80070EE4: addu        $t8, $t8, $v0
        ctx->r24 = ADD32(ctx->r24, ctx->r2);
            goto L_80070F6C;
    }
    // 0x80070EE4: addu        $t8, $t8, $v0
    ctx->r24 = ADD32(ctx->r24, ctx->r2);
    // 0x80070EE8: lui         $t9, 0x801B
    ctx->r25 = S32(0X801B << 16);
    // 0x80070EEC: sll         $t0, $a3, 2
    ctx->r8 = S32(ctx->r7 << 2);
    // 0x80070EF0: addu        $t0, $t0, $a3
    ctx->r8 = ADD32(ctx->r8, ctx->r7);
    // 0x80070EF4: addiu       $t9, $t9, 0x3A68
    ctx->r25 = ADD32(ctx->r25, 0X3A68);
    // 0x80070EF8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80070EFC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80070F00: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
    // 0x80070F04: addu        $a0, $t0, $t9
    ctx->r4 = ADD32(ctx->r8, ctx->r25);
L_80070F08:
    // 0x80070F08: lh          $t1, 0x0($v1)
    ctx->r9 = MEM_H(ctx->r3, 0X0);
    // 0x80070F0C: nop

    // 0x80070F10: bne         $t1, $zero, L_80070F3C
    if (ctx->r9 != 0) {
        // 0x80070F14: nop
    
            goto L_80070F3C;
    }
    // 0x80070F14: nop

    // 0x80070F18: lw          $t2, 0xC($v1)
    ctx->r10 = MEM_W(ctx->r3, 0XC);
    // 0x80070F1C: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x80070F20: addu        $t3, $t2, $a1
    ctx->r11 = ADD32(ctx->r10, ctx->r5);
    // 0x80070F24: sh          $t3, 0x18($v0)
    MEM_H(0X18, ctx->r2) = ctx->r11;
    // 0x80070F28: lw          $t4, 0x10($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X10);
    // 0x80070F2C: nop

    // 0x80070F30: addu        $t5, $t4, $a2
    ctx->r13 = ADD32(ctx->r12, ctx->r6);
    // 0x80070F34: b           L_80070F5C
    // 0x80070F38: sh          $t5, 0x1C($v0)
    MEM_H(0X1C, ctx->r2) = ctx->r13;
        goto L_80070F5C;
    // 0x80070F38: sh          $t5, 0x1C($v0)
    MEM_H(0X1C, ctx->r2) = ctx->r13;
L_80070F3C:
    // 0x80070F3C: lw          $t6, 0xC($v1)
    ctx->r14 = MEM_W(ctx->r3, 0XC);
    // 0x80070F40: lw          $v0, 0x8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X8);
    // 0x80070F44: addu        $t7, $t6, $a1
    ctx->r15 = ADD32(ctx->r14, ctx->r5);
    // 0x80070F48: sh          $t7, 0xA($v0)
    MEM_H(0XA, ctx->r2) = ctx->r15;
    // 0x80070F4C: lw          $t8, 0x10($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X10);
    // 0x80070F50: nop

    // 0x80070F54: addu        $t0, $t8, $a2
    ctx->r8 = ADD32(ctx->r24, ctx->r6);
    // 0x80070F58: sh          $t0, 0xC($v0)
    MEM_H(0XC, ctx->r2) = ctx->r8;
L_80070F5C:
    // 0x80070F5C: addiu       $v1, $v1, 0x14
    ctx->r3 = ADD32(ctx->r3, 0X14);
    // 0x80070F60: sltu        $at, $a0, $v1
    ctx->r1 = ctx->r4 < ctx->r3 ? 1 : 0;
    // 0x80070F64: beq         $at, $zero, L_80070F08
    if (ctx->r1 == 0) {
        // 0x80070F68: nop
    
            goto L_80070F08;
    }
    // 0x80070F68: nop

L_80070F6C:
    // 0x80070F6C: jr          $ra
    // 0x80070F70: nop

    return;
    // 0x80070F70: nop

;}
RECOMP_FUNC void func_80070F74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80070F74: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80070F78: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80070F7C: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x80070F80: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80070F84: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80070F88: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80070F8C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80070F90: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80070F94: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80070F98: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80070F9C: jal         0x8006FF28
    // 0x80070FA0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_8006FF28(rdram, ctx);
        goto after_0;
    // 0x80070FA0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x80070FA4: jal         0x8006FF4C
    // 0x80070FA8: nop

    func_8006FF4C(rdram, ctx);
        goto after_1;
    // 0x80070FA8: nop

    after_1:
    // 0x80070FAC: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80070FB0: addiu       $a0, $a0, -0x1E98
    ctx->r4 = ADD32(ctx->r4, -0X1E98);
    // 0x80070FB4: jal         0x800293DC
    // 0x80070FB8: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    func_800293DC(rdram, ctx);
        goto after_2;
    // 0x80070FB8: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_2:
    // 0x80070FBC: lw          $s0, 0x14($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X14);
    // 0x80070FC0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80070FC4: beq         $s0, $at, L_8007113C
    if (ctx->r16 == ctx->r1) {
        // 0x80070FC8: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_8007113C;
    }
    // 0x80070FC8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80070FCC: lui         $fp, 0x800B
    ctx->r30 = S32(0X800B << 16);
    // 0x80070FD0: lui         $s6, 0x8011
    ctx->r22 = S32(0X8011 << 16);
    // 0x80070FD4: lui         $s5, 0x800B
    ctx->r21 = S32(0X800B << 16);
    // 0x80070FD8: lui         $s4, 0x800B
    ctx->r20 = S32(0X800B << 16);
    // 0x80070FDC: lui         $s3, 0x800B
    ctx->r19 = S32(0X800B << 16);
    // 0x80070FE0: lui         $s2, 0x8012
    ctx->r18 = S32(0X8012 << 16);
    // 0x80070FE4: addiu       $s2, $s2, -0x32B0
    ctx->r18 = ADD32(ctx->r18, -0X32B0);
    // 0x80070FE8: addiu       $s3, $s3, -0x54C
    ctx->r19 = ADD32(ctx->r19, -0X54C);
    // 0x80070FEC: addiu       $s4, $s4, -0x594
    ctx->r20 = ADD32(ctx->r20, -0X594);
    // 0x80070FF0: addiu       $s5, $s5, -0x554
    ctx->r21 = ADD32(ctx->r21, -0X554);
    // 0x80070FF4: addiu       $s6, $s6, -0x2F80
    ctx->r22 = ADD32(ctx->r22, -0X2F80);
    // 0x80070FF8: addiu       $fp, $fp, -0x52C
    ctx->r30 = ADD32(ctx->r30, -0X52C);
    // 0x80070FFC: addiu       $s7, $zero, 0x3398
    ctx->r23 = ADD32(0, 0X3398);
L_80071000:
    // 0x80071000: sll         $t6, $s1, 3
    ctx->r14 = S32(ctx->r17 << 3);
    // 0x80071004: addu        $v0, $s4, $t6
    ctx->r2 = ADD32(ctx->r20, ctx->r14);
    // 0x80071008: lhu         $a1, 0x4($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X4);
    // 0x8007100C: lbu         $a2, 0x6($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X6);
    // 0x80071010: lw          $a3, 0x0($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X0);
    // 0x80071014: jal         0x8004CD24
    // 0x80071018: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8004CD24(rdram, ctx);
        goto after_3;
    // 0x80071018: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8007101C: addu        $t7, $s5, $s1
    ctx->r15 = ADD32(ctx->r21, ctx->r17);
    // 0x80071020: lbu         $t8, 0x0($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X0);
    // 0x80071024: nop

    // 0x80071028: sh          $t8, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r24;
    // 0x8007102C: lb          $t9, 0xF($s2)
    ctx->r25 = MEM_B(ctx->r18, 0XF);
    // 0x80071030: nop

    // 0x80071034: multu       $t9, $s7
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r23)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80071038: mflo        $t0
    ctx->r8 = lo;
    // 0x8007103C: addu        $t1, $s6, $t0
    ctx->r9 = ADD32(ctx->r22, ctx->r8);
    // 0x80071040: lb          $a0, 0x1($t1)
    ctx->r4 = MEM_B(ctx->r9, 0X1);
    // 0x80071044: jal         0x80049A4C
    // 0x80071048: nop

    func_80049A4C(rdram, ctx);
        goto after_4;
    // 0x80071048: nop

    after_4:
    // 0x8007104C: bne         $v0, $zero, L_8007106C
    if (ctx->r2 != 0) {
        // 0x80071050: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8007106C;
    }
    // 0x80071050: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80071054: addu        $t2, $fp, $s1
    ctx->r10 = ADD32(ctx->r30, ctx->r17);
    // 0x80071058: lbu         $a2, 0x0($t2)
    ctx->r6 = MEM_BU(ctx->r10, 0X0);
    // 0x8007105C: jal         0x8002135C
    // 0x80071060: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_8002135C(rdram, ctx);
        goto after_5;
    // 0x80071060: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_5:
    // 0x80071064: b           L_80071128
    // 0x80071068: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
        goto L_80071128;
    // 0x80071068: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_8007106C:
    // 0x8007106C: lbu         $v0, 0xC($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XC);
    // 0x80071070: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80071074: beq         $v0, $at, L_800710A8
    if (ctx->r2 == ctx->r1) {
        // 0x80071078: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800710A8;
    }
    // 0x80071078: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8007107C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80071080: beq         $v0, $at, L_800710C0
    if (ctx->r2 == ctx->r1) {
        // 0x80071084: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800710C0;
    }
    // 0x80071084: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80071088: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8007108C: beq         $v0, $at, L_800710DC
    if (ctx->r2 == ctx->r1) {
        // 0x80071090: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800710DC;
    }
    // 0x80071090: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80071094: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80071098: beq         $v0, $at, L_800710F8
    if (ctx->r2 == ctx->r1) {
        // 0x8007109C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800710F8;
    }
    // 0x8007109C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800710A0: b           L_80071114
    // 0x800710A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80071114;
    // 0x800710A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_800710A8:
    // 0x800710A8: addu        $t3, $s3, $s1
    ctx->r11 = ADD32(ctx->r19, ctx->r17);
    // 0x800710AC: lbu         $a2, 0x0($t3)
    ctx->r6 = MEM_BU(ctx->r11, 0X0);
    // 0x800710B0: jal         0x8002135C
    // 0x800710B4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_8002135C(rdram, ctx);
        goto after_6;
    // 0x800710B4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_6:
    // 0x800710B8: b           L_80071128
    // 0x800710BC: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
        goto L_80071128;
    // 0x800710BC: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_800710C0:
    // 0x800710C0: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x800710C4: addu        $a2, $a2, $s1
    ctx->r6 = ADD32(ctx->r6, ctx->r17);
    // 0x800710C8: lbu         $a2, -0x544($a2)
    ctx->r6 = MEM_BU(ctx->r6, -0X544);
    // 0x800710CC: jal         0x8002135C
    // 0x800710D0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_8002135C(rdram, ctx);
        goto after_7;
    // 0x800710D0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_7:
    // 0x800710D4: b           L_80071128
    // 0x800710D8: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
        goto L_80071128;
    // 0x800710D8: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_800710DC:
    // 0x800710DC: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x800710E0: addu        $a2, $a2, $s1
    ctx->r6 = ADD32(ctx->r6, ctx->r17);
    // 0x800710E4: lbu         $a2, -0x53C($a2)
    ctx->r6 = MEM_BU(ctx->r6, -0X53C);
    // 0x800710E8: jal         0x8002135C
    // 0x800710EC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_8002135C(rdram, ctx);
        goto after_8;
    // 0x800710EC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_8:
    // 0x800710F0: b           L_80071128
    // 0x800710F4: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
        goto L_80071128;
    // 0x800710F4: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_800710F8:
    // 0x800710F8: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x800710FC: addu        $a2, $a2, $s1
    ctx->r6 = ADD32(ctx->r6, ctx->r17);
    // 0x80071100: lbu         $a2, -0x534($a2)
    ctx->r6 = MEM_BU(ctx->r6, -0X534);
    // 0x80071104: jal         0x8002135C
    // 0x80071108: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_8002135C(rdram, ctx);
        goto after_9;
    // 0x80071108: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_9:
    // 0x8007110C: b           L_80071128
    // 0x80071110: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
        goto L_80071128;
    // 0x80071110: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_80071114:
    // 0x80071114: addu        $t4, $s3, $s1
    ctx->r12 = ADD32(ctx->r19, ctx->r17);
    // 0x80071118: lbu         $a2, 0x0($t4)
    ctx->r6 = MEM_BU(ctx->r12, 0X0);
    // 0x8007111C: jal         0x8002135C
    // 0x80071120: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_8002135C(rdram, ctx);
        goto after_10;
    // 0x80071120: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_10:
    // 0x80071124: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_80071128:
    // 0x80071128: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8007112C: andi        $t5, $s1, 0xFF
    ctx->r13 = ctx->r17 & 0XFF;
    // 0x80071130: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80071134: bne         $s0, $at, L_80071000
    if (ctx->r16 != ctx->r1) {
        // 0x80071138: or          $s1, $t5, $zero
        ctx->r17 = ctx->r13 | 0;
            goto L_80071000;
    }
    // 0x80071138: or          $s1, $t5, $zero
    ctx->r17 = ctx->r13 | 0;
L_8007113C:
    // 0x8007113C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80071140: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80071144: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80071148: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8007114C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80071150: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80071154: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80071158: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8007115C: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80071160: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80071164: jr          $ra
    // 0x80071168: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80071168: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8007116C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007116C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80071170: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80071174: jal         0x80070F74
    // 0x80071178: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    func_80070F74(rdram, ctx);
        goto after_0;
    // 0x80071178: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_0:
    // 0x8007117C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80071180: jal         0x8002A7B0
    // 0x80071184: addiu       $a1, $zero, 0x46
    ctx->r5 = ADD32(0, 0X46);
    func_8002A7B0(rdram, ctx);
        goto after_1;
    // 0x80071184: addiu       $a1, $zero, 0x46
    ctx->r5 = ADD32(0, 0X46);
    after_1:
    // 0x80071188: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x8007118C: lh          $t6, 0x3A08($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X3A08);
    // 0x80071190: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x80071194: addiu       $t7, $t6, 0x4B
    ctx->r15 = ADD32(ctx->r14, 0X4B);
    // 0x80071198: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8007119C: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x800711A0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800711A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800711A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800711AC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x800711B0: jal         0x80070B08
    // 0x800711B4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    func_80070B08(rdram, ctx);
        goto after_2;
    // 0x800711B4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_2:
    // 0x800711B8: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x800711BC: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x800711C0: addiu       $t0, $zero, 0xB4
    ctx->r8 = ADD32(0, 0XB4);
    // 0x800711C4: sh          $t9, 0x6($v1)
    MEM_H(0X6, ctx->r3) = ctx->r25;
    // 0x800711C8: sb          $t0, 0x11($v1)
    MEM_B(0X11, ctx->r3) = ctx->r8;
    // 0x800711CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800711D0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800711D4: jr          $ra
    // 0x800711D8: nop

    return;
    // 0x800711D8: nop

;}
RECOMP_FUNC void func_800711DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800711DC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800711E0: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x800711E4: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x800711E8: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x800711EC: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x800711F0: jal         0x8002A7B0
    // 0x800711F4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8002A7B0(rdram, ctx);
        goto after_0;
    // 0x800711F4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x800711F8: lui         $s2, 0x801B
    ctx->r18 = S32(0X801B << 16);
    // 0x800711FC: addiu       $s2, $s2, 0x3A08
    ctx->r18 = ADD32(ctx->r18, 0X3A08);
    // 0x80071200: lh          $t6, 0x4($s2)
    ctx->r14 = MEM_H(ctx->r18, 0X4);
    // 0x80071204: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80071208: addiu       $t7, $t6, 0x51
    ctx->r15 = ADD32(ctx->r14, 0X51);
    // 0x8007120C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80071210: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80071214: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80071218: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8007121C: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    // 0x80071220: jal         0x80070988
    // 0x80071224: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_80070988(rdram, ctx);
        goto after_1;
    // 0x80071224: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_1:
    // 0x80071228: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
    // 0x8007122C: lh          $t8, 0x24($s2)
    ctx->r24 = MEM_H(ctx->r18, 0X24);
    // 0x80071230: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80071234: addiu       $t9, $t8, 0x51
    ctx->r25 = ADD32(ctx->r24, 0X51);
    // 0x80071238: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x8007123C: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x80071240: addiu       $a1, $zero, 0xD0
    ctx->r5 = ADD32(0, 0XD0);
    // 0x80071244: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80071248: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    // 0x8007124C: jal         0x80070988
    // 0x80071250: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80070988(rdram, ctx);
        goto after_2;
    // 0x80071250: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
    // 0x80071254: lhu         $t1, 0xA($s2)
    ctx->r9 = MEM_HU(ctx->r18, 0XA);
    // 0x80071258: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8007125C: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x80071260: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x80071264: lui         $s0, 0x8011
    ctx->r16 = S32(0X8011 << 16);
    // 0x80071268: addiu       $s0, $s0, -0x3868
    ctx->r16 = ADD32(ctx->r16, -0X3868);
    // 0x8007126C: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x80071270: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x80071274: addiu       $a0, $a0, -0x3888
    ctx->r4 = ADD32(ctx->r4, -0X3888);
    // 0x80071278: addiu       $a1, $zero, 0x36
    ctx->r5 = ADD32(0, 0X36);
    // 0x8007127C: addiu       $a2, $zero, 0x62
    ctx->r6 = ADD32(0, 0X62);
    // 0x80071280: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    // 0x80071284: jal         0x80070BE0
    // 0x80071288: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    func_80070BE0(rdram, ctx);
        goto after_3;
    // 0x80071288: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    after_3:
    // 0x8007128C: lhu         $t4, 0xE($s2)
    ctx->r12 = MEM_HU(ctx->r18, 0XE);
    // 0x80071290: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80071294: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x80071298: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x8007129C: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x800712A0: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x800712A4: addiu       $s0, $s0, 0x20
    ctx->r16 = ADD32(ctx->r16, 0X20);
    // 0x800712A8: addiu       $a1, $zero, 0x36
    ctx->r5 = ADD32(0, 0X36);
    // 0x800712AC: addiu       $a2, $zero, 0x86
    ctx->r6 = ADD32(0, 0X86);
    // 0x800712B0: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    // 0x800712B4: jal         0x80070BE0
    // 0x800712B8: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    func_80070BE0(rdram, ctx);
        goto after_4;
    // 0x800712B8: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    after_4:
    // 0x800712BC: lhu         $t7, 0x12($s2)
    ctx->r15 = MEM_HU(ctx->r18, 0X12);
    // 0x800712C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800712C4: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x800712C8: addiu       $t9, $zero, 0x6
    ctx->r25 = ADD32(0, 0X6);
    // 0x800712CC: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x800712D0: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x800712D4: addiu       $s0, $s0, 0x20
    ctx->r16 = ADD32(ctx->r16, 0X20);
    // 0x800712D8: addiu       $a1, $zero, 0x36
    ctx->r5 = ADD32(0, 0X36);
    // 0x800712DC: addiu       $a2, $zero, 0xAA
    ctx->r6 = ADD32(0, 0XAA);
    // 0x800712E0: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    // 0x800712E4: jal         0x80070BE0
    // 0x800712E8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    func_80070BE0(rdram, ctx);
        goto after_5;
    // 0x800712E8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_5:
    // 0x800712EC: lhu         $t0, 0x2A($s2)
    ctx->r8 = MEM_HU(ctx->r18, 0X2A);
    // 0x800712F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800712F4: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x800712F8: addiu       $t2, $zero, 0x7
    ctx->r10 = ADD32(0, 0X7);
    // 0x800712FC: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x80071300: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x80071304: addiu       $s0, $s0, 0x20
    ctx->r16 = ADD32(ctx->r16, 0X20);
    // 0x80071308: addiu       $a1, $zero, 0xF6
    ctx->r5 = ADD32(0, 0XF6);
    // 0x8007130C: addiu       $a2, $zero, 0x62
    ctx->r6 = ADD32(0, 0X62);
    // 0x80071310: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    // 0x80071314: jal         0x80070BE0
    // 0x80071318: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    func_80070BE0(rdram, ctx);
        goto after_6;
    // 0x80071318: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_6:
    // 0x8007131C: lhu         $t3, 0x2E($s2)
    ctx->r11 = MEM_HU(ctx->r18, 0X2E);
    // 0x80071320: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80071324: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x80071328: addiu       $t5, $zero, 0x8
    ctx->r13 = ADD32(0, 0X8);
    // 0x8007132C: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x80071330: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x80071334: addiu       $s0, $s0, 0x20
    ctx->r16 = ADD32(ctx->r16, 0X20);
    // 0x80071338: addiu       $a1, $zero, 0xF6
    ctx->r5 = ADD32(0, 0XF6);
    // 0x8007133C: addiu       $a2, $zero, 0x86
    ctx->r6 = ADD32(0, 0X86);
    // 0x80071340: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    // 0x80071344: jal         0x80070BE0
    // 0x80071348: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    func_80070BE0(rdram, ctx);
        goto after_7;
    // 0x80071348: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    after_7:
    // 0x8007134C: lhu         $t6, 0x32($s2)
    ctx->r14 = MEM_HU(ctx->r18, 0X32);
    // 0x80071350: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80071354: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x80071358: addiu       $t8, $zero, 0x9
    ctx->r24 = ADD32(0, 0X9);
    // 0x8007135C: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x80071360: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80071364: addiu       $s0, $s0, 0x20
    ctx->r16 = ADD32(ctx->r16, 0X20);
    // 0x80071368: addiu       $a1, $zero, 0xF6
    ctx->r5 = ADD32(0, 0XF6);
    // 0x8007136C: addiu       $a2, $zero, 0xAA
    ctx->r6 = ADD32(0, 0XAA);
    // 0x80071370: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    // 0x80071374: jal         0x80070BE0
    // 0x80071378: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_80070BE0(rdram, ctx);
        goto after_8;
    // 0x80071378: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_8:
    // 0x8007137C: lhu         $t9, 0x16($s2)
    ctx->r25 = MEM_HU(ctx->r18, 0X16);
    // 0x80071380: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x80071384: addiu       $t1, $zero, 0xA
    ctx->r9 = ADD32(0, 0XA);
    // 0x80071388: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x8007138C: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x80071390: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80071394: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x80071398: addiu       $a2, $zero, 0x24
    ctx->r6 = ADD32(0, 0X24);
    // 0x8007139C: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    // 0x800713A0: jal         0x80070C68
    // 0x800713A4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    func_80070C68(rdram, ctx);
        goto after_9;
    // 0x800713A4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_9:
    // 0x800713A8: lhu         $t2, 0x36($s2)
    ctx->r10 = MEM_HU(ctx->r18, 0X36);
    // 0x800713AC: lhu         $t3, 0x16($s2)
    ctx->r11 = MEM_HU(ctx->r18, 0X16);
    // 0x800713B0: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x800713B4: slt         $at, $t2, $t3
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x800713B8: beq         $at, $zero, L_800713C8
    if (ctx->r1 == 0) {
        // 0x800713BC: addiu       $a2, $zero, 0x2C
        ctx->r6 = ADD32(0, 0X2C);
            goto L_800713C8;
    }
    // 0x800713BC: addiu       $a2, $zero, 0x2C
    ctx->r6 = ADD32(0, 0X2C);
    // 0x800713C0: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x800713C4: sb          $t4, 0x15($s0)
    MEM_B(0X15, ctx->r16) = ctx->r12;
L_800713C8:
    // 0x800713C8: lhu         $t5, 0x18($s2)
    ctx->r13 = MEM_HU(ctx->r18, 0X18);
    // 0x800713CC: addiu       $s0, $s0, 0x20
    ctx->r16 = ADD32(ctx->r16, 0X20);
    // 0x800713D0: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x800713D4: addiu       $t7, $zero, 0xB
    ctx->r15 = ADD32(0, 0XB);
    // 0x800713D8: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x800713DC: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x800713E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800713E4: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    // 0x800713E8: jal         0x80070C68
    // 0x800713EC: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    func_80070C68(rdram, ctx);
        goto after_10;
    // 0x800713EC: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    after_10:
    // 0x800713F0: lhu         $t8, 0x38($s2)
    ctx->r24 = MEM_HU(ctx->r18, 0X38);
    // 0x800713F4: lhu         $t9, 0x18($s2)
    ctx->r25 = MEM_HU(ctx->r18, 0X18);
    // 0x800713F8: addiu       $a1, $zero, 0xB0
    ctx->r5 = ADD32(0, 0XB0);
    // 0x800713FC: slt         $at, $t8, $t9
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80071400: beq         $at, $zero, L_80071410
    if (ctx->r1 == 0) {
        // 0x80071404: addiu       $a2, $zero, 0x24
        ctx->r6 = ADD32(0, 0X24);
            goto L_80071410;
    }
    // 0x80071404: addiu       $a2, $zero, 0x24
    ctx->r6 = ADD32(0, 0X24);
    // 0x80071408: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8007140C: sb          $t0, 0x15($s0)
    MEM_B(0X15, ctx->r16) = ctx->r8;
L_80071410:
    // 0x80071410: lhu         $t1, 0x36($s2)
    ctx->r9 = MEM_HU(ctx->r18, 0X36);
    // 0x80071414: addiu       $s0, $s0, 0x20
    ctx->r16 = ADD32(ctx->r16, 0X20);
    // 0x80071418: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x8007141C: addiu       $t3, $zero, 0xD
    ctx->r11 = ADD32(0, 0XD);
    // 0x80071420: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x80071424: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x80071428: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8007142C: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    // 0x80071430: jal         0x80070C68
    // 0x80071434: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    func_80070C68(rdram, ctx);
        goto after_11;
    // 0x80071434: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    after_11:
    // 0x80071438: lhu         $t4, 0x16($s2)
    ctx->r12 = MEM_HU(ctx->r18, 0X16);
    // 0x8007143C: lhu         $t5, 0x36($s2)
    ctx->r13 = MEM_HU(ctx->r18, 0X36);
    // 0x80071440: addiu       $a1, $zero, 0xB0
    ctx->r5 = ADD32(0, 0XB0);
    // 0x80071444: slt         $at, $t4, $t5
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x80071448: beq         $at, $zero, L_80071458
    if (ctx->r1 == 0) {
        // 0x8007144C: addiu       $a2, $zero, 0x2C
        ctx->r6 = ADD32(0, 0X2C);
            goto L_80071458;
    }
    // 0x8007144C: addiu       $a2, $zero, 0x2C
    ctx->r6 = ADD32(0, 0X2C);
    // 0x80071450: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80071454: sb          $t6, 0x15($s0)
    MEM_B(0X15, ctx->r16) = ctx->r14;
L_80071458:
    // 0x80071458: lhu         $t7, 0x38($s2)
    ctx->r15 = MEM_HU(ctx->r18, 0X38);
    // 0x8007145C: addiu       $s0, $s0, 0x20
    ctx->r16 = ADD32(ctx->r16, 0X20);
    // 0x80071460: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x80071464: addiu       $t9, $zero, 0xE
    ctx->r25 = ADD32(0, 0XE);
    // 0x80071468: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x8007146C: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x80071470: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80071474: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    // 0x80071478: jal         0x80070C68
    // 0x8007147C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    func_80070C68(rdram, ctx);
        goto after_12;
    // 0x8007147C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_12:
    // 0x80071480: lhu         $t0, 0x18($s2)
    ctx->r8 = MEM_HU(ctx->r18, 0X18);
    // 0x80071484: lhu         $t1, 0x38($s2)
    ctx->r9 = MEM_HU(ctx->r18, 0X38);
    // 0x80071488: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8007148C: slt         $at, $t0, $t1
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x80071490: beq         $at, $zero, L_8007149C
    if (ctx->r1 == 0) {
        // 0x80071494: addiu       $t2, $zero, 0x1
        ctx->r10 = ADD32(0, 0X1);
            goto L_8007149C;
    }
    // 0x80071494: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80071498: sb          $t2, 0x15($s0)
    MEM_B(0X15, ctx->r16) = ctx->r10;
L_8007149C:
    // 0x8007149C: lh          $v0, 0x3A5E($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X3A5E);
    // 0x800714A0: addiu       $s0, $s0, 0x20
    ctx->r16 = ADD32(ctx->r16, 0X20);
    // 0x800714A4: bne         $v0, $zero, L_800715D4
    if (ctx->r2 != 0) {
        // 0x800714A8: nop
    
            goto L_800715D4;
    }
    // 0x800714A8: nop

    // 0x800714AC: lhu         $t3, 0x3A($s2)
    ctx->r11 = MEM_HU(ctx->r18, 0X3A);
    // 0x800714B0: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x800714B4: addiu       $t5, $zero, 0xF
    ctx->r13 = ADD32(0, 0XF);
    // 0x800714B8: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x800714BC: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x800714C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800714C4: addiu       $a1, $zero, -0x400
    ctx->r5 = ADD32(0, -0X400);
    // 0x800714C8: addiu       $a2, $zero, 0x44
    ctx->r6 = ADD32(0, 0X44);
    // 0x800714CC: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    // 0x800714D0: jal         0x80070C68
    // 0x800714D4: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    func_80070C68(rdram, ctx);
        goto after_13;
    // 0x800714D4: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    after_13:
    // 0x800714D8: lhu         $t6, 0x1A($s2)
    ctx->r14 = MEM_HU(ctx->r18, 0X1A);
    // 0x800714DC: addiu       $s0, $s0, 0x20
    ctx->r16 = ADD32(ctx->r16, 0X20);
    // 0x800714E0: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x800714E4: addiu       $t8, $zero, 0xC
    ctx->r24 = ADD32(0, 0XC);
    // 0x800714E8: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x800714EC: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x800714F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800714F4: addiu       $a1, $zero, -0x400
    ctx->r5 = ADD32(0, -0X400);
    // 0x800714F8: addiu       $a2, $zero, 0x44
    ctx->r6 = ADD32(0, 0X44);
    // 0x800714FC: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    // 0x80071500: jal         0x80070C68
    // 0x80071504: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_80070C68(rdram, ctx);
        goto after_14;
    // 0x80071504: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_14:
    // 0x80071508: lhu         $t9, 0x3A($s2)
    ctx->r25 = MEM_HU(ctx->r18, 0X3A);
    // 0x8007150C: addiu       $s0, $s0, 0x20
    ctx->r16 = ADD32(ctx->r16, 0X20);
    // 0x80071510: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x80071514: addiu       $t1, $zero, 0x1D
    ctx->r9 = ADD32(0, 0X1D);
    // 0x80071518: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x8007151C: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x80071520: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80071524: addiu       $a1, $zero, -0x400
    ctx->r5 = ADD32(0, -0X400);
    // 0x80071528: addiu       $a2, $zero, 0x44
    ctx->r6 = ADD32(0, 0X44);
    // 0x8007152C: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    // 0x80071530: jal         0x80070C68
    // 0x80071534: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    func_80070C68(rdram, ctx);
        goto after_15;
    // 0x80071534: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_15:
    // 0x80071538: lhu         $t2, 0x1A($s2)
    ctx->r10 = MEM_HU(ctx->r18, 0X1A);
    // 0x8007153C: addiu       $s0, $s0, 0x20
    ctx->r16 = ADD32(ctx->r16, 0X20);
    // 0x80071540: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x80071544: addiu       $t4, $zero, 0x1E
    ctx->r12 = ADD32(0, 0X1E);
    // 0x80071548: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x8007154C: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x80071550: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80071554: addiu       $a1, $zero, -0x400
    ctx->r5 = ADD32(0, -0X400);
    // 0x80071558: addiu       $a2, $zero, 0x44
    ctx->r6 = ADD32(0, 0X44);
    // 0x8007155C: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    // 0x80071560: jal         0x80070C68
    // 0x80071564: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    func_80070C68(rdram, ctx);
        goto after_16;
    // 0x80071564: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    after_16:
    // 0x80071568: lhu         $t5, 0x3A($s2)
    ctx->r13 = MEM_HU(ctx->r18, 0X3A);
    // 0x8007156C: addiu       $s0, $s0, 0x20
    ctx->r16 = ADD32(ctx->r16, 0X20);
    // 0x80071570: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80071574: addiu       $t7, $zero, 0x1F
    ctx->r15 = ADD32(0, 0X1F);
    // 0x80071578: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x8007157C: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x80071580: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80071584: addiu       $a1, $zero, -0x400
    ctx->r5 = ADD32(0, -0X400);
    // 0x80071588: addiu       $a2, $zero, 0x44
    ctx->r6 = ADD32(0, 0X44);
    // 0x8007158C: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    // 0x80071590: jal         0x80070C68
    // 0x80071594: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    func_80070C68(rdram, ctx);
        goto after_17;
    // 0x80071594: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    after_17:
    // 0x80071598: lhu         $t8, 0x1A($s2)
    ctx->r24 = MEM_HU(ctx->r18, 0X1A);
    // 0x8007159C: addiu       $s0, $s0, 0x20
    ctx->r16 = ADD32(ctx->r16, 0X20);
    // 0x800715A0: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x800715A4: addiu       $t0, $zero, 0x20
    ctx->r8 = ADD32(0, 0X20);
    // 0x800715A8: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x800715AC: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x800715B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800715B4: addiu       $a1, $zero, -0x400
    ctx->r5 = ADD32(0, -0X400);
    // 0x800715B8: addiu       $a2, $zero, 0x44
    ctx->r6 = ADD32(0, 0X44);
    // 0x800715BC: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    // 0x800715C0: jal         0x80070C68
    // 0x800715C4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_80070C68(rdram, ctx);
        goto after_18;
    // 0x800715C4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_18:
    // 0x800715C8: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x800715CC: lh          $v0, 0x3A5E($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X3A5E);
    // 0x800715D0: addiu       $s0, $s0, 0x20
    ctx->r16 = ADD32(ctx->r16, 0X20);
L_800715D4:
    // 0x800715D4: blez        $v0, L_8007173C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x800715D8: slti        $at, $v0, 0x2
        ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
            goto L_8007173C;
    }
    // 0x800715D8: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x800715DC: lhu         $t1, 0x40($s2)
    ctx->r9 = MEM_HU(ctx->r18, 0X40);
    // 0x800715E0: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x800715E4: addiu       $t3, $zero, 0xF
    ctx->r11 = ADD32(0, 0XF);
    // 0x800715E8: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x800715EC: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x800715F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800715F4: addiu       $a1, $zero, 0xB0
    ctx->r5 = ADD32(0, 0XB0);
    // 0x800715F8: addiu       $a2, $zero, 0x34
    ctx->r6 = ADD32(0, 0X34);
    // 0x800715FC: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    // 0x80071600: jal         0x80070C68
    // 0x80071604: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    func_80070C68(rdram, ctx);
        goto after_19;
    // 0x80071604: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    after_19:
    // 0x80071608: lhu         $v0, 0x20($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X20);
    // 0x8007160C: lhu         $t4, 0x40($s2)
    ctx->r12 = MEM_HU(ctx->r18, 0X40);
    // 0x80071610: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x80071614: slt         $at, $v0, $t4
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x80071618: beq         $at, $zero, L_80071630
    if (ctx->r1 == 0) {
        // 0x8007161C: addiu       $a2, $zero, 0x34
        ctx->r6 = ADD32(0, 0X34);
            goto L_80071630;
    }
    // 0x8007161C: addiu       $a2, $zero, 0x34
    ctx->r6 = ADD32(0, 0X34);
    // 0x80071620: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80071624: sb          $t5, 0x15($s0)
    MEM_B(0X15, ctx->r16) = ctx->r13;
    // 0x80071628: lhu         $v0, 0x20($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X20);
    // 0x8007162C: nop

L_80071630:
    // 0x80071630: addiu       $s0, $s0, 0x20
    ctx->r16 = ADD32(ctx->r16, 0X20);
    // 0x80071634: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80071638: addiu       $t7, $zero, 0xC
    ctx->r15 = ADD32(0, 0XC);
    // 0x8007163C: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x80071640: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x80071644: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80071648: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    // 0x8007164C: jal         0x80070C68
    // 0x80071650: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_80070C68(rdram, ctx);
        goto after_20;
    // 0x80071650: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_20:
    // 0x80071654: lhu         $t8, 0x40($s2)
    ctx->r24 = MEM_HU(ctx->r18, 0X40);
    // 0x80071658: lhu         $t9, 0x20($s2)
    ctx->r25 = MEM_HU(ctx->r18, 0X20);
    // 0x8007165C: addiu       $a1, $zero, -0x400
    ctx->r5 = ADD32(0, -0X400);
    // 0x80071660: slt         $at, $t8, $t9
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80071664: beq         $at, $zero, L_80071674
    if (ctx->r1 == 0) {
        // 0x80071668: addiu       $a2, $zero, 0x44
        ctx->r6 = ADD32(0, 0X44);
            goto L_80071674;
    }
    // 0x80071668: addiu       $a2, $zero, 0x44
    ctx->r6 = ADD32(0, 0X44);
    // 0x8007166C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80071670: sb          $t0, 0x15($s0)
    MEM_B(0X15, ctx->r16) = ctx->r8;
L_80071674:
    // 0x80071674: lhu         $t1, 0x3A($s2)
    ctx->r9 = MEM_HU(ctx->r18, 0X3A);
    // 0x80071678: addiu       $s0, $s0, 0x20
    ctx->r16 = ADD32(ctx->r16, 0X20);
    // 0x8007167C: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x80071680: addiu       $t3, $zero, 0x1D
    ctx->r11 = ADD32(0, 0X1D);
    // 0x80071684: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x80071688: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x8007168C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80071690: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    // 0x80071694: jal         0x80070C68
    // 0x80071698: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    func_80070C68(rdram, ctx);
        goto after_21;
    // 0x80071698: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    after_21:
    // 0x8007169C: lhu         $t4, 0x1A($s2)
    ctx->r12 = MEM_HU(ctx->r18, 0X1A);
    // 0x800716A0: addiu       $s0, $s0, 0x20
    ctx->r16 = ADD32(ctx->r16, 0X20);
    // 0x800716A4: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x800716A8: addiu       $t6, $zero, 0x1E
    ctx->r14 = ADD32(0, 0X1E);
    // 0x800716AC: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x800716B0: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x800716B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800716B8: addiu       $a1, $zero, -0x400
    ctx->r5 = ADD32(0, -0X400);
    // 0x800716BC: addiu       $a2, $zero, 0x44
    ctx->r6 = ADD32(0, 0X44);
    // 0x800716C0: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    // 0x800716C4: jal         0x80070C68
    // 0x800716C8: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    func_80070C68(rdram, ctx);
        goto after_22;
    // 0x800716C8: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    after_22:
    // 0x800716CC: lhu         $t7, 0x3A($s2)
    ctx->r15 = MEM_HU(ctx->r18, 0X3A);
    // 0x800716D0: addiu       $s0, $s0, 0x20
    ctx->r16 = ADD32(ctx->r16, 0X20);
    // 0x800716D4: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x800716D8: addiu       $t9, $zero, 0x1F
    ctx->r25 = ADD32(0, 0X1F);
    // 0x800716DC: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x800716E0: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x800716E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800716E8: addiu       $a1, $zero, -0x400
    ctx->r5 = ADD32(0, -0X400);
    // 0x800716EC: addiu       $a2, $zero, 0x44
    ctx->r6 = ADD32(0, 0X44);
    // 0x800716F0: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    // 0x800716F4: jal         0x80070C68
    // 0x800716F8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    func_80070C68(rdram, ctx);
        goto after_23;
    // 0x800716F8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_23:
    // 0x800716FC: lhu         $t0, 0x1A($s2)
    ctx->r8 = MEM_HU(ctx->r18, 0X1A);
    // 0x80071700: addiu       $s0, $s0, 0x20
    ctx->r16 = ADD32(ctx->r16, 0X20);
    // 0x80071704: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x80071708: addiu       $t2, $zero, 0x20
    ctx->r10 = ADD32(0, 0X20);
    // 0x8007170C: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x80071710: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x80071714: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80071718: addiu       $a1, $zero, -0x400
    ctx->r5 = ADD32(0, -0X400);
    // 0x8007171C: addiu       $a2, $zero, 0x44
    ctx->r6 = ADD32(0, 0X44);
    // 0x80071720: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    // 0x80071724: jal         0x80070C68
    // 0x80071728: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    func_80070C68(rdram, ctx);
        goto after_24;
    // 0x80071728: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_24:
    // 0x8007172C: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80071730: lh          $v0, 0x3A5E($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X3A5E);
    // 0x80071734: addiu       $s0, $s0, 0x20
    ctx->r16 = ADD32(ctx->r16, 0X20);
    // 0x80071738: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
L_8007173C:
    // 0x8007173C: bne         $at, $zero, L_80071844
    if (ctx->r1 != 0) {
        // 0x80071740: slti        $at, $v0, 0x3
        ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
            goto L_80071844;
    }
    // 0x80071740: slti        $at, $v0, 0x3
    ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x80071744: lhu         $t3, 0x42($s2)
    ctx->r11 = MEM_HU(ctx->r18, 0X42);
    // 0x80071748: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x8007174C: addiu       $t5, $zero, 0x1D
    ctx->r13 = ADD32(0, 0X1D);
    // 0x80071750: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x80071754: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x80071758: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8007175C: addiu       $a1, $zero, 0xB0
    ctx->r5 = ADD32(0, 0XB0);
    // 0x80071760: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    // 0x80071764: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    // 0x80071768: jal         0x80070C68
    // 0x8007176C: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    func_80070C68(rdram, ctx);
        goto after_25;
    // 0x8007176C: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    after_25:
    // 0x80071770: lhu         $v0, 0x22($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X22);
    // 0x80071774: lhu         $t6, 0x42($s2)
    ctx->r14 = MEM_HU(ctx->r18, 0X42);
    // 0x80071778: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x8007177C: slt         $at, $v0, $t6
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x80071780: beq         $at, $zero, L_80071798
    if (ctx->r1 == 0) {
        // 0x80071784: addiu       $a2, $zero, 0x3C
        ctx->r6 = ADD32(0, 0X3C);
            goto L_80071798;
    }
    // 0x80071784: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    // 0x80071788: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8007178C: sb          $t7, 0x15($s0)
    MEM_B(0X15, ctx->r16) = ctx->r15;
    // 0x80071790: lhu         $v0, 0x22($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X22);
    // 0x80071794: nop

L_80071798:
    // 0x80071798: addiu       $s0, $s0, 0x20
    ctx->r16 = ADD32(ctx->r16, 0X20);
    // 0x8007179C: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x800717A0: addiu       $t9, $zero, 0x1E
    ctx->r25 = ADD32(0, 0X1E);
    // 0x800717A4: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x800717A8: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x800717AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800717B0: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    // 0x800717B4: jal         0x80070C68
    // 0x800717B8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_80070C68(rdram, ctx);
        goto after_26;
    // 0x800717B8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_26:
    // 0x800717BC: lhu         $t0, 0x42($s2)
    ctx->r8 = MEM_HU(ctx->r18, 0X42);
    // 0x800717C0: lhu         $t1, 0x22($s2)
    ctx->r9 = MEM_HU(ctx->r18, 0X22);
    // 0x800717C4: addiu       $a1, $zero, -0x400
    ctx->r5 = ADD32(0, -0X400);
    // 0x800717C8: slt         $at, $t0, $t1
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x800717CC: beq         $at, $zero, L_800717DC
    if (ctx->r1 == 0) {
        // 0x800717D0: addiu       $a2, $zero, 0x44
        ctx->r6 = ADD32(0, 0X44);
            goto L_800717DC;
    }
    // 0x800717D0: addiu       $a2, $zero, 0x44
    ctx->r6 = ADD32(0, 0X44);
    // 0x800717D4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800717D8: sb          $t2, 0x15($s0)
    MEM_B(0X15, ctx->r16) = ctx->r10;
L_800717DC:
    // 0x800717DC: lhu         $t3, 0x3A($s2)
    ctx->r11 = MEM_HU(ctx->r18, 0X3A);
    // 0x800717E0: addiu       $s0, $s0, 0x20
    ctx->r16 = ADD32(ctx->r16, 0X20);
    // 0x800717E4: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x800717E8: addiu       $t5, $zero, 0x1F
    ctx->r13 = ADD32(0, 0X1F);
    // 0x800717EC: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x800717F0: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x800717F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800717F8: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    // 0x800717FC: jal         0x80070C68
    // 0x80071800: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    func_80070C68(rdram, ctx);
        goto after_27;
    // 0x80071800: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    after_27:
    // 0x80071804: lhu         $t6, 0x1A($s2)
    ctx->r14 = MEM_HU(ctx->r18, 0X1A);
    // 0x80071808: addiu       $s0, $s0, 0x20
    ctx->r16 = ADD32(ctx->r16, 0X20);
    // 0x8007180C: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x80071810: addiu       $t8, $zero, 0x20
    ctx->r24 = ADD32(0, 0X20);
    // 0x80071814: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x80071818: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x8007181C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80071820: addiu       $a1, $zero, -0x400
    ctx->r5 = ADD32(0, -0X400);
    // 0x80071824: addiu       $a2, $zero, 0x44
    ctx->r6 = ADD32(0, 0X44);
    // 0x80071828: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    // 0x8007182C: jal         0x80070C68
    // 0x80071830: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_80070C68(rdram, ctx);
        goto after_28;
    // 0x80071830: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_28:
    // 0x80071834: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80071838: lh          $v0, 0x3A5E($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X3A5E);
    // 0x8007183C: addiu       $s0, $s0, 0x20
    ctx->r16 = ADD32(ctx->r16, 0X20);
    // 0x80071840: slti        $at, $v0, 0x3
    ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
L_80071844:
    // 0x80071844: bne         $at, $zero, L_800718E4
    if (ctx->r1 != 0) {
        // 0x80071848: nop
    
            goto L_800718E4;
    }
    // 0x80071848: nop

    // 0x8007184C: lhu         $t9, 0x3A($s2)
    ctx->r25 = MEM_HU(ctx->r18, 0X3A);
    // 0x80071850: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x80071854: addiu       $t1, $zero, 0x1F
    ctx->r9 = ADD32(0, 0X1F);
    // 0x80071858: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x8007185C: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x80071860: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80071864: addiu       $a1, $zero, 0xB0
    ctx->r5 = ADD32(0, 0XB0);
    // 0x80071868: addiu       $a2, $zero, 0x44
    ctx->r6 = ADD32(0, 0X44);
    // 0x8007186C: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    // 0x80071870: jal         0x80070C68
    // 0x80071874: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    func_80070C68(rdram, ctx);
        goto after_29;
    // 0x80071874: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_29:
    // 0x80071878: lhu         $v0, 0x1A($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X1A);
    // 0x8007187C: lhu         $t2, 0x3A($s2)
    ctx->r10 = MEM_HU(ctx->r18, 0X3A);
    // 0x80071880: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x80071884: slt         $at, $v0, $t2
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x80071888: beq         $at, $zero, L_800718A0
    if (ctx->r1 == 0) {
        // 0x8007188C: addiu       $a2, $zero, 0x44
        ctx->r6 = ADD32(0, 0X44);
            goto L_800718A0;
    }
    // 0x8007188C: addiu       $a2, $zero, 0x44
    ctx->r6 = ADD32(0, 0X44);
    // 0x80071890: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80071894: sb          $t3, 0x15($s0)
    MEM_B(0X15, ctx->r16) = ctx->r11;
    // 0x80071898: lhu         $v0, 0x1A($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X1A);
    // 0x8007189C: nop

L_800718A0:
    // 0x800718A0: addiu       $s0, $s0, 0x20
    ctx->r16 = ADD32(ctx->r16, 0X20);
    // 0x800718A4: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x800718A8: addiu       $t5, $zero, 0x20
    ctx->r13 = ADD32(0, 0X20);
    // 0x800718AC: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x800718B0: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x800718B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800718B8: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    // 0x800718BC: jal         0x80070C68
    // 0x800718C0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_80070C68(rdram, ctx);
        goto after_30;
    // 0x800718C0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_30:
    // 0x800718C4: lhu         $t6, 0x3A($s2)
    ctx->r14 = MEM_HU(ctx->r18, 0X3A);
    // 0x800718C8: lhu         $t7, 0x1A($s2)
    ctx->r15 = MEM_HU(ctx->r18, 0X1A);
    // 0x800718CC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800718D0: slt         $at, $t6, $t7
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x800718D4: beq         $at, $zero, L_800718E0
    if (ctx->r1 == 0) {
        // 0x800718D8: nop
    
            goto L_800718E0;
    }
    // 0x800718D8: nop

    // 0x800718DC: sb          $t8, 0x15($s0)
    MEM_B(0X15, ctx->r16) = ctx->r24;
L_800718E0:
    // 0x800718E0: addiu       $s0, $s0, 0x20
    ctx->r16 = ADD32(ctx->r16, 0X20);
L_800718E4:
    // 0x800718E4: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
    // 0x800718E8: addiu       $t9, $zero, 0xA
    ctx->r25 = ADD32(0, 0XA);
    // 0x800718EC: addiu       $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
    // 0x800718F0: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x800718F4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x800718F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800718FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80071900: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    // 0x80071904: jal         0x80070B08
    // 0x80071908: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80070B08(rdram, ctx);
        goto after_31;
    // 0x80071908: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_31:
    // 0x8007190C: lh          $v0, 0x0($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X0);
    // 0x80071910: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80071914: bne         $v0, $zero, L_80071924
    if (ctx->r2 != 0) {
        // 0x80071918: addiu       $a1, $zero, 0x10
        ctx->r5 = ADD32(0, 0X10);
            goto L_80071924;
    }
    // 0x80071918: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8007191C: b           L_8007193C
    // 0x80071920: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
        goto L_8007193C;
    // 0x80071920: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
L_80071924:
    // 0x80071924: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80071928: bne         $v0, $at, L_80071938
    if (ctx->r2 != ctx->r1) {
        // 0x8007192C: addiu       $v1, $zero, 0x63
        ctx->r3 = ADD32(0, 0X63);
            goto L_80071938;
    }
    // 0x8007192C: addiu       $v1, $zero, 0x63
    ctx->r3 = ADD32(0, 0X63);
    // 0x80071930: b           L_80071938
    // 0x80071934: addiu       $v1, $zero, 0x60
    ctx->r3 = ADD32(0, 0X60);
        goto L_80071938;
    // 0x80071934: addiu       $v1, $zero, 0x60
    ctx->r3 = ADD32(0, 0X60);
L_80071938:
    // 0x80071938: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8007193C:
    // 0x8007193C: jal         0x8002135C
    // 0x80071940: andi        $a2, $v0, 0xFF
    ctx->r6 = ctx->r2 & 0XFF;
    func_8002135C(rdram, ctx);
        goto after_32;
    // 0x80071940: andi        $a2, $v0, 0xFF
    ctx->r6 = ctx->r2 & 0XFF;
    after_32:
    // 0x80071944: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
    // 0x80071948: addiu       $t1, $zero, 0xA
    ctx->r9 = ADD32(0, 0XA);
    // 0x8007194C: addiu       $t2, $zero, 0x11
    ctx->r10 = ADD32(0, 0X11);
    // 0x80071950: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x80071954: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80071958: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8007195C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x80071960: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    // 0x80071964: jal         0x80070A78
    // 0x80071968: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80070A78(rdram, ctx);
        goto after_33;
    // 0x80071968: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_33:
    // 0x8007196C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80071970: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80071974: jal         0x8002135C
    // 0x80071978: addiu       $a2, $zero, 0x3B
    ctx->r6 = ADD32(0, 0X3B);
    func_8002135C(rdram, ctx);
        goto after_34;
    // 0x80071978: addiu       $a2, $zero, 0x3B
    ctx->r6 = ADD32(0, 0X3B);
    after_34:
    // 0x8007197C: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
    // 0x80071980: addiu       $t3, $zero, 0xC
    ctx->r11 = ADD32(0, 0XC);
    // 0x80071984: addiu       $t4, $zero, 0x12
    ctx->r12 = ADD32(0, 0X12);
    // 0x80071988: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x8007198C: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80071990: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80071994: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80071998: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    // 0x8007199C: jal         0x80070988
    // 0x800719A0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80070988(rdram, ctx);
        goto after_35;
    // 0x800719A0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_35:
    // 0x800719A4: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
    // 0x800719A8: addiu       $t5, $zero, 0xB
    ctx->r13 = ADD32(0, 0XB);
    // 0x800719AC: addiu       $t6, $zero, 0x13
    ctx->r14 = ADD32(0, 0X13);
    // 0x800719B0: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x800719B4: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x800719B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800719BC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800719C0: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    // 0x800719C4: jal         0x80070B08
    // 0x800719C8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80070B08(rdram, ctx);
        goto after_36;
    // 0x800719C8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_36:
    // 0x800719CC: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
    // 0x800719D0: addiu       $t7, $zero, 0xB
    ctx->r15 = ADD32(0, 0XB);
    // 0x800719D4: addiu       $t8, $zero, 0x14
    ctx->r24 = ADD32(0, 0X14);
    // 0x800719D8: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x800719DC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800719E0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x800719E4: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x800719E8: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    // 0x800719EC: jal         0x80070A78
    // 0x800719F0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80070A78(rdram, ctx);
        goto after_37;
    // 0x800719F0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_37:
    // 0x800719F4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800719F8: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x800719FC: jal         0x8002135C
    // 0x80071A00: addiu       $a2, $zero, 0x3B
    ctx->r6 = ADD32(0, 0X3B);
    func_8002135C(rdram, ctx);
        goto after_38;
    // 0x80071A00: addiu       $a2, $zero, 0x3B
    ctx->r6 = ADD32(0, 0X3B);
    after_38:
    // 0x80071A04: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
    // 0x80071A08: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x80071A0C: addiu       $t0, $zero, 0x15
    ctx->r8 = ADD32(0, 0X15);
    // 0x80071A10: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x80071A14: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80071A18: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80071A1C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80071A20: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    // 0x80071A24: jal         0x80070988
    // 0x80071A28: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80070988(rdram, ctx);
        goto after_39;
    // 0x80071A28: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_39:
    // 0x80071A2C: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80071A30: lh          $v0, 0x3A5E($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X3A5E);
    // 0x80071A34: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
    // 0x80071A38: bne         $v0, $zero, L_80071A68
    if (ctx->r2 != 0) {
        // 0x80071A3C: addiu       $t1, $zero, 0x4
        ctx->r9 = ADD32(0, 0X4);
            goto L_80071A68;
    }
    // 0x80071A3C: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x80071A40: addiu       $t2, $zero, 0x16
    ctx->r10 = ADD32(0, 0X16);
    // 0x80071A44: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x80071A48: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80071A4C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80071A50: addiu       $a1, $zero, -0x400
    ctx->r5 = ADD32(0, -0X400);
    // 0x80071A54: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80071A58: jal         0x80070988
    // 0x80071A5C: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_80070988(rdram, ctx);
        goto after_40;
    // 0x80071A5C: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_40:
    // 0x80071A60: b           L_80071B00
    // 0x80071A64: lhu         $t9, 0x6($s2)
    ctx->r25 = MEM_HU(ctx->r18, 0X6);
        goto L_80071B00;
    // 0x80071A64: lhu         $t9, 0x6($s2)
    ctx->r25 = MEM_HU(ctx->r18, 0X6);
L_80071A68:
    // 0x80071A68: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80071A6C: bne         $v0, $at, L_80071A9C
    if (ctx->r2 != ctx->r1) {
        // 0x80071A70: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80071A9C;
    }
    // 0x80071A70: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80071A74: addiu       $t3, $zero, 0x5
    ctx->r11 = ADD32(0, 0X5);
    // 0x80071A78: addiu       $t4, $zero, 0x16
    ctx->r12 = ADD32(0, 0X16);
    // 0x80071A7C: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x80071A80: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80071A84: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80071A88: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80071A8C: jal         0x80070988
    // 0x80071A90: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_80070988(rdram, ctx);
        goto after_41;
    // 0x80071A90: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_41:
    // 0x80071A94: b           L_80071B00
    // 0x80071A98: lhu         $t9, 0x6($s2)
    ctx->r25 = MEM_HU(ctx->r18, 0X6);
        goto L_80071B00;
    // 0x80071A98: lhu         $t9, 0x6($s2)
    ctx->r25 = MEM_HU(ctx->r18, 0X6);
L_80071A9C:
    // 0x80071A9C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80071AA0: bne         $v0, $at, L_80071AD0
    if (ctx->r2 != ctx->r1) {
        // 0x80071AA4: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80071AD0;
    }
    // 0x80071AA4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80071AA8: addiu       $t5, $zero, 0x6
    ctx->r13 = ADD32(0, 0X6);
    // 0x80071AAC: addiu       $t6, $zero, 0x16
    ctx->r14 = ADD32(0, 0X16);
    // 0x80071AB0: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x80071AB4: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80071AB8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80071ABC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80071AC0: jal         0x80070988
    // 0x80071AC4: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_80070988(rdram, ctx);
        goto after_42;
    // 0x80071AC4: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_42:
    // 0x80071AC8: b           L_80071B00
    // 0x80071ACC: lhu         $t9, 0x6($s2)
    ctx->r25 = MEM_HU(ctx->r18, 0X6);
        goto L_80071B00;
    // 0x80071ACC: lhu         $t9, 0x6($s2)
    ctx->r25 = MEM_HU(ctx->r18, 0X6);
L_80071AD0:
    // 0x80071AD0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80071AD4: bne         $v0, $at, L_80071AFC
    if (ctx->r2 != ctx->r1) {
        // 0x80071AD8: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80071AFC;
    }
    // 0x80071AD8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80071ADC: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x80071AE0: addiu       $t8, $zero, 0x16
    ctx->r24 = ADD32(0, 0X16);
    // 0x80071AE4: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x80071AE8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80071AEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80071AF0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80071AF4: jal         0x80070988
    // 0x80071AF8: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_80070988(rdram, ctx);
        goto after_43;
    // 0x80071AF8: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_43:
L_80071AFC:
    // 0x80071AFC: lhu         $t9, 0x6($s2)
    ctx->r25 = MEM_HU(ctx->r18, 0X6);
L_80071B00:
    // 0x80071B00: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x80071B04: div         $zero, $t9, $at
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r1)));
    // 0x80071B08: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
    // 0x80071B0C: addiu       $t2, $zero, 0x17
    ctx->r10 = ADD32(0, 0X17);
    // 0x80071B10: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x80071B14: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80071B18: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80071B1C: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    // 0x80071B20: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80071B24: mfhi        $t0
    ctx->r8 = hi;
    // 0x80071B28: addiu       $t1, $t0, 0xD
    ctx->r9 = ADD32(ctx->r8, 0XD);
    // 0x80071B2C: jal         0x80070988
    // 0x80071B30: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    func_80070988(rdram, ctx);
        goto after_44;
    // 0x80071B30: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    after_44:
    // 0x80071B34: lui         $t3, 0x801B
    ctx->r11 = S32(0X801B << 16);
    // 0x80071B38: lh          $t3, 0x3A5C($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X3A5C);
    // 0x80071B3C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80071B40: bne         $t3, $at, L_80071B54
    if (ctx->r11 != ctx->r1) {
        // 0x80071B44: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80071B54;
    }
    // 0x80071B44: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80071B48: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x80071B4C: jal         0x8002135C
    // 0x80071B50: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8002135C(rdram, ctx);
        goto after_45;
    // 0x80071B50: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_45:
L_80071B54:
    // 0x80071B54: lhu         $t4, 0x6($s2)
    ctx->r12 = MEM_HU(ctx->r18, 0X6);
    // 0x80071B58: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80071B5C: div         $zero, $t4, $v0
    lo = S32(S64(S32(ctx->r12)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r12)) % S64(S32(ctx->r2)));
    // 0x80071B60: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
    // 0x80071B64: addiu       $t8, $zero, 0x18
    ctx->r24 = ADD32(0, 0X18);
    // 0x80071B68: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x80071B6C: addiu       $a1, $zero, -0x10
    ctx->r5 = ADD32(0, -0X10);
    // 0x80071B70: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80071B74: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    // 0x80071B78: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80071B7C: bne         $v0, $zero, L_80071B88
    if (ctx->r2 != 0) {
        // 0x80071B80: nop
    
            goto L_80071B88;
    }
    // 0x80071B80: nop

    // 0x80071B84: break       7
    do_break(2147949444);
L_80071B88:
    // 0x80071B88: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80071B8C: bne         $v0, $at, L_80071BA0
    if (ctx->r2 != ctx->r1) {
        // 0x80071B90: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80071BA0;
    }
    // 0x80071B90: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80071B94: bne         $t4, $at, L_80071BA0
    if (ctx->r12 != ctx->r1) {
        // 0x80071B98: nop
    
            goto L_80071BA0;
    }
    // 0x80071B98: nop

    // 0x80071B9C: break       6
    do_break(2147949468);
L_80071BA0:
    // 0x80071BA0: mflo        $t5
    ctx->r13 = lo;
    // 0x80071BA4: nop

    // 0x80071BA8: nop

    // 0x80071BAC: div         $zero, $t5, $v0
    lo = S32(S64(S32(ctx->r13)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r13)) % S64(S32(ctx->r2)));
    // 0x80071BB0: bne         $v0, $zero, L_80071BBC
    if (ctx->r2 != 0) {
        // 0x80071BB4: nop
    
            goto L_80071BBC;
    }
    // 0x80071BB4: nop

    // 0x80071BB8: break       7
    do_break(2147949496);
L_80071BBC:
    // 0x80071BBC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80071BC0: bne         $v0, $at, L_80071BD4
    if (ctx->r2 != ctx->r1) {
        // 0x80071BC4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80071BD4;
    }
    // 0x80071BC4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80071BC8: bne         $t5, $at, L_80071BD4
    if (ctx->r13 != ctx->r1) {
        // 0x80071BCC: nop
    
            goto L_80071BD4;
    }
    // 0x80071BCC: nop

    // 0x80071BD0: break       6
    do_break(2147949520);
L_80071BD4:
    // 0x80071BD4: mfhi        $t6
    ctx->r14 = hi;
    // 0x80071BD8: addiu       $t7, $t6, 0xD
    ctx->r15 = ADD32(ctx->r14, 0XD);
    // 0x80071BDC: jal         0x80070988
    // 0x80071BE0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    func_80070988(rdram, ctx);
        goto after_46;
    // 0x80071BE0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_46:
    // 0x80071BE4: lui         $t9, 0x801B
    ctx->r25 = S32(0X801B << 16);
    // 0x80071BE8: lh          $t9, 0x3A5C($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X3A5C);
    // 0x80071BEC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80071BF0: bne         $t9, $at, L_80071C04
    if (ctx->r25 != ctx->r1) {
        // 0x80071BF4: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80071C04;
    }
    // 0x80071BF4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80071BF8: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x80071BFC: jal         0x8002135C
    // 0x80071C00: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8002135C(rdram, ctx);
        goto after_47;
    // 0x80071C00: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_47:
L_80071C04:
    // 0x80071C04: lhu         $t0, 0x26($s2)
    ctx->r8 = MEM_HU(ctx->r18, 0X26);
    // 0x80071C08: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x80071C0C: div         $zero, $t0, $at
    lo = S32(S64(S32(ctx->r8)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r8)) % S64(S32(ctx->r1)));
    // 0x80071C10: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
    // 0x80071C14: addiu       $t3, $zero, 0x19
    ctx->r11 = ADD32(0, 0X19);
    // 0x80071C18: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x80071C1C: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
    // 0x80071C20: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80071C24: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    // 0x80071C28: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80071C2C: mfhi        $t1
    ctx->r9 = hi;
    // 0x80071C30: addiu       $t2, $t1, 0xD
    ctx->r10 = ADD32(ctx->r9, 0XD);
    // 0x80071C34: jal         0x80070988
    // 0x80071C38: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    func_80070988(rdram, ctx);
        goto after_48;
    // 0x80071C38: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    after_48:
    // 0x80071C3C: lui         $t4, 0x801B
    ctx->r12 = S32(0X801B << 16);
    // 0x80071C40: lh          $t4, 0x3A5C($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X3A5C);
    // 0x80071C44: nop

    // 0x80071C48: bne         $t4, $zero, L_80071C5C
    if (ctx->r12 != 0) {
        // 0x80071C4C: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80071C5C;
    }
    // 0x80071C4C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80071C50: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x80071C54: jal         0x8002135C
    // 0x80071C58: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8002135C(rdram, ctx);
        goto after_49;
    // 0x80071C58: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_49:
L_80071C5C:
    // 0x80071C5C: lhu         $t5, 0x26($s2)
    ctx->r13 = MEM_HU(ctx->r18, 0X26);
    // 0x80071C60: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x80071C64: div         $zero, $t5, $at
    lo = S32(S64(S32(ctx->r13)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r13)) % S64(S32(ctx->r1)));
    // 0x80071C68: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
    // 0x80071C6C: addiu       $t9, $zero, 0x1A
    ctx->r25 = ADD32(0, 0X1A);
    // 0x80071C70: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x80071C74: addiu       $a1, $zero, 0x58
    ctx->r5 = ADD32(0, 0X58);
    // 0x80071C78: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80071C7C: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    // 0x80071C80: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80071C84: mflo        $t6
    ctx->r14 = lo;
    // 0x80071C88: nop

    // 0x80071C8C: nop

    // 0x80071C90: div         $zero, $t6, $at
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r1)));
    // 0x80071C94: mfhi        $t7
    ctx->r15 = hi;
    // 0x80071C98: addiu       $t8, $t7, 0xD
    ctx->r24 = ADD32(ctx->r15, 0XD);
    // 0x80071C9C: jal         0x80070988
    // 0x80071CA0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_80070988(rdram, ctx);
        goto after_50;
    // 0x80071CA0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_50:
    // 0x80071CA4: lui         $t0, 0x801B
    ctx->r8 = S32(0X801B << 16);
    // 0x80071CA8: lh          $t0, 0x3A5C($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X3A5C);
    // 0x80071CAC: nop

    // 0x80071CB0: bne         $t0, $zero, L_80071CC4
    if (ctx->r8 != 0) {
        // 0x80071CB4: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80071CC4;
    }
    // 0x80071CB4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80071CB8: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x80071CBC: jal         0x8002135C
    // 0x80071CC0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8002135C(rdram, ctx);
        goto after_51;
    // 0x80071CC0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_51:
L_80071CC4:
    // 0x80071CC4: lhu         $t1, 0x8($s2)
    ctx->r9 = MEM_HU(ctx->r18, 0X8);
    // 0x80071CC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80071CCC: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x80071CD0: addiu       $t3, $zero, 0x2E
    ctx->r11 = ADD32(0, 0X2E);
    // 0x80071CD4: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x80071CD8: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x80071CDC: addiu       $s0, $s0, 0x20
    ctx->r16 = ADD32(ctx->r16, 0X20);
    // 0x80071CE0: addiu       $a1, $zero, 0x36
    ctx->r5 = ADD32(0, 0X36);
    // 0x80071CE4: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    // 0x80071CE8: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    // 0x80071CEC: jal         0x80070BE0
    // 0x80071CF0: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    func_80070BE0(rdram, ctx);
        goto after_52;
    // 0x80071CF0: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    after_52:
    // 0x80071CF4: lhu         $t4, 0xC($s2)
    ctx->r12 = MEM_HU(ctx->r18, 0XC);
    // 0x80071CF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80071CFC: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x80071D00: addiu       $t6, $zero, 0x22
    ctx->r14 = ADD32(0, 0X22);
    // 0x80071D04: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x80071D08: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x80071D0C: addiu       $s0, $s0, 0x20
    ctx->r16 = ADD32(ctx->r16, 0X20);
    // 0x80071D10: addiu       $a1, $zero, 0x36
    ctx->r5 = ADD32(0, 0X36);
    // 0x80071D14: addiu       $a2, $zero, 0x74
    ctx->r6 = ADD32(0, 0X74);
    // 0x80071D18: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    // 0x80071D1C: jal         0x80070BE0
    // 0x80071D20: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    func_80070BE0(rdram, ctx);
        goto after_53;
    // 0x80071D20: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    after_53:
    // 0x80071D24: lhu         $t7, 0x10($s2)
    ctx->r15 = MEM_HU(ctx->r18, 0X10);
    // 0x80071D28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80071D2C: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x80071D30: addiu       $t9, $zero, 0x2D
    ctx->r25 = ADD32(0, 0X2D);
    // 0x80071D34: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x80071D38: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x80071D3C: addiu       $s0, $s0, 0x20
    ctx->r16 = ADD32(ctx->r16, 0X20);
    // 0x80071D40: addiu       $a1, $zero, 0x36
    ctx->r5 = ADD32(0, 0X36);
    // 0x80071D44: addiu       $a2, $zero, 0x98
    ctx->r6 = ADD32(0, 0X98);
    // 0x80071D48: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    // 0x80071D4C: jal         0x80070BE0
    // 0x80071D50: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    func_80070BE0(rdram, ctx);
        goto after_54;
    // 0x80071D50: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_54:
    // 0x80071D54: lhu         $t0, 0x14($s2)
    ctx->r8 = MEM_HU(ctx->r18, 0X14);
    // 0x80071D58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80071D5C: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x80071D60: addiu       $t2, $zero, 0x1B
    ctx->r10 = ADD32(0, 0X1B);
    // 0x80071D64: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x80071D68: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x80071D6C: addiu       $s0, $s0, 0x20
    ctx->r16 = ADD32(ctx->r16, 0X20);
    // 0x80071D70: addiu       $a1, $zero, 0x36
    ctx->r5 = ADD32(0, 0X36);
    // 0x80071D74: addiu       $a2, $zero, 0xCE
    ctx->r6 = ADD32(0, 0XCE);
    // 0x80071D78: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    // 0x80071D7C: jal         0x80070BE0
    // 0x80071D80: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    func_80070BE0(rdram, ctx);
        goto after_55;
    // 0x80071D80: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_55:
    // 0x80071D84: lhu         $t3, 0x1E($s2)
    ctx->r11 = MEM_HU(ctx->r18, 0X1E);
    // 0x80071D88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80071D8C: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x80071D90: addiu       $t5, $zero, 0x2B
    ctx->r13 = ADD32(0, 0X2B);
    // 0x80071D94: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x80071D98: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x80071D9C: addiu       $s0, $s0, 0x20
    ctx->r16 = ADD32(ctx->r16, 0X20);
    // 0x80071DA0: addiu       $a1, $zero, 0x36
    ctx->r5 = ADD32(0, 0X36);
    // 0x80071DA4: addiu       $a2, $zero, 0xBC
    ctx->r6 = ADD32(0, 0XBC);
    // 0x80071DA8: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    // 0x80071DAC: jal         0x80070BE0
    // 0x80071DB0: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    func_80070BE0(rdram, ctx);
        goto after_56;
    // 0x80071DB0: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    after_56:
    // 0x80071DB4: lhu         $t6, 0x28($s2)
    ctx->r14 = MEM_HU(ctx->r18, 0X28);
    // 0x80071DB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80071DBC: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x80071DC0: addiu       $t8, $zero, 0x2F
    ctx->r24 = ADD32(0, 0X2F);
    // 0x80071DC4: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x80071DC8: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80071DCC: addiu       $s0, $s0, 0x20
    ctx->r16 = ADD32(ctx->r16, 0X20);
    // 0x80071DD0: addiu       $a1, $zero, 0xF6
    ctx->r5 = ADD32(0, 0XF6);
    // 0x80071DD4: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    // 0x80071DD8: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    // 0x80071DDC: jal         0x80070BE0
    // 0x80071DE0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_80070BE0(rdram, ctx);
        goto after_57;
    // 0x80071DE0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_57:
    // 0x80071DE4: lhu         $t9, 0x2C($s2)
    ctx->r25 = MEM_HU(ctx->r18, 0X2C);
    // 0x80071DE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80071DEC: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x80071DF0: addiu       $t1, $zero, 0x30
    ctx->r9 = ADD32(0, 0X30);
    // 0x80071DF4: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x80071DF8: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x80071DFC: addiu       $s0, $s0, 0x20
    ctx->r16 = ADD32(ctx->r16, 0X20);
    // 0x80071E00: addiu       $a1, $zero, 0xF6
    ctx->r5 = ADD32(0, 0XF6);
    // 0x80071E04: addiu       $a2, $zero, 0x74
    ctx->r6 = ADD32(0, 0X74);
    // 0x80071E08: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    // 0x80071E0C: jal         0x80070BE0
    // 0x80071E10: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    func_80070BE0(rdram, ctx);
        goto after_58;
    // 0x80071E10: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_58:
    // 0x80071E14: lhu         $t2, 0x30($s2)
    ctx->r10 = MEM_HU(ctx->r18, 0X30);
    // 0x80071E18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80071E1C: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x80071E20: addiu       $t4, $zero, 0x21
    ctx->r12 = ADD32(0, 0X21);
    // 0x80071E24: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x80071E28: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x80071E2C: addiu       $s0, $s0, 0x20
    ctx->r16 = ADD32(ctx->r16, 0X20);
    // 0x80071E30: addiu       $a1, $zero, 0xF6
    ctx->r5 = ADD32(0, 0XF6);
    // 0x80071E34: addiu       $a2, $zero, 0x98
    ctx->r6 = ADD32(0, 0X98);
    // 0x80071E38: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    // 0x80071E3C: jal         0x80070BE0
    // 0x80071E40: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    func_80070BE0(rdram, ctx);
        goto after_59;
    // 0x80071E40: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    after_59:
    // 0x80071E44: lhu         $t5, 0x34($s2)
    ctx->r13 = MEM_HU(ctx->r18, 0X34);
    // 0x80071E48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80071E4C: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x80071E50: addiu       $t7, $zero, 0x1C
    ctx->r15 = ADD32(0, 0X1C);
    // 0x80071E54: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x80071E58: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x80071E5C: addiu       $s0, $s0, 0x20
    ctx->r16 = ADD32(ctx->r16, 0X20);
    // 0x80071E60: addiu       $a1, $zero, 0xF6
    ctx->r5 = ADD32(0, 0XF6);
    // 0x80071E64: addiu       $a2, $zero, 0xCE
    ctx->r6 = ADD32(0, 0XCE);
    // 0x80071E68: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    // 0x80071E6C: jal         0x80070BE0
    // 0x80071E70: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    func_80070BE0(rdram, ctx);
        goto after_60;
    // 0x80071E70: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    after_60:
    // 0x80071E74: lhu         $t8, 0x3E($s2)
    ctx->r24 = MEM_HU(ctx->r18, 0X3E);
    // 0x80071E78: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x80071E7C: addiu       $t0, $zero, 0x2C
    ctx->r8 = ADD32(0, 0X2C);
    // 0x80071E80: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x80071E84: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x80071E88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80071E8C: addiu       $a1, $zero, 0xF6
    ctx->r5 = ADD32(0, 0XF6);
    // 0x80071E90: addiu       $a2, $zero, 0xBC
    ctx->r6 = ADD32(0, 0XBC);
    // 0x80071E94: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    // 0x80071E98: jal         0x80070BE0
    // 0x80071E9C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_80070BE0(rdram, ctx);
        goto after_61;
    // 0x80071E9C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_61:
    // 0x80071EA0: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
    // 0x80071EA4: addiu       $t1, $zero, 0x7
    ctx->r9 = ADD32(0, 0X7);
    // 0x80071EA8: addiu       $t2, $zero, 0x23
    ctx->r10 = ADD32(0, 0X23);
    // 0x80071EAC: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x80071EB0: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80071EB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80071EB8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80071EBC: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    // 0x80071EC0: jal         0x80070B08
    // 0x80071EC4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80070B08(rdram, ctx);
        goto after_62;
    // 0x80071EC4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_62:
    // 0x80071EC8: lh          $v0, 0x0($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X0);
    // 0x80071ECC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80071ED0: bne         $v0, $zero, L_80071EE0
    if (ctx->r2 != 0) {
        // 0x80071ED4: addiu       $a1, $zero, 0x10
        ctx->r5 = ADD32(0, 0X10);
            goto L_80071EE0;
    }
    // 0x80071ED4: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80071ED8: b           L_80071EF8
    // 0x80071EDC: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
        goto L_80071EF8;
    // 0x80071EDC: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
L_80071EE0:
    // 0x80071EE0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80071EE4: bne         $v0, $at, L_80071EF4
    if (ctx->r2 != ctx->r1) {
        // 0x80071EE8: addiu       $v1, $zero, 0x63
        ctx->r3 = ADD32(0, 0X63);
            goto L_80071EF4;
    }
    // 0x80071EE8: addiu       $v1, $zero, 0x63
    ctx->r3 = ADD32(0, 0X63);
    // 0x80071EEC: b           L_80071EF4
    // 0x80071EF0: addiu       $v1, $zero, 0x60
    ctx->r3 = ADD32(0, 0X60);
        goto L_80071EF4;
    // 0x80071EF0: addiu       $v1, $zero, 0x60
    ctx->r3 = ADD32(0, 0X60);
L_80071EF4:
    // 0x80071EF4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80071EF8:
    // 0x80071EF8: jal         0x8002135C
    // 0x80071EFC: andi        $a2, $v0, 0xFF
    ctx->r6 = ctx->r2 & 0XFF;
    func_8002135C(rdram, ctx);
        goto after_63;
    // 0x80071EFC: andi        $a2, $v0, 0xFF
    ctx->r6 = ctx->r2 & 0XFF;
    after_63:
    // 0x80071F00: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
    // 0x80071F04: addiu       $t3, $zero, 0x7
    ctx->r11 = ADD32(0, 0X7);
    // 0x80071F08: addiu       $t4, $zero, 0x24
    ctx->r12 = ADD32(0, 0X24);
    // 0x80071F0C: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x80071F10: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80071F14: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80071F18: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x80071F1C: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    // 0x80071F20: jal         0x80070A78
    // 0x80071F24: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80070A78(rdram, ctx);
        goto after_64;
    // 0x80071F24: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_64:
    // 0x80071F28: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80071F2C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80071F30: jal         0x8002135C
    // 0x80071F34: addiu       $a2, $zero, 0x3B
    ctx->r6 = ADD32(0, 0X3B);
    func_8002135C(rdram, ctx);
        goto after_65;
    // 0x80071F34: addiu       $a2, $zero, 0x3B
    ctx->r6 = ADD32(0, 0X3B);
    after_65:
    // 0x80071F38: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
    // 0x80071F3C: addiu       $t5, $zero, 0x9
    ctx->r13 = ADD32(0, 0X9);
    // 0x80071F40: addiu       $t6, $zero, 0x25
    ctx->r14 = ADD32(0, 0X25);
    // 0x80071F44: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x80071F48: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80071F4C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80071F50: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80071F54: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    // 0x80071F58: jal         0x80070988
    // 0x80071F5C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80070988(rdram, ctx);
        goto after_66;
    // 0x80071F5C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_66:
    // 0x80071F60: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
    // 0x80071F64: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
    // 0x80071F68: addiu       $t8, $zero, 0x26
    ctx->r24 = ADD32(0, 0X26);
    // 0x80071F6C: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x80071F70: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80071F74: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80071F78: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80071F7C: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    // 0x80071F80: jal         0x80070B08
    // 0x80071F84: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80070B08(rdram, ctx);
        goto after_67;
    // 0x80071F84: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_67:
    // 0x80071F88: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
    // 0x80071F8C: addiu       $t9, $zero, 0x8
    ctx->r25 = ADD32(0, 0X8);
    // 0x80071F90: addiu       $t0, $zero, 0x27
    ctx->r8 = ADD32(0, 0X27);
    // 0x80071F94: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x80071F98: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80071F9C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80071FA0: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x80071FA4: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    // 0x80071FA8: jal         0x80070A78
    // 0x80071FAC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80070A78(rdram, ctx);
        goto after_68;
    // 0x80071FAC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_68:
    // 0x80071FB0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80071FB4: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80071FB8: jal         0x8002135C
    // 0x80071FBC: addiu       $a2, $zero, 0x3B
    ctx->r6 = ADD32(0, 0X3B);
    func_8002135C(rdram, ctx);
        goto after_69;
    // 0x80071FBC: addiu       $a2, $zero, 0x3B
    ctx->r6 = ADD32(0, 0X3B);
    after_69:
    // 0x80071FC0: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80071FC4: lh          $v0, 0x3A60($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X3A60);
    // 0x80071FC8: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
    // 0x80071FCC: bne         $v0, $zero, L_80072000
    if (ctx->r2 != 0) {
        // 0x80071FD0: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_80072000;
    }
    // 0x80071FD0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80071FD4: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80071FD8: addiu       $t2, $zero, 0x28
    ctx->r10 = ADD32(0, 0X28);
    // 0x80071FDC: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x80071FE0: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80071FE4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80071FE8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80071FEC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80071FF0: jal         0x80070988
    // 0x80071FF4: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    func_80070988(rdram, ctx);
        goto after_70;
    // 0x80071FF4: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    after_70:
    // 0x80071FF8: b           L_800720C8
    // 0x80071FFC: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
        goto L_800720C8;
    // 0x80071FFC: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
L_80072000:
    // 0x80072000: bne         $v0, $at, L_80072030
    if (ctx->r2 != ctx->r1) {
        // 0x80072004: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80072030;
    }
    // 0x80072004: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80072008: addiu       $t3, $zero, 0x4E
    ctx->r11 = ADD32(0, 0X4E);
    // 0x8007200C: addiu       $t4, $zero, 0x28
    ctx->r12 = ADD32(0, 0X28);
    // 0x80072010: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x80072014: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80072018: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8007201C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80072020: jal         0x80070988
    // 0x80072024: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    func_80070988(rdram, ctx);
        goto after_71;
    // 0x80072024: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    after_71:
    // 0x80072028: b           L_800720C8
    // 0x8007202C: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
        goto L_800720C8;
    // 0x8007202C: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
L_80072030:
    // 0x80072030: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80072034: bne         $v0, $at, L_80072064
    if (ctx->r2 != ctx->r1) {
        // 0x80072038: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80072064;
    }
    // 0x80072038: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8007203C: addiu       $t5, $zero, 0x4F
    ctx->r13 = ADD32(0, 0X4F);
    // 0x80072040: addiu       $t6, $zero, 0x28
    ctx->r14 = ADD32(0, 0X28);
    // 0x80072044: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x80072048: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x8007204C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80072050: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80072054: jal         0x80070988
    // 0x80072058: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    func_80070988(rdram, ctx);
        goto after_72;
    // 0x80072058: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    after_72:
    // 0x8007205C: b           L_800720C8
    // 0x80072060: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
        goto L_800720C8;
    // 0x80072060: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
L_80072064:
    // 0x80072064: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80072068: bne         $v0, $at, L_80072098
    if (ctx->r2 != ctx->r1) {
        // 0x8007206C: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80072098;
    }
    // 0x8007206C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80072070: addiu       $t7, $zero, 0x50
    ctx->r15 = ADD32(0, 0X50);
    // 0x80072074: addiu       $t8, $zero, 0x28
    ctx->r24 = ADD32(0, 0X28);
    // 0x80072078: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x8007207C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80072080: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80072084: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80072088: jal         0x80070988
    // 0x8007208C: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    func_80070988(rdram, ctx);
        goto after_73;
    // 0x8007208C: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    after_73:
    // 0x80072090: b           L_800720C8
    // 0x80072094: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
        goto L_800720C8;
    // 0x80072094: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
L_80072098:
    // 0x80072098: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8007209C: bne         $v0, $at, L_800720C4
    if (ctx->r2 != ctx->r1) {
        // 0x800720A0: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_800720C4;
    }
    // 0x800720A0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800720A4: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x800720A8: addiu       $t0, $zero, 0x28
    ctx->r8 = ADD32(0, 0X28);
    // 0x800720AC: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x800720B0: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x800720B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800720B8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800720BC: jal         0x80070988
    // 0x800720C0: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    func_80070988(rdram, ctx);
        goto after_74;
    // 0x800720C0: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    after_74:
L_800720C4:
    // 0x800720C4: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
L_800720C8:
    // 0x800720C8: addiu       $t1, $zero, 0x29
    ctx->r9 = ADD32(0, 0X29);
    // 0x800720CC: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x800720D0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x800720D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800720D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800720DC: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    // 0x800720E0: jal         0x80070B08
    // 0x800720E4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80070B08(rdram, ctx);
        goto after_75;
    // 0x800720E4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_75:
    // 0x800720E8: lh          $v0, 0x0($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X0);
    // 0x800720EC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800720F0: bne         $v0, $zero, L_80072100
    if (ctx->r2 != 0) {
        // 0x800720F4: addiu       $a1, $zero, 0x10
        ctx->r5 = ADD32(0, 0X10);
            goto L_80072100;
    }
    // 0x800720F4: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x800720F8: b           L_80072118
    // 0x800720FC: addiu       $v0, $zero, 0x33
    ctx->r2 = ADD32(0, 0X33);
        goto L_80072118;
    // 0x800720FC: addiu       $v0, $zero, 0x33
    ctx->r2 = ADD32(0, 0X33);
L_80072100:
    // 0x80072100: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80072104: bne         $v0, $at, L_80072114
    if (ctx->r2 != ctx->r1) {
        // 0x80072108: addiu       $v1, $zero, 0x64
        ctx->r3 = ADD32(0, 0X64);
            goto L_80072114;
    }
    // 0x80072108: addiu       $v1, $zero, 0x64
    ctx->r3 = ADD32(0, 0X64);
    // 0x8007210C: b           L_80072114
    // 0x80072110: addiu       $v1, $zero, 0x61
    ctx->r3 = ADD32(0, 0X61);
        goto L_80072114;
    // 0x80072110: addiu       $v1, $zero, 0x61
    ctx->r3 = ADD32(0, 0X61);
L_80072114:
    // 0x80072114: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80072118:
    // 0x80072118: jal         0x8002135C
    // 0x8007211C: andi        $a2, $v0, 0xFF
    ctx->r6 = ctx->r2 & 0XFF;
    func_8002135C(rdram, ctx);
        goto after_76;
    // 0x8007211C: andi        $a2, $v0, 0xFF
    ctx->r6 = ctx->r2 & 0XFF;
    after_76:
    // 0x80072120: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
    // 0x80072124: addiu       $t2, $zero, 0x2A
    ctx->r10 = ADD32(0, 0X2A);
    // 0x80072128: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x8007212C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80072130: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80072134: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x80072138: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    // 0x8007213C: jal         0x80070A78
    // 0x80072140: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80070A78(rdram, ctx);
        goto after_77;
    // 0x80072140: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_77:
    // 0x80072144: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80072148: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8007214C: jal         0x8002135C
    // 0x80072150: addiu       $a2, $zero, 0x3B
    ctx->r6 = ADD32(0, 0X3B);
    func_8002135C(rdram, ctx);
        goto after_78;
    // 0x80072150: addiu       $a2, $zero, 0x3B
    ctx->r6 = ADD32(0, 0X3B);
    after_78:
    // 0x80072154: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80072158: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8007215C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80072160: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80072164: jr          $ra
    // 0x80072168: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80072168: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8007216C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007216C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80072170: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80072174: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80072178: jal         0x8002A7B0
    // 0x8007217C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8002A7B0(rdram, ctx);
        goto after_0;
    // 0x8007217C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x80072180: lui         $s0, 0x801B
    ctx->r16 = S32(0X801B << 16);
    // 0x80072184: addiu       $s0, $s0, 0x3A58
    ctx->r16 = ADD32(ctx->r16, 0X3A58);
    // 0x80072188: addiu       $t6, $zero, 0x3D
    ctx->r14 = ADD32(0, 0X3D);
    // 0x8007218C: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x80072190: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x80072194: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80072198: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8007219C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800721A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800721A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800721A8: jal         0x80070988
    // 0x800721AC: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    func_80070988(rdram, ctx);
        goto after_1;
    // 0x800721AC: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    after_1:
    // 0x800721B0: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x800721B4: addiu       $t0, $zero, 0x36
    ctx->r8 = ADD32(0, 0X36);
    // 0x800721B8: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    // 0x800721BC: addiu       $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
    // 0x800721C0: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x800721C4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x800721C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800721CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800721D0: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    // 0x800721D4: jal         0x80070B08
    // 0x800721D8: sw          $a0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r4;
    func_80070B08(rdram, ctx);
        goto after_2;
    // 0x800721D8: sw          $a0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r4;
    after_2:
    // 0x800721DC: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x800721E0: lh          $v0, 0x3A08($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X3A08);
    // 0x800721E4: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x800721E8: bne         $v0, $zero, L_800721F8
    if (ctx->r2 != 0) {
        // 0x800721EC: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_800721F8;
    }
    // 0x800721EC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800721F0: b           L_8007220C
    // 0x800721F4: addiu       $v0, $zero, 0x33
    ctx->r2 = ADD32(0, 0X33);
        goto L_8007220C;
    // 0x800721F4: addiu       $v0, $zero, 0x33
    ctx->r2 = ADD32(0, 0X33);
L_800721F8:
    // 0x800721F8: bne         $v0, $at, L_80072208
    if (ctx->r2 != ctx->r1) {
        // 0x800721FC: addiu       $v1, $zero, 0x64
        ctx->r3 = ADD32(0, 0X64);
            goto L_80072208;
    }
    // 0x800721FC: addiu       $v1, $zero, 0x64
    ctx->r3 = ADD32(0, 0X64);
    // 0x80072200: b           L_80072208
    // 0x80072204: addiu       $v1, $zero, 0x61
    ctx->r3 = ADD32(0, 0X61);
        goto L_80072208;
    // 0x80072204: addiu       $v1, $zero, 0x61
    ctx->r3 = ADD32(0, 0X61);
L_80072208:
    // 0x80072208: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8007220C:
    // 0x8007220C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80072210: jal         0x8002135C
    // 0x80072214: andi        $a2, $v0, 0xFF
    ctx->r6 = ctx->r2 & 0XFF;
    func_8002135C(rdram, ctx);
        goto after_3;
    // 0x80072214: andi        $a2, $v0, 0xFF
    ctx->r6 = ctx->r2 & 0XFF;
    after_3:
    // 0x80072218: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x8007221C: addiu       $t4, $zero, 0x36
    ctx->r12 = ADD32(0, 0X36);
    // 0x80072220: lw          $a0, 0x0($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X0);
    // 0x80072224: addiu       $t5, $zero, 0x6
    ctx->r13 = ADD32(0, 0X6);
    // 0x80072228: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x8007222C: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80072230: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80072234: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x80072238: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    // 0x8007223C: jal         0x80070A78
    // 0x80072240: sw          $a0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r4;
    func_80070A78(rdram, ctx);
        goto after_4;
    // 0x80072240: sw          $a0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r4;
    after_4:
    // 0x80072244: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80072248: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8007224C: jal         0x8002135C
    // 0x80072250: addiu       $a2, $zero, 0x3B
    ctx->r6 = ADD32(0, 0X3B);
    func_8002135C(rdram, ctx);
        goto after_5;
    // 0x80072250: addiu       $a2, $zero, 0x3B
    ctx->r6 = ADD32(0, 0X3B);
    after_5:
    // 0x80072254: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x80072258: addiu       $t8, $zero, 0x37
    ctx->r24 = ADD32(0, 0X37);
    // 0x8007225C: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    // 0x80072260: addiu       $t9, $zero, 0x7
    ctx->r25 = ADD32(0, 0X7);
    // 0x80072264: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x80072268: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8007226C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80072270: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80072274: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    // 0x80072278: jal         0x80070988
    // 0x8007227C: sw          $a0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r4;
    func_80070988(rdram, ctx);
        goto after_6;
    // 0x8007227C: sw          $a0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r4;
    after_6:
    // 0x80072280: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80072284: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80072288: jr          $ra
    // 0x8007228C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8007228C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80072290(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80072290: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80072294: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x80072298: lh          $t6, 0x2E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X2E);
    // 0x8007229C: lh          $t8, 0x32($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X32);
    // 0x800722A0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800722A4: addiu       $t7, $t6, 0x39
    ctx->r15 = ADD32(ctx->r14, 0X39);
    // 0x800722A8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800722AC: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x800722B0: jal         0x80070988
    // 0x800722B4: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    func_80070988(rdram, ctx);
        goto after_0;
    // 0x800722B4: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    after_0:
    // 0x800722B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800722BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800722C0: jr          $ra
    // 0x800722C4: nop

    return;
    // 0x800722C4: nop

;}
RECOMP_FUNC void func_800722C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800722C8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800722CC: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x800722D0: lh          $t6, 0x2E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X2E);
    // 0x800722D4: lh          $t8, 0x32($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X32);
    // 0x800722D8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800722DC: addiu       $t7, $t6, 0x7B
    ctx->r15 = ADD32(ctx->r14, 0X7B);
    // 0x800722E0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800722E4: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x800722E8: jal         0x80070988
    // 0x800722EC: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    func_80070988(rdram, ctx);
        goto after_0;
    // 0x800722EC: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    after_0:
    // 0x800722F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800722F4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800722F8: jr          $ra
    // 0x800722FC: nop

    return;
    // 0x800722FC: nop

;}
RECOMP_FUNC void func_80072300(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80072300: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x80072304: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x80072308: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8007230C: sw          $a1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r5;
    // 0x80072310: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80072314: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x80072318: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x8007231C: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x80072320: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x80072324: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x80072328: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x8007232C: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80072330: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80072334: jal         0x8002A7B0
    // 0x80072338: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_8002A7B0(rdram, ctx);
        goto after_0;
    // 0x80072338: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_0:
    // 0x8007233C: lw          $s0, 0x8C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X8C);
    // 0x80072340: addiu       $at, $zero, 0x18
    ctx->r1 = ADD32(0, 0X18);
    // 0x80072344: div         $zero, $s0, $at
    lo = S32(S64(S32(ctx->r16)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r16)) % S64(S32(ctx->r1)));
    // 0x80072348: lui         $s2, 0x801B
    ctx->r18 = S32(0X801B << 16);
    // 0x8007234C: lui         $s7, 0x8011
    ctx->r23 = S32(0X8011 << 16);
    // 0x80072350: addiu       $s2, $s2, 0x3A58
    ctx->r18 = ADD32(ctx->r18, 0X3A58);
    // 0x80072354: addiu       $s7, $s7, -0x3888
    ctx->r23 = ADD32(ctx->r23, -0X3888);
    // 0x80072358: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
    // 0x8007235C: addiu       $s6, $zero, 0x8
    ctx->r22 = ADD32(0, 0X8);
    // 0x80072360: or          $s4, $s7, $zero
    ctx->r20 = ctx->r23 | 0;
    // 0x80072364: mflo        $s5
    ctx->r21 = lo;
    // 0x80072368: or          $s0, $s5, $zero
    ctx->r16 = ctx->r21 | 0;
    // 0x8007236C: nop

L_80072370:
    // 0x80072370: lw          $t7, 0x0($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X0);
    // 0x80072374: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x80072378: sb          $zero, 0x4($t7)
    MEM_B(0X4, ctx->r15) = 0;
    // 0x8007237C: lw          $t8, 0x0($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X0);
    // 0x80072380: slti        $at, $s6, 0x2C
    ctx->r1 = SIGNED(ctx->r22) < 0X2C ? 1 : 0;
    // 0x80072384: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x80072388: bne         $at, $zero, L_80072370
    if (ctx->r1 != 0) {
        // 0x8007238C: sw          $t9, 0x0($s2)
        MEM_W(0X0, ctx->r18) = ctx->r25;
            goto L_80072370;
    }
    // 0x8007238C: sw          $t9, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r25;
    // 0x80072390: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x80072394: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
L_80072398:
    // 0x80072398: jal         0x8002F310
    // 0x8007239C: addiu       $s4, $s4, 0x20
    ctx->r20 = ADD32(ctx->r20, 0X20);
    func_8002F310(rdram, ctx);
        goto after_1;
    // 0x8007239C: addiu       $s4, $s4, 0x20
    ctx->r20 = ADD32(ctx->r20, 0X20);
    after_1:
    // 0x800723A0: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x800723A4: slti        $at, $s6, 0x12
    ctx->r1 = SIGNED(ctx->r22) < 0X12 ? 1 : 0;
    // 0x800723A8: bne         $at, $zero, L_80072398
    if (ctx->r1 != 0) {
        // 0x800723AC: or          $a0, $s4, $zero
        ctx->r4 = ctx->r20 | 0;
            goto L_80072398;
    }
    // 0x800723AC: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x800723B0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800723B4: jal         0x8002A7B0
    // 0x800723B8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_8002A7B0(rdram, ctx);
        goto after_2;
    // 0x800723B8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_2:
    // 0x800723BC: addiu       $t1, $s0, 0x5
    ctx->r9 = ADD32(ctx->r16, 0X5);
    // 0x800723C0: slt         $at, $t1, $s0
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x800723C4: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
    // 0x800723C8: or          $s4, $s7, $zero
    ctx->r20 = ctx->r23 | 0;
    // 0x800723CC: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x800723D0: sw          $zero, 0x80($sp)
    MEM_W(0X80, ctx->r29) = 0;
    // 0x800723D4: bne         $at, $zero, L_800729F4
    if (ctx->r1 != 0) {
        // 0x800723D8: or          $s6, $s0, $zero
        ctx->r22 = ctx->r16 | 0;
            goto L_800729F4;
    }
    // 0x800723D8: or          $s6, $s0, $zero
    ctx->r22 = ctx->r16 | 0;
    // 0x800723DC: addiu       $t2, $s5, 0x5
    ctx->r10 = ADD32(ctx->r21, 0X5);
    // 0x800723E0: sw          $t2, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r10;
    // 0x800723E4: addiu       $s7, $zero, 0x11
    ctx->r23 = ADD32(0, 0X11);
L_800723E8:
    // 0x800723E8: lui         $t3, 0x801B
    ctx->r11 = S32(0X801B << 16);
    // 0x800723EC: lw          $t3, 0x3A4C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X3A4C);
    // 0x800723F0: addiu       $s0, $zero, 0x8
    ctx->r16 = ADD32(0, 0X8);
    // 0x800723F4: slt         $at, $s6, $t3
    ctx->r1 = SIGNED(ctx->r22) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x800723F8: beq         $at, $zero, L_80072998
    if (ctx->r1 == 0) {
        // 0x800723FC: addiu       $s1, $s3, 0x8
        ctx->r17 = ADD32(ctx->r19, 0X8);
            goto L_80072998;
    }
    // 0x800723FC: addiu       $s1, $s3, 0x8
    ctx->r17 = ADD32(ctx->r19, 0X8);
    // 0x80072400: lw          $v1, 0x8C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X8C);
    // 0x80072404: addiu       $at, $zero, 0x18
    ctx->r1 = ADD32(0, 0X18);
    // 0x80072408: div         $zero, $v1, $at
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r1)));
    // 0x8007240C: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x80072410: lw          $t0, 0x80($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X80);
    // 0x80072414: addiu       $t5, $t5, 0xB88
    ctx->r13 = ADD32(ctx->r13, 0XB88);
    // 0x80072418: sll         $t4, $s6, 2
    ctx->r12 = S32(ctx->r22 << 2);
    // 0x8007241C: addu        $s5, $t4, $t5
    ctx->r21 = ADD32(ctx->r12, ctx->r13);
    // 0x80072420: lbu         $a0, 0x0($s5)
    ctx->r4 = MEM_BU(ctx->r21, 0X0);
    // 0x80072424: sll         $t7, $t0, 2
    ctx->r15 = S32(ctx->r8 << 2);
    // 0x80072428: lbu         $t8, 0x1($s5)
    ctx->r24 = MEM_BU(ctx->r21, 0X1);
    // 0x8007242C: subu        $t7, $t7, $t0
    ctx->r15 = SUB32(ctx->r15, ctx->r8);
    // 0x80072430: sll         $t0, $t7, 3
    ctx->r8 = S32(ctx->r15 << 3);
    // 0x80072434: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x80072438: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x8007243C: andi        $v0, $a0, 0x1
    ctx->r2 = ctx->r4 & 0X1;
    // 0x80072440: sltiu       $t9, $v0, 0x1
    ctx->r25 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80072444: addiu       $t4, $t4, -0x2CF0
    ctx->r12 = ADD32(ctx->r12, -0X2CF0);
    // 0x80072448: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8007244C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x80072450: andi        $t1, $a0, 0x10
    ctx->r9 = ctx->r4 & 0X10;
    // 0x80072454: mfhi        $t6
    ctx->r14 = hi;
    // 0x80072458: negu        $v1, $t6
    ctx->r3 = SUB32(0, ctx->r14);
    // 0x8007245C: bne         $t8, $at, L_80072468
    if (ctx->r24 != ctx->r1) {
        // 0x80072460: addu        $s1, $t0, $v1
        ctx->r17 = ADD32(ctx->r8, ctx->r3);
            goto L_80072468;
    }
    // 0x80072460: addu        $s1, $t0, $v1
    ctx->r17 = ADD32(ctx->r8, ctx->r3);
    // 0x80072464: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
L_80072468:
    // 0x80072468: sll         $t3, $v0, 2
    ctx->r11 = S32(ctx->r2 << 2);
    // 0x8007246C: addu        $t3, $t3, $v0
    ctx->r11 = ADD32(ctx->r11, ctx->r2);
    // 0x80072470: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80072474: addu        $t3, $t3, $v0
    ctx->r11 = ADD32(ctx->r11, ctx->r2);
    // 0x80072478: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x8007247C: addu        $t3, $t3, $v0
    ctx->r11 = ADD32(ctx->r11, ctx->r2);
    // 0x80072480: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80072484: addu        $t3, $t3, $v0
    ctx->r11 = ADD32(ctx->r11, ctx->r2);
    // 0x80072488: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8007248C: addu        $fp, $t3, $t4
    ctx->r30 = ADD32(ctx->r11, ctx->r12);
    // 0x80072490: lhu         $t5, 0x8($fp)
    ctx->r13 = MEM_HU(ctx->r30, 0X8);
    // 0x80072494: sra         $t2, $t1, 4
    ctx->r10 = S32(SIGNED(ctx->r9) >> 4);
    // 0x80072498: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x8007249C: bne         $t6, $zero, L_80072724
    if (ctx->r14 != 0) {
        // 0x800724A0: sw          $t2, 0x64($sp)
        MEM_W(0X64, ctx->r29) = ctx->r10;
            goto L_80072724;
    }
    // 0x800724A0: sw          $t2, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r10;
    // 0x800724A4: lw          $t7, 0x0($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X0);
    // 0x800724A8: addu        $s1, $t0, $v1
    ctx->r17 = ADD32(ctx->r8, ctx->r3);
    // 0x800724AC: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    // 0x800724B0: addiu       $t9, $zero, 0x38
    ctx->r25 = ADD32(0, 0X38);
    // 0x800724B4: addiu       $t1, $s3, 0x8
    ctx->r9 = ADD32(ctx->r19, 0X8);
    // 0x800724B8: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x800724BC: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x800724C0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x800724C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800724C8: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x800724CC: jal         0x80070B08
    // 0x800724D0: sw          $a0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r4;
    func_80070B08(rdram, ctx);
        goto after_3;
    // 0x800724D0: sw          $a0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r4;
    after_3:
    // 0x800724D4: lw          $t2, 0x0($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X0);
    // 0x800724D8: addiu       $s0, $s1, 0x4
    ctx->r16 = ADD32(ctx->r17, 0X4);
    // 0x800724DC: sh          $zero, 0x6($t2)
    MEM_H(0X6, ctx->r10) = 0;
    // 0x800724E0: lw          $t3, 0x0($s2)
    ctx->r11 = MEM_W(ctx->r18, 0X0);
    // 0x800724E4: addiu       $t5, $zero, 0x38
    ctx->r13 = ADD32(0, 0X38);
    // 0x800724E8: lw          $a0, 0x0($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X0);
    // 0x800724EC: addiu       $v0, $s3, 0x9
    ctx->r2 = ADD32(ctx->r19, 0X9);
    // 0x800724F0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x800724F4: sw          $v0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r2;
    // 0x800724F8: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x800724FC: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x80072500: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80072504: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x80072508: jal         0x80070A78
    // 0x8007250C: sw          $a0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r4;
    func_80070A78(rdram, ctx);
        goto after_4;
    // 0x8007250C: sw          $a0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r4;
    after_4:
    // 0x80072510: lw          $t7, 0x0($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X0);
    // 0x80072514: addiu       $t6, $zero, 0x200
    ctx->r14 = ADD32(0, 0X200);
    // 0x80072518: sh          $t6, 0x6($t7)
    MEM_H(0X6, ctx->r15) = ctx->r14;
    // 0x8007251C: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x80072520: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80072524: jal         0x8002135C
    // 0x80072528: addiu       $a2, $zero, 0x3B
    ctx->r6 = ADD32(0, 0X3B);
    func_8002135C(rdram, ctx);
        goto after_5;
    // 0x80072528: addiu       $a2, $zero, 0x3B
    ctx->r6 = ADD32(0, 0X3B);
    after_5:
    // 0x8007252C: lw          $t8, 0x0($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X0);
    // 0x80072530: addiu       $t1, $zero, 0x3C
    ctx->r9 = ADD32(0, 0X3C);
    // 0x80072534: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    // 0x80072538: addiu       $t2, $s3, 0xA
    ctx->r10 = ADD32(ctx->r19, 0XA);
    // 0x8007253C: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x80072540: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80072544: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80072548: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x8007254C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x80072550: jal         0x80070B08
    // 0x80072554: sw          $a0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r4;
    func_80070B08(rdram, ctx);
        goto after_6;
    // 0x80072554: sw          $a0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r4;
    after_6:
    // 0x80072558: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8007255C: lh          $v0, 0x3A08($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X3A08);
    // 0x80072560: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80072564: bne         $v0, $zero, L_80072574
    if (ctx->r2 != 0) {
        // 0x80072568: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_80072574;
    }
    // 0x80072568: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8007256C: b           L_80072588
    // 0x80072570: addiu       $v0, $zero, 0x34
    ctx->r2 = ADD32(0, 0X34);
        goto L_80072588;
    // 0x80072570: addiu       $v0, $zero, 0x34
    ctx->r2 = ADD32(0, 0X34);
L_80072574:
    // 0x80072574: bne         $v0, $at, L_80072584
    if (ctx->r2 != ctx->r1) {
        // 0x80072578: addiu       $v1, $zero, 0x65
        ctx->r3 = ADD32(0, 0X65);
            goto L_80072584;
    }
    // 0x80072578: addiu       $v1, $zero, 0x65
    ctx->r3 = ADD32(0, 0X65);
    // 0x8007257C: b           L_80072584
    // 0x80072580: addiu       $v1, $zero, 0x62
    ctx->r3 = ADD32(0, 0X62);
        goto L_80072584;
    // 0x80072580: addiu       $v1, $zero, 0x62
    ctx->r3 = ADD32(0, 0X62);
L_80072584:
    // 0x80072584: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80072588:
    // 0x80072588: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x8007258C: jal         0x8002135C
    // 0x80072590: andi        $a2, $v0, 0xFF
    ctx->r6 = ctx->r2 & 0XFF;
    func_8002135C(rdram, ctx);
        goto after_7;
    // 0x80072590: andi        $a2, $v0, 0xFF
    ctx->r6 = ctx->r2 & 0XFF;
    after_7:
    // 0x80072594: lw          $t3, 0x0($s2)
    ctx->r11 = MEM_W(ctx->r18, 0X0);
    // 0x80072598: addiu       $t6, $zero, 0x3C
    ctx->r14 = ADD32(0, 0X3C);
    // 0x8007259C: sh          $zero, 0x6($t3)
    MEM_H(0X6, ctx->r11) = 0;
    // 0x800725A0: lw          $t4, 0x0($s2)
    ctx->r12 = MEM_W(ctx->r18, 0X0);
    // 0x800725A4: addiu       $t7, $s3, 0xB
    ctx->r15 = ADD32(ctx->r19, 0XB);
    // 0x800725A8: lw          $a0, 0x0($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X0);
    // 0x800725AC: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x800725B0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800725B4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x800725B8: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x800725BC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x800725C0: jal         0x80070A78
    // 0x800725C4: sw          $a0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r4;
    func_80070A78(rdram, ctx);
        goto after_8;
    // 0x800725C4: sw          $a0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r4;
    after_8:
    // 0x800725C8: lw          $t9, 0x0($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X0);
    // 0x800725CC: addiu       $t8, $zero, 0x200
    ctx->r24 = ADD32(0, 0X200);
    // 0x800725D0: sh          $t8, 0x6($t9)
    MEM_H(0X6, ctx->r25) = ctx->r24;
    // 0x800725D4: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x800725D8: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x800725DC: jal         0x8002135C
    // 0x800725E0: addiu       $a2, $zero, 0x3B
    ctx->r6 = ADD32(0, 0X3B);
    func_8002135C(rdram, ctx);
        goto after_9;
    // 0x800725E0: addiu       $a2, $zero, 0x3B
    ctx->r6 = ADD32(0, 0X3B);
    after_9:
    // 0x800725E4: lbu         $t1, 0x1($s5)
    ctx->r9 = MEM_BU(ctx->r21, 0X1);
    // 0x800725E8: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x800725EC: addiu       $t2, $s3, 0xC
    ctx->r10 = ADD32(ctx->r19, 0XC);
    // 0x800725F0: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x800725F4: addiu       $s4, $s4, 0x20
    ctx->r20 = ADD32(ctx->r20, 0X20);
    // 0x800725F8: addiu       $a1, $zero, 0xDA
    ctx->r5 = ADD32(0, 0XDA);
    // 0x800725FC: addiu       $a2, $s1, 0x5C
    ctx->r6 = ADD32(ctx->r17, 0X5C);
    // 0x80072600: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    // 0x80072604: sw          $fp, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r30;
    // 0x80072608: jal         0x80070DF8
    // 0x8007260C: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    func_80070DF8(rdram, ctx);
        goto after_10;
    // 0x8007260C: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    after_10:
    // 0x80072610: lw          $t3, 0x0($s2)
    ctx->r11 = MEM_W(ctx->r18, 0X0);
    // 0x80072614: addiu       $s0, $s1, 0x5B
    ctx->r16 = ADD32(ctx->r17, 0X5B);
    // 0x80072618: lw          $a0, 0x0($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X0);
    // 0x8007261C: addiu       $t5, $zero, 0x48
    ctx->r13 = ADD32(0, 0X48);
    // 0x80072620: addiu       $t6, $s3, 0xD
    ctx->r14 = ADD32(ctx->r19, 0XD);
    // 0x80072624: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x80072628: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x8007262C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x80072630: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    // 0x80072634: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    // 0x80072638: jal         0x80070988
    // 0x8007263C: sw          $a0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r4;
    func_80070988(rdram, ctx);
        goto after_11;
    // 0x8007263C: sw          $a0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r4;
    after_11:
    // 0x80072640: lhu         $t7, 0x2($s5)
    ctx->r15 = MEM_HU(ctx->r21, 0X2);
    // 0x80072644: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x80072648: div         $zero, $t7, $at
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r1)));
    // 0x8007264C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x80072650: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x80072654: addiu       $t1, $s3, 0xE
    ctx->r9 = ADD32(ctx->r19, 0XE);
    // 0x80072658: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x8007265C: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x80072660: addiu       $s4, $s4, 0x20
    ctx->r20 = ADD32(ctx->r20, 0X20);
    // 0x80072664: addiu       $a1, $zero, 0xA8
    ctx->r5 = ADD32(0, 0XA8);
    // 0x80072668: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x8007266C: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    // 0x80072670: mfhi        $t8
    ctx->r24 = hi;
    // 0x80072674: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80072678: jal         0x80070CE8
    // 0x8007267C: nop

    func_80070CE8(rdram, ctx);
        goto after_12;
    // 0x8007267C: nop

    after_12:
    // 0x80072680: lhu         $t2, 0x2($s5)
    ctx->r10 = MEM_HU(ctx->r21, 0X2);
    // 0x80072684: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x80072688: div         $zero, $t2, $at
    lo = S32(S64(S32(ctx->r10)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r10)) % S64(S32(ctx->r1)));
    // 0x8007268C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x80072690: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x80072694: addiu       $t5, $s3, 0xF
    ctx->r13 = ADD32(ctx->r19, 0XF);
    // 0x80072698: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x8007269C: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x800726A0: addiu       $s4, $s4, 0x20
    ctx->r20 = ADD32(ctx->r20, 0X20);
    // 0x800726A4: addiu       $a1, $zero, 0x90
    ctx->r5 = ADD32(0, 0X90);
    // 0x800726A8: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x800726AC: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    // 0x800726B0: mflo        $t3
    ctx->r11 = lo;
    // 0x800726B4: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x800726B8: jal         0x80070D70
    // 0x800726BC: nop

    func_80070D70(rdram, ctx);
        goto after_13;
    // 0x800726BC: nop

    after_13:
    // 0x800726C0: lw          $t6, 0x0($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X0);
    // 0x800726C4: lui         $t8, 0x801B
    ctx->r24 = S32(0X801B << 16);
    // 0x800726C8: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x800726CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800726D0: sw          $t7, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r15;
    // 0x800726D4: lh          $t8, 0x3A62($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X3A62);
    // 0x800726D8: lh          $a3, 0x66($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X66);
    // 0x800726DC: slt         $at, $s6, $t8
    ctx->r1 = SIGNED(ctx->r22) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x800726E0: bne         $at, $zero, L_8007270C
    if (ctx->r1 != 0) {
        // 0x800726E4: or          $a2, $s1, $zero
        ctx->r6 = ctx->r17 | 0;
            goto L_8007270C;
    }
    // 0x800726E4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x800726E8: lh          $a3, 0x66($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X66);
    // 0x800726EC: addiu       $t9, $s3, 0x10
    ctx->r25 = ADD32(ctx->r19, 0X10);
    // 0x800726F0: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x800726F4: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x800726F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800726FC: jal         0x800722C8
    // 0x80072700: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    func_800722C8(rdram, ctx);
        goto after_14;
    // 0x80072700: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_14:
    // 0x80072704: b           L_800729D8
    // 0x80072708: lw          $t1, 0x80($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X80);
        goto L_800729D8;
    // 0x80072708: lw          $t1, 0x80($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X80);
L_8007270C:
    // 0x8007270C: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x80072710: addiu       $t1, $s3, 0x10
    ctx->r9 = ADD32(ctx->r19, 0X10);
    // 0x80072714: jal         0x80072290
    // 0x80072718: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    func_80072290(rdram, ctx);
        goto after_15;
    // 0x80072718: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    after_15:
    // 0x8007271C: b           L_800729D8
    // 0x80072720: lw          $t1, 0x80($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X80);
        goto L_800729D8;
    // 0x80072720: lw          $t1, 0x80($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X80);
L_80072724:
    // 0x80072724: lw          $t2, 0x0($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X0);
    // 0x80072728: addiu       $t4, $zero, 0x38
    ctx->r12 = ADD32(0, 0X38);
    // 0x8007272C: lw          $a0, 0x0($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X0);
    // 0x80072730: addiu       $t5, $s3, 0x8
    ctx->r13 = ADD32(ctx->r19, 0X8);
    // 0x80072734: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x80072738: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x8007273C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x80072740: jal         0x80070B08
    // 0x80072744: sw          $a0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r4;
    func_80070B08(rdram, ctx);
        goto after_16;
    // 0x80072744: sw          $a0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r4;
    after_16:
    // 0x80072748: lw          $t6, 0x0($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X0);
    // 0x8007274C: addiu       $s0, $s1, 0x4
    ctx->r16 = ADD32(ctx->r17, 0X4);
    // 0x80072750: sh          $zero, 0x6($t6)
    MEM_H(0X6, ctx->r14) = 0;
    // 0x80072754: lw          $t7, 0x0($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X0);
    // 0x80072758: addiu       $t9, $zero, 0x38
    ctx->r25 = ADD32(0, 0X38);
    // 0x8007275C: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    // 0x80072760: addiu       $v0, $s3, 0x9
    ctx->r2 = ADD32(ctx->r19, 0X9);
    // 0x80072764: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80072768: sw          $v0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r2;
    // 0x8007276C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80072770: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x80072774: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80072778: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x8007277C: jal         0x80070A78
    // 0x80072780: sw          $a0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r4;
    func_80070A78(rdram, ctx);
        goto after_17;
    // 0x80072780: sw          $a0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r4;
    after_17:
    // 0x80072784: lw          $t2, 0x0($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X0);
    // 0x80072788: addiu       $t1, $zero, 0x200
    ctx->r9 = ADD32(0, 0X200);
    // 0x8007278C: sh          $t1, 0x6($t2)
    MEM_H(0X6, ctx->r10) = ctx->r9;
    // 0x80072790: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x80072794: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80072798: jal         0x8002135C
    // 0x8007279C: addiu       $a2, $zero, 0x3B
    ctx->r6 = ADD32(0, 0X3B);
    func_8002135C(rdram, ctx);
        goto after_18;
    // 0x8007279C: addiu       $a2, $zero, 0x3B
    ctx->r6 = ADD32(0, 0X3B);
    after_18:
    // 0x800727A0: lw          $t3, 0x0($s2)
    ctx->r11 = MEM_W(ctx->r18, 0X0);
    // 0x800727A4: addiu       $t5, $zero, 0x3B
    ctx->r13 = ADD32(0, 0X3B);
    // 0x800727A8: lw          $a0, 0x0($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X0);
    // 0x800727AC: addiu       $t6, $s3, 0xA
    ctx->r14 = ADD32(ctx->r19, 0XA);
    // 0x800727B0: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x800727B4: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x800727B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800727BC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x800727C0: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x800727C4: jal         0x80070B08
    // 0x800727C8: sw          $a0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r4;
    func_80070B08(rdram, ctx);
        goto after_19;
    // 0x800727C8: sw          $a0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r4;
    after_19:
    // 0x800727CC: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x800727D0: lh          $v0, 0x3A08($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X3A08);
    // 0x800727D4: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x800727D8: bne         $v0, $zero, L_800727E8
    if (ctx->r2 != 0) {
        // 0x800727DC: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_800727E8;
    }
    // 0x800727DC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800727E0: b           L_800727FC
    // 0x800727E4: addiu       $v0, $zero, 0x34
    ctx->r2 = ADD32(0, 0X34);
        goto L_800727FC;
    // 0x800727E4: addiu       $v0, $zero, 0x34
    ctx->r2 = ADD32(0, 0X34);
L_800727E8:
    // 0x800727E8: bne         $v0, $at, L_800727F8
    if (ctx->r2 != ctx->r1) {
        // 0x800727EC: addiu       $v1, $zero, 0x65
        ctx->r3 = ADD32(0, 0X65);
            goto L_800727F8;
    }
    // 0x800727EC: addiu       $v1, $zero, 0x65
    ctx->r3 = ADD32(0, 0X65);
    // 0x800727F0: b           L_800727F8
    // 0x800727F4: addiu       $v1, $zero, 0x62
    ctx->r3 = ADD32(0, 0X62);
        goto L_800727F8;
    // 0x800727F4: addiu       $v1, $zero, 0x62
    ctx->r3 = ADD32(0, 0X62);
L_800727F8:
    // 0x800727F8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_800727FC:
    // 0x800727FC: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x80072800: jal         0x8002135C
    // 0x80072804: andi        $a2, $v0, 0xFF
    ctx->r6 = ctx->r2 & 0XFF;
    func_8002135C(rdram, ctx);
        goto after_20;
    // 0x80072804: andi        $a2, $v0, 0xFF
    ctx->r6 = ctx->r2 & 0XFF;
    after_20:
    // 0x80072808: lw          $t7, 0x0($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X0);
    // 0x8007280C: addiu       $t1, $zero, 0x3B
    ctx->r9 = ADD32(0, 0X3B);
    // 0x80072810: sh          $zero, 0x6($t7)
    MEM_H(0X6, ctx->r15) = 0;
    // 0x80072814: lw          $t8, 0x0($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X0);
    // 0x80072818: addiu       $t2, $s3, 0xB
    ctx->r10 = ADD32(ctx->r19, 0XB);
    // 0x8007281C: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    // 0x80072820: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x80072824: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80072828: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8007282C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x80072830: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x80072834: jal         0x80070A78
    // 0x80072838: sw          $a0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r4;
    func_80070A78(rdram, ctx);
        goto after_21;
    // 0x80072838: sw          $a0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r4;
    after_21:
    // 0x8007283C: lw          $t4, 0x0($s2)
    ctx->r12 = MEM_W(ctx->r18, 0X0);
    // 0x80072840: addiu       $t3, $zero, 0x200
    ctx->r11 = ADD32(0, 0X200);
    // 0x80072844: sh          $t3, 0x6($t4)
    MEM_H(0X6, ctx->r12) = ctx->r11;
    // 0x80072848: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x8007284C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80072850: jal         0x8002135C
    // 0x80072854: addiu       $a2, $zero, 0x3B
    ctx->r6 = ADD32(0, 0X3B);
    func_8002135C(rdram, ctx);
        goto after_22;
    // 0x80072854: addiu       $a2, $zero, 0x3B
    ctx->r6 = ADD32(0, 0X3B);
    after_22:
    // 0x80072858: lbu         $t5, 0x1($s5)
    ctx->r13 = MEM_BU(ctx->r21, 0X1);
    // 0x8007285C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x80072860: addiu       $t6, $s3, 0xC
    ctx->r14 = ADD32(ctx->r19, 0XC);
    // 0x80072864: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x80072868: addiu       $s4, $s4, 0x20
    ctx->r20 = ADD32(ctx->r20, 0X20);
    // 0x8007286C: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    // 0x80072870: addiu       $a2, $s1, 0x5C
    ctx->r6 = ADD32(ctx->r17, 0X5C);
    // 0x80072874: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    // 0x80072878: sw          $fp, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r30;
    // 0x8007287C: jal         0x80070DF8
    // 0x80072880: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    func_80070DF8(rdram, ctx);
        goto after_23;
    // 0x80072880: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    after_23:
    // 0x80072884: lw          $t7, 0x0($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X0);
    // 0x80072888: addiu       $s0, $s1, 0x5B
    ctx->r16 = ADD32(ctx->r17, 0X5B);
    // 0x8007288C: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    // 0x80072890: addiu       $t9, $zero, 0x48
    ctx->r25 = ADD32(0, 0X48);
    // 0x80072894: addiu       $t1, $s3, 0xD
    ctx->r9 = ADD32(ctx->r19, 0XD);
    // 0x80072898: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x8007289C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x800728A0: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x800728A4: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    // 0x800728A8: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    // 0x800728AC: jal         0x80070988
    // 0x800728B0: sw          $a0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r4;
    func_80070988(rdram, ctx);
        goto after_24;
    // 0x800728B0: sw          $a0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r4;
    after_24:
    // 0x800728B4: lhu         $t2, 0x2($s5)
    ctx->r10 = MEM_HU(ctx->r21, 0X2);
    // 0x800728B8: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x800728BC: div         $zero, $t2, $at
    lo = S32(S64(S32(ctx->r10)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r10)) % S64(S32(ctx->r1)));
    // 0x800728C0: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x800728C4: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x800728C8: addiu       $t5, $s3, 0xE
    ctx->r13 = ADD32(ctx->r19, 0XE);
    // 0x800728CC: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x800728D0: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x800728D4: addiu       $s4, $s4, 0x20
    ctx->r20 = ADD32(ctx->r20, 0X20);
    // 0x800728D8: addiu       $a1, $zero, 0xA8
    ctx->r5 = ADD32(0, 0XA8);
    // 0x800728DC: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x800728E0: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    // 0x800728E4: mfhi        $t3
    ctx->r11 = hi;
    // 0x800728E8: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x800728EC: jal         0x80070CE8
    // 0x800728F0: nop

    func_80070CE8(rdram, ctx);
        goto after_25;
    // 0x800728F0: nop

    after_25:
    // 0x800728F4: lhu         $t6, 0x2($s5)
    ctx->r14 = MEM_HU(ctx->r21, 0X2);
    // 0x800728F8: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x800728FC: div         $zero, $t6, $at
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r1)));
    // 0x80072900: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x80072904: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x80072908: addiu       $t9, $s3, 0xF
    ctx->r25 = ADD32(ctx->r19, 0XF);
    // 0x8007290C: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x80072910: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x80072914: addiu       $s4, $s4, 0x20
    ctx->r20 = ADD32(ctx->r20, 0X20);
    // 0x80072918: addiu       $a1, $zero, 0x90
    ctx->r5 = ADD32(0, 0X90);
    // 0x8007291C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x80072920: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    // 0x80072924: mflo        $t7
    ctx->r15 = lo;
    // 0x80072928: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8007292C: jal         0x80070D70
    // 0x80072930: nop

    func_80070D70(rdram, ctx);
        goto after_26;
    // 0x80072930: nop

    after_26:
    // 0x80072934: lw          $t1, 0x0($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X0);
    // 0x80072938: lui         $t3, 0x801B
    ctx->r11 = S32(0X801B << 16);
    // 0x8007293C: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x80072940: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80072944: sw          $t2, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r10;
    // 0x80072948: lh          $t3, 0x3A62($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X3A62);
    // 0x8007294C: lh          $a3, 0x66($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X66);
    // 0x80072950: slt         $at, $s6, $t3
    ctx->r1 = SIGNED(ctx->r22) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x80072954: bne         $at, $zero, L_80072980
    if (ctx->r1 != 0) {
        // 0x80072958: or          $a2, $s1, $zero
        ctx->r6 = ctx->r17 | 0;
            goto L_80072980;
    }
    // 0x80072958: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x8007295C: lh          $a3, 0x66($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X66);
    // 0x80072960: addiu       $t4, $s3, 0x10
    ctx->r12 = ADD32(ctx->r19, 0X10);
    // 0x80072964: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80072968: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x8007296C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80072970: jal         0x800722C8
    // 0x80072974: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    func_800722C8(rdram, ctx);
        goto after_27;
    // 0x80072974: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_27:
    // 0x80072978: b           L_800729D8
    // 0x8007297C: lw          $t1, 0x80($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X80);
        goto L_800729D8;
    // 0x8007297C: lw          $t1, 0x80($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X80);
L_80072980:
    // 0x80072980: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x80072984: addiu       $t5, $s3, 0x10
    ctx->r13 = ADD32(ctx->r19, 0X10);
    // 0x80072988: jal         0x80072290
    // 0x8007298C: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    func_80072290(rdram, ctx);
        goto after_28;
    // 0x8007298C: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    after_28:
    // 0x80072990: b           L_800729D8
    // 0x80072994: lw          $t1, 0x80($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X80);
        goto L_800729D8;
    // 0x80072994: lw          $t1, 0x80($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X80);
L_80072998:
    // 0x80072998: lw          $t6, 0x0($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X0);
    // 0x8007299C: addiu       $t8, $zero, 0x48
    ctx->r24 = ADD32(0, 0X48);
    // 0x800729A0: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    // 0x800729A4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x800729A8: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x800729AC: addiu       $a1, $zero, 0x1F4
    ctx->r5 = ADD32(0, 0X1F4);
    // 0x800729B0: addiu       $a2, $zero, 0x1F4
    ctx->r6 = ADD32(0, 0X1F4);
    // 0x800729B4: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x800729B8: jal         0x80070988
    // 0x800729BC: sw          $a0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r4;
    func_80070988(rdram, ctx);
        goto after_29;
    // 0x800729BC: sw          $a0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r4;
    after_29:
    // 0x800729C0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800729C4: bne         $s0, $s7, L_80072998
    if (ctx->r16 != ctx->r23) {
        // 0x800729C8: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_80072998;
    }
    // 0x800729C8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x800729CC: addiu       $t9, $s3, 0x9
    ctx->r25 = ADD32(ctx->r19, 0X9);
    // 0x800729D0: sw          $t9, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r25;
    // 0x800729D4: lw          $t1, 0x80($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X80);
L_800729D8:
    // 0x800729D8: lw          $t3, 0x54($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X54);
    // 0x800729DC: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x800729E0: lw          $s3, 0x58($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X58);
    // 0x800729E4: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x800729E8: slt         $at, $t3, $s6
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r22) ? 1 : 0;
    // 0x800729EC: beq         $at, $zero, L_800723E8
    if (ctx->r1 == 0) {
        // 0x800729F0: sw          $t2, 0x80($sp)
        MEM_W(0X80, ctx->r29) = ctx->r10;
            goto L_800723E8;
    }
    // 0x800729F0: sw          $t2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r10;
L_800729F4:
    // 0x800729F4: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x800729F8: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x800729FC: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80072A00: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80072A04: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x80072A08: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x80072A0C: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x80072A10: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x80072A14: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x80072A18: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x80072A1C: jr          $ra
    // 0x80072A20: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    return;
    // 0x80072A20: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void func_80072A24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80072A24: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80072A28: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80072A2C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80072A30: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80072A34: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80072A38: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x80072A3C: jal         0x80036234
    // 0x80072A40: sb          $t6, -0x4B5C($at)
    MEM_B(-0X4B5C, ctx->r1) = ctx->r14;
    func_80036234(rdram, ctx);
        goto after_0;
    // 0x80072A40: sb          $t6, -0x4B5C($at)
    MEM_B(-0X4B5C, ctx->r1) = ctx->r14;
    after_0:
    // 0x80072A44: lui         $a0, 0x803D
    ctx->r4 = S32(0X803D << 16);
    // 0x80072A48: jal         0x80035FF0
    // 0x80072A4C: addiu       $a0, $a0, 0x1D3C
    ctx->r4 = ADD32(ctx->r4, 0X1D3C);
    func_80035FF0(rdram, ctx);
        goto after_1;
    // 0x80072A4C: addiu       $a0, $a0, 0x1D3C
    ctx->r4 = ADD32(ctx->r4, 0X1D3C);
    after_1:
    // 0x80072A50: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x80072A54: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x80072A58: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80072A5C: addiu       $v1, $v1, -0x3770
    ctx->r3 = ADD32(ctx->r3, -0X3770);
    // 0x80072A60: sw          $t7, 0x3F6C($at)
    MEM_W(0X3F6C, ctx->r1) = ctx->r15;
    // 0x80072A64: lbu         $v0, 0x754($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X754);
    // 0x80072A68: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80072A6C: sh          $v0, 0x3A52($at)
    MEM_H(0X3A52, ctx->r1) = ctx->r2;
    // 0x80072A70: ori         $t8, $v0, 0x8
    ctx->r24 = ctx->r2 | 0X8;
    // 0x80072A74: jal         0x80073750
    // 0x80072A78: sb          $t8, 0x754($v1)
    MEM_B(0X754, ctx->r3) = ctx->r24;
    func_80073750(rdram, ctx);
        goto after_2;
    // 0x80072A78: sb          $t8, 0x754($v1)
    MEM_B(0X754, ctx->r3) = ctx->r24;
    after_2:
    // 0x80072A7C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80072A80: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80072A84: sw          $zero, 0x3A54($at)
    MEM_W(0X3A54, ctx->r1) = 0;
    // 0x80072A88: jal         0x80029D84
    // 0x80072A8C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80029D84(rdram, ctx);
        goto after_3;
    // 0x80072A8C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x80072A90: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80072A94: jal         0x80029DF8
    // 0x80072A98: addiu       $a1, $zero, 0x47
    ctx->r5 = ADD32(0, 0X47);
    func_80029DF8(rdram, ctx);
        goto after_4;
    // 0x80072A98: addiu       $a1, $zero, 0x47
    ctx->r5 = ADD32(0, 0X47);
    after_4:
    // 0x80072A9C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80072AA0: jal         0x8007116C
    // 0x80072AA4: nop

    func_8007116C(rdram, ctx);
        goto after_5;
    // 0x80072AA4: nop

    after_5:
    // 0x80072AA8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80072AAC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80072AB0: jal         0x80073F70
    // 0x80072AB4: sw          $t9, 0x6DE0($at)
    MEM_W(0X6DE0, ctx->r1) = ctx->r25;
    func_80073F70(rdram, ctx);
        goto after_6;
    // 0x80072AB4: sw          $t9, 0x6DE0($at)
    MEM_W(0X6DE0, ctx->r1) = ctx->r25;
    after_6:
    // 0x80072AB8: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80072ABC: addiu       $v1, $v1, 0x3F5C
    ctx->r3 = ADD32(ctx->r3, 0X3F5C);
    // 0x80072AC0: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x80072AC4: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x80072AC8: lh          $a1, 0x3A0C($a1)
    ctx->r5 = MEM_H(ctx->r5, 0X3A0C);
    // 0x80072ACC: jal         0x800741CC
    // 0x80072AD0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800741CC(rdram, ctx);
        goto after_7;
    // 0x80072AD0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_7:
    // 0x80072AD4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80072AD8: jal         0x80063B00
    // 0x80072ADC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80063B00(rdram, ctx);
        goto after_8;
    // 0x80072ADC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_8:
    // 0x80072AE0: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80072AE4: addiu       $v1, $v1, 0x3F5C
    ctx->r3 = ADD32(ctx->r3, 0X3F5C);
    // 0x80072AE8: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x80072AEC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80072AF0: sw          $v0, 0x64($t0)
    MEM_W(0X64, ctx->r8) = ctx->r2;
    // 0x80072AF4: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x80072AF8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80072AFC: sw          $zero, 0x6C($t1)
    MEM_W(0X6C, ctx->r9) = 0;
    // 0x80072B00: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x80072B04: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80072B08: sw          $t2, 0x68($t3)
    MEM_W(0X68, ctx->r11) = ctx->r10;
    // 0x80072B0C: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x80072B10: nop

    // 0x80072B14: swc1        $f4, 0x80($t4)
    MEM_W(0X80, ctx->r12) = ctx->f4.u32l;
    // 0x80072B18: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x80072B1C: lwc1        $f6, -0x5420($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X5420);
    // 0x80072B20: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80072B24: swc1        $f6, 0x84($t5)
    MEM_W(0X84, ctx->r13) = ctx->f6.u32l;
    // 0x80072B28: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x80072B2C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80072B30: jal         0x80073F70
    // 0x80072B34: swc1        $f8, 0x88($t6)
    MEM_W(0X88, ctx->r14) = ctx->f8.u32l;
    func_80073F70(rdram, ctx);
        goto after_9;
    // 0x80072B34: swc1        $f8, 0x88($t6)
    MEM_W(0X88, ctx->r14) = ctx->f8.u32l;
    after_9:
    // 0x80072B38: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80072B3C: addiu       $v1, $v1, 0x3F60
    ctx->r3 = ADD32(ctx->r3, 0X3F60);
    // 0x80072B40: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x80072B44: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x80072B48: lh          $a1, 0x3A2C($a1)
    ctx->r5 = MEM_H(ctx->r5, 0X3A2C);
    // 0x80072B4C: jal         0x800741CC
    // 0x80072B50: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800741CC(rdram, ctx);
        goto after_10;
    // 0x80072B50: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_10:
    // 0x80072B54: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80072B58: jal         0x80063B00
    // 0x80072B5C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80063B00(rdram, ctx);
        goto after_11;
    // 0x80072B5C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_11:
    // 0x80072B60: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80072B64: addiu       $v1, $v1, 0x3F60
    ctx->r3 = ADD32(ctx->r3, 0X3F60);
    // 0x80072B68: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x80072B6C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80072B70: sw          $v0, 0x64($t7)
    MEM_W(0X64, ctx->r15) = ctx->r2;
    // 0x80072B74: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x80072B78: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x80072B7C: sw          $zero, 0x6C($t8)
    MEM_W(0X6C, ctx->r24) = 0;
    // 0x80072B80: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x80072B84: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80072B88: sw          $t9, 0x68($t0)
    MEM_W(0X68, ctx->r8) = ctx->r25;
    // 0x80072B8C: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x80072B90: lui         $t4, 0x600
    ctx->r12 = S32(0X600 << 16);
    // 0x80072B94: swc1        $f12, 0x80($t1)
    MEM_W(0X80, ctx->r9) = ctx->f12.u32l;
    // 0x80072B98: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x80072B9C: lwc1        $f10, -0x541C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X541C);
    // 0x80072BA0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80072BA4: swc1        $f10, 0x84($t2)
    MEM_W(0X84, ctx->r10) = ctx->f10.u32l;
    // 0x80072BA8: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x80072BAC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80072BB0: lui         $at, 0x4214
    ctx->r1 = S32(0X4214 << 16);
    // 0x80072BB4: swc1        $f16, 0x88($t3)
    MEM_W(0X88, ctx->r11) = ctx->f16.u32l;
    // 0x80072BB8: lui         $a0, 0x8039
    ctx->r4 = S32(0X8039 << 16);
    // 0x80072BBC: lui         $t5, 0x8007
    ctx->r13 = S32(0X8007 << 16);
    // 0x80072BC0: addiu       $t5, $t5, 0x760
    ctx->r13 = ADD32(ctx->r13, 0X760);
    // 0x80072BC4: addiu       $a0, $a0, 0x6A00
    ctx->r4 = ADD32(ctx->r4, 0X6A00);
    // 0x80072BC8: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80072BCC: addiu       $t4, $t4, 0x39C0
    ctx->r12 = ADD32(ctx->r12, 0X39C0);
    // 0x80072BD0: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80072BD4: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    // 0x80072BD8: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80072BDC: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x80072BE0: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80072BE4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80072BE8: lui         $a2, 0xC3FA
    ctx->r6 = S32(0XC3FA << 16);
    // 0x80072BEC: jal         0x80028C74
    // 0x80072BF0: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    func_80028C74(rdram, ctx);
        goto after_12;
    // 0x80072BF0: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    after_12:
    // 0x80072BF4: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80072BF8: addiu       $v1, $v1, 0x3F64
    ctx->r3 = ADD32(ctx->r3, 0X3F64);
    // 0x80072BFC: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80072C00: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x80072C04: addiu       $t6, $zero, 0xBE
    ctx->r14 = ADD32(0, 0XBE);
    // 0x80072C08: sw          $t6, 0x9C($v0)
    MEM_W(0X9C, ctx->r2) = ctx->r14;
    // 0x80072C0C: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x80072C10: addiu       $t8, $zero, 0x6
    ctx->r24 = ADD32(0, 0X6);
    // 0x80072C14: sw          $t8, 0x64($t9)
    MEM_W(0X64, ctx->r25) = ctx->r24;
    // 0x80072C18: lui         $at, 0xC2D4
    ctx->r1 = S32(0XC2D4 << 16);
    // 0x80072C1C: lui         $t0, 0x600
    ctx->r8 = S32(0X600 << 16);
    // 0x80072C20: lui         $t1, 0x8007
    ctx->r9 = S32(0X8007 << 16);
    // 0x80072C24: addiu       $t1, $t1, 0x7D8
    ctx->r9 = ADD32(ctx->r9, 0X7D8);
    // 0x80072C28: addiu       $t0, $t0, 0x39C0
    ctx->r8 = ADD32(ctx->r8, 0X39C0);
    // 0x80072C2C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80072C30: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x80072C34: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80072C38: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x80072C3C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80072C40: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80072C44: lui         $a2, 0xC3FA
    ctx->r6 = S32(0XC3FA << 16);
    // 0x80072C48: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    // 0x80072C4C: jal         0x80028C74
    // 0x80072C50: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_80028C74(rdram, ctx);
        goto after_13;
    // 0x80072C50: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_13:
    // 0x80072C54: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80072C58: addiu       $v1, $v1, 0x3F68
    ctx->r3 = ADD32(ctx->r3, 0X3F68);
    // 0x80072C5C: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x80072C60: addiu       $t2, $zero, 0xBE
    ctx->r10 = ADD32(0, 0XBE);
    // 0x80072C64: sw          $t2, 0x9C($v0)
    MEM_W(0X9C, ctx->r2) = ctx->r10;
    // 0x80072C68: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x80072C6C: addiu       $t4, $zero, 0x6
    ctx->r12 = ADD32(0, 0X6);
    // 0x80072C70: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80072C74: lui         $a0, 0x8007
    ctx->r4 = S32(0X8007 << 16);
    // 0x80072C78: sw          $t4, 0x64($t5)
    MEM_W(0X64, ctx->r13) = ctx->r12;
    // 0x80072C7C: sh          $zero, 0x3F78($at)
    MEM_H(0X3F78, ctx->r1) = 0;
    // 0x80072C80: addiu       $a0, $a0, 0x2E44
    ctx->r4 = ADD32(ctx->r4, 0X2E44);
    // 0x80072C84: jal         0x8004AE38
    // 0x80072C88: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    func_8004AE38(rdram, ctx);
        goto after_14;
    // 0x80072C88: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    after_14:
    // 0x80072C8C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80072C90: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80072C94: jr          $ra
    // 0x80072C98: nop

    return;
    // 0x80072C98: nop

;}
RECOMP_FUNC void func_80072C9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80072C9C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80072CA0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80072CA4: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80072CA8: addiu       $a0, $a0, 0x3A00
    ctx->r4 = ADD32(ctx->r4, 0X3A00);
    // 0x80072CAC: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    // 0x80072CB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80072CB4: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x80072CB8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80072CBC: bne         $v0, $zero, L_80072CD0
    if (ctx->r2 != 0) {
        // 0x80072CC0: sh          $t6, 0x0($a0)
        MEM_H(0X0, ctx->r4) = ctx->r14;
            goto L_80072CD0;
    }
    // 0x80072CC0: sh          $t6, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r14;
    // 0x80072CC4: lui         $a0, 0x8007
    ctx->r4 = S32(0X8007 << 16);
    // 0x80072CC8: jal         0x800296E0
    // 0x80072CCC: addiu       $a0, $a0, 0x2A24
    ctx->r4 = ADD32(ctx->r4, 0X2A24);
    func_800296E0(rdram, ctx);
        goto after_0;
    // 0x80072CCC: addiu       $a0, $a0, 0x2A24
    ctx->r4 = ADD32(ctx->r4, 0X2A24);
    after_0:
L_80072CD0:
    // 0x80072CD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80072CD4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80072CD8: jr          $ra
    // 0x80072CDC: nop

    return;
    // 0x80072CDC: nop

;}
RECOMP_FUNC void func_80072CE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80072CE0: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80072CE4: lbu         $t6, -0x32A4($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X32A4);
    // 0x80072CE8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80072CEC: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80072CF0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80072CF4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80072CF8: bne         $t6, $at, L_80072D10
    if (ctx->r14 != ctx->r1) {
        // 0x80072CFC: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_80072D10;
    }
    // 0x80072CFC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80072D00: jal         0x800354D0
    // 0x80072D04: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800354D0(rdram, ctx);
        goto after_0;
    // 0x80072D04: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x80072D08: b           L_80072D3C
    // 0x80072D0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80072D3C;
    // 0x80072D0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80072D10:
    // 0x80072D10: jal         0x80039D98
    // 0x80072D14: nop

    func_80039D98(rdram, ctx);
        goto after_1;
    // 0x80072D14: nop

    after_1:
    // 0x80072D18: jal         0x800742FC
    // 0x80072D1C: nop

    func_800742FC(rdram, ctx);
        goto after_2;
    // 0x80072D1C: nop

    after_2:
    // 0x80072D20: addiu       $t7, $zero, 0x14
    ctx->r15 = ADD32(0, 0X14);
    // 0x80072D24: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80072D28: lui         $a0, 0x8007
    ctx->r4 = S32(0X8007 << 16);
    // 0x80072D2C: sh          $t7, 0x3A00($at)
    MEM_H(0X3A00, ctx->r1) = ctx->r15;
    // 0x80072D30: jal         0x800296E0
    // 0x80072D34: addiu       $a0, $a0, 0x2C9C
    ctx->r4 = ADD32(ctx->r4, 0X2C9C);
    func_800296E0(rdram, ctx);
        goto after_3;
    // 0x80072D34: addiu       $a0, $a0, 0x2C9C
    ctx->r4 = ADD32(ctx->r4, 0X2C9C);
    after_3:
    // 0x80072D38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80072D3C:
    // 0x80072D3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80072D40: jr          $ra
    // 0x80072D44: nop

    return;
    // 0x80072D44: nop

;}
RECOMP_FUNC void func_80072D48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80072D48: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80072D4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80072D50: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80072D54: jal         0x80035770
    // 0x80072D58: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80035770(rdram, ctx);
        goto after_0;
    // 0x80072D58: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80072D5C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80072D60: lb          $t7, -0x32A1($t7)
    ctx->r15 = MEM_B(ctx->r15, -0X32A1);
    // 0x80072D64: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x80072D68: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80072D6C: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80072D70: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80072D74: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80072D78: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x80072D7C: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80072D80: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80072D84: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80072D88: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80072D8C: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80072D90: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x80072D94: addu        $a0, $a0, $t8
    ctx->r4 = ADD32(ctx->r4, ctx->r24);
    // 0x80072D98: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80072D9C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80072DA0: lb          $a0, -0x2F7F($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X2F7F);
    // 0x80072DA4: jal         0x80049A4C
    // 0x80072DA8: sh          $t6, 0x3A50($at)
    MEM_H(0X3A50, ctx->r1) = ctx->r14;
    func_80049A4C(rdram, ctx);
        goto after_1;
    // 0x80072DA8: sh          $t6, 0x3A50($at)
    MEM_H(0X3A50, ctx->r1) = ctx->r14;
    after_1:
    // 0x80072DAC: bne         $v0, $zero, L_80072DD8
    if (ctx->r2 != 0) {
        // 0x80072DB0: lui         $t9, 0x801B
        ctx->r25 = S32(0X801B << 16);
            goto L_80072DD8;
    }
    // 0x80072DB0: lui         $t9, 0x801B
    ctx->r25 = S32(0X801B << 16);
    // 0x80072DB4: lh          $t9, 0x3A60($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X3A60);
    // 0x80072DB8: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80072DBC: bne         $t9, $at, L_80072DD8
    if (ctx->r25 != ctx->r1) {
        // 0x80072DC0: nop
    
            goto L_80072DD8;
    }
    // 0x80072DC0: nop

    // 0x80072DC4: jal         0x80015BC0
    // 0x80072DC8: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_80015BC0(rdram, ctx);
        goto after_2;
    // 0x80072DC8: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_2:
    // 0x80072DCC: addiu       $t0, $zero, 0x3C
    ctx->r8 = ADD32(0, 0X3C);
    // 0x80072DD0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80072DD4: sh          $t0, 0x3A50($at)
    MEM_H(0X3A50, ctx->r1) = ctx->r8;
L_80072DD8:
    // 0x80072DD8: lui         $a0, 0x8007
    ctx->r4 = S32(0X8007 << 16);
    // 0x80072DDC: jal         0x800296E0
    // 0x80072DE0: addiu       $a0, $a0, 0x2DF4
    ctx->r4 = ADD32(ctx->r4, 0X2DF4);
    func_800296E0(rdram, ctx);
        goto after_3;
    // 0x80072DE0: addiu       $a0, $a0, 0x2DF4
    ctx->r4 = ADD32(ctx->r4, 0X2DF4);
    after_3:
    // 0x80072DE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80072DE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80072DEC: jr          $ra
    // 0x80072DF0: nop

    return;
    // 0x80072DF0: nop

;}
