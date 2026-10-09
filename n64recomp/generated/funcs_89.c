#include "iss64_recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_803F3328(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F3328: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F332C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803F3330: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F3334: lui         $a0, 0x803F
    ctx->r4 = S32(0X803F << 16);
    // 0x803F3338: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803F333C: jal         0x80029220
    // 0x803F3340: addiu       $a0, $a0, 0x336C
    ctx->r4 = ADD32(ctx->r4, 0X336C);
    func_80029220(rdram, ctx);
        goto after_0;
    // 0x803F3340: addiu       $a0, $a0, 0x336C
    ctx->r4 = ADD32(ctx->r4, 0X336C);
    after_0:
    // 0x803F3344: lbu         $t6, 0x1B($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X1B);
    // 0x803F3348: nop

    // 0x803F334C: sb          $t6, 0x38($v0)
    MEM_B(0X38, ctx->r2) = ctx->r14;
    // 0x803F3350: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x803F3354: nop

    // 0x803F3358: sw          $t7, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->r15;
    // 0x803F335C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F3360: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F3364: jr          $ra
    // 0x803F3368: nop

    return;
    // 0x803F3368: nop

;}
RECOMP_FUNC void func_803F336C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F336C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x803F3370: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x803F3374: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x803F3378: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x803F337C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x803F3380: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x803F3384: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x803F3388: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x803F338C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803F3390: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x803F3394: lw          $a1, 0x8($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X8);
    // 0x803F3398: lbu         $s3, 0x38($a0)
    ctx->r19 = MEM_BU(ctx->r4, 0X38);
    // 0x803F339C: lui         $t7, 0x8040
    ctx->r15 = S32(0X8040 << 16);
    // 0x803F33A0: addu        $v1, $a1, $s3
    ctx->r3 = ADD32(ctx->r5, ctx->r19);
    // 0x803F33A4: lb          $a2, 0x48($v1)
    ctx->r6 = MEM_B(ctx->r3, 0X48);
    // 0x803F33A8: sll         $s2, $s3, 2
    ctx->r18 = S32(ctx->r19 << 2);
    // 0x803F33AC: sll         $t6, $a2, 2
    ctx->r14 = S32(ctx->r6 << 2);
    // 0x803F33B0: subu        $t6, $t6, $a2
    ctx->r14 = SUB32(ctx->r14, ctx->r6);
    // 0x803F33B4: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x803F33B8: addiu       $t7, $t7, -0x5380
    ctx->r15 = ADD32(ctx->r15, -0X5380);
    // 0x803F33BC: subu        $s2, $s2, $s3
    ctx->r18 = SUB32(ctx->r18, ctx->r19);
    // 0x803F33C0: lw          $s1, 0x3C($a0)
    ctx->r17 = MEM_W(ctx->r4, 0X3C);
    // 0x803F33C4: lb          $s4, 0x50($v1)
    ctx->r20 = MEM_B(ctx->r3, 0X50);
    // 0x803F33C8: sll         $s2, $s2, 1
    ctx->r18 = S32(ctx->r18 << 1);
    // 0x803F33CC: addu        $s5, $t6, $t7
    ctx->r21 = ADD32(ctx->r14, ctx->r15);
    // 0x803F33D0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x803F33D4: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
    // 0x803F33D8: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
L_803F33DC:
    // 0x803F33DC: sll         $v1, $s0, 2
    ctx->r3 = S32(ctx->r16 << 2);
    // 0x803F33E0: addu        $t8, $s5, $v1
    ctx->r24 = ADD32(ctx->r21, ctx->r3);
    // 0x803F33E4: lb          $a0, 0x3($t8)
    ctx->r4 = MEM_B(ctx->r24, 0X3);
    // 0x803F33E8: beq         $s4, $t0, L_803F342C
    if (ctx->r20 == ctx->r8) {
        // 0x803F33EC: addu        $v0, $s1, $v1
        ctx->r2 = ADD32(ctx->r17, ctx->r3);
            goto L_803F342C;
    }
    // 0x803F33EC: addu        $v0, $s1, $v1
    ctx->r2 = ADD32(ctx->r17, ctx->r3);
    // 0x803F33F0: addu        $v0, $s1, $v1
    ctx->r2 = ADD32(ctx->r17, ctx->r3);
    // 0x803F33F4: lh          $a1, 0x0($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X0);
    // 0x803F33F8: lh          $a2, 0x2($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X2);
    // 0x803F33FC: addu        $a3, $s2, $t0
    ctx->r7 = ADD32(ctx->r18, ctx->r8);
    // 0x803F3400: addiu       $a1, $a1, 0x6
    ctx->r5 = ADD32(ctx->r5, 0X6);
    // 0x803F3404: addiu       $a2, $a2, -0x10
    ctx->r6 = ADD32(ctx->r6, -0X10);
    // 0x803F3408: sll         $t3, $a2, 16
    ctx->r11 = S32(ctx->r6 << 16);
    // 0x803F340C: sll         $t9, $a1, 16
    ctx->r25 = S32(ctx->r5 << 16);
    // 0x803F3410: sll         $t5, $a3, 16
    ctx->r13 = S32(ctx->r7 << 16);
    // 0x803F3414: sra         $a3, $t5, 16
    ctx->r7 = S32(SIGNED(ctx->r13) >> 16);
    // 0x803F3418: sra         $a1, $t9, 16
    ctx->r5 = S32(SIGNED(ctx->r25) >> 16);
    // 0x803F341C: jal         0x80039F1C
    // 0x803F3420: sra         $a2, $t3, 16
    ctx->r6 = S32(SIGNED(ctx->r11) >> 16);
    func_80039F1C(rdram, ctx);
        goto after_0;
    // 0x803F3420: sra         $a2, $t3, 16
    ctx->r6 = S32(SIGNED(ctx->r11) >> 16);
    after_0:
    // 0x803F3424: b           L_803F3474
    // 0x803F3428: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
        goto L_803F3474;
    // 0x803F3428: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_803F342C:
    // 0x803F342C: bne         $s6, $s3, L_803F3440
    if (ctx->r22 != ctx->r19) {
        // 0x803F3430: addiu       $t1, $zero, 0x3
        ctx->r9 = ADD32(0, 0X3);
            goto L_803F3440;
    }
    // 0x803F3430: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x803F3434: sll         $t1, $s6, 16
    ctx->r9 = S32(ctx->r22 << 16);
    // 0x803F3438: sra         $t7, $t1, 16
    ctx->r15 = S32(SIGNED(ctx->r9) >> 16);
    // 0x803F343C: or          $t1, $t7, $zero
    ctx->r9 = ctx->r15 | 0;
L_803F3440:
    // 0x803F3440: lh          $t8, 0x0($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X0);
    // 0x803F3444: lh          $a2, 0x2($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X2);
    // 0x803F3448: addu        $a3, $s2, $t0
    ctx->r7 = ADD32(ctx->r18, ctx->r8);
    // 0x803F344C: addu        $a1, $t8, $t1
    ctx->r5 = ADD32(ctx->r24, ctx->r9);
    // 0x803F3450: addiu       $a2, $a2, -0x10
    ctx->r6 = ADD32(ctx->r6, -0X10);
    // 0x803F3454: sll         $t3, $a2, 16
    ctx->r11 = S32(ctx->r6 << 16);
    // 0x803F3458: sll         $t9, $a1, 16
    ctx->r25 = S32(ctx->r5 << 16);
    // 0x803F345C: sll         $t5, $a3, 16
    ctx->r13 = S32(ctx->r7 << 16);
    // 0x803F3460: sra         $a3, $t5, 16
    ctx->r7 = S32(SIGNED(ctx->r13) >> 16);
    // 0x803F3464: sra         $a1, $t9, 16
    ctx->r5 = S32(SIGNED(ctx->r25) >> 16);
    // 0x803F3468: jal         0x80039F88
    // 0x803F346C: sra         $a2, $t3, 16
    ctx->r6 = S32(SIGNED(ctx->r11) >> 16);
    func_80039F88(rdram, ctx);
        goto after_1;
    // 0x803F346C: sra         $a2, $t3, 16
    ctx->r6 = S32(SIGNED(ctx->r11) >> 16);
    after_1:
    // 0x803F3470: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_803F3474:
    // 0x803F3474: andi        $t0, $s0, 0xFF
    ctx->r8 = ctx->r16 & 0XFF;
    // 0x803F3478: slti        $at, $t0, 0x6
    ctx->r1 = SIGNED(ctx->r8) < 0X6 ? 1 : 0;
    // 0x803F347C: bne         $at, $zero, L_803F33DC
    if (ctx->r1 != 0) {
        // 0x803F3480: or          $s0, $t0, $zero
        ctx->r16 = ctx->r8 | 0;
            goto L_803F33DC;
    }
    // 0x803F3480: or          $s0, $t0, $zero
    ctx->r16 = ctx->r8 | 0;
    // 0x803F3484: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x803F3488: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F348C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x803F3490: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x803F3494: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x803F3498: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x803F349C: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x803F34A0: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x803F34A4: jr          $ra
    // 0x803F34A8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x803F34A8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_803F34AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F34AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F34B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F34B4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803F34B8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803F34BC: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x803F34C0: addiu       $a1, $zero, 0xB6
    ctx->r5 = ADD32(0, 0XB6);
    // 0x803F34C4: lb          $a0, 0x54($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X54);
    // 0x803F34C8: addiu       $a2, $zero, 0x38
    ctx->r6 = ADD32(0, 0X38);
    // 0x803F34CC: jal         0x80039F88
    // 0x803F34D0: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_80039F88(rdram, ctx);
        goto after_0;
    // 0x803F34D0: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_0:
    // 0x803F34D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F34D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F34DC: jr          $ra
    // 0x803F34E0: nop

    return;
    // 0x803F34E0: nop

    // 0x803F34E4: nop

    // 0x803F34E8: nop

    // 0x803F34EC: nop

;}
RECOMP_FUNC void func_803F34D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F34D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F34D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F34DC: jr          $ra
    // 0x803F34E0: nop

    return;
    // 0x803F34E0: nop

    // 0x803F34E4: nop

    // 0x803F34E8: nop

    // 0x803F34EC: nop

;}
RECOMP_FUNC void func_803F34F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F34F0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803F34F4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803F34F8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x803F34FC: jal         0x80036258
    // 0x803F3500: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_80036258(rdram, ctx);
        goto after_0;
    // 0x803F3500: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x803F3504: lui         $a0, 0x803D
    ctx->r4 = S32(0X803D << 16);
    // 0x803F3508: jal         0x80035FF0
    // 0x803F350C: addiu       $a0, $a0, 0x1AFC
    ctx->r4 = ADD32(ctx->r4, 0X1AFC);
    func_80035FF0(rdram, ctx);
        goto after_1;
    // 0x803F350C: addiu       $a0, $a0, 0x1AFC
    ctx->r4 = ADD32(ctx->r4, 0X1AFC);
    after_1:
    // 0x803F3510: addiu       $a0, $zero, 0xF00
    ctx->r4 = ADD32(0, 0XF00);
    // 0x803F3514: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x803F3518: jal         0x80049E40
    // 0x803F351C: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_80049E40(rdram, ctx);
        goto after_2;
    // 0x803F351C: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_2:
    // 0x803F3520: jal         0x803F45A8
    // 0x803F3524: nop

    func_803F45A8(rdram, ctx);
        goto after_3;
    // 0x803F3524: nop

    after_3:
    // 0x803F3528: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803F352C: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x803F3530: jal         0x803F4A78
    // 0x803F3534: nop

    func_803F4A78(rdram, ctx);
        goto after_4;
    // 0x803F3534: nop

    after_4:
    // 0x803F3538: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x803F353C: jal         0x803F4B3C
    // 0x803F3540: nop

    func_803F4B3C(rdram, ctx);
        goto after_5;
    // 0x803F3540: nop

    after_5:
    // 0x803F3544: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x803F3548: addiu       $v0, $v0, -0x2F98
    ctx->r2 = ADD32(ctx->r2, -0X2F98);
    // 0x803F354C: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x803F3550: lui         $v1, 0x2
    ctx->r3 = S32(0X2 << 16);
    // 0x803F3554: ori         $v1, $v1, 0x8000
    ctx->r3 = ctx->r3 | 0X8000;
    // 0x803F3558: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803F355C: addu        $t7, $t6, $v1
    ctx->r15 = ADD32(ctx->r14, ctx->r3);
    // 0x803F3560: sb          $a1, 0x60E1($t7)
    MEM_B(0X60E1, ctx->r15) = ctx->r5;
    // 0x803F3564: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x803F3568: nop

    // 0x803F356C: addu        $t9, $t8, $v1
    ctx->r25 = ADD32(ctx->r24, ctx->r3);
    // 0x803F3570: sb          $a1, 0x63AD($t9)
    MEM_B(0X63AD, ctx->r25) = ctx->r5;
    // 0x803F3574: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x803F3578: jal         0x8004AFC0
    // 0x803F357C: nop

    func_8004AFC0(rdram, ctx);
        goto after_6;
    // 0x803F357C: nop

    after_6:
    // 0x803F3580: jal         0x803F53D0
    // 0x803F3584: nop

    func_803F53D0(rdram, ctx);
        goto after_7;
    // 0x803F3584: nop

    after_7:
    // 0x803F3588: jal         0x803F558C
    // 0x803F358C: nop

    func_803F558C(rdram, ctx);
        goto after_8;
    // 0x803F358C: nop

    after_8:
    // 0x803F3590: jal         0x803F5734
    // 0x803F3594: nop

    func_803F5734(rdram, ctx);
        goto after_9;
    // 0x803F3594: nop

    after_9:
    // 0x803F3598: jal         0x803F6B18
    // 0x803F359C: nop

    func_803F6B18(rdram, ctx);
        goto after_10;
    // 0x803F359C: nop

    after_10:
    // 0x803F35A0: lui         $t0, 0x800B
    ctx->r8 = S32(0X800B << 16);
    // 0x803F35A4: addiu       $t0, $t0, -0x6C84
    ctx->r8 = ADD32(ctx->r8, -0X6C84);
    // 0x803F35A8: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x803F35AC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x803F35B0: sw          $at, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r1;
    // 0x803F35B4: lw          $a2, 0x4($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X4);
    // 0x803F35B8: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x803F35BC: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x803F35C0: lw          $a3, 0x8($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X8);
    // 0x803F35C4: jal         0x8004B1A0
    // 0x803F35C8: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    func_8004B1A0(rdram, ctx);
        goto after_11;
    // 0x803F35C8: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    after_11:
    // 0x803F35CC: jal         0x803F6100
    // 0x803F35D0: nop

    func_803F6100(rdram, ctx);
        goto after_12;
    // 0x803F35D0: nop

    after_12:
    // 0x803F35D4: lui         $a0, 0x8040
    ctx->r4 = S32(0X8040 << 16);
    // 0x803F35D8: jal         0x8002AAC0
    // 0x803F35DC: addiu       $a0, $a0, -0x4A88
    ctx->r4 = ADD32(ctx->r4, -0X4A88);
    func_8002AAC0(rdram, ctx);
        goto after_13;
    // 0x803F35DC: addiu       $a0, $a0, -0x4A88
    ctx->r4 = ADD32(ctx->r4, -0X4A88);
    after_13:
    // 0x803F35E0: lui         $a0, 0x803F
    ctx->r4 = S32(0X803F << 16);
    // 0x803F35E4: jal         0x80029220
    // 0x803F35E8: addiu       $a0, $a0, 0x59D8
    ctx->r4 = ADD32(ctx->r4, 0X59D8);
    func_80029220(rdram, ctx);
        goto after_14;
    // 0x803F35E8: addiu       $a0, $a0, 0x59D8
    ctx->r4 = ADD32(ctx->r4, 0X59D8);
    after_14:
    // 0x803F35EC: jal         0x803F5270
    // 0x803F35F0: nop

    func_803F5270(rdram, ctx);
        goto after_15;
    // 0x803F35F0: nop

    after_15:
    // 0x803F35F4: jal         0x803F6A04
    // 0x803F35F8: nop

    func_803F6A04(rdram, ctx);
        goto after_16;
    // 0x803F35F8: nop

    after_16:
    // 0x803F35FC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803F3600: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x803F3604: jal         0x8006F918
    // 0x803F3608: nop

    func_8006F918(rdram, ctx);
        goto after_17;
    // 0x803F3608: nop

    after_17:
    // 0x803F360C: jal         0x803F5148
    // 0x803F3610: nop

    func_803F5148(rdram, ctx);
        goto after_18;
    // 0x803F3610: nop

    after_18:
    // 0x803F3614: jal         0x803F5100
    // 0x803F3618: nop

    func_803F5100(rdram, ctx);
        goto after_19;
    // 0x803F3618: nop

    after_19:
    // 0x803F361C: addiu       $t3, $zero, 0x2F
    ctx->r11 = ADD32(0, 0X2F);
    // 0x803F3620: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x803F3624: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x803F3628: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803F362C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x803F3630: jal         0x8004B918
    // 0x803F3634: addiu       $a3, $zero, 0x140
    ctx->r7 = ADD32(0, 0X140);
    func_8004B918(rdram, ctx);
        goto after_20;
    // 0x803F3634: addiu       $a3, $zero, 0x140
    ctx->r7 = ADD32(0, 0X140);
    after_20:
    // 0x803F3638: jal         0x803F6DA4
    // 0x803F363C: nop

    func_803F6DA4(rdram, ctx);
        goto after_21;
    // 0x803F363C: nop

    after_21:
    // 0x803F3640: jal         0x803F50A8
    // 0x803F3644: nop

    func_803F50A8(rdram, ctx);
        goto after_22;
    // 0x803F3644: nop

    after_22:
    // 0x803F3648: jal         0x803F5BF8
    // 0x803F364C: nop

    func_803F5BF8(rdram, ctx);
        goto after_23;
    // 0x803F364C: nop

    after_23:
    // 0x803F3650: jal         0x803F6590
    // 0x803F3654: nop

    func_803F6590(rdram, ctx);
        goto after_24;
    // 0x803F3654: nop

    after_24:
    // 0x803F3658: jal         0x803F6324
    // 0x803F365C: nop

    func_803F6324(rdram, ctx);
        goto after_25;
    // 0x803F365C: nop

    after_25:
    // 0x803F3660: jal         0x803F6488
    // 0x803F3664: nop

    func_803F6488(rdram, ctx);
        goto after_26;
    // 0x803F3664: nop

    after_26:
    // 0x803F3668: jal         0x803F6210
    // 0x803F366C: nop

    func_803F6210(rdram, ctx);
        goto after_27;
    // 0x803F366C: nop

    after_27:
    // 0x803F3670: jal         0x803F5C8C
    // 0x803F3674: nop

    func_803F5C8C(rdram, ctx);
        goto after_28;
    // 0x803F3674: nop

    after_28:
    // 0x803F3678: jal         0x803F5EF0
    // 0x803F367C: nop

    func_803F5EF0(rdram, ctx);
        goto after_29;
    // 0x803F367C: nop

    after_29:
    // 0x803F3680: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x803F3684: lbu         $t4, -0x3272($t4)
    ctx->r12 = MEM_BU(ctx->r12, -0X3272);
    // 0x803F3688: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803F368C: bne         $t4, $at, L_803F369C
    if (ctx->r12 != ctx->r1) {
        // 0x803F3690: nop
    
            goto L_803F369C;
    }
    // 0x803F3690: nop

    // 0x803F3694: jal         0x803F6C5C
    // 0x803F3698: nop

    func_803F6C5C(rdram, ctx);
        goto after_30;
    // 0x803F3698: nop

    after_30:
L_803F369C:
    // 0x803F369C: lui         $a0, 0x803F
    ctx->r4 = S32(0X803F << 16);
    // 0x803F36A0: addiu       $a0, $a0, 0x36BC
    ctx->r4 = ADD32(ctx->r4, 0X36BC);
    // 0x803F36A4: jal         0x8004AE38
    // 0x803F36A8: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_8004AE38(rdram, ctx);
        goto after_31;
    // 0x803F36A8: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_31:
    // 0x803F36AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F36B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803F36B4: jr          $ra
    // 0x803F36B8: nop

    return;
    // 0x803F36B8: nop

;}
RECOMP_FUNC void func_803F3508(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F3508: jal         0x80035FF0
    // 0x803F350C: addiu       $a0, $a0, 0x1AFC
    ctx->r4 = ADD32(ctx->r4, 0X1AFC);
    func_80035FF0(rdram, ctx);
        goto after_0;
    // 0x803F350C: addiu       $a0, $a0, 0x1AFC
    ctx->r4 = ADD32(ctx->r4, 0X1AFC);
    after_0:
    // 0x803F3510: addiu       $a0, $zero, 0xF00
    ctx->r4 = ADD32(0, 0XF00);
    // 0x803F3514: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x803F3518: jal         0x80049E40
    // 0x803F351C: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_80049E40(rdram, ctx);
        goto after_1;
    // 0x803F351C: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_1:
    // 0x803F3520: jal         0x803F45A8
    // 0x803F3524: nop

    func_803F45A8(rdram, ctx);
        goto after_2;
    // 0x803F3524: nop

    after_2:
    // 0x803F3528: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803F352C: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x803F3530: jal         0x803F4A78
    // 0x803F3534: nop

    func_803F4A78(rdram, ctx);
        goto after_3;
    // 0x803F3534: nop

    after_3:
    // 0x803F3538: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x803F353C: jal         0x803F4B3C
    // 0x803F3540: nop

    func_803F4B3C(rdram, ctx);
        goto after_4;
    // 0x803F3540: nop

    after_4:
    // 0x803F3544: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x803F3548: addiu       $v0, $v0, -0x2F98
    ctx->r2 = ADD32(ctx->r2, -0X2F98);
    // 0x803F354C: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x803F3550: lui         $v1, 0x2
    ctx->r3 = S32(0X2 << 16);
    // 0x803F3554: ori         $v1, $v1, 0x8000
    ctx->r3 = ctx->r3 | 0X8000;
    // 0x803F3558: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803F355C: addu        $t7, $t6, $v1
    ctx->r15 = ADD32(ctx->r14, ctx->r3);
    // 0x803F3560: sb          $a1, 0x60E1($t7)
    MEM_B(0X60E1, ctx->r15) = ctx->r5;
    // 0x803F3564: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x803F3568: nop

    // 0x803F356C: addu        $t9, $t8, $v1
    ctx->r25 = ADD32(ctx->r24, ctx->r3);
    // 0x803F3570: sb          $a1, 0x63AD($t9)
    MEM_B(0X63AD, ctx->r25) = ctx->r5;
    // 0x803F3574: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x803F3578: jal         0x8004AFC0
    // 0x803F357C: nop

    func_8004AFC0(rdram, ctx);
        goto after_5;
    // 0x803F357C: nop

    after_5:
    // 0x803F3580: jal         0x803F53D0
    // 0x803F3584: nop

    func_803F53D0(rdram, ctx);
        goto after_6;
    // 0x803F3584: nop

    after_6:
    // 0x803F3588: jal         0x803F558C
    // 0x803F358C: nop

    func_803F558C(rdram, ctx);
        goto after_7;
    // 0x803F358C: nop

    after_7:
    // 0x803F3590: jal         0x803F5734
    // 0x803F3594: nop

    func_803F5734(rdram, ctx);
        goto after_8;
    // 0x803F3594: nop

    after_8:
    // 0x803F3598: jal         0x803F6B18
    // 0x803F359C: nop

    func_803F6B18(rdram, ctx);
        goto after_9;
    // 0x803F359C: nop

    after_9:
    // 0x803F35A0: lui         $t0, 0x800B
    ctx->r8 = S32(0X800B << 16);
    // 0x803F35A4: addiu       $t0, $t0, -0x6C84
    ctx->r8 = ADD32(ctx->r8, -0X6C84);
    // 0x803F35A8: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x803F35AC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x803F35B0: sw          $at, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r1;
    // 0x803F35B4: lw          $a2, 0x4($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X4);
    // 0x803F35B8: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x803F35BC: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x803F35C0: lw          $a3, 0x8($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X8);
    // 0x803F35C4: jal         0x8004B1A0
    // 0x803F35C8: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    func_8004B1A0(rdram, ctx);
        goto after_10;
    // 0x803F35C8: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    after_10:
    // 0x803F35CC: jal         0x803F6100
    // 0x803F35D0: nop

    func_803F6100(rdram, ctx);
        goto after_11;
    // 0x803F35D0: nop

    after_11:
    // 0x803F35D4: lui         $a0, 0x8040
    ctx->r4 = S32(0X8040 << 16);
    // 0x803F35D8: jal         0x8002AAC0
    // 0x803F35DC: addiu       $a0, $a0, -0x4A88
    ctx->r4 = ADD32(ctx->r4, -0X4A88);
    func_8002AAC0(rdram, ctx);
        goto after_12;
    // 0x803F35DC: addiu       $a0, $a0, -0x4A88
    ctx->r4 = ADD32(ctx->r4, -0X4A88);
    after_12:
    // 0x803F35E0: lui         $a0, 0x803F
    ctx->r4 = S32(0X803F << 16);
    // 0x803F35E4: jal         0x80029220
    // 0x803F35E8: addiu       $a0, $a0, 0x59D8
    ctx->r4 = ADD32(ctx->r4, 0X59D8);
    func_80029220(rdram, ctx);
        goto after_13;
    // 0x803F35E8: addiu       $a0, $a0, 0x59D8
    ctx->r4 = ADD32(ctx->r4, 0X59D8);
    after_13:
    // 0x803F35EC: jal         0x803F5270
    // 0x803F35F0: nop

    func_803F5270(rdram, ctx);
        goto after_14;
    // 0x803F35F0: nop

    after_14:
    // 0x803F35F4: jal         0x803F6A04
    // 0x803F35F8: nop

    func_803F6A04(rdram, ctx);
        goto after_15;
    // 0x803F35F8: nop

    after_15:
    // 0x803F35FC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803F3600: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x803F3604: jal         0x8006F918
    // 0x803F3608: nop

    func_8006F918(rdram, ctx);
        goto after_16;
    // 0x803F3608: nop

    after_16:
    // 0x803F360C: jal         0x803F5148
    // 0x803F3610: nop

    func_803F5148(rdram, ctx);
        goto after_17;
    // 0x803F3610: nop

    after_17:
    // 0x803F3614: jal         0x803F5100
    // 0x803F3618: nop

    func_803F5100(rdram, ctx);
        goto after_18;
    // 0x803F3618: nop

    after_18:
    // 0x803F361C: addiu       $t3, $zero, 0x2F
    ctx->r11 = ADD32(0, 0X2F);
    // 0x803F3620: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x803F3624: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x803F3628: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803F362C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x803F3630: jal         0x8004B918
    // 0x803F3634: addiu       $a3, $zero, 0x140
    ctx->r7 = ADD32(0, 0X140);
    func_8004B918(rdram, ctx);
        goto after_19;
    // 0x803F3634: addiu       $a3, $zero, 0x140
    ctx->r7 = ADD32(0, 0X140);
    after_19:
    // 0x803F3638: jal         0x803F6DA4
    // 0x803F363C: nop

    func_803F6DA4(rdram, ctx);
        goto after_20;
    // 0x803F363C: nop

    after_20:
    // 0x803F3640: jal         0x803F50A8
    // 0x803F3644: nop

    func_803F50A8(rdram, ctx);
        goto after_21;
    // 0x803F3644: nop

    after_21:
    // 0x803F3648: jal         0x803F5BF8
    // 0x803F364C: nop

    func_803F5BF8(rdram, ctx);
        goto after_22;
    // 0x803F364C: nop

    after_22:
    // 0x803F3650: jal         0x803F6590
    // 0x803F3654: nop

    func_803F6590(rdram, ctx);
        goto after_23;
    // 0x803F3654: nop

    after_23:
    // 0x803F3658: jal         0x803F6324
    // 0x803F365C: nop

    func_803F6324(rdram, ctx);
        goto after_24;
    // 0x803F365C: nop

    after_24:
    // 0x803F3660: jal         0x803F6488
    // 0x803F3664: nop

    func_803F6488(rdram, ctx);
        goto after_25;
    // 0x803F3664: nop

    after_25:
    // 0x803F3668: jal         0x803F6210
    // 0x803F366C: nop

    func_803F6210(rdram, ctx);
        goto after_26;
    // 0x803F366C: nop

    after_26:
    // 0x803F3670: jal         0x803F5C8C
    // 0x803F3674: nop

    func_803F5C8C(rdram, ctx);
        goto after_27;
    // 0x803F3674: nop

    after_27:
    // 0x803F3678: jal         0x803F5EF0
    // 0x803F367C: nop

    func_803F5EF0(rdram, ctx);
        goto after_28;
    // 0x803F367C: nop

    after_28:
    // 0x803F3680: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x803F3684: lbu         $t4, -0x3272($t4)
    ctx->r12 = MEM_BU(ctx->r12, -0X3272);
    // 0x803F3688: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803F368C: bne         $t4, $at, L_803F369C
    if (ctx->r12 != ctx->r1) {
        // 0x803F3690: nop
    
            goto L_803F369C;
    }
    // 0x803F3690: nop

    // 0x803F3694: jal         0x803F6C5C
    // 0x803F3698: nop

    func_803F6C5C(rdram, ctx);
        goto after_29;
    // 0x803F3698: nop

    after_29:
L_803F369C:
    // 0x803F369C: lui         $a0, 0x803F
    ctx->r4 = S32(0X803F << 16);
    // 0x803F36A0: addiu       $a0, $a0, 0x36BC
    ctx->r4 = ADD32(ctx->r4, 0X36BC);
    // 0x803F36A4: jal         0x8004AE38
    // 0x803F36A8: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_8004AE38(rdram, ctx);
        goto after_30;
    // 0x803F36A8: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_30:
    // 0x803F36AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F36B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803F36B4: jr          $ra
    // 0x803F36B8: nop

    return;
    // 0x803F36B8: nop

;}
RECOMP_FUNC void func_803F35D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F35D8: jal         0x8002AAC0
    // 0x803F35DC: addiu       $a0, $a0, -0x4A88
    ctx->r4 = ADD32(ctx->r4, -0X4A88);
    func_8002AAC0(rdram, ctx);
        goto after_0;
    // 0x803F35DC: addiu       $a0, $a0, -0x4A88
    ctx->r4 = ADD32(ctx->r4, -0X4A88);
    after_0:
    // 0x803F35E0: lui         $a0, 0x803F
    ctx->r4 = S32(0X803F << 16);
    // 0x803F35E4: jal         0x80029220
    // 0x803F35E8: addiu       $a0, $a0, 0x59D8
    ctx->r4 = ADD32(ctx->r4, 0X59D8);
    func_80029220(rdram, ctx);
        goto after_1;
    // 0x803F35E8: addiu       $a0, $a0, 0x59D8
    ctx->r4 = ADD32(ctx->r4, 0X59D8);
    after_1:
    // 0x803F35EC: jal         0x803F5270
    // 0x803F35F0: nop

    func_803F5270(rdram, ctx);
        goto after_2;
    // 0x803F35F0: nop

    after_2:
    // 0x803F35F4: jal         0x803F6A04
    // 0x803F35F8: nop

    func_803F6A04(rdram, ctx);
        goto after_3;
    // 0x803F35F8: nop

    after_3:
    // 0x803F35FC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803F3600: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x803F3604: jal         0x8006F918
    // 0x803F3608: nop

    func_8006F918(rdram, ctx);
        goto after_4;
    // 0x803F3608: nop

    after_4:
    // 0x803F360C: jal         0x803F5148
    // 0x803F3610: nop

    func_803F5148(rdram, ctx);
        goto after_5;
    // 0x803F3610: nop

    after_5:
    // 0x803F3614: jal         0x803F5100
    // 0x803F3618: nop

    func_803F5100(rdram, ctx);
        goto after_6;
    // 0x803F3618: nop

    after_6:
    // 0x803F361C: addiu       $t3, $zero, 0x2F
    ctx->r11 = ADD32(0, 0X2F);
    // 0x803F3620: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x803F3624: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x803F3628: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803F362C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x803F3630: jal         0x8004B918
    // 0x803F3634: addiu       $a3, $zero, 0x140
    ctx->r7 = ADD32(0, 0X140);
    func_8004B918(rdram, ctx);
        goto after_7;
    // 0x803F3634: addiu       $a3, $zero, 0x140
    ctx->r7 = ADD32(0, 0X140);
    after_7:
    // 0x803F3638: jal         0x803F6DA4
    // 0x803F363C: nop

    func_803F6DA4(rdram, ctx);
        goto after_8;
    // 0x803F363C: nop

    after_8:
    // 0x803F3640: jal         0x803F50A8
    // 0x803F3644: nop

    func_803F50A8(rdram, ctx);
        goto after_9;
    // 0x803F3644: nop

    after_9:
    // 0x803F3648: jal         0x803F5BF8
    // 0x803F364C: nop

    func_803F5BF8(rdram, ctx);
        goto after_10;
    // 0x803F364C: nop

    after_10:
    // 0x803F3650: jal         0x803F6590
    // 0x803F3654: nop

    func_803F6590(rdram, ctx);
        goto after_11;
    // 0x803F3654: nop

    after_11:
    // 0x803F3658: jal         0x803F6324
    // 0x803F365C: nop

    func_803F6324(rdram, ctx);
        goto after_12;
    // 0x803F365C: nop

    after_12:
    // 0x803F3660: jal         0x803F6488
    // 0x803F3664: nop

    func_803F6488(rdram, ctx);
        goto after_13;
    // 0x803F3664: nop

    after_13:
    // 0x803F3668: jal         0x803F6210
    // 0x803F366C: nop

    func_803F6210(rdram, ctx);
        goto after_14;
    // 0x803F366C: nop

    after_14:
    // 0x803F3670: jal         0x803F5C8C
    // 0x803F3674: nop

    func_803F5C8C(rdram, ctx);
        goto after_15;
    // 0x803F3674: nop

    after_15:
    // 0x803F3678: jal         0x803F5EF0
    // 0x803F367C: nop

    func_803F5EF0(rdram, ctx);
        goto after_16;
    // 0x803F367C: nop

    after_16:
    // 0x803F3680: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x803F3684: lbu         $t4, -0x3272($t4)
    ctx->r12 = MEM_BU(ctx->r12, -0X3272);
    // 0x803F3688: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803F368C: bne         $t4, $at, L_803F369C
    if (ctx->r12 != ctx->r1) {
        // 0x803F3690: nop
    
            goto L_803F369C;
    }
    // 0x803F3690: nop

    // 0x803F3694: jal         0x803F6C5C
    // 0x803F3698: nop

    func_803F6C5C(rdram, ctx);
        goto after_17;
    // 0x803F3698: nop

    after_17:
L_803F369C:
    // 0x803F369C: lui         $a0, 0x803F
    ctx->r4 = S32(0X803F << 16);
    // 0x803F36A0: addiu       $a0, $a0, 0x36BC
    ctx->r4 = ADD32(ctx->r4, 0X36BC);
    // 0x803F36A4: jal         0x8004AE38
    // 0x803F36A8: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_8004AE38(rdram, ctx);
        goto after_18;
    // 0x803F36A8: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_18:
    // 0x803F36AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F36B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803F36B4: jr          $ra
    // 0x803F36B8: nop

    return;
    // 0x803F36B8: nop

;}
RECOMP_FUNC void func_803F36BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F36BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F36C0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803F36C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F36C8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803F36CC: lui         $a0, 0x803F
    ctx->r4 = S32(0X803F << 16);
    // 0x803F36D0: addiu       $a0, $a0, 0x36EC
    ctx->r4 = ADD32(ctx->r4, 0X36EC);
    // 0x803F36D4: jal         0x8002989C
    // 0x803F36D8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_8002989C(rdram, ctx);
        goto after_0;
    // 0x803F36D8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_0:
    // 0x803F36DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F36E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F36E4: jr          $ra
    // 0x803F36E8: nop

    return;
    // 0x803F36E8: nop

;}
RECOMP_FUNC void func_803F36EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F36EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F36F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F36F4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803F36F8: jal         0x803F46E8
    // 0x803F36FC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_803F46E8(rdram, ctx);
        goto after_0;
    // 0x803F36FC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x803F3700: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F3704: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F3708: jr          $ra
    // 0x803F370C: nop

    return;
    // 0x803F370C: nop

;}
RECOMP_FUNC void func_803F3710(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F3710: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F3714: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F3718: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803F371C: lb          $v0, 0x38($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X38);
    // 0x803F3720: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x803F3724: beq         $v0, $zero, L_803F3748
    if (ctx->r2 == 0) {
        // 0x803F3728: addiu       $t6, $zero, 0x2
        ctx->r14 = ADD32(0, 0X2);
            goto L_803F3748;
    }
    // 0x803F3728: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x803F372C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803F3730: beq         $v0, $at, L_803F3758
    if (ctx->r2 == ctx->r1) {
        // 0x803F3734: addiu       $t7, $zero, 0x3
        ctx->r15 = ADD32(0, 0X3);
            goto L_803F3758;
    }
    // 0x803F3734: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x803F3738: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x803F373C: addiu       $v0, $v0, -0x32B0
    ctx->r2 = ADD32(ctx->r2, -0X32B0);
    // 0x803F3740: b           L_803F3764
    // 0x803F3744: sb          $zero, 0x6A($v0)
    MEM_B(0X6A, ctx->r2) = 0;
        goto L_803F3764;
    // 0x803F3744: sb          $zero, 0x6A($v0)
    MEM_B(0X6A, ctx->r2) = 0;
L_803F3748:
    // 0x803F3748: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x803F374C: addiu       $v0, $v0, -0x32B0
    ctx->r2 = ADD32(ctx->r2, -0X32B0);
    // 0x803F3750: b           L_803F3764
    // 0x803F3754: sb          $t6, 0x6A($v0)
    MEM_B(0X6A, ctx->r2) = ctx->r14;
        goto L_803F3764;
    // 0x803F3754: sb          $t6, 0x6A($v0)
    MEM_B(0X6A, ctx->r2) = ctx->r14;
L_803F3758:
    // 0x803F3758: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x803F375C: addiu       $v0, $v0, -0x32B0
    ctx->r2 = ADD32(ctx->r2, -0X32B0);
    // 0x803F3760: sb          $t7, 0x6A($v0)
    MEM_B(0X6A, ctx->r2) = ctx->r15;
L_803F3764:
    // 0x803F3764: sb          $zero, 0x48($a2)
    MEM_B(0X48, ctx->r6) = 0;
    // 0x803F3768: sb          $zero, 0x49($a2)
    MEM_B(0X49, ctx->r6) = 0;
    // 0x803F376C: sb          $zero, 0x45($a2)
    MEM_B(0X45, ctx->r6) = 0;
    // 0x803F3770: sb          $zero, 0x4D($a2)
    MEM_B(0X4D, ctx->r6) = 0;
    // 0x803F3774: lw          $t8, 0x60($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X60);
    // 0x803F3778: nop

    // 0x803F377C: lhu         $a0, 0x0($t8)
    ctx->r4 = MEM_HU(ctx->r24, 0X0);
    // 0x803F3780: jal         0x80035DE8
    // 0x803F3784: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_80035DE8(rdram, ctx);
        goto after_0;
    // 0x803F3784: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x803F3788: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x803F378C: lui         $at, 0x8040
    ctx->r1 = S32(0X8040 << 16);
    // 0x803F3790: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x803F3794: lw          $t9, -0x493C($at)
    ctx->r25 = MEM_W(ctx->r1, -0X493C);
    // 0x803F3798: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803F379C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x803F37A0: jalr        $t9
    // 0x803F37A4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x803F37A4: nop

    after_1:
    // 0x803F37A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F37AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F37B0: jr          $ra
    // 0x803F37B4: nop

    return;
    // 0x803F37B4: nop

;}
RECOMP_FUNC void func_803F3720(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F3720: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x803F3724: beq         $v0, $zero, L_803F3748
    if (ctx->r2 == 0) {
        // 0x803F3728: addiu       $t6, $zero, 0x2
        ctx->r14 = ADD32(0, 0X2);
            goto L_803F3748;
    }
    // 0x803F3728: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x803F372C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803F3730: beq         $v0, $at, L_803F3758
    if (ctx->r2 == ctx->r1) {
        // 0x803F3734: addiu       $t7, $zero, 0x3
        ctx->r15 = ADD32(0, 0X3);
            goto L_803F3758;
    }
    // 0x803F3734: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x803F3738: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x803F373C: addiu       $v0, $v0, -0x32B0
    ctx->r2 = ADD32(ctx->r2, -0X32B0);
    // 0x803F3740: b           L_803F3764
    // 0x803F3744: sb          $zero, 0x6A($v0)
    MEM_B(0X6A, ctx->r2) = 0;
        goto L_803F3764;
    // 0x803F3744: sb          $zero, 0x6A($v0)
    MEM_B(0X6A, ctx->r2) = 0;
L_803F3748:
    // 0x803F3748: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x803F374C: addiu       $v0, $v0, -0x32B0
    ctx->r2 = ADD32(ctx->r2, -0X32B0);
    // 0x803F3750: b           L_803F3764
    // 0x803F3754: sb          $t6, 0x6A($v0)
    MEM_B(0X6A, ctx->r2) = ctx->r14;
        goto L_803F3764;
    // 0x803F3754: sb          $t6, 0x6A($v0)
    MEM_B(0X6A, ctx->r2) = ctx->r14;
L_803F3758:
    // 0x803F3758: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x803F375C: addiu       $v0, $v0, -0x32B0
    ctx->r2 = ADD32(ctx->r2, -0X32B0);
    // 0x803F3760: sb          $t7, 0x6A($v0)
    MEM_B(0X6A, ctx->r2) = ctx->r15;
L_803F3764:
    // 0x803F3764: sb          $zero, 0x48($a2)
    MEM_B(0X48, ctx->r6) = 0;
    // 0x803F3768: sb          $zero, 0x49($a2)
    MEM_B(0X49, ctx->r6) = 0;
    // 0x803F376C: sb          $zero, 0x45($a2)
    MEM_B(0X45, ctx->r6) = 0;
    // 0x803F3770: sb          $zero, 0x4D($a2)
    MEM_B(0X4D, ctx->r6) = 0;
    // 0x803F3774: lw          $t8, 0x60($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X60);
    // 0x803F3778: nop

    // 0x803F377C: lhu         $a0, 0x0($t8)
    ctx->r4 = MEM_HU(ctx->r24, 0X0);
    // 0x803F3780: jal         0x80035DE8
    // 0x803F3784: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_80035DE8(rdram, ctx);
        goto after_0;
    // 0x803F3784: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x803F3788: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x803F378C: lui         $at, 0x8040
    ctx->r1 = S32(0X8040 << 16);
    // 0x803F3790: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x803F3794: lw          $t9, -0x493C($at)
    ctx->r25 = MEM_W(ctx->r1, -0X493C);
    // 0x803F3798: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803F379C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x803F37A0: jalr        $t9
    // 0x803F37A4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x803F37A4: nop

    after_1:
    // 0x803F37A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F37AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F37B0: jr          $ra
    // 0x803F37B4: nop

    return;
    // 0x803F37B4: nop

;}
RECOMP_FUNC void func_803F37B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F37B8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x803F37BC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x803F37C0: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x803F37C4: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x803F37C8: lb          $v0, 0x38($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X38);
    // 0x803F37CC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x803F37D0: beq         $v0, $zero, L_803F37F8
    if (ctx->r2 == 0) {
        // 0x803F37D4: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_803F37F8;
    }
    // 0x803F37D4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F37D8: beq         $v0, $a2, L_803F3A20
    if (ctx->r2 == ctx->r6) {
        // 0x803F37DC: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_803F3A20;
    }
    // 0x803F37DC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803F37E0: beq         $v0, $at, L_803F3B2C
    if (ctx->r2 == ctx->r1) {
        // 0x803F37E4: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_803F3B2C;
    }
    // 0x803F37E4: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x803F37E8: beq         $v0, $v1, L_803F3964
    if (ctx->r2 == ctx->r3) {
        // 0x803F37EC: nop
    
            goto L_803F3964;
    }
    // 0x803F37EC: nop

    // 0x803F37F0: b           L_803F3C08
    // 0x803F37F4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_803F3C08;
    // 0x803F37F4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_803F37F8:
    // 0x803F37F8: jal         0x80035770
    // 0x803F37FC: nop

    func_80035770(rdram, ctx);
        goto after_0;
    // 0x803F37FC: nop

    after_0:
    // 0x803F3800: lb          $v0, 0x39($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X39);
    // 0x803F3804: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3808: beq         $v0, $zero, L_803F3830
    if (ctx->r2 == 0) {
        // 0x803F380C: nop
    
            goto L_803F3830;
    }
    // 0x803F380C: nop

    // 0x803F3810: beq         $v0, $a2, L_803F38F8
    if (ctx->r2 == ctx->r6) {
        // 0x803F3814: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_803F38F8;
    }
    // 0x803F3814: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803F3818: beq         $v0, $at, L_803F392C
    if (ctx->r2 == ctx->r1) {
        // 0x803F381C: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_803F392C;
    }
    // 0x803F381C: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x803F3820: beq         $v0, $v1, L_803F38E8
    if (ctx->r2 == ctx->r3) {
        // 0x803F3824: nop
    
            goto L_803F38E8;
    }
    // 0x803F3824: nop

    // 0x803F3828: b           L_803F3C08
    // 0x803F382C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_803F3C08;
    // 0x803F382C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_803F3830:
    // 0x803F3830: jal         0x803F79A4
    // 0x803F3834: nop

    func_803F79A4(rdram, ctx);
        goto after_1;
    // 0x803F3834: nop

    after_1:
    // 0x803F3838: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F383C: bne         $a2, $v0, L_803F38A4
    if (ctx->r6 != ctx->r2) {
        // 0x803F3840: addiu       $t2, $zero, 0x4
        ctx->r10 = ADD32(0, 0X4);
            goto L_803F38A4;
    }
    // 0x803F3840: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    // 0x803F3844: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x803F3848: lb          $t6, -0x326C($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X326C);
    // 0x803F384C: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x803F3850: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803F3854: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803F3858: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803F385C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803F3860: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x803F3864: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803F3868: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803F386C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803F3870: lb          $t9, 0x3F($s0)
    ctx->r25 = MEM_B(ctx->r16, 0X3F);
    // 0x803F3874: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803F3878: addiu       $t8, $t8, -0x2CF0
    ctx->r24 = ADD32(ctx->r24, -0X2CF0);
    // 0x803F387C: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x803F3880: sb          $t9, 0x8A9($v0)
    MEM_B(0X8A9, ctx->r2) = ctx->r25;
    // 0x803F3884: lb          $t0, 0x40($s0)
    ctx->r8 = MEM_B(ctx->r16, 0X40);
    // 0x803F3888: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x803F388C: sb          $t0, 0x8AA($v0)
    MEM_B(0X8AA, ctx->r2) = ctx->r8;
    // 0x803F3890: lb          $t1, 0x41($s0)
    ctx->r9 = MEM_B(ctx->r16, 0X41);
    // 0x803F3894: jal         0x800373A4
    // 0x803F3898: sb          $t1, 0x8AB($v0)
    MEM_B(0X8AB, ctx->r2) = ctx->r9;
    func_800373A4(rdram, ctx);
        goto after_2;
    // 0x803F3898: sb          $t1, 0x8AB($v0)
    MEM_B(0X8AB, ctx->r2) = ctx->r9;
    after_2:
    // 0x803F389C: b           L_803F3C08
    // 0x803F38A0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_803F3C08;
    // 0x803F38A0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_803F38A4:
    // 0x803F38A4: sb          $t2, 0x38($s0)
    MEM_B(0X38, ctx->r16) = ctx->r10;
    // 0x803F38A8: lui         $t6, 0x803F
    ctx->r14 = S32(0X803F << 16);
    // 0x803F38AC: addiu       $t6, $t6, 0x4790
    ctx->r14 = ADD32(ctx->r14, 0X4790);
    // 0x803F38B0: addiu       $t3, $zero, 0x140
    ctx->r11 = ADD32(0, 0X140);
    // 0x803F38B4: addiu       $t4, $zero, 0x2A
    ctx->r12 = ADD32(0, 0X2A);
    // 0x803F38B8: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x803F38BC: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x803F38C0: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x803F38C4: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x803F38C8: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x803F38CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F38D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803F38D4: addiu       $a2, $zero, 0x140
    ctx->r6 = ADD32(0, 0X140);
    // 0x803F38D8: jal         0x8004B4B4
    // 0x803F38DC: addiu       $a3, $zero, 0x5A
    ctx->r7 = ADD32(0, 0X5A);
    func_8004B4B4(rdram, ctx);
        goto after_3;
    // 0x803F38DC: addiu       $a3, $zero, 0x5A
    ctx->r7 = ADD32(0, 0X5A);
    after_3:
    // 0x803F38E0: b           L_803F3C08
    // 0x803F38E4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_803F3C08;
    // 0x803F38E4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_803F38E8:
    // 0x803F38E8: sb          $v1, 0x38($s0)
    MEM_B(0X38, ctx->r16) = ctx->r3;
    // 0x803F38EC: sb          $zero, 0x3B($s0)
    MEM_B(0X3B, ctx->r16) = 0;
    // 0x803F38F0: b           L_803F3C04
    // 0x803F38F4: sb          $zero, 0x42($s0)
    MEM_B(0X42, ctx->r16) = 0;
        goto L_803F3C04;
    // 0x803F38F4: sb          $zero, 0x42($s0)
    MEM_B(0X42, ctx->r16) = 0;
L_803F38F8:
    // 0x803F38F8: lbu         $t7, 0x44($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X44);
    // 0x803F38FC: addiu       $t9, $zero, 0x11
    ctx->r25 = ADD32(0, 0X11);
    // 0x803F3900: bne         $a2, $t7, L_803F3910
    if (ctx->r6 != ctx->r15) {
        // 0x803F3904: addiu       $t8, $zero, 0x10
        ctx->r24 = ADD32(0, 0X10);
            goto L_803F3910;
    }
    // 0x803F3904: addiu       $t8, $zero, 0x10
    ctx->r24 = ADD32(0, 0X10);
    // 0x803F3908: b           L_803F3914
    // 0x803F390C: sb          $t8, 0x3D($s0)
    MEM_B(0X3D, ctx->r16) = ctx->r24;
        goto L_803F3914;
    // 0x803F390C: sb          $t8, 0x3D($s0)
    MEM_B(0X3D, ctx->r16) = ctx->r24;
L_803F3910:
    // 0x803F3910: sb          $t9, 0x3D($s0)
    MEM_B(0X3D, ctx->r16) = ctx->r25;
L_803F3914:
    // 0x803F3914: jal         0x803F473C
    // 0x803F3918: nop

    func_803F473C(rdram, ctx);
        goto after_4;
    // 0x803F3918: nop

    after_4:
    // 0x803F391C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3920: sb          $zero, 0x3A($s0)
    MEM_B(0X3A, ctx->r16) = 0;
    // 0x803F3924: b           L_803F3C04
    // 0x803F3928: sb          $a2, 0x38($s0)
    MEM_B(0X38, ctx->r16) = ctx->r6;
        goto L_803F3C04;
    // 0x803F3928: sb          $a2, 0x38($s0)
    MEM_B(0X38, ctx->r16) = ctx->r6;
L_803F392C:
    // 0x803F392C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x803F3930: sb          $v0, 0x44($s0)
    MEM_B(0X44, ctx->r16) = ctx->r2;
    // 0x803F3934: jal         0x803F473C
    // 0x803F3938: sb          $v0, 0x45($s0)
    MEM_B(0X45, ctx->r16) = ctx->r2;
    func_803F473C(rdram, ctx);
        goto after_5;
    // 0x803F3938: sb          $v0, 0x45($s0)
    MEM_B(0X45, ctx->r16) = ctx->r2;
    after_5:
    // 0x803F393C: lb          $t1, 0x3F($s0)
    ctx->r9 = MEM_B(ctx->r16, 0X3F);
    // 0x803F3940: lb          $t2, 0x40($s0)
    ctx->r10 = MEM_B(ctx->r16, 0X40);
    // 0x803F3944: lb          $t3, 0x41($s0)
    ctx->r11 = MEM_B(ctx->r16, 0X41);
    // 0x803F3948: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x803F394C: sb          $t0, 0x38($s0)
    MEM_B(0X38, ctx->r16) = ctx->r8;
    // 0x803F3950: sb          $zero, 0x3C($s0)
    MEM_B(0X3C, ctx->r16) = 0;
    // 0x803F3954: sb          $t1, 0x4A($s0)
    MEM_B(0X4A, ctx->r16) = ctx->r9;
    // 0x803F3958: sb          $t2, 0x4B($s0)
    MEM_B(0X4B, ctx->r16) = ctx->r10;
    // 0x803F395C: b           L_803F3C04
    // 0x803F3960: sb          $t3, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r11;
        goto L_803F3C04;
    // 0x803F3960: sb          $t3, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r11;
L_803F3964:
    // 0x803F3964: jal         0x80035770
    // 0x803F3968: nop

    func_80035770(rdram, ctx);
        goto after_6;
    // 0x803F3968: nop

    after_6:
    // 0x803F396C: lb          $v0, 0x3B($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X3B);
    // 0x803F3970: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3974: beq         $v0, $zero, L_803F398C
    if (ctx->r2 == 0) {
        // 0x803F3978: nop
    
            goto L_803F398C;
    }
    // 0x803F3978: nop

    // 0x803F397C: beq         $v0, $a2, L_803F3998
    if (ctx->r2 == ctx->r6) {
        // 0x803F3980: nop
    
            goto L_803F3998;
    }
    // 0x803F3980: nop

    // 0x803F3984: b           L_803F3C08
    // 0x803F3988: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_803F3C08;
    // 0x803F3988: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_803F398C:
    // 0x803F398C: sb          $a2, 0x3B($s0)
    MEM_B(0X3B, ctx->r16) = ctx->r6;
    // 0x803F3990: b           L_803F3C04
    // 0x803F3994: sb          $a2, 0x43($s0)
    MEM_B(0X43, ctx->r16) = ctx->r6;
        goto L_803F3C04;
    // 0x803F3994: sb          $a2, 0x43($s0)
    MEM_B(0X43, ctx->r16) = ctx->r6;
L_803F3998:
    // 0x803F3998: lb          $v0, 0x43($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X43);
    // 0x803F399C: nop

    // 0x803F39A0: beq         $v0, $zero, L_803F39B8
    if (ctx->r2 == 0) {
        // 0x803F39A4: nop
    
            goto L_803F39B8;
    }
    // 0x803F39A4: nop

    // 0x803F39A8: beq         $v0, $a2, L_803F3A18
    if (ctx->r2 == ctx->r6) {
        // 0x803F39AC: nop
    
            goto L_803F3A18;
    }
    // 0x803F39AC: nop

    // 0x803F39B0: b           L_803F3C08
    // 0x803F39B4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_803F3C08;
    // 0x803F39B4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_803F39B8:
    // 0x803F39B8: lb          $v0, 0x42($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X42);
    // 0x803F39BC: nop

    // 0x803F39C0: beq         $v0, $zero, L_803F39D8
    if (ctx->r2 == 0) {
        // 0x803F39C4: nop
    
            goto L_803F39D8;
    }
    // 0x803F39C4: nop

    // 0x803F39C8: beq         $v0, $a2, L_803F39F0
    if (ctx->r2 == ctx->r6) {
        // 0x803F39CC: nop
    
            goto L_803F39F0;
    }
    // 0x803F39CC: nop

    // 0x803F39D0: b           L_803F3A08
    // 0x803F39D4: nop

        goto L_803F3A08;
    // 0x803F39D4: nop

L_803F39D8:
    // 0x803F39D8: jal         0x803F4B88
    // 0x803F39DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_803F4B88(rdram, ctx);
        goto after_7;
    // 0x803F39DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x803F39E0: jal         0x803F4CB0
    // 0x803F39E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_803F4CB0(rdram, ctx);
        goto after_8;
    // 0x803F39E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x803F39E8: b           L_803F3A08
    // 0x803F39EC: nop

        goto L_803F3A08;
    // 0x803F39EC: nop

L_803F39F0:
    // 0x803F39F0: jal         0x803F4B88
    // 0x803F39F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_803F4B88(rdram, ctx);
        goto after_9;
    // 0x803F39F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x803F39F8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803F39FC: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x803F3A00: jal         0x803F4A78
    // 0x803F3A04: nop

    func_803F4A78(rdram, ctx);
        goto after_10;
    // 0x803F3A04: nop

    after_10:
L_803F3A08:
    // 0x803F3A08: jal         0x803F4FE8
    // 0x803F3A0C: nop

    func_803F4FE8(rdram, ctx);
        goto after_11;
    // 0x803F3A0C: nop

    after_11:
    // 0x803F3A10: b           L_803F3C08
    // 0x803F3A14: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_803F3C08;
    // 0x803F3A14: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_803F3A18:
    // 0x803F3A18: b           L_803F3C04
    // 0x803F3A1C: sb          $zero, 0x38($s0)
    MEM_B(0X38, ctx->r16) = 0;
        goto L_803F3C04;
    // 0x803F3A1C: sb          $zero, 0x38($s0)
    MEM_B(0X38, ctx->r16) = 0;
L_803F3A20:
    // 0x803F3A20: lb          $v0, 0x3A($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X3A);
    // 0x803F3A24: nop

    // 0x803F3A28: beq         $v0, $zero, L_803F3A40
    if (ctx->r2 == 0) {
        // 0x803F3A2C: nop
    
            goto L_803F3A40;
    }
    // 0x803F3A2C: nop

    // 0x803F3A30: beq         $v0, $a2, L_803F3AC8
    if (ctx->r2 == ctx->r6) {
        // 0x803F3A34: nop
    
            goto L_803F3AC8;
    }
    // 0x803F3A34: nop

    // 0x803F3A38: b           L_803F3C08
    // 0x803F3A3C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_803F3C08;
    // 0x803F3A3C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_803F3A40:
    // 0x803F3A40: jal         0x80035770
    // 0x803F3A44: nop

    func_80035770(rdram, ctx);
        goto after_12;
    // 0x803F3A44: nop

    after_12:
    // 0x803F3A48: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3A4C: lui         $a0, 0x803F
    ctx->r4 = S32(0X803F << 16);
    // 0x803F3A50: sb          $a2, 0x3A($s0)
    MEM_B(0X3A, ctx->r16) = ctx->r6;
    // 0x803F3A54: addiu       $a0, $a0, 0x3710
    ctx->r4 = ADD32(ctx->r4, 0X3710);
    // 0x803F3A58: jal         0x8002989C
    // 0x803F3A5C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_8002989C(rdram, ctx);
        goto after_13;
    // 0x803F3A5C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_13:
    // 0x803F3A60: lb          $v1, 0x3D($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X3D);
    // 0x803F3A64: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x803F3A68: beq         $v1, $at, L_803F3AB8
    if (ctx->r3 == ctx->r1) {
        // 0x803F3A6C: addiu       $t5, $zero, 0x9
        ctx->r13 = ADD32(0, 0X9);
            goto L_803F3AB8;
    }
    // 0x803F3A6C: addiu       $t5, $zero, 0x9
    ctx->r13 = ADD32(0, 0X9);
    // 0x803F3A70: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x803F3A74: beq         $v1, $at, L_803F3AC0
    if (ctx->r3 == ctx->r1) {
        // 0x803F3A78: addiu       $t6, $zero, 0xE
        ctx->r14 = ADD32(0, 0XE);
            goto L_803F3AC0;
    }
    // 0x803F3A78: addiu       $t6, $zero, 0xE
    ctx->r14 = ADD32(0, 0XE);
    // 0x803F3A7C: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x803F3A80: beq         $v1, $at, L_803F3A98
    if (ctx->r3 == ctx->r1) {
        // 0x803F3A84: addiu       $at, $zero, 0x11
        ctx->r1 = ADD32(0, 0X11);
            goto L_803F3A98;
    }
    // 0x803F3A84: addiu       $at, $zero, 0x11
    ctx->r1 = ADD32(0, 0X11);
    // 0x803F3A88: beq         $v1, $at, L_803F3A98
    if (ctx->r3 == ctx->r1) {
        // 0x803F3A8C: addiu       $t4, $v1, 0x1
        ctx->r12 = ADD32(ctx->r3, 0X1);
            goto L_803F3A98;
    }
    // 0x803F3A8C: addiu       $t4, $v1, 0x1
    ctx->r12 = ADD32(ctx->r3, 0X1);
    // 0x803F3A90: b           L_803F3C04
    // 0x803F3A94: sb          $t4, 0x3E($s0)
    MEM_B(0X3E, ctx->r16) = ctx->r12;
        goto L_803F3C04;
    // 0x803F3A94: sb          $t4, 0x3E($s0)
    MEM_B(0X3E, ctx->r16) = ctx->r12;
L_803F3A98:
    // 0x803F3A98: jal         0x803F46E8
    // 0x803F3A9C: nop

    func_803F46E8(rdram, ctx);
        goto after_14;
    // 0x803F3A9C: nop

    after_14:
    // 0x803F3AA0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3AA4: sb          $zero, 0x3D($s0)
    MEM_B(0X3D, ctx->r16) = 0;
    // 0x803F3AA8: sb          $a2, 0x3E($s0)
    MEM_B(0X3E, ctx->r16) = ctx->r6;
    // 0x803F3AAC: sb          $zero, 0x3A($s0)
    MEM_B(0X3A, ctx->r16) = 0;
    // 0x803F3AB0: b           L_803F3C04
    // 0x803F3AB4: sb          $zero, 0x38($s0)
    MEM_B(0X38, ctx->r16) = 0;
        goto L_803F3C04;
    // 0x803F3AB4: sb          $zero, 0x38($s0)
    MEM_B(0X38, ctx->r16) = 0;
L_803F3AB8:
    // 0x803F3AB8: b           L_803F3C04
    // 0x803F3ABC: sb          $t5, 0x3E($s0)
    MEM_B(0X3E, ctx->r16) = ctx->r13;
        goto L_803F3C04;
    // 0x803F3ABC: sb          $t5, 0x3E($s0)
    MEM_B(0X3E, ctx->r16) = ctx->r13;
L_803F3AC0:
    // 0x803F3AC0: b           L_803F3C04
    // 0x803F3AC4: sb          $t6, 0x3E($s0)
    MEM_B(0X3E, ctx->r16) = ctx->r14;
        goto L_803F3C04;
    // 0x803F3AC4: sb          $t6, 0x3E($s0)
    MEM_B(0X3E, ctx->r16) = ctx->r14;
L_803F3AC8:
    // 0x803F3AC8: lb          $a0, 0x3D($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X3D);
    // 0x803F3ACC: lb          $a1, 0x3E($s0)
    ctx->r5 = MEM_B(ctx->r16, 0X3E);
    // 0x803F3AD0: jal         0x803F7000
    // 0x803F3AD4: nop

    func_803F7000(rdram, ctx);
        goto after_15;
    // 0x803F3AD4: nop

    after_15:
    // 0x803F3AD8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3ADC: bne         $a2, $v0, L_803F3B0C
    if (ctx->r6 != ctx->r2) {
        // 0x803F3AE0: nop
    
            goto L_803F3B0C;
    }
    // 0x803F3AE0: nop

    // 0x803F3AE4: jal         0x80035770
    // 0x803F3AE8: nop

    func_80035770(rdram, ctx);
        goto after_16;
    // 0x803F3AE8: nop

    after_16:
    // 0x803F3AEC: jal         0x803F4E80
    // 0x803F3AF0: nop

    func_803F4E80(rdram, ctx);
        goto after_17;
    // 0x803F3AF0: nop

    after_17:
    // 0x803F3AF4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803F3AF8: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x803F3AFC: jal         0x803F4A78
    // 0x803F3B00: nop

    func_803F4A78(rdram, ctx);
        goto after_18;
    // 0x803F3B00: nop

    after_18:
    // 0x803F3B04: b           L_803F3B14
    // 0x803F3B08: nop

        goto L_803F3B14;
    // 0x803F3B08: nop

L_803F3B0C:
    // 0x803F3B0C: jal         0x800357AC
    // 0x803F3B10: nop

    func_800357AC(rdram, ctx);
        goto after_19;
    // 0x803F3B10: nop

    after_19:
L_803F3B14:
    // 0x803F3B14: lui         $a0, 0x803F
    ctx->r4 = S32(0X803F << 16);
    // 0x803F3B18: addiu       $a0, $a0, 0x3710
    ctx->r4 = ADD32(ctx->r4, 0X3710);
    // 0x803F3B1C: jal         0x8002989C
    // 0x803F3B20: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_8002989C(rdram, ctx);
        goto after_20;
    // 0x803F3B20: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_20:
    // 0x803F3B24: b           L_803F3C08
    // 0x803F3B28: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_803F3C08;
    // 0x803F3B28: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_803F3B2C:
    // 0x803F3B2C: jal         0x80035770
    // 0x803F3B30: nop

    func_80035770(rdram, ctx);
        goto after_21;
    // 0x803F3B30: nop

    after_21:
    // 0x803F3B34: lbu         $t7, 0x3C($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X3C);
    // 0x803F3B38: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3B3C: sltiu       $at, $t7, 0x5
    ctx->r1 = ctx->r15 < 0X5 ? 1 : 0;
    // 0x803F3B40: beq         $at, $zero, L_803F3C04
    if (ctx->r1 == 0) {
        // 0x803F3B44: sb          $a2, 0x4D($s0)
        MEM_B(0X4D, ctx->r16) = ctx->r6;
            goto L_803F3C04;
    }
    // 0x803F3B44: sb          $a2, 0x4D($s0)
    MEM_B(0X4D, ctx->r16) = ctx->r6;
    // 0x803F3B48: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803F3B4C: lui         $at, 0x8040
    ctx->r1 = S32(0X8040 << 16);
    // 0x803F3B50: addu        $at, $at, $t7
    gpr jr_addend_803F3B5C = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x803F3B54: lw          $t7, -0x47B8($at)
    ctx->r15 = ADD32(ctx->r1, -0X47B8);
    // 0x803F3B58: nop

    // 0x803F3B5C: jr          $t7
    // 0x803F3B60: nop

    switch (jr_addend_803F3B5C >> 2) {
        case 0: goto L_803F3B64; break;
        case 1: goto L_803F3B84; break;
        case 2: goto L_803F3B90; break;
        case 3: goto L_803F3B90; break;
        case 4: goto L_803F3B90; break;
        default: switch_error(__func__, 0x803F3B5C, 0x803FB848);
    }
    // 0x803F3B60: nop

L_803F3B64:
    // 0x803F3B64: jal         0x803F46E8
    // 0x803F3B68: nop

    func_803F46E8(rdram, ctx);
        goto after_22;
    // 0x803F3B68: nop

    after_22:
    // 0x803F3B6C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3B70: sb          $zero, 0x3D($s0)
    MEM_B(0X3D, ctx->r16) = 0;
    // 0x803F3B74: sb          $a2, 0x3E($s0)
    MEM_B(0X3E, ctx->r16) = ctx->r6;
    // 0x803F3B78: sb          $zero, 0x3A($s0)
    MEM_B(0X3A, ctx->r16) = 0;
    // 0x803F3B7C: b           L_803F3C04
    // 0x803F3B80: sb          $zero, 0x38($s0)
    MEM_B(0X38, ctx->r16) = 0;
        goto L_803F3C04;
    // 0x803F3B80: sb          $zero, 0x38($s0)
    MEM_B(0X38, ctx->r16) = 0;
L_803F3B84:
    // 0x803F3B84: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x803F3B88: b           L_803F3C04
    // 0x803F3B8C: sb          $t8, 0x3C($s0)
    MEM_B(0X3C, ctx->r16) = ctx->r24;
        goto L_803F3C04;
    // 0x803F3B8C: sb          $t8, 0x3C($s0)
    MEM_B(0X3C, ctx->r16) = ctx->r24;
L_803F3B90:
    // 0x803F3B90: lb          $a0, 0x3F($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X3F);
    // 0x803F3B94: jal         0x8006DED4
    // 0x803F3B98: nop

    func_8006DED4(rdram, ctx);
        goto after_23;
    // 0x803F3B98: nop

    after_23:
    // 0x803F3B9C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3BA0: bne         $a2, $v0, L_803F3BF4
    if (ctx->r6 != ctx->r2) {
        // 0x803F3BA4: nop
    
            goto L_803F3BF4;
    }
    // 0x803F3BA4: nop

    // 0x803F3BA8: lb          $a0, 0x40($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X40);
    // 0x803F3BAC: jal         0x8006DED4
    // 0x803F3BB0: nop

    func_8006DED4(rdram, ctx);
        goto after_24;
    // 0x803F3BB0: nop

    after_24:
    // 0x803F3BB4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3BB8: bne         $a2, $v0, L_803F3BF4
    if (ctx->r6 != ctx->r2) {
        // 0x803F3BBC: nop
    
            goto L_803F3BF4;
    }
    // 0x803F3BBC: nop

    // 0x803F3BC0: lb          $a0, 0x41($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X41);
    // 0x803F3BC4: jal         0x8006DED4
    // 0x803F3BC8: nop

    func_8006DED4(rdram, ctx);
        goto after_25;
    // 0x803F3BC8: nop

    after_25:
    // 0x803F3BCC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3BD0: bne         $a2, $v0, L_803F3BF4
    if (ctx->r6 != ctx->r2) {
        // 0x803F3BD4: nop
    
            goto L_803F3BF4;
    }
    // 0x803F3BD4: nop

    // 0x803F3BD8: lb          $t9, 0x3F($s0)
    ctx->r25 = MEM_B(ctx->r16, 0X3F);
    // 0x803F3BDC: lb          $t0, 0x40($s0)
    ctx->r8 = MEM_B(ctx->r16, 0X40);
    // 0x803F3BE0: lb          $t1, 0x41($s0)
    ctx->r9 = MEM_B(ctx->r16, 0X41);
    // 0x803F3BE4: sb          $zero, 0x3C($s0)
    MEM_B(0X3C, ctx->r16) = 0;
    // 0x803F3BE8: sb          $t9, 0x4A($s0)
    MEM_B(0X4A, ctx->r16) = ctx->r25;
    // 0x803F3BEC: sb          $t0, 0x4B($s0)
    MEM_B(0X4B, ctx->r16) = ctx->r8;
    // 0x803F3BF0: sb          $t1, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r9;
L_803F3BF4:
    // 0x803F3BF4: lui         $a0, 0x803F
    ctx->r4 = S32(0X803F << 16);
    // 0x803F3BF8: addiu       $a0, $a0, 0x3710
    ctx->r4 = ADD32(ctx->r4, 0X3710);
    // 0x803F3BFC: jal         0x8002989C
    // 0x803F3C00: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_8002989C(rdram, ctx);
        goto after_26;
    // 0x803F3C00: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_26:
L_803F3C04:
    // 0x803F3C04: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_803F3C08:
    // 0x803F3C08: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x803F3C0C: jr          $ra
    // 0x803F3C10: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x803F3C10: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_803F38A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F38A8: lui         $t6, 0x803F
    ctx->r14 = S32(0X803F << 16);
    // 0x803F38AC: addiu       $t6, $t6, 0x4790
    ctx->r14 = ADD32(ctx->r14, 0X4790);
    // 0x803F38B0: addiu       $t3, $zero, 0x140
    ctx->r11 = ADD32(0, 0X140);
    // 0x803F38B4: addiu       $t4, $zero, 0x2A
    ctx->r12 = ADD32(0, 0X2A);
    // 0x803F38B8: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x803F38BC: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x803F38C0: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x803F38C4: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x803F38C8: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x803F38CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F38D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803F38D4: addiu       $a2, $zero, 0x140
    ctx->r6 = ADD32(0, 0X140);
    // 0x803F38D8: jal         0x8004B4B4
    // 0x803F38DC: addiu       $a3, $zero, 0x5A
    ctx->r7 = ADD32(0, 0X5A);
    func_8004B4B4(rdram, ctx);
        goto after_0;
    // 0x803F38DC: addiu       $a3, $zero, 0x5A
    ctx->r7 = ADD32(0, 0X5A);
    after_0:
    // 0x803F38E0: b           L_803F3C08
    // 0x803F38E4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_803F3C08;
    // 0x803F38E4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x803F38E8: sb          $v1, 0x38($s0)
    MEM_B(0X38, ctx->r16) = ctx->r3;
    // 0x803F38EC: sb          $zero, 0x3B($s0)
    MEM_B(0X3B, ctx->r16) = 0;
    // 0x803F38F0: b           L_803F3C04
    // 0x803F38F4: sb          $zero, 0x42($s0)
    MEM_B(0X42, ctx->r16) = 0;
        goto L_803F3C04;
    // 0x803F38F4: sb          $zero, 0x42($s0)
    MEM_B(0X42, ctx->r16) = 0;
    // 0x803F38F8: lbu         $t7, 0x44($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X44);
    // 0x803F38FC: addiu       $t9, $zero, 0x11
    ctx->r25 = ADD32(0, 0X11);
    // 0x803F3900: bne         $a2, $t7, L_803F3910
    if (ctx->r6 != ctx->r15) {
        // 0x803F3904: addiu       $t8, $zero, 0x10
        ctx->r24 = ADD32(0, 0X10);
            goto L_803F3910;
    }
    // 0x803F3904: addiu       $t8, $zero, 0x10
    ctx->r24 = ADD32(0, 0X10);
    // 0x803F3908: b           L_803F3914
    // 0x803F390C: sb          $t8, 0x3D($s0)
    MEM_B(0X3D, ctx->r16) = ctx->r24;
        goto L_803F3914;
    // 0x803F390C: sb          $t8, 0x3D($s0)
    MEM_B(0X3D, ctx->r16) = ctx->r24;
L_803F3910:
    // 0x803F3910: sb          $t9, 0x3D($s0)
    MEM_B(0X3D, ctx->r16) = ctx->r25;
L_803F3914:
    // 0x803F3914: jal         0x803F473C
    // 0x803F3918: nop

    func_803F473C(rdram, ctx);
        goto after_1;
    // 0x803F3918: nop

    after_1:
    // 0x803F391C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3920: sb          $zero, 0x3A($s0)
    MEM_B(0X3A, ctx->r16) = 0;
    // 0x803F3924: b           L_803F3C04
    // 0x803F3928: sb          $a2, 0x38($s0)
    MEM_B(0X38, ctx->r16) = ctx->r6;
        goto L_803F3C04;
    // 0x803F3928: sb          $a2, 0x38($s0)
    MEM_B(0X38, ctx->r16) = ctx->r6;
    // 0x803F392C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x803F3930: sb          $v0, 0x44($s0)
    MEM_B(0X44, ctx->r16) = ctx->r2;
    // 0x803F3934: jal         0x803F473C
    // 0x803F3938: sb          $v0, 0x45($s0)
    MEM_B(0X45, ctx->r16) = ctx->r2;
    func_803F473C(rdram, ctx);
        goto after_2;
    // 0x803F3938: sb          $v0, 0x45($s0)
    MEM_B(0X45, ctx->r16) = ctx->r2;
    after_2:
    // 0x803F393C: lb          $t1, 0x3F($s0)
    ctx->r9 = MEM_B(ctx->r16, 0X3F);
    // 0x803F3940: lb          $t2, 0x40($s0)
    ctx->r10 = MEM_B(ctx->r16, 0X40);
    // 0x803F3944: lb          $t3, 0x41($s0)
    ctx->r11 = MEM_B(ctx->r16, 0X41);
    // 0x803F3948: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x803F394C: sb          $t0, 0x38($s0)
    MEM_B(0X38, ctx->r16) = ctx->r8;
    // 0x803F3950: sb          $zero, 0x3C($s0)
    MEM_B(0X3C, ctx->r16) = 0;
    // 0x803F3954: sb          $t1, 0x4A($s0)
    MEM_B(0X4A, ctx->r16) = ctx->r9;
    // 0x803F3958: sb          $t2, 0x4B($s0)
    MEM_B(0X4B, ctx->r16) = ctx->r10;
    // 0x803F395C: b           L_803F3C04
    // 0x803F3960: sb          $t3, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r11;
        goto L_803F3C04;
    // 0x803F3960: sb          $t3, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r11;
    // 0x803F3964: jal         0x80035770
    // 0x803F3968: nop

    func_80035770(rdram, ctx);
        goto after_3;
    // 0x803F3968: nop

    after_3:
    // 0x803F396C: lb          $v0, 0x3B($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X3B);
    // 0x803F3970: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3974: beq         $v0, $zero, L_803F398C
    if (ctx->r2 == 0) {
        // 0x803F3978: nop
    
            goto L_803F398C;
    }
    // 0x803F3978: nop

    // 0x803F397C: beq         $v0, $a2, L_803F3998
    if (ctx->r2 == ctx->r6) {
        // 0x803F3980: nop
    
            goto L_803F3998;
    }
    // 0x803F3980: nop

    // 0x803F3984: b           L_803F3C08
    // 0x803F3988: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_803F3C08;
    // 0x803F3988: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_803F398C:
    // 0x803F398C: sb          $a2, 0x3B($s0)
    MEM_B(0X3B, ctx->r16) = ctx->r6;
    // 0x803F3990: b           L_803F3C04
    // 0x803F3994: sb          $a2, 0x43($s0)
    MEM_B(0X43, ctx->r16) = ctx->r6;
        goto L_803F3C04;
    // 0x803F3994: sb          $a2, 0x43($s0)
    MEM_B(0X43, ctx->r16) = ctx->r6;
L_803F3998:
    // 0x803F3998: lb          $v0, 0x43($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X43);
    // 0x803F399C: nop

    // 0x803F39A0: beq         $v0, $zero, L_803F39B8
    if (ctx->r2 == 0) {
        // 0x803F39A4: nop
    
            goto L_803F39B8;
    }
    // 0x803F39A4: nop

    // 0x803F39A8: beq         $v0, $a2, L_803F3A18
    if (ctx->r2 == ctx->r6) {
        // 0x803F39AC: nop
    
            goto L_803F3A18;
    }
    // 0x803F39AC: nop

    // 0x803F39B0: b           L_803F3C08
    // 0x803F39B4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_803F3C08;
    // 0x803F39B4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_803F39B8:
    // 0x803F39B8: lb          $v0, 0x42($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X42);
    // 0x803F39BC: nop

    // 0x803F39C0: beq         $v0, $zero, L_803F39D8
    if (ctx->r2 == 0) {
        // 0x803F39C4: nop
    
            goto L_803F39D8;
    }
    // 0x803F39C4: nop

    // 0x803F39C8: beq         $v0, $a2, L_803F39F0
    if (ctx->r2 == ctx->r6) {
        // 0x803F39CC: nop
    
            goto L_803F39F0;
    }
    // 0x803F39CC: nop

    // 0x803F39D0: b           L_803F3A08
    // 0x803F39D4: nop

        goto L_803F3A08;
    // 0x803F39D4: nop

L_803F39D8:
    // 0x803F39D8: jal         0x803F4B88
    // 0x803F39DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_803F4B88(rdram, ctx);
        goto after_4;
    // 0x803F39DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x803F39E0: jal         0x803F4CB0
    // 0x803F39E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_803F4CB0(rdram, ctx);
        goto after_5;
    // 0x803F39E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x803F39E8: b           L_803F3A08
    // 0x803F39EC: nop

        goto L_803F3A08;
    // 0x803F39EC: nop

L_803F39F0:
    // 0x803F39F0: jal         0x803F4B88
    // 0x803F39F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_803F4B88(rdram, ctx);
        goto after_6;
    // 0x803F39F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x803F39F8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803F39FC: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x803F3A00: jal         0x803F4A78
    // 0x803F3A04: nop

    func_803F4A78(rdram, ctx);
        goto after_7;
    // 0x803F3A04: nop

    after_7:
L_803F3A08:
    // 0x803F3A08: jal         0x803F4FE8
    // 0x803F3A0C: nop

    func_803F4FE8(rdram, ctx);
        goto after_8;
    // 0x803F3A0C: nop

    after_8:
    // 0x803F3A10: b           L_803F3C08
    // 0x803F3A14: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_803F3C08;
    // 0x803F3A14: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_803F3A18:
    // 0x803F3A18: b           L_803F3C04
    // 0x803F3A1C: sb          $zero, 0x38($s0)
    MEM_B(0X38, ctx->r16) = 0;
        goto L_803F3C04;
    // 0x803F3A1C: sb          $zero, 0x38($s0)
    MEM_B(0X38, ctx->r16) = 0;
    // 0x803F3A20: lb          $v0, 0x3A($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X3A);
    // 0x803F3A24: nop

    // 0x803F3A28: beq         $v0, $zero, L_803F3A40
    if (ctx->r2 == 0) {
        // 0x803F3A2C: nop
    
            goto L_803F3A40;
    }
    // 0x803F3A2C: nop

    // 0x803F3A30: beq         $v0, $a2, L_803F3AC8
    if (ctx->r2 == ctx->r6) {
        // 0x803F3A34: nop
    
            goto L_803F3AC8;
    }
    // 0x803F3A34: nop

    // 0x803F3A38: b           L_803F3C08
    // 0x803F3A3C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_803F3C08;
    // 0x803F3A3C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_803F3A40:
    // 0x803F3A40: jal         0x80035770
    // 0x803F3A44: nop

    func_80035770(rdram, ctx);
        goto after_9;
    // 0x803F3A44: nop

    after_9:
    // 0x803F3A48: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3A4C: lui         $a0, 0x803F
    ctx->r4 = S32(0X803F << 16);
    // 0x803F3A50: sb          $a2, 0x3A($s0)
    MEM_B(0X3A, ctx->r16) = ctx->r6;
    // 0x803F3A54: addiu       $a0, $a0, 0x3710
    ctx->r4 = ADD32(ctx->r4, 0X3710);
    // 0x803F3A58: jal         0x8002989C
    // 0x803F3A5C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_8002989C(rdram, ctx);
        goto after_10;
    // 0x803F3A5C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_10:
    // 0x803F3A60: lb          $v1, 0x3D($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X3D);
    // 0x803F3A64: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x803F3A68: beq         $v1, $at, L_803F3AB8
    if (ctx->r3 == ctx->r1) {
        // 0x803F3A6C: addiu       $t5, $zero, 0x9
        ctx->r13 = ADD32(0, 0X9);
            goto L_803F3AB8;
    }
    // 0x803F3A6C: addiu       $t5, $zero, 0x9
    ctx->r13 = ADD32(0, 0X9);
    // 0x803F3A70: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x803F3A74: beq         $v1, $at, L_803F3AC0
    if (ctx->r3 == ctx->r1) {
        // 0x803F3A78: addiu       $t6, $zero, 0xE
        ctx->r14 = ADD32(0, 0XE);
            goto L_803F3AC0;
    }
    // 0x803F3A78: addiu       $t6, $zero, 0xE
    ctx->r14 = ADD32(0, 0XE);
    // 0x803F3A7C: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x803F3A80: beq         $v1, $at, L_803F3A98
    if (ctx->r3 == ctx->r1) {
        // 0x803F3A84: addiu       $at, $zero, 0x11
        ctx->r1 = ADD32(0, 0X11);
            goto L_803F3A98;
    }
    // 0x803F3A84: addiu       $at, $zero, 0x11
    ctx->r1 = ADD32(0, 0X11);
    // 0x803F3A88: beq         $v1, $at, L_803F3A98
    if (ctx->r3 == ctx->r1) {
        // 0x803F3A8C: addiu       $t4, $v1, 0x1
        ctx->r12 = ADD32(ctx->r3, 0X1);
            goto L_803F3A98;
    }
    // 0x803F3A8C: addiu       $t4, $v1, 0x1
    ctx->r12 = ADD32(ctx->r3, 0X1);
    // 0x803F3A90: b           L_803F3C04
    // 0x803F3A94: sb          $t4, 0x3E($s0)
    MEM_B(0X3E, ctx->r16) = ctx->r12;
        goto L_803F3C04;
    // 0x803F3A94: sb          $t4, 0x3E($s0)
    MEM_B(0X3E, ctx->r16) = ctx->r12;
L_803F3A98:
    // 0x803F3A98: jal         0x803F46E8
    // 0x803F3A9C: nop

    func_803F46E8(rdram, ctx);
        goto after_11;
    // 0x803F3A9C: nop

    after_11:
    // 0x803F3AA0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3AA4: sb          $zero, 0x3D($s0)
    MEM_B(0X3D, ctx->r16) = 0;
    // 0x803F3AA8: sb          $a2, 0x3E($s0)
    MEM_B(0X3E, ctx->r16) = ctx->r6;
    // 0x803F3AAC: sb          $zero, 0x3A($s0)
    MEM_B(0X3A, ctx->r16) = 0;
    // 0x803F3AB0: b           L_803F3C04
    // 0x803F3AB4: sb          $zero, 0x38($s0)
    MEM_B(0X38, ctx->r16) = 0;
        goto L_803F3C04;
    // 0x803F3AB4: sb          $zero, 0x38($s0)
    MEM_B(0X38, ctx->r16) = 0;
L_803F3AB8:
    // 0x803F3AB8: b           L_803F3C04
    // 0x803F3ABC: sb          $t5, 0x3E($s0)
    MEM_B(0X3E, ctx->r16) = ctx->r13;
        goto L_803F3C04;
    // 0x803F3ABC: sb          $t5, 0x3E($s0)
    MEM_B(0X3E, ctx->r16) = ctx->r13;
L_803F3AC0:
    // 0x803F3AC0: b           L_803F3C04
    // 0x803F3AC4: sb          $t6, 0x3E($s0)
    MEM_B(0X3E, ctx->r16) = ctx->r14;
        goto L_803F3C04;
    // 0x803F3AC4: sb          $t6, 0x3E($s0)
    MEM_B(0X3E, ctx->r16) = ctx->r14;
L_803F3AC8:
    // 0x803F3AC8: lb          $a0, 0x3D($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X3D);
    // 0x803F3ACC: lb          $a1, 0x3E($s0)
    ctx->r5 = MEM_B(ctx->r16, 0X3E);
    // 0x803F3AD0: jal         0x803F7000
    // 0x803F3AD4: nop

    func_803F7000(rdram, ctx);
        goto after_12;
    // 0x803F3AD4: nop

    after_12:
    // 0x803F3AD8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3ADC: bne         $a2, $v0, L_803F3B0C
    if (ctx->r6 != ctx->r2) {
        // 0x803F3AE0: nop
    
            goto L_803F3B0C;
    }
    // 0x803F3AE0: nop

    // 0x803F3AE4: jal         0x80035770
    // 0x803F3AE8: nop

    func_80035770(rdram, ctx);
        goto after_13;
    // 0x803F3AE8: nop

    after_13:
    // 0x803F3AEC: jal         0x803F4E80
    // 0x803F3AF0: nop

    func_803F4E80(rdram, ctx);
        goto after_14;
    // 0x803F3AF0: nop

    after_14:
    // 0x803F3AF4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803F3AF8: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x803F3AFC: jal         0x803F4A78
    // 0x803F3B00: nop

    func_803F4A78(rdram, ctx);
        goto after_15;
    // 0x803F3B00: nop

    after_15:
    // 0x803F3B04: b           L_803F3B14
    // 0x803F3B08: nop

        goto L_803F3B14;
    // 0x803F3B08: nop

L_803F3B0C:
    // 0x803F3B0C: jal         0x800357AC
    // 0x803F3B10: nop

    func_800357AC(rdram, ctx);
        goto after_16;
    // 0x803F3B10: nop

    after_16:
L_803F3B14:
    // 0x803F3B14: lui         $a0, 0x803F
    ctx->r4 = S32(0X803F << 16);
    // 0x803F3B18: addiu       $a0, $a0, 0x3710
    ctx->r4 = ADD32(ctx->r4, 0X3710);
    // 0x803F3B1C: jal         0x8002989C
    // 0x803F3B20: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_8002989C(rdram, ctx);
        goto after_17;
    // 0x803F3B20: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_17:
    // 0x803F3B24: b           L_803F3C08
    // 0x803F3B28: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_803F3C08;
    // 0x803F3B28: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x803F3B2C: jal         0x80035770
    // 0x803F3B30: nop

    func_80035770(rdram, ctx);
        goto after_18;
    // 0x803F3B30: nop

    after_18:
    // 0x803F3B34: lbu         $t7, 0x3C($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X3C);
    // 0x803F3B38: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3B3C: sltiu       $at, $t7, 0x5
    ctx->r1 = ctx->r15 < 0X5 ? 1 : 0;
    // 0x803F3B40: beq         $at, $zero, L_803F3C04
    if (ctx->r1 == 0) {
        // 0x803F3B44: sb          $a2, 0x4D($s0)
        MEM_B(0X4D, ctx->r16) = ctx->r6;
            goto L_803F3C04;
    }
    // 0x803F3B44: sb          $a2, 0x4D($s0)
    MEM_B(0X4D, ctx->r16) = ctx->r6;
    // 0x803F3B48: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803F3B4C: lui         $at, 0x8040
    ctx->r1 = S32(0X8040 << 16);
    // 0x803F3B50: addu        $at, $at, $t7
    gpr jr_addend_803F3B5C = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x803F3B54: lw          $t7, -0x47B8($at)
    ctx->r15 = ADD32(ctx->r1, -0X47B8);
    // 0x803F3B58: nop

    // 0x803F3B5C: jr          $t7
    // 0x803F3B60: nop

    switch (jr_addend_803F3B5C >> 2) {
        case 0: goto L_803F3B64; break;
        case 1: goto L_803F3B84; break;
        case 2: goto L_803F3B90; break;
        case 3: goto L_803F3B90; break;
        case 4: goto L_803F3B90; break;
        default: switch_error(__func__, 0x803F3B5C, 0x803FB848);
    }
    // 0x803F3B60: nop

L_803F3B64:
    // 0x803F3B64: jal         0x803F46E8
    // 0x803F3B68: nop

    func_803F46E8(rdram, ctx);
        goto after_19;
    // 0x803F3B68: nop

    after_19:
    // 0x803F3B6C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3B70: sb          $zero, 0x3D($s0)
    MEM_B(0X3D, ctx->r16) = 0;
    // 0x803F3B74: sb          $a2, 0x3E($s0)
    MEM_B(0X3E, ctx->r16) = ctx->r6;
    // 0x803F3B78: sb          $zero, 0x3A($s0)
    MEM_B(0X3A, ctx->r16) = 0;
    // 0x803F3B7C: b           L_803F3C04
    // 0x803F3B80: sb          $zero, 0x38($s0)
    MEM_B(0X38, ctx->r16) = 0;
        goto L_803F3C04;
    // 0x803F3B80: sb          $zero, 0x38($s0)
    MEM_B(0X38, ctx->r16) = 0;
L_803F3B84:
    // 0x803F3B84: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x803F3B88: b           L_803F3C04
    // 0x803F3B8C: sb          $t8, 0x3C($s0)
    MEM_B(0X3C, ctx->r16) = ctx->r24;
        goto L_803F3C04;
    // 0x803F3B8C: sb          $t8, 0x3C($s0)
    MEM_B(0X3C, ctx->r16) = ctx->r24;
L_803F3B90:
    // 0x803F3B90: lb          $a0, 0x3F($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X3F);
    // 0x803F3B94: jal         0x8006DED4
    // 0x803F3B98: nop

    func_8006DED4(rdram, ctx);
        goto after_20;
    // 0x803F3B98: nop

    after_20:
    // 0x803F3B9C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3BA0: bne         $a2, $v0, L_803F3BF4
    if (ctx->r6 != ctx->r2) {
        // 0x803F3BA4: nop
    
            goto L_803F3BF4;
    }
    // 0x803F3BA4: nop

    // 0x803F3BA8: lb          $a0, 0x40($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X40);
    // 0x803F3BAC: jal         0x8006DED4
    // 0x803F3BB0: nop

    func_8006DED4(rdram, ctx);
        goto after_21;
    // 0x803F3BB0: nop

    after_21:
    // 0x803F3BB4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3BB8: bne         $a2, $v0, L_803F3BF4
    if (ctx->r6 != ctx->r2) {
        // 0x803F3BBC: nop
    
            goto L_803F3BF4;
    }
    // 0x803F3BBC: nop

    // 0x803F3BC0: lb          $a0, 0x41($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X41);
    // 0x803F3BC4: jal         0x8006DED4
    // 0x803F3BC8: nop

    func_8006DED4(rdram, ctx);
        goto after_22;
    // 0x803F3BC8: nop

    after_22:
    // 0x803F3BCC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3BD0: bne         $a2, $v0, L_803F3BF4
    if (ctx->r6 != ctx->r2) {
        // 0x803F3BD4: nop
    
            goto L_803F3BF4;
    }
    // 0x803F3BD4: nop

    // 0x803F3BD8: lb          $t9, 0x3F($s0)
    ctx->r25 = MEM_B(ctx->r16, 0X3F);
    // 0x803F3BDC: lb          $t0, 0x40($s0)
    ctx->r8 = MEM_B(ctx->r16, 0X40);
    // 0x803F3BE0: lb          $t1, 0x41($s0)
    ctx->r9 = MEM_B(ctx->r16, 0X41);
    // 0x803F3BE4: sb          $zero, 0x3C($s0)
    MEM_B(0X3C, ctx->r16) = 0;
    // 0x803F3BE8: sb          $t9, 0x4A($s0)
    MEM_B(0X4A, ctx->r16) = ctx->r25;
    // 0x803F3BEC: sb          $t0, 0x4B($s0)
    MEM_B(0X4B, ctx->r16) = ctx->r8;
    // 0x803F3BF0: sb          $t1, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r9;
L_803F3BF4:
    // 0x803F3BF4: lui         $a0, 0x803F
    ctx->r4 = S32(0X803F << 16);
    // 0x803F3BF8: addiu       $a0, $a0, 0x3710
    ctx->r4 = ADD32(ctx->r4, 0X3710);
    // 0x803F3BFC: jal         0x8002989C
    // 0x803F3C00: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_8002989C(rdram, ctx);
        goto after_23;
    // 0x803F3C00: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_23:
L_803F3C04:
    // 0x803F3C04: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_803F3C08:
    // 0x803F3C08: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x803F3C0C: jr          $ra
    // 0x803F3C10: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x803F3C10: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_803F398C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F398C: sb          $a2, 0x3B($s0)
    MEM_B(0X3B, ctx->r16) = ctx->r6;
    // 0x803F3990: b           L_803F3C04
    // 0x803F3994: sb          $a2, 0x43($s0)
    MEM_B(0X43, ctx->r16) = ctx->r6;
        goto L_803F3C04;
    // 0x803F3994: sb          $a2, 0x43($s0)
    MEM_B(0X43, ctx->r16) = ctx->r6;
    // 0x803F3998: lb          $v0, 0x43($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X43);
    // 0x803F399C: nop

    // 0x803F39A0: beq         $v0, $zero, L_803F39B8
    if (ctx->r2 == 0) {
        // 0x803F39A4: nop
    
            goto L_803F39B8;
    }
    // 0x803F39A4: nop

    // 0x803F39A8: beq         $v0, $a2, L_803F3A18
    if (ctx->r2 == ctx->r6) {
        // 0x803F39AC: nop
    
            goto L_803F3A18;
    }
    // 0x803F39AC: nop

    // 0x803F39B0: b           L_803F3C08
    // 0x803F39B4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_803F3C08;
    // 0x803F39B4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_803F39B8:
    // 0x803F39B8: lb          $v0, 0x42($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X42);
    // 0x803F39BC: nop

    // 0x803F39C0: beq         $v0, $zero, L_803F39D8
    if (ctx->r2 == 0) {
        // 0x803F39C4: nop
    
            goto L_803F39D8;
    }
    // 0x803F39C4: nop

    // 0x803F39C8: beq         $v0, $a2, L_803F39F0
    if (ctx->r2 == ctx->r6) {
        // 0x803F39CC: nop
    
            goto L_803F39F0;
    }
    // 0x803F39CC: nop

    // 0x803F39D0: b           L_803F3A08
    // 0x803F39D4: nop

        goto L_803F3A08;
    // 0x803F39D4: nop

L_803F39D8:
    // 0x803F39D8: jal         0x803F4B88
    // 0x803F39DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_803F4B88(rdram, ctx);
        goto after_0;
    // 0x803F39DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x803F39E0: jal         0x803F4CB0
    // 0x803F39E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_803F4CB0(rdram, ctx);
        goto after_1;
    // 0x803F39E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x803F39E8: b           L_803F3A08
    // 0x803F39EC: nop

        goto L_803F3A08;
    // 0x803F39EC: nop

L_803F39F0:
    // 0x803F39F0: jal         0x803F4B88
    // 0x803F39F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_803F4B88(rdram, ctx);
        goto after_2;
    // 0x803F39F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x803F39F8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803F39FC: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x803F3A00: jal         0x803F4A78
    // 0x803F3A04: nop

    func_803F4A78(rdram, ctx);
        goto after_3;
    // 0x803F3A04: nop

    after_3:
L_803F3A08:
    // 0x803F3A08: jal         0x803F4FE8
    // 0x803F3A0C: nop

    func_803F4FE8(rdram, ctx);
        goto after_4;
    // 0x803F3A0C: nop

    after_4:
    // 0x803F3A10: b           L_803F3C08
    // 0x803F3A14: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_803F3C08;
    // 0x803F3A14: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_803F3A18:
    // 0x803F3A18: b           L_803F3C04
    // 0x803F3A1C: sb          $zero, 0x38($s0)
    MEM_B(0X38, ctx->r16) = 0;
        goto L_803F3C04;
    // 0x803F3A1C: sb          $zero, 0x38($s0)
    MEM_B(0X38, ctx->r16) = 0;
    // 0x803F3A20: lb          $v0, 0x3A($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X3A);
    // 0x803F3A24: nop

    // 0x803F3A28: beq         $v0, $zero, L_803F3A40
    if (ctx->r2 == 0) {
        // 0x803F3A2C: nop
    
            goto L_803F3A40;
    }
    // 0x803F3A2C: nop

    // 0x803F3A30: beq         $v0, $a2, L_803F3AC8
    if (ctx->r2 == ctx->r6) {
        // 0x803F3A34: nop
    
            goto L_803F3AC8;
    }
    // 0x803F3A34: nop

    // 0x803F3A38: b           L_803F3C08
    // 0x803F3A3C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_803F3C08;
    // 0x803F3A3C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_803F3A40:
    // 0x803F3A40: jal         0x80035770
    // 0x803F3A44: nop

    func_80035770(rdram, ctx);
        goto after_5;
    // 0x803F3A44: nop

    after_5:
    // 0x803F3A48: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3A4C: lui         $a0, 0x803F
    ctx->r4 = S32(0X803F << 16);
    // 0x803F3A50: sb          $a2, 0x3A($s0)
    MEM_B(0X3A, ctx->r16) = ctx->r6;
    // 0x803F3A54: addiu       $a0, $a0, 0x3710
    ctx->r4 = ADD32(ctx->r4, 0X3710);
    // 0x803F3A58: jal         0x8002989C
    // 0x803F3A5C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_8002989C(rdram, ctx);
        goto after_6;
    // 0x803F3A5C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_6:
    // 0x803F3A60: lb          $v1, 0x3D($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X3D);
    // 0x803F3A64: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x803F3A68: beq         $v1, $at, L_803F3AB8
    if (ctx->r3 == ctx->r1) {
        // 0x803F3A6C: addiu       $t5, $zero, 0x9
        ctx->r13 = ADD32(0, 0X9);
            goto L_803F3AB8;
    }
    // 0x803F3A6C: addiu       $t5, $zero, 0x9
    ctx->r13 = ADD32(0, 0X9);
    // 0x803F3A70: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x803F3A74: beq         $v1, $at, L_803F3AC0
    if (ctx->r3 == ctx->r1) {
        // 0x803F3A78: addiu       $t6, $zero, 0xE
        ctx->r14 = ADD32(0, 0XE);
            goto L_803F3AC0;
    }
    // 0x803F3A78: addiu       $t6, $zero, 0xE
    ctx->r14 = ADD32(0, 0XE);
    // 0x803F3A7C: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x803F3A80: beq         $v1, $at, L_803F3A98
    if (ctx->r3 == ctx->r1) {
        // 0x803F3A84: addiu       $at, $zero, 0x11
        ctx->r1 = ADD32(0, 0X11);
            goto L_803F3A98;
    }
    // 0x803F3A84: addiu       $at, $zero, 0x11
    ctx->r1 = ADD32(0, 0X11);
    // 0x803F3A88: beq         $v1, $at, L_803F3A98
    if (ctx->r3 == ctx->r1) {
        // 0x803F3A8C: addiu       $t4, $v1, 0x1
        ctx->r12 = ADD32(ctx->r3, 0X1);
            goto L_803F3A98;
    }
    // 0x803F3A8C: addiu       $t4, $v1, 0x1
    ctx->r12 = ADD32(ctx->r3, 0X1);
    // 0x803F3A90: b           L_803F3C04
    // 0x803F3A94: sb          $t4, 0x3E($s0)
    MEM_B(0X3E, ctx->r16) = ctx->r12;
        goto L_803F3C04;
    // 0x803F3A94: sb          $t4, 0x3E($s0)
    MEM_B(0X3E, ctx->r16) = ctx->r12;
L_803F3A98:
    // 0x803F3A98: jal         0x803F46E8
    // 0x803F3A9C: nop

    func_803F46E8(rdram, ctx);
        goto after_7;
    // 0x803F3A9C: nop

    after_7:
    // 0x803F3AA0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3AA4: sb          $zero, 0x3D($s0)
    MEM_B(0X3D, ctx->r16) = 0;
    // 0x803F3AA8: sb          $a2, 0x3E($s0)
    MEM_B(0X3E, ctx->r16) = ctx->r6;
    // 0x803F3AAC: sb          $zero, 0x3A($s0)
    MEM_B(0X3A, ctx->r16) = 0;
    // 0x803F3AB0: b           L_803F3C04
    // 0x803F3AB4: sb          $zero, 0x38($s0)
    MEM_B(0X38, ctx->r16) = 0;
        goto L_803F3C04;
    // 0x803F3AB4: sb          $zero, 0x38($s0)
    MEM_B(0X38, ctx->r16) = 0;
L_803F3AB8:
    // 0x803F3AB8: b           L_803F3C04
    // 0x803F3ABC: sb          $t5, 0x3E($s0)
    MEM_B(0X3E, ctx->r16) = ctx->r13;
        goto L_803F3C04;
    // 0x803F3ABC: sb          $t5, 0x3E($s0)
    MEM_B(0X3E, ctx->r16) = ctx->r13;
L_803F3AC0:
    // 0x803F3AC0: b           L_803F3C04
    // 0x803F3AC4: sb          $t6, 0x3E($s0)
    MEM_B(0X3E, ctx->r16) = ctx->r14;
        goto L_803F3C04;
    // 0x803F3AC4: sb          $t6, 0x3E($s0)
    MEM_B(0X3E, ctx->r16) = ctx->r14;
L_803F3AC8:
    // 0x803F3AC8: lb          $a0, 0x3D($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X3D);
    // 0x803F3ACC: lb          $a1, 0x3E($s0)
    ctx->r5 = MEM_B(ctx->r16, 0X3E);
    // 0x803F3AD0: jal         0x803F7000
    // 0x803F3AD4: nop

    func_803F7000(rdram, ctx);
        goto after_8;
    // 0x803F3AD4: nop

    after_8:
    // 0x803F3AD8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3ADC: bne         $a2, $v0, L_803F3B0C
    if (ctx->r6 != ctx->r2) {
        // 0x803F3AE0: nop
    
            goto L_803F3B0C;
    }
    // 0x803F3AE0: nop

    // 0x803F3AE4: jal         0x80035770
    // 0x803F3AE8: nop

    func_80035770(rdram, ctx);
        goto after_9;
    // 0x803F3AE8: nop

    after_9:
    // 0x803F3AEC: jal         0x803F4E80
    // 0x803F3AF0: nop

    func_803F4E80(rdram, ctx);
        goto after_10;
    // 0x803F3AF0: nop

    after_10:
    // 0x803F3AF4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803F3AF8: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x803F3AFC: jal         0x803F4A78
    // 0x803F3B00: nop

    func_803F4A78(rdram, ctx);
        goto after_11;
    // 0x803F3B00: nop

    after_11:
    // 0x803F3B04: b           L_803F3B14
    // 0x803F3B08: nop

        goto L_803F3B14;
    // 0x803F3B08: nop

L_803F3B0C:
    // 0x803F3B0C: jal         0x800357AC
    // 0x803F3B10: nop

    func_800357AC(rdram, ctx);
        goto after_12;
    // 0x803F3B10: nop

    after_12:
L_803F3B14:
    // 0x803F3B14: lui         $a0, 0x803F
    ctx->r4 = S32(0X803F << 16);
    // 0x803F3B18: addiu       $a0, $a0, 0x3710
    ctx->r4 = ADD32(ctx->r4, 0X3710);
    // 0x803F3B1C: jal         0x8002989C
    // 0x803F3B20: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_8002989C(rdram, ctx);
        goto after_13;
    // 0x803F3B20: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_13:
    // 0x803F3B24: b           L_803F3C08
    // 0x803F3B28: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_803F3C08;
    // 0x803F3B28: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x803F3B2C: jal         0x80035770
    // 0x803F3B30: nop

    func_80035770(rdram, ctx);
        goto after_14;
    // 0x803F3B30: nop

    after_14:
    // 0x803F3B34: lbu         $t7, 0x3C($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X3C);
    // 0x803F3B38: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3B3C: sltiu       $at, $t7, 0x5
    ctx->r1 = ctx->r15 < 0X5 ? 1 : 0;
    // 0x803F3B40: beq         $at, $zero, L_803F3C04
    if (ctx->r1 == 0) {
        // 0x803F3B44: sb          $a2, 0x4D($s0)
        MEM_B(0X4D, ctx->r16) = ctx->r6;
            goto L_803F3C04;
    }
    // 0x803F3B44: sb          $a2, 0x4D($s0)
    MEM_B(0X4D, ctx->r16) = ctx->r6;
    // 0x803F3B48: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803F3B4C: lui         $at, 0x8040
    ctx->r1 = S32(0X8040 << 16);
    // 0x803F3B50: addu        $at, $at, $t7
    gpr jr_addend_803F3B5C = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x803F3B54: lw          $t7, -0x47B8($at)
    ctx->r15 = ADD32(ctx->r1, -0X47B8);
    // 0x803F3B58: nop

    // 0x803F3B5C: jr          $t7
    // 0x803F3B60: nop

    switch (jr_addend_803F3B5C >> 2) {
        case 0: goto L_803F3B64; break;
        case 1: goto L_803F3B84; break;
        case 2: goto L_803F3B90; break;
        case 3: goto L_803F3B90; break;
        case 4: goto L_803F3B90; break;
        default: switch_error(__func__, 0x803F3B5C, 0x803FB848);
    }
    // 0x803F3B60: nop

L_803F3B64:
    // 0x803F3B64: jal         0x803F46E8
    // 0x803F3B68: nop

    func_803F46E8(rdram, ctx);
        goto after_15;
    // 0x803F3B68: nop

    after_15:
    // 0x803F3B6C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3B70: sb          $zero, 0x3D($s0)
    MEM_B(0X3D, ctx->r16) = 0;
    // 0x803F3B74: sb          $a2, 0x3E($s0)
    MEM_B(0X3E, ctx->r16) = ctx->r6;
    // 0x803F3B78: sb          $zero, 0x3A($s0)
    MEM_B(0X3A, ctx->r16) = 0;
    // 0x803F3B7C: b           L_803F3C04
    // 0x803F3B80: sb          $zero, 0x38($s0)
    MEM_B(0X38, ctx->r16) = 0;
        goto L_803F3C04;
    // 0x803F3B80: sb          $zero, 0x38($s0)
    MEM_B(0X38, ctx->r16) = 0;
L_803F3B84:
    // 0x803F3B84: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x803F3B88: b           L_803F3C04
    // 0x803F3B8C: sb          $t8, 0x3C($s0)
    MEM_B(0X3C, ctx->r16) = ctx->r24;
        goto L_803F3C04;
    // 0x803F3B8C: sb          $t8, 0x3C($s0)
    MEM_B(0X3C, ctx->r16) = ctx->r24;
L_803F3B90:
    // 0x803F3B90: lb          $a0, 0x3F($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X3F);
    // 0x803F3B94: jal         0x8006DED4
    // 0x803F3B98: nop

    func_8006DED4(rdram, ctx);
        goto after_16;
    // 0x803F3B98: nop

    after_16:
    // 0x803F3B9C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3BA0: bne         $a2, $v0, L_803F3BF4
    if (ctx->r6 != ctx->r2) {
        // 0x803F3BA4: nop
    
            goto L_803F3BF4;
    }
    // 0x803F3BA4: nop

    // 0x803F3BA8: lb          $a0, 0x40($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X40);
    // 0x803F3BAC: jal         0x8006DED4
    // 0x803F3BB0: nop

    func_8006DED4(rdram, ctx);
        goto after_17;
    // 0x803F3BB0: nop

    after_17:
    // 0x803F3BB4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3BB8: bne         $a2, $v0, L_803F3BF4
    if (ctx->r6 != ctx->r2) {
        // 0x803F3BBC: nop
    
            goto L_803F3BF4;
    }
    // 0x803F3BBC: nop

    // 0x803F3BC0: lb          $a0, 0x41($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X41);
    // 0x803F3BC4: jal         0x8006DED4
    // 0x803F3BC8: nop

    func_8006DED4(rdram, ctx);
        goto after_18;
    // 0x803F3BC8: nop

    after_18:
    // 0x803F3BCC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3BD0: bne         $a2, $v0, L_803F3BF4
    if (ctx->r6 != ctx->r2) {
        // 0x803F3BD4: nop
    
            goto L_803F3BF4;
    }
    // 0x803F3BD4: nop

    // 0x803F3BD8: lb          $t9, 0x3F($s0)
    ctx->r25 = MEM_B(ctx->r16, 0X3F);
    // 0x803F3BDC: lb          $t0, 0x40($s0)
    ctx->r8 = MEM_B(ctx->r16, 0X40);
    // 0x803F3BE0: lb          $t1, 0x41($s0)
    ctx->r9 = MEM_B(ctx->r16, 0X41);
    // 0x803F3BE4: sb          $zero, 0x3C($s0)
    MEM_B(0X3C, ctx->r16) = 0;
    // 0x803F3BE8: sb          $t9, 0x4A($s0)
    MEM_B(0X4A, ctx->r16) = ctx->r25;
    // 0x803F3BEC: sb          $t0, 0x4B($s0)
    MEM_B(0X4B, ctx->r16) = ctx->r8;
    // 0x803F3BF0: sb          $t1, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r9;
L_803F3BF4:
    // 0x803F3BF4: lui         $a0, 0x803F
    ctx->r4 = S32(0X803F << 16);
    // 0x803F3BF8: addiu       $a0, $a0, 0x3710
    ctx->r4 = ADD32(ctx->r4, 0X3710);
    // 0x803F3BFC: jal         0x8002989C
    // 0x803F3C00: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_8002989C(rdram, ctx);
        goto after_19;
    // 0x803F3C00: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_19:
L_803F3C04:
    // 0x803F3C04: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_803F3C08:
    // 0x803F3C08: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x803F3C0C: jr          $ra
    // 0x803F3C10: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x803F3C10: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_803F3A98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F3A98: jal         0x803F46E8
    // 0x803F3A9C: nop

    func_803F46E8(rdram, ctx);
        goto after_0;
    // 0x803F3A9C: nop

    after_0:
    // 0x803F3AA0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3AA4: sb          $zero, 0x3D($s0)
    MEM_B(0X3D, ctx->r16) = 0;
    // 0x803F3AA8: sb          $a2, 0x3E($s0)
    MEM_B(0X3E, ctx->r16) = ctx->r6;
    // 0x803F3AAC: sb          $zero, 0x3A($s0)
    MEM_B(0X3A, ctx->r16) = 0;
    // 0x803F3AB0: b           L_803F3C04
    // 0x803F3AB4: sb          $zero, 0x38($s0)
    MEM_B(0X38, ctx->r16) = 0;
        goto L_803F3C04;
    // 0x803F3AB4: sb          $zero, 0x38($s0)
    MEM_B(0X38, ctx->r16) = 0;
    // 0x803F3AB8: b           L_803F3C04
    // 0x803F3ABC: sb          $t5, 0x3E($s0)
    MEM_B(0X3E, ctx->r16) = ctx->r13;
        goto L_803F3C04;
    // 0x803F3ABC: sb          $t5, 0x3E($s0)
    MEM_B(0X3E, ctx->r16) = ctx->r13;
    // 0x803F3AC0: b           L_803F3C04
    // 0x803F3AC4: sb          $t6, 0x3E($s0)
    MEM_B(0X3E, ctx->r16) = ctx->r14;
        goto L_803F3C04;
    // 0x803F3AC4: sb          $t6, 0x3E($s0)
    MEM_B(0X3E, ctx->r16) = ctx->r14;
    // 0x803F3AC8: lb          $a0, 0x3D($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X3D);
    // 0x803F3ACC: lb          $a1, 0x3E($s0)
    ctx->r5 = MEM_B(ctx->r16, 0X3E);
    // 0x803F3AD0: jal         0x803F7000
    // 0x803F3AD4: nop

    func_803F7000(rdram, ctx);
        goto after_1;
    // 0x803F3AD4: nop

    after_1:
    // 0x803F3AD8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3ADC: bne         $a2, $v0, L_803F3B0C
    if (ctx->r6 != ctx->r2) {
        // 0x803F3AE0: nop
    
            goto L_803F3B0C;
    }
    // 0x803F3AE0: nop

    // 0x803F3AE4: jal         0x80035770
    // 0x803F3AE8: nop

    func_80035770(rdram, ctx);
        goto after_2;
    // 0x803F3AE8: nop

    after_2:
    // 0x803F3AEC: jal         0x803F4E80
    // 0x803F3AF0: nop

    func_803F4E80(rdram, ctx);
        goto after_3;
    // 0x803F3AF0: nop

    after_3:
    // 0x803F3AF4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803F3AF8: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x803F3AFC: jal         0x803F4A78
    // 0x803F3B00: nop

    func_803F4A78(rdram, ctx);
        goto after_4;
    // 0x803F3B00: nop

    after_4:
    // 0x803F3B04: b           L_803F3B14
    // 0x803F3B08: nop

        goto L_803F3B14;
    // 0x803F3B08: nop

L_803F3B0C:
    // 0x803F3B0C: jal         0x800357AC
    // 0x803F3B10: nop

    func_800357AC(rdram, ctx);
        goto after_5;
    // 0x803F3B10: nop

    after_5:
L_803F3B14:
    // 0x803F3B14: lui         $a0, 0x803F
    ctx->r4 = S32(0X803F << 16);
    // 0x803F3B18: addiu       $a0, $a0, 0x3710
    ctx->r4 = ADD32(ctx->r4, 0X3710);
    // 0x803F3B1C: jal         0x8002989C
    // 0x803F3B20: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_8002989C(rdram, ctx);
        goto after_6;
    // 0x803F3B20: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_6:
    // 0x803F3B24: b           L_803F3C08
    // 0x803F3B28: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_803F3C08;
    // 0x803F3B28: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x803F3B2C: jal         0x80035770
    // 0x803F3B30: nop

    func_80035770(rdram, ctx);
        goto after_7;
    // 0x803F3B30: nop

    after_7:
    // 0x803F3B34: lbu         $t7, 0x3C($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X3C);
    // 0x803F3B38: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3B3C: sltiu       $at, $t7, 0x5
    ctx->r1 = ctx->r15 < 0X5 ? 1 : 0;
    // 0x803F3B40: beq         $at, $zero, L_803F3C04
    if (ctx->r1 == 0) {
        // 0x803F3B44: sb          $a2, 0x4D($s0)
        MEM_B(0X4D, ctx->r16) = ctx->r6;
            goto L_803F3C04;
    }
    // 0x803F3B44: sb          $a2, 0x4D($s0)
    MEM_B(0X4D, ctx->r16) = ctx->r6;
    // 0x803F3B48: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803F3B4C: lui         $at, 0x8040
    ctx->r1 = S32(0X8040 << 16);
    // 0x803F3B50: addu        $at, $at, $t7
    gpr jr_addend_803F3B5C = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x803F3B54: lw          $t7, -0x47B8($at)
    ctx->r15 = ADD32(ctx->r1, -0X47B8);
    // 0x803F3B58: nop

    // 0x803F3B5C: jr          $t7
    // 0x803F3B60: nop

    switch (jr_addend_803F3B5C >> 2) {
        case 0: goto L_803F3B64; break;
        case 1: goto L_803F3B84; break;
        case 2: goto L_803F3B90; break;
        case 3: goto L_803F3B90; break;
        case 4: goto L_803F3B90; break;
        default: switch_error(__func__, 0x803F3B5C, 0x803FB848);
    }
    // 0x803F3B60: nop

L_803F3B64:
    // 0x803F3B64: jal         0x803F46E8
    // 0x803F3B68: nop

    func_803F46E8(rdram, ctx);
        goto after_8;
    // 0x803F3B68: nop

    after_8:
    // 0x803F3B6C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3B70: sb          $zero, 0x3D($s0)
    MEM_B(0X3D, ctx->r16) = 0;
    // 0x803F3B74: sb          $a2, 0x3E($s0)
    MEM_B(0X3E, ctx->r16) = ctx->r6;
    // 0x803F3B78: sb          $zero, 0x3A($s0)
    MEM_B(0X3A, ctx->r16) = 0;
    // 0x803F3B7C: b           L_803F3C04
    // 0x803F3B80: sb          $zero, 0x38($s0)
    MEM_B(0X38, ctx->r16) = 0;
        goto L_803F3C04;
    // 0x803F3B80: sb          $zero, 0x38($s0)
    MEM_B(0X38, ctx->r16) = 0;
L_803F3B84:
    // 0x803F3B84: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x803F3B88: b           L_803F3C04
    // 0x803F3B8C: sb          $t8, 0x3C($s0)
    MEM_B(0X3C, ctx->r16) = ctx->r24;
        goto L_803F3C04;
    // 0x803F3B8C: sb          $t8, 0x3C($s0)
    MEM_B(0X3C, ctx->r16) = ctx->r24;
L_803F3B90:
    // 0x803F3B90: lb          $a0, 0x3F($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X3F);
    // 0x803F3B94: jal         0x8006DED4
    // 0x803F3B98: nop

    func_8006DED4(rdram, ctx);
        goto after_9;
    // 0x803F3B98: nop

    after_9:
    // 0x803F3B9C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3BA0: bne         $a2, $v0, L_803F3BF4
    if (ctx->r6 != ctx->r2) {
        // 0x803F3BA4: nop
    
            goto L_803F3BF4;
    }
    // 0x803F3BA4: nop

    // 0x803F3BA8: lb          $a0, 0x40($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X40);
    // 0x803F3BAC: jal         0x8006DED4
    // 0x803F3BB0: nop

    func_8006DED4(rdram, ctx);
        goto after_10;
    // 0x803F3BB0: nop

    after_10:
    // 0x803F3BB4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3BB8: bne         $a2, $v0, L_803F3BF4
    if (ctx->r6 != ctx->r2) {
        // 0x803F3BBC: nop
    
            goto L_803F3BF4;
    }
    // 0x803F3BBC: nop

    // 0x803F3BC0: lb          $a0, 0x41($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X41);
    // 0x803F3BC4: jal         0x8006DED4
    // 0x803F3BC8: nop

    func_8006DED4(rdram, ctx);
        goto after_11;
    // 0x803F3BC8: nop

    after_11:
    // 0x803F3BCC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F3BD0: bne         $a2, $v0, L_803F3BF4
    if (ctx->r6 != ctx->r2) {
        // 0x803F3BD4: nop
    
            goto L_803F3BF4;
    }
    // 0x803F3BD4: nop

    // 0x803F3BD8: lb          $t9, 0x3F($s0)
    ctx->r25 = MEM_B(ctx->r16, 0X3F);
    // 0x803F3BDC: lb          $t0, 0x40($s0)
    ctx->r8 = MEM_B(ctx->r16, 0X40);
    // 0x803F3BE0: lb          $t1, 0x41($s0)
    ctx->r9 = MEM_B(ctx->r16, 0X41);
    // 0x803F3BE4: sb          $zero, 0x3C($s0)
    MEM_B(0X3C, ctx->r16) = 0;
    // 0x803F3BE8: sb          $t9, 0x4A($s0)
    MEM_B(0X4A, ctx->r16) = ctx->r25;
    // 0x803F3BEC: sb          $t0, 0x4B($s0)
    MEM_B(0X4B, ctx->r16) = ctx->r8;
    // 0x803F3BF0: sb          $t1, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r9;
L_803F3BF4:
    // 0x803F3BF4: lui         $a0, 0x803F
    ctx->r4 = S32(0X803F << 16);
    // 0x803F3BF8: addiu       $a0, $a0, 0x3710
    ctx->r4 = ADD32(ctx->r4, 0X3710);
    // 0x803F3BFC: jal         0x8002989C
    // 0x803F3C00: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_8002989C(rdram, ctx);
        goto after_12;
    // 0x803F3C00: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_12:
L_803F3C04:
    // 0x803F3C04: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_803F3C08:
    // 0x803F3C08: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x803F3C0C: jr          $ra
    // 0x803F3C10: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x803F3C10: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_803F3C14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F3C14: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F3C18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F3C1C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803F3C20: lb          $v0, 0x38($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X38);
    // 0x803F3C24: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x803F3C28: beq         $v0, $zero, L_803F3C50
    if (ctx->r2 == 0) {
        // 0x803F3C2C: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_803F3C50;
    }
    // 0x803F3C2C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x803F3C30: beq         $v0, $v1, L_803F3C88
    if (ctx->r2 == ctx->r3) {
        // 0x803F3C34: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_803F3C88;
    }
    // 0x803F3C34: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803F3C38: beq         $v0, $at, L_803F3D34
    if (ctx->r2 == ctx->r1) {
        // 0x803F3C3C: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_803F3D34;
    }
    // 0x803F3C3C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x803F3C40: beq         $v0, $at, L_803F3C58
    if (ctx->r2 == ctx->r1) {
        // 0x803F3C44: nop
    
            goto L_803F3C58;
    }
    // 0x803F3C44: nop

    // 0x803F3C48: b           L_803F3DC0
    // 0x803F3C4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F3DC0;
    // 0x803F3C4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F3C50:
    // 0x803F3C50: b           L_803F3DBC
    // 0x803F3C54: sb          $zero, 0x39($a2)
    MEM_B(0X39, ctx->r6) = 0;
        goto L_803F3DBC;
    // 0x803F3C54: sb          $zero, 0x39($a2)
    MEM_B(0X39, ctx->r6) = 0;
L_803F3C58:
    // 0x803F3C58: lb          $v0, 0x3B($a2)
    ctx->r2 = MEM_B(ctx->r6, 0X3B);
    // 0x803F3C5C: nop

    // 0x803F3C60: beq         $v0, $zero, L_803F3C78
    if (ctx->r2 == 0) {
        // 0x803F3C64: nop
    
            goto L_803F3C78;
    }
    // 0x803F3C64: nop

    // 0x803F3C68: beq         $v0, $v1, L_803F3C80
    if (ctx->r2 == ctx->r3) {
        // 0x803F3C6C: nop
    
            goto L_803F3C80;
    }
    // 0x803F3C6C: nop

    // 0x803F3C70: b           L_803F3DC0
    // 0x803F3C74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F3DC0;
    // 0x803F3C74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F3C78:
    // 0x803F3C78: b           L_803F3DBC
    // 0x803F3C7C: sb          $zero, 0x38($a2)
    MEM_B(0X38, ctx->r6) = 0;
        goto L_803F3DBC;
    // 0x803F3C7C: sb          $zero, 0x38($a2)
    MEM_B(0X38, ctx->r6) = 0;
L_803F3C80:
    // 0x803F3C80: b           L_803F3DBC
    // 0x803F3C84: sb          $zero, 0x3B($a2)
    MEM_B(0X3B, ctx->r6) = 0;
        goto L_803F3DBC;
    // 0x803F3C84: sb          $zero, 0x3B($a2)
    MEM_B(0X3B, ctx->r6) = 0;
L_803F3C88:
    // 0x803F3C88: lb          $v0, 0x3A($a2)
    ctx->r2 = MEM_B(ctx->r6, 0X3A);
    // 0x803F3C8C: nop

    // 0x803F3C90: beq         $v0, $zero, L_803F3CA8
    if (ctx->r2 == 0) {
        // 0x803F3C94: nop
    
            goto L_803F3CA8;
    }
    // 0x803F3C94: nop

    // 0x803F3C98: beq         $v0, $v1, L_803F3CE8
    if (ctx->r2 == ctx->r3) {
        // 0x803F3C9C: nop
    
            goto L_803F3CE8;
    }
    // 0x803F3C9C: nop

    // 0x803F3CA0: b           L_803F3DC0
    // 0x803F3CA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F3DC0;
    // 0x803F3CA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F3CA8:
    // 0x803F3CA8: lb          $v0, 0x3D($a2)
    ctx->r2 = MEM_B(ctx->r6, 0X3D);
    // 0x803F3CAC: nop

    // 0x803F3CB0: bltz        $v0, L_803F3CCC
    if (SIGNED(ctx->r2) < 0) {
        // 0x803F3CB4: slti        $at, $v0, 0xB
        ctx->r1 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
            goto L_803F3CCC;
    }
    // 0x803F3CB4: slti        $at, $v0, 0xB
    ctx->r1 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
    // 0x803F3CB8: beq         $at, $zero, L_803F3CCC
    if (ctx->r1 == 0) {
        // 0x803F3CBC: addiu       $t6, $zero, 0x10
        ctx->r14 = ADD32(0, 0X10);
            goto L_803F3CCC;
    }
    // 0x803F3CBC: addiu       $t6, $zero, 0x10
    ctx->r14 = ADD32(0, 0X10);
    // 0x803F3CC0: sb          $t6, 0x3D($a2)
    MEM_B(0X3D, ctx->r6) = ctx->r14;
    // 0x803F3CC4: lb          $v0, 0x3D($a2)
    ctx->r2 = MEM_B(ctx->r6, 0X3D);
    // 0x803F3CC8: nop

L_803F3CCC:
    // 0x803F3CCC: slti        $at, $v0, 0xB
    ctx->r1 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
    // 0x803F3CD0: bne         $at, $zero, L_803F3DBC
    if (ctx->r1 != 0) {
        // 0x803F3CD4: slti        $at, $v0, 0x10
        ctx->r1 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
            goto L_803F3DBC;
    }
    // 0x803F3CD4: slti        $at, $v0, 0x10
    ctx->r1 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x803F3CD8: beq         $at, $zero, L_803F3DBC
    if (ctx->r1 == 0) {
        // 0x803F3CDC: addiu       $t7, $zero, 0x11
        ctx->r15 = ADD32(0, 0X11);
            goto L_803F3DBC;
    }
    // 0x803F3CDC: addiu       $t7, $zero, 0x11
    ctx->r15 = ADD32(0, 0X11);
    // 0x803F3CE0: b           L_803F3DBC
    // 0x803F3CE4: sb          $t7, 0x3D($a2)
    MEM_B(0X3D, ctx->r6) = ctx->r15;
        goto L_803F3DBC;
    // 0x803F3CE4: sb          $t7, 0x3D($a2)
    MEM_B(0X3D, ctx->r6) = ctx->r15;
L_803F3CE8:
    // 0x803F3CE8: lb          $v0, 0x3D($a2)
    ctx->r2 = MEM_B(ctx->r6, 0X3D);
    // 0x803F3CEC: nop

    // 0x803F3CF0: bltz        $v0, L_803F3D0C
    if (SIGNED(ctx->r2) < 0) {
        // 0x803F3CF4: slti        $at, $v0, 0xB
        ctx->r1 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
            goto L_803F3D0C;
    }
    // 0x803F3CF4: slti        $at, $v0, 0xB
    ctx->r1 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
    // 0x803F3CF8: beq         $at, $zero, L_803F3D0C
    if (ctx->r1 == 0) {
        // 0x803F3CFC: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_803F3D0C;
    }
    // 0x803F3CFC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x803F3D00: lb          $v0, 0x3D($a2)
    ctx->r2 = MEM_B(ctx->r6, 0X3D);
    // 0x803F3D04: sb          $v1, 0x45($a2)
    MEM_B(0X45, ctx->r6) = ctx->r3;
    // 0x803F3D08: sb          $v1, 0x44($a2)
    MEM_B(0X44, ctx->r6) = ctx->r3;
L_803F3D0C:
    // 0x803F3D0C: slti        $at, $v0, 0xB
    ctx->r1 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
    // 0x803F3D10: bne         $at, $zero, L_803F3D2C
    if (ctx->r1 != 0) {
        // 0x803F3D14: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_803F3D2C;
    }
    // 0x803F3D14: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x803F3D18: slti        $at, $v0, 0x10
    ctx->r1 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x803F3D1C: beq         $at, $zero, L_803F3D2C
    if (ctx->r1 == 0) {
        // 0x803F3D20: nop
    
            goto L_803F3D2C;
    }
    // 0x803F3D20: nop

    // 0x803F3D24: sb          $v1, 0x45($a2)
    MEM_B(0X45, ctx->r6) = ctx->r3;
    // 0x803F3D28: sb          $zero, 0x44($a2)
    MEM_B(0X44, ctx->r6) = 0;
L_803F3D2C:
    // 0x803F3D2C: b           L_803F3DBC
    // 0x803F3D30: sb          $zero, 0x3A($a2)
    MEM_B(0X3A, ctx->r6) = 0;
        goto L_803F3DBC;
    // 0x803F3D30: sb          $zero, 0x3A($a2)
    MEM_B(0X3A, ctx->r6) = 0;
L_803F3D34:
    // 0x803F3D34: lbu         $t8, 0x3C($a2)
    ctx->r24 = MEM_BU(ctx->r6, 0X3C);
    // 0x803F3D38: nop

    // 0x803F3D3C: sltiu       $at, $t8, 0x5
    ctx->r1 = ctx->r24 < 0X5 ? 1 : 0;
    // 0x803F3D40: beq         $at, $zero, L_803F3DBC
    if (ctx->r1 == 0) {
        // 0x803F3D44: sll         $t8, $t8, 2
        ctx->r24 = S32(ctx->r24 << 2);
            goto L_803F3DBC;
    }
    // 0x803F3D44: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x803F3D48: lui         $at, 0x8040
    ctx->r1 = S32(0X8040 << 16);
    // 0x803F3D4C: addu        $at, $at, $t8
    gpr jr_addend_803F3D58 = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x803F3D50: lw          $t8, -0x47A4($at)
    ctx->r24 = ADD32(ctx->r1, -0X47A4);
    // 0x803F3D54: nop

    // 0x803F3D58: jr          $t8
    // 0x803F3D5C: nop

    switch (jr_addend_803F3D58 >> 2) {
        case 0: goto L_803F3DBC; break;
        case 1: goto L_803F3D60; break;
        case 2: goto L_803F3D68; break;
        case 3: goto L_803F3D84; break;
        case 4: goto L_803F3DA0; break;
        default: switch_error(__func__, 0x803F3D58, 0x803FB85C);
    }
    // 0x803F3D5C: nop

L_803F3D60:
    // 0x803F3D60: b           L_803F3DBC
    // 0x803F3D64: sb          $zero, 0x3C($a2)
    MEM_B(0X3C, ctx->r6) = 0;
        goto L_803F3DBC;
    // 0x803F3D64: sb          $zero, 0x3C($a2)
    MEM_B(0X3C, ctx->r6) = 0;
L_803F3D68:
    // 0x803F3D68: lb          $a0, 0x3F($a2)
    ctx->r4 = MEM_B(ctx->r6, 0X3F);
    // 0x803F3D6C: lb          $a1, 0x4A($a2)
    ctx->r5 = MEM_B(ctx->r6, 0X4A);
    // 0x803F3D70: jal         0x803F49BC
    // 0x803F3D74: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_803F49BC(rdram, ctx);
        goto after_0;
    // 0x803F3D74: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x803F3D78: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x803F3D7C: b           L_803F3DBC
    // 0x803F3D80: sb          $v0, 0x3F($a2)
    MEM_B(0X3F, ctx->r6) = ctx->r2;
        goto L_803F3DBC;
    // 0x803F3D80: sb          $v0, 0x3F($a2)
    MEM_B(0X3F, ctx->r6) = ctx->r2;
L_803F3D84:
    // 0x803F3D84: lb          $a0, 0x40($a2)
    ctx->r4 = MEM_B(ctx->r6, 0X40);
    // 0x803F3D88: lb          $a1, 0x4B($a2)
    ctx->r5 = MEM_B(ctx->r6, 0X4B);
    // 0x803F3D8C: jal         0x803F49BC
    // 0x803F3D90: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_803F49BC(rdram, ctx);
        goto after_1;
    // 0x803F3D90: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_1:
    // 0x803F3D94: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x803F3D98: b           L_803F3DBC
    // 0x803F3D9C: sb          $v0, 0x40($a2)
    MEM_B(0X40, ctx->r6) = ctx->r2;
        goto L_803F3DBC;
    // 0x803F3D9C: sb          $v0, 0x40($a2)
    MEM_B(0X40, ctx->r6) = ctx->r2;
L_803F3DA0:
    // 0x803F3DA0: lb          $a0, 0x41($a2)
    ctx->r4 = MEM_B(ctx->r6, 0X41);
    // 0x803F3DA4: lb          $a1, 0x4C($a2)
    ctx->r5 = MEM_B(ctx->r6, 0X4C);
    // 0x803F3DA8: jal         0x803F49BC
    // 0x803F3DAC: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_803F49BC(rdram, ctx);
        goto after_2;
    // 0x803F3DAC: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_2:
    // 0x803F3DB0: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x803F3DB4: nop

    // 0x803F3DB8: sb          $v0, 0x41($a2)
    MEM_B(0X41, ctx->r6) = ctx->r2;
L_803F3DBC:
    // 0x803F3DBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F3DC0:
    // 0x803F3DC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F3DC4: jr          $ra
    // 0x803F3DC8: nop

    return;
    // 0x803F3DC8: nop

;}
RECOMP_FUNC void func_803F3C88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F3C88: lb          $v0, 0x3A($a2)
    ctx->r2 = MEM_B(ctx->r6, 0X3A);
    // 0x803F3C8C: nop

    // 0x803F3C90: beq         $v0, $zero, L_803F3CA8
    if (ctx->r2 == 0) {
        // 0x803F3C94: nop
    
            goto L_803F3CA8;
    }
    // 0x803F3C94: nop

    // 0x803F3C98: beq         $v0, $v1, L_803F3CE8
    if (ctx->r2 == ctx->r3) {
        // 0x803F3C9C: nop
    
            goto L_803F3CE8;
    }
    // 0x803F3C9C: nop

    // 0x803F3CA0: b           L_803F3DC0
    // 0x803F3CA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F3DC0;
    // 0x803F3CA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F3CA8:
    // 0x803F3CA8: lb          $v0, 0x3D($a2)
    ctx->r2 = MEM_B(ctx->r6, 0X3D);
    // 0x803F3CAC: nop

    // 0x803F3CB0: bltz        $v0, L_803F3CCC
    if (SIGNED(ctx->r2) < 0) {
        // 0x803F3CB4: slti        $at, $v0, 0xB
        ctx->r1 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
            goto L_803F3CCC;
    }
    // 0x803F3CB4: slti        $at, $v0, 0xB
    ctx->r1 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
    // 0x803F3CB8: beq         $at, $zero, L_803F3CCC
    if (ctx->r1 == 0) {
        // 0x803F3CBC: addiu       $t6, $zero, 0x10
        ctx->r14 = ADD32(0, 0X10);
            goto L_803F3CCC;
    }
    // 0x803F3CBC: addiu       $t6, $zero, 0x10
    ctx->r14 = ADD32(0, 0X10);
    // 0x803F3CC0: sb          $t6, 0x3D($a2)
    MEM_B(0X3D, ctx->r6) = ctx->r14;
    // 0x803F3CC4: lb          $v0, 0x3D($a2)
    ctx->r2 = MEM_B(ctx->r6, 0X3D);
    // 0x803F3CC8: nop

L_803F3CCC:
    // 0x803F3CCC: slti        $at, $v0, 0xB
    ctx->r1 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
    // 0x803F3CD0: bne         $at, $zero, L_803F3DBC
    if (ctx->r1 != 0) {
        // 0x803F3CD4: slti        $at, $v0, 0x10
        ctx->r1 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
            goto L_803F3DBC;
    }
    // 0x803F3CD4: slti        $at, $v0, 0x10
    ctx->r1 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x803F3CD8: beq         $at, $zero, L_803F3DBC
    if (ctx->r1 == 0) {
        // 0x803F3CDC: addiu       $t7, $zero, 0x11
        ctx->r15 = ADD32(0, 0X11);
            goto L_803F3DBC;
    }
    // 0x803F3CDC: addiu       $t7, $zero, 0x11
    ctx->r15 = ADD32(0, 0X11);
    // 0x803F3CE0: b           L_803F3DBC
    // 0x803F3CE4: sb          $t7, 0x3D($a2)
    MEM_B(0X3D, ctx->r6) = ctx->r15;
        goto L_803F3DBC;
    // 0x803F3CE4: sb          $t7, 0x3D($a2)
    MEM_B(0X3D, ctx->r6) = ctx->r15;
L_803F3CE8:
    // 0x803F3CE8: lb          $v0, 0x3D($a2)
    ctx->r2 = MEM_B(ctx->r6, 0X3D);
    // 0x803F3CEC: nop

    // 0x803F3CF0: bltz        $v0, L_803F3D0C
    if (SIGNED(ctx->r2) < 0) {
        // 0x803F3CF4: slti        $at, $v0, 0xB
        ctx->r1 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
            goto L_803F3D0C;
    }
    // 0x803F3CF4: slti        $at, $v0, 0xB
    ctx->r1 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
    // 0x803F3CF8: beq         $at, $zero, L_803F3D0C
    if (ctx->r1 == 0) {
        // 0x803F3CFC: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_803F3D0C;
    }
    // 0x803F3CFC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x803F3D00: lb          $v0, 0x3D($a2)
    ctx->r2 = MEM_B(ctx->r6, 0X3D);
    // 0x803F3D04: sb          $v1, 0x45($a2)
    MEM_B(0X45, ctx->r6) = ctx->r3;
    // 0x803F3D08: sb          $v1, 0x44($a2)
    MEM_B(0X44, ctx->r6) = ctx->r3;
L_803F3D0C:
    // 0x803F3D0C: slti        $at, $v0, 0xB
    ctx->r1 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
    // 0x803F3D10: bne         $at, $zero, L_803F3D2C
    if (ctx->r1 != 0) {
        // 0x803F3D14: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_803F3D2C;
    }
    // 0x803F3D14: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x803F3D18: slti        $at, $v0, 0x10
    ctx->r1 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x803F3D1C: beq         $at, $zero, L_803F3D2C
    if (ctx->r1 == 0) {
        // 0x803F3D20: nop
    
            goto L_803F3D2C;
    }
    // 0x803F3D20: nop

    // 0x803F3D24: sb          $v1, 0x45($a2)
    MEM_B(0X45, ctx->r6) = ctx->r3;
    // 0x803F3D28: sb          $zero, 0x44($a2)
    MEM_B(0X44, ctx->r6) = 0;
L_803F3D2C:
    // 0x803F3D2C: b           L_803F3DBC
    // 0x803F3D30: sb          $zero, 0x3A($a2)
    MEM_B(0X3A, ctx->r6) = 0;
        goto L_803F3DBC;
    // 0x803F3D30: sb          $zero, 0x3A($a2)
    MEM_B(0X3A, ctx->r6) = 0;
    // 0x803F3D34: lbu         $t8, 0x3C($a2)
    ctx->r24 = MEM_BU(ctx->r6, 0X3C);
    // 0x803F3D38: nop

    // 0x803F3D3C: sltiu       $at, $t8, 0x5
    ctx->r1 = ctx->r24 < 0X5 ? 1 : 0;
    // 0x803F3D40: beq         $at, $zero, L_803F3DBC
    if (ctx->r1 == 0) {
        // 0x803F3D44: sll         $t8, $t8, 2
        ctx->r24 = S32(ctx->r24 << 2);
            goto L_803F3DBC;
    }
    // 0x803F3D44: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x803F3D48: lui         $at, 0x8040
    ctx->r1 = S32(0X8040 << 16);
    // 0x803F3D4C: addu        $at, $at, $t8
    gpr jr_addend_803F3D58 = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x803F3D50: lw          $t8, -0x47A4($at)
    ctx->r24 = ADD32(ctx->r1, -0X47A4);
    // 0x803F3D54: nop

    // 0x803F3D58: jr          $t8
    // 0x803F3D5C: nop

    switch (jr_addend_803F3D58 >> 2) {
        case 0: goto L_803F3DBC; break;
        case 1: goto L_803F3D60; break;
        case 2: goto L_803F3D68; break;
        case 3: goto L_803F3D84; break;
        case 4: goto L_803F3DA0; break;
        default: switch_error(__func__, 0x803F3D58, 0x803FB85C);
    }
    // 0x803F3D5C: nop

L_803F3D60:
    // 0x803F3D60: b           L_803F3DBC
    // 0x803F3D64: sb          $zero, 0x3C($a2)
    MEM_B(0X3C, ctx->r6) = 0;
        goto L_803F3DBC;
    // 0x803F3D64: sb          $zero, 0x3C($a2)
    MEM_B(0X3C, ctx->r6) = 0;
L_803F3D68:
    // 0x803F3D68: lb          $a0, 0x3F($a2)
    ctx->r4 = MEM_B(ctx->r6, 0X3F);
    // 0x803F3D6C: lb          $a1, 0x4A($a2)
    ctx->r5 = MEM_B(ctx->r6, 0X4A);
    // 0x803F3D70: jal         0x803F49BC
    // 0x803F3D74: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_803F49BC(rdram, ctx);
        goto after_0;
    // 0x803F3D74: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x803F3D78: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x803F3D7C: b           L_803F3DBC
    // 0x803F3D80: sb          $v0, 0x3F($a2)
    MEM_B(0X3F, ctx->r6) = ctx->r2;
        goto L_803F3DBC;
    // 0x803F3D80: sb          $v0, 0x3F($a2)
    MEM_B(0X3F, ctx->r6) = ctx->r2;
L_803F3D84:
    // 0x803F3D84: lb          $a0, 0x40($a2)
    ctx->r4 = MEM_B(ctx->r6, 0X40);
    // 0x803F3D88: lb          $a1, 0x4B($a2)
    ctx->r5 = MEM_B(ctx->r6, 0X4B);
    // 0x803F3D8C: jal         0x803F49BC
    // 0x803F3D90: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_803F49BC(rdram, ctx);
        goto after_1;
    // 0x803F3D90: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_1:
    // 0x803F3D94: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x803F3D98: b           L_803F3DBC
    // 0x803F3D9C: sb          $v0, 0x40($a2)
    MEM_B(0X40, ctx->r6) = ctx->r2;
        goto L_803F3DBC;
    // 0x803F3D9C: sb          $v0, 0x40($a2)
    MEM_B(0X40, ctx->r6) = ctx->r2;
L_803F3DA0:
    // 0x803F3DA0: lb          $a0, 0x41($a2)
    ctx->r4 = MEM_B(ctx->r6, 0X41);
    // 0x803F3DA4: lb          $a1, 0x4C($a2)
    ctx->r5 = MEM_B(ctx->r6, 0X4C);
    // 0x803F3DA8: jal         0x803F49BC
    // 0x803F3DAC: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_803F49BC(rdram, ctx);
        goto after_2;
    // 0x803F3DAC: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_2:
    // 0x803F3DB0: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x803F3DB4: nop

    // 0x803F3DB8: sb          $v0, 0x41($a2)
    MEM_B(0X41, ctx->r6) = ctx->r2;
L_803F3DBC:
    // 0x803F3DBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F3DC0:
    // 0x803F3DC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F3DC4: jr          $ra
    // 0x803F3DC8: nop

    return;
    // 0x803F3DC8: nop

;}
RECOMP_FUNC void func_803F3CCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F3CCC: slti        $at, $v0, 0xB
    ctx->r1 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
    // 0x803F3CD0: bne         $at, $zero, L_803F3DBC
    if (ctx->r1 != 0) {
        // 0x803F3CD4: slti        $at, $v0, 0x10
        ctx->r1 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
            goto L_803F3DBC;
    }
    // 0x803F3CD4: slti        $at, $v0, 0x10
    ctx->r1 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x803F3CD8: beq         $at, $zero, L_803F3DBC
    if (ctx->r1 == 0) {
        // 0x803F3CDC: addiu       $t7, $zero, 0x11
        ctx->r15 = ADD32(0, 0X11);
            goto L_803F3DBC;
    }
    // 0x803F3CDC: addiu       $t7, $zero, 0x11
    ctx->r15 = ADD32(0, 0X11);
    // 0x803F3CE0: b           L_803F3DBC
    // 0x803F3CE4: sb          $t7, 0x3D($a2)
    MEM_B(0X3D, ctx->r6) = ctx->r15;
        goto L_803F3DBC;
    // 0x803F3CE4: sb          $t7, 0x3D($a2)
    MEM_B(0X3D, ctx->r6) = ctx->r15;
    // 0x803F3CE8: lb          $v0, 0x3D($a2)
    ctx->r2 = MEM_B(ctx->r6, 0X3D);
    // 0x803F3CEC: nop

    // 0x803F3CF0: bltz        $v0, L_803F3D0C
    if (SIGNED(ctx->r2) < 0) {
        // 0x803F3CF4: slti        $at, $v0, 0xB
        ctx->r1 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
            goto L_803F3D0C;
    }
    // 0x803F3CF4: slti        $at, $v0, 0xB
    ctx->r1 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
    // 0x803F3CF8: beq         $at, $zero, L_803F3D0C
    if (ctx->r1 == 0) {
        // 0x803F3CFC: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_803F3D0C;
    }
    // 0x803F3CFC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x803F3D00: lb          $v0, 0x3D($a2)
    ctx->r2 = MEM_B(ctx->r6, 0X3D);
    // 0x803F3D04: sb          $v1, 0x45($a2)
    MEM_B(0X45, ctx->r6) = ctx->r3;
    // 0x803F3D08: sb          $v1, 0x44($a2)
    MEM_B(0X44, ctx->r6) = ctx->r3;
L_803F3D0C:
    // 0x803F3D0C: slti        $at, $v0, 0xB
    ctx->r1 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
    // 0x803F3D10: bne         $at, $zero, L_803F3D2C
    if (ctx->r1 != 0) {
        // 0x803F3D14: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_803F3D2C;
    }
    // 0x803F3D14: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x803F3D18: slti        $at, $v0, 0x10
    ctx->r1 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x803F3D1C: beq         $at, $zero, L_803F3D2C
    if (ctx->r1 == 0) {
        // 0x803F3D20: nop
    
            goto L_803F3D2C;
    }
    // 0x803F3D20: nop

    // 0x803F3D24: sb          $v1, 0x45($a2)
    MEM_B(0X45, ctx->r6) = ctx->r3;
    // 0x803F3D28: sb          $zero, 0x44($a2)
    MEM_B(0X44, ctx->r6) = 0;
L_803F3D2C:
    // 0x803F3D2C: b           L_803F3DBC
    // 0x803F3D30: sb          $zero, 0x3A($a2)
    MEM_B(0X3A, ctx->r6) = 0;
        goto L_803F3DBC;
    // 0x803F3D30: sb          $zero, 0x3A($a2)
    MEM_B(0X3A, ctx->r6) = 0;
    // 0x803F3D34: lbu         $t8, 0x3C($a2)
    ctx->r24 = MEM_BU(ctx->r6, 0X3C);
    // 0x803F3D38: nop

    // 0x803F3D3C: sltiu       $at, $t8, 0x5
    ctx->r1 = ctx->r24 < 0X5 ? 1 : 0;
    // 0x803F3D40: beq         $at, $zero, L_803F3DBC
    if (ctx->r1 == 0) {
        // 0x803F3D44: sll         $t8, $t8, 2
        ctx->r24 = S32(ctx->r24 << 2);
            goto L_803F3DBC;
    }
    // 0x803F3D44: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x803F3D48: lui         $at, 0x8040
    ctx->r1 = S32(0X8040 << 16);
    // 0x803F3D4C: addu        $at, $at, $t8
    gpr jr_addend_803F3D58 = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x803F3D50: lw          $t8, -0x47A4($at)
    ctx->r24 = ADD32(ctx->r1, -0X47A4);
    // 0x803F3D54: nop

    // 0x803F3D58: jr          $t8
    // 0x803F3D5C: nop

    switch (jr_addend_803F3D58 >> 2) {
        case 0: goto L_803F3DBC; break;
        case 1: goto L_803F3D60; break;
        case 2: goto L_803F3D68; break;
        case 3: goto L_803F3D84; break;
        case 4: goto L_803F3DA0; break;
        default: switch_error(__func__, 0x803F3D58, 0x803FB85C);
    }
    // 0x803F3D5C: nop

L_803F3D60:
    // 0x803F3D60: b           L_803F3DBC
    // 0x803F3D64: sb          $zero, 0x3C($a2)
    MEM_B(0X3C, ctx->r6) = 0;
        goto L_803F3DBC;
    // 0x803F3D64: sb          $zero, 0x3C($a2)
    MEM_B(0X3C, ctx->r6) = 0;
L_803F3D68:
    // 0x803F3D68: lb          $a0, 0x3F($a2)
    ctx->r4 = MEM_B(ctx->r6, 0X3F);
    // 0x803F3D6C: lb          $a1, 0x4A($a2)
    ctx->r5 = MEM_B(ctx->r6, 0X4A);
    // 0x803F3D70: jal         0x803F49BC
    // 0x803F3D74: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_803F49BC(rdram, ctx);
        goto after_0;
    // 0x803F3D74: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x803F3D78: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x803F3D7C: b           L_803F3DBC
    // 0x803F3D80: sb          $v0, 0x3F($a2)
    MEM_B(0X3F, ctx->r6) = ctx->r2;
        goto L_803F3DBC;
    // 0x803F3D80: sb          $v0, 0x3F($a2)
    MEM_B(0X3F, ctx->r6) = ctx->r2;
L_803F3D84:
    // 0x803F3D84: lb          $a0, 0x40($a2)
    ctx->r4 = MEM_B(ctx->r6, 0X40);
    // 0x803F3D88: lb          $a1, 0x4B($a2)
    ctx->r5 = MEM_B(ctx->r6, 0X4B);
    // 0x803F3D8C: jal         0x803F49BC
    // 0x803F3D90: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_803F49BC(rdram, ctx);
        goto after_1;
    // 0x803F3D90: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_1:
    // 0x803F3D94: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x803F3D98: b           L_803F3DBC
    // 0x803F3D9C: sb          $v0, 0x40($a2)
    MEM_B(0X40, ctx->r6) = ctx->r2;
        goto L_803F3DBC;
    // 0x803F3D9C: sb          $v0, 0x40($a2)
    MEM_B(0X40, ctx->r6) = ctx->r2;
L_803F3DA0:
    // 0x803F3DA0: lb          $a0, 0x41($a2)
    ctx->r4 = MEM_B(ctx->r6, 0X41);
    // 0x803F3DA4: lb          $a1, 0x4C($a2)
    ctx->r5 = MEM_B(ctx->r6, 0X4C);
    // 0x803F3DA8: jal         0x803F49BC
    // 0x803F3DAC: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_803F49BC(rdram, ctx);
        goto after_2;
    // 0x803F3DAC: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_2:
    // 0x803F3DB0: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x803F3DB4: nop

    // 0x803F3DB8: sb          $v0, 0x41($a2)
    MEM_B(0X41, ctx->r6) = ctx->r2;
L_803F3DBC:
    // 0x803F3DBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F3DC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F3DC4: jr          $ra
    // 0x803F3DC8: nop

    return;
    // 0x803F3DC8: nop

;}
RECOMP_FUNC void func_803F3D10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F3D10: bne         $at, $zero, L_803F3D2C
    if (ctx->r1 != 0) {
        // 0x803F3D14: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_803F3D2C;
    }
    // 0x803F3D14: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x803F3D18: slti        $at, $v0, 0x10
    ctx->r1 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x803F3D1C: beq         $at, $zero, L_803F3D2C
    if (ctx->r1 == 0) {
        // 0x803F3D20: nop
    
            goto L_803F3D2C;
    }
    // 0x803F3D20: nop

    // 0x803F3D24: sb          $v1, 0x45($a2)
    MEM_B(0X45, ctx->r6) = ctx->r3;
    // 0x803F3D28: sb          $zero, 0x44($a2)
    MEM_B(0X44, ctx->r6) = 0;
L_803F3D2C:
    // 0x803F3D2C: b           L_803F3DBC
    // 0x803F3D30: sb          $zero, 0x3A($a2)
    MEM_B(0X3A, ctx->r6) = 0;
        goto L_803F3DBC;
    // 0x803F3D30: sb          $zero, 0x3A($a2)
    MEM_B(0X3A, ctx->r6) = 0;
    // 0x803F3D34: lbu         $t8, 0x3C($a2)
    ctx->r24 = MEM_BU(ctx->r6, 0X3C);
    // 0x803F3D38: nop

    // 0x803F3D3C: sltiu       $at, $t8, 0x5
    ctx->r1 = ctx->r24 < 0X5 ? 1 : 0;
    // 0x803F3D40: beq         $at, $zero, L_803F3DBC
    if (ctx->r1 == 0) {
        // 0x803F3D44: sll         $t8, $t8, 2
        ctx->r24 = S32(ctx->r24 << 2);
            goto L_803F3DBC;
    }
    // 0x803F3D44: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x803F3D48: lui         $at, 0x8040
    ctx->r1 = S32(0X8040 << 16);
    // 0x803F3D4C: addu        $at, $at, $t8
    gpr jr_addend_803F3D58 = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x803F3D50: lw          $t8, -0x47A4($at)
    ctx->r24 = ADD32(ctx->r1, -0X47A4);
    // 0x803F3D54: nop

    // 0x803F3D58: jr          $t8
    // 0x803F3D5C: nop

    switch (jr_addend_803F3D58 >> 2) {
        case 0: goto L_803F3DBC; break;
        case 1: goto L_803F3D60; break;
        case 2: goto L_803F3D68; break;
        case 3: goto L_803F3D84; break;
        case 4: goto L_803F3DA0; break;
        default: switch_error(__func__, 0x803F3D58, 0x803FB85C);
    }
    // 0x803F3D5C: nop

L_803F3D60:
    // 0x803F3D60: b           L_803F3DBC
    // 0x803F3D64: sb          $zero, 0x3C($a2)
    MEM_B(0X3C, ctx->r6) = 0;
        goto L_803F3DBC;
    // 0x803F3D64: sb          $zero, 0x3C($a2)
    MEM_B(0X3C, ctx->r6) = 0;
L_803F3D68:
    // 0x803F3D68: lb          $a0, 0x3F($a2)
    ctx->r4 = MEM_B(ctx->r6, 0X3F);
    // 0x803F3D6C: lb          $a1, 0x4A($a2)
    ctx->r5 = MEM_B(ctx->r6, 0X4A);
    // 0x803F3D70: jal         0x803F49BC
    // 0x803F3D74: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_803F49BC(rdram, ctx);
        goto after_0;
    // 0x803F3D74: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x803F3D78: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x803F3D7C: b           L_803F3DBC
    // 0x803F3D80: sb          $v0, 0x3F($a2)
    MEM_B(0X3F, ctx->r6) = ctx->r2;
        goto L_803F3DBC;
    // 0x803F3D80: sb          $v0, 0x3F($a2)
    MEM_B(0X3F, ctx->r6) = ctx->r2;
L_803F3D84:
    // 0x803F3D84: lb          $a0, 0x40($a2)
    ctx->r4 = MEM_B(ctx->r6, 0X40);
    // 0x803F3D88: lb          $a1, 0x4B($a2)
    ctx->r5 = MEM_B(ctx->r6, 0X4B);
    // 0x803F3D8C: jal         0x803F49BC
    // 0x803F3D90: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_803F49BC(rdram, ctx);
        goto after_1;
    // 0x803F3D90: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_1:
    // 0x803F3D94: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x803F3D98: b           L_803F3DBC
    // 0x803F3D9C: sb          $v0, 0x40($a2)
    MEM_B(0X40, ctx->r6) = ctx->r2;
        goto L_803F3DBC;
    // 0x803F3D9C: sb          $v0, 0x40($a2)
    MEM_B(0X40, ctx->r6) = ctx->r2;
L_803F3DA0:
    // 0x803F3DA0: lb          $a0, 0x41($a2)
    ctx->r4 = MEM_B(ctx->r6, 0X41);
    // 0x803F3DA4: lb          $a1, 0x4C($a2)
    ctx->r5 = MEM_B(ctx->r6, 0X4C);
    // 0x803F3DA8: jal         0x803F49BC
    // 0x803F3DAC: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_803F49BC(rdram, ctx);
        goto after_2;
    // 0x803F3DAC: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_2:
    // 0x803F3DB0: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x803F3DB4: nop

    // 0x803F3DB8: sb          $v0, 0x41($a2)
    MEM_B(0X41, ctx->r6) = ctx->r2;
L_803F3DBC:
    // 0x803F3DBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F3DC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F3DC4: jr          $ra
    // 0x803F3DC8: nop

    return;
    // 0x803F3DC8: nop

;}
RECOMP_FUNC void func_803F3DCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F3DCC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F3DD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F3DD4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803F3DD8: lb          $v0, 0x38($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X38);
    // 0x803F3DDC: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x803F3DE0: beq         $v0, $zero, L_803F3F48
    if (ctx->r2 == 0) {
        // 0x803F3DE4: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_803F3F48;
    }
    // 0x803F3DE4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x803F3DE8: beq         $v0, $v1, L_803F3E20
    if (ctx->r2 == ctx->r3) {
        // 0x803F3DEC: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_803F3E20;
    }
    // 0x803F3DEC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803F3DF0: beq         $v0, $at, L_803F3EC8
    if (ctx->r2 == ctx->r1) {
        // 0x803F3DF4: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_803F3EC8;
    }
    // 0x803F3DF4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x803F3DF8: bne         $v0, $at, L_803F3F4C
    if (ctx->r2 != ctx->r1) {
        // 0x803F3DFC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_803F3F4C;
    }
    // 0x803F3DFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F3E00: lb          $v0, 0x3B($a2)
    ctx->r2 = MEM_B(ctx->r6, 0X3B);
    // 0x803F3E04: nop

    // 0x803F3E08: beq         $v0, $zero, L_803F3F4C
    if (ctx->r2 == 0) {
        // 0x803F3E0C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_803F3F4C;
    }
    // 0x803F3E0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F3E10: beq         $v0, $v1, L_803F3F4C
    if (ctx->r2 == ctx->r3) {
        // 0x803F3E14: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_803F3F4C;
    }
    // 0x803F3E14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F3E18: b           L_803F3F4C
    // 0x803F3E1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F3F4C;
    // 0x803F3E1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F3E20:
    // 0x803F3E20: jal         0x80035734
    // 0x803F3E24: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_80035734(rdram, ctx);
        goto after_0;
    // 0x803F3E24: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x803F3E28: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x803F3E2C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x803F3E30: lb          $v0, 0x3A($a2)
    ctx->r2 = MEM_B(ctx->r6, 0X3A);
    // 0x803F3E34: nop

    // 0x803F3E38: beq         $v0, $zero, L_803F3E50
    if (ctx->r2 == 0) {
        // 0x803F3E3C: nop
    
            goto L_803F3E50;
    }
    // 0x803F3E3C: nop

    // 0x803F3E40: beq         $v0, $v1, L_803F3EAC
    if (ctx->r2 == ctx->r3) {
        // 0x803F3E44: nop
    
            goto L_803F3EAC;
    }
    // 0x803F3E44: nop

    // 0x803F3E48: b           L_803F3F4C
    // 0x803F3E4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F3F4C;
    // 0x803F3E4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F3E50:
    // 0x803F3E50: lb          $v1, 0x3D($a2)
    ctx->r3 = MEM_B(ctx->r6, 0X3D);
    // 0x803F3E54: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x803F3E58: beq         $v1, $zero, L_803F3E8C
    if (ctx->r3 == 0) {
        // 0x803F3E5C: addiu       $t7, $zero, 0x10
        ctx->r15 = ADD32(0, 0X10);
            goto L_803F3E8C;
    }
    // 0x803F3E5C: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x803F3E60: beq         $v1, $at, L_803F3E94
    if (ctx->r3 == ctx->r1) {
        // 0x803F3E64: addiu       $t8, $zero, 0x11
        ctx->r24 = ADD32(0, 0X11);
            goto L_803F3E94;
    }
    // 0x803F3E64: addiu       $t8, $zero, 0x11
    ctx->r24 = ADD32(0, 0X11);
    // 0x803F3E68: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x803F3E6C: beq         $v1, $at, L_803F3E9C
    if (ctx->r3 == ctx->r1) {
        // 0x803F3E70: addiu       $t9, $zero, 0xA
        ctx->r25 = ADD32(0, 0XA);
            goto L_803F3E9C;
    }
    // 0x803F3E70: addiu       $t9, $zero, 0xA
    ctx->r25 = ADD32(0, 0XA);
    // 0x803F3E74: addiu       $at, $zero, 0x11
    ctx->r1 = ADD32(0, 0X11);
    // 0x803F3E78: beq         $v1, $at, L_803F3EA4
    if (ctx->r3 == ctx->r1) {
        // 0x803F3E7C: addiu       $t0, $zero, 0xF
        ctx->r8 = ADD32(0, 0XF);
            goto L_803F3EA4;
    }
    // 0x803F3E7C: addiu       $t0, $zero, 0xF
    ctx->r8 = ADD32(0, 0XF);
    // 0x803F3E80: addiu       $t6, $v1, -0x1
    ctx->r14 = ADD32(ctx->r3, -0X1);
    // 0x803F3E84: b           L_803F3F48
    // 0x803F3E88: sb          $t6, 0x3D($a2)
    MEM_B(0X3D, ctx->r6) = ctx->r14;
        goto L_803F3F48;
    // 0x803F3E88: sb          $t6, 0x3D($a2)
    MEM_B(0X3D, ctx->r6) = ctx->r14;
L_803F3E8C:
    // 0x803F3E8C: b           L_803F3F48
    // 0x803F3E90: sb          $t7, 0x3D($a2)
    MEM_B(0X3D, ctx->r6) = ctx->r15;
        goto L_803F3F48;
    // 0x803F3E90: sb          $t7, 0x3D($a2)
    MEM_B(0X3D, ctx->r6) = ctx->r15;
L_803F3E94:
    // 0x803F3E94: b           L_803F3F48
    // 0x803F3E98: sb          $t8, 0x3D($a2)
    MEM_B(0X3D, ctx->r6) = ctx->r24;
        goto L_803F3F48;
    // 0x803F3E98: sb          $t8, 0x3D($a2)
    MEM_B(0X3D, ctx->r6) = ctx->r24;
L_803F3E9C:
    // 0x803F3E9C: b           L_803F3F48
    // 0x803F3EA0: sb          $t9, 0x3D($a2)
    MEM_B(0X3D, ctx->r6) = ctx->r25;
        goto L_803F3F48;
    // 0x803F3EA0: sb          $t9, 0x3D($a2)
    MEM_B(0X3D, ctx->r6) = ctx->r25;
L_803F3EA4:
    // 0x803F3EA4: b           L_803F3F48
    // 0x803F3EA8: sb          $t0, 0x3D($a2)
    MEM_B(0X3D, ctx->r6) = ctx->r8;
        goto L_803F3F48;
    // 0x803F3EA8: sb          $t0, 0x3D($a2)
    MEM_B(0X3D, ctx->r6) = ctx->r8;
L_803F3EAC:
    // 0x803F3EAC: lb          $a0, 0x3E($a2)
    ctx->r4 = MEM_B(ctx->r6, 0X3E);
    // 0x803F3EB0: lb          $a1, 0x3D($a2)
    ctx->r5 = MEM_B(ctx->r6, 0X3D);
    // 0x803F3EB4: jal         0x803F47E4
    // 0x803F3EB8: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_803F47E4(rdram, ctx);
        goto after_1;
    // 0x803F3EB8: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_1:
    // 0x803F3EBC: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x803F3EC0: b           L_803F3F48
    // 0x803F3EC4: sb          $v0, 0x3E($a2)
    MEM_B(0X3E, ctx->r6) = ctx->r2;
        goto L_803F3F48;
    // 0x803F3EC4: sb          $v0, 0x3E($a2)
    MEM_B(0X3E, ctx->r6) = ctx->r2;
L_803F3EC8:
    // 0x803F3EC8: lbu         $t1, 0x3C($a2)
    ctx->r9 = MEM_BU(ctx->r6, 0X3C);
    // 0x803F3ECC: nop

    // 0x803F3ED0: sltiu       $at, $t1, 0x5
    ctx->r1 = ctx->r9 < 0X5 ? 1 : 0;
    // 0x803F3ED4: beq         $at, $zero, L_803F3F48
    if (ctx->r1 == 0) {
        // 0x803F3ED8: sll         $t1, $t1, 2
        ctx->r9 = S32(ctx->r9 << 2);
            goto L_803F3F48;
    }
    // 0x803F3ED8: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x803F3EDC: lui         $at, 0x8040
    ctx->r1 = S32(0X8040 << 16);
    // 0x803F3EE0: addu        $at, $at, $t1
    gpr jr_addend_803F3EEC = ctx->r9;
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x803F3EE4: lw          $t1, -0x4790($at)
    ctx->r9 = ADD32(ctx->r1, -0X4790);
    // 0x803F3EE8: nop

    // 0x803F3EEC: jr          $t1
    // 0x803F3EF0: nop

    switch (jr_addend_803F3EEC >> 2) {
        case 0: goto L_803F3F48; break;
        case 1: goto L_803F3F48; break;
        case 2: goto L_803F3EF4; break;
        case 3: goto L_803F3F10; break;
        case 4: goto L_803F3F2C; break;
        default: switch_error(__func__, 0x803F3EEC, 0x803FB870);
    }
    // 0x803F3EF0: nop

L_803F3EF4:
    // 0x803F3EF4: lb          $a0, 0x3F($a2)
    ctx->r4 = MEM_B(ctx->r6, 0X3F);
    // 0x803F3EF8: lb          $a1, 0x4A($a2)
    ctx->r5 = MEM_B(ctx->r6, 0X4A);
    // 0x803F3EFC: jal         0x803F48A0
    // 0x803F3F00: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_803F48A0(rdram, ctx);
        goto after_2;
    // 0x803F3F00: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_2:
    // 0x803F3F04: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x803F3F08: b           L_803F3F48
    // 0x803F3F0C: sb          $v0, 0x3F($a2)
    MEM_B(0X3F, ctx->r6) = ctx->r2;
        goto L_803F3F48;
    // 0x803F3F0C: sb          $v0, 0x3F($a2)
    MEM_B(0X3F, ctx->r6) = ctx->r2;
L_803F3F10:
    // 0x803F3F10: lb          $a0, 0x40($a2)
    ctx->r4 = MEM_B(ctx->r6, 0X40);
    // 0x803F3F14: lb          $a1, 0x4B($a2)
    ctx->r5 = MEM_B(ctx->r6, 0X4B);
    // 0x803F3F18: jal         0x803F48A0
    // 0x803F3F1C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_803F48A0(rdram, ctx);
        goto after_3;
    // 0x803F3F1C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_3:
    // 0x803F3F20: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x803F3F24: b           L_803F3F48
    // 0x803F3F28: sb          $v0, 0x40($a2)
    MEM_B(0X40, ctx->r6) = ctx->r2;
        goto L_803F3F48;
    // 0x803F3F28: sb          $v0, 0x40($a2)
    MEM_B(0X40, ctx->r6) = ctx->r2;
L_803F3F2C:
    // 0x803F3F2C: lb          $a0, 0x41($a2)
    ctx->r4 = MEM_B(ctx->r6, 0X41);
    // 0x803F3F30: lb          $a1, 0x4C($a2)
    ctx->r5 = MEM_B(ctx->r6, 0X4C);
    // 0x803F3F34: jal         0x803F48A0
    // 0x803F3F38: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_803F48A0(rdram, ctx);
        goto after_4;
    // 0x803F3F38: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_4:
    // 0x803F3F3C: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x803F3F40: nop

    // 0x803F3F44: sb          $v0, 0x41($a2)
    MEM_B(0X41, ctx->r6) = ctx->r2;
L_803F3F48:
    // 0x803F3F48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F3F4C:
    // 0x803F3F4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F3F50: jr          $ra
    // 0x803F3F54: nop

    return;
    // 0x803F3F54: nop

;}
RECOMP_FUNC void func_803F3E54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F3E54: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x803F3E58: beq         $v1, $zero, L_803F3E8C
    if (ctx->r3 == 0) {
        // 0x803F3E5C: addiu       $t7, $zero, 0x10
        ctx->r15 = ADD32(0, 0X10);
            goto L_803F3E8C;
    }
    // 0x803F3E5C: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x803F3E60: beq         $v1, $at, L_803F3E94
    if (ctx->r3 == ctx->r1) {
        // 0x803F3E64: addiu       $t8, $zero, 0x11
        ctx->r24 = ADD32(0, 0X11);
            goto L_803F3E94;
    }
    // 0x803F3E64: addiu       $t8, $zero, 0x11
    ctx->r24 = ADD32(0, 0X11);
    // 0x803F3E68: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x803F3E6C: beq         $v1, $at, L_803F3E9C
    if (ctx->r3 == ctx->r1) {
        // 0x803F3E70: addiu       $t9, $zero, 0xA
        ctx->r25 = ADD32(0, 0XA);
            goto L_803F3E9C;
    }
    // 0x803F3E70: addiu       $t9, $zero, 0xA
    ctx->r25 = ADD32(0, 0XA);
    // 0x803F3E74: addiu       $at, $zero, 0x11
    ctx->r1 = ADD32(0, 0X11);
    // 0x803F3E78: beq         $v1, $at, L_803F3EA4
    if (ctx->r3 == ctx->r1) {
        // 0x803F3E7C: addiu       $t0, $zero, 0xF
        ctx->r8 = ADD32(0, 0XF);
            goto L_803F3EA4;
    }
    // 0x803F3E7C: addiu       $t0, $zero, 0xF
    ctx->r8 = ADD32(0, 0XF);
    // 0x803F3E80: addiu       $t6, $v1, -0x1
    ctx->r14 = ADD32(ctx->r3, -0X1);
    // 0x803F3E84: b           L_803F3F48
    // 0x803F3E88: sb          $t6, 0x3D($a2)
    MEM_B(0X3D, ctx->r6) = ctx->r14;
        goto L_803F3F48;
    // 0x803F3E88: sb          $t6, 0x3D($a2)
    MEM_B(0X3D, ctx->r6) = ctx->r14;
L_803F3E8C:
    // 0x803F3E8C: b           L_803F3F48
    // 0x803F3E90: sb          $t7, 0x3D($a2)
    MEM_B(0X3D, ctx->r6) = ctx->r15;
        goto L_803F3F48;
    // 0x803F3E90: sb          $t7, 0x3D($a2)
    MEM_B(0X3D, ctx->r6) = ctx->r15;
L_803F3E94:
    // 0x803F3E94: b           L_803F3F48
    // 0x803F3E98: sb          $t8, 0x3D($a2)
    MEM_B(0X3D, ctx->r6) = ctx->r24;
        goto L_803F3F48;
    // 0x803F3E98: sb          $t8, 0x3D($a2)
    MEM_B(0X3D, ctx->r6) = ctx->r24;
L_803F3E9C:
    // 0x803F3E9C: b           L_803F3F48
    // 0x803F3EA0: sb          $t9, 0x3D($a2)
    MEM_B(0X3D, ctx->r6) = ctx->r25;
        goto L_803F3F48;
    // 0x803F3EA0: sb          $t9, 0x3D($a2)
    MEM_B(0X3D, ctx->r6) = ctx->r25;
L_803F3EA4:
    // 0x803F3EA4: b           L_803F3F48
    // 0x803F3EA8: sb          $t0, 0x3D($a2)
    MEM_B(0X3D, ctx->r6) = ctx->r8;
        goto L_803F3F48;
    // 0x803F3EA8: sb          $t0, 0x3D($a2)
    MEM_B(0X3D, ctx->r6) = ctx->r8;
    // 0x803F3EAC: lb          $a0, 0x3E($a2)
    ctx->r4 = MEM_B(ctx->r6, 0X3E);
    // 0x803F3EB0: lb          $a1, 0x3D($a2)
    ctx->r5 = MEM_B(ctx->r6, 0X3D);
    // 0x803F3EB4: jal         0x803F47E4
    // 0x803F3EB8: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_803F47E4(rdram, ctx);
        goto after_0;
    // 0x803F3EB8: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x803F3EBC: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x803F3EC0: b           L_803F3F48
    // 0x803F3EC4: sb          $v0, 0x3E($a2)
    MEM_B(0X3E, ctx->r6) = ctx->r2;
        goto L_803F3F48;
    // 0x803F3EC4: sb          $v0, 0x3E($a2)
    MEM_B(0X3E, ctx->r6) = ctx->r2;
    // 0x803F3EC8: lbu         $t1, 0x3C($a2)
    ctx->r9 = MEM_BU(ctx->r6, 0X3C);
    // 0x803F3ECC: nop

    // 0x803F3ED0: sltiu       $at, $t1, 0x5
    ctx->r1 = ctx->r9 < 0X5 ? 1 : 0;
    // 0x803F3ED4: beq         $at, $zero, L_803F3F48
    if (ctx->r1 == 0) {
        // 0x803F3ED8: sll         $t1, $t1, 2
        ctx->r9 = S32(ctx->r9 << 2);
            goto L_803F3F48;
    }
    // 0x803F3ED8: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x803F3EDC: lui         $at, 0x8040
    ctx->r1 = S32(0X8040 << 16);
    // 0x803F3EE0: addu        $at, $at, $t1
    gpr jr_addend_803F3EEC = ctx->r9;
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x803F3EE4: lw          $t1, -0x4790($at)
    ctx->r9 = ADD32(ctx->r1, -0X4790);
    // 0x803F3EE8: nop

    // 0x803F3EEC: jr          $t1
    // 0x803F3EF0: nop

    switch (jr_addend_803F3EEC >> 2) {
        case 0: goto L_803F3F48; break;
        case 1: goto L_803F3F48; break;
        case 2: goto L_803F3EF4; break;
        case 3: goto L_803F3F10; break;
        case 4: goto L_803F3F2C; break;
        default: switch_error(__func__, 0x803F3EEC, 0x803FB870);
    }
    // 0x803F3EF0: nop

L_803F3EF4:
    // 0x803F3EF4: lb          $a0, 0x3F($a2)
    ctx->r4 = MEM_B(ctx->r6, 0X3F);
    // 0x803F3EF8: lb          $a1, 0x4A($a2)
    ctx->r5 = MEM_B(ctx->r6, 0X4A);
    // 0x803F3EFC: jal         0x803F48A0
    // 0x803F3F00: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_803F48A0(rdram, ctx);
        goto after_1;
    // 0x803F3F00: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_1:
    // 0x803F3F04: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x803F3F08: b           L_803F3F48
    // 0x803F3F0C: sb          $v0, 0x3F($a2)
    MEM_B(0X3F, ctx->r6) = ctx->r2;
        goto L_803F3F48;
    // 0x803F3F0C: sb          $v0, 0x3F($a2)
    MEM_B(0X3F, ctx->r6) = ctx->r2;
L_803F3F10:
    // 0x803F3F10: lb          $a0, 0x40($a2)
    ctx->r4 = MEM_B(ctx->r6, 0X40);
    // 0x803F3F14: lb          $a1, 0x4B($a2)
    ctx->r5 = MEM_B(ctx->r6, 0X4B);
    // 0x803F3F18: jal         0x803F48A0
    // 0x803F3F1C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_803F48A0(rdram, ctx);
        goto after_2;
    // 0x803F3F1C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_2:
    // 0x803F3F20: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x803F3F24: b           L_803F3F48
    // 0x803F3F28: sb          $v0, 0x40($a2)
    MEM_B(0X40, ctx->r6) = ctx->r2;
        goto L_803F3F48;
    // 0x803F3F28: sb          $v0, 0x40($a2)
    MEM_B(0X40, ctx->r6) = ctx->r2;
L_803F3F2C:
    // 0x803F3F2C: lb          $a0, 0x41($a2)
    ctx->r4 = MEM_B(ctx->r6, 0X41);
    // 0x803F3F30: lb          $a1, 0x4C($a2)
    ctx->r5 = MEM_B(ctx->r6, 0X4C);
    // 0x803F3F34: jal         0x803F48A0
    // 0x803F3F38: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_803F48A0(rdram, ctx);
        goto after_3;
    // 0x803F3F38: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_3:
    // 0x803F3F3C: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x803F3F40: nop

    // 0x803F3F44: sb          $v0, 0x41($a2)
    MEM_B(0X41, ctx->r6) = ctx->r2;
L_803F3F48:
    // 0x803F3F48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F3F4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F3F50: jr          $ra
    // 0x803F3F54: nop

    return;
    // 0x803F3F54: nop

;}
RECOMP_FUNC void func_803F3EE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F3EE8: nop

    // 0x803F3EEC: jr          $t1
    // 0x803F3EF0: nop

    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x803F3EF0: nop

    // 0x803F3EF4: lb          $a0, 0x3F($a2)
    ctx->r4 = MEM_B(ctx->r6, 0X3F);
    // 0x803F3EF8: lb          $a1, 0x4A($a2)
    ctx->r5 = MEM_B(ctx->r6, 0X4A);
    // 0x803F3EFC: jal         0x803F48A0
    // 0x803F3F00: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_803F48A0(rdram, ctx);
        goto after_0;
    // 0x803F3F00: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x803F3F04: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x803F3F08: b           L_803F3F48
    // 0x803F3F0C: sb          $v0, 0x3F($a2)
    MEM_B(0X3F, ctx->r6) = ctx->r2;
        goto L_803F3F48;
    // 0x803F3F0C: sb          $v0, 0x3F($a2)
    MEM_B(0X3F, ctx->r6) = ctx->r2;
    // 0x803F3F10: lb          $a0, 0x40($a2)
    ctx->r4 = MEM_B(ctx->r6, 0X40);
    // 0x803F3F14: lb          $a1, 0x4B($a2)
    ctx->r5 = MEM_B(ctx->r6, 0X4B);
    // 0x803F3F18: jal         0x803F48A0
    // 0x803F3F1C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_803F48A0(rdram, ctx);
        goto after_1;
    // 0x803F3F1C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_1:
    // 0x803F3F20: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x803F3F24: b           L_803F3F48
    // 0x803F3F28: sb          $v0, 0x40($a2)
    MEM_B(0X40, ctx->r6) = ctx->r2;
        goto L_803F3F48;
    // 0x803F3F28: sb          $v0, 0x40($a2)
    MEM_B(0X40, ctx->r6) = ctx->r2;
    // 0x803F3F2C: lb          $a0, 0x41($a2)
    ctx->r4 = MEM_B(ctx->r6, 0X41);
    // 0x803F3F30: lb          $a1, 0x4C($a2)
    ctx->r5 = MEM_B(ctx->r6, 0X4C);
    // 0x803F3F34: jal         0x803F48A0
    // 0x803F3F38: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_803F48A0(rdram, ctx);
        goto after_2;
    // 0x803F3F38: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_2:
    // 0x803F3F3C: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x803F3F40: nop

    // 0x803F3F44: sb          $v0, 0x41($a2)
    MEM_B(0X41, ctx->r6) = ctx->r2;
L_803F3F48:
    // 0x803F3F48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F3F4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F3F50: jr          $ra
    // 0x803F3F54: nop

    return;
    // 0x803F3F54: nop

;}
RECOMP_FUNC void func_803F3F58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F3F58: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F3F5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F3F60: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803F3F64: lb          $v0, 0x38($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X38);
    // 0x803F3F68: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x803F3F6C: beq         $v0, $zero, L_803F40D4
    if (ctx->r2 == 0) {
        // 0x803F3F70: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_803F40D4;
    }
    // 0x803F3F70: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x803F3F74: beq         $v0, $v1, L_803F3FAC
    if (ctx->r2 == ctx->r3) {
        // 0x803F3F78: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_803F3FAC;
    }
    // 0x803F3F78: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803F3F7C: beq         $v0, $at, L_803F4054
    if (ctx->r2 == ctx->r1) {
        // 0x803F3F80: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_803F4054;
    }
    // 0x803F3F80: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x803F3F84: bne         $v0, $at, L_803F40D8
    if (ctx->r2 != ctx->r1) {
        // 0x803F3F88: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_803F40D8;
    }
    // 0x803F3F88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F3F8C: lb          $v0, 0x3B($a2)
    ctx->r2 = MEM_B(ctx->r6, 0X3B);
    // 0x803F3F90: nop

    // 0x803F3F94: beq         $v0, $zero, L_803F40D8
    if (ctx->r2 == 0) {
        // 0x803F3F98: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_803F40D8;
    }
    // 0x803F3F98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F3F9C: beq         $v0, $v1, L_803F40D8
    if (ctx->r2 == ctx->r3) {
        // 0x803F3FA0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_803F40D8;
    }
    // 0x803F3FA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F3FA4: b           L_803F40D8
    // 0x803F3FA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F40D8;
    // 0x803F3FA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F3FAC:
    // 0x803F3FAC: jal         0x80035734
    // 0x803F3FB0: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_80035734(rdram, ctx);
        goto after_0;
    // 0x803F3FB0: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x803F3FB4: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x803F3FB8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x803F3FBC: lb          $v0, 0x3A($a2)
    ctx->r2 = MEM_B(ctx->r6, 0X3A);
    // 0x803F3FC0: nop

    // 0x803F3FC4: beq         $v0, $zero, L_803F3FDC
    if (ctx->r2 == 0) {
        // 0x803F3FC8: nop
    
            goto L_803F3FDC;
    }
    // 0x803F3FC8: nop

    // 0x803F3FCC: beq         $v0, $v1, L_803F4038
    if (ctx->r2 == ctx->r3) {
        // 0x803F3FD0: nop
    
            goto L_803F4038;
    }
    // 0x803F3FD0: nop

    // 0x803F3FD4: b           L_803F40D8
    // 0x803F3FD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F40D8;
    // 0x803F3FD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F3FDC:
    // 0x803F3FDC: lb          $v1, 0x3D($a2)
    ctx->r3 = MEM_B(ctx->r6, 0X3D);
    // 0x803F3FE0: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x803F3FE4: beq         $v1, $at, L_803F4018
    if (ctx->r3 == ctx->r1) {
        // 0x803F3FE8: addiu       $t7, $zero, 0x10
        ctx->r15 = ADD32(0, 0X10);
            goto L_803F4018;
    }
    // 0x803F3FE8: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x803F3FEC: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x803F3FF0: beq         $v1, $at, L_803F4020
    if (ctx->r3 == ctx->r1) {
        // 0x803F3FF4: addiu       $t8, $zero, 0x11
        ctx->r24 = ADD32(0, 0X11);
            goto L_803F4020;
    }
    // 0x803F3FF4: addiu       $t8, $zero, 0x11
    ctx->r24 = ADD32(0, 0X11);
    // 0x803F3FF8: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x803F3FFC: beq         $v1, $at, L_803F4028
    if (ctx->r3 == ctx->r1) {
        // 0x803F4000: addiu       $at, $zero, 0x11
        ctx->r1 = ADD32(0, 0X11);
            goto L_803F4028;
    }
    // 0x803F4000: addiu       $at, $zero, 0x11
    ctx->r1 = ADD32(0, 0X11);
    // 0x803F4004: beq         $v1, $at, L_803F4030
    if (ctx->r3 == ctx->r1) {
        // 0x803F4008: addiu       $t9, $zero, 0xB
        ctx->r25 = ADD32(0, 0XB);
            goto L_803F4030;
    }
    // 0x803F4008: addiu       $t9, $zero, 0xB
    ctx->r25 = ADD32(0, 0XB);
    // 0x803F400C: addiu       $t6, $v1, 0x1
    ctx->r14 = ADD32(ctx->r3, 0X1);
    // 0x803F4010: b           L_803F40D4
    // 0x803F4014: sb          $t6, 0x3D($a2)
    MEM_B(0X3D, ctx->r6) = ctx->r14;
        goto L_803F40D4;
    // 0x803F4014: sb          $t6, 0x3D($a2)
    MEM_B(0X3D, ctx->r6) = ctx->r14;
L_803F4018:
    // 0x803F4018: b           L_803F40D4
    // 0x803F401C: sb          $t7, 0x3D($a2)
    MEM_B(0X3D, ctx->r6) = ctx->r15;
        goto L_803F40D4;
    // 0x803F401C: sb          $t7, 0x3D($a2)
    MEM_B(0X3D, ctx->r6) = ctx->r15;
L_803F4020:
    // 0x803F4020: b           L_803F40D4
    // 0x803F4024: sb          $t8, 0x3D($a2)
    MEM_B(0X3D, ctx->r6) = ctx->r24;
        goto L_803F40D4;
    // 0x803F4024: sb          $t8, 0x3D($a2)
    MEM_B(0X3D, ctx->r6) = ctx->r24;
L_803F4028:
    // 0x803F4028: b           L_803F40D4
    // 0x803F402C: sb          $zero, 0x3D($a2)
    MEM_B(0X3D, ctx->r6) = 0;
        goto L_803F40D4;
    // 0x803F402C: sb          $zero, 0x3D($a2)
    MEM_B(0X3D, ctx->r6) = 0;
L_803F4030:
    // 0x803F4030: b           L_803F40D4
    // 0x803F4034: sb          $t9, 0x3D($a2)
    MEM_B(0X3D, ctx->r6) = ctx->r25;
        goto L_803F40D4;
    // 0x803F4034: sb          $t9, 0x3D($a2)
    MEM_B(0X3D, ctx->r6) = ctx->r25;
L_803F4038:
    // 0x803F4038: lb          $a0, 0x3E($a2)
    ctx->r4 = MEM_B(ctx->r6, 0X3E);
    // 0x803F403C: lb          $a1, 0x3D($a2)
    ctx->r5 = MEM_B(ctx->r6, 0X3D);
    // 0x803F4040: jal         0x803F4840
    // 0x803F4044: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_803F4840(rdram, ctx);
        goto after_1;
    // 0x803F4044: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_1:
    // 0x803F4048: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x803F404C: b           L_803F40D4
    // 0x803F4050: sb          $v0, 0x3E($a2)
    MEM_B(0X3E, ctx->r6) = ctx->r2;
        goto L_803F40D4;
    // 0x803F4050: sb          $v0, 0x3E($a2)
    MEM_B(0X3E, ctx->r6) = ctx->r2;
L_803F4054:
    // 0x803F4054: lbu         $t0, 0x3C($a2)
    ctx->r8 = MEM_BU(ctx->r6, 0X3C);
    // 0x803F4058: nop

    // 0x803F405C: sltiu       $at, $t0, 0x5
    ctx->r1 = ctx->r8 < 0X5 ? 1 : 0;
    // 0x803F4060: beq         $at, $zero, L_803F40D4
    if (ctx->r1 == 0) {
        // 0x803F4064: sll         $t0, $t0, 2
        ctx->r8 = S32(ctx->r8 << 2);
            goto L_803F40D4;
    }
    // 0x803F4064: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x803F4068: lui         $at, 0x8040
    ctx->r1 = S32(0X8040 << 16);
    // 0x803F406C: addu        $at, $at, $t0
    gpr jr_addend_803F4078 = ctx->r8;
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x803F4070: lw          $t0, -0x477C($at)
    ctx->r8 = ADD32(ctx->r1, -0X477C);
    // 0x803F4074: nop

    // 0x803F4078: jr          $t0
    // 0x803F407C: nop

    switch (jr_addend_803F4078 >> 2) {
        case 0: goto L_803F40D4; break;
        case 1: goto L_803F40D4; break;
        case 2: goto L_803F4080; break;
        case 3: goto L_803F409C; break;
        case 4: goto L_803F40B8; break;
        default: switch_error(__func__, 0x803F4078, 0x803FB884);
    }
    // 0x803F407C: nop

L_803F4080:
    // 0x803F4080: lb          $a0, 0x3F($a2)
    ctx->r4 = MEM_B(ctx->r6, 0X3F);
    // 0x803F4084: lb          $a1, 0x4A($a2)
    ctx->r5 = MEM_B(ctx->r6, 0X4A);
    // 0x803F4088: jal         0x803F4928
    // 0x803F408C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_803F4928(rdram, ctx);
        goto after_2;
    // 0x803F408C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_2:
    // 0x803F4090: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x803F4094: b           L_803F40D4
    // 0x803F4098: sb          $v0, 0x3F($a2)
    MEM_B(0X3F, ctx->r6) = ctx->r2;
        goto L_803F40D4;
    // 0x803F4098: sb          $v0, 0x3F($a2)
    MEM_B(0X3F, ctx->r6) = ctx->r2;
L_803F409C:
    // 0x803F409C: lb          $a0, 0x40($a2)
    ctx->r4 = MEM_B(ctx->r6, 0X40);
    // 0x803F40A0: lb          $a1, 0x4B($a2)
    ctx->r5 = MEM_B(ctx->r6, 0X4B);
    // 0x803F40A4: jal         0x803F4928
    // 0x803F40A8: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_803F4928(rdram, ctx);
        goto after_3;
    // 0x803F40A8: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_3:
    // 0x803F40AC: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x803F40B0: b           L_803F40D4
    // 0x803F40B4: sb          $v0, 0x40($a2)
    MEM_B(0X40, ctx->r6) = ctx->r2;
        goto L_803F40D4;
    // 0x803F40B4: sb          $v0, 0x40($a2)
    MEM_B(0X40, ctx->r6) = ctx->r2;
L_803F40B8:
    // 0x803F40B8: lb          $a0, 0x41($a2)
    ctx->r4 = MEM_B(ctx->r6, 0X41);
    // 0x803F40BC: lb          $a1, 0x4C($a2)
    ctx->r5 = MEM_B(ctx->r6, 0X4C);
    // 0x803F40C0: jal         0x803F4928
    // 0x803F40C4: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_803F4928(rdram, ctx);
        goto after_4;
    // 0x803F40C4: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_4:
    // 0x803F40C8: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x803F40CC: nop

    // 0x803F40D0: sb          $v0, 0x41($a2)
    MEM_B(0X41, ctx->r6) = ctx->r2;
L_803F40D4:
    // 0x803F40D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F40D8:
    // 0x803F40D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F40DC: jr          $ra
    // 0x803F40E0: nop

    return;
    // 0x803F40E0: nop

;}
RECOMP_FUNC void func_803F401C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F401C: sb          $t7, 0x3D($a2)
    MEM_B(0X3D, ctx->r6) = ctx->r15;
    // 0x803F4020: b           L_803F40D4
    // 0x803F4024: sb          $t8, 0x3D($a2)
    MEM_B(0X3D, ctx->r6) = ctx->r24;
        goto L_803F40D4;
    // 0x803F4024: sb          $t8, 0x3D($a2)
    MEM_B(0X3D, ctx->r6) = ctx->r24;
    // 0x803F4028: b           L_803F40D4
    // 0x803F402C: sb          $zero, 0x3D($a2)
    MEM_B(0X3D, ctx->r6) = 0;
        goto L_803F40D4;
    // 0x803F402C: sb          $zero, 0x3D($a2)
    MEM_B(0X3D, ctx->r6) = 0;
    // 0x803F4030: b           L_803F40D4
    // 0x803F4034: sb          $t9, 0x3D($a2)
    MEM_B(0X3D, ctx->r6) = ctx->r25;
        goto L_803F40D4;
    // 0x803F4034: sb          $t9, 0x3D($a2)
    MEM_B(0X3D, ctx->r6) = ctx->r25;
    // 0x803F4038: lb          $a0, 0x3E($a2)
    ctx->r4 = MEM_B(ctx->r6, 0X3E);
    // 0x803F403C: lb          $a1, 0x3D($a2)
    ctx->r5 = MEM_B(ctx->r6, 0X3D);
    // 0x803F4040: jal         0x803F4840
    // 0x803F4044: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_803F4840(rdram, ctx);
        goto after_0;
    // 0x803F4044: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x803F4048: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x803F404C: b           L_803F40D4
    // 0x803F4050: sb          $v0, 0x3E($a2)
    MEM_B(0X3E, ctx->r6) = ctx->r2;
        goto L_803F40D4;
    // 0x803F4050: sb          $v0, 0x3E($a2)
    MEM_B(0X3E, ctx->r6) = ctx->r2;
    // 0x803F4054: lbu         $t0, 0x3C($a2)
    ctx->r8 = MEM_BU(ctx->r6, 0X3C);
    // 0x803F4058: nop

    // 0x803F405C: sltiu       $at, $t0, 0x5
    ctx->r1 = ctx->r8 < 0X5 ? 1 : 0;
    // 0x803F4060: beq         $at, $zero, L_803F40D4
    if (ctx->r1 == 0) {
        // 0x803F4064: sll         $t0, $t0, 2
        ctx->r8 = S32(ctx->r8 << 2);
            goto L_803F40D4;
    }
    // 0x803F4064: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x803F4068: lui         $at, 0x8040
    ctx->r1 = S32(0X8040 << 16);
    // 0x803F406C: addu        $at, $at, $t0
    gpr jr_addend_803F4078 = ctx->r8;
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x803F4070: lw          $t0, -0x477C($at)
    ctx->r8 = ADD32(ctx->r1, -0X477C);
    // 0x803F4074: nop

    // 0x803F4078: jr          $t0
    // 0x803F407C: nop

    switch (jr_addend_803F4078 >> 2) {
        case 0: goto L_803F40D4; break;
        case 1: goto L_803F40D4; break;
        case 2: goto L_803F4080; break;
        case 3: goto L_803F409C; break;
        case 4: goto L_803F40B8; break;
        default: switch_error(__func__, 0x803F4078, 0x803FB884);
    }
    // 0x803F407C: nop

L_803F4080:
    // 0x803F4080: lb          $a0, 0x3F($a2)
    ctx->r4 = MEM_B(ctx->r6, 0X3F);
    // 0x803F4084: lb          $a1, 0x4A($a2)
    ctx->r5 = MEM_B(ctx->r6, 0X4A);
    // 0x803F4088: jal         0x803F4928
    // 0x803F408C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_803F4928(rdram, ctx);
        goto after_1;
    // 0x803F408C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_1:
    // 0x803F4090: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x803F4094: b           L_803F40D4
    // 0x803F4098: sb          $v0, 0x3F($a2)
    MEM_B(0X3F, ctx->r6) = ctx->r2;
        goto L_803F40D4;
    // 0x803F4098: sb          $v0, 0x3F($a2)
    MEM_B(0X3F, ctx->r6) = ctx->r2;
L_803F409C:
    // 0x803F409C: lb          $a0, 0x40($a2)
    ctx->r4 = MEM_B(ctx->r6, 0X40);
    // 0x803F40A0: lb          $a1, 0x4B($a2)
    ctx->r5 = MEM_B(ctx->r6, 0X4B);
    // 0x803F40A4: jal         0x803F4928
    // 0x803F40A8: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_803F4928(rdram, ctx);
        goto after_2;
    // 0x803F40A8: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_2:
    // 0x803F40AC: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x803F40B0: b           L_803F40D4
    // 0x803F40B4: sb          $v0, 0x40($a2)
    MEM_B(0X40, ctx->r6) = ctx->r2;
        goto L_803F40D4;
    // 0x803F40B4: sb          $v0, 0x40($a2)
    MEM_B(0X40, ctx->r6) = ctx->r2;
L_803F40B8:
    // 0x803F40B8: lb          $a0, 0x41($a2)
    ctx->r4 = MEM_B(ctx->r6, 0X41);
    // 0x803F40BC: lb          $a1, 0x4C($a2)
    ctx->r5 = MEM_B(ctx->r6, 0X4C);
    // 0x803F40C0: jal         0x803F4928
    // 0x803F40C4: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_803F4928(rdram, ctx);
        goto after_3;
    // 0x803F40C4: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_3:
    // 0x803F40C8: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x803F40CC: nop

    // 0x803F40D0: sb          $v0, 0x41($a2)
    MEM_B(0X41, ctx->r6) = ctx->r2;
L_803F40D4:
    // 0x803F40D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F40D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F40DC: jr          $ra
    // 0x803F40E0: nop

    return;
    // 0x803F40E0: nop

;}
RECOMP_FUNC void func_803F40C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F40C4: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x803F40C8: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x803F40CC: nop

    // 0x803F40D0: sb          $v0, 0x41($a2)
    MEM_B(0X41, ctx->r6) = ctx->r2;
    // 0x803F40D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F40D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F40DC: jr          $ra
    // 0x803F40E0: nop

    return;
    // 0x803F40E0: nop

;}
RECOMP_FUNC void func_803F40E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F40E4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803F40E8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803F40EC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803F40F0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x803F40F4: lb          $v0, 0x38($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X38);
    // 0x803F40F8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x803F40FC: beq         $v0, $zero, L_803F4124
    if (ctx->r2 == 0) {
        // 0x803F4100: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_803F4124;
    }
    // 0x803F4100: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x803F4104: beq         $v0, $v1, L_803F4244
    if (ctx->r2 == ctx->r3) {
        // 0x803F4108: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_803F4244;
    }
    // 0x803F4108: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803F410C: beq         $v0, $at, L_803F4184
    if (ctx->r2 == ctx->r1) {
        // 0x803F4110: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_803F4184;
    }
    // 0x803F4110: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x803F4114: beq         $v0, $at, L_803F413C
    if (ctx->r2 == ctx->r1) {
        // 0x803F4118: nop
    
            goto L_803F413C;
    }
    // 0x803F4118: nop

    // 0x803F411C: b           L_803F4248
    // 0x803F4120: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_803F4248;
    // 0x803F4120: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803F4124:
    // 0x803F4124: lb          $a0, 0x39($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X39);
    // 0x803F4128: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    // 0x803F412C: jal         0x8004C0D4
    // 0x803F4130: addiu       $a1, $a1, -0x4DC4
    ctx->r5 = ADD32(ctx->r5, -0X4DC4);
    func_8004C0D4(rdram, ctx);
        goto after_0;
    // 0x803F4130: addiu       $a1, $a1, -0x4DC4
    ctx->r5 = ADD32(ctx->r5, -0X4DC4);
    after_0:
    // 0x803F4134: b           L_803F4244
    // 0x803F4138: sb          $v0, 0x39($s0)
    MEM_B(0X39, ctx->r16) = ctx->r2;
        goto L_803F4244;
    // 0x803F4138: sb          $v0, 0x39($s0)
    MEM_B(0X39, ctx->r16) = ctx->r2;
L_803F413C:
    // 0x803F413C: lb          $v0, 0x3B($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X3B);
    // 0x803F4140: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    // 0x803F4144: beq         $v0, $zero, L_803F415C
    if (ctx->r2 == 0) {
        // 0x803F4148: nop
    
            goto L_803F415C;
    }
    // 0x803F4148: nop

    // 0x803F414C: beq         $v0, $v1, L_803F4170
    if (ctx->r2 == ctx->r3) {
        // 0x803F4150: lui         $a1, 0x8040
        ctx->r5 = S32(0X8040 << 16);
            goto L_803F4170;
    }
    // 0x803F4150: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    // 0x803F4154: b           L_803F4248
    // 0x803F4158: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_803F4248;
    // 0x803F4158: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803F415C:
    // 0x803F415C: lb          $a0, 0x42($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X42);
    // 0x803F4160: jal         0x8004C0D4
    // 0x803F4164: addiu       $a1, $a1, -0x4DB0
    ctx->r5 = ADD32(ctx->r5, -0X4DB0);
    func_8004C0D4(rdram, ctx);
        goto after_1;
    // 0x803F4164: addiu       $a1, $a1, -0x4DB0
    ctx->r5 = ADD32(ctx->r5, -0X4DB0);
    after_1:
    // 0x803F4168: b           L_803F4244
    // 0x803F416C: sb          $v0, 0x42($s0)
    MEM_B(0X42, ctx->r16) = ctx->r2;
        goto L_803F4244;
    // 0x803F416C: sb          $v0, 0x42($s0)
    MEM_B(0X42, ctx->r16) = ctx->r2;
L_803F4170:
    // 0x803F4170: lb          $a0, 0x43($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X43);
    // 0x803F4174: jal         0x8004C0D4
    // 0x803F4178: addiu       $a1, $a1, -0x4DA4
    ctx->r5 = ADD32(ctx->r5, -0X4DA4);
    func_8004C0D4(rdram, ctx);
        goto after_2;
    // 0x803F4178: addiu       $a1, $a1, -0x4DA4
    ctx->r5 = ADD32(ctx->r5, -0X4DA4);
    after_2:
    // 0x803F417C: b           L_803F4244
    // 0x803F4180: sb          $v0, 0x43($s0)
    MEM_B(0X43, ctx->r16) = ctx->r2;
        goto L_803F4244;
    // 0x803F4180: sb          $v0, 0x43($s0)
    MEM_B(0X43, ctx->r16) = ctx->r2;
L_803F4184:
    // 0x803F4184: lb          $v0, 0x3C($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X3C);
    // 0x803F4188: sb          $v1, 0x4D($s0)
    MEM_B(0X4D, ctx->r16) = ctx->r3;
    // 0x803F418C: beq         $v0, $zero, L_803F41A8
    if (ctx->r2 == 0) {
        // 0x803F4190: sltiu       $at, $v0, 0x5
        ctx->r1 = ctx->r2 < 0X5 ? 1 : 0;
            goto L_803F41A8;
    }
    // 0x803F4190: sltiu       $at, $v0, 0x5
    ctx->r1 = ctx->r2 < 0X5 ? 1 : 0;
    // 0x803F4194: jal         0x80035734
    // 0x803F4198: nop

    func_80035734(rdram, ctx);
        goto after_3;
    // 0x803F4198: nop

    after_3:
    // 0x803F419C: lb          $v0, 0x3C($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X3C);
    // 0x803F41A0: nop

    // 0x803F41A4: sltiu       $at, $v0, 0x5
    ctx->r1 = ctx->r2 < 0X5 ? 1 : 0;
L_803F41A8:
    // 0x803F41A8: beq         $at, $zero, L_803F4244
    if (ctx->r1 == 0) {
        // 0x803F41AC: sll         $t6, $v0, 2
        ctx->r14 = S32(ctx->r2 << 2);
            goto L_803F4244;
    }
    // 0x803F41AC: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x803F41B0: lui         $at, 0x8040
    ctx->r1 = S32(0X8040 << 16);
    // 0x803F41B4: addu        $at, $at, $t6
    gpr jr_addend_803F41C0 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x803F41B8: lw          $t6, -0x4768($at)
    ctx->r14 = ADD32(ctx->r1, -0X4768);
    // 0x803F41BC: nop

    // 0x803F41C0: jr          $t6
    // 0x803F41C4: nop

    switch (jr_addend_803F41C0 >> 2) {
        case 0: goto L_803F4244; break;
        case 1: goto L_803F41C8; break;
        case 2: goto L_803F41D0; break;
        case 3: goto L_803F41F8; break;
        case 4: goto L_803F4220; break;
        default: switch_error(__func__, 0x803F41C0, 0x803FB898);
    }
    // 0x803F41C4: nop

L_803F41C8:
    // 0x803F41C8: b           L_803F4244
    // 0x803F41CC: sb          $zero, 0x3C($s0)
    MEM_B(0X3C, ctx->r16) = 0;
        goto L_803F4244;
    // 0x803F41CC: sb          $zero, 0x3C($s0)
    MEM_B(0X3C, ctx->r16) = 0;
L_803F41D0:
    // 0x803F41D0: lb          $a0, 0x3F($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X3F);
    // 0x803F41D4: jal         0x8006DED4
    // 0x803F41D8: nop

    func_8006DED4(rdram, ctx);
        goto after_4;
    // 0x803F41D8: nop

    after_4:
    // 0x803F41DC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x803F41E0: bne         $v1, $v0, L_803F4244
    if (ctx->r3 != ctx->r2) {
        // 0x803F41E4: addiu       $t7, $zero, 0x4
        ctx->r15 = ADD32(0, 0X4);
            goto L_803F4244;
    }
    // 0x803F41E4: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x803F41E8: lb          $t8, 0x3F($s0)
    ctx->r24 = MEM_B(ctx->r16, 0X3F);
    // 0x803F41EC: sb          $t7, 0x3C($s0)
    MEM_B(0X3C, ctx->r16) = ctx->r15;
    // 0x803F41F0: b           L_803F4244
    // 0x803F41F4: sb          $t8, 0x4A($s0)
    MEM_B(0X4A, ctx->r16) = ctx->r24;
        goto L_803F4244;
    // 0x803F41F4: sb          $t8, 0x4A($s0)
    MEM_B(0X4A, ctx->r16) = ctx->r24;
L_803F41F8:
    // 0x803F41F8: lb          $a0, 0x40($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X40);
    // 0x803F41FC: jal         0x8006DED4
    // 0x803F4200: nop

    func_8006DED4(rdram, ctx);
        goto after_5;
    // 0x803F4200: nop

    after_5:
    // 0x803F4204: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x803F4208: bne         $v1, $v0, L_803F4244
    if (ctx->r3 != ctx->r2) {
        // 0x803F420C: addiu       $t9, $zero, 0x2
        ctx->r25 = ADD32(0, 0X2);
            goto L_803F4244;
    }
    // 0x803F420C: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x803F4210: lb          $t0, 0x40($s0)
    ctx->r8 = MEM_B(ctx->r16, 0X40);
    // 0x803F4214: sb          $t9, 0x3C($s0)
    MEM_B(0X3C, ctx->r16) = ctx->r25;
    // 0x803F4218: b           L_803F4244
    // 0x803F421C: sb          $t0, 0x4B($s0)
    MEM_B(0X4B, ctx->r16) = ctx->r8;
        goto L_803F4244;
    // 0x803F421C: sb          $t0, 0x4B($s0)
    MEM_B(0X4B, ctx->r16) = ctx->r8;
L_803F4220:
    // 0x803F4220: lb          $a0, 0x41($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X41);
    // 0x803F4224: jal         0x8006DED4
    // 0x803F4228: nop

    func_8006DED4(rdram, ctx);
        goto after_6;
    // 0x803F4228: nop

    after_6:
    // 0x803F422C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x803F4230: bne         $v1, $v0, L_803F4244
    if (ctx->r3 != ctx->r2) {
        // 0x803F4234: addiu       $t1, $zero, 0x3
        ctx->r9 = ADD32(0, 0X3);
            goto L_803F4244;
    }
    // 0x803F4234: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x803F4238: lb          $t2, 0x41($s0)
    ctx->r10 = MEM_B(ctx->r16, 0X41);
    // 0x803F423C: sb          $t1, 0x3C($s0)
    MEM_B(0X3C, ctx->r16) = ctx->r9;
    // 0x803F4240: sb          $t2, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r10;
L_803F4244:
    // 0x803F4244: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803F4248:
    // 0x803F4248: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F424C: jr          $ra
    // 0x803F4250: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x803F4250: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_803F4110(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F4110: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x803F4114: beq         $v0, $at, L_803F413C
    if (ctx->r2 == ctx->r1) {
        // 0x803F4118: nop
    
            goto L_803F413C;
    }
    // 0x803F4118: nop

    // 0x803F411C: b           L_803F4248
    // 0x803F4120: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_803F4248;
    // 0x803F4120: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F4124: lb          $a0, 0x39($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X39);
    // 0x803F4128: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    // 0x803F412C: jal         0x8004C0D4
    // 0x803F4130: addiu       $a1, $a1, -0x4DC4
    ctx->r5 = ADD32(ctx->r5, -0X4DC4);
    func_8004C0D4(rdram, ctx);
        goto after_0;
    // 0x803F4130: addiu       $a1, $a1, -0x4DC4
    ctx->r5 = ADD32(ctx->r5, -0X4DC4);
    after_0:
    // 0x803F4134: b           L_803F4244
    // 0x803F4138: sb          $v0, 0x39($s0)
    MEM_B(0X39, ctx->r16) = ctx->r2;
        goto L_803F4244;
    // 0x803F4138: sb          $v0, 0x39($s0)
    MEM_B(0X39, ctx->r16) = ctx->r2;
L_803F413C:
    // 0x803F413C: lb          $v0, 0x3B($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X3B);
    // 0x803F4140: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    // 0x803F4144: beq         $v0, $zero, L_803F415C
    if (ctx->r2 == 0) {
        // 0x803F4148: nop
    
            goto L_803F415C;
    }
    // 0x803F4148: nop

    // 0x803F414C: beq         $v0, $v1, L_803F4170
    if (ctx->r2 == ctx->r3) {
        // 0x803F4150: lui         $a1, 0x8040
        ctx->r5 = S32(0X8040 << 16);
            goto L_803F4170;
    }
    // 0x803F4150: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    // 0x803F4154: b           L_803F4248
    // 0x803F4158: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_803F4248;
    // 0x803F4158: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803F415C:
    // 0x803F415C: lb          $a0, 0x42($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X42);
    // 0x803F4160: jal         0x8004C0D4
    // 0x803F4164: addiu       $a1, $a1, -0x4DB0
    ctx->r5 = ADD32(ctx->r5, -0X4DB0);
    func_8004C0D4(rdram, ctx);
        goto after_1;
    // 0x803F4164: addiu       $a1, $a1, -0x4DB0
    ctx->r5 = ADD32(ctx->r5, -0X4DB0);
    after_1:
    // 0x803F4168: b           L_803F4244
    // 0x803F416C: sb          $v0, 0x42($s0)
    MEM_B(0X42, ctx->r16) = ctx->r2;
        goto L_803F4244;
    // 0x803F416C: sb          $v0, 0x42($s0)
    MEM_B(0X42, ctx->r16) = ctx->r2;
L_803F4170:
    // 0x803F4170: lb          $a0, 0x43($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X43);
    // 0x803F4174: jal         0x8004C0D4
    // 0x803F4178: addiu       $a1, $a1, -0x4DA4
    ctx->r5 = ADD32(ctx->r5, -0X4DA4);
    func_8004C0D4(rdram, ctx);
        goto after_2;
    // 0x803F4178: addiu       $a1, $a1, -0x4DA4
    ctx->r5 = ADD32(ctx->r5, -0X4DA4);
    after_2:
    // 0x803F417C: b           L_803F4244
    // 0x803F4180: sb          $v0, 0x43($s0)
    MEM_B(0X43, ctx->r16) = ctx->r2;
        goto L_803F4244;
    // 0x803F4180: sb          $v0, 0x43($s0)
    MEM_B(0X43, ctx->r16) = ctx->r2;
    // 0x803F4184: lb          $v0, 0x3C($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X3C);
    // 0x803F4188: sb          $v1, 0x4D($s0)
    MEM_B(0X4D, ctx->r16) = ctx->r3;
    // 0x803F418C: beq         $v0, $zero, L_803F41A8
    if (ctx->r2 == 0) {
        // 0x803F4190: sltiu       $at, $v0, 0x5
        ctx->r1 = ctx->r2 < 0X5 ? 1 : 0;
            goto L_803F41A8;
    }
    // 0x803F4190: sltiu       $at, $v0, 0x5
    ctx->r1 = ctx->r2 < 0X5 ? 1 : 0;
    // 0x803F4194: jal         0x80035734
    // 0x803F4198: nop

    func_80035734(rdram, ctx);
        goto after_3;
    // 0x803F4198: nop

    after_3:
    // 0x803F419C: lb          $v0, 0x3C($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X3C);
    // 0x803F41A0: nop

    // 0x803F41A4: sltiu       $at, $v0, 0x5
    ctx->r1 = ctx->r2 < 0X5 ? 1 : 0;
L_803F41A8:
    // 0x803F41A8: beq         $at, $zero, L_803F4244
    if (ctx->r1 == 0) {
        // 0x803F41AC: sll         $t6, $v0, 2
        ctx->r14 = S32(ctx->r2 << 2);
            goto L_803F4244;
    }
    // 0x803F41AC: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x803F41B0: lui         $at, 0x8040
    ctx->r1 = S32(0X8040 << 16);
    // 0x803F41B4: addu        $at, $at, $t6
    gpr jr_addend_803F41C0 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x803F41B8: lw          $t6, -0x4768($at)
    ctx->r14 = ADD32(ctx->r1, -0X4768);
    // 0x803F41BC: nop

    // 0x803F41C0: jr          $t6
    // 0x803F41C4: nop

    switch (jr_addend_803F41C0 >> 2) {
        case 0: goto L_803F4244; break;
        case 1: goto L_803F41C8; break;
        case 2: goto L_803F41D0; break;
        case 3: goto L_803F41F8; break;
        case 4: goto L_803F4220; break;
        default: switch_error(__func__, 0x803F41C0, 0x803FB898);
    }
    // 0x803F41C4: nop

L_803F41C8:
    // 0x803F41C8: b           L_803F4244
    // 0x803F41CC: sb          $zero, 0x3C($s0)
    MEM_B(0X3C, ctx->r16) = 0;
        goto L_803F4244;
    // 0x803F41CC: sb          $zero, 0x3C($s0)
    MEM_B(0X3C, ctx->r16) = 0;
L_803F41D0:
    // 0x803F41D0: lb          $a0, 0x3F($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X3F);
    // 0x803F41D4: jal         0x8006DED4
    // 0x803F41D8: nop

    func_8006DED4(rdram, ctx);
        goto after_4;
    // 0x803F41D8: nop

    after_4:
    // 0x803F41DC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x803F41E0: bne         $v1, $v0, L_803F4244
    if (ctx->r3 != ctx->r2) {
        // 0x803F41E4: addiu       $t7, $zero, 0x4
        ctx->r15 = ADD32(0, 0X4);
            goto L_803F4244;
    }
    // 0x803F41E4: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x803F41E8: lb          $t8, 0x3F($s0)
    ctx->r24 = MEM_B(ctx->r16, 0X3F);
    // 0x803F41EC: sb          $t7, 0x3C($s0)
    MEM_B(0X3C, ctx->r16) = ctx->r15;
    // 0x803F41F0: b           L_803F4244
    // 0x803F41F4: sb          $t8, 0x4A($s0)
    MEM_B(0X4A, ctx->r16) = ctx->r24;
        goto L_803F4244;
    // 0x803F41F4: sb          $t8, 0x4A($s0)
    MEM_B(0X4A, ctx->r16) = ctx->r24;
L_803F41F8:
    // 0x803F41F8: lb          $a0, 0x40($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X40);
    // 0x803F41FC: jal         0x8006DED4
    // 0x803F4200: nop

    func_8006DED4(rdram, ctx);
        goto after_5;
    // 0x803F4200: nop

    after_5:
    // 0x803F4204: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x803F4208: bne         $v1, $v0, L_803F4244
    if (ctx->r3 != ctx->r2) {
        // 0x803F420C: addiu       $t9, $zero, 0x2
        ctx->r25 = ADD32(0, 0X2);
            goto L_803F4244;
    }
    // 0x803F420C: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x803F4210: lb          $t0, 0x40($s0)
    ctx->r8 = MEM_B(ctx->r16, 0X40);
    // 0x803F4214: sb          $t9, 0x3C($s0)
    MEM_B(0X3C, ctx->r16) = ctx->r25;
    // 0x803F4218: b           L_803F4244
    // 0x803F421C: sb          $t0, 0x4B($s0)
    MEM_B(0X4B, ctx->r16) = ctx->r8;
        goto L_803F4244;
    // 0x803F421C: sb          $t0, 0x4B($s0)
    MEM_B(0X4B, ctx->r16) = ctx->r8;
L_803F4220:
    // 0x803F4220: lb          $a0, 0x41($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X41);
    // 0x803F4224: jal         0x8006DED4
    // 0x803F4228: nop

    func_8006DED4(rdram, ctx);
        goto after_6;
    // 0x803F4228: nop

    after_6:
    // 0x803F422C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x803F4230: bne         $v1, $v0, L_803F4244
    if (ctx->r3 != ctx->r2) {
        // 0x803F4234: addiu       $t1, $zero, 0x3
        ctx->r9 = ADD32(0, 0X3);
            goto L_803F4244;
    }
    // 0x803F4234: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x803F4238: lb          $t2, 0x41($s0)
    ctx->r10 = MEM_B(ctx->r16, 0X41);
    // 0x803F423C: sb          $t1, 0x3C($s0)
    MEM_B(0X3C, ctx->r16) = ctx->r9;
    // 0x803F4240: sb          $t2, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r10;
L_803F4244:
    // 0x803F4244: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803F4248:
    // 0x803F4248: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F424C: jr          $ra
    // 0x803F4250: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x803F4250: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_803F4160(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F4160: jal         0x8004C0D4
    // 0x803F4164: addiu       $a1, $a1, -0x4DB0
    ctx->r5 = ADD32(ctx->r5, -0X4DB0);
    func_8004C0D4(rdram, ctx);
        goto after_0;
    // 0x803F4164: addiu       $a1, $a1, -0x4DB0
    ctx->r5 = ADD32(ctx->r5, -0X4DB0);
    after_0:
    // 0x803F4168: b           L_803F4244
    // 0x803F416C: sb          $v0, 0x42($s0)
    MEM_B(0X42, ctx->r16) = ctx->r2;
        goto L_803F4244;
    // 0x803F416C: sb          $v0, 0x42($s0)
    MEM_B(0X42, ctx->r16) = ctx->r2;
    // 0x803F4170: lb          $a0, 0x43($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X43);
    // 0x803F4174: jal         0x8004C0D4
    // 0x803F4178: addiu       $a1, $a1, -0x4DA4
    ctx->r5 = ADD32(ctx->r5, -0X4DA4);
    func_8004C0D4(rdram, ctx);
        goto after_1;
    // 0x803F4178: addiu       $a1, $a1, -0x4DA4
    ctx->r5 = ADD32(ctx->r5, -0X4DA4);
    after_1:
    // 0x803F417C: b           L_803F4244
    // 0x803F4180: sb          $v0, 0x43($s0)
    MEM_B(0X43, ctx->r16) = ctx->r2;
        goto L_803F4244;
    // 0x803F4180: sb          $v0, 0x43($s0)
    MEM_B(0X43, ctx->r16) = ctx->r2;
    // 0x803F4184: lb          $v0, 0x3C($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X3C);
    // 0x803F4188: sb          $v1, 0x4D($s0)
    MEM_B(0X4D, ctx->r16) = ctx->r3;
    // 0x803F418C: beq         $v0, $zero, L_803F41A8
    if (ctx->r2 == 0) {
        // 0x803F4190: sltiu       $at, $v0, 0x5
        ctx->r1 = ctx->r2 < 0X5 ? 1 : 0;
            goto L_803F41A8;
    }
    // 0x803F4190: sltiu       $at, $v0, 0x5
    ctx->r1 = ctx->r2 < 0X5 ? 1 : 0;
    // 0x803F4194: jal         0x80035734
    // 0x803F4198: nop

    func_80035734(rdram, ctx);
        goto after_2;
    // 0x803F4198: nop

    after_2:
    // 0x803F419C: lb          $v0, 0x3C($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X3C);
    // 0x803F41A0: nop

    // 0x803F41A4: sltiu       $at, $v0, 0x5
    ctx->r1 = ctx->r2 < 0X5 ? 1 : 0;
L_803F41A8:
    // 0x803F41A8: beq         $at, $zero, L_803F4244
    if (ctx->r1 == 0) {
        // 0x803F41AC: sll         $t6, $v0, 2
        ctx->r14 = S32(ctx->r2 << 2);
            goto L_803F4244;
    }
    // 0x803F41AC: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x803F41B0: lui         $at, 0x8040
    ctx->r1 = S32(0X8040 << 16);
    // 0x803F41B4: addu        $at, $at, $t6
    gpr jr_addend_803F41C0 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x803F41B8: lw          $t6, -0x4768($at)
    ctx->r14 = ADD32(ctx->r1, -0X4768);
    // 0x803F41BC: nop

    // 0x803F41C0: jr          $t6
    // 0x803F41C4: nop

    switch (jr_addend_803F41C0 >> 2) {
        case 0: goto L_803F4244; break;
        case 1: goto L_803F41C8; break;
        case 2: goto L_803F41D0; break;
        case 3: goto L_803F41F8; break;
        case 4: goto L_803F4220; break;
        default: switch_error(__func__, 0x803F41C0, 0x803FB898);
    }
    // 0x803F41C4: nop

L_803F41C8:
    // 0x803F41C8: b           L_803F4244
    // 0x803F41CC: sb          $zero, 0x3C($s0)
    MEM_B(0X3C, ctx->r16) = 0;
        goto L_803F4244;
    // 0x803F41CC: sb          $zero, 0x3C($s0)
    MEM_B(0X3C, ctx->r16) = 0;
L_803F41D0:
    // 0x803F41D0: lb          $a0, 0x3F($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X3F);
    // 0x803F41D4: jal         0x8006DED4
    // 0x803F41D8: nop

    func_8006DED4(rdram, ctx);
        goto after_3;
    // 0x803F41D8: nop

    after_3:
    // 0x803F41DC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x803F41E0: bne         $v1, $v0, L_803F4244
    if (ctx->r3 != ctx->r2) {
        // 0x803F41E4: addiu       $t7, $zero, 0x4
        ctx->r15 = ADD32(0, 0X4);
            goto L_803F4244;
    }
    // 0x803F41E4: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x803F41E8: lb          $t8, 0x3F($s0)
    ctx->r24 = MEM_B(ctx->r16, 0X3F);
    // 0x803F41EC: sb          $t7, 0x3C($s0)
    MEM_B(0X3C, ctx->r16) = ctx->r15;
    // 0x803F41F0: b           L_803F4244
    // 0x803F41F4: sb          $t8, 0x4A($s0)
    MEM_B(0X4A, ctx->r16) = ctx->r24;
        goto L_803F4244;
    // 0x803F41F4: sb          $t8, 0x4A($s0)
    MEM_B(0X4A, ctx->r16) = ctx->r24;
L_803F41F8:
    // 0x803F41F8: lb          $a0, 0x40($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X40);
    // 0x803F41FC: jal         0x8006DED4
    // 0x803F4200: nop

    func_8006DED4(rdram, ctx);
        goto after_4;
    // 0x803F4200: nop

    after_4:
    // 0x803F4204: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x803F4208: bne         $v1, $v0, L_803F4244
    if (ctx->r3 != ctx->r2) {
        // 0x803F420C: addiu       $t9, $zero, 0x2
        ctx->r25 = ADD32(0, 0X2);
            goto L_803F4244;
    }
    // 0x803F420C: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x803F4210: lb          $t0, 0x40($s0)
    ctx->r8 = MEM_B(ctx->r16, 0X40);
    // 0x803F4214: sb          $t9, 0x3C($s0)
    MEM_B(0X3C, ctx->r16) = ctx->r25;
    // 0x803F4218: b           L_803F4244
    // 0x803F421C: sb          $t0, 0x4B($s0)
    MEM_B(0X4B, ctx->r16) = ctx->r8;
        goto L_803F4244;
    // 0x803F421C: sb          $t0, 0x4B($s0)
    MEM_B(0X4B, ctx->r16) = ctx->r8;
L_803F4220:
    // 0x803F4220: lb          $a0, 0x41($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X41);
    // 0x803F4224: jal         0x8006DED4
    // 0x803F4228: nop

    func_8006DED4(rdram, ctx);
        goto after_5;
    // 0x803F4228: nop

    after_5:
    // 0x803F422C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x803F4230: bne         $v1, $v0, L_803F4244
    if (ctx->r3 != ctx->r2) {
        // 0x803F4234: addiu       $t1, $zero, 0x3
        ctx->r9 = ADD32(0, 0X3);
            goto L_803F4244;
    }
    // 0x803F4234: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x803F4238: lb          $t2, 0x41($s0)
    ctx->r10 = MEM_B(ctx->r16, 0X41);
    // 0x803F423C: sb          $t1, 0x3C($s0)
    MEM_B(0X3C, ctx->r16) = ctx->r9;
    // 0x803F4240: sb          $t2, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r10;
L_803F4244:
    // 0x803F4244: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F4248: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F424C: jr          $ra
    // 0x803F4250: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x803F4250: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_803F4254(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F4254: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803F4258: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803F425C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803F4260: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x803F4264: lb          $v0, 0x38($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X38);
    // 0x803F4268: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x803F426C: beq         $v0, $zero, L_803F4294
    if (ctx->r2 == 0) {
        // 0x803F4270: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_803F4294;
    }
    // 0x803F4270: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x803F4274: beq         $v0, $v1, L_803F43B4
    if (ctx->r2 == ctx->r3) {
        // 0x803F4278: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_803F43B4;
    }
    // 0x803F4278: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803F427C: beq         $v0, $at, L_803F42F4
    if (ctx->r2 == ctx->r1) {
        // 0x803F4280: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_803F42F4;
    }
    // 0x803F4280: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x803F4284: beq         $v0, $at, L_803F42AC
    if (ctx->r2 == ctx->r1) {
        // 0x803F4288: nop
    
            goto L_803F42AC;
    }
    // 0x803F4288: nop

    // 0x803F428C: b           L_803F43B8
    // 0x803F4290: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_803F43B8;
    // 0x803F4290: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803F4294:
    // 0x803F4294: lb          $a0, 0x39($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X39);
    // 0x803F4298: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    // 0x803F429C: jal         0x8004C048
    // 0x803F42A0: addiu       $a1, $a1, -0x4DC4
    ctx->r5 = ADD32(ctx->r5, -0X4DC4);
    func_8004C048(rdram, ctx);
        goto after_0;
    // 0x803F42A0: addiu       $a1, $a1, -0x4DC4
    ctx->r5 = ADD32(ctx->r5, -0X4DC4);
    after_0:
    // 0x803F42A4: b           L_803F43B4
    // 0x803F42A8: sb          $v0, 0x39($s0)
    MEM_B(0X39, ctx->r16) = ctx->r2;
        goto L_803F43B4;
    // 0x803F42A8: sb          $v0, 0x39($s0)
    MEM_B(0X39, ctx->r16) = ctx->r2;
L_803F42AC:
    // 0x803F42AC: lb          $v0, 0x3B($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X3B);
    // 0x803F42B0: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    // 0x803F42B4: beq         $v0, $zero, L_803F42CC
    if (ctx->r2 == 0) {
        // 0x803F42B8: nop
    
            goto L_803F42CC;
    }
    // 0x803F42B8: nop

    // 0x803F42BC: beq         $v0, $v1, L_803F42E0
    if (ctx->r2 == ctx->r3) {
        // 0x803F42C0: lui         $a1, 0x8040
        ctx->r5 = S32(0X8040 << 16);
            goto L_803F42E0;
    }
    // 0x803F42C0: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    // 0x803F42C4: b           L_803F43B8
    // 0x803F42C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_803F43B8;
    // 0x803F42C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803F42CC:
    // 0x803F42CC: lb          $a0, 0x42($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X42);
    // 0x803F42D0: jal         0x8004C048
    // 0x803F42D4: addiu       $a1, $a1, -0x4DB0
    ctx->r5 = ADD32(ctx->r5, -0X4DB0);
    func_8004C048(rdram, ctx);
        goto after_1;
    // 0x803F42D4: addiu       $a1, $a1, -0x4DB0
    ctx->r5 = ADD32(ctx->r5, -0X4DB0);
    after_1:
    // 0x803F42D8: b           L_803F43B4
    // 0x803F42DC: sb          $v0, 0x42($s0)
    MEM_B(0X42, ctx->r16) = ctx->r2;
        goto L_803F43B4;
    // 0x803F42DC: sb          $v0, 0x42($s0)
    MEM_B(0X42, ctx->r16) = ctx->r2;
L_803F42E0:
    // 0x803F42E0: lb          $a0, 0x43($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X43);
    // 0x803F42E4: jal         0x8004C048
    // 0x803F42E8: addiu       $a1, $a1, -0x4DA4
    ctx->r5 = ADD32(ctx->r5, -0X4DA4);
    func_8004C048(rdram, ctx);
        goto after_2;
    // 0x803F42E8: addiu       $a1, $a1, -0x4DA4
    ctx->r5 = ADD32(ctx->r5, -0X4DA4);
    after_2:
    // 0x803F42EC: b           L_803F43B4
    // 0x803F42F0: sb          $v0, 0x43($s0)
    MEM_B(0X43, ctx->r16) = ctx->r2;
        goto L_803F43B4;
    // 0x803F42F0: sb          $v0, 0x43($s0)
    MEM_B(0X43, ctx->r16) = ctx->r2;
L_803F42F4:
    // 0x803F42F4: lb          $v0, 0x3C($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X3C);
    // 0x803F42F8: sb          $v1, 0x4D($s0)
    MEM_B(0X4D, ctx->r16) = ctx->r3;
    // 0x803F42FC: beq         $v1, $v0, L_803F4318
    if (ctx->r3 == ctx->r2) {
        // 0x803F4300: sltiu       $at, $v0, 0x5
        ctx->r1 = ctx->r2 < 0X5 ? 1 : 0;
            goto L_803F4318;
    }
    // 0x803F4300: sltiu       $at, $v0, 0x5
    ctx->r1 = ctx->r2 < 0X5 ? 1 : 0;
    // 0x803F4304: jal         0x80035734
    // 0x803F4308: nop

    func_80035734(rdram, ctx);
        goto after_3;
    // 0x803F4308: nop

    after_3:
    // 0x803F430C: lb          $v0, 0x3C($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X3C);
    // 0x803F4310: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x803F4314: sltiu       $at, $v0, 0x5
    ctx->r1 = ctx->r2 < 0X5 ? 1 : 0;
L_803F4318:
    // 0x803F4318: beq         $at, $zero, L_803F43B4
    if (ctx->r1 == 0) {
        // 0x803F431C: sll         $t6, $v0, 2
        ctx->r14 = S32(ctx->r2 << 2);
            goto L_803F43B4;
    }
    // 0x803F431C: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x803F4320: lui         $at, 0x8040
    ctx->r1 = S32(0X8040 << 16);
    // 0x803F4324: addu        $at, $at, $t6
    gpr jr_addend_803F4330 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x803F4328: lw          $t6, -0x4754($at)
    ctx->r14 = ADD32(ctx->r1, -0X4754);
    // 0x803F432C: nop

    // 0x803F4330: jr          $t6
    // 0x803F4334: nop

    switch (jr_addend_803F4330 >> 2) {
        case 0: goto L_803F4338; break;
        case 1: goto L_803F43B4; break;
        case 2: goto L_803F4340; break;
        case 3: goto L_803F4368; break;
        case 4: goto L_803F4390; break;
        default: switch_error(__func__, 0x803F4330, 0x803FB8AC);
    }
    // 0x803F4334: nop

L_803F4338:
    // 0x803F4338: b           L_803F43B4
    // 0x803F433C: sb          $v1, 0x3C($s0)
    MEM_B(0X3C, ctx->r16) = ctx->r3;
        goto L_803F43B4;
    // 0x803F433C: sb          $v1, 0x3C($s0)
    MEM_B(0X3C, ctx->r16) = ctx->r3;
L_803F4340:
    // 0x803F4340: lb          $a0, 0x3F($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X3F);
    // 0x803F4344: jal         0x8006DED4
    // 0x803F4348: nop

    func_8006DED4(rdram, ctx);
        goto after_4;
    // 0x803F4348: nop

    after_4:
    // 0x803F434C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x803F4350: bne         $v1, $v0, L_803F43B4
    if (ctx->r3 != ctx->r2) {
        // 0x803F4354: addiu       $t7, $zero, 0x3
        ctx->r15 = ADD32(0, 0X3);
            goto L_803F43B4;
    }
    // 0x803F4354: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x803F4358: lb          $t8, 0x3F($s0)
    ctx->r24 = MEM_B(ctx->r16, 0X3F);
    // 0x803F435C: sb          $t7, 0x3C($s0)
    MEM_B(0X3C, ctx->r16) = ctx->r15;
    // 0x803F4360: b           L_803F43B4
    // 0x803F4364: sb          $t8, 0x4A($s0)
    MEM_B(0X4A, ctx->r16) = ctx->r24;
        goto L_803F43B4;
    // 0x803F4364: sb          $t8, 0x4A($s0)
    MEM_B(0X4A, ctx->r16) = ctx->r24;
L_803F4368:
    // 0x803F4368: lb          $a0, 0x40($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X40);
    // 0x803F436C: jal         0x8006DED4
    // 0x803F4370: nop

    func_8006DED4(rdram, ctx);
        goto after_5;
    // 0x803F4370: nop

    after_5:
    // 0x803F4374: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x803F4378: bne         $v1, $v0, L_803F43B4
    if (ctx->r3 != ctx->r2) {
        // 0x803F437C: addiu       $t9, $zero, 0x4
        ctx->r25 = ADD32(0, 0X4);
            goto L_803F43B4;
    }
    // 0x803F437C: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x803F4380: lb          $t0, 0x40($s0)
    ctx->r8 = MEM_B(ctx->r16, 0X40);
    // 0x803F4384: sb          $t9, 0x3C($s0)
    MEM_B(0X3C, ctx->r16) = ctx->r25;
    // 0x803F4388: b           L_803F43B4
    // 0x803F438C: sb          $t0, 0x4B($s0)
    MEM_B(0X4B, ctx->r16) = ctx->r8;
        goto L_803F43B4;
    // 0x803F438C: sb          $t0, 0x4B($s0)
    MEM_B(0X4B, ctx->r16) = ctx->r8;
L_803F4390:
    // 0x803F4390: lb          $a0, 0x41($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X41);
    // 0x803F4394: jal         0x8006DED4
    // 0x803F4398: nop

    func_8006DED4(rdram, ctx);
        goto after_6;
    // 0x803F4398: nop

    after_6:
    // 0x803F439C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x803F43A0: bne         $v1, $v0, L_803F43B4
    if (ctx->r3 != ctx->r2) {
        // 0x803F43A4: addiu       $t1, $zero, 0x2
        ctx->r9 = ADD32(0, 0X2);
            goto L_803F43B4;
    }
    // 0x803F43A4: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x803F43A8: lb          $t2, 0x41($s0)
    ctx->r10 = MEM_B(ctx->r16, 0X41);
    // 0x803F43AC: sb          $t1, 0x3C($s0)
    MEM_B(0X3C, ctx->r16) = ctx->r9;
    // 0x803F43B0: sb          $t2, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r10;
L_803F43B4:
    // 0x803F43B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803F43B8:
    // 0x803F43B8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F43BC: jr          $ra
    // 0x803F43C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x803F43C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_803F43C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F43C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F43C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F43CC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803F43D0: lb          $v0, 0x38($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X38);
    // 0x803F43D4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803F43D8: beq         $v0, $zero, L_803F43F8
    if (ctx->r2 == 0) {
        // 0x803F43DC: nop
    
            goto L_803F43F8;
    }
    // 0x803F43DC: nop

    // 0x803F43E0: beq         $v0, $at, L_803F43F8
    if (ctx->r2 == ctx->r1) {
        // 0x803F43E4: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_803F43F8;
    }
    // 0x803F43E4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803F43E8: beq         $v0, $at, L_803F44F0
    if (ctx->r2 == ctx->r1) {
        // 0x803F43EC: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_803F44F0;
    }
    // 0x803F43EC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x803F43F0: bne         $v0, $at, L_803F44F4
    if (ctx->r2 != ctx->r1) {
        // 0x803F43F4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_803F44F4;
    }
    // 0x803F43F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F43F8:
    // 0x803F43F8: jal         0x80035770
    // 0x803F43FC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80035770(rdram, ctx);
        goto after_0;
    // 0x803F43FC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x803F4400: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803F4404: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x803F4408: lbu         $t6, 0x44($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X44);
    // 0x803F440C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x803F4410: bne         $v1, $t6, L_803F4420
    if (ctx->r3 != ctx->r14) {
        // 0x803F4414: sb          $v0, 0x45($a0)
        MEM_B(0X45, ctx->r4) = ctx->r2;
            goto L_803F4420;
    }
    // 0x803F4414: sb          $v0, 0x45($a0)
    MEM_B(0X45, ctx->r4) = ctx->r2;
    // 0x803F4418: b           L_803F4424
    // 0x803F441C: sb          $zero, 0x44($a0)
    MEM_B(0X44, ctx->r4) = 0;
        goto L_803F4424;
    // 0x803F441C: sb          $zero, 0x44($a0)
    MEM_B(0X44, ctx->r4) = 0;
L_803F4420:
    // 0x803F4420: sb          $v0, 0x44($a0)
    MEM_B(0X44, ctx->r4) = ctx->r2;
L_803F4424:
    // 0x803F4424: lb          $v0, 0x3A($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X3A);
    // 0x803F4428: nop

    // 0x803F442C: beq         $v0, $zero, L_803F4444
    if (ctx->r2 == 0) {
        // 0x803F4430: nop
    
            goto L_803F4444;
    }
    // 0x803F4430: nop

    // 0x803F4434: beq         $v0, $v1, L_803F449C
    if (ctx->r2 == ctx->r3) {
        // 0x803F4438: nop
    
            goto L_803F449C;
    }
    // 0x803F4438: nop

    // 0x803F443C: b           L_803F44F4
    // 0x803F4440: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F44F4;
    // 0x803F4440: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F4444:
    // 0x803F4444: lb          $v0, 0x3D($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X3D);
    // 0x803F4448: addiu       $v1, $zero, 0x11
    ctx->r3 = ADD32(0, 0X11);
    // 0x803F444C: bne         $v1, $v0, L_803F4460
    if (ctx->r3 != ctx->r2) {
        // 0x803F4450: addiu       $at, $zero, 0x10
        ctx->r1 = ADD32(0, 0X10);
            goto L_803F4460;
    }
    // 0x803F4450: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x803F4454: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x803F4458: b           L_803F44F0
    // 0x803F445C: sb          $t7, 0x3D($a0)
    MEM_B(0X3D, ctx->r4) = ctx->r15;
        goto L_803F44F0;
    // 0x803F445C: sb          $t7, 0x3D($a0)
    MEM_B(0X3D, ctx->r4) = ctx->r15;
L_803F4460:
    // 0x803F4460: bne         $v0, $at, L_803F4474
    if (ctx->r2 != ctx->r1) {
        // 0x803F4464: slti        $at, $v0, 0xB
        ctx->r1 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
            goto L_803F4474;
    }
    // 0x803F4464: slti        $at, $v0, 0xB
    ctx->r1 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
    // 0x803F4468: b           L_803F44F0
    // 0x803F446C: sb          $v1, 0x3D($a0)
    MEM_B(0X3D, ctx->r4) = ctx->r3;
        goto L_803F44F0;
    // 0x803F446C: sb          $v1, 0x3D($a0)
    MEM_B(0X3D, ctx->r4) = ctx->r3;
    // 0x803F4470: slti        $at, $v0, 0xB
    ctx->r1 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
L_803F4474:
    // 0x803F4474: beq         $at, $zero, L_803F448C
    if (ctx->r1 == 0) {
        // 0x803F4478: nop
    
            goto L_803F448C;
    }
    // 0x803F4478: nop

    // 0x803F447C: lb          $t8, 0x50($a0)
    ctx->r24 = MEM_B(ctx->r4, 0X50);
    // 0x803F4480: sb          $v0, 0x4F($a0)
    MEM_B(0X4F, ctx->r4) = ctx->r2;
    // 0x803F4484: b           L_803F44F0
    // 0x803F4488: sb          $t8, 0x3D($a0)
    MEM_B(0X3D, ctx->r4) = ctx->r24;
        goto L_803F44F0;
    // 0x803F4488: sb          $t8, 0x3D($a0)
    MEM_B(0X3D, ctx->r4) = ctx->r24;
L_803F448C:
    // 0x803F448C: lb          $t9, 0x4F($a0)
    ctx->r25 = MEM_B(ctx->r4, 0X4F);
    // 0x803F4490: sb          $v0, 0x50($a0)
    MEM_B(0X50, ctx->r4) = ctx->r2;
    // 0x803F4494: b           L_803F44F0
    // 0x803F4498: sb          $t9, 0x3D($a0)
    MEM_B(0X3D, ctx->r4) = ctx->r25;
        goto L_803F44F0;
    // 0x803F4498: sb          $t9, 0x3D($a0)
    MEM_B(0X3D, ctx->r4) = ctx->r25;
L_803F449C:
    // 0x803F449C: lb          $v0, 0x3E($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X3E);
    // 0x803F44A0: addiu       $v1, $zero, 0x11
    ctx->r3 = ADD32(0, 0X11);
    // 0x803F44A4: bne         $v1, $v0, L_803F44B8
    if (ctx->r3 != ctx->r2) {
        // 0x803F44A8: addiu       $at, $zero, 0x10
        ctx->r1 = ADD32(0, 0X10);
            goto L_803F44B8;
    }
    // 0x803F44A8: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x803F44AC: addiu       $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
    // 0x803F44B0: b           L_803F44F0
    // 0x803F44B4: sb          $t0, 0x3E($a0)
    MEM_B(0X3E, ctx->r4) = ctx->r8;
        goto L_803F44F0;
    // 0x803F44B4: sb          $t0, 0x3E($a0)
    MEM_B(0X3E, ctx->r4) = ctx->r8;
L_803F44B8:
    // 0x803F44B8: bne         $v0, $at, L_803F44CC
    if (ctx->r2 != ctx->r1) {
        // 0x803F44BC: slti        $at, $v0, 0xB
        ctx->r1 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
            goto L_803F44CC;
    }
    // 0x803F44BC: slti        $at, $v0, 0xB
    ctx->r1 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
    // 0x803F44C0: b           L_803F44F0
    // 0x803F44C4: sb          $v1, 0x3E($a0)
    MEM_B(0X3E, ctx->r4) = ctx->r3;
        goto L_803F44F0;
    // 0x803F44C4: sb          $v1, 0x3E($a0)
    MEM_B(0X3E, ctx->r4) = ctx->r3;
    // 0x803F44C8: slti        $at, $v0, 0xB
    ctx->r1 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
L_803F44CC:
    // 0x803F44CC: beq         $at, $zero, L_803F44E4
    if (ctx->r1 == 0) {
        // 0x803F44D0: nop
    
            goto L_803F44E4;
    }
    // 0x803F44D0: nop

    // 0x803F44D4: lb          $t1, 0x50($a0)
    ctx->r9 = MEM_B(ctx->r4, 0X50);
    // 0x803F44D8: sb          $v0, 0x4F($a0)
    MEM_B(0X4F, ctx->r4) = ctx->r2;
    // 0x803F44DC: b           L_803F44F0
    // 0x803F44E0: sb          $t1, 0x3E($a0)
    MEM_B(0X3E, ctx->r4) = ctx->r9;
        goto L_803F44F0;
    // 0x803F44E0: sb          $t1, 0x3E($a0)
    MEM_B(0X3E, ctx->r4) = ctx->r9;
L_803F44E4:
    // 0x803F44E4: lb          $t2, 0x4F($a0)
    ctx->r10 = MEM_B(ctx->r4, 0X4F);
    // 0x803F44E8: sb          $v0, 0x50($a0)
    MEM_B(0X50, ctx->r4) = ctx->r2;
    // 0x803F44EC: sb          $t2, 0x3E($a0)
    MEM_B(0X3E, ctx->r4) = ctx->r10;
L_803F44F0:
    // 0x803F44F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F44F4:
    // 0x803F44F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F44F8: jr          $ra
    // 0x803F44FC: nop

    return;
    // 0x803F44FC: nop

;}
RECOMP_FUNC void func_803F4500(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F4500: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F4504: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F4508: jal         0x803F43C4
    // 0x803F450C: nop

    func_803F43C4(rdram, ctx);
        goto after_0;
    // 0x803F450C: nop

    after_0:
    // 0x803F4510: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F4514: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F4518: jr          $ra
    // 0x803F451C: nop

    return;
    // 0x803F451C: nop

;}
RECOMP_FUNC void func_803F4520(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F4520: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F4524: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F4528: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803F452C: jal         0x80035770
    // 0x803F4530: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80035770(rdram, ctx);
        goto after_0;
    // 0x803F4530: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x803F4534: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803F4538: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x803F453C: lbu         $t7, 0x47($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X47);
    // 0x803F4540: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x803F4544: subu        $t9, $t8, $t7
    ctx->r25 = SUB32(ctx->r24, ctx->r15);
    // 0x803F4548: sb          $t6, 0x48($a0)
    MEM_B(0X48, ctx->r4) = ctx->r14;
    // 0x803F454C: sb          $t9, 0x47($a0)
    MEM_B(0X47, ctx->r4) = ctx->r25;
    // 0x803F4550: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F4554: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F4558: jr          $ra
    // 0x803F455C: nop

    return;
    // 0x803F455C: nop

;}
RECOMP_FUNC void func_803F4560(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F4560: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F4564: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F4568: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803F456C: jal         0x80035770
    // 0x803F4570: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80035770(rdram, ctx);
        goto after_0;
    // 0x803F4570: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x803F4574: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x803F4578: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x803F457C: lbu         $t6, 0x46($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X46);
    // 0x803F4580: nop

    // 0x803F4584: subu        $t8, $t7, $t6
    ctx->r24 = SUB32(ctx->r15, ctx->r14);
    // 0x803F4588: sb          $t8, 0x46($v0)
    MEM_B(0X46, ctx->r2) = ctx->r24;
    // 0x803F458C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F4590: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F4594: jr          $ra
    // 0x803F4598: nop

    return;
    // 0x803F4598: nop

;}
RECOMP_FUNC void func_803F459C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F459C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x803F45A0: jr          $ra
    // 0x803F45A4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x803F45A4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_803F45A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F45A8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x803F45AC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803F45B0: lui         $s0, 0x801B
    ctx->r16 = S32(0X801B << 16);
    // 0x803F45B4: addiu       $s0, $s0, 0x1CF0
    ctx->r16 = ADD32(ctx->r16, 0X1CF0);
    // 0x803F45B8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x803F45BC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x803F45C0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x803F45C4: jal         0x8006F5B8
    // 0x803F45C8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    func_8006F5B8(rdram, ctx);
        goto after_0;
    // 0x803F45C8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    after_0:
    // 0x803F45CC: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x803F45D0: lb          $t6, -0x326C($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X326C);
    // 0x803F45D4: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x803F45D8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803F45DC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803F45E0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803F45E4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803F45E8: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x803F45EC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803F45F0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803F45F4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803F45F8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803F45FC: addiu       $t8, $t8, -0x2CF0
    ctx->r24 = ADD32(ctx->r24, -0X2CF0);
    // 0x803F4600: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x803F4604: lbu         $t9, 0x8AB($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X8AB);
    // 0x803F4608: lb          $a0, 0x8A9($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X8A9);
    // 0x803F460C: lb          $s2, 0x8AA($v0)
    ctx->r18 = MEM_B(ctx->r2, 0X8AA);
    // 0x803F4610: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803F4614: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x803F4618: jal         0x8001D4C0
    // 0x803F461C: sb          $t9, 0x2D($sp)
    MEM_B(0X2D, ctx->r29) = ctx->r25;
    func_8001D4C0(rdram, ctx);
        goto after_1;
    // 0x803F461C: sb          $t9, 0x2D($sp)
    MEM_B(0X2D, ctx->r29) = ctx->r25;
    after_1:
    // 0x803F4620: sll         $s1, $v0, 24
    ctx->r17 = S32(ctx->r2 << 24);
    // 0x803F4624: sra         $t0, $s1, 24
    ctx->r8 = S32(SIGNED(ctx->r17) >> 24);
    // 0x803F4628: or          $s1, $t0, $zero
    ctx->r17 = ctx->r8 | 0;
    // 0x803F462C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x803F4630: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803F4634: jal         0x8001D4C0
    // 0x803F4638: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_8001D4C0(rdram, ctx);
        goto after_2;
    // 0x803F4638: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_2:
    // 0x803F463C: sll         $s2, $v0, 24
    ctx->r18 = S32(ctx->r2 << 24);
    // 0x803F4640: sra         $t1, $s2, 24
    ctx->r9 = S32(SIGNED(ctx->r18) >> 24);
    // 0x803F4644: lb          $a0, 0x2D($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X2D);
    // 0x803F4648: or          $s2, $t1, $zero
    ctx->r18 = ctx->r9 | 0;
    // 0x803F464C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803F4650: jal         0x8001D4C0
    // 0x803F4654: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_8001D4C0(rdram, ctx);
        goto after_3;
    // 0x803F4654: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_3:
    // 0x803F4658: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    // 0x803F465C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803F4660: sb          $t2, 0x44($t3)
    MEM_B(0X44, ctx->r11) = ctx->r10;
    // 0x803F4664: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x803F4668: addiu       $t2, $zero, 0xB
    ctx->r10 = ADD32(0, 0XB);
    // 0x803F466C: sb          $zero, 0x46($t4)
    MEM_B(0X46, ctx->r12) = 0;
    // 0x803F4670: lw          $t5, 0x0($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X0);
    // 0x803F4674: nop

    // 0x803F4678: sb          $s1, 0x3F($t5)
    MEM_B(0X3F, ctx->r13) = ctx->r17;
    // 0x803F467C: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x803F4680: nop

    // 0x803F4684: sb          $s2, 0x40($t6)
    MEM_B(0X40, ctx->r14) = ctx->r18;
    // 0x803F4688: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x803F468C: nop

    // 0x803F4690: sb          $v0, 0x41($t7)
    MEM_B(0X41, ctx->r15) = ctx->r2;
    // 0x803F4694: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x803F4698: nop

    // 0x803F469C: sb          $s1, 0x4A($t8)
    MEM_B(0X4A, ctx->r24) = ctx->r17;
    // 0x803F46A0: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x803F46A4: nop

    // 0x803F46A8: sb          $s2, 0x4B($t9)
    MEM_B(0X4B, ctx->r25) = ctx->r18;
    // 0x803F46AC: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x803F46B0: nop

    // 0x803F46B4: sb          $v0, 0x4C($t0)
    MEM_B(0X4C, ctx->r8) = ctx->r2;
    // 0x803F46B8: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    // 0x803F46BC: nop

    // 0x803F46C0: sb          $zero, 0x4F($t1)
    MEM_B(0X4F, ctx->r9) = 0;
    // 0x803F46C4: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    // 0x803F46C8: nop

    // 0x803F46CC: sb          $t2, 0x50($t3)
    MEM_B(0X50, ctx->r11) = ctx->r10;
    // 0x803F46D0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F46D4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x803F46D8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x803F46DC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F46E0: jr          $ra
    // 0x803F46E4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x803F46E4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_803F46E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F46E8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803F46EC: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x803F46F0: lui         $t9, 0x803F
    ctx->r25 = S32(0X803F << 16);
    // 0x803F46F4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x803F46F8: addiu       $t9, $t9, 0x3710
    ctx->r25 = ADD32(ctx->r25, 0X3710);
    // 0x803F46FC: lw          $a0, 0x1CF0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1CF0);
    // 0x803F4700: addiu       $t6, $zero, 0x140
    ctx->r14 = ADD32(0, 0X140);
    // 0x803F4704: addiu       $t7, $zero, 0x5A
    ctx->r15 = ADD32(0, 0X5A);
    // 0x803F4708: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x803F470C: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x803F4710: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x803F4714: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x803F4718: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x803F471C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803F4720: addiu       $a2, $zero, 0x140
    ctx->r6 = ADD32(0, 0X140);
    // 0x803F4724: jal         0x8004B300
    // 0x803F4728: addiu       $a3, $zero, 0x2A
    ctx->r7 = ADD32(0, 0X2A);
    func_8004B300(rdram, ctx);
        goto after_0;
    // 0x803F4728: addiu       $a3, $zero, 0x2A
    ctx->r7 = ADD32(0, 0X2A);
    after_0:
    // 0x803F472C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F4730: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803F4734: jr          $ra
    // 0x803F4738: nop

    return;
    // 0x803F4738: nop

;}
RECOMP_FUNC void func_803F473C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F473C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803F4740: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x803F4744: lui         $t9, 0x803F
    ctx->r25 = S32(0X803F << 16);
    // 0x803F4748: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x803F474C: addiu       $t9, $t9, 0x3710
    ctx->r25 = ADD32(ctx->r25, 0X3710);
    // 0x803F4750: lw          $a0, 0x1CF0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1CF0);
    // 0x803F4754: addiu       $t6, $zero, 0x140
    ctx->r14 = ADD32(0, 0X140);
    // 0x803F4758: addiu       $t7, $zero, 0x2A
    ctx->r15 = ADD32(0, 0X2A);
    // 0x803F475C: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x803F4760: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x803F4764: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x803F4768: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x803F476C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x803F4770: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803F4774: addiu       $a2, $zero, 0x140
    ctx->r6 = ADD32(0, 0X140);
    // 0x803F4778: jal         0x8004B4B4
    // 0x803F477C: addiu       $a3, $zero, 0x5A
    ctx->r7 = ADD32(0, 0X5A);
    func_8004B4B4(rdram, ctx);
        goto after_0;
    // 0x803F477C: addiu       $a3, $zero, 0x5A
    ctx->r7 = ADD32(0, 0X5A);
    after_0:
    // 0x803F4780: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F4784: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803F4788: jr          $ra
    // 0x803F478C: nop

    return;
    // 0x803F478C: nop

;}
RECOMP_FUNC void func_803F4790(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F4790: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F4794: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803F4798: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F479C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803F47A0: lui         $a0, 0x803F
    ctx->r4 = S32(0X803F << 16);
    // 0x803F47A4: addiu       $a0, $a0, 0x47C0
    ctx->r4 = ADD32(ctx->r4, 0X47C0);
    // 0x803F47A8: jal         0x8002989C
    // 0x803F47AC: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    func_8002989C(rdram, ctx);
        goto after_0;
    // 0x803F47AC: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    after_0:
    // 0x803F47B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F47B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F47B8: jr          $ra
    // 0x803F47BC: nop

    return;
    // 0x803F47BC: nop

;}
RECOMP_FUNC void func_803F47C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F47C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F47C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F47C8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803F47CC: jal         0x803F46E8
    // 0x803F47D0: sb          $zero, 0x38($a0)
    MEM_B(0X38, ctx->r4) = 0;
    func_803F46E8(rdram, ctx);
        goto after_0;
    // 0x803F47D0: sb          $zero, 0x38($a0)
    MEM_B(0X38, ctx->r4) = 0;
    after_0:
    // 0x803F47D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F47D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F47DC: jr          $ra
    // 0x803F47E0: nop

    return;
    // 0x803F47E0: nop

;}
RECOMP_FUNC void func_803F47E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F47E4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x803F47E8: sll         $t6, $a0, 24
    ctx->r14 = S32(ctx->r4 << 24);
    // 0x803F47EC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x803F47F0: sll         $t8, $a1, 24
    ctx->r24 = S32(ctx->r5 << 24);
    // 0x803F47F4: sra         $a1, $t8, 24
    ctx->r5 = S32(SIGNED(ctx->r24) >> 24);
    // 0x803F47F8: sra         $a0, $t6, 24
    ctx->r4 = S32(SIGNED(ctx->r14) >> 24);
    // 0x803F47FC: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
L_803F4800:
    // 0x803F4800: beq         $a0, $zero, L_803F4818
    if (ctx->r4 == 0) {
        // 0x803F4804: nop
    
            goto L_803F4818;
    }
    // 0x803F4804: nop

    // 0x803F4808: beq         $a0, $v0, L_803F4820
    if (ctx->r4 == ctx->r2) {
        // 0x803F480C: nop
    
            goto L_803F4820;
    }
    // 0x803F480C: nop

    // 0x803F4810: b           L_803F4828
    // 0x803F4814: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
        goto L_803F4828;
    // 0x803F4814: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
L_803F4818:
    // 0x803F4818: b           L_803F4830
    // 0x803F481C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
        goto L_803F4830;
    // 0x803F481C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
L_803F4820:
    // 0x803F4820: b           L_803F4830
    // 0x803F4824: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
        goto L_803F4830;
    // 0x803F4824: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
L_803F4828:
    // 0x803F4828: sll         $t0, $a0, 24
    ctx->r8 = S32(ctx->r4 << 24);
    // 0x803F482C: sra         $a0, $t0, 24
    ctx->r4 = S32(SIGNED(ctx->r8) >> 24);
L_803F4830:
    // 0x803F4830: beq         $a0, $a1, L_803F4800
    if (ctx->r4 == ctx->r5) {
        // 0x803F4834: nop
    
            goto L_803F4800;
    }
    // 0x803F4834: nop

    // 0x803F4838: jr          $ra
    // 0x803F483C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    return;
    // 0x803F483C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
;}
RECOMP_FUNC void func_803F4840(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F4840: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x803F4844: sll         $t6, $a0, 24
    ctx->r14 = S32(ctx->r4 << 24);
    // 0x803F4848: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x803F484C: sll         $t8, $a1, 24
    ctx->r24 = S32(ctx->r5 << 24);
    // 0x803F4850: sra         $a1, $t8, 24
    ctx->r5 = S32(SIGNED(ctx->r24) >> 24);
    // 0x803F4854: sra         $a0, $t6, 24
    ctx->r4 = S32(SIGNED(ctx->r14) >> 24);
    // 0x803F4858: addiu       $v1, $zero, 0xF
    ctx->r3 = ADD32(0, 0XF);
    // 0x803F485C: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_803F4860:
    // 0x803F4860: beq         $a0, $v0, L_803F4878
    if (ctx->r4 == ctx->r2) {
        // 0x803F4864: nop
    
            goto L_803F4878;
    }
    // 0x803F4864: nop

    // 0x803F4868: beq         $a0, $v1, L_803F4880
    if (ctx->r4 == ctx->r3) {
        // 0x803F486C: nop
    
            goto L_803F4880;
    }
    // 0x803F486C: nop

    // 0x803F4870: b           L_803F4888
    // 0x803F4874: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
        goto L_803F4888;
    // 0x803F4874: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
L_803F4878:
    // 0x803F4878: b           L_803F4890
    // 0x803F487C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
        goto L_803F4890;
    // 0x803F487C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_803F4880:
    // 0x803F4880: b           L_803F4890
    // 0x803F4884: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
        goto L_803F4890;
    // 0x803F4884: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
L_803F4888:
    // 0x803F4888: sll         $t0, $a0, 24
    ctx->r8 = S32(ctx->r4 << 24);
    // 0x803F488C: sra         $a0, $t0, 24
    ctx->r4 = S32(SIGNED(ctx->r8) >> 24);
L_803F4890:
    // 0x803F4890: beq         $a0, $a1, L_803F4860
    if (ctx->r4 == ctx->r5) {
        // 0x803F4894: nop
    
            goto L_803F4860;
    }
    // 0x803F4894: nop

    // 0x803F4898: jr          $ra
    // 0x803F489C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    return;
    // 0x803F489C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
;}
RECOMP_FUNC void func_803F48A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F48A0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803F48A4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x803F48A8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x803F48AC: sll         $s0, $a0, 24
    ctx->r16 = S32(ctx->r4 << 24);
    // 0x803F48B0: sll         $s1, $a1, 24
    ctx->r17 = S32(ctx->r5 << 24);
    // 0x803F48B4: sra         $t7, $s1, 24
    ctx->r15 = S32(SIGNED(ctx->r17) >> 24);
    // 0x803F48B8: sra         $t6, $s0, 24
    ctx->r14 = S32(SIGNED(ctx->r16) >> 24);
    // 0x803F48BC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803F48C0: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x803F48C4: or          $s1, $t7, $zero
    ctx->r17 = ctx->r15 | 0;
    // 0x803F48C8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x803F48CC: jal         0x80035734
    // 0x803F48D0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_80035734(rdram, ctx);
        goto after_0;
    // 0x803F48D0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
L_803F48D4:
    // 0x803F48D4: bne         $s0, $zero, L_803F48E8
    if (ctx->r16 != 0) {
        // 0x803F48D8: addiu       $s0, $s0, -0x1
        ctx->r16 = ADD32(ctx->r16, -0X1);
            goto L_803F48E8;
    }
    // 0x803F48D8: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x803F48DC: b           L_803F48F0
    // 0x803F48E0: addiu       $s0, $zero, 0xA
    ctx->r16 = ADD32(0, 0XA);
        goto L_803F48F0;
    // 0x803F48E0: addiu       $s0, $zero, 0xA
    ctx->r16 = ADD32(0, 0XA);
    // 0x803F48E4: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
L_803F48E8:
    // 0x803F48E8: sll         $t8, $s0, 24
    ctx->r24 = S32(ctx->r16 << 24);
    // 0x803F48EC: sra         $s0, $t8, 24
    ctx->r16 = S32(SIGNED(ctx->r24) >> 24);
L_803F48F0:
    // 0x803F48F0: beq         $s0, $s1, L_803F48D4
    if (ctx->r16 == ctx->r17) {
        // 0x803F48F4: nop
    
            goto L_803F48D4;
    }
    // 0x803F48F4: nop

    // 0x803F48F8: sll         $a0, $s0, 24
    ctx->r4 = S32(ctx->r16 << 24);
    // 0x803F48FC: sra         $t0, $a0, 24
    ctx->r8 = S32(SIGNED(ctx->r4) >> 24);
    // 0x803F4900: jal         0x8006DED4
    // 0x803F4904: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    func_8006DED4(rdram, ctx);
        goto after_1;
    // 0x803F4904: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    after_1:
    // 0x803F4908: beq         $v0, $zero, L_803F48D4
    if (ctx->r2 == 0) {
        // 0x803F490C: nop
    
            goto L_803F48D4;
    }
    // 0x803F490C: nop

    // 0x803F4910: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F4914: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x803F4918: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x803F491C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x803F4920: jr          $ra
    // 0x803F4924: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x803F4924: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_803F4928(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F4928: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803F492C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x803F4930: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803F4934: sll         $s0, $a0, 24
    ctx->r16 = S32(ctx->r4 << 24);
    // 0x803F4938: sll         $s1, $a1, 24
    ctx->r17 = S32(ctx->r5 << 24);
    // 0x803F493C: sra         $t7, $s1, 24
    ctx->r15 = S32(SIGNED(ctx->r17) >> 24);
    // 0x803F4940: sra         $t6, $s0, 24
    ctx->r14 = S32(SIGNED(ctx->r16) >> 24);
    // 0x803F4944: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x803F4948: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x803F494C: or          $s1, $t7, $zero
    ctx->r17 = ctx->r15 | 0;
    // 0x803F4950: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x803F4954: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x803F4958: jal         0x80035734
    // 0x803F495C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    func_80035734(rdram, ctx);
        goto after_0;
    // 0x803F495C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_0:
    // 0x803F4960: addiu       $s2, $zero, 0xA
    ctx->r18 = ADD32(0, 0XA);
L_803F4964:
    // 0x803F4964: bne         $s0, $s2, L_803F4978
    if (ctx->r16 != ctx->r18) {
        // 0x803F4968: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_803F4978;
    }
    // 0x803F4968: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x803F496C: b           L_803F4980
    // 0x803F4970: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
        goto L_803F4980;
    // 0x803F4970: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x803F4974: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_803F4978:
    // 0x803F4978: sll         $t8, $s0, 24
    ctx->r24 = S32(ctx->r16 << 24);
    // 0x803F497C: sra         $s0, $t8, 24
    ctx->r16 = S32(SIGNED(ctx->r24) >> 24);
L_803F4980:
    // 0x803F4980: beq         $s0, $s1, L_803F4964
    if (ctx->r16 == ctx->r17) {
        // 0x803F4984: nop
    
            goto L_803F4964;
    }
    // 0x803F4984: nop

    // 0x803F4988: sll         $a0, $s0, 24
    ctx->r4 = S32(ctx->r16 << 24);
    // 0x803F498C: sra         $t0, $a0, 24
    ctx->r8 = S32(SIGNED(ctx->r4) >> 24);
    // 0x803F4990: jal         0x8006DED4
    // 0x803F4994: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    func_8006DED4(rdram, ctx);
        goto after_1;
    // 0x803F4994: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    after_1:
    // 0x803F4998: beq         $v0, $zero, L_803F4964
    if (ctx->r2 == 0) {
        // 0x803F499C: nop
    
            goto L_803F4964;
    }
    // 0x803F499C: nop

    // 0x803F49A0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F49A4: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x803F49A8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F49AC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x803F49B0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x803F49B4: jr          $ra
    // 0x803F49B8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x803F49B8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_803F49BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F49BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F49C0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803F49C4: lb          $t8, 0x1B($sp)
    ctx->r24 = MEM_B(ctx->r29, 0X1B);
    // 0x803F49C8: sll         $t6, $a1, 24
    ctx->r14 = S32(ctx->r5 << 24);
    // 0x803F49CC: sra         $t7, $t6, 24
    ctx->r15 = S32(SIGNED(ctx->r14) >> 24);
    // 0x803F49D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F49D4: beq         $t8, $t7, L_803F49E4
    if (ctx->r24 == ctx->r15) {
        // 0x803F49D8: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_803F49E4;
    }
    // 0x803F49D8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803F49DC: b           L_803F4A68
    // 0x803F49E0: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
        goto L_803F4A68;
    // 0x803F49E0: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
L_803F49E4:
    // 0x803F49E4: lui         $t9, 0x801B
    ctx->r25 = S32(0X801B << 16);
    // 0x803F49E8: lw          $t9, 0x1CF0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X1CF0);
    // 0x803F49EC: nop

    // 0x803F49F0: lb          $a0, 0x3F($t9)
    ctx->r4 = MEM_B(ctx->r25, 0X3F);
    // 0x803F49F4: jal         0x8006DED4
    // 0x803F49F8: nop

    func_8006DED4(rdram, ctx);
        goto after_0;
    // 0x803F49F8: nop

    after_0:
    // 0x803F49FC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x803F4A00: bne         $v1, $v0, L_803F4A60
    if (ctx->r3 != ctx->r2) {
        // 0x803F4A04: lui         $t0, 0x801B
        ctx->r8 = S32(0X801B << 16);
            goto L_803F4A60;
    }
    // 0x803F4A04: lui         $t0, 0x801B
    ctx->r8 = S32(0X801B << 16);
    // 0x803F4A08: lw          $t0, 0x1CF0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X1CF0);
    // 0x803F4A0C: nop

    // 0x803F4A10: lb          $a0, 0x40($t0)
    ctx->r4 = MEM_B(ctx->r8, 0X40);
    // 0x803F4A14: jal         0x8006DED4
    // 0x803F4A18: nop

    func_8006DED4(rdram, ctx);
        goto after_1;
    // 0x803F4A18: nop

    after_1:
    // 0x803F4A1C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x803F4A20: bne         $v1, $v0, L_803F4A60
    if (ctx->r3 != ctx->r2) {
        // 0x803F4A24: lui         $t1, 0x801B
        ctx->r9 = S32(0X801B << 16);
            goto L_803F4A60;
    }
    // 0x803F4A24: lui         $t1, 0x801B
    ctx->r9 = S32(0X801B << 16);
    // 0x803F4A28: lw          $t1, 0x1CF0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X1CF0);
    // 0x803F4A2C: nop

    // 0x803F4A30: lb          $a0, 0x41($t1)
    ctx->r4 = MEM_B(ctx->r9, 0X41);
    // 0x803F4A34: jal         0x8006DED4
    // 0x803F4A38: nop

    func_8006DED4(rdram, ctx);
        goto after_2;
    // 0x803F4A38: nop

    after_2:
    // 0x803F4A3C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x803F4A40: bne         $v1, $v0, L_803F4A60
    if (ctx->r3 != ctx->r2) {
        // 0x803F4A44: lui         $t2, 0x801B
        ctx->r10 = S32(0X801B << 16);
            goto L_803F4A60;
    }
    // 0x803F4A44: lui         $t2, 0x801B
    ctx->r10 = S32(0X801B << 16);
    // 0x803F4A48: lw          $t2, 0x1CF0($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X1CF0);
    // 0x803F4A4C: lui         $t3, 0x801B
    ctx->r11 = S32(0X801B << 16);
    // 0x803F4A50: sb          $v1, 0x4D($t2)
    MEM_B(0X4D, ctx->r10) = ctx->r3;
    // 0x803F4A54: lw          $t3, 0x1CF0($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X1CF0);
    // 0x803F4A58: nop

    // 0x803F4A5C: sb          $zero, 0x3C($t3)
    MEM_B(0X3C, ctx->r11) = 0;
L_803F4A60:
    // 0x803F4A60: lb          $v0, 0x1B($sp)
    ctx->r2 = MEM_B(ctx->r29, 0X1B);
    // 0x803F4A64: nop

L_803F4A68:
    // 0x803F4A68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F4A6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F4A70: jr          $ra
    // 0x803F4A74: nop

    return;
    // 0x803F4A74: nop

;}
RECOMP_FUNC void func_803F4A78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F4A78: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803F4A7C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803F4A80: lui         $s0, 0x801B
    ctx->r16 = S32(0X801B << 16);
    // 0x803F4A84: addiu       $s0, $s0, 0x1CF0
    ctx->r16 = ADD32(ctx->r16, 0X1CF0);
    // 0x803F4A88: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x803F4A8C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x803F4A90: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803F4A94: lbu         $a0, 0x23($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X23);
    // 0x803F4A98: lb          $a1, 0x3F($t6)
    ctx->r5 = MEM_B(ctx->r14, 0X3F);
    // 0x803F4A9C: jal         0x80036F74
    // 0x803F4AA0: nop

    func_80036F74(rdram, ctx);
        goto after_0;
    // 0x803F4AA0: nop

    after_0:
    // 0x803F4AA4: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x803F4AA8: nop

    // 0x803F4AAC: sb          $v0, 0x3F($t7)
    MEM_B(0X3F, ctx->r15) = ctx->r2;
    // 0x803F4AB0: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x803F4AB4: lbu         $a0, 0x23($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X23);
    // 0x803F4AB8: lb          $a1, 0x40($t8)
    ctx->r5 = MEM_B(ctx->r24, 0X40);
    // 0x803F4ABC: jal         0x80036F74
    // 0x803F4AC0: nop

    func_80036F74(rdram, ctx);
        goto after_1;
    // 0x803F4AC0: nop

    after_1:
    // 0x803F4AC4: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x803F4AC8: nop

    // 0x803F4ACC: sb          $v0, 0x40($t9)
    MEM_B(0X40, ctx->r25) = ctx->r2;
    // 0x803F4AD0: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x803F4AD4: lbu         $a0, 0x23($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X23);
    // 0x803F4AD8: lb          $a1, 0x41($t0)
    ctx->r5 = MEM_B(ctx->r8, 0X41);
    // 0x803F4ADC: jal         0x80036F74
    // 0x803F4AE0: nop

    func_80036F74(rdram, ctx);
        goto after_2;
    // 0x803F4AE0: nop

    after_2:
    // 0x803F4AE4: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    // 0x803F4AE8: nop

    // 0x803F4AEC: sb          $v0, 0x41($t1)
    MEM_B(0X41, ctx->r9) = ctx->r2;
    // 0x803F4AF0: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x803F4AF4: nop

    // 0x803F4AF8: lb          $t2, 0x3F($v1)
    ctx->r10 = MEM_B(ctx->r3, 0X3F);
    // 0x803F4AFC: nop

    // 0x803F4B00: sb          $t2, 0x4A($v1)
    MEM_B(0X4A, ctx->r3) = ctx->r10;
    // 0x803F4B04: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x803F4B08: nop

    // 0x803F4B0C: lb          $t3, 0x40($v1)
    ctx->r11 = MEM_B(ctx->r3, 0X40);
    // 0x803F4B10: nop

    // 0x803F4B14: sb          $t3, 0x4B($v1)
    MEM_B(0X4B, ctx->r3) = ctx->r11;
    // 0x803F4B18: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x803F4B1C: nop

    // 0x803F4B20: lb          $t4, 0x41($v1)
    ctx->r12 = MEM_B(ctx->r3, 0X41);
    // 0x803F4B24: nop

    // 0x803F4B28: sb          $t4, 0x4C($v1)
    MEM_B(0X4C, ctx->r3) = ctx->r12;
    // 0x803F4B2C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F4B30: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F4B34: jr          $ra
    // 0x803F4B38: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x803F4B38: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_803F4B3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F4B3C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x803F4B40: addiu       $v1, $v1, -0x32B0
    ctx->r3 = ADD32(ctx->r3, -0X32B0);
    // 0x803F4B44: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F4B48:
    // 0x803F4B48: lb          $t6, 0x44($v1)
    ctx->r14 = MEM_B(ctx->r3, 0X44);
    // 0x803F4B4C: addu        $t1, $a0, $v0
    ctx->r9 = ADD32(ctx->r4, ctx->r2);
    // 0x803F4B50: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x803F4B54: addu        $t8, $v1, $t7
    ctx->r24 = ADD32(ctx->r3, ctx->r15);
    // 0x803F4B58: addu        $t9, $t8, $v0
    ctx->r25 = ADD32(ctx->r24, ctx->r2);
    // 0x803F4B5C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x803F4B60: lbu         $t0, 0x1E($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X1E);
    // 0x803F4B64: andi        $t2, $v0, 0xFF
    ctx->r10 = ctx->r2 & 0XFF;
    // 0x803F4B68: slti        $at, $t2, 0x10
    ctx->r1 = SIGNED(ctx->r10) < 0X10 ? 1 : 0;
    // 0x803F4B6C: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
    // 0x803F4B70: bne         $at, $zero, L_803F4B48
    if (ctx->r1 != 0) {
        // 0x803F4B74: sb          $t0, 0x54($t1)
        MEM_B(0X54, ctx->r9) = ctx->r8;
            goto L_803F4B48;
    }
    // 0x803F4B74: sb          $t0, 0x54($t1)
    MEM_B(0X54, ctx->r9) = ctx->r8;
    // 0x803F4B78: jr          $ra
    // 0x803F4B7C: nop

    return;
    // 0x803F4B7C: nop

;}
RECOMP_FUNC void func_803F4B80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F4B80: jr          $ra
    // 0x803F4B84: nop

    return;
    // 0x803F4B84: nop

;}
RECOMP_FUNC void func_803F4B88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F4B88: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F4B8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F4B90: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x803F4B94: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x803F4B98: addiu       $v0, $v0, -0x32B0
    ctx->r2 = ADD32(ctx->r2, -0X32B0);
    // 0x803F4B9C: sb          $t6, 0x49($a0)
    MEM_B(0X49, ctx->r4) = ctx->r14;
    // 0x803F4BA0: lbu         $a0, 0x44($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X44);
    // 0x803F4BA4: jal         0x8006E028
    // 0x803F4BA8: nop

    func_8006E028(rdram, ctx);
        goto after_0;
    // 0x803F4BA8: nop

    after_0:
    // 0x803F4BAC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x803F4BB0: addiu       $v0, $v0, -0x32B0
    ctx->r2 = ADD32(ctx->r2, -0X32B0);
    // 0x803F4BB4: lbu         $t7, 0x3E($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X3E);
    // 0x803F4BB8: nop

    // 0x803F4BBC: bne         $t7, $zero, L_803F4BD8
    if (ctx->r15 != 0) {
        // 0x803F4BC0: nop
    
            goto L_803F4BD8;
    }
    // 0x803F4BC0: nop

    // 0x803F4BC4: lbu         $a0, 0x44($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X44);
    // 0x803F4BC8: jal         0x8006DF08
    // 0x803F4BCC: nop

    func_8006DF08(rdram, ctx);
        goto after_1;
    // 0x803F4BCC: nop

    after_1:
    // 0x803F4BD0: b           L_803F4BE4
    // 0x803F4BD4: nop

        goto L_803F4BE4;
    // 0x803F4BD4: nop

L_803F4BD8:
    // 0x803F4BD8: lbu         $a0, 0x44($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X44);
    // 0x803F4BDC: jal         0x803F4BFC
    // 0x803F4BE0: nop

    func_803F4BFC(rdram, ctx);
        goto after_2;
    // 0x803F4BE0: nop

    after_2:
L_803F4BE4:
    // 0x803F4BE4: jal         0x803F7A6C
    // 0x803F4BE8: nop

    func_803F7A6C(rdram, ctx);
        goto after_3;
    // 0x803F4BE8: nop

    after_3:
    // 0x803F4BEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F4BF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F4BF4: jr          $ra
    // 0x803F4BF8: nop

    return;
    // 0x803F4BF8: nop

;}
RECOMP_FUNC void func_803F4BFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F4BFC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x803F4C00: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x803F4C04: andi        $s2, $a0, 0xFF
    ctx->r18 = ctx->r4 & 0XFF;
    // 0x803F4C08: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803F4C0C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x803F4C10: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x803F4C14: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x803F4C18: addiu       $t7, $t7, -0x32B0
    ctx->r15 = ADD32(ctx->r15, -0X32B0);
    // 0x803F4C1C: sll         $t6, $s2, 4
    ctx->r14 = S32(ctx->r18 << 4);
    // 0x803F4C20: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x803F4C24: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803F4C28: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x803F4C2C: addu        $s4, $t6, $t7
    ctx->r20 = ADD32(ctx->r14, ctx->r15);
    // 0x803F4C30: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x803F4C34: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x803F4C38: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F4C3C:
    // 0x803F4C3C: sll         $s0, $v0, 24
    ctx->r16 = S32(ctx->r2 << 24);
    // 0x803F4C40: sra         $t8, $s0, 24
    ctx->r24 = S32(SIGNED(ctx->r16) >> 24);
    // 0x803F4C44: sll         $a1, $t8, 24
    ctx->r5 = S32(ctx->r24 << 24);
    // 0x803F4C48: sra         $t9, $a1, 24
    ctx->r25 = S32(SIGNED(ctx->r5) >> 24);
    // 0x803F4C4C: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    // 0x803F4C50: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
    // 0x803F4C54: jal         0x8006DE5C
    // 0x803F4C58: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    func_8006DE5C(rdram, ctx);
        goto after_0;
    // 0x803F4C58: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    after_0:
    // 0x803F4C5C: addu        $t0, $s4, $s1
    ctx->r8 = ADD32(ctx->r20, ctx->r17);
    // 0x803F4C60: lb          $t1, 0xC0($t0)
    ctx->r9 = MEM_B(ctx->r8, 0XC0);
    // 0x803F4C64: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    // 0x803F4C68: bne         $s3, $t1, L_803F4C7C
    if (ctx->r19 != ctx->r9) {
        // 0x803F4C6C: sll         $a1, $s0, 24
        ctx->r5 = S32(ctx->r16 << 24);
            goto L_803F4C7C;
    }
    // 0x803F4C6C: sll         $a1, $s0, 24
    ctx->r5 = S32(ctx->r16 << 24);
    // 0x803F4C70: sra         $t2, $a1, 24
    ctx->r10 = S32(SIGNED(ctx->r5) >> 24);
    // 0x803F4C74: jal         0x8006DE18
    // 0x803F4C78: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
    func_8006DE18(rdram, ctx);
        goto after_1;
    // 0x803F4C78: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
    after_1:
L_803F4C7C:
    // 0x803F4C7C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x803F4C80: andi        $v0, $s1, 0xFF
    ctx->r2 = ctx->r17 & 0XFF;
    // 0x803F4C84: slti        $at, $v0, 0x10
    ctx->r1 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x803F4C88: bne         $at, $zero, L_803F4C3C
    if (ctx->r1 != 0) {
        // 0x803F4C8C: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_803F4C3C;
    }
    // 0x803F4C8C: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x803F4C90: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x803F4C94: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F4C98: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x803F4C9C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x803F4CA0: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x803F4CA4: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x803F4CA8: jr          $ra
    // 0x803F4CAC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x803F4CAC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_803F4CB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F4CB0: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x803F4CB4: addiu       $a1, $a1, -0x32B0
    ctx->r5 = ADD32(ctx->r5, -0X32B0);
    // 0x803F4CB8: lbu         $v0, 0xC($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XC);
    // 0x803F4CBC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803F4CC0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803F4CC4: lbu         $a2, 0x45($a1)
    ctx->r6 = MEM_BU(ctx->r5, 0X45);
    // 0x803F4CC8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x803F4CCC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x803F4CD0: beq         $v0, $at, L_803F4CE4
    if (ctx->r2 == ctx->r1) {
        // 0x803F4CD4: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_803F4CE4;
    }
    // 0x803F4CD4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803F4CD8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803F4CDC: bne         $v0, $at, L_803F4DA8
    if (ctx->r2 != ctx->r1) {
        // 0x803F4CE0: nop
    
            goto L_803F4DA8;
    }
    // 0x803F4CE0: nop

L_803F4CE4:
    // 0x803F4CE4: lbu         $t6, 0x3E($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X3E);
    // 0x803F4CE8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x803F4CEC: bne         $t6, $zero, L_803F4DA8
    if (ctx->r14 != 0) {
        // 0x803F4CF0: nop
    
            goto L_803F4DA8;
    }
    // 0x803F4CF0: nop

    // 0x803F4CF4: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x803F4CF8: addu        $a1, $a1, $a2
    ctx->r5 = ADD32(ctx->r5, ctx->r6);
    // 0x803F4CFC: lbu         $a1, -0x2BA8($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X2BA8);
    // 0x803F4D00: jal         0x8005B484
    // 0x803F4D04: sb          $a2, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r6;
    func_8005B484(rdram, ctx);
        goto after_0;
    // 0x803F4D04: sb          $a2, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r6;
    after_0:
    // 0x803F4D08: lbu         $a0, 0x27($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X27);
    // 0x803F4D0C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x803F4D10: sb          $v0, 0x3F($s0)
    MEM_B(0X3F, ctx->r16) = ctx->r2;
    // 0x803F4D14: addu        $a1, $a1, $a0
    ctx->r5 = ADD32(ctx->r5, ctx->r4);
    // 0x803F4D18: lbu         $a1, -0x2B7C($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X2B7C);
    // 0x803F4D1C: jal         0x8005B484
    // 0x803F4D20: nop

    func_8005B484(rdram, ctx);
        goto after_1;
    // 0x803F4D20: nop

    after_1:
    // 0x803F4D24: lbu         $a0, 0x27($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X27);
    // 0x803F4D28: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x803F4D2C: sb          $v0, 0x40($s0)
    MEM_B(0X40, ctx->r16) = ctx->r2;
    // 0x803F4D30: addu        $a1, $a1, $a0
    ctx->r5 = ADD32(ctx->r5, ctx->r4);
    // 0x803F4D34: lbu         $a1, -0x2B50($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X2B50);
    // 0x803F4D38: jal         0x8005B484
    // 0x803F4D3C: nop

    func_8005B484(rdram, ctx);
        goto after_2;
    // 0x803F4D3C: nop

    after_2:
    // 0x803F4D40: lb          $t7, 0x3F($s0)
    ctx->r15 = MEM_B(ctx->r16, 0X3F);
    // 0x803F4D44: sb          $v0, 0x41($s0)
    MEM_B(0X41, ctx->r16) = ctx->r2;
    // 0x803F4D48: slti        $at, $t7, 0xB
    ctx->r1 = SIGNED(ctx->r15) < 0XB ? 1 : 0;
    // 0x803F4D4C: bne         $at, $zero, L_803F4D58
    if (ctx->r1 != 0) {
        // 0x803F4D50: addiu       $v1, $zero, 0xA
        ctx->r3 = ADD32(0, 0XA);
            goto L_803F4D58;
    }
    // 0x803F4D50: addiu       $v1, $zero, 0xA
    ctx->r3 = ADD32(0, 0XA);
    // 0x803F4D54: sb          $v1, 0x3F($s0)
    MEM_B(0X3F, ctx->r16) = ctx->r3;
L_803F4D58:
    // 0x803F4D58: lb          $t8, 0x40($s0)
    ctx->r24 = MEM_B(ctx->r16, 0X40);
    // 0x803F4D5C: addiu       $v1, $zero, 0xA
    ctx->r3 = ADD32(0, 0XA);
    // 0x803F4D60: slti        $at, $t8, 0xB
    ctx->r1 = SIGNED(ctx->r24) < 0XB ? 1 : 0;
    // 0x803F4D64: bne         $at, $zero, L_803F4D70
    if (ctx->r1 != 0) {
        // 0x803F4D68: nop
    
            goto L_803F4D70;
    }
    // 0x803F4D68: nop

    // 0x803F4D6C: sb          $v1, 0x40($s0)
    MEM_B(0X40, ctx->r16) = ctx->r3;
L_803F4D70:
    // 0x803F4D70: lb          $v0, 0x41($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X41);
    // 0x803F4D74: nop

    // 0x803F4D78: slti        $at, $v0, 0xB
    ctx->r1 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
    // 0x803F4D7C: bne         $at, $zero, L_803F4D90
    if (ctx->r1 != 0) {
        // 0x803F4D80: nop
    
            goto L_803F4D90;
    }
    // 0x803F4D80: nop

    // 0x803F4D84: sb          $v1, 0x41($s0)
    MEM_B(0X41, ctx->r16) = ctx->r3;
    // 0x803F4D88: lb          $v0, 0x41($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X41);
    // 0x803F4D8C: nop

L_803F4D90:
    // 0x803F4D90: lb          $t9, 0x3F($s0)
    ctx->r25 = MEM_B(ctx->r16, 0X3F);
    // 0x803F4D94: lb          $t0, 0x40($s0)
    ctx->r8 = MEM_B(ctx->r16, 0X40);
    // 0x803F4D98: sb          $v0, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r2;
    // 0x803F4D9C: sb          $t9, 0x4A($s0)
    MEM_B(0X4A, ctx->r16) = ctx->r25;
    // 0x803F4DA0: b           L_803F4E70
    // 0x803F4DA4: sb          $t0, 0x4B($s0)
    MEM_B(0X4B, ctx->r16) = ctx->r8;
        goto L_803F4E70;
    // 0x803F4DA4: sb          $t0, 0x4B($s0)
    MEM_B(0X4B, ctx->r16) = ctx->r8;
L_803F4DA8:
    // 0x803F4DA8: lb          $t1, 0x44($a1)
    ctx->r9 = MEM_B(ctx->r5, 0X44);
    // 0x803F4DAC: addiu       $v1, $zero, 0xA94
    ctx->r3 = ADD32(0, 0XA94);
    // 0x803F4DB0: multu       $t1, $v1
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x803F4DB4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x803F4DB8: addiu       $v0, $v0, -0x2CF0
    ctx->r2 = ADD32(ctx->r2, -0X2CF0);
    // 0x803F4DBC: mflo        $t2
    ctx->r10 = lo;
    // 0x803F4DC0: addu        $t3, $v0, $t2
    ctx->r11 = ADD32(ctx->r2, ctx->r10);
    // 0x803F4DC4: lbu         $t4, 0x8A9($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X8A9);
    // 0x803F4DC8: nop

    // 0x803F4DCC: sb          $t4, 0x3F($s0)
    MEM_B(0X3F, ctx->r16) = ctx->r12;
    // 0x803F4DD0: lb          $t5, 0x44($a1)
    ctx->r13 = MEM_B(ctx->r5, 0X44);
    // 0x803F4DD4: nop

    // 0x803F4DD8: multu       $t5, $v1
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x803F4DDC: mflo        $t6
    ctx->r14 = lo;
    // 0x803F4DE0: addu        $t7, $v0, $t6
    ctx->r15 = ADD32(ctx->r2, ctx->r14);
    // 0x803F4DE4: lbu         $t8, 0x8AA($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X8AA);
    // 0x803F4DE8: nop

    // 0x803F4DEC: sb          $t8, 0x40($s0)
    MEM_B(0X40, ctx->r16) = ctx->r24;
    // 0x803F4DF0: lb          $t9, 0x44($a1)
    ctx->r25 = MEM_B(ctx->r5, 0X44);
    // 0x803F4DF4: nop

    // 0x803F4DF8: multu       $t9, $v1
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x803F4DFC: mflo        $t0
    ctx->r8 = lo;
    // 0x803F4E00: addu        $t1, $v0, $t0
    ctx->r9 = ADD32(ctx->r2, ctx->r8);
    // 0x803F4E04: lbu         $t2, 0x8AB($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X8AB);
    // 0x803F4E08: nop

    // 0x803F4E0C: sb          $t2, 0x41($s0)
    MEM_B(0X41, ctx->r16) = ctx->r10;
    // 0x803F4E10: lb          $t3, 0x44($a1)
    ctx->r11 = MEM_B(ctx->r5, 0X44);
    // 0x803F4E14: nop

    // 0x803F4E18: multu       $t3, $v1
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x803F4E1C: mflo        $t4
    ctx->r12 = lo;
    // 0x803F4E20: addu        $t5, $v0, $t4
    ctx->r13 = ADD32(ctx->r2, ctx->r12);
    // 0x803F4E24: lbu         $t6, 0x8A9($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X8A9);
    // 0x803F4E28: nop

    // 0x803F4E2C: sb          $t6, 0x4A($s0)
    MEM_B(0X4A, ctx->r16) = ctx->r14;
    // 0x803F4E30: lb          $t7, 0x44($a1)
    ctx->r15 = MEM_B(ctx->r5, 0X44);
    // 0x803F4E34: nop

    // 0x803F4E38: multu       $t7, $v1
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x803F4E3C: mflo        $t8
    ctx->r24 = lo;
    // 0x803F4E40: addu        $t9, $v0, $t8
    ctx->r25 = ADD32(ctx->r2, ctx->r24);
    // 0x803F4E44: lbu         $t0, 0x8AA($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X8AA);
    // 0x803F4E48: nop

    // 0x803F4E4C: sb          $t0, 0x4B($s0)
    MEM_B(0X4B, ctx->r16) = ctx->r8;
    // 0x803F4E50: lb          $t1, 0x44($a1)
    ctx->r9 = MEM_B(ctx->r5, 0X44);
    // 0x803F4E54: nop

    // 0x803F4E58: multu       $t1, $v1
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x803F4E5C: mflo        $t2
    ctx->r10 = lo;
    // 0x803F4E60: addu        $t3, $v0, $t2
    ctx->r11 = ADD32(ctx->r2, ctx->r10);
    // 0x803F4E64: lbu         $t4, 0x8AB($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X8AB);
    // 0x803F4E68: nop

    // 0x803F4E6C: sb          $t4, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r12;
L_803F4E70:
    // 0x803F4E70: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F4E74: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F4E78: jr          $ra
    // 0x803F4E7C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x803F4E7C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_803F4D88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F4D88: lb          $v0, 0x41($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X41);
    // 0x803F4D8C: nop

    // 0x803F4D90: lb          $t9, 0x3F($s0)
    ctx->r25 = MEM_B(ctx->r16, 0X3F);
    // 0x803F4D94: lb          $t0, 0x40($s0)
    ctx->r8 = MEM_B(ctx->r16, 0X40);
    // 0x803F4D98: sb          $v0, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r2;
    // 0x803F4D9C: sb          $t9, 0x4A($s0)
    MEM_B(0X4A, ctx->r16) = ctx->r25;
    // 0x803F4DA0: b           L_803F4E70
    // 0x803F4DA4: sb          $t0, 0x4B($s0)
    MEM_B(0X4B, ctx->r16) = ctx->r8;
        goto L_803F4E70;
    // 0x803F4DA4: sb          $t0, 0x4B($s0)
    MEM_B(0X4B, ctx->r16) = ctx->r8;
    // 0x803F4DA8: lb          $t1, 0x44($a1)
    ctx->r9 = MEM_B(ctx->r5, 0X44);
    // 0x803F4DAC: addiu       $v1, $zero, 0xA94
    ctx->r3 = ADD32(0, 0XA94);
    // 0x803F4DB0: multu       $t1, $v1
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x803F4DB4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x803F4DB8: addiu       $v0, $v0, -0x2CF0
    ctx->r2 = ADD32(ctx->r2, -0X2CF0);
    // 0x803F4DBC: mflo        $t2
    ctx->r10 = lo;
    // 0x803F4DC0: addu        $t3, $v0, $t2
    ctx->r11 = ADD32(ctx->r2, ctx->r10);
    // 0x803F4DC4: lbu         $t4, 0x8A9($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X8A9);
    // 0x803F4DC8: nop

    // 0x803F4DCC: sb          $t4, 0x3F($s0)
    MEM_B(0X3F, ctx->r16) = ctx->r12;
    // 0x803F4DD0: lb          $t5, 0x44($a1)
    ctx->r13 = MEM_B(ctx->r5, 0X44);
    // 0x803F4DD4: nop

    // 0x803F4DD8: multu       $t5, $v1
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x803F4DDC: mflo        $t6
    ctx->r14 = lo;
    // 0x803F4DE0: addu        $t7, $v0, $t6
    ctx->r15 = ADD32(ctx->r2, ctx->r14);
    // 0x803F4DE4: lbu         $t8, 0x8AA($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X8AA);
    // 0x803F4DE8: nop

    // 0x803F4DEC: sb          $t8, 0x40($s0)
    MEM_B(0X40, ctx->r16) = ctx->r24;
    // 0x803F4DF0: lb          $t9, 0x44($a1)
    ctx->r25 = MEM_B(ctx->r5, 0X44);
    // 0x803F4DF4: nop

    // 0x803F4DF8: multu       $t9, $v1
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x803F4DFC: mflo        $t0
    ctx->r8 = lo;
    // 0x803F4E00: addu        $t1, $v0, $t0
    ctx->r9 = ADD32(ctx->r2, ctx->r8);
    // 0x803F4E04: lbu         $t2, 0x8AB($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X8AB);
    // 0x803F4E08: nop

    // 0x803F4E0C: sb          $t2, 0x41($s0)
    MEM_B(0X41, ctx->r16) = ctx->r10;
    // 0x803F4E10: lb          $t3, 0x44($a1)
    ctx->r11 = MEM_B(ctx->r5, 0X44);
    // 0x803F4E14: nop

    // 0x803F4E18: multu       $t3, $v1
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x803F4E1C: mflo        $t4
    ctx->r12 = lo;
    // 0x803F4E20: addu        $t5, $v0, $t4
    ctx->r13 = ADD32(ctx->r2, ctx->r12);
    // 0x803F4E24: lbu         $t6, 0x8A9($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X8A9);
    // 0x803F4E28: nop

    // 0x803F4E2C: sb          $t6, 0x4A($s0)
    MEM_B(0X4A, ctx->r16) = ctx->r14;
    // 0x803F4E30: lb          $t7, 0x44($a1)
    ctx->r15 = MEM_B(ctx->r5, 0X44);
    // 0x803F4E34: nop

    // 0x803F4E38: multu       $t7, $v1
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x803F4E3C: mflo        $t8
    ctx->r24 = lo;
    // 0x803F4E40: addu        $t9, $v0, $t8
    ctx->r25 = ADD32(ctx->r2, ctx->r24);
    // 0x803F4E44: lbu         $t0, 0x8AA($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X8AA);
    // 0x803F4E48: nop

    // 0x803F4E4C: sb          $t0, 0x4B($s0)
    MEM_B(0X4B, ctx->r16) = ctx->r8;
    // 0x803F4E50: lb          $t1, 0x44($a1)
    ctx->r9 = MEM_B(ctx->r5, 0X44);
    // 0x803F4E54: nop

    // 0x803F4E58: multu       $t1, $v1
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x803F4E5C: mflo        $t2
    ctx->r10 = lo;
    // 0x803F4E60: addu        $t3, $v0, $t2
    ctx->r11 = ADD32(ctx->r2, ctx->r10);
    // 0x803F4E64: lbu         $t4, 0x8AB($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X8AB);
    // 0x803F4E68: nop

    // 0x803F4E6C: sb          $t4, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r12;
L_803F4E70:
    // 0x803F4E70: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F4E74: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F4E78: jr          $ra
    // 0x803F4E7C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x803F4E7C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_803F4E80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F4E80: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x803F4E84: lw          $v0, 0x1CF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1CF0);
    // 0x803F4E88: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F4E8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F4E90: lb          $a1, 0x3E($v0)
    ctx->r5 = MEM_B(ctx->r2, 0X3E);
    // 0x803F4E94: lb          $a0, 0x3D($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X3D);
    // 0x803F4E98: jal         0x803F7698
    // 0x803F4E9C: nop

    func_803F7698(rdram, ctx);
        goto after_0;
    // 0x803F4E9C: nop

    after_0:
    // 0x803F4EA0: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x803F4EA4: addiu       $v1, $v1, 0x1CF0
    ctx->r3 = ADD32(ctx->r3, 0X1CF0);
    // 0x803F4EA8: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x803F4EAC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x803F4EB0: sb          $t6, 0x49($t7)
    MEM_B(0X49, ctx->r15) = ctx->r14;
    // 0x803F4EB4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x803F4EB8: nop

    // 0x803F4EBC: lb          $a0, 0x3D($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X3D);
    // 0x803F4EC0: lb          $a1, 0x3E($v0)
    ctx->r5 = MEM_B(ctx->r2, 0X3E);
    // 0x803F4EC4: jal         0x803F7564
    // 0x803F4EC8: nop

    func_803F7564(rdram, ctx);
        goto after_1;
    // 0x803F4EC8: nop

    after_1:
    // 0x803F4ECC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803F4ED0: beq         $v0, $at, L_803F4EF0
    if (ctx->r2 == ctx->r1) {
        // 0x803F4ED4: addiu       $t9, $zero, 0x1
        ctx->r25 = ADD32(0, 0X1);
            goto L_803F4EF0;
    }
    // 0x803F4ED4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x803F4ED8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803F4EDC: beq         $v0, $at, L_803F4EF0
    if (ctx->r2 == ctx->r1) {
        // 0x803F4EE0: lui         $t8, 0x801B
        ctx->r24 = S32(0X801B << 16);
            goto L_803F4EF0;
    }
    // 0x803F4EE0: lui         $t8, 0x801B
    ctx->r24 = S32(0X801B << 16);
    // 0x803F4EE4: lw          $t8, 0x1CF0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X1CF0);
    // 0x803F4EE8: b           L_803F4F1C
    // 0x803F4EEC: sb          $zero, 0x3A($t8)
    MEM_B(0X3A, ctx->r24) = 0;
        goto L_803F4F1C;
    // 0x803F4EEC: sb          $zero, 0x3A($t8)
    MEM_B(0X3A, ctx->r24) = 0;
L_803F4EF0:
    // 0x803F4EF0: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x803F4EF4: lb          $t0, -0x326C($t0)
    ctx->r8 = MEM_B(ctx->r8, -0X326C);
    // 0x803F4EF8: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x803F4EFC: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x803F4F00: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x803F4F04: sll         $t1, $t1, 3
    ctx->r9 = S32(ctx->r9 << 3);
    // 0x803F4F08: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x803F4F0C: lui         $a0, 0x803F
    ctx->r4 = S32(0X803F << 16);
    // 0x803F4F10: sb          $t9, -0x3066($at)
    MEM_B(-0X3066, ctx->r1) = ctx->r25;
    // 0x803F4F14: jal         0x80029220
    // 0x803F4F18: addiu       $a0, $a0, 0x4F2C
    ctx->r4 = ADD32(ctx->r4, 0X4F2C);
    func_80029220(rdram, ctx);
        goto after_2;
    // 0x803F4F18: addiu       $a0, $a0, 0x4F2C
    ctx->r4 = ADD32(ctx->r4, 0X4F2C);
    after_2:
L_803F4F1C:
    // 0x803F4F1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F4F20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F4F24: jr          $ra
    // 0x803F4F28: nop

    return;
    // 0x803F4F28: nop

;}
RECOMP_FUNC void func_803F4EFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F4EFC: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x803F4F00: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x803F4F04: sll         $t1, $t1, 3
    ctx->r9 = S32(ctx->r9 << 3);
    // 0x803F4F08: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x803F4F0C: lui         $a0, 0x803F
    ctx->r4 = S32(0X803F << 16);
    // 0x803F4F10: sb          $t9, -0x3066($at)
    MEM_B(-0X3066, ctx->r1) = ctx->r25;
    // 0x803F4F14: jal         0x80029220
    // 0x803F4F18: addiu       $a0, $a0, 0x4F2C
    ctx->r4 = ADD32(ctx->r4, 0X4F2C);
    func_80029220(rdram, ctx);
        goto after_0;
    // 0x803F4F18: addiu       $a0, $a0, 0x4F2C
    ctx->r4 = ADD32(ctx->r4, 0X4F2C);
    after_0:
    // 0x803F4F1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F4F20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F4F24: jr          $ra
    // 0x803F4F28: nop

    return;
    // 0x803F4F28: nop

;}
RECOMP_FUNC void func_803F4F2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F4F2C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F4F30: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803F4F34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F4F38: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803F4F3C: lui         $a0, 0x803F
    ctx->r4 = S32(0X803F << 16);
    // 0x803F4F40: addiu       $a0, $a0, 0x4F5C
    ctx->r4 = ADD32(ctx->r4, 0X4F5C);
    // 0x803F4F44: jal         0x8002989C
    // 0x803F4F48: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    func_8002989C(rdram, ctx);
        goto after_0;
    // 0x803F4F48: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    after_0:
    // 0x803F4F4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F4F50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F4F54: jr          $ra
    // 0x803F4F58: nop

    return;
    // 0x803F4F58: nop

;}
RECOMP_FUNC void func_803F4F5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F4F5C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x803F4F60: lb          $t6, -0x326C($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X326C);
    // 0x803F4F64: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F4F68: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803F4F6C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F4F70: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803F4F74: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x803F4F78: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x803F4F7C: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x803F4F80: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x803F4F84: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x803F4F88: sb          $zero, -0x3066($at)
    MEM_B(-0X3066, ctx->r1) = 0;
    // 0x803F4F8C: lbu         $t8, 0x44($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X44);
    // 0x803F4F90: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803F4F94: bne         $t8, $at, L_803F4FA4
    if (ctx->r24 != ctx->r1) {
        // 0x803F4F98: addiu       $t0, $zero, 0x1
        ctx->r8 = ADD32(0, 0X1);
            goto L_803F4FA4;
    }
    // 0x803F4F98: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x803F4F9C: b           L_803F4FAC
    // 0x803F4FA0: sb          $zero, 0x44($v0)
    MEM_B(0X44, ctx->r2) = 0;
        goto L_803F4FAC;
    // 0x803F4FA0: sb          $zero, 0x44($v0)
    MEM_B(0X44, ctx->r2) = 0;
L_803F4FA4:
    // 0x803F4FA4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x803F4FA8: sb          $t9, 0x44($v0)
    MEM_B(0X44, ctx->r2) = ctx->r25;
L_803F4FAC:
    // 0x803F4FAC: lb          $v1, 0x3E($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X3E);
    // 0x803F4FB0: nop

    // 0x803F4FB4: slti        $at, $v1, 0xB
    ctx->r1 = SIGNED(ctx->r3) < 0XB ? 1 : 0;
    // 0x803F4FB8: beq         $at, $zero, L_803F4FC8
    if (ctx->r1 == 0) {
        // 0x803F4FBC: nop
    
            goto L_803F4FC8;
    }
    // 0x803F4FBC: nop

    // 0x803F4FC0: b           L_803F4FCC
    // 0x803F4FC4: sb          $v1, 0x4F($v0)
    MEM_B(0X4F, ctx->r2) = ctx->r3;
        goto L_803F4FCC;
    // 0x803F4FC4: sb          $v1, 0x4F($v0)
    MEM_B(0X4F, ctx->r2) = ctx->r3;
L_803F4FC8:
    // 0x803F4FC8: sb          $v1, 0x50($v0)
    MEM_B(0X50, ctx->r2) = ctx->r3;
L_803F4FCC:
    // 0x803F4FCC: sb          $t0, 0x45($v0)
    MEM_B(0X45, ctx->r2) = ctx->r8;
    // 0x803F4FD0: jal         0x800294F8
    // 0x803F4FD4: sb          $zero, 0x3A($v0)
    MEM_B(0X3A, ctx->r2) = 0;
    func_800294F8(rdram, ctx);
        goto after_0;
    // 0x803F4FD4: sb          $zero, 0x3A($v0)
    MEM_B(0X3A, ctx->r2) = 0;
    after_0:
    // 0x803F4FD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F4FDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F4FE0: jr          $ra
    // 0x803F4FE4: nop

    return;
    // 0x803F4FE4: nop

;}
RECOMP_FUNC void func_803F4FE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F4FE8: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803F4FEC: lb          $t7, -0x326C($t7)
    ctx->r15 = MEM_B(ctx->r15, -0X326C);
    // 0x803F4FF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F4FF4: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x803F4FF8: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x803F4FFC: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x803F5000: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x803F5004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F5008: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x803F500C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x803F5010: lui         $a0, 0x803F
    ctx->r4 = S32(0X803F << 16);
    // 0x803F5014: sb          $t6, -0x3066($at)
    MEM_B(-0X3066, ctx->r1) = ctx->r14;
    // 0x803F5018: jal         0x80029220
    // 0x803F501C: addiu       $a0, $a0, 0x5030
    ctx->r4 = ADD32(ctx->r4, 0X5030);
    func_80029220(rdram, ctx);
        goto after_0;
    // 0x803F501C: addiu       $a0, $a0, 0x5030
    ctx->r4 = ADD32(ctx->r4, 0X5030);
    after_0:
    // 0x803F5020: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F5024: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F5028: jr          $ra
    // 0x803F502C: nop

    return;
    // 0x803F502C: nop

;}
RECOMP_FUNC void func_803F5030(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F5030: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F5034: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803F5038: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F503C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803F5040: lui         $a0, 0x803F
    ctx->r4 = S32(0X803F << 16);
    // 0x803F5044: addiu       $a0, $a0, 0x5060
    ctx->r4 = ADD32(ctx->r4, 0X5060);
    // 0x803F5048: jal         0x8002989C
    // 0x803F504C: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    func_8002989C(rdram, ctx);
        goto after_0;
    // 0x803F504C: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_0:
    // 0x803F5050: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F5054: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F5058: jr          $ra
    // 0x803F505C: nop

    return;
    // 0x803F505C: nop

;}
RECOMP_FUNC void func_803F5060(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F5060: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F5064: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F5068: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803F506C: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x803F5070: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x803F5074: sb          $zero, 0x38($v0)
    MEM_B(0X38, ctx->r2) = 0;
    // 0x803F5078: lb          $t6, -0x326C($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X326C);
    // 0x803F507C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x803F5080: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803F5084: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x803F5088: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x803F508C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x803F5090: jal         0x800294F8
    // 0x803F5094: sb          $zero, -0x3066($at)
    MEM_B(-0X3066, ctx->r1) = 0;
    func_800294F8(rdram, ctx);
        goto after_0;
    // 0x803F5094: sb          $zero, -0x3066($at)
    MEM_B(-0X3066, ctx->r1) = 0;
    after_0:
    // 0x803F5098: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F509C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F50A0: jr          $ra
    // 0x803F50A4: nop

    return;
    // 0x803F50A4: nop

;}
RECOMP_FUNC void func_803F50A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F50A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F50AC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803F50B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F50B4: lb          $a0, -0x326B($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X326B);
    // 0x803F50B8: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x803F50BC: addiu       $a2, $zero, 0x17
    ctx->r6 = ADD32(0, 0X17);
    // 0x803F50C0: jal         0x80039F1C
    // 0x803F50C4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80039F1C(rdram, ctx);
        goto after_0;
    // 0x803F50C4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x803F50C8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803F50CC: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x803F50D0: lui         $a1, 0x803C
    ctx->r5 = S32(0X803C << 16);
    // 0x803F50D4: jal         0x8004C2C8
    // 0x803F50D8: addiu       $a1, $a1, 0x674C
    ctx->r5 = ADD32(ctx->r5, 0X674C);
    func_8004C2C8(rdram, ctx);
        goto after_1;
    // 0x803F50D8: addiu       $a1, $a1, 0x674C
    ctx->r5 = ADD32(ctx->r5, 0X674C);
    after_1:
    // 0x803F50DC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803F50E0: lbu         $a0, -0x326B($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326B);
    // 0x803F50E4: lui         $a1, 0x803C
    ctx->r5 = S32(0X803C << 16);
    // 0x803F50E8: jal         0x8004BC1C
    // 0x803F50EC: addiu       $a1, $a1, 0x6758
    ctx->r5 = ADD32(ctx->r5, 0X6758);
    func_8004BC1C(rdram, ctx);
        goto after_2;
    // 0x803F50EC: addiu       $a1, $a1, 0x6758
    ctx->r5 = ADD32(ctx->r5, 0X6758);
    after_2:
    // 0x803F50F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F50F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F50F8: jr          $ra
    // 0x803F50FC: nop

    return;
    // 0x803F50FC: nop

;}
RECOMP_FUNC void func_803F50B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F50B4: lb          $a0, -0x326B($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X326B);
    // 0x803F50B8: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x803F50BC: addiu       $a2, $zero, 0x17
    ctx->r6 = ADD32(0, 0X17);
    // 0x803F50C0: jal         0x80039F1C
    // 0x803F50C4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80039F1C(rdram, ctx);
        goto after_0;
    // 0x803F50C4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x803F50C8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803F50CC: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x803F50D0: lui         $a1, 0x803C
    ctx->r5 = S32(0X803C << 16);
    // 0x803F50D4: jal         0x8004C2C8
    // 0x803F50D8: addiu       $a1, $a1, 0x674C
    ctx->r5 = ADD32(ctx->r5, 0X674C);
    func_8004C2C8(rdram, ctx);
        goto after_1;
    // 0x803F50D8: addiu       $a1, $a1, 0x674C
    ctx->r5 = ADD32(ctx->r5, 0X674C);
    after_1:
    // 0x803F50DC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803F50E0: lbu         $a0, -0x326B($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326B);
    // 0x803F50E4: lui         $a1, 0x803C
    ctx->r5 = S32(0X803C << 16);
    // 0x803F50E8: jal         0x8004BC1C
    // 0x803F50EC: addiu       $a1, $a1, 0x6758
    ctx->r5 = ADD32(ctx->r5, 0X6758);
    func_8004BC1C(rdram, ctx);
        goto after_2;
    // 0x803F50EC: addiu       $a1, $a1, 0x6758
    ctx->r5 = ADD32(ctx->r5, 0X6758);
    after_2:
    // 0x803F50F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F50F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F50F8: jr          $ra
    // 0x803F50FC: nop

    return;
    // 0x803F50FC: nop

;}
RECOMP_FUNC void func_803F5100(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F5100: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803F5104: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F5108: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x803F510C: jal         0x80029354
    // 0x803F5110: addiu       $a0, $a0, -0x1E98
    ctx->r4 = ADD32(ctx->r4, -0X1E98);
    func_80029354(rdram, ctx);
        goto after_0;
    // 0x803F5110: addiu       $a0, $a0, -0x1E98
    ctx->r4 = ADD32(ctx->r4, -0X1E98);
    after_0:
    // 0x803F5114: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x803F5118: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    // 0x803F511C: addiu       $a1, $a1, -0x4CB8
    ctx->r5 = ADD32(ctx->r5, -0X4CB8);
    // 0x803F5120: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F5124: jal         0x8004A298
    // 0x803F5128: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_8004A298(rdram, ctx);
        goto after_1;
    // 0x803F5128: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_1:
    // 0x803F512C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x803F5130: jal         0x8004CE50
    // 0x803F5134: nop

    func_8004CE50(rdram, ctx);
        goto after_2;
    // 0x803F5134: nop

    after_2:
    // 0x803F5138: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F513C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803F5140: jr          $ra
    // 0x803F5144: nop

    return;
    // 0x803F5144: nop

;}
RECOMP_FUNC void func_803F5148(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F5148: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F514C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F5150: lui         $a0, 0x803F
    ctx->r4 = S32(0X803F << 16);
    // 0x803F5154: addiu       $a0, $a0, 0x5170
    ctx->r4 = ADD32(ctx->r4, 0X5170);
    // 0x803F5158: jal         0x800293DC
    // 0x803F515C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800293DC(rdram, ctx);
        goto after_0;
    // 0x803F515C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x803F5160: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F5164: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F5168: jr          $ra
    // 0x803F516C: nop

    return;
    // 0x803F516C: nop

;}
RECOMP_FUNC void func_803F5170(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F5170: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803F5174: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F5178: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x803F517C: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x803F5180: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    // 0x803F5184: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x803F5188: jal         0x8002A468
    // 0x803F518C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_8002A468(rdram, ctx);
        goto after_0;
    // 0x803F518C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_0:
    // 0x803F5190: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x803F5194: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x803F5198: lbu         $t6, 0x38($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X38);
    // 0x803F519C: nop

    // 0x803F51A0: sltiu       $at, $t6, 0x5
    ctx->r1 = ctx->r14 < 0X5 ? 1 : 0;
    // 0x803F51A4: beq         $at, $zero, L_803F5260
    if (ctx->r1 == 0) {
        // 0x803F51A8: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_803F5260;
    }
    // 0x803F51A8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x803F51AC: lui         $at, 0x8040
    ctx->r1 = S32(0X8040 << 16);
    // 0x803F51B0: addu        $at, $at, $t6
    gpr jr_addend_803F51BC = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x803F51B4: lw          $t6, -0x4740($at)
    ctx->r14 = ADD32(ctx->r1, -0X4740);
    // 0x803F51B8: nop

    // 0x803F51BC: jr          $t6
    // 0x803F51C0: nop

    switch (jr_addend_803F51BC >> 2) {
        case 0: goto L_803F5260; break;
        case 1: goto L_803F5260; break;
        case 2: goto L_803F5204; break;
        case 3: goto L_803F51C4; break;
        case 4: goto L_803F524C; break;
        default: switch_error(__func__, 0x803F51BC, 0x803FB8C0);
    }
    // 0x803F51C0: nop

L_803F51C4:
    // 0x803F51C4: lb          $t7, 0x3B($v0)
    ctx->r15 = MEM_B(ctx->r2, 0X3B);
    // 0x803F51C8: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x803F51CC: bne         $t7, $zero, L_803F51F0
    if (ctx->r15 != 0) {
        // 0x803F51D0: lui         $a1, 0x8040
        ctx->r5 = S32(0X8040 << 16);
            goto L_803F51F0;
    }
    // 0x803F51D0: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    // 0x803F51D4: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    // 0x803F51D8: addiu       $a1, $a1, -0x4CAE
    ctx->r5 = ADD32(ctx->r5, -0X4CAE);
    // 0x803F51DC: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x803F51E0: jal         0x8004A298
    // 0x803F51E4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8004A298(rdram, ctx);
        goto after_1;
    // 0x803F51E4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x803F51E8: b           L_803F5264
    // 0x803F51EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F5264;
    // 0x803F51EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F51F0:
    // 0x803F51F0: addiu       $a1, $a1, -0x4CAE
    ctx->r5 = ADD32(ctx->r5, -0X4CAE);
    // 0x803F51F4: jal         0x8004A298
    // 0x803F51F8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8004A298(rdram, ctx);
        goto after_2;
    // 0x803F51F8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_2:
    // 0x803F51FC: b           L_803F5264
    // 0x803F5200: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F5264;
    // 0x803F5200: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F5204:
    // 0x803F5204: lb          $v1, 0x3C($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X3C);
    // 0x803F5208: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803F520C: beq         $v1, $zero, L_803F521C
    if (ctx->r3 == 0) {
        // 0x803F5210: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_803F521C;
    }
    // 0x803F5210: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x803F5214: bne         $v1, $at, L_803F5234
    if (ctx->r3 != ctx->r1) {
        // 0x803F5218: lui         $a1, 0x8040
        ctx->r5 = S32(0X8040 << 16);
            goto L_803F5234;
    }
    // 0x803F5218: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
L_803F521C:
    // 0x803F521C: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    // 0x803F5220: addiu       $a1, $a1, -0x4C90
    ctx->r5 = ADD32(ctx->r5, -0X4C90);
    // 0x803F5224: jal         0x8004A298
    // 0x803F5228: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8004A298(rdram, ctx);
        goto after_3;
    // 0x803F5228: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_3:
    // 0x803F522C: b           L_803F5264
    // 0x803F5230: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F5264;
    // 0x803F5230: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F5234:
    // 0x803F5234: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x803F5238: addiu       $a1, $a1, -0x4C90
    ctx->r5 = ADD32(ctx->r5, -0X4C90);
    // 0x803F523C: jal         0x8004A298
    // 0x803F5240: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8004A298(rdram, ctx);
        goto after_4;
    // 0x803F5240: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x803F5244: b           L_803F5264
    // 0x803F5248: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F5264;
    // 0x803F5248: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F524C:
    // 0x803F524C: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    // 0x803F5250: addiu       $a1, $a1, -0x4C9A
    ctx->r5 = ADD32(ctx->r5, -0X4C9A);
    // 0x803F5254: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x803F5258: jal         0x8004A298
    // 0x803F525C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8004A298(rdram, ctx);
        goto after_5;
    // 0x803F525C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
L_803F5260:
    // 0x803F5260: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F5264:
    // 0x803F5264: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803F5268: jr          $ra
    // 0x803F526C: nop

    return;
    // 0x803F526C: nop

;}
RECOMP_FUNC void func_803F5270(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F5270: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x803F5274: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x803F5278: lui         $a0, 0x803F
    ctx->r4 = S32(0X803F << 16);
    // 0x803F527C: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x803F5280: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x803F5284: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x803F5288: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x803F528C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x803F5290: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x803F5294: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803F5298: addiu       $a0, $a0, 0x5378
    ctx->r4 = ADD32(ctx->r4, 0X5378);
    // 0x803F529C: jal         0x800293DC
    // 0x803F52A0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_800293DC(rdram, ctx);
        goto after_0;
    // 0x803F52A0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_0:
    // 0x803F52A4: lw          $s0, 0x14($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X14);
    // 0x803F52A8: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x803F52AC: beq         $s0, $s2, L_803F5350
    if (ctx->r16 == ctx->r18) {
        // 0x803F52B0: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_803F5350;
    }
    // 0x803F52B0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x803F52B4: lui         $s6, 0x8040
    ctx->r22 = S32(0X8040 << 16);
    // 0x803F52B8: lui         $s5, 0x8040
    ctx->r21 = S32(0X8040 << 16);
    // 0x803F52BC: lui         $s4, 0x8040
    ctx->r20 = S32(0X8040 << 16);
    // 0x803F52C0: lui         $s3, 0x8012
    ctx->r19 = S32(0X8012 << 16);
    // 0x803F52C4: addiu       $s3, $s3, -0x32B0
    ctx->r19 = ADD32(ctx->r19, -0X32B0);
    // 0x803F52C8: addiu       $s4, $s4, -0x4E78
    ctx->r20 = ADD32(ctx->r20, -0X4E78);
    // 0x803F52CC: addiu       $s5, $s5, -0x4E38
    ctx->r21 = ADD32(ctx->r21, -0X4E38);
    // 0x803F52D0: addiu       $s6, $s6, -0x4E58
    ctx->r22 = ADD32(ctx->r22, -0X4E58);
L_803F52D4:
    // 0x803F52D4: lbu         $t6, 0x3E($s3)
    ctx->r14 = MEM_BU(ctx->r19, 0X3E);
    // 0x803F52D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F52DC: bne         $t6, $zero, L_803F5308
    if (ctx->r14 != 0) {
        // 0x803F52E0: sll         $t8, $s1, 3
        ctx->r24 = S32(ctx->r17 << 3);
            goto L_803F5308;
    }
    // 0x803F52E0: sll         $t8, $s1, 3
    ctx->r24 = S32(ctx->r17 << 3);
    // 0x803F52E4: sll         $t7, $s1, 3
    ctx->r15 = S32(ctx->r17 << 3);
    // 0x803F52E8: addu        $v0, $s4, $t7
    ctx->r2 = ADD32(ctx->r20, ctx->r15);
    // 0x803F52EC: lhu         $a1, 0x4($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X4);
    // 0x803F52F0: lw          $a3, 0x0($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X0);
    // 0x803F52F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F52F8: jal         0x8004CD24
    // 0x803F52FC: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_8004CD24(rdram, ctx);
        goto after_1;
    // 0x803F52FC: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_1:
    // 0x803F5300: b           L_803F5320
    // 0x803F5304: lhu         $t9, 0x16($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X16);
        goto L_803F5320;
    // 0x803F5304: lhu         $t9, 0x16($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X16);
L_803F5308:
    // 0x803F5308: addu        $v0, $s6, $t8
    ctx->r2 = ADD32(ctx->r22, ctx->r24);
    // 0x803F530C: lhu         $a1, 0x4($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X4);
    // 0x803F5310: lw          $a3, 0x0($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X0);
    // 0x803F5314: jal         0x8004CD24
    // 0x803F5318: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_8004CD24(rdram, ctx);
        goto after_2;
    // 0x803F5318: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_2:
    // 0x803F531C: lhu         $t9, 0x16($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X16);
L_803F5320:
    // 0x803F5320: addu        $t1, $s5, $s1
    ctx->r9 = ADD32(ctx->r21, ctx->r17);
    // 0x803F5324: ori         $t0, $t9, 0x400
    ctx->r8 = ctx->r25 | 0X400;
    // 0x803F5328: sh          $t0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r8;
    // 0x803F532C: lbu         $a2, 0x0($t1)
    ctx->r6 = MEM_BU(ctx->r9, 0X0);
    // 0x803F5330: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F5334: jal         0x8002135C
    // 0x803F5338: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8002135C(rdram, ctx);
        goto after_3;
    // 0x803F5338: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x803F533C: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x803F5340: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x803F5344: andi        $t2, $s1, 0xFF
    ctx->r10 = ctx->r17 & 0XFF;
    // 0x803F5348: bne         $s0, $s2, L_803F52D4
    if (ctx->r16 != ctx->r18) {
        // 0x803F534C: or          $s1, $t2, $zero
        ctx->r17 = ctx->r10 | 0;
            goto L_803F52D4;
    }
    // 0x803F534C: or          $s1, $t2, $zero
    ctx->r17 = ctx->r10 | 0;
L_803F5350:
    // 0x803F5350: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x803F5354: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F5358: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x803F535C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x803F5360: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x803F5364: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x803F5368: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x803F536C: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x803F5370: jr          $ra
    // 0x803F5374: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x803F5374: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
