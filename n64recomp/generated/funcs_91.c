#include "iss64_recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_803F7564(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F7564: sll         $t6, $a0, 24
    ctx->r14 = S32(ctx->r4 << 24);
    // 0x803F7568: sra         $t7, $t6, 24
    ctx->r15 = S32(SIGNED(ctx->r14) >> 24);
    // 0x803F756C: sll         $t8, $a1, 24
    ctx->r24 = S32(ctx->r5 << 24);
    // 0x803F7570: sra         $t9, $t8, 24
    ctx->r25 = S32(SIGNED(ctx->r24) >> 24);
    // 0x803F7574: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x803F7578: slti        $at, $t7, 0xB
    ctx->r1 = SIGNED(ctx->r15) < 0XB ? 1 : 0;
    // 0x803F757C: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    // 0x803F7580: beq         $at, $zero, L_803F75A4
    if (ctx->r1 == 0) {
        // 0x803F7584: sw          $a0, 0x0($sp)
        MEM_W(0X0, ctx->r29) = ctx->r4;
            goto L_803F75A4;
    }
    // 0x803F7584: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x803F7588: slti        $at, $t9, 0xB
    ctx->r1 = SIGNED(ctx->r25) < 0XB ? 1 : 0;
    // 0x803F758C: beq         $at, $zero, L_803F759C
    if (ctx->r1 == 0) {
        // 0x803F7590: nop
    
            goto L_803F759C;
    }
    // 0x803F7590: nop

    // 0x803F7594: jr          $ra
    // 0x803F7598: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x803F7598: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F759C:
    // 0x803F759C: jr          $ra
    // 0x803F75A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x803F75A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F75A4:
    // 0x803F75A4: slti        $at, $a1, 0xB
    ctx->r1 = SIGNED(ctx->r5) < 0XB ? 1 : 0;
    // 0x803F75A8: beq         $at, $zero, L_803F75B8
    if (ctx->r1 == 0) {
        // 0x803F75AC: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_803F75B8;
    }
    // 0x803F75AC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x803F75B0: jr          $ra
    // 0x803F75B4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    return;
    // 0x803F75B4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_803F75B8:
    // 0x803F75B8: jr          $ra
    // 0x803F75BC: nop

    return;
    // 0x803F75BC: nop

;}
RECOMP_FUNC void func_803F75C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F75C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F75C4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803F75C8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803F75CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F75D0: lb          $a1, 0x1F($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X1F);
    // 0x803F75D4: lbu         $a0, 0x1B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1B);
    // 0x803F75D8: jal         0x8006DD88
    // 0x803F75DC: nop

    func_8006DD88(rdram, ctx);
        goto after_0;
    // 0x803F75DC: nop

    after_0:
    // 0x803F75E0: bne         $v0, $zero, L_803F7610
    if (ctx->r2 != 0) {
        // 0x803F75E4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_803F7610;
    }
    // 0x803F75E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F75E8: lbu         $a0, 0x1B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1B);
    // 0x803F75EC: lb          $a1, 0x1F($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X1F);
    // 0x803F75F0: jal         0x8006DDD0
    // 0x803F75F4: nop

    func_8006DDD0(rdram, ctx);
        goto after_1;
    // 0x803F75F4: nop

    after_1:
    // 0x803F75F8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803F75FC: bne         $v0, $at, L_803F7610
    if (ctx->r2 != ctx->r1) {
        // 0x803F7600: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_803F7610;
    }
    // 0x803F7600: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F7604: b           L_803F7610
    // 0x803F7608: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F7610;
    // 0x803F7608: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x803F760C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F7610:
    // 0x803F7610: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F7614: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F7618: jr          $ra
    // 0x803F761C: nop

    return;
    // 0x803F761C: nop

;}
RECOMP_FUNC void func_803F7620(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F7620: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F7624: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803F7628: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803F762C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F7630: lb          $a1, 0x1F($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X1F);
    // 0x803F7634: lbu         $a0, 0x1B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1B);
    // 0x803F7638: jal         0x8006DD88
    // 0x803F763C: nop

    func_8006DD88(rdram, ctx);
        goto after_0;
    // 0x803F763C: nop

    after_0:
    // 0x803F7640: bne         $v0, $zero, L_803F7688
    if (ctx->r2 != 0) {
        // 0x803F7644: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_803F7688;
    }
    // 0x803F7644: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F7648: lbu         $a0, 0x1B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1B);
    // 0x803F764C: lb          $a1, 0x1F($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X1F);
    // 0x803F7650: jal         0x8006DDD0
    // 0x803F7654: nop

    func_8006DDD0(rdram, ctx);
        goto after_1;
    // 0x803F7654: nop

    after_1:
    // 0x803F7658: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803F765C: bne         $v0, $at, L_803F7688
    if (ctx->r2 != ctx->r1) {
        // 0x803F7660: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_803F7688;
    }
    // 0x803F7660: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F7664: lbu         $a0, 0x1B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1B);
    // 0x803F7668: lb          $a1, 0x1F($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X1F);
    // 0x803F766C: jal         0x8006DD40
    // 0x803F7670: nop

    func_8006DD40(rdram, ctx);
        goto after_2;
    // 0x803F7670: nop

    after_2:
    // 0x803F7674: bne         $v0, $zero, L_803F7688
    if (ctx->r2 != 0) {
        // 0x803F7678: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_803F7688;
    }
    // 0x803F7678: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F767C: b           L_803F7688
    // 0x803F7680: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F7688;
    // 0x803F7680: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x803F7684: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F7688:
    // 0x803F7688: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F768C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F7690: jr          $ra
    // 0x803F7694: nop

    return;
    // 0x803F7694: nop

;}
RECOMP_FUNC void func_803F7698(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F7698: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x803F769C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803F76A0: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x803F76A4: addiu       $s0, $s0, -0x32B0
    ctx->r16 = ADD32(ctx->r16, -0X32B0);
    // 0x803F76A8: lb          $t6, 0x44($s0)
    ctx->r14 = MEM_B(ctx->r16, 0X44);
    // 0x803F76AC: lbu         $v0, 0x3E($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3E);
    // 0x803F76B0: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x803F76B4: addu        $t8, $s0, $t7
    ctx->r24 = ADD32(ctx->r16, ctx->r15);
    // 0x803F76B8: addiu       $t9, $t8, 0x1E
    ctx->r25 = ADD32(ctx->r24, 0X1E);
    // 0x803F76BC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803F76C0: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x803F76C4: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x803F76C8: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    // 0x803F76CC: beq         $v0, $zero, L_803F76E8
    if (ctx->r2 == 0) {
        // 0x803F76D0: sb          $zero, 0x27($sp)
        MEM_B(0X27, ctx->r29) = 0;
            goto L_803F76E8;
    }
    // 0x803F76D0: sb          $zero, 0x27($sp)
    MEM_B(0X27, ctx->r29) = 0;
    // 0x803F76D4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803F76D8: beq         $v0, $at, L_803F77AC
    if (ctx->r2 == ctx->r1) {
        // 0x803F76DC: lb          $a0, 0x33($sp)
        ctx->r4 = MEM_B(ctx->r29, 0X33);
            goto L_803F77AC;
    }
    // 0x803F76DC: lb          $a0, 0x33($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X33);
    // 0x803F76E0: b           L_803F78A4
    // 0x803F76E4: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
        goto L_803F78A4;
    // 0x803F76E4: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
L_803F76E8:
    // 0x803F76E8: lb          $a0, 0x33($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X33);
    // 0x803F76EC: lb          $a1, 0x37($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X37);
    // 0x803F76F0: jal         0x803F7564
    // 0x803F76F4: nop

    func_803F7564(rdram, ctx);
        goto after_0;
    // 0x803F76F4: nop

    after_0:
    // 0x803F76F8: beq         $v0, $zero, L_803F78A0
    if (ctx->r2 == 0) {
        // 0x803F76FC: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_803F78A0;
    }
    // 0x803F76FC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803F7700: beq         $v0, $at, L_803F7728
    if (ctx->r2 == ctx->r1) {
        // 0x803F7704: addiu       $t0, $zero, 0x1
        ctx->r8 = ADD32(0, 0X1);
            goto L_803F7728;
    }
    // 0x803F7704: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x803F7708: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803F770C: beq         $v0, $at, L_803F7768
    if (ctx->r2 == ctx->r1) {
        // 0x803F7710: addiu       $t1, $zero, 0x1
        ctx->r9 = ADD32(0, 0X1);
            goto L_803F7768;
    }
    // 0x803F7710: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x803F7714: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x803F7718: beq         $v0, $at, L_803F78A4
    if (ctx->r2 == ctx->r1) {
        // 0x803F771C: lw          $t3, 0x28($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X28);
            goto L_803F78A4;
    }
    // 0x803F771C: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x803F7720: b           L_803F78A4
    // 0x803F7724: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
        goto L_803F78A4;
    // 0x803F7724: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
L_803F7728:
    // 0x803F7728: lbu         $a0, 0x44($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X44);
    // 0x803F772C: lb          $a1, 0x33($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X33);
    // 0x803F7730: jal         0x8006DCB0
    // 0x803F7734: sb          $t0, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r8;
    func_8006DCB0(rdram, ctx);
        goto after_1;
    // 0x803F7734: sb          $t0, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r8;
    after_1:
    // 0x803F7738: beq         $v0, $zero, L_803F78A4
    if (ctx->r2 == 0) {
        // 0x803F773C: lw          $t3, 0x28($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X28);
            goto L_803F78A4;
    }
    // 0x803F773C: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x803F7740: lbu         $a0, 0x44($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X44);
    // 0x803F7744: lb          $a1, 0x33($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X33);
    // 0x803F7748: jal         0x8006DE5C
    // 0x803F774C: nop

    func_8006DE5C(rdram, ctx);
        goto after_2;
    // 0x803F774C: nop

    after_2:
    // 0x803F7750: lbu         $a0, 0x44($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X44);
    // 0x803F7754: lb          $a1, 0x37($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X37);
    // 0x803F7758: jal         0x8006DE18
    // 0x803F775C: nop

    func_8006DE18(rdram, ctx);
        goto after_3;
    // 0x803F775C: nop

    after_3:
    // 0x803F7760: b           L_803F78A4
    // 0x803F7764: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
        goto L_803F78A4;
    // 0x803F7764: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
L_803F7768:
    // 0x803F7768: lbu         $a0, 0x44($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X44);
    // 0x803F776C: lb          $a1, 0x37($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X37);
    // 0x803F7770: jal         0x8006DCB0
    // 0x803F7774: sb          $t1, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r9;
    func_8006DCB0(rdram, ctx);
        goto after_4;
    // 0x803F7774: sb          $t1, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r9;
    after_4:
    // 0x803F7778: beq         $v0, $zero, L_803F78A4
    if (ctx->r2 == 0) {
        // 0x803F777C: lw          $t3, 0x28($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X28);
            goto L_803F78A4;
    }
    // 0x803F777C: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x803F7780: lbu         $a0, 0x44($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X44);
    // 0x803F7784: lb          $a1, 0x37($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X37);
    // 0x803F7788: jal         0x8006DE5C
    // 0x803F778C: nop

    func_8006DE5C(rdram, ctx);
        goto after_5;
    // 0x803F778C: nop

    after_5:
    // 0x803F7790: lbu         $a0, 0x44($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X44);
    // 0x803F7794: lb          $a1, 0x33($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X33);
    // 0x803F7798: jal         0x8006DE18
    // 0x803F779C: nop

    func_8006DE18(rdram, ctx);
        goto after_6;
    // 0x803F779C: nop

    after_6:
    // 0x803F77A0: b           L_803F78A4
    // 0x803F77A4: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
        goto L_803F78A4;
    // 0x803F77A4: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x803F77A8: lb          $a0, 0x33($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X33);
L_803F77AC:
    // 0x803F77AC: lb          $a1, 0x37($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X37);
    // 0x803F77B0: jal         0x803F7564
    // 0x803F77B4: nop

    func_803F7564(rdram, ctx);
        goto after_7;
    // 0x803F77B4: nop

    after_7:
    // 0x803F77B8: beq         $v0, $zero, L_803F78A0
    if (ctx->r2 == 0) {
        // 0x803F77BC: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_803F78A0;
    }
    // 0x803F77BC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803F77C0: beq         $v0, $at, L_803F77E0
    if (ctx->r2 == ctx->r1) {
        // 0x803F77C4: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_803F77E0;
    }
    // 0x803F77C4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803F77C8: beq         $v0, $at, L_803F7844
    if (ctx->r2 == ctx->r1) {
        // 0x803F77CC: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_803F7844;
    }
    // 0x803F77CC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x803F77D0: beq         $v0, $at, L_803F78A4
    if (ctx->r2 == ctx->r1) {
        // 0x803F77D4: lw          $t3, 0x28($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X28);
            goto L_803F78A4;
    }
    // 0x803F77D4: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x803F77D8: b           L_803F78A4
    // 0x803F77DC: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
        goto L_803F78A4;
    // 0x803F77DC: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
L_803F77E0:
    // 0x803F77E0: lbu         $a0, 0x44($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X44);
    // 0x803F77E4: jal         0x800488A4
    // 0x803F77E8: nop

    func_800488A4(rdram, ctx);
        goto after_8;
    // 0x803F77E8: nop

    after_8:
    // 0x803F77EC: lbu         $a0, 0x44($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X44);
    // 0x803F77F0: lb          $a1, 0x33($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X33);
    // 0x803F77F4: jal         0x8006DCB0
    // 0x803F77F8: nop

    func_8006DCB0(rdram, ctx);
        goto after_9;
    // 0x803F77F8: nop

    after_9:
    // 0x803F77FC: beq         $v0, $zero, L_803F7828
    if (ctx->r2 == 0) {
        // 0x803F7800: lb          $a0, 0x33($sp)
        ctx->r4 = MEM_B(ctx->r29, 0X33);
            goto L_803F7828;
    }
    // 0x803F7800: lb          $a0, 0x33($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X33);
    // 0x803F7804: lbu         $a0, 0x44($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X44);
    // 0x803F7808: lb          $a1, 0x33($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X33);
    // 0x803F780C: jal         0x8006DE5C
    // 0x803F7810: nop

    func_8006DE5C(rdram, ctx);
        goto after_10;
    // 0x803F7810: nop

    after_10:
    // 0x803F7814: lbu         $a0, 0x44($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X44);
    // 0x803F7818: lb          $a1, 0x37($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X37);
    // 0x803F781C: jal         0x8006DE18
    // 0x803F7820: nop

    func_8006DE18(rdram, ctx);
        goto after_11;
    // 0x803F7820: nop

    after_11:
    // 0x803F7824: lb          $a0, 0x33($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X33);
L_803F7828:
    // 0x803F7828: jal         0x803F78D8
    // 0x803F782C: nop

    func_803F78D8(rdram, ctx);
        goto after_12;
    // 0x803F782C: nop

    after_12:
    // 0x803F7830: lb          $a0, 0x37($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X37);
    // 0x803F7834: jal         0x803F7A2C
    // 0x803F7838: nop

    func_803F7A2C(rdram, ctx);
        goto after_13;
    // 0x803F7838: nop

    after_13:
    // 0x803F783C: b           L_803F78A4
    // 0x803F7840: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
        goto L_803F78A4;
    // 0x803F7840: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
L_803F7844:
    // 0x803F7844: lbu         $a0, 0x44($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X44);
    // 0x803F7848: jal         0x800488A4
    // 0x803F784C: nop

    func_800488A4(rdram, ctx);
        goto after_14;
    // 0x803F784C: nop

    after_14:
    // 0x803F7850: lbu         $a0, 0x44($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X44);
    // 0x803F7854: lb          $a1, 0x37($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X37);
    // 0x803F7858: jal         0x8006DCB0
    // 0x803F785C: nop

    func_8006DCB0(rdram, ctx);
        goto after_15;
    // 0x803F785C: nop

    after_15:
    // 0x803F7860: beq         $v0, $zero, L_803F788C
    if (ctx->r2 == 0) {
        // 0x803F7864: lb          $a0, 0x37($sp)
        ctx->r4 = MEM_B(ctx->r29, 0X37);
            goto L_803F788C;
    }
    // 0x803F7864: lb          $a0, 0x37($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X37);
    // 0x803F7868: lbu         $a0, 0x44($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X44);
    // 0x803F786C: lb          $a1, 0x37($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X37);
    // 0x803F7870: jal         0x8006DE5C
    // 0x803F7874: nop

    func_8006DE5C(rdram, ctx);
        goto after_16;
    // 0x803F7874: nop

    after_16:
    // 0x803F7878: lbu         $a0, 0x44($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X44);
    // 0x803F787C: lb          $a1, 0x33($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X33);
    // 0x803F7880: jal         0x8006DE18
    // 0x803F7884: nop

    func_8006DE18(rdram, ctx);
        goto after_17;
    // 0x803F7884: nop

    after_17:
    // 0x803F7888: lb          $a0, 0x37($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X37);
L_803F788C:
    // 0x803F788C: jal         0x803F78D8
    // 0x803F7890: nop

    func_803F78D8(rdram, ctx);
        goto after_18;
    // 0x803F7890: nop

    after_18:
    // 0x803F7894: lb          $a0, 0x33($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X33);
    // 0x803F7898: jal         0x803F7A2C
    // 0x803F789C: nop

    func_803F7A2C(rdram, ctx);
        goto after_19;
    // 0x803F789C: nop

    after_19:
L_803F78A0:
    // 0x803F78A0: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
L_803F78A4:
    // 0x803F78A4: lb          $t2, 0x33($sp)
    ctx->r10 = MEM_B(ctx->r29, 0X33);
    // 0x803F78A8: lb          $t4, 0x37($sp)
    ctx->r12 = MEM_B(ctx->r29, 0X37);
    // 0x803F78AC: addu        $v0, $t2, $t3
    ctx->r2 = ADD32(ctx->r10, ctx->r11);
    // 0x803F78B0: addu        $v1, $t4, $t3
    ctx->r3 = ADD32(ctx->r12, ctx->r11);
    // 0x803F78B4: lb          $a0, 0x0($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X0);
    // 0x803F78B8: lbu         $t5, 0x0($v1)
    ctx->r13 = MEM_BU(ctx->r3, 0X0);
    // 0x803F78BC: nop

    // 0x803F78C0: sb          $t5, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r13;
    // 0x803F78C4: sb          $a0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r4;
    // 0x803F78C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F78CC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F78D0: jr          $ra
    // 0x803F78D4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x803F78D4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_803F78D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F78D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F78DC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803F78E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F78E4: lb          $a0, 0x1B($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X1B);
    // 0x803F78E8: jal         0x803F7914
    // 0x803F78EC: nop

    func_803F7914(rdram, ctx);
        goto after_0;
    // 0x803F78EC: nop

    after_0:
    // 0x803F78F0: bne         $v0, $zero, L_803F7908
    if (ctx->r2 != 0) {
        // 0x803F78F4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_803F7908;
    }
    // 0x803F78F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F78F8: lb          $a0, 0x1B($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X1B);
    // 0x803F78FC: jal         0x803F79EC
    // 0x803F7900: nop

    func_803F79EC(rdram, ctx);
        goto after_1;
    // 0x803F7900: nop

    after_1:
    // 0x803F7904: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F7908:
    // 0x803F7908: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F790C: jr          $ra
    // 0x803F7910: nop

    return;
    // 0x803F7910: nop

;}
RECOMP_FUNC void func_803F7914(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F7914: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x803F7918: lb          $t8, -0x326C($t8)
    ctx->r24 = MEM_B(ctx->r24, -0X326C);
    // 0x803F791C: sll         $t6, $a0, 24
    ctx->r14 = S32(ctx->r4 << 24);
    // 0x803F7920: sll         $t1, $t8, 2
    ctx->r9 = S32(ctx->r24 << 2);
    // 0x803F7924: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x803F7928: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x803F792C: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x803F7930: sll         $t1, $t1, 3
    ctx->r9 = S32(ctx->r9 << 3);
    // 0x803F7934: sra         $t7, $t6, 24
    ctx->r15 = S32(SIGNED(ctx->r14) >> 24);
    // 0x803F7938: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x803F793C: sll         $t9, $t8, 4
    ctx->r25 = S32(ctx->r24 << 4);
    // 0x803F7940: addu        $t0, $t9, $t7
    ctx->r8 = ADD32(ctx->r25, ctx->r15);
    // 0x803F7944: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x803F7948: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x803F794C: addu        $v1, $v1, $t0
    ctx->r3 = ADD32(ctx->r3, ctx->r8);
    // 0x803F7950: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x803F7954: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x803F7958: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x803F795C: addiu       $t2, $t2, -0x2CF0
    ctx->r10 = ADD32(ctx->r10, -0X2CF0);
    // 0x803F7960: lbu         $v1, -0x3292($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3292);
    // 0x803F7964: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x803F7968: addu        $a1, $t1, $t2
    ctx->r5 = ADD32(ctx->r9, ctx->r10);
    // 0x803F796C: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
L_803F7970:
    // 0x803F7970: addu        $t3, $a1, $v0
    ctx->r11 = ADD32(ctx->r5, ctx->r2);
    // 0x803F7974: lbu         $t4, 0x308($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X308);
    // 0x803F7978: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x803F797C: bne         $v1, $t4, L_803F798C
    if (ctx->r3 != ctx->r12) {
        // 0x803F7980: andi        $t5, $v0, 0xFF
        ctx->r13 = ctx->r2 & 0XFF;
            goto L_803F798C;
    }
    // 0x803F7980: andi        $t5, $v0, 0xFF
    ctx->r13 = ctx->r2 & 0XFF;
    // 0x803F7984: jr          $ra
    // 0x803F7988: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x803F7988: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F798C:
    // 0x803F798C: slti        $at, $t5, 0x10
    ctx->r1 = SIGNED(ctx->r13) < 0X10 ? 1 : 0;
    // 0x803F7990: bne         $at, $zero, L_803F7970
    if (ctx->r1 != 0) {
        // 0x803F7994: or          $v0, $t5, $zero
        ctx->r2 = ctx->r13 | 0;
            goto L_803F7970;
    }
    // 0x803F7994: or          $v0, $t5, $zero
    ctx->r2 = ctx->r13 | 0;
    // 0x803F7998: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F799C: jr          $ra
    // 0x803F79A0: nop

    return;
    // 0x803F79A0: nop

;}
RECOMP_FUNC void func_803F79A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F79A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F79A8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803F79AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F79B0: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x803F79B4: jal         0x8006DCB0
    // 0x803F79B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8006DCB0(rdram, ctx);
        goto after_0;
    // 0x803F79B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x803F79BC: bne         $v0, $zero, L_803F79D8
    if (ctx->r2 != 0) {
        // 0x803F79C0: lui         $a0, 0x8012
        ctx->r4 = S32(0X8012 << 16);
            goto L_803F79D8;
    }
    // 0x803F79C0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803F79C4: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x803F79C8: jal         0x803F75C0
    // 0x803F79CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_803F75C0(rdram, ctx);
        goto after_1;
    // 0x803F79CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x803F79D0: b           L_803F79E0
    // 0x803F79D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F79E0;
    // 0x803F79D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F79D8:
    // 0x803F79D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F79DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F79E0:
    // 0x803F79E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F79E4: jr          $ra
    // 0x803F79E8: nop

    return;
    // 0x803F79E8: nop

