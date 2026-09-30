#include "iss64_recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_8026F480_func_80272D8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80272D8C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80272D90: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80272D94: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80272D98: jal         0x8004974C
    // 0x80272D9C: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    func_8004974C(rdram, ctx);
        goto after_0;
    // 0x80272D9C: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80272DA0: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80272DA4: lb          $t7, -0x32A1($t7)
    ctx->r15 = MEM_B(ctx->r15, -0X32A1);
    // 0x80272DA8: sll         $v1, $v0, 16
    ctx->r3 = S32(ctx->r2 << 16);
    // 0x80272DAC: sra         $t6, $v1, 16
    ctx->r14 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80272DB0: bne         $t7, $zero, L_80272DD0
    if (ctx->r15 != 0) {
        // 0x80272DB4: or          $v1, $t6, $zero
        ctx->r3 = ctx->r14 | 0;
            goto L_80272DD0;
    }
    // 0x80272DB4: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x80272DB8: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x80272DBC: addiu       $a0, $a0, -0x2F80
    ctx->r4 = ADD32(ctx->r4, -0X2F80);
    // 0x80272DC0: lb          $t8, 0x1($a0)
    ctx->r24 = MEM_B(ctx->r4, 0X1);
    // 0x80272DC4: nop

    // 0x80272DC8: slti        $at, $t8, 0x46
    ctx->r1 = SIGNED(ctx->r24) < 0X46 ? 1 : 0;
    // 0x80272DCC: bne         $at, $zero, L_80272E2C
    if (ctx->r1 != 0) {
        // 0x80272DD0: lui         $a0, 0x8011
        ctx->r4 = S32(0X8011 << 16);
            goto L_80272E2C;
    }
L_80272DD0:
    // 0x80272DD0: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x80272DD4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80272DD8: bne         $v0, $at, L_80272DF0
    if (ctx->r2 != ctx->r1) {
        // 0x80272DDC: addiu       $a0, $a0, -0x2F80
        ctx->r4 = ADD32(ctx->r4, -0X2F80);
            goto L_80272DF0;
    }
    // 0x80272DDC: addiu       $a0, $a0, -0x2F80
    ctx->r4 = ADD32(ctx->r4, -0X2F80);
    // 0x80272DE0: lb          $t9, 0x3399($a0)
    ctx->r25 = MEM_B(ctx->r4, 0X3399);
    // 0x80272DE4: nop

    // 0x80272DE8: slti        $at, $t9, 0x4
    ctx->r1 = SIGNED(ctx->r25) < 0X4 ? 1 : 0;
    // 0x80272DEC: bne         $at, $zero, L_80272E2C
    if (ctx->r1 != 0) {
        // 0x80272DF0: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80272E2C;
    }
L_80272DF0:
    // 0x80272DF0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80272DF4: bne         $v0, $at, L_80272E10
    if (ctx->r2 != ctx->r1) {
        // 0x80272DF8: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_80272E10;
    }
    // 0x80272DF8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80272DFC: lb          $t0, 0x3399($a0)
    ctx->r8 = MEM_B(ctx->r4, 0X3399);
    // 0x80272E00: nop

    // 0x80272E04: slti        $at, $t0, 0x3
    ctx->r1 = SIGNED(ctx->r8) < 0X3 ? 1 : 0;
    // 0x80272E08: bne         $at, $zero, L_80272E2C
    if (ctx->r1 != 0) {
        // 0x80272E0C: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_80272E2C;
    }
    // 0x80272E0C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_80272E10:
    // 0x80272E10: bne         $v0, $at, L_80272E38
    if (ctx->r2 != ctx->r1) {
        // 0x80272E14: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80272E38;
    }
    // 0x80272E14: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80272E18: lb          $t1, 0x3399($a0)
    ctx->r9 = MEM_B(ctx->r4, 0X3399);
    // 0x80272E1C: nop

    // 0x80272E20: slti        $at, $t1, 0x6
    ctx->r1 = SIGNED(ctx->r9) < 0X6 ? 1 : 0;
    // 0x80272E24: beq         $at, $zero, L_80272E38
    if (ctx->r1 == 0) {
        // 0x80272E28: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80272E38;
    }
    // 0x80272E28: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80272E2C:
    // 0x80272E2C: b           L_80272E38
    // 0x80272E30: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80272E38;
    // 0x80272E30: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80272E34: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80272E38:
    // 0x80272E38: sll         $t2, $v0, 3
    ctx->r10 = S32(ctx->r2 << 3);
    // 0x80272E3C: lui         $t3, 0x8028
    ctx->r11 = S32(0X8028 << 16);
    // 0x80272E40: addiu       $t3, $t3, 0x70D8
    ctx->r11 = ADD32(ctx->r11, 0X70D8);
    // 0x80272E44: subu        $t2, $t2, $v0
    ctx->r10 = SUB32(ctx->r10, ctx->r2);
    // 0x80272E48: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x80272E4C: addiu       $t4, $zero, 0x7
    ctx->r12 = ADD32(0, 0X7);
    // 0x80272E50: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x80272E54: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80272E58: addiu       $t7, $zero, 0xC
    ctx->r15 = ADD32(0, 0XC);
    // 0x80272E5C: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x80272E60: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x80272E64: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x80272E68: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80272E6C: addiu       $a0, $a0, -0x3888
    ctx->r4 = ADD32(ctx->r4, -0X3888);
    // 0x80272E70: addu        $a3, $t2, $t3
    ctx->r7 = ADD32(ctx->r10, ctx->r11);
    // 0x80272E74: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    // 0x80272E78: addiu       $a2, $zero, 0x62
    ctx->r6 = ADD32(0, 0X62);
    // 0x80272E7C: jal         0x8002F528
    // 0x80272E80: sh          $v1, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r3;
    func_8002F528(rdram, ctx);
        goto after_1;
    // 0x80272E80: sh          $v1, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r3;
    after_1:
    // 0x80272E84: lh          $v1, 0x34($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X34);
    // 0x80272E88: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x80272E8C: slti        $at, $v1, 0x3
    ctx->r1 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
    // 0x80272E90: beq         $at, $zero, L_80272EA0
    if (ctx->r1 == 0) {
        // 0x80272E94: addiu       $a0, $a0, -0x3868
        ctx->r4 = ADD32(ctx->r4, -0X3868);
            goto L_80272EA0;
    }
    // 0x80272E94: addiu       $a0, $a0, -0x3868
    ctx->r4 = ADD32(ctx->r4, -0X3868);
    // 0x80272E98: b           L_80272EA4
    // 0x80272E9C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_80272EA4;
    // 0x80272E9C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_80272EA0:
    // 0x80272EA0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_80272EA4:
    // 0x80272EA4: sll         $t8, $v1, 2
    ctx->r24 = S32(ctx->r3 << 2);
    // 0x80272EA8: lui         $a3, 0x8028
    ctx->r7 = S32(0X8028 << 16);
    // 0x80272EAC: addu        $a3, $a3, $t8
    ctx->r7 = ADD32(ctx->r7, ctx->r24);
    // 0x80272EB0: lw          $a3, 0x3A74($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X3A74);
    // 0x80272EB4: addiu       $t9, $zero, 0xF
    ctx->r25 = ADD32(0, 0XF);
    // 0x80272EB8: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x80272EBC: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x80272EC0: addiu       $t2, $zero, 0xC
    ctx->r10 = ADD32(0, 0XC);
    // 0x80272EC4: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x80272EC8: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x80272ECC: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x80272ED0: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80272ED4: addiu       $a1, $zero, 0x6E
    ctx->r5 = ADD32(0, 0X6E);
    // 0x80272ED8: jal         0x8002F528
    // 0x80272EDC: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    func_8002F528(rdram, ctx);
        goto after_2;
    // 0x80272EDC: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    after_2:
    // 0x80272EE0: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x80272EE4: addiu       $t3, $zero, 0x70
    ctx->r11 = ADD32(0, 0X70);
    // 0x80272EE8: addiu       $t4, $zero, 0x58
    ctx->r12 = ADD32(0, 0X58);
    // 0x80272EEC: addiu       $t5, $zero, 0x2C
    ctx->r13 = ADD32(0, 0X2C);
    // 0x80272EF0: addiu       $t6, $zero, 0xB3
    ctx->r14 = ADD32(0, 0XB3);
    // 0x80272EF4: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x80272EF8: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x80272EFC: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x80272F00: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80272F04: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    // 0x80272F08: addiu       $a2, $zero, 0x68
    ctx->r6 = ADD32(0, 0X68);
    // 0x80272F0C: addiu       $a3, $zero, 0x60
    ctx->r7 = ADD32(0, 0X60);
    // 0x80272F10: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80272F14: jal         0x8004A5E4
    // 0x80272F18: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_8004A5E4(rdram, ctx);
        goto after_3;
    // 0x80272F18: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_3:
    // 0x80272F1C: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80272F20: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x80272F24: sb          $t7, 0x5($t8)
    MEM_B(0X5, ctx->r24) = ctx->r15;
    // 0x80272F28: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80272F2C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80272F30: jr          $ra
    // 0x80272F34: nop

    return;
    // 0x80272F34: nop

;}
RECOMP_FUNC void ovl_8026F480_func_80272E88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80272E88: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x80272E8C: slti        $at, $v1, 0x3
    ctx->r1 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
    // 0x80272E90: beq         $at, $zero, L_80272EA0
    if (ctx->r1 == 0) {
        // 0x80272E94: addiu       $a0, $a0, -0x3868
        ctx->r4 = ADD32(ctx->r4, -0X3868);
            goto L_80272EA0;
    }
    // 0x80272E94: addiu       $a0, $a0, -0x3868
    ctx->r4 = ADD32(ctx->r4, -0X3868);
    // 0x80272E98: b           L_80272EA4
    // 0x80272E9C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_80272EA4;
    // 0x80272E9C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_80272EA0:
    // 0x80272EA0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_80272EA4:
    // 0x80272EA4: sll         $t8, $v1, 2
    ctx->r24 = S32(ctx->r3 << 2);
    // 0x80272EA8: lui         $a3, 0x8028
    ctx->r7 = S32(0X8028 << 16);
    // 0x80272EAC: addu        $a3, $a3, $t8
    ctx->r7 = ADD32(ctx->r7, ctx->r24);
    // 0x80272EB0: lw          $a3, 0x3A74($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X3A74);
    // 0x80272EB4: addiu       $t9, $zero, 0xF
    ctx->r25 = ADD32(0, 0XF);
    // 0x80272EB8: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x80272EBC: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x80272EC0: addiu       $t2, $zero, 0xC
    ctx->r10 = ADD32(0, 0XC);
    // 0x80272EC4: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x80272EC8: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x80272ECC: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x80272ED0: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80272ED4: addiu       $a1, $zero, 0x6E
    ctx->r5 = ADD32(0, 0X6E);
    // 0x80272ED8: jal         0x8002F528
    // 0x80272EDC: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    func_8002F528(rdram, ctx);
        goto after_0;
    // 0x80272EDC: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    after_0:
    // 0x80272EE0: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x80272EE4: addiu       $t3, $zero, 0x70
    ctx->r11 = ADD32(0, 0X70);
    // 0x80272EE8: addiu       $t4, $zero, 0x58
    ctx->r12 = ADD32(0, 0X58);
    // 0x80272EEC: addiu       $t5, $zero, 0x2C
    ctx->r13 = ADD32(0, 0X2C);
    // 0x80272EF0: addiu       $t6, $zero, 0xB3
    ctx->r14 = ADD32(0, 0XB3);
    // 0x80272EF4: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x80272EF8: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x80272EFC: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x80272F00: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80272F04: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    // 0x80272F08: addiu       $a2, $zero, 0x68
    ctx->r6 = ADD32(0, 0X68);
    // 0x80272F0C: addiu       $a3, $zero, 0x60
    ctx->r7 = ADD32(0, 0X60);
    // 0x80272F10: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80272F14: jal         0x8004A5E4
    // 0x80272F18: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_8004A5E4(rdram, ctx);
        goto after_1;
    // 0x80272F18: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_1:
    // 0x80272F1C: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80272F20: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x80272F24: sb          $t7, 0x5($t8)
    MEM_B(0X5, ctx->r24) = ctx->r15;
    // 0x80272F28: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80272F2C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80272F30: jr          $ra
    // 0x80272F34: nop

    return;
    // 0x80272F34: nop

;}
RECOMP_FUNC void ovl_8026F480_func_80272F38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80272F38: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80272F3C: lb          $t6, -0x326C($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X326C);
    // 0x80272F40: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80272F44: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80272F48: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80272F4C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80272F50: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80272F54: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80272F58: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80272F5C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80272F60: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80272F64: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80272F68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80272F6C: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x80272F70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80272F74: lbu         $a0, -0x2CF0($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X2CF0);
    // 0x80272F78: addiu       $a1, $zero, 0x90
    ctx->r5 = ADD32(0, 0X90);
    // 0x80272F7C: jal         0x8004BA70
    // 0x80272F80: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_8004BA70(rdram, ctx);
        goto after_0;
    // 0x80272F80: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_0:
    // 0x80272F84: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80272F88: addiu       $a1, $zero, 0x90
    ctx->r5 = ADD32(0, 0X90);
    // 0x80272F8C: jal         0x8004BB64
    // 0x80272F90: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_8004BB64(rdram, ctx);
        goto after_1;
    // 0x80272F90: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_1:
    // 0x80272F94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80272F98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80272F9C: jr          $ra
    // 0x80272FA0: nop

    return;
    // 0x80272FA0: nop

    // 0x80272FA4: nop

    // 0x80272FA8: nop

    // 0x80272FAC: nop

;}
RECOMP_FUNC void ovl_8026F480_func_80272FB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80272FB0: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x80272FB4: lh          $t6, -0x6A4($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X6A4);
    // 0x80272FB8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80272FBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80272FC0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80272FC4: bne         $t6, $zero, L_80272FF0
    if (ctx->r14 != 0) {
        // 0x80272FC8: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_80272FF0;
    }
    // 0x80272FC8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80272FCC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80272FD0: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x80272FD4: jal         0x8002B9DC
    // 0x80272FD8: addiu       $a1, $a1, 0x50FC
    ctx->r5 = ADD32(ctx->r5, 0X50FC);
    func_8002B9DC(rdram, ctx);
        goto after_0;
    // 0x80272FD8: addiu       $a1, $a1, 0x50FC
    ctx->r5 = ADD32(ctx->r5, 0X50FC);
    after_0:
    // 0x80272FDC: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80272FE0: jal         0x800296E0
    // 0x80272FE4: addiu       $a0, $a0, 0x308C
    ctx->r4 = ADD32(ctx->r4, 0X308C);
    func_800296E0(rdram, ctx);
        goto after_1;
    // 0x80272FE4: addiu       $a0, $a0, 0x308C
    ctx->r4 = ADD32(ctx->r4, 0X308C);
    after_1:
    // 0x80272FE8: b           L_80273010
    // 0x80272FEC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
        goto L_80273010;
    // 0x80272FEC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
L_80272FF0:
    // 0x80272FF0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80272FF4: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x80272FF8: jal         0x8002B9DC
    // 0x80272FFC: addiu       $a1, $a1, 0x5110
    ctx->r5 = ADD32(ctx->r5, 0X5110);
    func_8002B9DC(rdram, ctx);
        goto after_2;
    // 0x80272FFC: addiu       $a1, $a1, 0x5110
    ctx->r5 = ADD32(ctx->r5, 0X5110);
    after_2:
    // 0x80273000: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80273004: jal         0x800296E0
    // 0x80273008: addiu       $a0, $a0, 0x3030
    ctx->r4 = ADD32(ctx->r4, 0X3030);
    func_800296E0(rdram, ctx);
        goto after_3;
    // 0x80273008: addiu       $a0, $a0, 0x3030
    ctx->r4 = ADD32(ctx->r4, 0X3030);
    after_3:
    // 0x8027300C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
L_80273010:
    // 0x80273010: nop

    // 0x80273014: lw          $a1, 0x38($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X38);
    // 0x80273018: jal         0x8002AF30
    // 0x8027301C: nop

    func_8002AF30(rdram, ctx);
        goto after_4;
    // 0x8027301C: nop

    after_4:
    // 0x80273020: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80273024: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80273028: jr          $ra
    // 0x8027302C: nop

    return;
    // 0x8027302C: nop

;}
RECOMP_FUNC void ovl_8026F480_func_80272FE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80272FE0: jal         0x800296E0
    // 0x80272FE4: addiu       $a0, $a0, 0x308C
    ctx->r4 = ADD32(ctx->r4, 0X308C);
    func_800296E0(rdram, ctx);
        goto after_0;
    // 0x80272FE4: addiu       $a0, $a0, 0x308C
    ctx->r4 = ADD32(ctx->r4, 0X308C);
    after_0:
    // 0x80272FE8: b           L_80273010
    // 0x80272FEC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
        goto L_80273010;
    // 0x80272FEC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80272FF0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80272FF4: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x80272FF8: jal         0x8002B9DC
    // 0x80272FFC: addiu       $a1, $a1, 0x5110
    ctx->r5 = ADD32(ctx->r5, 0X5110);
    func_8002B9DC(rdram, ctx);
        goto after_1;
    // 0x80272FFC: addiu       $a1, $a1, 0x5110
    ctx->r5 = ADD32(ctx->r5, 0X5110);
    after_1:
    // 0x80273000: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80273004: jal         0x800296E0
    // 0x80273008: addiu       $a0, $a0, 0x3030
    ctx->r4 = ADD32(ctx->r4, 0X3030);
    func_800296E0(rdram, ctx);
        goto after_2;
    // 0x80273008: addiu       $a0, $a0, 0x3030
    ctx->r4 = ADD32(ctx->r4, 0X3030);
    after_2:
    // 0x8027300C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
L_80273010:
    // 0x80273010: nop

    // 0x80273014: lw          $a1, 0x38($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X38);
    // 0x80273018: jal         0x8002AF30
    // 0x8027301C: nop

    func_8002AF30(rdram, ctx);
        goto after_3;
    // 0x8027301C: nop

    after_3:
    // 0x80273020: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80273024: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80273028: jr          $ra
    // 0x8027302C: nop

    return;
    // 0x8027302C: nop

;}
RECOMP_FUNC void ovl_8026F480_func_80273030(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80273030: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x80273034: lh          $t6, -0x6A4($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X6A4);
    // 0x80273038: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027303C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80273040: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80273044: bne         $t6, $zero, L_80273068
    if (ctx->r14 != 0) {
        // 0x80273048: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_80273068;
    }
    // 0x80273048: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027304C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80273050: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x80273054: jal         0x8002B9DC
    // 0x80273058: addiu       $a1, $a1, 0x50FC
    ctx->r5 = ADD32(ctx->r5, 0X50FC);
    func_8002B9DC(rdram, ctx);
        goto after_0;
    // 0x80273058: addiu       $a1, $a1, 0x50FC
    ctx->r5 = ADD32(ctx->r5, 0X50FC);
    after_0:
    // 0x8027305C: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80273060: jal         0x800296E0
    // 0x80273064: addiu       $a0, $a0, 0x308C
    ctx->r4 = ADD32(ctx->r4, 0X308C);
    func_800296E0(rdram, ctx);
        goto after_1;
    // 0x80273064: addiu       $a0, $a0, 0x308C
    ctx->r4 = ADD32(ctx->r4, 0X308C);
    after_1:
L_80273068:
    // 0x80273068: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8027306C: nop

    // 0x80273070: lw          $a1, 0x38($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X38);
    // 0x80273074: jal         0x8002AF30
    // 0x80273078: nop

    func_8002AF30(rdram, ctx);
        goto after_2;
    // 0x80273078: nop

    after_2:
    // 0x8027307C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80273080: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80273084: jr          $ra
    // 0x80273088: nop

    return;
    // 0x80273088: nop

;}
RECOMP_FUNC void ovl_8026F480_func_8027308C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027308C: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x80273090: lh          $t6, -0x6A4($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X6A4);
    // 0x80273094: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80273098: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027309C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802730A0: beq         $t6, $zero, L_802730C4
    if (ctx->r14 == 0) {
        // 0x802730A4: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_802730C4;
    }
    // 0x802730A4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802730A8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x802730AC: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x802730B0: jal         0x8002B9DC
    // 0x802730B4: addiu       $a1, $a1, 0x5110
    ctx->r5 = ADD32(ctx->r5, 0X5110);
    func_8002B9DC(rdram, ctx);
        goto after_0;
    // 0x802730B4: addiu       $a1, $a1, 0x5110
    ctx->r5 = ADD32(ctx->r5, 0X5110);
    after_0:
    // 0x802730B8: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x802730BC: jal         0x800296E0
    // 0x802730C0: addiu       $a0, $a0, 0x3030
    ctx->r4 = ADD32(ctx->r4, 0X3030);
    func_800296E0(rdram, ctx);
        goto after_1;
    // 0x802730C0: addiu       $a0, $a0, 0x3030
    ctx->r4 = ADD32(ctx->r4, 0X3030);
    after_1:
L_802730C4:
    // 0x802730C4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x802730C8: nop

    // 0x802730CC: lw          $a1, 0x38($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X38);
    // 0x802730D0: jal         0x8002AF30
    // 0x802730D4: nop

    func_8002AF30(rdram, ctx);
        goto after_2;
    // 0x802730D4: nop

    after_2:
    // 0x802730D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802730DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802730E0: jr          $ra
    // 0x802730E4: nop

    return;
    // 0x802730E4: nop

;}
RECOMP_FUNC void ovl_8026F480_func_802730E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802730E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802730EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802730F0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802730F4: jal         0x80036234
    // 0x802730F8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80036234(rdram, ctx);
        goto after_0;
    // 0x802730F8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x802730FC: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80273100: jal         0x80035FF0
    // 0x80273104: addiu       $a0, $a0, 0x4F90
    ctx->r4 = ADD32(ctx->r4, 0X4F90);
    func_80035FF0(rdram, ctx);
        goto after_1;
    // 0x80273104: addiu       $a0, $a0, 0x4F90
    ctx->r4 = ADD32(ctx->r4, 0X4F90);
    after_1:
    // 0x80273108: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x8027310C: jal         0x8027374C
    // 0x80273110: sw          $zero, 0x59BC($at)
    MEM_W(0X59BC, ctx->r1) = 0;
    ovl_8026F480_func_8027374C(rdram, ctx);
        goto after_2;
    // 0x80273110: sw          $zero, 0x59BC($at)
    MEM_W(0X59BC, ctx->r1) = 0;
    after_2:
    // 0x80273114: jal         0x80273864
    // 0x80273118: nop

    ovl_8026F480_func_80273864(rdram, ctx);
        goto after_3;
    // 0x80273118: nop

    after_3:
    // 0x8027311C: jal         0x80039DF0
    // 0x80273120: nop

    func_80039DF0(rdram, ctx);
        goto after_4;
    // 0x80273120: nop

    after_4:
    // 0x80273124: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80273128: jal         0x800296E0
    // 0x8027312C: addiu       $a0, $a0, 0x3140
    ctx->r4 = ADD32(ctx->r4, 0X3140);
    func_800296E0(rdram, ctx);
        goto after_5;
    // 0x8027312C: addiu       $a0, $a0, 0x3140
    ctx->r4 = ADD32(ctx->r4, 0X3140);
    after_5:
    // 0x80273130: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80273134: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80273138: jr          $ra
    // 0x8027313C: nop

    return;
    // 0x8027313C: nop

;}
RECOMP_FUNC void ovl_8026F480_func_80273140(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80273140: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80273144: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80273148: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027314C: jal         0x80039D98
    // 0x80273150: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80039D98(rdram, ctx);
        goto after_0;
    // 0x80273150: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80273154: addiu       $a0, $zero, 0xC00
    ctx->r4 = ADD32(0, 0XC00);
    // 0x80273158: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x8027315C: jal         0x80049E40
    // 0x80273160: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_80049E40(rdram, ctx);
        goto after_1;
    // 0x80273160: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_1:
    // 0x80273164: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80273168: jal         0x8002AAC0
    // 0x8027316C: addiu       $a0, $a0, 0x502C
    ctx->r4 = ADD32(ctx->r4, 0X502C);
    func_8002AAC0(rdram, ctx);
        goto after_2;
    // 0x8027316C: addiu       $a0, $a0, 0x502C
    ctx->r4 = ADD32(ctx->r4, 0X502C);
    after_2:
    // 0x80273170: jal         0x8006FB58
    // 0x80273174: nop

    func_8006FB58(rdram, ctx);
        goto after_3;
    // 0x80273174: nop

    after_3:
    // 0x80273178: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8027317C: addiu       $a0, $a0, 0x3688
    ctx->r4 = ADD32(ctx->r4, 0X3688);
    // 0x80273180: jal         0x800293DC
    // 0x80273184: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_800293DC(rdram, ctx);
        goto after_4;
    // 0x80273184: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_4:
    // 0x80273188: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x8027318C: lui         $t6, 0xFFF1
    ctx->r14 = S32(0XFFF1 << 16);
    // 0x80273190: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x80273194: sw          $t6, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->r14;
    // 0x80273198: jal         0x8000AB98
    // 0x8027319C: sh          $zero, 0x38($v0)
    MEM_H(0X38, ctx->r2) = 0;
    func_8000AB98(rdram, ctx);
        goto after_5;
    // 0x8027319C: sh          $zero, 0x38($v0)
    MEM_H(0X38, ctx->r2) = 0;
    after_5:
    // 0x802731A0: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x802731A4: addiu       $a0, $a0, 0x31C0
    ctx->r4 = ADD32(ctx->r4, 0X31C0);
    // 0x802731A8: jal         0x8004A9B4
    // 0x802731AC: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_8004A9B4(rdram, ctx);
        goto after_6;
    // 0x802731AC: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_6:
    // 0x802731B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802731B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802731B8: jr          $ra
    // 0x802731BC: nop

    return;
    // 0x802731BC: nop

;}
RECOMP_FUNC void ovl_8026F480_func_802731C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802731C0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802731C4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802731C8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802731CC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x802731D0: lh          $t6, 0x26($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X26);
    // 0x802731D4: lh          $t7, 0x38($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X38);
    // 0x802731D8: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x802731DC: sb          $t6, 0x55($a0)
    MEM_B(0X55, ctx->r4) = ctx->r14;
    // 0x802731E0: sb          $t7, 0x54($a0)
    MEM_B(0X54, ctx->r4) = ctx->r15;
    // 0x802731E4: lw          $t8, -0x3250($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3250);
    // 0x802731E8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802731EC: lhu         $a0, 0x0($t8)
    ctx->r4 = MEM_HU(ctx->r24, 0X0);
    // 0x802731F0: jal         0x80035D2C
    // 0x802731F4: nop

    func_80035D2C(rdram, ctx);
        goto after_0;
    // 0x802731F4: nop

    after_0:
    // 0x802731F8: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x802731FC: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x80273200: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80273204: lw          $t9, 0x506C($at)
    ctx->r25 = MEM_W(ctx->r1, 0X506C);
    // 0x80273208: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x8027320C: jalr        $t9
    // 0x80273210: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x80273210: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80273214: lh          $t0, 0x24($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X24);
    // 0x80273218: nop

    // 0x8027321C: bne         $t0, $zero, L_80273240
    if (ctx->r8 != 0) {
        // 0x80273220: nop
    
            goto L_80273240;
    }
    // 0x80273220: nop

    // 0x80273224: lh          $a0, 0x3A($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X3A);
    // 0x80273228: jal         0x8001D6EC
    // 0x8027322C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8001D6EC(rdram, ctx);
        goto after_2;
    // 0x8027322C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_2:
    // 0x80273230: sh          $v0, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r2;
    // 0x80273234: lh          $t1, 0x3A($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X3A);
    // 0x80273238: b           L_80273260
    // 0x8027323C: sh          $t1, 0x26($s0)
    MEM_H(0X26, ctx->r16) = ctx->r9;
        goto L_80273260;
    // 0x8027323C: sh          $t1, 0x26($s0)
    MEM_H(0X26, ctx->r16) = ctx->r9;
L_80273240:
    // 0x80273240: lh          $a0, 0x3A($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X3A);
    // 0x80273244: jal         0x8001D6EC
    // 0x80273248: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001D6EC(rdram, ctx);
        goto after_3;
    // 0x80273248: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_3:
    // 0x8027324C: sh          $v0, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r2;
    // 0x80273250: lh          $t2, 0x3A($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X3A);
    // 0x80273254: nop

    // 0x80273258: addiu       $t3, $t2, 0x5
    ctx->r11 = ADD32(ctx->r10, 0X5);
    // 0x8027325C: sh          $t3, 0x26($s0)
    MEM_H(0X26, ctx->r16) = ctx->r11;
L_80273260:
    // 0x80273260: lb          $t4, 0x55($s0)
    ctx->r12 = MEM_B(ctx->r16, 0X55);
    // 0x80273264: lh          $t5, 0x26($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X26);
    // 0x80273268: nop

    // 0x8027326C: bne         $t4, $t5, L_80273288
    if (ctx->r12 != ctx->r13) {
        // 0x80273270: nop
    
            goto L_80273288;
    }
    // 0x80273270: nop

    // 0x80273274: lb          $t6, 0x54($s0)
    ctx->r14 = MEM_B(ctx->r16, 0X54);
    // 0x80273278: lh          $t7, 0x38($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X38);
    // 0x8027327C: nop

    // 0x80273280: beq         $t6, $t7, L_80273290
    if (ctx->r14 == ctx->r15) {
        // 0x80273284: nop
    
            goto L_80273290;
    }
    // 0x80273284: nop

L_80273288:
    // 0x80273288: jal         0x80035734
    // 0x8027328C: nop

    func_80035734(rdram, ctx);
        goto after_4;
    // 0x8027328C: nop

    after_4:
L_80273290:
    // 0x80273290: lh          $t8, 0x24($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X24);
    // 0x80273294: lui         $t9, 0x8010
    ctx->r25 = S32(0X8010 << 16);
    // 0x80273298: bne         $t8, $zero, L_802732A8
    if (ctx->r24 != 0) {
        // 0x8027329C: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_802732A8;
    }
    // 0x8027329C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802732A0: b           L_802732AC
    // 0x802732A4: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
        goto L_802732AC;
    // 0x802732A4: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
L_802732A8:
    // 0x802732A8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_802732AC:
    // 0x802732AC: sll         $v0, $v1, 4
    ctx->r2 = S32(ctx->r3 << 4);
    // 0x802732B0: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x802732B4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802732B8: sw          $v0, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r2;
    // 0x802732BC: lw          $t9, 0x59BC($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X59BC);
    // 0x802732C0: lui         $a2, 0x120
    ctx->r6 = S32(0X120 << 16);
    // 0x802732C4: jal         0x8001D4C0
    // 0x802732C8: addu        $a0, $v0, $t9
    ctx->r4 = ADD32(ctx->r2, ctx->r25);
    func_8001D4C0(rdram, ctx);
        goto after_5;
    // 0x802732C8: addu        $a0, $v0, $t9
    ctx->r4 = ADD32(ctx->r2, ctx->r25);
    after_5:
    // 0x802732CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802732D0: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x802732D4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802732D8: sw          $v0, 0x59BC($at)
    MEM_W(0X59BC, ctx->r1) = ctx->r2;
    // 0x802732DC: jr          $ra
    // 0x802732E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x802732E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_8026F480_func_802732D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802732D0: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x802732D4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802732D8: sw          $v0, 0x59BC($at)
    MEM_W(0X59BC, ctx->r1) = ctx->r2;
    // 0x802732DC: jr          $ra
    // 0x802732E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x802732E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_8026F480_func_802732E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802732E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802732E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802732EC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802732F0: lh          $t6, 0x38($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X38);
    // 0x802732F4: nop

    // 0x802732F8: bne         $t6, $zero, L_80273364
    if (ctx->r14 != 0) {
        // 0x802732FC: nop
    
            goto L_80273364;
    }
    // 0x802732FC: nop

    // 0x80273300: jal         0x80035770
    // 0x80273304: nop

    func_80035770(rdram, ctx);
        goto after_0;
    // 0x80273304: nop

    after_0:
    // 0x80273308: jal         0x802737EC
    // 0x8027330C: nop

    ovl_8026F480_func_802737EC(rdram, ctx);
        goto after_1;
    // 0x8027330C: nop

    after_1:
    // 0x80273310: jal         0x800331E0
    // 0x80273314: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800331E0(rdram, ctx);
        goto after_2;
    // 0x80273314: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x80273318: jal         0x80034908
    // 0x8027331C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80034908(rdram, ctx);
        goto after_3;
    // 0x8027331C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x80273320: bne         $v0, $zero, L_80273350
    if (ctx->r2 != 0) {
        // 0x80273324: nop
    
            goto L_80273350;
    }
    // 0x80273324: nop

    // 0x80273328: jal         0x80035154
    // 0x8027332C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80035154(rdram, ctx);
        goto after_4;
    // 0x8027332C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_4:
    // 0x80273330: beq         $v0, $zero, L_80273350
    if (ctx->r2 == 0) {
        // 0x80273334: nop
    
            goto L_80273350;
    }
    // 0x80273334: nop

    // 0x80273338: jal         0x800353B0
    // 0x8027333C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800353B0(rdram, ctx);
        goto after_5;
    // 0x8027333C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_5:
    // 0x80273340: bltz        $v0, L_80273350
    if (SIGNED(ctx->r2) < 0) {
        // 0x80273344: nop
    
            goto L_80273350;
    }
    // 0x80273344: nop

    // 0x80273348: jal         0x800357AC
    // 0x8027334C: nop

    func_800357AC(rdram, ctx);
        goto after_6;
    // 0x8027334C: nop

    after_6:
L_80273350:
    // 0x80273350: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80273354: jal         0x800296E0
    // 0x80273358: addiu       $a0, $a0, 0x3384
    ctx->r4 = ADD32(ctx->r4, 0X3384);
    func_800296E0(rdram, ctx);
        goto after_7;
    // 0x80273358: addiu       $a0, $a0, 0x3384
    ctx->r4 = ADD32(ctx->r4, 0X3384);
    after_7:
    // 0x8027335C: b           L_80273378
    // 0x80273360: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80273378;
    // 0x80273360: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80273364:
    // 0x80273364: sh          $zero, 0x38($a0)
    MEM_H(0X38, ctx->r4) = 0;
    // 0x80273368: lh          $t7, 0x38($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X38);
    // 0x8027336C: nop

    // 0x80273370: sh          $t7, 0x26($a0)
    MEM_H(0X26, ctx->r4) = ctx->r15;
    // 0x80273374: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80273378:
    // 0x80273378: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027337C: jr          $ra
    // 0x80273380: nop

    return;
    // 0x80273380: nop

;}
RECOMP_FUNC void ovl_8026F480_func_802732F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802732F4: nop

    // 0x802732F8: bne         $t6, $zero, L_80273364
    if (ctx->r14 != 0) {
        // 0x802732FC: nop
    
            goto L_80273364;
    }
    // 0x802732FC: nop

    // 0x80273300: jal         0x80035770
    // 0x80273304: nop

    func_80035770(rdram, ctx);
        goto after_0;
    // 0x80273304: nop

    after_0:
    // 0x80273308: jal         0x802737EC
    // 0x8027330C: nop

    ovl_8026F480_func_802737EC(rdram, ctx);
        goto after_1;
    // 0x8027330C: nop

    after_1:
    // 0x80273310: jal         0x800331E0
    // 0x80273314: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800331E0(rdram, ctx);
        goto after_2;
    // 0x80273314: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x80273318: jal         0x80034908
    // 0x8027331C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80034908(rdram, ctx);
        goto after_3;
    // 0x8027331C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x80273320: bne         $v0, $zero, L_80273350
    if (ctx->r2 != 0) {
        // 0x80273324: nop
    
            goto L_80273350;
    }
    // 0x80273324: nop

    // 0x80273328: jal         0x80035154
    // 0x8027332C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80035154(rdram, ctx);
        goto after_4;
    // 0x8027332C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_4:
    // 0x80273330: beq         $v0, $zero, L_80273350
    if (ctx->r2 == 0) {
        // 0x80273334: nop
    
            goto L_80273350;
    }
    // 0x80273334: nop

    // 0x80273338: jal         0x800353B0
    // 0x8027333C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800353B0(rdram, ctx);
        goto after_5;
    // 0x8027333C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_5:
    // 0x80273340: bltz        $v0, L_80273350
    if (SIGNED(ctx->r2) < 0) {
        // 0x80273344: nop
    
            goto L_80273350;
    }
    // 0x80273344: nop

    // 0x80273348: jal         0x800357AC
    // 0x8027334C: nop

    func_800357AC(rdram, ctx);
        goto after_6;
    // 0x8027334C: nop

    after_6:
L_80273350:
    // 0x80273350: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80273354: jal         0x800296E0
    // 0x80273358: addiu       $a0, $a0, 0x3384
    ctx->r4 = ADD32(ctx->r4, 0X3384);
    func_800296E0(rdram, ctx);
        goto after_7;
    // 0x80273358: addiu       $a0, $a0, 0x3384
    ctx->r4 = ADD32(ctx->r4, 0X3384);
    after_7:
    // 0x8027335C: b           L_80273378
    // 0x80273360: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80273378;
    // 0x80273360: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80273364:
    // 0x80273364: sh          $zero, 0x38($a0)
    MEM_H(0X38, ctx->r4) = 0;
    // 0x80273368: lh          $t7, 0x38($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X38);
    // 0x8027336C: nop

    // 0x80273370: sh          $t7, 0x26($a0)
    MEM_H(0X26, ctx->r4) = ctx->r15;
    // 0x80273374: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80273378:
    // 0x80273378: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027337C: jr          $ra
    // 0x80273380: nop

    return;
    // 0x80273380: nop

;}
RECOMP_FUNC void ovl_8026F480_func_80273318(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80273318: jal         0x80034908
    // 0x8027331C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80034908(rdram, ctx);
        goto after_0;
    // 0x8027331C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x80273320: bne         $v0, $zero, L_80273350
    if (ctx->r2 != 0) {
        // 0x80273324: nop
    
            goto L_80273350;
    }
    // 0x80273324: nop

    // 0x80273328: jal         0x80035154
    // 0x8027332C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80035154(rdram, ctx);
        goto after_1;
    // 0x8027332C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x80273330: beq         $v0, $zero, L_80273350
    if (ctx->r2 == 0) {
        // 0x80273334: nop
    
            goto L_80273350;
    }
    // 0x80273334: nop

    // 0x80273338: jal         0x800353B0
    // 0x8027333C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800353B0(rdram, ctx);
        goto after_2;
    // 0x8027333C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x80273340: bltz        $v0, L_80273350
    if (SIGNED(ctx->r2) < 0) {
        // 0x80273344: nop
    
            goto L_80273350;
    }
    // 0x80273344: nop

    // 0x80273348: jal         0x800357AC
    // 0x8027334C: nop

    func_800357AC(rdram, ctx);
        goto after_3;
    // 0x8027334C: nop

    after_3:
L_80273350:
    // 0x80273350: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80273354: jal         0x800296E0
    // 0x80273358: addiu       $a0, $a0, 0x3384
    ctx->r4 = ADD32(ctx->r4, 0X3384);
    func_800296E0(rdram, ctx);
        goto after_4;
    // 0x80273358: addiu       $a0, $a0, 0x3384
    ctx->r4 = ADD32(ctx->r4, 0X3384);
    after_4:
    // 0x8027335C: b           L_80273378
    // 0x80273360: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80273378;
    // 0x80273360: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80273364: sh          $zero, 0x38($a0)
    MEM_H(0X38, ctx->r4) = 0;
    // 0x80273368: lh          $t7, 0x38($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X38);
    // 0x8027336C: nop

    // 0x80273370: sh          $t7, 0x26($a0)
    MEM_H(0X26, ctx->r4) = ctx->r15;
    // 0x80273374: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80273378:
    // 0x80273378: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027337C: jr          $ra
    // 0x80273380: nop

    return;
    // 0x80273380: nop

;}
RECOMP_FUNC void ovl_8026F480_func_8027333C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027333C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80273340: bltz        $v0, L_80273350
    if (SIGNED(ctx->r2) < 0) {
        // 0x80273344: nop
    
            goto L_80273350;
    }
    // 0x80273344: nop

    // 0x80273348: jal         0x800357AC
    // 0x8027334C: nop

    func_800357AC(rdram, ctx);
        goto after_0;
    // 0x8027334C: nop

    after_0:
L_80273350:
    // 0x80273350: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80273354: jal         0x800296E0
    // 0x80273358: addiu       $a0, $a0, 0x3384
    ctx->r4 = ADD32(ctx->r4, 0X3384);
    func_800296E0(rdram, ctx);
        goto after_1;
    // 0x80273358: addiu       $a0, $a0, 0x3384
    ctx->r4 = ADD32(ctx->r4, 0X3384);
    after_1:
    // 0x8027335C: b           L_80273378
    // 0x80273360: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80273378;
    // 0x80273360: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80273364: sh          $zero, 0x38($a0)
    MEM_H(0X38, ctx->r4) = 0;
    // 0x80273368: lh          $t7, 0x38($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X38);
    // 0x8027336C: nop

    // 0x80273370: sh          $t7, 0x26($a0)
    MEM_H(0X26, ctx->r4) = ctx->r15;
    // 0x80273374: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80273378:
    // 0x80273378: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027337C: jr          $ra
    // 0x80273380: nop

    return;
    // 0x80273380: nop

;}
RECOMP_FUNC void ovl_8026F480_func_80273378(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80273378: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027337C: jr          $ra
    // 0x80273380: nop

    return;
    // 0x80273380: nop

;}
RECOMP_FUNC void ovl_8026F480_func_80273384(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80273384: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80273388: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027338C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80273390: jal         0x8000AABC
    // 0x80273394: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8000AABC(rdram, ctx);
        goto after_0;
    // 0x80273394: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80273398: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8027339C: jal         0x800296E0
    // 0x802733A0: addiu       $a0, $a0, 0x33B4
    ctx->r4 = ADD32(ctx->r4, 0X33B4);
    func_800296E0(rdram, ctx);
        goto after_1;
    // 0x802733A0: addiu       $a0, $a0, 0x33B4
    ctx->r4 = ADD32(ctx->r4, 0X33B4);
    after_1:
    // 0x802733A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802733A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802733AC: jr          $ra
    // 0x802733B0: nop

    return;
    // 0x802733B0: nop

;}
RECOMP_FUNC void ovl_8026F480_func_802733B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802733B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802733B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802733BC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802733C0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802733C4: jal         0x80037908
    // 0x802733C8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80037908(rdram, ctx);
        goto after_0;
    // 0x802733C8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x802733CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802733D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802733D4: jr          $ra
    // 0x802733D8: nop

    return;
    // 0x802733D8: nop

;}
RECOMP_FUNC void ovl_8026F480_func_802733DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802733DC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802733E0: sh          $zero, 0x38($a0)
    MEM_H(0X38, ctx->r4) = 0;
    // 0x802733E4: lh          $t6, 0x38($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X38);
    // 0x802733E8: jr          $ra
    // 0x802733EC: sh          $t6, 0x26($a0)
    MEM_H(0X26, ctx->r4) = ctx->r14;
    return;
    // 0x802733EC: sh          $t6, 0x26($a0)
    MEM_H(0X26, ctx->r4) = ctx->r14;
;}
RECOMP_FUNC void ovl_8026F480_func_802733F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802733F0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802733F4: lh          $t6, 0x38($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X38);
    // 0x802733F8: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x802733FC: bne         $t6, $zero, L_8027342C
    if (ctx->r14 != 0) {
        // 0x80273400: nop
    
            goto L_8027342C;
    }
    // 0x80273400: nop

    // 0x80273404: lh          $t8, 0x24($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X24);
    // 0x80273408: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8027340C: bne         $t8, $zero, L_80273420
    if (ctx->r24 != 0) {
        // 0x80273410: sh          $t7, 0x38($a0)
        MEM_H(0X38, ctx->r4) = ctx->r15;
            goto L_80273420;
    }
    // 0x80273410: sh          $t7, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r15;
    // 0x80273414: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x80273418: b           L_8027343C
    // 0x8027341C: sh          $t9, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = ctx->r25;
        goto L_8027343C;
    // 0x8027341C: sh          $t9, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = ctx->r25;
L_80273420:
    // 0x80273420: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x80273424: b           L_8027343C
    // 0x80273428: sh          $t0, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = ctx->r8;
        goto L_8027343C;
    // 0x80273428: sh          $t0, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = ctx->r8;
L_8027342C:
    // 0x8027342C: lh          $t1, 0x3A($a0)
    ctx->r9 = MEM_H(ctx->r4, 0X3A);
    // 0x80273430: nop

    // 0x80273434: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x80273438: sh          $t2, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = ctx->r10;
L_8027343C:
    // 0x8027343C: lh          $t3, 0x3A($a0)
    ctx->r11 = MEM_H(ctx->r4, 0X3A);
    // 0x80273440: nop

    // 0x80273444: bgez        $t3, L_80273454
    if (SIGNED(ctx->r11) >= 0) {
        // 0x80273448: nop
    
            goto L_80273454;
    }
    // 0x80273448: nop

    // 0x8027344C: jr          $ra
    // 0x80273450: sh          $zero, 0x38($a0)
    MEM_H(0X38, ctx->r4) = 0;
    return;
    // 0x80273450: sh          $zero, 0x38($a0)
    MEM_H(0X38, ctx->r4) = 0;
L_80273454:
    // 0x80273454: sh          $t4, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r12;
    // 0x80273458: jr          $ra
    // 0x8027345C: nop

    return;
    // 0x8027345C: nop

;}
RECOMP_FUNC void ovl_8026F480_func_80273428(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80273428: sh          $t0, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = ctx->r8;
    // 0x8027342C: lh          $t1, 0x3A($a0)
    ctx->r9 = MEM_H(ctx->r4, 0X3A);
    // 0x80273430: nop

    // 0x80273434: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x80273438: sh          $t2, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = ctx->r10;
    // 0x8027343C: lh          $t3, 0x3A($a0)
    ctx->r11 = MEM_H(ctx->r4, 0X3A);
    // 0x80273440: nop

    // 0x80273444: bgez        $t3, L_80273454
    if (SIGNED(ctx->r11) >= 0) {
        // 0x80273448: nop
    
            goto L_80273454;
    }
    // 0x80273448: nop

    // 0x8027344C: jr          $ra
    // 0x80273450: sh          $zero, 0x38($a0)
    MEM_H(0X38, ctx->r4) = 0;
    return;
    // 0x80273450: sh          $zero, 0x38($a0)
    MEM_H(0X38, ctx->r4) = 0;
L_80273454:
    // 0x80273454: sh          $t4, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r12;
    // 0x80273458: jr          $ra
    // 0x8027345C: nop

    return;
    // 0x8027345C: nop

;}
RECOMP_FUNC void ovl_8026F480_func_80273460(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80273460: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80273464: lh          $t6, 0x38($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X38);
    // 0x80273468: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8027346C: bne         $t6, $zero, L_80273480
    if (ctx->r14 != 0) {
        // 0x80273470: nop
    
            goto L_80273480;
    }
    // 0x80273470: nop

    // 0x80273474: sh          $zero, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = 0;
    // 0x80273478: b           L_80273490
    // 0x8027347C: sh          $v0, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r2;
        goto L_80273490;
    // 0x8027347C: sh          $v0, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r2;
L_80273480:
    // 0x80273480: lh          $t7, 0x3A($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X3A);
    // 0x80273484: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80273488: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8027348C: sh          $t8, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = ctx->r24;
L_80273490:
    // 0x80273490: lh          $t9, 0x24($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X24);
    // 0x80273494: nop

    // 0x80273498: bne         $t9, $zero, L_802734C4
    if (ctx->r25 != 0) {
        // 0x8027349C: nop
    
            goto L_802734C4;
    }
    // 0x8027349C: nop

    // 0x802734A0: lh          $t0, 0x3A($a0)
    ctx->r8 = MEM_H(ctx->r4, 0X3A);
    // 0x802734A4: nop

    // 0x802734A8: slti        $at, $t0, 0x5
    ctx->r1 = SIGNED(ctx->r8) < 0X5 ? 1 : 0;
    // 0x802734AC: bne         $at, $zero, L_802734BC
    if (ctx->r1 != 0) {
        // 0x802734B0: nop
    
            goto L_802734BC;
    }
    // 0x802734B0: nop

    // 0x802734B4: jr          $ra
    // 0x802734B8: sh          $zero, 0x38($a0)
    MEM_H(0X38, ctx->r4) = 0;
    return;
    // 0x802734B8: sh          $zero, 0x38($a0)
    MEM_H(0X38, ctx->r4) = 0;
L_802734BC:
    // 0x802734BC: jr          $ra
    // 0x802734C0: sh          $v0, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r2;
    return;
    // 0x802734C0: sh          $v0, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r2;
L_802734C4:
    // 0x802734C4: lh          $t1, 0x3A($a0)
    ctx->r9 = MEM_H(ctx->r4, 0X3A);
    // 0x802734C8: nop

    // 0x802734CC: slti        $at, $t1, 0x4
    ctx->r1 = SIGNED(ctx->r9) < 0X4 ? 1 : 0;
    // 0x802734D0: bne         $at, $zero, L_802734E0
    if (ctx->r1 != 0) {
        // 0x802734D4: nop
    
            goto L_802734E0;
    }
    // 0x802734D4: nop

    // 0x802734D8: jr          $ra
    // 0x802734DC: sh          $zero, 0x38($a0)
    MEM_H(0X38, ctx->r4) = 0;
    return;
    // 0x802734DC: sh          $zero, 0x38($a0)
    MEM_H(0X38, ctx->r4) = 0;
L_802734E0:
    // 0x802734E0: sh          $v0, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r2;
    // 0x802734E4: jr          $ra
    // 0x802734E8: nop

    return;
    // 0x802734E8: nop

;}
RECOMP_FUNC void ovl_8026F480_func_80273484(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80273484: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80273488: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8027348C: sh          $t8, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = ctx->r24;
    // 0x80273490: lh          $t9, 0x24($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X24);
    // 0x80273494: nop

    // 0x80273498: bne         $t9, $zero, L_802734C4
    if (ctx->r25 != 0) {
        // 0x8027349C: nop
    
            goto L_802734C4;
    }
    // 0x8027349C: nop

    // 0x802734A0: lh          $t0, 0x3A($a0)
    ctx->r8 = MEM_H(ctx->r4, 0X3A);
    // 0x802734A4: nop

    // 0x802734A8: slti        $at, $t0, 0x5
    ctx->r1 = SIGNED(ctx->r8) < 0X5 ? 1 : 0;
    // 0x802734AC: bne         $at, $zero, L_802734BC
    if (ctx->r1 != 0) {
        // 0x802734B0: nop
    
            goto L_802734BC;
    }
    // 0x802734B0: nop

    // 0x802734B4: jr          $ra
    // 0x802734B8: sh          $zero, 0x38($a0)
    MEM_H(0X38, ctx->r4) = 0;
    return;
    // 0x802734B8: sh          $zero, 0x38($a0)
    MEM_H(0X38, ctx->r4) = 0;
L_802734BC:
    // 0x802734BC: jr          $ra
    // 0x802734C0: sh          $v0, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r2;
    return;
    // 0x802734C0: sh          $v0, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r2;
L_802734C4:
    // 0x802734C4: lh          $t1, 0x3A($a0)
    ctx->r9 = MEM_H(ctx->r4, 0X3A);
    // 0x802734C8: nop

    // 0x802734CC: slti        $at, $t1, 0x4
    ctx->r1 = SIGNED(ctx->r9) < 0X4 ? 1 : 0;
    // 0x802734D0: bne         $at, $zero, L_802734E0
    if (ctx->r1 != 0) {
        // 0x802734D4: nop
    
            goto L_802734E0;
    }
    // 0x802734D4: nop

    // 0x802734D8: jr          $ra
    // 0x802734DC: sh          $zero, 0x38($a0)
    MEM_H(0X38, ctx->r4) = 0;
    return;
    // 0x802734DC: sh          $zero, 0x38($a0)
    MEM_H(0X38, ctx->r4) = 0;
L_802734E0:
    // 0x802734E0: sh          $v0, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r2;
    // 0x802734E4: jr          $ra
    // 0x802734E8: nop

    return;
    // 0x802734E8: nop

;}
RECOMP_FUNC void ovl_8026F480_func_802734EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802734EC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802734F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802734F4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x802734F8: lh          $t6, 0x38($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X38);
    // 0x802734FC: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80273500: beq         $t6, $zero, L_80273590
    if (ctx->r14 == 0) {
        // 0x80273504: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80273590;
    }
    // 0x80273504: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80273508: lh          $v0, 0x26($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X26);
    // 0x8027350C: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x80273510: addu        $v1, $a0, $v0
    ctx->r3 = ADD32(ctx->r4, ctx->r2);
    // 0x80273514: lb          $t7, 0x28($v1)
    ctx->r15 = MEM_B(ctx->r3, 0X28);
    // 0x80273518: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x8027351C: sb          $t7, 0x56($a0)
    MEM_B(0X56, ctx->r4) = ctx->r15;
    // 0x80273520: lb          $t8, 0x28($v1)
    ctx->r24 = MEM_B(ctx->r3, 0X28);
    // 0x80273524: nop

    // 0x80273528: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x8027352C: sb          $t9, 0x28($v1)
    MEM_B(0X28, ctx->r3) = ctx->r25;
    // 0x80273530: lb          $a0, 0x28($v1)
    ctx->r4 = MEM_B(ctx->r3, 0X28);
    // 0x80273534: lb          $a1, 0x517C($a1)
    ctx->r5 = MEM_B(ctx->r5, 0X517C);
    // 0x80273538: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8027353C: jal         0x8001D6EC
    // 0x80273540: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_8001D6EC(rdram, ctx);
        goto after_0;
    // 0x80273540: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_0:
    // 0x80273544: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x80273548: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x8027354C: sb          $v0, 0x28($v1)
    MEM_B(0X28, ctx->r3) = ctx->r2;
    // 0x80273550: lb          $t1, 0x28($v1)
    ctx->r9 = MEM_B(ctx->r3, 0X28);
    // 0x80273554: lb          $t0, 0x56($a2)
    ctx->r8 = MEM_B(ctx->r6, 0X56);
    // 0x80273558: nop

    // 0x8027355C: beq         $t0, $t1, L_80273590
    if (ctx->r8 == ctx->r9) {
        // 0x80273560: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80273590;
    }
    // 0x80273560: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80273564: jal         0x80035734
    // 0x80273568: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_80035734(rdram, ctx);
        goto after_1;
    // 0x80273568: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_1:
    // 0x8027356C: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x80273570: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80273574: lh          $t2, 0x26($a2)
    ctx->r10 = MEM_H(ctx->r6, 0X26);
    // 0x80273578: nop

    // 0x8027357C: bne         $t2, $at, L_80273590
    if (ctx->r10 != ctx->r1) {
        // 0x80273580: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80273590;
    }
    // 0x80273580: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80273584: jal         0x80015BC0
    // 0x80273588: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_80015BC0(rdram, ctx);
        goto after_2;
    // 0x80273588: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_2:
    // 0x8027358C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80273590:
    // 0x80273590: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80273594: jr          $ra
    // 0x80273598: nop

    return;
    // 0x80273598: nop

;}
RECOMP_FUNC void ovl_8026F480_func_8027356C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027356C: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x80273570: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80273574: lh          $t2, 0x26($a2)
    ctx->r10 = MEM_H(ctx->r6, 0X26);
    // 0x80273578: nop

    // 0x8027357C: bne         $t2, $at, L_80273590
    if (ctx->r10 != ctx->r1) {
        // 0x80273580: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80273590;
    }
    // 0x80273580: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80273584: jal         0x80015BC0
    // 0x80273588: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_80015BC0(rdram, ctx);
        goto after_0;
    // 0x80273588: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_0:
    // 0x8027358C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80273590:
    // 0x80273590: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80273594: jr          $ra
    // 0x80273598: nop

    return;
    // 0x80273598: nop

;}
RECOMP_FUNC void ovl_8026F480_func_8027359C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027359C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802735A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802735A4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x802735A8: lh          $t6, 0x38($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X38);
    // 0x802735AC: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x802735B0: beq         $t6, $zero, L_80273640
    if (ctx->r14 == 0) {
        // 0x802735B4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80273640;
    }
    // 0x802735B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802735B8: lh          $v0, 0x26($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X26);
    // 0x802735BC: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x802735C0: addu        $v1, $a0, $v0
    ctx->r3 = ADD32(ctx->r4, ctx->r2);
    // 0x802735C4: lb          $t7, 0x28($v1)
    ctx->r15 = MEM_B(ctx->r3, 0X28);
    // 0x802735C8: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x802735CC: sb          $t7, 0x56($a0)
    MEM_B(0X56, ctx->r4) = ctx->r15;
    // 0x802735D0: lb          $t8, 0x28($v1)
    ctx->r24 = MEM_B(ctx->r3, 0X28);
    // 0x802735D4: nop

    // 0x802735D8: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x802735DC: sb          $t9, 0x28($v1)
    MEM_B(0X28, ctx->r3) = ctx->r25;
    // 0x802735E0: lb          $a0, 0x28($v1)
    ctx->r4 = MEM_B(ctx->r3, 0X28);
    // 0x802735E4: lb          $a1, 0x517C($a1)
    ctx->r5 = MEM_B(ctx->r5, 0X517C);
    // 0x802735E8: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x802735EC: jal         0x8001D6EC
    // 0x802735F0: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_8001D6EC(rdram, ctx);
        goto after_0;
    // 0x802735F0: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_0:
    // 0x802735F4: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x802735F8: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x802735FC: sb          $v0, 0x28($v1)
    MEM_B(0X28, ctx->r3) = ctx->r2;
    // 0x80273600: lb          $t1, 0x28($v1)
    ctx->r9 = MEM_B(ctx->r3, 0X28);
    // 0x80273604: lb          $t0, 0x56($a2)
    ctx->r8 = MEM_B(ctx->r6, 0X56);
    // 0x80273608: nop

    // 0x8027360C: beq         $t0, $t1, L_80273640
    if (ctx->r8 == ctx->r9) {
        // 0x80273610: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80273640;
    }
    // 0x80273610: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80273614: jal         0x80035734
    // 0x80273618: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_80035734(rdram, ctx);
        goto after_1;
    // 0x80273618: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_1:
    // 0x8027361C: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x80273620: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80273624: lh          $t2, 0x26($a2)
    ctx->r10 = MEM_H(ctx->r6, 0X26);
    // 0x80273628: nop

    // 0x8027362C: bne         $t2, $at, L_80273640
    if (ctx->r10 != ctx->r1) {
        // 0x80273630: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80273640;
    }
    // 0x80273630: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80273634: jal         0x80015BC0
    // 0x80273638: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    func_80015BC0(rdram, ctx);
        goto after_2;
    // 0x80273638: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_2:
    // 0x8027363C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80273640:
    // 0x80273640: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80273644: jr          $ra
    // 0x80273648: nop

    return;
    // 0x80273648: nop

;}
RECOMP_FUNC void ovl_8026F480_func_8027364C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027364C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80273650: lh          $v0, 0x24($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X24);
    // 0x80273654: nop

    // 0x80273658: bne         $v0, $zero, L_80273680
    if (ctx->r2 != 0) {
        // 0x8027365C: xori        $t8, $v0, 0x1
        ctx->r24 = ctx->r2 ^ 0X1;
            goto L_80273680;
    }
    // 0x8027365C: xori        $t8, $v0, 0x1
    ctx->r24 = ctx->r2 ^ 0X1;
    // 0x80273660: lh          $t6, 0x3A($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X3A);
    // 0x80273664: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x80273668: slti        $at, $t6, 0x4
    ctx->r1 = SIGNED(ctx->r14) < 0X4 ? 1 : 0;
    // 0x8027366C: bne         $at, $zero, L_80273680
    if (ctx->r1 != 0) {
        // 0x80273670: xori        $t8, $v0, 0x1
        ctx->r24 = ctx->r2 ^ 0X1;
            goto L_80273680;
    }
    // 0x80273670: xori        $t8, $v0, 0x1
    ctx->r24 = ctx->r2 ^ 0X1;
    // 0x80273674: lh          $v0, 0x24($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X24);
    // 0x80273678: sh          $t7, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = ctx->r15;
    // 0x8027367C: xori        $t8, $v0, 0x1
    ctx->r24 = ctx->r2 ^ 0X1;
L_80273680:
    // 0x80273680: jr          $ra
    // 0x80273684: sh          $t8, 0x24($a0)
    MEM_H(0X24, ctx->r4) = ctx->r24;
    return;
    // 0x80273684: sh          $t8, 0x24($a0)
    MEM_H(0X24, ctx->r4) = ctx->r24;
;}
RECOMP_FUNC void ovl_8026F480_func_80273688(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80273688: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8027368C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80273690: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x80273694: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80273698: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8027369C: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x802736A0: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x802736A4: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x802736A8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802736AC: addiu       $a1, $a1, 0x51D0
    ctx->r5 = ADD32(ctx->r5, 0X51D0);
    // 0x802736B0: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x802736B4: jal         0x8004A298
    // 0x802736B8: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    func_8004A298(rdram, ctx);
        goto after_0;
    // 0x802736B8: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_0:
    // 0x802736BC: lw          $s0, 0x34($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X34);
    // 0x802736C0: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x802736C4: beq         $s0, $s2, L_80273734
    if (ctx->r16 == ctx->r18) {
        // 0x802736C8: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_80273734;
    }
    // 0x802736C8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_802736CC:
    // 0x802736CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802736D0: jal         0x8002F020
    // 0x802736D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8002F020(rdram, ctx);
        goto after_1;
    // 0x802736D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x802736D8: slti        $at, $s1, 0x2
    ctx->r1 = SIGNED(ctx->r17) < 0X2 ? 1 : 0;
    // 0x802736DC: beq         $at, $zero, L_80273708
    if (ctx->r1 == 0) {
        // 0x802736E0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80273708;
    }
    // 0x802736E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802736E4: addiu       $t6, $zero, 0x80
    ctx->r14 = ADD32(0, 0X80);
    // 0x802736E8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x802736EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802736F0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802736F4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x802736F8: jal         0x8004A5C0
    // 0x802736FC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8004A5C0(rdram, ctx);
        goto after_2;
    // 0x802736FC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x80273700: b           L_80273724
    // 0x80273704: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
        goto L_80273724;
    // 0x80273704: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_80273708:
    // 0x80273708: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8027370C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80273710: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80273714: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80273718: jal         0x8004A5C0
    // 0x8027371C: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    func_8004A5C0(rdram, ctx);
        goto after_3;
    // 0x8027371C: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    after_3:
    // 0x80273720: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_80273724:
    // 0x80273724: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80273728: andi        $t8, $s1, 0xFF
    ctx->r24 = ctx->r17 & 0XFF;
    // 0x8027372C: bne         $s0, $s2, L_802736CC
    if (ctx->r16 != ctx->r18) {
        // 0x80273730: or          $s1, $t8, $zero
        ctx->r17 = ctx->r24 | 0;
            goto L_802736CC;
    }
    // 0x80273730: or          $s1, $t8, $zero
    ctx->r17 = ctx->r24 | 0;
L_80273734:
    // 0x80273734: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80273738: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8027373C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80273740: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80273744: jr          $ra
    // 0x80273748: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80273748: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_8026F480_func_8027374C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027374C: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80273750: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80273754: addiu       $v1, $v1, -0x3088
    ctx->r3 = ADD32(ctx->r3, -0X3088);
    // 0x80273758: addiu       $v0, $v0, 0x1CF0
    ctx->r2 = ADD32(ctx->r2, 0X1CF0);
    // 0x8027375C: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x80273760: lb          $t6, 0x3($v1)
    ctx->r14 = MEM_B(ctx->r3, 0X3);
    // 0x80273764: nop

    // 0x80273768: sb          $t6, 0x28($t7)
    MEM_B(0X28, ctx->r15) = ctx->r14;
    // 0x8027376C: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x80273770: lb          $t8, 0x2($v1)
    ctx->r24 = MEM_B(ctx->r3, 0X2);
    // 0x80273774: nop

    // 0x80273778: sb          $t8, 0x29($t9)
    MEM_B(0X29, ctx->r25) = ctx->r24;
    // 0x8027377C: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x80273780: lb          $t0, 0xC($v1)
    ctx->r8 = MEM_B(ctx->r3, 0XC);
    // 0x80273784: nop

    // 0x80273788: sb          $t0, 0x2A($t1)
    MEM_B(0X2A, ctx->r9) = ctx->r8;
    // 0x8027378C: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x80273790: lb          $t2, 0xB($v1)
    ctx->r10 = MEM_B(ctx->r3, 0XB);
    // 0x80273794: nop

    // 0x80273798: sb          $t2, 0x2B($t3)
    MEM_B(0X2B, ctx->r11) = ctx->r10;
    // 0x8027379C: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x802737A0: lb          $t4, 0xD($v1)
    ctx->r12 = MEM_B(ctx->r3, 0XD);
    // 0x802737A4: nop

    // 0x802737A8: sb          $t4, 0x2C($t5)
    MEM_B(0X2C, ctx->r13) = ctx->r12;
    // 0x802737AC: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x802737B0: lb          $t6, 0x9($v1)
    ctx->r14 = MEM_B(ctx->r3, 0X9);
    // 0x802737B4: nop

    // 0x802737B8: sb          $t6, 0x2D($t7)
    MEM_B(0X2D, ctx->r15) = ctx->r14;
    // 0x802737BC: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x802737C0: lb          $t8, 0xA($v1)
    ctx->r24 = MEM_B(ctx->r3, 0XA);
    // 0x802737C4: nop

    // 0x802737C8: sb          $t8, 0x2E($t9)
    MEM_B(0X2E, ctx->r25) = ctx->r24;
    // 0x802737CC: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x802737D0: lb          $t0, 0x8($v1)
    ctx->r8 = MEM_B(ctx->r3, 0X8);
    // 0x802737D4: nop

    // 0x802737D8: sb          $t0, 0x2F($t1)
    MEM_B(0X2F, ctx->r9) = ctx->r8;
    // 0x802737DC: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x802737E0: lb          $t2, 0x7($v1)
    ctx->r10 = MEM_B(ctx->r3, 0X7);
    // 0x802737E4: jr          $ra
    // 0x802737E8: sb          $t2, 0x30($t3)
    MEM_B(0X30, ctx->r11) = ctx->r10;
    return;
    // 0x802737E8: sb          $t2, 0x30($t3)
    MEM_B(0X30, ctx->r11) = ctx->r10;
;}
RECOMP_FUNC void ovl_8026F480_func_802737A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802737A0: lb          $t4, 0xD($v1)
    ctx->r12 = MEM_B(ctx->r3, 0XD);
    // 0x802737A4: nop

    // 0x802737A8: sb          $t4, 0x2C($t5)
    MEM_B(0X2C, ctx->r13) = ctx->r12;
    // 0x802737AC: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x802737B0: lb          $t6, 0x9($v1)
    ctx->r14 = MEM_B(ctx->r3, 0X9);
    // 0x802737B4: nop

    // 0x802737B8: sb          $t6, 0x2D($t7)
    MEM_B(0X2D, ctx->r15) = ctx->r14;
    // 0x802737BC: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x802737C0: lb          $t8, 0xA($v1)
    ctx->r24 = MEM_B(ctx->r3, 0XA);
    // 0x802737C4: nop

    // 0x802737C8: sb          $t8, 0x2E($t9)
    MEM_B(0X2E, ctx->r25) = ctx->r24;
    // 0x802737CC: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x802737D0: lb          $t0, 0x8($v1)
    ctx->r8 = MEM_B(ctx->r3, 0X8);
    // 0x802737D4: nop

    // 0x802737D8: sb          $t0, 0x2F($t1)
    MEM_B(0X2F, ctx->r9) = ctx->r8;
    // 0x802737DC: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x802737E0: lb          $t2, 0x7($v1)
    ctx->r10 = MEM_B(ctx->r3, 0X7);
    // 0x802737E4: jr          $ra
    // 0x802737E8: sb          $t2, 0x30($t3)
    MEM_B(0X30, ctx->r11) = ctx->r10;
    return;
    // 0x802737E8: sb          $t2, 0x30($t3)
    MEM_B(0X30, ctx->r11) = ctx->r10;
;}
RECOMP_FUNC void ovl_8026F480_func_802737EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802737EC: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x802737F0: lw          $v0, 0x1CF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1CF0);
    // 0x802737F4: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x802737F8: lb          $t6, 0x28($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X28);
    // 0x802737FC: addiu       $v1, $v1, -0x3088
    ctx->r3 = ADD32(ctx->r3, -0X3088);
    // 0x80273800: sb          $t6, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r14;
    // 0x80273804: lb          $t7, 0x29($v0)
    ctx->r15 = MEM_B(ctx->r2, 0X29);
    // 0x80273808: nop

    // 0x8027380C: sb          $t7, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r15;
    // 0x80273810: lb          $t8, 0x2A($v0)
    ctx->r24 = MEM_B(ctx->r2, 0X2A);
    // 0x80273814: nop

    // 0x80273818: sb          $t8, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r24;
    // 0x8027381C: lb          $t9, 0x2B($v0)
    ctx->r25 = MEM_B(ctx->r2, 0X2B);
    // 0x80273820: nop

    // 0x80273824: sb          $t9, 0xB($v1)
    MEM_B(0XB, ctx->r3) = ctx->r25;
    // 0x80273828: lb          $t0, 0x2C($v0)
    ctx->r8 = MEM_B(ctx->r2, 0X2C);
    // 0x8027382C: nop

    // 0x80273830: sb          $t0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r8;
    // 0x80273834: lb          $t1, 0x2D($v0)
    ctx->r9 = MEM_B(ctx->r2, 0X2D);
    // 0x80273838: nop

    // 0x8027383C: sb          $t1, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r9;
    // 0x80273840: lb          $t2, 0x2E($v0)
    ctx->r10 = MEM_B(ctx->r2, 0X2E);
    // 0x80273844: nop

    // 0x80273848: sb          $t2, 0xA($v1)
    MEM_B(0XA, ctx->r3) = ctx->r10;
    // 0x8027384C: lb          $t3, 0x2F($v0)
    ctx->r11 = MEM_B(ctx->r2, 0X2F);
    // 0x80273850: nop

    // 0x80273854: sb          $t3, 0x8($v1)
    MEM_B(0X8, ctx->r3) = ctx->r11;
    // 0x80273858: lb          $t4, 0x30($v0)
    ctx->r12 = MEM_B(ctx->r2, 0X30);
    // 0x8027385C: jr          $ra
    // 0x80273860: sb          $t4, 0x7($v1)
    MEM_B(0X7, ctx->r3) = ctx->r12;
    return;
    // 0x80273860: sb          $t4, 0x7($v1)
    MEM_B(0X7, ctx->r3) = ctx->r12;
;}
RECOMP_FUNC void ovl_8026F480_func_80273864(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80273864: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80273868: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8027386C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80273870: lui         $s1, 0x8027
    ctx->r17 = S32(0X8027 << 16);
    // 0x80273874: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80273878: addiu       $s1, $s1, 0x38B8
    ctx->r17 = ADD32(ctx->r17, 0X38B8);
    // 0x8027387C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_80273880:
    // 0x80273880: jal         0x80029354
    // 0x80273884: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80029354(rdram, ctx);
        goto after_0;
    // 0x80273884: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_0:
    // 0x80273888: sh          $s0, 0x24($v0)
    MEM_H(0X24, ctx->r2) = ctx->r16;
    // 0x8027388C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80273890: sll         $t6, $s0, 16
    ctx->r14 = S32(ctx->r16 << 16);
    // 0x80273894: sra         $s0, $t6, 16
    ctx->r16 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80273898: slti        $at, $s0, 0x9
    ctx->r1 = SIGNED(ctx->r16) < 0X9 ? 1 : 0;
    // 0x8027389C: bne         $at, $zero, L_80273880
    if (ctx->r1 != 0) {
        // 0x802738A0: nop
    
            goto L_80273880;
    }
    // 0x802738A0: nop

    // 0x802738A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802738A8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x802738AC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x802738B0: jr          $ra
    // 0x802738B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x802738B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_8026F480_func_802738B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802738B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802738BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802738C0: jal         0x802739D0
    // 0x802738C4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    ovl_8026F480_func_802739D0(rdram, ctx);
        goto after_0;
    // 0x802738C4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x802738C8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x802738CC: jal         0x8002F020
    // 0x802738D0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8002F020(rdram, ctx);
        goto after_1;
    // 0x802738D0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x802738D4: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x802738D8: jal         0x800296E0
    // 0x802738DC: addiu       $a0, $a0, 0x38F0
    ctx->r4 = ADD32(ctx->r4, 0X38F0);
    func_800296E0(rdram, ctx);
        goto after_2;
    // 0x802738DC: addiu       $a0, $a0, 0x38F0
    ctx->r4 = ADD32(ctx->r4, 0X38F0);
    after_2:
    // 0x802738E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802738E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802738E8: jr          $ra
    // 0x802738EC: nop

    return;
    // 0x802738EC: nop

;}
RECOMP_FUNC void ovl_8026F480_func_802738F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802738F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802738F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802738F8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802738FC: lh          $v0, 0x24($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X24);
    // 0x80273900: lui         $t1, 0x8027
    ctx->r9 = S32(0X8027 << 16);
    // 0x80273904: lui         $a3, 0x801B
    ctx->r7 = S32(0X801B << 16);
    // 0x80273908: addiu       $t1, $t1, 0x4FF8
    ctx->r9 = ADD32(ctx->r9, 0X4FF8);
    // 0x8027390C: addu        $a3, $a3, $v0
    ctx->r7 = ADD32(ctx->r7, ctx->r2);
    // 0x80273910: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x80273914: lb          $v1, -0x6B4($a3)
    ctx->r3 = MEM_B(ctx->r7, -0X6B4);
    // 0x80273918: addu        $t9, $t1, $t8
    ctx->r25 = ADD32(ctx->r9, ctx->r24);
    // 0x8027391C: lw          $t2, 0x0($t9)
    ctx->r10 = MEM_W(ctx->r25, 0X0);
    // 0x80273920: sll         $t7, $v1, 2
    ctx->r15 = S32(ctx->r3 << 2);
    // 0x80273924: addu        $t3, $t2, $t7
    ctx->r11 = ADD32(ctx->r10, ctx->r15);
    // 0x80273928: lh          $t4, 0x0($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X0);
    // 0x8027392C: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
    // 0x80273930: sh          $t4, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r12;
    // 0x80273934: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
    // 0x80273938: lui         $t0, 0x8027
    ctx->r8 = S32(0X8027 << 16);
    // 0x8027393C: lh          $t6, 0x24($t5)
    ctx->r14 = MEM_H(ctx->r13, 0X24);
    // 0x80273940: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x80273944: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80273948: addu        $t8, $t1, $t7
    ctx->r24 = ADD32(ctx->r9, ctx->r15);
    // 0x8027394C: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x80273950: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80273954: addu        $t2, $t9, $v1
    ctx->r10 = ADD32(ctx->r25, ctx->r3);
    // 0x80273958: lh          $t3, 0x2($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X2);
    // 0x8027395C: nop

    // 0x80273960: sh          $t3, 0x1C($a1)
    MEM_H(0X1C, ctx->r5) = ctx->r11;
    // 0x80273964: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x80273968: nop

    // 0x8027396C: lh          $t5, 0x24($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X24);
    // 0x80273970: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x80273974: addu        $t0, $t0, $t5
    ctx->r8 = ADD32(ctx->r8, ctx->r13);
    // 0x80273978: lb          $t0, 0x5090($t0)
    ctx->r8 = MEM_B(ctx->r8, 0X5090);
    // 0x8027397C: jal         0x8007AAF8
    // 0x80273980: andi        $a1, $t0, 0xFFFF
    ctx->r5 = ctx->r8 & 0XFFFF;
    func_8007AAF8(rdram, ctx);
        goto after_0;
    // 0x80273980: andi        $a1, $t0, 0xFFFF
    ctx->r5 = ctx->r8 & 0XFFFF;
    after_0:
    // 0x80273984: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80273988: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8027398C: addiu       $v0, $v0, -0x750
    ctx->r2 = ADD32(ctx->r2, -0X750);
    // 0x80273990: lh          $t6, 0x9A($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X9A);
    // 0x80273994: lh          $t8, 0x24($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X24);
    // 0x80273998: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8027399C: bne         $t6, $t8, L_802739BC
    if (ctx->r14 != ctx->r24) {
        // 0x802739A0: addiu       $t3, $zero, 0x414
        ctx->r11 = ADD32(0, 0X414);
            goto L_802739BC;
    }
    // 0x802739A0: addiu       $t3, $zero, 0x414
    ctx->r11 = ADD32(0, 0X414);
    // 0x802739A4: lh          $t9, 0xAC($v0)
    ctx->r25 = MEM_H(ctx->r2, 0XAC);
    // 0x802739A8: addiu       $t2, $zero, 0xB
    ctx->r10 = ADD32(0, 0XB);
    // 0x802739AC: beq         $t9, $zero, L_802739BC
    if (ctx->r25 == 0) {
        // 0x802739B0: nop
    
            goto L_802739BC;
    }
    // 0x802739B0: nop

    // 0x802739B4: b           L_802739C0
    // 0x802739B8: sb          $t2, 0x5($a2)
    MEM_B(0X5, ctx->r6) = ctx->r10;
        goto L_802739C0;
    // 0x802739B8: sb          $t2, 0x5($a2)
    MEM_B(0X5, ctx->r6) = ctx->r10;
L_802739BC:
    // 0x802739BC: sh          $t3, 0x12($a2)
    MEM_H(0X12, ctx->r6) = ctx->r11;
L_802739C0:
    // 0x802739C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802739C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802739C8: jr          $ra
    // 0x802739CC: nop

    return;
    // 0x802739CC: nop

;}
RECOMP_FUNC void ovl_8026F480_func_802739D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802739D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802739D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802739D8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802739DC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802739E0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x802739E4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x802739E8: jal         0x80021214
    // 0x802739EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80021214(rdram, ctx);
        goto after_0;
    // 0x802739EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x802739F0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x802739F4: jal         0x8004BDA0
    // 0x802739F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8004BDA0(rdram, ctx);
        goto after_1;
    // 0x802739F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x802739FC: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x80273A00: addiu       $t6, $t6, -0x6CE4
    ctx->r14 = ADD32(ctx->r14, -0X6CE4);
    // 0x80273A04: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x80273A08: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80273A0C: sw          $at, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r1;
    // 0x80273A10: lw          $a2, 0x4($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X4);
    // 0x80273A14: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x80273A18: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x80273A1C: lw          $a3, 0x8($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X8);
    // 0x80273A20: jal         0x8004B078
    // 0x80273A24: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    func_8004B078(rdram, ctx);
        goto after_2;
    // 0x80273A24: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    after_2:
    // 0x80273A28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80273A2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80273A30: jr          $ra
    // 0x80273A34: nop

    return;
    // 0x80273A34: nop

    // 0x80273A38: nop

    // 0x80273A3C: nop

    // 0x80273A40: nop

    // 0x80273A44: nop

;}
RECOMP_FUNC void func_80275230(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80275230: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80275234: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80275238: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8027523C: jal         0x80036258
    // 0x80275240: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_80036258(rdram, ctx);
        goto after_0;
    // 0x80275240: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x80275244: lui         $a0, 0x803D
    ctx->r4 = S32(0X803D << 16);
    // 0x80275248: jal         0x80035FF0
    // 0x8027524C: addiu       $a0, $a0, 0x1BCC
    ctx->r4 = ADD32(ctx->r4, 0X1BCC);
    func_80035FF0(rdram, ctx);
        goto after_1;
    // 0x8027524C: addiu       $a0, $a0, 0x1BCC
    ctx->r4 = ADD32(ctx->r4, 0X1BCC);
    after_1:
    // 0x80275250: addiu       $a0, $zero, 0xF00
    ctx->r4 = ADD32(0, 0XF00);
    // 0x80275254: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x80275258: jal         0x80049E40
    // 0x8027525C: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_80049E40(rdram, ctx);
        goto after_2;
    // 0x8027525C: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_2:
    // 0x80275260: jal         0x80276D18
    // 0x80275264: nop

    func_80276D18(rdram, ctx);
        goto after_3;
    // 0x80275264: nop

    after_3:
    // 0x80275268: jal         0x80276E4C
    // 0x8027526C: nop

    func_80276E4C(rdram, ctx);
        goto after_4;
    // 0x8027526C: nop

    after_4:
    // 0x80275270: jal         0x802770F4
    // 0x80275274: nop

    func_802770F4(rdram, ctx);
        goto after_5;
    // 0x80275274: nop

    after_5:
    // 0x80275278: jal         0x802771FC
    // 0x8027527C: nop

    func_802771FC(rdram, ctx);
        goto after_6;
    // 0x8027527C: nop

    after_6:
    // 0x80275280: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80275284: lb          $a0, -0x326C($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X326C);
    // 0x80275288: jal         0x8005CED4
    // 0x8027528C: nop

    func_8005CED4(rdram, ctx);
        goto after_7;
    // 0x8027528C: nop

    after_7:
    // 0x80275290: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80275294: lb          $a0, -0x326C($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X326C);
    // 0x80275298: jal         0x8005CC40
    // 0x8027529C: nop

    func_8005CC40(rdram, ctx);
        goto after_8;
    // 0x8027529C: nop

    after_8:
    // 0x802752A0: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x802752A4: addiu       $v0, $v0, -0x2F98
    ctx->r2 = ADD32(ctx->r2, -0X2F98);
    // 0x802752A8: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x802752AC: lui         $v1, 0x2
    ctx->r3 = S32(0X2 << 16);
    // 0x802752B0: ori         $v1, $v1, 0x8000
    ctx->r3 = ctx->r3 | 0X8000;
    // 0x802752B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802752B8: addu        $t7, $t6, $v1
    ctx->r15 = ADD32(ctx->r14, ctx->r3);
    // 0x802752BC: sb          $a1, 0x60E1($t7)
    MEM_B(0X60E1, ctx->r15) = ctx->r5;
    // 0x802752C0: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x802752C4: nop

    // 0x802752C8: addu        $t9, $t8, $v1
    ctx->r25 = ADD32(ctx->r24, ctx->r3);
    // 0x802752CC: sb          $a1, 0x63AD($t9)
    MEM_B(0X63AD, ctx->r25) = ctx->r5;
    // 0x802752D0: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x802752D4: nop

    // 0x802752D8: addu        $t1, $t0, $v1
    ctx->r9 = ADD32(ctx->r8, ctx->r3);
    // 0x802752DC: sb          $a1, 0x6945($t1)
    MEM_B(0X6945, ctx->r9) = ctx->r5;
    // 0x802752E0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x802752E4: jal         0x8004AFC0
    // 0x802752E8: nop

    func_8004AFC0(rdram, ctx);
        goto after_9;
    // 0x802752E8: nop

    after_9:
    // 0x802752EC: jal         0x80277BB0
    // 0x802752F0: nop

    func_80277BB0(rdram, ctx);
        goto after_10;
    // 0x802752F0: nop

    after_10:
    // 0x802752F4: jal         0x80277CF0
    // 0x802752F8: nop

    func_80277CF0(rdram, ctx);
        goto after_11;
    // 0x802752F8: nop

    after_11:
    // 0x802752FC: jal         0x80277FF4
    // 0x80275300: nop

    func_80277FF4(rdram, ctx);
        goto after_12;
    // 0x80275300: nop

    after_12:
    // 0x80275304: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80275308: addiu       $a1, $zero, 0xFB
    ctx->r5 = ADD32(0, 0XFB);
    // 0x8027530C: jal         0x80021214
    // 0x80275310: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80021214(rdram, ctx);
        goto after_13;
    // 0x80275310: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_13:
    // 0x80275314: lui         $t2, 0x8028
    ctx->r10 = S32(0X8028 << 16);
    // 0x80275318: addiu       $t2, $t2, 0xFA4
    ctx->r10 = ADD32(ctx->r10, 0XFA4);
    // 0x8027531C: lw          $at, 0x0($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X0);
    // 0x80275320: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80275324: sw          $at, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r1;
    // 0x80275328: lw          $a2, 0x4($t2)
    ctx->r6 = MEM_W(ctx->r10, 0X4);
    // 0x8027532C: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x80275330: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x80275334: lw          $a3, 0x8($t2)
    ctx->r7 = MEM_W(ctx->r10, 0X8);
    // 0x80275338: jal         0x8004B078
    // 0x8027533C: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    func_8004B078(rdram, ctx);
        goto after_14;
    // 0x8027533C: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    after_14:
    // 0x80275340: jal         0x802782C8
    // 0x80275344: nop

    func_802782C8(rdram, ctx);
        goto after_15;
    // 0x80275344: nop

    after_15:
    // 0x80275348: lui         $t5, 0x800B
    ctx->r13 = S32(0X800B << 16);
    // 0x8027534C: addiu       $t5, $t5, -0x6C78
    ctx->r13 = ADD32(ctx->r13, -0X6C78);
    // 0x80275350: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x80275354: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80275358: sw          $at, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r1;
    // 0x8027535C: lw          $a2, 0x4($t5)
    ctx->r6 = MEM_W(ctx->r13, 0X4);
    // 0x80275360: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x80275364: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x80275368: lw          $a3, 0x8($t5)
    ctx->r7 = MEM_W(ctx->r13, 0X8);
    // 0x8027536C: jal         0x8004B1A0
    // 0x80275370: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    func_8004B1A0(rdram, ctx);
        goto after_16;
    // 0x80275370: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    after_16:
    // 0x80275374: jal         0x80278584
    // 0x80275378: nop

    func_80278584(rdram, ctx);
        goto after_17;
    // 0x80275378: nop

    after_17:
    // 0x8027537C: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x80275380: jal         0x8002AAC0
    // 0x80275384: addiu       $a0, $a0, 0x19B8
    ctx->r4 = ADD32(ctx->r4, 0X19B8);
    func_8002AAC0(rdram, ctx);
        goto after_18;
    // 0x80275384: addiu       $a0, $a0, 0x19B8
    ctx->r4 = ADD32(ctx->r4, 0X19B8);
    after_18:
    // 0x80275388: jal         0x80278CD0
    // 0x8027538C: nop

    func_80278CD0(rdram, ctx);
        goto after_19;
    // 0x8027538C: nop

    after_19:
    // 0x80275390: jal         0x8027A4DC
    // 0x80275394: nop

    func_8027A4DC(rdram, ctx);
        goto after_20;
    // 0x80275394: nop

    after_20:
    // 0x80275398: jal         0x8027A95C
    // 0x8027539C: nop

    func_8027A95C(rdram, ctx);
        goto after_21;
    // 0x8027539C: nop

    after_21:
    // 0x802753A0: jal         0x8027AC98
    // 0x802753A4: nop

    func_8027AC98(rdram, ctx);
        goto after_22;
    // 0x802753A4: nop

    after_22:
    // 0x802753A8: jal         0x8027AB18
    // 0x802753AC: nop

    func_8027AB18(rdram, ctx);
        goto after_23;
    // 0x802753AC: nop

    after_23:
    // 0x802753B0: jal         0x80279C14
    // 0x802753B4: nop

    func_80279C14(rdram, ctx);
        goto after_24;
    // 0x802753B4: nop

    after_24:
    // 0x802753B8: jal         0x80278F60
    // 0x802753BC: nop

    func_80278F60(rdram, ctx);
        goto after_25;
    // 0x802753BC: nop

    after_25:
    // 0x802753C0: jal         0x80279198
    // 0x802753C4: nop

    func_80279198(rdram, ctx);
        goto after_26;
    // 0x802753C4: nop

    after_26:
    // 0x802753C8: jal         0x80279694
    // 0x802753CC: nop

    func_80279694(rdram, ctx);
        goto after_27;
    // 0x802753CC: nop

    after_27:
    // 0x802753D0: jal         0x802797B0
    // 0x802753D4: nop

    func_802797B0(rdram, ctx);
        goto after_28;
    // 0x802753D4: nop

    after_28:
    // 0x802753D8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x802753DC: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x802753E0: jal         0x8006F918
    // 0x802753E4: nop

    func_8006F918(rdram, ctx);
        goto after_29;
    // 0x802753E4: nop

    after_29:
    // 0x802753E8: jal         0x802779A0
    // 0x802753EC: nop

    func_802779A0(rdram, ctx);
        goto after_30;
    // 0x802753EC: nop

    after_30:
    // 0x802753F0: jal         0x802779F8
    // 0x802753F4: nop

    func_802779F8(rdram, ctx);
        goto after_31;
    // 0x802753F4: nop

    after_31:
    // 0x802753F8: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x802753FC: jal         0x80029220
    // 0x80275400: addiu       $a0, $a0, -0x6DC4
    ctx->r4 = ADD32(ctx->r4, -0X6DC4);
    func_80029220(rdram, ctx);
        goto after_32;
    // 0x80275400: addiu       $a0, $a0, -0x6DC4
    ctx->r4 = ADD32(ctx->r4, -0X6DC4);
    after_32:
    // 0x80275404: jal         0x8027B104
    // 0x80275408: nop

    func_8027B104(rdram, ctx);
        goto after_33;
    // 0x80275408: nop

    after_33:
    // 0x8027540C: jal         0x802787A8
    // 0x80275410: nop

    func_802787A8(rdram, ctx);
        goto after_34;
    // 0x80275410: nop

    after_34:
    // 0x80275414: jal         0x80278A88
    // 0x80275418: nop

    func_80278A88(rdram, ctx);
        goto after_35;
    // 0x80275418: nop

    after_35:
    // 0x8027541C: jal         0x80278754
    // 0x80275420: nop

    func_80278754(rdram, ctx);
        goto after_36;
    // 0x80275420: nop

    after_36:
    // 0x80275424: addiu       $t8, $zero, 0x26
    ctx->r24 = ADD32(0, 0X26);
    // 0x80275428: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8027542C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80275430: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80275434: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80275438: jal         0x8004B918
    // 0x8027543C: addiu       $a3, $zero, 0x140
    ctx->r7 = ADD32(0, 0X140);
    func_8004B918(rdram, ctx);
        goto after_37;
    // 0x8027543C: addiu       $a3, $zero, 0x140
    ctx->r7 = ADD32(0, 0X140);
    after_37:
    // 0x80275440: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x80275444: jal         0x80029220
    // 0x80275448: addiu       $a0, $a0, -0x4DF4
    ctx->r4 = ADD32(ctx->r4, -0X4DF4);
    func_80029220(rdram, ctx);
        goto after_38;
    // 0x80275448: addiu       $a0, $a0, -0x4DF4
    ctx->r4 = ADD32(ctx->r4, -0X4DF4);
    after_38:
    // 0x8027544C: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x80275450: jal         0x80029220
    // 0x80275454: addiu       $a0, $a0, -0x4D3C
    ctx->r4 = ADD32(ctx->r4, -0X4D3C);
    func_80029220(rdram, ctx);
        goto after_39;
    // 0x80275454: addiu       $a0, $a0, -0x4D3C
    ctx->r4 = ADD32(ctx->r4, -0X4D3C);
    after_39:
    // 0x80275458: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x8027545C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80275460: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x80275464: addiu       $a0, $a0, -0x4C9C
    ctx->r4 = ADD32(ctx->r4, -0X4C9C);
    // 0x80275468: jal         0x80029220
    // 0x8027546C: sb          $t9, 0x51($t0)
    MEM_B(0X51, ctx->r8) = ctx->r25;
    func_80029220(rdram, ctx);
        goto after_40;
    // 0x8027546C: sb          $t9, 0x51($t0)
    MEM_B(0X51, ctx->r8) = ctx->r25;
    after_40:
    // 0x80275470: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80275474: addiu       $a0, $a0, 0x5490
    ctx->r4 = ADD32(ctx->r4, 0X5490);
    // 0x80275478: jal         0x8004AE38
    // 0x8027547C: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_8004AE38(rdram, ctx);
        goto after_41;
    // 0x8027547C: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_41:
    // 0x80275480: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80275484: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80275488: jr          $ra
    // 0x8027548C: nop

    return;
    // 0x8027548C: nop

;}
RECOMP_FUNC void func_80275238(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80275238: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8027523C: jal         0x80036258
    // 0x80275240: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_80036258(rdram, ctx);
        goto after_0;
    // 0x80275240: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x80275244: lui         $a0, 0x803D
    ctx->r4 = S32(0X803D << 16);
    // 0x80275248: jal         0x80035FF0
    // 0x8027524C: addiu       $a0, $a0, 0x1BCC
    ctx->r4 = ADD32(ctx->r4, 0X1BCC);
    func_80035FF0(rdram, ctx);
        goto after_1;
    // 0x8027524C: addiu       $a0, $a0, 0x1BCC
    ctx->r4 = ADD32(ctx->r4, 0X1BCC);
    after_1:
    // 0x80275250: addiu       $a0, $zero, 0xF00
    ctx->r4 = ADD32(0, 0XF00);
    // 0x80275254: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x80275258: jal         0x80049E40
    // 0x8027525C: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_80049E40(rdram, ctx);
        goto after_2;
    // 0x8027525C: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_2:
    // 0x80275260: jal         0x80276D18
    // 0x80275264: nop

    func_80276D18(rdram, ctx);
        goto after_3;
    // 0x80275264: nop

    after_3:
    // 0x80275268: jal         0x80276E4C
    // 0x8027526C: nop

    func_80276E4C(rdram, ctx);
        goto after_4;
    // 0x8027526C: nop

    after_4:
    // 0x80275270: jal         0x802770F4
    // 0x80275274: nop

    func_802770F4(rdram, ctx);
        goto after_5;
    // 0x80275274: nop

    after_5:
    // 0x80275278: jal         0x802771FC
    // 0x8027527C: nop

    func_802771FC(rdram, ctx);
        goto after_6;
    // 0x8027527C: nop

    after_6:
    // 0x80275280: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80275284: lb          $a0, -0x326C($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X326C);
    // 0x80275288: jal         0x8005CED4
    // 0x8027528C: nop

    func_8005CED4(rdram, ctx);
        goto after_7;
    // 0x8027528C: nop

    after_7:
    // 0x80275290: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80275294: lb          $a0, -0x326C($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X326C);
    // 0x80275298: jal         0x8005CC40
    // 0x8027529C: nop

    func_8005CC40(rdram, ctx);
        goto after_8;
    // 0x8027529C: nop

    after_8:
    // 0x802752A0: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x802752A4: addiu       $v0, $v0, -0x2F98
    ctx->r2 = ADD32(ctx->r2, -0X2F98);
    // 0x802752A8: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x802752AC: lui         $v1, 0x2
    ctx->r3 = S32(0X2 << 16);
    // 0x802752B0: ori         $v1, $v1, 0x8000
    ctx->r3 = ctx->r3 | 0X8000;
    // 0x802752B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802752B8: addu        $t7, $t6, $v1
    ctx->r15 = ADD32(ctx->r14, ctx->r3);
    // 0x802752BC: sb          $a1, 0x60E1($t7)
    MEM_B(0X60E1, ctx->r15) = ctx->r5;
    // 0x802752C0: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x802752C4: nop

    // 0x802752C8: addu        $t9, $t8, $v1
    ctx->r25 = ADD32(ctx->r24, ctx->r3);
    // 0x802752CC: sb          $a1, 0x63AD($t9)
    MEM_B(0X63AD, ctx->r25) = ctx->r5;
    // 0x802752D0: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x802752D4: nop

    // 0x802752D8: addu        $t1, $t0, $v1
    ctx->r9 = ADD32(ctx->r8, ctx->r3);
    // 0x802752DC: sb          $a1, 0x6945($t1)
    MEM_B(0X6945, ctx->r9) = ctx->r5;
    // 0x802752E0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x802752E4: jal         0x8004AFC0
    // 0x802752E8: nop

    func_8004AFC0(rdram, ctx);
        goto after_9;
    // 0x802752E8: nop

    after_9:
    // 0x802752EC: jal         0x80277BB0
    // 0x802752F0: nop

    func_80277BB0(rdram, ctx);
        goto after_10;
    // 0x802752F0: nop

    after_10:
    // 0x802752F4: jal         0x80277CF0
    // 0x802752F8: nop

    func_80277CF0(rdram, ctx);
        goto after_11;
    // 0x802752F8: nop

    after_11:
    // 0x802752FC: jal         0x80277FF4
    // 0x80275300: nop

    func_80277FF4(rdram, ctx);
        goto after_12;
    // 0x80275300: nop

    after_12:
    // 0x80275304: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80275308: addiu       $a1, $zero, 0xFB
    ctx->r5 = ADD32(0, 0XFB);
    // 0x8027530C: jal         0x80021214
    // 0x80275310: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80021214(rdram, ctx);
        goto after_13;
    // 0x80275310: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_13:
    // 0x80275314: lui         $t2, 0x8028
    ctx->r10 = S32(0X8028 << 16);
    // 0x80275318: addiu       $t2, $t2, 0xFA4
    ctx->r10 = ADD32(ctx->r10, 0XFA4);
    // 0x8027531C: lw          $at, 0x0($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X0);
    // 0x80275320: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80275324: sw          $at, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r1;
    // 0x80275328: lw          $a2, 0x4($t2)
    ctx->r6 = MEM_W(ctx->r10, 0X4);
    // 0x8027532C: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x80275330: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x80275334: lw          $a3, 0x8($t2)
    ctx->r7 = MEM_W(ctx->r10, 0X8);
    // 0x80275338: jal         0x8004B078
    // 0x8027533C: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    func_8004B078(rdram, ctx);
        goto after_14;
    // 0x8027533C: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    after_14:
    // 0x80275340: jal         0x802782C8
    // 0x80275344: nop

    func_802782C8(rdram, ctx);
        goto after_15;
    // 0x80275344: nop

    after_15:
    // 0x80275348: lui         $t5, 0x800B
    ctx->r13 = S32(0X800B << 16);
    // 0x8027534C: addiu       $t5, $t5, -0x6C78
    ctx->r13 = ADD32(ctx->r13, -0X6C78);
    // 0x80275350: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x80275354: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80275358: sw          $at, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r1;
    // 0x8027535C: lw          $a2, 0x4($t5)
    ctx->r6 = MEM_W(ctx->r13, 0X4);
    // 0x80275360: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x80275364: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x80275368: lw          $a3, 0x8($t5)
    ctx->r7 = MEM_W(ctx->r13, 0X8);
    // 0x8027536C: jal         0x8004B1A0
    // 0x80275370: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    func_8004B1A0(rdram, ctx);
        goto after_16;
    // 0x80275370: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    after_16:
    // 0x80275374: jal         0x80278584
    // 0x80275378: nop

    func_80278584(rdram, ctx);
        goto after_17;
    // 0x80275378: nop

    after_17:
    // 0x8027537C: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x80275380: jal         0x8002AAC0
    // 0x80275384: addiu       $a0, $a0, 0x19B8
    ctx->r4 = ADD32(ctx->r4, 0X19B8);
    func_8002AAC0(rdram, ctx);
        goto after_18;
    // 0x80275384: addiu       $a0, $a0, 0x19B8
    ctx->r4 = ADD32(ctx->r4, 0X19B8);
    after_18:
    // 0x80275388: jal         0x80278CD0
    // 0x8027538C: nop

    func_80278CD0(rdram, ctx);
        goto after_19;
    // 0x8027538C: nop

    after_19:
    // 0x80275390: jal         0x8027A4DC
    // 0x80275394: nop

    func_8027A4DC(rdram, ctx);
        goto after_20;
    // 0x80275394: nop

    after_20:
    // 0x80275398: jal         0x8027A95C
    // 0x8027539C: nop

    func_8027A95C(rdram, ctx);
        goto after_21;
    // 0x8027539C: nop

    after_21:
    // 0x802753A0: jal         0x8027AC98
    // 0x802753A4: nop

    func_8027AC98(rdram, ctx);
        goto after_22;
    // 0x802753A4: nop

    after_22:
    // 0x802753A8: jal         0x8027AB18
    // 0x802753AC: nop

    func_8027AB18(rdram, ctx);
        goto after_23;
    // 0x802753AC: nop

    after_23:
    // 0x802753B0: jal         0x80279C14
    // 0x802753B4: nop

    func_80279C14(rdram, ctx);
        goto after_24;
    // 0x802753B4: nop

    after_24:
    // 0x802753B8: jal         0x80278F60
    // 0x802753BC: nop

    func_80278F60(rdram, ctx);
        goto after_25;
    // 0x802753BC: nop

    after_25:
    // 0x802753C0: jal         0x80279198
    // 0x802753C4: nop

    func_80279198(rdram, ctx);
        goto after_26;
    // 0x802753C4: nop

    after_26:
    // 0x802753C8: jal         0x80279694
    // 0x802753CC: nop

    func_80279694(rdram, ctx);
        goto after_27;
    // 0x802753CC: nop

    after_27:
    // 0x802753D0: jal         0x802797B0
    // 0x802753D4: nop

    func_802797B0(rdram, ctx);
        goto after_28;
    // 0x802753D4: nop

    after_28:
    // 0x802753D8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x802753DC: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x802753E0: jal         0x8006F918
    // 0x802753E4: nop

    func_8006F918(rdram, ctx);
        goto after_29;
    // 0x802753E4: nop

    after_29:
    // 0x802753E8: jal         0x802779A0
    // 0x802753EC: nop

    func_802779A0(rdram, ctx);
        goto after_30;
    // 0x802753EC: nop

    after_30:
    // 0x802753F0: jal         0x802779F8
    // 0x802753F4: nop

    func_802779F8(rdram, ctx);
        goto after_31;
    // 0x802753F4: nop

    after_31:
    // 0x802753F8: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x802753FC: jal         0x80029220
    // 0x80275400: addiu       $a0, $a0, -0x6DC4
    ctx->r4 = ADD32(ctx->r4, -0X6DC4);
    func_80029220(rdram, ctx);
        goto after_32;
    // 0x80275400: addiu       $a0, $a0, -0x6DC4
    ctx->r4 = ADD32(ctx->r4, -0X6DC4);
    after_32:
    // 0x80275404: jal         0x8027B104
    // 0x80275408: nop

    func_8027B104(rdram, ctx);
        goto after_33;
    // 0x80275408: nop

    after_33:
    // 0x8027540C: jal         0x802787A8
    // 0x80275410: nop

    func_802787A8(rdram, ctx);
        goto after_34;
    // 0x80275410: nop

    after_34:
    // 0x80275414: jal         0x80278A88
    // 0x80275418: nop

    func_80278A88(rdram, ctx);
        goto after_35;
    // 0x80275418: nop

    after_35:
    // 0x8027541C: jal         0x80278754
    // 0x80275420: nop

    func_80278754(rdram, ctx);
        goto after_36;
    // 0x80275420: nop

    after_36:
    // 0x80275424: addiu       $t8, $zero, 0x26
    ctx->r24 = ADD32(0, 0X26);
    // 0x80275428: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8027542C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80275430: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80275434: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80275438: jal         0x8004B918
    // 0x8027543C: addiu       $a3, $zero, 0x140
    ctx->r7 = ADD32(0, 0X140);
    func_8004B918(rdram, ctx);
        goto after_37;
    // 0x8027543C: addiu       $a3, $zero, 0x140
    ctx->r7 = ADD32(0, 0X140);
    after_37:
    // 0x80275440: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x80275444: jal         0x80029220
    // 0x80275448: addiu       $a0, $a0, -0x4DF4
    ctx->r4 = ADD32(ctx->r4, -0X4DF4);
    func_80029220(rdram, ctx);
        goto after_38;
    // 0x80275448: addiu       $a0, $a0, -0x4DF4
    ctx->r4 = ADD32(ctx->r4, -0X4DF4);
    after_38:
    // 0x8027544C: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x80275450: jal         0x80029220
    // 0x80275454: addiu       $a0, $a0, -0x4D3C
    ctx->r4 = ADD32(ctx->r4, -0X4D3C);
    func_80029220(rdram, ctx);
        goto after_39;
    // 0x80275454: addiu       $a0, $a0, -0x4D3C
    ctx->r4 = ADD32(ctx->r4, -0X4D3C);
    after_39:
    // 0x80275458: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x8027545C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80275460: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x80275464: addiu       $a0, $a0, -0x4C9C
    ctx->r4 = ADD32(ctx->r4, -0X4C9C);
    // 0x80275468: jal         0x80029220
    // 0x8027546C: sb          $t9, 0x51($t0)
    MEM_B(0X51, ctx->r8) = ctx->r25;
    func_80029220(rdram, ctx);
        goto after_40;
    // 0x8027546C: sb          $t9, 0x51($t0)
    MEM_B(0X51, ctx->r8) = ctx->r25;
    after_40:
    // 0x80275470: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80275474: addiu       $a0, $a0, 0x5490
    ctx->r4 = ADD32(ctx->r4, 0X5490);
    // 0x80275478: jal         0x8004AE38
    // 0x8027547C: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_8004AE38(rdram, ctx);
        goto after_41;
    // 0x8027547C: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_41:
    // 0x80275480: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80275484: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80275488: jr          $ra
    // 0x8027548C: nop

    return;
    // 0x8027548C: nop

;}
RECOMP_FUNC void func_80275290(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80275290: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80275294: lb          $a0, -0x326C($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X326C);
    // 0x80275298: jal         0x8005CC40
    // 0x8027529C: nop

    func_8005CC40(rdram, ctx);
        goto after_0;
    // 0x8027529C: nop

    after_0:
    // 0x802752A0: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x802752A4: addiu       $v0, $v0, -0x2F98
    ctx->r2 = ADD32(ctx->r2, -0X2F98);
    // 0x802752A8: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x802752AC: lui         $v1, 0x2
    ctx->r3 = S32(0X2 << 16);
    // 0x802752B0: ori         $v1, $v1, 0x8000
    ctx->r3 = ctx->r3 | 0X8000;
    // 0x802752B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802752B8: addu        $t7, $t6, $v1
    ctx->r15 = ADD32(ctx->r14, ctx->r3);
    // 0x802752BC: sb          $a1, 0x60E1($t7)
    MEM_B(0X60E1, ctx->r15) = ctx->r5;
    // 0x802752C0: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x802752C4: nop

    // 0x802752C8: addu        $t9, $t8, $v1
    ctx->r25 = ADD32(ctx->r24, ctx->r3);
    // 0x802752CC: sb          $a1, 0x63AD($t9)
    MEM_B(0X63AD, ctx->r25) = ctx->r5;
    // 0x802752D0: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x802752D4: nop

    // 0x802752D8: addu        $t1, $t0, $v1
    ctx->r9 = ADD32(ctx->r8, ctx->r3);
    // 0x802752DC: sb          $a1, 0x6945($t1)
    MEM_B(0X6945, ctx->r9) = ctx->r5;
    // 0x802752E0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x802752E4: jal         0x8004AFC0
    // 0x802752E8: nop

    func_8004AFC0(rdram, ctx);
        goto after_1;
    // 0x802752E8: nop

    after_1:
    // 0x802752EC: jal         0x80277BB0
    // 0x802752F0: nop

    func_80277BB0(rdram, ctx);
        goto after_2;
    // 0x802752F0: nop

    after_2:
    // 0x802752F4: jal         0x80277CF0
    // 0x802752F8: nop

    func_80277CF0(rdram, ctx);
        goto after_3;
    // 0x802752F8: nop

    after_3:
    // 0x802752FC: jal         0x80277FF4
    // 0x80275300: nop

    func_80277FF4(rdram, ctx);
        goto after_4;
    // 0x80275300: nop

    after_4:
    // 0x80275304: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80275308: addiu       $a1, $zero, 0xFB
    ctx->r5 = ADD32(0, 0XFB);
    // 0x8027530C: jal         0x80021214
    // 0x80275310: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80021214(rdram, ctx);
        goto after_5;
    // 0x80275310: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x80275314: lui         $t2, 0x8028
    ctx->r10 = S32(0X8028 << 16);
    // 0x80275318: addiu       $t2, $t2, 0xFA4
    ctx->r10 = ADD32(ctx->r10, 0XFA4);
    // 0x8027531C: lw          $at, 0x0($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X0);
    // 0x80275320: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80275324: sw          $at, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r1;
    // 0x80275328: lw          $a2, 0x4($t2)
    ctx->r6 = MEM_W(ctx->r10, 0X4);
    // 0x8027532C: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x80275330: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x80275334: lw          $a3, 0x8($t2)
    ctx->r7 = MEM_W(ctx->r10, 0X8);
    // 0x80275338: jal         0x8004B078
    // 0x8027533C: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    func_8004B078(rdram, ctx);
        goto after_6;
    // 0x8027533C: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    after_6:
    // 0x80275340: jal         0x802782C8
    // 0x80275344: nop

    func_802782C8(rdram, ctx);
        goto after_7;
    // 0x80275344: nop

    after_7:
    // 0x80275348: lui         $t5, 0x800B
    ctx->r13 = S32(0X800B << 16);
    // 0x8027534C: addiu       $t5, $t5, -0x6C78
    ctx->r13 = ADD32(ctx->r13, -0X6C78);
    // 0x80275350: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x80275354: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80275358: sw          $at, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r1;
    // 0x8027535C: lw          $a2, 0x4($t5)
    ctx->r6 = MEM_W(ctx->r13, 0X4);
    // 0x80275360: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x80275364: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x80275368: lw          $a3, 0x8($t5)
    ctx->r7 = MEM_W(ctx->r13, 0X8);
    // 0x8027536C: jal         0x8004B1A0
    // 0x80275370: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    func_8004B1A0(rdram, ctx);
        goto after_8;
    // 0x80275370: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    after_8:
    // 0x80275374: jal         0x80278584
    // 0x80275378: nop

    func_80278584(rdram, ctx);
        goto after_9;
    // 0x80275378: nop

    after_9:
    // 0x8027537C: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x80275380: jal         0x8002AAC0
    // 0x80275384: addiu       $a0, $a0, 0x19B8
    ctx->r4 = ADD32(ctx->r4, 0X19B8);
    func_8002AAC0(rdram, ctx);
        goto after_10;
    // 0x80275384: addiu       $a0, $a0, 0x19B8
    ctx->r4 = ADD32(ctx->r4, 0X19B8);
    after_10:
    // 0x80275388: jal         0x80278CD0
    // 0x8027538C: nop

    func_80278CD0(rdram, ctx);
        goto after_11;
    // 0x8027538C: nop

    after_11:
    // 0x80275390: jal         0x8027A4DC
    // 0x80275394: nop

    func_8027A4DC(rdram, ctx);
        goto after_12;
    // 0x80275394: nop

    after_12:
    // 0x80275398: jal         0x8027A95C
    // 0x8027539C: nop

    func_8027A95C(rdram, ctx);
        goto after_13;
    // 0x8027539C: nop

    after_13:
    // 0x802753A0: jal         0x8027AC98
    // 0x802753A4: nop

    func_8027AC98(rdram, ctx);
        goto after_14;
    // 0x802753A4: nop

    after_14:
    // 0x802753A8: jal         0x8027AB18
    // 0x802753AC: nop

    func_8027AB18(rdram, ctx);
        goto after_15;
    // 0x802753AC: nop

    after_15:
    // 0x802753B0: jal         0x80279C14
    // 0x802753B4: nop

    func_80279C14(rdram, ctx);
        goto after_16;
    // 0x802753B4: nop

    after_16:
    // 0x802753B8: jal         0x80278F60
    // 0x802753BC: nop

    func_80278F60(rdram, ctx);
        goto after_17;
    // 0x802753BC: nop

    after_17:
    // 0x802753C0: jal         0x80279198
    // 0x802753C4: nop

    func_80279198(rdram, ctx);
        goto after_18;
    // 0x802753C4: nop

    after_18:
    // 0x802753C8: jal         0x80279694
    // 0x802753CC: nop

    func_80279694(rdram, ctx);
        goto after_19;
    // 0x802753CC: nop

    after_19:
    // 0x802753D0: jal         0x802797B0
    // 0x802753D4: nop

    func_802797B0(rdram, ctx);
        goto after_20;
    // 0x802753D4: nop

    after_20:
    // 0x802753D8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x802753DC: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x802753E0: jal         0x8006F918
    // 0x802753E4: nop

    func_8006F918(rdram, ctx);
        goto after_21;
    // 0x802753E4: nop

    after_21:
    // 0x802753E8: jal         0x802779A0
    // 0x802753EC: nop

    func_802779A0(rdram, ctx);
        goto after_22;
    // 0x802753EC: nop

    after_22:
    // 0x802753F0: jal         0x802779F8
    // 0x802753F4: nop

    func_802779F8(rdram, ctx);
        goto after_23;
    // 0x802753F4: nop

    after_23:
    // 0x802753F8: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x802753FC: jal         0x80029220
    // 0x80275400: addiu       $a0, $a0, -0x6DC4
    ctx->r4 = ADD32(ctx->r4, -0X6DC4);
    func_80029220(rdram, ctx);
        goto after_24;
    // 0x80275400: addiu       $a0, $a0, -0x6DC4
    ctx->r4 = ADD32(ctx->r4, -0X6DC4);
    after_24:
    // 0x80275404: jal         0x8027B104
    // 0x80275408: nop

    func_8027B104(rdram, ctx);
        goto after_25;
    // 0x80275408: nop

    after_25:
    // 0x8027540C: jal         0x802787A8
    // 0x80275410: nop

    func_802787A8(rdram, ctx);
        goto after_26;
    // 0x80275410: nop

    after_26:
    // 0x80275414: jal         0x80278A88
    // 0x80275418: nop

    func_80278A88(rdram, ctx);
        goto after_27;
    // 0x80275418: nop

    after_27:
    // 0x8027541C: jal         0x80278754
    // 0x80275420: nop

    func_80278754(rdram, ctx);
        goto after_28;
    // 0x80275420: nop

    after_28:
    // 0x80275424: addiu       $t8, $zero, 0x26
    ctx->r24 = ADD32(0, 0X26);
    // 0x80275428: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8027542C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80275430: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80275434: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80275438: jal         0x8004B918
    // 0x8027543C: addiu       $a3, $zero, 0x140
    ctx->r7 = ADD32(0, 0X140);
    func_8004B918(rdram, ctx);
        goto after_29;
    // 0x8027543C: addiu       $a3, $zero, 0x140
    ctx->r7 = ADD32(0, 0X140);
    after_29:
    // 0x80275440: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x80275444: jal         0x80029220
    // 0x80275448: addiu       $a0, $a0, -0x4DF4
    ctx->r4 = ADD32(ctx->r4, -0X4DF4);
    func_80029220(rdram, ctx);
        goto after_30;
    // 0x80275448: addiu       $a0, $a0, -0x4DF4
    ctx->r4 = ADD32(ctx->r4, -0X4DF4);
    after_30:
    // 0x8027544C: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x80275450: jal         0x80029220
    // 0x80275454: addiu       $a0, $a0, -0x4D3C
    ctx->r4 = ADD32(ctx->r4, -0X4D3C);
    func_80029220(rdram, ctx);
        goto after_31;
    // 0x80275454: addiu       $a0, $a0, -0x4D3C
    ctx->r4 = ADD32(ctx->r4, -0X4D3C);
    after_31:
    // 0x80275458: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x8027545C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80275460: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x80275464: addiu       $a0, $a0, -0x4C9C
    ctx->r4 = ADD32(ctx->r4, -0X4C9C);
    // 0x80275468: jal         0x80029220
    // 0x8027546C: sb          $t9, 0x51($t0)
    MEM_B(0X51, ctx->r8) = ctx->r25;
    func_80029220(rdram, ctx);
        goto after_32;
    // 0x8027546C: sb          $t9, 0x51($t0)
    MEM_B(0X51, ctx->r8) = ctx->r25;
    after_32:
    // 0x80275470: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80275474: addiu       $a0, $a0, 0x5490
    ctx->r4 = ADD32(ctx->r4, 0X5490);
    // 0x80275478: jal         0x8004AE38
    // 0x8027547C: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_8004AE38(rdram, ctx);
        goto after_33;
    // 0x8027547C: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_33:
    // 0x80275480: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80275484: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80275488: jr          $ra
    // 0x8027548C: nop

    return;
    // 0x8027548C: nop

;}
RECOMP_FUNC void func_802752E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802752E8: nop

    // 0x802752EC: jal         0x80277BB0
    // 0x802752F0: nop

    func_80277BB0(rdram, ctx);
        goto after_0;
    // 0x802752F0: nop

    after_0:
    // 0x802752F4: jal         0x80277CF0
    // 0x802752F8: nop

    func_80277CF0(rdram, ctx);
        goto after_1;
    // 0x802752F8: nop

    after_1:
    // 0x802752FC: jal         0x80277FF4
    // 0x80275300: nop

    func_80277FF4(rdram, ctx);
        goto after_2;
    // 0x80275300: nop

    after_2:
    // 0x80275304: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80275308: addiu       $a1, $zero, 0xFB
    ctx->r5 = ADD32(0, 0XFB);
    // 0x8027530C: jal         0x80021214
    // 0x80275310: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80021214(rdram, ctx);
        goto after_3;
    // 0x80275310: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x80275314: lui         $t2, 0x8028
    ctx->r10 = S32(0X8028 << 16);
    // 0x80275318: addiu       $t2, $t2, 0xFA4
    ctx->r10 = ADD32(ctx->r10, 0XFA4);
    // 0x8027531C: lw          $at, 0x0($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X0);
    // 0x80275320: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80275324: sw          $at, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r1;
    // 0x80275328: lw          $a2, 0x4($t2)
    ctx->r6 = MEM_W(ctx->r10, 0X4);
    // 0x8027532C: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x80275330: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x80275334: lw          $a3, 0x8($t2)
    ctx->r7 = MEM_W(ctx->r10, 0X8);
    // 0x80275338: jal         0x8004B078
    // 0x8027533C: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    func_8004B078(rdram, ctx);
        goto after_4;
    // 0x8027533C: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    after_4:
    // 0x80275340: jal         0x802782C8
    // 0x80275344: nop

    func_802782C8(rdram, ctx);
        goto after_5;
    // 0x80275344: nop

    after_5:
    // 0x80275348: lui         $t5, 0x800B
    ctx->r13 = S32(0X800B << 16);
    // 0x8027534C: addiu       $t5, $t5, -0x6C78
    ctx->r13 = ADD32(ctx->r13, -0X6C78);
    // 0x80275350: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x80275354: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80275358: sw          $at, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r1;
    // 0x8027535C: lw          $a2, 0x4($t5)
    ctx->r6 = MEM_W(ctx->r13, 0X4);
    // 0x80275360: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x80275364: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x80275368: lw          $a3, 0x8($t5)
    ctx->r7 = MEM_W(ctx->r13, 0X8);
    // 0x8027536C: jal         0x8004B1A0
    // 0x80275370: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    func_8004B1A0(rdram, ctx);
        goto after_6;
    // 0x80275370: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    after_6:
    // 0x80275374: jal         0x80278584
    // 0x80275378: nop

    func_80278584(rdram, ctx);
        goto after_7;
    // 0x80275378: nop

    after_7:
    // 0x8027537C: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x80275380: jal         0x8002AAC0
    // 0x80275384: addiu       $a0, $a0, 0x19B8
    ctx->r4 = ADD32(ctx->r4, 0X19B8);
    func_8002AAC0(rdram, ctx);
        goto after_8;
    // 0x80275384: addiu       $a0, $a0, 0x19B8
    ctx->r4 = ADD32(ctx->r4, 0X19B8);
    after_8:
    // 0x80275388: jal         0x80278CD0
    // 0x8027538C: nop

    func_80278CD0(rdram, ctx);
        goto after_9;
    // 0x8027538C: nop

    after_9:
    // 0x80275390: jal         0x8027A4DC
    // 0x80275394: nop

    func_8027A4DC(rdram, ctx);
        goto after_10;
    // 0x80275394: nop

    after_10:
    // 0x80275398: jal         0x8027A95C
    // 0x8027539C: nop

    func_8027A95C(rdram, ctx);
        goto after_11;
    // 0x8027539C: nop

    after_11:
    // 0x802753A0: jal         0x8027AC98
    // 0x802753A4: nop

    func_8027AC98(rdram, ctx);
        goto after_12;
    // 0x802753A4: nop

    after_12:
    // 0x802753A8: jal         0x8027AB18
    // 0x802753AC: nop

    func_8027AB18(rdram, ctx);
        goto after_13;
    // 0x802753AC: nop

    after_13:
    // 0x802753B0: jal         0x80279C14
    // 0x802753B4: nop

    func_80279C14(rdram, ctx);
        goto after_14;
    // 0x802753B4: nop

    after_14:
    // 0x802753B8: jal         0x80278F60
    // 0x802753BC: nop

    func_80278F60(rdram, ctx);
        goto after_15;
    // 0x802753BC: nop

    after_15:
    // 0x802753C0: jal         0x80279198
    // 0x802753C4: nop

    func_80279198(rdram, ctx);
        goto after_16;
    // 0x802753C4: nop

    after_16:
    // 0x802753C8: jal         0x80279694
    // 0x802753CC: nop

    func_80279694(rdram, ctx);
        goto after_17;
    // 0x802753CC: nop

    after_17:
    // 0x802753D0: jal         0x802797B0
    // 0x802753D4: nop

    func_802797B0(rdram, ctx);
        goto after_18;
    // 0x802753D4: nop

    after_18:
    // 0x802753D8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x802753DC: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x802753E0: jal         0x8006F918
    // 0x802753E4: nop

    func_8006F918(rdram, ctx);
        goto after_19;
    // 0x802753E4: nop

    after_19:
    // 0x802753E8: jal         0x802779A0
    // 0x802753EC: nop

    func_802779A0(rdram, ctx);
        goto after_20;
    // 0x802753EC: nop

    after_20:
    // 0x802753F0: jal         0x802779F8
    // 0x802753F4: nop

    func_802779F8(rdram, ctx);
        goto after_21;
    // 0x802753F4: nop

    after_21:
    // 0x802753F8: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x802753FC: jal         0x80029220
    // 0x80275400: addiu       $a0, $a0, -0x6DC4
    ctx->r4 = ADD32(ctx->r4, -0X6DC4);
    func_80029220(rdram, ctx);
        goto after_22;
    // 0x80275400: addiu       $a0, $a0, -0x6DC4
    ctx->r4 = ADD32(ctx->r4, -0X6DC4);
    after_22:
    // 0x80275404: jal         0x8027B104
    // 0x80275408: nop

    func_8027B104(rdram, ctx);
        goto after_23;
    // 0x80275408: nop

    after_23:
    // 0x8027540C: jal         0x802787A8
    // 0x80275410: nop

    func_802787A8(rdram, ctx);
        goto after_24;
    // 0x80275410: nop

    after_24:
    // 0x80275414: jal         0x80278A88
    // 0x80275418: nop

    func_80278A88(rdram, ctx);
        goto after_25;
    // 0x80275418: nop

    after_25:
    // 0x8027541C: jal         0x80278754
    // 0x80275420: nop

    func_80278754(rdram, ctx);
        goto after_26;
    // 0x80275420: nop

    after_26:
    // 0x80275424: addiu       $t8, $zero, 0x26
    ctx->r24 = ADD32(0, 0X26);
    // 0x80275428: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8027542C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80275430: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80275434: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80275438: jal         0x8004B918
    // 0x8027543C: addiu       $a3, $zero, 0x140
    ctx->r7 = ADD32(0, 0X140);
    func_8004B918(rdram, ctx);
        goto after_27;
    // 0x8027543C: addiu       $a3, $zero, 0x140
    ctx->r7 = ADD32(0, 0X140);
    after_27:
    // 0x80275440: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x80275444: jal         0x80029220
    // 0x80275448: addiu       $a0, $a0, -0x4DF4
    ctx->r4 = ADD32(ctx->r4, -0X4DF4);
    func_80029220(rdram, ctx);
        goto after_28;
    // 0x80275448: addiu       $a0, $a0, -0x4DF4
    ctx->r4 = ADD32(ctx->r4, -0X4DF4);
    after_28:
    // 0x8027544C: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x80275450: jal         0x80029220
    // 0x80275454: addiu       $a0, $a0, -0x4D3C
    ctx->r4 = ADD32(ctx->r4, -0X4D3C);
    func_80029220(rdram, ctx);
        goto after_29;
    // 0x80275454: addiu       $a0, $a0, -0x4D3C
    ctx->r4 = ADD32(ctx->r4, -0X4D3C);
    after_29:
    // 0x80275458: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x8027545C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80275460: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x80275464: addiu       $a0, $a0, -0x4C9C
    ctx->r4 = ADD32(ctx->r4, -0X4C9C);
    // 0x80275468: jal         0x80029220
    // 0x8027546C: sb          $t9, 0x51($t0)
    MEM_B(0X51, ctx->r8) = ctx->r25;
    func_80029220(rdram, ctx);
        goto after_30;
    // 0x8027546C: sb          $t9, 0x51($t0)
    MEM_B(0X51, ctx->r8) = ctx->r25;
    after_30:
    // 0x80275470: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80275474: addiu       $a0, $a0, 0x5490
    ctx->r4 = ADD32(ctx->r4, 0X5490);
    // 0x80275478: jal         0x8004AE38
    // 0x8027547C: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_8004AE38(rdram, ctx);
        goto after_31;
    // 0x8027547C: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_31:
    // 0x80275480: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80275484: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80275488: jr          $ra
    // 0x8027548C: nop

    return;
    // 0x8027548C: nop

;}
RECOMP_FUNC void func_80275318(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80275318: addiu       $t2, $t2, 0xFA4
    ctx->r10 = ADD32(ctx->r10, 0XFA4);
    // 0x8027531C: lw          $at, 0x0($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X0);
    // 0x80275320: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80275324: sw          $at, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r1;
    // 0x80275328: lw          $a2, 0x4($t2)
    ctx->r6 = MEM_W(ctx->r10, 0X4);
    // 0x8027532C: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x80275330: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x80275334: lw          $a3, 0x8($t2)
    ctx->r7 = MEM_W(ctx->r10, 0X8);
    // 0x80275338: jal         0x8004B078
    // 0x8027533C: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    func_8004B078(rdram, ctx);
        goto after_0;
    // 0x8027533C: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    after_0:
    // 0x80275340: jal         0x802782C8
    // 0x80275344: nop

    func_802782C8(rdram, ctx);
        goto after_1;
    // 0x80275344: nop

    after_1:
    // 0x80275348: lui         $t5, 0x800B
    ctx->r13 = S32(0X800B << 16);
    // 0x8027534C: addiu       $t5, $t5, -0x6C78
    ctx->r13 = ADD32(ctx->r13, -0X6C78);
    // 0x80275350: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x80275354: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80275358: sw          $at, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r1;
    // 0x8027535C: lw          $a2, 0x4($t5)
    ctx->r6 = MEM_W(ctx->r13, 0X4);
    // 0x80275360: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x80275364: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x80275368: lw          $a3, 0x8($t5)
    ctx->r7 = MEM_W(ctx->r13, 0X8);
    // 0x8027536C: jal         0x8004B1A0
    // 0x80275370: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    func_8004B1A0(rdram, ctx);
        goto after_2;
    // 0x80275370: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    after_2:
    // 0x80275374: jal         0x80278584
    // 0x80275378: nop

    func_80278584(rdram, ctx);
        goto after_3;
    // 0x80275378: nop

    after_3:
    // 0x8027537C: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x80275380: jal         0x8002AAC0
    // 0x80275384: addiu       $a0, $a0, 0x19B8
    ctx->r4 = ADD32(ctx->r4, 0X19B8);
    func_8002AAC0(rdram, ctx);
        goto after_4;
    // 0x80275384: addiu       $a0, $a0, 0x19B8
    ctx->r4 = ADD32(ctx->r4, 0X19B8);
    after_4:
    // 0x80275388: jal         0x80278CD0
    // 0x8027538C: nop

    func_80278CD0(rdram, ctx);
        goto after_5;
    // 0x8027538C: nop

    after_5:
    // 0x80275390: jal         0x8027A4DC
    // 0x80275394: nop

    func_8027A4DC(rdram, ctx);
        goto after_6;
    // 0x80275394: nop

    after_6:
    // 0x80275398: jal         0x8027A95C
    // 0x8027539C: nop

    func_8027A95C(rdram, ctx);
        goto after_7;
    // 0x8027539C: nop

    after_7:
    // 0x802753A0: jal         0x8027AC98
    // 0x802753A4: nop

    func_8027AC98(rdram, ctx);
        goto after_8;
    // 0x802753A4: nop

    after_8:
    // 0x802753A8: jal         0x8027AB18
    // 0x802753AC: nop

    func_8027AB18(rdram, ctx);
        goto after_9;
    // 0x802753AC: nop

    after_9:
    // 0x802753B0: jal         0x80279C14
    // 0x802753B4: nop

    func_80279C14(rdram, ctx);
        goto after_10;
    // 0x802753B4: nop

    after_10:
    // 0x802753B8: jal         0x80278F60
    // 0x802753BC: nop

    func_80278F60(rdram, ctx);
        goto after_11;
    // 0x802753BC: nop

    after_11:
    // 0x802753C0: jal         0x80279198
    // 0x802753C4: nop

    func_80279198(rdram, ctx);
        goto after_12;
    // 0x802753C4: nop

    after_12:
    // 0x802753C8: jal         0x80279694
    // 0x802753CC: nop

    func_80279694(rdram, ctx);
        goto after_13;
    // 0x802753CC: nop

    after_13:
    // 0x802753D0: jal         0x802797B0
    // 0x802753D4: nop

    func_802797B0(rdram, ctx);
        goto after_14;
    // 0x802753D4: nop

    after_14:
    // 0x802753D8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x802753DC: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x802753E0: jal         0x8006F918
    // 0x802753E4: nop

    func_8006F918(rdram, ctx);
        goto after_15;
    // 0x802753E4: nop

    after_15:
    // 0x802753E8: jal         0x802779A0
    // 0x802753EC: nop

    func_802779A0(rdram, ctx);
        goto after_16;
    // 0x802753EC: nop

    after_16:
    // 0x802753F0: jal         0x802779F8
    // 0x802753F4: nop

    func_802779F8(rdram, ctx);
        goto after_17;
    // 0x802753F4: nop

    after_17:
    // 0x802753F8: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x802753FC: jal         0x80029220
    // 0x80275400: addiu       $a0, $a0, -0x6DC4
    ctx->r4 = ADD32(ctx->r4, -0X6DC4);
    func_80029220(rdram, ctx);
        goto after_18;
    // 0x80275400: addiu       $a0, $a0, -0x6DC4
    ctx->r4 = ADD32(ctx->r4, -0X6DC4);
    after_18:
    // 0x80275404: jal         0x8027B104
    // 0x80275408: nop

    func_8027B104(rdram, ctx);
        goto after_19;
    // 0x80275408: nop

    after_19:
    // 0x8027540C: jal         0x802787A8
    // 0x80275410: nop

    func_802787A8(rdram, ctx);
        goto after_20;
    // 0x80275410: nop

    after_20:
    // 0x80275414: jal         0x80278A88
    // 0x80275418: nop

    func_80278A88(rdram, ctx);
        goto after_21;
    // 0x80275418: nop

    after_21:
    // 0x8027541C: jal         0x80278754
    // 0x80275420: nop

    func_80278754(rdram, ctx);
        goto after_22;
    // 0x80275420: nop

    after_22:
    // 0x80275424: addiu       $t8, $zero, 0x26
    ctx->r24 = ADD32(0, 0X26);
    // 0x80275428: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8027542C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80275430: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80275434: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80275438: jal         0x8004B918
    // 0x8027543C: addiu       $a3, $zero, 0x140
    ctx->r7 = ADD32(0, 0X140);
    func_8004B918(rdram, ctx);
        goto after_23;
    // 0x8027543C: addiu       $a3, $zero, 0x140
    ctx->r7 = ADD32(0, 0X140);
    after_23:
    // 0x80275440: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x80275444: jal         0x80029220
    // 0x80275448: addiu       $a0, $a0, -0x4DF4
    ctx->r4 = ADD32(ctx->r4, -0X4DF4);
    func_80029220(rdram, ctx);
        goto after_24;
    // 0x80275448: addiu       $a0, $a0, -0x4DF4
    ctx->r4 = ADD32(ctx->r4, -0X4DF4);
    after_24:
    // 0x8027544C: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x80275450: jal         0x80029220
    // 0x80275454: addiu       $a0, $a0, -0x4D3C
    ctx->r4 = ADD32(ctx->r4, -0X4D3C);
    func_80029220(rdram, ctx);
        goto after_25;
    // 0x80275454: addiu       $a0, $a0, -0x4D3C
    ctx->r4 = ADD32(ctx->r4, -0X4D3C);
    after_25:
    // 0x80275458: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x8027545C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80275460: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x80275464: addiu       $a0, $a0, -0x4C9C
    ctx->r4 = ADD32(ctx->r4, -0X4C9C);
    // 0x80275468: jal         0x80029220
    // 0x8027546C: sb          $t9, 0x51($t0)
    MEM_B(0X51, ctx->r8) = ctx->r25;
    func_80029220(rdram, ctx);
        goto after_26;
    // 0x8027546C: sb          $t9, 0x51($t0)
    MEM_B(0X51, ctx->r8) = ctx->r25;
    after_26:
    // 0x80275470: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80275474: addiu       $a0, $a0, 0x5490
    ctx->r4 = ADD32(ctx->r4, 0X5490);
    // 0x80275478: jal         0x8004AE38
    // 0x8027547C: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_8004AE38(rdram, ctx);
        goto after_27;
    // 0x8027547C: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_27:
    // 0x80275480: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80275484: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80275488: jr          $ra
    // 0x8027548C: nop

    return;
    // 0x8027548C: nop

;}
RECOMP_FUNC void func_80275364(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80275364: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x80275368: lw          $a3, 0x8($t5)
    ctx->r7 = MEM_W(ctx->r13, 0X8);
    // 0x8027536C: jal         0x8004B1A0
    // 0x80275370: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    func_8004B1A0(rdram, ctx);
        goto after_0;
    // 0x80275370: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    after_0:
    // 0x80275374: jal         0x80278584
    // 0x80275378: nop

    func_80278584(rdram, ctx);
        goto after_1;
    // 0x80275378: nop

    after_1:
    // 0x8027537C: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x80275380: jal         0x8002AAC0
    // 0x80275384: addiu       $a0, $a0, 0x19B8
    ctx->r4 = ADD32(ctx->r4, 0X19B8);
    func_8002AAC0(rdram, ctx);
        goto after_2;
    // 0x80275384: addiu       $a0, $a0, 0x19B8
    ctx->r4 = ADD32(ctx->r4, 0X19B8);
    after_2:
    // 0x80275388: jal         0x80278CD0
    // 0x8027538C: nop

    func_80278CD0(rdram, ctx);
        goto after_3;
    // 0x8027538C: nop

    after_3:
    // 0x80275390: jal         0x8027A4DC
    // 0x80275394: nop

    func_8027A4DC(rdram, ctx);
        goto after_4;
    // 0x80275394: nop

    after_4:
    // 0x80275398: jal         0x8027A95C
    // 0x8027539C: nop

    func_8027A95C(rdram, ctx);
        goto after_5;
    // 0x8027539C: nop

    after_5:
    // 0x802753A0: jal         0x8027AC98
    // 0x802753A4: nop

    func_8027AC98(rdram, ctx);
        goto after_6;
    // 0x802753A4: nop

    after_6:
    // 0x802753A8: jal         0x8027AB18
    // 0x802753AC: nop

    func_8027AB18(rdram, ctx);
        goto after_7;
    // 0x802753AC: nop

    after_7:
    // 0x802753B0: jal         0x80279C14
    // 0x802753B4: nop

    func_80279C14(rdram, ctx);
        goto after_8;
    // 0x802753B4: nop

    after_8:
    // 0x802753B8: jal         0x80278F60
    // 0x802753BC: nop

    func_80278F60(rdram, ctx);
        goto after_9;
    // 0x802753BC: nop

    after_9:
    // 0x802753C0: jal         0x80279198
    // 0x802753C4: nop

    func_80279198(rdram, ctx);
        goto after_10;
    // 0x802753C4: nop

    after_10:
    // 0x802753C8: jal         0x80279694
    // 0x802753CC: nop

    func_80279694(rdram, ctx);
        goto after_11;
    // 0x802753CC: nop

    after_11:
    // 0x802753D0: jal         0x802797B0
    // 0x802753D4: nop

    func_802797B0(rdram, ctx);
        goto after_12;
    // 0x802753D4: nop

    after_12:
    // 0x802753D8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x802753DC: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x802753E0: jal         0x8006F918
    // 0x802753E4: nop

    func_8006F918(rdram, ctx);
        goto after_13;
    // 0x802753E4: nop

    after_13:
    // 0x802753E8: jal         0x802779A0
    // 0x802753EC: nop

    func_802779A0(rdram, ctx);
        goto after_14;
    // 0x802753EC: nop

    after_14:
    // 0x802753F0: jal         0x802779F8
    // 0x802753F4: nop

    func_802779F8(rdram, ctx);
        goto after_15;
    // 0x802753F4: nop

    after_15:
    // 0x802753F8: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x802753FC: jal         0x80029220
    // 0x80275400: addiu       $a0, $a0, -0x6DC4
    ctx->r4 = ADD32(ctx->r4, -0X6DC4);
    func_80029220(rdram, ctx);
        goto after_16;
    // 0x80275400: addiu       $a0, $a0, -0x6DC4
    ctx->r4 = ADD32(ctx->r4, -0X6DC4);
    after_16:
    // 0x80275404: jal         0x8027B104
    // 0x80275408: nop

    func_8027B104(rdram, ctx);
        goto after_17;
    // 0x80275408: nop

    after_17:
    // 0x8027540C: jal         0x802787A8
    // 0x80275410: nop

    func_802787A8(rdram, ctx);
        goto after_18;
    // 0x80275410: nop

    after_18:
    // 0x80275414: jal         0x80278A88
    // 0x80275418: nop

    func_80278A88(rdram, ctx);
        goto after_19;
    // 0x80275418: nop

    after_19:
    // 0x8027541C: jal         0x80278754
    // 0x80275420: nop

    func_80278754(rdram, ctx);
        goto after_20;
    // 0x80275420: nop

    after_20:
    // 0x80275424: addiu       $t8, $zero, 0x26
    ctx->r24 = ADD32(0, 0X26);
    // 0x80275428: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8027542C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80275430: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80275434: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80275438: jal         0x8004B918
    // 0x8027543C: addiu       $a3, $zero, 0x140
    ctx->r7 = ADD32(0, 0X140);
    func_8004B918(rdram, ctx);
        goto after_21;
    // 0x8027543C: addiu       $a3, $zero, 0x140
    ctx->r7 = ADD32(0, 0X140);
    after_21:
    // 0x80275440: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x80275444: jal         0x80029220
    // 0x80275448: addiu       $a0, $a0, -0x4DF4
    ctx->r4 = ADD32(ctx->r4, -0X4DF4);
    func_80029220(rdram, ctx);
        goto after_22;
    // 0x80275448: addiu       $a0, $a0, -0x4DF4
    ctx->r4 = ADD32(ctx->r4, -0X4DF4);
    after_22:
    // 0x8027544C: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x80275450: jal         0x80029220
    // 0x80275454: addiu       $a0, $a0, -0x4D3C
    ctx->r4 = ADD32(ctx->r4, -0X4D3C);
    func_80029220(rdram, ctx);
        goto after_23;
    // 0x80275454: addiu       $a0, $a0, -0x4D3C
    ctx->r4 = ADD32(ctx->r4, -0X4D3C);
    after_23:
    // 0x80275458: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x8027545C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80275460: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x80275464: addiu       $a0, $a0, -0x4C9C
    ctx->r4 = ADD32(ctx->r4, -0X4C9C);
    // 0x80275468: jal         0x80029220
    // 0x8027546C: sb          $t9, 0x51($t0)
    MEM_B(0X51, ctx->r8) = ctx->r25;
    func_80029220(rdram, ctx);
        goto after_24;
    // 0x8027546C: sb          $t9, 0x51($t0)
    MEM_B(0X51, ctx->r8) = ctx->r25;
    after_24:
    // 0x80275470: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80275474: addiu       $a0, $a0, 0x5490
    ctx->r4 = ADD32(ctx->r4, 0X5490);
    // 0x80275478: jal         0x8004AE38
    // 0x8027547C: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_8004AE38(rdram, ctx);
        goto after_25;
    // 0x8027547C: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_25:
    // 0x80275480: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80275484: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80275488: jr          $ra
    // 0x8027548C: nop

    return;
    // 0x8027548C: nop

;}
RECOMP_FUNC void func_80275490(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80275490: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80275494: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80275498: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027549C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802754A0: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x802754A4: addiu       $a0, $a0, 0x54C0
    ctx->r4 = ADD32(ctx->r4, 0X54C0);
    // 0x802754A8: jal         0x8002989C
    // 0x802754AC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_8002989C(rdram, ctx);
        goto after_0;
    // 0x802754AC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_0:
    // 0x802754B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802754B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802754B8: jr          $ra
    // 0x802754BC: nop

    return;
    // 0x802754BC: nop

;}
RECOMP_FUNC void func_802754C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802754C0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802754C4: lui         $t9, 0x8027
    ctx->r25 = S32(0X8027 << 16);
    // 0x802754C8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802754CC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x802754D0: addiu       $t9, $t9, 0x5510
    ctx->r25 = ADD32(ctx->r25, 0X5510);
    // 0x802754D4: addiu       $t6, $zero, 0x140
    ctx->r14 = ADD32(0, 0X140);
    // 0x802754D8: addiu       $t7, $zero, 0x70
    ctx->r15 = ADD32(0, 0X70);
    // 0x802754DC: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x802754E0: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x802754E4: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x802754E8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x802754EC: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x802754F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802754F4: addiu       $a2, $zero, 0x140
    ctx->r6 = ADD32(0, 0X140);
    // 0x802754F8: jal         0x8004B300
    // 0x802754FC: addiu       $a3, $zero, 0x28
    ctx->r7 = ADD32(0, 0X28);
    func_8004B300(rdram, ctx);
        goto after_0;
    // 0x802754FC: addiu       $a3, $zero, 0x28
    ctx->r7 = ADD32(0, 0X28);
    after_0:
    // 0x80275500: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80275504: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80275508: jr          $ra
    // 0x8027550C: nop

    return;
    // 0x8027550C: nop

;}
RECOMP_FUNC void func_80275510(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80275510: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80275514: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80275518: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8027551C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80275520: jal         0x8027708C
    // 0x80275524: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_8027708C(rdram, ctx);
        goto after_0;
    // 0x80275524: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x80275528: lui         $at, 0x8029
    ctx->r1 = S32(0X8029 << 16);
    // 0x8027552C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80275530: lb          $t6, -0x326C($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X326C);
    // 0x80275534: sh          $zero, -0x79B8($at)
    MEM_H(-0X79B8, ctx->r1) = 0;
    // 0x80275538: lui         $at, 0x8029
    ctx->r1 = S32(0X8029 << 16);
    // 0x8027553C: sh          $zero, -0x79B6($at)
    MEM_H(-0X79B6, ctx->r1) = 0;
    // 0x80275540: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80275544: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x80275548: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8027554C: sll         $t7, $t7, 1
    ctx->r15 = S32(ctx->r15 << 1);
    // 0x80275550: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x80275554: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x80275558: addiu       $t9, $t9, -0x3770
    ctx->r25 = ADD32(ctx->r25, -0X3770);
    // 0x8027555C: addu        $t8, $t7, $at
    ctx->r24 = ADD32(ctx->r15, ctx->r1);
    // 0x80275560: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
    // 0x80275564: lh          $a0, 0x9AE($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X9AE);
    // 0x80275568: nop

    // 0x8027556C: bgez        $a0, L_8027557C
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80275570: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_8027557C;
    }
    // 0x80275570: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x80275574: b           L_8027557C
    // 0x80275578: negu        $v0, $a0
    ctx->r2 = SUB32(0, ctx->r4);
        goto L_8027557C;
    // 0x80275578: negu        $v0, $a0
    ctx->r2 = SUB32(0, ctx->r4);
L_8027557C:
    // 0x8027557C: slti        $at, $v0, 0xB
    ctx->r1 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
    // 0x80275580: bne         $at, $zero, L_802755C4
    if (ctx->r1 != 0) {
        // 0x80275584: nop
    
            goto L_802755C4;
    }
    // 0x80275584: nop

    // 0x80275588: jal         0x80275698
    // 0x8027558C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_80275698(rdram, ctx);
        goto after_1;
    // 0x8027558C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_1:
    // 0x80275590: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x80275594: lb          $t0, -0x326C($t0)
    ctx->r8 = MEM_B(ctx->r8, -0X326C);
    // 0x80275598: lui         $at, 0x8029
    ctx->r1 = S32(0X8029 << 16);
    // 0x8027559C: sh          $v0, -0x79B8($at)
    MEM_H(-0X79B8, ctx->r1) = ctx->r2;
    // 0x802755A0: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x802755A4: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x802755A8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x802755AC: sll         $t1, $t1, 1
    ctx->r9 = S32(ctx->r9 << 1);
    // 0x802755B0: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x802755B4: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x802755B8: addiu       $t3, $t3, -0x3770
    ctx->r11 = ADD32(ctx->r11, -0X3770);
    // 0x802755BC: addu        $t2, $t1, $at
    ctx->r10 = ADD32(ctx->r9, ctx->r1);
    // 0x802755C0: addu        $v1, $t2, $t3
    ctx->r3 = ADD32(ctx->r10, ctx->r11);
L_802755C4:
    // 0x802755C4: lh          $a0, 0x9B0($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X9B0);
    // 0x802755C8: nop

    // 0x802755CC: bgez        $a0, L_802755DC
    if (SIGNED(ctx->r4) >= 0) {
        // 0x802755D0: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_802755DC;
    }
    // 0x802755D0: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x802755D4: b           L_802755DC
    // 0x802755D8: negu        $v0, $a0
    ctx->r2 = SUB32(0, ctx->r4);
        goto L_802755DC;
    // 0x802755D8: negu        $v0, $a0
    ctx->r2 = SUB32(0, ctx->r4);
L_802755DC:
    // 0x802755DC: slti        $at, $v0, 0xB
    ctx->r1 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
    // 0x802755E0: bne         $at, $zero, L_802755F8
    if (ctx->r1 != 0) {
        // 0x802755E4: nop
    
            goto L_802755F8;
    }
    // 0x802755E4: nop

    // 0x802755E8: jal         0x80275698
    // 0x802755EC: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_80275698(rdram, ctx);
        goto after_2;
    // 0x802755EC: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_2:
    // 0x802755F0: lui         $at, 0x8029
    ctx->r1 = S32(0X8029 << 16);
    // 0x802755F4: sh          $v0, -0x79B6($at)
    MEM_H(-0X79B6, ctx->r1) = ctx->r2;
L_802755F8:
    // 0x802755F8: lb          $v0, 0x38($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X38);
    // 0x802755FC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80275600: bne         $v0, $at, L_80275630
    if (ctx->r2 != ctx->r1) {
        // 0x80275604: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80275630;
    }
    // 0x80275604: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80275608: lb          $t4, 0x3E($s0)
    ctx->r12 = MEM_B(ctx->r16, 0X3E);
    // 0x8027560C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80275610: bne         $t4, $at, L_80275630
    if (ctx->r12 != ctx->r1) {
        // 0x80275614: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80275630;
    }
    // 0x80275614: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80275618: lb          $a1, 0x3D($s0)
    ctx->r5 = MEM_B(ctx->r16, 0X3D);
    // 0x8027561C: jal         0x8027A204
    // 0x80275620: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8027A204(rdram, ctx);
        goto after_3;
    // 0x80275620: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80275624: lb          $v0, 0x38($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X38);
    // 0x80275628: nop

    // 0x8027562C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
L_80275630:
    // 0x80275630: bne         $v0, $at, L_80275654
    if (ctx->r2 != ctx->r1) {
        // 0x80275634: nop
    
            goto L_80275654;
    }
    // 0x80275634: nop

    // 0x80275638: lb          $t5, 0x42($s0)
    ctx->r13 = MEM_B(ctx->r16, 0X42);
    // 0x8027563C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80275640: bne         $t5, $at, L_80275654
    if (ctx->r13 != ctx->r1) {
        // 0x80275644: nop
    
            goto L_80275654;
    }
    // 0x80275644: nop

    // 0x80275648: lb          $a1, 0x43($s0)
    ctx->r5 = MEM_B(ctx->r16, 0X43);
    // 0x8027564C: jal         0x8027A3E0
    // 0x80275650: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8027A3E0(rdram, ctx);
        goto after_4;
    // 0x80275650: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
L_80275654:
    // 0x80275654: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80275658: lw          $t6, -0x3250($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3250);
    // 0x8027565C: nop

    // 0x80275660: lhu         $a0, 0x0($t6)
    ctx->r4 = MEM_HU(ctx->r14, 0X0);
    // 0x80275664: jal         0x80035DE8
    // 0x80275668: nop

    func_80035DE8(rdram, ctx);
        goto after_5;
    // 0x80275668: nop

    after_5:
    // 0x8027566C: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x80275670: lui         $t9, 0x8028
    ctx->r25 = S32(0X8028 << 16);
    // 0x80275674: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80275678: lw          $t9, 0x1B24($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X1B24);
    // 0x8027567C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x80275680: jalr        $t9
    // 0x80275684: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x80275684: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80275688: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8027568C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80275690: jr          $ra
    // 0x80275694: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80275694: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80275534(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80275534: sh          $zero, -0x79B8($at)
    MEM_H(-0X79B8, ctx->r1) = 0;
    // 0x80275538: lui         $at, 0x8029
    ctx->r1 = S32(0X8029 << 16);
    // 0x8027553C: sh          $zero, -0x79B6($at)
    MEM_H(-0X79B6, ctx->r1) = 0;
    // 0x80275540: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80275544: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x80275548: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8027554C: sll         $t7, $t7, 1
    ctx->r15 = S32(ctx->r15 << 1);
    // 0x80275550: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x80275554: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x80275558: addiu       $t9, $t9, -0x3770
    ctx->r25 = ADD32(ctx->r25, -0X3770);
    // 0x8027555C: addu        $t8, $t7, $at
    ctx->r24 = ADD32(ctx->r15, ctx->r1);
    // 0x80275560: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
    // 0x80275564: lh          $a0, 0x9AE($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X9AE);
    // 0x80275568: nop

    // 0x8027556C: bgez        $a0, L_8027557C
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80275570: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_8027557C;
    }
    // 0x80275570: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x80275574: b           L_8027557C
    // 0x80275578: negu        $v0, $a0
    ctx->r2 = SUB32(0, ctx->r4);
        goto L_8027557C;
    // 0x80275578: negu        $v0, $a0
    ctx->r2 = SUB32(0, ctx->r4);
L_8027557C:
    // 0x8027557C: slti        $at, $v0, 0xB
    ctx->r1 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
    // 0x80275580: bne         $at, $zero, L_802755C4
    if (ctx->r1 != 0) {
        // 0x80275584: nop
    
            goto L_802755C4;
    }
    // 0x80275584: nop

    // 0x80275588: jal         0x80275698
    // 0x8027558C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_80275698(rdram, ctx);
        goto after_0;
    // 0x8027558C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x80275590: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x80275594: lb          $t0, -0x326C($t0)
    ctx->r8 = MEM_B(ctx->r8, -0X326C);
    // 0x80275598: lui         $at, 0x8029
    ctx->r1 = S32(0X8029 << 16);
    // 0x8027559C: sh          $v0, -0x79B8($at)
    MEM_H(-0X79B8, ctx->r1) = ctx->r2;
    // 0x802755A0: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x802755A4: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x802755A8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x802755AC: sll         $t1, $t1, 1
    ctx->r9 = S32(ctx->r9 << 1);
    // 0x802755B0: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x802755B4: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x802755B8: addiu       $t3, $t3, -0x3770
    ctx->r11 = ADD32(ctx->r11, -0X3770);
    // 0x802755BC: addu        $t2, $t1, $at
    ctx->r10 = ADD32(ctx->r9, ctx->r1);
    // 0x802755C0: addu        $v1, $t2, $t3
    ctx->r3 = ADD32(ctx->r10, ctx->r11);
L_802755C4:
    // 0x802755C4: lh          $a0, 0x9B0($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X9B0);
    // 0x802755C8: nop

    // 0x802755CC: bgez        $a0, L_802755DC
    if (SIGNED(ctx->r4) >= 0) {
        // 0x802755D0: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_802755DC;
    }
    // 0x802755D0: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x802755D4: b           L_802755DC
    // 0x802755D8: negu        $v0, $a0
    ctx->r2 = SUB32(0, ctx->r4);
        goto L_802755DC;
    // 0x802755D8: negu        $v0, $a0
    ctx->r2 = SUB32(0, ctx->r4);
L_802755DC:
    // 0x802755DC: slti        $at, $v0, 0xB
    ctx->r1 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
    // 0x802755E0: bne         $at, $zero, L_802755F8
    if (ctx->r1 != 0) {
        // 0x802755E4: nop
    
            goto L_802755F8;
    }
    // 0x802755E4: nop

    // 0x802755E8: jal         0x80275698
    // 0x802755EC: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_80275698(rdram, ctx);
        goto after_1;
    // 0x802755EC: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_1:
    // 0x802755F0: lui         $at, 0x8029
    ctx->r1 = S32(0X8029 << 16);
    // 0x802755F4: sh          $v0, -0x79B6($at)
    MEM_H(-0X79B6, ctx->r1) = ctx->r2;
L_802755F8:
    // 0x802755F8: lb          $v0, 0x38($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X38);
    // 0x802755FC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80275600: bne         $v0, $at, L_80275630
    if (ctx->r2 != ctx->r1) {
        // 0x80275604: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80275630;
    }
    // 0x80275604: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80275608: lb          $t4, 0x3E($s0)
    ctx->r12 = MEM_B(ctx->r16, 0X3E);
    // 0x8027560C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80275610: bne         $t4, $at, L_80275630
    if (ctx->r12 != ctx->r1) {
        // 0x80275614: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80275630;
    }
    // 0x80275614: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80275618: lb          $a1, 0x3D($s0)
    ctx->r5 = MEM_B(ctx->r16, 0X3D);
    // 0x8027561C: jal         0x8027A204
    // 0x80275620: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8027A204(rdram, ctx);
        goto after_2;
    // 0x80275620: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80275624: lb          $v0, 0x38($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X38);
    // 0x80275628: nop

    // 0x8027562C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
L_80275630:
    // 0x80275630: bne         $v0, $at, L_80275654
    if (ctx->r2 != ctx->r1) {
        // 0x80275634: nop
    
            goto L_80275654;
    }
    // 0x80275634: nop

    // 0x80275638: lb          $t5, 0x42($s0)
    ctx->r13 = MEM_B(ctx->r16, 0X42);
    // 0x8027563C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80275640: bne         $t5, $at, L_80275654
    if (ctx->r13 != ctx->r1) {
        // 0x80275644: nop
    
            goto L_80275654;
    }
    // 0x80275644: nop

    // 0x80275648: lb          $a1, 0x43($s0)
    ctx->r5 = MEM_B(ctx->r16, 0X43);
    // 0x8027564C: jal         0x8027A3E0
    // 0x80275650: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8027A3E0(rdram, ctx);
        goto after_3;
    // 0x80275650: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
L_80275654:
    // 0x80275654: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80275658: lw          $t6, -0x3250($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3250);
    // 0x8027565C: nop

    // 0x80275660: lhu         $a0, 0x0($t6)
    ctx->r4 = MEM_HU(ctx->r14, 0X0);
    // 0x80275664: jal         0x80035DE8
    // 0x80275668: nop

    func_80035DE8(rdram, ctx);
        goto after_4;
    // 0x80275668: nop

    after_4:
    // 0x8027566C: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x80275670: lui         $t9, 0x8028
    ctx->r25 = S32(0X8028 << 16);
    // 0x80275674: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80275678: lw          $t9, 0x1B24($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X1B24);
    // 0x8027567C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x80275680: jalr        $t9
    // 0x80275684: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x80275684: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80275688: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8027568C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80275690: jr          $ra
    // 0x80275694: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80275694: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80275588(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80275588: jal         0x80275698
    // 0x8027558C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_80275698(rdram, ctx);
        goto after_0;
    // 0x8027558C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x80275590: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x80275594: lb          $t0, -0x326C($t0)
    ctx->r8 = MEM_B(ctx->r8, -0X326C);
    // 0x80275598: lui         $at, 0x8029
    ctx->r1 = S32(0X8029 << 16);
    // 0x8027559C: sh          $v0, -0x79B8($at)
    MEM_H(-0X79B8, ctx->r1) = ctx->r2;
    // 0x802755A0: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x802755A4: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x802755A8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x802755AC: sll         $t1, $t1, 1
    ctx->r9 = S32(ctx->r9 << 1);
    // 0x802755B0: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x802755B4: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x802755B8: addiu       $t3, $t3, -0x3770
    ctx->r11 = ADD32(ctx->r11, -0X3770);
    // 0x802755BC: addu        $t2, $t1, $at
    ctx->r10 = ADD32(ctx->r9, ctx->r1);
    // 0x802755C0: addu        $v1, $t2, $t3
    ctx->r3 = ADD32(ctx->r10, ctx->r11);
    // 0x802755C4: lh          $a0, 0x9B0($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X9B0);
    // 0x802755C8: nop

    // 0x802755CC: bgez        $a0, L_802755DC
    if (SIGNED(ctx->r4) >= 0) {
        // 0x802755D0: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_802755DC;
    }
    // 0x802755D0: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x802755D4: b           L_802755DC
    // 0x802755D8: negu        $v0, $a0
    ctx->r2 = SUB32(0, ctx->r4);
        goto L_802755DC;
    // 0x802755D8: negu        $v0, $a0
    ctx->r2 = SUB32(0, ctx->r4);
L_802755DC:
    // 0x802755DC: slti        $at, $v0, 0xB
    ctx->r1 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
    // 0x802755E0: bne         $at, $zero, L_802755F8
    if (ctx->r1 != 0) {
        // 0x802755E4: nop
    
            goto L_802755F8;
    }
    // 0x802755E4: nop

    // 0x802755E8: jal         0x80275698
    // 0x802755EC: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_80275698(rdram, ctx);
        goto after_1;
    // 0x802755EC: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_1:
    // 0x802755F0: lui         $at, 0x8029
    ctx->r1 = S32(0X8029 << 16);
    // 0x802755F4: sh          $v0, -0x79B6($at)
    MEM_H(-0X79B6, ctx->r1) = ctx->r2;
L_802755F8:
    // 0x802755F8: lb          $v0, 0x38($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X38);
    // 0x802755FC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80275600: bne         $v0, $at, L_80275630
    if (ctx->r2 != ctx->r1) {
        // 0x80275604: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80275630;
    }
    // 0x80275604: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80275608: lb          $t4, 0x3E($s0)
    ctx->r12 = MEM_B(ctx->r16, 0X3E);
    // 0x8027560C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80275610: bne         $t4, $at, L_80275630
    if (ctx->r12 != ctx->r1) {
        // 0x80275614: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80275630;
    }
    // 0x80275614: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80275618: lb          $a1, 0x3D($s0)
    ctx->r5 = MEM_B(ctx->r16, 0X3D);
    // 0x8027561C: jal         0x8027A204
    // 0x80275620: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8027A204(rdram, ctx);
        goto after_2;
    // 0x80275620: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80275624: lb          $v0, 0x38($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X38);
    // 0x80275628: nop

    // 0x8027562C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
L_80275630:
    // 0x80275630: bne         $v0, $at, L_80275654
    if (ctx->r2 != ctx->r1) {
        // 0x80275634: nop
    
            goto L_80275654;
    }
    // 0x80275634: nop

    // 0x80275638: lb          $t5, 0x42($s0)
    ctx->r13 = MEM_B(ctx->r16, 0X42);
    // 0x8027563C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80275640: bne         $t5, $at, L_80275654
    if (ctx->r13 != ctx->r1) {
        // 0x80275644: nop
    
            goto L_80275654;
    }
    // 0x80275644: nop

    // 0x80275648: lb          $a1, 0x43($s0)
    ctx->r5 = MEM_B(ctx->r16, 0X43);
    // 0x8027564C: jal         0x8027A3E0
    // 0x80275650: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8027A3E0(rdram, ctx);
        goto after_3;
    // 0x80275650: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
L_80275654:
    // 0x80275654: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80275658: lw          $t6, -0x3250($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3250);
    // 0x8027565C: nop

    // 0x80275660: lhu         $a0, 0x0($t6)
    ctx->r4 = MEM_HU(ctx->r14, 0X0);
    // 0x80275664: jal         0x80035DE8
    // 0x80275668: nop

    func_80035DE8(rdram, ctx);
        goto after_4;
    // 0x80275668: nop

    after_4:
    // 0x8027566C: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x80275670: lui         $t9, 0x8028
    ctx->r25 = S32(0X8028 << 16);
    // 0x80275674: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80275678: lw          $t9, 0x1B24($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X1B24);
    // 0x8027567C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x80275680: jalr        $t9
    // 0x80275684: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x80275684: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80275688: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8027568C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80275690: jr          $ra
    // 0x80275694: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80275694: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802755AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802755AC: sll         $t1, $t1, 1
    ctx->r9 = S32(ctx->r9 << 1);
    // 0x802755B0: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x802755B4: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x802755B8: addiu       $t3, $t3, -0x3770
    ctx->r11 = ADD32(ctx->r11, -0X3770);
    // 0x802755BC: addu        $t2, $t1, $at
    ctx->r10 = ADD32(ctx->r9, ctx->r1);
    // 0x802755C0: addu        $v1, $t2, $t3
    ctx->r3 = ADD32(ctx->r10, ctx->r11);
    // 0x802755C4: lh          $a0, 0x9B0($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X9B0);
    // 0x802755C8: nop

    // 0x802755CC: bgez        $a0, L_802755DC
    if (SIGNED(ctx->r4) >= 0) {
        // 0x802755D0: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_802755DC;
    }
    // 0x802755D0: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x802755D4: b           L_802755DC
    // 0x802755D8: negu        $v0, $a0
    ctx->r2 = SUB32(0, ctx->r4);
        goto L_802755DC;
    // 0x802755D8: negu        $v0, $a0
    ctx->r2 = SUB32(0, ctx->r4);
L_802755DC:
    // 0x802755DC: slti        $at, $v0, 0xB
    ctx->r1 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
    // 0x802755E0: bne         $at, $zero, L_802755F8
    if (ctx->r1 != 0) {
        // 0x802755E4: nop
    
            goto L_802755F8;
    }
    // 0x802755E4: nop

    // 0x802755E8: jal         0x80275698
    // 0x802755EC: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_80275698(rdram, ctx);
        goto after_0;
    // 0x802755EC: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_0:
    // 0x802755F0: lui         $at, 0x8029
    ctx->r1 = S32(0X8029 << 16);
    // 0x802755F4: sh          $v0, -0x79B6($at)
    MEM_H(-0X79B6, ctx->r1) = ctx->r2;
L_802755F8:
    // 0x802755F8: lb          $v0, 0x38($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X38);
    // 0x802755FC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80275600: bne         $v0, $at, L_80275630
    if (ctx->r2 != ctx->r1) {
        // 0x80275604: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80275630;
    }
    // 0x80275604: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80275608: lb          $t4, 0x3E($s0)
    ctx->r12 = MEM_B(ctx->r16, 0X3E);
    // 0x8027560C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80275610: bne         $t4, $at, L_80275630
    if (ctx->r12 != ctx->r1) {
        // 0x80275614: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80275630;
    }
    // 0x80275614: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80275618: lb          $a1, 0x3D($s0)
    ctx->r5 = MEM_B(ctx->r16, 0X3D);
    // 0x8027561C: jal         0x8027A204
    // 0x80275620: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8027A204(rdram, ctx);
        goto after_1;
    // 0x80275620: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80275624: lb          $v0, 0x38($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X38);
    // 0x80275628: nop

    // 0x8027562C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
L_80275630:
    // 0x80275630: bne         $v0, $at, L_80275654
    if (ctx->r2 != ctx->r1) {
        // 0x80275634: nop
    
            goto L_80275654;
    }
    // 0x80275634: nop

    // 0x80275638: lb          $t5, 0x42($s0)
    ctx->r13 = MEM_B(ctx->r16, 0X42);
    // 0x8027563C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80275640: bne         $t5, $at, L_80275654
    if (ctx->r13 != ctx->r1) {
        // 0x80275644: nop
    
            goto L_80275654;
    }
    // 0x80275644: nop

    // 0x80275648: lb          $a1, 0x43($s0)
    ctx->r5 = MEM_B(ctx->r16, 0X43);
    // 0x8027564C: jal         0x8027A3E0
    // 0x80275650: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8027A3E0(rdram, ctx);
        goto after_2;
    // 0x80275650: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
L_80275654:
    // 0x80275654: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80275658: lw          $t6, -0x3250($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3250);
    // 0x8027565C: nop

    // 0x80275660: lhu         $a0, 0x0($t6)
    ctx->r4 = MEM_HU(ctx->r14, 0X0);
    // 0x80275664: jal         0x80035DE8
    // 0x80275668: nop

    func_80035DE8(rdram, ctx);
        goto after_3;
    // 0x80275668: nop

    after_3:
    // 0x8027566C: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x80275670: lui         $t9, 0x8028
    ctx->r25 = S32(0X8028 << 16);
    // 0x80275674: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80275678: lw          $t9, 0x1B24($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X1B24);
    // 0x8027567C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x80275680: jalr        $t9
    // 0x80275684: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x80275684: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80275688: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8027568C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80275690: jr          $ra
    // 0x80275694: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80275694: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80275698(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80275698: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x8027569C: sll         $t8, $a1, 16
    ctx->r24 = S32(ctx->r5 << 16);
    // 0x802756A0: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x802756A4: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x802756A8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802756AC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802756B0: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    // 0x802756B4: blez        $t7, L_802756D4
    if (SIGNED(ctx->r15) <= 0) {
        // 0x802756B8: or          $a0, $t7, $zero
        ctx->r4 = ctx->r15 | 0;
            goto L_802756D4;
    }
    // 0x802756B8: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x802756BC: addiu       $t0, $t7, -0xA
    ctx->r8 = ADD32(ctx->r15, -0XA);
    // 0x802756C0: multu       $t0, $t9
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802756C4: mflo        $v0
    ctx->r2 = lo;
    // 0x802756C8: sll         $t1, $v0, 16
    ctx->r9 = S32(ctx->r2 << 16);
    // 0x802756CC: jr          $ra
    // 0x802756D0: sra         $v0, $t1, 16
    ctx->r2 = S32(SIGNED(ctx->r9) >> 16);
    return;
    // 0x802756D0: sra         $v0, $t1, 16
    ctx->r2 = S32(SIGNED(ctx->r9) >> 16);
L_802756D4:
    // 0x802756D4: bgez        $a0, L_802756F4
    if (SIGNED(ctx->r4) >= 0) {
        // 0x802756D8: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802756F4;
    }
    // 0x802756D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802756DC: addiu       $t3, $a0, 0xA
    ctx->r11 = ADD32(ctx->r4, 0XA);
    // 0x802756E0: multu       $t3, $a1
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802756E4: mflo        $v0
    ctx->r2 = lo;
    // 0x802756E8: sll         $t4, $v0, 16
    ctx->r12 = S32(ctx->r2 << 16);
    // 0x802756EC: jr          $ra
    // 0x802756F0: sra         $v0, $t4, 16
    ctx->r2 = S32(SIGNED(ctx->r12) >> 16);
    return;
    // 0x802756F0: sra         $v0, $t4, 16
    ctx->r2 = S32(SIGNED(ctx->r12) >> 16);
L_802756F4:
    // 0x802756F4: jr          $ra
    // 0x802756F8: nop

    return;
    // 0x802756F8: nop

;}
RECOMP_FUNC void func_802756FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802756FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80275700: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80275704: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80275708: lbu         $t6, 0x38($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X38);
    // 0x8027570C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80275710: sltiu       $at, $t6, 0xA
    ctx->r1 = ctx->r14 < 0XA ? 1 : 0;
    // 0x80275714: beq         $at, $zero, L_80275FB8
    if (ctx->r1 == 0) {
        // 0x80275718: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_80275FB8;
    }
    // 0x80275718: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8027571C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80275720: addu        $at, $at, $t6
    gpr jr_addend_8027572C = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80275724: lw          $t6, 0x1D30($at)
    ctx->r14 = ADD32(ctx->r1, 0X1D30);
    // 0x80275728: nop

    // 0x8027572C: jr          $t6
    // 0x80275730: nop

    switch (jr_addend_8027572C >> 2) {
        case 0: goto L_80275734; break;
        case 1: goto L_80275AA0; break;
        case 2: goto L_80275AD4; break;
        case 3: goto L_80275BB4; break;
        case 4: goto L_80275C8C; break;
        case 5: goto L_80275CBC; break;
        case 6: goto L_80275D5C; break;
        case 7: goto L_80275DAC; break;
        case 8: goto L_80275E8C; break;
        case 9: goto L_802759AC; break;
        default: switch_error(__func__, 0x8027572C, 0x80281D30);
    }
    // 0x80275730: nop

L_80275734:
    // 0x80275734: lbu         $t7, 0x39($a3)
    ctx->r15 = MEM_BU(ctx->r7, 0X39);
    // 0x80275738: nop

    // 0x8027573C: sltiu       $at, $t7, 0xA
    ctx->r1 = ctx->r15 < 0XA ? 1 : 0;
    // 0x80275740: beq         $at, $zero, L_80275FB8
    if (ctx->r1 == 0) {
        // 0x80275744: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_80275FB8;
    }
    // 0x80275744: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80275748: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8027574C: addu        $at, $at, $t7
    gpr jr_addend_80275758 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80275750: lw          $t7, 0x1D58($at)
    ctx->r15 = ADD32(ctx->r1, 0X1D58);
    // 0x80275754: nop

    // 0x80275758: jr          $t7
    // 0x8027575C: nop

    switch (jr_addend_80275758 >> 2) {
        case 0: goto L_80275760; break;
        case 1: goto L_80275780; break;
        case 2: goto L_80275798; break;
        case 3: goto L_802757C4; break;
        case 4: goto L_802757DC; break;
        case 5: goto L_8027580C; break;
        case 6: goto L_8027583C; break;
        case 7: goto L_8027586C; break;
        case 8: goto L_802758FC; break;
        case 9: goto L_8027598C; break;
        default: switch_error(__func__, 0x80275758, 0x80281D58);
    }
    // 0x8027575C: nop

L_80275760:
    // 0x80275760: jal         0x80035770
    // 0x80275764: nop

    func_80035770(rdram, ctx);
        goto after_0;
    // 0x80275764: nop

    after_0:
    // 0x80275768: jal         0x80276DEC
    // 0x8027576C: nop

    func_80276DEC(rdram, ctx);
        goto after_1;
    // 0x8027576C: nop

    after_1:
    // 0x80275770: jal         0x800373A4
    // 0x80275774: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800373A4(rdram, ctx);
        goto after_2;
    // 0x80275774: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x80275778: b           L_80275FBC
    // 0x8027577C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x8027577C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80275780:
    // 0x80275780: jal         0x80035770
    // 0x80275784: nop

    func_80035770(rdram, ctx);
        goto after_3;
    // 0x80275784: nop

    after_3:
    // 0x80275788: jal         0x8027773C
    // 0x8027578C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8027773C(rdram, ctx);
        goto after_4;
    // 0x8027578C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_4:
    // 0x80275790: b           L_80275FBC
    // 0x80275794: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x80275794: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80275798:
    // 0x80275798: jal         0x80035770
    // 0x8027579C: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80035770(rdram, ctx);
        goto after_5;
    // 0x8027579C: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_5:
    // 0x802757A0: jal         0x8027773C
    // 0x802757A4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_8027773C(rdram, ctx);
        goto after_6;
    // 0x802757A4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_6:
    // 0x802757A8: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x802757AC: addiu       $t8, $zero, 0xB
    ctx->r24 = ADD32(0, 0XB);
    // 0x802757B0: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802757B4: sb          $t8, 0x3D($a3)
    MEM_B(0X3D, ctx->r7) = ctx->r24;
    // 0x802757B8: sb          $zero, 0x3F($a3)
    MEM_B(0X3F, ctx->r7) = 0;
    // 0x802757BC: b           L_80275FB8
    // 0x802757C0: sb          $t9, 0x53($a3)
    MEM_B(0X53, ctx->r7) = ctx->r25;
        goto L_80275FB8;
    // 0x802757C0: sb          $t9, 0x53($a3)
    MEM_B(0X53, ctx->r7) = ctx->r25;
L_802757C4:
    // 0x802757C4: jal         0x80035770
    // 0x802757C8: nop

    func_80035770(rdram, ctx);
        goto after_7;
    // 0x802757C8: nop

    after_7:
    // 0x802757CC: jal         0x8027773C
    // 0x802757D0: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_8027773C(rdram, ctx);
        goto after_8;
    // 0x802757D0: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_8:
    // 0x802757D4: b           L_80275FBC
    // 0x802757D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x802757D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802757DC:
    // 0x802757DC: jal         0x80035770
    // 0x802757E0: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80035770(rdram, ctx);
        goto after_9;
    // 0x802757E0: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_9:
    // 0x802757E4: jal         0x8027784C
    // 0x802757E8: nop

    func_8027784C(rdram, ctx);
        goto after_10;
    // 0x802757E8: nop

    after_10:
    // 0x802757EC: jal         0x8027773C
    // 0x802757F0: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_8027773C(rdram, ctx);
        goto after_11;
    // 0x802757F0: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_11:
    // 0x802757F4: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x802757F8: addiu       $t0, $zero, 0xB
    ctx->r8 = ADD32(0, 0XB);
    // 0x802757FC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80275800: sb          $t0, 0x44($a3)
    MEM_B(0X44, ctx->r7) = ctx->r8;
    // 0x80275804: b           L_80275FB8
    // 0x80275808: sb          $t1, 0x53($a3)
    MEM_B(0X53, ctx->r7) = ctx->r9;
        goto L_80275FB8;
    // 0x80275808: sb          $t1, 0x53($a3)
    MEM_B(0X53, ctx->r7) = ctx->r9;
L_8027580C:
    // 0x8027580C: jal         0x80035770
    // 0x80275810: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80035770(rdram, ctx);
        goto after_12;
    // 0x80275810: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_12:
    // 0x80275814: jal         0x8027773C
    // 0x80275818: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_8027773C(rdram, ctx);
        goto after_13;
    // 0x80275818: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_13:
    // 0x8027581C: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275820: addiu       $t2, $zero, 0xB
    ctx->r10 = ADD32(0, 0XB);
    // 0x80275824: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80275828: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8027582C: sb          $t2, 0x46($a3)
    MEM_B(0X46, ctx->r7) = ctx->r10;
    // 0x80275830: sb          $t3, 0x3F($a3)
    MEM_B(0X3F, ctx->r7) = ctx->r11;
    // 0x80275834: b           L_80275FB8
    // 0x80275838: sb          $t4, 0x53($a3)
    MEM_B(0X53, ctx->r7) = ctx->r12;
        goto L_80275FB8;
    // 0x80275838: sb          $t4, 0x53($a3)
    MEM_B(0X53, ctx->r7) = ctx->r12;
L_8027583C:
    // 0x8027583C: jal         0x80035770
    // 0x80275840: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80035770(rdram, ctx);
        goto after_14;
    // 0x80275840: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_14:
    // 0x80275844: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275848: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8027584C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x80275850: sb          $t5, 0x4D($a3)
    MEM_B(0X4D, ctx->r7) = ctx->r13;
    // 0x80275854: jal         0x8027773C
    // 0x80275858: sb          $zero, 0x4E($a3)
    MEM_B(0X4E, ctx->r7) = 0;
    func_8027773C(rdram, ctx);
        goto after_15;
    // 0x80275858: sb          $zero, 0x4E($a3)
    MEM_B(0X4E, ctx->r7) = 0;
    after_15:
    // 0x8027585C: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275860: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80275864: b           L_80275FB8
    // 0x80275868: sb          $t6, 0x52($a3)
    MEM_B(0X52, ctx->r7) = ctx->r14;
        goto L_80275FB8;
    // 0x80275868: sb          $t6, 0x52($a3)
    MEM_B(0X52, ctx->r7) = ctx->r14;
L_8027586C:
    // 0x8027586C: jal         0x80276E4C
    // 0x80275870: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80276E4C(rdram, ctx);
        goto after_16;
    // 0x80275870: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_16:
    // 0x80275874: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275878: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8027587C: lb          $t7, 0x5A($a3)
    ctx->r15 = MEM_B(ctx->r7, 0X5A);
    // 0x80275880: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x80275884: beq         $t7, $at, L_802758EC
    if (ctx->r15 == ctx->r1) {
        // 0x80275888: nop
    
            goto L_802758EC;
    }
    // 0x80275888: nop

    // 0x8027588C: jal         0x8027773C
    // 0x80275890: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_8027773C(rdram, ctx);
        goto after_17;
    // 0x80275890: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_17:
    // 0x80275894: jal         0x80035770
    // 0x80275898: nop

    func_80035770(rdram, ctx);
        goto after_18;
    // 0x80275898: nop

    after_18:
    // 0x8027589C: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x802758A0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802758A4: lb          $t8, 0x5B($a3)
    ctx->r24 = MEM_B(ctx->r7, 0X5B);
    // 0x802758A8: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
    // 0x802758AC: bne         $t8, $at, L_802758CC
    if (ctx->r24 != ctx->r1) {
        // 0x802758B0: lui         $t1, 0x8029
        ctx->r9 = S32(0X8029 << 16);
            goto L_802758CC;
    }
    // 0x802758B0: lui         $t1, 0x8029
    ctx->r9 = S32(0X8029 << 16);
    // 0x802758B4: jal         0x80276E4C
    // 0x802758B8: sb          $t9, 0x55($a3)
    MEM_B(0X55, ctx->r7) = ctx->r25;
    func_80276E4C(rdram, ctx);
        goto after_19;
    // 0x802758B8: sb          $t9, 0x55($a3)
    MEM_B(0X55, ctx->r7) = ctx->r25;
    after_19:
    // 0x802758BC: jal         0x80277340
    // 0x802758C0: nop

    func_80277340(rdram, ctx);
        goto after_20;
    // 0x802758C0: nop

    after_20:
    // 0x802758C4: b           L_80275FBC
    // 0x802758C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x802758C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802758CC:
    // 0x802758CC: lb          $t0, 0x57($a3)
    ctx->r8 = MEM_B(ctx->r7, 0X57);
    // 0x802758D0: sb          $zero, 0x55($a3)
    MEM_B(0X55, ctx->r7) = 0;
    // 0x802758D4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x802758D8: lbu         $t1, -0x79C8($t1)
    ctx->r9 = MEM_BU(ctx->r9, -0X79C8);
    // 0x802758DC: jal         0x80277340
    // 0x802758E0: sb          $t1, 0x59($a3)
    MEM_B(0X59, ctx->r7) = ctx->r9;
    func_80277340(rdram, ctx);
        goto after_21;
    // 0x802758E0: sb          $t1, 0x59($a3)
    MEM_B(0X59, ctx->r7) = ctx->r9;
    after_21:
    // 0x802758E4: b           L_80275FBC
    // 0x802758E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x802758E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802758EC:
    // 0x802758EC: jal         0x800357AC
    // 0x802758F0: nop

    func_800357AC(rdram, ctx);
        goto after_22;
    // 0x802758F0: nop

    after_22:
    // 0x802758F4: b           L_80275FBC
    // 0x802758F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x802758F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802758FC:
    // 0x802758FC: jal         0x80276E4C
    // 0x80275900: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80276E4C(rdram, ctx);
        goto after_23;
    // 0x80275900: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_23:
    // 0x80275904: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275908: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8027590C: lb          $t2, 0x5A($a3)
    ctx->r10 = MEM_B(ctx->r7, 0X5A);
    // 0x80275910: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x80275914: beq         $t2, $at, L_8027597C
    if (ctx->r10 == ctx->r1) {
        // 0x80275918: nop
    
            goto L_8027597C;
    }
    // 0x80275918: nop

    // 0x8027591C: jal         0x8027773C
    // 0x80275920: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_8027773C(rdram, ctx);
        goto after_24;
    // 0x80275920: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_24:
    // 0x80275924: jal         0x80035770
    // 0x80275928: nop

    func_80035770(rdram, ctx);
        goto after_25;
    // 0x80275928: nop

    after_25:
    // 0x8027592C: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275930: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80275934: lb          $t3, 0x5B($a3)
    ctx->r11 = MEM_B(ctx->r7, 0X5B);
    // 0x80275938: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x8027593C: bne         $t3, $at, L_8027595C
    if (ctx->r11 != ctx->r1) {
        // 0x80275940: lui         $t6, 0x8029
        ctx->r14 = S32(0X8029 << 16);
            goto L_8027595C;
    }
    // 0x80275940: lui         $t6, 0x8029
    ctx->r14 = S32(0X8029 << 16);
    // 0x80275944: jal         0x80276E4C
    // 0x80275948: sb          $t4, 0x56($a3)
    MEM_B(0X56, ctx->r7) = ctx->r12;
    func_80276E4C(rdram, ctx);
        goto after_26;
    // 0x80275948: sb          $t4, 0x56($a3)
    MEM_B(0X56, ctx->r7) = ctx->r12;
    after_26:
    // 0x8027594C: jal         0x80277340
    // 0x80275950: nop

    func_80277340(rdram, ctx);
        goto after_27;
    // 0x80275950: nop

    after_27:
    // 0x80275954: b           L_80275FBC
    // 0x80275958: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x80275958: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027595C:
    // 0x8027595C: lb          $t5, 0x57($a3)
    ctx->r13 = MEM_B(ctx->r7, 0X57);
    // 0x80275960: sb          $zero, 0x56($a3)
    MEM_B(0X56, ctx->r7) = 0;
    // 0x80275964: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80275968: lbu         $t6, -0x79C8($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X79C8);
    // 0x8027596C: jal         0x80277340
    // 0x80275970: sb          $t6, 0x59($a3)
    MEM_B(0X59, ctx->r7) = ctx->r14;
    func_80277340(rdram, ctx);
        goto after_28;
    // 0x80275970: sb          $t6, 0x59($a3)
    MEM_B(0X59, ctx->r7) = ctx->r14;
    after_28:
    // 0x80275974: b           L_80275FBC
    // 0x80275978: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x80275978: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027597C:
    // 0x8027597C: jal         0x800357AC
    // 0x80275980: nop

    func_800357AC(rdram, ctx);
        goto after_29;
    // 0x80275980: nop

    after_29:
    // 0x80275984: b           L_80275FBC
    // 0x80275988: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x80275988: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027598C:
    // 0x8027598C: jal         0x80035770
    // 0x80275990: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80035770(rdram, ctx);
        goto after_30;
    // 0x80275990: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_30:
    // 0x80275994: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275998: addiu       $t7, $zero, 0x9
    ctx->r15 = ADD32(0, 0X9);
    // 0x8027599C: sb          $t7, 0x38($a3)
    MEM_B(0X38, ctx->r7) = ctx->r15;
    // 0x802759A0: sb          $zero, 0x49($a3)
    MEM_B(0X49, ctx->r7) = 0;
    // 0x802759A4: b           L_80275FB8
    // 0x802759A8: sb          $zero, 0x4A($a3)
    MEM_B(0X4A, ctx->r7) = 0;
        goto L_80275FB8;
    // 0x802759A8: sb          $zero, 0x4A($a3)
    MEM_B(0X4A, ctx->r7) = 0;
L_802759AC:
    // 0x802759AC: jal         0x80035770
    // 0x802759B0: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80035770(rdram, ctx);
        goto after_31;
    // 0x802759B0: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_31:
    // 0x802759B4: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x802759B8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802759BC: lb          $v0, 0x49($a3)
    ctx->r2 = MEM_B(ctx->r7, 0X49);
    // 0x802759C0: nop

    // 0x802759C4: beq         $v0, $zero, L_802759DC
    if (ctx->r2 == 0) {
        // 0x802759C8: nop
    
            goto L_802759DC;
    }
    // 0x802759C8: nop

    // 0x802759CC: beq         $v0, $v1, L_802759EC
    if (ctx->r2 == ctx->r3) {
        // 0x802759D0: nop
    
            goto L_802759EC;
    }
    // 0x802759D0: nop

    // 0x802759D4: b           L_80275FBC
    // 0x802759D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x802759D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802759DC:
    // 0x802759DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802759E0: sb          $v0, 0x49($a3)
    MEM_B(0X49, ctx->r7) = ctx->r2;
    // 0x802759E4: b           L_80275FB8
    // 0x802759E8: sb          $v0, 0x4B($a3)
    MEM_B(0X4B, ctx->r7) = ctx->r2;
        goto L_80275FB8;
    // 0x802759E8: sb          $v0, 0x4B($a3)
    MEM_B(0X4B, ctx->r7) = ctx->r2;
L_802759EC:
    // 0x802759EC: lb          $v0, 0x4B($a3)
    ctx->r2 = MEM_B(ctx->r7, 0X4B);
    // 0x802759F0: nop

    // 0x802759F4: beq         $v0, $zero, L_80275A0C
    if (ctx->r2 == 0) {
        // 0x802759F8: nop
    
            goto L_80275A0C;
    }
    // 0x802759F8: nop

    // 0x802759FC: beq         $v0, $v1, L_80275A98
    if (ctx->r2 == ctx->r3) {
        // 0x80275A00: nop
    
            goto L_80275A98;
    }
    // 0x80275A00: nop

    // 0x80275A04: b           L_80275FBC
    // 0x80275A08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x80275A08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80275A0C:
    // 0x80275A0C: lbu         $t8, 0x4A($a3)
    ctx->r24 = MEM_BU(ctx->r7, 0X4A);
    // 0x80275A10: nop

    // 0x80275A14: sltiu       $at, $t8, 0x5
    ctx->r1 = ctx->r24 < 0X5 ? 1 : 0;
    // 0x80275A18: beq         $at, $zero, L_80275A80
    if (ctx->r1 == 0) {
        // 0x80275A1C: sll         $t8, $t8, 2
        ctx->r24 = S32(ctx->r24 << 2);
            goto L_80275A80;
    }
    // 0x80275A1C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80275A20: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80275A24: addu        $at, $at, $t8
    gpr jr_addend_80275A30 = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80275A28: lw          $t8, 0x1D80($at)
    ctx->r24 = ADD32(ctx->r1, 0X1D80);
    // 0x80275A2C: nop

    // 0x80275A30: jr          $t8
    // 0x80275A34: nop

    switch (jr_addend_80275A30 >> 2) {
        case 0: goto L_80275A38; break;
        case 1: goto L_80275A48; break;
        case 2: goto L_80275A58; break;
        case 3: goto L_80275A68; break;
        case 4: goto L_80275A78; break;
        default: switch_error(__func__, 0x80275A30, 0x80281D80);
    }
    // 0x80275A34: nop

L_80275A38:
    // 0x80275A38: jal         0x80277644
    // 0x80275A3C: nop

    func_80277644(rdram, ctx);
        goto after_32;
    // 0x80275A3C: nop

    after_32:
    // 0x80275A40: b           L_80275A80
    // 0x80275A44: nop

        goto L_80275A80;
    // 0x80275A44: nop

L_80275A48:
    // 0x80275A48: jal         0x80277420
    // 0x80275A4C: nop

    func_80277420(rdram, ctx);
        goto after_33;
    // 0x80275A4C: nop

    after_33:
    // 0x80275A50: b           L_80275A80
    // 0x80275A54: nop

        goto L_80275A80;
    // 0x80275A54: nop

L_80275A58:
    // 0x80275A58: jal         0x80277478
    // 0x80275A5C: nop

    func_80277478(rdram, ctx);
        goto after_34;
    // 0x80275A5C: nop

    after_34:
    // 0x80275A60: b           L_80275A80
    // 0x80275A64: nop

        goto L_80275A80;
    // 0x80275A64: nop

L_80275A68:
    // 0x80275A68: jal         0x8027753C
    // 0x80275A6C: nop

    func_8027753C(rdram, ctx);
        goto after_35;
    // 0x80275A6C: nop

    after_35:
    // 0x80275A70: b           L_80275A80
    // 0x80275A74: nop

        goto L_80275A80;
    // 0x80275A74: nop

L_80275A78:
    // 0x80275A78: jal         0x802775C0
    // 0x80275A7C: nop

    func_802775C0(rdram, ctx);
        goto after_36;
    // 0x80275A7C: nop

    after_36:
L_80275A80:
    // 0x80275A80: jal         0x802771FC
    // 0x80275A84: nop

    func_802771FC(rdram, ctx);
        goto after_37;
    // 0x80275A84: nop

    after_37:
    // 0x80275A88: jal         0x8027767C
    // 0x80275A8C: nop

    func_8027767C(rdram, ctx);
        goto after_38;
    // 0x80275A8C: nop

    after_38:
    // 0x80275A90: b           L_80275FBC
    // 0x80275A94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x80275A94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80275A98:
    // 0x80275A98: b           L_80275FB8
    // 0x80275A9C: sb          $zero, 0x38($a3)
    MEM_B(0X38, ctx->r7) = 0;
        goto L_80275FB8;
    // 0x80275A9C: sb          $zero, 0x38($a3)
    MEM_B(0X38, ctx->r7) = 0;
L_80275AA0:
    // 0x80275AA0: jal         0x80035770
    // 0x80275AA4: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80035770(rdram, ctx);
        goto after_39;
    // 0x80275AA4: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_39:
    // 0x80275AA8: jal         0x802777C8
    // 0x80275AAC: nop

    func_802777C8(rdram, ctx);
        goto after_40;
    // 0x80275AAC: nop

    after_40:
    // 0x80275AB0: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275AB4: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80275AB8: lb          $t9, 0x3A($a3)
    ctx->r25 = MEM_B(ctx->r7, 0X3A);
    // 0x80275ABC: addiu       $a0, $a0, 0x5510
    ctx->r4 = ADD32(ctx->r4, 0X5510);
    // 0x80275AC0: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x80275AC4: jal         0x8002989C
    // 0x80275AC8: sb          $t9, 0x3B($a3)
    MEM_B(0X3B, ctx->r7) = ctx->r25;
    func_8002989C(rdram, ctx);
        goto after_41;
    // 0x80275AC8: sb          $t9, 0x3B($a3)
    MEM_B(0X3B, ctx->r7) = ctx->r25;
    after_41:
    // 0x80275ACC: b           L_80275FBC
    // 0x80275AD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x80275AD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80275AD4:
    // 0x80275AD4: jal         0x80035770
    // 0x80275AD8: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80035770(rdram, ctx);
        goto after_42;
    // 0x80275AD8: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_42:
    // 0x80275ADC: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275AE0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80275AE4: lb          $v0, 0x3E($a3)
    ctx->r2 = MEM_B(ctx->r7, 0X3E);
    // 0x80275AE8: nop

    // 0x80275AEC: beq         $v0, $zero, L_80275B04
    if (ctx->r2 == 0) {
        // 0x80275AF0: nop
    
            goto L_80275B04;
    }
    // 0x80275AF0: nop

    // 0x80275AF4: beq         $v0, $at, L_80275B90
    if (ctx->r2 == ctx->r1) {
        // 0x80275AF8: addiu       $a0, $zero, 0xF00
        ctx->r4 = ADD32(0, 0XF00);
            goto L_80275B90;
    }
    // 0x80275AF8: addiu       $a0, $zero, 0xF00
    ctx->r4 = ADD32(0, 0XF00);
    // 0x80275AFC: b           L_80275FBC
    // 0x80275B00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x80275B00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80275B04:
    // 0x80275B04: lb          $t0, 0x3D($a3)
    ctx->r8 = MEM_B(ctx->r7, 0X3D);
    // 0x80275B08: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x80275B0C: bne         $t0, $at, L_80275B2C
    if (ctx->r8 != ctx->r1) {
        // 0x80275B10: addiu       $a0, $zero, 0xF00
        ctx->r4 = ADD32(0, 0XF00);
            goto L_80275B2C;
    }
    // 0x80275B10: addiu       $a0, $zero, 0xF00
    ctx->r4 = ADD32(0, 0XF00);
    // 0x80275B14: jal         0x802777C8
    // 0x80275B18: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_802777C8(rdram, ctx);
        goto after_43;
    // 0x80275B18: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_43:
    // 0x80275B1C: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275B20: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80275B24: b           L_80275FB8
    // 0x80275B28: sb          $t1, 0x54($a3)
    MEM_B(0X54, ctx->r7) = ctx->r9;
        goto L_80275FB8;
    // 0x80275B28: sb          $t1, 0x54($a3)
    MEM_B(0X54, ctx->r7) = ctx->r9;
L_80275B2C:
    // 0x80275B2C: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x80275B30: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80275B34: jal         0x80049E40
    // 0x80275B38: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80049E40(rdram, ctx);
        goto after_44;
    // 0x80275B38: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_44:
    // 0x80275B3C: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x80275B40: lb          $t2, -0x326C($t2)
    ctx->r10 = MEM_B(ctx->r10, -0X326C);
    // 0x80275B44: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x80275B48: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80275B4C: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x80275B50: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x80275B54: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x80275B58: addiu       $t5, $t5, -0x3770
    ctx->r13 = ADD32(ctx->r13, -0X3770);
    // 0x80275B5C: addu        $t4, $t3, $at
    ctx->r12 = ADD32(ctx->r11, ctx->r1);
    // 0x80275B60: addu        $v0, $t4, $t5
    ctx->r2 = ADD32(ctx->r12, ctx->r13);
    // 0x80275B64: lbu         $t6, 0x70A($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X70A);
    // 0x80275B68: nop

    // 0x80275B6C: ori         $t7, $t6, 0x2
    ctx->r15 = ctx->r14 | 0X2;
    // 0x80275B70: jal         0x802773BC
    // 0x80275B74: sb          $t7, 0x70A($v0)
    MEM_B(0X70A, ctx->r2) = ctx->r15;
    func_802773BC(rdram, ctx);
        goto after_45;
    // 0x80275B74: sb          $t7, 0x70A($v0)
    MEM_B(0X70A, ctx->r2) = ctx->r15;
    after_45:
    // 0x80275B78: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275B7C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80275B80: jal         0x802771FC
    // 0x80275B84: sb          $t8, 0x3E($a3)
    MEM_B(0X3E, ctx->r7) = ctx->r24;
    func_802771FC(rdram, ctx);
        goto after_46;
    // 0x80275B84: sb          $t8, 0x3E($a3)
    MEM_B(0X3E, ctx->r7) = ctx->r24;
    after_46:
    // 0x80275B88: b           L_80275FBC
    // 0x80275B8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x80275B8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80275B90:
    // 0x80275B90: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x80275B94: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    // 0x80275B98: jal         0x80049E40
    // 0x80275B9C: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80049E40(rdram, ctx);
        goto after_47;
    // 0x80275B9C: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_47:
    // 0x80275BA0: jal         0x802772AC
    // 0x80275BA4: nop

    func_802772AC(rdram, ctx);
        goto after_48;
    // 0x80275BA4: nop

    after_48:
    // 0x80275BA8: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275BAC: b           L_80275FB8
    // 0x80275BB0: sb          $zero, 0x3E($a3)
    MEM_B(0X3E, ctx->r7) = 0;
        goto L_80275FB8;
    // 0x80275BB0: sb          $zero, 0x3E($a3)
    MEM_B(0X3E, ctx->r7) = 0;
L_80275BB4:
    // 0x80275BB4: jal         0x80035770
    // 0x80275BB8: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80035770(rdram, ctx);
        goto after_49;
    // 0x80275BB8: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_49:
    // 0x80275BBC: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275BC0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80275BC4: lb          $v0, 0x42($a3)
    ctx->r2 = MEM_B(ctx->r7, 0X42);
    // 0x80275BC8: nop

    // 0x80275BCC: beq         $v0, $zero, L_80275BF0
    if (ctx->r2 == 0) {
        // 0x80275BD0: nop
    
            goto L_80275BF0;
    }
    // 0x80275BD0: nop

    // 0x80275BD4: beq         $v0, $at, L_80275C00
    if (ctx->r2 == ctx->r1) {
        // 0x80275BD8: addiu       $a0, $zero, 0xF00
        ctx->r4 = ADD32(0, 0XF00);
            goto L_80275C00;
    }
    // 0x80275BD8: addiu       $a0, $zero, 0xF00
    ctx->r4 = ADD32(0, 0XF00);
    // 0x80275BDC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80275BE0: beq         $v0, $at, L_80275C64
    if (ctx->r2 == ctx->r1) {
        // 0x80275BE4: addiu       $a0, $zero, 0xF00
        ctx->r4 = ADD32(0, 0XF00);
            goto L_80275C64;
    }
    // 0x80275BE4: addiu       $a0, $zero, 0xF00
    ctx->r4 = ADD32(0, 0XF00);
    // 0x80275BE8: b           L_80275FBC
    // 0x80275BEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x80275BEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80275BF0:
    // 0x80275BF0: jal         0x802777C8
    // 0x80275BF4: nop

    func_802777C8(rdram, ctx);
        goto after_50;
    // 0x80275BF4: nop

    after_50:
    // 0x80275BF8: b           L_80275FBC
    // 0x80275BFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x80275BFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80275C00:
    // 0x80275C00: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x80275C04: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80275C08: jal         0x80049E40
    // 0x80275C0C: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80049E40(rdram, ctx);
        goto after_51;
    // 0x80275C0C: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_51:
    // 0x80275C10: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x80275C14: lb          $t9, -0x326C($t9)
    ctx->r25 = MEM_B(ctx->r25, -0X326C);
    // 0x80275C18: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x80275C1C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80275C20: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x80275C24: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x80275C28: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x80275C2C: addiu       $t2, $t2, -0x3770
    ctx->r10 = ADD32(ctx->r10, -0X3770);
    // 0x80275C30: addu        $t1, $t0, $at
    ctx->r9 = ADD32(ctx->r8, ctx->r1);
    // 0x80275C34: addu        $v0, $t1, $t2
    ctx->r2 = ADD32(ctx->r9, ctx->r10);
    // 0x80275C38: lbu         $t3, 0x70A($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X70A);
    // 0x80275C3C: nop

    // 0x80275C40: ori         $t4, $t3, 0x2
    ctx->r12 = ctx->r11 | 0X2;
    // 0x80275C44: jal         0x802773BC
    // 0x80275C48: sb          $t4, 0x70A($v0)
    MEM_B(0X70A, ctx->r2) = ctx->r12;
    func_802773BC(rdram, ctx);
        goto after_52;
    // 0x80275C48: sb          $t4, 0x70A($v0)
    MEM_B(0X70A, ctx->r2) = ctx->r12;
    after_52:
    // 0x80275C4C: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275C50: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x80275C54: jal         0x802771FC
    // 0x80275C58: sb          $t5, 0x42($a3)
    MEM_B(0X42, ctx->r7) = ctx->r13;
    func_802771FC(rdram, ctx);
        goto after_53;
    // 0x80275C58: sb          $t5, 0x42($a3)
    MEM_B(0X42, ctx->r7) = ctx->r13;
    after_53:
    // 0x80275C5C: b           L_80275FBC
    // 0x80275C60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x80275C60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80275C64:
    // 0x80275C64: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x80275C68: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    // 0x80275C6C: jal         0x80049E40
    // 0x80275C70: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80049E40(rdram, ctx);
        goto after_54;
    // 0x80275C70: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_54:
    // 0x80275C74: jal         0x802772AC
    // 0x80275C78: nop

    func_802772AC(rdram, ctx);
        goto after_55;
    // 0x80275C78: nop

    after_55:
    // 0x80275C7C: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275C80: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80275C84: b           L_80275FB8
    // 0x80275C88: sb          $t6, 0x42($a3)
    MEM_B(0X42, ctx->r7) = ctx->r14;
        goto L_80275FB8;
    // 0x80275C88: sb          $t6, 0x42($a3)
    MEM_B(0X42, ctx->r7) = ctx->r14;
L_80275C8C:
    // 0x80275C8C: lb          $t7, 0x44($a3)
    ctx->r15 = MEM_B(ctx->r7, 0X44);
    // 0x80275C90: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x80275C94: bne         $t7, $at, L_80275FBC
    if (ctx->r15 != ctx->r1) {
        // 0x80275C98: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80275FBC;
    }
    // 0x80275C98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80275C9C: jal         0x80035770
    // 0x80275CA0: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80035770(rdram, ctx);
        goto after_56;
    // 0x80275CA0: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_56:
    // 0x80275CA4: jal         0x802777C8
    // 0x80275CA8: nop

    func_802777C8(rdram, ctx);
        goto after_57;
    // 0x80275CA8: nop

    after_57:
    // 0x80275CAC: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275CB0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80275CB4: b           L_80275FB8
    // 0x80275CB8: sb          $t8, 0x54($a3)
    MEM_B(0X54, ctx->r7) = ctx->r24;
        goto L_80275FB8;
    // 0x80275CB8: sb          $t8, 0x54($a3)
    MEM_B(0X54, ctx->r7) = ctx->r24;
L_80275CBC:
    // 0x80275CBC: jal         0x80035770
    // 0x80275CC0: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80035770(rdram, ctx);
        goto after_58;
    // 0x80275CC0: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_58:
    // 0x80275CC4: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275CC8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80275CCC: lb          $v0, 0x45($a3)
    ctx->r2 = MEM_B(ctx->r7, 0X45);
    // 0x80275CD0: nop

    // 0x80275CD4: beq         $v0, $zero, L_80275CEC
    if (ctx->r2 == 0) {
        // 0x80275CD8: nop
    
            goto L_80275CEC;
    }
    // 0x80275CD8: nop

    // 0x80275CDC: beq         $v0, $at, L_80275D30
    if (ctx->r2 == ctx->r1) {
        // 0x80275CE0: nop
    
            goto L_80275D30;
    }
    // 0x80275CE0: nop

    // 0x80275CE4: b           L_80275D44
    // 0x80275CE8: nop

        goto L_80275D44;
    // 0x80275CE8: nop

L_80275CEC:
    // 0x80275CEC: lb          $t9, 0x46($a3)
    ctx->r25 = MEM_B(ctx->r7, 0X46);
    // 0x80275CF0: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x80275CF4: bne         $t9, $at, L_80275D14
    if (ctx->r25 != ctx->r1) {
        // 0x80275CF8: nop
    
            goto L_80275D14;
    }
    // 0x80275CF8: nop

    // 0x80275CFC: jal         0x802777C8
    // 0x80275D00: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_802777C8(rdram, ctx);
        goto after_59;
    // 0x80275D00: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_59:
    // 0x80275D04: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275D08: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80275D0C: b           L_80275D44
    // 0x80275D10: sb          $t0, 0x54($a3)
    MEM_B(0X54, ctx->r7) = ctx->r8;
        goto L_80275D44;
    // 0x80275D10: sb          $t0, 0x54($a3)
    MEM_B(0X54, ctx->r7) = ctx->r8;
L_80275D14:
    // 0x80275D14: jal         0x80277908
    // 0x80275D18: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80277908(rdram, ctx);
        goto after_60;
    // 0x80275D18: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_60:
    // 0x80275D1C: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275D20: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80275D24: sb          $zero, 0x48($a3)
    MEM_B(0X48, ctx->r7) = 0;
    // 0x80275D28: b           L_80275D44
    // 0x80275D2C: sb          $t1, 0x45($a3)
    MEM_B(0X45, ctx->r7) = ctx->r9;
        goto L_80275D44;
    // 0x80275D2C: sb          $t1, 0x45($a3)
    MEM_B(0X45, ctx->r7) = ctx->r9;
L_80275D30:
    // 0x80275D30: jal         0x8027B068
    // 0x80275D34: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_8027B068(rdram, ctx);
        goto after_61;
    // 0x80275D34: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_61:
    // 0x80275D38: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275D3C: nop

    // 0x80275D40: sb          $zero, 0x45($a3)
    MEM_B(0X45, ctx->r7) = 0;
L_80275D44:
    // 0x80275D44: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80275D48: addiu       $a0, $a0, 0x5510
    ctx->r4 = ADD32(ctx->r4, 0X5510);
    // 0x80275D4C: jal         0x8002989C
    // 0x80275D50: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_8002989C(rdram, ctx);
        goto after_62;
    // 0x80275D50: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_62:
    // 0x80275D54: b           L_80275FBC
    // 0x80275D58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x80275D58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80275D5C:
    // 0x80275D5C: jal         0x80035770
    // 0x80275D60: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80035770(rdram, ctx);
        goto after_63;
    // 0x80275D60: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_63:
    // 0x80275D64: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275D68: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80275D6C: lb          $v0, 0x4C($a3)
    ctx->r2 = MEM_B(ctx->r7, 0X4C);
    // 0x80275D70: nop

    // 0x80275D74: beq         $v0, $zero, L_80275D8C
    if (ctx->r2 == 0) {
        // 0x80275D78: nop
    
            goto L_80275D8C;
    }
    // 0x80275D78: nop

    // 0x80275D7C: beq         $v0, $v1, L_80275DA0
    if (ctx->r2 == ctx->r3) {
        // 0x80275D80: nop
    
            goto L_80275DA0;
    }
    // 0x80275D80: nop

    // 0x80275D84: b           L_80275FBC
    // 0x80275D88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x80275D88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80275D8C:
    // 0x80275D8C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80275D90: sb          $v0, 0x4C($a3)
    MEM_B(0X4C, ctx->r7) = ctx->r2;
    // 0x80275D94: sb          $zero, 0x4E($a3)
    MEM_B(0X4E, ctx->r7) = 0;
    // 0x80275D98: b           L_80275FB8
    // 0x80275D9C: sb          $v0, 0x4F($a3)
    MEM_B(0X4F, ctx->r7) = ctx->r2;
        goto L_80275FB8;
    // 0x80275D9C: sb          $v0, 0x4F($a3)
    MEM_B(0X4F, ctx->r7) = ctx->r2;
L_80275DA0:
    // 0x80275DA0: sb          $zero, 0x4C($a3)
    MEM_B(0X4C, ctx->r7) = 0;
    // 0x80275DA4: b           L_80275FB8
    // 0x80275DA8: sb          $v1, 0x50($a3)
    MEM_B(0X50, ctx->r7) = ctx->r3;
        goto L_80275FB8;
    // 0x80275DA8: sb          $v1, 0x50($a3)
    MEM_B(0X50, ctx->r7) = ctx->r3;
L_80275DAC:
    // 0x80275DAC: lbu         $t2, 0x55($a3)
    ctx->r10 = MEM_BU(ctx->r7, 0X55);
    // 0x80275DB0: nop

    // 0x80275DB4: sltiu       $at, $t2, 0x6
    ctx->r1 = ctx->r10 < 0X6 ? 1 : 0;
    // 0x80275DB8: beq         $at, $zero, L_80275FB8
    if (ctx->r1 == 0) {
        // 0x80275DBC: sll         $t2, $t2, 2
        ctx->r10 = S32(ctx->r10 << 2);
            goto L_80275FB8;
    }
    // 0x80275DBC: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80275DC0: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80275DC4: addu        $at, $at, $t2
    gpr jr_addend_80275DD0 = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80275DC8: lw          $t2, 0x1D94($at)
    ctx->r10 = ADD32(ctx->r1, 0X1D94);
    // 0x80275DCC: nop

    // 0x80275DD0: jr          $t2
    // 0x80275DD4: nop

    switch (jr_addend_80275DD0 >> 2) {
        case 0: goto L_80275DD8; break;
        case 1: goto L_80275E14; break;
        case 2: goto L_80275E14; break;
        case 3: goto L_80275FB8; break;
        case 4: goto L_80275FB8; break;
        case 5: goto L_80275FB8; break;
        default: switch_error(__func__, 0x80275DD0, 0x80281D94);
    }
    // 0x80275DD4: nop

L_80275DD8:
    // 0x80275DD8: jal         0x80035770
    // 0x80275DDC: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80035770(rdram, ctx);
        goto after_64;
    // 0x80275DDC: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_64:
    // 0x80275DE0: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275DE4: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80275DE8: lb          $a0, 0x57($a3)
    ctx->r4 = MEM_B(ctx->r7, 0X57);
    // 0x80275DEC: jal         0x80276E78
    // 0x80275DF0: sb          $t3, 0x58($a3)
    MEM_B(0X58, ctx->r7) = ctx->r11;
    func_80276E78(rdram, ctx);
        goto after_65;
    // 0x80275DF0: sb          $t3, 0x58($a3)
    MEM_B(0X58, ctx->r7) = ctx->r11;
    after_65:
    // 0x80275DF4: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275DF8: bne         $v0, $zero, L_80275E0C
    if (ctx->r2 != 0) {
        // 0x80275DFC: addiu       $t5, $zero, 0x2
        ctx->r13 = ADD32(0, 0X2);
            goto L_80275E0C;
    }
    // 0x80275DFC: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x80275E00: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80275E04: b           L_80275FB8
    // 0x80275E08: sb          $t4, 0x55($a3)
    MEM_B(0X55, ctx->r7) = ctx->r12;
        goto L_80275FB8;
    // 0x80275E08: sb          $t4, 0x55($a3)
    MEM_B(0X55, ctx->r7) = ctx->r12;
L_80275E0C:
    // 0x80275E0C: b           L_80275FB8
    // 0x80275E10: sb          $t5, 0x55($a3)
    MEM_B(0X55, ctx->r7) = ctx->r13;
        goto L_80275FB8;
    // 0x80275E10: sb          $t5, 0x55($a3)
    MEM_B(0X55, ctx->r7) = ctx->r13;
L_80275E14:
    // 0x80275E14: jal         0x80035770
    // 0x80275E18: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80035770(rdram, ctx);
        goto after_66;
    // 0x80275E18: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_66:
    // 0x80275E1C: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275E20: nop

    // 0x80275E24: lb          $t6, 0x58($a3)
    ctx->r14 = MEM_B(ctx->r7, 0X58);
    // 0x80275E28: nop

    // 0x80275E2C: bne         $t6, $zero, L_80275E84
    if (ctx->r14 != 0) {
        // 0x80275E30: nop
    
            goto L_80275E84;
    }
    // 0x80275E30: nop

    // 0x80275E34: jal         0x80276EAC
    // 0x80275E38: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80276EAC(rdram, ctx);
        goto after_67;
    // 0x80275E38: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_67:
    // 0x80275E3C: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275E40: bne         $v0, $zero, L_80275E68
    if (ctx->r2 != 0) {
        // 0x80275E44: addiu       $t8, $zero, 0x4
        ctx->r24 = ADD32(0, 0X4);
            goto L_80275E68;
    }
    // 0x80275E44: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x80275E48: addiu       $t7, $zero, 0x6
    ctx->r15 = ADD32(0, 0X6);
    // 0x80275E4C: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80275E50: sb          $t7, 0x55($a3)
    MEM_B(0X55, ctx->r7) = ctx->r15;
    // 0x80275E54: addiu       $a0, $a0, 0x6F20
    ctx->r4 = ADD32(ctx->r4, 0X6F20);
    // 0x80275E58: jal         0x8002989C
    // 0x80275E5C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_8002989C(rdram, ctx);
        goto after_68;
    // 0x80275E5C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_68:
    // 0x80275E60: b           L_80275FBC
    // 0x80275E64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x80275E64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80275E68:
    // 0x80275E68: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80275E6C: sb          $t8, 0x55($a3)
    MEM_B(0X55, ctx->r7) = ctx->r24;
    // 0x80275E70: addiu       $a0, $a0, 0x7004
    ctx->r4 = ADD32(ctx->r4, 0X7004);
    // 0x80275E74: jal         0x8002989C
    // 0x80275E78: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    func_8002989C(rdram, ctx);
        goto after_69;
    // 0x80275E78: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_69:
    // 0x80275E7C: b           L_80275FBC
    // 0x80275E80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x80275E80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80275E84:
    // 0x80275E84: b           L_80275FB8
    // 0x80275E88: sb          $zero, 0x55($a3)
    MEM_B(0X55, ctx->r7) = 0;
        goto L_80275FB8;
    // 0x80275E88: sb          $zero, 0x55($a3)
    MEM_B(0X55, ctx->r7) = 0;
L_80275E8C:
    // 0x80275E8C: lbu         $t9, 0x56($a3)
    ctx->r25 = MEM_BU(ctx->r7, 0X56);
    // 0x80275E90: nop

    // 0x80275E94: sltiu       $at, $t9, 0x5
    ctx->r1 = ctx->r25 < 0X5 ? 1 : 0;
    // 0x80275E98: beq         $at, $zero, L_80275FB8
    if (ctx->r1 == 0) {
        // 0x80275E9C: sll         $t9, $t9, 2
        ctx->r25 = S32(ctx->r25 << 2);
            goto L_80275FB8;
    }
    // 0x80275E9C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80275EA0: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80275EA4: addu        $at, $at, $t9
    gpr jr_addend_80275EB0 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80275EA8: lw          $t9, 0x1DAC($at)
    ctx->r25 = ADD32(ctx->r1, 0X1DAC);
    // 0x80275EAC: nop

    // 0x80275EB0: jr          $t9
    // 0x80275EB4: nop

    switch (jr_addend_80275EB0 >> 2) {
        case 0: goto L_80275EB8; break;
        case 1: goto L_80275F1C; break;
        case 2: goto L_80275FB8; break;
        case 3: goto L_80275FB8; break;
        case 4: goto L_80275FB8; break;
        default: switch_error(__func__, 0x80275EB0, 0x80281DAC);
    }
    // 0x80275EB4: nop

L_80275EB8:
    // 0x80275EB8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80275EBC: sb          $t0, 0x58($a3)
    MEM_B(0X58, ctx->r7) = ctx->r8;
    // 0x80275EC0: lb          $a0, 0x57($a3)
    ctx->r4 = MEM_B(ctx->r7, 0X57);
    // 0x80275EC4: jal         0x80276E78
    // 0x80275EC8: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80276E78(rdram, ctx);
        goto after_70;
    // 0x80275EC8: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_70:
    // 0x80275ECC: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275ED0: bne         $v0, $zero, L_80275F04
    if (ctx->r2 != 0) {
        // 0x80275ED4: nop
    
            goto L_80275F04;
    }
    // 0x80275ED4: nop

    // 0x80275ED8: jal         0x800357AC
    // 0x80275EDC: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_800357AC(rdram, ctx);
        goto after_71;
    // 0x80275EDC: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_71:
    // 0x80275EE0: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275EE4: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x80275EE8: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80275EEC: addiu       $a0, $a0, 0x705C
    ctx->r4 = ADD32(ctx->r4, 0X705C);
    // 0x80275EF0: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80275EF4: jal         0x8002989C
    // 0x80275EF8: sb          $t1, 0x56($a3)
    MEM_B(0X56, ctx->r7) = ctx->r9;
    func_8002989C(rdram, ctx);
        goto after_72;
    // 0x80275EF8: sb          $t1, 0x56($a3)
    MEM_B(0X56, ctx->r7) = ctx->r9;
    after_72:
    // 0x80275EFC: b           L_80275FBC
    // 0x80275F00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x80275F00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80275F04:
    // 0x80275F04: jal         0x80035770
    // 0x80275F08: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80035770(rdram, ctx);
        goto after_73;
    // 0x80275F08: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_73:
    // 0x80275F0C: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275F10: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80275F14: b           L_80275FB8
    // 0x80275F18: sb          $t2, 0x56($a3)
    MEM_B(0X56, ctx->r7) = ctx->r10;
        goto L_80275FB8;
    // 0x80275F18: sb          $t2, 0x56($a3)
    MEM_B(0X56, ctx->r7) = ctx->r10;
L_80275F1C:
    // 0x80275F1C: jal         0x80035770
    // 0x80275F20: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80035770(rdram, ctx);
        goto after_74;
    // 0x80275F20: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_74:
    // 0x80275F24: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275F28: nop

    // 0x80275F2C: lb          $t3, 0x58($a3)
    ctx->r11 = MEM_B(ctx->r7, 0X58);
    // 0x80275F30: nop

    // 0x80275F34: bne         $t3, $zero, L_80275FB4
    if (ctx->r11 != 0) {
        // 0x80275F38: nop
    
            goto L_80275FB4;
    }
    // 0x80275F38: nop

    // 0x80275F3C: jal         0x80276FB0
    // 0x80275F40: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80276FB0(rdram, ctx);
        goto after_75;
    // 0x80275F40: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_75:
    // 0x80275F44: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275F48: bne         $v0, $zero, L_80275F98
    if (ctx->r2 != 0) {
        // 0x80275F4C: addiu       $t8, $zero, 0x4
        ctx->r24 = ADD32(0, 0X4);
            goto L_80275F98;
    }
    // 0x80275F4C: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x80275F50: lb          $t5, 0x57($a3)
    ctx->r13 = MEM_B(ctx->r7, 0X57);
    // 0x80275F54: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x80275F58: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80275F5C: sb          $t4, 0x56($a3)
    MEM_B(0X56, ctx->r7) = ctx->r12;
    // 0x80275F60: lui         $v0, 0x8029
    ctx->r2 = S32(0X8029 << 16);
    // 0x80275F64: addiu       $v1, $v1, 0x1CF0
    ctx->r3 = ADD32(ctx->r3, 0X1CF0);
    // 0x80275F68: addu        $v0, $v0, $t5
    ctx->r2 = ADD32(ctx->r2, ctx->r13);
    // 0x80275F6C: lb          $v0, -0x79C8($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X79C8);
    // 0x80275F70: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x80275F74: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80275F78: sb          $v0, 0x3A($t6)
    MEM_B(0X3A, ctx->r14) = ctx->r2;
    // 0x80275F7C: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x80275F80: addiu       $a0, $a0, 0x7030
    ctx->r4 = ADD32(ctx->r4, 0X7030);
    // 0x80275F84: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80275F88: jal         0x8002989C
    // 0x80275F8C: sb          $v0, 0x3B($t7)
    MEM_B(0X3B, ctx->r15) = ctx->r2;
    func_8002989C(rdram, ctx);
        goto after_76;
    // 0x80275F8C: sb          $v0, 0x3B($t7)
    MEM_B(0X3B, ctx->r15) = ctx->r2;
    after_76:
    // 0x80275F90: b           L_80275FBC
    // 0x80275F94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x80275F94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80275F98:
    // 0x80275F98: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80275F9C: sb          $t8, 0x56($a3)
    MEM_B(0X56, ctx->r7) = ctx->r24;
    // 0x80275FA0: addiu       $a0, $a0, 0x7030
    ctx->r4 = ADD32(ctx->r4, 0X7030);
    // 0x80275FA4: jal         0x8002989C
    // 0x80275FA8: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    func_8002989C(rdram, ctx);
        goto after_77;
    // 0x80275FA8: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_77:
    // 0x80275FAC: b           L_80275FBC
    // 0x80275FB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x80275FB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80275FB4:
    // 0x80275FB4: sb          $zero, 0x56($a3)
    MEM_B(0X56, ctx->r7) = 0;
L_80275FB8:
    // 0x80275FB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80275FBC:
    // 0x80275FBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80275FC0: jr          $ra
    // 0x80275FC4: nop

    return;
    // 0x80275FC4: nop

;}
RECOMP_FUNC void func_8027572C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027572C: jr          $t6
    // 0x80275730: nop

    LOOKUP_FUNC(ctx->r14)(rdram, ctx);
    return;
    // 0x80275730: nop

    // 0x80275734: lbu         $t7, 0x39($a3)
    ctx->r15 = MEM_BU(ctx->r7, 0X39);
    // 0x80275738: nop

    // 0x8027573C: sltiu       $at, $t7, 0xA
    ctx->r1 = ctx->r15 < 0XA ? 1 : 0;
    // 0x80275740: beq         $at, $zero, L_80275FB8
    if (ctx->r1 == 0) {
        // 0x80275744: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_80275FB8;
    }
    // 0x80275744: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80275748: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8027574C: addu        $at, $at, $t7
    gpr jr_addend_80275758 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80275750: lw          $t7, 0x1D58($at)
    ctx->r15 = ADD32(ctx->r1, 0X1D58);
    // 0x80275754: nop

    // 0x80275758: jr          $t7
    // 0x8027575C: nop

    switch (jr_addend_80275758 >> 2) {
        case 0: goto L_80275760; break;
        case 1: goto L_80275780; break;
        case 2: goto L_80275798; break;
        case 3: goto L_802757C4; break;
        case 4: goto L_802757DC; break;
        case 5: goto L_8027580C; break;
        case 6: goto L_8027583C; break;
        case 7: goto L_8027586C; break;
        case 8: goto L_802758FC; break;
        case 9: goto L_8027598C; break;
        default: switch_error(__func__, 0x80275758, 0x80281D58);
    }
    // 0x8027575C: nop

L_80275760:
    // 0x80275760: jal         0x80035770
    // 0x80275764: nop

    func_80035770(rdram, ctx);
        goto after_0;
    // 0x80275764: nop

    after_0:
    // 0x80275768: jal         0x80276DEC
    // 0x8027576C: nop

    func_80276DEC(rdram, ctx);
        goto after_1;
    // 0x8027576C: nop

    after_1:
    // 0x80275770: jal         0x800373A4
    // 0x80275774: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800373A4(rdram, ctx);
        goto after_2;
    // 0x80275774: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x80275778: b           L_80275FBC
    // 0x8027577C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x8027577C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80275780:
    // 0x80275780: jal         0x80035770
    // 0x80275784: nop

    func_80035770(rdram, ctx);
        goto after_3;
    // 0x80275784: nop

    after_3:
    // 0x80275788: jal         0x8027773C
    // 0x8027578C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8027773C(rdram, ctx);
        goto after_4;
    // 0x8027578C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_4:
    // 0x80275790: b           L_80275FBC
    // 0x80275794: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x80275794: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80275798:
    // 0x80275798: jal         0x80035770
    // 0x8027579C: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80035770(rdram, ctx);
        goto after_5;
    // 0x8027579C: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_5:
    // 0x802757A0: jal         0x8027773C
    // 0x802757A4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_8027773C(rdram, ctx);
        goto after_6;
    // 0x802757A4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_6:
    // 0x802757A8: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x802757AC: addiu       $t8, $zero, 0xB
    ctx->r24 = ADD32(0, 0XB);
    // 0x802757B0: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802757B4: sb          $t8, 0x3D($a3)
    MEM_B(0X3D, ctx->r7) = ctx->r24;
    // 0x802757B8: sb          $zero, 0x3F($a3)
    MEM_B(0X3F, ctx->r7) = 0;
    // 0x802757BC: b           L_80275FB8
    // 0x802757C0: sb          $t9, 0x53($a3)
    MEM_B(0X53, ctx->r7) = ctx->r25;
        goto L_80275FB8;
    // 0x802757C0: sb          $t9, 0x53($a3)
    MEM_B(0X53, ctx->r7) = ctx->r25;
L_802757C4:
    // 0x802757C4: jal         0x80035770
    // 0x802757C8: nop

    func_80035770(rdram, ctx);
        goto after_7;
    // 0x802757C8: nop

    after_7:
    // 0x802757CC: jal         0x8027773C
    // 0x802757D0: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_8027773C(rdram, ctx);
        goto after_8;
    // 0x802757D0: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_8:
    // 0x802757D4: b           L_80275FBC
    // 0x802757D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x802757D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802757DC:
    // 0x802757DC: jal         0x80035770
    // 0x802757E0: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80035770(rdram, ctx);
        goto after_9;
    // 0x802757E0: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_9:
    // 0x802757E4: jal         0x8027784C
    // 0x802757E8: nop

    func_8027784C(rdram, ctx);
        goto after_10;
    // 0x802757E8: nop

    after_10:
    // 0x802757EC: jal         0x8027773C
    // 0x802757F0: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_8027773C(rdram, ctx);
        goto after_11;
    // 0x802757F0: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_11:
    // 0x802757F4: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x802757F8: addiu       $t0, $zero, 0xB
    ctx->r8 = ADD32(0, 0XB);
    // 0x802757FC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80275800: sb          $t0, 0x44($a3)
    MEM_B(0X44, ctx->r7) = ctx->r8;
    // 0x80275804: b           L_80275FB8
    // 0x80275808: sb          $t1, 0x53($a3)
    MEM_B(0X53, ctx->r7) = ctx->r9;
        goto L_80275FB8;
    // 0x80275808: sb          $t1, 0x53($a3)
    MEM_B(0X53, ctx->r7) = ctx->r9;
L_8027580C:
    // 0x8027580C: jal         0x80035770
    // 0x80275810: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80035770(rdram, ctx);
        goto after_12;
    // 0x80275810: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_12:
    // 0x80275814: jal         0x8027773C
    // 0x80275818: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_8027773C(rdram, ctx);
        goto after_13;
    // 0x80275818: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_13:
    // 0x8027581C: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275820: addiu       $t2, $zero, 0xB
    ctx->r10 = ADD32(0, 0XB);
    // 0x80275824: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80275828: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8027582C: sb          $t2, 0x46($a3)
    MEM_B(0X46, ctx->r7) = ctx->r10;
    // 0x80275830: sb          $t3, 0x3F($a3)
    MEM_B(0X3F, ctx->r7) = ctx->r11;
    // 0x80275834: b           L_80275FB8
    // 0x80275838: sb          $t4, 0x53($a3)
    MEM_B(0X53, ctx->r7) = ctx->r12;
        goto L_80275FB8;
    // 0x80275838: sb          $t4, 0x53($a3)
    MEM_B(0X53, ctx->r7) = ctx->r12;
L_8027583C:
    // 0x8027583C: jal         0x80035770
    // 0x80275840: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80035770(rdram, ctx);
        goto after_14;
    // 0x80275840: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_14:
    // 0x80275844: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275848: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8027584C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x80275850: sb          $t5, 0x4D($a3)
    MEM_B(0X4D, ctx->r7) = ctx->r13;
    // 0x80275854: jal         0x8027773C
    // 0x80275858: sb          $zero, 0x4E($a3)
    MEM_B(0X4E, ctx->r7) = 0;
    func_8027773C(rdram, ctx);
        goto after_15;
    // 0x80275858: sb          $zero, 0x4E($a3)
    MEM_B(0X4E, ctx->r7) = 0;
    after_15:
    // 0x8027585C: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275860: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80275864: b           L_80275FB8
    // 0x80275868: sb          $t6, 0x52($a3)
    MEM_B(0X52, ctx->r7) = ctx->r14;
        goto L_80275FB8;
    // 0x80275868: sb          $t6, 0x52($a3)
    MEM_B(0X52, ctx->r7) = ctx->r14;
L_8027586C:
    // 0x8027586C: jal         0x80276E4C
    // 0x80275870: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80276E4C(rdram, ctx);
        goto after_16;
    // 0x80275870: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_16:
    // 0x80275874: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275878: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8027587C: lb          $t7, 0x5A($a3)
    ctx->r15 = MEM_B(ctx->r7, 0X5A);
    // 0x80275880: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x80275884: beq         $t7, $at, L_802758EC
    if (ctx->r15 == ctx->r1) {
        // 0x80275888: nop
    
            goto L_802758EC;
    }
    // 0x80275888: nop

    // 0x8027588C: jal         0x8027773C
    // 0x80275890: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_8027773C(rdram, ctx);
        goto after_17;
    // 0x80275890: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_17:
    // 0x80275894: jal         0x80035770
    // 0x80275898: nop

    func_80035770(rdram, ctx);
        goto after_18;
    // 0x80275898: nop

    after_18:
    // 0x8027589C: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x802758A0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802758A4: lb          $t8, 0x5B($a3)
    ctx->r24 = MEM_B(ctx->r7, 0X5B);
    // 0x802758A8: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
    // 0x802758AC: bne         $t8, $at, L_802758CC
    if (ctx->r24 != ctx->r1) {
        // 0x802758B0: lui         $t1, 0x8029
        ctx->r9 = S32(0X8029 << 16);
            goto L_802758CC;
    }
    // 0x802758B0: lui         $t1, 0x8029
    ctx->r9 = S32(0X8029 << 16);
    // 0x802758B4: jal         0x80276E4C
    // 0x802758B8: sb          $t9, 0x55($a3)
    MEM_B(0X55, ctx->r7) = ctx->r25;
    func_80276E4C(rdram, ctx);
        goto after_19;
    // 0x802758B8: sb          $t9, 0x55($a3)
    MEM_B(0X55, ctx->r7) = ctx->r25;
    after_19:
    // 0x802758BC: jal         0x80277340
    // 0x802758C0: nop

    func_80277340(rdram, ctx);
        goto after_20;
    // 0x802758C0: nop

    after_20:
    // 0x802758C4: b           L_80275FBC
    // 0x802758C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x802758C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802758CC:
    // 0x802758CC: lb          $t0, 0x57($a3)
    ctx->r8 = MEM_B(ctx->r7, 0X57);
    // 0x802758D0: sb          $zero, 0x55($a3)
    MEM_B(0X55, ctx->r7) = 0;
    // 0x802758D4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x802758D8: lbu         $t1, -0x79C8($t1)
    ctx->r9 = MEM_BU(ctx->r9, -0X79C8);
    // 0x802758DC: jal         0x80277340
    // 0x802758E0: sb          $t1, 0x59($a3)
    MEM_B(0X59, ctx->r7) = ctx->r9;
    func_80277340(rdram, ctx);
        goto after_21;
    // 0x802758E0: sb          $t1, 0x59($a3)
    MEM_B(0X59, ctx->r7) = ctx->r9;
    after_21:
    // 0x802758E4: b           L_80275FBC
    // 0x802758E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x802758E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802758EC:
    // 0x802758EC: jal         0x800357AC
    // 0x802758F0: nop

    func_800357AC(rdram, ctx);
        goto after_22;
    // 0x802758F0: nop

    after_22:
    // 0x802758F4: b           L_80275FBC
    // 0x802758F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x802758F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802758FC:
    // 0x802758FC: jal         0x80276E4C
    // 0x80275900: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80276E4C(rdram, ctx);
        goto after_23;
    // 0x80275900: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_23:
    // 0x80275904: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275908: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8027590C: lb          $t2, 0x5A($a3)
    ctx->r10 = MEM_B(ctx->r7, 0X5A);
    // 0x80275910: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x80275914: beq         $t2, $at, L_8027597C
    if (ctx->r10 == ctx->r1) {
        // 0x80275918: nop
    
            goto L_8027597C;
    }
    // 0x80275918: nop

    // 0x8027591C: jal         0x8027773C
    // 0x80275920: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_8027773C(rdram, ctx);
        goto after_24;
    // 0x80275920: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_24:
    // 0x80275924: jal         0x80035770
    // 0x80275928: nop

    func_80035770(rdram, ctx);
        goto after_25;
    // 0x80275928: nop

    after_25:
    // 0x8027592C: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275930: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80275934: lb          $t3, 0x5B($a3)
    ctx->r11 = MEM_B(ctx->r7, 0X5B);
    // 0x80275938: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x8027593C: bne         $t3, $at, L_8027595C
    if (ctx->r11 != ctx->r1) {
        // 0x80275940: lui         $t6, 0x8029
        ctx->r14 = S32(0X8029 << 16);
            goto L_8027595C;
    }
    // 0x80275940: lui         $t6, 0x8029
    ctx->r14 = S32(0X8029 << 16);
    // 0x80275944: jal         0x80276E4C
    // 0x80275948: sb          $t4, 0x56($a3)
    MEM_B(0X56, ctx->r7) = ctx->r12;
    func_80276E4C(rdram, ctx);
        goto after_26;
    // 0x80275948: sb          $t4, 0x56($a3)
    MEM_B(0X56, ctx->r7) = ctx->r12;
    after_26:
    // 0x8027594C: jal         0x80277340
    // 0x80275950: nop

    func_80277340(rdram, ctx);
        goto after_27;
    // 0x80275950: nop

    after_27:
    // 0x80275954: b           L_80275FBC
    // 0x80275958: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x80275958: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027595C:
    // 0x8027595C: lb          $t5, 0x57($a3)
    ctx->r13 = MEM_B(ctx->r7, 0X57);
    // 0x80275960: sb          $zero, 0x56($a3)
    MEM_B(0X56, ctx->r7) = 0;
    // 0x80275964: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80275968: lbu         $t6, -0x79C8($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X79C8);
    // 0x8027596C: jal         0x80277340
    // 0x80275970: sb          $t6, 0x59($a3)
    MEM_B(0X59, ctx->r7) = ctx->r14;
    func_80277340(rdram, ctx);
        goto after_28;
    // 0x80275970: sb          $t6, 0x59($a3)
    MEM_B(0X59, ctx->r7) = ctx->r14;
    after_28:
    // 0x80275974: b           L_80275FBC
    // 0x80275978: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x80275978: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027597C:
    // 0x8027597C: jal         0x800357AC
    // 0x80275980: nop

    func_800357AC(rdram, ctx);
        goto after_29;
    // 0x80275980: nop

    after_29:
    // 0x80275984: b           L_80275FBC
    // 0x80275988: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x80275988: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027598C:
    // 0x8027598C: jal         0x80035770
    // 0x80275990: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80035770(rdram, ctx);
        goto after_30;
    // 0x80275990: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_30:
    // 0x80275994: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275998: addiu       $t7, $zero, 0x9
    ctx->r15 = ADD32(0, 0X9);
    // 0x8027599C: sb          $t7, 0x38($a3)
    MEM_B(0X38, ctx->r7) = ctx->r15;
    // 0x802759A0: sb          $zero, 0x49($a3)
    MEM_B(0X49, ctx->r7) = 0;
    // 0x802759A4: b           L_80275FB8
    // 0x802759A8: sb          $zero, 0x4A($a3)
    MEM_B(0X4A, ctx->r7) = 0;
        goto L_80275FB8;
    // 0x802759A8: sb          $zero, 0x4A($a3)
    MEM_B(0X4A, ctx->r7) = 0;
    // 0x802759AC: jal         0x80035770
    // 0x802759B0: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80035770(rdram, ctx);
        goto after_31;
    // 0x802759B0: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_31:
    // 0x802759B4: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x802759B8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802759BC: lb          $v0, 0x49($a3)
    ctx->r2 = MEM_B(ctx->r7, 0X49);
    // 0x802759C0: nop

    // 0x802759C4: beq         $v0, $zero, L_802759DC
    if (ctx->r2 == 0) {
        // 0x802759C8: nop
    
            goto L_802759DC;
    }
    // 0x802759C8: nop

    // 0x802759CC: beq         $v0, $v1, L_802759EC
    if (ctx->r2 == ctx->r3) {
        // 0x802759D0: nop
    
            goto L_802759EC;
    }
    // 0x802759D0: nop

    // 0x802759D4: b           L_80275FBC
    // 0x802759D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x802759D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802759DC:
    // 0x802759DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802759E0: sb          $v0, 0x49($a3)
    MEM_B(0X49, ctx->r7) = ctx->r2;
    // 0x802759E4: b           L_80275FB8
    // 0x802759E8: sb          $v0, 0x4B($a3)
    MEM_B(0X4B, ctx->r7) = ctx->r2;
        goto L_80275FB8;
    // 0x802759E8: sb          $v0, 0x4B($a3)
    MEM_B(0X4B, ctx->r7) = ctx->r2;
L_802759EC:
    // 0x802759EC: lb          $v0, 0x4B($a3)
    ctx->r2 = MEM_B(ctx->r7, 0X4B);
    // 0x802759F0: nop

    // 0x802759F4: beq         $v0, $zero, L_80275A0C
    if (ctx->r2 == 0) {
        // 0x802759F8: nop
    
            goto L_80275A0C;
    }
    // 0x802759F8: nop

    // 0x802759FC: beq         $v0, $v1, L_80275A98
    if (ctx->r2 == ctx->r3) {
        // 0x80275A00: nop
    
            goto L_80275A98;
    }
    // 0x80275A00: nop

    // 0x80275A04: b           L_80275FBC
    // 0x80275A08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x80275A08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80275A0C:
    // 0x80275A0C: lbu         $t8, 0x4A($a3)
    ctx->r24 = MEM_BU(ctx->r7, 0X4A);
    // 0x80275A10: nop

    // 0x80275A14: sltiu       $at, $t8, 0x5
    ctx->r1 = ctx->r24 < 0X5 ? 1 : 0;
    // 0x80275A18: beq         $at, $zero, L_80275A80
    if (ctx->r1 == 0) {
        // 0x80275A1C: sll         $t8, $t8, 2
        ctx->r24 = S32(ctx->r24 << 2);
            goto L_80275A80;
    }
    // 0x80275A1C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80275A20: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80275A24: addu        $at, $at, $t8
    gpr jr_addend_80275A30 = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80275A28: lw          $t8, 0x1D80($at)
    ctx->r24 = ADD32(ctx->r1, 0X1D80);
    // 0x80275A2C: nop

    // 0x80275A30: jr          $t8
    // 0x80275A34: nop

    switch (jr_addend_80275A30 >> 2) {
        case 0: goto L_80275A38; break;
        case 1: goto L_80275A48; break;
        case 2: goto L_80275A58; break;
        case 3: goto L_80275A68; break;
        case 4: goto L_80275A78; break;
        default: switch_error(__func__, 0x80275A30, 0x80281D80);
    }
    // 0x80275A34: nop

L_80275A38:
    // 0x80275A38: jal         0x80277644
    // 0x80275A3C: nop

    func_80277644(rdram, ctx);
        goto after_32;
    // 0x80275A3C: nop

    after_32:
    // 0x80275A40: b           L_80275A80
    // 0x80275A44: nop

        goto L_80275A80;
    // 0x80275A44: nop

L_80275A48:
    // 0x80275A48: jal         0x80277420
    // 0x80275A4C: nop

    func_80277420(rdram, ctx);
        goto after_33;
    // 0x80275A4C: nop

    after_33:
    // 0x80275A50: b           L_80275A80
    // 0x80275A54: nop

        goto L_80275A80;
    // 0x80275A54: nop

L_80275A58:
    // 0x80275A58: jal         0x80277478
    // 0x80275A5C: nop

    func_80277478(rdram, ctx);
        goto after_34;
    // 0x80275A5C: nop

    after_34:
    // 0x80275A60: b           L_80275A80
    // 0x80275A64: nop

        goto L_80275A80;
    // 0x80275A64: nop

L_80275A68:
    // 0x80275A68: jal         0x8027753C
    // 0x80275A6C: nop

    func_8027753C(rdram, ctx);
        goto after_35;
    // 0x80275A6C: nop

    after_35:
    // 0x80275A70: b           L_80275A80
    // 0x80275A74: nop

        goto L_80275A80;
    // 0x80275A74: nop

L_80275A78:
    // 0x80275A78: jal         0x802775C0
    // 0x80275A7C: nop

    func_802775C0(rdram, ctx);
        goto after_36;
    // 0x80275A7C: nop

    after_36:
L_80275A80:
    // 0x80275A80: jal         0x802771FC
    // 0x80275A84: nop

    func_802771FC(rdram, ctx);
        goto after_37;
    // 0x80275A84: nop

    after_37:
    // 0x80275A88: jal         0x8027767C
    // 0x80275A8C: nop

    func_8027767C(rdram, ctx);
        goto after_38;
    // 0x80275A8C: nop

    after_38:
    // 0x80275A90: b           L_80275FBC
    // 0x80275A94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x80275A94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80275A98:
    // 0x80275A98: b           L_80275FB8
    // 0x80275A9C: sb          $zero, 0x38($a3)
    MEM_B(0X38, ctx->r7) = 0;
        goto L_80275FB8;
    // 0x80275A9C: sb          $zero, 0x38($a3)
    MEM_B(0X38, ctx->r7) = 0;
    // 0x80275AA0: jal         0x80035770
    // 0x80275AA4: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80035770(rdram, ctx);
        goto after_39;
    // 0x80275AA4: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_39:
    // 0x80275AA8: jal         0x802777C8
    // 0x80275AAC: nop

    func_802777C8(rdram, ctx);
        goto after_40;
    // 0x80275AAC: nop

    after_40:
    // 0x80275AB0: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275AB4: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80275AB8: lb          $t9, 0x3A($a3)
    ctx->r25 = MEM_B(ctx->r7, 0X3A);
    // 0x80275ABC: addiu       $a0, $a0, 0x5510
    ctx->r4 = ADD32(ctx->r4, 0X5510);
    // 0x80275AC0: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x80275AC4: jal         0x8002989C
    // 0x80275AC8: sb          $t9, 0x3B($a3)
    MEM_B(0X3B, ctx->r7) = ctx->r25;
    func_8002989C(rdram, ctx);
        goto after_41;
    // 0x80275AC8: sb          $t9, 0x3B($a3)
    MEM_B(0X3B, ctx->r7) = ctx->r25;
    after_41:
    // 0x80275ACC: b           L_80275FBC
    // 0x80275AD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x80275AD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80275AD4: jal         0x80035770
    // 0x80275AD8: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80035770(rdram, ctx);
        goto after_42;
    // 0x80275AD8: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_42:
    // 0x80275ADC: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275AE0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80275AE4: lb          $v0, 0x3E($a3)
    ctx->r2 = MEM_B(ctx->r7, 0X3E);
    // 0x80275AE8: nop

    // 0x80275AEC: beq         $v0, $zero, L_80275B04
    if (ctx->r2 == 0) {
        // 0x80275AF0: nop
    
            goto L_80275B04;
    }
    // 0x80275AF0: nop

    // 0x80275AF4: beq         $v0, $at, L_80275B90
    if (ctx->r2 == ctx->r1) {
        // 0x80275AF8: addiu       $a0, $zero, 0xF00
        ctx->r4 = ADD32(0, 0XF00);
            goto L_80275B90;
    }
    // 0x80275AF8: addiu       $a0, $zero, 0xF00
    ctx->r4 = ADD32(0, 0XF00);
    // 0x80275AFC: b           L_80275FBC
    // 0x80275B00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x80275B00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80275B04:
    // 0x80275B04: lb          $t0, 0x3D($a3)
    ctx->r8 = MEM_B(ctx->r7, 0X3D);
    // 0x80275B08: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x80275B0C: bne         $t0, $at, L_80275B2C
    if (ctx->r8 != ctx->r1) {
        // 0x80275B10: addiu       $a0, $zero, 0xF00
        ctx->r4 = ADD32(0, 0XF00);
            goto L_80275B2C;
    }
    // 0x80275B10: addiu       $a0, $zero, 0xF00
    ctx->r4 = ADD32(0, 0XF00);
    // 0x80275B14: jal         0x802777C8
    // 0x80275B18: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_802777C8(rdram, ctx);
        goto after_43;
    // 0x80275B18: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_43:
    // 0x80275B1C: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275B20: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80275B24: b           L_80275FB8
    // 0x80275B28: sb          $t1, 0x54($a3)
    MEM_B(0X54, ctx->r7) = ctx->r9;
        goto L_80275FB8;
    // 0x80275B28: sb          $t1, 0x54($a3)
    MEM_B(0X54, ctx->r7) = ctx->r9;
L_80275B2C:
    // 0x80275B2C: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x80275B30: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80275B34: jal         0x80049E40
    // 0x80275B38: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80049E40(rdram, ctx);
        goto after_44;
    // 0x80275B38: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_44:
    // 0x80275B3C: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x80275B40: lb          $t2, -0x326C($t2)
    ctx->r10 = MEM_B(ctx->r10, -0X326C);
    // 0x80275B44: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x80275B48: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80275B4C: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x80275B50: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x80275B54: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x80275B58: addiu       $t5, $t5, -0x3770
    ctx->r13 = ADD32(ctx->r13, -0X3770);
    // 0x80275B5C: addu        $t4, $t3, $at
    ctx->r12 = ADD32(ctx->r11, ctx->r1);
    // 0x80275B60: addu        $v0, $t4, $t5
    ctx->r2 = ADD32(ctx->r12, ctx->r13);
    // 0x80275B64: lbu         $t6, 0x70A($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X70A);
    // 0x80275B68: nop

    // 0x80275B6C: ori         $t7, $t6, 0x2
    ctx->r15 = ctx->r14 | 0X2;
    // 0x80275B70: jal         0x802773BC
    // 0x80275B74: sb          $t7, 0x70A($v0)
    MEM_B(0X70A, ctx->r2) = ctx->r15;
    func_802773BC(rdram, ctx);
        goto after_45;
    // 0x80275B74: sb          $t7, 0x70A($v0)
    MEM_B(0X70A, ctx->r2) = ctx->r15;
    after_45:
    // 0x80275B78: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275B7C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80275B80: jal         0x802771FC
    // 0x80275B84: sb          $t8, 0x3E($a3)
    MEM_B(0X3E, ctx->r7) = ctx->r24;
    func_802771FC(rdram, ctx);
        goto after_46;
    // 0x80275B84: sb          $t8, 0x3E($a3)
    MEM_B(0X3E, ctx->r7) = ctx->r24;
    after_46:
    // 0x80275B88: b           L_80275FBC
    // 0x80275B8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x80275B8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80275B90:
    // 0x80275B90: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x80275B94: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    // 0x80275B98: jal         0x80049E40
    // 0x80275B9C: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80049E40(rdram, ctx);
        goto after_47;
    // 0x80275B9C: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_47:
    // 0x80275BA0: jal         0x802772AC
    // 0x80275BA4: nop

    func_802772AC(rdram, ctx);
        goto after_48;
    // 0x80275BA4: nop

    after_48:
    // 0x80275BA8: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275BAC: b           L_80275FB8
    // 0x80275BB0: sb          $zero, 0x3E($a3)
    MEM_B(0X3E, ctx->r7) = 0;
        goto L_80275FB8;
    // 0x80275BB0: sb          $zero, 0x3E($a3)
    MEM_B(0X3E, ctx->r7) = 0;
    // 0x80275BB4: jal         0x80035770
    // 0x80275BB8: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80035770(rdram, ctx);
        goto after_49;
    // 0x80275BB8: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_49:
    // 0x80275BBC: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275BC0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80275BC4: lb          $v0, 0x42($a3)
    ctx->r2 = MEM_B(ctx->r7, 0X42);
    // 0x80275BC8: nop

    // 0x80275BCC: beq         $v0, $zero, L_80275BF0
    if (ctx->r2 == 0) {
        // 0x80275BD0: nop
    
            goto L_80275BF0;
    }
    // 0x80275BD0: nop

    // 0x80275BD4: beq         $v0, $at, L_80275C00
    if (ctx->r2 == ctx->r1) {
        // 0x80275BD8: addiu       $a0, $zero, 0xF00
        ctx->r4 = ADD32(0, 0XF00);
            goto L_80275C00;
    }
    // 0x80275BD8: addiu       $a0, $zero, 0xF00
    ctx->r4 = ADD32(0, 0XF00);
    // 0x80275BDC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80275BE0: beq         $v0, $at, L_80275C64
    if (ctx->r2 == ctx->r1) {
        // 0x80275BE4: addiu       $a0, $zero, 0xF00
        ctx->r4 = ADD32(0, 0XF00);
            goto L_80275C64;
    }
    // 0x80275BE4: addiu       $a0, $zero, 0xF00
    ctx->r4 = ADD32(0, 0XF00);
    // 0x80275BE8: b           L_80275FBC
    // 0x80275BEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x80275BEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80275BF0:
    // 0x80275BF0: jal         0x802777C8
    // 0x80275BF4: nop

    func_802777C8(rdram, ctx);
        goto after_50;
    // 0x80275BF4: nop

    after_50:
    // 0x80275BF8: b           L_80275FBC
    // 0x80275BFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x80275BFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80275C00:
    // 0x80275C00: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x80275C04: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80275C08: jal         0x80049E40
    // 0x80275C0C: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80049E40(rdram, ctx);
        goto after_51;
    // 0x80275C0C: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_51:
    // 0x80275C10: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x80275C14: lb          $t9, -0x326C($t9)
    ctx->r25 = MEM_B(ctx->r25, -0X326C);
    // 0x80275C18: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x80275C1C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80275C20: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x80275C24: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x80275C28: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x80275C2C: addiu       $t2, $t2, -0x3770
    ctx->r10 = ADD32(ctx->r10, -0X3770);
    // 0x80275C30: addu        $t1, $t0, $at
    ctx->r9 = ADD32(ctx->r8, ctx->r1);
    // 0x80275C34: addu        $v0, $t1, $t2
    ctx->r2 = ADD32(ctx->r9, ctx->r10);
    // 0x80275C38: lbu         $t3, 0x70A($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X70A);
    // 0x80275C3C: nop

    // 0x80275C40: ori         $t4, $t3, 0x2
    ctx->r12 = ctx->r11 | 0X2;
    // 0x80275C44: jal         0x802773BC
    // 0x80275C48: sb          $t4, 0x70A($v0)
    MEM_B(0X70A, ctx->r2) = ctx->r12;
    func_802773BC(rdram, ctx);
        goto after_52;
    // 0x80275C48: sb          $t4, 0x70A($v0)
    MEM_B(0X70A, ctx->r2) = ctx->r12;
    after_52:
    // 0x80275C4C: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275C50: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x80275C54: jal         0x802771FC
    // 0x80275C58: sb          $t5, 0x42($a3)
    MEM_B(0X42, ctx->r7) = ctx->r13;
    func_802771FC(rdram, ctx);
        goto after_53;
    // 0x80275C58: sb          $t5, 0x42($a3)
    MEM_B(0X42, ctx->r7) = ctx->r13;
    after_53:
    // 0x80275C5C: b           L_80275FBC
    // 0x80275C60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x80275C60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80275C64:
    // 0x80275C64: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x80275C68: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    // 0x80275C6C: jal         0x80049E40
    // 0x80275C70: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80049E40(rdram, ctx);
        goto after_54;
    // 0x80275C70: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_54:
    // 0x80275C74: jal         0x802772AC
    // 0x80275C78: nop

    func_802772AC(rdram, ctx);
        goto after_55;
    // 0x80275C78: nop

    after_55:
    // 0x80275C7C: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275C80: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80275C84: b           L_80275FB8
    // 0x80275C88: sb          $t6, 0x42($a3)
    MEM_B(0X42, ctx->r7) = ctx->r14;
        goto L_80275FB8;
    // 0x80275C88: sb          $t6, 0x42($a3)
    MEM_B(0X42, ctx->r7) = ctx->r14;
    // 0x80275C8C: lb          $t7, 0x44($a3)
    ctx->r15 = MEM_B(ctx->r7, 0X44);
    // 0x80275C90: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x80275C94: bne         $t7, $at, L_80275FBC
    if (ctx->r15 != ctx->r1) {
        // 0x80275C98: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80275FBC;
    }
    // 0x80275C98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80275C9C: jal         0x80035770
    // 0x80275CA0: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80035770(rdram, ctx);
        goto after_56;
    // 0x80275CA0: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_56:
    // 0x80275CA4: jal         0x802777C8
    // 0x80275CA8: nop

    func_802777C8(rdram, ctx);
        goto after_57;
    // 0x80275CA8: nop

    after_57:
    // 0x80275CAC: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275CB0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80275CB4: b           L_80275FB8
    // 0x80275CB8: sb          $t8, 0x54($a3)
    MEM_B(0X54, ctx->r7) = ctx->r24;
        goto L_80275FB8;
    // 0x80275CB8: sb          $t8, 0x54($a3)
    MEM_B(0X54, ctx->r7) = ctx->r24;
    // 0x80275CBC: jal         0x80035770
    // 0x80275CC0: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80035770(rdram, ctx);
        goto after_58;
    // 0x80275CC0: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_58:
    // 0x80275CC4: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275CC8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80275CCC: lb          $v0, 0x45($a3)
    ctx->r2 = MEM_B(ctx->r7, 0X45);
    // 0x80275CD0: nop

    // 0x80275CD4: beq         $v0, $zero, L_80275CEC
    if (ctx->r2 == 0) {
        // 0x80275CD8: nop
    
            goto L_80275CEC;
    }
    // 0x80275CD8: nop

    // 0x80275CDC: beq         $v0, $at, L_80275D30
    if (ctx->r2 == ctx->r1) {
        // 0x80275CE0: nop
    
            goto L_80275D30;
    }
    // 0x80275CE0: nop

    // 0x80275CE4: b           L_80275D44
    // 0x80275CE8: nop

        goto L_80275D44;
    // 0x80275CE8: nop

L_80275CEC:
    // 0x80275CEC: lb          $t9, 0x46($a3)
    ctx->r25 = MEM_B(ctx->r7, 0X46);
    // 0x80275CF0: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x80275CF4: bne         $t9, $at, L_80275D14
    if (ctx->r25 != ctx->r1) {
        // 0x80275CF8: nop
    
            goto L_80275D14;
    }
    // 0x80275CF8: nop

    // 0x80275CFC: jal         0x802777C8
    // 0x80275D00: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_802777C8(rdram, ctx);
        goto after_59;
    // 0x80275D00: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_59:
    // 0x80275D04: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275D08: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80275D0C: b           L_80275D44
    // 0x80275D10: sb          $t0, 0x54($a3)
    MEM_B(0X54, ctx->r7) = ctx->r8;
        goto L_80275D44;
    // 0x80275D10: sb          $t0, 0x54($a3)
    MEM_B(0X54, ctx->r7) = ctx->r8;
L_80275D14:
    // 0x80275D14: jal         0x80277908
    // 0x80275D18: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80277908(rdram, ctx);
        goto after_60;
    // 0x80275D18: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_60:
    // 0x80275D1C: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275D20: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80275D24: sb          $zero, 0x48($a3)
    MEM_B(0X48, ctx->r7) = 0;
    // 0x80275D28: b           L_80275D44
    // 0x80275D2C: sb          $t1, 0x45($a3)
    MEM_B(0X45, ctx->r7) = ctx->r9;
        goto L_80275D44;
    // 0x80275D2C: sb          $t1, 0x45($a3)
    MEM_B(0X45, ctx->r7) = ctx->r9;
L_80275D30:
    // 0x80275D30: jal         0x8027B068
    // 0x80275D34: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_8027B068(rdram, ctx);
        goto after_61;
    // 0x80275D34: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_61:
    // 0x80275D38: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275D3C: nop

    // 0x80275D40: sb          $zero, 0x45($a3)
    MEM_B(0X45, ctx->r7) = 0;
L_80275D44:
    // 0x80275D44: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80275D48: addiu       $a0, $a0, 0x5510
    ctx->r4 = ADD32(ctx->r4, 0X5510);
    // 0x80275D4C: jal         0x8002989C
    // 0x80275D50: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_8002989C(rdram, ctx);
        goto after_62;
    // 0x80275D50: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_62:
    // 0x80275D54: b           L_80275FBC
    // 0x80275D58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x80275D58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80275D5C: jal         0x80035770
    // 0x80275D60: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80035770(rdram, ctx);
        goto after_63;
    // 0x80275D60: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_63:
    // 0x80275D64: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275D68: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80275D6C: lb          $v0, 0x4C($a3)
    ctx->r2 = MEM_B(ctx->r7, 0X4C);
    // 0x80275D70: nop

    // 0x80275D74: beq         $v0, $zero, L_80275D8C
    if (ctx->r2 == 0) {
        // 0x80275D78: nop
    
            goto L_80275D8C;
    }
    // 0x80275D78: nop

    // 0x80275D7C: beq         $v0, $v1, L_80275DA0
    if (ctx->r2 == ctx->r3) {
        // 0x80275D80: nop
    
            goto L_80275DA0;
    }
    // 0x80275D80: nop

    // 0x80275D84: b           L_80275FBC
    // 0x80275D88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x80275D88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80275D8C:
    // 0x80275D8C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80275D90: sb          $v0, 0x4C($a3)
    MEM_B(0X4C, ctx->r7) = ctx->r2;
    // 0x80275D94: sb          $zero, 0x4E($a3)
    MEM_B(0X4E, ctx->r7) = 0;
    // 0x80275D98: b           L_80275FB8
    // 0x80275D9C: sb          $v0, 0x4F($a3)
    MEM_B(0X4F, ctx->r7) = ctx->r2;
        goto L_80275FB8;
    // 0x80275D9C: sb          $v0, 0x4F($a3)
    MEM_B(0X4F, ctx->r7) = ctx->r2;
L_80275DA0:
    // 0x80275DA0: sb          $zero, 0x4C($a3)
    MEM_B(0X4C, ctx->r7) = 0;
    // 0x80275DA4: b           L_80275FB8
    // 0x80275DA8: sb          $v1, 0x50($a3)
    MEM_B(0X50, ctx->r7) = ctx->r3;
        goto L_80275FB8;
    // 0x80275DA8: sb          $v1, 0x50($a3)
    MEM_B(0X50, ctx->r7) = ctx->r3;
    // 0x80275DAC: lbu         $t2, 0x55($a3)
    ctx->r10 = MEM_BU(ctx->r7, 0X55);
    // 0x80275DB0: nop

    // 0x80275DB4: sltiu       $at, $t2, 0x6
    ctx->r1 = ctx->r10 < 0X6 ? 1 : 0;
    // 0x80275DB8: beq         $at, $zero, L_80275FB8
    if (ctx->r1 == 0) {
        // 0x80275DBC: sll         $t2, $t2, 2
        ctx->r10 = S32(ctx->r10 << 2);
            goto L_80275FB8;
    }
    // 0x80275DBC: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80275DC0: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80275DC4: addu        $at, $at, $t2
    gpr jr_addend_80275DD0 = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80275DC8: lw          $t2, 0x1D94($at)
    ctx->r10 = ADD32(ctx->r1, 0X1D94);
    // 0x80275DCC: nop

    // 0x80275DD0: jr          $t2
    // 0x80275DD4: nop

    switch (jr_addend_80275DD0 >> 2) {
        case 0: goto L_80275DD8; break;
        case 1: goto L_80275E14; break;
        case 2: goto L_80275E14; break;
        case 3: goto L_80275FB8; break;
        case 4: goto L_80275FB8; break;
        case 5: goto L_80275FB8; break;
        default: switch_error(__func__, 0x80275DD0, 0x80281D94);
    }
    // 0x80275DD4: nop

L_80275DD8:
    // 0x80275DD8: jal         0x80035770
    // 0x80275DDC: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80035770(rdram, ctx);
        goto after_64;
    // 0x80275DDC: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_64:
    // 0x80275DE0: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275DE4: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80275DE8: lb          $a0, 0x57($a3)
    ctx->r4 = MEM_B(ctx->r7, 0X57);
    // 0x80275DEC: jal         0x80276E78
    // 0x80275DF0: sb          $t3, 0x58($a3)
    MEM_B(0X58, ctx->r7) = ctx->r11;
    func_80276E78(rdram, ctx);
        goto after_65;
    // 0x80275DF0: sb          $t3, 0x58($a3)
    MEM_B(0X58, ctx->r7) = ctx->r11;
    after_65:
    // 0x80275DF4: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275DF8: bne         $v0, $zero, L_80275E0C
    if (ctx->r2 != 0) {
        // 0x80275DFC: addiu       $t5, $zero, 0x2
        ctx->r13 = ADD32(0, 0X2);
            goto L_80275E0C;
    }
    // 0x80275DFC: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x80275E00: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80275E04: b           L_80275FB8
    // 0x80275E08: sb          $t4, 0x55($a3)
    MEM_B(0X55, ctx->r7) = ctx->r12;
        goto L_80275FB8;
    // 0x80275E08: sb          $t4, 0x55($a3)
    MEM_B(0X55, ctx->r7) = ctx->r12;
L_80275E0C:
    // 0x80275E0C: b           L_80275FB8
    // 0x80275E10: sb          $t5, 0x55($a3)
    MEM_B(0X55, ctx->r7) = ctx->r13;
        goto L_80275FB8;
    // 0x80275E10: sb          $t5, 0x55($a3)
    MEM_B(0X55, ctx->r7) = ctx->r13;
L_80275E14:
    // 0x80275E14: jal         0x80035770
    // 0x80275E18: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80035770(rdram, ctx);
        goto after_66;
    // 0x80275E18: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_66:
    // 0x80275E1C: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275E20: nop

    // 0x80275E24: lb          $t6, 0x58($a3)
    ctx->r14 = MEM_B(ctx->r7, 0X58);
    // 0x80275E28: nop

    // 0x80275E2C: bne         $t6, $zero, L_80275E84
    if (ctx->r14 != 0) {
        // 0x80275E30: nop
    
            goto L_80275E84;
    }
    // 0x80275E30: nop

    // 0x80275E34: jal         0x80276EAC
    // 0x80275E38: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80276EAC(rdram, ctx);
        goto after_67;
    // 0x80275E38: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_67:
    // 0x80275E3C: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275E40: bne         $v0, $zero, L_80275E68
    if (ctx->r2 != 0) {
        // 0x80275E44: addiu       $t8, $zero, 0x4
        ctx->r24 = ADD32(0, 0X4);
            goto L_80275E68;
    }
    // 0x80275E44: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x80275E48: addiu       $t7, $zero, 0x6
    ctx->r15 = ADD32(0, 0X6);
    // 0x80275E4C: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80275E50: sb          $t7, 0x55($a3)
    MEM_B(0X55, ctx->r7) = ctx->r15;
    // 0x80275E54: addiu       $a0, $a0, 0x6F20
    ctx->r4 = ADD32(ctx->r4, 0X6F20);
    // 0x80275E58: jal         0x8002989C
    // 0x80275E5C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_8002989C(rdram, ctx);
        goto after_68;
    // 0x80275E5C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_68:
    // 0x80275E60: b           L_80275FBC
    // 0x80275E64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x80275E64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80275E68:
    // 0x80275E68: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80275E6C: sb          $t8, 0x55($a3)
    MEM_B(0X55, ctx->r7) = ctx->r24;
    // 0x80275E70: addiu       $a0, $a0, 0x7004
    ctx->r4 = ADD32(ctx->r4, 0X7004);
    // 0x80275E74: jal         0x8002989C
    // 0x80275E78: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    func_8002989C(rdram, ctx);
        goto after_69;
    // 0x80275E78: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_69:
    // 0x80275E7C: b           L_80275FBC
    // 0x80275E80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x80275E80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80275E84:
    // 0x80275E84: b           L_80275FB8
    // 0x80275E88: sb          $zero, 0x55($a3)
    MEM_B(0X55, ctx->r7) = 0;
        goto L_80275FB8;
    // 0x80275E88: sb          $zero, 0x55($a3)
    MEM_B(0X55, ctx->r7) = 0;
    // 0x80275E8C: lbu         $t9, 0x56($a3)
    ctx->r25 = MEM_BU(ctx->r7, 0X56);
    // 0x80275E90: nop

    // 0x80275E94: sltiu       $at, $t9, 0x5
    ctx->r1 = ctx->r25 < 0X5 ? 1 : 0;
    // 0x80275E98: beq         $at, $zero, L_80275FB8
    if (ctx->r1 == 0) {
        // 0x80275E9C: sll         $t9, $t9, 2
        ctx->r25 = S32(ctx->r25 << 2);
            goto L_80275FB8;
    }
    // 0x80275E9C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80275EA0: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80275EA4: addu        $at, $at, $t9
    gpr jr_addend_80275EB0 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80275EA8: lw          $t9, 0x1DAC($at)
    ctx->r25 = ADD32(ctx->r1, 0X1DAC);
    // 0x80275EAC: nop

    // 0x80275EB0: jr          $t9
    // 0x80275EB4: nop

    switch (jr_addend_80275EB0 >> 2) {
        case 0: goto L_80275EB8; break;
        case 1: goto L_80275F1C; break;
        case 2: goto L_80275FB8; break;
        case 3: goto L_80275FB8; break;
        case 4: goto L_80275FB8; break;
        default: switch_error(__func__, 0x80275EB0, 0x80281DAC);
    }
    // 0x80275EB4: nop

L_80275EB8:
    // 0x80275EB8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80275EBC: sb          $t0, 0x58($a3)
    MEM_B(0X58, ctx->r7) = ctx->r8;
    // 0x80275EC0: lb          $a0, 0x57($a3)
    ctx->r4 = MEM_B(ctx->r7, 0X57);
    // 0x80275EC4: jal         0x80276E78
    // 0x80275EC8: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80276E78(rdram, ctx);
        goto after_70;
    // 0x80275EC8: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_70:
    // 0x80275ECC: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275ED0: bne         $v0, $zero, L_80275F04
    if (ctx->r2 != 0) {
        // 0x80275ED4: nop
    
            goto L_80275F04;
    }
    // 0x80275ED4: nop

    // 0x80275ED8: jal         0x800357AC
    // 0x80275EDC: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_800357AC(rdram, ctx);
        goto after_71;
    // 0x80275EDC: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_71:
    // 0x80275EE0: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275EE4: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x80275EE8: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80275EEC: addiu       $a0, $a0, 0x705C
    ctx->r4 = ADD32(ctx->r4, 0X705C);
    // 0x80275EF0: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80275EF4: jal         0x8002989C
    // 0x80275EF8: sb          $t1, 0x56($a3)
    MEM_B(0X56, ctx->r7) = ctx->r9;
    func_8002989C(rdram, ctx);
        goto after_72;
    // 0x80275EF8: sb          $t1, 0x56($a3)
    MEM_B(0X56, ctx->r7) = ctx->r9;
    after_72:
    // 0x80275EFC: b           L_80275FBC
    // 0x80275F00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x80275F00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80275F04:
    // 0x80275F04: jal         0x80035770
    // 0x80275F08: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80035770(rdram, ctx);
        goto after_73;
    // 0x80275F08: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_73:
    // 0x80275F0C: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275F10: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80275F14: b           L_80275FB8
    // 0x80275F18: sb          $t2, 0x56($a3)
    MEM_B(0X56, ctx->r7) = ctx->r10;
        goto L_80275FB8;
    // 0x80275F18: sb          $t2, 0x56($a3)
    MEM_B(0X56, ctx->r7) = ctx->r10;
L_80275F1C:
    // 0x80275F1C: jal         0x80035770
    // 0x80275F20: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80035770(rdram, ctx);
        goto after_74;
    // 0x80275F20: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_74:
    // 0x80275F24: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275F28: nop

    // 0x80275F2C: lb          $t3, 0x58($a3)
    ctx->r11 = MEM_B(ctx->r7, 0X58);
    // 0x80275F30: nop

    // 0x80275F34: bne         $t3, $zero, L_80275FB4
    if (ctx->r11 != 0) {
        // 0x80275F38: nop
    
            goto L_80275FB4;
    }
    // 0x80275F38: nop

    // 0x80275F3C: jal         0x80276FB0
    // 0x80275F40: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80276FB0(rdram, ctx);
        goto after_75;
    // 0x80275F40: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_75:
    // 0x80275F44: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275F48: bne         $v0, $zero, L_80275F98
    if (ctx->r2 != 0) {
        // 0x80275F4C: addiu       $t8, $zero, 0x4
        ctx->r24 = ADD32(0, 0X4);
            goto L_80275F98;
    }
    // 0x80275F4C: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x80275F50: lb          $t5, 0x57($a3)
    ctx->r13 = MEM_B(ctx->r7, 0X57);
    // 0x80275F54: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x80275F58: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80275F5C: sb          $t4, 0x56($a3)
    MEM_B(0X56, ctx->r7) = ctx->r12;
    // 0x80275F60: lui         $v0, 0x8029
    ctx->r2 = S32(0X8029 << 16);
    // 0x80275F64: addiu       $v1, $v1, 0x1CF0
    ctx->r3 = ADD32(ctx->r3, 0X1CF0);
    // 0x80275F68: addu        $v0, $v0, $t5
    ctx->r2 = ADD32(ctx->r2, ctx->r13);
    // 0x80275F6C: lb          $v0, -0x79C8($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X79C8);
    // 0x80275F70: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x80275F74: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80275F78: sb          $v0, 0x3A($t6)
    MEM_B(0X3A, ctx->r14) = ctx->r2;
    // 0x80275F7C: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x80275F80: addiu       $a0, $a0, 0x7030
    ctx->r4 = ADD32(ctx->r4, 0X7030);
    // 0x80275F84: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80275F88: jal         0x8002989C
    // 0x80275F8C: sb          $v0, 0x3B($t7)
    MEM_B(0X3B, ctx->r15) = ctx->r2;
    func_8002989C(rdram, ctx);
        goto after_76;
    // 0x80275F8C: sb          $v0, 0x3B($t7)
    MEM_B(0X3B, ctx->r15) = ctx->r2;
    after_76:
    // 0x80275F90: b           L_80275FBC
    // 0x80275F94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x80275F94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80275F98:
    // 0x80275F98: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80275F9C: sb          $t8, 0x56($a3)
    MEM_B(0X56, ctx->r7) = ctx->r24;
    // 0x80275FA0: addiu       $a0, $a0, 0x7030
    ctx->r4 = ADD32(ctx->r4, 0X7030);
    // 0x80275FA4: jal         0x8002989C
    // 0x80275FA8: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    func_8002989C(rdram, ctx);
        goto after_77;
    // 0x80275FA8: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_77:
    // 0x80275FAC: b           L_80275FBC
    // 0x80275FB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x80275FB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80275FB4:
    // 0x80275FB4: sb          $zero, 0x56($a3)
    MEM_B(0X56, ctx->r7) = 0;
L_80275FB8:
    // 0x80275FB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80275FBC:
    // 0x80275FBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80275FC0: jr          $ra
    // 0x80275FC4: nop

    return;
    // 0x80275FC4: nop

;}
RECOMP_FUNC void func_802758B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802758B4: jal         0x80276E4C
    // 0x802758B8: sb          $t9, 0x55($a3)
    MEM_B(0X55, ctx->r7) = ctx->r25;
    func_80276E4C(rdram, ctx);
        goto after_0;
    // 0x802758B8: sb          $t9, 0x55($a3)
    MEM_B(0X55, ctx->r7) = ctx->r25;
    after_0:
    // 0x802758BC: jal         0x80277340
    // 0x802758C0: nop

    func_80277340(rdram, ctx);
        goto after_1;
    // 0x802758C0: nop

    after_1:
    // 0x802758C4: b           L_80275FBC
    // 0x802758C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x802758C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802758CC: lb          $t0, 0x57($a3)
    ctx->r8 = MEM_B(ctx->r7, 0X57);
    // 0x802758D0: sb          $zero, 0x55($a3)
    MEM_B(0X55, ctx->r7) = 0;
    // 0x802758D4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x802758D8: lbu         $t1, -0x79C8($t1)
    ctx->r9 = MEM_BU(ctx->r9, -0X79C8);
    // 0x802758DC: jal         0x80277340
    // 0x802758E0: sb          $t1, 0x59($a3)
    MEM_B(0X59, ctx->r7) = ctx->r9;
    func_80277340(rdram, ctx);
        goto after_2;
    // 0x802758E0: sb          $t1, 0x59($a3)
    MEM_B(0X59, ctx->r7) = ctx->r9;
    after_2:
    // 0x802758E4: b           L_80275FBC
    // 0x802758E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x802758E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802758EC: jal         0x800357AC
    // 0x802758F0: nop

    func_800357AC(rdram, ctx);
        goto after_3;
    // 0x802758F0: nop

    after_3:
    // 0x802758F4: b           L_80275FBC
    // 0x802758F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x802758F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802758FC: jal         0x80276E4C
    // 0x80275900: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80276E4C(rdram, ctx);
        goto after_4;
    // 0x80275900: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_4:
    // 0x80275904: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275908: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8027590C: lb          $t2, 0x5A($a3)
    ctx->r10 = MEM_B(ctx->r7, 0X5A);
    // 0x80275910: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x80275914: beq         $t2, $at, L_8027597C
    if (ctx->r10 == ctx->r1) {
        // 0x80275918: nop
    
            goto L_8027597C;
    }
    // 0x80275918: nop

    // 0x8027591C: jal         0x8027773C
    // 0x80275920: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_8027773C(rdram, ctx);
        goto after_5;
    // 0x80275920: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_5:
    // 0x80275924: jal         0x80035770
    // 0x80275928: nop

    func_80035770(rdram, ctx);
        goto after_6;
    // 0x80275928: nop

    after_6:
    // 0x8027592C: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275930: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80275934: lb          $t3, 0x5B($a3)
    ctx->r11 = MEM_B(ctx->r7, 0X5B);
    // 0x80275938: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x8027593C: bne         $t3, $at, L_8027595C
    if (ctx->r11 != ctx->r1) {
        // 0x80275940: lui         $t6, 0x8029
        ctx->r14 = S32(0X8029 << 16);
            goto L_8027595C;
    }
    // 0x80275940: lui         $t6, 0x8029
    ctx->r14 = S32(0X8029 << 16);
    // 0x80275944: jal         0x80276E4C
    // 0x80275948: sb          $t4, 0x56($a3)
    MEM_B(0X56, ctx->r7) = ctx->r12;
    func_80276E4C(rdram, ctx);
        goto after_7;
    // 0x80275948: sb          $t4, 0x56($a3)
    MEM_B(0X56, ctx->r7) = ctx->r12;
    after_7:
    // 0x8027594C: jal         0x80277340
    // 0x80275950: nop

    func_80277340(rdram, ctx);
        goto after_8;
    // 0x80275950: nop

    after_8:
    // 0x80275954: b           L_80275FBC
    // 0x80275958: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x80275958: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027595C:
    // 0x8027595C: lb          $t5, 0x57($a3)
    ctx->r13 = MEM_B(ctx->r7, 0X57);
    // 0x80275960: sb          $zero, 0x56($a3)
    MEM_B(0X56, ctx->r7) = 0;
    // 0x80275964: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80275968: lbu         $t6, -0x79C8($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X79C8);
    // 0x8027596C: jal         0x80277340
    // 0x80275970: sb          $t6, 0x59($a3)
    MEM_B(0X59, ctx->r7) = ctx->r14;
    func_80277340(rdram, ctx);
        goto after_9;
    // 0x80275970: sb          $t6, 0x59($a3)
    MEM_B(0X59, ctx->r7) = ctx->r14;
    after_9:
    // 0x80275974: b           L_80275FBC
    // 0x80275978: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x80275978: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027597C:
    // 0x8027597C: jal         0x800357AC
    // 0x80275980: nop

    func_800357AC(rdram, ctx);
        goto after_10;
    // 0x80275980: nop

    after_10:
    // 0x80275984: b           L_80275FBC
    // 0x80275988: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x80275988: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027598C: jal         0x80035770
    // 0x80275990: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80035770(rdram, ctx);
        goto after_11;
    // 0x80275990: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_11:
    // 0x80275994: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275998: addiu       $t7, $zero, 0x9
    ctx->r15 = ADD32(0, 0X9);
    // 0x8027599C: sb          $t7, 0x38($a3)
    MEM_B(0X38, ctx->r7) = ctx->r15;
    // 0x802759A0: sb          $zero, 0x49($a3)
    MEM_B(0X49, ctx->r7) = 0;
    // 0x802759A4: b           L_80275FB8
    // 0x802759A8: sb          $zero, 0x4A($a3)
    MEM_B(0X4A, ctx->r7) = 0;
        goto L_80275FB8;
    // 0x802759A8: sb          $zero, 0x4A($a3)
    MEM_B(0X4A, ctx->r7) = 0;
    // 0x802759AC: jal         0x80035770
    // 0x802759B0: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80035770(rdram, ctx);
        goto after_12;
    // 0x802759B0: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_12:
    // 0x802759B4: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x802759B8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802759BC: lb          $v0, 0x49($a3)
    ctx->r2 = MEM_B(ctx->r7, 0X49);
    // 0x802759C0: nop

    // 0x802759C4: beq         $v0, $zero, L_802759DC
    if (ctx->r2 == 0) {
        // 0x802759C8: nop
    
            goto L_802759DC;
    }
    // 0x802759C8: nop

    // 0x802759CC: beq         $v0, $v1, L_802759EC
    if (ctx->r2 == ctx->r3) {
        // 0x802759D0: nop
    
            goto L_802759EC;
    }
    // 0x802759D0: nop

    // 0x802759D4: b           L_80275FBC
    // 0x802759D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x802759D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802759DC:
    // 0x802759DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802759E0: sb          $v0, 0x49($a3)
    MEM_B(0X49, ctx->r7) = ctx->r2;
    // 0x802759E4: b           L_80275FB8
    // 0x802759E8: sb          $v0, 0x4B($a3)
    MEM_B(0X4B, ctx->r7) = ctx->r2;
        goto L_80275FB8;
    // 0x802759E8: sb          $v0, 0x4B($a3)
    MEM_B(0X4B, ctx->r7) = ctx->r2;
L_802759EC:
    // 0x802759EC: lb          $v0, 0x4B($a3)
    ctx->r2 = MEM_B(ctx->r7, 0X4B);
    // 0x802759F0: nop

    // 0x802759F4: beq         $v0, $zero, L_80275A0C
    if (ctx->r2 == 0) {
        // 0x802759F8: nop
    
            goto L_80275A0C;
    }
    // 0x802759F8: nop

    // 0x802759FC: beq         $v0, $v1, L_80275A98
    if (ctx->r2 == ctx->r3) {
        // 0x80275A00: nop
    
            goto L_80275A98;
    }
    // 0x80275A00: nop

    // 0x80275A04: b           L_80275FBC
    // 0x80275A08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x80275A08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80275A0C:
    // 0x80275A0C: lbu         $t8, 0x4A($a3)
    ctx->r24 = MEM_BU(ctx->r7, 0X4A);
    // 0x80275A10: nop

    // 0x80275A14: sltiu       $at, $t8, 0x5
    ctx->r1 = ctx->r24 < 0X5 ? 1 : 0;
    // 0x80275A18: beq         $at, $zero, L_80275A80
    if (ctx->r1 == 0) {
        // 0x80275A1C: sll         $t8, $t8, 2
        ctx->r24 = S32(ctx->r24 << 2);
            goto L_80275A80;
    }
    // 0x80275A1C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80275A20: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80275A24: addu        $at, $at, $t8
    gpr jr_addend_80275A30 = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80275A28: lw          $t8, 0x1D80($at)
    ctx->r24 = ADD32(ctx->r1, 0X1D80);
    // 0x80275A2C: nop

    // 0x80275A30: jr          $t8
    // 0x80275A34: nop

    switch (jr_addend_80275A30 >> 2) {
        case 0: goto L_80275A38; break;
        case 1: goto L_80275A48; break;
        case 2: goto L_80275A58; break;
        case 3: goto L_80275A68; break;
        case 4: goto L_80275A78; break;
        default: switch_error(__func__, 0x80275A30, 0x80281D80);
    }
    // 0x80275A34: nop

L_80275A38:
    // 0x80275A38: jal         0x80277644
    // 0x80275A3C: nop

    func_80277644(rdram, ctx);
        goto after_13;
    // 0x80275A3C: nop

    after_13:
    // 0x80275A40: b           L_80275A80
    // 0x80275A44: nop

        goto L_80275A80;
    // 0x80275A44: nop

L_80275A48:
    // 0x80275A48: jal         0x80277420
    // 0x80275A4C: nop

    func_80277420(rdram, ctx);
        goto after_14;
    // 0x80275A4C: nop

    after_14:
    // 0x80275A50: b           L_80275A80
    // 0x80275A54: nop

        goto L_80275A80;
    // 0x80275A54: nop

L_80275A58:
    // 0x80275A58: jal         0x80277478
    // 0x80275A5C: nop

    func_80277478(rdram, ctx);
        goto after_15;
    // 0x80275A5C: nop

    after_15:
    // 0x80275A60: b           L_80275A80
    // 0x80275A64: nop

        goto L_80275A80;
    // 0x80275A64: nop

L_80275A68:
    // 0x80275A68: jal         0x8027753C
    // 0x80275A6C: nop

    func_8027753C(rdram, ctx);
        goto after_16;
    // 0x80275A6C: nop

    after_16:
    // 0x80275A70: b           L_80275A80
    // 0x80275A74: nop

        goto L_80275A80;
    // 0x80275A74: nop

L_80275A78:
    // 0x80275A78: jal         0x802775C0
    // 0x80275A7C: nop

    func_802775C0(rdram, ctx);
        goto after_17;
    // 0x80275A7C: nop

    after_17:
L_80275A80:
    // 0x80275A80: jal         0x802771FC
    // 0x80275A84: nop

    func_802771FC(rdram, ctx);
        goto after_18;
    // 0x80275A84: nop

    after_18:
    // 0x80275A88: jal         0x8027767C
    // 0x80275A8C: nop

    func_8027767C(rdram, ctx);
        goto after_19;
    // 0x80275A8C: nop

    after_19:
    // 0x80275A90: b           L_80275FBC
    // 0x80275A94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x80275A94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80275A98:
    // 0x80275A98: b           L_80275FB8
    // 0x80275A9C: sb          $zero, 0x38($a3)
    MEM_B(0X38, ctx->r7) = 0;
        goto L_80275FB8;
    // 0x80275A9C: sb          $zero, 0x38($a3)
    MEM_B(0X38, ctx->r7) = 0;
    // 0x80275AA0: jal         0x80035770
    // 0x80275AA4: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80035770(rdram, ctx);
        goto after_20;
    // 0x80275AA4: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_20:
    // 0x80275AA8: jal         0x802777C8
    // 0x80275AAC: nop

    func_802777C8(rdram, ctx);
        goto after_21;
    // 0x80275AAC: nop

    after_21:
    // 0x80275AB0: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275AB4: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80275AB8: lb          $t9, 0x3A($a3)
    ctx->r25 = MEM_B(ctx->r7, 0X3A);
    // 0x80275ABC: addiu       $a0, $a0, 0x5510
    ctx->r4 = ADD32(ctx->r4, 0X5510);
    // 0x80275AC0: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x80275AC4: jal         0x8002989C
    // 0x80275AC8: sb          $t9, 0x3B($a3)
    MEM_B(0X3B, ctx->r7) = ctx->r25;
    func_8002989C(rdram, ctx);
        goto after_22;
    // 0x80275AC8: sb          $t9, 0x3B($a3)
    MEM_B(0X3B, ctx->r7) = ctx->r25;
    after_22:
    // 0x80275ACC: b           L_80275FBC
    // 0x80275AD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x80275AD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80275AD4: jal         0x80035770
    // 0x80275AD8: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80035770(rdram, ctx);
        goto after_23;
    // 0x80275AD8: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_23:
    // 0x80275ADC: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275AE0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80275AE4: lb          $v0, 0x3E($a3)
    ctx->r2 = MEM_B(ctx->r7, 0X3E);
    // 0x80275AE8: nop

    // 0x80275AEC: beq         $v0, $zero, L_80275B04
    if (ctx->r2 == 0) {
        // 0x80275AF0: nop
    
            goto L_80275B04;
    }
    // 0x80275AF0: nop

    // 0x80275AF4: beq         $v0, $at, L_80275B90
    if (ctx->r2 == ctx->r1) {
        // 0x80275AF8: addiu       $a0, $zero, 0xF00
        ctx->r4 = ADD32(0, 0XF00);
            goto L_80275B90;
    }
    // 0x80275AF8: addiu       $a0, $zero, 0xF00
    ctx->r4 = ADD32(0, 0XF00);
    // 0x80275AFC: b           L_80275FBC
    // 0x80275B00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x80275B00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80275B04:
    // 0x80275B04: lb          $t0, 0x3D($a3)
    ctx->r8 = MEM_B(ctx->r7, 0X3D);
    // 0x80275B08: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x80275B0C: bne         $t0, $at, L_80275B2C
    if (ctx->r8 != ctx->r1) {
        // 0x80275B10: addiu       $a0, $zero, 0xF00
        ctx->r4 = ADD32(0, 0XF00);
            goto L_80275B2C;
    }
    // 0x80275B10: addiu       $a0, $zero, 0xF00
    ctx->r4 = ADD32(0, 0XF00);
    // 0x80275B14: jal         0x802777C8
    // 0x80275B18: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_802777C8(rdram, ctx);
        goto after_24;
    // 0x80275B18: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_24:
    // 0x80275B1C: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275B20: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80275B24: b           L_80275FB8
    // 0x80275B28: sb          $t1, 0x54($a3)
    MEM_B(0X54, ctx->r7) = ctx->r9;
        goto L_80275FB8;
    // 0x80275B28: sb          $t1, 0x54($a3)
    MEM_B(0X54, ctx->r7) = ctx->r9;
L_80275B2C:
    // 0x80275B2C: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x80275B30: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80275B34: jal         0x80049E40
    // 0x80275B38: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80049E40(rdram, ctx);
        goto after_25;
    // 0x80275B38: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_25:
    // 0x80275B3C: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x80275B40: lb          $t2, -0x326C($t2)
    ctx->r10 = MEM_B(ctx->r10, -0X326C);
    // 0x80275B44: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x80275B48: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80275B4C: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x80275B50: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x80275B54: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x80275B58: addiu       $t5, $t5, -0x3770
    ctx->r13 = ADD32(ctx->r13, -0X3770);
    // 0x80275B5C: addu        $t4, $t3, $at
    ctx->r12 = ADD32(ctx->r11, ctx->r1);
    // 0x80275B60: addu        $v0, $t4, $t5
    ctx->r2 = ADD32(ctx->r12, ctx->r13);
    // 0x80275B64: lbu         $t6, 0x70A($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X70A);
    // 0x80275B68: nop

    // 0x80275B6C: ori         $t7, $t6, 0x2
    ctx->r15 = ctx->r14 | 0X2;
    // 0x80275B70: jal         0x802773BC
    // 0x80275B74: sb          $t7, 0x70A($v0)
    MEM_B(0X70A, ctx->r2) = ctx->r15;
    func_802773BC(rdram, ctx);
        goto after_26;
    // 0x80275B74: sb          $t7, 0x70A($v0)
    MEM_B(0X70A, ctx->r2) = ctx->r15;
    after_26:
    // 0x80275B78: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275B7C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80275B80: jal         0x802771FC
    // 0x80275B84: sb          $t8, 0x3E($a3)
    MEM_B(0X3E, ctx->r7) = ctx->r24;
    func_802771FC(rdram, ctx);
        goto after_27;
    // 0x80275B84: sb          $t8, 0x3E($a3)
    MEM_B(0X3E, ctx->r7) = ctx->r24;
    after_27:
    // 0x80275B88: b           L_80275FBC
    // 0x80275B8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x80275B8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80275B90:
    // 0x80275B90: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x80275B94: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    // 0x80275B98: jal         0x80049E40
    // 0x80275B9C: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80049E40(rdram, ctx);
        goto after_28;
    // 0x80275B9C: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_28:
    // 0x80275BA0: jal         0x802772AC
    // 0x80275BA4: nop

    func_802772AC(rdram, ctx);
        goto after_29;
    // 0x80275BA4: nop

    after_29:
    // 0x80275BA8: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275BAC: b           L_80275FB8
    // 0x80275BB0: sb          $zero, 0x3E($a3)
    MEM_B(0X3E, ctx->r7) = 0;
        goto L_80275FB8;
    // 0x80275BB0: sb          $zero, 0x3E($a3)
    MEM_B(0X3E, ctx->r7) = 0;
    // 0x80275BB4: jal         0x80035770
    // 0x80275BB8: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80035770(rdram, ctx);
        goto after_30;
    // 0x80275BB8: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_30:
    // 0x80275BBC: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275BC0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80275BC4: lb          $v0, 0x42($a3)
    ctx->r2 = MEM_B(ctx->r7, 0X42);
    // 0x80275BC8: nop

    // 0x80275BCC: beq         $v0, $zero, L_80275BF0
    if (ctx->r2 == 0) {
        // 0x80275BD0: nop
    
            goto L_80275BF0;
    }
    // 0x80275BD0: nop

    // 0x80275BD4: beq         $v0, $at, L_80275C00
    if (ctx->r2 == ctx->r1) {
        // 0x80275BD8: addiu       $a0, $zero, 0xF00
        ctx->r4 = ADD32(0, 0XF00);
            goto L_80275C00;
    }
    // 0x80275BD8: addiu       $a0, $zero, 0xF00
    ctx->r4 = ADD32(0, 0XF00);
    // 0x80275BDC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80275BE0: beq         $v0, $at, L_80275C64
    if (ctx->r2 == ctx->r1) {
        // 0x80275BE4: addiu       $a0, $zero, 0xF00
        ctx->r4 = ADD32(0, 0XF00);
            goto L_80275C64;
    }
    // 0x80275BE4: addiu       $a0, $zero, 0xF00
    ctx->r4 = ADD32(0, 0XF00);
    // 0x80275BE8: b           L_80275FBC
    // 0x80275BEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x80275BEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80275BF0:
    // 0x80275BF0: jal         0x802777C8
    // 0x80275BF4: nop

    func_802777C8(rdram, ctx);
        goto after_31;
    // 0x80275BF4: nop

    after_31:
    // 0x80275BF8: b           L_80275FBC
    // 0x80275BFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x80275BFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80275C00:
    // 0x80275C00: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x80275C04: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80275C08: jal         0x80049E40
    // 0x80275C0C: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80049E40(rdram, ctx);
        goto after_32;
    // 0x80275C0C: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_32:
    // 0x80275C10: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x80275C14: lb          $t9, -0x326C($t9)
    ctx->r25 = MEM_B(ctx->r25, -0X326C);
    // 0x80275C18: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x80275C1C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80275C20: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x80275C24: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x80275C28: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x80275C2C: addiu       $t2, $t2, -0x3770
    ctx->r10 = ADD32(ctx->r10, -0X3770);
    // 0x80275C30: addu        $t1, $t0, $at
    ctx->r9 = ADD32(ctx->r8, ctx->r1);
    // 0x80275C34: addu        $v0, $t1, $t2
    ctx->r2 = ADD32(ctx->r9, ctx->r10);
    // 0x80275C38: lbu         $t3, 0x70A($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X70A);
    // 0x80275C3C: nop

    // 0x80275C40: ori         $t4, $t3, 0x2
    ctx->r12 = ctx->r11 | 0X2;
    // 0x80275C44: jal         0x802773BC
    // 0x80275C48: sb          $t4, 0x70A($v0)
    MEM_B(0X70A, ctx->r2) = ctx->r12;
    func_802773BC(rdram, ctx);
        goto after_33;
    // 0x80275C48: sb          $t4, 0x70A($v0)
    MEM_B(0X70A, ctx->r2) = ctx->r12;
    after_33:
    // 0x80275C4C: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275C50: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x80275C54: jal         0x802771FC
    // 0x80275C58: sb          $t5, 0x42($a3)
    MEM_B(0X42, ctx->r7) = ctx->r13;
    func_802771FC(rdram, ctx);
        goto after_34;
    // 0x80275C58: sb          $t5, 0x42($a3)
    MEM_B(0X42, ctx->r7) = ctx->r13;
    after_34:
    // 0x80275C5C: b           L_80275FBC
    // 0x80275C60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x80275C60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80275C64:
    // 0x80275C64: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x80275C68: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    // 0x80275C6C: jal         0x80049E40
    // 0x80275C70: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80049E40(rdram, ctx);
        goto after_35;
    // 0x80275C70: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_35:
    // 0x80275C74: jal         0x802772AC
    // 0x80275C78: nop

    func_802772AC(rdram, ctx);
        goto after_36;
    // 0x80275C78: nop

    after_36:
    // 0x80275C7C: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275C80: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80275C84: b           L_80275FB8
    // 0x80275C88: sb          $t6, 0x42($a3)
    MEM_B(0X42, ctx->r7) = ctx->r14;
        goto L_80275FB8;
    // 0x80275C88: sb          $t6, 0x42($a3)
    MEM_B(0X42, ctx->r7) = ctx->r14;
    // 0x80275C8C: lb          $t7, 0x44($a3)
    ctx->r15 = MEM_B(ctx->r7, 0X44);
    // 0x80275C90: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x80275C94: bne         $t7, $at, L_80275FBC
    if (ctx->r15 != ctx->r1) {
        // 0x80275C98: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80275FBC;
    }
    // 0x80275C98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80275C9C: jal         0x80035770
    // 0x80275CA0: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80035770(rdram, ctx);
        goto after_37;
    // 0x80275CA0: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_37:
    // 0x80275CA4: jal         0x802777C8
    // 0x80275CA8: nop

    func_802777C8(rdram, ctx);
        goto after_38;
    // 0x80275CA8: nop

    after_38:
    // 0x80275CAC: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275CB0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80275CB4: b           L_80275FB8
    // 0x80275CB8: sb          $t8, 0x54($a3)
    MEM_B(0X54, ctx->r7) = ctx->r24;
        goto L_80275FB8;
    // 0x80275CB8: sb          $t8, 0x54($a3)
    MEM_B(0X54, ctx->r7) = ctx->r24;
    // 0x80275CBC: jal         0x80035770
    // 0x80275CC0: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80035770(rdram, ctx);
        goto after_39;
    // 0x80275CC0: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_39:
    // 0x80275CC4: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275CC8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80275CCC: lb          $v0, 0x45($a3)
    ctx->r2 = MEM_B(ctx->r7, 0X45);
    // 0x80275CD0: nop

    // 0x80275CD4: beq         $v0, $zero, L_80275CEC
    if (ctx->r2 == 0) {
        // 0x80275CD8: nop
    
            goto L_80275CEC;
    }
    // 0x80275CD8: nop

    // 0x80275CDC: beq         $v0, $at, L_80275D30
    if (ctx->r2 == ctx->r1) {
        // 0x80275CE0: nop
    
            goto L_80275D30;
    }
    // 0x80275CE0: nop

    // 0x80275CE4: b           L_80275D44
    // 0x80275CE8: nop

        goto L_80275D44;
    // 0x80275CE8: nop

L_80275CEC:
    // 0x80275CEC: lb          $t9, 0x46($a3)
    ctx->r25 = MEM_B(ctx->r7, 0X46);
    // 0x80275CF0: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x80275CF4: bne         $t9, $at, L_80275D14
    if (ctx->r25 != ctx->r1) {
        // 0x80275CF8: nop
    
            goto L_80275D14;
    }
    // 0x80275CF8: nop

    // 0x80275CFC: jal         0x802777C8
    // 0x80275D00: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_802777C8(rdram, ctx);
        goto after_40;
    // 0x80275D00: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_40:
    // 0x80275D04: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275D08: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80275D0C: b           L_80275D44
    // 0x80275D10: sb          $t0, 0x54($a3)
    MEM_B(0X54, ctx->r7) = ctx->r8;
        goto L_80275D44;
    // 0x80275D10: sb          $t0, 0x54($a3)
    MEM_B(0X54, ctx->r7) = ctx->r8;
L_80275D14:
    // 0x80275D14: jal         0x80277908
    // 0x80275D18: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80277908(rdram, ctx);
        goto after_41;
    // 0x80275D18: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_41:
    // 0x80275D1C: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275D20: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80275D24: sb          $zero, 0x48($a3)
    MEM_B(0X48, ctx->r7) = 0;
    // 0x80275D28: b           L_80275D44
    // 0x80275D2C: sb          $t1, 0x45($a3)
    MEM_B(0X45, ctx->r7) = ctx->r9;
        goto L_80275D44;
    // 0x80275D2C: sb          $t1, 0x45($a3)
    MEM_B(0X45, ctx->r7) = ctx->r9;
L_80275D30:
    // 0x80275D30: jal         0x8027B068
    // 0x80275D34: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_8027B068(rdram, ctx);
        goto after_42;
    // 0x80275D34: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_42:
    // 0x80275D38: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275D3C: nop

    // 0x80275D40: sb          $zero, 0x45($a3)
    MEM_B(0X45, ctx->r7) = 0;
L_80275D44:
    // 0x80275D44: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80275D48: addiu       $a0, $a0, 0x5510
    ctx->r4 = ADD32(ctx->r4, 0X5510);
    // 0x80275D4C: jal         0x8002989C
    // 0x80275D50: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_8002989C(rdram, ctx);
        goto after_43;
    // 0x80275D50: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_43:
    // 0x80275D54: b           L_80275FBC
    // 0x80275D58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x80275D58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80275D5C: jal         0x80035770
    // 0x80275D60: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80035770(rdram, ctx);
        goto after_44;
    // 0x80275D60: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_44:
    // 0x80275D64: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275D68: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80275D6C: lb          $v0, 0x4C($a3)
    ctx->r2 = MEM_B(ctx->r7, 0X4C);
    // 0x80275D70: nop

    // 0x80275D74: beq         $v0, $zero, L_80275D8C
    if (ctx->r2 == 0) {
        // 0x80275D78: nop
    
            goto L_80275D8C;
    }
    // 0x80275D78: nop

    // 0x80275D7C: beq         $v0, $v1, L_80275DA0
    if (ctx->r2 == ctx->r3) {
        // 0x80275D80: nop
    
            goto L_80275DA0;
    }
    // 0x80275D80: nop

    // 0x80275D84: b           L_80275FBC
    // 0x80275D88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x80275D88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80275D8C:
    // 0x80275D8C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80275D90: sb          $v0, 0x4C($a3)
    MEM_B(0X4C, ctx->r7) = ctx->r2;
    // 0x80275D94: sb          $zero, 0x4E($a3)
    MEM_B(0X4E, ctx->r7) = 0;
    // 0x80275D98: b           L_80275FB8
    // 0x80275D9C: sb          $v0, 0x4F($a3)
    MEM_B(0X4F, ctx->r7) = ctx->r2;
        goto L_80275FB8;
    // 0x80275D9C: sb          $v0, 0x4F($a3)
    MEM_B(0X4F, ctx->r7) = ctx->r2;
L_80275DA0:
    // 0x80275DA0: sb          $zero, 0x4C($a3)
    MEM_B(0X4C, ctx->r7) = 0;
    // 0x80275DA4: b           L_80275FB8
    // 0x80275DA8: sb          $v1, 0x50($a3)
    MEM_B(0X50, ctx->r7) = ctx->r3;
        goto L_80275FB8;
    // 0x80275DA8: sb          $v1, 0x50($a3)
    MEM_B(0X50, ctx->r7) = ctx->r3;
    // 0x80275DAC: lbu         $t2, 0x55($a3)
    ctx->r10 = MEM_BU(ctx->r7, 0X55);
    // 0x80275DB0: nop

    // 0x80275DB4: sltiu       $at, $t2, 0x6
    ctx->r1 = ctx->r10 < 0X6 ? 1 : 0;
    // 0x80275DB8: beq         $at, $zero, L_80275FB8
    if (ctx->r1 == 0) {
        // 0x80275DBC: sll         $t2, $t2, 2
        ctx->r10 = S32(ctx->r10 << 2);
            goto L_80275FB8;
    }
    // 0x80275DBC: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80275DC0: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80275DC4: addu        $at, $at, $t2
    gpr jr_addend_80275DD0 = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80275DC8: lw          $t2, 0x1D94($at)
    ctx->r10 = ADD32(ctx->r1, 0X1D94);
    // 0x80275DCC: nop

    // 0x80275DD0: jr          $t2
    // 0x80275DD4: nop

    switch (jr_addend_80275DD0 >> 2) {
        case 0: goto L_80275DD8; break;
        case 1: goto L_80275E14; break;
        case 2: goto L_80275E14; break;
        case 3: goto L_80275FB8; break;
        case 4: goto L_80275FB8; break;
        case 5: goto L_80275FB8; break;
        default: switch_error(__func__, 0x80275DD0, 0x80281D94);
    }
    // 0x80275DD4: nop

L_80275DD8:
    // 0x80275DD8: jal         0x80035770
    // 0x80275DDC: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80035770(rdram, ctx);
        goto after_45;
    // 0x80275DDC: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_45:
    // 0x80275DE0: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275DE4: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80275DE8: lb          $a0, 0x57($a3)
    ctx->r4 = MEM_B(ctx->r7, 0X57);
    // 0x80275DEC: jal         0x80276E78
    // 0x80275DF0: sb          $t3, 0x58($a3)
    MEM_B(0X58, ctx->r7) = ctx->r11;
    func_80276E78(rdram, ctx);
        goto after_46;
    // 0x80275DF0: sb          $t3, 0x58($a3)
    MEM_B(0X58, ctx->r7) = ctx->r11;
    after_46:
    // 0x80275DF4: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275DF8: bne         $v0, $zero, L_80275E0C
    if (ctx->r2 != 0) {
        // 0x80275DFC: addiu       $t5, $zero, 0x2
        ctx->r13 = ADD32(0, 0X2);
            goto L_80275E0C;
    }
    // 0x80275DFC: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x80275E00: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80275E04: b           L_80275FB8
    // 0x80275E08: sb          $t4, 0x55($a3)
    MEM_B(0X55, ctx->r7) = ctx->r12;
        goto L_80275FB8;
    // 0x80275E08: sb          $t4, 0x55($a3)
    MEM_B(0X55, ctx->r7) = ctx->r12;
L_80275E0C:
    // 0x80275E0C: b           L_80275FB8
    // 0x80275E10: sb          $t5, 0x55($a3)
    MEM_B(0X55, ctx->r7) = ctx->r13;
        goto L_80275FB8;
    // 0x80275E10: sb          $t5, 0x55($a3)
    MEM_B(0X55, ctx->r7) = ctx->r13;
L_80275E14:
    // 0x80275E14: jal         0x80035770
    // 0x80275E18: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80035770(rdram, ctx);
        goto after_47;
    // 0x80275E18: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_47:
    // 0x80275E1C: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275E20: nop

    // 0x80275E24: lb          $t6, 0x58($a3)
    ctx->r14 = MEM_B(ctx->r7, 0X58);
    // 0x80275E28: nop

    // 0x80275E2C: bne         $t6, $zero, L_80275E84
    if (ctx->r14 != 0) {
        // 0x80275E30: nop
    
            goto L_80275E84;
    }
    // 0x80275E30: nop

    // 0x80275E34: jal         0x80276EAC
    // 0x80275E38: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80276EAC(rdram, ctx);
        goto after_48;
    // 0x80275E38: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_48:
    // 0x80275E3C: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275E40: bne         $v0, $zero, L_80275E68
    if (ctx->r2 != 0) {
        // 0x80275E44: addiu       $t8, $zero, 0x4
        ctx->r24 = ADD32(0, 0X4);
            goto L_80275E68;
    }
    // 0x80275E44: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x80275E48: addiu       $t7, $zero, 0x6
    ctx->r15 = ADD32(0, 0X6);
    // 0x80275E4C: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80275E50: sb          $t7, 0x55($a3)
    MEM_B(0X55, ctx->r7) = ctx->r15;
    // 0x80275E54: addiu       $a0, $a0, 0x6F20
    ctx->r4 = ADD32(ctx->r4, 0X6F20);
    // 0x80275E58: jal         0x8002989C
    // 0x80275E5C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_8002989C(rdram, ctx);
        goto after_49;
    // 0x80275E5C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_49:
    // 0x80275E60: b           L_80275FBC
    // 0x80275E64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x80275E64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80275E68:
    // 0x80275E68: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80275E6C: sb          $t8, 0x55($a3)
    MEM_B(0X55, ctx->r7) = ctx->r24;
    // 0x80275E70: addiu       $a0, $a0, 0x7004
    ctx->r4 = ADD32(ctx->r4, 0X7004);
    // 0x80275E74: jal         0x8002989C
    // 0x80275E78: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    func_8002989C(rdram, ctx);
        goto after_50;
    // 0x80275E78: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_50:
    // 0x80275E7C: b           L_80275FBC
    // 0x80275E80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x80275E80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80275E84:
    // 0x80275E84: b           L_80275FB8
    // 0x80275E88: sb          $zero, 0x55($a3)
    MEM_B(0X55, ctx->r7) = 0;
        goto L_80275FB8;
    // 0x80275E88: sb          $zero, 0x55($a3)
    MEM_B(0X55, ctx->r7) = 0;
    // 0x80275E8C: lbu         $t9, 0x56($a3)
    ctx->r25 = MEM_BU(ctx->r7, 0X56);
    // 0x80275E90: nop

    // 0x80275E94: sltiu       $at, $t9, 0x5
    ctx->r1 = ctx->r25 < 0X5 ? 1 : 0;
    // 0x80275E98: beq         $at, $zero, L_80275FB8
    if (ctx->r1 == 0) {
        // 0x80275E9C: sll         $t9, $t9, 2
        ctx->r25 = S32(ctx->r25 << 2);
            goto L_80275FB8;
    }
    // 0x80275E9C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80275EA0: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80275EA4: addu        $at, $at, $t9
    gpr jr_addend_80275EB0 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80275EA8: lw          $t9, 0x1DAC($at)
    ctx->r25 = ADD32(ctx->r1, 0X1DAC);
    // 0x80275EAC: nop

    // 0x80275EB0: jr          $t9
    // 0x80275EB4: nop

    switch (jr_addend_80275EB0 >> 2) {
        case 0: goto L_80275EB8; break;
        case 1: goto L_80275F1C; break;
        case 2: goto L_80275FB8; break;
        case 3: goto L_80275FB8; break;
        case 4: goto L_80275FB8; break;
        default: switch_error(__func__, 0x80275EB0, 0x80281DAC);
    }
    // 0x80275EB4: nop

L_80275EB8:
    // 0x80275EB8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80275EBC: sb          $t0, 0x58($a3)
    MEM_B(0X58, ctx->r7) = ctx->r8;
    // 0x80275EC0: lb          $a0, 0x57($a3)
    ctx->r4 = MEM_B(ctx->r7, 0X57);
    // 0x80275EC4: jal         0x80276E78
    // 0x80275EC8: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80276E78(rdram, ctx);
        goto after_51;
    // 0x80275EC8: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_51:
    // 0x80275ECC: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275ED0: bne         $v0, $zero, L_80275F04
    if (ctx->r2 != 0) {
        // 0x80275ED4: nop
    
            goto L_80275F04;
    }
    // 0x80275ED4: nop

    // 0x80275ED8: jal         0x800357AC
    // 0x80275EDC: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_800357AC(rdram, ctx);
        goto after_52;
    // 0x80275EDC: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_52:
    // 0x80275EE0: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275EE4: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x80275EE8: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80275EEC: addiu       $a0, $a0, 0x705C
    ctx->r4 = ADD32(ctx->r4, 0X705C);
    // 0x80275EF0: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80275EF4: jal         0x8002989C
    // 0x80275EF8: sb          $t1, 0x56($a3)
    MEM_B(0X56, ctx->r7) = ctx->r9;
    func_8002989C(rdram, ctx);
        goto after_53;
    // 0x80275EF8: sb          $t1, 0x56($a3)
    MEM_B(0X56, ctx->r7) = ctx->r9;
    after_53:
    // 0x80275EFC: b           L_80275FBC
    // 0x80275F00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x80275F00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80275F04:
    // 0x80275F04: jal         0x80035770
    // 0x80275F08: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80035770(rdram, ctx);
        goto after_54;
    // 0x80275F08: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_54:
    // 0x80275F0C: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275F10: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80275F14: b           L_80275FB8
    // 0x80275F18: sb          $t2, 0x56($a3)
    MEM_B(0X56, ctx->r7) = ctx->r10;
        goto L_80275FB8;
    // 0x80275F18: sb          $t2, 0x56($a3)
    MEM_B(0X56, ctx->r7) = ctx->r10;
L_80275F1C:
    // 0x80275F1C: jal         0x80035770
    // 0x80275F20: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80035770(rdram, ctx);
        goto after_55;
    // 0x80275F20: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_55:
    // 0x80275F24: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275F28: nop

    // 0x80275F2C: lb          $t3, 0x58($a3)
    ctx->r11 = MEM_B(ctx->r7, 0X58);
    // 0x80275F30: nop

    // 0x80275F34: bne         $t3, $zero, L_80275FB4
    if (ctx->r11 != 0) {
        // 0x80275F38: nop
    
            goto L_80275FB4;
    }
    // 0x80275F38: nop

    // 0x80275F3C: jal         0x80276FB0
    // 0x80275F40: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80276FB0(rdram, ctx);
        goto after_56;
    // 0x80275F40: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_56:
    // 0x80275F44: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275F48: bne         $v0, $zero, L_80275F98
    if (ctx->r2 != 0) {
        // 0x80275F4C: addiu       $t8, $zero, 0x4
        ctx->r24 = ADD32(0, 0X4);
            goto L_80275F98;
    }
    // 0x80275F4C: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x80275F50: lb          $t5, 0x57($a3)
    ctx->r13 = MEM_B(ctx->r7, 0X57);
    // 0x80275F54: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x80275F58: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80275F5C: sb          $t4, 0x56($a3)
    MEM_B(0X56, ctx->r7) = ctx->r12;
    // 0x80275F60: lui         $v0, 0x8029
    ctx->r2 = S32(0X8029 << 16);
    // 0x80275F64: addiu       $v1, $v1, 0x1CF0
    ctx->r3 = ADD32(ctx->r3, 0X1CF0);
    // 0x80275F68: addu        $v0, $v0, $t5
    ctx->r2 = ADD32(ctx->r2, ctx->r13);
    // 0x80275F6C: lb          $v0, -0x79C8($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X79C8);
    // 0x80275F70: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x80275F74: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80275F78: sb          $v0, 0x3A($t6)
    MEM_B(0X3A, ctx->r14) = ctx->r2;
    // 0x80275F7C: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x80275F80: addiu       $a0, $a0, 0x7030
    ctx->r4 = ADD32(ctx->r4, 0X7030);
    // 0x80275F84: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80275F88: jal         0x8002989C
    // 0x80275F8C: sb          $v0, 0x3B($t7)
    MEM_B(0X3B, ctx->r15) = ctx->r2;
    func_8002989C(rdram, ctx);
        goto after_57;
    // 0x80275F8C: sb          $v0, 0x3B($t7)
    MEM_B(0X3B, ctx->r15) = ctx->r2;
    after_57:
    // 0x80275F90: b           L_80275FBC
    // 0x80275F94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x80275F94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80275F98:
    // 0x80275F98: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80275F9C: sb          $t8, 0x56($a3)
    MEM_B(0X56, ctx->r7) = ctx->r24;
    // 0x80275FA0: addiu       $a0, $a0, 0x7030
    ctx->r4 = ADD32(ctx->r4, 0X7030);
    // 0x80275FA4: jal         0x8002989C
    // 0x80275FA8: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    func_8002989C(rdram, ctx);
        goto after_58;
    // 0x80275FA8: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_58:
    // 0x80275FAC: b           L_80275FBC
    // 0x80275FB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x80275FB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80275FB4:
    // 0x80275FB4: sb          $zero, 0x56($a3)
    MEM_B(0X56, ctx->r7) = 0;
L_80275FB8:
    // 0x80275FB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80275FBC:
    // 0x80275FBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80275FC0: jr          $ra
    // 0x80275FC4: nop

    return;
    // 0x80275FC4: nop

;}
RECOMP_FUNC void func_80275B40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80275B40: lb          $t2, -0x326C($t2)
    ctx->r10 = MEM_B(ctx->r10, -0X326C);
    // 0x80275B44: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x80275B48: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80275B4C: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x80275B50: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x80275B54: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x80275B58: addiu       $t5, $t5, -0x3770
    ctx->r13 = ADD32(ctx->r13, -0X3770);
    // 0x80275B5C: addu        $t4, $t3, $at
    ctx->r12 = ADD32(ctx->r11, ctx->r1);
    // 0x80275B60: addu        $v0, $t4, $t5
    ctx->r2 = ADD32(ctx->r12, ctx->r13);
    // 0x80275B64: lbu         $t6, 0x70A($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X70A);
    // 0x80275B68: nop

    // 0x80275B6C: ori         $t7, $t6, 0x2
    ctx->r15 = ctx->r14 | 0X2;
    // 0x80275B70: jal         0x802773BC
    // 0x80275B74: sb          $t7, 0x70A($v0)
    MEM_B(0X70A, ctx->r2) = ctx->r15;
    func_802773BC(rdram, ctx);
        goto after_0;
    // 0x80275B74: sb          $t7, 0x70A($v0)
    MEM_B(0X70A, ctx->r2) = ctx->r15;
    after_0:
    // 0x80275B78: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275B7C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80275B80: jal         0x802771FC
    // 0x80275B84: sb          $t8, 0x3E($a3)
    MEM_B(0X3E, ctx->r7) = ctx->r24;
    func_802771FC(rdram, ctx);
        goto after_1;
    // 0x80275B84: sb          $t8, 0x3E($a3)
    MEM_B(0X3E, ctx->r7) = ctx->r24;
    after_1:
    // 0x80275B88: b           L_80275FBC
    // 0x80275B8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x80275B8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80275B90: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x80275B94: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    // 0x80275B98: jal         0x80049E40
    // 0x80275B9C: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80049E40(rdram, ctx);
        goto after_2;
    // 0x80275B9C: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_2:
    // 0x80275BA0: jal         0x802772AC
    // 0x80275BA4: nop

    func_802772AC(rdram, ctx);
        goto after_3;
    // 0x80275BA4: nop

    after_3:
    // 0x80275BA8: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275BAC: b           L_80275FB8
    // 0x80275BB0: sb          $zero, 0x3E($a3)
    MEM_B(0X3E, ctx->r7) = 0;
        goto L_80275FB8;
    // 0x80275BB0: sb          $zero, 0x3E($a3)
    MEM_B(0X3E, ctx->r7) = 0;
    // 0x80275BB4: jal         0x80035770
    // 0x80275BB8: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80035770(rdram, ctx);
        goto after_4;
    // 0x80275BB8: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_4:
    // 0x80275BBC: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275BC0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80275BC4: lb          $v0, 0x42($a3)
    ctx->r2 = MEM_B(ctx->r7, 0X42);
    // 0x80275BC8: nop

    // 0x80275BCC: beq         $v0, $zero, L_80275BF0
    if (ctx->r2 == 0) {
        // 0x80275BD0: nop
    
            goto L_80275BF0;
    }
    // 0x80275BD0: nop

    // 0x80275BD4: beq         $v0, $at, L_80275C00
    if (ctx->r2 == ctx->r1) {
        // 0x80275BD8: addiu       $a0, $zero, 0xF00
        ctx->r4 = ADD32(0, 0XF00);
            goto L_80275C00;
    }
    // 0x80275BD8: addiu       $a0, $zero, 0xF00
    ctx->r4 = ADD32(0, 0XF00);
    // 0x80275BDC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80275BE0: beq         $v0, $at, L_80275C64
    if (ctx->r2 == ctx->r1) {
        // 0x80275BE4: addiu       $a0, $zero, 0xF00
        ctx->r4 = ADD32(0, 0XF00);
            goto L_80275C64;
    }
    // 0x80275BE4: addiu       $a0, $zero, 0xF00
    ctx->r4 = ADD32(0, 0XF00);
    // 0x80275BE8: b           L_80275FBC
    // 0x80275BEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x80275BEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80275BF0:
    // 0x80275BF0: jal         0x802777C8
    // 0x80275BF4: nop

    func_802777C8(rdram, ctx);
        goto after_5;
    // 0x80275BF4: nop

    after_5:
    // 0x80275BF8: b           L_80275FBC
    // 0x80275BFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x80275BFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80275C00:
    // 0x80275C00: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x80275C04: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80275C08: jal         0x80049E40
    // 0x80275C0C: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80049E40(rdram, ctx);
        goto after_6;
    // 0x80275C0C: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_6:
    // 0x80275C10: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x80275C14: lb          $t9, -0x326C($t9)
    ctx->r25 = MEM_B(ctx->r25, -0X326C);
    // 0x80275C18: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x80275C1C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80275C20: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x80275C24: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x80275C28: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x80275C2C: addiu       $t2, $t2, -0x3770
    ctx->r10 = ADD32(ctx->r10, -0X3770);
    // 0x80275C30: addu        $t1, $t0, $at
    ctx->r9 = ADD32(ctx->r8, ctx->r1);
    // 0x80275C34: addu        $v0, $t1, $t2
    ctx->r2 = ADD32(ctx->r9, ctx->r10);
    // 0x80275C38: lbu         $t3, 0x70A($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X70A);
    // 0x80275C3C: nop

    // 0x80275C40: ori         $t4, $t3, 0x2
    ctx->r12 = ctx->r11 | 0X2;
    // 0x80275C44: jal         0x802773BC
    // 0x80275C48: sb          $t4, 0x70A($v0)
    MEM_B(0X70A, ctx->r2) = ctx->r12;
    func_802773BC(rdram, ctx);
        goto after_7;
    // 0x80275C48: sb          $t4, 0x70A($v0)
    MEM_B(0X70A, ctx->r2) = ctx->r12;
    after_7:
    // 0x80275C4C: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275C50: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x80275C54: jal         0x802771FC
    // 0x80275C58: sb          $t5, 0x42($a3)
    MEM_B(0X42, ctx->r7) = ctx->r13;
    func_802771FC(rdram, ctx);
        goto after_8;
    // 0x80275C58: sb          $t5, 0x42($a3)
    MEM_B(0X42, ctx->r7) = ctx->r13;
    after_8:
    // 0x80275C5C: b           L_80275FBC
    // 0x80275C60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x80275C60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80275C64:
    // 0x80275C64: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x80275C68: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    // 0x80275C6C: jal         0x80049E40
    // 0x80275C70: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80049E40(rdram, ctx);
        goto after_9;
    // 0x80275C70: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_9:
    // 0x80275C74: jal         0x802772AC
    // 0x80275C78: nop

    func_802772AC(rdram, ctx);
        goto after_10;
    // 0x80275C78: nop

    after_10:
    // 0x80275C7C: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275C80: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80275C84: b           L_80275FB8
    // 0x80275C88: sb          $t6, 0x42($a3)
    MEM_B(0X42, ctx->r7) = ctx->r14;
        goto L_80275FB8;
    // 0x80275C88: sb          $t6, 0x42($a3)
    MEM_B(0X42, ctx->r7) = ctx->r14;
    // 0x80275C8C: lb          $t7, 0x44($a3)
    ctx->r15 = MEM_B(ctx->r7, 0X44);
    // 0x80275C90: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x80275C94: bne         $t7, $at, L_80275FBC
    if (ctx->r15 != ctx->r1) {
        // 0x80275C98: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80275FBC;
    }
    // 0x80275C98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80275C9C: jal         0x80035770
    // 0x80275CA0: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80035770(rdram, ctx);
        goto after_11;
    // 0x80275CA0: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_11:
    // 0x80275CA4: jal         0x802777C8
    // 0x80275CA8: nop

    func_802777C8(rdram, ctx);
        goto after_12;
    // 0x80275CA8: nop

    after_12:
    // 0x80275CAC: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275CB0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80275CB4: b           L_80275FB8
    // 0x80275CB8: sb          $t8, 0x54($a3)
    MEM_B(0X54, ctx->r7) = ctx->r24;
        goto L_80275FB8;
    // 0x80275CB8: sb          $t8, 0x54($a3)
    MEM_B(0X54, ctx->r7) = ctx->r24;
    // 0x80275CBC: jal         0x80035770
    // 0x80275CC0: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80035770(rdram, ctx);
        goto after_13;
    // 0x80275CC0: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_13:
    // 0x80275CC4: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275CC8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80275CCC: lb          $v0, 0x45($a3)
    ctx->r2 = MEM_B(ctx->r7, 0X45);
    // 0x80275CD0: nop

    // 0x80275CD4: beq         $v0, $zero, L_80275CEC
    if (ctx->r2 == 0) {
        // 0x80275CD8: nop
    
            goto L_80275CEC;
    }
    // 0x80275CD8: nop

    // 0x80275CDC: beq         $v0, $at, L_80275D30
    if (ctx->r2 == ctx->r1) {
        // 0x80275CE0: nop
    
            goto L_80275D30;
    }
    // 0x80275CE0: nop

    // 0x80275CE4: b           L_80275D44
    // 0x80275CE8: nop

        goto L_80275D44;
    // 0x80275CE8: nop

L_80275CEC:
    // 0x80275CEC: lb          $t9, 0x46($a3)
    ctx->r25 = MEM_B(ctx->r7, 0X46);
    // 0x80275CF0: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x80275CF4: bne         $t9, $at, L_80275D14
    if (ctx->r25 != ctx->r1) {
        // 0x80275CF8: nop
    
            goto L_80275D14;
    }
    // 0x80275CF8: nop

    // 0x80275CFC: jal         0x802777C8
    // 0x80275D00: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_802777C8(rdram, ctx);
        goto after_14;
    // 0x80275D00: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_14:
    // 0x80275D04: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275D08: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80275D0C: b           L_80275D44
    // 0x80275D10: sb          $t0, 0x54($a3)
    MEM_B(0X54, ctx->r7) = ctx->r8;
        goto L_80275D44;
    // 0x80275D10: sb          $t0, 0x54($a3)
    MEM_B(0X54, ctx->r7) = ctx->r8;
L_80275D14:
    // 0x80275D14: jal         0x80277908
    // 0x80275D18: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80277908(rdram, ctx);
        goto after_15;
    // 0x80275D18: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_15:
    // 0x80275D1C: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275D20: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80275D24: sb          $zero, 0x48($a3)
    MEM_B(0X48, ctx->r7) = 0;
    // 0x80275D28: b           L_80275D44
    // 0x80275D2C: sb          $t1, 0x45($a3)
    MEM_B(0X45, ctx->r7) = ctx->r9;
        goto L_80275D44;
    // 0x80275D2C: sb          $t1, 0x45($a3)
    MEM_B(0X45, ctx->r7) = ctx->r9;
L_80275D30:
    // 0x80275D30: jal         0x8027B068
    // 0x80275D34: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_8027B068(rdram, ctx);
        goto after_16;
    // 0x80275D34: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_16:
    // 0x80275D38: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275D3C: nop

    // 0x80275D40: sb          $zero, 0x45($a3)
    MEM_B(0X45, ctx->r7) = 0;
L_80275D44:
    // 0x80275D44: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80275D48: addiu       $a0, $a0, 0x5510
    ctx->r4 = ADD32(ctx->r4, 0X5510);
    // 0x80275D4C: jal         0x8002989C
    // 0x80275D50: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_8002989C(rdram, ctx);
        goto after_17;
    // 0x80275D50: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_17:
    // 0x80275D54: b           L_80275FBC
    // 0x80275D58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x80275D58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80275D5C: jal         0x80035770
    // 0x80275D60: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80035770(rdram, ctx);
        goto after_18;
    // 0x80275D60: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_18:
    // 0x80275D64: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275D68: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80275D6C: lb          $v0, 0x4C($a3)
    ctx->r2 = MEM_B(ctx->r7, 0X4C);
    // 0x80275D70: nop

    // 0x80275D74: beq         $v0, $zero, L_80275D8C
    if (ctx->r2 == 0) {
        // 0x80275D78: nop
    
            goto L_80275D8C;
    }
    // 0x80275D78: nop

    // 0x80275D7C: beq         $v0, $v1, L_80275DA0
    if (ctx->r2 == ctx->r3) {
        // 0x80275D80: nop
    
            goto L_80275DA0;
    }
    // 0x80275D80: nop

    // 0x80275D84: b           L_80275FBC
    // 0x80275D88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x80275D88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80275D8C:
    // 0x80275D8C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80275D90: sb          $v0, 0x4C($a3)
    MEM_B(0X4C, ctx->r7) = ctx->r2;
    // 0x80275D94: sb          $zero, 0x4E($a3)
    MEM_B(0X4E, ctx->r7) = 0;
    // 0x80275D98: b           L_80275FB8
    // 0x80275D9C: sb          $v0, 0x4F($a3)
    MEM_B(0X4F, ctx->r7) = ctx->r2;
        goto L_80275FB8;
    // 0x80275D9C: sb          $v0, 0x4F($a3)
    MEM_B(0X4F, ctx->r7) = ctx->r2;
L_80275DA0:
    // 0x80275DA0: sb          $zero, 0x4C($a3)
    MEM_B(0X4C, ctx->r7) = 0;
    // 0x80275DA4: b           L_80275FB8
    // 0x80275DA8: sb          $v1, 0x50($a3)
    MEM_B(0X50, ctx->r7) = ctx->r3;
        goto L_80275FB8;
    // 0x80275DA8: sb          $v1, 0x50($a3)
    MEM_B(0X50, ctx->r7) = ctx->r3;
    // 0x80275DAC: lbu         $t2, 0x55($a3)
    ctx->r10 = MEM_BU(ctx->r7, 0X55);
    // 0x80275DB0: nop

    // 0x80275DB4: sltiu       $at, $t2, 0x6
    ctx->r1 = ctx->r10 < 0X6 ? 1 : 0;
    // 0x80275DB8: beq         $at, $zero, L_80275FB8
    if (ctx->r1 == 0) {
        // 0x80275DBC: sll         $t2, $t2, 2
        ctx->r10 = S32(ctx->r10 << 2);
            goto L_80275FB8;
    }
    // 0x80275DBC: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80275DC0: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80275DC4: addu        $at, $at, $t2
    gpr jr_addend_80275DD0 = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80275DC8: lw          $t2, 0x1D94($at)
    ctx->r10 = ADD32(ctx->r1, 0X1D94);
    // 0x80275DCC: nop

    // 0x80275DD0: jr          $t2
    // 0x80275DD4: nop

    switch (jr_addend_80275DD0 >> 2) {
        case 0: goto L_80275DD8; break;
        case 1: goto L_80275E14; break;
        case 2: goto L_80275E14; break;
        case 3: goto L_80275FB8; break;
        case 4: goto L_80275FB8; break;
        case 5: goto L_80275FB8; break;
        default: switch_error(__func__, 0x80275DD0, 0x80281D94);
    }
    // 0x80275DD4: nop

L_80275DD8:
    // 0x80275DD8: jal         0x80035770
    // 0x80275DDC: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80035770(rdram, ctx);
        goto after_19;
    // 0x80275DDC: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_19:
    // 0x80275DE0: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275DE4: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80275DE8: lb          $a0, 0x57($a3)
    ctx->r4 = MEM_B(ctx->r7, 0X57);
    // 0x80275DEC: jal         0x80276E78
    // 0x80275DF0: sb          $t3, 0x58($a3)
    MEM_B(0X58, ctx->r7) = ctx->r11;
    func_80276E78(rdram, ctx);
        goto after_20;
    // 0x80275DF0: sb          $t3, 0x58($a3)
    MEM_B(0X58, ctx->r7) = ctx->r11;
    after_20:
    // 0x80275DF4: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275DF8: bne         $v0, $zero, L_80275E0C
    if (ctx->r2 != 0) {
        // 0x80275DFC: addiu       $t5, $zero, 0x2
        ctx->r13 = ADD32(0, 0X2);
            goto L_80275E0C;
    }
    // 0x80275DFC: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x80275E00: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80275E04: b           L_80275FB8
    // 0x80275E08: sb          $t4, 0x55($a3)
    MEM_B(0X55, ctx->r7) = ctx->r12;
        goto L_80275FB8;
    // 0x80275E08: sb          $t4, 0x55($a3)
    MEM_B(0X55, ctx->r7) = ctx->r12;
L_80275E0C:
    // 0x80275E0C: b           L_80275FB8
    // 0x80275E10: sb          $t5, 0x55($a3)
    MEM_B(0X55, ctx->r7) = ctx->r13;
        goto L_80275FB8;
    // 0x80275E10: sb          $t5, 0x55($a3)
    MEM_B(0X55, ctx->r7) = ctx->r13;
L_80275E14:
    // 0x80275E14: jal         0x80035770
    // 0x80275E18: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80035770(rdram, ctx);
        goto after_21;
    // 0x80275E18: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_21:
    // 0x80275E1C: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275E20: nop

    // 0x80275E24: lb          $t6, 0x58($a3)
    ctx->r14 = MEM_B(ctx->r7, 0X58);
    // 0x80275E28: nop

    // 0x80275E2C: bne         $t6, $zero, L_80275E84
    if (ctx->r14 != 0) {
        // 0x80275E30: nop
    
            goto L_80275E84;
    }
    // 0x80275E30: nop

    // 0x80275E34: jal         0x80276EAC
    // 0x80275E38: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80276EAC(rdram, ctx);
        goto after_22;
    // 0x80275E38: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_22:
    // 0x80275E3C: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275E40: bne         $v0, $zero, L_80275E68
    if (ctx->r2 != 0) {
        // 0x80275E44: addiu       $t8, $zero, 0x4
        ctx->r24 = ADD32(0, 0X4);
            goto L_80275E68;
    }
    // 0x80275E44: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x80275E48: addiu       $t7, $zero, 0x6
    ctx->r15 = ADD32(0, 0X6);
    // 0x80275E4C: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80275E50: sb          $t7, 0x55($a3)
    MEM_B(0X55, ctx->r7) = ctx->r15;
    // 0x80275E54: addiu       $a0, $a0, 0x6F20
    ctx->r4 = ADD32(ctx->r4, 0X6F20);
    // 0x80275E58: jal         0x8002989C
    // 0x80275E5C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_8002989C(rdram, ctx);
        goto after_23;
    // 0x80275E5C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_23:
    // 0x80275E60: b           L_80275FBC
    // 0x80275E64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x80275E64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80275E68:
    // 0x80275E68: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80275E6C: sb          $t8, 0x55($a3)
    MEM_B(0X55, ctx->r7) = ctx->r24;
    // 0x80275E70: addiu       $a0, $a0, 0x7004
    ctx->r4 = ADD32(ctx->r4, 0X7004);
    // 0x80275E74: jal         0x8002989C
    // 0x80275E78: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    func_8002989C(rdram, ctx);
        goto after_24;
    // 0x80275E78: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_24:
    // 0x80275E7C: b           L_80275FBC
    // 0x80275E80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x80275E80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80275E84:
    // 0x80275E84: b           L_80275FB8
    // 0x80275E88: sb          $zero, 0x55($a3)
    MEM_B(0X55, ctx->r7) = 0;
        goto L_80275FB8;
    // 0x80275E88: sb          $zero, 0x55($a3)
    MEM_B(0X55, ctx->r7) = 0;
    // 0x80275E8C: lbu         $t9, 0x56($a3)
    ctx->r25 = MEM_BU(ctx->r7, 0X56);
    // 0x80275E90: nop

    // 0x80275E94: sltiu       $at, $t9, 0x5
    ctx->r1 = ctx->r25 < 0X5 ? 1 : 0;
    // 0x80275E98: beq         $at, $zero, L_80275FB8
    if (ctx->r1 == 0) {
        // 0x80275E9C: sll         $t9, $t9, 2
        ctx->r25 = S32(ctx->r25 << 2);
            goto L_80275FB8;
    }
    // 0x80275E9C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80275EA0: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80275EA4: addu        $at, $at, $t9
    gpr jr_addend_80275EB0 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80275EA8: lw          $t9, 0x1DAC($at)
    ctx->r25 = ADD32(ctx->r1, 0X1DAC);
    // 0x80275EAC: nop

    // 0x80275EB0: jr          $t9
    // 0x80275EB4: nop

    switch (jr_addend_80275EB0 >> 2) {
        case 0: goto L_80275EB8; break;
        case 1: goto L_80275F1C; break;
        case 2: goto L_80275FB8; break;
        case 3: goto L_80275FB8; break;
        case 4: goto L_80275FB8; break;
        default: switch_error(__func__, 0x80275EB0, 0x80281DAC);
    }
    // 0x80275EB4: nop

L_80275EB8:
    // 0x80275EB8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80275EBC: sb          $t0, 0x58($a3)
    MEM_B(0X58, ctx->r7) = ctx->r8;
    // 0x80275EC0: lb          $a0, 0x57($a3)
    ctx->r4 = MEM_B(ctx->r7, 0X57);
    // 0x80275EC4: jal         0x80276E78
    // 0x80275EC8: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80276E78(rdram, ctx);
        goto after_25;
    // 0x80275EC8: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_25:
    // 0x80275ECC: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275ED0: bne         $v0, $zero, L_80275F04
    if (ctx->r2 != 0) {
        // 0x80275ED4: nop
    
            goto L_80275F04;
    }
    // 0x80275ED4: nop

    // 0x80275ED8: jal         0x800357AC
    // 0x80275EDC: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_800357AC(rdram, ctx);
        goto after_26;
    // 0x80275EDC: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_26:
    // 0x80275EE0: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275EE4: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x80275EE8: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80275EEC: addiu       $a0, $a0, 0x705C
    ctx->r4 = ADD32(ctx->r4, 0X705C);
    // 0x80275EF0: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80275EF4: jal         0x8002989C
    // 0x80275EF8: sb          $t1, 0x56($a3)
    MEM_B(0X56, ctx->r7) = ctx->r9;
    func_8002989C(rdram, ctx);
        goto after_27;
    // 0x80275EF8: sb          $t1, 0x56($a3)
    MEM_B(0X56, ctx->r7) = ctx->r9;
    after_27:
    // 0x80275EFC: b           L_80275FBC
    // 0x80275F00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x80275F00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80275F04:
    // 0x80275F04: jal         0x80035770
    // 0x80275F08: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80035770(rdram, ctx);
        goto after_28;
    // 0x80275F08: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_28:
    // 0x80275F0C: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275F10: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80275F14: b           L_80275FB8
    // 0x80275F18: sb          $t2, 0x56($a3)
    MEM_B(0X56, ctx->r7) = ctx->r10;
        goto L_80275FB8;
    // 0x80275F18: sb          $t2, 0x56($a3)
    MEM_B(0X56, ctx->r7) = ctx->r10;
L_80275F1C:
    // 0x80275F1C: jal         0x80035770
    // 0x80275F20: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80035770(rdram, ctx);
        goto after_29;
    // 0x80275F20: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_29:
    // 0x80275F24: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275F28: nop

    // 0x80275F2C: lb          $t3, 0x58($a3)
    ctx->r11 = MEM_B(ctx->r7, 0X58);
    // 0x80275F30: nop

    // 0x80275F34: bne         $t3, $zero, L_80275FB4
    if (ctx->r11 != 0) {
        // 0x80275F38: nop
    
            goto L_80275FB4;
    }
    // 0x80275F38: nop

    // 0x80275F3C: jal         0x80276FB0
    // 0x80275F40: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80276FB0(rdram, ctx);
        goto after_30;
    // 0x80275F40: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_30:
    // 0x80275F44: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275F48: bne         $v0, $zero, L_80275F98
    if (ctx->r2 != 0) {
        // 0x80275F4C: addiu       $t8, $zero, 0x4
        ctx->r24 = ADD32(0, 0X4);
            goto L_80275F98;
    }
    // 0x80275F4C: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x80275F50: lb          $t5, 0x57($a3)
    ctx->r13 = MEM_B(ctx->r7, 0X57);
    // 0x80275F54: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x80275F58: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80275F5C: sb          $t4, 0x56($a3)
    MEM_B(0X56, ctx->r7) = ctx->r12;
    // 0x80275F60: lui         $v0, 0x8029
    ctx->r2 = S32(0X8029 << 16);
    // 0x80275F64: addiu       $v1, $v1, 0x1CF0
    ctx->r3 = ADD32(ctx->r3, 0X1CF0);
    // 0x80275F68: addu        $v0, $v0, $t5
    ctx->r2 = ADD32(ctx->r2, ctx->r13);
    // 0x80275F6C: lb          $v0, -0x79C8($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X79C8);
    // 0x80275F70: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x80275F74: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80275F78: sb          $v0, 0x3A($t6)
    MEM_B(0X3A, ctx->r14) = ctx->r2;
    // 0x80275F7C: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x80275F80: addiu       $a0, $a0, 0x7030
    ctx->r4 = ADD32(ctx->r4, 0X7030);
    // 0x80275F84: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80275F88: jal         0x8002989C
    // 0x80275F8C: sb          $v0, 0x3B($t7)
    MEM_B(0X3B, ctx->r15) = ctx->r2;
    func_8002989C(rdram, ctx);
        goto after_31;
    // 0x80275F8C: sb          $v0, 0x3B($t7)
    MEM_B(0X3B, ctx->r15) = ctx->r2;
    after_31:
    // 0x80275F90: b           L_80275FBC
    // 0x80275F94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x80275F94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80275F98:
    // 0x80275F98: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80275F9C: sb          $t8, 0x56($a3)
    MEM_B(0X56, ctx->r7) = ctx->r24;
    // 0x80275FA0: addiu       $a0, $a0, 0x7030
    ctx->r4 = ADD32(ctx->r4, 0X7030);
    // 0x80275FA4: jal         0x8002989C
    // 0x80275FA8: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    func_8002989C(rdram, ctx);
        goto after_32;
    // 0x80275FA8: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_32:
    // 0x80275FAC: b           L_80275FBC
    // 0x80275FB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x80275FB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80275FB4:
    // 0x80275FB4: sb          $zero, 0x56($a3)
    MEM_B(0X56, ctx->r7) = 0;
L_80275FB8:
    // 0x80275FB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80275FBC:
    // 0x80275FBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80275FC0: jr          $ra
    // 0x80275FC4: nop

    return;
    // 0x80275FC4: nop

;}
RECOMP_FUNC void func_80275CF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80275CF8: nop

    // 0x80275CFC: jal         0x802777C8
    // 0x80275D00: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_802777C8(rdram, ctx);
        goto after_0;
    // 0x80275D00: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_0:
    // 0x80275D04: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275D08: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80275D0C: b           L_80275D44
    // 0x80275D10: sb          $t0, 0x54($a3)
    MEM_B(0X54, ctx->r7) = ctx->r8;
        goto L_80275D44;
    // 0x80275D10: sb          $t0, 0x54($a3)
    MEM_B(0X54, ctx->r7) = ctx->r8;
    // 0x80275D14: jal         0x80277908
    // 0x80275D18: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80277908(rdram, ctx);
        goto after_1;
    // 0x80275D18: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_1:
    // 0x80275D1C: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275D20: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80275D24: sb          $zero, 0x48($a3)
    MEM_B(0X48, ctx->r7) = 0;
    // 0x80275D28: b           L_80275D44
    // 0x80275D2C: sb          $t1, 0x45($a3)
    MEM_B(0X45, ctx->r7) = ctx->r9;
        goto L_80275D44;
    // 0x80275D2C: sb          $t1, 0x45($a3)
    MEM_B(0X45, ctx->r7) = ctx->r9;
    // 0x80275D30: jal         0x8027B068
    // 0x80275D34: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_8027B068(rdram, ctx);
        goto after_2;
    // 0x80275D34: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_2:
    // 0x80275D38: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275D3C: nop

    // 0x80275D40: sb          $zero, 0x45($a3)
    MEM_B(0X45, ctx->r7) = 0;
L_80275D44:
    // 0x80275D44: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80275D48: addiu       $a0, $a0, 0x5510
    ctx->r4 = ADD32(ctx->r4, 0X5510);
    // 0x80275D4C: jal         0x8002989C
    // 0x80275D50: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_8002989C(rdram, ctx);
        goto after_3;
    // 0x80275D50: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_3:
    // 0x80275D54: b           L_80275FBC
    // 0x80275D58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x80275D58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80275D5C: jal         0x80035770
    // 0x80275D60: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80035770(rdram, ctx);
        goto after_4;
    // 0x80275D60: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_4:
    // 0x80275D64: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275D68: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80275D6C: lb          $v0, 0x4C($a3)
    ctx->r2 = MEM_B(ctx->r7, 0X4C);
    // 0x80275D70: nop

    // 0x80275D74: beq         $v0, $zero, L_80275D8C
    if (ctx->r2 == 0) {
        // 0x80275D78: nop
    
            goto L_80275D8C;
    }
    // 0x80275D78: nop

    // 0x80275D7C: beq         $v0, $v1, L_80275DA0
    if (ctx->r2 == ctx->r3) {
        // 0x80275D80: nop
    
            goto L_80275DA0;
    }
    // 0x80275D80: nop

    // 0x80275D84: b           L_80275FBC
    // 0x80275D88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x80275D88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80275D8C:
    // 0x80275D8C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80275D90: sb          $v0, 0x4C($a3)
    MEM_B(0X4C, ctx->r7) = ctx->r2;
    // 0x80275D94: sb          $zero, 0x4E($a3)
    MEM_B(0X4E, ctx->r7) = 0;
    // 0x80275D98: b           L_80275FB8
    // 0x80275D9C: sb          $v0, 0x4F($a3)
    MEM_B(0X4F, ctx->r7) = ctx->r2;
        goto L_80275FB8;
    // 0x80275D9C: sb          $v0, 0x4F($a3)
    MEM_B(0X4F, ctx->r7) = ctx->r2;
L_80275DA0:
    // 0x80275DA0: sb          $zero, 0x4C($a3)
    MEM_B(0X4C, ctx->r7) = 0;
    // 0x80275DA4: b           L_80275FB8
    // 0x80275DA8: sb          $v1, 0x50($a3)
    MEM_B(0X50, ctx->r7) = ctx->r3;
        goto L_80275FB8;
    // 0x80275DA8: sb          $v1, 0x50($a3)
    MEM_B(0X50, ctx->r7) = ctx->r3;
    // 0x80275DAC: lbu         $t2, 0x55($a3)
    ctx->r10 = MEM_BU(ctx->r7, 0X55);
    // 0x80275DB0: nop

    // 0x80275DB4: sltiu       $at, $t2, 0x6
    ctx->r1 = ctx->r10 < 0X6 ? 1 : 0;
    // 0x80275DB8: beq         $at, $zero, L_80275FB8
    if (ctx->r1 == 0) {
        // 0x80275DBC: sll         $t2, $t2, 2
        ctx->r10 = S32(ctx->r10 << 2);
            goto L_80275FB8;
    }
    // 0x80275DBC: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80275DC0: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80275DC4: addu        $at, $at, $t2
    gpr jr_addend_80275DD0 = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80275DC8: lw          $t2, 0x1D94($at)
    ctx->r10 = ADD32(ctx->r1, 0X1D94);
    // 0x80275DCC: nop

    // 0x80275DD0: jr          $t2
    // 0x80275DD4: nop

    switch (jr_addend_80275DD0 >> 2) {
        case 0: goto L_80275DD8; break;
        case 1: goto L_80275E14; break;
        case 2: goto L_80275E14; break;
        case 3: goto L_80275FB8; break;
        case 4: goto L_80275FB8; break;
        case 5: goto L_80275FB8; break;
        default: switch_error(__func__, 0x80275DD0, 0x80281D94);
    }
    // 0x80275DD4: nop

L_80275DD8:
    // 0x80275DD8: jal         0x80035770
    // 0x80275DDC: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80035770(rdram, ctx);
        goto after_5;
    // 0x80275DDC: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_5:
    // 0x80275DE0: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275DE4: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80275DE8: lb          $a0, 0x57($a3)
    ctx->r4 = MEM_B(ctx->r7, 0X57);
    // 0x80275DEC: jal         0x80276E78
    // 0x80275DF0: sb          $t3, 0x58($a3)
    MEM_B(0X58, ctx->r7) = ctx->r11;
    func_80276E78(rdram, ctx);
        goto after_6;
    // 0x80275DF0: sb          $t3, 0x58($a3)
    MEM_B(0X58, ctx->r7) = ctx->r11;
    after_6:
    // 0x80275DF4: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275DF8: bne         $v0, $zero, L_80275E0C
    if (ctx->r2 != 0) {
        // 0x80275DFC: addiu       $t5, $zero, 0x2
        ctx->r13 = ADD32(0, 0X2);
            goto L_80275E0C;
    }
    // 0x80275DFC: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x80275E00: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80275E04: b           L_80275FB8
    // 0x80275E08: sb          $t4, 0x55($a3)
    MEM_B(0X55, ctx->r7) = ctx->r12;
        goto L_80275FB8;
    // 0x80275E08: sb          $t4, 0x55($a3)
    MEM_B(0X55, ctx->r7) = ctx->r12;
L_80275E0C:
    // 0x80275E0C: b           L_80275FB8
    // 0x80275E10: sb          $t5, 0x55($a3)
    MEM_B(0X55, ctx->r7) = ctx->r13;
        goto L_80275FB8;
    // 0x80275E10: sb          $t5, 0x55($a3)
    MEM_B(0X55, ctx->r7) = ctx->r13;
L_80275E14:
    // 0x80275E14: jal         0x80035770
    // 0x80275E18: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80035770(rdram, ctx);
        goto after_7;
    // 0x80275E18: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_7:
    // 0x80275E1C: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275E20: nop

    // 0x80275E24: lb          $t6, 0x58($a3)
    ctx->r14 = MEM_B(ctx->r7, 0X58);
    // 0x80275E28: nop

    // 0x80275E2C: bne         $t6, $zero, L_80275E84
    if (ctx->r14 != 0) {
        // 0x80275E30: nop
    
            goto L_80275E84;
    }
    // 0x80275E30: nop

    // 0x80275E34: jal         0x80276EAC
    // 0x80275E38: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80276EAC(rdram, ctx);
        goto after_8;
    // 0x80275E38: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_8:
    // 0x80275E3C: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275E40: bne         $v0, $zero, L_80275E68
    if (ctx->r2 != 0) {
        // 0x80275E44: addiu       $t8, $zero, 0x4
        ctx->r24 = ADD32(0, 0X4);
            goto L_80275E68;
    }
    // 0x80275E44: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x80275E48: addiu       $t7, $zero, 0x6
    ctx->r15 = ADD32(0, 0X6);
    // 0x80275E4C: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80275E50: sb          $t7, 0x55($a3)
    MEM_B(0X55, ctx->r7) = ctx->r15;
    // 0x80275E54: addiu       $a0, $a0, 0x6F20
    ctx->r4 = ADD32(ctx->r4, 0X6F20);
    // 0x80275E58: jal         0x8002989C
    // 0x80275E5C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_8002989C(rdram, ctx);
        goto after_9;
    // 0x80275E5C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_9:
    // 0x80275E60: b           L_80275FBC
    // 0x80275E64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x80275E64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80275E68:
    // 0x80275E68: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80275E6C: sb          $t8, 0x55($a3)
    MEM_B(0X55, ctx->r7) = ctx->r24;
    // 0x80275E70: addiu       $a0, $a0, 0x7004
    ctx->r4 = ADD32(ctx->r4, 0X7004);
    // 0x80275E74: jal         0x8002989C
    // 0x80275E78: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    func_8002989C(rdram, ctx);
        goto after_10;
    // 0x80275E78: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_10:
    // 0x80275E7C: b           L_80275FBC
    // 0x80275E80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x80275E80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80275E84:
    // 0x80275E84: b           L_80275FB8
    // 0x80275E88: sb          $zero, 0x55($a3)
    MEM_B(0X55, ctx->r7) = 0;
        goto L_80275FB8;
    // 0x80275E88: sb          $zero, 0x55($a3)
    MEM_B(0X55, ctx->r7) = 0;
    // 0x80275E8C: lbu         $t9, 0x56($a3)
    ctx->r25 = MEM_BU(ctx->r7, 0X56);
    // 0x80275E90: nop

    // 0x80275E94: sltiu       $at, $t9, 0x5
    ctx->r1 = ctx->r25 < 0X5 ? 1 : 0;
    // 0x80275E98: beq         $at, $zero, L_80275FB8
    if (ctx->r1 == 0) {
        // 0x80275E9C: sll         $t9, $t9, 2
        ctx->r25 = S32(ctx->r25 << 2);
            goto L_80275FB8;
    }
    // 0x80275E9C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80275EA0: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80275EA4: addu        $at, $at, $t9
    gpr jr_addend_80275EB0 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80275EA8: lw          $t9, 0x1DAC($at)
    ctx->r25 = ADD32(ctx->r1, 0X1DAC);
    // 0x80275EAC: nop

    // 0x80275EB0: jr          $t9
    // 0x80275EB4: nop

    switch (jr_addend_80275EB0 >> 2) {
        case 0: goto L_80275EB8; break;
        case 1: goto L_80275F1C; break;
        case 2: goto L_80275FB8; break;
        case 3: goto L_80275FB8; break;
        case 4: goto L_80275FB8; break;
        default: switch_error(__func__, 0x80275EB0, 0x80281DAC);
    }
    // 0x80275EB4: nop

L_80275EB8:
    // 0x80275EB8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80275EBC: sb          $t0, 0x58($a3)
    MEM_B(0X58, ctx->r7) = ctx->r8;
    // 0x80275EC0: lb          $a0, 0x57($a3)
    ctx->r4 = MEM_B(ctx->r7, 0X57);
    // 0x80275EC4: jal         0x80276E78
    // 0x80275EC8: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80276E78(rdram, ctx);
        goto after_11;
    // 0x80275EC8: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_11:
    // 0x80275ECC: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275ED0: bne         $v0, $zero, L_80275F04
    if (ctx->r2 != 0) {
        // 0x80275ED4: nop
    
            goto L_80275F04;
    }
    // 0x80275ED4: nop

    // 0x80275ED8: jal         0x800357AC
    // 0x80275EDC: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_800357AC(rdram, ctx);
        goto after_12;
    // 0x80275EDC: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_12:
    // 0x80275EE0: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275EE4: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x80275EE8: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80275EEC: addiu       $a0, $a0, 0x705C
    ctx->r4 = ADD32(ctx->r4, 0X705C);
    // 0x80275EF0: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80275EF4: jal         0x8002989C
    // 0x80275EF8: sb          $t1, 0x56($a3)
    MEM_B(0X56, ctx->r7) = ctx->r9;
    func_8002989C(rdram, ctx);
        goto after_13;
    // 0x80275EF8: sb          $t1, 0x56($a3)
    MEM_B(0X56, ctx->r7) = ctx->r9;
    after_13:
    // 0x80275EFC: b           L_80275FBC
    // 0x80275F00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x80275F00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80275F04:
    // 0x80275F04: jal         0x80035770
    // 0x80275F08: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80035770(rdram, ctx);
        goto after_14;
    // 0x80275F08: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_14:
    // 0x80275F0C: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275F10: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80275F14: b           L_80275FB8
    // 0x80275F18: sb          $t2, 0x56($a3)
    MEM_B(0X56, ctx->r7) = ctx->r10;
        goto L_80275FB8;
    // 0x80275F18: sb          $t2, 0x56($a3)
    MEM_B(0X56, ctx->r7) = ctx->r10;
L_80275F1C:
    // 0x80275F1C: jal         0x80035770
    // 0x80275F20: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80035770(rdram, ctx);
        goto after_15;
    // 0x80275F20: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_15:
    // 0x80275F24: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275F28: nop

    // 0x80275F2C: lb          $t3, 0x58($a3)
    ctx->r11 = MEM_B(ctx->r7, 0X58);
    // 0x80275F30: nop

    // 0x80275F34: bne         $t3, $zero, L_80275FB4
    if (ctx->r11 != 0) {
        // 0x80275F38: nop
    
            goto L_80275FB4;
    }
    // 0x80275F38: nop

    // 0x80275F3C: jal         0x80276FB0
    // 0x80275F40: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80276FB0(rdram, ctx);
        goto after_16;
    // 0x80275F40: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_16:
    // 0x80275F44: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275F48: bne         $v0, $zero, L_80275F98
    if (ctx->r2 != 0) {
        // 0x80275F4C: addiu       $t8, $zero, 0x4
        ctx->r24 = ADD32(0, 0X4);
            goto L_80275F98;
    }
    // 0x80275F4C: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x80275F50: lb          $t5, 0x57($a3)
    ctx->r13 = MEM_B(ctx->r7, 0X57);
    // 0x80275F54: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x80275F58: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80275F5C: sb          $t4, 0x56($a3)
    MEM_B(0X56, ctx->r7) = ctx->r12;
    // 0x80275F60: lui         $v0, 0x8029
    ctx->r2 = S32(0X8029 << 16);
    // 0x80275F64: addiu       $v1, $v1, 0x1CF0
    ctx->r3 = ADD32(ctx->r3, 0X1CF0);
    // 0x80275F68: addu        $v0, $v0, $t5
    ctx->r2 = ADD32(ctx->r2, ctx->r13);
    // 0x80275F6C: lb          $v0, -0x79C8($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X79C8);
    // 0x80275F70: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x80275F74: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80275F78: sb          $v0, 0x3A($t6)
    MEM_B(0X3A, ctx->r14) = ctx->r2;
    // 0x80275F7C: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x80275F80: addiu       $a0, $a0, 0x7030
    ctx->r4 = ADD32(ctx->r4, 0X7030);
    // 0x80275F84: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80275F88: jal         0x8002989C
    // 0x80275F8C: sb          $v0, 0x3B($t7)
    MEM_B(0X3B, ctx->r15) = ctx->r2;
    func_8002989C(rdram, ctx);
        goto after_17;
    // 0x80275F8C: sb          $v0, 0x3B($t7)
    MEM_B(0X3B, ctx->r15) = ctx->r2;
    after_17:
    // 0x80275F90: b           L_80275FBC
    // 0x80275F94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x80275F94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80275F98:
    // 0x80275F98: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80275F9C: sb          $t8, 0x56($a3)
    MEM_B(0X56, ctx->r7) = ctx->r24;
    // 0x80275FA0: addiu       $a0, $a0, 0x7030
    ctx->r4 = ADD32(ctx->r4, 0X7030);
    // 0x80275FA4: jal         0x8002989C
    // 0x80275FA8: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    func_8002989C(rdram, ctx);
        goto after_18;
    // 0x80275FA8: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_18:
    // 0x80275FAC: b           L_80275FBC
    // 0x80275FB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x80275FB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80275FB4:
    // 0x80275FB4: sb          $zero, 0x56($a3)
    MEM_B(0X56, ctx->r7) = 0;
L_80275FB8:
    // 0x80275FB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80275FBC:
    // 0x80275FBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80275FC0: jr          $ra
    // 0x80275FC4: nop

    return;
    // 0x80275FC4: nop

;}
RECOMP_FUNC void func_80275F24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80275F24: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275F28: nop

    // 0x80275F2C: lb          $t3, 0x58($a3)
    ctx->r11 = MEM_B(ctx->r7, 0X58);
    // 0x80275F30: nop

    // 0x80275F34: bne         $t3, $zero, L_80275FB4
    if (ctx->r11 != 0) {
        // 0x80275F38: nop
    
            goto L_80275FB4;
    }
    // 0x80275F38: nop

    // 0x80275F3C: jal         0x80276FB0
    // 0x80275F40: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80276FB0(rdram, ctx);
        goto after_0;
    // 0x80275F40: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_0:
    // 0x80275F44: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80275F48: bne         $v0, $zero, L_80275F98
    if (ctx->r2 != 0) {
        // 0x80275F4C: addiu       $t8, $zero, 0x4
        ctx->r24 = ADD32(0, 0X4);
            goto L_80275F98;
    }
    // 0x80275F4C: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x80275F50: lb          $t5, 0x57($a3)
    ctx->r13 = MEM_B(ctx->r7, 0X57);
    // 0x80275F54: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x80275F58: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80275F5C: sb          $t4, 0x56($a3)
    MEM_B(0X56, ctx->r7) = ctx->r12;
    // 0x80275F60: lui         $v0, 0x8029
    ctx->r2 = S32(0X8029 << 16);
    // 0x80275F64: addiu       $v1, $v1, 0x1CF0
    ctx->r3 = ADD32(ctx->r3, 0X1CF0);
    // 0x80275F68: addu        $v0, $v0, $t5
    ctx->r2 = ADD32(ctx->r2, ctx->r13);
    // 0x80275F6C: lb          $v0, -0x79C8($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X79C8);
    // 0x80275F70: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x80275F74: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80275F78: sb          $v0, 0x3A($t6)
    MEM_B(0X3A, ctx->r14) = ctx->r2;
    // 0x80275F7C: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x80275F80: addiu       $a0, $a0, 0x7030
    ctx->r4 = ADD32(ctx->r4, 0X7030);
    // 0x80275F84: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80275F88: jal         0x8002989C
    // 0x80275F8C: sb          $v0, 0x3B($t7)
    MEM_B(0X3B, ctx->r15) = ctx->r2;
    func_8002989C(rdram, ctx);
        goto after_1;
    // 0x80275F8C: sb          $v0, 0x3B($t7)
    MEM_B(0X3B, ctx->r15) = ctx->r2;
    after_1:
    // 0x80275F90: b           L_80275FBC
    // 0x80275F94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x80275F94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80275F98:
    // 0x80275F98: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80275F9C: sb          $t8, 0x56($a3)
    MEM_B(0X56, ctx->r7) = ctx->r24;
    // 0x80275FA0: addiu       $a0, $a0, 0x7030
    ctx->r4 = ADD32(ctx->r4, 0X7030);
    // 0x80275FA4: jal         0x8002989C
    // 0x80275FA8: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    func_8002989C(rdram, ctx);
        goto after_2;
    // 0x80275FA8: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_2:
    // 0x80275FAC: b           L_80275FBC
    // 0x80275FB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80275FBC;
    // 0x80275FB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80275FB4:
    // 0x80275FB4: sb          $zero, 0x56($a3)
    MEM_B(0X56, ctx->r7) = 0;
    // 0x80275FB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80275FBC:
    // 0x80275FBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80275FC0: jr          $ra
    // 0x80275FC4: nop

    return;
    // 0x80275FC4: nop

;}
RECOMP_FUNC void func_80275FC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80275FC4: nop

;}
RECOMP_FUNC void func_80275FC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80275FC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80275FCC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80275FD0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80275FD4: lbu         $t6, 0x38($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X38);
    // 0x80275FD8: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80275FDC: sltiu       $at, $t6, 0xA
    ctx->r1 = ctx->r14 < 0XA ? 1 : 0;
    // 0x80275FE0: beq         $at, $zero, L_80276220
    if (ctx->r1 == 0) {
        // 0x80275FE4: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_80276220;
    }
    // 0x80275FE4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80275FE8: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80275FEC: addu        $at, $at, $t6
    gpr jr_addend_80275FF8 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80275FF0: lw          $t6, 0x1DC0($at)
    ctx->r14 = ADD32(ctx->r1, 0X1DC0);
    // 0x80275FF4: nop

    // 0x80275FF8: jr          $t6
    // 0x80275FFC: nop

    switch (jr_addend_80275FF8 >> 2) {
        case 0: goto L_80276000; break;
        case 1: goto L_80276038; break;
        case 2: goto L_8027605C; break;
        case 3: goto L_802760B0; break;
        case 4: goto L_80276108; break;
        case 5: goto L_8027611C; break;
        case 6: goto L_80276154; break;
        case 7: goto L_8027619C; break;
        case 8: goto L_802761E4; break;
        case 9: goto L_80276008; break;
        default: switch_error(__func__, 0x80275FF8, 0x80281DC0);
    }
    // 0x80275FFC: nop

L_80276000:
    // 0x80276000: b           L_80276220
    // 0x80276004: sb          $zero, 0x39($a3)
    MEM_B(0X39, ctx->r7) = 0;
        goto L_80276220;
    // 0x80276004: sb          $zero, 0x39($a3)
    MEM_B(0X39, ctx->r7) = 0;
L_80276008:
    // 0x80276008: lb          $v0, 0x49($a3)
    ctx->r2 = MEM_B(ctx->r7, 0X49);
    // 0x8027600C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80276010: beq         $v0, $zero, L_80276028
    if (ctx->r2 == 0) {
        // 0x80276014: nop
    
            goto L_80276028;
    }
    // 0x80276014: nop

    // 0x80276018: beq         $v0, $at, L_80276030
    if (ctx->r2 == ctx->r1) {
        // 0x8027601C: nop
    
            goto L_80276030;
    }
    // 0x8027601C: nop

    // 0x80276020: b           L_80276224
    // 0x80276024: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80276224;
    // 0x80276024: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80276028:
    // 0x80276028: b           L_80276220
    // 0x8027602C: sb          $zero, 0x38($a3)
    MEM_B(0X38, ctx->r7) = 0;
        goto L_80276220;
    // 0x8027602C: sb          $zero, 0x38($a3)
    MEM_B(0X38, ctx->r7) = 0;
L_80276030:
    // 0x80276030: b           L_80276220
    // 0x80276034: sb          $zero, 0x49($a3)
    MEM_B(0X49, ctx->r7) = 0;
        goto L_80276220;
    // 0x80276034: sb          $zero, 0x49($a3)
    MEM_B(0X49, ctx->r7) = 0;
L_80276038:
    // 0x80276038: jal         0x802777C8
    // 0x8027603C: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_802777C8(rdram, ctx);
        goto after_0;
    // 0x8027603C: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_0:
    // 0x80276040: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80276044: nop

    // 0x80276048: lb          $t7, 0x3B($a3)
    ctx->r15 = MEM_B(ctx->r7, 0X3B);
    // 0x8027604C: jal         0x802771FC
    // 0x80276050: sb          $t7, 0x3A($a3)
    MEM_B(0X3A, ctx->r7) = ctx->r15;
    func_802771FC(rdram, ctx);
        goto after_1;
    // 0x80276050: sb          $t7, 0x3A($a3)
    MEM_B(0X3A, ctx->r7) = ctx->r15;
    after_1:
    // 0x80276054: b           L_80276224
    // 0x80276058: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80276224;
    // 0x80276058: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027605C:
    // 0x8027605C: lb          $v0, 0x3E($a3)
    ctx->r2 = MEM_B(ctx->r7, 0X3E);
    // 0x80276060: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80276064: beq         $v0, $zero, L_80276080
    if (ctx->r2 == 0) {
        // 0x80276068: addiu       $t9, $zero, 0xB
        ctx->r25 = ADD32(0, 0XB);
            goto L_80276080;
    }
    // 0x80276068: addiu       $t9, $zero, 0xB
    ctx->r25 = ADD32(0, 0XB);
    // 0x8027606C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80276070: beq         $v0, $at, L_8027608C
    if (ctx->r2 == ctx->r1) {
        // 0x80276074: nop
    
            goto L_8027608C;
    }
    // 0x80276074: nop

    // 0x80276078: b           L_80276224
    // 0x8027607C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80276224;
    // 0x8027607C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80276080:
    // 0x80276080: sb          $t8, 0x47($a3)
    MEM_B(0X47, ctx->r7) = ctx->r24;
    // 0x80276084: b           L_80276220
    // 0x80276088: sb          $t9, 0x3D($a3)
    MEM_B(0X3D, ctx->r7) = ctx->r25;
        goto L_80276220;
    // 0x80276088: sb          $t9, 0x3D($a3)
    MEM_B(0X3D, ctx->r7) = ctx->r25;
L_8027608C:
    // 0x8027608C: jal         0x802771FC
    // 0x80276090: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_802771FC(rdram, ctx);
        goto after_2;
    // 0x80276090: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_2:
    // 0x80276094: addiu       $a0, $zero, 0xF00
    ctx->r4 = ADD32(0, 0XF00);
    // 0x80276098: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x8027609C: jal         0x80049E40
    // 0x802760A0: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_80049E40(rdram, ctx);
        goto after_3;
    // 0x802760A0: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_3:
    // 0x802760A4: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x802760A8: b           L_80276220
    // 0x802760AC: sb          $zero, 0x3E($a3)
    MEM_B(0X3E, ctx->r7) = 0;
        goto L_80276220;
    // 0x802760AC: sb          $zero, 0x3E($a3)
    MEM_B(0X3E, ctx->r7) = 0;
L_802760B0:
    // 0x802760B0: lb          $v0, 0x42($a3)
    ctx->r2 = MEM_B(ctx->r7, 0X42);
    // 0x802760B4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802760B8: beq         $v0, $zero, L_80276224
    if (ctx->r2 == 0) {
        // 0x802760BC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80276224;
    }
    // 0x802760BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802760C0: beq         $v0, $at, L_802760D8
    if (ctx->r2 == ctx->r1) {
        // 0x802760C4: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_802760D8;
    }
    // 0x802760C4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802760C8: beq         $v0, $at, L_802760E0
    if (ctx->r2 == ctx->r1) {
        // 0x802760CC: nop
    
            goto L_802760E0;
    }
    // 0x802760CC: nop

    // 0x802760D0: b           L_80276224
    // 0x802760D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80276224;
    // 0x802760D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802760D8:
    // 0x802760D8: b           L_80276220
    // 0x802760DC: sb          $zero, 0x42($a3)
    MEM_B(0X42, ctx->r7) = 0;
        goto L_80276220;
    // 0x802760DC: sb          $zero, 0x42($a3)
    MEM_B(0X42, ctx->r7) = 0;
L_802760E0:
    // 0x802760E0: jal         0x802771FC
    // 0x802760E4: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_802771FC(rdram, ctx);
        goto after_4;
    // 0x802760E4: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_4:
    // 0x802760E8: addiu       $a0, $zero, 0xF00
    ctx->r4 = ADD32(0, 0XF00);
    // 0x802760EC: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x802760F0: jal         0x80049E40
    // 0x802760F4: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_80049E40(rdram, ctx);
        goto after_5;
    // 0x802760F4: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_5:
    // 0x802760F8: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x802760FC: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80276100: b           L_80276220
    // 0x80276104: sb          $t0, 0x42($a3)
    MEM_B(0X42, ctx->r7) = ctx->r8;
        goto L_80276220;
    // 0x80276104: sb          $t0, 0x42($a3)
    MEM_B(0X42, ctx->r7) = ctx->r8;
L_80276108:
    // 0x80276108: addiu       $t1, $zero, 0xB
    ctx->r9 = ADD32(0, 0XB);
    // 0x8027610C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80276110: sb          $t1, 0x44($a3)
    MEM_B(0X44, ctx->r7) = ctx->r9;
    // 0x80276114: b           L_80276220
    // 0x80276118: sb          $t2, 0x47($a3)
    MEM_B(0X47, ctx->r7) = ctx->r10;
        goto L_80276220;
    // 0x80276118: sb          $t2, 0x47($a3)
    MEM_B(0X47, ctx->r7) = ctx->r10;
L_8027611C:
    // 0x8027611C: lb          $v0, 0x45($a3)
    ctx->r2 = MEM_B(ctx->r7, 0X45);
    // 0x80276120: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80276124: beq         $v0, $zero, L_80276140
    if (ctx->r2 == 0) {
        // 0x80276128: addiu       $t4, $zero, 0xB
        ctx->r12 = ADD32(0, 0XB);
            goto L_80276140;
    }
    // 0x80276128: addiu       $t4, $zero, 0xB
    ctx->r12 = ADD32(0, 0XB);
    // 0x8027612C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80276130: beq         $v0, $at, L_8027614C
    if (ctx->r2 == ctx->r1) {
        // 0x80276134: nop
    
            goto L_8027614C;
    }
    // 0x80276134: nop

    // 0x80276138: b           L_80276224
    // 0x8027613C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80276224;
    // 0x8027613C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80276140:
    // 0x80276140: sb          $t3, 0x47($a3)
    MEM_B(0X47, ctx->r7) = ctx->r11;
    // 0x80276144: b           L_80276220
    // 0x80276148: sb          $t4, 0x46($a3)
    MEM_B(0X46, ctx->r7) = ctx->r12;
        goto L_80276220;
    // 0x80276148: sb          $t4, 0x46($a3)
    MEM_B(0X46, ctx->r7) = ctx->r12;
L_8027614C:
    // 0x8027614C: b           L_80276220
    // 0x80276150: sb          $zero, 0x45($a3)
    MEM_B(0X45, ctx->r7) = 0;
        goto L_80276220;
    // 0x80276150: sb          $zero, 0x45($a3)
    MEM_B(0X45, ctx->r7) = 0;
L_80276154:
    // 0x80276154: lb          $v0, 0x4C($a3)
    ctx->r2 = MEM_B(ctx->r7, 0X4C);
    // 0x80276158: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8027615C: beq         $v0, $zero, L_80276174
    if (ctx->r2 == 0) {
        // 0x80276160: nop
    
            goto L_80276174;
    }
    // 0x80276160: nop

    // 0x80276164: beq         $v0, $v1, L_80276190
    if (ctx->r2 == ctx->r3) {
        // 0x80276168: nop
    
            goto L_80276190;
    }
    // 0x80276168: nop

    // 0x8027616C: b           L_80276224
    // 0x80276170: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80276224;
    // 0x80276170: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80276174:
    // 0x80276174: jal         0x802777C8
    // 0x80276178: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_802777C8(rdram, ctx);
        goto after_6;
    // 0x80276178: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_6:
    // 0x8027617C: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80276180: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80276184: sb          $zero, 0x38($a3)
    MEM_B(0X38, ctx->r7) = 0;
    // 0x80276188: b           L_80276220
    // 0x8027618C: sb          $t5, 0x51($a3)
    MEM_B(0X51, ctx->r7) = ctx->r13;
        goto L_80276220;
    // 0x8027618C: sb          $t5, 0x51($a3)
    MEM_B(0X51, ctx->r7) = ctx->r13;
L_80276190:
    // 0x80276190: sb          $zero, 0x4C($a3)
    MEM_B(0X4C, ctx->r7) = 0;
    // 0x80276194: b           L_80276220
    // 0x80276198: sb          $v1, 0x50($a3)
    MEM_B(0X50, ctx->r7) = ctx->r3;
        goto L_80276220;
    // 0x80276198: sb          $v1, 0x50($a3)
    MEM_B(0X50, ctx->r7) = ctx->r3;
L_8027619C:
    // 0x8027619C: lb          $v0, 0x55($a3)
    ctx->r2 = MEM_B(ctx->r7, 0X55);
    // 0x802761A0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802761A4: beq         $v0, $zero, L_802761C4
    if (ctx->r2 == 0) {
        // 0x802761A8: nop
    
            goto L_802761C4;
    }
    // 0x802761A8: nop

    // 0x802761AC: beq         $v0, $at, L_802761DC
    if (ctx->r2 == ctx->r1) {
        // 0x802761B0: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_802761DC;
    }
    // 0x802761B0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802761B4: beq         $v0, $at, L_802761DC
    if (ctx->r2 == ctx->r1) {
        // 0x802761B8: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_802761DC;
    }
    // 0x802761B8: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x802761BC: bne         $v0, $at, L_80276224
    if (ctx->r2 != ctx->r1) {
        // 0x802761C0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80276224;
    }
    // 0x802761C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802761C4:
    // 0x802761C4: jal         0x802777C8
    // 0x802761C8: nop

    func_802777C8(rdram, ctx);
        goto after_7;
    // 0x802761C8: nop

    after_7:
    // 0x802761CC: jal         0x802771FC
    // 0x802761D0: nop

    func_802771FC(rdram, ctx);
        goto after_8;
    // 0x802761D0: nop

    after_8:
    // 0x802761D4: b           L_80276224
    // 0x802761D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80276224;
    // 0x802761D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802761DC:
    // 0x802761DC: b           L_80276220
    // 0x802761E0: sb          $zero, 0x55($a3)
    MEM_B(0X55, ctx->r7) = 0;
        goto L_80276220;
    // 0x802761E0: sb          $zero, 0x55($a3)
    MEM_B(0X55, ctx->r7) = 0;
L_802761E4:
    // 0x802761E4: lb          $v0, 0x56($a3)
    ctx->r2 = MEM_B(ctx->r7, 0X56);
    // 0x802761E8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802761EC: beq         $v0, $zero, L_80276204
    if (ctx->r2 == 0) {
        // 0x802761F0: nop
    
            goto L_80276204;
    }
    // 0x802761F0: nop

    // 0x802761F4: beq         $v0, $at, L_8027621C
    if (ctx->r2 == ctx->r1) {
        // 0x802761F8: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_8027621C;
    }
    // 0x802761F8: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x802761FC: bne         $v0, $at, L_80276224
    if (ctx->r2 != ctx->r1) {
        // 0x80276200: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80276224;
    }
    // 0x80276200: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80276204:
    // 0x80276204: jal         0x802777C8
    // 0x80276208: nop

    func_802777C8(rdram, ctx);
        goto after_9;
    // 0x80276208: nop

    after_9:
    // 0x8027620C: jal         0x802771FC
    // 0x80276210: nop

    func_802771FC(rdram, ctx);
        goto after_10;
    // 0x80276210: nop

    after_10:
    // 0x80276214: b           L_80276224
    // 0x80276218: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80276224;
    // 0x80276218: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027621C:
    // 0x8027621C: sb          $zero, 0x56($a3)
    MEM_B(0X56, ctx->r7) = 0;
L_80276220:
    // 0x80276220: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80276224:
    // 0x80276224: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80276228: jr          $ra
    // 0x8027622C: nop

    return;
    // 0x8027622C: nop

;}
RECOMP_FUNC void func_80276218(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80276218: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027621C: sb          $zero, 0x56($a3)
    MEM_B(0X56, ctx->r7) = 0;
    // 0x80276220: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80276224: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80276228: jr          $ra
    // 0x8027622C: nop

    return;
    // 0x8027622C: nop

;}
RECOMP_FUNC void func_80276230(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80276230: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80276234: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80276238: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8027623C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80276240: lbu         $t6, 0x38($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X38);
    // 0x80276244: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80276248: sltiu       $at, $t6, 0xA
    ctx->r1 = ctx->r14 < 0XA ? 1 : 0;
    // 0x8027624C: beq         $at, $zero, L_80276468
    if (ctx->r1 == 0) {
        // 0x80276250: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_80276468;
    }
    // 0x80276250: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80276254: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80276258: addu        $at, $at, $t6
    gpr jr_addend_80276264 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8027625C: lw          $t6, 0x1DE8($at)
    ctx->r14 = ADD32(ctx->r1, 0X1DE8);
    // 0x80276260: nop

    // 0x80276264: jr          $t6
    // 0x80276268: nop

    switch (jr_addend_80276264 >> 2) {
        case 0: goto L_8027626C; break;
        case 1: goto L_802762B8; break;
        case 2: goto L_802762D8; break;
        case 3: goto L_80276328; break;
        case 4: goto L_80276374; break;
        case 5: goto L_80276394; break;
        case 6: goto L_802763E4; break;
        case 7: goto L_80276418; break;
        case 8: goto L_80276444; break;
        case 9: goto L_80276284; break;
        default: switch_error(__func__, 0x80276264, 0x80281DE8);
    }
    // 0x80276268: nop

L_8027626C:
    // 0x8027626C: lb          $a0, 0x39($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X39);
    // 0x80276270: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80276274: jal         0x8004BF30
    // 0x80276278: addiu       $a1, $a1, 0x1090
    ctx->r5 = ADD32(ctx->r5, 0X1090);
    func_8004BF30(rdram, ctx);
        goto after_0;
    // 0x80276278: addiu       $a1, $a1, 0x1090
    ctx->r5 = ADD32(ctx->r5, 0X1090);
    after_0:
    // 0x8027627C: b           L_80276468
    // 0x80276280: sb          $v0, 0x39($s0)
    MEM_B(0X39, ctx->r16) = ctx->r2;
        goto L_80276468;
    // 0x80276280: sb          $v0, 0x39($s0)
    MEM_B(0X39, ctx->r16) = ctx->r2;
L_80276284:
    // 0x80276284: lb          $v0, 0x49($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X49);
    // 0x80276288: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8027628C: beq         $v0, $zero, L_802762A4
    if (ctx->r2 == 0) {
        // 0x80276290: lui         $a1, 0x8028
        ctx->r5 = S32(0X8028 << 16);
            goto L_802762A4;
    }
    // 0x80276290: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80276294: beq         $v0, $at, L_8027646C
    if (ctx->r2 == ctx->r1) {
        // 0x80276298: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8027646C;
    }
    // 0x80276298: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8027629C: b           L_8027646C
    // 0x802762A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8027646C;
    // 0x802762A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802762A4:
    // 0x802762A4: lb          $a0, 0x4A($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X4A);
    // 0x802762A8: jal         0x8004BF30
    // 0x802762AC: addiu       $a1, $a1, 0x17CC
    ctx->r5 = ADD32(ctx->r5, 0X17CC);
    func_8004BF30(rdram, ctx);
        goto after_1;
    // 0x802762AC: addiu       $a1, $a1, 0x17CC
    ctx->r5 = ADD32(ctx->r5, 0X17CC);
    after_1:
    // 0x802762B0: b           L_80276468
    // 0x802762B4: sb          $v0, 0x4A($s0)
    MEM_B(0X4A, ctx->r16) = ctx->r2;
        goto L_80276468;
    // 0x802762B4: sb          $v0, 0x4A($s0)
    MEM_B(0X4A, ctx->r16) = ctx->r2;
L_802762B8:
    // 0x802762B8: lb          $a0, 0x3A($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X3A);
    // 0x802762BC: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x802762C0: jal         0x8004BF30
    // 0x802762C4: addiu       $a1, $a1, 0x1144
    ctx->r5 = ADD32(ctx->r5, 0X1144);
    func_8004BF30(rdram, ctx);
        goto after_2;
    // 0x802762C4: addiu       $a1, $a1, 0x1144
    ctx->r5 = ADD32(ctx->r5, 0X1144);
    after_2:
    // 0x802762C8: jal         0x802771FC
    // 0x802762CC: sb          $v0, 0x3A($s0)
    MEM_B(0X3A, ctx->r16) = ctx->r2;
    func_802771FC(rdram, ctx);
        goto after_3;
    // 0x802762CC: sb          $v0, 0x3A($s0)
    MEM_B(0X3A, ctx->r16) = ctx->r2;
    after_3:
    // 0x802762D0: b           L_8027646C
    // 0x802762D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8027646C;
    // 0x802762D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802762D8:
    // 0x802762D8: lb          $v0, 0x3E($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X3E);
    // 0x802762DC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802762E0: beq         $v0, $zero, L_802762FC
    if (ctx->r2 == 0) {
        // 0x802762E4: lui         $a1, 0x8028
        ctx->r5 = S32(0X8028 << 16);
            goto L_802762FC;
    }
    // 0x802762E4: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x802762E8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802762EC: beq         $v0, $at, L_80276314
    if (ctx->r2 == ctx->r1) {
        // 0x802762F0: nop
    
            goto L_80276314;
    }
    // 0x802762F0: nop

    // 0x802762F4: b           L_8027646C
    // 0x802762F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8027646C;
    // 0x802762F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802762FC:
    // 0x802762FC: lb          $a0, 0x3D($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X3D);
    // 0x80276300: sb          $t7, 0x47($s0)
    MEM_B(0X47, ctx->r16) = ctx->r15;
    // 0x80276304: jal         0x8004BF30
    // 0x80276308: addiu       $a1, $a1, 0x1468
    ctx->r5 = ADD32(ctx->r5, 0X1468);
    func_8004BF30(rdram, ctx);
        goto after_4;
    // 0x80276308: addiu       $a1, $a1, 0x1468
    ctx->r5 = ADD32(ctx->r5, 0X1468);
    after_4:
    // 0x8027630C: b           L_80276468
    // 0x80276310: sb          $v0, 0x3D($s0)
    MEM_B(0X3D, ctx->r16) = ctx->r2;
        goto L_80276468;
    // 0x80276310: sb          $v0, 0x3D($s0)
    MEM_B(0X3D, ctx->r16) = ctx->r2;
L_80276314:
    // 0x80276314: lb          $a1, 0x3D($s0)
    ctx->r5 = MEM_B(ctx->r16, 0X3D);
    // 0x80276318: jal         0x80279E70
    // 0x8027631C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80279E70(rdram, ctx);
        goto after_5;
    // 0x8027631C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80276320: b           L_8027646C
    // 0x80276324: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8027646C;
    // 0x80276324: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80276328:
    // 0x80276328: lb          $v0, 0x42($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X42);
    // 0x8027632C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80276330: beq         $v0, $zero, L_8027646C
    if (ctx->r2 == 0) {
        // 0x80276334: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8027646C;
    }
    // 0x80276334: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80276338: beq         $v0, $at, L_80276350
    if (ctx->r2 == ctx->r1) {
        // 0x8027633C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80276350;
    }
    // 0x8027633C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80276340: beq         $v0, $at, L_80276360
    if (ctx->r2 == ctx->r1) {
        // 0x80276344: nop
    
            goto L_80276360;
    }
    // 0x80276344: nop

    // 0x80276348: b           L_8027646C
    // 0x8027634C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8027646C;
    // 0x8027634C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80276350:
    // 0x80276350: jal         0x80035734
    // 0x80276354: nop

    func_80035734(rdram, ctx);
        goto after_6;
    // 0x80276354: nop

    after_6:
    // 0x80276358: b           L_80276468
    // 0x8027635C: sb          $zero, 0x42($s0)
    MEM_B(0X42, ctx->r16) = 0;
        goto L_80276468;
    // 0x8027635C: sb          $zero, 0x42($s0)
    MEM_B(0X42, ctx->r16) = 0;
L_80276360:
    // 0x80276360: lb          $a1, 0x43($s0)
    ctx->r5 = MEM_B(ctx->r16, 0X43);
    // 0x80276364: jal         0x8027A330
    // 0x80276368: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8027A330(rdram, ctx);
        goto after_7;
    // 0x80276368: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x8027636C: b           L_8027646C
    // 0x80276370: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8027646C;
    // 0x80276370: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80276374:
    // 0x80276374: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80276378: lb          $a0, 0x44($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X44);
    // 0x8027637C: lui         $a1, 0x8029
    ctx->r5 = S32(0X8029 << 16);
    // 0x80276380: sb          $t8, 0x47($s0)
    MEM_B(0X47, ctx->r16) = ctx->r24;
    // 0x80276384: jal         0x8004BF30
    // 0x80276388: addiu       $a1, $a1, -0x7A80
    ctx->r5 = ADD32(ctx->r5, -0X7A80);
    func_8004BF30(rdram, ctx);
        goto after_8;
    // 0x80276388: addiu       $a1, $a1, -0x7A80
    ctx->r5 = ADD32(ctx->r5, -0X7A80);
    after_8:
    // 0x8027638C: b           L_80276468
    // 0x80276390: sb          $v0, 0x44($s0)
    MEM_B(0X44, ctx->r16) = ctx->r2;
        goto L_80276468;
    // 0x80276390: sb          $v0, 0x44($s0)
    MEM_B(0X44, ctx->r16) = ctx->r2;
L_80276394:
    // 0x80276394: lb          $v0, 0x45($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X45);
    // 0x80276398: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8027639C: beq         $v0, $zero, L_802763B8
    if (ctx->r2 == 0) {
        // 0x802763A0: lui         $a1, 0x8028
        ctx->r5 = S32(0X8028 << 16);
            goto L_802763B8;
    }
    // 0x802763A0: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x802763A4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802763A8: beq         $v0, $at, L_802763D0
    if (ctx->r2 == ctx->r1) {
        // 0x802763AC: lui         $a1, 0x8029
        ctx->r5 = S32(0X8029 << 16);
            goto L_802763D0;
    }
    // 0x802763AC: lui         $a1, 0x8029
    ctx->r5 = S32(0X8029 << 16);
    // 0x802763B0: b           L_8027646C
    // 0x802763B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8027646C;
    // 0x802763B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802763B8:
    // 0x802763B8: lb          $a0, 0x46($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X46);
    // 0x802763BC: sb          $t9, 0x47($s0)
    MEM_B(0X47, ctx->r16) = ctx->r25;
    // 0x802763C0: jal         0x8004BF30
    // 0x802763C4: addiu       $a1, $a1, 0x1468
    ctx->r5 = ADD32(ctx->r5, 0X1468);
    func_8004BF30(rdram, ctx);
        goto after_9;
    // 0x802763C4: addiu       $a1, $a1, 0x1468
    ctx->r5 = ADD32(ctx->r5, 0X1468);
    after_9:
    // 0x802763C8: b           L_80276468
    // 0x802763CC: sb          $v0, 0x46($s0)
    MEM_B(0X46, ctx->r16) = ctx->r2;
        goto L_80276468;
    // 0x802763CC: sb          $v0, 0x46($s0)
    MEM_B(0X46, ctx->r16) = ctx->r2;
L_802763D0:
    // 0x802763D0: lb          $a0, 0x48($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X48);
    // 0x802763D4: jal         0x8004BF30
    // 0x802763D8: addiu       $a1, $a1, -0x7A80
    ctx->r5 = ADD32(ctx->r5, -0X7A80);
    func_8004BF30(rdram, ctx);
        goto after_10;
    // 0x802763D8: addiu       $a1, $a1, -0x7A80
    ctx->r5 = ADD32(ctx->r5, -0X7A80);
    after_10:
    // 0x802763DC: b           L_80276468
    // 0x802763E0: sb          $v0, 0x48($s0)
    MEM_B(0X48, ctx->r16) = ctx->r2;
        goto L_80276468;
    // 0x802763E0: sb          $v0, 0x48($s0)
    MEM_B(0X48, ctx->r16) = ctx->r2;
L_802763E4:
    // 0x802763E4: lb          $v0, 0x4C($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X4C);
    // 0x802763E8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802763EC: beq         $v0, $zero, L_80276404
    if (ctx->r2 == 0) {
        // 0x802763F0: lui         $a1, 0x8028
        ctx->r5 = S32(0X8028 << 16);
            goto L_80276404;
    }
    // 0x802763F0: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x802763F4: beq         $v0, $at, L_8027646C
    if (ctx->r2 == ctx->r1) {
        // 0x802763F8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8027646C;
    }
    // 0x802763F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802763FC: b           L_8027646C
    // 0x80276400: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8027646C;
    // 0x80276400: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80276404:
    // 0x80276404: lb          $a0, 0x4D($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X4D);
    // 0x80276408: jal         0x8004BF30
    // 0x8027640C: addiu       $a1, $a1, 0x171C
    ctx->r5 = ADD32(ctx->r5, 0X171C);
    func_8004BF30(rdram, ctx);
        goto after_11;
    // 0x8027640C: addiu       $a1, $a1, 0x171C
    ctx->r5 = ADD32(ctx->r5, 0X171C);
    after_11:
    // 0x80276410: b           L_80276468
    // 0x80276414: sb          $v0, 0x4D($s0)
    MEM_B(0X4D, ctx->r16) = ctx->r2;
        goto L_80276468;
    // 0x80276414: sb          $v0, 0x4D($s0)
    MEM_B(0X4D, ctx->r16) = ctx->r2;
L_80276418:
    // 0x80276418: lb          $t0, 0x55($s0)
    ctx->r8 = MEM_B(ctx->r16, 0X55);
    // 0x8027641C: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80276420: bne         $t0, $zero, L_8027646C
    if (ctx->r8 != 0) {
        // 0x80276424: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8027646C;
    }
    // 0x80276424: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80276428: lb          $a0, 0x57($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X57);
    // 0x8027642C: jal         0x8004BF30
    // 0x80276430: addiu       $a1, $a1, 0x1234
    ctx->r5 = ADD32(ctx->r5, 0X1234);
    func_8004BF30(rdram, ctx);
        goto after_12;
    // 0x80276430: addiu       $a1, $a1, 0x1234
    ctx->r5 = ADD32(ctx->r5, 0X1234);
    after_12:
    // 0x80276434: jal         0x80277340
    // 0x80276438: sb          $v0, 0x57($s0)
    MEM_B(0X57, ctx->r16) = ctx->r2;
    func_80277340(rdram, ctx);
        goto after_13;
    // 0x80276438: sb          $v0, 0x57($s0)
    MEM_B(0X57, ctx->r16) = ctx->r2;
    after_13:
    // 0x8027643C: b           L_8027646C
    // 0x80276440: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8027646C;
    // 0x80276440: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80276444:
    // 0x80276444: lb          $t1, 0x56($s0)
    ctx->r9 = MEM_B(ctx->r16, 0X56);
    // 0x80276448: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027644C: bne         $t1, $zero, L_8027646C
    if (ctx->r9 != 0) {
        // 0x80276450: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8027646C;
    }
    // 0x80276450: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80276454: lb          $a0, 0x57($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X57);
    // 0x80276458: jal         0x8004BF30
    // 0x8027645C: addiu       $a1, $a1, 0x1234
    ctx->r5 = ADD32(ctx->r5, 0X1234);
    func_8004BF30(rdram, ctx);
        goto after_14;
    // 0x8027645C: addiu       $a1, $a1, 0x1234
    ctx->r5 = ADD32(ctx->r5, 0X1234);
    after_14:
    // 0x80276460: jal         0x80277340
    // 0x80276464: sb          $v0, 0x57($s0)
    MEM_B(0X57, ctx->r16) = ctx->r2;
    func_80277340(rdram, ctx);
        goto after_15;
    // 0x80276464: sb          $v0, 0x57($s0)
    MEM_B(0X57, ctx->r16) = ctx->r2;
    after_15:
L_80276468:
    // 0x80276468: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8027646C:
    // 0x8027646C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80276470: jr          $ra
    // 0x80276474: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80276474: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80276478(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80276478: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8027647C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80276480: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80276484: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80276488: lbu         $t6, 0x38($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X38);
    // 0x8027648C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80276490: sltiu       $at, $t6, 0xA
    ctx->r1 = ctx->r14 < 0XA ? 1 : 0;
    // 0x80276494: beq         $at, $zero, L_802766B4
    if (ctx->r1 == 0) {
        // 0x80276498: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_802766B4;
    }
    // 0x80276498: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8027649C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802764A0: addu        $at, $at, $t6
    gpr jr_addend_802764AC = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x802764A4: lw          $t6, 0x1E10($at)
    ctx->r14 = ADD32(ctx->r1, 0X1E10);
    // 0x802764A8: nop

    // 0x802764AC: jr          $t6
    // 0x802764B0: nop

    switch (jr_addend_802764AC >> 2) {
        case 0: goto L_802764B4; break;
        case 1: goto L_80276500; break;
        case 2: goto L_80276520; break;
        case 3: goto L_80276570; break;
        case 4: goto L_802765C0; break;
        case 5: goto L_802765E0; break;
        case 6: goto L_80276630; break;
        case 7: goto L_80276664; break;
        case 8: goto L_80276690; break;
        case 9: goto L_802764CC; break;
        default: switch_error(__func__, 0x802764AC, 0x80281E10);
    }
    // 0x802764B0: nop

L_802764B4:
    // 0x802764B4: lb          $a0, 0x39($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X39);
    // 0x802764B8: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x802764BC: jal         0x8004BFBC
    // 0x802764C0: addiu       $a1, $a1, 0x1090
    ctx->r5 = ADD32(ctx->r5, 0X1090);
    func_8004BFBC(rdram, ctx);
        goto after_0;
    // 0x802764C0: addiu       $a1, $a1, 0x1090
    ctx->r5 = ADD32(ctx->r5, 0X1090);
    after_0:
    // 0x802764C4: b           L_802766B4
    // 0x802764C8: sb          $v0, 0x39($s0)
    MEM_B(0X39, ctx->r16) = ctx->r2;
        goto L_802766B4;
    // 0x802764C8: sb          $v0, 0x39($s0)
    MEM_B(0X39, ctx->r16) = ctx->r2;
L_802764CC:
    // 0x802764CC: lb          $v0, 0x49($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X49);
    // 0x802764D0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802764D4: beq         $v0, $zero, L_802764EC
    if (ctx->r2 == 0) {
        // 0x802764D8: lui         $a1, 0x8028
        ctx->r5 = S32(0X8028 << 16);
            goto L_802764EC;
    }
    // 0x802764D8: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x802764DC: beq         $v0, $at, L_802766B8
    if (ctx->r2 == ctx->r1) {
        // 0x802764E0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802766B8;
    }
    // 0x802764E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802764E4: b           L_802766B8
    // 0x802764E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802766B8;
    // 0x802764E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802764EC:
    // 0x802764EC: lb          $a0, 0x4A($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X4A);
    // 0x802764F0: jal         0x8004BFBC
    // 0x802764F4: addiu       $a1, $a1, 0x17CC
    ctx->r5 = ADD32(ctx->r5, 0X17CC);
    func_8004BFBC(rdram, ctx);
        goto after_1;
    // 0x802764F4: addiu       $a1, $a1, 0x17CC
    ctx->r5 = ADD32(ctx->r5, 0X17CC);
    after_1:
    // 0x802764F8: b           L_802766B4
    // 0x802764FC: sb          $v0, 0x4A($s0)
    MEM_B(0X4A, ctx->r16) = ctx->r2;
        goto L_802766B4;
    // 0x802764FC: sb          $v0, 0x4A($s0)
    MEM_B(0X4A, ctx->r16) = ctx->r2;
L_80276500:
    // 0x80276500: lb          $a0, 0x3A($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X3A);
    // 0x80276504: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80276508: jal         0x8004BFBC
    // 0x8027650C: addiu       $a1, $a1, 0x1144
    ctx->r5 = ADD32(ctx->r5, 0X1144);
    func_8004BFBC(rdram, ctx);
        goto after_2;
    // 0x8027650C: addiu       $a1, $a1, 0x1144
    ctx->r5 = ADD32(ctx->r5, 0X1144);
    after_2:
    // 0x80276510: jal         0x802771FC
    // 0x80276514: sb          $v0, 0x3A($s0)
    MEM_B(0X3A, ctx->r16) = ctx->r2;
    func_802771FC(rdram, ctx);
        goto after_3;
    // 0x80276514: sb          $v0, 0x3A($s0)
    MEM_B(0X3A, ctx->r16) = ctx->r2;
    after_3:
    // 0x80276518: b           L_802766B8
    // 0x8027651C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802766B8;
    // 0x8027651C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80276520:
    // 0x80276520: lb          $v0, 0x3E($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X3E);
    // 0x80276524: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80276528: beq         $v0, $zero, L_80276544
    if (ctx->r2 == 0) {
        // 0x8027652C: lui         $a1, 0x8028
        ctx->r5 = S32(0X8028 << 16);
            goto L_80276544;
    }
    // 0x8027652C: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80276530: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80276534: beq         $v0, $at, L_8027655C
    if (ctx->r2 == ctx->r1) {
        // 0x80276538: nop
    
            goto L_8027655C;
    }
    // 0x80276538: nop

    // 0x8027653C: b           L_802766B8
    // 0x80276540: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802766B8;
    // 0x80276540: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80276544:
    // 0x80276544: lb          $a0, 0x3D($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X3D);
    // 0x80276548: sb          $t7, 0x47($s0)
    MEM_B(0X47, ctx->r16) = ctx->r15;
    // 0x8027654C: jal         0x8004BFBC
    // 0x80276550: addiu       $a1, $a1, 0x1468
    ctx->r5 = ADD32(ctx->r5, 0X1468);
    func_8004BFBC(rdram, ctx);
        goto after_4;
    // 0x80276550: addiu       $a1, $a1, 0x1468
    ctx->r5 = ADD32(ctx->r5, 0X1468);
    after_4:
    // 0x80276554: b           L_802766B4
    // 0x80276558: sb          $v0, 0x3D($s0)
    MEM_B(0X3D, ctx->r16) = ctx->r2;
        goto L_802766B4;
    // 0x80276558: sb          $v0, 0x3D($s0)
    MEM_B(0X3D, ctx->r16) = ctx->r2;
L_8027655C:
    // 0x8027655C: lb          $a1, 0x3D($s0)
    ctx->r5 = MEM_B(ctx->r16, 0X3D);
    // 0x80276560: jal         0x80279E70
    // 0x80276564: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80279E70(rdram, ctx);
        goto after_5;
    // 0x80276564: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80276568: b           L_802766B8
    // 0x8027656C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802766B8;
    // 0x8027656C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80276570:
    // 0x80276570: lb          $v0, 0x42($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X42);
    // 0x80276574: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80276578: beq         $v0, $zero, L_80276598
    if (ctx->r2 == 0) {
        // 0x8027657C: nop
    
            goto L_80276598;
    }
    // 0x8027657C: nop

    // 0x80276580: beq         $v0, $at, L_802766B4
    if (ctx->r2 == ctx->r1) {
        // 0x80276584: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_802766B4;
    }
    // 0x80276584: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80276588: beq         $v0, $at, L_802765AC
    if (ctx->r2 == ctx->r1) {
        // 0x8027658C: nop
    
            goto L_802765AC;
    }
    // 0x8027658C: nop

    // 0x80276590: b           L_802766B8
    // 0x80276594: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802766B8;
    // 0x80276594: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80276598:
    // 0x80276598: jal         0x80035734
    // 0x8027659C: nop

    func_80035734(rdram, ctx);
        goto after_6;
    // 0x8027659C: nop

    after_6:
    // 0x802765A0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802765A4: b           L_802766B4
    // 0x802765A8: sb          $t8, 0x42($s0)
    MEM_B(0X42, ctx->r16) = ctx->r24;
        goto L_802766B4;
    // 0x802765A8: sb          $t8, 0x42($s0)
    MEM_B(0X42, ctx->r16) = ctx->r24;
L_802765AC:
    // 0x802765AC: lb          $a1, 0x43($s0)
    ctx->r5 = MEM_B(ctx->r16, 0X43);
    // 0x802765B0: jal         0x8027A330
    // 0x802765B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8027A330(rdram, ctx);
        goto after_7;
    // 0x802765B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x802765B8: b           L_802766B8
    // 0x802765BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802766B8;
    // 0x802765BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802765C0:
    // 0x802765C0: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802765C4: lb          $a0, 0x44($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X44);
    // 0x802765C8: lui         $a1, 0x8029
    ctx->r5 = S32(0X8029 << 16);
    // 0x802765CC: sb          $t9, 0x47($s0)
    MEM_B(0X47, ctx->r16) = ctx->r25;
    // 0x802765D0: jal         0x8004BFBC
    // 0x802765D4: addiu       $a1, $a1, -0x7A80
    ctx->r5 = ADD32(ctx->r5, -0X7A80);
    func_8004BFBC(rdram, ctx);
        goto after_8;
    // 0x802765D4: addiu       $a1, $a1, -0x7A80
    ctx->r5 = ADD32(ctx->r5, -0X7A80);
    after_8:
    // 0x802765D8: b           L_802766B4
    // 0x802765DC: sb          $v0, 0x44($s0)
    MEM_B(0X44, ctx->r16) = ctx->r2;
        goto L_802766B4;
    // 0x802765DC: sb          $v0, 0x44($s0)
    MEM_B(0X44, ctx->r16) = ctx->r2;
L_802765E0:
    // 0x802765E0: lb          $v0, 0x45($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X45);
    // 0x802765E4: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x802765E8: beq         $v0, $zero, L_80276604
    if (ctx->r2 == 0) {
        // 0x802765EC: lui         $a1, 0x8028
        ctx->r5 = S32(0X8028 << 16);
            goto L_80276604;
    }
    // 0x802765EC: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x802765F0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802765F4: beq         $v0, $at, L_8027661C
    if (ctx->r2 == ctx->r1) {
        // 0x802765F8: lui         $a1, 0x8029
        ctx->r5 = S32(0X8029 << 16);
            goto L_8027661C;
    }
    // 0x802765F8: lui         $a1, 0x8029
    ctx->r5 = S32(0X8029 << 16);
    // 0x802765FC: b           L_802766B8
    // 0x80276600: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802766B8;
    // 0x80276600: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80276604:
    // 0x80276604: lb          $a0, 0x46($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X46);
    // 0x80276608: sb          $t0, 0x47($s0)
    MEM_B(0X47, ctx->r16) = ctx->r8;
    // 0x8027660C: jal         0x8004BFBC
    // 0x80276610: addiu       $a1, $a1, 0x1468
    ctx->r5 = ADD32(ctx->r5, 0X1468);
    func_8004BFBC(rdram, ctx);
        goto after_9;
    // 0x80276610: addiu       $a1, $a1, 0x1468
    ctx->r5 = ADD32(ctx->r5, 0X1468);
    after_9:
    // 0x80276614: b           L_802766B4
    // 0x80276618: sb          $v0, 0x46($s0)
    MEM_B(0X46, ctx->r16) = ctx->r2;
        goto L_802766B4;
    // 0x80276618: sb          $v0, 0x46($s0)
    MEM_B(0X46, ctx->r16) = ctx->r2;
L_8027661C:
    // 0x8027661C: lb          $a0, 0x48($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X48);
    // 0x80276620: jal         0x8004BFBC
    // 0x80276624: addiu       $a1, $a1, -0x7A80
    ctx->r5 = ADD32(ctx->r5, -0X7A80);
    func_8004BFBC(rdram, ctx);
        goto after_10;
    // 0x80276624: addiu       $a1, $a1, -0x7A80
    ctx->r5 = ADD32(ctx->r5, -0X7A80);
    after_10:
    // 0x80276628: b           L_802766B4
    // 0x8027662C: sb          $v0, 0x48($s0)
    MEM_B(0X48, ctx->r16) = ctx->r2;
        goto L_802766B4;
    // 0x8027662C: sb          $v0, 0x48($s0)
    MEM_B(0X48, ctx->r16) = ctx->r2;
L_80276630:
    // 0x80276630: lb          $v0, 0x4C($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X4C);
    // 0x80276634: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80276638: beq         $v0, $zero, L_80276650
    if (ctx->r2 == 0) {
        // 0x8027663C: lui         $a1, 0x8028
        ctx->r5 = S32(0X8028 << 16);
            goto L_80276650;
    }
    // 0x8027663C: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80276640: beq         $v0, $at, L_802766B8
    if (ctx->r2 == ctx->r1) {
        // 0x80276644: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802766B8;
    }
    // 0x80276644: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80276648: b           L_802766B8
    // 0x8027664C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802766B8;
    // 0x8027664C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80276650:
    // 0x80276650: lb          $a0, 0x4D($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X4D);
    // 0x80276654: jal         0x8004BFBC
    // 0x80276658: addiu       $a1, $a1, 0x171C
    ctx->r5 = ADD32(ctx->r5, 0X171C);
    func_8004BFBC(rdram, ctx);
        goto after_11;
    // 0x80276658: addiu       $a1, $a1, 0x171C
    ctx->r5 = ADD32(ctx->r5, 0X171C);
    after_11:
    // 0x8027665C: b           L_802766B4
    // 0x80276660: sb          $v0, 0x4D($s0)
    MEM_B(0X4D, ctx->r16) = ctx->r2;
        goto L_802766B4;
    // 0x80276660: sb          $v0, 0x4D($s0)
    MEM_B(0X4D, ctx->r16) = ctx->r2;
L_80276664:
    // 0x80276664: lb          $t1, 0x55($s0)
    ctx->r9 = MEM_B(ctx->r16, 0X55);
    // 0x80276668: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027666C: bne         $t1, $zero, L_802766B8
    if (ctx->r9 != 0) {
        // 0x80276670: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802766B8;
    }
    // 0x80276670: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80276674: lb          $a0, 0x57($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X57);
    // 0x80276678: jal         0x8004BFBC
    // 0x8027667C: addiu       $a1, $a1, 0x1234
    ctx->r5 = ADD32(ctx->r5, 0X1234);
    func_8004BFBC(rdram, ctx);
        goto after_12;
    // 0x8027667C: addiu       $a1, $a1, 0x1234
    ctx->r5 = ADD32(ctx->r5, 0X1234);
    after_12:
    // 0x80276680: jal         0x80277340
    // 0x80276684: sb          $v0, 0x57($s0)
    MEM_B(0X57, ctx->r16) = ctx->r2;
    func_80277340(rdram, ctx);
        goto after_13;
    // 0x80276684: sb          $v0, 0x57($s0)
    MEM_B(0X57, ctx->r16) = ctx->r2;
    after_13:
    // 0x80276688: b           L_802766B8
    // 0x8027668C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802766B8;
    // 0x8027668C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80276690:
    // 0x80276690: lb          $t2, 0x56($s0)
    ctx->r10 = MEM_B(ctx->r16, 0X56);
    // 0x80276694: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80276698: bne         $t2, $zero, L_802766B8
    if (ctx->r10 != 0) {
        // 0x8027669C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802766B8;
    }
    // 0x8027669C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802766A0: lb          $a0, 0x57($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X57);
    // 0x802766A4: jal         0x8004BFBC
    // 0x802766A8: addiu       $a1, $a1, 0x1234
    ctx->r5 = ADD32(ctx->r5, 0X1234);
    func_8004BFBC(rdram, ctx);
        goto after_14;
    // 0x802766A8: addiu       $a1, $a1, 0x1234
    ctx->r5 = ADD32(ctx->r5, 0X1234);
    after_14:
    // 0x802766AC: jal         0x80277340
    // 0x802766B0: sb          $v0, 0x57($s0)
    MEM_B(0X57, ctx->r16) = ctx->r2;
    func_80277340(rdram, ctx);
        goto after_15;
    // 0x802766B0: sb          $v0, 0x57($s0)
    MEM_B(0X57, ctx->r16) = ctx->r2;
    after_15:
L_802766B4:
    // 0x802766B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802766B8:
    // 0x802766B8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802766BC: jr          $ra
    // 0x802766C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x802766C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802766C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802766C4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802766C8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802766CC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802766D0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x802766D4: lbu         $t6, 0x38($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X38);
    // 0x802766D8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802766DC: sltiu       $at, $t6, 0xA
    ctx->r1 = ctx->r14 < 0XA ? 1 : 0;
    // 0x802766E0: beq         $at, $zero, L_80276930
    if (ctx->r1 == 0) {
        // 0x802766E4: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_80276930;
    }
    // 0x802766E4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x802766E8: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802766EC: addu        $at, $at, $t6
    gpr jr_addend_802766F8 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x802766F0: lw          $t6, 0x1E38($at)
    ctx->r14 = ADD32(ctx->r1, 0X1E38);
    // 0x802766F4: nop

    // 0x802766F8: jr          $t6
    // 0x802766FC: nop

    switch (jr_addend_802766F8 >> 2) {
        case 0: goto L_80276700; break;
        case 1: goto L_80276760; break;
        case 2: goto L_80276780; break;
        case 3: goto L_802767AC; break;
        case 4: goto L_80276814; break;
        case 5: goto L_80276834; break;
        case 6: goto L_80276860; break;
        case 7: goto L_80276894; break;
        case 8: goto L_802768F0; break;
        case 9: goto L_80276718; break;
        default: switch_error(__func__, 0x802766F8, 0x80281E38);
    }
    // 0x802766FC: nop

L_80276700:
    // 0x80276700: lb          $a0, 0x39($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X39);
    // 0x80276704: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80276708: jal         0x8004C0D4
    // 0x8027670C: addiu       $a1, $a1, 0x1090
    ctx->r5 = ADD32(ctx->r5, 0X1090);
    func_8004C0D4(rdram, ctx);
        goto after_0;
    // 0x8027670C: addiu       $a1, $a1, 0x1090
    ctx->r5 = ADD32(ctx->r5, 0X1090);
    after_0:
    // 0x80276710: b           L_80276930
    // 0x80276714: sb          $v0, 0x39($s0)
    MEM_B(0X39, ctx->r16) = ctx->r2;
        goto L_80276930;
    // 0x80276714: sb          $v0, 0x39($s0)
    MEM_B(0X39, ctx->r16) = ctx->r2;
L_80276718:
    // 0x80276718: lb          $v0, 0x49($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X49);
    // 0x8027671C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80276720: beq         $v0, $zero, L_80276738
    if (ctx->r2 == 0) {
        // 0x80276724: lui         $a1, 0x8028
        ctx->r5 = S32(0X8028 << 16);
            goto L_80276738;
    }
    // 0x80276724: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80276728: beq         $v0, $v1, L_8027674C
    if (ctx->r2 == ctx->r3) {
        // 0x8027672C: lui         $a1, 0x8028
        ctx->r5 = S32(0X8028 << 16);
            goto L_8027674C;
    }
    // 0x8027672C: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80276730: b           L_80276934
    // 0x80276734: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80276934;
    // 0x80276734: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80276738:
    // 0x80276738: lb          $a0, 0x4A($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X4A);
    // 0x8027673C: jal         0x8004C0D4
    // 0x80276740: addiu       $a1, $a1, 0x17CC
    ctx->r5 = ADD32(ctx->r5, 0X17CC);
    func_8004C0D4(rdram, ctx);
        goto after_1;
    // 0x80276740: addiu       $a1, $a1, 0x17CC
    ctx->r5 = ADD32(ctx->r5, 0X17CC);
    after_1:
    // 0x80276744: b           L_80276930
    // 0x80276748: sb          $v0, 0x4A($s0)
    MEM_B(0X4A, ctx->r16) = ctx->r2;
        goto L_80276930;
    // 0x80276748: sb          $v0, 0x4A($s0)
    MEM_B(0X4A, ctx->r16) = ctx->r2;
L_8027674C:
    // 0x8027674C: lb          $a0, 0x4B($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X4B);
    // 0x80276750: jal         0x8004C0D4
    // 0x80276754: addiu       $a1, $a1, 0x17F0
    ctx->r5 = ADD32(ctx->r5, 0X17F0);
    func_8004C0D4(rdram, ctx);
        goto after_2;
    // 0x80276754: addiu       $a1, $a1, 0x17F0
    ctx->r5 = ADD32(ctx->r5, 0X17F0);
    after_2:
    // 0x80276758: b           L_80276930
    // 0x8027675C: sb          $v0, 0x4B($s0)
    MEM_B(0X4B, ctx->r16) = ctx->r2;
        goto L_80276930;
    // 0x8027675C: sb          $v0, 0x4B($s0)
    MEM_B(0X4B, ctx->r16) = ctx->r2;
L_80276760:
    // 0x80276760: lb          $a0, 0x3A($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X3A);
    // 0x80276764: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80276768: jal         0x8004C0D4
    // 0x8027676C: addiu       $a1, $a1, 0x1144
    ctx->r5 = ADD32(ctx->r5, 0X1144);
    func_8004C0D4(rdram, ctx);
        goto after_3;
    // 0x8027676C: addiu       $a1, $a1, 0x1144
    ctx->r5 = ADD32(ctx->r5, 0X1144);
    after_3:
    // 0x80276770: jal         0x802771FC
    // 0x80276774: sb          $v0, 0x3A($s0)
    MEM_B(0X3A, ctx->r16) = ctx->r2;
    func_802771FC(rdram, ctx);
        goto after_4;
    // 0x80276774: sb          $v0, 0x3A($s0)
    MEM_B(0X3A, ctx->r16) = ctx->r2;
    after_4:
    // 0x80276778: b           L_80276934
    // 0x8027677C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80276934;
    // 0x8027677C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80276780:
    // 0x80276780: lb          $v0, 0x3E($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X3E);
    // 0x80276784: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80276788: beq         $v0, $zero, L_80276934
    if (ctx->r2 == 0) {
        // 0x8027678C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80276934;
    }
    // 0x8027678C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80276790: bne         $v0, $v1, L_80276934
    if (ctx->r2 != ctx->r3) {
        // 0x80276794: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80276934;
    }
    // 0x80276794: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80276798: lb          $a1, 0x3D($s0)
    ctx->r5 = MEM_B(ctx->r16, 0X3D);
    // 0x8027679C: jal         0x80279E70
    // 0x802767A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80279E70(rdram, ctx);
        goto after_5;
    // 0x802767A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x802767A4: b           L_80276934
    // 0x802767A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80276934;
    // 0x802767A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802767AC:
    // 0x802767AC: lb          $v0, 0x42($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X42);
    // 0x802767B0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802767B4: beq         $v0, $zero, L_80276934
    if (ctx->r2 == 0) {
        // 0x802767B8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80276934;
    }
    // 0x802767B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802767BC: beq         $v0, $v1, L_802767D8
    if (ctx->r2 == ctx->r3) {
        // 0x802767C0: lui         $t9, 0x8028
        ctx->r25 = S32(0X8028 << 16);
            goto L_802767D8;
    }
    // 0x802767C0: lui         $t9, 0x8028
    ctx->r25 = S32(0X8028 << 16);
    // 0x802767C4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802767C8: beq         $v0, $at, L_80276800
    if (ctx->r2 == ctx->r1) {
        // 0x802767CC: nop
    
            goto L_80276800;
    }
    // 0x802767CC: nop

    // 0x802767D0: b           L_80276934
    // 0x802767D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80276934;
    // 0x802767D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802767D8:
    // 0x802767D8: lb          $t7, 0x2E($s0)
    ctx->r15 = MEM_B(ctx->r16, 0X2E);
    // 0x802767DC: lb          $a0, 0x43($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X43);
    // 0x802767E0: sll         $t8, $t7, 4
    ctx->r24 = S32(ctx->r15 << 4);
    // 0x802767E4: addiu       $t9, $t9, 0x158C
    ctx->r25 = ADD32(ctx->r25, 0X158C);
    // 0x802767E8: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x802767EC: sb          $v1, 0x47($s0)
    MEM_B(0X47, ctx->r16) = ctx->r3;
    // 0x802767F0: jal         0x8004C0D4
    // 0x802767F4: addu        $a1, $t8, $t9
    ctx->r5 = ADD32(ctx->r24, ctx->r25);
    func_8004C0D4(rdram, ctx);
        goto after_6;
    // 0x802767F4: addu        $a1, $t8, $t9
    ctx->r5 = ADD32(ctx->r24, ctx->r25);
    after_6:
    // 0x802767F8: b           L_80276930
    // 0x802767FC: sb          $v0, 0x43($s0)
    MEM_B(0X43, ctx->r16) = ctx->r2;
        goto L_80276930;
    // 0x802767FC: sb          $v0, 0x43($s0)
    MEM_B(0X43, ctx->r16) = ctx->r2;
L_80276800:
    // 0x80276800: lb          $a1, 0x43($s0)
    ctx->r5 = MEM_B(ctx->r16, 0X43);
    // 0x80276804: jal         0x8027A330
    // 0x80276808: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8027A330(rdram, ctx);
        goto after_7;
    // 0x80276808: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x8027680C: b           L_80276934
    // 0x80276810: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80276934;
    // 0x80276810: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80276814:
    // 0x80276814: lb          $a1, 0x44($s0)
    ctx->r5 = MEM_B(ctx->r16, 0X44);
    // 0x80276818: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x8027681C: beq         $a1, $at, L_80276930
    if (ctx->r5 == ctx->r1) {
        // 0x80276820: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80276930;
    }
    // 0x80276820: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80276824: jal         0x802795A0
    // 0x80276828: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_802795A0(rdram, ctx);
        goto after_8;
    // 0x80276828: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_8:
    // 0x8027682C: b           L_80276934
    // 0x80276830: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80276934;
    // 0x80276830: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80276834:
    // 0x80276834: lb          $v0, 0x45($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X45);
    // 0x80276838: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8027683C: beq         $v0, $zero, L_80276934
    if (ctx->r2 == 0) {
        // 0x80276840: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80276934;
    }
    // 0x80276840: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80276844: bne         $v0, $v1, L_80276930
    if (ctx->r2 != ctx->r3) {
        // 0x80276848: lui         $a1, 0x8029
        ctx->r5 = S32(0X8029 << 16);
            goto L_80276930;
    }
    // 0x80276848: lui         $a1, 0x8029
    ctx->r5 = S32(0X8029 << 16);
    // 0x8027684C: lb          $a0, 0x48($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X48);
    // 0x80276850: jal         0x8004C0D4
    // 0x80276854: addiu       $a1, $a1, -0x7A80
    ctx->r5 = ADD32(ctx->r5, -0X7A80);
    func_8004C0D4(rdram, ctx);
        goto after_9;
    // 0x80276854: addiu       $a1, $a1, -0x7A80
    ctx->r5 = ADD32(ctx->r5, -0X7A80);
    after_9:
    // 0x80276858: b           L_80276930
    // 0x8027685C: sb          $v0, 0x48($s0)
    MEM_B(0X48, ctx->r16) = ctx->r2;
        goto L_80276930;
    // 0x8027685C: sb          $v0, 0x48($s0)
    MEM_B(0X48, ctx->r16) = ctx->r2;
L_80276860:
    // 0x80276860: lb          $v0, 0x4C($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X4C);
    // 0x80276864: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80276868: beq         $v0, $zero, L_80276880
    if (ctx->r2 == 0) {
        // 0x8027686C: lui         $a1, 0x8028
        ctx->r5 = S32(0X8028 << 16);
            goto L_80276880;
    }
    // 0x8027686C: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80276870: beq         $v0, $v1, L_80276934
    if (ctx->r2 == ctx->r3) {
        // 0x80276874: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80276934;
    }
    // 0x80276874: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80276878: b           L_80276934
    // 0x8027687C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80276934;
    // 0x8027687C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80276880:
    // 0x80276880: lb          $a0, 0x4D($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X4D);
    // 0x80276884: jal         0x8004C0D4
    // 0x80276888: addiu       $a1, $a1, 0x171C
    ctx->r5 = ADD32(ctx->r5, 0X171C);
    func_8004C0D4(rdram, ctx);
        goto after_10;
    // 0x80276888: addiu       $a1, $a1, 0x171C
    ctx->r5 = ADD32(ctx->r5, 0X171C);
    after_10:
    // 0x8027688C: b           L_80276930
    // 0x80276890: sb          $v0, 0x4D($s0)
    MEM_B(0X4D, ctx->r16) = ctx->r2;
        goto L_80276930;
    // 0x80276890: sb          $v0, 0x4D($s0)
    MEM_B(0X4D, ctx->r16) = ctx->r2;
L_80276894:
    // 0x80276894: lb          $v0, 0x55($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X55);
    // 0x80276898: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8027689C: beq         $v0, $zero, L_802768BC
    if (ctx->r2 == 0) {
        // 0x802768A0: lui         $a1, 0x8028
        ctx->r5 = S32(0X8028 << 16);
            goto L_802768BC;
    }
    // 0x802768A0: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x802768A4: beq         $v0, $v1, L_802768D8
    if (ctx->r2 == ctx->r3) {
        // 0x802768A8: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_802768D8;
    }
    // 0x802768A8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802768AC: beq         $v0, $at, L_802768D8
    if (ctx->r2 == ctx->r1) {
        // 0x802768B0: nop
    
            goto L_802768D8;
    }
    // 0x802768B0: nop

    // 0x802768B4: b           L_80276934
    // 0x802768B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80276934;
    // 0x802768B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802768BC:
    // 0x802768BC: lb          $a0, 0x57($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X57);
    // 0x802768C0: jal         0x8004C0D4
    // 0x802768C4: addiu       $a1, $a1, 0x1234
    ctx->r5 = ADD32(ctx->r5, 0X1234);
    func_8004C0D4(rdram, ctx);
        goto after_11;
    // 0x802768C4: addiu       $a1, $a1, 0x1234
    ctx->r5 = ADD32(ctx->r5, 0X1234);
    after_11:
    // 0x802768C8: jal         0x80277340
    // 0x802768CC: sb          $v0, 0x57($s0)
    MEM_B(0X57, ctx->r16) = ctx->r2;
    func_80277340(rdram, ctx);
        goto after_12;
    // 0x802768CC: sb          $v0, 0x57($s0)
    MEM_B(0X57, ctx->r16) = ctx->r2;
    after_12:
    // 0x802768D0: b           L_80276934
    // 0x802768D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80276934;
    // 0x802768D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802768D8:
    // 0x802768D8: lb          $a0, 0x58($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X58);
    // 0x802768DC: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x802768E0: jal         0x8004C0D4
    // 0x802768E4: addiu       $a1, $a1, 0x128C
    ctx->r5 = ADD32(ctx->r5, 0X128C);
    func_8004C0D4(rdram, ctx);
        goto after_13;
    // 0x802768E4: addiu       $a1, $a1, 0x128C
    ctx->r5 = ADD32(ctx->r5, 0X128C);
    after_13:
    // 0x802768E8: b           L_80276930
    // 0x802768EC: sb          $v0, 0x58($s0)
    MEM_B(0X58, ctx->r16) = ctx->r2;
        goto L_80276930;
    // 0x802768EC: sb          $v0, 0x58($s0)
    MEM_B(0X58, ctx->r16) = ctx->r2;
L_802768F0:
    // 0x802768F0: lb          $v0, 0x56($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X56);
    // 0x802768F4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802768F8: beq         $v0, $zero, L_80276910
    if (ctx->r2 == 0) {
        // 0x802768FC: lui         $a1, 0x8028
        ctx->r5 = S32(0X8028 << 16);
            goto L_80276910;
    }
    // 0x802768FC: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80276900: beq         $v0, $v1, L_8027692C
    if (ctx->r2 == ctx->r3) {
        // 0x80276904: nop
    
            goto L_8027692C;
    }
    // 0x80276904: nop

    // 0x80276908: b           L_80276934
    // 0x8027690C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80276934;
    // 0x8027690C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80276910:
    // 0x80276910: lb          $a0, 0x57($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X57);
    // 0x80276914: jal         0x8004C0D4
    // 0x80276918: addiu       $a1, $a1, 0x1234
    ctx->r5 = ADD32(ctx->r5, 0X1234);
    func_8004C0D4(rdram, ctx);
        goto after_14;
    // 0x80276918: addiu       $a1, $a1, 0x1234
    ctx->r5 = ADD32(ctx->r5, 0X1234);
    after_14:
    // 0x8027691C: jal         0x80277340
    // 0x80276920: sb          $v0, 0x57($s0)
    MEM_B(0X57, ctx->r16) = ctx->r2;
    func_80277340(rdram, ctx);
        goto after_15;
    // 0x80276920: sb          $v0, 0x57($s0)
    MEM_B(0X57, ctx->r16) = ctx->r2;
    after_15:
    // 0x80276924: b           L_80276934
    // 0x80276928: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80276934;
    // 0x80276928: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8027692C:
    // 0x8027692C: sb          $zero, 0x58($s0)
    MEM_B(0X58, ctx->r16) = 0;
L_80276930:
    // 0x80276930: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80276934:
    // 0x80276934: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80276938: jr          $ra
    // 0x8027693C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8027693C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80276940(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80276940: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80276944: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80276948: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8027694C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80276950: lbu         $t6, 0x38($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X38);
    // 0x80276954: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80276958: sltiu       $at, $t6, 0xA
    ctx->r1 = ctx->r14 < 0XA ? 1 : 0;
    // 0x8027695C: beq         $at, $zero, L_80276BAC
    if (ctx->r1 == 0) {
        // 0x80276960: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_80276BAC;
    }
    // 0x80276960: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80276964: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80276968: addu        $at, $at, $t6
    gpr jr_addend_80276974 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8027696C: lw          $t6, 0x1E60($at)
    ctx->r14 = ADD32(ctx->r1, 0X1E60);
    // 0x80276970: nop

    // 0x80276974: jr          $t6
    // 0x80276978: nop

    switch (jr_addend_80276974 >> 2) {
        case 0: goto L_8027697C; break;
        case 1: goto L_802769DC; break;
        case 2: goto L_802769FC; break;
        case 3: goto L_80276A28; break;
        case 4: goto L_80276A90; break;
        case 5: goto L_80276AB0; break;
        case 6: goto L_80276ADC; break;
        case 7: goto L_80276B10; break;
        case 8: goto L_80276B6C; break;
        case 9: goto L_80276994; break;
        default: switch_error(__func__, 0x80276974, 0x80281E60);
    }
    // 0x80276978: nop

L_8027697C:
    // 0x8027697C: lb          $a0, 0x39($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X39);
    // 0x80276980: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80276984: jal         0x8004C048
    // 0x80276988: addiu       $a1, $a1, 0x1090
    ctx->r5 = ADD32(ctx->r5, 0X1090);
    func_8004C048(rdram, ctx);
        goto after_0;
    // 0x80276988: addiu       $a1, $a1, 0x1090
    ctx->r5 = ADD32(ctx->r5, 0X1090);
    after_0:
    // 0x8027698C: b           L_80276BAC
    // 0x80276990: sb          $v0, 0x39($s0)
    MEM_B(0X39, ctx->r16) = ctx->r2;
        goto L_80276BAC;
    // 0x80276990: sb          $v0, 0x39($s0)
    MEM_B(0X39, ctx->r16) = ctx->r2;
L_80276994:
    // 0x80276994: lb          $v0, 0x49($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X49);
    // 0x80276998: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8027699C: beq         $v0, $zero, L_802769B4
    if (ctx->r2 == 0) {
        // 0x802769A0: lui         $a1, 0x8028
        ctx->r5 = S32(0X8028 << 16);
            goto L_802769B4;
    }
    // 0x802769A0: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x802769A4: beq         $v0, $v1, L_802769C8
    if (ctx->r2 == ctx->r3) {
        // 0x802769A8: lui         $a1, 0x8028
        ctx->r5 = S32(0X8028 << 16);
            goto L_802769C8;
    }
    // 0x802769A8: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x802769AC: b           L_80276BB0
    // 0x802769B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80276BB0;
    // 0x802769B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802769B4:
    // 0x802769B4: lb          $a0, 0x4A($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X4A);
    // 0x802769B8: jal         0x8004C048
    // 0x802769BC: addiu       $a1, $a1, 0x17CC
    ctx->r5 = ADD32(ctx->r5, 0X17CC);
    func_8004C048(rdram, ctx);
        goto after_1;
    // 0x802769BC: addiu       $a1, $a1, 0x17CC
    ctx->r5 = ADD32(ctx->r5, 0X17CC);
    after_1:
    // 0x802769C0: b           L_80276BAC
    // 0x802769C4: sb          $v0, 0x4A($s0)
    MEM_B(0X4A, ctx->r16) = ctx->r2;
        goto L_80276BAC;
    // 0x802769C4: sb          $v0, 0x4A($s0)
    MEM_B(0X4A, ctx->r16) = ctx->r2;
L_802769C8:
    // 0x802769C8: lb          $a0, 0x4B($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X4B);
    // 0x802769CC: jal         0x8004C048
    // 0x802769D0: addiu       $a1, $a1, 0x17F0
    ctx->r5 = ADD32(ctx->r5, 0X17F0);
    func_8004C048(rdram, ctx);
        goto after_2;
    // 0x802769D0: addiu       $a1, $a1, 0x17F0
    ctx->r5 = ADD32(ctx->r5, 0X17F0);
    after_2:
    // 0x802769D4: b           L_80276BAC
    // 0x802769D8: sb          $v0, 0x4B($s0)
    MEM_B(0X4B, ctx->r16) = ctx->r2;
        goto L_80276BAC;
    // 0x802769D8: sb          $v0, 0x4B($s0)
    MEM_B(0X4B, ctx->r16) = ctx->r2;
L_802769DC:
    // 0x802769DC: lb          $a0, 0x3A($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X3A);
    // 0x802769E0: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x802769E4: jal         0x8004C048
    // 0x802769E8: addiu       $a1, $a1, 0x1144
    ctx->r5 = ADD32(ctx->r5, 0X1144);
    func_8004C048(rdram, ctx);
        goto after_3;
    // 0x802769E8: addiu       $a1, $a1, 0x1144
    ctx->r5 = ADD32(ctx->r5, 0X1144);
    after_3:
    // 0x802769EC: jal         0x802771FC
    // 0x802769F0: sb          $v0, 0x3A($s0)
    MEM_B(0X3A, ctx->r16) = ctx->r2;
    func_802771FC(rdram, ctx);
        goto after_4;
    // 0x802769F0: sb          $v0, 0x3A($s0)
    MEM_B(0X3A, ctx->r16) = ctx->r2;
    after_4:
    // 0x802769F4: b           L_80276BB0
    // 0x802769F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80276BB0;
    // 0x802769F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802769FC:
    // 0x802769FC: lb          $v0, 0x3E($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X3E);
    // 0x80276A00: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80276A04: beq         $v0, $zero, L_80276BB0
    if (ctx->r2 == 0) {
        // 0x80276A08: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80276BB0;
    }
    // 0x80276A08: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80276A0C: bne         $v0, $v1, L_80276BB0
    if (ctx->r2 != ctx->r3) {
        // 0x80276A10: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80276BB0;
    }
    // 0x80276A10: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80276A14: lb          $a1, 0x3D($s0)
    ctx->r5 = MEM_B(ctx->r16, 0X3D);
    // 0x80276A18: jal         0x80279E70
    // 0x80276A1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80279E70(rdram, ctx);
        goto after_5;
    // 0x80276A1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80276A20: b           L_80276BB0
    // 0x80276A24: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80276BB0;
    // 0x80276A24: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80276A28:
    // 0x80276A28: lb          $v0, 0x42($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X42);
    // 0x80276A2C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80276A30: beq         $v0, $zero, L_80276BB0
    if (ctx->r2 == 0) {
        // 0x80276A34: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80276BB0;
    }
    // 0x80276A34: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80276A38: beq         $v0, $v1, L_80276A54
    if (ctx->r2 == ctx->r3) {
        // 0x80276A3C: lui         $t9, 0x8028
        ctx->r25 = S32(0X8028 << 16);
            goto L_80276A54;
    }
    // 0x80276A3C: lui         $t9, 0x8028
    ctx->r25 = S32(0X8028 << 16);
    // 0x80276A40: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80276A44: beq         $v0, $at, L_80276A7C
    if (ctx->r2 == ctx->r1) {
        // 0x80276A48: nop
    
            goto L_80276A7C;
    }
    // 0x80276A48: nop

    // 0x80276A4C: b           L_80276BB0
    // 0x80276A50: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80276BB0;
    // 0x80276A50: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80276A54:
    // 0x80276A54: lb          $t7, 0x2E($s0)
    ctx->r15 = MEM_B(ctx->r16, 0X2E);
    // 0x80276A58: lb          $a0, 0x43($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X43);
    // 0x80276A5C: sll         $t8, $t7, 4
    ctx->r24 = S32(ctx->r15 << 4);
    // 0x80276A60: addiu       $t9, $t9, 0x158C
    ctx->r25 = ADD32(ctx->r25, 0X158C);
    // 0x80276A64: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80276A68: sb          $v1, 0x47($s0)
    MEM_B(0X47, ctx->r16) = ctx->r3;
    // 0x80276A6C: jal         0x8004C048
    // 0x80276A70: addu        $a1, $t8, $t9
    ctx->r5 = ADD32(ctx->r24, ctx->r25);
    func_8004C048(rdram, ctx);
        goto after_6;
    // 0x80276A70: addu        $a1, $t8, $t9
    ctx->r5 = ADD32(ctx->r24, ctx->r25);
    after_6:
    // 0x80276A74: b           L_80276BAC
    // 0x80276A78: sb          $v0, 0x43($s0)
    MEM_B(0X43, ctx->r16) = ctx->r2;
        goto L_80276BAC;
    // 0x80276A78: sb          $v0, 0x43($s0)
    MEM_B(0X43, ctx->r16) = ctx->r2;
L_80276A7C:
    // 0x80276A7C: lb          $a1, 0x43($s0)
    ctx->r5 = MEM_B(ctx->r16, 0X43);
    // 0x80276A80: jal         0x8027A330
    // 0x80276A84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8027A330(rdram, ctx);
        goto after_7;
    // 0x80276A84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80276A88: b           L_80276BB0
    // 0x80276A8C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80276BB0;
    // 0x80276A8C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80276A90:
    // 0x80276A90: lb          $a1, 0x44($s0)
    ctx->r5 = MEM_B(ctx->r16, 0X44);
    // 0x80276A94: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x80276A98: beq         $a1, $at, L_80276BAC
    if (ctx->r5 == ctx->r1) {
        // 0x80276A9C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80276BAC;
    }
    // 0x80276A9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80276AA0: jal         0x802795A0
    // 0x80276AA4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_802795A0(rdram, ctx);
        goto after_8;
    // 0x80276AA4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_8:
    // 0x80276AA8: b           L_80276BB0
    // 0x80276AAC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80276BB0;
    // 0x80276AAC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80276AB0:
    // 0x80276AB0: lb          $v0, 0x45($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X45);
    // 0x80276AB4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80276AB8: beq         $v0, $zero, L_80276BB0
    if (ctx->r2 == 0) {
        // 0x80276ABC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80276BB0;
    }
    // 0x80276ABC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80276AC0: bne         $v0, $v1, L_80276BAC
    if (ctx->r2 != ctx->r3) {
        // 0x80276AC4: lui         $a1, 0x8029
        ctx->r5 = S32(0X8029 << 16);
            goto L_80276BAC;
    }
    // 0x80276AC4: lui         $a1, 0x8029
    ctx->r5 = S32(0X8029 << 16);
    // 0x80276AC8: lb          $a0, 0x48($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X48);
    // 0x80276ACC: jal         0x8004C048
    // 0x80276AD0: addiu       $a1, $a1, -0x7A80
    ctx->r5 = ADD32(ctx->r5, -0X7A80);
    func_8004C048(rdram, ctx);
        goto after_9;
    // 0x80276AD0: addiu       $a1, $a1, -0x7A80
    ctx->r5 = ADD32(ctx->r5, -0X7A80);
    after_9:
    // 0x80276AD4: b           L_80276BAC
    // 0x80276AD8: sb          $v0, 0x48($s0)
    MEM_B(0X48, ctx->r16) = ctx->r2;
        goto L_80276BAC;
    // 0x80276AD8: sb          $v0, 0x48($s0)
    MEM_B(0X48, ctx->r16) = ctx->r2;
L_80276ADC:
    // 0x80276ADC: lb          $v0, 0x4C($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X4C);
    // 0x80276AE0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80276AE4: beq         $v0, $zero, L_80276AFC
    if (ctx->r2 == 0) {
        // 0x80276AE8: lui         $a1, 0x8028
        ctx->r5 = S32(0X8028 << 16);
            goto L_80276AFC;
    }
    // 0x80276AE8: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80276AEC: beq         $v0, $v1, L_80276BB0
    if (ctx->r2 == ctx->r3) {
        // 0x80276AF0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80276BB0;
    }
    // 0x80276AF0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80276AF4: b           L_80276BB0
    // 0x80276AF8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80276BB0;
    // 0x80276AF8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80276AFC:
    // 0x80276AFC: lb          $a0, 0x4D($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X4D);
    // 0x80276B00: jal         0x8004C048
    // 0x80276B04: addiu       $a1, $a1, 0x171C
    ctx->r5 = ADD32(ctx->r5, 0X171C);
    func_8004C048(rdram, ctx);
        goto after_10;
    // 0x80276B04: addiu       $a1, $a1, 0x171C
    ctx->r5 = ADD32(ctx->r5, 0X171C);
    after_10:
    // 0x80276B08: b           L_80276BAC
    // 0x80276B0C: sb          $v0, 0x4D($s0)
    MEM_B(0X4D, ctx->r16) = ctx->r2;
        goto L_80276BAC;
    // 0x80276B0C: sb          $v0, 0x4D($s0)
    MEM_B(0X4D, ctx->r16) = ctx->r2;
L_80276B10:
    // 0x80276B10: lb          $v0, 0x55($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X55);
    // 0x80276B14: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80276B18: beq         $v0, $zero, L_80276B38
    if (ctx->r2 == 0) {
        // 0x80276B1C: lui         $a1, 0x8028
        ctx->r5 = S32(0X8028 << 16);
            goto L_80276B38;
    }
    // 0x80276B1C: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80276B20: beq         $v0, $v1, L_80276B54
    if (ctx->r2 == ctx->r3) {
        // 0x80276B24: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80276B54;
    }
    // 0x80276B24: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80276B28: beq         $v0, $at, L_80276B54
    if (ctx->r2 == ctx->r1) {
        // 0x80276B2C: nop
    
            goto L_80276B54;
    }
    // 0x80276B2C: nop

    // 0x80276B30: b           L_80276BB0
    // 0x80276B34: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80276BB0;
    // 0x80276B34: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80276B38:
    // 0x80276B38: lb          $a0, 0x57($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X57);
    // 0x80276B3C: jal         0x8004C048
    // 0x80276B40: addiu       $a1, $a1, 0x1234
    ctx->r5 = ADD32(ctx->r5, 0X1234);
    func_8004C048(rdram, ctx);
        goto after_11;
    // 0x80276B40: addiu       $a1, $a1, 0x1234
    ctx->r5 = ADD32(ctx->r5, 0X1234);
    after_11:
    // 0x80276B44: jal         0x80277340
    // 0x80276B48: sb          $v0, 0x57($s0)
    MEM_B(0X57, ctx->r16) = ctx->r2;
    func_80277340(rdram, ctx);
        goto after_12;
    // 0x80276B48: sb          $v0, 0x57($s0)
    MEM_B(0X57, ctx->r16) = ctx->r2;
    after_12:
    // 0x80276B4C: b           L_80276BB0
    // 0x80276B50: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80276BB0;
    // 0x80276B50: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80276B54:
    // 0x80276B54: lb          $a0, 0x58($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X58);
    // 0x80276B58: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80276B5C: jal         0x8004C048
    // 0x80276B60: addiu       $a1, $a1, 0x128C
    ctx->r5 = ADD32(ctx->r5, 0X128C);
    func_8004C048(rdram, ctx);
        goto after_13;
    // 0x80276B60: addiu       $a1, $a1, 0x128C
    ctx->r5 = ADD32(ctx->r5, 0X128C);
    after_13:
    // 0x80276B64: b           L_80276BAC
    // 0x80276B68: sb          $v0, 0x58($s0)
    MEM_B(0X58, ctx->r16) = ctx->r2;
        goto L_80276BAC;
    // 0x80276B68: sb          $v0, 0x58($s0)
    MEM_B(0X58, ctx->r16) = ctx->r2;
L_80276B6C:
    // 0x80276B6C: lb          $v0, 0x56($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X56);
    // 0x80276B70: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80276B74: beq         $v0, $zero, L_80276B8C
    if (ctx->r2 == 0) {
        // 0x80276B78: lui         $a1, 0x8028
        ctx->r5 = S32(0X8028 << 16);
            goto L_80276B8C;
    }
    // 0x80276B78: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80276B7C: beq         $v0, $v1, L_80276BA8
    if (ctx->r2 == ctx->r3) {
        // 0x80276B80: nop
    
            goto L_80276BA8;
    }
    // 0x80276B80: nop

    // 0x80276B84: b           L_80276BB0
    // 0x80276B88: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80276BB0;
    // 0x80276B88: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80276B8C:
    // 0x80276B8C: lb          $a0, 0x57($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X57);
    // 0x80276B90: jal         0x8004C048
    // 0x80276B94: addiu       $a1, $a1, 0x1234
    ctx->r5 = ADD32(ctx->r5, 0X1234);
    func_8004C048(rdram, ctx);
        goto after_14;
    // 0x80276B94: addiu       $a1, $a1, 0x1234
    ctx->r5 = ADD32(ctx->r5, 0X1234);
    after_14:
    // 0x80276B98: jal         0x80277340
    // 0x80276B9C: sb          $v0, 0x57($s0)
    MEM_B(0X57, ctx->r16) = ctx->r2;
    func_80277340(rdram, ctx);
        goto after_15;
    // 0x80276B9C: sb          $v0, 0x57($s0)
    MEM_B(0X57, ctx->r16) = ctx->r2;
    after_15:
    // 0x80276BA0: b           L_80276BB0
    // 0x80276BA4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80276BB0;
    // 0x80276BA4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80276BA8:
    // 0x80276BA8: sb          $v1, 0x58($s0)
    MEM_B(0X58, ctx->r16) = ctx->r3;
L_80276BAC:
    // 0x80276BAC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80276BB0:
    // 0x80276BB0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80276BB4: jr          $ra
    // 0x80276BB8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80276BB8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80276AD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80276AD4: b           L_80276BAC
    // 0x80276AD8: sb          $v0, 0x48($s0)
    MEM_B(0X48, ctx->r16) = ctx->r2;
        goto L_80276BAC;
    // 0x80276AD8: sb          $v0, 0x48($s0)
    MEM_B(0X48, ctx->r16) = ctx->r2;
    // 0x80276ADC: lb          $v0, 0x4C($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X4C);
    // 0x80276AE0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80276AE4: beq         $v0, $zero, L_80276AFC
    if (ctx->r2 == 0) {
        // 0x80276AE8: lui         $a1, 0x8028
        ctx->r5 = S32(0X8028 << 16);
            goto L_80276AFC;
    }
    // 0x80276AE8: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80276AEC: beq         $v0, $v1, L_80276BB0
    if (ctx->r2 == ctx->r3) {
        // 0x80276AF0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80276BB0;
    }
    // 0x80276AF0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80276AF4: b           L_80276BB0
    // 0x80276AF8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80276BB0;
    // 0x80276AF8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80276AFC:
    // 0x80276AFC: lb          $a0, 0x4D($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X4D);
    // 0x80276B00: jal         0x8004C048
    // 0x80276B04: addiu       $a1, $a1, 0x171C
    ctx->r5 = ADD32(ctx->r5, 0X171C);
    func_8004C048(rdram, ctx);
        goto after_0;
    // 0x80276B04: addiu       $a1, $a1, 0x171C
    ctx->r5 = ADD32(ctx->r5, 0X171C);
    after_0:
    // 0x80276B08: b           L_80276BAC
    // 0x80276B0C: sb          $v0, 0x4D($s0)
    MEM_B(0X4D, ctx->r16) = ctx->r2;
        goto L_80276BAC;
    // 0x80276B0C: sb          $v0, 0x4D($s0)
    MEM_B(0X4D, ctx->r16) = ctx->r2;
    // 0x80276B10: lb          $v0, 0x55($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X55);
    // 0x80276B14: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80276B18: beq         $v0, $zero, L_80276B38
    if (ctx->r2 == 0) {
        // 0x80276B1C: lui         $a1, 0x8028
        ctx->r5 = S32(0X8028 << 16);
            goto L_80276B38;
    }
    // 0x80276B1C: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80276B20: beq         $v0, $v1, L_80276B54
    if (ctx->r2 == ctx->r3) {
        // 0x80276B24: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80276B54;
    }
    // 0x80276B24: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80276B28: beq         $v0, $at, L_80276B54
    if (ctx->r2 == ctx->r1) {
        // 0x80276B2C: nop
    
            goto L_80276B54;
    }
    // 0x80276B2C: nop

    // 0x80276B30: b           L_80276BB0
    // 0x80276B34: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80276BB0;
    // 0x80276B34: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80276B38:
    // 0x80276B38: lb          $a0, 0x57($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X57);
    // 0x80276B3C: jal         0x8004C048
    // 0x80276B40: addiu       $a1, $a1, 0x1234
    ctx->r5 = ADD32(ctx->r5, 0X1234);
    func_8004C048(rdram, ctx);
        goto after_1;
    // 0x80276B40: addiu       $a1, $a1, 0x1234
    ctx->r5 = ADD32(ctx->r5, 0X1234);
    after_1:
    // 0x80276B44: jal         0x80277340
    // 0x80276B48: sb          $v0, 0x57($s0)
    MEM_B(0X57, ctx->r16) = ctx->r2;
    func_80277340(rdram, ctx);
        goto after_2;
    // 0x80276B48: sb          $v0, 0x57($s0)
    MEM_B(0X57, ctx->r16) = ctx->r2;
    after_2:
    // 0x80276B4C: b           L_80276BB0
    // 0x80276B50: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80276BB0;
    // 0x80276B50: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80276B54:
    // 0x80276B54: lb          $a0, 0x58($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X58);
    // 0x80276B58: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80276B5C: jal         0x8004C048
    // 0x80276B60: addiu       $a1, $a1, 0x128C
    ctx->r5 = ADD32(ctx->r5, 0X128C);
    func_8004C048(rdram, ctx);
        goto after_3;
    // 0x80276B60: addiu       $a1, $a1, 0x128C
    ctx->r5 = ADD32(ctx->r5, 0X128C);
    after_3:
    // 0x80276B64: b           L_80276BAC
    // 0x80276B68: sb          $v0, 0x58($s0)
    MEM_B(0X58, ctx->r16) = ctx->r2;
        goto L_80276BAC;
    // 0x80276B68: sb          $v0, 0x58($s0)
    MEM_B(0X58, ctx->r16) = ctx->r2;
    // 0x80276B6C: lb          $v0, 0x56($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X56);
    // 0x80276B70: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80276B74: beq         $v0, $zero, L_80276B8C
    if (ctx->r2 == 0) {
        // 0x80276B78: lui         $a1, 0x8028
        ctx->r5 = S32(0X8028 << 16);
            goto L_80276B8C;
    }
    // 0x80276B78: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80276B7C: beq         $v0, $v1, L_80276BA8
    if (ctx->r2 == ctx->r3) {
        // 0x80276B80: nop
    
            goto L_80276BA8;
    }
    // 0x80276B80: nop

    // 0x80276B84: b           L_80276BB0
    // 0x80276B88: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80276BB0;
    // 0x80276B88: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80276B8C:
    // 0x80276B8C: lb          $a0, 0x57($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X57);
    // 0x80276B90: jal         0x8004C048
    // 0x80276B94: addiu       $a1, $a1, 0x1234
    ctx->r5 = ADD32(ctx->r5, 0X1234);
    func_8004C048(rdram, ctx);
        goto after_4;
    // 0x80276B94: addiu       $a1, $a1, 0x1234
    ctx->r5 = ADD32(ctx->r5, 0X1234);
    after_4:
    // 0x80276B98: jal         0x80277340
    // 0x80276B9C: sb          $v0, 0x57($s0)
    MEM_B(0X57, ctx->r16) = ctx->r2;
    func_80277340(rdram, ctx);
        goto after_5;
    // 0x80276B9C: sb          $v0, 0x57($s0)
    MEM_B(0X57, ctx->r16) = ctx->r2;
    after_5:
    // 0x80276BA0: b           L_80276BB0
    // 0x80276BA4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80276BB0;
    // 0x80276BA4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80276BA8:
    // 0x80276BA8: sb          $v1, 0x58($s0)
    MEM_B(0X58, ctx->r16) = ctx->r3;
L_80276BAC:
    // 0x80276BAC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80276BB0:
    // 0x80276BB0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80276BB4: jr          $ra
    // 0x80276BB8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80276BB8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80276BB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80276BB0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80276BB4: jr          $ra
    // 0x80276BB8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80276BB8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80276BBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80276BBC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80276BC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80276BC4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80276BC8: lb          $t6, 0x38($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X38);
    // 0x80276BCC: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80276BD0: bne         $t6, $at, L_80276BFC
    if (ctx->r14 != ctx->r1) {
        // 0x80276BD4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80276BFC;
    }
    // 0x80276BD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80276BD8: lb          $t7, 0x4C($a0)
    ctx->r15 = MEM_B(ctx->r4, 0X4C);
    // 0x80276BDC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80276BE0: bne         $t7, $at, L_80276BFC
    if (ctx->r15 != ctx->r1) {
        // 0x80276BE4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80276BFC;
    }
    // 0x80276BE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80276BE8: jal         0x80035770
    // 0x80276BEC: nop

    func_80035770(rdram, ctx);
        goto after_0;
    // 0x80276BEC: nop

    after_0:
    // 0x80276BF0: jal         0x80279530
    // 0x80276BF4: nop

    func_80279530(rdram, ctx);
        goto after_1;
    // 0x80276BF4: nop

    after_1:
    // 0x80276BF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80276BFC:
    // 0x80276BFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80276C00: jr          $ra
    // 0x80276C04: nop

    return;
    // 0x80276C04: nop

;}
