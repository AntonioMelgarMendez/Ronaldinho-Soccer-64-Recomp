#include "iss64_recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_8027E5EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027E5EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027E5F0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027E5F4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027E5F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027E5FC: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027E600: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8027E604: addiu       $a0, $a0, -0x1970
    ctx->r4 = ADD32(ctx->r4, -0X1970);
    // 0x8027E608: jal         0x80035490
    // 0x8027E60C: addiu       $a1, $a1, 0x3440
    ctx->r5 = ADD32(ctx->r5, 0X3440);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027E60C: addiu       $a1, $a1, 0x3440
    ctx->r5 = ADD32(ctx->r5, 0X3440);
    after_0:
    // 0x8027E610: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027E614: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027E618: jr          $ra
    // 0x8027E61C: nop

    return;
    // 0x8027E61C: nop

;}
RECOMP_FUNC void func_8027E620(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027E620: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027E624: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027E628: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027E62C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027E630: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x8027E634: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8027E638: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027E63C: lui         $a0, 0x802B
    ctx->r4 = S32(0X802B << 16);
    // 0x8027E640: sb          $t6, -0x2F80($at)
    MEM_B(-0X2F80, ctx->r1) = ctx->r14;
    // 0x8027E644: addiu       $a0, $a0, 0x3E40
    ctx->r4 = ADD32(ctx->r4, 0X3E40);
    // 0x8027E648: jal         0x80035490
    // 0x8027E64C: addiu       $a1, $a1, 0x3448
    ctx->r5 = ADD32(ctx->r5, 0X3448);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027E64C: addiu       $a1, $a1, 0x3448
    ctx->r5 = ADD32(ctx->r5, 0X3448);
    after_0:
    // 0x8027E650: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027E654: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027E658: jr          $ra
    // 0x8027E65C: nop

    return;
    // 0x8027E65C: nop

;}
RECOMP_FUNC void func_8027E660(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027E660: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8027E664: addiu       $v0, $v0, -0x32B0
    ctx->r2 = ADD32(ctx->r2, -0X32B0);
    // 0x8027E668: lb          $t6, 0xF($v0)
    ctx->r14 = MEM_B(ctx->r2, 0XF);
    // 0x8027E66C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8027E670: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8027E674: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8027E678: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8027E67C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8027E680: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8027E684: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8027E688: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8027E68C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8027E690: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8027E694: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8027E698: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8027E69C: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8027E6A0: addiu       $t8, $t8, -0x2F80
    ctx->r24 = ADD32(ctx->r24, -0X2F80);
    // 0x8027E6A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027E6A8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8027E6AC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8027E6B0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8027E6B4: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8027E6B8: jal         0x8005ACAC
    // 0x8027E6BC: sb          $zero, 0x3F($v0)
    MEM_B(0X3F, ctx->r2) = 0;
    func_8005ACAC(rdram, ctx);
        goto after_0;
    // 0x8027E6BC: sb          $zero, 0x3F($v0)
    MEM_B(0X3F, ctx->r2) = 0;
    after_0:
    // 0x8027E6C0: jal         0x800603F0
    // 0x8027E6C4: nop

    func_800603F0(rdram, ctx);
        goto after_1;
    // 0x8027E6C4: nop

    after_1:
    // 0x8027E6C8: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x8027E6CC: jal         0x800364A8
    // 0x8027E6D0: sh          $zero, 0x6968($at)
    MEM_H(0X6968, ctx->r1) = 0;
    func_800364A8(rdram, ctx);
        goto after_2;
    // 0x8027E6D0: sh          $zero, 0x6968($at)
    MEM_H(0X6968, ctx->r1) = 0;
    after_2:
    // 0x8027E6D4: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x8027E6D8: lbu         $t0, -0x32A0($t0)
    ctx->r8 = MEM_BU(ctx->r8, -0X32A0);
    // 0x8027E6DC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x8027E6E0: sh          $t0, 0x6DFE($at)
    MEM_H(0X6DFE, ctx->r1) = ctx->r8;
    // 0x8027E6E4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8027E6E8: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8027E6EC: jal         0x80044ED8
    // 0x8027E6F0: sh          $t1, 0xB74($at)
    MEM_H(0XB74, ctx->r1) = ctx->r9;
    func_80044ED8(rdram, ctx);
        goto after_3;
    // 0x8027E6F0: sh          $t1, 0xB74($at)
    MEM_H(0XB74, ctx->r1) = ctx->r9;
    after_3:
    // 0x8027E6F4: jal         0x80043B30
    // 0x8027E6F8: nop

    func_80043B30(rdram, ctx);
        goto after_4;
    // 0x8027E6F8: nop

    after_4:
    // 0x8027E6FC: jal         0x800443F4
    // 0x8027E700: nop

    func_800443F4(rdram, ctx);
        goto after_5;
    // 0x8027E700: nop

    after_5:
    // 0x8027E704: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x8027E708: lhu         $v0, 0x5244($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X5244);
    // 0x8027E70C: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x8027E710: beq         $v0, $at, L_8027E778
    if (ctx->r2 == ctx->r1) {
        // 0x8027E714: addiu       $at, $zero, 0x4000
        ctx->r1 = ADD32(0, 0X4000);
            goto L_8027E778;
    }
    // 0x8027E714: addiu       $at, $zero, 0x4000
    ctx->r1 = ADD32(0, 0X4000);
    // 0x8027E718: beq         $v0, $at, L_8027E750
    if (ctx->r2 == ctx->r1) {
        // 0x8027E71C: ori         $at, $zero, 0x8000
        ctx->r1 = 0 | 0X8000;
            goto L_8027E750;
    }
    // 0x8027E71C: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
    // 0x8027E720: bne         $v0, $at, L_8027E7A0
    if (ctx->r2 != ctx->r1) {
        // 0x8027E724: nop
    
            goto L_8027E7A0;
    }
    // 0x8027E724: nop

    // 0x8027E728: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8027E72C: nop

    // 0x8027E730: lb          $a0, 0x1($t2)
    ctx->r4 = MEM_B(ctx->r10, 0X1);
    // 0x8027E734: jal         0x8003EC2C
    // 0x8027E738: nop

    func_8003EC2C(rdram, ctx);
        goto after_6;
    // 0x8027E738: nop

    after_6:
    // 0x8027E73C: lh          $a1, 0x2($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X2);
    // 0x8027E740: jal         0x8003F870
    // 0x8027E744: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8003F870(rdram, ctx);
        goto after_7;
    // 0x8027E744: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_7:
    // 0x8027E748: b           L_8027E7AC
    // 0x8027E74C: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
        goto L_8027E7AC;
    // 0x8027E74C: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
L_8027E750:
    // 0x8027E750: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x8027E754: nop

    // 0x8027E758: lb          $a0, 0x1($t3)
    ctx->r4 = MEM_B(ctx->r11, 0X1);
    // 0x8027E75C: jal         0x8003EC2C
    // 0x8027E760: nop

    func_8003EC2C(rdram, ctx);
        goto after_8;
    // 0x8027E760: nop

    after_8:
    // 0x8027E764: lh          $a1, 0x2($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X2);
    // 0x8027E768: jal         0x8003F870
    // 0x8027E76C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_8003F870(rdram, ctx);
        goto after_9;
    // 0x8027E76C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_9:
    // 0x8027E770: b           L_8027E7AC
    // 0x8027E774: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
        goto L_8027E7AC;
    // 0x8027E774: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
L_8027E778:
    // 0x8027E778: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x8027E77C: nop

    // 0x8027E780: lb          $a0, 0x1($t4)
    ctx->r4 = MEM_B(ctx->r12, 0X1);
    // 0x8027E784: jal         0x8003EC2C
    // 0x8027E788: nop

    func_8003EC2C(rdram, ctx);
        goto after_10;
    // 0x8027E788: nop

    after_10:
    // 0x8027E78C: lh          $a1, 0x2($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X2);
    // 0x8027E790: jal         0x8003F870
    // 0x8027E794: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_8003F870(rdram, ctx);
        goto after_11;
    // 0x8027E794: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_11:
    // 0x8027E798: b           L_8027E7AC
    // 0x8027E79C: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
        goto L_8027E7AC;
    // 0x8027E79C: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
L_8027E7A0:
    // 0x8027E7A0: jal         0x8003F6D8
    // 0x8027E7A4: nop

    func_8003F6D8(rdram, ctx);
        goto after_12;
    // 0x8027E7A4: nop

    after_12:
    // 0x8027E7A8: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
L_8027E7AC:
    // 0x8027E7AC: nop

    // 0x8027E7B0: lb          $a0, 0x1($t5)
    ctx->r4 = MEM_B(ctx->r13, 0X1);
    // 0x8027E7B4: jal         0x800407A4
    // 0x8027E7B8: nop

    func_800407A4(rdram, ctx);
        goto after_13;
    // 0x8027E7B8: nop

    after_13:
    // 0x8027E7BC: jal         0x80037608
    // 0x8027E7C0: nop

    func_80037608(rdram, ctx);
        goto after_14;
    // 0x8027E7C0: nop

    after_14:
    // 0x8027E7C4: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x8027E7C8: jal         0x800296E0
    // 0x8027E7CC: addiu       $a0, $a0, -0x2758
    ctx->r4 = ADD32(ctx->r4, -0X2758);
    func_800296E0(rdram, ctx);
        goto after_15;
    // 0x8027E7CC: addiu       $a0, $a0, -0x2758
    ctx->r4 = ADD32(ctx->r4, -0X2758);
    after_15:
    // 0x8027E7D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027E7D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8027E7D8: jr          $ra
    // 0x8027E7DC: nop

    return;
    // 0x8027E7DC: nop

;}
RECOMP_FUNC void func_8027E7E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027E7E0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8027E7E4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8027E7E8: lui         $s0, 0x8011
    ctx->r16 = S32(0X8011 << 16);
    // 0x8027E7EC: addiu       $s0, $s0, -0x2F80
    ctx->r16 = ADD32(ctx->r16, -0X2F80);
    // 0x8027E7F0: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8027E7F4: lb          $v0, 0x3398($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X3398);
    // 0x8027E7F8: lbu         $t6, -0x32B0($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X32B0);
    // 0x8027E7FC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8027E800: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8027E804: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x8027E808: bne         $t6, $zero, L_8027EAD0
    if (ctx->r14 != 0) {
        // 0x8027E80C: sh          $v0, 0x36($sp)
        MEM_H(0X36, ctx->r29) = ctx->r2;
            goto L_8027EAD0;
    }
    // 0x8027E80C: sh          $v0, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r2;
    // 0x8027E810: lh          $t7, 0x36($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X36);
    // 0x8027E814: nop

    // 0x8027E818: sltiu       $at, $t7, 0x10
    ctx->r1 = ctx->r15 < 0X10 ? 1 : 0;
    // 0x8027E81C: beq         $at, $zero, L_8027EA90
    if (ctx->r1 == 0) {
        // 0x8027E820: sw          $t7, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r15;
            goto L_8027EA90;
    }
    // 0x8027E820: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x8027E824: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8027E828: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8027E82C: addu        $at, $at, $t8
    gpr jr_addend_8027E838 = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8027E830: lw          $t8, 0x3774($at)
    ctx->r24 = ADD32(ctx->r1, 0X3774);
    // 0x8027E834: nop

    // 0x8027E838: jr          $t8
    // 0x8027E83C: nop

    switch (jr_addend_8027E838 >> 2) {
        case 0: goto L_8027E840; break;
        case 1: goto L_8027E864; break;
        case 2: goto L_8027E888; break;
        case 3: goto L_8027E888; break;
        case 4: goto L_8027E888; break;
        case 5: goto L_8027E888; break;
        case 6: goto L_8027E944; break;
        case 7: goto L_8027E968; break;
        case 8: goto L_8027E968; break;
        case 9: goto L_8027E968; break;
        case 10: goto L_8027E9C0; break;
        case 11: goto L_8027E9EC; break;
        case 12: goto L_8027E9EC; break;
        case 13: goto L_8027E9EC; break;
        case 14: goto L_8027E9EC; break;
        case 15: goto L_8027EA88; break;
        default: switch_error(__func__, 0x8027E838, 0x80283774);
    }
    // 0x8027E83C: nop

L_8027E840:
    // 0x8027E840: jal         0x8027EC64
    // 0x8027E844: nop

    func_8027EC64(rdram, ctx);
        goto after_0;
    // 0x8027E844: nop

    after_0:
    // 0x8027E848: jal         0x8027F2F8
    // 0x8027E84C: nop

    func_8027F2F8(rdram, ctx);
        goto after_1;
    // 0x8027E84C: nop

    after_1:
    // 0x8027E850: jal         0x80036278
    // 0x8027E854: nop

    func_80036278(rdram, ctx);
        goto after_2;
    // 0x8027E854: nop

    after_2:
    // 0x8027E858: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8027E85C: b           L_8027EA90
    // 0x8027E860: sb          $t9, 0x3398($s0)
    MEM_B(0X3398, ctx->r16) = ctx->r25;
        goto L_8027EA90;
    // 0x8027E860: sb          $t9, 0x3398($s0)
    MEM_B(0X3398, ctx->r16) = ctx->r25;
L_8027E864:
    // 0x8027E864: jal         0x80036234
    // 0x8027E868: nop

    func_80036234(rdram, ctx);
        goto after_3;
    // 0x8027E868: nop

    after_3:
    // 0x8027E86C: jal         0x802805B4
    // 0x8027E870: nop

    func_802805B4(rdram, ctx);
        goto after_4;
    // 0x8027E870: nop

    after_4:
    // 0x8027E874: jal         0x80280B2C
    // 0x8027E878: nop

    func_80280B2C(rdram, ctx);
        goto after_5;
    // 0x8027E878: nop

    after_5:
    // 0x8027E87C: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x8027E880: b           L_8027EA90
    // 0x8027E884: sb          $t0, 0x3398($s0)
    MEM_B(0X3398, ctx->r16) = ctx->r8;
        goto L_8027EA90;
    // 0x8027E884: sb          $t0, 0x3398($s0)
    MEM_B(0X3398, ctx->r16) = ctx->r8;
L_8027E888:
    // 0x8027E888: lb          $a0, 0x3399($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X3399);
    // 0x8027E88C: lb          $a1, 0x339B($s0)
    ctx->r5 = MEM_B(ctx->r16, 0X339B);
    // 0x8027E890: jal         0x8003DE5C
    // 0x8027E894: nop

    func_8003DE5C(rdram, ctx);
        goto after_6;
    // 0x8027E894: nop

    after_6:
    // 0x8027E898: lb          $a0, 0x3399($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X3399);
    // 0x8027E89C: jal         0x800411D4
    // 0x8027E8A0: sb          $v0, 0x339B($s0)
    MEM_B(0X339B, ctx->r16) = ctx->r2;
    func_800411D4(rdram, ctx);
        goto after_7;
    // 0x8027E8A0: sb          $v0, 0x339B($s0)
    MEM_B(0X339B, ctx->r16) = ctx->r2;
    after_7:
    // 0x8027E8A4: jal         0x80041ADC
    // 0x8027E8A8: nop

    func_80041ADC(rdram, ctx);
        goto after_8;
    // 0x8027E8A8: nop

    after_8:
    // 0x8027E8AC: lb          $t1, 0x3399($s0)
    ctx->r9 = MEM_B(ctx->r16, 0X3399);
    // 0x8027E8B0: nop

    // 0x8027E8B4: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x8027E8B8: jal         0x80280B2C
    // 0x8027E8BC: sb          $t2, 0x3399($s0)
    MEM_B(0X3399, ctx->r16) = ctx->r10;
    func_80280B2C(rdram, ctx);
        goto after_9;
    // 0x8027E8BC: sb          $t2, 0x3399($s0)
    MEM_B(0X3399, ctx->r16) = ctx->r10;
    after_9:
    // 0x8027E8C0: lh          $t3, 0x36($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X36);
    // 0x8027E8C4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8027E8C8: beq         $t3, $at, L_8027E8D8
    if (ctx->r11 == ctx->r1) {
        // 0x8027E8CC: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_8027E8D8;
    }
    // 0x8027E8CC: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8027E8D0: bne         $t3, $at, L_8027E930
    if (ctx->r11 != ctx->r1) {
        // 0x8027E8D4: nop
    
            goto L_8027E930;
    }
    // 0x8027E8D4: nop

L_8027E8D8:
    // 0x8027E8D8: lb          $a0, 0x3399($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X3399);
    // 0x8027E8DC: lb          $a1, 0x339B($s0)
    ctx->r5 = MEM_B(ctx->r16, 0X339B);
    // 0x8027E8E0: jal         0x8003DEB0
    // 0x8027E8E4: nop

    func_8003DEB0(rdram, ctx);
        goto after_10;
    // 0x8027E8E4: nop

    after_10:
    // 0x8027E8E8: lb          $a0, 0x3399($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X3399);
    // 0x8027E8EC: jal         0x800411D4
    // 0x8027E8F0: nop

    func_800411D4(rdram, ctx);
        goto after_11;
    // 0x8027E8F0: nop

    after_11:
    // 0x8027E8F4: jal         0x80041ADC
    // 0x8027E8F8: nop

    func_80041ADC(rdram, ctx);
        goto after_12;
    // 0x8027E8F8: nop

    after_12:
    // 0x8027E8FC: lb          $t4, 0x3399($s0)
    ctx->r12 = MEM_B(ctx->r16, 0X3399);
    // 0x8027E900: lh          $t6, 0x36($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X36);
    // 0x8027E904: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8027E908: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x8027E90C: bne         $t6, $at, L_8027EA90
    if (ctx->r14 != ctx->r1) {
        // 0x8027E910: sb          $t5, 0x3399($s0)
        MEM_B(0X3399, ctx->r16) = ctx->r13;
            goto L_8027EA90;
    }
    // 0x8027E910: sb          $t5, 0x3399($s0)
    MEM_B(0X3399, ctx->r16) = ctx->r13;
    // 0x8027E914: jal         0x80280B2C
    // 0x8027E918: nop

    func_80280B2C(rdram, ctx);
        goto after_13;
    // 0x8027E918: nop

    after_13:
    // 0x8027E91C: lb          $t7, 0x3398($s0)
    ctx->r15 = MEM_B(ctx->r16, 0X3398);
    // 0x8027E920: nop

    // 0x8027E924: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8027E928: b           L_8027EA90
    // 0x8027E92C: sb          $t8, 0x3398($s0)
    MEM_B(0X3398, ctx->r16) = ctx->r24;
        goto L_8027EA90;
    // 0x8027E92C: sb          $t8, 0x3398($s0)
    MEM_B(0X3398, ctx->r16) = ctx->r24;
L_8027E930:
    // 0x8027E930: lb          $t9, 0x3398($s0)
    ctx->r25 = MEM_B(ctx->r16, 0X3398);
    // 0x8027E934: nop

    // 0x8027E938: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8027E93C: b           L_8027EA90
    // 0x8027E940: sb          $t0, 0x3398($s0)
    MEM_B(0X3398, ctx->r16) = ctx->r8;
        goto L_8027EA90;
    // 0x8027E940: sb          $t0, 0x3398($s0)
    MEM_B(0X3398, ctx->r16) = ctx->r8;
L_8027E944:
    // 0x8027E944: jal         0x8027EAF8
    // 0x8027E948: nop

    func_8027EAF8(rdram, ctx);
        goto after_14;
    // 0x8027E948: nop

    after_14:
    // 0x8027E94C: jal         0x802805B4
    // 0x8027E950: nop

    func_802805B4(rdram, ctx);
        goto after_15;
    // 0x8027E950: nop

    after_15:
    // 0x8027E954: jal         0x80280B2C
    // 0x8027E958: nop

    func_80280B2C(rdram, ctx);
        goto after_16;
    // 0x8027E958: nop

    after_16:
    // 0x8027E95C: addiu       $t1, $zero, 0x7
    ctx->r9 = ADD32(0, 0X7);
    // 0x8027E960: b           L_8027EA90
    // 0x8027E964: sb          $t1, 0x3398($s0)
    MEM_B(0X3398, ctx->r16) = ctx->r9;
        goto L_8027EA90;
    // 0x8027E964: sb          $t1, 0x3398($s0)
    MEM_B(0X3398, ctx->r16) = ctx->r9;
L_8027E968:
    // 0x8027E968: lb          $a0, 0x3399($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X3399);
    // 0x8027E96C: lb          $a1, 0x339B($s0)
    ctx->r5 = MEM_B(ctx->r16, 0X339B);
    // 0x8027E970: jal         0x8003DE5C
    // 0x8027E974: nop

    func_8003DE5C(rdram, ctx);
        goto after_17;
    // 0x8027E974: nop

    after_17:
    // 0x8027E978: lb          $a0, 0x3399($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X3399);
    // 0x8027E97C: jal         0x800411D4
    // 0x8027E980: sb          $v0, 0x339B($s0)
    MEM_B(0X339B, ctx->r16) = ctx->r2;
    func_800411D4(rdram, ctx);
        goto after_18;
    // 0x8027E980: sb          $v0, 0x339B($s0)
    MEM_B(0X339B, ctx->r16) = ctx->r2;
    after_18:
    // 0x8027E984: jal         0x80041AB8
    // 0x8027E988: nop

    func_80041AB8(rdram, ctx);
        goto after_19;
    // 0x8027E988: nop

    after_19:
    // 0x8027E98C: lb          $t2, 0x3399($s0)
    ctx->r10 = MEM_B(ctx->r16, 0X3399);
    // 0x8027E990: lh          $t4, 0x36($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X36);
    // 0x8027E994: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x8027E998: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x8027E99C: beq         $t4, $at, L_8027EA90
    if (ctx->r12 == ctx->r1) {
        // 0x8027E9A0: sb          $t3, 0x3399($s0)
        MEM_B(0X3399, ctx->r16) = ctx->r11;
            goto L_8027EA90;
    }
    // 0x8027E9A0: sb          $t3, 0x3399($s0)
    MEM_B(0X3399, ctx->r16) = ctx->r11;
    // 0x8027E9A4: jal         0x80280B2C
    // 0x8027E9A8: nop

    func_80280B2C(rdram, ctx);
        goto after_20;
    // 0x8027E9A8: nop

    after_20:
    // 0x8027E9AC: lb          $t5, 0x3398($s0)
    ctx->r13 = MEM_B(ctx->r16, 0X3398);
    // 0x8027E9B0: nop

    // 0x8027E9B4: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x8027E9B8: b           L_8027EA90
    // 0x8027E9BC: sb          $t6, 0x3398($s0)
    MEM_B(0X3398, ctx->r16) = ctx->r14;
        goto L_8027EA90;
    // 0x8027E9BC: sb          $t6, 0x3398($s0)
    MEM_B(0X3398, ctx->r16) = ctx->r14;
L_8027E9C0:
    // 0x8027E9C0: jal         0x8027EC64
    // 0x8027E9C4: nop

    func_8027EC64(rdram, ctx);
        goto after_21;
    // 0x8027E9C4: nop

    after_21:
    // 0x8027E9C8: jal         0x802805B4
    // 0x8027E9CC: nop

    func_802805B4(rdram, ctx);
        goto after_22;
    // 0x8027E9CC: nop

    after_22:
    // 0x8027E9D0: jal         0x80280B2C
    // 0x8027E9D4: nop

    func_80280B2C(rdram, ctx);
        goto after_23;
    // 0x8027E9D4: nop

    after_23:
    // 0x8027E9D8: jal         0x80049A90
    // 0x8027E9DC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80049A90(rdram, ctx);
        goto after_24;
    // 0x8027E9DC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_24:
    // 0x8027E9E0: addiu       $t7, $zero, 0xB
    ctx->r15 = ADD32(0, 0XB);
    // 0x8027E9E4: b           L_8027EA90
    // 0x8027E9E8: sb          $t7, 0x3398($s0)
    MEM_B(0X3398, ctx->r16) = ctx->r15;
        goto L_8027EA90;
    // 0x8027E9E8: sb          $t7, 0x3398($s0)
    MEM_B(0X3398, ctx->r16) = ctx->r15;
L_8027E9EC:
    // 0x8027E9EC: lb          $a0, 0x3399($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X3399);
    // 0x8027E9F0: lb          $a1, 0x339B($s0)
    ctx->r5 = MEM_B(ctx->r16, 0X339B);
    // 0x8027E9F4: jal         0x8003DE5C
    // 0x8027E9F8: nop

    func_8003DE5C(rdram, ctx);
        goto after_25;
    // 0x8027E9F8: nop

    after_25:
    // 0x8027E9FC: jal         0x80041AB8
    // 0x8027EA00: sb          $v0, 0x339B($s0)
    MEM_B(0X339B, ctx->r16) = ctx->r2;
    func_80041AB8(rdram, ctx);
        goto after_26;
    // 0x8027EA00: sb          $v0, 0x339B($s0)
    MEM_B(0X339B, ctx->r16) = ctx->r2;
    after_26:
    // 0x8027EA04: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8027EA08: jal         0x8003EAD8
    // 0x8027EA0C: sb          $zero, -0x3110($at)
    MEM_B(-0X3110, ctx->r1) = 0;
    func_8003EAD8(rdram, ctx);
        goto after_27;
    // 0x8027EA0C: sb          $zero, -0x3110($at)
    MEM_B(-0X3110, ctx->r1) = 0;
    after_27:
    // 0x8027EA10: lb          $t8, 0x339B($s0)
    ctx->r24 = MEM_B(ctx->r16, 0X339B);
    // 0x8027EA14: nop

    // 0x8027EA18: slt         $at, $t8, $v0
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8027EA1C: bne         $at, $zero, L_8027EA94
    if (ctx->r1 != 0) {
        // 0x8027EA20: lw          $t6, 0x24($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X24);
            goto L_8027EA94;
    }
    // 0x8027EA20: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8027EA24: lb          $t9, 0x3399($s0)
    ctx->r25 = MEM_B(ctx->r16, 0X3399);
    // 0x8027EA28: lh          $t1, 0x36($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X36);
    // 0x8027EA2C: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x8027EA30: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8027EA34: sb          $zero, 0x339B($s0)
    MEM_B(0X339B, ctx->r16) = 0;
    // 0x8027EA38: beq         $t1, $at, L_8027EA64
    if (ctx->r9 == ctx->r1) {
        // 0x8027EA3C: sb          $t0, 0x3399($s0)
        MEM_B(0X3399, ctx->r16) = ctx->r8;
            goto L_8027EA64;
    }
    // 0x8027EA3C: sb          $t0, 0x3399($s0)
    MEM_B(0X3399, ctx->r16) = ctx->r8;
    // 0x8027EA40: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x8027EA44: beq         $t1, $at, L_8027EA64
    if (ctx->r9 == ctx->r1) {
        // 0x8027EA48: addiu       $at, $zero, 0xD
        ctx->r1 = ADD32(0, 0XD);
            goto L_8027EA64;
    }
    // 0x8027EA48: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x8027EA4C: beq         $t1, $at, L_8027EA64
    if (ctx->r9 == ctx->r1) {
        // 0x8027EA50: addiu       $at, $zero, 0xE
        ctx->r1 = ADD32(0, 0XE);
            goto L_8027EA64;
    }
    // 0x8027EA50: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x8027EA54: beq         $t1, $at, L_8027EA80
    if (ctx->r9 == ctx->r1) {
        // 0x8027EA58: addiu       $t4, $zero, 0xF
        ctx->r12 = ADD32(0, 0XF);
            goto L_8027EA80;
    }
    // 0x8027EA58: addiu       $t4, $zero, 0xF
    ctx->r12 = ADD32(0, 0XF);
    // 0x8027EA5C: b           L_8027EA94
    // 0x8027EA60: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
        goto L_8027EA94;
    // 0x8027EA60: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
L_8027EA64:
    // 0x8027EA64: jal         0x80280B2C
    // 0x8027EA68: nop

    func_80280B2C(rdram, ctx);
        goto after_28;
    // 0x8027EA68: nop

    after_28:
    // 0x8027EA6C: lb          $t2, 0x3398($s0)
    ctx->r10 = MEM_B(ctx->r16, 0X3398);
    // 0x8027EA70: nop

    // 0x8027EA74: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x8027EA78: b           L_8027EA90
    // 0x8027EA7C: sb          $t3, 0x3398($s0)
    MEM_B(0X3398, ctx->r16) = ctx->r11;
        goto L_8027EA90;
    // 0x8027EA7C: sb          $t3, 0x3398($s0)
    MEM_B(0X3398, ctx->r16) = ctx->r11;
L_8027EA80:
    // 0x8027EA80: b           L_8027EA90
    // 0x8027EA84: sb          $t4, 0x3398($s0)
    MEM_B(0X3398, ctx->r16) = ctx->r12;
        goto L_8027EA90;
    // 0x8027EA84: sb          $t4, 0x3398($s0)
    MEM_B(0X3398, ctx->r16) = ctx->r12;
L_8027EA88:
    // 0x8027EA88: addiu       $t5, $v0, 0x1
    ctx->r13 = ADD32(ctx->r2, 0X1);
    // 0x8027EA8C: sb          $t5, 0x3398($s0)
    MEM_B(0X3398, ctx->r16) = ctx->r13;
L_8027EA90:
    // 0x8027EA90: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
L_8027EA94:
    // 0x8027EA94: nop

    // 0x8027EA98: addiu       $t7, $t6, -0xA
    ctx->r15 = ADD32(ctx->r14, -0XA);
    // 0x8027EA9C: sltiu       $at, $t7, 0x5
    ctx->r1 = ctx->r15 < 0X5 ? 1 : 0;
    // 0x8027EAA0: beq         $at, $zero, L_8027EADC
    if (ctx->r1 == 0) {
        // 0x8027EAA4: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_8027EADC;
    }
    // 0x8027EAA4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8027EAA8: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8027EAAC: addu        $at, $at, $t7
    gpr jr_addend_8027EAB8 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8027EAB0: lw          $t7, 0x37B4($at)
    ctx->r15 = ADD32(ctx->r1, 0X37B4);
    // 0x8027EAB4: nop

    // 0x8027EAB8: jr          $t7
    // 0x8027EABC: nop

    switch (jr_addend_8027EAB8 >> 2) {
        case 0: goto L_8027EAC0; break;
        case 1: goto L_8027EADC; break;
        case 2: goto L_8027EADC; break;
        case 3: goto L_8027EADC; break;
        case 4: goto L_8027EADC; break;
        default: switch_error(__func__, 0x8027EAB8, 0x802837B4);
    }
    // 0x8027EABC: nop

L_8027EAC0:
    // 0x8027EAC0: jal         0x80035A04
    // 0x8027EAC4: nop

    func_80035A04(rdram, ctx);
        goto after_29;
    // 0x8027EAC4: nop

    after_29:
    // 0x8027EAC8: b           L_8027EAE0
    // 0x8027EACC: lhu         $a0, 0x36($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X36);
        goto L_8027EAE0;
    // 0x8027EACC: lhu         $a0, 0x36($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X36);
L_8027EAD0:
    // 0x8027EAD0: addiu       $t8, $v0, 0x1
    ctx->r24 = ADD32(ctx->r2, 0X1);
    // 0x8027EAD4: jal         0x80035A04
    // 0x8027EAD8: sb          $t8, 0x3398($s0)
    MEM_B(0X3398, ctx->r16) = ctx->r24;
    func_80035A04(rdram, ctx);
        goto after_30;
    // 0x8027EAD8: sb          $t8, 0x3398($s0)
    MEM_B(0X3398, ctx->r16) = ctx->r24;
    after_30:
L_8027EADC:
    // 0x8027EADC: lhu         $a0, 0x36($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X36);
L_8027EAE0:
    // 0x8027EAE0: jal         0x800354D0
    // 0x8027EAE4: nop

    func_800354D0(rdram, ctx);
        goto after_31;
    // 0x8027EAE4: nop

    after_31:
    // 0x8027EAE8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8027EAEC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8027EAF0: jr          $ra
    // 0x8027EAF4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8027EAF4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8027EAF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027EAF8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027EAFC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027EB00: jal         0x80049A90
    // 0x8027EB04: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80049A90(rdram, ctx);
        goto after_0;
    // 0x8027EB04: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x8027EB08: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8027EB0C: jal         0x8027F430
    // 0x8027EB10: sb          $v0, -0x2CF0($at)
    MEM_B(-0X2CF0, ctx->r1) = ctx->r2;
    func_8027F430(rdram, ctx);
        goto after_1;
    // 0x8027EB10: sb          $v0, -0x2CF0($at)
    MEM_B(-0X2CF0, ctx->r1) = ctx->r2;
    after_1:
    // 0x8027EB14: jal         0x8027F520
    // 0x8027EB18: nop

    func_8027F520(rdram, ctx);
        goto after_2;
    // 0x8027EB18: nop

    after_2:
    // 0x8027EB1C: jal         0x8027F5FC
    // 0x8027EB20: nop

    func_8027F5FC(rdram, ctx);
        goto after_3;
    // 0x8027EB20: nop

    after_3:
    // 0x8027EB24: jal         0x8027F6AC
    // 0x8027EB28: nop

    func_8027F6AC(rdram, ctx);
        goto after_4;
    // 0x8027EB28: nop

    after_4:
    // 0x8027EB2C: jal         0x8027EBC0
    // 0x8027EB30: nop

    func_8027EBC0(rdram, ctx);
        goto after_5;
    // 0x8027EB30: nop

    after_5:
    // 0x8027EB34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027EB38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027EB3C: jr          $ra
    // 0x8027EB40: nop

    return;
    // 0x8027EB40: nop

;}
RECOMP_FUNC void func_8027EB44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027EB44: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x8027EB48: addiu       $a2, $a2, -0x3138
    ctx->r6 = ADD32(ctx->r6, -0X3138);
    // 0x8027EB4C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8027EB50:
    // 0x8027EB50: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8027EB54: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x8027EB58: addiu       $t9, $t9, 0x4660
    ctx->r25 = ADD32(ctx->r25, 0X4660);
    // 0x8027EB5C: addiu       $t7, $t7, -0x3110
    ctx->r15 = ADD32(ctx->r15, -0X3110);
    // 0x8027EB60: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x8027EB64: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x8027EB68: addu        $a1, $t8, $t9
    ctx->r5 = ADD32(ctx->r24, ctx->r25);
    // 0x8027EB6C: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
    // 0x8027EB70: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_8027EB74:
    // 0x8027EB74: addu        $t0, $a1, $v1
    ctx->r8 = ADD32(ctx->r5, ctx->r3);
    // 0x8027EB78: lb          $t1, 0x0($t0)
    ctx->r9 = MEM_B(ctx->r8, 0X0);
    // 0x8027EB7C: addu        $t4, $a0, $v1
    ctx->r12 = ADD32(ctx->r4, ctx->r3);
    // 0x8027EB80: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8027EB84: sll         $t5, $v1, 16
    ctx->r13 = S32(ctx->r3 << 16);
    // 0x8027EB88: addu        $t2, $a2, $t1
    ctx->r10 = ADD32(ctx->r6, ctx->r9);
    // 0x8027EB8C: lb          $t3, 0x0($t2)
    ctx->r11 = MEM_B(ctx->r10, 0X0);
    // 0x8027EB90: sra         $v1, $t5, 16
    ctx->r3 = S32(SIGNED(ctx->r13) >> 16);
    // 0x8027EB94: slti        $at, $v1, 0x4
    ctx->r1 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x8027EB98: bne         $at, $zero, L_8027EB74
    if (ctx->r1 != 0) {
        // 0x8027EB9C: sb          $t3, 0x11($t4)
        MEM_B(0X11, ctx->r12) = ctx->r11;
            goto L_8027EB74;
    }
    // 0x8027EB9C: sb          $t3, 0x11($t4)
    MEM_B(0X11, ctx->r12) = ctx->r11;
    // 0x8027EBA0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8027EBA4: sll         $t7, $v0, 16
    ctx->r15 = S32(ctx->r2 << 16);
    // 0x8027EBA8: sra         $v0, $t7, 16
    ctx->r2 = S32(SIGNED(ctx->r15) >> 16);
    // 0x8027EBAC: slti        $at, $v0, 0x6
    ctx->r1 = SIGNED(ctx->r2) < 0X6 ? 1 : 0;
    // 0x8027EBB0: bne         $at, $zero, L_8027EB50
    if (ctx->r1 != 0) {
        // 0x8027EBB4: nop
    
            goto L_8027EB50;
    }
    // 0x8027EBB4: nop

    // 0x8027EBB8: jr          $ra
    // 0x8027EBBC: nop

    return;
    // 0x8027EBBC: nop