;}
RECOMP_FUNC void func_803F79EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F79EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F79F0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803F79F4: or          $t6, $a0, $zero
    ctx->r14 = ctx->r4 | 0;
    // 0x803F79F8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803F79FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F7A00: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x803F7A04: jal         0x8004DD18
    // 0x803F7A08: andi        $a1, $t6, 0xFF
    ctx->r5 = ctx->r14 & 0XFF;
    func_8004DD18(rdram, ctx);
        goto after_0;
    // 0x803F7A08: andi        $a1, $t6, 0xFF
    ctx->r5 = ctx->r14 & 0XFF;
    after_0:
    // 0x803F7A0C: lbu         $t7, 0x1E($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X1E);
    // 0x803F7A10: nop

    // 0x803F7A14: ori         $t8, $t7, 0x2
    ctx->r24 = ctx->r15 | 0X2;
    // 0x803F7A18: sb          $t8, 0x1E($v0)
    MEM_B(0X1E, ctx->r2) = ctx->r24;
    // 0x803F7A1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F7A20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F7A24: jr          $ra
    // 0x803F7A28: nop

    return;
    // 0x803F7A28: nop

;}
RECOMP_FUNC void func_803F7A2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F7A2C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F7A30: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803F7A34: or          $t6, $a0, $zero
    ctx->r14 = ctx->r4 | 0;
    // 0x803F7A38: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803F7A3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F7A40: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x803F7A44: jal         0x8004DD18
    // 0x803F7A48: andi        $a1, $t6, 0xFF
    ctx->r5 = ctx->r14 & 0XFF;
    func_8004DD18(rdram, ctx);
        goto after_0;
    // 0x803F7A48: andi        $a1, $t6, 0xFF
    ctx->r5 = ctx->r14 & 0XFF;
    after_0:
    // 0x803F7A4C: lbu         $t7, 0x1E($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X1E);
    // 0x803F7A50: nop

    // 0x803F7A54: andi        $t8, $t7, 0xFFFD
    ctx->r24 = ctx->r15 & 0XFFFD;
    // 0x803F7A58: sb          $t8, 0x1E($v0)
    MEM_B(0X1E, ctx->r2) = ctx->r24;
    // 0x803F7A5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F7A60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F7A64: jr          $ra
    // 0x803F7A68: nop

    return;
    // 0x803F7A68: nop

;}
RECOMP_FUNC void func_803F7A6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F7A6C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803F7A70: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x803F7A74: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x803F7A78: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803F7A7C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x803F7A80: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_803F7A84:
    // 0x803F7A84: sll         $a0, $s1, 24
    ctx->r4 = S32(ctx->r17 << 24);
    // 0x803F7A88: sra         $t6, $a0, 24
    ctx->r14 = S32(SIGNED(ctx->r4) >> 24);
    // 0x803F7A8C: jal         0x803F7A2C
    // 0x803F7A90: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_803F7A2C(rdram, ctx);
        goto after_0;
    // 0x803F7A90: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_0:
    // 0x803F7A94: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x803F7A98: andi        $s1, $s0, 0xFF
    ctx->r17 = ctx->r16 & 0XFF;
    // 0x803F7A9C: slti        $at, $s1, 0x10
    ctx->r1 = SIGNED(ctx->r17) < 0X10 ? 1 : 0;
    // 0x803F7AA0: bne         $at, $zero, L_803F7A84
    if (ctx->r1 != 0) {
        // 0x803F7AA4: or          $s0, $s1, $zero
        ctx->r16 = ctx->r17 | 0;
            goto L_803F7A84;
    }
    // 0x803F7AA4: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
    // 0x803F7AA8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F7AAC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x803F7AB0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x803F7AB4: jr          $ra
    // 0x803F7AB8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x803F7AB8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_803F7ABC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F7ABC: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x803F7AC0: lb          $t6, -0x326C($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X326C);
    // 0x803F7AC4: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x803F7AC8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803F7ACC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803F7AD0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803F7AD4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803F7AD8: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x803F7ADC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803F7AE0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803F7AE4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803F7AE8: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x803F7AEC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803F7AF0: addiu       $t8, $t8, -0x2CF0
    ctx->r24 = ADD32(ctx->r24, -0X2CF0);
    // 0x803F7AF4: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x803F7AF8: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x803F7AFC: lbu         $a2, 0x1($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X1);
    // 0x803F7B00: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x803F7B04: sll         $t9, $a2, 2
    ctx->r25 = S32(ctx->r6 << 2);
    // 0x803F7B08: subu        $t9, $t9, $a2
    ctx->r25 = SUB32(ctx->r25, ctx->r6);
    // 0x803F7B0C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803F7B10: lbu         $a1, 0x5B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X5B);
    // 0x803F7B14: subu        $t9, $t9, $a2
    ctx->r25 = SUB32(ctx->r25, ctx->r6);
    // 0x803F7B18: sll         $t3, $t9, 2
    ctx->r11 = S32(ctx->r25 << 2);
    // 0x803F7B1C: subu        $t3, $t3, $t9
    ctx->r11 = SUB32(ctx->r11, ctx->r25);
    // 0x803F7B20: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x803F7B24: sll         $t3, $t3, 1
    ctx->r11 = S32(ctx->r11 << 1);
    // 0x803F7B28: subu        $t6, $t6, $a1
    ctx->r14 = SUB32(ctx->r14, ctx->r5);
    // 0x803F7B2C: sll         $t6, $t6, 1
    ctx->r14 = S32(ctx->r14 << 1);
    // 0x803F7B30: addu        $t4, $v0, $t3
    ctx->r12 = ADD32(ctx->r2, ctx->r11);
    // 0x803F7B34: addu        $v1, $t4, $t6
    ctx->r3 = ADD32(ctx->r12, ctx->r14);
    // 0x803F7B38: lbu         $t0, 0x57($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X57);
    // 0x803F7B3C: lh          $t1, 0x418($v1)
    ctx->r9 = MEM_H(ctx->r3, 0X418);
    // 0x803F7B40: lh          $t2, 0x41A($v1)
    ctx->r10 = MEM_H(ctx->r3, 0X41A);
    // 0x803F7B44: lui         $t8, 0x8040
    ctx->r24 = S32(0X8040 << 16);
    // 0x803F7B48: addiu       $t8, $t8, -0x4CF8
    ctx->r24 = ADD32(ctx->r24, -0X4CF8);
    // 0x803F7B4C: sll         $t7, $t0, 4
    ctx->r15 = S32(ctx->r8 << 4);
    // 0x803F7B50: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x803F7B54: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x803F7B58: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803F7B5C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x803F7B60: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x803F7B64: lwl         $at, 0x0($t9)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r25, 0X0);
    // 0x803F7B68: lwr         $at, 0x3($t9)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r25, 0X3);
    // 0x803F7B6C: lui         $t6, 0x8040
    ctx->r14 = S32(0X8040 << 16);
    // 0x803F7B70: swl         $at, 0x18($sp)
    do_swl(rdram, 0X18, ctx->r29, ctx->r1);
    // 0x803F7B74: swr         $at, 0x1B($sp)
    do_swr(rdram, 0X1B, ctx->r29, ctx->r1);
    // 0x803F7B78: lwl         $t4, 0x4($t9)
    ctx->r12 = do_lwl(rdram, ctx->r12, ctx->r25, 0X4);
    // 0x803F7B7C: lwr         $t4, 0x7($t9)
    ctx->r12 = do_lwr(rdram, ctx->r12, ctx->r25, 0X7);
    // 0x803F7B80: addiu       $t6, $t6, -0x4CD8
    ctx->r14 = ADD32(ctx->r14, -0X4CD8);
    // 0x803F7B84: swl         $t4, 0x1C($sp)
    do_swl(rdram, 0X1C, ctx->r29, ctx->r12);
    // 0x803F7B88: swr         $t4, 0x1F($sp)
    do_swr(rdram, 0X1F, ctx->r29, ctx->r12);
    // 0x803F7B8C: lwl         $at, 0x8($t9)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r25, 0X8);
    // 0x803F7B90: lwr         $at, 0xB($t9)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r25, 0XB);
    // 0x803F7B94: addu        $t5, $t7, $t6
    ctx->r13 = ADD32(ctx->r15, ctx->r14);
    // 0x803F7B98: swl         $at, 0x20($sp)
    do_swl(rdram, 0X20, ctx->r29, ctx->r1);
    // 0x803F7B9C: swr         $at, 0x23($sp)
    do_swr(rdram, 0X23, ctx->r29, ctx->r1);
    // 0x803F7BA0: lwl         $t4, 0xC($t9)
    ctx->r12 = do_lwl(rdram, ctx->r12, ctx->r25, 0XC);
    // 0x803F7BA4: lwr         $t4, 0xF($t9)
    ctx->r12 = do_lwr(rdram, ctx->r12, ctx->r25, 0XF);
    // 0x803F7BA8: lb          $a3, 0x57($sp)
    ctx->r7 = MEM_B(ctx->r29, 0X57);
    // 0x803F7BAC: swl         $t4, 0x24($sp)
    do_swl(rdram, 0X24, ctx->r29, ctx->r12);
    // 0x803F7BB0: swr         $t4, 0x27($sp)
    do_swr(rdram, 0X27, ctx->r29, ctx->r12);
    // 0x803F7BB4: lwl         $at, 0x0($t5)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r13, 0X0);
    // 0x803F7BB8: lwr         $at, 0x3($t5)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r13, 0X3);
    // 0x803F7BBC: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    // 0x803F7BC0: swl         $at, 0x28($sp)
    do_swl(rdram, 0X28, ctx->r29, ctx->r1);
    // 0x803F7BC4: swr         $at, 0x2B($sp)
    do_swr(rdram, 0X2B, ctx->r29, ctx->r1);
    // 0x803F7BC8: lwl         $t8, 0x4($t5)
    ctx->r24 = do_lwl(rdram, ctx->r24, ctx->r13, 0X4);
    // 0x803F7BCC: lwr         $t8, 0x7($t5)
    ctx->r24 = do_lwr(rdram, ctx->r24, ctx->r13, 0X7);
    // 0x803F7BD0: or          $t0, $t7, $zero
    ctx->r8 = ctx->r15 | 0;
    // 0x803F7BD4: swl         $t8, 0x2C($sp)
    do_swl(rdram, 0X2C, ctx->r29, ctx->r24);
    // 0x803F7BD8: swr         $t8, 0x2F($sp)
    do_swr(rdram, 0X2F, ctx->r29, ctx->r24);
    // 0x803F7BDC: lwl         $at, 0x8($t5)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r13, 0X8);
    // 0x803F7BE0: lwr         $at, 0xB($t5)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r13, 0XB);
    // 0x803F7BE4: nop

    // 0x803F7BE8: swl         $at, 0x30($sp)
    do_swl(rdram, 0X30, ctx->r29, ctx->r1);
    // 0x803F7BEC: swr         $at, 0x33($sp)
    do_swr(rdram, 0X33, ctx->r29, ctx->r1);
    // 0x803F7BF0: lwl         $t8, 0xC($t5)
    ctx->r24 = do_lwl(rdram, ctx->r24, ctx->r13, 0XC);
    // 0x803F7BF4: lwr         $t8, 0xF($t5)
    ctx->r24 = do_lwr(rdram, ctx->r24, ctx->r13, 0XF);
    // 0x803F7BF8: nop

    // 0x803F7BFC: swl         $t8, 0x34($sp)
    do_swl(rdram, 0X34, ctx->r29, ctx->r24);
    // 0x803F7C00: jal         0x8006D974
    // 0x803F7C04: swr         $t8, 0x37($sp)
    do_swr(rdram, 0X37, ctx->r29, ctx->r24);
    func_8006D974(rdram, ctx);
        goto after_0;
    // 0x803F7C04: swr         $t8, 0x37($sp)
    do_swr(rdram, 0X37, ctx->r29, ctx->r24);
    after_0:
    // 0x803F7C08: addiu       $t3, $sp, 0x44
    ctx->r11 = ADD32(ctx->r29, 0X44);
    // 0x803F7C0C: lw          $v0, 0x50($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X50);
    // 0x803F7C10: lw          $at, 0x0($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X0);
    // 0x803F7C14: nop

    // 0x803F7C18: swl         $at, 0x0($v0)
    do_swl(rdram, 0X0, ctx->r2, ctx->r1);
    // 0x803F7C1C: swr         $at, 0x3($v0)
    do_swr(rdram, 0X3, ctx->r2, ctx->r1);
    // 0x803F7C20: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x803F7C24: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x803F7C28: jr          $ra
    // 0x803F7C2C: nop

    return;
    // 0x803F7C2C: nop

;}
RECOMP_FUNC void func_803F7C30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F7C30: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803F7C34: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803F7C38: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803F7C3C: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x803F7C40: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x803F7C44: lw          $v1, 0x8($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X8);
    // 0x803F7C48: nop

    // 0x803F7C4C: lb          $t7, 0x3F($v1)
    ctx->r15 = MEM_B(ctx->r3, 0X3F);
    // 0x803F7C50: nop

    // 0x803F7C54: sb          $t7, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r15;
    // 0x803F7C58: lb          $t8, 0x4D($v1)
    ctx->r24 = MEM_B(ctx->r3, 0X4D);
    // 0x803F7C5C: nop

    // 0x803F7C60: beq         $t8, $zero, L_803F7CB4
    if (ctx->r24 == 0) {
        // 0x803F7C64: lb          $t0, 0x27($sp)
        ctx->r8 = MEM_B(ctx->r29, 0X27);
            goto L_803F7CB4;
    }
    // 0x803F7C64: lb          $t0, 0x27($sp)
    ctx->r8 = MEM_B(ctx->r29, 0X27);
    // 0x803F7C68: lb          $t9, 0x3C($v1)
    ctx->r25 = MEM_B(ctx->r3, 0X3C);
    // 0x803F7C6C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803F7C70: bne         $t9, $at, L_803F7C98
    if (ctx->r25 != ctx->r1) {
        // 0x803F7C74: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F7C98;
    }
    // 0x803F7C74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F7C78: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x803F7C7C: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    // 0x803F7C80: addiu       $a1, $a1, -0x4C1C
    ctx->r5 = ADD32(ctx->r5, -0X4C1C);
    // 0x803F7C84: jal         0x8002B9DC
    // 0x803F7C88: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    func_8002B9DC(rdram, ctx);
        goto after_0;
    // 0x803F7C88: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    after_0:
    // 0x803F7C8C: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x803F7C90: b           L_803F7CB4
    // 0x803F7C94: lb          $t0, 0x27($sp)
    ctx->r8 = MEM_B(ctx->r29, 0X27);
        goto L_803F7CB4;
    // 0x803F7C94: lb          $t0, 0x27($sp)
    ctx->r8 = MEM_B(ctx->r29, 0X27);
L_803F7C98:
    // 0x803F7C98: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    // 0x803F7C9C: addiu       $a1, $a1, -0x4C10
    ctx->r5 = ADD32(ctx->r5, -0X4C10);
    // 0x803F7CA0: jal         0x8002B9DC
    // 0x803F7CA4: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    func_8002B9DC(rdram, ctx);
        goto after_1;
    // 0x803F7CA4: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    after_1:
    // 0x803F7CA8: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x803F7CAC: nop

    // 0x803F7CB0: lb          $t0, 0x27($sp)
    ctx->r8 = MEM_B(ctx->r29, 0X27);
L_803F7CB4:
    // 0x803F7CB4: lui         $t2, 0x8040
    ctx->r10 = S32(0X8040 << 16);
    // 0x803F7CB8: addiu       $t2, $t2, -0x4F40
    ctx->r10 = ADD32(ctx->r10, -0X4F40);
    // 0x803F7CBC: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x803F7CC0: addu        $v0, $t1, $t2
    ctx->r2 = ADD32(ctx->r9, ctx->r10);
    // 0x803F7CC4: lh          $a1, 0x0($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X0);
    // 0x803F7CC8: lh          $a2, 0x2($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X2);
    // 0x803F7CCC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F7CD0: jal         0x8002AB30
    // 0x803F7CD4: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    func_8002AB30(rdram, ctx);
        goto after_2;
    // 0x803F7CD4: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    after_2:
    // 0x803F7CD8: lw          $a1, 0x38($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X38);
    // 0x803F7CDC: jal         0x8002AF64
    // 0x803F7CE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8002AF64(rdram, ctx);
        goto after_3;
    // 0x803F7CE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x803F7CE4: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x803F7CE8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803F7CEC: lbu         $t3, 0x44($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0X44);
    // 0x803F7CF0: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x803F7CF4: bne         $t3, $at, L_803F7D04
    if (ctx->r11 != ctx->r1) {
        // 0x803F7CF8: nop
    
            goto L_803F7D04;
    }
    // 0x803F7CF8: nop

    // 0x803F7CFC: b           L_803F7D08
    // 0x803F7D00: sb          $t4, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r12;
        goto L_803F7D08;
    // 0x803F7D00: sb          $t4, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r12;
L_803F7D04:
    // 0x803F7D04: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
L_803F7D08:
    // 0x803F7D08: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F7D0C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F7D10: jr          $ra
    // 0x803F7D14: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x803F7D14: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_803F7D18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F7D18: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803F7D1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F7D20: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x803F7D24: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x803F7D28: lw          $t7, 0x8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X8);
    // 0x803F7D2C: lui         $t9, 0x8040
    ctx->r25 = S32(0X8040 << 16);
    // 0x803F7D30: lw          $v1, 0x8($t7)
    ctx->r3 = MEM_W(ctx->r15, 0X8);
    // 0x803F7D34: addiu       $t9, $t9, -0x4F40
    ctx->r25 = ADD32(ctx->r25, -0X4F40);
    // 0x803F7D38: lb          $a3, 0x4A($v1)
    ctx->r7 = MEM_B(ctx->r3, 0X4A);
    // 0x803F7D3C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x803F7D40: sll         $t8, $a3, 2
    ctx->r24 = S32(ctx->r7 << 2);
    // 0x803F7D44: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x803F7D48: lh          $a1, 0x0($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X0);
    // 0x803F7D4C: lh          $a2, 0x2($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X2);
    // 0x803F7D50: jal         0x8004CD44
    // 0x803F7D54: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_8004CD44(rdram, ctx);
        goto after_0;
    // 0x803F7D54: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_0:
    // 0x803F7D58: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x803F7D5C: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x803F7D60: lb          $t0, 0x3F($v1)
    ctx->r8 = MEM_B(ctx->r3, 0X3F);
    // 0x803F7D64: lb          $t1, 0x4A($v1)
    ctx->r9 = MEM_B(ctx->r3, 0X4A);
    // 0x803F7D68: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803F7D6C: bne         $t0, $t1, L_803F7D7C
    if (ctx->r8 != ctx->r9) {
        // 0x803F7D70: nop
    
            goto L_803F7D7C;
    }
    // 0x803F7D70: nop

    // 0x803F7D74: b           L_803F7D80
    // 0x803F7D78: sb          $zero, 0x4($v0)
    MEM_B(0X4, ctx->r2) = 0;
        goto L_803F7D80;
    // 0x803F7D78: sb          $zero, 0x4($v0)
    MEM_B(0X4, ctx->r2) = 0;