;}
RECOMP_FUNC void func_8027EBC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027EBC0: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8027EBC4: lb          $t6, -0x32A1($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X32A1);
    // 0x8027EBC8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8027EBCC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8027EBD0: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8027EBD4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8027EBD8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8027EBDC: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8027EBE0: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8027EBE4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8027EBE8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8027EBEC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8027EBF0: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8027EBF4: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8027EBF8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8027EBFC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8027EC00: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8027EC04: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8027EC08: addiu       $t8, $t8, -0x2F80
    ctx->r24 = ADD32(ctx->r24, -0X2F80);
    // 0x8027EC0C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8027EC10: addu        $s1, $t7, $t8
    ctx->r17 = ADD32(ctx->r15, ctx->r24);
    // 0x8027EC14: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8027EC18: addiu       $s2, $zero, 0x14C
    ctx->r18 = ADD32(0, 0X14C);
L_8027EC1C:
    // 0x8027EC1C: multu       $s0, $s2
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8027EC20: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x8027EC24: mflo        $t9
    ctx->r25 = lo;
    // 0x8027EC28: addu        $a0, $s1, $t9
    ctx->r4 = ADD32(ctx->r17, ctx->r25);
    // 0x8027EC2C: jal         0x800218E0
    // 0x8027EC30: addiu       $a0, $a0, 0x5E0
    ctx->r4 = ADD32(ctx->r4, 0X5E0);
    func_800218E0(rdram, ctx);
        goto after_0;
    // 0x8027EC30: addiu       $a0, $a0, 0x5E0
    ctx->r4 = ADD32(ctx->r4, 0X5E0);
    after_0:
    // 0x8027EC34: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8027EC38: sll         $t0, $s0, 16
    ctx->r8 = S32(ctx->r16 << 16);
    // 0x8027EC3C: sra         $s0, $t0, 16
    ctx->r16 = S32(SIGNED(ctx->r8) >> 16);
    // 0x8027EC40: slti        $at, $s0, 0x24
    ctx->r1 = SIGNED(ctx->r16) < 0X24 ? 1 : 0;
    // 0x8027EC44: bne         $at, $zero, L_8027EC1C
    if (ctx->r1 != 0) {
        // 0x8027EC48: nop
    
            goto L_8027EC1C;
    }
    // 0x8027EC48: nop

    // 0x8027EC4C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8027EC50: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8027EC54: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8027EC58: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8027EC5C: jr          $ra
    // 0x8027EC60: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8027EC60: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8027EC64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027EC64: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027EC68: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027EC6C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8027EC70: addiu       $a0, $a0, -0x30FF
    ctx->r4 = ADD32(ctx->r4, -0X30FF);
    // 0x8027EC74: jal         0x8001DA18
    // 0x8027EC78: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    func_8001DA18(rdram, ctx);
        goto after_0;
    // 0x8027EC78: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    after_0:
    // 0x8027EC7C: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x8027EC80: addiu       $a1, $a1, -0x3110
    ctx->r5 = ADD32(ctx->r5, -0X3110);
    // 0x8027EC84: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8027EC88: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
L_8027EC8C:
    // 0x8027EC8C: sll         $t6, $v1, 1
    ctx->r14 = S32(ctx->r3 << 1);
    // 0x8027EC90: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8027EC94: sll         $t7, $v1, 16
    ctx->r15 = S32(ctx->r3 << 16);
    // 0x8027EC98: sra         $v1, $t7, 16
    ctx->r3 = S32(SIGNED(ctx->r15) >> 16);
    // 0x8027EC9C: slti        $at, $v1, 0x1F
    ctx->r1 = SIGNED(ctx->r3) < 0X1F ? 1 : 0;
    // 0x8027ECA0: addu        $v0, $a1, $t6
    ctx->r2 = ADD32(ctx->r5, ctx->r14);
    // 0x8027ECA4: sb          $a0, 0x30($v0)
    MEM_B(0X30, ctx->r2) = ctx->r4;
    // 0x8027ECA8: bne         $at, $zero, L_8027EC8C
    if (ctx->r1 != 0) {
        // 0x8027ECAC: sb          $a0, 0x31($v0)
        MEM_B(0X31, ctx->r2) = ctx->r4;
            goto L_8027EC8C;
    }
    // 0x8027ECAC: sb          $a0, 0x31($v0)
    MEM_B(0X31, ctx->r2) = ctx->r4;
    // 0x8027ECB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027ECB4: sb          $zero, 0x0($a1)
    MEM_B(0X0, ctx->r5) = 0;
    // 0x8027ECB8: jr          $ra
    // 0x8027ECBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8027ECBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8027ECC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027ECC0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8027ECC4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8027ECC8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8027ECCC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8027ECD0: jal         0x80049A90
    // 0x8027ECD4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80049A90(rdram, ctx);
        goto after_0;
    // 0x8027ECD4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x8027ECD8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8027ECDC: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x8027ECE0: sb          $v0, -0x2CF0($at)
    MEM_B(-0X2CF0, ctx->r1) = ctx->r2;
    // 0x8027ECE4: addiu       $s0, $s0, -0x3110
    ctx->r16 = ADD32(ctx->r16, -0X3110);
    // 0x8027ECE8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_8027ECEC:
    // 0x8027ECEC: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x8027ECF0: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x8027ECF4: addiu       $t9, $t9, -0x3138
    ctx->r25 = ADD32(ctx->r25, -0X3138);
    // 0x8027ECF8: addiu       $t7, $t7, 0x4678
    ctx->r15 = ADD32(ctx->r15, 0X4678);
    // 0x8027ECFC: sll         $t6, $a1, 1
    ctx->r14 = S32(ctx->r5 << 1);
    // 0x8027ED00: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x8027ED04: addu        $a0, $t8, $t9
    ctx->r4 = ADD32(ctx->r24, ctx->r25);
    // 0x8027ED08: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x8027ED0C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8027ED10:
    // 0x8027ED10: addu        $t0, $a0, $v0
    ctx->r8 = ADD32(ctx->r4, ctx->r2);
    // 0x8027ED14: addu        $t2, $v1, $v0
    ctx->r10 = ADD32(ctx->r3, ctx->r2);
    // 0x8027ED18: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8027ED1C: lb          $t3, 0x0($t2)
    ctx->r11 = MEM_B(ctx->r10, 0X0);
    // 0x8027ED20: sll         $t5, $v0, 16
    ctx->r13 = S32(ctx->r2 << 16);
    // 0x8027ED24: lb          $t1, 0x0($t0)
    ctx->r9 = MEM_B(ctx->r8, 0X0);
    // 0x8027ED28: sra         $v0, $t5, 16
    ctx->r2 = S32(SIGNED(ctx->r13) >> 16);
    // 0x8027ED2C: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x8027ED30: addu        $t4, $s0, $t3
    ctx->r12 = ADD32(ctx->r16, ctx->r11);
    // 0x8027ED34: bne         $at, $zero, L_8027ED10
    if (ctx->r1 != 0) {
        // 0x8027ED38: sb          $t1, 0x11($t4)
        MEM_B(0X11, ctx->r12) = ctx->r9;
            goto L_8027ED10;
    }
    // 0x8027ED38: sb          $t1, 0x11($t4)
    MEM_B(0X11, ctx->r12) = ctx->r9;
    // 0x8027ED3C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8027ED40: sll         $t7, $a1, 16
    ctx->r15 = S32(ctx->r5 << 16);
    // 0x8027ED44: sra         $a1, $t7, 16
    ctx->r5 = S32(SIGNED(ctx->r15) >> 16);
    // 0x8027ED48: slti        $at, $a1, 0x6
    ctx->r1 = SIGNED(ctx->r5) < 0X6 ? 1 : 0;
    // 0x8027ED4C: bne         $at, $zero, L_8027ECEC
    if (ctx->r1 != 0) {
        // 0x8027ED50: nop
    
            goto L_8027ECEC;
    }
    // 0x8027ED50: nop

    // 0x8027ED54: addiu       $s1, $sp, 0x30
    ctx->r17 = ADD32(ctx->r29, 0X30);
    // 0x8027ED58: jal         0x80041728
    // 0x8027ED5C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80041728(rdram, ctx);
        goto after_1;
    // 0x8027ED5C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x8027ED60: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x8027ED64: addiu       $v0, $v0, 0x4684
    ctx->r2 = ADD32(ctx->r2, 0X4684);
    // 0x8027ED68: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_8027ED6C:
    // 0x8027ED6C: addu        $t9, $s1, $a1
    ctx->r25 = ADD32(ctx->r17, ctx->r5);
    // 0x8027ED70: addu        $t2, $v0, $a1
    ctx->r10 = ADD32(ctx->r2, ctx->r5);
    // 0x8027ED74: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8027ED78: lb          $t3, 0x0($t2)
    ctx->r11 = MEM_B(ctx->r10, 0X0);
    // 0x8027ED7C: sll         $t4, $a1, 16
    ctx->r12 = S32(ctx->r5 << 16);
    // 0x8027ED80: lb          $t0, 0x0($t9)
    ctx->r8 = MEM_B(ctx->r25, 0X0);
    // 0x8027ED84: sra         $a1, $t4, 16
    ctx->r5 = S32(SIGNED(ctx->r12) >> 16);
    // 0x8027ED88: slti        $at, $a1, 0x4
    ctx->r1 = SIGNED(ctx->r5) < 0X4 ? 1 : 0;
    // 0x8027ED8C: addu        $t1, $s0, $t3
    ctx->r9 = ADD32(ctx->r16, ctx->r11);
    // 0x8027ED90: bne         $at, $zero, L_8027ED6C
    if (ctx->r1 != 0) {
        // 0x8027ED94: sb          $t0, 0x11($t1)
        MEM_B(0X11, ctx->r9) = ctx->r8;
            goto L_8027ED6C;
    }
    // 0x8027ED94: sb          $t0, 0x11($t1)
    MEM_B(0X11, ctx->r9) = ctx->r8;
    // 0x8027ED98: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_8027ED9C:
    // 0x8027ED9C: addu        $v0, $s0, $a1
    ctx->r2 = ADD32(ctx->r16, ctx->r5);
    // 0x8027EDA0: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8027EDA4: sll         $t7, $a1, 16
    ctx->r15 = S32(ctx->r5 << 16);
    // 0x8027EDA8: lb          $t6, 0x11($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X11);
    // 0x8027EDAC: sra         $a1, $t7, 16
    ctx->r5 = S32(SIGNED(ctx->r15) >> 16);
    // 0x8027EDB0: slti        $at, $a1, 0x10
    ctx->r1 = SIGNED(ctx->r5) < 0X10 ? 1 : 0;
    // 0x8027EDB4: bne         $at, $zero, L_8027ED9C
    if (ctx->r1 != 0) {
        // 0x8027EDB8: sb          $t6, 0x1($v0)
        MEM_B(0X1, ctx->r2) = ctx->r14;
            goto L_8027ED9C;
    }
    // 0x8027EDB8: sb          $t6, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r14;
    // 0x8027EDBC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8027EDC0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8027EDC4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8027EDC8: jr          $ra
    // 0x8027EDCC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8027EDCC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8027EDD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027EDD0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8027EDD4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8027EDD8: lui         $s1, 0x8011
    ctx->r17 = S32(0X8011 << 16);
    // 0x8027EDDC: addiu       $s1, $s1, -0x2F80
    ctx->r17 = ADD32(ctx->r17, -0X2F80);
    // 0x8027EDE0: lb          $t6, 0x339D($s1)
    ctx->r14 = MEM_B(ctx->r17, 0X339D);
    // 0x8027EDE4: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8027EDE8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8027EDEC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8027EDF0: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8027EDF4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8027EDF8: blez        $t6, L_8027EE4C
    if (SIGNED(ctx->r14) <= 0) {
        // 0x8027EDFC: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_8027EE4C;
    }
    // 0x8027EDFC: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8027EE00: addiu       $s3, $zero, 0x47C
    ctx->r19 = ADD32(0, 0X47C);
L_8027EE04:
    // 0x8027EE04: multu       $s0, $s3
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8027EE08: lb          $a1, 0x3399($s1)
    ctx->r5 = MEM_B(ctx->r17, 0X3399);
    // 0x8027EE0C: mflo        $t7
    ctx->r15 = lo;
    // 0x8027EE10: addu        $t8, $s1, $t7
    ctx->r24 = ADD32(ctx->r17, ctx->r15);
    // 0x8027EE14: lb          $a0, 0x33A4($t8)
    ctx->r4 = MEM_B(ctx->r24, 0X33A4);
    // 0x8027EE18: jal         0x8027EE74
    // 0x8027EE1C: nop

    func_8027EE74(rdram, ctx);
        goto after_0;
    // 0x8027EE1C: nop

    after_0:
    // 0x8027EE20: bne         $v0, $zero, L_8027EE34
    if (ctx->r2 != 0) {
        // 0x8027EE24: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_8027EE34;
    }
    // 0x8027EE24: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8027EE28: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8027EE2C: sll         $t9, $s2, 16
    ctx->r25 = S32(ctx->r18 << 16);
    // 0x8027EE30: sra         $s2, $t9, 16
    ctx->r18 = S32(SIGNED(ctx->r25) >> 16);
L_8027EE34:
    // 0x8027EE34: lb          $t3, 0x339D($s1)
    ctx->r11 = MEM_B(ctx->r17, 0X339D);
    // 0x8027EE38: sll         $t1, $s0, 16
    ctx->r9 = S32(ctx->r16 << 16);
    // 0x8027EE3C: sra         $s0, $t1, 16
    ctx->r16 = S32(SIGNED(ctx->r9) >> 16);
    // 0x8027EE40: slt         $at, $s0, $t3
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x8027EE44: bne         $at, $zero, L_8027EE04
    if (ctx->r1 != 0) {
        // 0x8027EE48: nop
    
            goto L_8027EE04;
    }
    // 0x8027EE48: nop

L_8027EE4C:
    // 0x8027EE4C: sll         $v0, $s2, 24
    ctx->r2 = S32(ctx->r18 << 24);
    // 0x8027EE50: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8027EE54: sra         $t4, $v0, 24
    ctx->r12 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8027EE58: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8027EE5C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8027EE60: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8027EE64: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8027EE68: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8027EE6C: jr          $ra
    // 0x8027EE70: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
    return;
    // 0x8027EE70: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
;}
RECOMP_FUNC void func_8027EE74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027EE74: sll         $t8, $a1, 16
    ctx->r24 = S32(ctx->r5 << 16);
    // 0x8027EE78: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8027EE7C: lui         $v1, 0x8028
    ctx->r3 = S32(0X8028 << 16);
    // 0x8027EE80: addu        $v1, $v1, $t9
    ctx->r3 = ADD32(ctx->r3, ctx->r25);
    // 0x8027EE84: lbu         $v1, 0x3700($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X3700);
    // 0x8027EE88: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8027EE8C: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x8027EE90: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8027EE94: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8027EE98: blez        $v1, L_8027EEE4
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8027EE9C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8027EEE4;
    }
    // 0x8027EE9C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8027EEA0: lui         $t0, 0x8028
    ctx->r8 = S32(0X8028 << 16);
    // 0x8027EEA4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8027EEA8: lbu         $t0, 0x36F8($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X36F8);
    // 0x8027EEAC: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x8027EEB0: addiu       $t1, $t1, -0x3110
    ctx->r9 = ADD32(ctx->r9, -0X3110);
    // 0x8027EEB4: addu        $a2, $t0, $t1
    ctx->r6 = ADD32(ctx->r8, ctx->r9);
    // 0x8027EEB8: addu        $t2, $a2, $v0
    ctx->r10 = ADD32(ctx->r6, ctx->r2);
L_8027EEBC:
    // 0x8027EEBC: lb          $t3, 0x11($t2)
    ctx->r11 = MEM_B(ctx->r10, 0X11);
    // 0x8027EEC0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8027EEC4: bne         $a0, $t3, L_8027EED4
    if (ctx->r4 != ctx->r11) {
        // 0x8027EEC8: sll         $t4, $v0, 16
        ctx->r12 = S32(ctx->r2 << 16);
            goto L_8027EED4;
    }
    // 0x8027EEC8: sll         $t4, $v0, 16
    ctx->r12 = S32(ctx->r2 << 16);
    // 0x8027EECC: jr          $ra
    // 0x8027EED0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8027EED0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8027EED4:
    // 0x8027EED4: sra         $v0, $t4, 16
    ctx->r2 = S32(SIGNED(ctx->r12) >> 16);
    // 0x8027EED8: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8027EEDC: bne         $at, $zero, L_8027EEBC
    if (ctx->r1 != 0) {
        // 0x8027EEE0: addu        $t2, $a2, $v0
        ctx->r10 = ADD32(ctx->r6, ctx->r2);
            goto L_8027EEBC;
    }
    // 0x8027EEE0: addu        $t2, $a2, $v0
    ctx->r10 = ADD32(ctx->r6, ctx->r2);
L_8027EEE4:
    // 0x8027EEE4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8027EEE8: jr          $ra
    // 0x8027EEEC: nop

    return;
    // 0x8027EEEC: nop

;}
RECOMP_FUNC void func_8027EEF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027EEF0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8027EEF4: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8027EEF8: lui         $s5, 0x8011
    ctx->r21 = S32(0X8011 << 16);
    // 0x8027EEFC: addiu       $s5, $s5, -0x2F80
    ctx->r21 = ADD32(ctx->r21, -0X2F80);
    // 0x8027EF00: lb          $t6, 0x339D($s5)
    ctx->r14 = MEM_B(ctx->r21, 0X339D);
    // 0x8027EF04: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8027EF08: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8027EF0C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8027EF10: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8027EF14: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8027EF18: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8027EF1C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8027EF20: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8027EF24: blez        $t6, L_8027EFD0
    if (SIGNED(ctx->r14) <= 0) {
        // 0x8027EF28: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_8027EFD0;
    }
    // 0x8027EF28: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x8027EF2C: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x8027EF30: addiu       $s1, $s1, -0x3138
    ctx->r17 = ADD32(ctx->r17, -0X3138);
    // 0x8027EF34: addiu       $s6, $zero, 0x47C
    ctx->r22 = ADD32(0, 0X47C);
L_8027EF38:
    // 0x8027EF38: jal         0x800497E8
    // 0x8027EF3C: nop

    func_800497E8(rdram, ctx);
        goto after_0;
    // 0x8027EF3C: nop

    after_0:
    // 0x8027EF40: multu       $s3, $s6
    result = U64(U32(ctx->r19)) * U64(U32(ctx->r22)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8027EF44: mflo        $t7
    ctx->r15 = lo;
    // 0x8027EF48: addu        $s2, $s5, $t7
    ctx->r18 = ADD32(ctx->r21, ctx->r15);
    // 0x8027EF4C: lb          $a0, 0x33A4($s2)
    ctx->r4 = MEM_B(ctx->r18, 0X33A4);
    // 0x8027EF50: jal         0x800498B8
    // 0x8027EF54: nop

    func_800498B8(rdram, ctx);
        goto after_1;
    // 0x8027EF54: nop

    after_1:
    // 0x8027EF58: sll         $s4, $v0, 16
    ctx->r20 = S32(ctx->r2 << 16);
    // 0x8027EF5C: sra         $t8, $s4, 16
    ctx->r24 = S32(SIGNED(ctx->r20) >> 16);
    // 0x8027EF60: jal         0x800497E8
    // 0x8027EF64: or          $s4, $t8, $zero
    ctx->r20 = ctx->r24 | 0;
    func_800497E8(rdram, ctx);
        goto after_2;
    // 0x8027EF64: or          $s4, $t8, $zero
    ctx->r20 = ctx->r24 | 0;
    after_2:
    // 0x8027EF68: multu       $v0, $s4
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8027EF6C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x8027EF70: lb          $a0, 0x33A4($s2)
    ctx->r4 = MEM_B(ctx->r18, 0X33A4);
    // 0x8027EF74: sll         $t8, $s3, 16
    ctx->r24 = S32(ctx->r19 << 16);
    // 0x8027EF78: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8027EF7C: mflo        $a1
    ctx->r5 = lo;
    // 0x8027EF80: sll         $t9, $a1, 16
    ctx->r25 = S32(ctx->r5 << 16);
    // 0x8027EF84: sra         $a1, $t9, 16
    ctx->r5 = S32(SIGNED(ctx->r25) >> 16);
    // 0x8027EF88: addu        $t1, $s1, $v1
    ctx->r9 = ADD32(ctx->r17, ctx->r3);
L_8027EF8C:
    // 0x8027EF8C: addu        $t2, $t1, $a1
    ctx->r10 = ADD32(ctx->r9, ctx->r5);
    // 0x8027EF90: lb          $t3, 0x0($t2)
    ctx->r11 = MEM_B(ctx->r10, 0X0);
    // 0x8027EF94: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8027EF98: bne         $t3, $a0, L_8027EFAC
    if (ctx->r11 != ctx->r4) {
        // 0x8027EF9C: sll         $t6, $v1, 16
        ctx->r14 = S32(ctx->r3 << 16);
            goto L_8027EFAC;
    }
    // 0x8027EF9C: sll         $t6, $v1, 16
    ctx->r14 = S32(ctx->r3 << 16);
    // 0x8027EFA0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8027EFA4: sll         $t4, $s0, 16
    ctx->r12 = S32(ctx->r16 << 16);
    // 0x8027EFA8: sra         $s0, $t4, 16
    ctx->r16 = S32(SIGNED(ctx->r12) >> 16);
L_8027EFAC:
    // 0x8027EFAC: sra         $v1, $t6, 16
    ctx->r3 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8027EFB0: slti        $at, $v1, 0x2
    ctx->r1 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8027EFB4: bne         $at, $zero, L_8027EF8C
    if (ctx->r1 != 0) {
        // 0x8027EFB8: addu        $t1, $s1, $v1
        ctx->r9 = ADD32(ctx->r17, ctx->r3);
            goto L_8027EF8C;
    }
    // 0x8027EFB8: addu        $t1, $s1, $v1
    ctx->r9 = ADD32(ctx->r17, ctx->r3);
    // 0x8027EFBC: lb          $t0, 0x339D($s5)
    ctx->r8 = MEM_B(ctx->r21, 0X339D);
    // 0x8027EFC0: sra         $s3, $t8, 16
    ctx->r19 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8027EFC4: slt         $at, $s3, $t0
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x8027EFC8: bne         $at, $zero, L_8027EF38
    if (ctx->r1 != 0) {
        // 0x8027EFCC: nop
    
            goto L_8027EF38;
    }
    // 0x8027EFCC: nop

L_8027EFD0:
    // 0x8027EFD0: sll         $v0, $s0, 24
    ctx->r2 = S32(ctx->r16 << 24);
    // 0x8027EFD4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8027EFD8: sra         $t1, $v0, 24
    ctx->r9 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8027EFDC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8027EFE0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8027EFE4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8027EFE8: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8027EFEC: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8027EFF0: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8027EFF4: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8027EFF8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8027EFFC: jr          $ra
    // 0x8027F000: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    return;
    // 0x8027F000: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x8027F004: nop

    // 0x8027F008: nop

    // 0x8027F00C: nop

;}
RECOMP_FUNC void func_8027F010(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027F010: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8027F014: lb          $t6, -0x32A1($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X32A1);
    // 0x8027F018: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8027F01C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8027F020: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8027F024: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8027F028: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8027F02C: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8027F030: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8027F034: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8027F038: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8027F03C: lui         $s0, 0x8011
    ctx->r16 = S32(0X8011 << 16);
    // 0x8027F040: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8027F044: addiu       $s0, $s0, -0x2F80
    ctx->r16 = ADD32(ctx->r16, -0X2F80);
    // 0x8027F048: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8027F04C: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x8027F050: lb          $v0, 0x0($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X0);
    // 0x8027F054: lbu         $t8, -0x32B0($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X32B0);
    // 0x8027F058: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8027F05C: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8027F060: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8027F064: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8027F068: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8027F06C: addu        $v1, $s0, $t7
    ctx->r3 = ADD32(ctx->r16, ctx->r15);
    // 0x8027F070: bne         $t8, $zero, L_8027F25C
    if (ctx->r24 != 0) {
        // 0x8027F074: sh          $v0, 0x26($sp)
        MEM_H(0X26, ctx->r29) = ctx->r2;
            goto L_8027F25C;
    }
    // 0x8027F074: sh          $v0, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r2;
    // 0x8027F078: andi        $t9, $v0, 0xFFFF
    ctx->r25 = ctx->r2 & 0XFFFF;
    // 0x8027F07C: sltiu       $at, $t9, 0xA
    ctx->r1 = ctx->r25 < 0XA ? 1 : 0;
    // 0x8027F080: beq         $at, $zero, L_8027F25C
    if (ctx->r1 == 0) {
        // 0x8027F084: sll         $t9, $t9, 2
        ctx->r25 = S32(ctx->r25 << 2);
            goto L_8027F25C;
    }
    // 0x8027F084: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8027F088: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8027F08C: addu        $at, $at, $t9
    gpr jr_addend_8027F098 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8027F090: lw          $t9, 0x39CC($at)
    ctx->r25 = ADD32(ctx->r1, 0X39CC);
    // 0x8027F094: nop

    // 0x8027F098: jr          $t9
    // 0x8027F09C: nop

    switch (jr_addend_8027F098 >> 2) {
        case 0: goto L_8027F0A0; break;
        case 1: goto L_8027F0C4; break;
        case 2: goto L_8027F0F8; break;
        case 3: goto L_8027F0F8; break;
        case 4: goto L_8027F1D8; break;
        case 5: goto L_8027F0F8; break;
        case 6: goto L_8027F0F8; break;
        case 7: goto L_8027F1E4; break;
        case 8: goto L_8027F248; break;
        case 9: goto L_8027F254; break;
        default: switch_error(__func__, 0x8027F098, 0x802839CC);
    }
    // 0x8027F09C: nop

L_8027F0A0:
    // 0x8027F0A0: jal         0x8027F2F8
    // 0x8027F0A4: nop

    func_8027F2F8(rdram, ctx);
        goto after_0;
    // 0x8027F0A4: nop

    after_0:
    // 0x8027F0A8: jal         0x80036278
    // 0x8027F0AC: nop

    func_80036278(rdram, ctx);
        goto after_1;
    // 0x8027F0AC: nop

    after_1:
    // 0x8027F0B0: lb          $t0, 0x0($s0)
    ctx->r8 = MEM_B(ctx->r16, 0X0);
    // 0x8027F0B4: nop

    // 0x8027F0B8: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x8027F0BC: b           L_8027F25C
    // 0x8027F0C0: sb          $t1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r9;
        goto L_8027F25C;
    // 0x8027F0C0: sb          $t1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r9;
L_8027F0C4:
    // 0x8027F0C4: jal         0x80036234
    // 0x8027F0C8: nop

    func_80036234(rdram, ctx);
        goto after_2;
    // 0x8027F0C8: nop

    after_2:
    // 0x8027F0CC: jal         0x802805B4
    // 0x8027F0D0: nop

    func_802805B4(rdram, ctx);
        goto after_3;
    // 0x8027F0D0: nop

    after_3:
    // 0x8027F0D4: jal         0x80280B2C
    // 0x8027F0D8: nop

    func_80280B2C(rdram, ctx);
        goto after_4;
    // 0x8027F0D8: nop

    after_4:
    // 0x8027F0DC: jal         0x80049A90
    // 0x8027F0E0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80049A90(rdram, ctx);
        goto after_5;
    // 0x8027F0E0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_5:
    // 0x8027F0E4: lb          $t2, 0x0($s0)
    ctx->r10 = MEM_B(ctx->r16, 0X0);
    // 0x8027F0E8: nop

    // 0x8027F0EC: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x8027F0F0: b           L_8027F25C
    // 0x8027F0F4: sb          $t3, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r11;
        goto L_8027F25C;
    // 0x8027F0F4: sb          $t3, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r11;
L_8027F0F8:
    // 0x8027F0F8: lb          $a0, 0x1($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X1);
    // 0x8027F0FC: lb          $a1, 0x3($s0)
    ctx->r5 = MEM_B(ctx->r16, 0X3);
    // 0x8027F100: jal         0x8003DE5C
    // 0x8027F104: nop

    func_8003DE5C(rdram, ctx);
        goto after_6;
    // 0x8027F104: nop

    after_6:
    // 0x8027F108: lb          $a0, 0x1($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X1);
    // 0x8027F10C: jal         0x800411D4
    // 0x8027F110: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    func_800411D4(rdram, ctx);
        goto after_7;
    // 0x8027F110: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    after_7:
    // 0x8027F114: jal         0x80041AB8
    // 0x8027F118: nop

    func_80041AB8(rdram, ctx);
        goto after_8;
    // 0x8027F118: nop

    after_8:
    // 0x8027F11C: lb          $t4, 0x3($s0)
    ctx->r12 = MEM_B(ctx->r16, 0X3);
    // 0x8027F120: nop

    // 0x8027F124: slti        $at, $t4, 0x12
    ctx->r1 = SIGNED(ctx->r12) < 0X12 ? 1 : 0;
    // 0x8027F128: bne         $at, $zero, L_8027F260
    if (ctx->r1 != 0) {
        // 0x8027F12C: lhu         $t1, 0x26($sp)
        ctx->r9 = MEM_HU(ctx->r29, 0X26);
            goto L_8027F260;
    }
    // 0x8027F12C: lhu         $t1, 0x26($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X26);
    // 0x8027F130: lb          $t5, 0x1($s0)
    ctx->r13 = MEM_B(ctx->r16, 0X1);
    // 0x8027F134: lh          $t7, 0x26($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X26);
    // 0x8027F138: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8027F13C: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x8027F140: sb          $zero, 0x3($s0)
    MEM_B(0X3, ctx->r16) = 0;
    // 0x8027F144: beq         $t7, $at, L_8027F170
    if (ctx->r15 == ctx->r1) {
        // 0x8027F148: sb          $t6, 0x1($s0)
        MEM_B(0X1, ctx->r16) = ctx->r14;
            goto L_8027F170;
    }
    // 0x8027F148: sb          $t6, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r14;
    // 0x8027F14C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8027F150: beq         $t7, $at, L_8027F170
    if (ctx->r15 == ctx->r1) {
        // 0x8027F154: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_8027F170;
    }
    // 0x8027F154: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8027F158: beq         $t7, $at, L_8027F1A0
    if (ctx->r15 == ctx->r1) {
        // 0x8027F15C: addiu       $at, $zero, 0x6
        ctx->r1 = ADD32(0, 0X6);
            goto L_8027F1A0;
    }
    // 0x8027F15C: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x8027F160: beq         $t7, $at, L_8027F1D0
    if (ctx->r15 == ctx->r1) {
        // 0x8027F164: addiu       $t4, $zero, 0x7
        ctx->r12 = ADD32(0, 0X7);
            goto L_8027F1D0;
    }
    // 0x8027F164: addiu       $t4, $zero, 0x7
    ctx->r12 = ADD32(0, 0X7);
    // 0x8027F168: b           L_8027F260
    // 0x8027F16C: lhu         $t1, 0x26($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X26);
        goto L_8027F260;
    // 0x8027F16C: lhu         $t1, 0x26($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X26);
L_8027F170:
    // 0x8027F170: jal         0x80280B2C
    // 0x8027F174: nop

    func_80280B2C(rdram, ctx);
        goto after_9;
    // 0x8027F174: nop

    after_9:
    // 0x8027F178: lb          $t8, 0x1($s0)
    ctx->r24 = MEM_B(ctx->r16, 0X1);
    // 0x8027F17C: nop

    // 0x8027F180: slti        $at, $t8, 0x22
    ctx->r1 = SIGNED(ctx->r24) < 0X22 ? 1 : 0;
    // 0x8027F184: bne         $at, $zero, L_8027F260
    if (ctx->r1 != 0) {
        // 0x8027F188: lhu         $t1, 0x26($sp)
        ctx->r9 = MEM_HU(ctx->r29, 0X26);
            goto L_8027F260;
    }
    // 0x8027F188: lhu         $t1, 0x26($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X26);
    // 0x8027F18C: lb          $t9, 0x0($s0)
    ctx->r25 = MEM_B(ctx->r16, 0X0);
    // 0x8027F190: nop

    // 0x8027F194: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8027F198: b           L_8027F25C
    // 0x8027F19C: sb          $t0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r8;
        goto L_8027F25C;
    // 0x8027F19C: sb          $t0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r8;
L_8027F1A0:
    // 0x8027F1A0: jal         0x80280B2C
    // 0x8027F1A4: nop

    func_80280B2C(rdram, ctx);
        goto after_10;
    // 0x8027F1A4: nop

    after_10:
    // 0x8027F1A8: lb          $t1, 0x1($s0)
    ctx->r9 = MEM_B(ctx->r16, 0X1);
    // 0x8027F1AC: nop

    // 0x8027F1B0: slti        $at, $t1, 0x45
    ctx->r1 = SIGNED(ctx->r9) < 0X45 ? 1 : 0;
    // 0x8027F1B4: bne         $at, $zero, L_8027F260
    if (ctx->r1 != 0) {
        // 0x8027F1B8: lhu         $t1, 0x26($sp)
        ctx->r9 = MEM_HU(ctx->r29, 0X26);
            goto L_8027F260;
    }
    // 0x8027F1B8: lhu         $t1, 0x26($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X26);
    // 0x8027F1BC: lb          $t2, 0x0($s0)
    ctx->r10 = MEM_B(ctx->r16, 0X0);
    // 0x8027F1C0: nop

    // 0x8027F1C4: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x8027F1C8: b           L_8027F25C
    // 0x8027F1CC: sb          $t3, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r11;
        goto L_8027F25C;
    // 0x8027F1CC: sb          $t3, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r11;
L_8027F1D0:
    // 0x8027F1D0: b           L_8027F25C
    // 0x8027F1D4: sb          $t4, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r12;
        goto L_8027F25C;
    // 0x8027F1D4: sb          $t4, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r12;
L_8027F1D8:
    // 0x8027F1D8: addiu       $t5, $v0, 0x1
    ctx->r13 = ADD32(ctx->r2, 0X1);
    // 0x8027F1DC: b           L_8027F25C
    // 0x8027F1E0: sb          $t5, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r13;
        goto L_8027F25C;
    // 0x8027F1E0: sb          $t5, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r13;
L_8027F1E4:
    // 0x8027F1E4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8027F1E8: lb          $v0, 0x2($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X2);
    // 0x8027F1EC: addiu       $a0, $a0, -0x3088
    ctx->r4 = ADD32(ctx->r4, -0X3088);
    // 0x8027F1F0: lbu         $t6, 0x10($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X10);
    // 0x8027F1F4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8027F1F8: slt         $at, $v0, $t6
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x8027F1FC: beq         $at, $zero, L_8027F208
    if (ctx->r1 == 0) {
        // 0x8027F200: nop
    
            goto L_8027F208;
    }
    // 0x8027F200: nop

    // 0x8027F204: sb          $v0, 0x10($a0)
    MEM_B(0X10, ctx->r4) = ctx->r2;
L_8027F208:
    // 0x8027F208: jal         0x800331E0
    // 0x8027F20C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800331E0(rdram, ctx);
        goto after_11;
    // 0x8027F20C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_11:
    // 0x8027F210: jal         0x80034908
    // 0x8027F214: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80034908(rdram, ctx);
        goto after_12;
    // 0x8027F214: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_12:
    // 0x8027F218: bne         $v0, $zero, L_8027F22C
    if (ctx->r2 != 0) {
        // 0x8027F21C: addiu       $a0, $zero, 0x46
        ctx->r4 = ADD32(0, 0X46);
            goto L_8027F22C;
    }
    // 0x8027F21C: addiu       $a0, $zero, 0x46
    ctx->r4 = ADD32(0, 0X46);
    // 0x8027F220: jal         0x80035154
    // 0x8027F224: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80035154(rdram, ctx);
        goto after_13;
    // 0x8027F224: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_13:
    // 0x8027F228: addiu       $a0, $zero, 0x46
    ctx->r4 = ADD32(0, 0X46);
L_8027F22C:
    // 0x8027F22C: jal         0x8003D934
    // 0x8027F230: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8003D934(rdram, ctx);
        goto after_14;
    // 0x8027F230: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_14:
    // 0x8027F234: lb          $t7, 0x0($s0)
    ctx->r15 = MEM_B(ctx->r16, 0X0);
    // 0x8027F238: nop

    // 0x8027F23C: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8027F240: b           L_8027F25C
    // 0x8027F244: sb          $t8, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r24;
        goto L_8027F25C;
    // 0x8027F244: sb          $t8, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r24;
L_8027F248:
    // 0x8027F248: addiu       $t9, $v0, 0x1
    ctx->r25 = ADD32(ctx->r2, 0X1);
    // 0x8027F24C: b           L_8027F25C
    // 0x8027F250: sb          $t9, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r25;
        goto L_8027F25C;
    // 0x8027F250: sb          $t9, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r25;
L_8027F254:
    // 0x8027F254: addiu       $t0, $v0, 0x1
    ctx->r8 = ADD32(ctx->r2, 0X1);
    // 0x8027F258: sb          $t0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r8;
L_8027F25C:
    // 0x8027F25C: lhu         $t1, 0x26($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X26);
L_8027F260:
    // 0x8027F260: nop

    // 0x8027F264: sltiu       $at, $t1, 0xA
    ctx->r1 = ctx->r9 < 0XA ? 1 : 0;
    // 0x8027F268: beq         $at, $zero, L_8027F2D4
    if (ctx->r1 == 0) {
        // 0x8027F26C: sll         $t1, $t1, 2
        ctx->r9 = S32(ctx->r9 << 2);
            goto L_8027F2D4;
    }
    // 0x8027F26C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8027F270: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8027F274: addu        $at, $at, $t1
    gpr jr_addend_8027F280 = ctx->r9;
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8027F278: lw          $t1, 0x39F4($at)
    ctx->r9 = ADD32(ctx->r1, 0X39F4);
    // 0x8027F27C: nop

    // 0x8027F280: jr          $t1
    // 0x8027F284: nop

    switch (jr_addend_8027F280 >> 2) {
        case 0: goto L_8027F2A0; break;
        case 1: goto L_8027F2A0; break;
        case 2: goto L_8027F2B0; break;
        case 3: goto L_8027F2B0; break;
        case 4: goto L_8027F2B0; break;
        case 5: goto L_8027F2B0; break;
        case 6: goto L_8027F2DC; break;
        case 7: goto L_8027F2DC; break;
        case 8: goto L_8027F288; break;
        case 9: goto L_8027F2C0; break;
        default: switch_error(__func__, 0x8027F280, 0x802839F4);
    }
    // 0x8027F284: nop

L_8027F288:
    // 0x8027F288: jal         0x80015BC0
    // 0x8027F28C: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    func_80015BC0(rdram, ctx);
        goto after_15;
    // 0x8027F28C: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    after_15:
    // 0x8027F290: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8027F294: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8027F298: b           L_8027F2DC
    // 0x8027F29C: sb          $t2, -0x3271($at)
    MEM_B(-0X3271, ctx->r1) = ctx->r10;
        goto L_8027F2DC;
    // 0x8027F29C: sb          $t2, -0x3271($at)
    MEM_B(-0X3271, ctx->r1) = ctx->r10;
L_8027F2A0:
    // 0x8027F2A0: jal         0x80035A04
    // 0x8027F2A4: nop

    func_80035A04(rdram, ctx);
        goto after_16;
    // 0x8027F2A4: nop

    after_16:
    // 0x8027F2A8: b           L_8027F2E0
    // 0x8027F2AC: lhu         $a0, 0x26($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X26);
        goto L_8027F2E0;
    // 0x8027F2AC: lhu         $a0, 0x26($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X26);
L_8027F2B0:
    // 0x8027F2B0: jal         0x80035A04
    // 0x8027F2B4: nop

    func_80035A04(rdram, ctx);
        goto after_17;
    // 0x8027F2B4: nop

    after_17:
    // 0x8027F2B8: b           L_8027F2E0
    // 0x8027F2BC: lhu         $a0, 0x26($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X26);
        goto L_8027F2E0;
    // 0x8027F2BC: lhu         $a0, 0x26($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X26);
L_8027F2C0:
    // 0x8027F2C0: jal         0x80015BC0
    // 0x8027F2C4: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_80015BC0(rdram, ctx);
        goto after_18;
    // 0x8027F2C4: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_18:
    // 0x8027F2C8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8027F2CC: b           L_8027F2DC
    // 0x8027F2D0: sb          $zero, -0x3271($at)
    MEM_B(-0X3271, ctx->r1) = 0;
        goto L_8027F2DC;
    // 0x8027F2D0: sb          $zero, -0x3271($at)
    MEM_B(-0X3271, ctx->r1) = 0;
L_8027F2D4:
    // 0x8027F2D4: jal         0x80035A04
    // 0x8027F2D8: nop

    func_80035A04(rdram, ctx);
        goto after_19;
    // 0x8027F2D8: nop

    after_19:
L_8027F2DC:
    // 0x8027F2DC: lhu         $a0, 0x26($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X26);
L_8027F2E0:
    // 0x8027F2E0: jal         0x800354D0
    // 0x8027F2E4: nop

    func_800354D0(rdram, ctx);
        goto after_20;
    // 0x8027F2E4: nop

    after_20:
    // 0x8027F2E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8027F2EC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8027F2F0: jr          $ra
    // 0x8027F2F4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8027F2F4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8027F2F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027F2F8: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8027F2FC: lb          $t6, -0x32A1($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X32A1);
    // 0x8027F300: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8027F304: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8027F308: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8027F30C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8027F310: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8027F314: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8027F318: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8027F31C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8027F320: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8027F324: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8027F328: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8027F32C: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8027F330: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8027F334: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8027F338: addiu       $t8, $t8, -0x2F80
    ctx->r24 = ADD32(ctx->r24, -0X2F80);
    // 0x8027F33C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8027F340: addu        $s0, $t7, $t8
    ctx->r16 = ADD32(ctx->r15, ctx->r24);
    // 0x8027F344: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8027F348: jal         0x800218E0
    // 0x8027F34C: addiu       $a1, $zero, 0x3398
    ctx->r5 = ADD32(0, 0X3398);
    func_800218E0(rdram, ctx);
        goto after_0;
    // 0x8027F34C: addiu       $a1, $zero, 0x3398
    ctx->r5 = ADD32(0, 0X3398);
    after_0:
    // 0x8027F350: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8027F354: addiu       $a0, $a0, -0x3138
    ctx->r4 = ADD32(ctx->r4, -0X3138);
    // 0x8027F358: jal         0x800218E0
    // 0x8027F35C: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    func_800218E0(rdram, ctx);
        goto after_1;
    // 0x8027F35C: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    after_1:
    // 0x8027F360: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8027F364: addiu       $v1, $v1, -0x30A0
    ctx->r3 = ADD32(ctx->r3, -0X30A0);
    // 0x8027F368: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
    // 0x8027F36C: lb          $t9, 0x0($v1)
    ctx->r25 = MEM_B(ctx->r3, 0X0);
    // 0x8027F370: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8027F374: jal         0x80039CB4
    // 0x8027F378: sb          $t9, -0x3088($at)
    MEM_B(-0X3088, ctx->r1) = ctx->r25;
    func_80039CB4(rdram, ctx);
        goto after_2;
    // 0x8027F378: sb          $t9, -0x3088($at)
    MEM_B(-0X3088, ctx->r1) = ctx->r25;
    after_2:
    // 0x8027F37C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8027F380: addiu       $v1, $v1, -0x30A0
    ctx->r3 = ADD32(ctx->r3, -0X30A0);
    // 0x8027F384: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8027F388: sb          $t0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r8;
    // 0x8027F38C: sb          $zero, 0x8($v1)
    MEM_B(0X8, ctx->r3) = 0;
    // 0x8027F390: sb          $zero, 0x9($v1)
    MEM_B(0X9, ctx->r3) = 0;
    // 0x8027F394: jal         0x8004974C
    // 0x8027F398: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    func_8004974C(rdram, ctx);
        goto after_3;
    // 0x8027F398: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    after_3:
    // 0x8027F39C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8027F3A0: slti        $at, $v0, 0x3
    ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x8027F3A4: addiu       $v1, $v1, -0x30A0
    ctx->r3 = ADD32(ctx->r3, -0X30A0);
    // 0x8027F3A8: beq         $at, $zero, L_8027F3BC
    if (ctx->r1 == 0) {
        // 0x8027F3AC: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_8027F3BC;
    }
    // 0x8027F3AC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8027F3B0: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x8027F3B4: b           L_8027F3C0
    // 0x8027F3B8: sb          $t1, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r9;
        goto L_8027F3C0;
    // 0x8027F3B8: sb          $t1, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r9;
L_8027F3BC:
    // 0x8027F3BC: sb          $a0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r4;
L_8027F3C0:
    // 0x8027F3C0: sb          $a0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r4;
    // 0x8027F3C4: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x8027F3C8: lb          $t2, -0x3086($t2)
    ctx->r10 = MEM_B(ctx->r10, -0X3086);
    // 0x8027F3CC: jal         0x8027F430
    // 0x8027F3D0: sb          $t2, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r10;
    func_8027F430(rdram, ctx);
        goto after_4;
    // 0x8027F3D0: sb          $t2, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r10;
    after_4:
    // 0x8027F3D4: lb          $t3, 0x5($s0)
    ctx->r11 = MEM_B(ctx->r16, 0X5);
    // 0x8027F3D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8027F3DC: blez        $t3, L_8027F418
    if (SIGNED(ctx->r11) <= 0) {
        // 0x8027F3E0: addiu       $a0, $zero, -0x1
        ctx->r4 = ADD32(0, -0X1);
            goto L_8027F418;
    }
    // 0x8027F3E0: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8027F3E4: addiu       $v1, $zero, 0x47C
    ctx->r3 = ADD32(0, 0X47C);
L_8027F3E8:
    // 0x8027F3E8: multu       $v0, $v1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8027F3EC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8027F3F0: sll         $t6, $v0, 16
    ctx->r14 = S32(ctx->r2 << 16);
    // 0x8027F3F4: sra         $v0, $t6, 16
    ctx->r2 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8027F3F8: mflo        $t4
    ctx->r12 = lo;
    // 0x8027F3FC: addu        $t5, $s0, $t4
    ctx->r13 = ADD32(ctx->r16, ctx->r12);
    // 0x8027F400: sb          $a0, 0xC($t5)
    MEM_B(0XC, ctx->r13) = ctx->r4;
    // 0x8027F404: lb          $t8, 0x5($s0)
    ctx->r24 = MEM_B(ctx->r16, 0X5);
    // 0x8027F408: nop

    // 0x8027F40C: slt         $at, $v0, $t8
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x8027F410: bne         $at, $zero, L_8027F3E8
    if (ctx->r1 != 0) {
        // 0x8027F414: nop
    
            goto L_8027F3E8;
    }
    // 0x8027F414: nop

L_8027F418:
    // 0x8027F418: jal         0x8027F520
    // 0x8027F41C: nop

    func_8027F520(rdram, ctx);
        goto after_5;
    // 0x8027F41C: nop

    after_5:
    // 0x8027F420: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8027F424: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8027F428: jr          $ra
    // 0x8027F42C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8027F42C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8027F430(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027F430: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8027F434: lb          $t6, -0x32A1($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X32A1);
    // 0x8027F438: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8027F43C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8027F440: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8027F444: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8027F448: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8027F44C: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8027F450: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8027F454: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8027F458: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8027F45C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8027F460: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8027F464: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8027F468: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8027F46C: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8027F470: addiu       $t8, $t8, -0x2F80
    ctx->r24 = ADD32(ctx->r24, -0X2F80);
    // 0x8027F474: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8027F478: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x8027F47C: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x8027F480: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8027F484: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8027F488: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8027F48C: addu        $s3, $t7, $t8
    ctx->r19 = ADD32(ctx->r15, ctx->r24);
    // 0x8027F490: lb          $t9, 0x5($s3)
    ctx->r25 = MEM_B(ctx->r19, 0X5);
    // 0x8027F494: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8027F498: blez        $t9, L_8027F4FC
    if (SIGNED(ctx->r25) <= 0) {
        // 0x8027F49C: ori         $s5, $zero, 0xFFFF
        ctx->r21 = 0 | 0XFFFF;
            goto L_8027F4FC;
    }
    // 0x8027F49C: ori         $s5, $zero, 0xFFFF
    ctx->r21 = 0 | 0XFFFF;
    // 0x8027F4A0: addiu       $s4, $zero, 0x47C
    ctx->r20 = ADD32(0, 0X47C);
    // 0x8027F4A4: addiu       $s1, $zero, 0xFF
    ctx->r17 = ADD32(0, 0XFF);
L_8027F4A8:
    // 0x8027F4A8: multu       $s2, $s4
    result = U64(U32(ctx->r18)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8027F4AC: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    // 0x8027F4B0: mflo        $t0
    ctx->r8 = lo;
    // 0x8027F4B4: addu        $a0, $s3, $t0
    ctx->r4 = ADD32(ctx->r19, ctx->r8);
    // 0x8027F4B8: addiu       $a0, $a0, 0x2C
    ctx->r4 = ADD32(ctx->r4, 0X2C);
    // 0x8027F4BC: jal         0x800218E0
    // 0x8027F4C0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_800218E0(rdram, ctx);
        goto after_0;
    // 0x8027F4C0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x8027F4C4: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8027F4C8: sb          $s1, 0x1B($s0)
    MEM_B(0X1B, ctx->r16) = ctx->r17;
    // 0x8027F4CC: sh          $s5, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r21;
    // 0x8027F4D0: sb          $s1, 0x1E($s0)
    MEM_B(0X1E, ctx->r16) = ctx->r17;
    // 0x8027F4D4: sb          $s1, 0x20($s0)
    MEM_B(0X20, ctx->r16) = ctx->r17;
    // 0x8027F4D8: sb          $s1, 0x24($s0)
    MEM_B(0X24, ctx->r16) = ctx->r17;
    // 0x8027F4DC: sb          $s1, 0x2A($s0)
    MEM_B(0X2A, ctx->r16) = ctx->r17;
    // 0x8027F4E0: sb          $s1, 0x2F($s0)
    MEM_B(0X2F, ctx->r16) = ctx->r17;
    // 0x8027F4E4: lb          $t3, 0x5($s3)
    ctx->r11 = MEM_B(ctx->r19, 0X5);
    // 0x8027F4E8: sll         $t1, $s2, 16
    ctx->r9 = S32(ctx->r18 << 16);
    // 0x8027F4EC: sra         $s2, $t1, 16
    ctx->r18 = S32(SIGNED(ctx->r9) >> 16);
    // 0x8027F4F0: slt         $at, $s2, $t3
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x8027F4F4: bne         $at, $zero, L_8027F4A8
    if (ctx->r1 != 0) {
        // 0x8027F4F8: nop
    
            goto L_8027F4A8;
    }
    // 0x8027F4F8: nop

L_8027F4FC:
    // 0x8027F4FC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8027F500: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8027F504: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8027F508: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8027F50C: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8027F510: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x8027F514: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x8027F518: jr          $ra
    // 0x8027F51C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8027F51C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8027F520(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027F520: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8027F524: lb          $t6, -0x32A1($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X32A1);
    // 0x8027F528: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8027F52C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8027F530: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8027F534: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8027F538: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8027F53C: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8027F540: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8027F544: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8027F548: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8027F54C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8027F550: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8027F554: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8027F558: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8027F55C: addiu       $t8, $t8, -0x2F80
    ctx->r24 = ADD32(ctx->r24, -0X2F80);
    // 0x8027F560: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027F564: addu        $t0, $t7, $t8
    ctx->r8 = ADD32(ctx->r15, ctx->r24);
    // 0x8027F568: addiu       $a0, $t0, 0x488
    ctx->r4 = ADD32(ctx->r8, 0X488);
    // 0x8027F56C: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x8027F570: jal         0x8001DA18
    // 0x8027F574: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    func_8001DA18(rdram, ctx);
        goto after_0;
    // 0x8027F574: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    after_0:
    // 0x8027F578: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x8027F57C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8027F580: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x8027F584: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8027F588: sll         $t9, $a3, 2
    ctx->r25 = S32(ctx->r7 << 2);
L_8027F58C:
    // 0x8027F58C: addu        $t9, $t9, $a3
    ctx->r25 = ADD32(ctx->r25, ctx->r7);
    // 0x8027F590: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8027F594: addu        $t9, $t9, $a3
    ctx->r25 = ADD32(ctx->r25, ctx->r7);
    // 0x8027F598: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8027F59C: subu        $t9, $t9, $a3
    ctx->r25 = SUB32(ctx->r25, ctx->r7);
    // 0x8027F5A0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8027F5A4: addu        $a1, $t0, $t9
    ctx->r5 = ADD32(ctx->r8, ctx->r25);
    // 0x8027F5A8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_8027F5AC:
    // 0x8027F5AC: multu       $v1, $a2
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8027F5B0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8027F5B4: sll         $t2, $v1, 16
    ctx->r10 = S32(ctx->r3 << 16);
    // 0x8027F5B8: sra         $v1, $t2, 16
    ctx->r3 = S32(SIGNED(ctx->r10) >> 16);
    // 0x8027F5BC: slti        $at, $v1, 0x46
    ctx->r1 = SIGNED(ctx->r3) < 0X46 ? 1 : 0;
    // 0x8027F5C0: mflo        $t1
    ctx->r9 = lo;
    // 0x8027F5C4: addu        $v0, $a1, $t1
    ctx->r2 = ADD32(ctx->r5, ctx->r9);
    // 0x8027F5C8: sb          $a0, 0x50F($v0)
    MEM_B(0X50F, ctx->r2) = ctx->r4;
    // 0x8027F5CC: bne         $at, $zero, L_8027F5AC
    if (ctx->r1 != 0) {
        // 0x8027F5D0: sb          $a0, 0x510($v0)
        MEM_B(0X510, ctx->r2) = ctx->r4;
            goto L_8027F5AC;
    }
    // 0x8027F5D0: sb          $a0, 0x510($v0)
    MEM_B(0X510, ctx->r2) = ctx->r4;
    // 0x8027F5D4: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x8027F5D8: sll         $t4, $a3, 16
    ctx->r12 = S32(ctx->r7 << 16);
    // 0x8027F5DC: sra         $a3, $t4, 16
    ctx->r7 = S32(SIGNED(ctx->r12) >> 16);
    // 0x8027F5E0: slti        $at, $a3, 0x24
    ctx->r1 = SIGNED(ctx->r7) < 0X24 ? 1 : 0;
    // 0x8027F5E4: bne         $at, $zero, L_8027F58C
    if (ctx->r1 != 0) {
        // 0x8027F5E8: sll         $t9, $a3, 2
        ctx->r25 = S32(ctx->r7 << 2);
            goto L_8027F58C;
    }
    // 0x8027F5E8: sll         $t9, $a3, 2
    ctx->r25 = S32(ctx->r7 << 2);
    // 0x8027F5EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027F5F0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8027F5F4: jr          $ra
    // 0x8027F5F8: nop

    return;
    // 0x8027F5F8: nop

;}
RECOMP_FUNC void func_8027F5FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027F5FC: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8027F600: lb          $t6, -0x32A1($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X32A1);
    // 0x8027F604: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8027F608: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8027F60C: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8027F610: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8027F614: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8027F618: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8027F61C: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8027F620: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8027F624: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8027F628: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8027F62C: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8027F630: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8027F634: addiu       $t8, $t8, -0x2F80
    ctx->r24 = ADD32(ctx->r24, -0X2F80);
    // 0x8027F638: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x8027F63C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8027F640: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x8027F644: sll         $t9, $v1, 2
    ctx->r25 = S32(ctx->r3 << 2);
L_8027F648:
    // 0x8027F648: addu        $t9, $t9, $v1
    ctx->r25 = ADD32(ctx->r25, ctx->r3);
    // 0x8027F64C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8027F650: addu        $t9, $t9, $v1
    ctx->r25 = ADD32(ctx->r25, ctx->r3);
    // 0x8027F654: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8027F658: subu        $t9, $t9, $v1
    ctx->r25 = SUB32(ctx->r25, ctx->r3);
    // 0x8027F65C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8027F660: addu        $a1, $v0, $t9
    ctx->r5 = ADD32(ctx->r2, ctx->r25);
    // 0x8027F664: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_8027F668:
    // 0x8027F668: multu       $a0, $a2
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8027F66C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8027F670: sll         $t2, $a0, 16
    ctx->r10 = S32(ctx->r4 << 16);
    // 0x8027F674: sra         $a0, $t2, 16
    ctx->r4 = S32(SIGNED(ctx->r10) >> 16);
    // 0x8027F678: slti        $at, $a0, 0x10
    ctx->r1 = SIGNED(ctx->r4) < 0X10 ? 1 : 0;
    // 0x8027F67C: mflo        $t0
    ctx->r8 = lo;
    // 0x8027F680: addu        $t1, $a1, $t0
    ctx->r9 = ADD32(ctx->r5, ctx->r8);
    // 0x8027F684: bne         $at, $zero, L_8027F668
    if (ctx->r1 != 0) {
        // 0x8027F688: sh          $zero, 0x4AE($t1)
        MEM_H(0X4AE, ctx->r9) = 0;
            goto L_8027F668;
    }
    // 0x8027F688: sh          $zero, 0x4AE($t1)
    MEM_H(0X4AE, ctx->r9) = 0;
    // 0x8027F68C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8027F690: sll         $t4, $v1, 16
    ctx->r12 = S32(ctx->r3 << 16);
    // 0x8027F694: sra         $v1, $t4, 16
    ctx->r3 = S32(SIGNED(ctx->r12) >> 16);
    // 0x8027F698: slti        $at, $v1, 0x24
    ctx->r1 = SIGNED(ctx->r3) < 0X24 ? 1 : 0;
    // 0x8027F69C: bne         $at, $zero, L_8027F648
    if (ctx->r1 != 0) {
        // 0x8027F6A0: sll         $t9, $v1, 2
        ctx->r25 = S32(ctx->r3 << 2);
            goto L_8027F648;
    }
    // 0x8027F6A0: sll         $t9, $v1, 2
    ctx->r25 = S32(ctx->r3 << 2);
    // 0x8027F6A4: jr          $ra
    // 0x8027F6A8: nop

    return;
    // 0x8027F6A8: nop

;}
RECOMP_FUNC void func_8027F6AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027F6AC: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8027F6B0: lb          $t6, -0x32A1($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X32A1);
    // 0x8027F6B4: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8027F6B8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8027F6BC: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8027F6C0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8027F6C4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8027F6C8: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8027F6CC: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8027F6D0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8027F6D4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8027F6D8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8027F6DC: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8027F6E0: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8027F6E4: addiu       $t8, $t8, -0x2F80
    ctx->r24 = ADD32(ctx->r24, -0X2F80);
    // 0x8027F6E8: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x8027F6EC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8027F6F0: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    // 0x8027F6F4: sll         $t9, $v1, 2
    ctx->r25 = S32(ctx->r3 << 2);
L_8027F6F8:
    // 0x8027F6F8: addu        $t9, $t9, $v1
    ctx->r25 = ADD32(ctx->r25, ctx->r3);
    // 0x8027F6FC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8027F700: addu        $t9, $t9, $v1
    ctx->r25 = ADD32(ctx->r25, ctx->r3);
    // 0x8027F704: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8027F708: subu        $t9, $t9, $v1
    ctx->r25 = SUB32(ctx->r25, ctx->r3);
    // 0x8027F70C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8027F710: addu        $a1, $v0, $t9
    ctx->r5 = ADD32(ctx->r2, ctx->r25);
    // 0x8027F714: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_8027F718:
    // 0x8027F718: multu       $a0, $a3
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8027F71C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8027F720: sll         $t1, $a0, 16
    ctx->r9 = S32(ctx->r4 << 16);
    // 0x8027F724: sra         $a0, $t1, 16
    ctx->r4 = S32(SIGNED(ctx->r9) >> 16);
    // 0x8027F728: slti        $at, $a0, 0x10
    ctx->r1 = SIGNED(ctx->r4) < 0X10 ? 1 : 0;
    // 0x8027F72C: mflo        $t0
    ctx->r8 = lo;
    // 0x8027F730: addu        $a2, $a1, $t0
    ctx->r6 = ADD32(ctx->r5, ctx->r8);
    // 0x8027F734: sb          $zero, 0x4B0($a2)
    MEM_B(0X4B0, ctx->r6) = 0;
    // 0x8027F738: bne         $at, $zero, L_8027F718
    if (ctx->r1 != 0) {
        // 0x8027F73C: sb          $zero, 0x4B2($a2)
        MEM_B(0X4B2, ctx->r6) = 0;
            goto L_8027F718;
    }
    // 0x8027F73C: sb          $zero, 0x4B2($a2)
    MEM_B(0X4B2, ctx->r6) = 0;
    // 0x8027F740: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8027F744: sll         $t3, $v1, 16
    ctx->r11 = S32(ctx->r3 << 16);
    // 0x8027F748: sra         $v1, $t3, 16
    ctx->r3 = S32(SIGNED(ctx->r11) >> 16);
    // 0x8027F74C: slti        $at, $v1, 0x24
    ctx->r1 = SIGNED(ctx->r3) < 0X24 ? 1 : 0;
    // 0x8027F750: bne         $at, $zero, L_8027F6F8
    if (ctx->r1 != 0) {
        // 0x8027F754: sll         $t9, $v1, 2
        ctx->r25 = S32(ctx->r3 << 2);
            goto L_8027F6F8;
    }
    // 0x8027F754: sll         $t9, $v1, 2
    ctx->r25 = S32(ctx->r3 << 2);
    // 0x8027F758: jr          $ra
    // 0x8027F75C: nop

    return;
    // 0x8027F75C: nop

;}
RECOMP_FUNC void func_8027F760(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027F760: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8027F764: lb          $t6, -0x32A1($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X32A1);
    // 0x8027F768: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8027F76C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8027F770: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8027F774: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8027F778: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8027F77C: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8027F780: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8027F784: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8027F788: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8027F78C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8027F790: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8027F794: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8027F798: addiu       $t8, $t8, -0x2F80
    ctx->r24 = ADD32(ctx->r24, -0X2F80);
    // 0x8027F79C: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x8027F7A0: lb          $t9, 0x5($v0)
    ctx->r25 = MEM_B(ctx->r2, 0X5);
    // 0x8027F7A4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8027F7A8: blez        $t9, L_8027F804
    if (SIGNED(ctx->r25) <= 0) {
        // 0x8027F7AC: sll         $t0, $v1, 3
        ctx->r8 = S32(ctx->r3 << 3);
            goto L_8027F804;
    }
    // 0x8027F7AC: sll         $t0, $v1, 3
    ctx->r8 = S32(ctx->r3 << 3);
L_8027F7B0:
    // 0x8027F7B0: addu        $t0, $t0, $v1
    ctx->r8 = ADD32(ctx->r8, ctx->r3);
    // 0x8027F7B4: sll         $t0, $t0, 5
    ctx->r8 = S32(ctx->r8 << 5);
    // 0x8027F7B8: subu        $t0, $t0, $v1
    ctx->r8 = SUB32(ctx->r8, ctx->r3);
    // 0x8027F7BC: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8027F7C0: addu        $a1, $v0, $t0
    ctx->r5 = ADD32(ctx->r2, ctx->r8);
    // 0x8027F7C4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8027F7C8: addu        $t1, $a1, $a0
    ctx->r9 = ADD32(ctx->r5, ctx->r4);
L_8027F7CC:
    // 0x8027F7CC: sb          $a0, 0x1C($t1)
    MEM_B(0X1C, ctx->r9) = ctx->r4;
    // 0x8027F7D0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8027F7D4: sll         $t2, $a0, 16
    ctx->r10 = S32(ctx->r4 << 16);
    // 0x8027F7D8: sra         $a0, $t2, 16
    ctx->r4 = S32(SIGNED(ctx->r10) >> 16);
    // 0x8027F7DC: slti        $at, $a0, 0x10
    ctx->r1 = SIGNED(ctx->r4) < 0X10 ? 1 : 0;
    // 0x8027F7E0: bne         $at, $zero, L_8027F7CC
    if (ctx->r1 != 0) {
        // 0x8027F7E4: addu        $t1, $a1, $a0
        ctx->r9 = ADD32(ctx->r5, ctx->r4);
            goto L_8027F7CC;
    }
    // 0x8027F7E4: addu        $t1, $a1, $a0
    ctx->r9 = ADD32(ctx->r5, ctx->r4);
    // 0x8027F7E8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8027F7EC: lb          $t6, 0x5($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X5);
    // 0x8027F7F0: sll         $t4, $v1, 16
    ctx->r12 = S32(ctx->r3 << 16);
    // 0x8027F7F4: sra         $v1, $t4, 16
    ctx->r3 = S32(SIGNED(ctx->r12) >> 16);
    // 0x8027F7F8: slt         $at, $v1, $t6
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x8027F7FC: bne         $at, $zero, L_8027F7B0
    if (ctx->r1 != 0) {
        // 0x8027F800: sll         $t0, $v1, 3
        ctx->r8 = S32(ctx->r3 << 3);
            goto L_8027F7B0;
    }
    // 0x8027F800: sll         $t0, $v1, 3
    ctx->r8 = S32(ctx->r3 << 3);
L_8027F804:
    // 0x8027F804: jr          $ra
    // 0x8027F808: nop

    return;
    // 0x8027F808: nop

;}
RECOMP_FUNC void func_8027F80C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027F80C: sll         $t6, $a0, 24
    ctx->r14 = S32(ctx->r4 << 24);
    // 0x8027F810: sra         $t7, $t6, 24
    ctx->r15 = S32(SIGNED(ctx->r14) >> 24);
    // 0x8027F814: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8027F818: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8027F81C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8027F820: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8027F824: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x8027F828: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8027F82C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8027F830: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8027F834: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x8027F838: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x8027F83C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8027F840: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8027F844: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
    // 0x8027F848: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8027F84C: addu        $t0, $v1, $v0
    ctx->r8 = ADD32(ctx->r3, ctx->r2);
L_8027F850:
    // 0x8027F850: sb          $v0, 0x308($t0)
    MEM_B(0X308, ctx->r8) = ctx->r2;
    // 0x8027F854: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8027F858: sll         $t1, $v0, 16
    ctx->r9 = S32(ctx->r2 << 16);
    // 0x8027F85C: sra         $v0, $t1, 16
    ctx->r2 = S32(SIGNED(ctx->r9) >> 16);
    // 0x8027F860: slti        $at, $v0, 0x10
    ctx->r1 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x8027F864: bne         $at, $zero, L_8027F850
    if (ctx->r1 != 0) {
        // 0x8027F868: addu        $t0, $v1, $v0
        ctx->r8 = ADD32(ctx->r3, ctx->r2);
            goto L_8027F850;
    }
    // 0x8027F868: addu        $t0, $v1, $v0
    ctx->r8 = ADD32(ctx->r3, ctx->r2);
    // 0x8027F86C: jr          $ra
    // 0x8027F870: nop

    return;
    // 0x8027F870: nop