L_803F7D7C:
    // 0x803F7D7C: sb          $t2, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r10;
L_803F7D80:
    // 0x803F7D80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F7D84: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803F7D88: jr          $ra
    // 0x803F7D8C: nop

    return;
    // 0x803F7D8C: nop

;}
RECOMP_FUNC void func_803F7D90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F7D90: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803F7D94: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803F7D98: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803F7D9C: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x803F7DA0: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x803F7DA4: lw          $v1, 0x8($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X8);
    // 0x803F7DA8: nop

    // 0x803F7DAC: lb          $t7, 0x40($v1)
    ctx->r15 = MEM_B(ctx->r3, 0X40);
    // 0x803F7DB0: nop

    // 0x803F7DB4: sb          $t7, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r15;
    // 0x803F7DB8: lb          $t8, 0x4D($v1)
    ctx->r24 = MEM_B(ctx->r3, 0X4D);
    // 0x803F7DBC: nop

    // 0x803F7DC0: beq         $t8, $zero, L_803F7E14
    if (ctx->r24 == 0) {
        // 0x803F7DC4: lb          $t0, 0x27($sp)
        ctx->r8 = MEM_B(ctx->r29, 0X27);
            goto L_803F7E14;
    }
    // 0x803F7DC4: lb          $t0, 0x27($sp)
    ctx->r8 = MEM_B(ctx->r29, 0X27);
    // 0x803F7DC8: lb          $t9, 0x3C($v1)
    ctx->r25 = MEM_B(ctx->r3, 0X3C);
    // 0x803F7DCC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x803F7DD0: bne         $t9, $at, L_803F7DF8
    if (ctx->r25 != ctx->r1) {
        // 0x803F7DD4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F7DF8;
    }
    // 0x803F7DD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F7DD8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x803F7DDC: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    // 0x803F7DE0: addiu       $a1, $a1, -0x4C08
    ctx->r5 = ADD32(ctx->r5, -0X4C08);
    // 0x803F7DE4: jal         0x8002B9DC
    // 0x803F7DE8: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    func_8002B9DC(rdram, ctx);
        goto after_0;
    // 0x803F7DE8: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    after_0:
    // 0x803F7DEC: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x803F7DF0: b           L_803F7E14
    // 0x803F7DF4: lb          $t0, 0x27($sp)
    ctx->r8 = MEM_B(ctx->r29, 0X27);
        goto L_803F7E14;
    // 0x803F7DF4: lb          $t0, 0x27($sp)
    ctx->r8 = MEM_B(ctx->r29, 0X27);
L_803F7DF8:
    // 0x803F7DF8: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    // 0x803F7DFC: addiu       $a1, $a1, -0x4BFC
    ctx->r5 = ADD32(ctx->r5, -0X4BFC);
    // 0x803F7E00: jal         0x8002B9DC
    // 0x803F7E04: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    func_8002B9DC(rdram, ctx);
        goto after_1;
    // 0x803F7E04: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    after_1:
    // 0x803F7E08: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x803F7E0C: nop

    // 0x803F7E10: lb          $t0, 0x27($sp)
    ctx->r8 = MEM_B(ctx->r29, 0X27);
L_803F7E14:
    // 0x803F7E14: lui         $t2, 0x8040
    ctx->r10 = S32(0X8040 << 16);
    // 0x803F7E18: addiu       $t2, $t2, -0x4F40
    ctx->r10 = ADD32(ctx->r10, -0X4F40);
    // 0x803F7E1C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x803F7E20: addu        $v0, $t1, $t2
    ctx->r2 = ADD32(ctx->r9, ctx->r10);
    // 0x803F7E24: lh          $a1, 0x0($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X0);
    // 0x803F7E28: lh          $a2, 0x2($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X2);
    // 0x803F7E2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F7E30: jal         0x8002AB30
    // 0x803F7E34: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    func_8002AB30(rdram, ctx);
        goto after_2;
    // 0x803F7E34: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    after_2:
    // 0x803F7E38: lw          $a1, 0x38($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X38);
    // 0x803F7E3C: jal         0x8002AF64
    // 0x803F7E40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8002AF64(rdram, ctx);
        goto after_3;
    // 0x803F7E40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x803F7E44: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x803F7E48: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803F7E4C: lbu         $t3, 0x44($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0X44);
    // 0x803F7E50: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x803F7E54: bne         $t3, $at, L_803F7E64
    if (ctx->r11 != ctx->r1) {
        // 0x803F7E58: nop
    
            goto L_803F7E64;
    }
    // 0x803F7E58: nop

    // 0x803F7E5C: b           L_803F7E68
    // 0x803F7E60: sb          $t4, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r12;
        goto L_803F7E68;
    // 0x803F7E60: sb          $t4, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r12;
L_803F7E64:
    // 0x803F7E64: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
L_803F7E68:
    // 0x803F7E68: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F7E6C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F7E70: jr          $ra
    // 0x803F7E74: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x803F7E74: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_803F7E78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F7E78: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803F7E7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F7E80: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x803F7E84: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x803F7E88: lw          $t7, 0x8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X8);
    // 0x803F7E8C: lui         $t9, 0x8040
    ctx->r25 = S32(0X8040 << 16);
    // 0x803F7E90: lw          $v1, 0x8($t7)
    ctx->r3 = MEM_W(ctx->r15, 0X8);
    // 0x803F7E94: addiu       $t9, $t9, -0x4F40
    ctx->r25 = ADD32(ctx->r25, -0X4F40);
    // 0x803F7E98: lb          $a3, 0x4B($v1)
    ctx->r7 = MEM_B(ctx->r3, 0X4B);
    // 0x803F7E9C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x803F7EA0: sll         $t8, $a3, 2
    ctx->r24 = S32(ctx->r7 << 2);
    // 0x803F7EA4: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x803F7EA8: lh          $a1, 0x0($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X0);
    // 0x803F7EAC: lh          $a2, 0x2($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X2);
    // 0x803F7EB0: jal         0x8004CD44
    // 0x803F7EB4: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_8004CD44(rdram, ctx);
        goto after_0;
    // 0x803F7EB4: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_0:
    // 0x803F7EB8: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x803F7EBC: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x803F7EC0: lb          $t0, 0x40($v1)
    ctx->r8 = MEM_B(ctx->r3, 0X40);
    // 0x803F7EC4: lb          $t1, 0x4B($v1)
    ctx->r9 = MEM_B(ctx->r3, 0X4B);
    // 0x803F7EC8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803F7ECC: bne         $t0, $t1, L_803F7EDC
    if (ctx->r8 != ctx->r9) {
        // 0x803F7ED0: nop
    
            goto L_803F7EDC;
    }
    // 0x803F7ED0: nop

    // 0x803F7ED4: b           L_803F7EE0
    // 0x803F7ED8: sb          $zero, 0x4($v0)
    MEM_B(0X4, ctx->r2) = 0;
        goto L_803F7EE0;
    // 0x803F7ED8: sb          $zero, 0x4($v0)
    MEM_B(0X4, ctx->r2) = 0;
L_803F7EDC:
    // 0x803F7EDC: sb          $t2, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r10;
L_803F7EE0:
    // 0x803F7EE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F7EE4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803F7EE8: jr          $ra
    // 0x803F7EEC: nop

    return;
    // 0x803F7EEC: nop

;}
RECOMP_FUNC void func_803F7EF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F7EF0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803F7EF4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803F7EF8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803F7EFC: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x803F7F00: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x803F7F04: lw          $v1, 0x8($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X8);
    // 0x803F7F08: nop

    // 0x803F7F0C: lb          $t7, 0x41($v1)
    ctx->r15 = MEM_B(ctx->r3, 0X41);
    // 0x803F7F10: nop

    // 0x803F7F14: sb          $t7, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r15;
    // 0x803F7F18: lb          $t8, 0x4D($v1)
    ctx->r24 = MEM_B(ctx->r3, 0X4D);
    // 0x803F7F1C: nop

    // 0x803F7F20: beq         $t8, $zero, L_803F7F74
    if (ctx->r24 == 0) {
        // 0x803F7F24: lb          $t0, 0x27($sp)
        ctx->r8 = MEM_B(ctx->r29, 0X27);
            goto L_803F7F74;
    }
    // 0x803F7F24: lb          $t0, 0x27($sp)
    ctx->r8 = MEM_B(ctx->r29, 0X27);
    // 0x803F7F28: lb          $t9, 0x3C($v1)
    ctx->r25 = MEM_B(ctx->r3, 0X3C);
    // 0x803F7F2C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x803F7F30: bne         $t9, $at, L_803F7F58
    if (ctx->r25 != ctx->r1) {
        // 0x803F7F34: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F7F58;
    }
    // 0x803F7F34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F7F38: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x803F7F3C: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    // 0x803F7F40: addiu       $a1, $a1, -0x4BF4
    ctx->r5 = ADD32(ctx->r5, -0X4BF4);
    // 0x803F7F44: jal         0x8002B9DC
    // 0x803F7F48: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    func_8002B9DC(rdram, ctx);
        goto after_0;
    // 0x803F7F48: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    after_0:
    // 0x803F7F4C: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x803F7F50: b           L_803F7F74
    // 0x803F7F54: lb          $t0, 0x27($sp)
    ctx->r8 = MEM_B(ctx->r29, 0X27);
        goto L_803F7F74;
    // 0x803F7F54: lb          $t0, 0x27($sp)
    ctx->r8 = MEM_B(ctx->r29, 0X27);
L_803F7F58:
    // 0x803F7F58: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    // 0x803F7F5C: addiu       $a1, $a1, -0x4BE8
    ctx->r5 = ADD32(ctx->r5, -0X4BE8);
    // 0x803F7F60: jal         0x8002B9DC
    // 0x803F7F64: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    func_8002B9DC(rdram, ctx);
        goto after_1;
    // 0x803F7F64: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    after_1:
    // 0x803F7F68: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x803F7F6C: nop

    // 0x803F7F70: lb          $t0, 0x27($sp)
    ctx->r8 = MEM_B(ctx->r29, 0X27);
L_803F7F74:
    // 0x803F7F74: lui         $t2, 0x8040
    ctx->r10 = S32(0X8040 << 16);
    // 0x803F7F78: addiu       $t2, $t2, -0x4F40
    ctx->r10 = ADD32(ctx->r10, -0X4F40);
    // 0x803F7F7C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x803F7F80: addu        $v0, $t1, $t2
    ctx->r2 = ADD32(ctx->r9, ctx->r10);
    // 0x803F7F84: lh          $a1, 0x0($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X0);
    // 0x803F7F88: lh          $a2, 0x2($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X2);
    // 0x803F7F8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F7F90: jal         0x8002AB30
    // 0x803F7F94: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    func_8002AB30(rdram, ctx);
        goto after_2;
    // 0x803F7F94: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    after_2:
    // 0x803F7F98: lw          $a1, 0x38($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X38);
    // 0x803F7F9C: jal         0x8002AF64
    // 0x803F7FA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8002AF64(rdram, ctx);
        goto after_3;
    // 0x803F7FA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x803F7FA4: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x803F7FA8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803F7FAC: lbu         $t3, 0x44($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0X44);
    // 0x803F7FB0: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x803F7FB4: bne         $t3, $at, L_803F7FC4
    if (ctx->r11 != ctx->r1) {
        // 0x803F7FB8: nop
    
            goto L_803F7FC4;
    }
    // 0x803F7FB8: nop

    // 0x803F7FBC: b           L_803F7FC8
    // 0x803F7FC0: sb          $t4, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r12;
        goto L_803F7FC8;
    // 0x803F7FC0: sb          $t4, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r12;
L_803F7FC4:
    // 0x803F7FC4: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
L_803F7FC8:
    // 0x803F7FC8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F7FCC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F7FD0: jr          $ra
    // 0x803F7FD4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x803F7FD4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_803F7FD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F7FD8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803F7FDC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F7FE0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x803F7FE4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x803F7FE8: lw          $t7, 0x8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X8);
    // 0x803F7FEC: lui         $t9, 0x8040
    ctx->r25 = S32(0X8040 << 16);
    // 0x803F7FF0: lw          $v1, 0x8($t7)
    ctx->r3 = MEM_W(ctx->r15, 0X8);
    // 0x803F7FF4: addiu       $t9, $t9, -0x4F40
    ctx->r25 = ADD32(ctx->r25, -0X4F40);
    // 0x803F7FF8: lb          $a3, 0x4C($v1)
    ctx->r7 = MEM_B(ctx->r3, 0X4C);
    // 0x803F7FFC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x803F8000: sll         $t8, $a3, 2
    ctx->r24 = S32(ctx->r7 << 2);
    // 0x803F8004: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x803F8008: lh          $a1, 0x0($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X0);
    // 0x803F800C: lh          $a2, 0x2($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X2);
    // 0x803F8010: jal         0x8004CD44
    // 0x803F8014: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_8004CD44(rdram, ctx);
        goto after_0;
    // 0x803F8014: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_0:
    // 0x803F8018: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x803F801C: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x803F8020: lb          $t0, 0x41($v1)
    ctx->r8 = MEM_B(ctx->r3, 0X41);
    // 0x803F8024: lb          $t1, 0x4C($v1)
    ctx->r9 = MEM_B(ctx->r3, 0X4C);
    // 0x803F8028: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803F802C: bne         $t0, $t1, L_803F803C
    if (ctx->r8 != ctx->r9) {
        // 0x803F8030: nop
    
            goto L_803F803C;
    }
    // 0x803F8030: nop

    // 0x803F8034: b           L_803F8040
    // 0x803F8038: sb          $zero, 0x4($v0)
    MEM_B(0X4, ctx->r2) = 0;
        goto L_803F8040;
    // 0x803F8038: sb          $zero, 0x4($v0)
    MEM_B(0X4, ctx->r2) = 0;
L_803F803C:
    // 0x803F803C: sb          $t2, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r10;
L_803F8040:
    // 0x803F8040: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F8044: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803F8048: jr          $ra
    // 0x803F804C: nop

    return;
    // 0x803F804C: nop

;}
RECOMP_FUNC void func_803F8050(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F8050: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803F8054: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803F8058: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803F805C: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x803F8060: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x803F8064: lw          $t7, 0x8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X8);
    // 0x803F8068: nop

    // 0x803F806C: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x803F8070: lbu         $a2, 0x71($a0)
    ctx->r6 = MEM_BU(ctx->r4, 0X71);
    // 0x803F8074: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x803F8078: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x803F807C: lbu         $a1, -0x326C($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X326C);
    // 0x803F8080: jal         0x8006D838
    // 0x803F8084: sb          $a2, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r6;
    func_8006D838(rdram, ctx);
        goto after_0;
    // 0x803F8084: sb          $a2, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r6;
    after_0:
    // 0x803F8088: lw          $a1, 0x38($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X38);
    // 0x803F808C: jal         0x8002AF64
    // 0x803F8090: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8002AF64(rdram, ctx);
        goto after_1;
    // 0x803F8090: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x803F8094: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x803F8098: lb          $a2, 0x27($sp)
    ctx->r6 = MEM_B(ctx->r29, 0X27);
    // 0x803F809C: lh          $a3, 0x1C($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X1C);
    // 0x803F80A0: jal         0x803F80B8
    // 0x803F80A4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_803F80B8(rdram, ctx);
        goto after_2;
    // 0x803F80A4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_2:
    // 0x803F80A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F80AC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F80B0: jr          $ra
    // 0x803F80B4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x803F80B4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_803F80B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F80B8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x803F80BC: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x803F80C0: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x803F80C4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x803F80C8: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x803F80CC: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x803F80D0: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x803F80D4: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x803F80D8: lb          $v0, 0x38($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X38);
    // 0x803F80DC: sll         $s1, $a2, 24
    ctx->r17 = S32(ctx->r6 << 24);
    // 0x803F80E0: sll         $s3, $a3, 16
    ctx->r19 = S32(ctx->r7 << 16);
    // 0x803F80E4: sra         $t7, $s3, 16
    ctx->r15 = S32(SIGNED(ctx->r19) >> 16);
    // 0x803F80E8: sra         $t6, $s1, 24
    ctx->r14 = S32(SIGNED(ctx->r17) >> 24);
    // 0x803F80EC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x803F80F0: or          $s1, $t6, $zero
    ctx->r17 = ctx->r14 | 0;
    // 0x803F80F4: or          $s3, $t7, $zero
    ctx->r19 = ctx->r15 | 0;
    // 0x803F80F8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x803F80FC: beq         $v0, $v1, L_803F8118
    if (ctx->r2 == ctx->r3) {
        // 0x803F8100: or          $s2, $a1, $zero
        ctx->r18 = ctx->r5 | 0;
            goto L_803F8118;
    }
    // 0x803F8100: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x803F8104: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803F8108: beq         $v0, $at, L_803F817C
    if (ctx->r2 == ctx->r1) {
        // 0x803F810C: addu        $t8, $t7, $t6
        ctx->r24 = ADD32(ctx->r15, ctx->r14);
            goto L_803F817C;
    }
    // 0x803F810C: addu        $t8, $t7, $t6
    ctx->r24 = ADD32(ctx->r15, ctx->r14);
    // 0x803F8110: b           L_803F8224
    // 0x803F8114: sh          $t8, 0x6($a1)
    MEM_H(0X6, ctx->r5) = ctx->r24;
        goto L_803F8224;
    // 0x803F8114: sh          $t8, 0x6($a1)
    MEM_H(0X6, ctx->r5) = ctx->r24;
L_803F8118:
    // 0x803F8118: lb          $v0, 0x3A($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X3A);
    // 0x803F811C: nop

    // 0x803F8120: beq         $v0, $zero, L_803F8138
    if (ctx->r2 == 0) {
        // 0x803F8124: nop
    
            goto L_803F8138;
    }
    // 0x803F8124: nop

    // 0x803F8128: beq         $v0, $v1, L_803F8158
    if (ctx->r2 == ctx->r3) {
        // 0x803F812C: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_803F8158;
    }
    // 0x803F812C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x803F8130: b           L_803F8228
    // 0x803F8134: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_803F8228;
    // 0x803F8134: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_803F8138:
    // 0x803F8138: lb          $t9, 0x3D($s0)
    ctx->r25 = MEM_B(ctx->r16, 0X3D);
    // 0x803F813C: addu        $t1, $s3, $s1
    ctx->r9 = ADD32(ctx->r19, ctx->r17);
    // 0x803F8140: bne         $s1, $t9, L_803F8150
    if (ctx->r17 != ctx->r25) {
        // 0x803F8144: addiu       $t0, $zero, 0xFF
        ctx->r8 = ADD32(0, 0XFF);
            goto L_803F8150;
    }
    // 0x803F8144: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x803F8148: b           L_803F8224
    // 0x803F814C: sh          $t0, 0x6($s2)
    MEM_H(0X6, ctx->r18) = ctx->r8;
        goto L_803F8224;
    // 0x803F814C: sh          $t0, 0x6($s2)
    MEM_H(0X6, ctx->r18) = ctx->r8;
L_803F8150:
    // 0x803F8150: b           L_803F8224
    // 0x803F8154: sh          $t1, 0x6($s2)
    MEM_H(0X6, ctx->r18) = ctx->r9;
        goto L_803F8224;
    // 0x803F8154: sh          $t1, 0x6($s2)
    MEM_H(0X6, ctx->r18) = ctx->r9;
L_803F8158:
    // 0x803F8158: sll         $a3, $s1, 24
    ctx->r7 = S32(ctx->r17 << 24);
    // 0x803F815C: sra         $t2, $a3, 24
    ctx->r10 = S32(SIGNED(ctx->r7) >> 24);
    // 0x803F8160: lb          $a1, 0x3E($s0)
    ctx->r5 = MEM_B(ctx->r16, 0X3E);
    // 0x803F8164: lb          $a2, 0x3D($s0)
    ctx->r6 = MEM_B(ctx->r16, 0X3D);
    // 0x803F8168: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x803F816C: jal         0x803F8240
    // 0x803F8170: or          $a3, $t2, $zero
    ctx->r7 = ctx->r10 | 0;
    func_803F8240(rdram, ctx);
        goto after_0;
    // 0x803F8170: or          $a3, $t2, $zero
    ctx->r7 = ctx->r10 | 0;
    after_0:
    // 0x803F8174: b           L_803F8228
    // 0x803F8178: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_803F8228;
    // 0x803F8178: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_803F817C:
    // 0x803F817C: lbu         $t3, 0x3C($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X3C);
    // 0x803F8180: nop

    // 0x803F8184: sltiu       $at, $t3, 0x5
    ctx->r1 = ctx->r11 < 0X5 ? 1 : 0;
    // 0x803F8188: beq         $at, $zero, L_803F8224
    if (ctx->r1 == 0) {
        // 0x803F818C: sll         $t3, $t3, 2
        ctx->r11 = S32(ctx->r11 << 2);
            goto L_803F8224;
    }
    // 0x803F818C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803F8190: lui         $at, 0x8040
    ctx->r1 = S32(0X8040 << 16);
    // 0x803F8194: addu        $at, $at, $t3
    gpr jr_addend_803F81A0 = ctx->r11;
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x803F8198: lw          $t3, -0x46F0($at)
    ctx->r11 = ADD32(ctx->r1, -0X46F0);
    // 0x803F819C: nop

    // 0x803F81A0: jr          $t3
    // 0x803F81A4: nop

    switch (jr_addend_803F81A0 >> 2) {
        case 0: goto L_803F81A8; break;
        case 1: goto L_803F81A8; break;
        case 2: goto L_803F81B4; break;
        case 3: goto L_803F81DC; break;
        case 4: goto L_803F8204; break;
        default: switch_error(__func__, 0x803F81A0, 0x803FB910);
    }
    // 0x803F81A4: nop