;}
RECOMP_FUNC void func_8027F874(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027F874: jr          $ra
    // 0x8027F878: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x8027F878: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void func_8027F87C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027F87C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8027F880: lb          $t6, -0x32A1($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X32A1);
    // 0x8027F884: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8027F888: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8027F88C: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8027F890: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8027F894: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8027F898: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8027F89C: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8027F8A0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8027F8A4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8027F8A8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8027F8AC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8027F8B0: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8027F8B4: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8027F8B8: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8027F8BC: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8027F8C0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8027F8C4: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8027F8C8: addiu       $t8, $t8, -0x2F80
    ctx->r24 = ADD32(ctx->r24, -0X2F80);
    // 0x8027F8CC: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x8027F8D0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8027F8D4: addu        $s2, $t7, $t8
    ctx->r18 = ADD32(ctx->r15, ctx->r24);
    // 0x8027F8D8: addiu       $s1, $s1, -0x5260
    ctx->r17 = ADD32(ctx->r17, -0X5260);
    // 0x8027F8DC: addiu       $s0, $zero, 0x6
    ctx->r16 = ADD32(0, 0X6);
    // 0x8027F8E0: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
L_8027F8E4:
    // 0x8027F8E4: jal         0x8003CC44
    // 0x8027F8E8: andi        $a0, $s3, 0xFF
    ctx->r4 = ctx->r19 & 0XFF;
    func_8003CC44(rdram, ctx);
        goto after_0;
    // 0x8027F8E8: andi        $a0, $s3, 0xFF
    ctx->r4 = ctx->r19 & 0XFF;
    after_0:
    // 0x8027F8EC: sll         $t9, $s3, 2
    ctx->r25 = S32(ctx->r19 << 2);
    // 0x8027F8F0: addu        $t9, $t9, $s3
    ctx->r25 = ADD32(ctx->r25, ctx->r19);
    // 0x8027F8F4: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8027F8F8: addu        $t9, $t9, $s3
    ctx->r25 = ADD32(ctx->r25, ctx->r19);
    // 0x8027F8FC: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x8027F900: addu        $t9, $t9, $s3
    ctx->r25 = ADD32(ctx->r25, ctx->r19);
    // 0x8027F904: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8027F908: addu        $t9, $t9, $s3
    ctx->r25 = ADD32(ctx->r25, ctx->r19);
    // 0x8027F90C: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x8027F910: addiu       $t0, $t0, -0x2CF0
    ctx->r8 = ADD32(ctx->r8, -0X2CF0);
    // 0x8027F914: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8027F918: addu        $a1, $t9, $t0
    ctx->r5 = ADD32(ctx->r25, ctx->r8);
    // 0x8027F91C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_8027F920:
    // 0x8027F920: bltz        $v0, L_8027F96C
    if (SIGNED(ctx->r2) < 0) {
        // 0x8027F924: nop
    
            goto L_8027F96C;
    }
    // 0x8027F924: nop

    // 0x8027F928: multu       $a0, $s0
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8027F92C: sll         $t2, $v0, 3
    ctx->r10 = S32(ctx->r2 << 3);
    // 0x8027F930: addu        $t2, $t2, $v0
    ctx->r10 = ADD32(ctx->r10, ctx->r2);
    // 0x8027F934: sll         $t2, $t2, 5
    ctx->r10 = S32(ctx->r10 << 5);
    // 0x8027F938: subu        $t2, $t2, $v0
    ctx->r10 = SUB32(ctx->r10, ctx->r2);
    // 0x8027F93C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8027F940: addu        $t3, $s2, $t2
    ctx->r11 = ADD32(ctx->r18, ctx->r10);
    // 0x8027F944: mflo        $v1
    ctx->r3 = lo;
    // 0x8027F948: addu        $t4, $t3, $v1
    ctx->r12 = ADD32(ctx->r11, ctx->r3);
    // 0x8027F94C: lwl         $at, 0x68($t4)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r12, 0X68);
    // 0x8027F950: lwr         $at, 0x6B($t4)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r12, 0X6B);
    // 0x8027F954: addu        $t1, $a1, $v1
    ctx->r9 = ADD32(ctx->r5, ctx->r3);
    // 0x8027F958: swl         $at, 0x418($t1)
    do_swl(rdram, 0X418, ctx->r9, ctx->r1);
    // 0x8027F95C: swr         $at, 0x41B($t1)
    do_swr(rdram, 0X41B, ctx->r9, ctx->r1);
    // 0x8027F960: lhu         $at, 0x6C($t4)
    ctx->r1 = MEM_HU(ctx->r12, 0X6C);
    // 0x8027F964: b           L_8027F998
    // 0x8027F968: sh          $at, 0x41C($t1)
    MEM_H(0X41C, ctx->r9) = ctx->r1;
        goto L_8027F998;
    // 0x8027F968: sh          $at, 0x41C($t1)
    MEM_H(0X41C, ctx->r9) = ctx->r1;
L_8027F96C:
    // 0x8027F96C: multu       $a0, $s0
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8027F970: mflo        $v1
    ctx->r3 = lo;
    // 0x8027F974: addu        $t8, $s1, $v1
    ctx->r24 = ADD32(ctx->r17, ctx->r3);
    // 0x8027F978: lwl         $at, 0x0($t8)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r24, 0X0);
    // 0x8027F97C: lwr         $at, 0x3($t8)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r24, 0X3);
    // 0x8027F980: addu        $t7, $a1, $v1
    ctx->r15 = ADD32(ctx->r5, ctx->r3);
    // 0x8027F984: swl         $at, 0x418($t7)
    do_swl(rdram, 0X418, ctx->r15, ctx->r1);
    // 0x8027F988: swr         $at, 0x41B($t7)
    do_swr(rdram, 0X41B, ctx->r15, ctx->r1);
    // 0x8027F98C: lhu         $at, 0x4($t8)
    ctx->r1 = MEM_HU(ctx->r24, 0X4);
    // 0x8027F990: nop

    // 0x8027F994: sh          $at, 0x41C($t7)
    MEM_H(0X41C, ctx->r15) = ctx->r1;
L_8027F998:
    // 0x8027F998: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8027F99C: sll         $t2, $a0, 16
    ctx->r10 = S32(ctx->r4 << 16);
    // 0x8027F9A0: sra         $a0, $t2, 16
    ctx->r4 = S32(SIGNED(ctx->r10) >> 16);
    // 0x8027F9A4: slti        $at, $a0, 0xB0
    ctx->r1 = SIGNED(ctx->r4) < 0XB0 ? 1 : 0;
    // 0x8027F9A8: bne         $at, $zero, L_8027F920
    if (ctx->r1 != 0) {
        // 0x8027F9AC: nop
    
            goto L_8027F920;
    }
    // 0x8027F9AC: nop

    // 0x8027F9B0: jal         0x8003CC44
    // 0x8027F9B4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8003CC44(rdram, ctx);
        goto after_1;
    // 0x8027F9B4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x8027F9B8: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x8027F9BC: sll         $t5, $s3, 16
    ctx->r13 = S32(ctx->r19 << 16);
    // 0x8027F9C0: sra         $s3, $t5, 16
    ctx->r19 = S32(SIGNED(ctx->r13) >> 16);
    // 0x8027F9C4: slti        $at, $s3, 0x2
    ctx->r1 = SIGNED(ctx->r19) < 0X2 ? 1 : 0;
    // 0x8027F9C8: bne         $at, $zero, L_8027F8E4
    if (ctx->r1 != 0) {
        // 0x8027F9CC: nop
    
            goto L_8027F8E4;
    }
    // 0x8027F9CC: nop

    // 0x8027F9D0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8027F9D4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8027F9D8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8027F9DC: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8027F9E0: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8027F9E4: jr          $ra
    // 0x8027F9E8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8027F9E8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8027F9EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027F9EC: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8027F9F0: lb          $t6, -0x32A1($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X32A1);
    // 0x8027F9F4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8027F9F8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8027F9FC: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8027FA00: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8027FA04: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8027FA08: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8027FA0C: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8027FA10: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8027FA14: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8027FA18: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8027FA1C: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8027FA20: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8027FA24: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8027FA28: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8027FA2C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8027FA30: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8027FA34: addiu       $t8, $t8, -0x2F80
    ctx->r24 = ADD32(ctx->r24, -0X2F80);
    // 0x8027FA38: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8027FA3C: addu        $s2, $t7, $t8
    ctx->r18 = ADD32(ctx->r15, ctx->r24);
    // 0x8027FA40: addiu       $s0, $zero, 0x6
    ctx->r16 = ADD32(0, 0X6);
    // 0x8027FA44: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_8027FA48:
    // 0x8027FA48: jal         0x8003CC44
    // 0x8027FA4C: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    func_8003CC44(rdram, ctx);
        goto after_0;
    // 0x8027FA4C: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    after_0:
    // 0x8027FA50: bltz        $v0, L_8027FAE4
    if (SIGNED(ctx->r2) < 0) {
        // 0x8027FA54: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_8027FAE4;
    }
    // 0x8027FA54: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8027FA58: sll         $t9, $s1, 2
    ctx->r25 = S32(ctx->r17 << 2);
    // 0x8027FA5C: addu        $t9, $t9, $s1
    ctx->r25 = ADD32(ctx->r25, ctx->r17);
    // 0x8027FA60: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8027FA64: addu        $t9, $t9, $s1
    ctx->r25 = ADD32(ctx->r25, ctx->r17);
    // 0x8027FA68: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x8027FA6C: sll         $t1, $v0, 3
    ctx->r9 = S32(ctx->r2 << 3);
    // 0x8027FA70: addu        $t1, $t1, $v0
    ctx->r9 = ADD32(ctx->r9, ctx->r2);
    // 0x8027FA74: addu        $t9, $t9, $s1
    ctx->r25 = ADD32(ctx->r25, ctx->r17);
    // 0x8027FA78: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8027FA7C: sll         $t1, $t1, 5
    ctx->r9 = S32(ctx->r9 << 5);
    // 0x8027FA80: subu        $t1, $t1, $v0
    ctx->r9 = SUB32(ctx->r9, ctx->r2);
    // 0x8027FA84: addu        $t9, $t9, $s1
    ctx->r25 = ADD32(ctx->r25, ctx->r17);
    // 0x8027FA88: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x8027FA8C: addiu       $t0, $t0, -0x2CF0
    ctx->r8 = ADD32(ctx->r8, -0X2CF0);
    // 0x8027FA90: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8027FA94: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8027FA98: addu        $a2, $s2, $t1
    ctx->r6 = ADD32(ctx->r18, ctx->r9);
    // 0x8027FA9C: addu        $a1, $t9, $t0
    ctx->r5 = ADD32(ctx->r25, ctx->r8);
L_8027FAA0:
    // 0x8027FAA0: multu       $a0, $s0
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8027FAA4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8027FAA8: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x8027FAAC: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8027FAB0: mflo        $v1
    ctx->r3 = lo;
    // 0x8027FAB4: addu        $t3, $a1, $v1
    ctx->r11 = ADD32(ctx->r5, ctx->r3);
    // 0x8027FAB8: lwl         $at, 0x418($t3)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r11, 0X418);
    // 0x8027FABC: lwr         $at, 0x41B($t3)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r11, 0X41B);
    // 0x8027FAC0: addu        $t2, $a2, $v1
    ctx->r10 = ADD32(ctx->r6, ctx->r3);
    // 0x8027FAC4: swl         $at, 0x68($t2)
    do_swl(rdram, 0X68, ctx->r10, ctx->r1);
    // 0x8027FAC8: swr         $at, 0x6B($t2)
    do_swr(rdram, 0X6B, ctx->r10, ctx->r1);
    // 0x8027FACC: lhu         $at, 0x41C($t3)
    ctx->r1 = MEM_HU(ctx->r11, 0X41C);
    // 0x8027FAD0: nop

    // 0x8027FAD4: sh          $at, 0x6C($t2)
    MEM_H(0X6C, ctx->r10) = ctx->r1;
    // 0x8027FAD8: slti        $at, $a0, 0xB0
    ctx->r1 = SIGNED(ctx->r4) < 0XB0 ? 1 : 0;
    // 0x8027FADC: bne         $at, $zero, L_8027FAA0
    if (ctx->r1 != 0) {
        // 0x8027FAE0: nop
    
            goto L_8027FAA0;
    }
    // 0x8027FAE0: nop

L_8027FAE4:
    // 0x8027FAE4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8027FAE8: sll         $t8, $s1, 16
    ctx->r24 = S32(ctx->r17 << 16);
    // 0x8027FAEC: sra         $s1, $t8, 16
    ctx->r17 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8027FAF0: slti        $at, $s1, 0x2
    ctx->r1 = SIGNED(ctx->r17) < 0X2 ? 1 : 0;
    // 0x8027FAF4: bne         $at, $zero, L_8027FA48
    if (ctx->r1 != 0) {
        // 0x8027FAF8: nop
    
            goto L_8027FA48;
    }
    // 0x8027FAF8: nop

    // 0x8027FAFC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8027FB00: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8027FB04: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8027FB08: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8027FB0C: jr          $ra
    // 0x8027FB10: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8027FB10: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8027FB14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027FB14: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8027FB18: lb          $t6, -0x32A1($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X32A1);
    // 0x8027FB1C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8027FB20: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8027FB24: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8027FB28: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8027FB2C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8027FB30: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8027FB34: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8027FB38: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8027FB3C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8027FB40: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8027FB44: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8027FB48: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8027FB4C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8027FB50: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8027FB54: addiu       $t8, $t8, -0x2F80
    ctx->r24 = ADD32(ctx->r24, -0X2F80);
    // 0x8027FB58: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8027FB5C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8027FB60: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8027FB64: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8027FB68: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8027FB6C: addu        $s3, $t7, $t8
    ctx->r19 = ADD32(ctx->r15, ctx->r24);
    // 0x8027FB70: lb          $t9, 0x5($s3)
    ctx->r25 = MEM_B(ctx->r19, 0X5);
    // 0x8027FB74: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8027FB78: blez        $t9, L_8027FC38
    if (SIGNED(ctx->r25) <= 0) {
        // 0x8027FB7C: addiu       $s4, $zero, 0x47C
        ctx->r20 = ADD32(0, 0X47C);
            goto L_8027FC38;
    }
    // 0x8027FB7C: addiu       $s4, $zero, 0x47C
    ctx->r20 = ADD32(0, 0X47C);
    // 0x8027FB80: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x8027FB84: addiu       $s0, $s0, -0x2CF0
    ctx->r16 = ADD32(ctx->r16, -0X2CF0);
    // 0x8027FB88: addiu       $s1, $zero, 0x6
    ctx->r17 = ADD32(0, 0X6);
    // 0x8027FB8C: sll         $a0, $s2, 16
    ctx->r4 = S32(ctx->r18 << 16);
L_8027FB90:
    // 0x8027FB90: sra         $t0, $a0, 16
    ctx->r8 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8027FB94: jal         0x80049A90
    // 0x8027FB98: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    func_80049A90(rdram, ctx);
        goto after_0;
    // 0x8027FB98: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    after_0:
    // 0x8027FB9C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8027FBA0: jal         0x8005CC40
    // 0x8027FBA4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8005CC40(rdram, ctx);
        goto after_1;
    // 0x8027FBA4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x8027FBA8: multu       $s2, $s4
    result = U64(U32(ctx->r18)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8027FBAC: sll         $t4, $s2, 3
    ctx->r12 = S32(ctx->r18 << 3);
    // 0x8027FBB0: addu        $t4, $t4, $s2
    ctx->r12 = ADD32(ctx->r12, ctx->r18);
    // 0x8027FBB4: sll         $t4, $t4, 5
    ctx->r12 = S32(ctx->r12 << 5);
    // 0x8027FBB8: lbu         $t1, 0x1($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X1);
    // 0x8027FBBC: subu        $t4, $t4, $s2
    ctx->r12 = SUB32(ctx->r12, ctx->r18);
    // 0x8027FBC0: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8027FBC4: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8027FBC8: addu        $a0, $s3, $t4
    ctx->r4 = ADD32(ctx->r19, ctx->r12);
    // 0x8027FBCC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8027FBD0: mflo        $t2
    ctx->r10 = lo;
    // 0x8027FBD4: addu        $t3, $s3, $t2
    ctx->r11 = ADD32(ctx->r19, ctx->r10);
    // 0x8027FBD8: sb          $t1, 0xD($t3)
    MEM_B(0XD, ctx->r11) = ctx->r9;
L_8027FBDC:
    // 0x8027FBDC: multu       $v1, $s1
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8027FBE0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8027FBE4: sll         $t9, $v1, 16
    ctx->r25 = S32(ctx->r3 << 16);
    // 0x8027FBE8: sra         $v1, $t9, 16
    ctx->r3 = S32(SIGNED(ctx->r25) >> 16);
    // 0x8027FBEC: mflo        $v0
    ctx->r2 = lo;
    // 0x8027FBF0: addu        $t6, $s0, $v0
    ctx->r14 = ADD32(ctx->r16, ctx->r2);
    // 0x8027FBF4: lwl         $at, 0x418($t6)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r14, 0X418);
    // 0x8027FBF8: lwr         $at, 0x41B($t6)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r14, 0X41B);
    // 0x8027FBFC: addu        $t5, $a0, $v0
    ctx->r13 = ADD32(ctx->r4, ctx->r2);
    // 0x8027FC00: swl         $at, 0x68($t5)
    do_swl(rdram, 0X68, ctx->r13, ctx->r1);
    // 0x8027FC04: swr         $at, 0x6B($t5)
    do_swr(rdram, 0X6B, ctx->r13, ctx->r1);
    // 0x8027FC08: lhu         $at, 0x41C($t6)
    ctx->r1 = MEM_HU(ctx->r14, 0X41C);
    // 0x8027FC0C: nop

    // 0x8027FC10: sh          $at, 0x6C($t5)
    MEM_H(0X6C, ctx->r13) = ctx->r1;
    // 0x8027FC14: slti        $at, $v1, 0xB0
    ctx->r1 = SIGNED(ctx->r3) < 0XB0 ? 1 : 0;
    // 0x8027FC18: bne         $at, $zero, L_8027FBDC
    if (ctx->r1 != 0) {
        // 0x8027FC1C: nop
    
            goto L_8027FBDC;
    }
    // 0x8027FC1C: nop

    // 0x8027FC20: lb          $t3, 0x5($s3)
    ctx->r11 = MEM_B(ctx->r19, 0X5);
    // 0x8027FC24: sll         $t2, $s2, 16
    ctx->r10 = S32(ctx->r18 << 16);
    // 0x8027FC28: sra         $s2, $t2, 16
    ctx->r18 = S32(SIGNED(ctx->r10) >> 16);
    // 0x8027FC2C: slt         $at, $s2, $t3
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x8027FC30: bne         $at, $zero, L_8027FB90
    if (ctx->r1 != 0) {
        // 0x8027FC34: sll         $a0, $s2, 16
        ctx->r4 = S32(ctx->r18 << 16);
            goto L_8027FB90;
    }
    // 0x8027FC34: sll         $a0, $s2, 16
    ctx->r4 = S32(ctx->r18 << 16);
L_8027FC38:
    // 0x8027FC38: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8027FC3C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8027FC40: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8027FC44: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8027FC48: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8027FC4C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8027FC50: jr          $ra
    // 0x8027FC54: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8027FC54: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8027FC58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027FC58: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8027FC5C: lb          $t6, -0x32A1($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X32A1);
    // 0x8027FC60: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8027FC64: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8027FC68: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8027FC6C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8027FC70: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8027FC74: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8027FC78: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8027FC7C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8027FC80: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8027FC84: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8027FC88: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8027FC8C: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8027FC90: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8027FC94: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8027FC98: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8027FC9C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8027FCA0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8027FCA4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8027FCA8: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8027FCAC: addiu       $t8, $t8, -0x2F80
    ctx->r24 = ADD32(ctx->r24, -0X2F80);
    // 0x8027FCB0: lui         $s4, 0x8012
    ctx->r20 = S32(0X8012 << 16);
    // 0x8027FCB4: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8027FCB8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8027FCBC: addu        $s3, $t7, $t8
    ctx->r19 = ADD32(ctx->r15, ctx->r24);
    // 0x8027FCC0: addiu       $s4, $s4, -0x2CF0
    ctx->r20 = ADD32(ctx->r20, -0X2CF0);
    // 0x8027FCC4: addiu       $s0, $zero, 0x6
    ctx->r16 = ADD32(0, 0X6);
    // 0x8027FCC8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8027FCCC: addiu       $s5, $zero, 0xA94
    ctx->r21 = ADD32(0, 0XA94);
    // 0x8027FCD0: addiu       $s6, $zero, 0x47C
    ctx->r22 = ADD32(0, 0X47C);
    // 0x8027FCD4: or          $s2, $s1, $zero
    ctx->r18 = ctx->r17 | 0;
L_8027FCD8:
    // 0x8027FCD8: jal         0x8003CC44
    // 0x8027FCDC: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    func_8003CC44(rdram, ctx);
        goto after_0;
    // 0x8027FCDC: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    after_0:
    // 0x8027FCE0: bltz        $v0, L_8027FD98
    if (SIGNED(ctx->r2) < 0) {
        // 0x8027FCE4: nop
    
            goto L_8027FD98;
    }
    // 0x8027FCE4: nop

    // 0x8027FCE8: multu       $v0, $s6
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r22)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8027FCEC: sll         $t4, $s1, 2
    ctx->r12 = S32(ctx->r17 << 2);
    // 0x8027FCF0: addu        $t4, $t4, $s1
    ctx->r12 = ADD32(ctx->r12, ctx->r17);
    // 0x8027FCF4: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8027FCF8: addu        $t4, $t4, $s1
    ctx->r12 = ADD32(ctx->r12, ctx->r17);
    // 0x8027FCFC: sll         $t4, $t4, 3
    ctx->r12 = S32(ctx->r12 << 3);
    // 0x8027FD00: sll         $t5, $v0, 3
    ctx->r13 = S32(ctx->r2 << 3);
    // 0x8027FD04: addu        $t5, $t5, $v0
    ctx->r13 = ADD32(ctx->r13, ctx->r2);
    // 0x8027FD08: addu        $t4, $t4, $s1
    ctx->r12 = ADD32(ctx->r12, ctx->r17);
    // 0x8027FD0C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8027FD10: sll         $t5, $t5, 5
    ctx->r13 = S32(ctx->r13 << 5);
    // 0x8027FD14: subu        $t5, $t5, $v0
    ctx->r13 = SUB32(ctx->r13, ctx->r2);
    // 0x8027FD18: mflo        $t9
    ctx->r25 = lo;
    // 0x8027FD1C: addu        $t0, $s3, $t9
    ctx->r8 = ADD32(ctx->r19, ctx->r25);
    // 0x8027FD20: lbu         $t1, 0xD($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0XD);
    // 0x8027FD24: multu       $s1, $s5
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8027FD28: addu        $t4, $t4, $s1
    ctx->r12 = ADD32(ctx->r12, ctx->r17);
    // 0x8027FD2C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8027FD30: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8027FD34: addu        $a2, $s3, $t5
    ctx->r6 = ADD32(ctx->r19, ctx->r13);
    // 0x8027FD38: addu        $a1, $s4, $t4
    ctx->r5 = ADD32(ctx->r20, ctx->r12);
    // 0x8027FD3C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8027FD40: mflo        $t2
    ctx->r10 = lo;
    // 0x8027FD44: addu        $t3, $s4, $t2
    ctx->r11 = ADD32(ctx->r20, ctx->r10);
    // 0x8027FD48: sb          $t1, 0x1($t3)
    MEM_B(0X1, ctx->r11) = ctx->r9;
L_8027FD4C:
    // 0x8027FD4C: multu       $a0, $s0
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8027FD50: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8027FD54: sll         $t0, $a0, 16
    ctx->r8 = S32(ctx->r4 << 16);
    // 0x8027FD58: sra         $a0, $t0, 16
    ctx->r4 = S32(SIGNED(ctx->r8) >> 16);
    // 0x8027FD5C: mflo        $v1
    ctx->r3 = lo;
    // 0x8027FD60: addu        $t7, $a2, $v1
    ctx->r15 = ADD32(ctx->r6, ctx->r3);
    // 0x8027FD64: lwl         $at, 0x68($t7)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r15, 0X68);
    // 0x8027FD68: lwr         $at, 0x6B($t7)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r15, 0X6B);
    // 0x8027FD6C: addu        $t6, $a1, $v1
    ctx->r14 = ADD32(ctx->r5, ctx->r3);
    // 0x8027FD70: swl         $at, 0x418($t6)
    do_swl(rdram, 0X418, ctx->r14, ctx->r1);
    // 0x8027FD74: swr         $at, 0x41B($t6)
    do_swr(rdram, 0X41B, ctx->r14, ctx->r1);
    // 0x8027FD78: lhu         $at, 0x6C($t7)
    ctx->r1 = MEM_HU(ctx->r15, 0X6C);
    // 0x8027FD7C: nop

    // 0x8027FD80: sh          $at, 0x41C($t6)
    MEM_H(0X41C, ctx->r14) = ctx->r1;
    // 0x8027FD84: slti        $at, $a0, 0xB0
    ctx->r1 = SIGNED(ctx->r4) < 0XB0 ? 1 : 0;
    // 0x8027FD88: bne         $at, $zero, L_8027FD4C
    if (ctx->r1 != 0) {
        // 0x8027FD8C: nop
    
            goto L_8027FD4C;
    }
    // 0x8027FD8C: nop

    // 0x8027FD90: b           L_8027FDA4
    // 0x8027FD94: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
        goto L_8027FDA4;
    // 0x8027FD94: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_8027FD98:
    // 0x8027FD98: jal         0x8005CC40
    // 0x8027FD9C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_8005CC40(rdram, ctx);
        goto after_1;
    // 0x8027FD9C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_1:
    // 0x8027FDA0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_8027FDA4:
    // 0x8027FDA4: sll         $t1, $s1, 16
    ctx->r9 = S32(ctx->r17 << 16);
    // 0x8027FDA8: sra         $s1, $t1, 16
    ctx->r17 = S32(SIGNED(ctx->r9) >> 16);
    // 0x8027FDAC: slti        $at, $s1, 0x2
    ctx->r1 = SIGNED(ctx->r17) < 0X2 ? 1 : 0;
    // 0x8027FDB0: bne         $at, $zero, L_8027FCD8
    if (ctx->r1 != 0) {
        // 0x8027FDB4: or          $s2, $s1, $zero
        ctx->r18 = ctx->r17 | 0;
            goto L_8027FCD8;
    }
    // 0x8027FDB4: or          $s2, $s1, $zero
    ctx->r18 = ctx->r17 | 0;
    // 0x8027FDB8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8027FDBC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8027FDC0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8027FDC4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8027FDC8: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8027FDCC: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8027FDD0: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8027FDD4: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8027FDD8: jr          $ra
    // 0x8027FDDC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8027FDDC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8027FDE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027FDE0: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8027FDE4: lb          $t6, -0x32A1($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X32A1);
    // 0x8027FDE8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8027FDEC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8027FDF0: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8027FDF4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8027FDF8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8027FDFC: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8027FE00: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8027FE04: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8027FE08: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8027FE0C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8027FE10: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x8027FE14: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8027FE18: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8027FE1C: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x8027FE20: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8027FE24: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8027FE28: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8027FE2C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8027FE30: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8027FE34: addiu       $t8, $t8, -0x2F80
    ctx->r24 = ADD32(ctx->r24, -0X2F80);
    // 0x8027FE38: lui         $s4, 0x8012
    ctx->r20 = S32(0X8012 << 16);
    // 0x8027FE3C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8027FE40: addu        $s2, $t7, $t8
    ctx->r18 = ADD32(ctx->r15, ctx->r24);
    // 0x8027FE44: addiu       $s4, $s4, -0x2CF0
    ctx->r20 = ADD32(ctx->r20, -0X2CF0);
    // 0x8027FE48: addiu       $s0, $zero, 0x6
    ctx->r16 = ADD32(0, 0X6);
    // 0x8027FE4C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8027FE50: addiu       $s3, $zero, 0x47C
    ctx->r19 = ADD32(0, 0X47C);
    // 0x8027FE54: addiu       $s5, $zero, 0xA94
    ctx->r21 = ADD32(0, 0XA94);
L_8027FE58:
    // 0x8027FE58: jal         0x8003CC44
    // 0x8027FE5C: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    func_8003CC44(rdram, ctx);
        goto after_0;
    // 0x8027FE5C: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    after_0:
    // 0x8027FE60: bltz        $v0, L_8027FF10
    if (SIGNED(ctx->r2) < 0) {
        // 0x8027FE64: nop
    
            goto L_8027FF10;
    }
    // 0x8027FE64: nop

    // 0x8027FE68: multu       $s1, $s5
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8027FE6C: sll         $t4, $s1, 2
    ctx->r12 = S32(ctx->r17 << 2);
    // 0x8027FE70: addu        $t4, $t4, $s1
    ctx->r12 = ADD32(ctx->r12, ctx->r17);
    // 0x8027FE74: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8027FE78: addu        $t4, $t4, $s1
    ctx->r12 = ADD32(ctx->r12, ctx->r17);
    // 0x8027FE7C: sll         $t4, $t4, 3
    ctx->r12 = S32(ctx->r12 << 3);
    // 0x8027FE80: sll         $t5, $v0, 3
    ctx->r13 = S32(ctx->r2 << 3);
    // 0x8027FE84: addu        $t5, $t5, $v0
    ctx->r13 = ADD32(ctx->r13, ctx->r2);
    // 0x8027FE88: addu        $t4, $t4, $s1
    ctx->r12 = ADD32(ctx->r12, ctx->r17);
    // 0x8027FE8C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8027FE90: sll         $t5, $t5, 5
    ctx->r13 = S32(ctx->r13 << 5);
    // 0x8027FE94: subu        $t5, $t5, $v0
    ctx->r13 = SUB32(ctx->r13, ctx->r2);
    // 0x8027FE98: mflo        $t9
    ctx->r25 = lo;
    // 0x8027FE9C: addu        $t0, $s4, $t9
    ctx->r8 = ADD32(ctx->r20, ctx->r25);
    // 0x8027FEA0: lbu         $t1, 0x1($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X1);
    // 0x8027FEA4: multu       $v0, $s3
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8027FEA8: addu        $t4, $t4, $s1
    ctx->r12 = ADD32(ctx->r12, ctx->r17);
    // 0x8027FEAC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8027FEB0: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8027FEB4: addu        $a2, $s2, $t5
    ctx->r6 = ADD32(ctx->r18, ctx->r13);
    // 0x8027FEB8: addu        $a1, $s4, $t4
    ctx->r5 = ADD32(ctx->r20, ctx->r12);
    // 0x8027FEBC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8027FEC0: mflo        $t2
    ctx->r10 = lo;
    // 0x8027FEC4: addu        $t3, $s2, $t2
    ctx->r11 = ADD32(ctx->r18, ctx->r10);
    // 0x8027FEC8: sb          $t1, 0xD($t3)
    MEM_B(0XD, ctx->r11) = ctx->r9;
L_8027FECC:
    // 0x8027FECC: multu       $a0, $s0
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8027FED0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8027FED4: sll         $t0, $a0, 16
    ctx->r8 = S32(ctx->r4 << 16);
    // 0x8027FED8: sra         $a0, $t0, 16
    ctx->r4 = S32(SIGNED(ctx->r8) >> 16);
    // 0x8027FEDC: mflo        $v1
    ctx->r3 = lo;
    // 0x8027FEE0: addu        $t7, $a1, $v1
    ctx->r15 = ADD32(ctx->r5, ctx->r3);
    // 0x8027FEE4: lwl         $at, 0x418($t7)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r15, 0X418);
    // 0x8027FEE8: lwr         $at, 0x41B($t7)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r15, 0X41B);
    // 0x8027FEEC: addu        $t6, $a2, $v1
    ctx->r14 = ADD32(ctx->r6, ctx->r3);
    // 0x8027FEF0: swl         $at, 0x68($t6)
    do_swl(rdram, 0X68, ctx->r14, ctx->r1);
    // 0x8027FEF4: swr         $at, 0x6B($t6)
    do_swr(rdram, 0X6B, ctx->r14, ctx->r1);
    // 0x8027FEF8: lhu         $at, 0x41C($t7)
    ctx->r1 = MEM_HU(ctx->r15, 0X41C);
    // 0x8027FEFC: nop

    // 0x8027FF00: sh          $at, 0x6C($t6)
    MEM_H(0X6C, ctx->r14) = ctx->r1;
    // 0x8027FF04: slti        $at, $a0, 0xB0
    ctx->r1 = SIGNED(ctx->r4) < 0XB0 ? 1 : 0;
    // 0x8027FF08: bne         $at, $zero, L_8027FECC
    if (ctx->r1 != 0) {
        // 0x8027FF0C: nop
    
            goto L_8027FECC;
    }
    // 0x8027FF0C: nop

L_8027FF10:
    // 0x8027FF10: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8027FF14: sll         $t1, $s1, 16
    ctx->r9 = S32(ctx->r17 << 16);
    // 0x8027FF18: sra         $s1, $t1, 16
    ctx->r17 = S32(SIGNED(ctx->r9) >> 16);
    // 0x8027FF1C: slti        $at, $s1, 0x2
    ctx->r1 = SIGNED(ctx->r17) < 0X2 ? 1 : 0;
    // 0x8027FF20: bne         $at, $zero, L_8027FE58
    if (ctx->r1 != 0) {
        // 0x8027FF24: nop
    
            goto L_8027FE58;
    }
    // 0x8027FF24: nop

    // 0x8027FF28: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8027FF2C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8027FF30: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8027FF34: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8027FF38: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8027FF3C: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x8027FF40: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x8027FF44: jr          $ra
    // 0x8027FF48: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8027FF48: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8027FF4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027FF4C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8027FF50: lb          $t6, -0x32A1($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X32A1);
    // 0x8027FF54: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8027FF58: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8027FF5C: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8027FF60: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8027FF64: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8027FF68: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8027FF6C: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8027FF70: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8027FF74: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8027FF78: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8027FF7C: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8027FF80: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8027FF84: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8027FF88: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8027FF8C: addiu       $t8, $t8, -0x2F80
    ctx->r24 = ADD32(ctx->r24, -0X2F80);
    // 0x8027FF90: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8027FF94: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8027FF98: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8027FF9C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8027FFA0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8027FFA4: addu        $s3, $t7, $t8
    ctx->r19 = ADD32(ctx->r15, ctx->r24);
    // 0x8027FFA8: lb          $t9, 0x5($s3)
    ctx->r25 = MEM_B(ctx->r19, 0X5);
    // 0x8027FFAC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8027FFB0: blez        $t9, L_80280024
    if (SIGNED(ctx->r25) <= 0) {
        // 0x8027FFB4: addiu       $s4, $zero, 0x47C
        ctx->r20 = ADD32(0, 0X47C);
            goto L_80280024;
    }
    // 0x8027FFB4: addiu       $s4, $zero, 0x47C
    ctx->r20 = ADD32(0, 0X47C);
    // 0x8027FFB8: lui         $s2, 0x8012
    ctx->r18 = S32(0X8012 << 16);
    // 0x8027FFBC: addiu       $s2, $s2, -0x2CF0
    ctx->r18 = ADD32(ctx->r18, -0X2CF0);
L_8027FFC0:
    // 0x8027FFC0: multu       $s0, $s4
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8027FFC4: sll         $a0, $s0, 16
    ctx->r4 = S32(ctx->r16 << 16);
    // 0x8027FFC8: sra         $t1, $a0, 16
    ctx->r9 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8027FFCC: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x8027FFD0: mflo        $t0
    ctx->r8 = lo;
    // 0x8027FFD4: addu        $s1, $s3, $t0
    ctx->r17 = ADD32(ctx->r19, ctx->r8);
    // 0x8027FFD8: jal         0x80049A90
    // 0x8027FFDC: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    func_80049A90(rdram, ctx);
        goto after_0;
    // 0x8027FFDC: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    after_0:
    // 0x8027FFE0: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x8027FFE4: jal         0x8005B4C0
    // 0x8027FFE8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8005B4C0(rdram, ctx);
        goto after_1;
    // 0x8027FFE8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x8027FFEC: lbu         $t2, 0x8A9($s2)
    ctx->r10 = MEM_BU(ctx->r18, 0X8A9);
    // 0x8027FFF0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8027FFF4: sb          $t2, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r10;
    // 0x8027FFF8: lbu         $t3, 0x8AA($s2)
    ctx->r11 = MEM_BU(ctx->r18, 0X8AA);
    // 0x8027FFFC: sll         $t5, $s0, 16
    ctx->r13 = S32(ctx->r16 << 16);
    // 0x80280000: sb          $t3, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r11;
    // 0x80280004: lbu         $t4, 0x8AB($s2)
    ctx->r12 = MEM_BU(ctx->r18, 0X8AB);
    // 0x80280008: sra         $s0, $t5, 16
    ctx->r16 = S32(SIGNED(ctx->r13) >> 16);
    // 0x8028000C: sb          $t4, 0x4($s1)
    MEM_B(0X4, ctx->r17) = ctx->r12;
    // 0x80280010: lb          $t7, 0x5($s3)
    ctx->r15 = MEM_B(ctx->r19, 0X5);
    // 0x80280014: nop

    // 0x80280018: slt         $at, $s0, $t7
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x8028001C: bne         $at, $zero, L_8027FFC0
    if (ctx->r1 != 0) {
        // 0x80280020: nop
    
            goto L_8027FFC0;
    }
    // 0x80280020: nop

L_80280024:
    // 0x80280024: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80280028: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8028002C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80280030: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80280034: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80280038: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8028003C: jr          $ra
    // 0x80280040: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80280040: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80280044(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80280044: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80280048: lb          $t6, -0x32A1($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X32A1);
    // 0x8028004C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80280050: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80280054: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80280058: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8028005C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80280060: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80280064: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80280068: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8028006C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80280070: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80280074: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80280078: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8028007C: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80280080: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x80280084: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x80280088: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8028008C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80280090: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80280094: addiu       $t8, $t8, -0x2F80
    ctx->r24 = ADD32(ctx->r24, -0X2F80);
    // 0x80280098: lui         $s3, 0x8012
    ctx->r19 = S32(0X8012 << 16);
    // 0x8028009C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802800A0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x802800A4: addu        $s2, $t7, $t8
    ctx->r18 = ADD32(ctx->r15, ctx->r24);
    // 0x802800A8: addiu       $s3, $s3, -0x2CF0
    ctx->r19 = ADD32(ctx->r19, -0X2CF0);
    // 0x802800AC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x802800B0: addiu       $s4, $zero, 0xA94
    ctx->r20 = ADD32(0, 0XA94);
    // 0x802800B4: addiu       $s5, $zero, 0x47C
    ctx->r21 = ADD32(0, 0X47C);
    // 0x802800B8: or          $s1, $s0, $zero
    ctx->r17 = ctx->r16 | 0;
L_802800BC:
    // 0x802800BC: jal         0x8003CC44
    // 0x802800C0: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_8003CC44(rdram, ctx);
        goto after_0;
    // 0x802800C0: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_0:
    // 0x802800C4: bltz        $v0, L_8028010C
    if (SIGNED(ctx->r2) < 0) {
        // 0x802800C8: nop
    
            goto L_8028010C;
    }
    // 0x802800C8: nop

    // 0x802800CC: multu       $s0, $s4
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802800D0: mflo        $t9
    ctx->r25 = lo;
    // 0x802800D4: addu        $v1, $s3, $t9
    ctx->r3 = ADD32(ctx->r19, ctx->r25);
    // 0x802800D8: nop

    // 0x802800DC: multu       $v0, $s5
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802800E0: mflo        $t0
    ctx->r8 = lo;
    // 0x802800E4: addu        $a0, $s2, $t0
    ctx->r4 = ADD32(ctx->r18, ctx->r8);
    // 0x802800E8: lbu         $t1, 0xE($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0XE);
    // 0x802800EC: nop

    // 0x802800F0: sb          $t1, 0x8A9($v1)
    MEM_B(0X8A9, ctx->r3) = ctx->r9;
    // 0x802800F4: lbu         $t2, 0xF($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0XF);
    // 0x802800F8: nop

    // 0x802800FC: sb          $t2, 0x8AA($v1)
    MEM_B(0X8AA, ctx->r3) = ctx->r10;
    // 0x80280100: lbu         $t3, 0x10($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0X10);
    // 0x80280104: b           L_80280114
    // 0x80280108: sb          $t3, 0x8AB($v1)
    MEM_B(0X8AB, ctx->r3) = ctx->r11;
        goto L_80280114;
    // 0x80280108: sb          $t3, 0x8AB($v1)
    MEM_B(0X8AB, ctx->r3) = ctx->r11;
L_8028010C:
    // 0x8028010C: jal         0x8005B4C0
    // 0x80280110: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8005B4C0(rdram, ctx);
        goto after_1;
    // 0x80280110: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
L_80280114:
    // 0x80280114: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80280118: sll         $t4, $s0, 16
    ctx->r12 = S32(ctx->r16 << 16);
    // 0x8028011C: sra         $s0, $t4, 16
    ctx->r16 = S32(SIGNED(ctx->r12) >> 16);
    // 0x80280120: slti        $at, $s0, 0x2
    ctx->r1 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
    // 0x80280124: bne         $at, $zero, L_802800BC
    if (ctx->r1 != 0) {
        // 0x80280128: or          $s1, $s0, $zero
        ctx->r17 = ctx->r16 | 0;
            goto L_802800BC;
    }
    // 0x80280128: or          $s1, $s0, $zero
    ctx->r17 = ctx->r16 | 0;
    // 0x8028012C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80280130: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80280134: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80280138: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8028013C: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80280140: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x80280144: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x80280148: jr          $ra
    // 0x8028014C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8028014C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80280150(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80280150: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80280154: lb          $t6, -0x32A1($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X32A1);
    // 0x80280158: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8028015C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80280160: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80280164: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80280168: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8028016C: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80280170: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80280174: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80280178: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8028017C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80280180: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80280184: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x80280188: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8028018C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80280190: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80280194: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80280198: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8028019C: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x802801A0: addiu       $t8, $t8, -0x2F80
    ctx->r24 = ADD32(ctx->r24, -0X2F80);
    // 0x802801A4: lui         $s3, 0x8012
    ctx->r19 = S32(0X8012 << 16);
    // 0x802801A8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802801AC: addu        $s1, $t7, $t8
    ctx->r17 = ADD32(ctx->r15, ctx->r24);
    // 0x802801B0: addiu       $s3, $s3, -0x2CF0
    ctx->r19 = ADD32(ctx->r19, -0X2CF0);
    // 0x802801B4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x802801B8: addiu       $s2, $zero, 0x47C
    ctx->r18 = ADD32(0, 0X47C);
    // 0x802801BC: addiu       $s4, $zero, 0xA94
    ctx->r20 = ADD32(0, 0XA94);
L_802801C0:
    // 0x802801C0: jal         0x8003CC44
    // 0x802801C4: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_8003CC44(rdram, ctx);
        goto after_0;
    // 0x802801C4: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_0:
    // 0x802801C8: bltz        $v0, L_80280210
    if (SIGNED(ctx->r2) < 0) {
        // 0x802801CC: nop
    
            goto L_80280210;
    }
    // 0x802801CC: nop

    // 0x802801D0: multu       $v0, $s2
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802801D4: mflo        $t9
    ctx->r25 = lo;
    // 0x802801D8: addu        $a0, $s1, $t9
    ctx->r4 = ADD32(ctx->r17, ctx->r25);
    // 0x802801DC: nop

    // 0x802801E0: multu       $s0, $s4
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802801E4: mflo        $t0
    ctx->r8 = lo;
    // 0x802801E8: addu        $v1, $s3, $t0
    ctx->r3 = ADD32(ctx->r19, ctx->r8);
    // 0x802801EC: lbu         $t1, 0x8A9($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0X8A9);
    // 0x802801F0: nop

    // 0x802801F4: sb          $t1, 0xE($a0)
    MEM_B(0XE, ctx->r4) = ctx->r9;
    // 0x802801F8: lbu         $t2, 0x8AA($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X8AA);
    // 0x802801FC: nop

    // 0x80280200: sb          $t2, 0xF($a0)
    MEM_B(0XF, ctx->r4) = ctx->r10;
    // 0x80280204: lbu         $t3, 0x8AB($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0X8AB);
    // 0x80280208: nop

    // 0x8028020C: sb          $t3, 0x10($a0)
    MEM_B(0X10, ctx->r4) = ctx->r11;
L_80280210:
    // 0x80280210: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80280214: sll         $t4, $s0, 16
    ctx->r12 = S32(ctx->r16 << 16);
    // 0x80280218: sra         $s0, $t4, 16
    ctx->r16 = S32(SIGNED(ctx->r12) >> 16);
    // 0x8028021C: slti        $at, $s0, 0x2
    ctx->r1 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
    // 0x80280220: bne         $at, $zero, L_802801C0
    if (ctx->r1 != 0) {
        // 0x80280224: nop
    
            goto L_802801C0;
    }
    // 0x80280224: nop

    // 0x80280228: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8028022C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80280230: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80280234: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80280238: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8028023C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80280240: jr          $ra
    // 0x80280244: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80280244: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80280248(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80280248: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8028024C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80280250: lui         $s3, 0x8012
    ctx->r19 = S32(0X8012 << 16);
    // 0x80280254: addiu       $s3, $s3, -0x32B0
    ctx->r19 = ADD32(ctx->r19, -0X32B0);
    // 0x80280258: lb          $t6, 0xF($s3)
    ctx->r14 = MEM_B(ctx->r19, 0XF);
    // 0x8028025C: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x80280260: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80280264: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80280268: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8028026C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80280270: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80280274: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80280278: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8028027C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80280280: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80280284: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80280288: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8028028C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80280290: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80280294: addiu       $t8, $t8, -0x2F80
    ctx->r24 = ADD32(ctx->r24, -0X2F80);
    // 0x80280298: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8028029C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x802802A0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802802A4: jal         0x80039D64
    // 0x802802A8: addu        $s2, $t7, $t8
    ctx->r18 = ADD32(ctx->r15, ctx->r24);
    func_80039D64(rdram, ctx);
        goto after_0;
    // 0x802802A8: addu        $s2, $t7, $t8
    ctx->r18 = ADD32(ctx->r15, ctx->r24);
    after_0:
    // 0x802802AC: jal         0x80039CB4
    // 0x802802B0: nop

    func_80039CB4(rdram, ctx);
        goto after_1;
    // 0x802802B0: nop

    after_1:
    // 0x802802B4: jal         0x80038EB0
    // 0x802802B8: nop

    func_80038EB0(rdram, ctx);
        goto after_2;
    // 0x802802B8: nop

    after_2:
    // 0x802802BC: jal         0x80038E28
    // 0x802802C0: nop

    func_80038E28(rdram, ctx);
        goto after_3;
    // 0x802802C0: nop

    after_3:
    // 0x802802C4: lb          $t9, 0x5($s2)
    ctx->r25 = MEM_B(ctx->r18, 0X5);
    // 0x802802C8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x802802CC: blez        $t9, L_80280378
    if (SIGNED(ctx->r25) <= 0) {
        // 0x802802D0: addiu       $s4, $zero, 0x47C
        ctx->r20 = ADD32(0, 0X47C);
            goto L_80280378;
    }
    // 0x802802D0: addiu       $s4, $zero, 0x47C
    ctx->r20 = ADD32(0, 0X47C);
    // 0x802802D4: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x802802D8: addiu       $s0, $s0, -0x2CF0
    ctx->r16 = ADD32(ctx->r16, -0X2CF0);
    // 0x802802DC: sll         $a0, $s1, 16
    ctx->r4 = S32(ctx->r17 << 16);
L_802802E0:
    // 0x802802E0: sra         $t0, $a0, 16
    ctx->r8 = S32(SIGNED(ctx->r4) >> 16);
    // 0x802802E4: jal         0x80049A90
    // 0x802802E8: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    func_80049A90(rdram, ctx);
        goto after_4;
    // 0x802802E8: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    after_4:
    // 0x802802EC: multu       $s1, $s4
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802802F0: lbu         $t2, 0x48($s3)
    ctx->r10 = MEM_BU(ctx->r19, 0X48);
    // 0x802802F4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x802802F8: sb          $zero, 0x868($s0)
    MEM_B(0X868, ctx->r16) = 0;
    // 0x802802FC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80280300: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80280304: mflo        $t1
    ctx->r9 = lo;
    // 0x80280308: addu        $a0, $s2, $t1
    ctx->r4 = ADD32(ctx->r18, ctx->r9);
    // 0x8028030C: sb          $t2, 0x11($a0)
    MEM_B(0X11, ctx->r4) = ctx->r10;
    // 0x80280310: lbu         $t3, 0x868($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X868);
    // 0x80280314: sll         $t2, $s1, 16
    ctx->r10 = S32(ctx->r17 << 16);
    // 0x80280318: sb          $t3, 0x12($a0)
    MEM_B(0X12, ctx->r4) = ctx->r11;
    // 0x8028031C: lbu         $t4, 0x4E($s3)
    ctx->r12 = MEM_BU(ctx->r19, 0X4E);
    // 0x80280320: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    // 0x80280324: sb          $t4, 0x7($a0)
    MEM_B(0X7, ctx->r4) = ctx->r12;
    // 0x80280328: lbu         $t5, 0x86A($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X86A);
    // 0x8028032C: nop

    // 0x80280330: sb          $t5, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r13;
    // 0x80280334: lbu         $t6, 0x869($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X869);
    // 0x80280338: nop

    // 0x8028033C: sb          $t6, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r14;
L_80280340:
    // 0x80280340: addu        $t7, $s0, $v1
    ctx->r15 = ADD32(ctx->r16, ctx->r3);
    // 0x80280344: addu        $t9, $a0, $v1
    ctx->r25 = ADD32(ctx->r4, ctx->r3);
    // 0x80280348: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8028034C: sll         $t0, $v1, 16
    ctx->r8 = S32(ctx->r3 << 16);
    // 0x80280350: lbu         $t8, 0x86B($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X86B);
    // 0x80280354: sra         $v1, $t0, 16
    ctx->r3 = S32(SIGNED(ctx->r8) >> 16);
    // 0x80280358: slti        $at, $v1, 0x4
    ctx->r1 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x8028035C: bne         $at, $zero, L_80280340
    if (ctx->r1 != 0) {
        // 0x80280360: sb          $t8, 0xC($t9)
        MEM_B(0XC, ctx->r25) = ctx->r24;
            goto L_80280340;
    }
    // 0x80280360: sb          $t8, 0xC($t9)
    MEM_B(0XC, ctx->r25) = ctx->r24;
    // 0x80280364: lb          $t4, 0x5($s2)
    ctx->r12 = MEM_B(ctx->r18, 0X5);
    // 0x80280368: sra         $s1, $t2, 16
    ctx->r17 = S32(SIGNED(ctx->r10) >> 16);
    // 0x8028036C: slt         $at, $s1, $t4
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x80280370: bne         $at, $zero, L_802802E0
    if (ctx->r1 != 0) {
        // 0x80280374: sll         $a0, $s1, 16
        ctx->r4 = S32(ctx->r17 << 16);
            goto L_802802E0;
    }
    // 0x80280374: sll         $a0, $s1, 16
    ctx->r4 = S32(ctx->r17 << 16);
L_80280378:
    // 0x80280378: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8028037C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80280380: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80280384: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80280388: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8028038C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80280390: jr          $ra
    // 0x80280394: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80280394: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80280398(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80280398: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8028039C: lb          $t6, -0x32A1($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X32A1);
    // 0x802803A0: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x802803A4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x802803A8: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x802803AC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x802803B0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x802803B4: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x802803B8: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x802803BC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x802803C0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x802803C4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x802803C8: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x802803CC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802803D0: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x802803D4: addiu       $t8, $t8, -0x2F80
    ctx->r24 = ADD32(ctx->r24, -0X2F80);
    // 0x802803D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802803DC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x802803E0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x802803E4: jal         0x8003CC44
    // 0x802803E8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8003CC44(rdram, ctx);
        goto after_0;
    // 0x802803E8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x802803EC: bltz        $v0, L_802804B4
    if (SIGNED(ctx->r2) < 0) {
        // 0x802803F0: sh          $v0, 0x2E($sp)
        MEM_H(0X2E, ctx->r29) = ctx->r2;
            goto L_802804B4;
    }
    // 0x802803F0: sh          $v0, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r2;
    // 0x802803F4: jal         0x80039CB4
    // 0x802803F8: nop

    func_80039CB4(rdram, ctx);
        goto after_1;
    // 0x802803F8: nop

    after_1:
    // 0x802803FC: jal         0x80038EB0
    // 0x80280400: nop

    func_80038EB0(rdram, ctx);
        goto after_2;
    // 0x80280400: nop

    after_2:
    // 0x80280404: lh          $t1, 0x2E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X2E);
    // 0x80280408: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8028040C: sll         $t2, $t1, 3
    ctx->r10 = S32(ctx->r9 << 3);
    // 0x80280410: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80280414: sll         $t2, $t2, 5
    ctx->r10 = S32(ctx->r10 << 5);
    // 0x80280418: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x8028041C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80280420: addu        $a2, $t0, $t2
    ctx->r6 = ADD32(ctx->r8, ctx->r10);
    // 0x80280424: lbu         $t3, 0x11($a2)
    ctx->r11 = MEM_BU(ctx->r6, 0X11);
    // 0x80280428: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8028042C: sb          $t3, -0x3268($at)
    MEM_B(-0X3268, ctx->r1) = ctx->r11;
    // 0x80280430: lbu         $t4, 0x12($a2)
    ctx->r12 = MEM_BU(ctx->r6, 0X12);
    // 0x80280434: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80280438: sb          $t4, -0x2488($at)
    MEM_B(-0X2488, ctx->r1) = ctx->r12;
    // 0x8028043C: lbu         $v0, 0x13($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X13);
    // 0x80280440: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80280444: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80280448: addiu       $v1, $v1, -0x32B0
    ctx->r3 = ADD32(ctx->r3, -0X32B0);
    // 0x8028044C: sb          $v0, 0xB14($at)
    MEM_B(0XB14, ctx->r1) = ctx->r2;
    // 0x80280450: addiu       $a2, $a2, 0xC
    ctx->r6 = ADD32(ctx->r6, 0XC);
    // 0x80280454: lbu         $a1, 0x48($v1)
    ctx->r5 = MEM_BU(ctx->r3, 0X48);
    // 0x80280458: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x8028045C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80280460: jal         0x8006F700
    // 0x80280464: sb          $v0, 0x4E($v1)
    MEM_B(0X4E, ctx->r3) = ctx->r2;
    func_8006F700(rdram, ctx);
        goto after_3;
    // 0x80280464: sb          $v0, 0x4E($v1)
    MEM_B(0X4E, ctx->r3) = ctx->r2;
    after_3:
    // 0x80280468: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8028046C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80280470: lbu         $t5, 0x8($a2)
    ctx->r13 = MEM_BU(ctx->r6, 0X8);
    // 0x80280474: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80280478: sb          $t5, -0x2486($at)
    MEM_B(-0X2486, ctx->r1) = ctx->r13;
    // 0x8028047C: lbu         $t6, 0x9($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0X9);
    // 0x80280480: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80280484: addiu       $v1, $v1, -0x2CF0
    ctx->r3 = ADD32(ctx->r3, -0X2CF0);
    // 0x80280488: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8028048C: sb          $t6, -0x2487($at)
    MEM_B(-0X2487, ctx->r1) = ctx->r14;
L_80280490:
    // 0x80280490: addu        $t7, $a2, $v0
    ctx->r15 = ADD32(ctx->r6, ctx->r2);
    // 0x80280494: addu        $t9, $v1, $v0
    ctx->r25 = ADD32(ctx->r3, ctx->r2);
    // 0x80280498: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8028049C: sll         $t1, $v0, 16
    ctx->r9 = S32(ctx->r2 << 16);
    // 0x802804A0: lb          $t8, 0xC($t7)
    ctx->r24 = MEM_B(ctx->r15, 0XC);
    // 0x802804A4: sra         $v0, $t1, 16
    ctx->r2 = S32(SIGNED(ctx->r9) >> 16);
    // 0x802804A8: slti        $at, $v0, 0x4
    ctx->r1 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x802804AC: bne         $at, $zero, L_80280490
    if (ctx->r1 != 0) {
        // 0x802804B0: sb          $t8, 0x86B($t9)
        MEM_B(0X86B, ctx->r25) = ctx->r24;
            goto L_80280490;
    }
    // 0x802804B0: sb          $t8, 0x86B($t9)
    MEM_B(0X86B, ctx->r25) = ctx->r24;
L_802804B4:
    // 0x802804B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802804B8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x802804BC: jr          $ra
    // 0x802804C0: nop

    return;
    // 0x802804C0: nop

;}
RECOMP_FUNC void func_802804C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802804C4: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x802804C8: lb          $t6, -0x32A1($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X32A1);
    // 0x802804CC: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x802804D0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x802804D4: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x802804D8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x802804DC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x802804E0: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x802804E4: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x802804E8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x802804EC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x802804F0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x802804F4: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x802804F8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802804FC: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80280500: addiu       $t8, $t8, -0x2F80
    ctx->r24 = ADD32(ctx->r24, -0X2F80);
    // 0x80280504: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80280508: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8028050C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80280510: jal         0x8003CC44
    // 0x80280514: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8003CC44(rdram, ctx);
        goto after_0;
    // 0x80280514: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x80280518: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8028051C: bltz        $v0, L_802805A4
    if (SIGNED(ctx->r2) < 0) {
        // 0x80280520: addiu       $a3, $a3, -0x32B0
        ctx->r7 = ADD32(ctx->r7, -0X32B0);
            goto L_802805A4;
    }
    // 0x80280520: addiu       $a3, $a3, -0x32B0
    ctx->r7 = ADD32(ctx->r7, -0X32B0);
    // 0x80280524: sll         $t1, $v0, 3
    ctx->r9 = S32(ctx->r2 << 3);
    // 0x80280528: addu        $t1, $t1, $v0
    ctx->r9 = ADD32(ctx->r9, ctx->r2);
    // 0x8028052C: sll         $t1, $t1, 5
    ctx->r9 = S32(ctx->r9 << 5);
    // 0x80280530: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80280534: subu        $t1, $t1, $v0
    ctx->r9 = SUB32(ctx->r9, ctx->r2);
    // 0x80280538: lbu         $t2, 0x48($a3)
    ctx->r10 = MEM_BU(ctx->r7, 0X48);
    // 0x8028053C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80280540: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80280544: addu        $a0, $t0, $t1
    ctx->r4 = ADD32(ctx->r8, ctx->r9);
    // 0x80280548: addiu       $a1, $a1, -0x2CF0
    ctx->r5 = ADD32(ctx->r5, -0X2CF0);
    // 0x8028054C: sb          $t2, 0x11($a0)
    MEM_B(0X11, ctx->r4) = ctx->r10;
    // 0x80280550: lbu         $t3, 0x868($a1)
    ctx->r11 = MEM_BU(ctx->r5, 0X868);
    // 0x80280554: addiu       $a2, $a0, 0xC
    ctx->r6 = ADD32(ctx->r4, 0XC);
    // 0x80280558: sb          $t3, 0x12($a0)
    MEM_B(0X12, ctx->r4) = ctx->r11;
    // 0x8028055C: lbu         $t4, 0x4E($a3)
    ctx->r12 = MEM_BU(ctx->r7, 0X4E);
    // 0x80280560: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80280564: sb          $t4, 0x13($a0)
    MEM_B(0X13, ctx->r4) = ctx->r12;
    // 0x80280568: lbu         $t5, 0x86A($a1)
    ctx->r13 = MEM_BU(ctx->r5, 0X86A);
    // 0x8028056C: nop

    // 0x80280570: sb          $t5, 0x14($a0)
    MEM_B(0X14, ctx->r4) = ctx->r13;
    // 0x80280574: lbu         $t6, 0x869($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X869);
    // 0x80280578: nop

    // 0x8028057C: sb          $t6, 0x15($a0)
    MEM_B(0X15, ctx->r4) = ctx->r14;
L_80280580:
    // 0x80280580: addu        $t7, $a1, $v1
    ctx->r15 = ADD32(ctx->r5, ctx->r3);
    // 0x80280584: addu        $t9, $a2, $v1
    ctx->r25 = ADD32(ctx->r6, ctx->r3);
    // 0x80280588: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8028058C: sll         $t0, $v1, 16
    ctx->r8 = S32(ctx->r3 << 16);
    // 0x80280590: lbu         $t8, 0x86B($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X86B);
    // 0x80280594: sra         $v1, $t0, 16
    ctx->r3 = S32(SIGNED(ctx->r8) >> 16);
    // 0x80280598: slti        $at, $v1, 0x4
    ctx->r1 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x8028059C: bne         $at, $zero, L_80280580
    if (ctx->r1 != 0) {
        // 0x802805A0: sb          $t8, 0xC($t9)
        MEM_B(0XC, ctx->r25) = ctx->r24;
            goto L_80280580;
    }
    // 0x802805A0: sb          $t8, 0xC($t9)
    MEM_B(0XC, ctx->r25) = ctx->r24;
L_802805A4:
    // 0x802805A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802805A8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802805AC: jr          $ra
    // 0x802805B0: nop

    return;
    // 0x802805B0: nop

;}
RECOMP_FUNC void func_802805B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802805B4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802805B8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802805BC: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x802805C0: addiu       $s0, $s0, -0x32B0
    ctx->r16 = ADD32(ctx->r16, -0X32B0);
    // 0x802805C4: lb          $t6, 0xF($s0)
    ctx->r14 = MEM_B(ctx->r16, 0XF);
    // 0x802805C8: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x802805CC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x802805D0: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x802805D4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x802805D8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x802805DC: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x802805E0: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x802805E4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x802805E8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x802805EC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x802805F0: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x802805F4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802805F8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x802805FC: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80280600: addiu       $t8, $t8, -0x2F80
    ctx->r24 = ADD32(ctx->r24, -0X2F80);
    // 0x80280604: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80280608: jal         0x8028079C
    // 0x8028060C: addu        $s2, $t7, $t8
    ctx->r18 = ADD32(ctx->r15, ctx->r24);
    func_8028079C(rdram, ctx);
        goto after_0;
    // 0x8028060C: addu        $s2, $t7, $t8
    ctx->r18 = ADD32(ctx->r15, ctx->r24);
    after_0:
    // 0x80280610: sb          $zero, 0x1($s2)
    MEM_B(0X1, ctx->r18) = 0;
    // 0x80280614: sb          $zero, 0x3($s2)
    MEM_B(0X3, ctx->r18) = 0;
    // 0x80280618: lbu         $t9, 0x55($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X55);
    // 0x8028061C: nop

    // 0x80280620: sb          $t9, 0x6($s2)
    MEM_B(0X6, ctx->r18) = ctx->r25;
    // 0x80280624: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80280628: andi        $t0, $t9, 0xFF
    ctx->r8 = ctx->r25 & 0XFF;
    // 0x8028062C: bne         $v0, $zero, L_80280658
    if (ctx->r2 != 0) {
        // 0x80280630: nop
    
            goto L_80280658;
    }
    // 0x80280630: nop

    // 0x80280634: bne         $t0, $zero, L_80280658
    if (ctx->r8 != 0) {
        // 0x80280638: nop
    
            goto L_80280658;
    }
    // 0x80280638: nop

    // 0x8028063C: jal         0x800382A8
    // 0x80280640: nop

    func_800382A8(rdram, ctx);
        goto after_1;
    // 0x80280640: nop

    after_1:
    // 0x80280644: jal         0x800384C4
    // 0x80280648: nop

    func_800384C4(rdram, ctx);
        goto after_2;
    // 0x80280648: nop

    after_2:
    // 0x8028064C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80280650: lbu         $v0, -0x32B0($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X32B0);
    // 0x80280654: nop

L_80280658:
    // 0x80280658: bne         $v0, $zero, L_802806C8
    if (ctx->r2 != 0) {
        // 0x8028065C: nop
    
            goto L_802806C8;
    }
    // 0x8028065C: nop

    // 0x80280660: jal         0x8004974C
    // 0x80280664: nop

    func_8004974C(rdram, ctx);
        goto after_3;
    // 0x80280664: nop

    after_3:
    // 0x80280668: beq         $v0, $zero, L_80280690
    if (ctx->r2 == 0) {
        // 0x8028066C: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_80280690;
    }
    // 0x8028066C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80280670: beq         $v0, $at, L_802806A0
    if (ctx->r2 == ctx->r1) {
        // 0x80280674: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_802806A0;
    }
    // 0x80280674: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80280678: beq         $v0, $at, L_802806B0
    if (ctx->r2 == ctx->r1) {
        // 0x8028067C: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_802806B0;
    }
    // 0x8028067C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80280680: beq         $v0, $at, L_802806C0
    if (ctx->r2 == ctx->r1) {
        // 0x80280684: nop
    
            goto L_802806C0;
    }
    // 0x80280684: nop

    // 0x80280688: b           L_802806C8
    // 0x8028068C: nop

        goto L_802806C8;
    // 0x8028068C: nop

L_80280690:
    // 0x80280690: jal         0x8003D208
    // 0x80280694: nop

    func_8003D208(rdram, ctx);
        goto after_4;
    // 0x80280694: nop

    after_4:
    // 0x80280698: b           L_802806C8
    // 0x8028069C: nop

        goto L_802806C8;
    // 0x8028069C: nop

L_802806A0:
    // 0x802806A0: jal         0x8003D34C
    // 0x802806A4: nop

    func_8003D34C(rdram, ctx);
        goto after_5;
    // 0x802806A4: nop

    after_5:
    // 0x802806A8: b           L_802806C8
    // 0x802806AC: nop

        goto L_802806C8;
    // 0x802806AC: nop

L_802806B0:
    // 0x802806B0: jal         0x8027EB44
    // 0x802806B4: nop

    func_8027EB44(rdram, ctx);
        goto after_6;
    // 0x802806B4: nop

    after_6:
    // 0x802806B8: b           L_802806C8
    // 0x802806BC: nop

        goto L_802806C8;
    // 0x802806BC: nop

L_802806C0:
    // 0x802806C0: jal         0x8027ECC0
    // 0x802806C4: nop

    func_8027ECC0(rdram, ctx);
        goto after_7;
    // 0x802806C4: nop

    after_7:
L_802806C8:
    // 0x802806C8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x802806CC: lb          $a0, -0x2CF0($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X2CF0);
    // 0x802806D0: jal         0x8003CD14
    // 0x802806D4: nop

    func_8003CD14(rdram, ctx);
        goto after_8;
    // 0x802806D4: nop

    after_8:
    // 0x802806D8: sb          $v0, 0xC($s2)
    MEM_B(0XC, ctx->r18) = ctx->r2;
    // 0x802806DC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x802806E0: addiu       $s1, $zero, 0x14C
    ctx->r17 = ADD32(0, 0X14C);
    // 0x802806E4: sll         $a0, $s0, 24
    ctx->r4 = S32(ctx->r16 << 24);
L_802806E8:
    // 0x802806E8: sra         $t1, $a0, 24
    ctx->r9 = S32(SIGNED(ctx->r4) >> 24);
    // 0x802806EC: jal         0x8003CB98
    // 0x802806F0: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    func_8003CB98(rdram, ctx);
        goto after_9;
    // 0x802806F0: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    after_9:
    // 0x802806F4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802806F8: beq         $v0, $at, L_80280718
    if (ctx->r2 == ctx->r1) {
        // 0x802806FC: nop
    
            goto L_80280718;
    }
    // 0x802806FC: nop

    // 0x80280700: multu       $s0, $s1
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80280704: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80280708: mflo        $t3
    ctx->r11 = lo;
    // 0x8028070C: addu        $t4, $s2, $t3
    ctx->r12 = ADD32(ctx->r18, ctx->r11);
    // 0x80280710: b           L_80280728
    // 0x80280714: sb          $t2, 0x4AD($t4)
    MEM_B(0X4AD, ctx->r12) = ctx->r10;
        goto L_80280728;
    // 0x80280714: sb          $t2, 0x4AD($t4)
    MEM_B(0X4AD, ctx->r12) = ctx->r10;
L_80280718:
    // 0x80280718: multu       $s0, $s1
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8028071C: mflo        $t5
    ctx->r13 = lo;
    // 0x80280720: addu        $t6, $s2, $t5
    ctx->r14 = ADD32(ctx->r18, ctx->r13);
    // 0x80280724: sb          $zero, 0x4AD($t6)
    MEM_B(0X4AD, ctx->r14) = 0;
L_80280728:
    // 0x80280728: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8028072C: sll         $t7, $s0, 16
    ctx->r15 = S32(ctx->r16 << 16);
    // 0x80280730: sra         $s0, $t7, 16
    ctx->r16 = S32(SIGNED(ctx->r15) >> 16);
    // 0x80280734: slti        $at, $s0, 0x24
    ctx->r1 = SIGNED(ctx->r16) < 0X24 ? 1 : 0;
    // 0x80280738: bne         $at, $zero, L_802806E8
    if (ctx->r1 != 0) {
        // 0x8028073C: sll         $a0, $s0, 24
        ctx->r4 = S32(ctx->r16 << 24);
            goto L_802806E8;
    }
    // 0x8028073C: sll         $a0, $s0, 24
    ctx->r4 = S32(ctx->r16 << 24);
    // 0x80280740: jal         0x8004974C
    // 0x80280744: nop

    func_8004974C(rdram, ctx);
        goto after_10;
    // 0x80280744: nop

    after_10:
    // 0x80280748: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x8028074C: beq         $at, $zero, L_80280788
    if (ctx->r1 == 0) {
        // 0x80280750: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_80280788;
    }
    // 0x80280750: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80280754: jal         0x8003C2A0
    // 0x80280758: nop

    func_8003C2A0(rdram, ctx);
        goto after_11;
    // 0x80280758: nop

    after_11:
    // 0x8028075C: jal         0x8027F760
    // 0x80280760: nop

    func_8027F760(rdram, ctx);
        goto after_12;
    // 0x80280760: nop

    after_12:
    // 0x80280764: jal         0x8027FB14
    // 0x80280768: nop

    func_8027FB14(rdram, ctx);
        goto after_13;
    // 0x80280768: nop

    after_13:
    // 0x8028076C: jal         0x8027FF4C
    // 0x80280770: nop

    func_8027FF4C(rdram, ctx);
        goto after_14;
    // 0x80280770: nop

    after_14:
    // 0x80280774: jal         0x80280248
    // 0x80280778: nop

    func_80280248(rdram, ctx);
        goto after_15;
    // 0x80280778: nop

    after_15:
    // 0x8028077C: jal         0x8004380C
    // 0x80280780: nop

    func_8004380C(rdram, ctx);
        goto after_16;
    // 0x80280780: nop

    after_16:
    // 0x80280784: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80280788:
    // 0x80280788: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8028078C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80280790: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80280794: jr          $ra
    // 0x80280798: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80280798: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8028079C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028079C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802807A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802807A4: jal         0x8004974C
    // 0x802807A8: nop

    func_8004974C(rdram, ctx);
        goto after_0;
    // 0x802807A8: nop

    after_0:
    // 0x802807AC: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x802807B0: lb          $t7, -0x32A1($t7)
    ctx->r15 = MEM_B(ctx->r15, -0X32A1);
    // 0x802807B4: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x802807B8: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x802807BC: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x802807C0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x802807C4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x802807C8: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x802807CC: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x802807D0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x802807D4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x802807D8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x802807DC: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x802807E0: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x802807E4: lb          $t6, 0x3904($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X3904);
    // 0x802807E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802807EC: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x802807F0: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x802807F4: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x802807F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802807FC: jr          $ra
    // 0x80280800: sb          $t6, -0x2F7C($at)
    MEM_B(-0X2F7C, ctx->r1) = ctx->r14;
    return;
    // 0x80280800: sb          $t6, -0x2F7C($at)
    MEM_B(-0X2F7C, ctx->r1) = ctx->r14;