L_803F81A8:
    // 0x803F81A8: addu        $t4, $s3, $s1
    ctx->r12 = ADD32(ctx->r19, ctx->r17);
    // 0x803F81AC: b           L_803F8224
    // 0x803F81B0: sh          $t4, 0x6($s2)
    MEM_H(0X6, ctx->r18) = ctx->r12;
        goto L_803F8224;
    // 0x803F81B0: sh          $t4, 0x6($s2)
    MEM_H(0X6, ctx->r18) = ctx->r12;
L_803F81B4:
    // 0x803F81B4: sll         $a3, $s1, 24
    ctx->r7 = S32(ctx->r17 << 24);
    // 0x803F81B8: sra         $t5, $a3, 24
    ctx->r13 = S32(SIGNED(ctx->r7) >> 24);
    // 0x803F81BC: lb          $a1, 0x3F($s0)
    ctx->r5 = MEM_B(ctx->r16, 0X3F);
    // 0x803F81C0: lb          $a2, 0x4A($s0)
    ctx->r6 = MEM_B(ctx->r16, 0X4A);
    // 0x803F81C4: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x803F81C8: or          $a3, $t5, $zero
    ctx->r7 = ctx->r13 | 0;
    // 0x803F81CC: jal         0x803F8240
    // 0x803F81D0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_803F8240(rdram, ctx);
        goto after_1;
    // 0x803F81D0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_1:
    // 0x803F81D4: b           L_803F8228
    // 0x803F81D8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_803F8228;
    // 0x803F81D8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_803F81DC:
    // 0x803F81DC: sll         $a3, $s1, 24
    ctx->r7 = S32(ctx->r17 << 24);
    // 0x803F81E0: sra         $t6, $a3, 24
    ctx->r14 = S32(SIGNED(ctx->r7) >> 24);
    // 0x803F81E4: lb          $a1, 0x40($s0)
    ctx->r5 = MEM_B(ctx->r16, 0X40);
    // 0x803F81E8: lb          $a2, 0x4B($s0)
    ctx->r6 = MEM_B(ctx->r16, 0X4B);
    // 0x803F81EC: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x803F81F0: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    // 0x803F81F4: jal         0x803F8240
    // 0x803F81F8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_803F8240(rdram, ctx);
        goto after_2;
    // 0x803F81F8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_2:
    // 0x803F81FC: b           L_803F8228
    // 0x803F8200: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_803F8228;
    // 0x803F8200: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_803F8204:
    // 0x803F8204: sll         $a3, $s1, 24
    ctx->r7 = S32(ctx->r17 << 24);
    // 0x803F8208: sra         $t7, $a3, 24
    ctx->r15 = S32(SIGNED(ctx->r7) >> 24);
    // 0x803F820C: lb          $a1, 0x41($s0)
    ctx->r5 = MEM_B(ctx->r16, 0X41);
    // 0x803F8210: lb          $a2, 0x4C($s0)
    ctx->r6 = MEM_B(ctx->r16, 0X4C);
    // 0x803F8214: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x803F8218: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    // 0x803F821C: jal         0x803F8240
    // 0x803F8220: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_803F8240(rdram, ctx);
        goto after_3;
    // 0x803F8220: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_3:
L_803F8224:
    // 0x803F8224: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_803F8228:
    // 0x803F8228: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x803F822C: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x803F8230: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x803F8234: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x803F8238: jr          $ra
    // 0x803F823C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x803F823C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_803F8240(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F8240: sll         $t6, $a1, 24
    ctx->r14 = S32(ctx->r5 << 24);
    // 0x803F8244: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x803F8248: sll         $t0, $a3, 24
    ctx->r8 = S32(ctx->r7 << 24);
    // 0x803F824C: sra         $a3, $t0, 24
    ctx->r7 = S32(SIGNED(ctx->r8) >> 24);
    // 0x803F8250: sra         $t7, $t6, 24
    ctx->r15 = S32(SIGNED(ctx->r14) >> 24);
    // 0x803F8254: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x803F8258: sll         $t8, $a2, 24
    ctx->r24 = S32(ctx->r6 << 24);
    // 0x803F825C: sra         $a2, $t8, 24
    ctx->r6 = S32(SIGNED(ctx->r24) >> 24);
    // 0x803F8260: bne         $a3, $t7, L_803F8274
    if (ctx->r7 != ctx->r15) {
        // 0x803F8264: sw          $a1, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r5;
            goto L_803F8274;
    }
    // 0x803F8264: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x803F8268: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x803F826C: jr          $ra
    // 0x803F8270: sh          $t2, 0x6($a0)
    MEM_H(0X6, ctx->r4) = ctx->r10;
    return;
    // 0x803F8270: sh          $t2, 0x6($a0)
    MEM_H(0X6, ctx->r4) = ctx->r10;
L_803F8274:
    // 0x803F8274: bne         $a3, $a2, L_803F8284
    if (ctx->r7 != ctx->r6) {
        // 0x803F8278: addiu       $t3, $zero, 0xF0
        ctx->r11 = ADD32(0, 0XF0);
            goto L_803F8284;
    }
    // 0x803F8278: addiu       $t3, $zero, 0xF0
    ctx->r11 = ADD32(0, 0XF0);
    // 0x803F827C: jr          $ra
    // 0x803F8280: sh          $t3, 0x6($a0)
    MEM_H(0X6, ctx->r4) = ctx->r11;
    return;
    // 0x803F8280: sh          $t3, 0x6($a0)
    MEM_H(0X6, ctx->r4) = ctx->r11;
L_803F8284:
    // 0x803F8284: lh          $t4, 0x12($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X12);
    // 0x803F8288: nop

    // 0x803F828C: addu        $t5, $t4, $a3
    ctx->r13 = ADD32(ctx->r12, ctx->r7);
    // 0x803F8290: sh          $t5, 0x6($a0)
    MEM_H(0X6, ctx->r4) = ctx->r13;
    // 0x803F8294: jr          $ra
    // 0x803F8298: nop

    return;
    // 0x803F8298: nop

;}
RECOMP_FUNC void func_803F829C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F829C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803F82A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F82A4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x803F82A8: lhu         $v1, 0x1E($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X1E);
    // 0x803F82AC: lui         $t7, 0x8040
    ctx->r15 = S32(0X8040 << 16);
    // 0x803F82B0: addiu       $t7, $t7, -0x4F40
    ctx->r15 = ADD32(ctx->r15, -0X4F40);
    // 0x803F82B4: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
    // 0x803F82B8: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x803F82BC: lh          $a1, 0x0($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X0);
    // 0x803F82C0: lh          $a2, 0x2($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X2);
    // 0x803F82C4: jal         0x8002AB30
    // 0x803F82C8: sh          $v1, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r3;
    func_8002AB30(rdram, ctx);
        goto after_0;
    // 0x803F82C8: sh          $v1, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r3;
    after_0:
    // 0x803F82CC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803F82D0: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x803F82D4: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x803F82D8: lbu         $a2, 0x1F($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X1F);
    // 0x803F82DC: jal         0x8006DB98
    // 0x803F82E0: nop

    func_8006DB98(rdram, ctx);
        goto after_1;
    // 0x803F82E0: nop

    after_1:
    // 0x803F82E4: lhu         $t8, 0x1E($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X1E);
    // 0x803F82E8: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x803F82EC: slti        $at, $t8, 0xB
    ctx->r1 = SIGNED(ctx->r24) < 0XB ? 1 : 0;
    // 0x803F82F0: bne         $at, $zero, L_803F8300
    if (ctx->r1 != 0) {
        // 0x803F82F4: addiu       $t9, $zero, 0x1
        ctx->r25 = ADD32(0, 0X1);
            goto L_803F8300;
    }
    // 0x803F82F4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x803F82F8: b           L_803F8304
    // 0x803F82FC: sb          $zero, 0x4($v0)
    MEM_B(0X4, ctx->r2) = 0;
        goto L_803F8304;
    // 0x803F82FC: sb          $zero, 0x4($v0)
    MEM_B(0X4, ctx->r2) = 0;
L_803F8300:
    // 0x803F8300: sb          $t9, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r25;
L_803F8304:
    // 0x803F8304: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F8308: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803F830C: jr          $ra
    // 0x803F8310: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x803F8310: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_803F8314(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F8314: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803F8318: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F831C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x803F8320: lw          $t6, 0x4($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X4);
    // 0x803F8324: lbu         $a2, 0x1F($a1)
    ctx->r6 = MEM_BU(ctx->r5, 0X1F);
    // 0x803F8328: lw          $t7, 0x8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X8);
    // 0x803F832C: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x803F8330: lw          $v0, 0x8($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X8);
    // 0x803F8334: nop

    // 0x803F8338: lbu         $a1, 0x2E($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X2E);
    // 0x803F833C: jal         0x803F7ABC
    // 0x803F8340: nop

    func_803F7ABC(rdram, ctx);
        goto after_0;
    // 0x803F8340: nop

    after_0:
    // 0x803F8344: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x803F8348: lh          $t8, 0x1C($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X1C);
    // 0x803F834C: lw          $t9, 0x38($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X38);
    // 0x803F8350: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F8354: sh          $t8, 0x14($t9)
    MEM_H(0X14, ctx->r25) = ctx->r24;
    // 0x803F8358: lh          $t0, 0x1E($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X1E);
    // 0x803F835C: lw          $t1, 0x38($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X38);
    // 0x803F8360: nop

    // 0x803F8364: sh          $t0, 0x18($t1)
    MEM_H(0X18, ctx->r9) = ctx->r8;
    // 0x803F8368: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F836C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803F8370: jr          $ra
    // 0x803F8374: nop

    return;
    // 0x803F8374: nop

    // 0x803F8378: nop

    // 0x803F837C: nop

;}
RECOMP_FUNC void func_803F8380(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F8380: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F8384: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803F8388: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F838C: lui         $a0, 0x8040
    ctx->r4 = S32(0X8040 << 16);
    // 0x803F8390: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803F8394: jal         0x800296E0
    // 0x803F8398: addiu       $a0, $a0, -0x7C14
    ctx->r4 = ADD32(ctx->r4, -0X7C14);
    func_800296E0(rdram, ctx);
        goto after_0;
    // 0x803F8398: addiu       $a0, $a0, -0x7C14
    ctx->r4 = ADD32(ctx->r4, -0X7C14);
    after_0:
    // 0x803F839C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F83A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F83A4: jr          $ra
    // 0x803F83A8: nop

    return;
    // 0x803F83A8: nop

;}
RECOMP_FUNC void func_803F83AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F83AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F83B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F83B4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803F83B8: jal         0x803F8C2C
    // 0x803F83BC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_803F8C2C(rdram, ctx);
        goto after_0;
    // 0x803F83BC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x803F83C0: lui         $at, 0x8040
    ctx->r1 = S32(0X8040 << 16);
    // 0x803F83C4: sb          $zero, -0x1F10($at)
    MEM_B(-0X1F10, ctx->r1) = 0;
    // 0x803F83C8: lui         $at, 0x8040
    ctx->r1 = S32(0X8040 << 16);
    // 0x803F83CC: lui         $a0, 0x8040
    ctx->r4 = S32(0X8040 << 16);
    // 0x803F83D0: sb          $zero, -0x1F0F($at)
    MEM_B(-0X1F0F, ctx->r1) = 0;
    // 0x803F83D4: jal         0x800296E0
    // 0x803F83D8: addiu       $a0, $a0, -0x7C14
    ctx->r4 = ADD32(ctx->r4, -0X7C14);
    func_800296E0(rdram, ctx);
        goto after_1;
    // 0x803F83D8: addiu       $a0, $a0, -0x7C14
    ctx->r4 = ADD32(ctx->r4, -0X7C14);
    after_1:
    // 0x803F83DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F83E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F83E4: jr          $ra
    // 0x803F83E8: nop

    return;
    // 0x803F83E8: nop

;}
RECOMP_FUNC void func_803F83EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F83EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F83F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F83F4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803F83F8: jal         0x80036234
    // 0x803F83FC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80036234(rdram, ctx);
        goto after_0;
    // 0x803F83FC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x803F8400: lui         $a0, 0x803D
    ctx->r4 = S32(0X803D << 16);
    // 0x803F8404: jal         0x80035FF0
    // 0x803F8408: addiu       $a0, $a0, 0x2074
    ctx->r4 = ADD32(ctx->r4, 0X2074);
    func_80035FF0(rdram, ctx);
        goto after_1;
    // 0x803F8408: addiu       $a0, $a0, 0x2074
    ctx->r4 = ADD32(ctx->r4, 0X2074);
    after_1:
    // 0x803F840C: addiu       $a0, $zero, 0xF00
    ctx->r4 = ADD32(0, 0XF00);
    // 0x803F8410: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x803F8414: jal         0x80049E40
    // 0x803F8418: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_80049E40(rdram, ctx);
        goto after_2;
    // 0x803F8418: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_2:
    // 0x803F841C: jal         0x803F8A78
    // 0x803F8420: nop

    func_803F8A78(rdram, ctx);
        goto after_3;
    // 0x803F8420: nop

    after_3:
    // 0x803F8424: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803F8428: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x803F842C: jal         0x80021214
    // 0x803F8430: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80021214(rdram, ctx);
        goto after_4;
    // 0x803F8430: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x803F8434: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x803F8438: addiu       $t6, $t6, -0x6CE4
    ctx->r14 = ADD32(ctx->r14, -0X6CE4);
    // 0x803F843C: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x803F8440: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803F8444: sw          $at, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r1;
    // 0x803F8448: lw          $a2, 0x4($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X4);
    // 0x803F844C: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x803F8450: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x803F8454: lw          $a3, 0x8($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X8);
    // 0x803F8458: jal         0x8004B078
    // 0x803F845C: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    func_8004B078(rdram, ctx);
        goto after_5;
    // 0x803F845C: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    after_5:
    // 0x803F8460: jal         0x803F8E34
    // 0x803F8464: nop

    func_803F8E34(rdram, ctx);
        goto after_6;
    // 0x803F8464: nop

    after_6:
    // 0x803F8468: jal         0x803F8ED4
    // 0x803F846C: nop

    func_803F8ED4(rdram, ctx);
        goto after_7;
    // 0x803F846C: nop

    after_7:
    // 0x803F8470: jal         0x80070300
    // 0x803F8474: nop

    func_80070300(rdram, ctx);
        goto after_8;
    // 0x803F8474: nop

    after_8:
    // 0x803F8478: lui         $a0, 0x8040
    ctx->r4 = S32(0X8040 << 16);
    // 0x803F847C: jal         0x8002AAC0
    // 0x803F8480: addiu       $a0, $a0, -0x4598
    ctx->r4 = ADD32(ctx->r4, -0X4598);
    func_8002AAC0(rdram, ctx);
        goto after_9;
    // 0x803F8480: addiu       $a0, $a0, -0x4598
    ctx->r4 = ADD32(ctx->r4, -0X4598);
    after_9:
    // 0x803F8484: jal         0x8006FB58
    // 0x803F8488: nop

    func_8006FB58(rdram, ctx);
        goto after_10;
    // 0x803F8488: nop

    after_10:
    // 0x803F848C: jal         0x803F8FC4
    // 0x803F8490: nop

    func_803F8FC4(rdram, ctx);
        goto after_11;
    // 0x803F8490: nop

    after_11:
    // 0x803F8494: jal         0x803F9060
    // 0x803F8498: nop

    func_803F9060(rdram, ctx);
        goto after_12;
    // 0x803F8498: nop

    after_12:
    // 0x803F849C: jal         0x803F916C
    // 0x803F84A0: nop

    func_803F916C(rdram, ctx);
        goto after_13;
    // 0x803F84A0: nop

    after_13:
    // 0x803F84A4: lui         $a0, 0x8040
    ctx->r4 = S32(0X8040 << 16);
    // 0x803F84A8: jal         0x80029220
    // 0x803F84AC: addiu       $a0, $a0, -0x6BE0
    ctx->r4 = ADD32(ctx->r4, -0X6BE0);
    func_80029220(rdram, ctx);
        goto after_14;
    // 0x803F84AC: addiu       $a0, $a0, -0x6BE0
    ctx->r4 = ADD32(ctx->r4, -0X6BE0);
    after_14:
    // 0x803F84B0: jal         0x803F9580
    // 0x803F84B4: nop

    func_803F9580(rdram, ctx);
        goto after_15;
    // 0x803F84B4: nop

    after_15:
    // 0x803F84B8: lui         $a0, 0x8040
    ctx->r4 = S32(0X8040 << 16);
    // 0x803F84BC: addiu       $a0, $a0, -0x7B28
    ctx->r4 = ADD32(ctx->r4, -0X7B28);
    // 0x803F84C0: jal         0x8004A9B4
    // 0x803F84C4: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_8004A9B4(rdram, ctx);
        goto after_16;
    // 0x803F84C4: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_16:
    // 0x803F84C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F84CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F84D0: jr          $ra
    // 0x803F84D4: nop

    return;
    // 0x803F84D4: nop

;}
RECOMP_FUNC void func_803F84D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F84D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F84DC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803F84E0: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x803F84E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F84E8: lhu         $a0, -0x3078($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X3078);
    // 0x803F84EC: jal         0x80035D2C
    // 0x803F84F0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80035D2C(rdram, ctx);
        goto after_0;
    // 0x803F84F0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x803F84F4: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x803F84F8: lui         $t9, 0x8040
    ctx->r25 = S32(0X8040 << 16);
    // 0x803F84FC: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x803F8500: lw          $t9, -0x454C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X454C);
    // 0x803F8504: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803F8508: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x803F850C: jalr        $t9
    // 0x803F8510: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x803F8510: nop

    after_1:
    // 0x803F8514: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F8518: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F851C: jr          $ra
    // 0x803F8520: nop

    return;
    // 0x803F8520: nop