;}
RECOMP_FUNC void func_80280804(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80280804: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80280808: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8028080C: jal         0x80280824
    // 0x80280810: nop

    func_80280824(rdram, ctx);
        goto after_0;
    // 0x80280810: nop

    after_0:
    // 0x80280814: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80280818: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8028081C: jr          $ra
    // 0x80280820: nop

    return;
    // 0x80280820: nop

;}
RECOMP_FUNC void func_80280824(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80280824: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80280828: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8028082C: jal         0x800372F4
    // 0x80280830: nop

    func_800372F4(rdram, ctx);
        goto after_0;
    // 0x80280830: nop

    after_0:
    // 0x80280834: jal         0x80039280
    // 0x80280838: nop

    func_80039280(rdram, ctx);
        goto after_1;
    // 0x80280838: nop

    after_1:
    // 0x8028083C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80280840: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80280844: jr          $ra
    // 0x80280848: nop

    return;
    // 0x80280848: nop

;}
RECOMP_FUNC void func_8028084C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028084C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80280850: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80280854: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80280858: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8028085C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80280860: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80280864: jal         0x8004974C
    // 0x80280868: sb          $a1, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r5;
    func_8004974C(rdram, ctx);
        goto after_0;
    // 0x80280868: sb          $a1, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r5;
    after_0:
    // 0x8028086C: lbu         $a3, 0x2F($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X2F);
    // 0x80280870: lb          $t3, 0x33($sp)
    ctx->r11 = MEM_B(ctx->r29, 0X33);
    // 0x80280874: beq         $v0, $zero, L_802808A8
    if (ctx->r2 == 0) {
        // 0x80280878: slti        $at, $a3, 0x46
        ctx->r1 = SIGNED(ctx->r7) < 0X46 ? 1 : 0;
            goto L_802808A8;
    }
    // 0x80280878: slti        $at, $a3, 0x46
    ctx->r1 = SIGNED(ctx->r7) < 0X46 ? 1 : 0;
    // 0x8028087C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80280880: beq         $v0, $t2, L_8028098C
    if (ctx->r2 == ctx->r10) {
        // 0x80280884: or          $t1, $zero, $zero
        ctx->r9 = 0 | 0;
            goto L_8028098C;
    }
    // 0x80280884: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
    // 0x80280888: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8028088C: beq         $v0, $at, L_802809F8
    if (ctx->r2 == ctx->r1) {
        // 0x80280890: or          $t1, $zero, $zero
        ctx->r9 = 0 | 0;
            goto L_802809F8;
    }
    // 0x80280890: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
    // 0x80280894: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80280898: beq         $v0, $a1, L_80280AA4
    if (ctx->r2 == ctx->r5) {
        // 0x8028089C: or          $t1, $zero, $zero
        ctx->r9 = 0 | 0;
            goto L_80280AA4;
    }
    // 0x8028089C: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
    // 0x802808A0: b           L_80280B20
    // 0x802808A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80280B20;
    // 0x802808A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802808A8:
    // 0x802808A8: beq         $at, $zero, L_80280950
    if (ctx->r1 == 0) {
        // 0x802808AC: or          $a1, $a3, $zero
        ctx->r5 = ctx->r7 | 0;
            goto L_80280950;
    }
    // 0x802808AC: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x802808B0: addiu       $at, $zero, 0x23
    ctx->r1 = ADD32(0, 0X23);
    // 0x802808B4: div         $zero, $a3, $at
    lo = S32(S64(S32(ctx->r7)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r7)) % S64(S32(ctx->r1)));
    // 0x802808B8: lui         $t4, 0x800A
    ctx->r12 = S32(0X800A << 16);
    // 0x802808BC: addiu       $t4, $t4, 0x7330
    ctx->r12 = ADD32(ctx->r12, 0X7330);
    // 0x802808C0: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
    // 0x802808C4: mfhi        $t6
    ctx->r14 = hi;
    // 0x802808C8: sll         $t7, $t6, 16
    ctx->r15 = S32(ctx->r14 << 16);
    // 0x802808CC: sra         $t8, $t7, 16
    ctx->r24 = S32(SIGNED(ctx->r15) >> 16);
    // 0x802808D0: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x802808D4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x802808D8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x802808DC: addu        $a0, $t9, $t4
    ctx->r4 = ADD32(ctx->r25, ctx->r12);
    // 0x802808E0: slti        $at, $a1, 0x23
    ctx->r1 = SIGNED(ctx->r5) < 0X23 ? 1 : 0;
L_802808E4:
    // 0x802808E4: beq         $at, $zero, L_8028090C
    if (ctx->r1 == 0) {
        // 0x802808E8: sll         $a3, $t1, 1
        ctx->r7 = S32(ctx->r9 << 1);
            goto L_8028090C;
    }
    // 0x802808E8: sll         $a3, $t1, 1
    ctx->r7 = S32(ctx->r9 << 1);
    // 0x802808EC: sll         $a3, $t1, 1
    ctx->r7 = S32(ctx->r9 << 1);
    // 0x802808F0: addu        $v1, $a0, $a3
    ctx->r3 = ADD32(ctx->r4, ctx->r7);
    // 0x802808F4: lb          $t5, 0x0($v1)
    ctx->r13 = MEM_B(ctx->r3, 0X0);
    // 0x802808F8: addu        $v0, $s0, $a3
    ctx->r2 = ADD32(ctx->r16, ctx->r7);
    // 0x802808FC: sb          $t5, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r13;
    // 0x80280900: lb          $t6, 0x1($v1)
    ctx->r14 = MEM_B(ctx->r3, 0X1);
    // 0x80280904: b           L_80280928
    // 0x80280908: sb          $t6, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r14;
        goto L_80280928;
    // 0x80280908: sb          $t6, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r14;
L_8028090C:
    // 0x8028090C: addu        $v1, $a0, $a3
    ctx->r3 = ADD32(ctx->r4, ctx->r7);
    // 0x80280910: lb          $t7, 0x1($v1)
    ctx->r15 = MEM_B(ctx->r3, 0X1);
    // 0x80280914: addu        $v0, $s0, $a3
    ctx->r2 = ADD32(ctx->r16, ctx->r7);
    // 0x80280918: sb          $t7, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r15;
    // 0x8028091C: lb          $t8, 0x0($v1)
    ctx->r24 = MEM_B(ctx->r3, 0X0);
    // 0x80280920: nop

    // 0x80280924: sb          $t8, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r24;
L_80280928:
    // 0x80280928: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x8028092C: sll         $t9, $t1, 16
    ctx->r25 = S32(ctx->r9 << 16);
    // 0x80280930: sra         $t1, $t9, 16
    ctx->r9 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80280934: slti        $at, $t1, 0x12
    ctx->r1 = SIGNED(ctx->r9) < 0X12 ? 1 : 0;
    // 0x80280938: bne         $at, $zero, L_802808E4
    if (ctx->r1 != 0) {
        // 0x8028093C: slti        $at, $a1, 0x23
        ctx->r1 = SIGNED(ctx->r5) < 0X23 ? 1 : 0;
            goto L_802808E4;
    }
    // 0x8028093C: slti        $at, $a1, 0x23
    ctx->r1 = SIGNED(ctx->r5) < 0X23 ? 1 : 0;
    // 0x80280940: jal         0x80280BE0
    // 0x80280944: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80280BE0(rdram, ctx);
        goto after_1;
    // 0x80280944: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80280948: b           L_80280B20
    // 0x8028094C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80280B20;
    // 0x8028094C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80280950:
    // 0x80280950: lh          $t1, 0x26($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X26);
    // 0x80280954: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x80280958: sll         $t6, $t1, 3
    ctx->r14 = S32(ctx->r9 << 3);
    // 0x8028095C: addu        $t6, $t6, $t1
    ctx->r14 = ADD32(ctx->r14, ctx->r9);
    // 0x80280960: sll         $t6, $t6, 5
    ctx->r14 = S32(ctx->r14 << 5);
    // 0x80280964: subu        $t6, $t6, $t1
    ctx->r14 = SUB32(ctx->r14, ctx->r9);
    // 0x80280968: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8028096C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80280970: lb          $t7, -0x2F74($t7)
    ctx->r15 = MEM_B(ctx->r15, -0X2F74);
    // 0x80280974: sll         $t5, $t1, 1
    ctx->r13 = S32(ctx->r9 << 1);
    // 0x80280978: addu        $v0, $s0, $t5
    ctx->r2 = ADD32(ctx->r16, ctx->r13);
    // 0x8028097C: addiu       $t8, $zero, 0x29
    ctx->r24 = ADD32(0, 0X29);
    // 0x80280980: sb          $t8, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r24;
    // 0x80280984: b           L_80280B1C
    // 0x80280988: sb          $t7, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r15;
        goto L_80280B1C;
    // 0x80280988: sb          $t7, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r15;
L_8028098C:
    // 0x8028098C: lui         $t4, 0x800A
    ctx->r12 = S32(0X800A << 16);
    // 0x80280990: addiu       $t4, $t4, 0x7938
    ctx->r12 = ADD32(ctx->r12, 0X7938);
    // 0x80280994: sll         $t9, $a3, 1
    ctx->r25 = S32(ctx->r7 << 1);
    // 0x80280998: addu        $a0, $t9, $t4
    ctx->r4 = ADD32(ctx->r25, ctx->r12);
    // 0x8028099C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
L_802809A0:
    // 0x802809A0: multu       $t1, $a1
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802809A4: lb          $t6, 0x0($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X0);
    // 0x802809A8: sll         $t5, $t1, 1
    ctx->r13 = S32(ctx->r9 << 1);
    // 0x802809AC: addu        $v0, $s0, $t5
    ctx->r2 = ADD32(ctx->r16, ctx->r13);
    // 0x802809B0: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x802809B4: sll         $t4, $t1, 16
    ctx->r12 = S32(ctx->r9 << 16);
    // 0x802809B8: sra         $t1, $t4, 16
    ctx->r9 = S32(SIGNED(ctx->r12) >> 16);
    // 0x802809BC: slti        $at, $t1, 0xC
    ctx->r1 = SIGNED(ctx->r9) < 0XC ? 1 : 0;
    // 0x802809C0: mflo        $v1
    ctx->r3 = lo;
    // 0x802809C4: addu        $t7, $t6, $v1
    ctx->r15 = ADD32(ctx->r14, ctx->r3);
    // 0x802809C8: sb          $t7, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r15;
    // 0x802809CC: lb          $t8, 0x1($a0)
    ctx->r24 = MEM_B(ctx->r4, 0X1);
    // 0x802809D0: nop

    // 0x802809D4: addu        $t9, $t8, $v1
    ctx->r25 = ADD32(ctx->r24, ctx->r3);
    // 0x802809D8: bne         $at, $zero, L_802809A0
    if (ctx->r1 != 0) {
        // 0x802809DC: sb          $t9, 0x1($v0)
        MEM_B(0X1, ctx->r2) = ctx->r25;
            goto L_802809A0;
    }
    // 0x802809DC: sb          $t9, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r25;
    // 0x802809E0: bne         $t3, $t2, L_80280B20
    if (ctx->r11 != ctx->r10) {
        // 0x802809E4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80280B20;
    }
    // 0x802809E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802809E8: jal         0x80280BE0
    // 0x802809EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80280BE0(rdram, ctx);
        goto after_2;
    // 0x802809EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x802809F0: b           L_80280B20
    // 0x802809F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80280B20;
    // 0x802809F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802809F8:
    // 0x802809F8: lui         $t7, 0x800A
    ctx->r15 = S32(0X800A << 16);
    // 0x802809FC: addiu       $t7, $t7, 0x796C
    ctx->r15 = ADD32(ctx->r15, 0X796C);
    // 0x80280A00: sll         $t6, $a3, 2
    ctx->r14 = S32(ctx->r7 << 2);
    // 0x80280A04: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x80280A08: addiu       $a2, $a2, -0x3110
    ctx->r6 = ADD32(ctx->r6, -0X3110);
    // 0x80280A0C: addu        $t0, $t6, $t7
    ctx->r8 = ADD32(ctx->r14, ctx->r15);
    // 0x80280A10: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_80280A14:
    // 0x80280A14: sll         $a3, $t1, 1
    ctx->r7 = S32(ctx->r9 << 1);
    // 0x80280A18: sll         $a1, $t1, 2
    ctx->r5 = S32(ctx->r9 << 2);
L_80280A1C:
    // 0x80280A1C: sll         $t6, $a0, 1
    ctx->r14 = S32(ctx->r4 << 1);
    // 0x80280A20: addu        $v1, $t0, $t6
    ctx->r3 = ADD32(ctx->r8, ctx->r14);
    // 0x80280A24: addu        $t8, $a3, $a0
    ctx->r24 = ADD32(ctx->r7, ctx->r4);
    // 0x80280A28: lb          $t7, 0x0($v1)
    ctx->r15 = MEM_B(ctx->r3, 0X0);
    // 0x80280A2C: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x80280A30: sra         $t4, $t9, 16
    ctx->r12 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80280A34: addu        $t8, $a2, $t7
    ctx->r24 = ADD32(ctx->r6, ctx->r15);
    // 0x80280A38: addu        $t9, $t8, $a1
    ctx->r25 = ADD32(ctx->r24, ctx->r5);
    // 0x80280A3C: sll         $t5, $t4, 1
    ctx->r13 = S32(ctx->r12 << 1);
    // 0x80280A40: lb          $t4, 0x11($t9)
    ctx->r12 = MEM_B(ctx->r25, 0X11);
    // 0x80280A44: addu        $v0, $s0, $t5
    ctx->r2 = ADD32(ctx->r16, ctx->r13);
    // 0x80280A48: sb          $t4, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r12;
    // 0x80280A4C: lb          $t5, 0x1($v1)
    ctx->r13 = MEM_B(ctx->r3, 0X1);
    // 0x80280A50: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80280A54: addu        $t6, $a2, $t5
    ctx->r14 = ADD32(ctx->r6, ctx->r13);
    // 0x80280A58: sll         $t9, $a0, 16
    ctx->r25 = S32(ctx->r4 << 16);
    // 0x80280A5C: addu        $t7, $t6, $a1
    ctx->r15 = ADD32(ctx->r14, ctx->r5);
    // 0x80280A60: lb          $t8, 0x11($t7)
    ctx->r24 = MEM_B(ctx->r15, 0X11);
    // 0x80280A64: sra         $a0, $t9, 16
    ctx->r4 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80280A68: slti        $at, $a0, 0x2
    ctx->r1 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
    // 0x80280A6C: bne         $at, $zero, L_80280A1C
    if (ctx->r1 != 0) {
        // 0x80280A70: sb          $t8, 0x1($v0)
        MEM_B(0X1, ctx->r2) = ctx->r24;
            goto L_80280A1C;
    }
    // 0x80280A70: sb          $t8, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r24;
    // 0x80280A74: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x80280A78: sll         $t5, $t1, 16
    ctx->r13 = S32(ctx->r9 << 16);
    // 0x80280A7C: sra         $t1, $t5, 16
    ctx->r9 = S32(SIGNED(ctx->r13) >> 16);
    // 0x80280A80: slti        $at, $t1, 0x6
    ctx->r1 = SIGNED(ctx->r9) < 0X6 ? 1 : 0;
    // 0x80280A84: bne         $at, $zero, L_80280A14
    if (ctx->r1 != 0) {
        // 0x80280A88: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_80280A14;
    }
    // 0x80280A88: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80280A8C: bne         $t3, $t2, L_80280B20
    if (ctx->r11 != ctx->r10) {
        // 0x80280A90: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80280B20;
    }
    // 0x80280A90: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80280A94: jal         0x80280BE0
    // 0x80280A98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80280BE0(rdram, ctx);
        goto after_3;
    // 0x80280A98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80280A9C: b           L_80280B20
    // 0x80280AA0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80280B20;
    // 0x80280AA0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80280AA4:
    // 0x80280AA4: lui         $t8, 0x800A
    ctx->r24 = S32(0X800A << 16);
    // 0x80280AA8: addiu       $t8, $t8, 0x7988
    ctx->r24 = ADD32(ctx->r24, 0X7988);
    // 0x80280AAC: sll         $t7, $a3, 4
    ctx->r15 = S32(ctx->r7 << 4);
    // 0x80280AB0: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x80280AB4: addiu       $a2, $a2, -0x3110
    ctx->r6 = ADD32(ctx->r6, -0X3110);
    // 0x80280AB8: addu        $t0, $t7, $t8
    ctx->r8 = ADD32(ctx->r15, ctx->r24);
    // 0x80280ABC: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x80280AC0: sll         $a3, $t1, 1
    ctx->r7 = S32(ctx->r9 << 1);
L_80280AC4:
    // 0x80280AC4: addu        $v0, $t0, $a3
    ctx->r2 = ADD32(ctx->r8, ctx->r7);
    // 0x80280AC8: lb          $v1, 0x0($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X0);
    // 0x80280ACC: lb          $a0, 0x1($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X1);
    // 0x80280AD0: bltz        $v1, L_80280AFC
    if (SIGNED(ctx->r3) < 0) {
        // 0x80280AD4: addiu       $t1, $t1, 0x1
        ctx->r9 = ADD32(ctx->r9, 0X1);
            goto L_80280AFC;
    }
    // 0x80280AD4: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x80280AD8: bltz        $a0, L_80280AFC
    if (SIGNED(ctx->r4) < 0) {
        // 0x80280ADC: addu        $v0, $s0, $a3
        ctx->r2 = ADD32(ctx->r16, ctx->r7);
            goto L_80280AFC;
    }
    // 0x80280ADC: addu        $v0, $s0, $a3
    ctx->r2 = ADD32(ctx->r16, ctx->r7);
    // 0x80280AE0: addu        $t9, $a2, $v1
    ctx->r25 = ADD32(ctx->r6, ctx->r3);
    // 0x80280AE4: lb          $t4, 0x11($t9)
    ctx->r12 = MEM_B(ctx->r25, 0X11);
    // 0x80280AE8: addu        $t5, $a2, $a0
    ctx->r13 = ADD32(ctx->r6, ctx->r4);
    // 0x80280AEC: sb          $t4, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r12;
    // 0x80280AF0: lb          $t6, 0x11($t5)
    ctx->r14 = MEM_B(ctx->r13, 0X11);
    // 0x80280AF4: b           L_80280B08
    // 0x80280AF8: sb          $t6, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r14;
        goto L_80280B08;
    // 0x80280AF8: sb          $t6, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r14;
L_80280AFC:
    // 0x80280AFC: addu        $v0, $s0, $a3
    ctx->r2 = ADD32(ctx->r16, ctx->r7);
    // 0x80280B00: sb          $a1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r5;
    // 0x80280B04: sb          $a1, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r5;
L_80280B08:
    // 0x80280B08: sll         $t7, $t1, 16
    ctx->r15 = S32(ctx->r9 << 16);
    // 0x80280B0C: sra         $t1, $t7, 16
    ctx->r9 = S32(SIGNED(ctx->r15) >> 16);
    // 0x80280B10: slti        $at, $t1, 0x12
    ctx->r1 = SIGNED(ctx->r9) < 0X12 ? 1 : 0;
    // 0x80280B14: bne         $at, $zero, L_80280AC4
    if (ctx->r1 != 0) {
        // 0x80280B18: sll         $a3, $t1, 1
        ctx->r7 = S32(ctx->r9 << 1);
            goto L_80280AC4;
    }
    // 0x80280B18: sll         $a3, $t1, 1
    ctx->r7 = S32(ctx->r9 << 1);
L_80280B1C:
    // 0x80280B1C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80280B20:
    // 0x80280B20: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80280B24: jr          $ra
    // 0x80280B28: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80280B28: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80280B2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80280B2C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80280B30: lb          $t6, -0x32A1($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X32A1);
    // 0x80280B34: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x80280B38: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80280B3C: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80280B40: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80280B44: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80280B48: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80280B4C: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80280B50: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80280B54: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80280B58: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80280B5C: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80280B60: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80280B64: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80280B68: addiu       $t8, $t8, -0x2F80
    ctx->r24 = ADD32(ctx->r24, -0X2F80);
    // 0x80280B6C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80280B70: addu        $v1, $t7, $t8
    ctx->r3 = ADD32(ctx->r15, ctx->r24);
    // 0x80280B74: lbu         $a1, 0x1($v1)
    ctx->r5 = MEM_BU(ctx->r3, 0X1);
    // 0x80280B78: addiu       $a0, $v1, 0x488
    ctx->r4 = ADD32(ctx->r3, 0X488);
    // 0x80280B7C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80280B80: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x80280B84: jal         0x8028084C
    // 0x80280B88: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8028084C(rdram, ctx);
        goto after_0;
    // 0x80280B88: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x80280B8C: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x80280B90: lb          $t9, -0x32A1($t9)
    ctx->r25 = MEM_B(ctx->r25, -0X32A1);
    // 0x80280B94: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x80280B98: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80280B9C: beq         $t9, $zero, L_80280BB8
    if (ctx->r25 == 0) {
        // 0x80280BA0: nop
    
            goto L_80280BB8;
    }
    // 0x80280BA0: nop

    // 0x80280BA4: jal         0x8003EA58
    // 0x80280BA8: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_8003EA58(rdram, ctx);
        goto after_1;
    // 0x80280BA8: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_1:
    // 0x80280BAC: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x80280BB0: nop

    // 0x80280BB4: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
L_80280BB8:
    // 0x80280BB8: lb          $a0, 0x1($v1)
    ctx->r4 = MEM_B(ctx->r3, 0X1);
    // 0x80280BBC: lb          $a1, 0x3($v1)
    ctx->r5 = MEM_B(ctx->r3, 0X3);
    // 0x80280BC0: jal         0x8003D934
    // 0x80280BC4: nop

    func_8003D934(rdram, ctx);
        goto after_2;
    // 0x80280BC4: nop

    after_2:
    // 0x80280BC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80280BCC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80280BD0: jr          $ra
    // 0x80280BD4: nop

    return;
    // 0x80280BD4: nop

;}
RECOMP_FUNC void func_80280BD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80280BD8: jr          $ra
    // 0x80280BDC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x80280BDC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void func_80280BE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80280BE0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80280BE4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80280BE8: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x80280BEC: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x80280BF0: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80280BF4: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x80280BF8: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80280BFC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80280C00: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80280C04: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x80280C08: jal         0x8003EAD8
    // 0x80280C0C: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    func_8003EAD8(rdram, ctx);
        goto after_0;
    // 0x80280C0C: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    after_0:
    // 0x80280C10: blez        $v0, L_80280C8C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80280C14: sll         $t6, $s3, 1
        ctx->r14 = S32(ctx->r19 << 1);
            goto L_80280C8C;
    }
    // 0x80280C14: sll         $t6, $s3, 1
    ctx->r14 = S32(ctx->r19 << 1);
L_80280C18:
    // 0x80280C18: addu        $s0, $s5, $t6
    ctx->r16 = ADD32(ctx->r21, ctx->r14);
    // 0x80280C1C: lb          $s1, 0x0($s0)
    ctx->r17 = MEM_B(ctx->r16, 0X0);
    // 0x80280C20: lb          $s2, 0x1($s0)
    ctx->r18 = MEM_B(ctx->r16, 0X1);
    // 0x80280C24: sll         $a0, $s1, 24
    ctx->r4 = S32(ctx->r17 << 24);
    // 0x80280C28: sll         $a1, $s2, 24
    ctx->r5 = S32(ctx->r18 << 24);
    // 0x80280C2C: sra         $t8, $a1, 24
    ctx->r24 = S32(SIGNED(ctx->r5) >> 24);
    // 0x80280C30: sra         $t7, $a0, 24
    ctx->r15 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80280C34: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x80280C38: jal         0x8003CCB0
    // 0x80280C3C: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    func_8003CCB0(rdram, ctx);
        goto after_1;
    // 0x80280C3C: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    after_1:
    // 0x80280C40: beq         $v0, $zero, L_80280C74
    if (ctx->r2 == 0) {
        // 0x80280C44: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_80280C74;
    }
    // 0x80280C44: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x80280C48: sll         $t9, $s4, 1
    ctx->r25 = S32(ctx->r20 << 1);
    // 0x80280C4C: addu        $v0, $s5, $t9
    ctx->r2 = ADD32(ctx->r21, ctx->r25);
    // 0x80280C50: lb          $t0, 0x0($v0)
    ctx->r8 = MEM_B(ctx->r2, 0X0);
    // 0x80280C54: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x80280C58: sb          $t0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r8;
    // 0x80280C5C: lb          $t1, 0x1($v0)
    ctx->r9 = MEM_B(ctx->r2, 0X1);
    // 0x80280C60: sll         $t2, $s4, 16
    ctx->r10 = S32(ctx->r20 << 16);
    // 0x80280C64: sb          $t1, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r9;
    // 0x80280C68: sb          $s1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r17;
    // 0x80280C6C: sb          $s2, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r18;
    // 0x80280C70: sra         $s4, $t2, 16
    ctx->r20 = S32(SIGNED(ctx->r10) >> 16);
L_80280C74:
    // 0x80280C74: sll         $t4, $s3, 16
    ctx->r12 = S32(ctx->r19 << 16);
    // 0x80280C78: jal         0x8003EAD8
    // 0x80280C7C: sra         $s3, $t4, 16
    ctx->r19 = S32(SIGNED(ctx->r12) >> 16);
    func_8003EAD8(rdram, ctx);
        goto after_2;
    // 0x80280C7C: sra         $s3, $t4, 16
    ctx->r19 = S32(SIGNED(ctx->r12) >> 16);
    after_2:
    // 0x80280C80: slt         $at, $s3, $v0
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80280C84: bne         $at, $zero, L_80280C18
    if (ctx->r1 != 0) {
        // 0x80280C88: sll         $t6, $s3, 1
        ctx->r14 = S32(ctx->r19 << 1);
            goto L_80280C18;
    }
    // 0x80280C88: sll         $t6, $s3, 1
    ctx->r14 = S32(ctx->r19 << 1);
L_80280C8C:
    // 0x80280C8C: sll         $v0, $s4, 24
    ctx->r2 = S32(ctx->r20 << 24);
    // 0x80280C90: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80280C94: sra         $t6, $v0, 24
    ctx->r14 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80280C98: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x80280C9C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80280CA0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80280CA4: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80280CA8: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80280CAC: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x80280CB0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80280CB4: jr          $ra
    // 0x80280CB8: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    return;
    // 0x80280CB8: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
;}
RECOMP_FUNC void func_80280CBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80280CBC: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80280CC0: lb          $t6, -0x32A1($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X32A1);
    // 0x80280CC4: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x80280CC8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80280CCC: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80280CD0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80280CD4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80280CD8: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80280CDC: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80280CE0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80280CE4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80280CE8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80280CEC: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80280CF0: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80280CF4: addiu       $t8, $t8, -0x2F80
    ctx->r24 = ADD32(ctx->r24, -0X2F80);
    // 0x80280CF8: addu        $v1, $t7, $t8
    ctx->r3 = ADD32(ctx->r15, ctx->r24);
    // 0x80280CFC: lb          $a1, 0x5($v1)
    ctx->r5 = MEM_B(ctx->r3, 0X5);
    // 0x80280D00: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80280D04: addiu       $a3, $zero, 0x47C
    ctx->r7 = ADD32(0, 0X47C);
L_80280D08:
    // 0x80280D08: blez        $a1, L_80280D88
    if (SIGNED(ctx->r5) <= 0) {
        // 0x80280D0C: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_80280D88;
    }
    // 0x80280D0C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80280D10: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x80280D14: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x80280D18: lb          $a2, -0x3138($a2)
    ctx->r6 = MEM_B(ctx->r6, -0X3138);
    // 0x80280D1C: nop

L_80280D20:
    // 0x80280D20: multu       $a0, $a3
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80280D24: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80280D28: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x80280D2C: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80280D30: slt         $at, $a0, $a1
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80280D34: mflo        $t9
    ctx->r25 = lo;
    // 0x80280D38: addu        $t0, $v1, $t9
    ctx->r8 = ADD32(ctx->r3, ctx->r25);
    // 0x80280D3C: lb          $t1, 0xC($t0)
    ctx->r9 = MEM_B(ctx->r8, 0XC);
    // 0x80280D40: nop

    // 0x80280D44: bne         $a2, $t1, L_80280D80
    if (ctx->r6 != ctx->r9) {
        // 0x80280D48: sll         $t2, $a2, 2
        ctx->r10 = S32(ctx->r6 << 2);
            goto L_80280D80;
    }
    // 0x80280D48: sll         $t2, $a2, 2
    ctx->r10 = S32(ctx->r6 << 2);
    // 0x80280D4C: addu        $t2, $t2, $a2
    ctx->r10 = ADD32(ctx->r10, ctx->r6);
    // 0x80280D50: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80280D54: addu        $t2, $t2, $a2
    ctx->r10 = ADD32(ctx->r10, ctx->r6);
    // 0x80280D58: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80280D5C: subu        $t2, $t2, $a2
    ctx->r10 = SUB32(ctx->r10, ctx->r6);
    // 0x80280D60: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80280D64: addu        $t3, $v1, $t2
    ctx->r11 = ADD32(ctx->r3, ctx->r10);
    // 0x80280D68: lb          $v0, 0x5DD($t3)
    ctx->r2 = MEM_B(ctx->r11, 0X5DD);
    // 0x80280D6C: nop

    // 0x80280D70: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80280D74: sll         $t4, $v0, 16
    ctx->r12 = S32(ctx->r2 << 16);
    // 0x80280D78: jr          $ra
    // 0x80280D7C: sra         $v0, $t4, 16
    ctx->r2 = S32(SIGNED(ctx->r12) >> 16);
    return;
    // 0x80280D7C: sra         $v0, $t4, 16
    ctx->r2 = S32(SIGNED(ctx->r12) >> 16);
L_80280D80:
    // 0x80280D80: bne         $at, $zero, L_80280D20
    if (ctx->r1 != 0) {
        // 0x80280D84: nop
    
            goto L_80280D20;
    }
    // 0x80280D84: nop

L_80280D88:
    // 0x80280D88: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80280D8C: sll         $t8, $v0, 16
    ctx->r24 = S32(ctx->r2 << 16);
    // 0x80280D90: sra         $v0, $t8, 16
    ctx->r2 = S32(SIGNED(ctx->r24) >> 16);
    // 0x80280D94: slti        $at, $v0, 0x24
    ctx->r1 = SIGNED(ctx->r2) < 0X24 ? 1 : 0;
    // 0x80280D98: bne         $at, $zero, L_80280D08
    if (ctx->r1 != 0) {
        // 0x80280D9C: nop
    
            goto L_80280D08;
    }
    // 0x80280D9C: nop

    // 0x80280DA0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80280DA4: jr          $ra
    // 0x80280DA8: nop

    return;
    // 0x80280DA8: nop

;}
RECOMP_FUNC void func_80280DAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80280DAC: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80280DB0: lb          $t6, -0x32A1($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X32A1);
    // 0x80280DB4: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80280DB8: bne         $t6, $zero, L_80280DF4
    if (ctx->r14 != 0) {
        // 0x80280DBC: lui         $t9, 0x8012
        ctx->r25 = S32(0X8012 << 16);
            goto L_80280DF4;
    }
    // 0x80280DBC: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x80280DC0: lb          $t7, -0x3138($t7)
    ctx->r15 = MEM_B(ctx->r15, -0X3138);
    // 0x80280DC4: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x80280DC8: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80280DCC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80280DD0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80280DD4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80280DD8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80280DDC: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80280DE0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80280DE4: addu        $v0, $v0, $t8
    ctx->r2 = ADD32(ctx->r2, ctx->r24);
    // 0x80280DE8: lb          $v0, -0x2AD4($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2AD4);
    // 0x80280DEC: jr          $ra
    // 0x80280DF0: nop

    return;
    // 0x80280DF0: nop

L_80280DF4:
    // 0x80280DF4: lb          $t9, -0x30E1($t9)
    ctx->r25 = MEM_B(ctx->r25, -0X30E1);
    // 0x80280DF8: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x80280DFC: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80280E00: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80280E04: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80280E08: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80280E0C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80280E10: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x80280E14: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80280E18: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x80280E1C: lb          $v0, 0x8C4($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X8C4);
    // 0x80280E20: nop

    // 0x80280E24: jr          $ra
    // 0x80280E28: nop

    return;
    // 0x80280E28: nop

;}
RECOMP_FUNC void func_80280E2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80280E2C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80280E30: lb          $t6, -0x32A1($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X32A1);
    // 0x80280E34: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80280E38: bne         $t6, $zero, L_80280E50
    if (ctx->r14 != 0) {
        // 0x80280E3C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80280E50;
    }
    // 0x80280E3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80280E40: jal         0x80280CBC
    // 0x80280E44: nop

    func_80280CBC(rdram, ctx);
        goto after_0;
    // 0x80280E44: nop

    after_0:
    // 0x80280E48: b           L_80280E60
    // 0x80280E4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80280E60;
    // 0x80280E4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80280E50:
    // 0x80280E50: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x80280E54: lb          $v0, 0x419($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X419);
    // 0x80280E58: nop

    // 0x80280E5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80280E60:
    // 0x80280E60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80280E64: jr          $ra
    // 0x80280E68: nop

    return;
    // 0x80280E68: nop

;}
RECOMP_FUNC void func_80280E6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80280E6C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80280E70: lb          $t6, -0x32A1($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X32A1);
    // 0x80280E74: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80280E78: bne         $t6, $zero, L_80280E98
    if (ctx->r14 != 0) {
        // 0x80280E7C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80280E98;
    }
    // 0x80280E7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80280E80: jal         0x80280CBC
    // 0x80280E84: nop

    func_80280CBC(rdram, ctx);
        goto after_0;
    // 0x80280E84: nop

    after_0:
    // 0x80280E88: bne         $v0, $zero, L_80280EC8
    if (ctx->r2 != 0) {
        // 0x80280E8C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80280EC8;
    }
    // 0x80280E8C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80280E90: b           L_80280EC8
    // 0x80280E94: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80280EC8;
    // 0x80280E94: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80280E98:
    // 0x80280E98: jal         0x80280DAC
    // 0x80280E9C: nop

    func_80280DAC(rdram, ctx);
        goto after_1;
    // 0x80280E9C: nop

    after_1:
    // 0x80280EA0: sh          $v0, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r2;
    // 0x80280EA4: jal         0x80049A90
    // 0x80280EA8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80049A90(rdram, ctx);
        goto after_2;
    // 0x80280EA8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x80280EAC: lh          $t7, 0x1E($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X1E);
    // 0x80280EB0: nop

    // 0x80280EB4: bne         $v0, $t7, L_80280EC8
    if (ctx->r2 != ctx->r15) {
        // 0x80280EB8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80280EC8;
    }
    // 0x80280EB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80280EBC: b           L_80280EC8
    // 0x80280EC0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80280EC8;
    // 0x80280EC0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80280EC4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80280EC8:
    // 0x80280EC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80280ECC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80280ED0: jr          $ra
    // 0x80280ED4: nop

    return;
    // 0x80280ED4: nop