;}
RECOMP_FUNC void func_803F8524(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F8524: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F8528: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F852C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803F8530: jal         0x80035770
    // 0x803F8534: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80035770(rdram, ctx);
        goto after_0;
    // 0x803F8534: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x803F8538: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x803F853C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803F8540: lb          $v1, 0x38($a2)
    ctx->r3 = MEM_B(ctx->r6, 0X38);
    // 0x803F8544: nop

    // 0x803F8548: beq         $v1, $zero, L_803F8570
    if (ctx->r3 == 0) {
        // 0x803F854C: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_803F8570;
    }
    // 0x803F854C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x803F8550: beq         $v1, $a0, L_803F85A0
    if (ctx->r3 == ctx->r4) {
        // 0x803F8554: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_803F85A0;
    }
    // 0x803F8554: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803F8558: beq         $v0, $at, L_803F85A0
    if (ctx->r2 == ctx->r1) {
        // 0x803F855C: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_803F85A0;
    }
    // 0x803F855C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x803F8560: beq         $v0, $at, L_803F863C
    if (ctx->r2 == ctx->r1) {
        // 0x803F8564: nop
    
            goto L_803F863C;
    }
    // 0x803F8564: nop

    // 0x803F8568: b           L_803F8688
    // 0x803F856C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F8688;
    // 0x803F856C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F8570:
    // 0x803F8570: lb          $t6, 0x39($a2)
    ctx->r14 = MEM_B(ctx->r6, 0X39);
    // 0x803F8574: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803F8578: bne         $t6, $zero, L_803F8588
    if (ctx->r14 != 0) {
        // 0x803F857C: nop
    
            goto L_803F8588;
    }
    // 0x803F857C: nop

    // 0x803F8580: b           L_803F8684
    // 0x803F8584: sb          $a0, 0x39($a2)
    MEM_B(0X39, ctx->r6) = ctx->r4;
        goto L_803F8684;
    // 0x803F8584: sb          $a0, 0x39($a2)
    MEM_B(0X39, ctx->r6) = ctx->r4;
L_803F8588:
    // 0x803F8588: jal         0x803F8AB0
    // 0x803F858C: nop

    func_803F8AB0(rdram, ctx);
        goto after_1;
    // 0x803F858C: nop

    after_1:
    // 0x803F8590: jal         0x80037908
    // 0x803F8594: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80037908(rdram, ctx);
        goto after_2;
    // 0x803F8594: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x803F8598: b           L_803F8688
    // 0x803F859C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F8688;
    // 0x803F859C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F85A0:
    // 0x803F85A0: lb          $t7, 0x39($a2)
    ctx->r15 = MEM_B(ctx->r6, 0X39);
    // 0x803F85A4: nop

    // 0x803F85A8: bne         $t7, $zero, L_803F85BC
    if (ctx->r15 != 0) {
        // 0x803F85AC: nop
    
            goto L_803F85BC;
    }
    // 0x803F85AC: nop

    // 0x803F85B0: sb          $a0, 0x39($a2)
    MEM_B(0X39, ctx->r6) = ctx->r4;
    // 0x803F85B4: b           L_803F8684
    // 0x803F85B8: sb          $a0, 0x3C($a2)
    MEM_B(0X3C, ctx->r6) = ctx->r4;
        goto L_803F8684;
    // 0x803F85B8: sb          $a0, 0x3C($a2)
    MEM_B(0X3C, ctx->r6) = ctx->r4;
L_803F85BC:
    // 0x803F85BC: lb          $t8, 0x3C($a2)
    ctx->r24 = MEM_B(ctx->r6, 0X3C);
    // 0x803F85C0: nop

    // 0x803F85C4: bne         $t8, $zero, L_803F8634
    if (ctx->r24 != 0) {
        // 0x803F85C8: nop
    
            goto L_803F8634;
    }
    // 0x803F85C8: nop

    // 0x803F85CC: bne         $a0, $v1, L_803F8600
    if (ctx->r4 != ctx->r3) {
        // 0x803F85D0: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_803F8600;
    }
    // 0x803F85D0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803F85D4: jal         0x803F8CB8
    // 0x803F85D8: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_803F8CB8(rdram, ctx);
        goto after_3;
    // 0x803F85D8: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_3:
    // 0x803F85DC: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x803F85E0: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x803F85E4: lui         $a0, 0x8040
    ctx->r4 = S32(0X8040 << 16);
    // 0x803F85E8: addiu       $a0, $a0, -0x729C
    ctx->r4 = ADD32(ctx->r4, -0X729C);
    // 0x803F85EC: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x803F85F0: jal         0x8002989C
    // 0x803F85F4: sb          $t9, 0x39($a2)
    MEM_B(0X39, ctx->r6) = ctx->r25;
    func_8002989C(rdram, ctx);
        goto after_4;
    // 0x803F85F4: sb          $t9, 0x39($a2)
    MEM_B(0X39, ctx->r6) = ctx->r25;
    after_4:
    // 0x803F85F8: b           L_803F8688
    // 0x803F85FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F8688;
    // 0x803F85FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F8600:
    // 0x803F8600: bne         $v1, $at, L_803F8688
    if (ctx->r3 != ctx->r1) {
        // 0x803F8604: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_803F8688;
    }
    // 0x803F8604: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F8608: jal         0x803F8D44
    // 0x803F860C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_803F8D44(rdram, ctx);
        goto after_5;
    // 0x803F860C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_5:
    // 0x803F8610: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x803F8614: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x803F8618: lui         $a0, 0x8040
    ctx->r4 = S32(0X8040 << 16);
    // 0x803F861C: addiu       $a0, $a0, -0x729C
    ctx->r4 = ADD32(ctx->r4, -0X729C);
    // 0x803F8620: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x803F8624: jal         0x8002989C
    // 0x803F8628: sb          $t0, 0x39($a2)
    MEM_B(0X39, ctx->r6) = ctx->r8;
    func_8002989C(rdram, ctx);
        goto after_6;
    // 0x803F8628: sb          $t0, 0x39($a2)
    MEM_B(0X39, ctx->r6) = ctx->r8;
    after_6:
    // 0x803F862C: b           L_803F8688
    // 0x803F8630: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F8688;
    // 0x803F8630: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F8634:
    // 0x803F8634: b           L_803F8684
    // 0x803F8638: sb          $zero, 0x39($a2)
    MEM_B(0X39, ctx->r6) = 0;
        goto L_803F8684;
    // 0x803F8638: sb          $zero, 0x39($a2)
    MEM_B(0X39, ctx->r6) = 0;
L_803F863C:
    // 0x803F863C: jal         0x803F8D94
    // 0x803F8640: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_803F8D94(rdram, ctx);
        goto after_7;
    // 0x803F8640: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_7:
    // 0x803F8644: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x803F8648: bne         $v0, $zero, L_803F8670
    if (ctx->r2 != 0) {
        // 0x803F864C: addiu       $t2, $zero, 0x3
        ctx->r10 = ADD32(0, 0X3);
            goto L_803F8670;
    }
    // 0x803F864C: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x803F8650: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x803F8654: lui         $a0, 0x8040
    ctx->r4 = S32(0X8040 << 16);
    // 0x803F8658: sb          $t1, 0x39($a2)
    MEM_B(0X39, ctx->r6) = ctx->r9;
    // 0x803F865C: addiu       $a0, $a0, -0x722C
    ctx->r4 = ADD32(ctx->r4, -0X722C);
    // 0x803F8660: jal         0x8002989C
    // 0x803F8664: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8002989C(rdram, ctx);
        goto after_8;
    // 0x803F8664: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_8:
    // 0x803F8668: b           L_803F8688
    // 0x803F866C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F8688;
    // 0x803F866C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F8670:
    // 0x803F8670: lui         $a0, 0x8040
    ctx->r4 = S32(0X8040 << 16);
    // 0x803F8674: sb          $t2, 0x39($a2)
    MEM_B(0X39, ctx->r6) = ctx->r10;
    // 0x803F8678: addiu       $a0, $a0, -0x71F4
    ctx->r4 = ADD32(ctx->r4, -0X71F4);
    // 0x803F867C: jal         0x8002989C
    // 0x803F8680: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_8002989C(rdram, ctx);
        goto after_9;
    // 0x803F8680: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_9:
L_803F8684:
    // 0x803F8684: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F8688:
    // 0x803F8688: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F868C: jr          $ra
    // 0x803F8690: nop

    return;
    // 0x803F8690: nop

;}
RECOMP_FUNC void func_803F8694(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F8694: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x803F8698: lb          $v0, 0x38($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X38);
    // 0x803F869C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x803F86A0: beq         $v0, $zero, L_803F86C8
    if (ctx->r2 == 0) {
        // 0x803F86A4: nop
    
            goto L_803F86C8;
    }
    // 0x803F86A4: nop

    // 0x803F86A8: beq         $v0, $v1, L_803F86E8
    if (ctx->r2 == ctx->r3) {
        // 0x803F86AC: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_803F86E8;
    }
    // 0x803F86AC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803F86B0: beq         $v0, $at, L_803F86E8
    if (ctx->r2 == ctx->r1) {
        // 0x803F86B4: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_803F86E8;
    }
    // 0x803F86B4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x803F86B8: beq         $v0, $at, L_803F8704
    if (ctx->r2 == ctx->r1) {
        // 0x803F86BC: nop
    
            goto L_803F8704;
    }
    // 0x803F86BC: nop

    // 0x803F86C0: jr          $ra
    // 0x803F86C4: nop

    return;
    // 0x803F86C4: nop

L_803F86C8:
    // 0x803F86C8: lb          $t6, 0x39($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X39);
    // 0x803F86CC: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x803F86D0: bne         $t6, $zero, L_803F86E0
    if (ctx->r14 != 0) {
        // 0x803F86D4: nop
    
            goto L_803F86E0;
    }
    // 0x803F86D4: nop

    // 0x803F86D8: jr          $ra
    // 0x803F86DC: sb          $t7, 0x38($a0)
    MEM_B(0X38, ctx->r4) = ctx->r15;
    return;
    // 0x803F86DC: sb          $t7, 0x38($a0)
    MEM_B(0X38, ctx->r4) = ctx->r15;
L_803F86E0:
    // 0x803F86E0: jr          $ra
    // 0x803F86E4: sb          $zero, 0x39($a0)
    MEM_B(0X39, ctx->r4) = 0;
    return;
    // 0x803F86E4: sb          $zero, 0x39($a0)
    MEM_B(0X39, ctx->r4) = 0;
L_803F86E8:
    // 0x803F86E8: lb          $t8, 0x39($a0)
    ctx->r24 = MEM_B(ctx->r4, 0X39);
    // 0x803F86EC: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x803F86F0: bne         $v1, $t8, L_803F8700
    if (ctx->r3 != ctx->r24) {
        // 0x803F86F4: nop
    
            goto L_803F8700;
    }
    // 0x803F86F4: nop

    // 0x803F86F8: jr          $ra
    // 0x803F86FC: sb          $zero, 0x39($a0)
    MEM_B(0X39, ctx->r4) = 0;
    return;
    // 0x803F86FC: sb          $zero, 0x39($a0)
    MEM_B(0X39, ctx->r4) = 0;
L_803F8700:
    // 0x803F8700: sb          $t9, 0x38($a0)
    MEM_B(0X38, ctx->r4) = ctx->r25;
L_803F8704:
    // 0x803F8704: jr          $ra
    // 0x803F8708: nop

    return;
    // 0x803F8708: nop

;}
RECOMP_FUNC void func_803F870C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F870C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803F8710: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803F8714: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803F8718: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x803F871C: lb          $v0, 0x38($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X38);
    // 0x803F8720: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x803F8724: beq         $v0, $zero, L_803F874C
    if (ctx->r2 == 0) {
        // 0x803F8728: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_803F874C;
    }
    // 0x803F8728: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803F872C: beq         $v0, $at, L_803F878C
    if (ctx->r2 == ctx->r1) {
        // 0x803F8730: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_803F878C;
    }
    // 0x803F8730: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803F8734: beq         $v0, $at, L_803F878C
    if (ctx->r2 == ctx->r1) {
        // 0x803F8738: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_803F878C;
    }
    // 0x803F8738: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x803F873C: beq         $v0, $at, L_803F87B8
    if (ctx->r2 == ctx->r1) {
        // 0x803F8740: nop
    
            goto L_803F87B8;
    }
    // 0x803F8740: nop

    // 0x803F8744: b           L_803F87C8
    // 0x803F8748: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_803F87C8;
    // 0x803F8748: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803F874C:
    // 0x803F874C: lb          $t6, 0x39($s0)
    ctx->r14 = MEM_B(ctx->r16, 0X39);
    // 0x803F8750: lui         $a1, 0x803A
    ctx->r5 = S32(0X803A << 16);
    // 0x803F8754: bne         $t6, $zero, L_803F8778
    if (ctx->r14 != 0) {
        // 0x803F8758: nop
    
            goto L_803F8778;
    }
    // 0x803F8758: nop

    // 0x803F875C: jal         0x80035734
    // 0x803F8760: nop

    func_80035734(rdram, ctx);
        goto after_0;
    // 0x803F8760: nop

    after_0:
    // 0x803F8764: lb          $t7, 0x38($s0)
    ctx->r15 = MEM_B(ctx->r16, 0X38);
    // 0x803F8768: nop

    // 0x803F876C: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x803F8770: b           L_803F87C4
    // 0x803F8774: sb          $t8, 0x38($s0)
    MEM_B(0X38, ctx->r16) = ctx->r24;
        goto L_803F87C4;
    // 0x803F8774: sb          $t8, 0x38($s0)
    MEM_B(0X38, ctx->r16) = ctx->r24;
L_803F8778:
    // 0x803F8778: lb          $a0, 0x3B($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X3B);
    // 0x803F877C: jal         0x8004BF30
    // 0x803F8780: addiu       $a1, $a1, -0x5B10
    ctx->r5 = ADD32(ctx->r5, -0X5B10);
    func_8004BF30(rdram, ctx);
        goto after_1;
    // 0x803F8780: addiu       $a1, $a1, -0x5B10
    ctx->r5 = ADD32(ctx->r5, -0X5B10);
    after_1:
    // 0x803F8784: b           L_803F87C4
    // 0x803F8788: sb          $v0, 0x3B($s0)
    MEM_B(0X3B, ctx->r16) = ctx->r2;
        goto L_803F87C4;
    // 0x803F8788: sb          $v0, 0x3B($s0)
    MEM_B(0X3B, ctx->r16) = ctx->r2;
L_803F878C:
    // 0x803F878C: lb          $t9, 0x39($s0)
    ctx->r25 = MEM_B(ctx->r16, 0X39);
    // 0x803F8790: nop

    // 0x803F8794: bne         $t9, $zero, L_803F87C8
    if (ctx->r25 != 0) {
        // 0x803F8798: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_803F87C8;
    }
    // 0x803F8798: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F879C: jal         0x80035734
    // 0x803F87A0: nop

    func_80035734(rdram, ctx);
        goto after_2;
    // 0x803F87A0: nop

    after_2:
    // 0x803F87A4: lb          $t0, 0x38($s0)
    ctx->r8 = MEM_B(ctx->r16, 0X38);
    // 0x803F87A8: nop

    // 0x803F87AC: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x803F87B0: b           L_803F87C4
    // 0x803F87B4: sb          $t1, 0x38($s0)
    MEM_B(0X38, ctx->r16) = ctx->r9;
        goto L_803F87C4;
    // 0x803F87B4: sb          $t1, 0x38($s0)
    MEM_B(0X38, ctx->r16) = ctx->r9;
L_803F87B8:
    // 0x803F87B8: jal         0x80035734
    // 0x803F87BC: nop

    func_80035734(rdram, ctx);
        goto after_3;
    // 0x803F87BC: nop

    after_3:
    // 0x803F87C0: sb          $zero, 0x38($s0)
    MEM_B(0X38, ctx->r16) = 0;
L_803F87C4:
    // 0x803F87C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803F87C8:
    // 0x803F87C8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F87CC: jr          $ra
    // 0x803F87D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x803F87D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_803F87D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F87D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F87D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F87DC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803F87E0: lb          $t6, 0x38($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X38);
    // 0x803F87E4: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x803F87E8: bne         $t6, $zero, L_803F8830
    if (ctx->r14 != 0) {
        // 0x803F87EC: nop
    
            goto L_803F8830;
    }
    // 0x803F87EC: nop

    // 0x803F87F0: lb          $t7, 0x39($a0)
    ctx->r15 = MEM_B(ctx->r4, 0X39);
    // 0x803F87F4: lui         $a1, 0x803A
    ctx->r5 = S32(0X803A << 16);
    // 0x803F87F8: bne         $t7, $zero, L_803F8818
    if (ctx->r15 != 0) {
        // 0x803F87FC: addiu       $a1, $a1, -0x5B10
        ctx->r5 = ADD32(ctx->r5, -0X5B10);
            goto L_803F8818;
    }
    // 0x803F87FC: addiu       $a1, $a1, -0x5B10
    ctx->r5 = ADD32(ctx->r5, -0X5B10);
    // 0x803F8800: jal         0x80035734
    // 0x803F8804: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80035734(rdram, ctx);
        goto after_0;
    // 0x803F8804: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x803F8808: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x803F880C: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x803F8810: b           L_803F8860
    // 0x803F8814: sb          $t8, 0x38($a2)
    MEM_B(0X38, ctx->r6) = ctx->r24;
        goto L_803F8860;
    // 0x803F8814: sb          $t8, 0x38($a2)
    MEM_B(0X38, ctx->r6) = ctx->r24;
L_803F8818:
    // 0x803F8818: lb          $a0, 0x3B($a2)
    ctx->r4 = MEM_B(ctx->r6, 0X3B);
    // 0x803F881C: jal         0x8004BFBC
    // 0x803F8820: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_8004BFBC(rdram, ctx);
        goto after_1;
    // 0x803F8820: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_1:
    // 0x803F8824: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x803F8828: b           L_803F8860
    // 0x803F882C: sb          $v0, 0x3B($a2)
    MEM_B(0X3B, ctx->r6) = ctx->r2;
        goto L_803F8860;
    // 0x803F882C: sb          $v0, 0x3B($a2)
    MEM_B(0X3B, ctx->r6) = ctx->r2;
L_803F8830:
    // 0x803F8830: lb          $t9, 0x39($a2)
    ctx->r25 = MEM_B(ctx->r6, 0X39);
    // 0x803F8834: nop

    // 0x803F8838: bne         $t9, $zero, L_803F8864
    if (ctx->r25 != 0) {
        // 0x803F883C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_803F8864;
    }
    // 0x803F883C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F8840: jal         0x80035734
    // 0x803F8844: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_80035734(rdram, ctx);
        goto after_2;
    // 0x803F8844: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_2:
    // 0x803F8848: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x803F884C: nop

    // 0x803F8850: lb          $t0, 0x38($a2)
    ctx->r8 = MEM_B(ctx->r6, 0X38);
    // 0x803F8854: nop

    // 0x803F8858: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x803F885C: sb          $t1, 0x38($a2)
    MEM_B(0X38, ctx->r6) = ctx->r9;
L_803F8860:
    // 0x803F8860: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F8864:
    // 0x803F8864: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F8868: jr          $ra
    // 0x803F886C: nop

    return;
    // 0x803F886C: nop

;}
RECOMP_FUNC void func_803F8870(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F8870: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F8874: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F8878: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803F887C: lb          $v0, 0x38($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X38);
    // 0x803F8880: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x803F8884: beq         $v0, $zero, L_803F88AC
    if (ctx->r2 == 0) {
        // 0x803F8888: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_803F88AC;
    }
    // 0x803F8888: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x803F888C: beq         $v0, $v1, L_803F88D8
    if (ctx->r2 == ctx->r3) {
        // 0x803F8890: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_803F88D8;
    }
    // 0x803F8890: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803F8894: beq         $v0, $at, L_803F88D8
    if (ctx->r2 == ctx->r1) {
        // 0x803F8898: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_803F88D8;
    }
    // 0x803F8898: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x803F889C: beq         $v0, $at, L_803F8904
    if (ctx->r2 == ctx->r1) {
        // 0x803F88A0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_803F8904;
    }
    // 0x803F88A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F88A4: b           L_803F8904
    // 0x803F88A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F8904;
    // 0x803F88A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F88AC:
    // 0x803F88AC: lb          $t6, 0x39($a2)
    ctx->r14 = MEM_B(ctx->r6, 0X39);
    // 0x803F88B0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x803F88B4: bne         $v1, $t6, L_803F8900
    if (ctx->r3 != ctx->r14) {
        // 0x803F88B8: lui         $a1, 0x803A
        ctx->r5 = S32(0X803A << 16);
            goto L_803F8900;
    }
    // 0x803F88B8: lui         $a1, 0x803A
    ctx->r5 = S32(0X803A << 16);
    // 0x803F88BC: lb          $a0, 0x3B($a2)
    ctx->r4 = MEM_B(ctx->r6, 0X3B);
    // 0x803F88C0: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x803F88C4: jal         0x8004C0D4
    // 0x803F88C8: addiu       $a1, $a1, -0x5B10
    ctx->r5 = ADD32(ctx->r5, -0X5B10);
    func_8004C0D4(rdram, ctx);
        goto after_0;
    // 0x803F88C8: addiu       $a1, $a1, -0x5B10
    ctx->r5 = ADD32(ctx->r5, -0X5B10);
    after_0:
    // 0x803F88CC: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x803F88D0: b           L_803F8900
    // 0x803F88D4: sb          $v0, 0x3B($a2)
    MEM_B(0X3B, ctx->r6) = ctx->r2;
        goto L_803F8900;
    // 0x803F88D4: sb          $v0, 0x3B($a2)
    MEM_B(0X3B, ctx->r6) = ctx->r2;
L_803F88D8:
    // 0x803F88D8: lb          $t7, 0x39($a2)
    ctx->r15 = MEM_B(ctx->r6, 0X39);
    // 0x803F88DC: lui         $a1, 0x803A
    ctx->r5 = S32(0X803A << 16);
    // 0x803F88E0: bne         $v1, $t7, L_803F8900
    if (ctx->r3 != ctx->r15) {
        // 0x803F88E4: addiu       $a1, $a1, -0x5AC0
        ctx->r5 = ADD32(ctx->r5, -0X5AC0);
            goto L_803F8900;
    }
    // 0x803F88E4: addiu       $a1, $a1, -0x5AC0
    ctx->r5 = ADD32(ctx->r5, -0X5AC0);
    // 0x803F88E8: lb          $a0, 0x3C($a2)
    ctx->r4 = MEM_B(ctx->r6, 0X3C);
    // 0x803F88EC: jal         0x8004C0D4
    // 0x803F88F0: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_8004C0D4(rdram, ctx);
        goto after_1;
    // 0x803F88F0: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_1:
    // 0x803F88F4: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x803F88F8: nop

    // 0x803F88FC: sb          $v0, 0x3C($a2)
    MEM_B(0X3C, ctx->r6) = ctx->r2;
L_803F8900:
    // 0x803F8900: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F8904:
    // 0x803F8904: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F8908: jr          $ra
    // 0x803F890C: nop

    return;
    // 0x803F890C: nop

;}
RECOMP_FUNC void func_803F8910(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F8910: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F8914: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F8918: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803F891C: lb          $v0, 0x38($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X38);
    // 0x803F8920: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x803F8924: beq         $v0, $zero, L_803F894C
    if (ctx->r2 == 0) {
        // 0x803F8928: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_803F894C;
    }
    // 0x803F8928: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x803F892C: beq         $v0, $v1, L_803F8978
    if (ctx->r2 == ctx->r3) {
        // 0x803F8930: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_803F8978;
    }
    // 0x803F8930: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803F8934: beq         $v0, $at, L_803F8978
    if (ctx->r2 == ctx->r1) {
        // 0x803F8938: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_803F8978;
    }
    // 0x803F8938: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x803F893C: beq         $v0, $at, L_803F89A4
    if (ctx->r2 == ctx->r1) {
        // 0x803F8940: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_803F89A4;
    }
    // 0x803F8940: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F8944: b           L_803F89A4
    // 0x803F8948: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F89A4;
    // 0x803F8948: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F894C:
    // 0x803F894C: lb          $t6, 0x39($a2)
    ctx->r14 = MEM_B(ctx->r6, 0X39);
    // 0x803F8950: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x803F8954: bne         $v1, $t6, L_803F89A0
    if (ctx->r3 != ctx->r14) {
        // 0x803F8958: lui         $a1, 0x803A
        ctx->r5 = S32(0X803A << 16);
            goto L_803F89A0;
    }
    // 0x803F8958: lui         $a1, 0x803A
    ctx->r5 = S32(0X803A << 16);
    // 0x803F895C: lb          $a0, 0x3B($a2)
    ctx->r4 = MEM_B(ctx->r6, 0X3B);
    // 0x803F8960: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x803F8964: jal         0x8004C048
    // 0x803F8968: addiu       $a1, $a1, -0x5B10
    ctx->r5 = ADD32(ctx->r5, -0X5B10);
    func_8004C048(rdram, ctx);
        goto after_0;
    // 0x803F8968: addiu       $a1, $a1, -0x5B10
    ctx->r5 = ADD32(ctx->r5, -0X5B10);
    after_0:
    // 0x803F896C: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x803F8970: b           L_803F89A0
    // 0x803F8974: sb          $v0, 0x3B($a2)
    MEM_B(0X3B, ctx->r6) = ctx->r2;
        goto L_803F89A0;
    // 0x803F8974: sb          $v0, 0x3B($a2)
    MEM_B(0X3B, ctx->r6) = ctx->r2;
L_803F8978:
    // 0x803F8978: lb          $t7, 0x39($a2)
    ctx->r15 = MEM_B(ctx->r6, 0X39);
    // 0x803F897C: lui         $a1, 0x803A
    ctx->r5 = S32(0X803A << 16);
    // 0x803F8980: bne         $v1, $t7, L_803F89A0
    if (ctx->r3 != ctx->r15) {
        // 0x803F8984: addiu       $a1, $a1, -0x5AC0
        ctx->r5 = ADD32(ctx->r5, -0X5AC0);
            goto L_803F89A0;
    }
    // 0x803F8984: addiu       $a1, $a1, -0x5AC0
    ctx->r5 = ADD32(ctx->r5, -0X5AC0);
    // 0x803F8988: lb          $a0, 0x3C($a2)
    ctx->r4 = MEM_B(ctx->r6, 0X3C);
    // 0x803F898C: jal         0x8004C048
    // 0x803F8990: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_8004C048(rdram, ctx);
        goto after_1;
    // 0x803F8990: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_1:
    // 0x803F8994: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x803F8998: nop

    // 0x803F899C: sb          $v0, 0x3C($a2)
    MEM_B(0X3C, ctx->r6) = ctx->r2;
L_803F89A0:
    // 0x803F89A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F89A4:
    // 0x803F89A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F89A8: jr          $ra
    // 0x803F89AC: nop

    return;
    // 0x803F89AC: nop

;}
RECOMP_FUNC void func_803F89B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F89B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F89B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F89B8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803F89BC: lb          $t6, 0x38($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X38);
    // 0x803F89C0: nop

    // 0x803F89C4: bne         $t6, $zero, L_803F89FC
    if (ctx->r14 != 0) {
        // 0x803F89C8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_803F89FC;
    }
    // 0x803F89C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F89CC: jal         0x80035770
    // 0x803F89D0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80035770(rdram, ctx);
        goto after_0;
    // 0x803F89D0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x803F89D4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803F89D8: addiu       $t7, $zero, 0x23
    ctx->r15 = ADD32(0, 0X23);
    // 0x803F89DC: lb          $v0, 0x3A($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X3A);
    // 0x803F89E0: nop

    // 0x803F89E4: bgtz        $v0, L_803F89F4
    if (SIGNED(ctx->r2) > 0) {
        // 0x803F89E8: addiu       $t8, $v0, -0x1
        ctx->r24 = ADD32(ctx->r2, -0X1);
            goto L_803F89F4;
    }
    // 0x803F89E8: addiu       $t8, $v0, -0x1
    ctx->r24 = ADD32(ctx->r2, -0X1);
    // 0x803F89EC: b           L_803F89F8
    // 0x803F89F0: sb          $t7, 0x3A($a0)
    MEM_B(0X3A, ctx->r4) = ctx->r15;
        goto L_803F89F8;
    // 0x803F89F0: sb          $t7, 0x3A($a0)
    MEM_B(0X3A, ctx->r4) = ctx->r15;
L_803F89F4:
    // 0x803F89F4: sb          $t8, 0x3A($a0)
    MEM_B(0X3A, ctx->r4) = ctx->r24;
L_803F89F8:
    // 0x803F89F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F89FC:
    // 0x803F89FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F8A00: jr          $ra
    // 0x803F8A04: nop

    return;
    // 0x803F8A04: nop

;}
RECOMP_FUNC void func_803F8A08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F8A08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F8A0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F8A10: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803F8A14: lb          $t6, 0x38($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X38);
    // 0x803F8A18: nop

    // 0x803F8A1C: bne         $t6, $zero, L_803F8A54
    if (ctx->r14 != 0) {
        // 0x803F8A20: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_803F8A54;
    }
    // 0x803F8A20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F8A24: jal         0x80035770
    // 0x803F8A28: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80035770(rdram, ctx);
        goto after_0;
    // 0x803F8A28: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x803F8A2C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803F8A30: addiu       $at, $zero, 0x23
    ctx->r1 = ADD32(0, 0X23);
    // 0x803F8A34: lb          $v0, 0x3A($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X3A);
    // 0x803F8A38: nop

    // 0x803F8A3C: bne         $v0, $at, L_803F8A4C
    if (ctx->r2 != ctx->r1) {
        // 0x803F8A40: addiu       $t7, $v0, 0x1
        ctx->r15 = ADD32(ctx->r2, 0X1);
            goto L_803F8A4C;
    }
    // 0x803F8A40: addiu       $t7, $v0, 0x1
    ctx->r15 = ADD32(ctx->r2, 0X1);
    // 0x803F8A44: b           L_803F8A50
    // 0x803F8A48: sb          $zero, 0x3A($a0)
    MEM_B(0X3A, ctx->r4) = 0;
        goto L_803F8A50;
    // 0x803F8A48: sb          $zero, 0x3A($a0)
    MEM_B(0X3A, ctx->r4) = 0;
L_803F8A4C:
    // 0x803F8A4C: sb          $t7, 0x3A($a0)
    MEM_B(0X3A, ctx->r4) = ctx->r15;
L_803F8A50:
    // 0x803F8A50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F8A54:
    // 0x803F8A54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F8A58: jr          $ra
    // 0x803F8A5C: nop

    return;
    // 0x803F8A5C: nop

;}
RECOMP_FUNC void func_803F8A60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F8A60: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x803F8A64: jr          $ra
    // 0x803F8A68: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x803F8A68: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_803F8A6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F8A6C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x803F8A70: jr          $ra
    // 0x803F8A74: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x803F8A74: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_803F8A78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F8A78: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x803F8A7C: addiu       $v0, $v0, 0x1CF0
    ctx->r2 = ADD32(ctx->r2, 0X1CF0);
    // 0x803F8A80: lui         $t6, 0x8040
    ctx->r14 = S32(0X8040 << 16);
    // 0x803F8A84: lbu         $t6, -0x1F10($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X1F10);
    // 0x803F8A88: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x803F8A8C: lui         $t8, 0x8040
    ctx->r24 = S32(0X8040 << 16);
    // 0x803F8A90: sb          $t6, 0x3A($t7)
    MEM_B(0X3A, ctx->r15) = ctx->r14;
    // 0x803F8A94: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x803F8A98: lbu         $t8, -0x1F0F($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X1F0F);
    // 0x803F8A9C: nop

    // 0x803F8AA0: sb          $t8, 0x3B($t9)
    MEM_B(0X3B, ctx->r25) = ctx->r24;
    // 0x803F8AA4: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x803F8AA8: jr          $ra
    // 0x803F8AAC: sb          $zero, 0x3C($t0)
    MEM_B(0X3C, ctx->r8) = 0;
    return;
    // 0x803F8AAC: sb          $zero, 0x3C($t0)
    MEM_B(0X3C, ctx->r8) = 0;
;}
RECOMP_FUNC void func_803F8AB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F8AB0: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x803F8AB4: lw          $a2, 0x1CF0($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X1CF0);
    // 0x803F8AB8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F8ABC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F8AC0: lb          $t6, 0x3A($a2)
    ctx->r14 = MEM_B(ctx->r6, 0X3A);
    // 0x803F8AC4: lui         $at, 0x8040
    ctx->r1 = S32(0X8040 << 16);
    // 0x803F8AC8: sb          $t6, -0x1F10($at)
    MEM_B(-0X1F10, ctx->r1) = ctx->r14;
    // 0x803F8ACC: lb          $t7, 0x3A($a2)
    ctx->r15 = MEM_B(ctx->r6, 0X3A);
    // 0x803F8AD0: lb          $t9, 0x3B($a2)
    ctx->r25 = MEM_B(ctx->r6, 0X3B);
    // 0x803F8AD4: sll         $t8, $t7, 4
    ctx->r24 = S32(ctx->r15 << 4);
    // 0x803F8AD8: lui         $t1, 0x800B
    ctx->r9 = S32(0X800B << 16);
    // 0x803F8ADC: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x803F8AE0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803F8AE4: lbu         $t1, -0x436C($t1)
    ctx->r9 = MEM_BU(ctx->r9, -0X436C);
    // 0x803F8AE8: lui         $at, 0x8040
    ctx->r1 = S32(0X8040 << 16);
    // 0x803F8AEC: lui         $t2, 0x8040
    ctx->r10 = S32(0X8040 << 16);
    // 0x803F8AF0: lui         $t4, 0x8040
    ctx->r12 = S32(0X8040 << 16);
    // 0x803F8AF4: sb          $t1, -0x1F0F($at)
    MEM_B(-0X1F0F, ctx->r1) = ctx->r9;
    // 0x803F8AF8: lbu         $t4, -0x1F0F($t4)
    ctx->r12 = MEM_BU(ctx->r12, -0X1F0F);
    // 0x803F8AFC: lbu         $t2, -0x1F10($t2)
    ctx->r10 = MEM_BU(ctx->r10, -0X1F10);
    // 0x803F8B00: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x803F8B04: sll         $t5, $t4, 3
    ctx->r13 = S32(ctx->r12 << 3);
    // 0x803F8B08: sll         $t3, $t2, 7
    ctx->r11 = S32(ctx->r10 << 7);
    // 0x803F8B0C: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x803F8B10: addiu       $t7, $t7, 0x3D30
    ctx->r15 = ADD32(ctx->r15, 0X3D30);
    // 0x803F8B14: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x803F8B18: addiu       $a0, $a0, 0x1ED8
    ctx->r4 = ADD32(ctx->r4, 0X1ED8);
    // 0x803F8B1C: addu        $a1, $t6, $t7
    ctx->r5 = ADD32(ctx->r14, ctx->r15);
    // 0x803F8B20: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x803F8B24: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F8B28:
    // 0x803F8B28: addu        $t8, $a1, $v0
    ctx->r24 = ADD32(ctx->r5, ctx->r2);
    // 0x803F8B2C: addu        $t0, $a0, $v1
    ctx->r8 = ADD32(ctx->r4, ctx->r3);
    // 0x803F8B30: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x803F8B34: lbu         $t9, 0x0($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X0);
    // 0x803F8B38: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x803F8B3C: slti        $at, $v0, 0x8
    ctx->r1 = SIGNED(ctx->r2) < 0X8 ? 1 : 0;
    // 0x803F8B40: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x803F8B44: bne         $at, $zero, L_803F8B28
    if (ctx->r1 != 0) {
        // 0x803F8B48: sb          $t9, 0x0($t0)
        MEM_B(0X0, ctx->r8) = ctx->r25;
            goto L_803F8B28;
    }
    // 0x803F8B48: sb          $t9, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r25;
    // 0x803F8B4C: lbu         $a0, 0x3A($a2)
    ctx->r4 = MEM_BU(ctx->r6, 0X3A);
    // 0x803F8B50: lbu         $a1, 0x3B($a2)
    ctx->r5 = MEM_BU(ctx->r6, 0X3B);
    // 0x803F8B54: jal         0x8004C714
    // 0x803F8B58: nop

    func_8004C714(rdram, ctx);
        goto after_0;
    // 0x803F8B58: nop

    after_0:
    // 0x803F8B5C: lui         $t2, 0x801B
    ctx->r10 = S32(0X801B << 16);
    // 0x803F8B60: lw          $t2, 0x1CF0($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X1CF0);
    // 0x803F8B64: lui         $at, 0x803A
    ctx->r1 = S32(0X803A << 16);
    // 0x803F8B68: sb          $v0, 0x1EE8($at)
    MEM_B(0X1EE8, ctx->r1) = ctx->r2;
    // 0x803F8B6C: lb          $t4, 0x3A($t2)
    ctx->r12 = MEM_B(ctx->r10, 0X3A);
    // 0x803F8B70: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x803F8B74: lui         $t5, 0x8040
    ctx->r13 = S32(0X8040 << 16);
    // 0x803F8B78: sll         $t3, $t4, 2
    ctx->r11 = S32(ctx->r12 << 2);
    // 0x803F8B7C: lbu         $t5, -0x1F0F($t5)
    ctx->r13 = MEM_BU(ctx->r13, -0X1F0F);
    // 0x803F8B80: addu        $a1, $a1, $t3
    ctx->r5 = ADD32(ctx->r5, ctx->r11);
    // 0x803F8B84: lw          $a1, 0x7278($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X7278);
    // 0x803F8B88: lui         $v0, 0x803A
    ctx->r2 = S32(0X803A << 16);
    // 0x803F8B8C: sll         $t6, $t5, 3
    ctx->r14 = S32(ctx->r13 << 3);
    // 0x803F8B90: addiu       $v0, $v0, 0x1EE0
    ctx->r2 = ADD32(ctx->r2, 0X1EE0);
    // 0x803F8B94: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x803F8B98: addu        $a0, $t6, $a1
    ctx->r4 = ADD32(ctx->r14, ctx->r5);
L_803F8B9C:
    // 0x803F8B9C: addu        $t7, $v1, $a0
    ctx->r15 = ADD32(ctx->r3, ctx->r4);
    // 0x803F8BA0: addu        $t9, $v0, $v1
    ctx->r25 = ADD32(ctx->r2, ctx->r3);
    // 0x803F8BA4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x803F8BA8: lbu         $t8, 0x0($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X0);
    // 0x803F8BAC: andi        $t0, $v1, 0xFF
    ctx->r8 = ctx->r3 & 0XFF;
    // 0x803F8BB0: slti        $at, $t0, 0x8
    ctx->r1 = SIGNED(ctx->r8) < 0X8 ? 1 : 0;
    // 0x803F8BB4: or          $v1, $t0, $zero
    ctx->r3 = ctx->r8 | 0;
    // 0x803F8BB8: bne         $at, $zero, L_803F8B9C
    if (ctx->r1 != 0) {
        // 0x803F8BBC: sb          $t8, 0x0($t9)
        MEM_B(0X0, ctx->r25) = ctx->r24;
            goto L_803F8B9C;
    }
    // 0x803F8BBC: sb          $t8, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r24;
    // 0x803F8BC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F8BC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F8BC8: jr          $ra
    // 0x803F8BCC: nop

    return;
    // 0x803F8BCC: nop

;}
RECOMP_FUNC void func_803F8BD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F8BD0: lui         $t6, 0x8040
    ctx->r14 = S32(0X8040 << 16);
    // 0x803F8BD4: lui         $t8, 0x8040
    ctx->r24 = S32(0X8040 << 16);
    // 0x803F8BD8: lbu         $t8, -0x1F0F($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X1F0F);
    // 0x803F8BDC: lbu         $t6, -0x1F10($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X1F10);
    // 0x803F8BE0: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x803F8BE4: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x803F8BE8: sll         $t7, $t6, 7
    ctx->r15 = S32(ctx->r14 << 7);
    // 0x803F8BEC: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x803F8BF0: addiu       $t1, $t1, 0x3D30
    ctx->r9 = ADD32(ctx->r9, 0X3D30);
    // 0x803F8BF4: addu        $v1, $t0, $t1
    ctx->r3 = ADD32(ctx->r8, ctx->r9);
    // 0x803F8BF8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F8BFC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_803F8C00:
    // 0x803F8C00: addu        $t2, $v0, $a0
    ctx->r10 = ADD32(ctx->r2, ctx->r4);
    // 0x803F8C04: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x803F8C08: addu        $t4, $v1, $a1
    ctx->r12 = ADD32(ctx->r3, ctx->r5);
    // 0x803F8C0C: lbu         $t3, 0x0($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X0);
    // 0x803F8C10: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    // 0x803F8C14: slti        $at, $a1, 0x8
    ctx->r1 = SIGNED(ctx->r5) < 0X8 ? 1 : 0;
    // 0x803F8C18: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x803F8C1C: bne         $at, $zero, L_803F8C00
    if (ctx->r1 != 0) {
        // 0x803F8C20: sb          $t3, 0x0($t4)
        MEM_B(0X0, ctx->r12) = ctx->r11;
            goto L_803F8C00;
    }
    // 0x803F8C20: sb          $t3, 0x0($t4)
    MEM_B(0X0, ctx->r12) = ctx->r11;
    // 0x803F8C24: jr          $ra
    // 0x803F8C28: nop

    return;
    // 0x803F8C28: nop

;}
RECOMP_FUNC void func_803F8C2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F8C2C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x803F8C30: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x803F8C34: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x803F8C38: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x803F8C3C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x803F8C40: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803F8C44: lui         $s3, 0x8040
    ctx->r19 = S32(0X8040 << 16);
    // 0x803F8C48: lui         $s4, 0x8011
    ctx->r20 = S32(0X8011 << 16);
    // 0x803F8C4C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x803F8C50: addiu       $s4, $s4, 0x3D30
    ctx->r20 = ADD32(ctx->r20, 0X3D30);
    // 0x803F8C54: addiu       $s3, $s3, -0x46D0
    ctx->r19 = ADD32(ctx->r19, -0X46D0);
    // 0x803F8C58: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x803F8C5C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x803F8C60: addiu       $s2, $zero, 0x60
    ctx->r18 = ADD32(0, 0X60);
L_803F8C64:
    // 0x803F8C64: multu       $s0, $s2
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x803F8C68: lw          $t7, 0x0($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X0);
    // 0x803F8C6C: sll         $t8, $s0, 7
    ctx->r24 = S32(ctx->r16 << 7);
    // 0x803F8C70: addu        $a0, $s4, $t8
    ctx->r4 = ADD32(ctx->r20, ctx->r24);
    // 0x803F8C74: mflo        $t6
    ctx->r14 = lo;
    // 0x803F8C78: addu        $a1, $t6, $t7
    ctx->r5 = ADD32(ctx->r14, ctx->r15);
    // 0x803F8C7C: jal         0x8003240C
    // 0x803F8C80: nop

    func_8003240C(rdram, ctx);
        goto after_0;
    // 0x803F8C80: nop

    after_0:
    // 0x803F8C84: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x803F8C88: andi        $s0, $s1, 0xFF
    ctx->r16 = ctx->r17 & 0XFF;
    // 0x803F8C8C: slti        $at, $s0, 0x24
    ctx->r1 = SIGNED(ctx->r16) < 0X24 ? 1 : 0;
    // 0x803F8C90: bne         $at, $zero, L_803F8C64
    if (ctx->r1 != 0) {
        // 0x803F8C94: or          $s1, $s0, $zero
        ctx->r17 = ctx->r16 | 0;
            goto L_803F8C64;
    }
    // 0x803F8C94: or          $s1, $s0, $zero
    ctx->r17 = ctx->r16 | 0;
    // 0x803F8C98: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x803F8C9C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F8CA0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x803F8CA4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x803F8CA8: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x803F8CAC: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x803F8CB0: jr          $ra
    // 0x803F8CB4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x803F8CB4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_803F8CB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F8CB8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x803F8CBC: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x803F8CC0: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x803F8CC4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x803F8CC8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x803F8CCC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803F8CD0: lui         $s3, 0x8040
    ctx->r19 = S32(0X8040 << 16);
    // 0x803F8CD4: lui         $s4, 0x8011
    ctx->r20 = S32(0X8011 << 16);
    // 0x803F8CD8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x803F8CDC: addiu       $s4, $s4, 0x3D30
    ctx->r20 = ADD32(ctx->r20, 0X3D30);
    // 0x803F8CE0: addiu       $s3, $s3, -0x46D0
    ctx->r19 = ADD32(ctx->r19, -0X46D0);
    // 0x803F8CE4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x803F8CE8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x803F8CEC: addiu       $s2, $zero, 0x60
    ctx->r18 = ADD32(0, 0X60);