;}
RECOMP_FUNC void func_80280ED8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80280ED8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80280EDC: addiu       $v0, $v0, -0x2CF0
    ctx->r2 = ADD32(ctx->r2, -0X2CF0);
    // 0x80280EE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80280EE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80280EE8: lh          $a0, 0xA($v0)
    ctx->r4 = MEM_H(ctx->r2, 0XA);
    // 0x80280EEC: lh          $a1, 0xC($v0)
    ctx->r5 = MEM_H(ctx->r2, 0XC);
    // 0x80280EF0: lh          $a2, 0xA9E($v0)
    ctx->r6 = MEM_H(ctx->r2, 0XA9E);
    // 0x80280EF4: lh          $a3, 0xAA0($v0)
    ctx->r7 = MEM_H(ctx->r2, 0XAA0);
    // 0x80280EF8: jal         0x8003CF0C
    // 0x80280EFC: nop

    func_8003CF0C(rdram, ctx);
        goto after_0;
    // 0x80280EFC: nop

    after_0:
    // 0x80280F00: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80280F04: lb          $v1, -0x32A1($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X32A1);
    // 0x80280F08: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x80280F0C: bne         $v1, $zero, L_80280F84
    if (ctx->r3 != 0) {
        // 0x80280F10: sll         $t6, $v1, 2
        ctx->r14 = S32(ctx->r3 << 2);
            goto L_80280F84;
    }
    // 0x80280F10: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
    // 0x80280F14: subu        $t6, $t6, $v1
    ctx->r14 = SUB32(ctx->r14, ctx->r3);
    // 0x80280F18: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80280F1C: addu        $t6, $t6, $v1
    ctx->r14 = ADD32(ctx->r14, ctx->r3);
    // 0x80280F20: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x80280F24: subu        $t6, $t6, $v1
    ctx->r14 = SUB32(ctx->r14, ctx->r3);
    // 0x80280F28: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80280F2C: addu        $t6, $t6, $v1
    ctx->r14 = ADD32(ctx->r14, ctx->r3);
    // 0x80280F30: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80280F34: subu        $t6, $t6, $v1
    ctx->r14 = SUB32(ctx->r14, ctx->r3);
    // 0x80280F38: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x80280F3C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80280F40: lb          $t7, -0x2F7E($t7)
    ctx->r15 = MEM_B(ctx->r15, -0X2F7E);
    // 0x80280F44: andi        $t8, $v0, 0xFF
    ctx->r24 = ctx->r2 & 0XFF;
    // 0x80280F48: slti        $at, $t7, 0x2
    ctx->r1 = SIGNED(ctx->r15) < 0X2 ? 1 : 0;
    // 0x80280F4C: bne         $at, $zero, L_80280F84
    if (ctx->r1 != 0) {
        // 0x80280F50: slti        $at, $t8, 0x2
        ctx->r1 = SIGNED(ctx->r24) < 0X2 ? 1 : 0;
            goto L_80280F84;
    }
    // 0x80280F50: slti        $at, $t8, 0x2
    ctx->r1 = SIGNED(ctx->r24) < 0X2 ? 1 : 0;
    // 0x80280F54: beq         $at, $zero, L_80280F84
    if (ctx->r1 == 0) {
        // 0x80280F58: addiu       $t9, $zero, 0x29
        ctx->r25 = ADD32(0, 0X29);
            goto L_80280F84;
    }
    // 0x80280F58: addiu       $t9, $zero, 0x29
    ctx->r25 = ADD32(0, 0X29);
    // 0x80280F5C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80280F60: sb          $t9, -0x3082($at)
    MEM_B(-0X3082, ctx->r1) = ctx->r25;
    // 0x80280F64: jal         0x800331E0
    // 0x80280F68: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800331E0(rdram, ctx);
        goto after_1;
    // 0x80280F68: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x80280F6C: jal         0x80034908
    // 0x80280F70: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80034908(rdram, ctx);
        goto after_2;
    // 0x80280F70: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x80280F74: bne         $v0, $zero, L_80280F88
    if (ctx->r2 != 0) {
        // 0x80280F78: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80280F88;
    }
    // 0x80280F78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80280F7C: jal         0x80035154
    // 0x80280F80: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80035154(rdram, ctx);
        goto after_3;
    // 0x80280F80: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
L_80280F84:
    // 0x80280F84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80280F88:
    // 0x80280F88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80280F8C: jr          $ra
    // 0x80280F90: nop

    return;
    // 0x80280F90: nop

    // 0x80280F94: nop

    // 0x80280F98: nop

    // 0x80280F9C: nop

;}
RECOMP_FUNC void func_8028B800(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028B800: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8028B804: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8028B808: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8028B80C: jal         0x8028B910
    // 0x8028B810: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8028B910(rdram, ctx);
        goto after_0;
    // 0x8028B810: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8028B814: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8028B818: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8028B81C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8028B820: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8028B824: addiu       $v0, $v0, 0x1B00
    ctx->r2 = ADD32(ctx->r2, 0X1B00);
    // 0x8028B828: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8028B82C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8028B830: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x8028B834: jr          $ra
    // 0x8028B838: sw          $t6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r14;
    return;
    // 0x8028B838: sw          $t6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r14;
;}
RECOMP_FUNC void func_8028B83C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028B83C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8028B840: lw          $v0, 0x1B04($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1B04);
    // 0x8028B844: jr          $ra
    // 0x8028B848: nop

    return;
    // 0x8028B848: nop

;}
RECOMP_FUNC void func_8028B84C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028B84C: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x8028B850: addiu       $a2, $a2, 0x1B00
    ctx->r6 = ADD32(ctx->r6, 0X1B00);
    // 0x8028B854: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x8028B858: lw          $t6, 0x8($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X8);
    // 0x8028B85C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8028B860: sltu        $at, $a0, $v0
    ctx->r1 = ctx->r4 < ctx->r2 ? 1 : 0;
    // 0x8028B864: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8028B868: beq         $at, $zero, L_8028B874
    if (ctx->r1 == 0) {
        // 0x8028B86C: addu        $v1, $v0, $t6
        ctx->r3 = ADD32(ctx->r2, ctx->r14);
            goto L_8028B874;
    }
    // 0x8028B86C: addu        $v1, $v0, $t6
    ctx->r3 = ADD32(ctx->r2, ctx->r14);
    // 0x8028B870: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_8028B874:
    // 0x8028B874: subu        $a1, $v1, $a0
    ctx->r5 = SUB32(ctx->r3, ctx->r4);
    // 0x8028B878: sw          $a0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r4;
    // 0x8028B87C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x8028B880: jal         0x8028B910
    // 0x8028B884: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_8028B910(rdram, ctx);
        goto after_0;
    // 0x8028B884: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x8028B888: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8028B88C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x8028B890: jal         0x8028BCA0
    // 0x8028B894: nop

    func_8028BCA0(rdram, ctx);
        goto after_1;
    // 0x8028B894: nop

    after_1:
    // 0x8028B898: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8028B89C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8028B8A0: jr          $ra
    // 0x8028B8A4: nop

    return;
    // 0x8028B8A4: nop

;}
RECOMP_FUNC void func_8028B8A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028B8A8: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x8028B8AC: addiu       $a2, $a2, 0x1B00
    ctx->r6 = ADD32(ctx->r6, 0X1B00);
    // 0x8028B8B0: lw          $a1, 0x4($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X4);
    // 0x8028B8B4: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x8028B8B8: lw          $t7, 0x8($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X8);
    // 0x8028B8BC: addu        $t9, $a1, $a0
    ctx->r25 = ADD32(ctx->r5, ctx->r4);
    // 0x8028B8C0: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8028B8C4: sltu        $at, $t8, $t9
    ctx->r1 = ctx->r24 < ctx->r25 ? 1 : 0;
    // 0x8028B8C8: beq         $at, $zero, L_8028B8D8
    if (ctx->r1 == 0) {
        // 0x8028B8CC: or          $v1, $a1, $zero
        ctx->r3 = ctx->r5 | 0;
            goto L_8028B8D8;
    }
    // 0x8028B8CC: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x8028B8D0: jr          $ra
    // 0x8028B8D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8028B8D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8028B8D8:
    // 0x8028B8D8: addu        $t0, $a1, $a0
    ctx->r8 = ADD32(ctx->r5, ctx->r4);
    // 0x8028B8DC: sw          $t0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r8;
    // 0x8028B8E0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8028B8E4: jr          $ra
    // 0x8028B8E8: nop

    return;
    // 0x8028B8E8: nop

;}
RECOMP_FUNC void func_8028B8EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028B8EC: addiu       $t6, $a0, 0x1
    ctx->r14 = ADD32(ctx->r4, 0X1);
    // 0x8028B8F0: lui         $t8, 0x800A
    ctx->r24 = S32(0X800A << 16);
    // 0x8028B8F4: addiu       $t8, $t8, 0x6270
    ctx->r24 = ADD32(ctx->r24, 0X6270);
    // 0x8028B8F8: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x8028B8FC: addu        $a1, $t7, $t8
    ctx->r5 = ADD32(ctx->r15, ctx->r24);
    // 0x8028B900: lw          $v1, 0x4($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X4);
    // 0x8028B904: lw          $t9, 0x0($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X0);
    // 0x8028B908: jr          $ra
    // 0x8028B90C: subu        $v0, $v1, $t9
    ctx->r2 = SUB32(ctx->r3, ctx->r25);
    return;
    // 0x8028B90C: subu        $v0, $v1, $t9
    ctx->r2 = SUB32(ctx->r3, ctx->r25);
;}
RECOMP_FUNC void func_8028B910(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028B910: srl         $v1, $a1, 2
    ctx->r3 = S32(U32(ctx->r5) >> 2);
    // 0x8028B914: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8028B918: beq         $v1, $zero, L_8028B93C
    if (ctx->r3 == 0) {
        // 0x8028B91C: addiu       $a2, $v1, -0x1
        ctx->r6 = ADD32(ctx->r3, -0X1);
            goto L_8028B93C;
    }
    // 0x8028B91C: addiu       $a2, $v1, -0x1
    ctx->r6 = ADD32(ctx->r3, -0X1);
    // 0x8028B920: lui         $a0, 0xDEAD
    ctx->r4 = S32(0XDEAD << 16);
    // 0x8028B924: ori         $a0, $a0, 0xBEAF
    ctx->r4 = ctx->r4 | 0XBEAF;
L_8028B928:
    // 0x8028B928: or          $v1, $a2, $zero
    ctx->r3 = ctx->r6 | 0;
    // 0x8028B92C: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
    // 0x8028B930: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8028B934: bne         $a2, $zero, L_8028B928
    if (ctx->r6 != 0) {
        // 0x8028B938: addiu       $a2, $a2, -0x1
        ctx->r6 = ADD32(ctx->r6, -0X1);
            goto L_8028B928;
    }
    // 0x8028B938: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
L_8028B93C:
    // 0x8028B93C: jr          $ra
    // 0x8028B940: nop

    return;
    // 0x8028B940: nop

    // 0x8028B944: nop

    // 0x8028B948: nop

    // 0x8028B94C: nop

;}
RECOMP_FUNC void func_8028B950(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028B950: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8028B954: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8028B958: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x8028B95C: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x8028B960: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8028B964: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8028B968: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8028B96C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8028B970: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8028B974: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8028B978: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8028B97C: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8028B980: lui         $s6, 0xFF00
    ctx->r22 = S32(0XFF00 << 16);
    // 0x8028B984: lui         $s5, 0xB800
    ctx->r21 = S32(0XB800 << 16);
    // 0x8028B988: and         $t7, $t6, $s6
    ctx->r15 = ctx->r14 & ctx->r22;
    // 0x8028B98C: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x8028B990: beq         $s5, $t7, L_8028BAA0
    if (ctx->r21 == ctx->r15) {
        // 0x8028B994: or          $s1, $a0, $zero
        ctx->r17 = ctx->r4 | 0;
            goto L_8028BAA0;
    }
    // 0x8028B994: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x8028B998: lui         $fp, 0x3
    ctx->r30 = S32(0X3 << 16);
    // 0x8028B99C: lui         $s2, 0xF
    ctx->r18 = S32(0XF << 16);
    // 0x8028B9A0: ori         $s2, $s2, 0xFFFF
    ctx->r18 = ctx->r18 | 0XFFFF;
    // 0x8028B9A4: ori         $fp, $fp, 0xFFFF
    ctx->r30 = ctx->r30 | 0XFFFF;
    // 0x8028B9A8: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x8028B9AC: and         $v0, $t6, $s6
    ctx->r2 = ctx->r14 & ctx->r22;
    // 0x8028B9B0: lui         $s7, 0xFD00
    ctx->r23 = S32(0XFD00 << 16);
    // 0x8028B9B4: lui         $s3, 0xC000
    ctx->r19 = S32(0XC000 << 16);
L_8028B9B8:
    // 0x8028B9B8: bne         $s7, $v0, L_8028BA00
    if (ctx->r23 != ctx->r2) {
        // 0x8028B9BC: lui         $at, 0x400
        ctx->r1 = S32(0X400 << 16);
            goto L_8028BA00;
    }
    // 0x8028B9BC: lui         $at, 0x400
    ctx->r1 = S32(0X400 << 16);
    // 0x8028B9C0: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x8028B9C4: lui         $at, 0xF00
    ctx->r1 = S32(0XF00 << 16);
    // 0x8028B9C8: and         $t8, $v0, $s3
    ctx->r24 = ctx->r2 & ctx->r19;
    // 0x8028B9CC: bne         $s3, $t8, L_8028BA8C
    if (ctx->r19 != ctx->r24) {
        // 0x8028B9D0: and         $a0, $v0, $fp
        ctx->r4 = ctx->r2 & ctx->r30;
            goto L_8028BA8C;
    }
    // 0x8028B9D0: and         $a0, $v0, $fp
    ctx->r4 = ctx->r2 & ctx->r30;
    // 0x8028B9D4: jal         0x8028BAD0
    // 0x8028B9D8: and         $s0, $s4, $at
    ctx->r16 = ctx->r20 & ctx->r1;
    func_8028BAD0(rdram, ctx);
        goto after_0;
    // 0x8028B9D8: and         $s0, $s4, $at
    ctx->r16 = ctx->r20 & ctx->r1;
    after_0:
    // 0x8028B9DC: bne         $v0, $zero, L_8028B9EC
    if (ctx->r2 != 0) {
        // 0x8028B9E0: lui         $at, 0xF0FF
        ctx->r1 = S32(0XF0FF << 16);
            goto L_8028B9EC;
    }
    // 0x8028B9E0: lui         $at, 0xF0FF
    ctx->r1 = S32(0XF0FF << 16);
    // 0x8028B9E4: b           L_8028BA8C
    // 0x8028B9E8: sw          $s0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r16;
        goto L_8028BA8C;
    // 0x8028B9E8: sw          $s0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r16;
L_8028B9EC:
    // 0x8028B9EC: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x8028B9F0: and         $t9, $v0, $at
    ctx->r25 = ctx->r2 & ctx->r1;
    // 0x8028B9F4: addu        $t0, $t9, $s0
    ctx->r8 = ADD32(ctx->r25, ctx->r16);
    // 0x8028B9F8: b           L_8028BA8C
    // 0x8028B9FC: sw          $t0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r8;
        goto L_8028BA8C;
    // 0x8028B9FC: sw          $t0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r8;
L_8028BA00:
    // 0x8028BA00: bne         $v0, $at, L_8028BA8C
    if (ctx->r2 != ctx->r1) {
        // 0x8028BA04: andi        $a1, $a0, 0xFC00
        ctx->r5 = ctx->r4 & 0XFC00;
            goto L_8028BA8C;
    }
    // 0x8028BA04: andi        $a1, $a0, 0xFC00
    ctx->r5 = ctx->r4 & 0XFC00;
    // 0x8028BA08: lw          $v1, 0x4($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X4);
    // 0x8028BA0C: lui         $at, 0xF00
    ctx->r1 = S32(0XF00 << 16);
    // 0x8028BA10: and         $v0, $v1, $at
    ctx->r2 = ctx->r3 & ctx->r1;
    // 0x8028BA14: srl         $t1, $a1, 10
    ctx->r9 = S32(U32(ctx->r5) >> 10);
    // 0x8028BA18: srl         $t2, $v0, 24
    ctx->r10 = S32(U32(ctx->r2) >> 24);
    // 0x8028BA1C: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x8028BA20: beq         $t2, $at, L_8028BA48
    if (ctx->r10 == ctx->r1) {
        // 0x8028BA24: or          $a1, $t1, $zero
        ctx->r5 = ctx->r9 | 0;
            goto L_8028BA48;
    }
    // 0x8028BA24: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    // 0x8028BA28: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x8028BA2C: beq         $t2, $at, L_8028BA64
    if (ctx->r10 == ctx->r1) {
        // 0x8028BA30: and         $t5, $v1, $s2
        ctx->r13 = ctx->r3 & ctx->r18;
            goto L_8028BA64;
    }
    // 0x8028BA30: and         $t5, $v1, $s2
    ctx->r13 = ctx->r3 & ctx->r18;
    // 0x8028BA34: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x8028BA38: beq         $t2, $at, L_8028BA7C
    if (ctx->r10 == ctx->r1) {
        // 0x8028BA3C: and         $t7, $v1, $s2
        ctx->r15 = ctx->r3 & ctx->r18;
            goto L_8028BA7C;
    }
    // 0x8028BA3C: and         $t7, $v1, $s2
    ctx->r15 = ctx->r3 & ctx->r18;
    // 0x8028BA40: b           L_8028BA90
    // 0x8028BA44: lw          $a0, 0x8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X8);
        goto L_8028BA90;
    // 0x8028BA44: lw          $a0, 0x8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X8);
L_8028BA48:
    // 0x8028BA48: lui         $t4, 0x802C
    ctx->r12 = S32(0X802C << 16);
    // 0x8028BA4C: lw          $t4, -0x3570($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X3570);
    // 0x8028BA50: and         $t3, $v1, $s2
    ctx->r11 = ctx->r3 & ctx->r18;
    // 0x8028BA54: jal         0x8028C980
    // 0x8028BA58: addu        $a0, $t3, $t4
    ctx->r4 = ADD32(ctx->r11, ctx->r12);
    func_8028C980(rdram, ctx);
        goto after_1;
    // 0x8028BA58: addu        $a0, $t3, $t4
    ctx->r4 = ADD32(ctx->r11, ctx->r12);
    after_1:
    // 0x8028BA5C: b           L_8028BA90
    // 0x8028BA60: lw          $a0, 0x8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X8);
        goto L_8028BA90;
    // 0x8028BA60: lw          $a0, 0x8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X8);
L_8028BA64:
    // 0x8028BA64: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x8028BA68: lw          $t6, -0x356C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X356C);
    // 0x8028BA6C: jal         0x8028C980
    // 0x8028BA70: addu        $a0, $t5, $t6
    ctx->r4 = ADD32(ctx->r13, ctx->r14);
    func_8028C980(rdram, ctx);
        goto after_2;
    // 0x8028BA70: addu        $a0, $t5, $t6
    ctx->r4 = ADD32(ctx->r13, ctx->r14);
    after_2:
    // 0x8028BA74: b           L_8028BA90
    // 0x8028BA78: lw          $a0, 0x8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X8);
        goto L_8028BA90;
    // 0x8028BA78: lw          $a0, 0x8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X8);
L_8028BA7C:
    // 0x8028BA7C: lui         $t8, 0x802C
    ctx->r24 = S32(0X802C << 16);
    // 0x8028BA80: lw          $t8, -0x3568($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3568);
    // 0x8028BA84: jal         0x8028C980
    // 0x8028BA88: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    func_8028C980(rdram, ctx);
        goto after_3;
    // 0x8028BA88: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    after_3:
L_8028BA8C:
    // 0x8028BA8C: lw          $a0, 0x8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X8);
L_8028BA90:
    // 0x8028BA90: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x8028BA94: and         $v0, $a0, $s6
    ctx->r2 = ctx->r4 & ctx->r22;
    // 0x8028BA98: bne         $s5, $v0, L_8028B9B8
    if (ctx->r21 != ctx->r2) {
        // 0x8028BA9C: nop
    
            goto L_8028B9B8;
    }
    // 0x8028BA9C: nop

L_8028BAA0:
    // 0x8028BAA0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8028BAA4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8028BAA8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8028BAAC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8028BAB0: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8028BAB4: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8028BAB8: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8028BABC: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8028BAC0: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8028BAC4: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x8028BAC8: jr          $ra
    // 0x8028BACC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x8028BACC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8028BAD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028BAD0: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x8028BAD4: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8028BAD8: addiu       $v0, $v0, 0x3310
    ctx->r2 = ADD32(ctx->r2, 0X3310);
    // 0x8028BADC: addiu       $v1, $v1, 0x1B10
    ctx->r3 = ADD32(ctx->r3, 0X1B10);
L_8028BAE0:
    // 0x8028BAE0: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x8028BAE4: nop

    // 0x8028BAE8: bne         $a0, $t6, L_8028BAFC
    if (ctx->r4 != ctx->r14) {
        // 0x8028BAEC: nop
    
            goto L_8028BAFC;
    }
    // 0x8028BAEC: nop

    // 0x8028BAF0: lw          $v0, 0x8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X8);
    // 0x8028BAF4: jr          $ra
    // 0x8028BAF8: nop

    return;
    // 0x8028BAF8: nop

L_8028BAFC:
    // 0x8028BAFC: lw          $t7, 0xC($v1)
    ctx->r15 = MEM_W(ctx->r3, 0XC);
    // 0x8028BB00: nop

    // 0x8028BB04: bne         $a0, $t7, L_8028BB18
    if (ctx->r4 != ctx->r15) {
        // 0x8028BB08: nop
    
            goto L_8028BB18;
    }
    // 0x8028BB08: nop

    // 0x8028BB0C: lw          $v0, 0x14($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X14);
    // 0x8028BB10: jr          $ra
    // 0x8028BB14: nop

    return;
    // 0x8028BB14: nop

L_8028BB18:
    // 0x8028BB18: lw          $t8, 0x18($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X18);
    // 0x8028BB1C: nop

    // 0x8028BB20: bne         $a0, $t8, L_8028BB34
    if (ctx->r4 != ctx->r24) {
        // 0x8028BB24: nop
    
            goto L_8028BB34;
    }
    // 0x8028BB24: nop

    // 0x8028BB28: lw          $v0, 0x20($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X20);
    // 0x8028BB2C: jr          $ra
    // 0x8028BB30: nop

    return;
    // 0x8028BB30: nop

L_8028BB34:
    // 0x8028BB34: lw          $t9, 0x24($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X24);
    // 0x8028BB38: nop

    // 0x8028BB3C: bne         $a0, $t9, L_8028BB50
    if (ctx->r4 != ctx->r25) {
        // 0x8028BB40: nop
    
            goto L_8028BB50;
    }
    // 0x8028BB40: nop

    // 0x8028BB44: lw          $v0, 0x2C($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X2C);
    // 0x8028BB48: jr          $ra
    // 0x8028BB4C: nop

    return;
    // 0x8028BB4C: nop

L_8028BB50:
    // 0x8028BB50: addiu       $v1, $v1, 0x30
    ctx->r3 = ADD32(ctx->r3, 0X30);
    // 0x8028BB54: bne         $v1, $v0, L_8028BAE0
    if (ctx->r3 != ctx->r2) {
        // 0x8028BB58: nop
    
            goto L_8028BAE0;
    }
    // 0x8028BB58: nop

    // 0x8028BB5C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8028BB60: jr          $ra
    // 0x8028BB64: nop

    return;
    // 0x8028BB64: nop

;}
RECOMP_FUNC void func_8028BB68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028BB68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8028BB6C: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x8028BB70: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x8028BB74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8028BB78: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8028BB7C: jal         0x8028BB94
    // 0x8028BB80: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    func_8028BB94(rdram, ctx);
        goto after_0;
    // 0x8028BB80: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    after_0:
    // 0x8028BB84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8028BB88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8028BB8C: jr          $ra
    // 0x8028BB90: nop

    return;
    // 0x8028BB90: nop

;}
RECOMP_FUNC void func_8028BB94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028BB94: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8028BB98: sll         $t7, $a1, 3
    ctx->r15 = S32(ctx->r5 << 3);
    // 0x8028BB9C: lui         $t8, 0x802B
    ctx->r24 = S32(0X802B << 16);
    // 0x8028BBA0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8028BBA4: lw          $t8, 0x5E04($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X5E04);
    // 0x8028BBA8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8028BBAC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8028BBB0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8028BBB4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8028BBB8: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8028BBBC: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x8028BBC0: sw          $t9, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r25;
    // 0x8028BBC4: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x8028BBC8: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8028BBCC: jal         0x80025A10
    // 0x8028BBD0: sw          $t0, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r8;
    func_80025A10(rdram, ctx);
        goto after_0;
    // 0x8028BBD0: sw          $t0, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r8;
    after_0:
    // 0x8028BBD4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8028BBD8: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8028BBDC: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x8028BBE0: jal         0x8028BBF8
    // 0x8028BBE4: nop

    func_8028BBF8(rdram, ctx);
        goto after_1;
    // 0x8028BBE4: nop

    after_1:
    // 0x8028BBE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8028BBEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8028BBF0: jr          $ra
    // 0x8028BBF4: nop

    return;
    // 0x8028BBF4: nop

;}
RECOMP_FUNC void func_8028BBF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028BBF8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8028BBFC: lui         $v1, 0x802B
    ctx->r3 = S32(0X802B << 16);
    // 0x8028BC00: addiu       $v1, $v1, 0x5E08
    ctx->r3 = ADD32(ctx->r3, 0X5E08);
    // 0x8028BC04: sll         $t6, $a1, 3
    ctx->r14 = S32(ctx->r5 << 3);
    // 0x8028BC08: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8028BC0C: addu        $t7, $v1, $t6
    ctx->r15 = ADD32(ctx->r3, ctx->r14);
    // 0x8028BC10: lw          $s0, -0x8($t7)
    ctx->r16 = MEM_W(ctx->r15, -0X8);
    // 0x8028BC14: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8028BC18: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8028BC1C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8028BC20: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8028BC24: sll         $t8, $a0, 3
    ctx->r24 = S32(ctx->r4 << 3);
    // 0x8028BC28: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x8028BC2C: addu        $t9, $v1, $t8
    ctx->r25 = ADD32(ctx->r3, ctx->r24);
    // 0x8028BC30: lw          $s1, -0x8($t9)
    ctx->r17 = MEM_W(ctx->r25, -0X8);
    // 0x8028BC34: lw          $s2, 0x4($s0)
    ctx->r18 = MEM_W(ctx->r16, 0X4);
    // 0x8028BC38: beq         $t0, $zero, L_8028BC84
    if (ctx->r8 == 0) {
        // 0x8028BC3C: or          $s3, $a2, $zero
        ctx->r19 = ctx->r6 | 0;
            goto L_8028BC84;
    }
    // 0x8028BC3C: or          $s3, $a2, $zero
    ctx->r19 = ctx->r6 | 0;
    // 0x8028BC40: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x8028BC44: nop

    // 0x8028BC48: beq         $a0, $zero, L_8028BC88
    if (ctx->r4 == 0) {
        // 0x8028BC4C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_8028BC88;
    }
    // 0x8028BC4C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8028BC50:
    // 0x8028BC50: lw          $t1, 0x4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X4);
    // 0x8028BC54: nop

    // 0x8028BC58: subu        $t2, $t1, $s2
    ctx->r10 = SUB32(ctx->r9, ctx->r18);
    // 0x8028BC5C: jal         0x8028BD58
    // 0x8028BC60: addu        $a1, $t2, $s3
    ctx->r5 = ADD32(ctx->r10, ctx->r19);
    func_8028BD58(rdram, ctx);
        goto after_0;
    // 0x8028BC60: addu        $a1, $t2, $s3
    ctx->r5 = ADD32(ctx->r10, ctx->r19);
    after_0:
    // 0x8028BC64: lw          $t3, 0x8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X8);
    // 0x8028BC68: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x8028BC6C: beq         $t3, $zero, L_8028BC84
    if (ctx->r11 == 0) {
        // 0x8028BC70: addiu       $s1, $s1, 0x8
        ctx->r17 = ADD32(ctx->r17, 0X8);
            goto L_8028BC84;
    }
    // 0x8028BC70: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x8028BC74: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x8028BC78: nop

    // 0x8028BC7C: bne         $a0, $zero, L_8028BC50
    if (ctx->r4 != 0) {
        // 0x8028BC80: nop
    
            goto L_8028BC50;
    }
    // 0x8028BC80: nop

L_8028BC84:
    // 0x8028BC84: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8028BC88:
    // 0x8028BC88: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8028BC8C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8028BC90: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8028BC94: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8028BC98: jr          $ra
    // 0x8028BC9C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8028BC9C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8028BCA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028BCA0: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x8028BCA4: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x8028BCA8: addiu       $a2, $a2, 0x3310
    ctx->r6 = ADD32(ctx->r6, 0X3310);
    // 0x8028BCAC: addiu       $v1, $v1, 0x1B10
    ctx->r3 = ADD32(ctx->r3, 0X1B10);
L_8028BCB0:
    // 0x8028BCB0: lw          $v0, 0x8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X8);
    // 0x8028BCB4: addu        $t6, $a0, $a1
    ctx->r14 = ADD32(ctx->r4, ctx->r5);
    // 0x8028BCB8: sltu        $at, $a0, $v0
    ctx->r1 = ctx->r4 < ctx->r2 ? 1 : 0;
    // 0x8028BCBC: beq         $at, $zero, L_8028BCD4
    if (ctx->r1 == 0) {
        // 0x8028BCC0: sltu        $at, $v0, $t6
        ctx->r1 = ctx->r2 < ctx->r14 ? 1 : 0;
            goto L_8028BCD4;
    }
    // 0x8028BCC0: sltu        $at, $v0, $t6
    ctx->r1 = ctx->r2 < ctx->r14 ? 1 : 0;
    // 0x8028BCC4: beq         $at, $zero, L_8028BCD4
    if (ctx->r1 == 0) {
        // 0x8028BCC8: nop
    
            goto L_8028BCD4;
    }
    // 0x8028BCC8: nop

    // 0x8028BCCC: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x8028BCD0: sw          $zero, 0x8($v1)
    MEM_W(0X8, ctx->r3) = 0;
L_8028BCD4:
    // 0x8028BCD4: addiu       $v1, $v1, 0xC
    ctx->r3 = ADD32(ctx->r3, 0XC);
    // 0x8028BCD8: sltu        $at, $v1, $a2
    ctx->r1 = ctx->r3 < ctx->r6 ? 1 : 0;
    // 0x8028BCDC: bne         $at, $zero, L_8028BCB0
    if (ctx->r1 != 0) {
        // 0x8028BCE0: nop
    
            goto L_8028BCB0;
    }
    // 0x8028BCE0: nop

    // 0x8028BCE4: srl         $a2, $a1, 2
    ctx->r6 = S32(U32(ctx->r5) >> 2);
    // 0x8028BCE8: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x8028BCEC: beq         $a2, $zero, L_8028BD10
    if (ctx->r6 == 0) {
        // 0x8028BCF0: addiu       $v0, $a2, -0x1
        ctx->r2 = ADD32(ctx->r6, -0X1);
            goto L_8028BD10;
    }
    // 0x8028BCF0: addiu       $v0, $a2, -0x1
    ctx->r2 = ADD32(ctx->r6, -0X1);
    // 0x8028BCF4: lui         $a1, 0xDEAD
    ctx->r5 = S32(0XDEAD << 16);
    // 0x8028BCF8: ori         $a1, $a1, 0xBEAF
    ctx->r5 = ctx->r5 | 0XBEAF;
L_8028BCFC:
    // 0x8028BCFC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8028BD00: sw          $a1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r5;
    // 0x8028BD04: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8028BD08: bne         $v0, $zero, L_8028BCFC
    if (ctx->r2 != 0) {
        // 0x8028BD0C: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_8028BCFC;
    }
    // 0x8028BD0C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
L_8028BD10:
    // 0x8028BD10: jr          $ra
    // 0x8028BD14: nop

    return;
    // 0x8028BD14: nop

;}
RECOMP_FUNC void func_8028BD18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028BD18: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x8028BD1C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8028BD20: addiu       $v0, $v0, 0x3310
    ctx->r2 = ADD32(ctx->r2, 0X3310);
    // 0x8028BD24: addiu       $v1, $v1, 0x1B10
    ctx->r3 = ADD32(ctx->r3, 0X1B10);
L_8028BD28:
    // 0x8028BD28: addiu       $v1, $v1, 0x30
    ctx->r3 = ADD32(ctx->r3, 0X30);
    // 0x8028BD2C: sw          $zero, -0x24($v1)
    MEM_W(-0X24, ctx->r3) = 0;
    // 0x8028BD30: sw          $zero, -0x1C($v1)
    MEM_W(-0X1C, ctx->r3) = 0;
    // 0x8028BD34: sw          $zero, -0x18($v1)
    MEM_W(-0X18, ctx->r3) = 0;
    // 0x8028BD38: sw          $zero, -0x10($v1)
    MEM_W(-0X10, ctx->r3) = 0;
    // 0x8028BD3C: sw          $zero, -0xC($v1)
    MEM_W(-0XC, ctx->r3) = 0;
    // 0x8028BD40: sw          $zero, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = 0;
    // 0x8028BD44: sw          $zero, -0x30($v1)
    MEM_W(-0X30, ctx->r3) = 0;
    // 0x8028BD48: bne         $v1, $v0, L_8028BD28
    if (ctx->r3 != ctx->r2) {
        // 0x8028BD4C: sw          $zero, -0x28($v1)
        MEM_W(-0X28, ctx->r3) = 0;
            goto L_8028BD28;
    }
    // 0x8028BD4C: sw          $zero, -0x28($v1)
    MEM_W(-0X28, ctx->r3) = 0;
    // 0x8028BD50: jr          $ra
    // 0x8028BD54: nop

    return;
    // 0x8028BD54: nop

;}
RECOMP_FUNC void func_8028BD58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028BD58: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x8028BD5C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8028BD60: addiu       $v0, $v0, 0x3310
    ctx->r2 = ADD32(ctx->r2, 0X3310);
    // 0x8028BD64: addiu       $v1, $v1, 0x1B10
    ctx->r3 = ADD32(ctx->r3, 0X1B10);