L_803F8CF0:
    // 0x803F8CF0: multu       $s0, $s2
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x803F8CF4: lw          $t7, 0x0($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X0);
    // 0x803F8CF8: sll         $t8, $s0, 7
    ctx->r24 = S32(ctx->r16 << 7);
    // 0x803F8CFC: addu        $a1, $s4, $t8
    ctx->r5 = ADD32(ctx->r20, ctx->r24);
    // 0x803F8D00: mflo        $t6
    ctx->r14 = lo;
    // 0x803F8D04: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
    // 0x803F8D08: jal         0x80032578
    // 0x803F8D0C: nop

    func_80032578(rdram, ctx);
        goto after_0;
    // 0x803F8D0C: nop

    after_0:
    // 0x803F8D10: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x803F8D14: andi        $s0, $s1, 0xFF
    ctx->r16 = ctx->r17 & 0XFF;
    // 0x803F8D18: slti        $at, $s0, 0x24
    ctx->r1 = SIGNED(ctx->r16) < 0X24 ? 1 : 0;
    // 0x803F8D1C: bne         $at, $zero, L_803F8CF0
    if (ctx->r1 != 0) {
        // 0x803F8D20: or          $s1, $s0, $zero
        ctx->r17 = ctx->r16 | 0;
            goto L_803F8CF0;
    }
    // 0x803F8D20: or          $s1, $s0, $zero
    ctx->r17 = ctx->r16 | 0;
    // 0x803F8D24: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x803F8D28: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F8D2C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x803F8D30: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x803F8D34: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x803F8D38: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x803F8D3C: jr          $ra
    // 0x803F8D40: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x803F8D40: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_803F8D44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F8D44: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F8D48: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F8D4C: jal         0x800384C4
    // 0x803F8D50: nop

    func_800384C4(rdram, ctx);
        goto after_0;
    // 0x803F8D50: nop

    after_0:
    // 0x803F8D54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F8D58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F8D5C: jr          $ra
    // 0x803F8D60: nop

    return;
    // 0x803F8D60: nop

;}
RECOMP_FUNC void func_803F8D64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F8D64: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F8D68: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F8D6C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803F8D70: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803F8D74: sb          $zero, 0x39($a0)
    MEM_B(0X39, ctx->r4) = 0;
    // 0x803F8D78: lui         $a0, 0x8040
    ctx->r4 = S32(0X8040 << 16);
    // 0x803F8D7C: jal         0x800296E0
    // 0x803F8D80: addiu       $a0, $a0, -0x7B28
    ctx->r4 = ADD32(ctx->r4, -0X7B28);
    func_800296E0(rdram, ctx);
        goto after_0;
    // 0x803F8D80: addiu       $a0, $a0, -0x7B28
    ctx->r4 = ADD32(ctx->r4, -0X7B28);
    after_0:
    // 0x803F8D84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F8D88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F8D8C: jr          $ra
    // 0x803F8D90: nop

    return;
    // 0x803F8D90: nop

;}
RECOMP_FUNC void func_803F8D94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F8D94: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F8D98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F8D9C: jal         0x80032200
    // 0x803F8DA0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80032200(rdram, ctx);
        goto after_0;
    // 0x803F8DA0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x803F8DA4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803F8DA8: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x803F8DAC: jal         0x80034908
    // 0x803F8DB0: nop

    func_80034908(rdram, ctx);
        goto after_1;
    // 0x803F8DB0: nop

    after_1:
    // 0x803F8DB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F8DB8: bne         $v0, $zero, L_803F8DCC
    if (ctx->r2 != 0) {
        // 0x803F8DBC: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_803F8DCC;
    }
    // 0x803F8DBC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x803F8DC0: b           L_803F8DCC
    // 0x803F8DC4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_803F8DCC;
    // 0x803F8DC4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F8DC8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_803F8DCC:
    // 0x803F8DCC: jr          $ra
    // 0x803F8DD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x803F8DD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_803F8DD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F8DD4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F8DD8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F8DDC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803F8DE0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803F8DE4: jal         0x80035154
    // 0x803F8DE8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80035154(rdram, ctx);
        goto after_0;
    // 0x803F8DE8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x803F8DEC: lui         $a0, 0x8040
    ctx->r4 = S32(0X8040 << 16);
    // 0x803F8DF0: addiu       $a0, $a0, -0x71F4
    ctx->r4 = ADD32(ctx->r4, -0X71F4);
    // 0x803F8DF4: jal         0x8002989C
    // 0x803F8DF8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_8002989C(rdram, ctx);
        goto after_1;
    // 0x803F8DF8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_1:
    // 0x803F8DFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F8E00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F8E04: jr          $ra
    // 0x803F8E08: nop

    return;
    // 0x803F8E08: nop

;}
RECOMP_FUNC void func_803F8E0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F8E0C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F8E10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F8E14: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803F8E18: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803F8E1C: jal         0x80037908
    // 0x803F8E20: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80037908(rdram, ctx);
        goto after_0;
    // 0x803F8E20: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x803F8E24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F8E28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F8E2C: jr          $ra
    // 0x803F8E30: nop

    return;
    // 0x803F8E30: nop

;}
RECOMP_FUNC void func_803F8E34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F8E34: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F8E38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F8E3C: jal         0x8004BD64
    // 0x803F8E40: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8004BD64(rdram, ctx);
        goto after_0;
    // 0x803F8E40: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x803F8E44: lui         $t6, 0x8040
    ctx->r14 = S32(0X8040 << 16);
    // 0x803F8E48: lw          $t8, 0x14($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X14);
    // 0x803F8E4C: addiu       $t6, $t6, -0x7190
    ctx->r14 = ADD32(ctx->r14, -0X7190);
    // 0x803F8E50: lui         $t7, 0x803D
    ctx->r15 = S32(0X803D << 16);
    // 0x803F8E54: sw          $t6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r14;
    // 0x803F8E58: addiu       $t7, $t7, 0x4E20
    ctx->r15 = ADD32(ctx->r15, 0X4E20);
    // 0x803F8E5C: sw          $t7, 0x30($t8)
    MEM_W(0X30, ctx->r24) = ctx->r15;
    // 0x803F8E60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F8E64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F8E68: jr          $ra
    // 0x803F8E6C: nop

    return;
    // 0x803F8E6C: nop

;}
RECOMP_FUNC void func_803F8E70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F8E70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F8E74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F8E78: lw          $v1, 0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X8);
    // 0x803F8E7C: sb          $zero, 0x4($a1)
    MEM_B(0X4, ctx->r5) = 0;
    // 0x803F8E80: lb          $t6, 0x38($v1)
    ctx->r14 = MEM_B(ctx->r3, 0X38);
    // 0x803F8E84: nop

    // 0x803F8E88: bne         $t6, $zero, L_803F8EC8
    if (ctx->r14 != 0) {
        // 0x803F8E8C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_803F8EC8;
    }
    // 0x803F8E8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F8E90: lb          $t7, 0x39($v1)
    ctx->r15 = MEM_B(ctx->r3, 0X39);
    // 0x803F8E94: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803F8E98: bne         $t7, $at, L_803F8EC4
    if (ctx->r15 != ctx->r1) {
        // 0x803F8E9C: or          $a0, $a1, $zero
        ctx->r4 = ctx->r5 | 0;
            goto L_803F8EC4;
    }
    // 0x803F8E9C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x803F8EA0: lb          $t8, 0x3B($v1)
    ctx->r24 = MEM_B(ctx->r3, 0X3B);
    // 0x803F8EA4: lui         $t0, 0x803A
    ctx->r8 = S32(0X803A << 16);
    // 0x803F8EA8: addiu       $t0, $t0, -0x59F4
    ctx->r8 = ADD32(ctx->r8, -0X59F4);
    // 0x803F8EAC: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x803F8EB0: addu        $v0, $t9, $t0
    ctx->r2 = ADD32(ctx->r25, ctx->r8);
    // 0x803F8EB4: lh          $a1, 0x0($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X0);
    // 0x803F8EB8: lh          $a2, 0x2($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X2);
    // 0x803F8EBC: jal         0x8004CD44
    // 0x803F8EC0: nop

    func_8004CD44(rdram, ctx);
        goto after_0;
    // 0x803F8EC0: nop

    after_0:
L_803F8EC4:
    // 0x803F8EC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F8EC8:
    // 0x803F8EC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F8ECC: jr          $ra
    // 0x803F8ED0: nop

    return;
    // 0x803F8ED0: nop

;}
RECOMP_FUNC void func_803F8ED4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F8ED4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F8ED8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F8EDC: jal         0x8004BD64
    // 0x803F8EE0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8004BD64(rdram, ctx);
        goto after_0;
    // 0x803F8EE0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x803F8EE4: lui         $t6, 0x8040
    ctx->r14 = S32(0X8040 << 16);
    // 0x803F8EE8: addiu       $t6, $t6, -0x7100
    ctx->r14 = ADD32(ctx->r14, -0X7100);
    // 0x803F8EEC: sw          $t6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r14;
    // 0x803F8EF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F8EF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F8EF8: jr          $ra
    // 0x803F8EFC: nop

    return;
    // 0x803F8EFC: nop

;}
RECOMP_FUNC void func_803F8F00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F8F00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F8F04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F8F08: lw          $a2, 0x8($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X8);
    // 0x803F8F0C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x803F8F10: lb          $v0, 0x38($a2)
    ctx->r2 = MEM_B(ctx->r6, 0X38);
    // 0x803F8F14: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803F8F18: beq         $v0, $v1, L_803F8F30
    if (ctx->r2 == ctx->r3) {
        // 0x803F8F1C: nop
    
            goto L_803F8F30;
    }
    // 0x803F8F1C: nop

    // 0x803F8F20: beq         $v0, $at, L_803F8F30
    if (ctx->r2 == ctx->r1) {
        // 0x803F8F24: nop
    
            goto L_803F8F30;
    }
    // 0x803F8F24: nop

    // 0x803F8F28: b           L_803F8F88
    // 0x803F8F2C: sw          $zero, 0x30($a1)
    MEM_W(0X30, ctx->r5) = 0;
        goto L_803F8F88;
    // 0x803F8F2C: sw          $zero, 0x30($a1)
    MEM_W(0X30, ctx->r5) = 0;
L_803F8F30:
    // 0x803F8F30: lb          $v0, 0x39($a2)
    ctx->r2 = MEM_B(ctx->r6, 0X39);
    // 0x803F8F34: nop

    // 0x803F8F38: bne         $v0, $zero, L_803F8F48
    if (ctx->r2 != 0) {
        // 0x803F8F3C: nop
    
            goto L_803F8F48;
    }
    // 0x803F8F3C: nop

    // 0x803F8F40: b           L_803F8F88
    // 0x803F8F44: sw          $zero, 0x30($a1)
    MEM_W(0X30, ctx->r5) = 0;
        goto L_803F8F88;
    // 0x803F8F44: sw          $zero, 0x30($a1)
    MEM_W(0X30, ctx->r5) = 0;
L_803F8F48:
    // 0x803F8F48: bne         $v1, $v0, L_803F8F68
    if (ctx->r3 != ctx->r2) {
        // 0x803F8F4C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_803F8F68;
    }
    // 0x803F8F4C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803F8F50: addiu       $t6, $zero, 0x210
    ctx->r14 = ADD32(0, 0X210);
    // 0x803F8F54: sh          $t6, 0x12($a1)
    MEM_H(0X12, ctx->r5) = ctx->r14;
    // 0x803F8F58: jal         0x803F8F98
    // 0x803F8F5C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_803F8F98(rdram, ctx);
        goto after_0;
    // 0x803F8F5C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_0:
    // 0x803F8F60: b           L_803F8F8C
    // 0x803F8F64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F8F8C;
    // 0x803F8F64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F8F68:
    // 0x803F8F68: bne         $v0, $at, L_803F8F84
    if (ctx->r2 != ctx->r1) {
        // 0x803F8F6C: addiu       $t7, $zero, 0x414
        ctx->r15 = ADD32(0, 0X414);
            goto L_803F8F84;
    }
    // 0x803F8F6C: addiu       $t7, $zero, 0x414
    ctx->r15 = ADD32(0, 0X414);
    // 0x803F8F70: sh          $t7, 0x12($a1)
    MEM_H(0X12, ctx->r5) = ctx->r15;
    // 0x803F8F74: jal         0x803F8F98
    // 0x803F8F78: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_803F8F98(rdram, ctx);
        goto after_1;
    // 0x803F8F78: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_1:
    // 0x803F8F7C: b           L_803F8F8C
    // 0x803F8F80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F8F8C;
    // 0x803F8F80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F8F84:
    // 0x803F8F84: sw          $zero, 0x30($a1)
    MEM_W(0X30, ctx->r5) = 0;
L_803F8F88:
    // 0x803F8F88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F8F8C:
    // 0x803F8F8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F8F90: jr          $ra
    // 0x803F8F94: nop

    return;
    // 0x803F8F94: nop

;}
RECOMP_FUNC void func_803F8F98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F8F98: lb          $t6, 0x3C($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X3C);
    // 0x803F8F9C: lui         $t8, 0x803D
    ctx->r24 = S32(0X803D << 16);
    // 0x803F8FA0: bne         $t6, $zero, L_803F8FB8
    if (ctx->r14 != 0) {
        // 0x803F8FA4: addiu       $t8, $t8, 0x4F34
        ctx->r24 = ADD32(ctx->r24, 0X4F34);
            goto L_803F8FB8;
    }
    // 0x803F8FA4: addiu       $t8, $t8, 0x4F34
    ctx->r24 = ADD32(ctx->r24, 0X4F34);
    // 0x803F8FA8: lui         $t7, 0x803D
    ctx->r15 = S32(0X803D << 16);
    // 0x803F8FAC: addiu       $t7, $t7, 0x4F04
    ctx->r15 = ADD32(ctx->r15, 0X4F04);
    // 0x803F8FB0: jr          $ra
    // 0x803F8FB4: sw          $t7, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r15;
    return;
    // 0x803F8FB4: sw          $t7, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r15;
L_803F8FB8:
    // 0x803F8FB8: sw          $t8, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r24;
    // 0x803F8FBC: jr          $ra
    // 0x803F8FC0: nop

    return;
    // 0x803F8FC0: nop

;}
RECOMP_FUNC void func_803F8FC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F8FC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F8FC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F8FCC: lui         $a0, 0x8040
    ctx->r4 = S32(0X8040 << 16);
    // 0x803F8FD0: jal         0x80029354
    // 0x803F8FD4: addiu       $a0, $a0, -0x6FE8
    ctx->r4 = ADD32(ctx->r4, -0X6FE8);
    func_80029354(rdram, ctx);
        goto after_0;
    // 0x803F8FD4: addiu       $a0, $a0, -0x6FE8
    ctx->r4 = ADD32(ctx->r4, -0X6FE8);
    after_0:
    // 0x803F8FD8: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x803F8FDC: lui         $t6, 0x803D
    ctx->r14 = S32(0X803D << 16);
    // 0x803F8FE0: addiu       $t6, $t6, 0x3CD4
    ctx->r14 = ADD32(ctx->r14, 0X3CD4);
    // 0x803F8FE4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803F8FE8: jal         0x8004BC68
    // 0x803F8FEC: sw          $t6, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r14;
    func_8004BC68(rdram, ctx);
        goto after_1;
    // 0x803F8FEC: sw          $t6, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r14;
    after_1:
    // 0x803F8FF0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803F8FF4: lb          $a0, -0x326B($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X326B);
    // 0x803F8FF8: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x803F8FFC: addiu       $a2, $zero, 0x55
    ctx->r6 = ADD32(0, 0X55);
    // 0x803F9000: jal         0x80039F1C
    // 0x803F9004: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80039F1C(rdram, ctx);
        goto after_2;
    // 0x803F9004: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x803F9008: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F900C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F9010: jr          $ra
    // 0x803F9014: nop

    return;
    // 0x803F9014: nop

;}
RECOMP_FUNC void func_803F9018(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F9018: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803F901C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F9020: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x803F9024: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x803F9028: lb          $v1, 0x3A($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X3A);
    // 0x803F902C: nop

    // 0x803F9030: andi        $a1, $v1, 0xFF
    ctx->r5 = ctx->r3 & 0XFF;
    // 0x803F9034: jal         0x8004BC68
    // 0x803F9038: sb          $v1, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r3;
    func_8004BC68(rdram, ctx);
        goto after_0;
    // 0x803F9038: sb          $v1, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r3;
    after_0:
    // 0x803F903C: lb          $a0, 0x1F($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X1F);
    // 0x803F9040: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x803F9044: addiu       $a2, $zero, 0x55
    ctx->r6 = ADD32(0, 0X55);
    // 0x803F9048: jal         0x80039F1C
    // 0x803F904C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80039F1C(rdram, ctx);
        goto after_1;
    // 0x803F904C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x803F9050: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F9054: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803F9058: jr          $ra
    // 0x803F905C: nop

    return;
    // 0x803F905C: nop

;}
RECOMP_FUNC void func_803F9060(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F9060: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803F9064: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x803F9068: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x803F906C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803F9070: lui         $s2, 0x8040
    ctx->r18 = S32(0X8040 << 16);
    // 0x803F9074: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x803F9078: addiu       $s2, $s2, -0x6F44
    ctx->r18 = ADD32(ctx->r18, -0X6F44);
    // 0x803F907C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x803F9080: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_803F9084:
    // 0x803F9084: jal         0x80029354
    // 0x803F9088: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_80029354(rdram, ctx);
        goto after_0;
    // 0x803F9088: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_0:
    // 0x803F908C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x803F9090: sb          $s1, 0x38($v0)
    MEM_B(0X38, ctx->r2) = ctx->r17;
    // 0x803F9094: andi        $s1, $s0, 0xFF
    ctx->r17 = ctx->r16 & 0XFF;
    // 0x803F9098: slti        $at, $s1, 0x10
    ctx->r1 = SIGNED(ctx->r17) < 0X10 ? 1 : 0;
    // 0x803F909C: bne         $at, $zero, L_803F9084
    if (ctx->r1 != 0) {
        // 0x803F90A0: or          $s0, $s1, $zero
        ctx->r16 = ctx->r17 | 0;
            goto L_803F9084;
    }
    // 0x803F90A0: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
    // 0x803F90A4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F90A8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F90AC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x803F90B0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x803F90B4: jr          $ra
    // 0x803F90B8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x803F90B8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_803F90BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F90BC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x803F90C0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803F90C4: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x803F90C8: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x803F90CC: lw          $v1, 0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X8);
    // 0x803F90D0: lb          $t1, 0x38($a0)
    ctx->r9 = MEM_B(ctx->r4, 0X38);
    // 0x803F90D4: lb          $t0, 0x3A($v1)
    ctx->r8 = MEM_B(ctx->r3, 0X3A);
    // 0x803F90D8: lui         $t8, 0x803A
    ctx->r24 = S32(0X803A << 16);
    // 0x803F90DC: addiu       $t8, $t8, -0x59F4
    ctx->r24 = ADD32(ctx->r24, -0X59F4);
    // 0x803F90E0: sll         $t7, $t1, 2
    ctx->r15 = S32(ctx->r9 << 2);
    // 0x803F90E4: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x803F90E8: lh          $t2, 0x2($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X2);
    // 0x803F90EC: lh          $a3, 0x0($v0)
    ctx->r7 = MEM_H(ctx->r2, 0X0);
    // 0x803F90F0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x803F90F4: andi        $a2, $t1, 0xFF
    ctx->r6 = ctx->r9 & 0XFF;
    // 0x803F90F8: andi        $a1, $t0, 0xFF
    ctx->r5 = ctx->r8 & 0XFF;
    // 0x803F90FC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x803F9100: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x803F9104: sb          $t1, 0x37($sp)
    MEM_B(0X37, ctx->r29) = ctx->r9;
    // 0x803F9108: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x803F910C: sh          $t2, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r10;
    // 0x803F9110: jal         0x8004C6B4
    // 0x803F9114: sh          $a3, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r7;
    func_8004C6B4(rdram, ctx);
        goto after_0;
    // 0x803F9114: sh          $a3, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r7;
    after_0:
    // 0x803F9118: lb          $t1, 0x37($sp)
    ctx->r9 = MEM_B(ctx->r29, 0X37);
    // 0x803F911C: lh          $a3, 0x34($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X34);
    // 0x803F9120: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x803F9124: lh          $t2, 0x32($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X32);
    // 0x803F9128: ori         $at, $at, 0xFEE8
    ctx->r1 = ctx->r1 | 0XFEE8;
    // 0x803F912C: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x803F9130: sll         $t9, $t1, 5
    ctx->r25 = S32(ctx->r9 << 5);
    // 0x803F9134: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x803F9138: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x803F913C: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x803F9140: sll         $t5, $a3, 16
    ctx->r13 = S32(ctx->r7 << 16);
    // 0x803F9144: addu        $t3, $t9, $at
    ctx->r11 = ADD32(ctx->r25, ctx->r1);
    // 0x803F9148: addiu       $t4, $t4, -0x3770
    ctx->r12 = ADD32(ctx->r12, -0X3770);
    // 0x803F914C: addu        $a0, $t3, $t4
    ctx->r4 = ADD32(ctx->r11, ctx->r12);
    // 0x803F9150: sra         $a3, $t5, 16
    ctx->r7 = S32(SIGNED(ctx->r13) >> 16);
    // 0x803F9154: jal         0x8004D2C8
    // 0x803F9158: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    func_8004D2C8(rdram, ctx);
        goto after_1;
    // 0x803F9158: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    after_1:
    // 0x803F915C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F9160: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x803F9164: jr          $ra
    // 0x803F9168: nop

    return;
    // 0x803F9168: nop

;}
RECOMP_FUNC void func_803F916C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F916C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F9170: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F9174: lui         $a0, 0x8040
    ctx->r4 = S32(0X8040 << 16);
    // 0x803F9178: addiu       $a0, $a0, -0x6E6C
    ctx->r4 = ADD32(ctx->r4, -0X6E6C);
    // 0x803F917C: jal         0x800293DC
    // 0x803F9180: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_800293DC(rdram, ctx);
        goto after_0;
    // 0x803F9180: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x803F9184: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F9188: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F918C: jr          $ra
    // 0x803F9190: nop

    return;
    // 0x803F9190: nop