L_8028BD68:
    // 0x8028BD68: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x8028BD6C: nop

    // 0x8028BD70: bne         $t6, $zero, L_8028BD88
    if (ctx->r14 != 0) {
        // 0x8028BD74: nop
    
            goto L_8028BD88;
    }
    // 0x8028BD74: nop

    // 0x8028BD78: sw          $a0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r4;
    // 0x8028BD7C: sw          $a1, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r5;
    // 0x8028BD80: jr          $ra
    // 0x8028BD84: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8028BD84: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8028BD88:
    // 0x8028BD88: lw          $t7, 0xC($v1)
    ctx->r15 = MEM_W(ctx->r3, 0XC);
    // 0x8028BD8C: nop

    // 0x8028BD90: bne         $t7, $zero, L_8028BDA8
    if (ctx->r15 != 0) {
        // 0x8028BD94: nop
    
            goto L_8028BDA8;
    }
    // 0x8028BD94: nop

    // 0x8028BD98: sw          $a0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r4;
    // 0x8028BD9C: sw          $a1, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r5;
    // 0x8028BDA0: jr          $ra
    // 0x8028BDA4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8028BDA4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8028BDA8:
    // 0x8028BDA8: lw          $t8, 0x18($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X18);
    // 0x8028BDAC: nop

    // 0x8028BDB0: bne         $t8, $zero, L_8028BDC8
    if (ctx->r24 != 0) {
        // 0x8028BDB4: nop
    
            goto L_8028BDC8;
    }
    // 0x8028BDB4: nop

    // 0x8028BDB8: sw          $a0, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r4;
    // 0x8028BDBC: sw          $a1, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r5;
    // 0x8028BDC0: jr          $ra
    // 0x8028BDC4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8028BDC4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8028BDC8:
    // 0x8028BDC8: lw          $t9, 0x24($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X24);
    // 0x8028BDCC: nop

    // 0x8028BDD0: bne         $t9, $zero, L_8028BDE8
    if (ctx->r25 != 0) {
        // 0x8028BDD4: nop
    
            goto L_8028BDE8;
    }
    // 0x8028BDD4: nop

    // 0x8028BDD8: sw          $a0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r4;
    // 0x8028BDDC: sw          $a1, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r5;
    // 0x8028BDE0: jr          $ra
    // 0x8028BDE4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8028BDE4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8028BDE8:
    // 0x8028BDE8: addiu       $v1, $v1, 0x30
    ctx->r3 = ADD32(ctx->r3, 0X30);
    // 0x8028BDEC: bne         $v1, $v0, L_8028BD68
    if (ctx->r3 != ctx->r2) {
        // 0x8028BDF0: nop
    
            goto L_8028BD68;
    }
    // 0x8028BDF0: nop

    // 0x8028BDF4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8028BDF8: jr          $ra
    // 0x8028BDFC: nop

    return;
    // 0x8028BDFC: nop

;}
RECOMP_FUNC void func_8028BE00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028BE00: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8028BE04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8028BE08: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x8028BE0C: nop

    // 0x8028BE10: beq         $v0, $zero, L_8028BF04
    if (ctx->r2 == 0) {
        // 0x8028BE14: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8028BF04;
    }
    // 0x8028BE14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8028BE18: lw          $t6, 0x30($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X30);
    // 0x8028BE1C: nop

    // 0x8028BE20: beq         $t6, $zero, L_8028BF04
    if (ctx->r14 == 0) {
        // 0x8028BE24: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8028BF04;
    }
    // 0x8028BE24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8028BE28: lhu         $v1, 0x2C($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X2C);
    // 0x8028BE2C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8028BE30: beq         $v1, $zero, L_8028BE6C
    if (ctx->r3 == 0) {
        // 0x8028BE34: nop
    
            goto L_8028BE6C;
    }
    // 0x8028BE34: nop

    // 0x8028BE38: beq         $v1, $at, L_8028BE6C
    if (ctx->r3 == ctx->r1) {
        // 0x8028BE3C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8028BE6C;
    }
    // 0x8028BE3C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8028BE40: beq         $v1, $at, L_8028BE6C
    if (ctx->r3 == ctx->r1) {
        // 0x8028BE44: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8028BE6C;
    }
    // 0x8028BE44: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8028BE48: bne         $v1, $at, L_8028BE7C
    if (ctx->r3 != ctx->r1) {
        // 0x8028BE4C: nop
    
            goto L_8028BE7C;
    }
    // 0x8028BE4C: nop

    // 0x8028BE50: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8028BE54: jal         0x8028BF10
    // 0x8028BE58: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_8028BF10(rdram, ctx);
        goto after_0;
    // 0x8028BE58: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x8028BE5C: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x8028BE60: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8028BE64: b           L_8028BE98
    // 0x8028BE68: lwc1        $f4, 0x8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8);
        goto L_8028BE98;
    // 0x8028BE68: lwc1        $f4, 0x8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8);
L_8028BE6C:
    // 0x8028BE6C: jal         0x80013520
    // 0x8028BE70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80013520(rdram, ctx);
        goto after_1;
    // 0x8028BE70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x8028BE74: b           L_8028BF04
    // 0x8028BE78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8028BF04;
    // 0x8028BE78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8028BE7C:
    // 0x8028BE7C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8028BE80: jal         0x8028BFB8
    // 0x8028BE84: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_8028BFB8(rdram, ctx);
        goto after_2;
    // 0x8028BE84: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_2:
    // 0x8028BE88: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x8028BE8C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8028BE90: nop

    // 0x8028BE94: lwc1        $f4, 0x8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8);
L_8028BE98:
    // 0x8028BE98: lwc1        $f6, 0x14($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X14);
    // 0x8028BE9C: lwc1        $f10, 0xC($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0XC);
    // 0x8028BEA0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8028BEA4: lwc1        $f16, 0x18($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X18);
    // 0x8028BEA8: lwc1        $f6, 0x1C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x8028BEAC: lwc1        $f4, 0x10($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X10);
    // 0x8028BEB0: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8028BEB4: swc1        $f8, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f8.u32l;
    // 0x8028BEB8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8028BEBC: lwc1        $f10, 0x8($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8028BEC0: swc1        $f18, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f18.u32l;
    // 0x8028BEC4: swc1        $f8, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f8.u32l;
    // 0x8028BEC8: swc1        $f10, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f10.u32l;
    // 0x8028BECC: lwc1        $f16, 0xC($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0XC);
    // 0x8028BED0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8028BED4: swc1        $f16, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f16.u32l;
    // 0x8028BED8: lwc1        $f18, 0x10($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X10);
    // 0x8028BEDC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028BEE0: swc1        $f0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f0.u32l;
    // 0x8028BEE4: swc1        $f0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f0.u32l;
    // 0x8028BEE8: swc1        $f0, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f0.u32l;
    // 0x8028BEEC: swc1        $f18, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f18.u32l;
    // 0x8028BEF0: lwc1        $f4, -0x1FC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1FC);
    // 0x8028BEF4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8028BEF8: jal         0x80013520
    // 0x8028BEFC: swc1        $f4, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f4.u32l;
    func_80013520(rdram, ctx);
        goto after_3;
    // 0x8028BEFC: swc1        $f4, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f4.u32l;
    after_3:
    // 0x8028BF00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8028BF04:
    // 0x8028BF04: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8028BF08: jr          $ra
    // 0x8028BF0C: nop

    return;
    // 0x8028BF0C: nop

;}
RECOMP_FUNC void func_8028BF10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028BF10: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8028BF14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8028BF18: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x8028BF1C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8028BF20: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x8028BF24: lhu         $v0, 0x2E($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X2E);
    // 0x8028BF28: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8028BF2C: beq         $v0, $zero, L_8028BF48
    if (ctx->r2 == 0) {
        // 0x8028BF30: addiu       $a1, $zero, 0x23B
        ctx->r5 = ADD32(0, 0X23B);
            goto L_8028BF48;
    }
    // 0x8028BF30: addiu       $a1, $zero, 0x23B
    ctx->r5 = ADD32(0, 0X23B);
    // 0x8028BF34: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8028BF38: beq         $v0, $at, L_8028BF70
    if (ctx->r2 == ctx->r1) {
        // 0x8028BF3C: lui         $t9, 0x802C
        ctx->r25 = S32(0X802C << 16);
            goto L_8028BF70;
    }
    // 0x8028BF3C: lui         $t9, 0x802C
    ctx->r25 = S32(0X802C << 16);
    // 0x8028BF40: b           L_8028BFAC
    // 0x8028BF44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8028BFAC;
    // 0x8028BF44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8028BF48:
    // 0x8028BF48: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8028BF4C: jal         0x8000ABAC
    // 0x8028BF50: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    func_8000ABAC(rdram, ctx);
        goto after_0;
    // 0x8028BF50: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    after_0:
    // 0x8028BF54: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x8028BF58: nop

    // 0x8028BF5C: lhu         $t7, 0x2E($a3)
    ctx->r15 = MEM_HU(ctx->r7, 0X2E);
    // 0x8028BF60: nop

    // 0x8028BF64: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8028BF68: b           L_8028BFA8
    // 0x8028BF6C: sh          $t8, 0x2E($a3)
    MEM_H(0X2E, ctx->r7) = ctx->r24;
        goto L_8028BFA8;
    // 0x8028BF6C: sh          $t8, 0x2E($a3)
    MEM_H(0X2E, ctx->r7) = ctx->r24;
L_8028BF70:
    // 0x8028BF70: lbu         $t9, 0x3968($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X3968);
    // 0x8028BF74: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8028BF78: slti        $at, $t9, 0x9
    ctx->r1 = SIGNED(ctx->r25) < 0X9 ? 1 : 0;
    // 0x8028BF7C: bne         $at, $zero, L_8028BFA8
    if (ctx->r1 != 0) {
        // 0x8028BF80: addiu       $a1, $zero, 0x23C
        ctx->r5 = ADD32(0, 0X23C);
            goto L_8028BFA8;
    }
    // 0x8028BF80: addiu       $a1, $zero, 0x23C
    ctx->r5 = ADD32(0, 0X23C);
    // 0x8028BF84: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8028BF88: jal         0x8000ABAC
    // 0x8028BF8C: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    func_8000ABAC(rdram, ctx);
        goto after_1;
    // 0x8028BF8C: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    after_1:
    // 0x8028BF90: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x8028BF94: nop

    // 0x8028BF98: lhu         $t0, 0x2E($a3)
    ctx->r8 = MEM_HU(ctx->r7, 0X2E);
    // 0x8028BF9C: nop

    // 0x8028BFA0: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x8028BFA4: sh          $t1, 0x2E($a3)
    MEM_H(0X2E, ctx->r7) = ctx->r9;
L_8028BFA8:
    // 0x8028BFA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8028BFAC:
    // 0x8028BFAC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8028BFB0: jr          $ra
    // 0x8028BFB4: nop

    return;
    // 0x8028BFB4: nop

;}
RECOMP_FUNC void func_8028BFB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028BFB8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8028BFBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8028BFC0: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x8028BFC4: lui         $t1, 0x802C
    ctx->r9 = S32(0X802C << 16);
    // 0x8028BFC8: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x8028BFCC: lhu         $t8, 0x2C($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X2C);
    // 0x8028BFD0: lhu         $a1, 0x2E($a0)
    ctx->r5 = MEM_HU(ctx->r4, 0X2E);
    // 0x8028BFD4: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8028BFD8: addiu       $t0, $t9, -0x10
    ctx->r8 = ADD32(ctx->r25, -0X10);
    // 0x8028BFDC: addiu       $t1, $t1, -0x3C00
    ctx->r9 = ADD32(ctx->r9, -0X3C00);
    // 0x8028BFE0: lw          $v1, 0x30($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X30);
    // 0x8028BFE4: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8028BFE8: beq         $a1, $zero, L_8028C004
    if (ctx->r5 == 0) {
        // 0x8028BFEC: addu        $v0, $t0, $t1
        ctx->r2 = ADD32(ctx->r8, ctx->r9);
            goto L_8028C004;
    }
    // 0x8028BFEC: addu        $v0, $t0, $t1
    ctx->r2 = ADD32(ctx->r8, ctx->r9);
    // 0x8028BFF0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8028BFF4: beq         $a1, $at, L_8028C164
    if (ctx->r5 == ctx->r1) {
        // 0x8028BFF8: nop
    
            goto L_8028C164;
    }
    // 0x8028BFF8: nop

    // 0x8028BFFC: b           L_8028C194
    // 0x8028C000: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8028C194;
    // 0x8028C000: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8028C004:
    // 0x8028C004: lhu         $a1, 0x0($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X0);
    // 0x8028C008: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x8028C00C: sw          $a3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r7;
    // 0x8028C010: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8028C014: jal         0x8000ABAC
    // 0x8028C018: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8000ABAC(rdram, ctx);
        goto after_0;
    // 0x8028C018: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8028C01C: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x8028C020: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028C024: lwc1        $f4, 0x10($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X10);
    // 0x8028C028: lwc1        $f9, -0x1F8($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X1F8);
    // 0x8028C02C: lwc1        $f8, -0x1F4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1F4);
    // 0x8028C030: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8028C034: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x8028C038: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    // 0x8028C03C: jal         0x80080E80
    // 0x8028C040: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    func_80080E80(rdram, ctx);
        goto after_1;
    // 0x8028C040: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    after_1:
    // 0x8028C044: lwc1        $f12, 0x18($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8028C048: jal         0x80081040
    // 0x8028C04C: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    func_80081040(rdram, ctx);
        goto after_2;
    // 0x8028C04C: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x8028C050: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x8028C054: lui         $at, 0x3FB0
    ctx->r1 = S32(0X3FB0 << 16);
    // 0x8028C058: lb          $t2, 0x2($v0)
    ctx->r10 = MEM_B(ctx->r2, 0X2);
    // 0x8028C05C: mtc1        $at, $f15
    ctx->f_odd[(15 - 1) * 2] = ctx->r1;
    // 0x8028C060: mtc1        $t2, $f18
    ctx->f18.u32l = ctx->r10;
    // 0x8028C064: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x8028C068: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8028C06C: lwc1        $f16, 0x20($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8028C070: lb          $t3, 0x3($v0)
    ctx->r11 = MEM_B(ctx->r2, 0X3);
    // 0x8028C074: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8028C078: mul.d       $f8, $f6, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f14.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f14.d);
    // 0x8028C07C: cvt.d.s     $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f2.d = CVT_D_S(ctx->f16.fl);
    // 0x8028C080: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x8028C084: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x8028C088: mul.d       $f10, $f2, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f2.d, ctx->f8.d);
    // 0x8028C08C: cvt.d.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.d = CVT_D_W(ctx->f16.u32l);
    // 0x8028C090: lwc1        $f6, 0x8($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X8);
    // 0x8028C094: lhu         $t8, 0x2E($a3)
    ctx->r24 = MEM_HU(ctx->r7, 0X2E);
    // 0x8028C098: mul.d       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f10.d, ctx->f18.d);
    // 0x8028C09C: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x8028C0A0: cvt.d.s     $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.d = CVT_D_S(ctx->f0.fl);
    // 0x8028C0A4: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8028C0A8: sub.d       $f16, $f8, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f4.d); 
    ctx->f16.d = ctx->f8.d - ctx->f4.d;
    // 0x8028C0AC: cvt.s.d     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f10.fl = CVT_S_D(ctx->f16.d);
    // 0x8028C0B0: swc1        $f10, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->f10.u32l;
    // 0x8028C0B4: lb          $t4, 0x2($v0)
    ctx->r12 = MEM_B(ctx->r2, 0X2);
    // 0x8028C0B8: lb          $t5, 0x3($v0)
    ctx->r13 = MEM_B(ctx->r2, 0X3);
    // 0x8028C0BC: mtc1        $t4, $f18
    ctx->f18.u32l = ctx->r12;
    // 0x8028C0C0: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x8028C0C4: cvt.s.w     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8028C0C8: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x8028C0CC: mul.d       $f4, $f8, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f14.d); 
    ctx->f4.d = MUL_D(ctx->f8.d, ctx->f14.d);
    // 0x8028C0D0: cvt.d.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.d = CVT_D_W(ctx->f10.u32l);
    // 0x8028C0D4: lwc1        $f8, 0xC($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0XC);
    // 0x8028C0D8: mul.d       $f16, $f12, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f4.d); 
    ctx->f16.d = MUL_D(ctx->f12.d, ctx->f4.d);
    // 0x8028C0DC: cvt.d.s     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f4.d = CVT_D_S(ctx->f8.fl);
    // 0x8028C0E0: mul.d       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f6.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x8028C0E4: lwc1        $f18, 0x14($a3)
    ctx->f18.u32l = MEM_W(ctx->r7, 0X14);
    // 0x8028C0E8: nop

    // 0x8028C0EC: cvt.d.s     $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f8.d = CVT_D_S(ctx->f18.fl);
    // 0x8028C0F0: sub.d       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = ctx->f4.d - ctx->f6.d;
    // 0x8028C0F4: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x8028C0F8: swc1        $f16, 0xC($a3)
    MEM_W(0XC, ctx->r7) = ctx->f16.u32l;
    // 0x8028C0FC: lb          $t6, 0x2($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X2);
    // 0x8028C100: nop

    // 0x8028C104: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x8028C108: nop

    // 0x8028C10C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8028C110: cvt.d.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f10.d = CVT_D_S(ctx->f6.fl);
    // 0x8028C114: mul.d       $f16, $f10, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f14.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f14.d);
    // 0x8028C118: lwc1        $f10, 0x18($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X18);
    // 0x8028C11C: mul.d       $f18, $f2, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f2.d, ctx->f16.d);
    // 0x8028C120: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x8028C124: add.d       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f8.d + ctx->f18.d;
    // 0x8028C128: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x8028C12C: swc1        $f6, 0x14($a3)
    MEM_W(0X14, ctx->r7) = ctx->f6.u32l;
    // 0x8028C130: lb          $t7, 0x2($v0)
    ctx->r15 = MEM_B(ctx->r2, 0X2);
    // 0x8028C134: sh          $t9, 0x2E($a3)
    MEM_H(0X2E, ctx->r7) = ctx->r25;
    // 0x8028C138: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x8028C13C: nop

    // 0x8028C140: cvt.s.w     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    ctx->f18.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8028C144: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x8028C148: mul.d       $f6, $f4, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f14.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f14.d);
    // 0x8028C14C: nop

    // 0x8028C150: mul.d       $f10, $f12, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = MUL_D(ctx->f12.d, ctx->f6.d);
    // 0x8028C154: add.d       $f8, $f16, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f10.d); 
    ctx->f8.d = ctx->f16.d + ctx->f10.d;
    // 0x8028C158: cvt.s.d     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f18.fl = CVT_S_D(ctx->f8.d);
    // 0x8028C15C: b           L_8028C190
    // 0x8028C160: swc1        $f18, 0x18($a3)
    MEM_W(0X18, ctx->r7) = ctx->f18.u32l;
        goto L_8028C190;
    // 0x8028C160: swc1        $f18, 0x18($a3)
    MEM_W(0X18, ctx->r7) = ctx->f18.u32l;
L_8028C164:
    // 0x8028C164: lhu         $t0, 0x4($v1)
    ctx->r8 = MEM_HU(ctx->r3, 0X4);
    // 0x8028C168: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x8028C16C: bne         $t0, $at, L_8028C194
    if (ctx->r8 != ctx->r1) {
        // 0x8028C170: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8028C194;
    }
    // 0x8028C170: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8028C174: sh          $zero, 0x4($v1)
    MEM_H(0X4, ctx->r3) = 0;
    // 0x8028C178: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8028C17C: lhu         $t1, 0x2E($a3)
    ctx->r9 = MEM_HU(ctx->r7, 0X2E);
    // 0x8028C180: swc1        $f0, 0x14($a3)
    MEM_W(0X14, ctx->r7) = ctx->f0.u32l;
    // 0x8028C184: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x8028C188: sh          $t2, 0x2E($a3)
    MEM_H(0X2E, ctx->r7) = ctx->r10;
    // 0x8028C18C: swc1        $f0, 0x18($a3)
    MEM_W(0X18, ctx->r7) = ctx->f0.u32l;
L_8028C190:
    // 0x8028C190: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8028C194:
    // 0x8028C194: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8028C198: jr          $ra
    // 0x8028C19C: nop

    return;
    // 0x8028C19C: nop

;}
RECOMP_FUNC void func_8028C1A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028C1A0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8028C1A4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8028C1A8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8028C1AC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8028C1B0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8028C1B4: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x8028C1B8: lui         $a3, 0x802F
    ctx->r7 = S32(0X802F << 16);
    // 0x8028C1BC: addiu       $a3, $a3, 0x1820
    ctx->r7 = ADD32(ctx->r7, 0X1820);
    // 0x8028C1C0: beq         $v0, $zero, L_8028C1E4
    if (ctx->r2 == 0) {
        // 0x8028C1C4: or          $s1, $a0, $zero
        ctx->r17 = ctx->r4 | 0;
            goto L_8028C1E4;
    }
    // 0x8028C1C4: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x8028C1C8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8028C1CC: beq         $v0, $at, L_8028C2F4
    if (ctx->r2 == ctx->r1) {
        // 0x8028C1D0: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8028C2F4;
    }
    // 0x8028C1D0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8028C1D4: beq         $v0, $at, L_8028C360
    if (ctx->r2 == ctx->r1) {
        // 0x8028C1D8: nop
    
            goto L_8028C360;
    }
    // 0x8028C1D8: nop

    // 0x8028C1DC: b           L_8028C368
    // 0x8028C1E0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8028C368;
    // 0x8028C1E0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8028C1E4:
    // 0x8028C1E4: lui         $t6, 0x600
    ctx->r14 = S32(0X600 << 16);
    // 0x8028C1E8: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x8028C1EC: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x8028C1F0: addiu       $t6, $t6, 0x5048
    ctx->r14 = ADD32(ctx->r14, 0X5048);
    // 0x8028C1F4: lui         $s2, 0x8028
    ctx->r18 = S32(0X8028 << 16);
    // 0x8028C1F8: addiu       $s2, $s2, 0x1800
    ctx->r18 = ADD32(ctx->r18, 0X1800);
    // 0x8028C1FC: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x8028C200: addu        $a1, $t7, $s2
    ctx->r5 = ADD32(ctx->r15, ctx->r18);
    // 0x8028C204: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8028C208: jal         0x8028C37C
    // 0x8028C20C: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    func_8028C37C(rdram, ctx);
        goto after_0;
    // 0x8028C20C: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    after_0:
    // 0x8028C210: lui         $t8, 0x600
    ctx->r24 = S32(0X600 << 16);
    // 0x8028C214: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x8028C218: lui         $s0, 0x802F
    ctx->r16 = S32(0X802F << 16);
    // 0x8028C21C: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x8028C220: addiu       $t8, $t8, 0x6E70
    ctx->r24 = ADD32(ctx->r24, 0X6E70);
    // 0x8028C224: addiu       $s0, $s0, 0x2420
    ctx->r16 = ADD32(ctx->r16, 0X2420);
    // 0x8028C228: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x8028C22C: addu        $a1, $t9, $s2
    ctx->r5 = ADD32(ctx->r25, ctx->r18);
    // 0x8028C230: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8028C234: jal         0x8028C37C
    // 0x8028C238: addiu       $a2, $zero, 0x2C
    ctx->r6 = ADD32(0, 0X2C);
    func_8028C37C(rdram, ctx);
        goto after_1;
    // 0x8028C238: addiu       $a2, $zero, 0x2C
    ctx->r6 = ADD32(0, 0X2C);
    after_1:
    // 0x8028C23C: lui         $t0, 0x600
    ctx->r8 = S32(0X600 << 16);
    // 0x8028C240: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x8028C244: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x8028C248: addiu       $t0, $t0, 0x7A28
    ctx->r8 = ADD32(ctx->r8, 0X7A28);
    // 0x8028C24C: addiu       $s0, $s0, 0xB00
    ctx->r16 = ADD32(ctx->r16, 0XB00);
    // 0x8028C250: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x8028C254: addu        $a1, $t1, $s2
    ctx->r5 = ADD32(ctx->r9, ctx->r18);
    // 0x8028C258: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8028C25C: jal         0x8028C37C
    // 0x8028C260: addiu       $a2, $zero, 0x24
    ctx->r6 = ADD32(0, 0X24);
    func_8028C37C(rdram, ctx);
        goto after_2;
    // 0x8028C260: addiu       $a2, $zero, 0x24
    ctx->r6 = ADD32(0, 0X24);
    after_2:
    // 0x8028C264: lui         $t2, 0x600
    ctx->r10 = S32(0X600 << 16);
    // 0x8028C268: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x8028C26C: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x8028C270: addiu       $t2, $t2, 0x4090
    ctx->r10 = ADD32(ctx->r10, 0X4090);
    // 0x8028C274: addiu       $s0, $s0, 0x900
    ctx->r16 = ADD32(ctx->r16, 0X900);
    // 0x8028C278: and         $t3, $t2, $at
    ctx->r11 = ctx->r10 & ctx->r1;
    // 0x8028C27C: addu        $a1, $t3, $s2
    ctx->r5 = ADD32(ctx->r11, ctx->r18);
    // 0x8028C280: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8028C284: jal         0x8028C37C
    // 0x8028C288: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    func_8028C37C(rdram, ctx);
        goto after_3;
    // 0x8028C288: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    after_3:
    // 0x8028C28C: lui         $t4, 0x600
    ctx->r12 = S32(0X600 << 16);
    // 0x8028C290: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x8028C294: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x8028C298: addiu       $t4, $t4, 0x5D00
    ctx->r12 = ADD32(ctx->r12, 0X5D00);
    // 0x8028C29C: addiu       $s0, $s0, 0xF00
    ctx->r16 = ADD32(ctx->r16, 0XF00);
    // 0x8028C2A0: and         $t5, $t4, $at
    ctx->r13 = ctx->r12 & ctx->r1;
    // 0x8028C2A4: addu        $a1, $t5, $s2
    ctx->r5 = ADD32(ctx->r13, ctx->r18);
    // 0x8028C2A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8028C2AC: jal         0x8028C37C
    // 0x8028C2B0: addiu       $a2, $zero, 0x2C
    ctx->r6 = ADD32(0, 0X2C);
    func_8028C37C(rdram, ctx);
        goto after_4;
    // 0x8028C2B0: addiu       $a2, $zero, 0x2C
    ctx->r6 = ADD32(0, 0X2C);
    after_4:
    // 0x8028C2B4: lui         $t6, 0x600
    ctx->r14 = S32(0X600 << 16);
    // 0x8028C2B8: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x8028C2BC: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x8028C2C0: addiu       $t6, $t6, 0x68B8
    ctx->r14 = ADD32(ctx->r14, 0X68B8);
    // 0x8028C2C4: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x8028C2C8: addiu       $a0, $s0, 0xB00
    ctx->r4 = ADD32(ctx->r16, 0XB00);
    // 0x8028C2CC: addu        $a1, $t7, $s2
    ctx->r5 = ADD32(ctx->r15, ctx->r18);
    // 0x8028C2D0: jal         0x8028C37C
    // 0x8028C2D4: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    func_8028C37C(rdram, ctx);
        goto after_5;
    // 0x8028C2D4: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    after_5:
    // 0x8028C2D8: lw          $t8, 0x4($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X4);
    // 0x8028C2DC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8028C2E0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8028C2E4: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8028C2E8: sw          $t9, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r25;
    // 0x8028C2EC: b           L_8028C364
    // 0x8028C2F0: swc1        $f4, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->f4.u32l;
        goto L_8028C364;
    // 0x8028C2F0: swc1        $f4, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->f4.u32l;
L_8028C2F4:
    // 0x8028C2F4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028C2F8: lwc1        $f6, 0x14($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X14);
    // 0x8028C2FC: lwc1        $f11, -0x1A8($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X1A8);
    // 0x8028C300: lwc1        $f10, -0x1A4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1A4);
    // 0x8028C304: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x8028C308: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x8028C30C: lw          $v1, 0x8($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X8);
    // 0x8028C310: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8028C314: slti        $v0, $v1, 0x3D
    ctx->r2 = SIGNED(ctx->r3) < 0X3D ? 1 : 0;
    // 0x8028C318: addiu       $t0, $v1, 0x1
    ctx->r8 = ADD32(ctx->r3, 0X1);
    // 0x8028C31C: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x8028C320: sw          $t0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r8;
    // 0x8028C324: bne         $v0, $zero, L_8028C338
    if (ctx->r2 != 0) {
        // 0x8028C328: swc1        $f18, 0x14($s1)
        MEM_W(0X14, ctx->r17) = ctx->f18.u32l;
            goto L_8028C338;
    }
    // 0x8028C328: swc1        $f18, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->f18.u32l;
    // 0x8028C32C: lw          $a1, 0x14($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X14);
    // 0x8028C330: jal         0x8028C4F8
    // 0x8028C334: addiu       $a2, $zero, 0xFC
    ctx->r6 = ADD32(0, 0XFC);
    func_8028C4F8(rdram, ctx);
        goto after_6;
    // 0x8028C334: addiu       $a2, $zero, 0xFC
    ctx->r6 = ADD32(0, 0XFC);
    after_6:
L_8028C338:
    // 0x8028C338: lw          $t1, 0x8($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X8);
    // 0x8028C33C: nop

    // 0x8028C340: slti        $at, $t1, 0xF0
    ctx->r1 = SIGNED(ctx->r9) < 0XF0 ? 1 : 0;
    // 0x8028C344: bne         $at, $zero, L_8028C368
    if (ctx->r1 != 0) {
        // 0x8028C348: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_8028C368;
    }
    // 0x8028C348: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8028C34C: lw          $t2, 0x4($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X4);
    // 0x8028C350: nop

    // 0x8028C354: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x8028C358: b           L_8028C364
    // 0x8028C35C: sw          $t3, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r11;
        goto L_8028C364;
    // 0x8028C35C: sw          $t3, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r11;
L_8028C360:
    // 0x8028C360: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
L_8028C364:
    // 0x8028C364: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8028C368:
    // 0x8028C368: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8028C36C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8028C370: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8028C374: jr          $ra
    // 0x8028C378: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8028C378: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8028C37C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028C37C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8028C380: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x8028C384: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x8028C388: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8028C38C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8028C390: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8028C394: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x8028C398: or          $s4, $a2, $zero
    ctx->r20 = ctx->r6 | 0;
    // 0x8028C39C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8028C3A0: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8028C3A4: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8028C3A8: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x8028C3AC: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8028C3B0: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x8028C3B4: blez        $a2, L_8028C4C8
    if (SIGNED(ctx->r6) <= 0) {
        // 0x8028C3B8: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_8028C4C8;
    }
    // 0x8028C3B8: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x8028C3BC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8028C3C0: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x8028C3C4: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8028C3C8: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x8028C3CC: addiu       $s2, $zero, 0x3
    ctx->r18 = ADD32(0, 0X3);
L_8028C3D0:
    // 0x8028C3D0: sw          $s0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r16;
    // 0x8028C3D4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8028C3D8: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
L_8028C3DC:
    // 0x8028C3DC: lh          $t6, 0x0($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X0);
    // 0x8028C3E0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8028C3E4: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x8028C3E8: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8028C3EC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8028C3F0: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x8028C3F4: swc1        $f6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f6.u32l;
    // 0x8028C3F8: lh          $t7, -0xE($s0)
    ctx->r15 = MEM_H(ctx->r16, -0XE);
    // 0x8028C3FC: nop

    // 0x8028C400: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x8028C404: nop

    // 0x8028C408: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8028C40C: swc1        $f10, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f10.u32l;
    // 0x8028C410: lh          $t8, -0xC($s0)
    ctx->r24 = MEM_H(ctx->r16, -0XC);
    // 0x8028C414: nop

    // 0x8028C418: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x8028C41C: nop

    // 0x8028C420: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8028C424: bne         $v1, $s2, L_8028C3DC
    if (ctx->r3 != ctx->r18) {
        // 0x8028C428: swc1        $f18, 0x18($v0)
        MEM_W(0X18, ctx->r2) = ctx->f18.u32l;
            goto L_8028C3DC;
    }
    // 0x8028C428: swc1        $f18, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f18.u32l;
    // 0x8028C42C: jal         0x8000DFE8
    // 0x8028C430: nop

    func_8000DFE8(rdram, ctx);
        goto after_0;
    // 0x8028C430: nop

    after_0:
    // 0x8028C434: mul.s       $f4, $f0, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x8028C438: nop

    // 0x8028C43C: mul.s       $f6, $f4, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f22.fl);
    // 0x8028C440: sub.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f20.fl;
    // 0x8028C444: jal         0x8000DFE8
    // 0x8028C448: swc1        $f8, 0x34($s1)
    MEM_W(0X34, ctx->r17) = ctx->f8.u32l;
    func_8000DFE8(rdram, ctx);
        goto after_1;
    // 0x8028C448: swc1        $f8, 0x34($s1)
    MEM_W(0X34, ctx->r17) = ctx->f8.u32l;
    after_1:
    // 0x8028C44C: mul.s       $f10, $f0, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x8028C450: nop

    // 0x8028C454: mul.s       $f16, $f10, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f22.fl);
    // 0x8028C458: sub.s       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f20.fl;
    // 0x8028C45C: jal         0x8000DFE8
    // 0x8028C460: swc1        $f18, 0x38($s1)
    MEM_W(0X38, ctx->r17) = ctx->f18.u32l;
    func_8000DFE8(rdram, ctx);
        goto after_2;
    // 0x8028C460: swc1        $f18, 0x38($s1)
    MEM_W(0X38, ctx->r17) = ctx->f18.u32l;
    after_2:
    // 0x8028C464: mul.s       $f4, $f0, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x8028C468: nop

    // 0x8028C46C: mul.s       $f6, $f4, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f22.fl);
    // 0x8028C470: sub.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f20.fl;
    // 0x8028C474: jal         0x8000DFE8
    // 0x8028C478: swc1        $f8, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = ctx->f8.u32l;
    func_8000DFE8(rdram, ctx);
        goto after_3;
    // 0x8028C478: swc1        $f8, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = ctx->f8.u32l;
    after_3:
    // 0x8028C47C: mul.s       $f10, $f0, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x8028C480: nop

    // 0x8028C484: mul.s       $f16, $f10, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f22.fl);
    // 0x8028C488: sub.s       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f20.fl;
    // 0x8028C48C: jal         0x8000DFE8
    // 0x8028C490: swc1        $f18, 0x28($s1)
    MEM_W(0X28, ctx->r17) = ctx->f18.u32l;
    func_8000DFE8(rdram, ctx);
        goto after_4;
    // 0x8028C490: swc1        $f18, 0x28($s1)
    MEM_W(0X28, ctx->r17) = ctx->f18.u32l;
    after_4:
    // 0x8028C494: mul.s       $f4, $f0, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x8028C498: nop

    // 0x8028C49C: mul.s       $f6, $f4, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f22.fl);
    // 0x8028C4A0: sub.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f20.fl;
    // 0x8028C4A4: jal         0x8000DFE8
    // 0x8028C4A8: swc1        $f8, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->f8.u32l;
    func_8000DFE8(rdram, ctx);
        goto after_5;
    // 0x8028C4A8: swc1        $f8, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->f8.u32l;
    after_5:
    // 0x8028C4AC: mul.s       $f10, $f0, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x8028C4B0: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x8028C4B4: addiu       $s1, $s1, 0x40
    ctx->r17 = ADD32(ctx->r17, 0X40);
    // 0x8028C4B8: mul.s       $f16, $f10, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f22.fl);
    // 0x8028C4BC: sub.s       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f20.fl;
    // 0x8028C4C0: bne         $s3, $s4, L_8028C3D0
    if (ctx->r19 != ctx->r20) {
        // 0x8028C4C4: swc1        $f18, -0x10($s1)
        MEM_W(-0X10, ctx->r17) = ctx->f18.u32l;
            goto L_8028C3D0;
    }
    // 0x8028C4C4: swc1        $f18, -0x10($s1)
    MEM_W(-0X10, ctx->r17) = ctx->f18.u32l;
L_8028C4C8:
    // 0x8028C4C8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8028C4CC: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8028C4D0: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8028C4D4: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x8028C4D8: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8028C4DC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8028C4E0: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8028C4E4: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x8028C4E8: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x8028C4EC: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x8028C4F0: jr          $ra
    // 0x8028C4F4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x8028C4F4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