;}
RECOMP_FUNC void func_803F9194(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F9194: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x803F9198: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x803F919C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x803F91A0: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x803F91A4: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    // 0x803F91A8: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x803F91AC: jal         0x8002F224
    // 0x803F91B0: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    func_8002F224(rdram, ctx);
        goto after_0;
    // 0x803F91B0: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    after_0:
    // 0x803F91B4: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x803F91B8: jal         0x8002A468
    // 0x803F91BC: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    func_8002A468(rdram, ctx);
        goto after_1;
    // 0x803F91BC: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    after_1:
    // 0x803F91C0: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x803F91C4: nop

    // 0x803F91C8: lb          $t6, 0x38($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X38);
    // 0x803F91CC: nop

    // 0x803F91D0: bne         $t6, $zero, L_803F9210
    if (ctx->r14 != 0) {
        // 0x803F91D4: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_803F9210;
    }
    // 0x803F91D4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F91D8: lb          $t7, 0x39($v0)
    ctx->r15 = MEM_B(ctx->r2, 0X39);
    // 0x803F91DC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803F91E0: bne         $t7, $at, L_803F920C
    if (ctx->r15 != ctx->r1) {
        // 0x803F91E4: addiu       $a3, $zero, 0x14
        ctx->r7 = ADD32(0, 0X14);
            goto L_803F920C;
    }
    // 0x803F91E4: addiu       $a3, $zero, 0x14
    ctx->r7 = ADD32(0, 0X14);
    // 0x803F91E8: lbu         $a0, 0x3A($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X3A);
    // 0x803F91EC: lbu         $a1, 0x3B($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X3B);
    // 0x803F91F0: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x803F91F4: addiu       $t8, $zero, 0xC0
    ctx->r24 = ADD32(0, 0XC0);
    // 0x803F91F8: addiu       $t9, $zero, 0x70
    ctx->r25 = ADD32(0, 0X70);
    // 0x803F91FC: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x803F9200: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x803F9204: jal         0x8006FFA0
    // 0x803F9208: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    func_8006FFA0(rdram, ctx);
        goto after_2;
    // 0x803F9208: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_2:
L_803F920C:
    // 0x803F920C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_803F9210:
    // 0x803F9210: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x803F9214: jr          $ra
    // 0x803F9218: nop

    return;
    // 0x803F9218: nop

;}
RECOMP_FUNC void func_803F921C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F921C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F9220: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F9224: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x803F9228: lbu         $v0, 0x71($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X71);
    // 0x803F922C: lw          $v1, 0x8($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X8);
    // 0x803F9230: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x803F9234: lb          $t7, 0x38($v1)
    ctx->r15 = MEM_B(ctx->r3, 0X38);
    // 0x803F9238: addiu       $t9, $zero, 0xA
    ctx->r25 = ADD32(0, 0XA);
    // 0x803F923C: bne         $v0, $t7, L_803F9270
    if (ctx->r2 != ctx->r15) {
        // 0x803F9240: nop
    
            goto L_803F9270;
    }
    // 0x803F9240: nop

    // 0x803F9244: lb          $t8, 0x39($v1)
    ctx->r24 = MEM_B(ctx->r3, 0X39);
    // 0x803F9248: nop

    // 0x803F924C: bne         $t8, $zero, L_803F9270
    if (ctx->r24 != 0) {
        // 0x803F9250: nop
    
            goto L_803F9270;
    }
    // 0x803F9250: nop

    // 0x803F9254: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803F9258: jal         0x8006F678
    // 0x803F925C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8006F678(rdram, ctx);
        goto after_0;
    // 0x803F925C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x803F9260: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803F9264: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x803F9268: b           L_803F927C
    // 0x803F926C: lhu         $t0, 0x3A($a0)
    ctx->r8 = MEM_HU(ctx->r4, 0X3A);
        goto L_803F927C;
    // 0x803F926C: lhu         $t0, 0x3A($a0)
    ctx->r8 = MEM_HU(ctx->r4, 0X3A);
L_803F9270:
    // 0x803F9270: sh          $t9, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r25;
    // 0x803F9274: sh          $zero, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = 0;
    // 0x803F9278: lhu         $t0, 0x3A($a0)
    ctx->r8 = MEM_HU(ctx->r4, 0X3A);
L_803F927C:
    // 0x803F927C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803F9280: bne         $t0, $at, L_803F92A0
    if (ctx->r8 != ctx->r1) {
        // 0x803F9284: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_803F92A0;
    }
    // 0x803F9284: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x803F9288: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x803F928C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x803F9290: jal         0x8002135C
    // 0x803F9294: addiu       $a2, $zero, 0x29
    ctx->r6 = ADD32(0, 0X29);
    func_8002135C(rdram, ctx);
        goto after_1;
    // 0x803F9294: addiu       $a2, $zero, 0x29
    ctx->r6 = ADD32(0, 0X29);
    after_1:
    // 0x803F9298: b           L_803F92B0
    // 0x803F929C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F92B0;
    // 0x803F929C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F92A0:
    // 0x803F92A0: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x803F92A4: jal         0x8002135C
    // 0x803F92A8: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x803F92A8: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    after_2:
    // 0x803F92AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F92B0:
    // 0x803F92B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F92B4: jr          $ra
    // 0x803F92B8: nop

    return;
    // 0x803F92B8: nop

;}
RECOMP_FUNC void func_803F92BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F92BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F92C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F92C4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803F92C8: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x803F92CC: lbu         $v0, 0x71($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X71);
    // 0x803F92D0: lw          $v1, 0x8($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X8);
    // 0x803F92D4: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x803F92D8: lb          $t7, 0x38($v1)
    ctx->r15 = MEM_B(ctx->r3, 0X38);
    // 0x803F92DC: nop

    // 0x803F92E0: bne         $v0, $t7, L_803F92FC
    if (ctx->r2 != ctx->r15) {
        // 0x803F92E4: nop
    
            goto L_803F92FC;
    }
    // 0x803F92E4: nop

    // 0x803F92E8: jal         0x8006F678
    // 0x803F92EC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8006F678(rdram, ctx);
        goto after_0;
    // 0x803F92EC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x803F92F0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803F92F4: b           L_803F9308
    // 0x803F92F8: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
        goto L_803F9308;
    // 0x803F92F8: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
L_803F92FC:
    // 0x803F92FC: sh          $t8, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r24;
    // 0x803F9300: sh          $zero, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = 0;
    // 0x803F9304: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
L_803F9308:
    // 0x803F9308: jal         0x803F9394
    // 0x803F930C: nop

    func_803F9394(rdram, ctx);
        goto after_1;
    // 0x803F930C: nop

    after_1:
    // 0x803F9310: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F9314: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F9318: jr          $ra
    // 0x803F931C: nop

    return;
    // 0x803F931C: nop

;}
RECOMP_FUNC void func_803F9320(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F9320: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F9324: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F9328: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803F932C: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x803F9330: lbu         $v0, 0x71($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X71);
    // 0x803F9334: lw          $v1, 0x8($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X8);
    // 0x803F9338: addiu       $t9, $zero, 0xA
    ctx->r25 = ADD32(0, 0XA);
    // 0x803F933C: lb          $t7, 0x38($v1)
    ctx->r15 = MEM_B(ctx->r3, 0X38);
    // 0x803F9340: nop

    // 0x803F9344: bne         $v0, $t7, L_803F9370
    if (ctx->r2 != ctx->r15) {
        // 0x803F9348: nop
    
            goto L_803F9370;
    }
    // 0x803F9348: nop

    // 0x803F934C: lb          $t8, 0x39($v1)
    ctx->r24 = MEM_B(ctx->r3, 0X39);
    // 0x803F9350: nop

    // 0x803F9354: bne         $t8, $zero, L_803F9370
    if (ctx->r24 != 0) {
        // 0x803F9358: nop
    
            goto L_803F9370;
    }
    // 0x803F9358: nop

    // 0x803F935C: jal         0x8006F678
    // 0x803F9360: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8006F678(rdram, ctx);
        goto after_0;
    // 0x803F9360: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x803F9364: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803F9368: b           L_803F937C
    // 0x803F936C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
        goto L_803F937C;
    // 0x803F936C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
L_803F9370:
    // 0x803F9370: sh          $t9, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r25;
    // 0x803F9374: sh          $zero, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = 0;
    // 0x803F9378: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
L_803F937C:
    // 0x803F937C: jal         0x803F9394
    // 0x803F9380: nop

    func_803F9394(rdram, ctx);
        goto after_1;
    // 0x803F9380: nop

    after_1:
    // 0x803F9384: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F9388: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F938C: jr          $ra
    // 0x803F9390: nop

    return;
    // 0x803F9390: nop

;}
RECOMP_FUNC void func_803F9394(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F9394: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F9398: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F939C: lhu         $t6, 0x3A($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X3A);
    // 0x803F93A0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803F93A4: bne         $t6, $at, L_803F93C4
    if (ctx->r14 != ctx->r1) {
        // 0x803F93A8: or          $a3, $a1, $zero
        ctx->r7 = ctx->r5 | 0;
            goto L_803F93C4;
    }
    // 0x803F93A8: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x803F93AC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x803F93B0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x803F93B4: jal         0x8002135C
    // 0x803F93B8: addiu       $a2, $zero, 0xE1
    ctx->r6 = ADD32(0, 0XE1);
    func_8002135C(rdram, ctx);
        goto after_0;
    // 0x803F93B8: addiu       $a2, $zero, 0xE1
    ctx->r6 = ADD32(0, 0XE1);
    after_0:
    // 0x803F93BC: b           L_803F93D8
    // 0x803F93C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F93D8;
    // 0x803F93C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F93C4:
    // 0x803F93C4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x803F93C8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x803F93CC: jal         0x8002135C
    // 0x803F93D0: addiu       $a2, $zero, 0xE0
    ctx->r6 = ADD32(0, 0XE0);
    func_8002135C(rdram, ctx);
        goto after_1;
    // 0x803F93D0: addiu       $a2, $zero, 0xE0
    ctx->r6 = ADD32(0, 0XE0);
    after_1:
    // 0x803F93D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F93D8:
    // 0x803F93D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F93DC: jr          $ra
    // 0x803F93E0: nop

    return;
    // 0x803F93E0: nop

;}
RECOMP_FUNC void func_803F93E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F93E4: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x803F93E8: nop

    // 0x803F93EC: lw          $v0, 0x8($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X8);
    // 0x803F93F0: sb          $zero, 0x4($a1)
    MEM_B(0X4, ctx->r5) = 0;
    // 0x803F93F4: lb          $t7, 0x38($v0)
    ctx->r15 = MEM_B(ctx->r2, 0X38);
    // 0x803F93F8: nop

    // 0x803F93FC: bne         $t7, $zero, L_803F9418
    if (ctx->r15 != 0) {
        // 0x803F9400: nop
    
            goto L_803F9418;
    }
    // 0x803F9400: nop

    // 0x803F9404: lb          $t8, 0x39($v0)
    ctx->r24 = MEM_B(ctx->r2, 0X39);
    // 0x803F9408: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x803F940C: bne         $t8, $zero, L_803F9418
    if (ctx->r24 != 0) {
        // 0x803F9410: nop
    
            goto L_803F9418;
    }
    // 0x803F9410: nop

    // 0x803F9414: sb          $t9, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r25;
L_803F9418:
    // 0x803F9418: jr          $ra
    // 0x803F941C: nop

    return;
    // 0x803F941C: nop

;}
RECOMP_FUNC void func_803F9420(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F9420: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803F9424: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F9428: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x803F942C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x803F9430: lw          $v1, 0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X8);
    // 0x803F9434: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x803F9438: addiu       $a0, $a0, -0x3428
    ctx->r4 = ADD32(ctx->r4, -0X3428);
    // 0x803F943C: jal         0x8002F310
    // 0x803F9440: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_8002F310(rdram, ctx);
        goto after_0;
    // 0x803F9440: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_0:
    // 0x803F9444: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x803F9448: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    // 0x803F944C: lb          $v0, 0x38($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X38);
    // 0x803F9450: addiu       $a1, $a1, -0x4698
    ctx->r5 = ADD32(ctx->r5, -0X4698);
    // 0x803F9454: beq         $v0, $zero, L_803F9480
    if (ctx->r2 == 0) {
        // 0x803F9458: addiu       $a0, $zero, 0x23
        ctx->r4 = ADD32(0, 0X23);
            goto L_803F9480;
    }
    // 0x803F9458: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    // 0x803F945C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803F9460: beq         $v0, $a0, L_803F9490
    if (ctx->r2 == ctx->r4) {
        // 0x803F9464: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_803F9490;
    }
    // 0x803F9464: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x803F9468: beq         $v0, $a1, L_803F94D0
    if (ctx->r2 == ctx->r5) {
        // 0x803F946C: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_803F94D0;
    }
    // 0x803F946C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x803F9470: beq         $v0, $at, L_803F9510
    if (ctx->r2 == ctx->r1) {
        // 0x803F9474: nop
    
            goto L_803F9510;
    }
    // 0x803F9474: nop

    // 0x803F9478: b           L_803F9574
    // 0x803F947C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F9574;
    // 0x803F947C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F9480:
    // 0x803F9480: jal         0x8002F444
    // 0x803F9484: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8002F444(rdram, ctx);
        goto after_1;
    // 0x803F9484: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x803F9488: b           L_803F9574
    // 0x803F948C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F9574;
    // 0x803F948C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F9490:
    // 0x803F9490: lb          $t6, 0x39($v1)
    ctx->r14 = MEM_B(ctx->r3, 0X39);
    // 0x803F9494: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    // 0x803F9498: bne         $t6, $zero, L_803F94BC
    if (ctx->r14 != 0) {
        // 0x803F949C: lui         $a1, 0x8040
        ctx->r5 = S32(0X8040 << 16);
            goto L_803F94BC;
    }
    // 0x803F949C: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    // 0x803F94A0: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    // 0x803F94A4: addiu       $a1, $a1, -0x4688
    ctx->r5 = ADD32(ctx->r5, -0X4688);
    // 0x803F94A8: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    // 0x803F94AC: jal         0x8002F444
    // 0x803F94B0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8002F444(rdram, ctx);
        goto after_2;
    // 0x803F94B0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x803F94B4: b           L_803F9574
    // 0x803F94B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F9574;
    // 0x803F94B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F94BC:
    // 0x803F94BC: addiu       $a1, $a1, -0x4658
    ctx->r5 = ADD32(ctx->r5, -0X4658);
    // 0x803F94C0: jal         0x8002F444
    // 0x803F94C4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8002F444(rdram, ctx);
        goto after_3;
    // 0x803F94C4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x803F94C8: b           L_803F9574
    // 0x803F94CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F9574;
    // 0x803F94CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F94D0:
    // 0x803F94D0: lb          $t7, 0x39($v1)
    ctx->r15 = MEM_B(ctx->r3, 0X39);
    // 0x803F94D4: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    // 0x803F94D8: bne         $t7, $zero, L_803F94FC
    if (ctx->r15 != 0) {
        // 0x803F94DC: lui         $a1, 0x8040
        ctx->r5 = S32(0X8040 << 16);
            goto L_803F94FC;
    }
    // 0x803F94DC: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    // 0x803F94E0: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    // 0x803F94E4: addiu       $a1, $a1, -0x4678
    ctx->r5 = ADD32(ctx->r5, -0X4678);
    // 0x803F94E8: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    // 0x803F94EC: jal         0x8002F444
    // 0x803F94F0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8002F444(rdram, ctx);
        goto after_4;
    // 0x803F94F0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x803F94F4: b           L_803F9574
    // 0x803F94F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F9574;
    // 0x803F94F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F94FC:
    // 0x803F94FC: addiu       $a1, $a1, -0x4658
    ctx->r5 = ADD32(ctx->r5, -0X4658);
    // 0x803F9500: jal         0x8002F444
    // 0x803F9504: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8002F444(rdram, ctx);
        goto after_5;
    // 0x803F9504: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x803F9508: b           L_803F9574
    // 0x803F950C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F9574;
    // 0x803F950C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F9510:
    // 0x803F9510: lb          $v0, 0x39($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X39);
    // 0x803F9514: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F9518: bne         $v0, $zero, L_803F9538
    if (ctx->r2 != 0) {
        // 0x803F951C: nop
    
            goto L_803F9538;
    }
    // 0x803F951C: nop

    // 0x803F9520: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    // 0x803F9524: addiu       $a1, $a1, -0x4668
    ctx->r5 = ADD32(ctx->r5, -0X4668);
    // 0x803F9528: jal         0x8002F444
    // 0x803F952C: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    func_8002F444(rdram, ctx);
        goto after_6;
    // 0x803F952C: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    after_6:
    // 0x803F9530: b           L_803F9574
    // 0x803F9534: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F9574;
    // 0x803F9534: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F9538:
    // 0x803F9538: bne         $a0, $v0, L_803F9558
    if (ctx->r4 != ctx->r2) {
        // 0x803F953C: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_803F9558;
    }
    // 0x803F953C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F9540: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    // 0x803F9544: addiu       $a1, $a1, -0x4658
    ctx->r5 = ADD32(ctx->r5, -0X4658);
    // 0x803F9548: jal         0x8002F444
    // 0x803F954C: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    func_8002F444(rdram, ctx);
        goto after_7;
    // 0x803F954C: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    after_7:
    // 0x803F9550: b           L_803F9574
    // 0x803F9554: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F9574;
    // 0x803F9554: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F9558:
    // 0x803F9558: bne         $a1, $v0, L_803F9570
    if (ctx->r5 != ctx->r2) {
        // 0x803F955C: addiu       $a0, $zero, 0x23
        ctx->r4 = ADD32(0, 0X23);
            goto L_803F9570;
    }
    // 0x803F955C: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    // 0x803F9560: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    // 0x803F9564: addiu       $a1, $a1, -0x4648
    ctx->r5 = ADD32(ctx->r5, -0X4648);
    // 0x803F9568: jal         0x8002F444
    // 0x803F956C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8002F444(rdram, ctx);
        goto after_8;
    // 0x803F956C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_8:
L_803F9570:
    // 0x803F9570: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F9574:
    // 0x803F9574: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803F9578: jr          $ra
    // 0x803F957C: nop

    return;
    // 0x803F957C: nop

;}
RECOMP_FUNC void func_803F9580(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F9580: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F9584: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F9588: lui         $a0, 0x8040
    ctx->r4 = S32(0X8040 << 16);
    // 0x803F958C: addiu       $a0, $a0, -0x6A58
    ctx->r4 = ADD32(ctx->r4, -0X6A58);
    // 0x803F9590: jal         0x800293DC
    // 0x803F9594: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_800293DC(rdram, ctx);
        goto after_0;
    // 0x803F9594: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x803F9598: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F959C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F95A0: jr          $ra
    // 0x803F95A4: nop

    return;
    // 0x803F95A4: nop

;}
