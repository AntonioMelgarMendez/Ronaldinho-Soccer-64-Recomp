#include "iss64_recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_803B34C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B34C8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x803B34CC: jr          $ra
    // 0x803B34D0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x803B34D0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_803B34D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B34D4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x803B34D8: jr          $ra
    // 0x803B34DC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x803B34DC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_803B34E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B34E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803B34E4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803B34E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803B34EC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803B34F0: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803B34F4: addiu       $a0, $a0, 0x3510
    ctx->r4 = ADD32(ctx->r4, 0X3510);
    // 0x803B34F8: jal         0x8002989C
    // 0x803B34FC: addiu       $a1, $zero, 0x7E90
    ctx->r5 = ADD32(0, 0X7E90);
    func_8002989C(rdram, ctx);
        goto after_0;
    // 0x803B34FC: addiu       $a1, $zero, 0x7E90
    ctx->r5 = ADD32(0, 0X7E90);
    after_0:
    // 0x803B3500: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803B3504: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803B3508: jr          $ra
    // 0x803B350C: nop

    return;
    // 0x803B350C: nop

;}
RECOMP_FUNC void func_803B3510(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B3510: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803B3514: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803B3518: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803B351C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803B3520: addiu       $a1, $zero, 0x2D
    ctx->r5 = ADD32(0, 0X2D);
    // 0x803B3524: jal         0x80035A74
    // 0x803B3528: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80035A74(rdram, ctx);
        goto after_0;
    // 0x803B3528: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x803B352C: jal         0x80037908
    // 0x803B3530: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    func_80037908(rdram, ctx);
        goto after_1;
    // 0x803B3530: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_1:
    // 0x803B3534: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803B3538: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803B353C: jr          $ra
    // 0x803B3540: nop

    return;
    // 0x803B3540: nop

    // 0x803B3544: nop

    // 0x803B3548: nop

    // 0x803B354C: nop

    // 0x803B3550: nop

    // 0x803B3554: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8024B800(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8024B800: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8024B804: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8024B808: lhu         $t6, 0x22($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X22);
    // 0x8024B80C: nop

    // 0x8024B810: sltiu       $at, $t6, 0x9
    ctx->r1 = ctx->r14 < 0X9 ? 1 : 0;
    // 0x8024B814: beq         $at, $zero, L_8024B934
    if (ctx->r1 == 0) {
        // 0x8024B818: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_8024B934;
    }
    // 0x8024B818: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8024B81C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8024B820: addu        $at, $at, $t6
    gpr jr_addend_8024B82C = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8024B824: lw          $t6, -0x43D0($at)
    ctx->r14 = ADD32(ctx->r1, -0X43D0);
    // 0x8024B828: nop

    // 0x8024B82C: jr          $t6
    // 0x8024B830: nop

    switch (jr_addend_8024B82C >> 2) {
        case 0: goto L_8024B868; break;
        case 1: goto L_8024B88C; break;
        case 2: goto L_8024B934; break;
        case 3: goto L_8024B8C8; break;
        case 4: goto L_8024B934; break;
        case 5: goto L_8024B85C; break;
        case 6: goto L_8024B834; break;
        case 7: goto L_8024B8EC; break;
        case 8: goto L_8024B910; break;
        default: switch_error(__func__, 0x8024B82C, 0x8027BC30);
    }
    // 0x8024B830: nop

L_8024B834:
    // 0x8024B834: lw          $t7, 0xC8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XC8);
    // 0x8024B838: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    // 0x8024B83C: lw          $v0, 0x914($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X914);
    // 0x8024B840: nop

    // 0x8024B844: lw          $a1, 0x4C($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4C);
    // 0x8024B848: lw          $a2, 0x44($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X44);
    // 0x8024B84C: jal         0x80272B98
    // 0x8024B850: nop

    ovl_8024B800_func_80272B98(rdram, ctx);
        goto after_0;
    // 0x8024B850: nop

    after_0:
    // 0x8024B854: b           L_8024B944
    // 0x8024B858: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8024B944;
    // 0x8024B858: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8024B85C:
    // 0x8024B85C: lwc1        $f4, 0xBC($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XBC);
    // 0x8024B860: b           L_8024B940
    // 0x8024B864: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
        goto L_8024B940;
    // 0x8024B864: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
L_8024B868:
    // 0x8024B868: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8024B86C: lwc1        $f6, 0x88($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X88);
    // 0x8024B870: lwc1        $f11, -0x43A8($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X43A8);
    // 0x8024B874: lwc1        $f10, -0x43A4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X43A4);
    // 0x8024B878: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x8024B87C: add.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d + ctx->f10.d;
    // 0x8024B880: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x8024B884: b           L_8024B940
    // 0x8024B888: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
        goto L_8024B940;
    // 0x8024B888: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
L_8024B88C:
    // 0x8024B88C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8024B890: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x8024B894: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    // 0x8024B898: lh          $t8, 0xE8($v0)
    ctx->r24 = MEM_H(ctx->r2, 0XE8);
    // 0x8024B89C: lh          $t9, 0xEA($v0)
    ctx->r25 = MEM_H(ctx->r2, 0XEA);
    // 0x8024B8A0: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x8024B8A4: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x8024B8A8: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8024B8AC: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8024B8B0: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x8024B8B4: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x8024B8B8: jal         0x80272B98
    // 0x8024B8BC: nop

    ovl_8024B800_func_80272B98(rdram, ctx);
        goto after_1;
    // 0x8024B8BC: nop

    after_1:
    // 0x8024B8C0: b           L_8024B944
    // 0x8024B8C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8024B944;
    // 0x8024B8C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8024B8C8:
    // 0x8024B8C8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8024B8CC: lw          $v0, 0xB24($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XB24);
    // 0x8024B8D0: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    // 0x8024B8D4: lw          $a1, 0x4C($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4C);
    // 0x8024B8D8: lw          $a2, 0x44($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X44);
    // 0x8024B8DC: jal         0x80272B98
    // 0x8024B8E0: nop

    ovl_8024B800_func_80272B98(rdram, ctx);
        goto after_2;
    // 0x8024B8E0: nop

    after_2:
    // 0x8024B8E4: b           L_8024B944
    // 0x8024B8E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8024B944;
    // 0x8024B8E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8024B8EC:
    // 0x8024B8EC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8024B8F0: lw          $v0, 0xB30($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XB30);
    // 0x8024B8F4: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    // 0x8024B8F8: lw          $a1, 0x4C($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4C);
    // 0x8024B8FC: lw          $a2, 0x44($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X44);
    // 0x8024B900: jal         0x80272B98
    // 0x8024B904: nop

    ovl_8024B800_func_80272B98(rdram, ctx);
        goto after_3;
    // 0x8024B904: nop

    after_3:
    // 0x8024B908: b           L_8024B944
    // 0x8024B90C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8024B944;
    // 0x8024B90C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8024B910:
    // 0x8024B910: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8024B914: lw          $v0, 0xB28($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XB28);
    // 0x8024B918: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    // 0x8024B91C: lw          $a1, 0x4C($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4C);
    // 0x8024B920: lw          $a2, 0x44($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X44);
    // 0x8024B924: jal         0x80272B98
    // 0x8024B928: nop

    ovl_8024B800_func_80272B98(rdram, ctx);
        goto after_4;
    // 0x8024B928: nop

    after_4:
    // 0x8024B92C: b           L_8024B944
    // 0x8024B930: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8024B944;
    // 0x8024B930: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8024B934:
    // 0x8024B934: lwc1        $f8, 0x8C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X8C);
    // 0x8024B938: nop

    // 0x8024B93C: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
L_8024B940:
    // 0x8024B940: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8024B944:
    // 0x8024B944: lwc1        $f0, 0x20($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8024B948: jr          $ra
    // 0x8024B94C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8024B94C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_8024B800_func_8024B950(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8024B950: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8024B954: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8024B958: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8024B95C: ori         $v1, $zero, 0xFFFF
    ctx->r3 = 0 | 0XFFFF;
    // 0x8024B960: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8024B964: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8024B968: jal         0x8024B800
    // 0x8024B96C: sh          $v1, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r3;
    ovl_8024B800_func_8024B800(rdram, ctx);
        goto after_0;
    // 0x8024B96C: sh          $v1, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r3;
    after_0:
    // 0x8024B970: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8024B974: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    // 0x8024B978: swc1        $f0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f0.u32l;
    // 0x8024B97C: lwc1        $f12, 0x8C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x8024B980: jal         0x80279308
    // 0x8024B984: nop

    ovl_8024B800_func_80279308(rdram, ctx);
        goto after_1;
    // 0x8024B984: nop

    after_1:
    // 0x8024B988: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x8024B98C: lhu         $v1, 0x20($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X20);
    // 0x8024B990: andi        $t7, $v0, 0x4000
    ctx->r15 = ctx->r2 & 0X4000;
    // 0x8024B994: bne         $t7, $zero, L_8024BAA8
    if (ctx->r15 != 0) {
        // 0x8024B998: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8024BAA8;
    }
    // 0x8024B998: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8024B99C: lhu         $t8, 0x16($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X16);
    // 0x8024B9A0: nop

    // 0x8024B9A4: andi        $t9, $t8, 0x2
    ctx->r25 = ctx->r24 & 0X2;
    // 0x8024B9A8: bne         $t9, $zero, L_8024BAA8
    if (ctx->r25 != 0) {
        // 0x8024B9AC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8024BAA8;
    }
    // 0x8024B9AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8024B9B0: lb          $t0, 0x5($s0)
    ctx->r8 = MEM_B(ctx->r16, 0X5);
    // 0x8024B9B4: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8024B9B8: beq         $t0, $zero, L_8024BA14
    if (ctx->r8 == 0) {
        // 0x8024B9BC: nop
    
            goto L_8024BA14;
    }
    // 0x8024B9BC: nop

    // 0x8024B9C0: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8024B9C4: lwc1        $f5, -0x43A0($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X43A0);
    // 0x8024B9C8: lwc1        $f4, -0x439C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X439C);
    // 0x8024B9CC: cvt.d.s     $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.d = CVT_D_S(ctx->f0.fl);
    // 0x8024B9D0: c.lt.d      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.d < ctx->f2.d;
    // 0x8024B9D4: ori         $t1, $v0, 0x4000
    ctx->r9 = ctx->r2 | 0X4000;
    // 0x8024B9D8: bc1f        L_8024B9EC
    if (!c1cs) {
        // 0x8024B9DC: lui         $at, 0x8028
        ctx->r1 = S32(0X8028 << 16);
            goto L_8024B9EC;
    }
    // 0x8024B9DC: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8024B9E0: sh          $t1, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r9;
    // 0x8024B9E4: b           L_8024BAA4
    // 0x8024B9E8: addiu       $v1, $zero, 0x1BD
    ctx->r3 = ADD32(0, 0X1BD);
        goto L_8024BAA4;
    // 0x8024B9E8: addiu       $v1, $zero, 0x1BD
    ctx->r3 = ADD32(0, 0X1BD);
L_8024B9EC:
    // 0x8024B9EC: lwc1        $f7, -0x4398($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X4398);
    // 0x8024B9F0: lwc1        $f6, -0x4394($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X4394);
    // 0x8024B9F4: ori         $t2, $v0, 0x4000
    ctx->r10 = ctx->r2 | 0X4000;
    // 0x8024B9F8: c.lt.d      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.d < ctx->f2.d;
    // 0x8024B9FC: nop

    // 0x8024BA00: bc1f        L_8024BAA8
    if (!c1cs) {
        // 0x8024BA04: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8024BAA8;
    }
    // 0x8024BA04: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8024BA08: sh          $t2, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r10;
    // 0x8024BA0C: b           L_8024BAA4
    // 0x8024BA10: addiu       $v1, $zero, 0xA1
    ctx->r3 = ADD32(0, 0XA1);
        goto L_8024BAA4;
    // 0x8024BA10: addiu       $v1, $zero, 0xA1
    ctx->r3 = ADD32(0, 0XA1);
L_8024BA14:
    // 0x8024BA14: lwc1        $f9, -0x4390($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X4390);
    // 0x8024BA18: lwc1        $f8, -0x438C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X438C);
    // 0x8024BA1C: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x8024BA20: c.lt.d      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.d < ctx->f10.d;
    // 0x8024BA24: ori         $t3, $v0, 0x4000
    ctx->r11 = ctx->r2 | 0X4000;
    // 0x8024BA28: bc1f        L_8024BAA4
    if (!c1cs) {
        // 0x8024BA2C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8024BAA4;
    }
    // 0x8024BA2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8024BA30: jal         0x80272CDC
    // 0x8024BA34: sh          $t3, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r11;
    ovl_8024B800_func_80272CDC(rdram, ctx);
        goto after_2;
    // 0x8024BA34: sh          $t3, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r11;
    after_2:
    // 0x8024BA38: lhu         $t4, 0x20($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X20);
    // 0x8024BA3C: ori         $v1, $zero, 0xFFFE
    ctx->r3 = 0 | 0XFFFE;
    // 0x8024BA40: andi        $t5, $t4, 0x2
    ctx->r13 = ctx->r12 & 0X2;
    // 0x8024BA44: beq         $t5, $zero, L_8024BA60
    if (ctx->r13 == 0) {
        // 0x8024BA48: andi        $t6, $v0, 0xFFFF
        ctx->r14 = ctx->r2 & 0XFFFF;
            goto L_8024BA60;
    }
    // 0x8024BA48: andi        $t6, $v0, 0xFFFF
    ctx->r14 = ctx->r2 & 0XFFFF;
    // 0x8024BA4C: addiu       $at, $zero, 0xD3
    ctx->r1 = ADD32(0, 0XD3);
    // 0x8024BA50: beq         $t6, $at, L_8024BAA8
    if (ctx->r14 == ctx->r1) {
        // 0x8024BA54: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8024BAA8;
    }
    // 0x8024BA54: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8024BA58: b           L_8024BAA4
    // 0x8024BA5C: addiu       $v1, $zero, 0xD3
    ctx->r3 = ADD32(0, 0XD3);
        goto L_8024BAA4;
    // 0x8024BA5C: addiu       $v1, $zero, 0xD3
    ctx->r3 = ADD32(0, 0XD3);
L_8024BA60:
    // 0x8024BA60: lw          $t7, 0xD8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XD8);
    // 0x8024BA64: lui         $at, 0xF4
    ctx->r1 = S32(0XF4 << 16);
    // 0x8024BA68: lw          $t8, 0x20($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X20);
    // 0x8024BA6C: ori         $at, $at, 0x2400
    ctx->r1 = ctx->r1 | 0X2400;
    // 0x8024BA70: sltu        $at, $t8, $at
    ctx->r1 = ctx->r24 < ctx->r1 ? 1 : 0;
    // 0x8024BA74: beq         $at, $zero, L_8024BA94
    if (ctx->r1 == 0) {
        // 0x8024BA78: andi        $t0, $v0, 0xFFFF
        ctx->r8 = ctx->r2 & 0XFFFF;
            goto L_8024BA94;
    }
    // 0x8024BA78: andi        $t0, $v0, 0xFFFF
    ctx->r8 = ctx->r2 & 0XFFFF;
    // 0x8024BA7C: andi        $t9, $v0, 0xFFFF
    ctx->r25 = ctx->r2 & 0XFFFF;
    // 0x8024BA80: addiu       $at, $zero, 0xB5
    ctx->r1 = ADD32(0, 0XB5);
    // 0x8024BA84: beq         $t9, $at, L_8024BAA8
    if (ctx->r25 == ctx->r1) {
        // 0x8024BA88: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8024BAA8;
    }
    // 0x8024BA88: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8024BA8C: b           L_8024BAA4
    // 0x8024BA90: addiu       $v1, $zero, 0xB5
    ctx->r3 = ADD32(0, 0XB5);
        goto L_8024BAA4;
    // 0x8024BA90: addiu       $v1, $zero, 0xB5
    ctx->r3 = ADD32(0, 0XB5);
L_8024BA94:
    // 0x8024BA94: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x8024BA98: beq         $t0, $at, L_8024BAA8
    if (ctx->r8 == ctx->r1) {
        // 0x8024BA9C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8024BAA8;
    }
    // 0x8024BA9C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8024BAA0: addiu       $v1, $zero, 0xA
    ctx->r3 = ADD32(0, 0XA);
L_8024BAA4:
    // 0x8024BAA4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8024BAA8:
    // 0x8024BAA8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8024BAAC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8024BAB0: jr          $ra
    // 0x8024BAB4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8024BAB4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_8024B800_func_8024BAB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8024BAB8: lw          $t6, 0xCC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XCC);
    // 0x8024BABC: lui         $t0, 0x8028
    ctx->r8 = S32(0X8028 << 16);
    // 0x8024BAC0: lw          $t7, 0x30($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X30);
    // 0x8024BAC4: addiu       $v1, $zero, 0x20A
    ctx->r3 = ADD32(0, 0X20A);
    // 0x8024BAC8: lhu         $t8, 0x1C($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X1C);
    // 0x8024BACC: nop

    // 0x8024BAD0: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x8024BAD4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8024BAD8: lhu         $t0, -0x257C($t0)
    ctx->r8 = MEM_HU(ctx->r8, -0X257C);
    // 0x8024BADC: nop

    // 0x8024BAE0: andi        $t1, $t0, 0x8000
    ctx->r9 = ctx->r8 & 0X8000;
    // 0x8024BAE4: beq         $t1, $zero, L_8024BAF4
    if (ctx->r9 == 0) {
        // 0x8024BAE8: nop
    
            goto L_8024BAF4;
    }
    // 0x8024BAE8: nop

    // 0x8024BAEC: jr          $ra
    // 0x8024BAF0: addiu       $v0, $zero, 0x65
    ctx->r2 = ADD32(0, 0X65);
    return;
    // 0x8024BAF0: addiu       $v0, $zero, 0x65
    ctx->r2 = ADD32(0, 0X65);
L_8024BAF4:
    // 0x8024BAF4: jr          $ra
    // 0x8024BAF8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8024BAF8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_8024B800_func_8024BAFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8024BAFC: lw          $t6, 0xCC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XCC);
    // 0x8024BB00: lui         $t0, 0x8028
    ctx->r8 = S32(0X8028 << 16);
    // 0x8024BB04: lw          $t7, 0x30($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X30);
    // 0x8024BB08: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x8024BB0C: lhu         $t8, 0x1C($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X1C);
    // 0x8024BB10: addiu       $v1, $zero, 0x1F7
    ctx->r3 = ADD32(0, 0X1F7);
    // 0x8024BB14: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x8024BB18: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8024BB1C: lhu         $t0, -0x257C($t0)
    ctx->r8 = MEM_HU(ctx->r8, -0X257C);
    // 0x8024BB20: nop

    // 0x8024BB24: andi        $t1, $t0, 0x8000
    ctx->r9 = ctx->r8 & 0X8000;
    // 0x8024BB28: beq         $t1, $zero, L_8024BB94
    if (ctx->r9 == 0) {
        // 0x8024BB2C: nop
    
            goto L_8024BB94;
    }
    // 0x8024BB2C: nop

    // 0x8024BB30: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8024BB34: lwc1        $f6, 0x84($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X84);
    // 0x8024BB38: lui         $t2, 0x8028
    ctx->r10 = S32(0X8028 << 16);
    // 0x8024BB3C: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x8024BB40: lui         $t5, 0x8028
    ctx->r13 = S32(0X8028 << 16);
    // 0x8024BB44: bc1f        L_8024BB74
    if (!c1cs) {
        // 0x8024BB48: nop
    
            goto L_8024BB74;
    }
    // 0x8024BB48: nop

    // 0x8024BB4C: lhu         $t2, -0x1B60($t2)
    ctx->r10 = MEM_HU(ctx->r10, -0X1B60);
    // 0x8024BB50: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8024BB54: div         $zero, $t2, $at
    lo = S32(S64(S32(ctx->r10)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r10)) % S64(S32(ctx->r1)));
    // 0x8024BB58: lui         $v1, 0x8028
    ctx->r3 = S32(0X8028 << 16);
    // 0x8024BB5C: mfhi        $t3
    ctx->r11 = hi;
    // 0x8024BB60: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x8024BB64: addu        $v1, $v1, $t4
    ctx->r3 = ADD32(ctx->r3, ctx->r12);
    // 0x8024BB68: lhu         $v0, -0x5370($v1)
    ctx->r2 = MEM_HU(ctx->r3, -0X5370);
    // 0x8024BB6C: jr          $ra
    // 0x8024BB70: nop

    return;
    // 0x8024BB70: nop

L_8024BB74:
    // 0x8024BB74: lh          $t5, -0x1B60($t5)
    ctx->r13 = MEM_H(ctx->r13, -0X1B60);
    // 0x8024BB78: lui         $v1, 0x8028
    ctx->r3 = S32(0X8028 << 16);
    // 0x8024BB7C: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x8024BB80: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x8024BB84: addu        $v1, $v1, $t7
    ctx->r3 = ADD32(ctx->r3, ctx->r15);
    // 0x8024BB88: lhu         $v0, -0x5370($v1)
    ctx->r2 = MEM_HU(ctx->r3, -0X5370);
    // 0x8024BB8C: jr          $ra
    // 0x8024BB90: nop

    return;
    // 0x8024BB90: nop

L_8024BB94:
    // 0x8024BB94: jr          $ra
    // 0x8024BB98: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8024BB98: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_8024B800_func_8024BB9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8024BB9C: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x8024BBA0: lw          $t6, 0x3B20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B20);
    // 0x8024BBA4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8024BBA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8024BBAC: lw          $t7, 0x88($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X88);
    // 0x8024BBB0: nop

    // 0x8024BBB4: bne         $a0, $t7, L_8024BBFC
    if (ctx->r4 != ctx->r15) {
        // 0x8024BBB8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8024BBFC;
    }
    // 0x8024BBB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8024BBBC: lhu         $v0, 0x12($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X12);
    // 0x8024BBC0: nop

    // 0x8024BBC4: andi        $t8, $v0, 0x1
    ctx->r24 = ctx->r2 & 0X1;
    // 0x8024BBC8: beq         $t8, $zero, L_8024BBF8
    if (ctx->r24 == 0) {
        // 0x8024BBCC: andi        $t9, $v0, 0x40
        ctx->r25 = ctx->r2 & 0X40;
            goto L_8024BBF8;
    }
    // 0x8024BBCC: andi        $t9, $v0, 0x40
    ctx->r25 = ctx->r2 & 0X40;
    // 0x8024BBD0: bne         $t9, $zero, L_8024BBFC
    if (ctx->r25 != 0) {
        // 0x8024BBD4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8024BBFC;
    }
    // 0x8024BBD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8024BBD8: lw          $t0, 0xC8($a0)
    ctx->r8 = MEM_W(ctx->r4, 0XC8);
    // 0x8024BBDC: nop

    // 0x8024BBE0: lhu         $t1, 0x938($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X938);
    // 0x8024BBE4: nop

    // 0x8024BBE8: bne         $t1, $zero, L_8024BBFC
    if (ctx->r9 != 0) {
        // 0x8024BBEC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8024BBFC;
    }
    // 0x8024BBEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8024BBF0: jal         0x803F2464
    // 0x8024BBF4: nop

    LOOKUP_FUNC(0x803F2464)(rdram, ctx);
        goto after_0;
    // 0x8024BBF4: nop

    after_0:
L_8024BBF8:
    // 0x8024BBF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8024BBFC:
    // 0x8024BBFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8024BC00: jr          $ra
    // 0x8024BC04: nop

    return;
    // 0x8024BC04: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8024BC08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8024BC08: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8024BC0C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8024BC10: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8024BC14: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x8024BC18: lhu         $t6, 0x18($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X18);
    // 0x8024BC1C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8024BC20: andi        $t7, $t6, 0x10
    ctx->r15 = ctx->r14 & 0X10;
    // 0x8024BC24: bne         $t7, $zero, L_8024C6C8
    if (ctx->r15 != 0) {
        // 0x8024BC28: ori         $a3, $zero, 0xFFFF
        ctx->r7 = 0 | 0XFFFF;
            goto L_8024C6C8;
    }
    // 0x8024BC28: ori         $a3, $zero, 0xFFFF
    ctx->r7 = 0 | 0XFFFF;
    // 0x8024BC2C: lhu         $t8, 0xE($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0XE);
    // 0x8024BC30: sh          $zero, 0x10($a0)
    MEM_H(0X10, ctx->r4) = 0;
    // 0x8024BC34: lhu         $t9, 0x46($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X46);
    // 0x8024BC38: sh          $t8, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r24;
    // 0x8024BC3C: sh          $t9, 0xE($a0)
    MEM_H(0XE, ctx->r4) = ctx->r25;
    // 0x8024BC40: jal         0x80273484
    // 0x8024BC44: sh          $a3, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r7;
    ovl_8024B800_func_80273484(rdram, ctx);
        goto after_0;
    // 0x8024BC44: sh          $a3, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r7;
    after_0:
    // 0x8024BC48: lhu         $a3, 0x3E($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X3E);
    // 0x8024BC4C: lhu         $t0, 0x12($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X12);
    // 0x8024BC50: lhu         $t2, 0x14($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X14);
    // 0x8024BC54: lhu         $t4, 0x16($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X16);
    // 0x8024BC58: lhu         $t6, 0x18($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X18);
    // 0x8024BC5C: lhu         $t8, 0x20($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X20);
    // 0x8024BC60: andi        $t1, $t0, 0x3FED
    ctx->r9 = ctx->r8 & 0X3FED;
    // 0x8024BC64: andi        $t3, $t2, 0x3F50
    ctx->r11 = ctx->r10 & 0X3F50;
    // 0x8024BC68: andi        $t5, $t4, 0xD28A
    ctx->r13 = ctx->r12 & 0XD28A;
    // 0x8024BC6C: andi        $t7, $t6, 0x28F5
    ctx->r15 = ctx->r14 & 0X28F5;
    // 0x8024BC70: andi        $t9, $t8, 0x5B9F
    ctx->r25 = ctx->r24 & 0X5B9F;
    // 0x8024BC74: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    // 0x8024BC78: sh          $t1, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r9;
    // 0x8024BC7C: sh          $t3, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r11;
    // 0x8024BC80: sh          $t5, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r13;
    // 0x8024BC84: sh          $t7, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r15;
    // 0x8024BC88: sh          $t9, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r25;
    // 0x8024BC8C: sw          $zero, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = 0;
    // 0x8024BC90: sw          $zero, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = 0;
    // 0x8024BC94: sw          $zero, 0xEC($s0)
    MEM_W(0XEC, ctx->r16) = 0;
    // 0x8024BC98: sw          $zero, 0xF0($s0)
    MEM_W(0XF0, ctx->r16) = 0;
    // 0x8024BC9C: sw          $zero, 0xF4($s0)
    MEM_W(0XF4, ctx->r16) = 0;
    // 0x8024BCA0: lhu         $v1, 0x46($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X46);
    // 0x8024BCA4: nop

    // 0x8024BCA8: slti        $at, $v1, 0x45
    ctx->r1 = SIGNED(ctx->r3) < 0X45 ? 1 : 0;
    // 0x8024BCAC: bne         $at, $zero, L_8024BCC8
    if (ctx->r1 != 0) {
        // 0x8024BCB0: addiu       $t0, $v1, -0x1
        ctx->r8 = ADD32(ctx->r3, -0X1);
            goto L_8024BCC8;
    }
    // 0x8024BCB0: addiu       $t0, $v1, -0x1
    ctx->r8 = ADD32(ctx->r3, -0X1);
    // 0x8024BCB4: addiu       $at, $zero, 0x64
    ctx->r1 = ADD32(0, 0X64);
    // 0x8024BCB8: beq         $v1, $at, L_8024C6B4
    if (ctx->r3 == ctx->r1) {
        // 0x8024BCBC: ori         $at, $zero, 0xFFFF
        ctx->r1 = 0 | 0XFFFF;
            goto L_8024C6B4;
    }
    // 0x8024BCBC: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x8024BCC0: b           L_8024C6B4
    // 0x8024BCC4: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
        goto L_8024C6B4;
    // 0x8024BCC4: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
L_8024BCC8:
    // 0x8024BCC8: sltiu       $at, $t0, 0x44
    ctx->r1 = ctx->r8 < 0X44 ? 1 : 0;
    // 0x8024BCCC: beq         $at, $zero, L_8024C6B0
    if (ctx->r1 == 0) {
        // 0x8024BCD0: sll         $t0, $t0, 2
        ctx->r8 = S32(ctx->r8 << 2);
            goto L_8024C6B0;
    }
    // 0x8024BCD0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8024BCD4: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8024BCD8: addu        $at, $at, $t0
    gpr jr_addend_8024BCE4 = ctx->r8;
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8024BCDC: lw          $t0, -0x4388($at)
    ctx->r8 = ADD32(ctx->r1, -0X4388);
    // 0x8024BCE0: nop

    // 0x8024BCE4: jr          $t0
    // 0x8024BCE8: nop

    switch (jr_addend_8024BCE4 >> 2) {
        case 0: goto L_8024BE9C; break;
        case 1: goto L_8024C49C; break;
        case 2: goto L_8024C2D4; break;
        case 3: goto L_8024BE9C; break;
        case 4: goto L_8024BE9C; break;
        case 5: goto L_8024C030; break;
        case 6: goto L_8024C6B0; break;
        case 7: goto L_8024C6B0; break;
        case 8: goto L_8024C3FC; break;
        case 9: goto L_8024C238; break;
        case 10: goto L_8024C6B0; break;
        case 11: goto L_8024C030; break;
        case 12: goto L_8024BE54; break;
        case 13: goto L_8024BE9C; break;
        case 14: goto L_8024C168; break;
        case 15: goto L_8024C168; break;
        case 16: goto L_8024C194; break;
        case 17: goto L_8024C074; break;
        case 18: goto L_8024BF20; break;
        case 19: goto L_8024C6B0; break;
        case 20: goto L_8024C6B0; break;
        case 21: goto L_8024C6B0; break;
        case 22: goto L_8024BEC0; break;
        case 23: goto L_8024C6B0; break;
        case 24: goto L_8024BE7C; break;
        case 25: goto L_8024BE14; break;
        case 26: goto L_8024BEAC; break;
        case 27: goto L_8024C6B0; break;
        case 28: goto L_8024BD00; break;
        case 29: goto L_8024C6B0; break;
        case 30: goto L_8024C6B0; break;
        case 31: goto L_8024C6B0; break;
        case 32: goto L_8024C320; break;
        case 33: goto L_8024BD34; break;
        case 34: goto L_8024BD30; break;
        case 35: goto L_8024BD34; break;
        case 36: goto L_8024BD48; break;
        case 37: goto L_8024BD88; break;
        case 38: goto L_8024C6B0; break;
        case 39: goto L_8024C6B0; break;
        case 40: goto L_8024C6B0; break;
        case 41: goto L_8024BD70; break;
        case 42: goto L_8024C6B0; break;
        case 43: goto L_8024C030; break;
        case 44: goto L_8024BE54; break;
        case 45: goto L_8024BE00; break;
        case 46: goto L_8024BDC4; break;
        case 47: goto L_8024C6B0; break;
        case 48: goto L_8024BEF8; break;
        case 49: goto L_8024C6B0; break;
        case 50: goto L_8024C6B0; break;
        case 51: goto L_8024BCEC; break;
        case 52: goto L_8024C6B0; break;
        case 53: goto L_8024C6B0; break;
        case 54: goto L_8024C6B0; break;
        case 55: goto L_8024C6B0; break;
        case 56: goto L_8024C6B0; break;
        case 57: goto L_8024C6B0; break;
        case 58: goto L_8024C6B0; break;
        case 59: goto L_8024C6B0; break;
        case 60: goto L_8024C6B0; break;
        case 61: goto L_8024C6B0; break;
        case 62: goto L_8024BDA0; break;
        case 63: goto L_8024BDA0; break;
        case 64: goto L_8024BDB0; break;
        case 65: goto L_8024C6B0; break;
        case 66: goto L_8024C184; break;
        case 67: goto L_8024BE9C; break;
        default: switch_error(__func__, 0x8024BCE4, 0x8027BC78);
    }
    // 0x8024BCE8: nop

L_8024BCEC:
    // 0x8024BCEC: lhu         $t1, 0x12($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X12);
    // 0x8024BCF0: nop

    // 0x8024BCF4: ori         $t2, $t1, 0x2
    ctx->r10 = ctx->r9 | 0X2;
    // 0x8024BCF8: b           L_8024C6B0
    // 0x8024BCFC: sh          $t2, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r10;
        goto L_8024C6B0;
    // 0x8024BCFC: sh          $t2, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r10;
L_8024BD00:
    // 0x8024BD00: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x8024BD04: lhu         $t3, 0xB78($t3)
    ctx->r11 = MEM_HU(ctx->r11, 0XB78);
    // 0x8024BD08: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x8024BD0C: beq         $t3, $at, L_8024C6B0
    if (ctx->r11 == ctx->r1) {
        // 0x8024BD10: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8024C6B0;
    }
    // 0x8024BD10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8024BD14: lhu         $t4, 0x14($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X14);
    // 0x8024BD18: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8024BD1C: andi        $t5, $t4, 0xFBFF
    ctx->r13 = ctx->r12 & 0XFBFF;
    // 0x8024BD20: jal         0x8024BC08
    // 0x8024BD24: sh          $t5, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r13;
    ovl_8024B800_func_8024BC08(rdram, ctx);
        goto after_1;
    // 0x8024BD24: sh          $t5, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r13;
    after_1:
    // 0x8024BD28: b           L_8024C6CC
    // 0x8024BD2C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8024C6CC;
    // 0x8024BD2C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8024BD30:
    // 0x8024BD30: addiu       $a3, $zero, 0x109
    ctx->r7 = ADD32(0, 0X109);
L_8024BD34:
    // 0x8024BD34: lhu         $t6, 0x16($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X16);
    // 0x8024BD38: nop

    // 0x8024BD3C: ori         $t7, $t6, 0x40
    ctx->r15 = ctx->r14 | 0X40;
    // 0x8024BD40: b           L_8024C6B0
    // 0x8024BD44: sh          $t7, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r15;
        goto L_8024C6B0;
    // 0x8024BD44: sh          $t7, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r15;
L_8024BD48:
    // 0x8024BD48: lhu         $t8, 0x18($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X18);
    // 0x8024BD4C: lhu         $t0, 0x12($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X12);
    // 0x8024BD50: lhu         $t2, 0x16($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X16);
    // 0x8024BD54: ori         $t9, $t8, 0x8000
    ctx->r25 = ctx->r24 | 0X8000;
    // 0x8024BD58: ori         $t1, $t0, 0x2
    ctx->r9 = ctx->r8 | 0X2;
    // 0x8024BD5C: ori         $t3, $t2, 0x40
    ctx->r11 = ctx->r10 | 0X40;
    // 0x8024BD60: sh          $t9, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r25;
    // 0x8024BD64: sh          $t1, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r9;
    // 0x8024BD68: b           L_8024C6B0
    // 0x8024BD6C: sh          $t3, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r11;
        goto L_8024C6B0;
    // 0x8024BD6C: sh          $t3, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r11;
L_8024BD70:
    // 0x8024BD70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8024BD74: jal         0x8006D1A4
    // 0x8024BD78: sh          $a3, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r7;
    func_8006D1A4(rdram, ctx);
        goto after_2;
    // 0x8024BD78: sh          $a3, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r7;
    after_2:
    // 0x8024BD7C: lhu         $a3, 0x3E($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X3E);
    // 0x8024BD80: b           L_8024C6B4
    // 0x8024BD84: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
        goto L_8024C6B4;
    // 0x8024BD84: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
L_8024BD88:
    // 0x8024BD88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8024BD8C: jal         0x8006BDB4
    // 0x8024BD90: sh          $a3, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r7;
    func_8006BDB4(rdram, ctx);
        goto after_3;
    // 0x8024BD90: sh          $a3, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r7;
    after_3:
    // 0x8024BD94: lhu         $a3, 0x3E($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X3E);
    // 0x8024BD98: b           L_8024C6B4
    // 0x8024BD9C: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
        goto L_8024C6B4;
    // 0x8024BD9C: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
L_8024BDA0:
    // 0x8024BDA0: lhu         $t4, 0x12($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X12);
    // 0x8024BDA4: nop

    // 0x8024BDA8: ori         $t5, $t4, 0x2
    ctx->r13 = ctx->r12 | 0X2;
    // 0x8024BDAC: sh          $t5, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r13;
L_8024BDB0:
    // 0x8024BDB0: lhu         $t6, 0x14($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X14);
    // 0x8024BDB4: nop

    // 0x8024BDB8: ori         $t7, $t6, 0x1
    ctx->r15 = ctx->r14 | 0X1;
    // 0x8024BDBC: b           L_8024C6B0
    // 0x8024BDC0: sh          $t7, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r15;
        goto L_8024C6B0;
    // 0x8024BDC0: sh          $t7, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r15;
L_8024BDC4:
    // 0x8024BDC4: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x8024BDC8: addiu       $v1, $v1, 0x3B20
    ctx->r3 = ADD32(ctx->r3, 0X3B20);
    // 0x8024BDCC: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x8024BDD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8024BDD4: lw          $t9, 0x88($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X88);
    // 0x8024BDD8: nop

    // 0x8024BDDC: bne         $s0, $t9, L_8024BDF8
    if (ctx->r16 != ctx->r25) {
        // 0x8024BDE0: nop
    
            goto L_8024BDF8;
    }
    // 0x8024BDE0: nop

    // 0x8024BDE4: lwc1        $f4, 0x8C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x8024BDE8: jal         0x80250A5C
    // 0x8024BDEC: swc1        $f4, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f4.u32l;
    ovl_8024B800_func_80250A5C(rdram, ctx);
        goto after_4;
    // 0x8024BDEC: swc1        $f4, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f4.u32l;
    after_4:
    // 0x8024BDF0: b           L_8024C6B0
    // 0x8024BDF4: addiu       $a3, $zero, 0x156
    ctx->r7 = ADD32(0, 0X156);
        goto L_8024C6B0;
    // 0x8024BDF4: addiu       $a3, $zero, 0x156
    ctx->r7 = ADD32(0, 0X156);
L_8024BDF8:
    // 0x8024BDF8: b           L_8024C6B0
    // 0x8024BDFC: addiu       $a3, $zero, 0x155
    ctx->r7 = ADD32(0, 0X155);
        goto L_8024C6B0;
    // 0x8024BDFC: addiu       $a3, $zero, 0x155
    ctx->r7 = ADD32(0, 0X155);
L_8024BE00:
    // 0x8024BE00: lhu         $t0, 0x16($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X16);
    // 0x8024BE04: nop

    // 0x8024BE08: ori         $t1, $t0, 0x100
    ctx->r9 = ctx->r8 | 0X100;
    // 0x8024BE0C: b           L_8024C6B0
    // 0x8024BE10: sh          $t1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r9;
        goto L_8024C6B0;
    // 0x8024BE10: sh          $t1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r9;
L_8024BE14:
    // 0x8024BE14: lhu         $v0, 0x12($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X12);
    // 0x8024BE18: nop

    // 0x8024BE1C: andi        $t2, $v0, 0x1
    ctx->r10 = ctx->r2 & 0X1;
    // 0x8024BE20: beq         $t2, $zero, L_8024BE3C
    if (ctx->r10 == 0) {
        // 0x8024BE24: nop
    
            goto L_8024BE3C;
    }
    // 0x8024BE24: nop

    // 0x8024BE28: lw          $t4, 0xC4($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XC4);
    // 0x8024BE2C: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x8024BE30: sh          $t3, 0x20($t4)
    MEM_H(0X20, ctx->r12) = ctx->r11;
    // 0x8024BE34: lhu         $v0, 0x12($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X12);
    // 0x8024BE38: nop

L_8024BE3C:
    // 0x8024BE3C: lhu         $t6, 0x14($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X14);
    // 0x8024BE40: ori         $t5, $v0, 0x2
    ctx->r13 = ctx->r2 | 0X2;
    // 0x8024BE44: ori         $t7, $t6, 0x8000
    ctx->r15 = ctx->r14 | 0X8000;
    // 0x8024BE48: sh          $t5, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r13;
    // 0x8024BE4C: b           L_8024C6B0
    // 0x8024BE50: sh          $t7, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r15;
        goto L_8024C6B0;
    // 0x8024BE50: sh          $t7, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r15;
L_8024BE54:
    // 0x8024BE54: lhu         $t8, 0x16($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X16);
    // 0x8024BE58: lhu         $t0, 0x18($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X18);
    // 0x8024BE5C: lhu         $t2, 0x12($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X12);
    // 0x8024BE60: ori         $t9, $t8, 0x1
    ctx->r25 = ctx->r24 | 0X1;
    // 0x8024BE64: ori         $t1, $t0, 0x8000
    ctx->r9 = ctx->r8 | 0X8000;
    // 0x8024BE68: ori         $t3, $t2, 0x2
    ctx->r11 = ctx->r10 | 0X2;
    // 0x8024BE6C: sh          $t9, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r25;
    // 0x8024BE70: sh          $t1, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r9;
    // 0x8024BE74: b           L_8024C6B0
    // 0x8024BE78: sh          $t3, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r11;
        goto L_8024C6B0;
    // 0x8024BE78: sh          $t3, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r11;
L_8024BE7C:
    // 0x8024BE7C: lhu         $t4, 0x14($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X14);
    // 0x8024BE80: lhu         $t6, 0x20($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X20);
    // 0x8024BE84: lwc1        $f6, 0xB0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XB0);
    // 0x8024BE88: ori         $t5, $t4, 0x80
    ctx->r13 = ctx->r12 | 0X80;
    // 0x8024BE8C: ori         $t7, $t6, 0x20
    ctx->r15 = ctx->r14 | 0X20;
    // 0x8024BE90: sh          $t5, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r13;
    // 0x8024BE94: sh          $t7, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r15;
    // 0x8024BE98: swc1        $f6, 0xF0($s0)
    MEM_W(0XF0, ctx->r16) = ctx->f6.u32l;
L_8024BE9C:
    // 0x8024BE9C: lhu         $t8, 0x18($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X18);
    // 0x8024BEA0: nop

    // 0x8024BEA4: ori         $t9, $t8, 0x8000
    ctx->r25 = ctx->r24 | 0X8000;
    // 0x8024BEA8: sh          $t9, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r25;
L_8024BEAC:
    // 0x8024BEAC: lhu         $t0, 0x12($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X12);
    // 0x8024BEB0: nop

    // 0x8024BEB4: ori         $t1, $t0, 0x2
    ctx->r9 = ctx->r8 | 0X2;
    // 0x8024BEB8: b           L_8024C6B0
    // 0x8024BEBC: sh          $t1, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r9;
        goto L_8024C6B0;
    // 0x8024BEBC: sh          $t1, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r9;
L_8024BEC0:
    // 0x8024BEC0: lwc1        $f8, 0xB0($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XB0);
    // 0x8024BEC4: lw          $v0, 0xC4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC4);
    // 0x8024BEC8: swc1        $f8, 0xEC($s0)
    MEM_W(0XEC, ctx->r16) = ctx->f8.u32l;
    // 0x8024BECC: lhu         $t2, 0x2($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X2);
    // 0x8024BED0: nop

    // 0x8024BED4: andi        $t3, $t2, 0xE7FF
    ctx->r11 = ctx->r10 & 0XE7FF;
    // 0x8024BED8: sh          $t3, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r11;
    // 0x8024BEDC: lhu         $t4, 0x14($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X14);
    // 0x8024BEE0: lhu         $t6, 0x20($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X20);
    // 0x8024BEE4: ori         $t5, $t4, 0x80
    ctx->r13 = ctx->r12 | 0X80;
    // 0x8024BEE8: ori         $t7, $t6, 0x20
    ctx->r15 = ctx->r14 | 0X20;
    // 0x8024BEEC: sh          $t5, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r13;
    // 0x8024BEF0: b           L_8024C6B0
    // 0x8024BEF4: sh          $t7, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r15;
        goto L_8024C6B0;
    // 0x8024BEF4: sh          $t7, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r15;
L_8024BEF8:
    // 0x8024BEF8: lhu         $t8, 0x14($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X14);
    // 0x8024BEFC: lhu         $t0, 0x20($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X20);
    // 0x8024BF00: lhu         $t2, 0x12($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X12);
    // 0x8024BF04: ori         $t9, $t8, 0x80
    ctx->r25 = ctx->r24 | 0X80;
    // 0x8024BF08: ori         $t1, $t0, 0x20
    ctx->r9 = ctx->r8 | 0X20;
    // 0x8024BF0C: ori         $t3, $t2, 0x2
    ctx->r11 = ctx->r10 | 0X2;
    // 0x8024BF10: sh          $t9, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r25;
    // 0x8024BF14: sh          $t1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r9;
    // 0x8024BF18: b           L_8024C6B0
    // 0x8024BF1C: sh          $t3, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r11;
        goto L_8024C6B0;
    // 0x8024BF1C: sh          $t3, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r11;
L_8024BF20:
    // 0x8024BF20: lhu         $t4, 0x18($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X18);
    // 0x8024BF24: lhu         $t6, 0x12($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X12);
    // 0x8024BF28: lhu         $v0, 0x36($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X36);
    // 0x8024BF2C: ori         $t5, $t4, 0x8000
    ctx->r13 = ctx->r12 | 0X8000;
    // 0x8024BF30: ori         $t7, $t6, 0x2
    ctx->r15 = ctx->r14 | 0X2;
    // 0x8024BF34: andi        $t8, $v0, 0xC000
    ctx->r24 = ctx->r2 & 0XC000;
    // 0x8024BF38: sh          $t5, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r13;
    // 0x8024BF3C: bne         $t8, $zero, L_8024BF8C
    if (ctx->r24 != 0) {
        // 0x8024BF40: sh          $t7, 0x12($s0)
        MEM_H(0X12, ctx->r16) = ctx->r15;
            goto L_8024BF8C;
    }
    // 0x8024BF40: sh          $t7, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r15;
    // 0x8024BF44: lw          $t9, 0xC4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC4);
    // 0x8024BF48: nop

    // 0x8024BF4C: lhu         $t0, 0x6($t9)
    ctx->r8 = MEM_HU(ctx->r25, 0X6);
    // 0x8024BF50: nop

    // 0x8024BF54: andi        $t1, $t0, 0x10
    ctx->r9 = ctx->r8 & 0X10;
    // 0x8024BF58: bne         $t1, $zero, L_8024BF7C
    if (ctx->r9 != 0) {
        // 0x8024BF5C: nop
    
            goto L_8024BF7C;
    }
    // 0x8024BF5C: nop

    // 0x8024BF60: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x8024BF64: nop

    // 0x8024BF68: lhu         $t3, 0x95C($t2)
    ctx->r11 = MEM_HU(ctx->r10, 0X95C);
    // 0x8024BF6C: nop

    // 0x8024BF70: andi        $t4, $t3, 0x2
    ctx->r12 = ctx->r11 & 0X2;
    // 0x8024BF74: beq         $t4, $zero, L_8024BF90
    if (ctx->r12 == 0) {
        // 0x8024BF78: andi        $t7, $v0, 0x4000
        ctx->r15 = ctx->r2 & 0X4000;
            goto L_8024BF90;
    }
    // 0x8024BF78: andi        $t7, $v0, 0x4000
    ctx->r15 = ctx->r2 & 0X4000;
L_8024BF7C:
    // 0x8024BF7C: lhu         $t5, 0x14($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X14);
    // 0x8024BF80: lhu         $v0, 0x36($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X36);
    // 0x8024BF84: ori         $t6, $t5, 0x8
    ctx->r14 = ctx->r13 | 0X8;
    // 0x8024BF88: sh          $t6, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r14;
L_8024BF8C:
    // 0x8024BF8C: andi        $t7, $v0, 0x4000
    ctx->r15 = ctx->r2 & 0X4000;
L_8024BF90:
    // 0x8024BF90: beq         $t7, $zero, L_8024BFEC
    if (ctx->r15 == 0) {
        // 0x8024BF94: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8024BFEC;
    }
    // 0x8024BF94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8024BF98: jal         0x802727A4
    // 0x8024BF9C: sh          $a3, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r7;
    ovl_8024B800_func_802727A4(rdram, ctx);
        goto after_5;
    // 0x8024BF9C: sh          $a3, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r7;
    after_5:
    // 0x8024BFA0: lhu         $t8, 0x12($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X12);
    // 0x8024BFA4: lhu         $a3, 0x3E($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X3E);
    // 0x8024BFA8: andi        $t9, $t8, 0x40
    ctx->r25 = ctx->r24 & 0X40;
    // 0x8024BFAC: bne         $t9, $zero, L_8024BFD0
    if (ctx->r25 != 0) {
        // 0x8024BFB0: sw          $v0, 0xEC($s0)
        MEM_W(0XEC, ctx->r16) = ctx->r2;
            goto L_8024BFD0;
    }
    // 0x8024BFB0: sw          $v0, 0xEC($s0)
    MEM_W(0XEC, ctx->r16) = ctx->r2;
    // 0x8024BFB4: lw          $t0, 0xC8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XC8);
    // 0x8024BFB8: nop

    // 0x8024BFBC: lw          $v0, 0x958($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X958);
    // 0x8024BFC0: nop

    // 0x8024BFC4: beq         $v0, $zero, L_8024BFD0
    if (ctx->r2 == 0) {
        // 0x8024BFC8: nop
    
            goto L_8024BFD0;
    }
    // 0x8024BFC8: nop

    // 0x8024BFCC: sw          $v0, 0xEC($s0)
    MEM_W(0XEC, ctx->r16) = ctx->r2;
L_8024BFD0:
    // 0x8024BFD0: lw          $a1, 0xEC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XEC);
    // 0x8024BFD4: sh          $a3, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r7;
    // 0x8024BFD8: jal         0x80056220
    // 0x8024BFDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80056220(rdram, ctx);
        goto after_6;
    // 0x8024BFDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x8024BFE0: lhu         $a3, 0x3E($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X3E);
    // 0x8024BFE4: lhu         $v0, 0x36($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X36);
    // 0x8024BFE8: nop

L_8024BFEC:
    // 0x8024BFEC: andi        $t1, $v0, 0x8000
    ctx->r9 = ctx->r2 & 0X8000;
    // 0x8024BFF0: beq         $t1, $zero, L_8024C014
    if (ctx->r9 == 0) {
        // 0x8024BFF4: lui         $v1, 0x8009
        ctx->r3 = S32(0X8009 << 16);
            goto L_8024C014;
    }
    // 0x8024BFF4: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x8024BFF8: addiu       $v1, $v1, 0x3B20
    ctx->r3 = ADD32(ctx->r3, 0X3B20);
    // 0x8024BFFC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8024C000: nop

    // 0x8024C004: lhu         $t2, 0xC2($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0XC2);
    // 0x8024C008: nop

    // 0x8024C00C: andi        $t3, $t2, 0xFDFF
    ctx->r11 = ctx->r10 & 0XFDFF;
    // 0x8024C010: sh          $t3, 0xC2($v0)
    MEM_H(0XC2, ctx->r2) = ctx->r11;
L_8024C014:
    // 0x8024C014: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x8024C018: addiu       $v1, $v1, 0x3B20
    ctx->r3 = ADD32(ctx->r3, 0X3B20);
    // 0x8024C01C: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x8024C020: nop

    // 0x8024C024: lhu         $t5, 0x6C($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0X6C);
    // 0x8024C028: b           L_8024C6B0
    // 0x8024C02C: sh          $t5, 0xEA($s0)
    MEM_H(0XEA, ctx->r16) = ctx->r13;
        goto L_8024C6B0;
    // 0x8024C02C: sh          $t5, 0xEA($s0)
    MEM_H(0XEA, ctx->r16) = ctx->r13;
L_8024C030:
    // 0x8024C030: lhu         $t6, 0x18($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X18);
    // 0x8024C034: lhu         $t8, 0x12($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X12);
    // 0x8024C038: lw          $t0, 0xC4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XC4);
    // 0x8024C03C: ori         $t7, $t6, 0x8000
    ctx->r15 = ctx->r14 | 0X8000;
    // 0x8024C040: ori         $t9, $t8, 0x2
    ctx->r25 = ctx->r24 | 0X2;
    // 0x8024C044: sh          $t7, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r15;
    // 0x8024C048: sh          $t9, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r25;
    // 0x8024C04C: lhu         $t1, 0x6($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X6);
    // 0x8024C050: nop

    // 0x8024C054: andi        $t2, $t1, 0x10
    ctx->r10 = ctx->r9 & 0X10;
    // 0x8024C058: beq         $t2, $zero, L_8024C6B4
    if (ctx->r10 == 0) {
        // 0x8024C05C: ori         $at, $zero, 0xFFFF
        ctx->r1 = 0 | 0XFFFF;
            goto L_8024C6B4;
    }
    // 0x8024C05C: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x8024C060: lhu         $t3, 0x14($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X14);
    // 0x8024C064: nop

    // 0x8024C068: ori         $t4, $t3, 0x8
    ctx->r12 = ctx->r11 | 0X8;
    // 0x8024C06C: b           L_8024C6B0
    // 0x8024C070: sh          $t4, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r12;
        goto L_8024C6B0;
    // 0x8024C070: sh          $t4, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r12;
L_8024C074:
    // 0x8024C074: lhu         $t5, 0x12($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X12);
    // 0x8024C078: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8024C07C: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x8024C080: beq         $t6, $zero, L_8024C110
    if (ctx->r14 == 0) {
        // 0x8024C084: nop
    
            goto L_8024C110;
    }
    // 0x8024C084: nop

    // 0x8024C088: lb          $t7, -0x309F($t7)
    ctx->r15 = MEM_B(ctx->r15, -0X309F);
    // 0x8024C08C: lui         $t8, 0x8028
    ctx->r24 = S32(0X8028 << 16);
    // 0x8024C090: beq         $t7, $zero, L_8024C110
    if (ctx->r15 == 0) {
        // 0x8024C094: nop
    
            goto L_8024C110;
    }
    // 0x8024C094: nop

    // 0x8024C098: lh          $t8, -0x1B60($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X1B60);
    // 0x8024C09C: nop

    // 0x8024C0A0: andi        $t9, $t8, 0x3
    ctx->r25 = ctx->r24 & 0X3;
    // 0x8024C0A4: bne         $t9, $zero, L_8024C110
    if (ctx->r25 != 0) {
        // 0x8024C0A8: nop
    
            goto L_8024C110;
    }
    // 0x8024C0A8: nop

    // 0x8024C0AC: lhu         $t0, 0x14($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X14);
    // 0x8024C0B0: lui         $t2, 0x801B
    ctx->r10 = S32(0X801B << 16);
    // 0x8024C0B4: andi        $t1, $t0, 0x800
    ctx->r9 = ctx->r8 & 0X800;
    // 0x8024C0B8: bne         $t1, $zero, L_8024C110
    if (ctx->r9 != 0) {
        // 0x8024C0BC: nop
    
            goto L_8024C110;
    }
    // 0x8024C0BC: nop

    // 0x8024C0C0: lw          $t2, 0x3680($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X3680);
    // 0x8024C0C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8024C0C8: beq         $s0, $t2, L_8024C110
    if (ctx->r16 == ctx->r10) {
        // 0x8024C0CC: addiu       $a1, $zero, 0x1A
        ctx->r5 = ADD32(0, 0X1A);
            goto L_8024C110;
    }
    // 0x8024C0CC: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    // 0x8024C0D0: jal         0x8024BC08
    // 0x8024C0D4: sh          $a3, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r7;
    ovl_8024B800_func_8024BC08(rdram, ctx);
        goto after_7;
    // 0x8024C0D4: sh          $a3, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r7;
    after_7:
    // 0x8024C0D8: addiu       $t3, $zero, 0x1C
    ctx->r11 = ADD32(0, 0X1C);
    // 0x8024C0DC: jal         0x8007746C
    // 0x8024C0E0: sh          $t3, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r11;
    func_8007746C(rdram, ctx);
        goto after_8;
    // 0x8024C0E0: sh          $t3, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r11;
    after_8:
    // 0x8024C0E4: lui         $t4, 0x8028
    ctx->r12 = S32(0X8028 << 16);
    // 0x8024C0E8: lh          $t4, -0x1B60($t4)
    ctx->r12 = MEM_H(ctx->r12, -0X1B60);
    // 0x8024C0EC: lhu         $a3, 0x3E($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X3E);
    // 0x8024C0F0: andi        $t5, $t4, 0x4
    ctx->r13 = ctx->r12 & 0X4;
    // 0x8024C0F4: beq         $t5, $zero, L_8024C6B4
    if (ctx->r13 == 0) {
        // 0x8024C0F8: ori         $at, $zero, 0xFFFF
        ctx->r1 = 0 | 0XFFFF;
            goto L_8024C6B4;
    }
    // 0x8024C0F8: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x8024C0FC: jal         0x800774B4
    // 0x8024C100: sh          $a3, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r7;
    func_800774B4(rdram, ctx);
        goto after_9;
    // 0x8024C100: sh          $a3, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r7;
    after_9:
    // 0x8024C104: lhu         $a3, 0x3E($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X3E);
    // 0x8024C108: b           L_8024C6B4
    // 0x8024C10C: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
        goto L_8024C6B4;
    // 0x8024C10C: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
L_8024C110:
    // 0x8024C110: lwc1        $f12, 0xB0($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XB0);
    // 0x8024C114: lwc1        $f14, 0x8C($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x8024C118: jal         0x8027924C
    // 0x8024C11C: nop

    ovl_8024B800_func_8027924C(rdram, ctx);
        goto after_10;
    // 0x8024C11C: nop

    after_10:
    // 0x8024C120: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8024C124: nop

    // 0x8024C128: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x8024C12C: nop

    // 0x8024C130: bc1f        L_8024C148
    if (!c1cs) {
        // 0x8024C134: nop
    
            goto L_8024C148;
    }
    // 0x8024C134: nop

    // 0x8024C138: jal         0x802732D0
    // 0x8024C13C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_802732D0(rdram, ctx);
        goto after_11;
    // 0x8024C13C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x8024C140: b           L_8024C154
    // 0x8024C144: lwc1        $f16, 0xB0($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XB0);
        goto L_8024C154;
    // 0x8024C144: lwc1        $f16, 0xB0($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XB0);
L_8024C148:
    // 0x8024C148: jal         0x802732F4
    // 0x8024C14C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_802732F4(rdram, ctx);
        goto after_12;
    // 0x8024C14C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x8024C150: lwc1        $f16, 0xB0($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XB0);
L_8024C154:
    // 0x8024C154: lwc1        $f18, 0x8C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x8024C158: addiu       $a3, $zero, 0x27
    ctx->r7 = ADD32(0, 0X27);
    // 0x8024C15C: swc1        $f16, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->f16.u32l;
    // 0x8024C160: b           L_8024C6B0
    // 0x8024C164: swc1        $f18, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->f18.u32l;
        goto L_8024C6B0;
    // 0x8024C164: swc1        $f18, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->f18.u32l;
L_8024C168:
    // 0x8024C168: lhu         $t6, 0x18($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X18);
    // 0x8024C16C: lhu         $t8, 0x12($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X12);
    // 0x8024C170: ori         $t7, $t6, 0x2
    ctx->r15 = ctx->r14 | 0X2;
    // 0x8024C174: ori         $t9, $t8, 0x2
    ctx->r25 = ctx->r24 | 0X2;
    // 0x8024C178: sh          $t7, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r15;
    // 0x8024C17C: b           L_8024C6B0
    // 0x8024C180: sh          $t9, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r25;
        goto L_8024C6B0;
    // 0x8024C180: sh          $t9, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r25;
L_8024C184:
    // 0x8024C184: lhu         $t0, 0x20($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X20);
    // 0x8024C188: nop

    // 0x8024C18C: ori         $t1, $t0, 0x40
    ctx->r9 = ctx->r8 | 0X40;
    // 0x8024C190: sh          $t1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r9;
L_8024C194:
    // 0x8024C194: jal         0x802732F4
    // 0x8024C198: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_802732F4(rdram, ctx);
        goto after_13;
    // 0x8024C198: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x8024C19C: lwc1        $f12, 0x8C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x8024C1A0: lwc1        $f14, 0xB0($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0XB0);
    // 0x8024C1A4: jal         0x8027924C
    // 0x8024C1A8: nop

    ovl_8024B800_func_8027924C(rdram, ctx);
        goto after_14;
    // 0x8024C1A8: nop

    after_14:
    // 0x8024C1AC: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x8024C1B0: jal         0x80272AEC
    // 0x8024C1B4: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    ovl_8024B800_func_80272AEC(rdram, ctx);
        goto after_15;
    // 0x8024C1B4: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_15:
    // 0x8024C1B8: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8024C1BC: lwc1        $f5, -0x4278($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X4278);
    // 0x8024C1C0: lwc1        $f4, -0x4274($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X4274);
    // 0x8024C1C4: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x8024C1C8: c.lt.d      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.d < ctx->f6.d;
    // 0x8024C1CC: addiu       $a3, $zero, 0xAC
    ctx->r7 = ADD32(0, 0XAC);
    // 0x8024C1D0: bc1t        L_8024C1E8
    if (c1cs) {
        // 0x8024C1D4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8024C1E8;
    }
    // 0x8024C1D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8024C1D8: lhu         $t2, 0xE($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0XE);
    // 0x8024C1DC: addiu       $at, $zero, 0x43
    ctx->r1 = ADD32(0, 0X43);
    // 0x8024C1E0: bne         $t2, $at, L_8024C234
    if (ctx->r10 != ctx->r1) {
        // 0x8024C1E4: addiu       $t5, $zero, 0xA
        ctx->r13 = ADD32(0, 0XA);
            goto L_8024C234;
    }
    // 0x8024C1E4: addiu       $t5, $zero, 0xA
    ctx->r13 = ADD32(0, 0XA);
L_8024C1E8:
    // 0x8024C1E8: jal         0x802732F4
    // 0x8024C1EC: sh          $a3, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r7;
    ovl_8024B800_func_802732F4(rdram, ctx);
        goto after_16;
    // 0x8024C1EC: sh          $a3, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r7;
    after_16:
    // 0x8024C1F0: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8024C1F4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8024C1F8: lhu         $a3, 0x3E($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X3E);
    // 0x8024C1FC: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x8024C200: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8024C204: bc1f        L_8024C220
    if (!c1cs) {
        // 0x8024C208: nop
    
            goto L_8024C220;
    }
    // 0x8024C208: nop

    // 0x8024C20C: lh          $t3, 0xE4($s0)
    ctx->r11 = MEM_H(ctx->r16, 0XE4);
    // 0x8024C210: nop

    // 0x8024C214: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8024C218: b           L_8024C6B0
    // 0x8024C21C: sh          $t4, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r12;
        goto L_8024C6B0;
    // 0x8024C21C: sh          $t4, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r12;
L_8024C220:
    // 0x8024C220: jal         0x802732D0
    // 0x8024C224: sh          $a3, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r7;
    ovl_8024B800_func_802732D0(rdram, ctx);
        goto after_17;
    // 0x8024C224: sh          $a3, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r7;
    after_17:
    // 0x8024C228: lhu         $a3, 0x3E($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X3E);
    // 0x8024C22C: b           L_8024C6B4
    // 0x8024C230: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
        goto L_8024C6B4;
    // 0x8024C230: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
L_8024C234:
    // 0x8024C234: sh          $t5, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r13;
L_8024C238:
    // 0x8024C238: lw          $t6, 0xD8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XD8);
    // 0x8024C23C: lui         $at, 0xF4
    ctx->r1 = S32(0XF4 << 16);
    // 0x8024C240: lw          $t7, 0x20($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X20);
    // 0x8024C244: ori         $at, $at, 0x2400
    ctx->r1 = ctx->r1 | 0X2400;
    // 0x8024C248: sltu        $at, $t7, $at
    ctx->r1 = ctx->r15 < ctx->r1 ? 1 : 0;
    // 0x8024C24C: beq         $at, $zero, L_8024C270
    if (ctx->r1 == 0) {
        // 0x8024C250: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8024C270;
    }
    // 0x8024C250: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8024C254: lbu         $t8, 0x4($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X4);
    // 0x8024C258: lui         $a3, 0x8028
    ctx->r7 = S32(0X8028 << 16);
    // 0x8024C25C: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x8024C260: addu        $a3, $a3, $t9
    ctx->r7 = ADD32(ctx->r7, ctx->r25);
    // 0x8024C264: lhu         $a3, -0x25E0($a3)
    ctx->r7 = MEM_HU(ctx->r7, -0X25E0);
    // 0x8024C268: b           L_8024C288
    // 0x8024C26C: nop

        goto L_8024C288;
    // 0x8024C26C: nop

L_8024C270:
    // 0x8024C270: lbu         $t0, 0x4($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X4);
    // 0x8024C274: lui         $a3, 0x8028
    ctx->r7 = S32(0X8028 << 16);
    // 0x8024C278: sll         $t1, $t0, 1
    ctx->r9 = S32(ctx->r8 << 1);
    // 0x8024C27C: addu        $a3, $a3, $t1
    ctx->r7 = ADD32(ctx->r7, ctx->r9);
    // 0x8024C280: lhu         $a3, -0x25F8($a3)
    ctx->r7 = MEM_HU(ctx->r7, -0X25F8);
    // 0x8024C284: nop

L_8024C288:
    // 0x8024C288: jal         0x802732F4
    // 0x8024C28C: sh          $a3, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r7;
    ovl_8024B800_func_802732F4(rdram, ctx);
        goto after_18;
    // 0x8024C28C: sh          $a3, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r7;
    after_18:
    // 0x8024C290: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x8024C294: addiu       $v1, $v1, 0x3B20
    ctx->r3 = ADD32(ctx->r3, 0X3B20);
    // 0x8024C298: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8024C29C: lhu         $a3, 0x3E($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X3E);
    // 0x8024C2A0: lw          $t2, 0x84($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X84);
    // 0x8024C2A4: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8024C2A8: bne         $t2, $zero, L_8024C2C8
    if (ctx->r10 != 0) {
        // 0x8024C2AC: nop
    
            goto L_8024C2C8;
    }
    // 0x8024C2AC: nop

    // 0x8024C2B0: lhu         $t3, 0x10($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X10);
    // 0x8024C2B4: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8024C2B8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8024C2BC: sh          $t4, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r12;
    // 0x8024C2C0: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x8024C2C4: nop

L_8024C2C8:
    // 0x8024C2C8: lwc1        $f16, -0x4270($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X4270);
    // 0x8024C2CC: b           L_8024C6B0
    // 0x8024C2D0: swc1        $f16, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f16.u32l;
        goto L_8024C6B0;
    // 0x8024C2D0: swc1        $f16, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f16.u32l;
L_8024C2D4:
    // 0x8024C2D4: jal         0x8024C740
    // 0x8024C2D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8024C740(rdram, ctx);
        goto after_19;
    // 0x8024C2D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
    // 0x8024C2DC: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x8024C2E0: lw          $t5, 0xB24($t5)
    ctx->r13 = MEM_W(ctx->r13, 0XB24);
    // 0x8024C2E4: andi        $a3, $v0, 0xFFFF
    ctx->r7 = ctx->r2 & 0XFFFF;
    // 0x8024C2E8: bne         $s0, $t5, L_8024C6B0
    if (ctx->r16 != ctx->r13) {
        // 0x8024C2EC: lui         $t6, 0x8012
        ctx->r14 = S32(0X8012 << 16);
            goto L_8024C6B0;
    }
    // 0x8024C2EC: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8024C2F0: lhu         $t6, 0xB78($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB78);
    // 0x8024C2F4: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x8024C2F8: bne         $t6, $at, L_8024C6B0
    if (ctx->r14 != ctx->r1) {
        // 0x8024C2FC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8024C6B0;
    }
    // 0x8024C2FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8024C300: lbu         $a1, 0x4($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X4);
    // 0x8024C304: jal         0x80273E24
    // 0x8024C308: sh          $a3, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r7;
    ovl_8024B800_func_80273E24(rdram, ctx);
        goto after_20;
    // 0x8024C308: sh          $a3, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r7;
    after_20:
    // 0x8024C30C: lhu         $a3, 0x3E($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X3E);
    // 0x8024C310: beq         $v0, $zero, L_8024C6B4
    if (ctx->r2 == 0) {
        // 0x8024C314: ori         $at, $zero, 0xFFFF
        ctx->r1 = 0 | 0XFFFF;
            goto L_8024C6B4;
    }
    // 0x8024C314: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x8024C318: b           L_8024C6CC
    // 0x8024C31C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8024C6CC;
    // 0x8024C31C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8024C320:
    // 0x8024C320: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x8024C324: addiu       $v1, $v1, 0x3B20
    ctx->r3 = ADD32(ctx->r3, 0X3B20);
    // 0x8024C328: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8024C32C: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x8024C330: lw          $t7, 0x84($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X84);
    // 0x8024C334: nop

    // 0x8024C338: bne         $s0, $t7, L_8024C3FC
    if (ctx->r16 != ctx->r15) {
        // 0x8024C33C: nop
    
            goto L_8024C3FC;
    }
    // 0x8024C33C: nop

    // 0x8024C340: lhu         $t8, 0xB78($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0XB78);
    // 0x8024C344: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x8024C348: bne         $t8, $at, L_8024C3B8
    if (ctx->r24 != ctx->r1) {
        // 0x8024C34C: addiu       $a3, $zero, 0x1BF
        ctx->r7 = ADD32(0, 0X1BF);
            goto L_8024C3B8;
    }
    // 0x8024C34C: addiu       $a3, $zero, 0x1BF
    ctx->r7 = ADD32(0, 0X1BF);
    // 0x8024C350: lhu         $t9, 0xC2($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0XC2);
    // 0x8024C354: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8024C358: andi        $t0, $t9, 0xFFBF
    ctx->r8 = ctx->r25 & 0XFFBF;
    // 0x8024C35C: sh          $t0, 0xC2($v0)
    MEM_H(0XC2, ctx->r2) = ctx->r8;
    // 0x8024C360: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8024C364: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8024C368: lh          $t1, 0xE8($v0)
    ctx->r9 = MEM_H(ctx->r2, 0XE8);
    // 0x8024C36C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8024C370: mtc1        $t1, $f18
    ctx->f18.u32l = ctx->r9;
    // 0x8024C374: nop

    // 0x8024C378: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8024C37C: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
    // 0x8024C380: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8024C384: nop

    // 0x8024C388: lh          $t2, 0xEA($v0)
    ctx->r10 = MEM_H(ctx->r2, 0XEA);
    // 0x8024C38C: nop

    // 0x8024C390: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x8024C394: nop

    // 0x8024C398: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8024C39C: swc1        $f8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f8.u32l;
    // 0x8024C3A0: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x8024C3A4: lwc1        $f10, -0x426C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X426C);
    // 0x8024C3A8: jal         0x8024BC08
    // 0x8024C3AC: swc1        $f10, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->f10.u32l;
    ovl_8024B800_func_8024BC08(rdram, ctx);
        goto after_21;
    // 0x8024C3AC: swc1        $f10, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->f10.u32l;
    after_21:
    // 0x8024C3B0: b           L_8024C6CC
    // 0x8024C3B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8024C6CC;
    // 0x8024C3B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8024C3B8:
    // 0x8024C3B8: lhu         $t4, 0x16($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X16);
    // 0x8024C3BC: lhu         $t6, 0x2C($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X2C);
    // 0x8024C3C0: ori         $t5, $t4, 0x40
    ctx->r13 = ctx->r12 | 0X40;
    // 0x8024C3C4: andi        $t7, $t6, 0x3
    ctx->r15 = ctx->r14 & 0X3;
    // 0x8024C3C8: beq         $t7, $zero, L_8024C3E4
    if (ctx->r15 == 0) {
        // 0x8024C3CC: sh          $t5, 0x16($s0)
        MEM_H(0X16, ctx->r16) = ctx->r13;
            goto L_8024C3E4;
    }
    // 0x8024C3CC: sh          $t5, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r13;
    // 0x8024C3D0: lw          $t8, 0xC8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC8);
    // 0x8024C3D4: nop

    // 0x8024C3D8: lhu         $t9, 0x938($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X938);
    // 0x8024C3DC: nop

    // 0x8024C3E0: bne         $t9, $zero, L_8024C6B0
    if (ctx->r25 != 0) {
        // 0x8024C3E4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8024C6B0;
    }
L_8024C3E4:
    // 0x8024C3E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8024C3E8: jal         0x803F2464
    // 0x8024C3EC: sh          $a3, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(0x803F2464)(rdram, ctx);
        goto after_22;
    // 0x8024C3EC: sh          $a3, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r7;
    after_22:
    // 0x8024C3F0: lhu         $a3, 0x3E($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X3E);
    // 0x8024C3F4: b           L_8024C6B4
    // 0x8024C3F8: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
        goto L_8024C6B4;
    // 0x8024C3F8: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
L_8024C3FC:
    // 0x8024C3FC: jal         0x8024BB9C
    // 0x8024C400: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8024BB9C(rdram, ctx);
        goto after_23;
    // 0x8024C400: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_23:
    // 0x8024C404: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x8024C408: addiu       $v1, $v1, 0x3B20
    ctx->r3 = ADD32(ctx->r3, 0X3B20);
    // 0x8024C40C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8024C410: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8024C414: lw          $t0, 0x84($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X84);
    // 0x8024C418: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x8024C41C: bne         $s0, $t0, L_8024C498
    if (ctx->r16 != ctx->r8) {
        // 0x8024C420: nop
    
            goto L_8024C498;
    }
    // 0x8024C420: nop

    // 0x8024C424: lwc1        $f16, -0x4268($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X4268);
    // 0x8024C428: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x8024C42C: swc1        $f16, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f16.u32l;
    // 0x8024C430: lhu         $t1, 0xB78($t1)
    ctx->r9 = MEM_HU(ctx->r9, 0XB78);
    // 0x8024C434: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x8024C438: beq         $t1, $zero, L_8024C480
    if (ctx->r9 == 0) {
        // 0x8024C43C: nop
    
            goto L_8024C480;
    }
    // 0x8024C43C: nop

    // 0x8024C440: lw          $t2, 0xB2C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0XB2C);
    // 0x8024C444: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x8024C448: beq         $s0, $t2, L_8024C480
    if (ctx->r16 == ctx->r10) {
        // 0x8024C44C: nop
    
            goto L_8024C480;
    }
    // 0x8024C44C: nop

    // 0x8024C450: sh          $t3, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r11;
    // 0x8024C454: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x8024C458: nop

    // 0x8024C45C: sw          $zero, 0x84($t4)
    MEM_W(0X84, ctx->r12) = 0;
    // 0x8024C460: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x8024C464: nop

    // 0x8024C468: sw          $zero, 0x88($t5)
    MEM_W(0X88, ctx->r13) = 0;
    // 0x8024C46C: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x8024C470: jal         0x800557AC
    // 0x8024C474: nop

    func_800557AC(rdram, ctx);
        goto after_24;
    // 0x8024C474: nop

    after_24:
    // 0x8024C478: b           L_8024C4A0
    // 0x8024C47C: lhu         $t9, 0x12($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X12);
        goto L_8024C4A0;
    // 0x8024C47C: lhu         $t9, 0x12($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X12);
L_8024C480:
    // 0x8024C480: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x8024C484: nop

    // 0x8024C488: sh          $zero, 0x66($t6)
    MEM_H(0X66, ctx->r14) = 0;
    // 0x8024C48C: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x8024C490: b           L_8024C49C
    // 0x8024C494: sh          $zero, 0x68($t7)
    MEM_H(0X68, ctx->r15) = 0;
        goto L_8024C49C;
    // 0x8024C494: sh          $zero, 0x68($t7)
    MEM_H(0X68, ctx->r15) = 0;
L_8024C498:
    // 0x8024C498: sh          $t8, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r24;
L_8024C49C:
    // 0x8024C49C: lhu         $t9, 0x12($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X12);
L_8024C4A0:
    // 0x8024C4A0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8024C4A4: andi        $t0, $t9, 0x8
    ctx->r8 = ctx->r25 & 0X8;
    // 0x8024C4A8: bne         $t0, $zero, L_8024C570
    if (ctx->r8 != 0) {
        // 0x8024C4AC: swc1        $f18, 0x48($s0)
        MEM_W(0X48, ctx->r16) = ctx->f18.u32l;
            goto L_8024C570;
    }
    // 0x8024C4AC: swc1        $f18, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->f18.u32l;
    // 0x8024C4B0: lhu         $t1, 0xE($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0XE);
    // 0x8024C4B4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8024C4B8: bne         $t1, $at, L_8024C574
    if (ctx->r9 != ctx->r1) {
        // 0x8024C4BC: lhu         $t6, 0x32($sp)
        ctx->r14 = MEM_HU(ctx->r29, 0X32);
            goto L_8024C574;
    }
    // 0x8024C4BC: lhu         $t6, 0x32($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X32);
    // 0x8024C4C0: lhu         $t2, 0x32($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X32);
    // 0x8024C4C4: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8024C4C8: beq         $t2, $zero, L_8024C574
    if (ctx->r10 == 0) {
        // 0x8024C4CC: lhu         $t6, 0x32($sp)
        ctx->r14 = MEM_HU(ctx->r29, 0X32);
            goto L_8024C574;
    }
    // 0x8024C4CC: lhu         $t6, 0x32($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X32);
    // 0x8024C4D0: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8024C4D4: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8024C4D8: lwc1        $f4, 0xAC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XAC);
    // 0x8024C4DC: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8024C4E0: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8024C4E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8024C4E8: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x8024C4EC: nop

    // 0x8024C4F0: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x8024C4F4: beq         $t4, $zero, L_8024C540
    if (ctx->r12 == 0) {
        // 0x8024C4F8: nop
    
            goto L_8024C540;
    }
    // 0x8024C4F8: nop

    // 0x8024C4FC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8024C500: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8024C504: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8024C508: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8024C50C: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8024C510: nop

    // 0x8024C514: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8024C518: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x8024C51C: nop

    // 0x8024C520: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x8024C524: bne         $t4, $zero, L_8024C538
    if (ctx->r12 != 0) {
        // 0x8024C528: nop
    
            goto L_8024C538;
    }
    // 0x8024C528: nop

    // 0x8024C52C: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x8024C530: b           L_8024C550
    // 0x8024C534: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
        goto L_8024C550;
    // 0x8024C534: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
L_8024C538:
    // 0x8024C538: b           L_8024C550
    // 0x8024C53C: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
        goto L_8024C550;
    // 0x8024C53C: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
L_8024C540:
    // 0x8024C540: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x8024C544: nop

    // 0x8024C548: bltz        $t4, L_8024C538
    if (SIGNED(ctx->r12) < 0) {
        // 0x8024C54C: nop
    
            goto L_8024C538;
    }
    // 0x8024C54C: nop

L_8024C550:
    // 0x8024C550: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8024C554: andi        $t5, $t4, 0xFFFF
    ctx->r13 = ctx->r12 & 0XFFFF;
    // 0x8024C558: bgtz        $t5, L_8024C574
    if (SIGNED(ctx->r13) > 0) {
        // 0x8024C55C: lhu         $t6, 0x32($sp)
        ctx->r14 = MEM_HU(ctx->r29, 0X32);
            goto L_8024C574;
    }
    // 0x8024C55C: lhu         $t6, 0x32($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X32);
    // 0x8024C560: jal         0x8024BC08
    // 0x8024C564: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_8024B800_func_8024BC08(rdram, ctx);
        goto after_25;
    // 0x8024C564: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_25:
    // 0x8024C568: b           L_8024C6CC
    // 0x8024C56C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8024C6CC;
    // 0x8024C56C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8024C570:
    // 0x8024C570: lhu         $t6, 0x32($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X32);
L_8024C574:
    // 0x8024C574: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8024C578: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8024C57C: jal         0x80272374
    // 0x8024C580: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    ovl_8024B800_func_80272374(rdram, ctx);
        goto after_26;
    // 0x8024C580: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    after_26:
    // 0x8024C584: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8024C588: lhu         $t7, 0xB78($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0XB78);
    // 0x8024C58C: addiu       $a3, $zero, 0x1D7
    ctx->r7 = ADD32(0, 0X1D7);
    // 0x8024C590: slti        $at, $t7, 0x9
    ctx->r1 = SIGNED(ctx->r15) < 0X9 ? 1 : 0;
    // 0x8024C594: bne         $at, $zero, L_8024C5A4
    if (ctx->r1 != 0) {
        // 0x8024C598: nop
    
            goto L_8024C5A4;
    }
    // 0x8024C598: nop

    // 0x8024C59C: b           L_8024C5F4
    // 0x8024C5A0: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
        goto L_8024C5F4;
    // 0x8024C5A0: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
L_8024C5A4:
    // 0x8024C5A4: lhu         $t8, 0x16($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X16);
    // 0x8024C5A8: nop

    // 0x8024C5AC: andi        $t9, $t8, 0x2
    ctx->r25 = ctx->r24 & 0X2;
    // 0x8024C5B0: beq         $t9, $zero, L_8024C5C0
    if (ctx->r25 == 0) {
        // 0x8024C5B4: nop
    
            goto L_8024C5C0;
    }
    // 0x8024C5B4: nop

    // 0x8024C5B8: b           L_8024C5F4
    // 0x8024C5BC: addiu       $a3, $zero, 0x1C0
    ctx->r7 = ADD32(0, 0X1C0);
        goto L_8024C5F4;
    // 0x8024C5BC: addiu       $a3, $zero, 0x1C0
    ctx->r7 = ADD32(0, 0X1C0);
L_8024C5C0:
    // 0x8024C5C0: lb          $t0, 0x5($s0)
    ctx->r8 = MEM_B(ctx->r16, 0X5);
    // 0x8024C5C4: nop

    // 0x8024C5C8: beq         $t0, $zero, L_8024C5E8
    if (ctx->r8 == 0) {
        // 0x8024C5CC: nop
    
            goto L_8024C5E8;
    }
    // 0x8024C5CC: nop

    // 0x8024C5D0: beq         $v0, $zero, L_8024C5E8
    if (ctx->r2 == 0) {
        // 0x8024C5D4: nop
    
            goto L_8024C5E8;
    }
    // 0x8024C5D4: nop

    // 0x8024C5D8: jal         0x8024BAB8
    // 0x8024C5DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8024BAB8(rdram, ctx);
        goto after_27;
    // 0x8024C5DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_27:
    // 0x8024C5E0: b           L_8024C5F4
    // 0x8024C5E4: andi        $a3, $v0, 0xFFFF
    ctx->r7 = ctx->r2 & 0XFFFF;
        goto L_8024C5F4;
    // 0x8024C5E4: andi        $a3, $v0, 0xFFFF
    ctx->r7 = ctx->r2 & 0XFFFF;
L_8024C5E8:
    // 0x8024C5E8: jal         0x8024BAFC
    // 0x8024C5EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8024BAFC(rdram, ctx);
        goto after_28;
    // 0x8024C5EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_28:
    // 0x8024C5F0: andi        $a3, $v0, 0xFFFF
    ctx->r7 = ctx->r2 & 0XFFFF;
L_8024C5F4:
    // 0x8024C5F4: lhu         $t1, 0xE($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0XE);
    // 0x8024C5F8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8024C5FC: bne         $t1, $at, L_8024C638
    if (ctx->r9 != ctx->r1) {
        // 0x8024C600: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8024C638;
    }
    // 0x8024C600: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8024C604: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x8024C608: jal         0x8024B950
    // 0x8024C60C: sh          $a3, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r7;
    ovl_8024B800_func_8024B950(rdram, ctx);
        goto after_29;
    // 0x8024C60C: sh          $a3, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r7;
    after_29:
    // 0x8024C610: lhu         $a3, 0x3E($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X3E);
    // 0x8024C614: ori         $at, $zero, 0xFFFE
    ctx->r1 = 0 | 0XFFFE;
    // 0x8024C618: bne         $v0, $at, L_8024C628
    if (ctx->r2 != ctx->r1) {
        // 0x8024C61C: andi        $v1, $v0, 0xFFFF
        ctx->r3 = ctx->r2 & 0XFFFF;
            goto L_8024C628;
    }
    // 0x8024C61C: andi        $v1, $v0, 0xFFFF
    ctx->r3 = ctx->r2 & 0XFFFF;
    // 0x8024C620: b           L_8024C638
    // 0x8024C624: ori         $a3, $zero, 0xFFFF
    ctx->r7 = 0 | 0XFFFF;
        goto L_8024C638;
    // 0x8024C624: ori         $a3, $zero, 0xFFFF
    ctx->r7 = 0 | 0XFFFF;
L_8024C628:
    // 0x8024C628: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x8024C62C: beq         $v1, $at, L_8024C638
    if (ctx->r3 == ctx->r1) {
        // 0x8024C630: nop
    
            goto L_8024C638;
    }
    // 0x8024C630: nop

    // 0x8024C634: andi        $a3, $v1, 0xFFFF
    ctx->r7 = ctx->r3 & 0XFFFF;
L_8024C638:
    // 0x8024C638: lhu         $t2, 0x20($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X20);
    // 0x8024C63C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8024C640: andi        $t3, $t2, 0x2
    ctx->r11 = ctx->r10 & 0X2;
    // 0x8024C644: beq         $t3, $zero, L_8024C650
    if (ctx->r11 == 0) {
        // 0x8024C648: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8024C650;
    }
    // 0x8024C648: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8024C64C: addiu       $a3, $zero, 0x20C
    ctx->r7 = ADD32(0, 0X20C);
L_8024C650:
    // 0x8024C650: lhu         $t4, 0x12($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X12);
    // 0x8024C654: sh          $zero, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = 0;
    // 0x8024C658: andi        $t5, $t4, 0xCFFD
    ctx->r13 = ctx->r12 & 0XCFFD;
    // 0x8024C65C: sh          $t5, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r13;
    // 0x8024C660: swc1        $f0, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->f0.u32l;
    // 0x8024C664: swc1        $f0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f0.u32l;
    // 0x8024C668: swc1        $f0, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f0.u32l;
    // 0x8024C66C: jal         0x802732F4
    // 0x8024C670: sh          $a3, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r7;
    ovl_8024B800_func_802732F4(rdram, ctx);
        goto after_30;
    // 0x8024C670: sh          $a3, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r7;
    after_30:
    // 0x8024C674: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x8024C678: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8024C67C: lhu         $a3, 0x3E($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X3E);
    // 0x8024C680: bne         $v0, $v1, L_8024C698
    if (ctx->r2 != ctx->r3) {
        // 0x8024C684: addiu       $at, $zero, 0x2F
        ctx->r1 = ADD32(0, 0X2F);
            goto L_8024C698;
    }
    // 0x8024C684: addiu       $at, $zero, 0x2F
    ctx->r1 = ADD32(0, 0X2F);
    // 0x8024C688: lbu         $t6, 0x4($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X4);
    // 0x8024C68C: nop

    // 0x8024C690: beq         $v0, $t6, L_8024C6A0
    if (ctx->r2 == ctx->r14) {
        // 0x8024C694: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_8024C6A0;
    }
    // 0x8024C694: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
L_8024C698:
    // 0x8024C698: bne         $v1, $at, L_8024C6A4
    if (ctx->r3 != ctx->r1) {
        // 0x8024C69C: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_8024C6A4;
    }
    // 0x8024C69C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
L_8024C6A0:
    // 0x8024C6A0: sh          $t7, 0xEE($s0)
    MEM_H(0XEE, ctx->r16) = ctx->r15;
L_8024C6A4:
    // 0x8024C6A4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8024C6A8: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
    // 0x8024C6AC: swc1        $f8, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f8.u32l;
L_8024C6B0:
    // 0x8024C6B0: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
L_8024C6B4:
    // 0x8024C6B4: beq         $a3, $at, L_8024C6C8
    if (ctx->r7 == ctx->r1) {
        // 0x8024C6B8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8024C6C8;
    }
    // 0x8024C6B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8024C6BC: andi        $a1, $a3, 0xFFFF
    ctx->r5 = ctx->r7 & 0XFFFF;
    // 0x8024C6C0: jal         0x80272D3C
    // 0x8024C6C4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_8024B800_func_80272D3C(rdram, ctx);
        goto after_31;
    // 0x8024C6C4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_31:
L_8024C6C8:
    // 0x8024C6C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8024C6CC:
    // 0x8024C6CC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8024C6D0: jr          $ra
    // 0x8024C6D4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x8024C6D4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_8024B800_func_8024C6D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8024C6D8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8024C6DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8024C6E0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8024C6E4: lw          $t7, 0xCC($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XCC);
    // 0x8024C6E8: andi        $t6, $a1, 0xFFFF
    ctx->r14 = ctx->r5 & 0XFFFF;
    // 0x8024C6EC: lw          $v0, 0x30($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X30);
    // 0x8024C6F0: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x8024C6F4: lhu         $t8, 0x2($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X2);
    // 0x8024C6F8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8024C6FC: andi        $t9, $t8, 0x8000
    ctx->r25 = ctx->r24 & 0X8000;
    // 0x8024C700: jal         0x8024BC08
    // 0x8024C704: sh          $t9, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r25;
    ovl_8024B800_func_8024BC08(rdram, ctx);
        goto after_0;
    // 0x8024C704: sh          $t9, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r25;
    after_0:
    // 0x8024C708: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x8024C70C: nop

    // 0x8024C710: lhu         $t0, 0x2($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X2);
    // 0x8024C714: nop

    // 0x8024C718: andi        $t2, $t0, 0x7FFF
    ctx->r10 = ctx->r8 & 0X7FFF;
    // 0x8024C71C: sh          $t2, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r10;
    // 0x8024C720: lhu         $t3, 0x1A($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X1A);
    // 0x8024C724: nop

    // 0x8024C728: or          $t4, $t2, $t3
    ctx->r12 = ctx->r10 | ctx->r11;
    // 0x8024C72C: sh          $t4, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r12;
    // 0x8024C730: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8024C734: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8024C738: jr          $ra
    // 0x8024C73C: nop

    return;
    // 0x8024C73C: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8024C740(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8024C740: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8024C744: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8024C748: jal         0x802732F4
    // 0x8024C74C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    ovl_8024B800_func_802732F4(rdram, ctx);
        goto after_0;
    // 0x8024C74C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    after_0:
    // 0x8024C750: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8024C754: nop

    // 0x8024C758: lhu         $t6, 0x16($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X16);
    // 0x8024C75C: lwc1        $f4, 0xB0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XB0);
    // 0x8024C760: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x8024C764: beq         $t7, $zero, L_8024C7AC
    if (ctx->r15 == 0) {
        // 0x8024C768: swc1        $f4, 0x7C($a0)
        MEM_W(0X7C, ctx->r4) = ctx->f4.u32l;
            goto L_8024C7AC;
    }
    // 0x8024C768: swc1        $f4, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f4.u32l;
    // 0x8024C76C: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x8024C770: lui         $v1, 0x8028
    ctx->r3 = S32(0X8028 << 16);
    // 0x8024C774: sll         $t8, $v0, 1
    ctx->r24 = S32(ctx->r2 << 1);
    // 0x8024C778: addu        $v1, $v1, $t8
    ctx->r3 = ADD32(ctx->r3, ctx->r24);
    // 0x8024C77C: lhu         $v1, -0x2608($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X2608);
    // 0x8024C780: bne         $v0, $zero, L_8024C920
    if (ctx->r2 != 0) {
        // 0x8024C784: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8024C920;
    }
    // 0x8024C784: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8024C788: lw          $t9, 0xD8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XD8);
    // 0x8024C78C: lui         $at, 0xF4
    ctx->r1 = S32(0XF4 << 16);
    // 0x8024C790: lw          $t0, 0x20($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X20);
    // 0x8024C794: ori         $at, $at, 0x2400
    ctx->r1 = ctx->r1 | 0X2400;
    // 0x8024C798: sltu        $at, $t0, $at
    ctx->r1 = ctx->r8 < ctx->r1 ? 1 : 0;
    // 0x8024C79C: beq         $at, $zero, L_8024C920
    if (ctx->r1 == 0) {
        // 0x8024C7A0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8024C920;
    }
    // 0x8024C7A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8024C7A4: b           L_8024C91C
    // 0x8024C7A8: addiu       $v1, $zero, 0xB6
    ctx->r3 = ADD32(0, 0XB6);
        goto L_8024C91C;
    // 0x8024C7A8: addiu       $v1, $zero, 0xB6
    ctx->r3 = ADD32(0, 0XB6);
L_8024C7AC:
    // 0x8024C7AC: lbu         $a1, 0x4($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X4);
    // 0x8024C7B0: jal         0x80272374
    // 0x8024C7B4: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    ovl_8024B800_func_80272374(rdram, ctx);
        goto after_1;
    // 0x8024C7B4: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    after_1:
    // 0x8024C7B8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8024C7BC: sll         $t1, $v0, 24
    ctx->r9 = S32(ctx->r2 << 24);
    // 0x8024C7C0: sra         $t2, $t1, 24
    ctx->r10 = S32(SIGNED(ctx->r9) >> 24);
    // 0x8024C7C4: beq         $t2, $zero, L_8024C7FC
    if (ctx->r10 == 0) {
        // 0x8024C7C8: sb          $v0, 0x5($a0)
        MEM_B(0X5, ctx->r4) = ctx->r2;
            goto L_8024C7FC;
    }
    // 0x8024C7C8: sb          $v0, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r2;
    // 0x8024C7CC: lhu         $t3, 0x1A($a0)
    ctx->r11 = MEM_HU(ctx->r4, 0X1A);
    // 0x8024C7D0: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x8024C7D4: beq         $t3, $zero, L_8024C7E8
    if (ctx->r11 == 0) {
        // 0x8024C7D8: addiu       $a2, $a2, -0x25B4
        ctx->r6 = ADD32(ctx->r6, -0X25B4);
            goto L_8024C7E8;
    }
    // 0x8024C7D8: addiu       $a2, $a2, -0x25B4
    ctx->r6 = ADD32(ctx->r6, -0X25B4);
    // 0x8024C7DC: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x8024C7E0: b           L_8024C7E8
    // 0x8024C7E4: addiu       $a2, $a2, -0x25C8
    ctx->r6 = ADD32(ctx->r6, -0X25C8);
        goto L_8024C7E8;
    // 0x8024C7E4: addiu       $a2, $a2, -0x25C8
    ctx->r6 = ADD32(ctx->r6, -0X25C8);
L_8024C7E8:
    // 0x8024C7E8: lb          $a1, 0x5($a0)
    ctx->r5 = MEM_B(ctx->r4, 0X5);
    // 0x8024C7EC: jal         0x80273428
    // 0x8024C7F0: nop

    ovl_8024B800_func_80273428(rdram, ctx);
        goto after_2;
    // 0x8024C7F0: nop

    after_2:
    // 0x8024C7F4: b           L_8024C91C
    // 0x8024C7F8: andi        $v1, $v0, 0xFFFF
    ctx->r3 = ctx->r2 & 0XFFFF;
        goto L_8024C91C;
    // 0x8024C7F8: andi        $v1, $v0, 0xFFFF
    ctx->r3 = ctx->r2 & 0XFFFF;
L_8024C7FC:
    // 0x8024C7FC: lbu         $a1, 0x4($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X4);
    // 0x8024C800: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8024C804: jal         0x8027356C
    // 0x8024C808: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    ovl_8024B800_func_8027356C(rdram, ctx);
        goto after_3;
    // 0x8024C808: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    after_3:
    // 0x8024C80C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8024C810: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8024C814: bne         $v0, $at, L_8024C840
    if (ctx->r2 != ctx->r1) {
        // 0x8024C818: lui         $v1, 0x8028
        ctx->r3 = S32(0X8028 << 16);
            goto L_8024C840;
    }
    // 0x8024C818: lui         $v1, 0x8028
    ctx->r3 = S32(0X8028 << 16);
    // 0x8024C81C: lhu         $t4, 0x16($a0)
    ctx->r12 = MEM_HU(ctx->r4, 0X16);
    // 0x8024C820: lbu         $t6, 0x4($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X4);
    // 0x8024C824: ori         $t5, $t4, 0x404
    ctx->r13 = ctx->r12 | 0X404;
    // 0x8024C828: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x8024C82C: sh          $t5, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r13;
    // 0x8024C830: addu        $v1, $v1, $t7
    ctx->r3 = ADD32(ctx->r3, ctx->r15);
    // 0x8024C834: lhu         $v1, -0x262C($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X262C);
    // 0x8024C838: b           L_8024C920
    // 0x8024C83C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8024C920;
    // 0x8024C83C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8024C840:
    // 0x8024C840: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8024C844: bne         $v0, $at, L_8024C8A4
    if (ctx->r2 != ctx->r1) {
        // 0x8024C848: lui         $v1, 0x8028
        ctx->r3 = S32(0X8028 << 16);
            goto L_8024C8A4;
    }
    // 0x8024C848: lui         $v1, 0x8028
    ctx->r3 = S32(0X8028 << 16);
    // 0x8024C84C: lhu         $t8, 0x16($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X16);
    // 0x8024C850: lbu         $t0, 0x4($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X4);
    // 0x8024C854: ori         $t9, $t8, 0x800
    ctx->r25 = ctx->r24 | 0X800;
    // 0x8024C858: sll         $t1, $t0, 1
    ctx->r9 = S32(ctx->r8 << 1);
    // 0x8024C85C: sh          $t9, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r25;
    // 0x8024C860: addu        $v1, $v1, $t1
    ctx->r3 = ADD32(ctx->r3, ctx->r9);
    // 0x8024C864: lhu         $v1, -0x2628($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X2628);
    // 0x8024C868: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8024C86C: jal         0x802732F4
    // 0x8024C870: sh          $v1, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r3;
    ovl_8024B800_func_802732F4(rdram, ctx);
        goto after_4;
    // 0x8024C870: sh          $v1, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r3;
    after_4:
    // 0x8024C874: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8024C878: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8024C87C: lhu         $v1, 0x2E($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X2E);
    // 0x8024C880: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x8024C884: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8024C888: bc1f        L_8024C920
    if (!c1cs) {
        // 0x8024C88C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8024C920;
    }
    // 0x8024C88C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8024C890: jal         0x802732D0
    // 0x8024C894: sh          $v1, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r3;
    ovl_8024B800_func_802732D0(rdram, ctx);
        goto after_5;
    // 0x8024C894: sh          $v1, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r3;
    after_5:
    // 0x8024C898: lhu         $v1, 0x2E($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X2E);
    // 0x8024C89C: b           L_8024C920
    // 0x8024C8A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8024C920;
    // 0x8024C8A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8024C8A4:
    // 0x8024C8A4: lhu         $t2, 0x20($a0)
    ctx->r10 = MEM_HU(ctx->r4, 0X20);
    // 0x8024C8A8: nop

    // 0x8024C8AC: andi        $t3, $t2, 0x2
    ctx->r11 = ctx->r10 & 0X2;
    // 0x8024C8B0: beq         $t3, $zero, L_8024C8C0
    if (ctx->r11 == 0) {
        // 0x8024C8B4: nop
    
            goto L_8024C8C0;
    }
    // 0x8024C8B4: nop

    // 0x8024C8B8: b           L_8024C91C
    // 0x8024C8BC: addiu       $v1, $zero, 0xD3
    ctx->r3 = ADD32(0, 0XD3);
        goto L_8024C91C;
    // 0x8024C8BC: addiu       $v1, $zero, 0xD3
    ctx->r3 = ADD32(0, 0XD3);
L_8024C8C0:
    // 0x8024C8C0: lw          $t4, 0xD8($a0)
    ctx->r12 = MEM_W(ctx->r4, 0XD8);
    // 0x8024C8C4: lui         $at, 0xF4
    ctx->r1 = S32(0XF4 << 16);
    // 0x8024C8C8: lw          $t5, 0x20($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X20);
    // 0x8024C8CC: ori         $at, $at, 0x2400
    ctx->r1 = ctx->r1 | 0X2400;
    // 0x8024C8D0: sltu        $at, $t5, $at
    ctx->r1 = ctx->r13 < ctx->r1 ? 1 : 0;
    // 0x8024C8D4: beq         $at, $zero, L_8024C90C
    if (ctx->r1 == 0) {
        // 0x8024C8D8: nop
    
            goto L_8024C90C;
    }
    // 0x8024C8D8: nop

    // 0x8024C8DC: lhu         $t6, 0x14($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X14);
    // 0x8024C8E0: nop

    // 0x8024C8E4: andi        $t7, $t6, 0x400
    ctx->r15 = ctx->r14 & 0X400;
    // 0x8024C8E8: bne         $t7, $zero, L_8024C90C
    if (ctx->r15 != 0) {
        // 0x8024C8EC: nop
    
            goto L_8024C90C;
    }
    // 0x8024C8EC: nop

    // 0x8024C8F0: lbu         $t8, 0x4($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X4);
    // 0x8024C8F4: lui         $v1, 0x8028
    ctx->r3 = S32(0X8028 << 16);
    // 0x8024C8F8: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x8024C8FC: addu        $v1, $v1, $t9
    ctx->r3 = ADD32(ctx->r3, ctx->r25);
    // 0x8024C900: lhu         $v1, -0x2600($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X2600);
    // 0x8024C904: b           L_8024C920
    // 0x8024C908: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8024C920;
    // 0x8024C908: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8024C90C:
    // 0x8024C90C: lbu         $a1, 0x4($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X4);
    // 0x8024C910: jal         0x80273FD0
    // 0x8024C914: nop

    ovl_8024B800_func_80273FD0(rdram, ctx);
        goto after_6;
    // 0x8024C914: nop

    after_6:
    // 0x8024C918: andi        $v1, $v0, 0xFFFF
    ctx->r3 = ctx->r2 & 0XFFFF;
L_8024C91C:
    // 0x8024C91C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8024C920:
    // 0x8024C920: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8024C924: jr          $ra
    // 0x8024C928: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8024C928: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_8024B800_func_8024C92C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8024C92C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8024C930: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8024C934: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8024C938: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8024C93C: lhu         $t6, 0x18($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X18);
    // 0x8024C940: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8024C944: andi        $t7, $t6, 0xFCFF
    ctx->r15 = ctx->r14 & 0XFCFF;
    // 0x8024C948: sh          $t7, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r15;
    // 0x8024C94C: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x8024C950: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8024C954: lhu         $t8, 0xC0($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0XC0);
    // 0x8024C958: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x8024C95C: andi        $t9, $t8, 0x1000
    ctx->r25 = ctx->r24 & 0X1000;
    // 0x8024C960: beq         $t9, $zero, L_8024C9A8
    if (ctx->r25 == 0) {
        // 0x8024C964: nop
    
            goto L_8024C9A8;
    }
    // 0x8024C964: nop

    // 0x8024C968: lw          $t0, 0xA4($v0)
    ctx->r8 = MEM_W(ctx->r2, 0XA4);
    // 0x8024C96C: nop

    // 0x8024C970: lhu         $t1, 0x6($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X6);
    // 0x8024C974: nop

    // 0x8024C978: andi        $t2, $t1, 0x5
    ctx->r10 = ctx->r9 & 0X5;
    // 0x8024C97C: bne         $t2, $zero, L_8024C9FC
    if (ctx->r10 != 0) {
        // 0x8024C980: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8024C9FC;
    }
    // 0x8024C980: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8024C984: jal         0x8024F1C4
    // 0x8024C988: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_8024B800_func_8024F1C4(rdram, ctx);
        goto after_0;
    // 0x8024C988: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x8024C98C: lhu         $t3, 0x12($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X12);
    // 0x8024C990: lh          $t5, 0xE6($s0)
    ctx->r13 = MEM_H(ctx->r16, 0XE6);
    // 0x8024C994: ori         $t4, $t3, 0x2
    ctx->r12 = ctx->r11 | 0X2;
    // 0x8024C998: ori         $t6, $t5, 0x200
    ctx->r14 = ctx->r13 | 0X200;
    // 0x8024C99C: sh          $t4, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r12;
    // 0x8024C9A0: b           L_8024C9F8
    // 0x8024C9A4: sh          $t6, 0xE6($s0)
    MEM_H(0XE6, ctx->r16) = ctx->r14;
        goto L_8024C9F8;
    // 0x8024C9A4: sh          $t6, 0xE6($s0)
    MEM_H(0XE6, ctx->r16) = ctx->r14;
L_8024C9A8:
    // 0x8024C9A8: jal         0x8024BC08
    // 0x8024C9AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8024BC08(rdram, ctx);
        goto after_1;
    // 0x8024C9AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8024C9B0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8024C9B4: lwc1        $f6, 0x50($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X50);
    // 0x8024C9B8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8024C9BC: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x8024C9C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8024C9C4: bc1t        L_8024C9E0
    if (c1cs) {
        // 0x8024C9C8: addiu       $a1, $zero, 0x47
        ctx->r5 = ADD32(0, 0X47);
            goto L_8024C9E0;
    }
    // 0x8024C9C8: addiu       $a1, $zero, 0x47
    ctx->r5 = ADD32(0, 0X47);
    // 0x8024C9CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8024C9D0: jal         0x80272D3C
    // 0x8024C9D4: addiu       $a1, $zero, 0x4A
    ctx->r5 = ADD32(0, 0X4A);
    ovl_8024B800_func_80272D3C(rdram, ctx);
        goto after_2;
    // 0x8024C9D4: addiu       $a1, $zero, 0x4A
    ctx->r5 = ADD32(0, 0X4A);
    after_2:
    // 0x8024C9D8: b           L_8024C9EC
    // 0x8024C9DC: lhu         $t7, 0x14($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X14);
        goto L_8024C9EC;
    // 0x8024C9DC: lhu         $t7, 0x14($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X14);
L_8024C9E0:
    // 0x8024C9E0: jal         0x80272D3C
    // 0x8024C9E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_8024B800_func_80272D3C(rdram, ctx);
        goto after_3;
    // 0x8024C9E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x8024C9E8: lhu         $t7, 0x14($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X14);
L_8024C9EC:
    // 0x8024C9EC: nop

    // 0x8024C9F0: ori         $t8, $t7, 0x4
    ctx->r24 = ctx->r15 | 0X4;
    // 0x8024C9F4: sh          $t8, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r24;
L_8024C9F8:
    // 0x8024C9F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8024C9FC:
    // 0x8024C9FC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8024CA00: jr          $ra
    // 0x8024CA04: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8024CA04: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_8024B800_func_8024CA08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8024CA08: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x8024CA0C: lh          $t6, -0x1B60($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X1B60);
    // 0x8024CA10: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8024CA14: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8024CA18: andi        $t7, $t6, 0x3
    ctx->r15 = ctx->r14 & 0X3;
    // 0x8024CA1C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8024CA20: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8024CA24: bne         $t7, $zero, L_8024CA54
    if (ctx->r15 != 0) {
        // 0x8024CA28: sw          $a1, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r5;
            goto L_8024CA54;
    }
    // 0x8024CA28: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8024CA2C: lw          $t8, 0xC8($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XC8);
    // 0x8024CA30: nop

    // 0x8024CA34: lh          $v0, 0x8B0($t8)
    ctx->r2 = MEM_H(ctx->r24, 0X8B0);
    // 0x8024CA38: nop

    // 0x8024CA3C: blez        $v0, L_8024CA54
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8024CA40: slti        $at, $v0, 0x126
        ctx->r1 = SIGNED(ctx->r2) < 0X126 ? 1 : 0;
            goto L_8024CA54;
    }
    // 0x8024CA40: slti        $at, $v0, 0x126
    ctx->r1 = SIGNED(ctx->r2) < 0X126 ? 1 : 0;
    // 0x8024CA44: beq         $at, $zero, L_8024CA54
    if (ctx->r1 == 0) {
        // 0x8024CA48: nop
    
            goto L_8024CA54;
    }
    // 0x8024CA48: nop

    // 0x8024CA4C: jal         0x80077304
    // 0x8024CA50: nop

    func_80077304(rdram, ctx);
        goto after_0;
    // 0x8024CA50: nop

    after_0:
L_8024CA54:
    // 0x8024CA54: jal         0x802732F4
    // 0x8024CA58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_802732F4(rdram, ctx);
        goto after_1;
    // 0x8024CA58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8024CA5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8024CA60: jal         0x8024BC08
    // 0x8024CA64: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    ovl_8024B800_func_8024BC08(rdram, ctx);
        goto after_2;
    // 0x8024CA64: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_2:
    // 0x8024CA68: lhu         $v0, 0x12($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X12);
    // 0x8024CA6C: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x8024CA70: andi        $t9, $v0, 0x8
    ctx->r25 = ctx->r2 & 0X8;
    // 0x8024CA74: bne         $t9, $zero, L_8024CA84
    if (ctx->r25 != 0) {
        // 0x8024CA78: andi        $t0, $v0, 0x1
        ctx->r8 = ctx->r2 & 0X1;
            goto L_8024CA84;
    }
    // 0x8024CA78: andi        $t0, $v0, 0x1
    ctx->r8 = ctx->r2 & 0X1;
    // 0x8024CA7C: bne         $t0, $zero, L_8024CABC
    if (ctx->r8 != 0) {
        // 0x8024CA80: nop
    
            goto L_8024CABC;
    }
    // 0x8024CA80: nop

L_8024CA84:
    // 0x8024CA84: lhu         $t2, 0x0($t1)
    ctx->r10 = MEM_HU(ctx->r9, 0X0);
    // 0x8024CA88: lui         $a3, 0xBF86
    ctx->r7 = S32(0XBF86 << 16);
    // 0x8024CA8C: sh          $t2, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r10;
    // 0x8024CA90: lw          $a2, 0x8C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8C);
    // 0x8024CA94: ori         $a3, $a3, 0xA92
    ctx->r7 = ctx->r7 | 0XA92;
    // 0x8024CA98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8024CA9C: jal         0x80055DB4
    // 0x8024CAA0: lui         $a1, 0x3FC0
    ctx->r5 = S32(0X3FC0 << 16);
    func_80055DB4(rdram, ctx);
        goto after_3;
    // 0x8024CAA0: lui         $a1, 0x3FC0
    ctx->r5 = S32(0X3FC0 << 16);
    after_3:
    // 0x8024CAA4: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8024CAA8: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x8024CAAC: lw          $t3, 0x3B20($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X3B20);
    // 0x8024CAB0: lwc1        $f4, -0x4264($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X4264);
    // 0x8024CAB4: b           L_8024CB94
    // 0x8024CAB8: swc1        $f4, 0x30($t3)
    MEM_W(0X30, ctx->r11) = ctx->f4.u32l;
        goto L_8024CB94;
    // 0x8024CAB8: swc1        $f4, 0x30($t3)
    MEM_W(0X30, ctx->r11) = ctx->f4.u32l;
L_8024CABC:
    // 0x8024CABC: lwc1        $f12, 0x8C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x8024CAC0: lwc1        $f14, 0xB0($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0XB0);
    // 0x8024CAC4: jal         0x802721C0
    // 0x8024CAC8: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    ovl_8024B800_func_802721C0(rdram, ctx);
        goto after_4;
    // 0x8024CAC8: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    after_4:
    // 0x8024CACC: beq         $v0, $zero, L_8024CB24
    if (ctx->r2 == 0) {
        // 0x8024CAD0: addiu       $t7, $zero, 0x2
        ctx->r15 = ADD32(0, 0X2);
            goto L_8024CB24;
    }
    // 0x8024CAD0: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x8024CAD4: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8024CAD8: sh          $t4, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r12;
    // 0x8024CADC: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x8024CAE0: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8024CAE4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8024CAE8: lhu         $t6, 0x4($t5)
    ctx->r14 = MEM_HU(ctx->r13, 0X4);
    // 0x8024CAEC: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x8024CAF0: sh          $t6, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r14;
    // 0x8024CAF4: bc1f        L_8024CB04
    if (!c1cs) {
        // 0x8024CAF8: nop
    
            goto L_8024CB04;
    }
    // 0x8024CAF8: nop

    // 0x8024CAFC: jal         0x802732D0
    // 0x8024CB00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_802732D0(rdram, ctx);
        goto after_5;
    // 0x8024CB00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
L_8024CB04:
    // 0x8024CB04: lw          $a2, 0xB0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XB0);
    // 0x8024CB08: lui         $a3, 0xBF49
    ctx->r7 = S32(0XBF49 << 16);
    // 0x8024CB0C: ori         $a3, $a3, 0xFDB
    ctx->r7 = ctx->r7 | 0XFDB;
    // 0x8024CB10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8024CB14: jal         0x80055DB4
    // 0x8024CB18: lui         $a1, 0x4060
    ctx->r5 = S32(0X4060 << 16);
    func_80055DB4(rdram, ctx);
        goto after_6;
    // 0x8024CB18: lui         $a1, 0x4060
    ctx->r5 = S32(0X4060 << 16);
    after_6:
    // 0x8024CB1C: b           L_8024CB7C
    // 0x8024CB20: nop

        goto L_8024CB7C;
    // 0x8024CB20: nop

L_8024CB24:
    // 0x8024CB24: sh          $t7, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r15;
    // 0x8024CB28: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x8024CB2C: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x8024CB30: lhu         $t9, 0x2($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X2);
    // 0x8024CB34: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x8024CB38: sh          $t9, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r25;
    // 0x8024CB3C: lwc1        $f10, 0x50($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X50);
    // 0x8024CB40: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8024CB44: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8024CB48: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x8024CB4C: lwc1        $f7, -0x4260($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X4260);
    // 0x8024CB50: lwc1        $f6, -0x425C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X425C);
    // 0x8024CB54: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x8024CB58: lw          $a2, 0xB0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XB0);
    // 0x8024CB5C: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x8024CB60: lui         $a3, 0xBF49
    ctx->r7 = S32(0XBF49 << 16);
    // 0x8024CB64: ori         $a3, $a3, 0xFDB
    ctx->r7 = ctx->r7 | 0XFDB;
    // 0x8024CB68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8024CB6C: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x8024CB70: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x8024CB74: jal         0x80055DB4
    // 0x8024CB78: nop

    func_80055DB4(rdram, ctx);
        goto after_7;
    // 0x8024CB78: nop

    after_7:
L_8024CB7C:
    // 0x8024CB7C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8024CB80: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x8024CB84: lw          $t0, 0x3B20($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X3B20);
    // 0x8024CB88: lwc1        $f16, -0x4258($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X4258);
    // 0x8024CB8C: nop

    // 0x8024CB90: swc1        $f16, 0x30($t0)
    MEM_W(0X30, ctx->r8) = ctx->f16.u32l;
L_8024CB94:
    // 0x8024CB94: lhu         $a1, 0x2E($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X2E);
    // 0x8024CB98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8024CB9C: jal         0x80272D3C
    // 0x8024CBA0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_8024B800_func_80272D3C(rdram, ctx);
        goto after_8;
    // 0x8024CBA0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_8:
    // 0x8024CBA4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8024CBA8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8024CBAC: jr          $ra
    // 0x8024CBB0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8024CBB0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_8024B800_func_8024CBB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8024CBB4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8024CBB8: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8024CBBC: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x8024CBC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8024CBC4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8024CBC8: lw          $a2, 0x0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X0);
    // 0x8024CBCC: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x8024CBD0: jal         0x80272B98
    // 0x8024CBD4: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    ovl_8024B800_func_80272B98(rdram, ctx);
        goto after_0;
    // 0x8024CBD4: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    after_0:
    // 0x8024CBD8: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8024CBDC: lwc1        $f14, 0x20($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8024CBE0: lwc1        $f12, 0x8C($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X8C);
    // 0x8024CBE4: jal         0x80279308
    // 0x8024CBE8: nop

    ovl_8024B800_func_80279308(rdram, ctx);
        goto after_1;
    // 0x8024CBE8: nop

    after_1:
    // 0x8024CBEC: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8024CBF0: lwc1        $f5, -0x4250($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X4250);
    // 0x8024CBF4: lwc1        $f4, -0x424C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X424C);
    // 0x8024CBF8: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x8024CBFC: c.lt.d      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.d < ctx->f6.d;
    // 0x8024CC00: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8024CC04: bc1t        L_8024CC28
    if (c1cs) {
        // 0x8024CC08: lui         $at, 0x3FF0
        ctx->r1 = S32(0X3FF0 << 16);
            goto L_8024CC28;
    }
    // 0x8024CC08: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x8024CC0C: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8024CC10: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x8024CC14: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8024CC18: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x8024CC1C: c.lt.d      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.d < ctx->f16.d;
    // 0x8024CC20: nop

    // 0x8024CC24: bc1f        L_8024CC48
    if (!c1cs) {
        // 0x8024CC28: lui         $t7, 0x8009
        ctx->r15 = S32(0X8009 << 16);
            goto L_8024CC48;
    }
L_8024CC28:
    // 0x8024CC28: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x8024CC2C: lw          $t7, 0x3B20($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3B20);
    // 0x8024CC30: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8024CC34: nop

    // 0x8024CC38: swc1        $f18, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->f18.u32l;
    // 0x8024CC3C: lw          $a1, 0x8C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X8C);
    // 0x8024CC40: jal         0x80279050
    // 0x8024CC44: nop

    ovl_8024B800_func_80279050(rdram, ctx);
        goto after_2;
    // 0x8024CC44: nop

    after_2:
L_8024CC48:
    // 0x8024CC48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8024CC4C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8024CC50: jr          $ra
    // 0x8024CC54: nop

    return;
    // 0x8024CC54: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8024CC58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8024CC58: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8024CC5C: addiu       $v0, $v0, 0x361E
    ctx->r2 = ADD32(ctx->r2, 0X361E);
    // 0x8024CC60: lhu         $t6, 0x0($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X0);
    // 0x8024CC64: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8024CC68: andi        $t8, $t6, 0xFBFF
    ctx->r24 = ctx->r14 & 0XFBFF;
    // 0x8024CC6C: sh          $t8, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r24;
    // 0x8024CC70: ori         $t9, $t8, 0x200
    ctx->r25 = ctx->r24 | 0X200;
    // 0x8024CC74: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8024CC78: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8024CC7C: sh          $t9, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r25;
    // 0x8024CC80: lhu         $t0, 0x18($a0)
    ctx->r8 = MEM_HU(ctx->r4, 0X18);
    // 0x8024CC84: lui         $a2, 0x8009
    ctx->r6 = S32(0X8009 << 16);
    // 0x8024CC88: andi        $t1, $t0, 0xFCFF
    ctx->r9 = ctx->r8 & 0XFCFF;
    // 0x8024CC8C: addiu       $a2, $a2, 0x3B20
    ctx->r6 = ADD32(ctx->r6, 0X3B20);
    // 0x8024CC90: sh          $t1, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r9;
    // 0x8024CC94: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x8024CC98: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8024CC9C: lw          $t2, 0xA8($v1)
    ctx->r10 = MEM_W(ctx->r3, 0XA8);
    // 0x8024CCA0: nop

    // 0x8024CCA4: beq         $a0, $t2, L_8024CCC4
    if (ctx->r4 == ctx->r10) {
        // 0x8024CCA8: nop
    
            goto L_8024CCC4;
    }
    // 0x8024CCA8: nop

    // 0x8024CCAC: jal         0x802A613C
    // 0x8024CCB0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A613C)(rdram, ctx);
        goto after_0;
    // 0x8024CCB0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x8024CCB4: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x8024CCB8: lw          $v1, 0x3B20($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3B20);
    // 0x8024CCBC: b           L_8024CD0C
    // 0x8024CCC0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
        goto L_8024CD0C;
    // 0x8024CCC0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
L_8024CCC4:
    // 0x8024CCC4: lhu         $t3, 0x12($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X12);
    // 0x8024CCC8: nop

    // 0x8024CCCC: andi        $t4, $t3, 0x1
    ctx->r12 = ctx->r11 & 0X1;
    // 0x8024CCD0: beq         $t4, $zero, L_8024CD0C
    if (ctx->r12 == 0) {
        // 0x8024CCD4: lui         $at, 0x4120
        ctx->r1 = S32(0X4120 << 16);
            goto L_8024CD0C;
    }
    // 0x8024CCD4: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8024CCD8: sw          $zero, 0xA8($v1)
    MEM_W(0XA8, ctx->r3) = 0;
    // 0x8024CCDC: lw          $t5, 0x0($a2)
    ctx->r13 = MEM_W(ctx->r6, 0X0);
    // 0x8024CCE0: nop

    // 0x8024CCE4: sw          $zero, 0xA4($t5)
    MEM_W(0XA4, ctx->r13) = 0;
    // 0x8024CCE8: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x8024CCEC: nop

    // 0x8024CCF0: lhu         $t6, 0xC0($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0XC0);
    // 0x8024CCF4: nop

    // 0x8024CCF8: andi        $t7, $t6, 0x2FFF
    ctx->r15 = ctx->r14 & 0X2FFF;
    // 0x8024CCFC: sh          $t7, 0xC0($v1)
    MEM_H(0XC0, ctx->r3) = ctx->r15;
    // 0x8024CD00: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x8024CD04: nop

    // 0x8024CD08: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
L_8024CD0C:
    // 0x8024CD0C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8024CD10: lwc1        $f4, 0x4($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X4);
    // 0x8024CD14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8024CD18: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x8024CD1C: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8024CD20: bc1f        L_8024CF88
    if (!c1cs) {
        // 0x8024CD24: nop
    
            goto L_8024CF88;
    }
    // 0x8024CD24: nop

    // 0x8024CD28: jal         0x80064738
    // 0x8024CD2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80064738(rdram, ctx);
        goto after_1;
    // 0x8024CD2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8024CD30: jal         0x80055528
    // 0x8024CD34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80055528(rdram, ctx);
        goto after_2;
    // 0x8024CD34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8024CD38: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x8024CD3C: lw          $v1, 0x3B20($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3B20);
    // 0x8024CD40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8024CD44: lw          $a1, 0x8($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X8);
    // 0x8024CD48: lw          $a2, 0x0($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X0);
    // 0x8024CD4C: jal         0x80272B98
    // 0x8024CD50: addiu       $a3, $sp, 0x28
    ctx->r7 = ADD32(ctx->r29, 0X28);
    ovl_8024B800_func_80272B98(rdram, ctx);
        goto after_3;
    // 0x8024CD50: addiu       $a3, $sp, 0x28
    ctx->r7 = ADD32(ctx->r29, 0X28);
    after_3:
    // 0x8024CD54: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8024CD58: lui         $at, 0x4014
    ctx->r1 = S32(0X4014 << 16);
    // 0x8024CD5C: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x8024CD60: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8024CD64: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x8024CD68: c.lt.d      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.d < ctx->f16.d;
    // 0x8024CD6C: nop

    // 0x8024CD70: bc1f        L_8024CD80
    if (!c1cs) {
        // 0x8024CD74: nop
    
            goto L_8024CD80;
    }
    // 0x8024CD74: nop

    // 0x8024CD78: jal         0x80250A5C
    // 0x8024CD7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80250A5C(rdram, ctx);
        goto after_4;
    // 0x8024CD7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
L_8024CD80:
    // 0x8024CD80: lw          $a1, 0x8C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8C);
    // 0x8024CD84: jal         0x80279050
    // 0x8024CD88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80279050(rdram, ctx);
        goto after_5;
    // 0x8024CD88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x8024CD8C: jal         0x803F2464
    // 0x8024CD90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(0x803F2464)(rdram, ctx);
        goto after_6;
    // 0x8024CD90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x8024CD94: lhu         $t8, 0x12($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X12);
    // 0x8024CD98: nop

    // 0x8024CD9C: andi        $t9, $t8, 0x40
    ctx->r25 = ctx->r24 & 0X40;
    // 0x8024CDA0: bne         $t9, $zero, L_8024CDEC
    if (ctx->r25 != 0) {
        // 0x8024CDA4: nop
    
            goto L_8024CDEC;
    }
    // 0x8024CDA4: nop

    // 0x8024CDA8: jal         0x803F5814
    // 0x8024CDAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(0x803F5814)(rdram, ctx);
        goto after_7;
    // 0x8024CDAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x8024CDB0: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8024CDB4: lwc1        $f4, 0xAC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XAC);
    // 0x8024CDB8: lwc1        $f19, -0x4248($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, -0X4248);
    // 0x8024CDBC: lwc1        $f18, -0x4244($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X4244);
    // 0x8024CDC0: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8024CDC4: c.lt.d      $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f18.d < ctx->f6.d;
    // 0x8024CDC8: nop

    // 0x8024CDCC: bc1f        L_8024CDEC
    if (!c1cs) {
        // 0x8024CDD0: nop
    
            goto L_8024CDEC;
    }
    // 0x8024CDD0: nop

    // 0x8024CDD4: lw          $v0, 0xC4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC4);
    // 0x8024CDD8: nop

    // 0x8024CDDC: lhu         $t0, 0x2($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X2);
    // 0x8024CDE0: nop

    // 0x8024CDE4: ori         $t1, $t0, 0x1
    ctx->r9 = ctx->r8 | 0X1;
    // 0x8024CDE8: sh          $t1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r9;
L_8024CDEC:
    // 0x8024CDEC: lwc1        $f12, 0x8C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x8024CDF0: lwc1        $f14, 0xB0($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0XB0);
    // 0x8024CDF4: jal         0x80279308
    // 0x8024CDF8: nop

    ovl_8024B800_func_80279308(rdram, ctx);
        goto after_8;
    // 0x8024CDF8: nop

    after_8:
    // 0x8024CDFC: lhu         $v0, 0x12($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X12);
    // 0x8024CE00: nop

    // 0x8024CE04: andi        $t2, $v0, 0x1
    ctx->r10 = ctx->r2 & 0X1;
    // 0x8024CE08: beq         $t2, $zero, L_8024CF38
    if (ctx->r10 == 0) {
        // 0x8024CE0C: nop
    
            goto L_8024CF38;
    }
    // 0x8024CE0C: nop

    // 0x8024CE10: lw          $t3, 0xC4($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XC4);
    // 0x8024CE14: andi        $t6, $v0, 0x80
    ctx->r14 = ctx->r2 & 0X80;
    // 0x8024CE18: lhu         $t4, 0x2($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0X2);
    // 0x8024CE1C: nop

    // 0x8024CE20: andi        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 & 0X1;
    // 0x8024CE24: bne         $t5, $zero, L_8024CF38
    if (ctx->r13 != 0) {
        // 0x8024CE28: nop
    
            goto L_8024CF38;
    }
    // 0x8024CE28: nop

    // 0x8024CE2C: beq         $t6, $zero, L_8024CEF0
    if (ctx->r14 == 0) {
        // 0x8024CE30: lui         $at, 0x8028
        ctx->r1 = S32(0X8028 << 16);
            goto L_8024CEF0;
    }
    // 0x8024CE30: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8024CE34: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8024CE38: lwc1        $f9, -0x4240($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X4240);
    // 0x8024CE3C: lwc1        $f8, -0x423C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X423C);
    // 0x8024CE40: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x8024CE44: c.lt.d      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.d < ctx->f10.d;
    // 0x8024CE48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8024CE4C: bc1f        L_8024CE64
    if (!c1cs) {
        // 0x8024CE50: lui         $at, 0x8028
        ctx->r1 = S32(0X8028 << 16);
            goto L_8024CE64;
    }
    // 0x8024CE50: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8024CE54: jal         0x8024BC08
    // 0x8024CE58: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    ovl_8024B800_func_8024BC08(rdram, ctx);
        goto after_9;
    // 0x8024CE58: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    after_9:
    // 0x8024CE5C: b           L_8024CFCC
    // 0x8024CE60: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8024CFCC;
    // 0x8024CE60: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8024CE64:
    // 0x8024CE64: lwc1        $f0, 0x50($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X50);
    // 0x8024CE68: lwc1        $f5, -0x4238($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X4238);
    // 0x8024CE6C: lwc1        $f4, -0x4234($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X4234);
    // 0x8024CE70: cvt.d.s     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.d = CVT_D_S(ctx->f0.fl);
    // 0x8024CE74: c.lt.d      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.d < ctx->f4.d;
    // 0x8024CE78: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8024CE7C: bc1f        L_8024CE98
    if (!c1cs) {
        // 0x8024CE80: nop
    
            goto L_8024CE98;
    }
    // 0x8024CE80: nop

    // 0x8024CE84: lwc1        $f18, -0x4230($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X4230);
    // 0x8024CE88: nop

    // 0x8024CE8C: swc1        $f18, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f18.u32l;
    // 0x8024CE90: lwc1        $f0, 0x50($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X50);
    // 0x8024CE94: nop

L_8024CE98:
    // 0x8024CE98: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8024CE9C: lw          $a2, 0xB0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XB0);
    // 0x8024CEA0: jal         0x80259C14
    // 0x8024CEA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80259C14(rdram, ctx);
        goto after_10;
    // 0x8024CEA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x8024CEA8: jal         0x80273378
    // 0x8024CEAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80273378(rdram, ctx);
        goto after_11;
    // 0x8024CEAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x8024CEB0: jal         0x8024CBB4
    // 0x8024CEB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8024CBB4(rdram, ctx);
        goto after_12;
    // 0x8024CEB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x8024CEB8: lwc1        $f6, 0x50($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X50);
    // 0x8024CEBC: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x8024CEC0: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x8024CEC4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8024CEC8: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x8024CECC: add.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d + ctx->f10.d;
    // 0x8024CED0: lw          $a1, 0xB0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XB0);
    // 0x8024CED4: cvt.s.d     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f4.fl = CVT_S_D(ctx->f16.d);
    // 0x8024CED8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8024CEDC: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x8024CEE0: jal         0x80055AFC
    // 0x8024CEE4: nop

    func_80055AFC(rdram, ctx);
        goto after_13;
    // 0x8024CEE4: nop

    after_13:
    // 0x8024CEE8: b           L_8024CFCC
    // 0x8024CEEC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8024CFCC;
    // 0x8024CEEC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8024CEF0:
    // 0x8024CEF0: lwc1        $f19, -0x4228($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, -0X4228);
    // 0x8024CEF4: lwc1        $f18, -0x4224($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X4224);
    // 0x8024CEF8: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x8024CEFC: c.lt.d      $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f18.d < ctx->f6.d;
    // 0x8024CF00: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8024CF04: bc1f        L_8024CF20
    if (!c1cs) {
        // 0x8024CF08: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8024CF20;
    }
    // 0x8024CF08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8024CF0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8024CF10: jal         0x8024BC08
    // 0x8024CF14: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    ovl_8024B800_func_8024BC08(rdram, ctx);
        goto after_14;
    // 0x8024CF14: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    after_14:
    // 0x8024CF18: b           L_8024CFCC
    // 0x8024CF1C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8024CFCC;
    // 0x8024CF1C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8024CF20:
    // 0x8024CF20: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8024CF24: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x8024CF28: jal         0x8024BC08
    // 0x8024CF2C: swc1        $f8, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f8.u32l;
    ovl_8024B800_func_8024BC08(rdram, ctx);
        goto after_15;
    // 0x8024CF2C: swc1        $f8, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f8.u32l;
    after_15:
    // 0x8024CF30: b           L_8024CFCC
    // 0x8024CF34: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8024CFCC;
    // 0x8024CF34: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8024CF38:
    // 0x8024CF38: lhu         $t7, 0x14($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X14);
    // 0x8024CF3C: nop

    // 0x8024CF40: andi        $t8, $t7, 0x4
    ctx->r24 = ctx->r15 & 0X4;
    // 0x8024CF44: beq         $t8, $zero, L_8024CF60
    if (ctx->r24 == 0) {
        // 0x8024CF48: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8024CF60;
    }
    // 0x8024CF48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8024CF4C: jal         0x80272C74
    // 0x8024CF50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80272C74(rdram, ctx);
        goto after_16;
    // 0x8024CF50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x8024CF54: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8024CF58: beq         $v0, $at, L_8024CF74
    if (ctx->r2 == ctx->r1) {
        // 0x8024CF5C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8024CF74;
    }
    // 0x8024CF5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8024CF60:
    // 0x8024CF60: addiu       $a1, $zero, 0x4C
    ctx->r5 = ADD32(0, 0X4C);
    // 0x8024CF64: jal         0x80272D3C
    // 0x8024CF68: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_8024B800_func_80272D3C(rdram, ctx);
        goto after_17;
    // 0x8024CF68: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_17:
    // 0x8024CF6C: jal         0x802720A4
    // 0x8024CF70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_802720A4(rdram, ctx);
        goto after_18;
    // 0x8024CF70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
L_8024CF74:
    // 0x8024CF74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8024CF78: jal         0x8024BC08
    // 0x8024CF7C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    ovl_8024B800_func_8024BC08(rdram, ctx);
        goto after_19;
    // 0x8024CF7C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_19:
    // 0x8024CF80: b           L_8024CF90
    // 0x8024CF84: nop

        goto L_8024CF90;
    // 0x8024CF84: nop

L_8024CF88:
    // 0x8024CF88: jal         0x8024CA08
    // 0x8024CF8C: addiu       $a1, $a1, -0x5358
    ctx->r5 = ADD32(ctx->r5, -0X5358);
    ovl_8024B800_func_8024CA08(rdram, ctx);
        goto after_20;
    // 0x8024CF8C: addiu       $a1, $a1, -0x5358
    ctx->r5 = ADD32(ctx->r5, -0X5358);
    after_20:
L_8024CF90:
    // 0x8024CF90: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x8024CF94: lw          $t9, 0x3B20($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X3B20);
    // 0x8024CF98: nop

    // 0x8024CF9C: lw          $t0, 0xA8($t9)
    ctx->r8 = MEM_W(ctx->r25, 0XA8);
    // 0x8024CFA0: nop

    // 0x8024CFA4: beq         $s0, $t0, L_8024CFCC
    if (ctx->r16 == ctx->r8) {
        // 0x8024CFA8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8024CFCC;
    }
    // 0x8024CFA8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8024CFAC: lhu         $t1, 0x12($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X12);
    // 0x8024CFB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8024CFB4: andi        $t2, $t1, 0x1
    ctx->r10 = ctx->r9 & 0X1;
    // 0x8024CFB8: bne         $t2, $zero, L_8024CFCC
    if (ctx->r10 != 0) {
        // 0x8024CFBC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8024CFCC;
    }
    // 0x8024CFBC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8024CFC0: jal         0x802A613C
    // 0x8024CFC4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    LOOKUP_FUNC(0x802A613C)(rdram, ctx);
        goto after_21;
    // 0x8024CFC4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_21:
    // 0x8024CFC8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8024CFCC:
    // 0x8024CFCC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8024CFD0: jr          $ra
    // 0x8024CFD4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8024CFD4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_8024B800_func_8024CFD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8024CFD8: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x8024CFDC: lw          $t6, 0x3680($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3680);
    // 0x8024CFE0: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8024CFE4: beq         $a0, $t6, L_8024D004
    if (ctx->r4 == ctx->r14) {
        // 0x8024CFE8: nop
    
            goto L_8024D004;
    }
    // 0x8024CFE8: nop

    // 0x8024CFEC: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x8024CFF0: nop

    // 0x8024CFF4: lw          $t7, 0xA0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0XA0);
    // 0x8024CFF8: nop

    // 0x8024CFFC: bne         $a0, $t7, L_8024D00C
    if (ctx->r4 != ctx->r15) {
        // 0x8024D000: nop
    
            goto L_8024D00C;
    }
    // 0x8024D000: nop

L_8024D004:
    // 0x8024D004: jr          $ra
    // 0x8024D008: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8024D008: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8024D00C:
    // 0x8024D00C: lw          $t9, 0x8C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X8C);
    // 0x8024D010: lw          $t8, 0xC8($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XC8);
    // 0x8024D014: lw          $t0, 0xC8($t9)
    ctx->r8 = MEM_W(ctx->r25, 0XC8);
    // 0x8024D018: nop

    // 0x8024D01C: bne         $t8, $t0, L_8024D040
    if (ctx->r24 != ctx->r8) {
        // 0x8024D020: nop
    
            goto L_8024D040;
    }
    // 0x8024D020: nop

    // 0x8024D024: lbu         $t1, 0xBD($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0XBD);
    // 0x8024D028: nop

    // 0x8024D02C: andi        $t2, $t1, 0x1
    ctx->r10 = ctx->r9 & 0X1;
    // 0x8024D030: beq         $t2, $zero, L_8024D040
    if (ctx->r10 == 0) {
        // 0x8024D034: nop
    
            goto L_8024D040;
    }
    // 0x8024D034: nop

    // 0x8024D038: jr          $ra
    // 0x8024D03C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8024D03C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8024D040:
    // 0x8024D040: lbu         $v1, 0xBD($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0XBD);
    // 0x8024D044: nop

    // 0x8024D048: andi        $t3, $v1, 0x2
    ctx->r11 = ctx->r3 & 0X2;
    // 0x8024D04C: beq         $t3, $zero, L_8024D070
    if (ctx->r11 == 0) {
        // 0x8024D050: andi        $t5, $v1, 0x4
        ctx->r13 = ctx->r3 & 0X4;
            goto L_8024D070;
    }
    // 0x8024D050: andi        $t5, $v1, 0x4
    ctx->r13 = ctx->r3 & 0X4;
    // 0x8024D054: lhu         $t4, 0x6A($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X6A);
    // 0x8024D058: nop

    // 0x8024D05C: slti        $at, $t4, 0xB
    ctx->r1 = SIGNED(ctx->r12) < 0XB ? 1 : 0;
    // 0x8024D060: bne         $at, $zero, L_8024D070
    if (ctx->r1 != 0) {
        // 0x8024D064: nop
    
            goto L_8024D070;
    }
    // 0x8024D064: nop

    // 0x8024D068: jr          $ra
    // 0x8024D06C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8024D06C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8024D070:
    // 0x8024D070: beq         $t5, $zero, L_8024D0F8
    if (ctx->r13 == 0) {
        // 0x8024D074: lui         $at, 0x4020
        ctx->r1 = S32(0X4020 << 16);
            goto L_8024D0F8;
    }
    // 0x8024D074: lui         $at, 0x4020
    ctx->r1 = S32(0X4020 << 16);
    // 0x8024D078: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8024D07C: lui         $at, 0x401C
    ctx->r1 = S32(0X401C << 16);
    // 0x8024D080: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x8024D084: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8024D088: cvt.d.s     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f0.d = CVT_D_S(ctx->f4.fl);
    // 0x8024D08C: c.lt.d      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.d < ctx->f0.d;
    // 0x8024D090: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8024D094: bc1t        L_8024D0F0
    if (c1cs) {
        // 0x8024D098: nop
    
            goto L_8024D0F0;
    }
    // 0x8024D098: nop

    // 0x8024D09C: lhu         $t6, 0x6A($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X6A);
    // 0x8024D0A0: lwc1        $f9, -0x4220($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X4220);
    // 0x8024D0A4: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x8024D0A8: lwc1        $f8, -0x421C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X421C);
    // 0x8024D0AC: bgez        $t6, L_8024D0C8
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8024D0B0: cvt.d.w     $f16, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.d = CVT_D_W(ctx->f10.u32l);
            goto L_8024D0C8;
    }
    // 0x8024D0B0: cvt.d.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.d = CVT_D_W(ctx->f10.u32l);
    // 0x8024D0B4: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8024D0B8: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x8024D0BC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8024D0C0: nop

    // 0x8024D0C4: add.d       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f16.d = ctx->f16.d + ctx->f18.d;
L_8024D0C8:
    // 0x8024D0C8: mul.d       $f4, $f8, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f16.d); 
    ctx->f4.d = MUL_D(ctx->f8.d, ctx->f16.d);
    // 0x8024D0CC: lui         $at, 0x4010
    ctx->r1 = S32(0X4010 << 16);
    // 0x8024D0D0: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x8024D0D4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8024D0D8: nop

    // 0x8024D0DC: add.d       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f4.d); 
    ctx->f10.d = ctx->f6.d + ctx->f4.d;
    // 0x8024D0E0: c.lt.d      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.d < ctx->f0.d;
    // 0x8024D0E4: nop

    // 0x8024D0E8: bc1f        L_8024D178
    if (!c1cs) {
        // 0x8024D0EC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8024D178;
    }
    // 0x8024D0EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8024D0F0:
    // 0x8024D0F0: jr          $ra
    // 0x8024D0F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8024D0F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8024D0F8:
    // 0x8024D0F8: lwc1        $f18, 0x10($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8024D0FC: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x8024D100: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8024D104: cvt.d.s     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f0.d = CVT_D_S(ctx->f18.fl);
    // 0x8024D108: c.lt.d      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.d < ctx->f0.d;
    // 0x8024D10C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8024D110: bc1t        L_8024D16C
    if (c1cs) {
        // 0x8024D114: nop
    
            goto L_8024D16C;
    }
    // 0x8024D114: nop

    // 0x8024D118: lhu         $t7, 0x6A($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X6A);
    // 0x8024D11C: lwc1        $f17, -0x4218($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X4218);
    // 0x8024D120: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x8024D124: lwc1        $f16, -0x4214($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X4214);
    // 0x8024D128: bgez        $t7, L_8024D144
    if (SIGNED(ctx->r15) >= 0) {
        // 0x8024D12C: cvt.d.w     $f4, $f6
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.d = CVT_D_W(ctx->f6.u32l);
            goto L_8024D144;
    }
    // 0x8024D12C: cvt.d.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.d = CVT_D_W(ctx->f6.u32l);
    // 0x8024D130: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8024D134: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x8024D138: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8024D13C: nop

    // 0x8024D140: add.d       $f4, $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = ctx->f4.d + ctx->f10.d;
L_8024D144:
    // 0x8024D144: mul.d       $f18, $f16, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f4.d); 
    ctx->f18.d = MUL_D(ctx->f16.d, ctx->f4.d);
    // 0x8024D148: lui         $at, 0x4014
    ctx->r1 = S32(0X4014 << 16);
    // 0x8024D14C: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x8024D150: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8024D154: nop

    // 0x8024D158: add.d       $f6, $f8, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f18.d); 
    ctx->f6.d = ctx->f8.d + ctx->f18.d;
    // 0x8024D15C: c.lt.d      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.d < ctx->f0.d;
    // 0x8024D160: nop

    // 0x8024D164: bc1f        L_8024D178
    if (!c1cs) {
        // 0x8024D168: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8024D178;
    }
    // 0x8024D168: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8024D16C:
    // 0x8024D16C: jr          $ra
    // 0x8024D170: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8024D170: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8024D174: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8024D178:
    // 0x8024D178: jr          $ra
    // 0x8024D17C: nop

    return;
    // 0x8024D17C: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8024D180(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8024D180: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8024D184: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8024D188: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8024D18C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8024D190: jal         0x8024BC08
    // 0x8024D194: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    ovl_8024B800_func_8024BC08(rdram, ctx);
        goto after_0;
    // 0x8024D194: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    after_0:
    // 0x8024D198: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8024D19C: lwc1        $f4, 0x88($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X88);
    // 0x8024D1A0: lwc1        $f9, -0x4210($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X4210);
    // 0x8024D1A4: lwc1        $f8, -0x420C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X420C);
    // 0x8024D1A8: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8024D1AC: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x8024D1B0: lwc1        $f12, 0x8C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x8024D1B4: jal         0x80279308
    // 0x8024D1B8: cvt.s.d     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f14.fl = CVT_S_D(ctx->f10.d);
    ovl_8024B800_func_80279308(rdram, ctx);
        goto after_1;
    // 0x8024D1B8: cvt.s.d     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f14.fl = CVT_S_D(ctx->f10.d);
    after_1:
    // 0x8024D1BC: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x8024D1C0: lw          $t6, 0x3B20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B20);
    // 0x8024D1C4: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x8024D1C8: lwc1        $f12, 0x8C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x8024D1CC: lwc1        $f14, 0x20($t6)
    ctx->f14.u32l = MEM_W(ctx->r14, 0X20);
    // 0x8024D1D0: jal         0x8027924C
    // 0x8024D1D4: nop

    ovl_8024B800_func_8027924C(rdram, ctx);
        goto after_2;
    // 0x8024D1D4: nop

    after_2:
    // 0x8024D1D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8024D1DC: jal         0x802732F4
    // 0x8024D1E0: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    ovl_8024B800_func_802732F4(rdram, ctx);
        goto after_3;
    // 0x8024D1E0: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    after_3:
    // 0x8024D1E4: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8024D1E8: lwc1        $f16, 0x24($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8024D1EC: lwc1        $f19, -0x4208($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, -0X4208);
    // 0x8024D1F0: lwc1        $f18, -0x4204($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X4204);
    // 0x8024D1F4: cvt.d.s     $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f0.d = CVT_D_S(ctx->f16.fl);
    // 0x8024D1F8: c.lt.d      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.d < ctx->f0.d;
    // 0x8024D1FC: lwc1        $f2, 0x20($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8024D200: bc1f        L_8024D230
    if (!c1cs) {
        // 0x8024D204: lui         $at, 0x8028
        ctx->r1 = S32(0X8028 << 16);
            goto L_8024D230;
    }
    // 0x8024D204: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8024D208: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8024D20C: addiu       $t7, $zero, 0xE
    ctx->r15 = ADD32(0, 0XE);
    // 0x8024D210: c.lt.s      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.fl < ctx->f2.fl;
    // 0x8024D214: sh          $t7, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r15;
    // 0x8024D218: bc1f        L_8024D27C
    if (!c1cs) {
        // 0x8024D21C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8024D27C;
    }
    // 0x8024D21C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8024D220: jal         0x802732D0
    // 0x8024D224: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_802732D0(rdram, ctx);
        goto after_4;
    // 0x8024D224: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8024D228: b           L_8024D27C
    // 0x8024D22C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8024D27C;
    // 0x8024D22C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8024D230:
    // 0x8024D230: lwc1        $f7, -0x4200($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X4200);
    // 0x8024D234: lwc1        $f6, -0x41FC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X41FC);
    // 0x8024D238: addiu       $t9, $zero, 0xF
    ctx->r25 = ADD32(0, 0XF);
    // 0x8024D23C: c.lt.d      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.d < ctx->f0.d;
    // 0x8024D240: nop

    // 0x8024D244: bc1f        L_8024D274
    if (!c1cs) {
        // 0x8024D248: nop
    
            goto L_8024D274;
    }
    // 0x8024D248: nop

    // 0x8024D24C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8024D250: addiu       $t8, $zero, 0x10
    ctx->r24 = ADD32(0, 0X10);
    // 0x8024D254: c.lt.s      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.fl < ctx->f8.fl;
    // 0x8024D258: sh          $t8, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r24;
    // 0x8024D25C: bc1f        L_8024D27C
    if (!c1cs) {
        // 0x8024D260: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8024D27C;
    }
    // 0x8024D260: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8024D264: jal         0x802732D0
    // 0x8024D268: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_802732D0(rdram, ctx);
        goto after_5;
    // 0x8024D268: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x8024D26C: b           L_8024D27C
    // 0x8024D270: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8024D27C;
    // 0x8024D270: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8024D274:
    // 0x8024D274: sh          $t9, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r25;
    // 0x8024D278: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8024D27C:
    // 0x8024D27C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8024D280: jr          $ra
    // 0x8024D284: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8024D284: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_8024B800_func_8024D288(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8024D288: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8024D28C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8024D290: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x8024D294: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8024D298: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8024D29C: lw          $t6, 0x88($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X88);
    // 0x8024D2A0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8024D2A4: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x8024D2A8: swc1        $f4, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->f4.u32l;
    // 0x8024D2AC: lhu         $t7, 0x16($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X16);
    // 0x8024D2B0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8024D2B4: andi        $t8, $t7, 0x200
    ctx->r24 = ctx->r15 & 0X200;
    // 0x8024D2B8: beq         $t8, $zero, L_8024D2C8
    if (ctx->r24 == 0) {
        // 0x8024D2BC: nop
    
            goto L_8024D2C8;
    }
    // 0x8024D2BC: nop

    // 0x8024D2C0: jal         0x80278814
    // 0x8024D2C4: nop

    ovl_8024B800_func_80278814(rdram, ctx);
        goto after_0;
    // 0x8024D2C4: nop

    after_0:
L_8024D2C8:
    // 0x8024D2C8: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x8024D2CC: lhu         $t9, 0xB78($t9)
    ctx->r25 = MEM_HU(ctx->r25, 0XB78);
    // 0x8024D2D0: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8024D2D4: bne         $t9, $zero, L_8024D2EC
    if (ctx->r25 != 0) {
        // 0x8024D2D8: nop
    
            goto L_8024D2EC;
    }
    // 0x8024D2D8: nop

    // 0x8024D2DC: lhu         $t0, 0x14($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X14);
    // 0x8024D2E0: nop

    // 0x8024D2E4: andi        $t1, $t0, 0xFBFF
    ctx->r9 = ctx->r8 & 0XFBFF;
    // 0x8024D2E8: sh          $t1, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r9;
L_8024D2EC:
    // 0x8024D2EC: lhu         $t2, 0x12($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X12);
    // 0x8024D2F0: lwc1        $f6, 0x44($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X44);
    // 0x8024D2F4: andi        $t3, $t2, 0xFDFF
    ctx->r11 = ctx->r10 & 0XFDFF;
    // 0x8024D2F8: sh          $t3, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r11;
    // 0x8024D2FC: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x8024D300: lwc1        $f10, 0x4C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x8024D304: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8024D308: lwc1        $f16, 0x8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8024D30C: sub.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8024D310: jal         0x8001C5D0
    // 0x8024D314: sub.s       $f14, $f10, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f10.fl - ctx->f16.fl;
    func_8001C5D0(rdram, ctx);
        goto after_1;
    // 0x8024D314: sub.s       $f14, $f10, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f10.fl - ctx->f16.fl;
    after_1:
    // 0x8024D318: swc1        $f0, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->f0.u32l;
    // 0x8024D31C: lui         $t4, 0x8009
    ctx->r12 = S32(0X8009 << 16);
    // 0x8024D320: lw          $t4, 0x3B20($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X3B20);
    // 0x8024D324: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8024D328: lw          $a1, 0x8C($t4)
    ctx->r5 = MEM_W(ctx->r12, 0X8C);
    // 0x8024D32C: jal         0x80266EBC
    // 0x8024D330: nop

    ovl_8024B800_func_80266EBC(rdram, ctx);
        goto after_2;
    // 0x8024D330: nop

    after_2:
    // 0x8024D334: jal         0x80067200
    // 0x8024D338: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80067200(rdram, ctx);
        goto after_3;
    // 0x8024D338: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8024D33C: bne         $v0, $zero, L_8024D81C
    if (ctx->r2 != 0) {
        // 0x8024D340: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_8024D81C;
    }
    // 0x8024D340: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8024D344: lhu         $t5, 0xE($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0XE);
    // 0x8024D348: addiu       $at, $zero, 0x3E
    ctx->r1 = ADD32(0, 0X3E);
    // 0x8024D34C: bne         $t5, $at, L_8024D378
    if (ctx->r13 != ctx->r1) {
        // 0x8024D350: lui         $t6, 0x8012
        ctx->r14 = S32(0X8012 << 16);
            goto L_8024D378;
    }
    // 0x8024D350: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8024D354: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x8024D358: lw          $t7, 0x3B20($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3B20);
    // 0x8024D35C: lw          $t6, 0xB2C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0XB2C);
    // 0x8024D360: lw          $t8, 0x8C($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X8C);
    // 0x8024D364: nop

    // 0x8024D368: bne         $t6, $t8, L_8024D378
    if (ctx->r14 != ctx->r24) {
        // 0x8024D36C: nop
    
            goto L_8024D378;
    }
    // 0x8024D36C: nop

    // 0x8024D370: jal         0x8007A068
    // 0x8024D374: nop

    func_8007A068(rdram, ctx);
        goto after_4;
    // 0x8024D374: nop

    after_4:
L_8024D378:
    // 0x8024D378: jal         0x8024CFD8
    // 0x8024D37C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8024CFD8(rdram, ctx);
        goto after_5;
    // 0x8024D37C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x8024D380: beq         $v0, $zero, L_8024D43C
    if (ctx->r2 == 0) {
        // 0x8024D384: lui         $t0, 0x8009
        ctx->r8 = S32(0X8009 << 16);
            goto L_8024D43C;
    }
    // 0x8024D384: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x8024D388: lw          $t0, 0x3B20($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X3B20);
    // 0x8024D38C: lw          $t9, 0xC8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC8);
    // 0x8024D390: lw          $t1, 0x8C($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X8C);
    // 0x8024D394: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8024D398: lw          $t2, 0xC8($t1)
    ctx->r10 = MEM_W(ctx->r9, 0XC8);
    // 0x8024D39C: nop

    // 0x8024D3A0: bne         $t9, $t2, L_8024D3B8
    if (ctx->r25 != ctx->r10) {
        // 0x8024D3A4: nop
    
            goto L_8024D3B8;
    }
    // 0x8024D3A4: nop

    // 0x8024D3A8: jal         0x8024BC08
    // 0x8024D3AC: addiu       $a1, $zero, 0x41
    ctx->r5 = ADD32(0, 0X41);
    ovl_8024B800_func_8024BC08(rdram, ctx);
        goto after_6;
    // 0x8024D3AC: addiu       $a1, $zero, 0x41
    ctx->r5 = ADD32(0, 0X41);
    after_6:
    // 0x8024D3B0: b           L_8024D778
    // 0x8024D3B4: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
        goto L_8024D778;
    // 0x8024D3B4: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
L_8024D3B8:
    // 0x8024D3B8: jal         0x80058A28
    // 0x8024D3BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80058A28(rdram, ctx);
        goto after_7;
    // 0x8024D3BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x8024D3C0: lui         $t4, 0x8009
    ctx->r12 = S32(0X8009 << 16);
    // 0x8024D3C4: lw          $t4, 0x3B20($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X3B20);
    // 0x8024D3C8: addiu       $t3, $zero, 0x11
    ctx->r11 = ADD32(0, 0X11);
    // 0x8024D3CC: sb          $t3, 0xBC($t4)
    MEM_B(0XBC, ctx->r12) = ctx->r11;
    // 0x8024D3D0: lhu         $t5, 0xE($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0XE);
    // 0x8024D3D4: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x8024D3D8: beq         $t5, $at, L_8024D428
    if (ctx->r13 == ctx->r1) {
        // 0x8024D3DC: lui         $v0, 0x8009
        ctx->r2 = S32(0X8009 << 16);
            goto L_8024D428;
    }
    // 0x8024D3DC: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8024D3E0: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x8024D3E4: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8024D3E8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8024D3EC: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8024D3F0: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x8024D3F4: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x8024D3F8: nop

    // 0x8024D3FC: bc1f        L_8024D42C
    if (!c1cs) {
        // 0x8024D400: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8024D42C;
    }
    // 0x8024D400: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8024D404: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8024D408: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8024D40C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8024D410: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x8024D414: nop

    // 0x8024D418: bc1f        L_8024D428
    if (!c1cs) {
        // 0x8024D41C: nop
    
            goto L_8024D428;
    }
    // 0x8024D41C: nop

    // 0x8024D420: jal         0x8024BC08
    // 0x8024D424: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    ovl_8024B800_func_8024BC08(rdram, ctx);
        goto after_8;
    // 0x8024D424: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    after_8:
L_8024D428:
    // 0x8024D428: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8024D42C:
    // 0x8024D42C: jal         0x800653AC
    // 0x8024D430: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800653AC(rdram, ctx);
        goto after_9;
    // 0x8024D430: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_9:
    // 0x8024D434: b           L_8024D778
    // 0x8024D438: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
        goto L_8024D778;
    // 0x8024D438: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
L_8024D43C:
    // 0x8024D43C: lhu         $t7, 0xE($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0XE);
    // 0x8024D440: nop

    // 0x8024D444: addiu       $t6, $t7, -0x6
    ctx->r14 = ADD32(ctx->r15, -0X6);
    // 0x8024D448: sltiu       $at, $t6, 0x39
    ctx->r1 = ctx->r14 < 0X39 ? 1 : 0;
    // 0x8024D44C: beq         $at, $zero, L_8024D658
    if (ctx->r1 == 0) {
        // 0x8024D450: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_8024D658;
    }
    // 0x8024D450: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8024D454: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8024D458: addu        $at, $at, $t6
    gpr jr_addend_8024D464 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8024D45C: lw          $t6, -0x41F8($at)
    ctx->r14 = ADD32(ctx->r1, -0X41F8);
    // 0x8024D460: nop

    // 0x8024D464: jr          $t6
    // 0x8024D468: nop

    switch (jr_addend_8024D464 >> 2) {
        case 0: goto L_8024D5F4; break;
        case 1: goto L_8024D5C8; break;
        case 2: goto L_8024D658; break;
        case 3: goto L_8024D658; break;
        case 4: goto L_8024D658; break;
        case 5: goto L_8024D658; break;
        case 6: goto L_8024D5D8; break;
        case 7: goto L_8024D658; break;
        case 8: goto L_8024D658; break;
        case 9: goto L_8024D658; break;
        case 10: goto L_8024D658; break;
        case 11: goto L_8024D658; break;
        case 12: goto L_8024D658; break;
        case 13: goto L_8024D52C; break;
        case 14: goto L_8024D50C; break;
        case 15: goto L_8024D658; break;
        case 16: goto L_8024D4F0; break;
        case 17: goto L_8024D658; break;
        case 18: goto L_8024D658; break;
        case 19: goto L_8024D658; break;
        case 20: goto L_8024D5D8; break;
        case 21: goto L_8024D774; break;
        case 22: goto L_8024D658; break;
        case 23: goto L_8024D658; break;
        case 24: goto L_8024D658; break;
        case 25: goto L_8024D46C; break;
        case 26: goto L_8024D658; break;
        case 27: goto L_8024D658; break;
        case 28: goto L_8024D658; break;
        case 29: goto L_8024D658; break;
        case 30: goto L_8024D658; break;
        case 31: goto L_8024D658; break;
        case 32: goto L_8024D658; break;
        case 33: goto L_8024D658; break;
        case 34: goto L_8024D658; break;
        case 35: goto L_8024D658; break;
        case 36: goto L_8024D658; break;
        case 37: goto L_8024D658; break;
        case 38: goto L_8024D5D8; break;
        case 39: goto L_8024D658; break;
        case 40: goto L_8024D658; break;
        case 41: goto L_8024D658; break;
        case 42: goto L_8024D658; break;
        case 43: goto L_8024D658; break;
        case 44: goto L_8024D658; break;
        case 45: goto L_8024D658; break;
        case 46: goto L_8024D658; break;
        case 47: goto L_8024D658; break;
        case 48: goto L_8024D658; break;
        case 49: goto L_8024D658; break;
        case 50: goto L_8024D658; break;
        case 51: goto L_8024D658; break;
        case 52: goto L_8024D658; break;
        case 53: goto L_8024D658; break;
        case 54: goto L_8024D658; break;
        case 55: goto L_8024D658; break;
        case 56: goto L_8024D5D8; break;
        default: switch_error(__func__, 0x8024D464, 0x8027BE08);
    }
    // 0x8024D468: nop

L_8024D46C:
    // 0x8024D46C: jal         0x80250C9C
    // 0x8024D470: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80250C9C(rdram, ctx);
        goto after_10;
    // 0x8024D470: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x8024D474: lw          $t8, 0xC8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC8);
    // 0x8024D478: lwc1        $f12, 0x4C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x8024D47C: lhu         $a2, 0x8($t8)
    ctx->r6 = MEM_HU(ctx->r24, 0X8);
    // 0x8024D480: lwc1        $f14, 0x44($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X44);
    // 0x8024D484: andi        $t0, $a2, 0x1
    ctx->r8 = ctx->r6 & 0X1;
    // 0x8024D488: jal         0x80271FD4
    // 0x8024D48C: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    ovl_8024B800_func_80271FD4(rdram, ctx);
        goto after_11;
    // 0x8024D48C: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    after_11:
    // 0x8024D490: bne         $v0, $zero, L_8024D4C0
    if (ctx->r2 != 0) {
        // 0x8024D494: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8024D4C0;
    }
    // 0x8024D494: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8024D498: jal         0x80250B5C
    // 0x8024D49C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80250B5C(rdram, ctx);
        goto after_12;
    // 0x8024D49C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x8024D4A0: jal         0x80055528
    // 0x8024D4A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80055528(rdram, ctx);
        goto after_13;
    // 0x8024D4A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x8024D4A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8024D4AC: jal         0x802A613C
    // 0x8024D4B0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    LOOKUP_FUNC(0x802A613C)(rdram, ctx);
        goto after_14;
    // 0x8024D4B0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_14:
    // 0x8024D4B4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8024D4B8: b           L_8024D774
    // 0x8024D4BC: sh          $zero, 0xB48($at)
    MEM_H(0XB48, ctx->r1) = 0;
        goto L_8024D774;
    // 0x8024D4BC: sh          $zero, 0xB48($at)
    MEM_H(0XB48, ctx->r1) = 0;
L_8024D4C0:
    // 0x8024D4C0: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8024D4C4: lwc1        $f10, -0x4114($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X4114);
    // 0x8024D4C8: lw          $a2, 0x8C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8C);
    // 0x8024D4CC: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x8024D4D0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8024D4D4: jal         0x80058CD0
    // 0x8024D4D8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_80058CD0(rdram, ctx);
        goto after_15;
    // 0x8024D4D8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_15:
    // 0x8024D4DC: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x8024D4E0: lw          $t9, 0x3B20($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X3B20);
    // 0x8024D4E4: addiu       $t1, $zero, 0x12
    ctx->r9 = ADD32(0, 0X12);
    // 0x8024D4E8: b           L_8024D774
    // 0x8024D4EC: sb          $t1, 0xBC($t9)
    MEM_B(0XBC, ctx->r25) = ctx->r9;
        goto L_8024D774;
    // 0x8024D4EC: sb          $t1, 0xBC($t9)
    MEM_B(0XBC, ctx->r25) = ctx->r9;
L_8024D4F0:
    // 0x8024D4F0: lhu         $t2, 0x20($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X20);
    // 0x8024D4F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8024D4F8: ori         $t3, $t2, 0x20
    ctx->r11 = ctx->r10 | 0X20;
    // 0x8024D4FC: jal         0x80055528
    // 0x8024D500: sh          $t3, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r11;
    func_80055528(rdram, ctx);
        goto after_16;
    // 0x8024D500: sh          $t3, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r11;
    after_16:
    // 0x8024D504: b           L_8024D778
    // 0x8024D508: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
        goto L_8024D778;
    // 0x8024D508: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
L_8024D50C:
    // 0x8024D50C: jal         0x80055528
    // 0x8024D510: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80055528(rdram, ctx);
        goto after_17;
    // 0x8024D510: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x8024D514: lw          $a2, 0x7C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X7C);
    // 0x8024D518: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8024D51C: jal         0x80274C54
    // 0x8024D520: lui         $a1, 0x3FC0
    ctx->r5 = S32(0X3FC0 << 16);
    ovl_8024B800_func_80274C54(rdram, ctx);
        goto after_18;
    // 0x8024D520: lui         $a1, 0x3FC0
    ctx->r5 = S32(0X3FC0 << 16);
    after_18:
    // 0x8024D524: b           L_8024D778
    // 0x8024D528: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
        goto L_8024D778;
    // 0x8024D528: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
L_8024D52C:
    // 0x8024D52C: lhu         $t4, 0x10($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X10);
    // 0x8024D530: nop

    // 0x8024D534: beq         $t4, $zero, L_8024D574
    if (ctx->r12 == 0) {
        // 0x8024D538: nop
    
            goto L_8024D574;
    }
    // 0x8024D538: nop

    // 0x8024D53C: lhu         $t5, 0x12($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X12);
    // 0x8024D540: nop

    // 0x8024D544: andi        $t7, $t5, 0x8000
    ctx->r15 = ctx->r13 & 0X8000;
    // 0x8024D548: bne         $t7, $zero, L_8024D564
    if (ctx->r15 != 0) {
        // 0x8024D54C: nop
    
            goto L_8024D564;
    }
    // 0x8024D54C: nop

    // 0x8024D550: lh          $t6, 0xEA($s0)
    ctx->r14 = MEM_H(ctx->r16, 0XEA);
    // 0x8024D554: nop

    // 0x8024D558: slti        $at, $t6, 0x4
    ctx->r1 = SIGNED(ctx->r14) < 0X4 ? 1 : 0;
    // 0x8024D55C: bne         $at, $zero, L_8024D574
    if (ctx->r1 != 0) {
        // 0x8024D560: nop
    
            goto L_8024D574;
    }
    // 0x8024D560: nop

L_8024D564:
    // 0x8024D564: jal         0x8024CC58
    // 0x8024D568: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8024CC58(rdram, ctx);
        goto after_19;
    // 0x8024D568: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
    // 0x8024D56C: b           L_8024D778
    // 0x8024D570: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
        goto L_8024D778;
    // 0x8024D570: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
L_8024D574:
    // 0x8024D574: jal         0x80055528
    // 0x8024D578: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80055528(rdram, ctx);
        goto after_20;
    // 0x8024D578: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_20:
    // 0x8024D57C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8024D580: lwc1        $f18, 0x50($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X50);
    // 0x8024D584: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8024D588: c.eq.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl == ctx->f18.fl;
    // 0x8024D58C: nop

    // 0x8024D590: bc1t        L_8024D5A4
    if (c1cs) {
        // 0x8024D594: nop
    
            goto L_8024D5A4;
    }
    // 0x8024D594: nop

    // 0x8024D598: lw          $a2, 0x7C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X7C);
    // 0x8024D59C: jal         0x80274C54
    // 0x8024D5A0: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    ovl_8024B800_func_80274C54(rdram, ctx);
        goto after_21;
    // 0x8024D5A0: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_21:
L_8024D5A4:
    // 0x8024D5A4: lhu         $t8, 0x36($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X36);
    // 0x8024D5A8: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x8024D5AC: andi        $t0, $t8, 0x4000
    ctx->r8 = ctx->r24 & 0X4000;
    // 0x8024D5B0: beq         $t0, $zero, L_8024D778
    if (ctx->r8 == 0) {
        // 0x8024D5B4: lw          $v0, 0x2C($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X2C);
            goto L_8024D778;
    }
    // 0x8024D5B4: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x8024D5B8: lw          $t1, 0xEC($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XEC);
    // 0x8024D5BC: lw          $t9, 0x3B20($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X3B20);
    // 0x8024D5C0: b           L_8024D774
    // 0x8024D5C4: sw          $t1, 0xA0($t9)
    MEM_W(0XA0, ctx->r25) = ctx->r9;
        goto L_8024D774;
    // 0x8024D5C4: sw          $t1, 0xA0($t9)
    MEM_W(0XA0, ctx->r25) = ctx->r9;
L_8024D5C8:
    // 0x8024D5C8: lhu         $t2, 0x12($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X12);
    // 0x8024D5CC: nop

    // 0x8024D5D0: ori         $t3, $t2, 0x2
    ctx->r11 = ctx->r10 | 0X2;
    // 0x8024D5D4: sh          $t3, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r11;
L_8024D5D8:
    // 0x8024D5D8: jal         0x80058A28
    // 0x8024D5DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80058A28(rdram, ctx);
        goto after_22;
    // 0x8024D5DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_22:
    // 0x8024D5E0: lui         $t5, 0x8009
    ctx->r13 = S32(0X8009 << 16);
    // 0x8024D5E4: lw          $t5, 0x3B20($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X3B20);
    // 0x8024D5E8: addiu       $t4, $zero, 0x11
    ctx->r12 = ADD32(0, 0X11);
    // 0x8024D5EC: b           L_8024D774
    // 0x8024D5F0: sb          $t4, 0xBC($t5)
    MEM_B(0XBC, ctx->r13) = ctx->r12;
        goto L_8024D774;
    // 0x8024D5F0: sb          $t4, 0xBC($t5)
    MEM_B(0XBC, ctx->r13) = ctx->r12;
L_8024D5F4:
    // 0x8024D5F4: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8024D5F8: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x8024D5FC: nop

    // 0x8024D600: lhu         $t7, 0x6A($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X6A);
    // 0x8024D604: nop

    // 0x8024D608: slti        $at, $t7, 0x5
    ctx->r1 = SIGNED(ctx->r15) < 0X5 ? 1 : 0;
    // 0x8024D60C: bne         $at, $zero, L_8024D624
    if (ctx->r1 != 0) {
        // 0x8024D610: nop
    
            goto L_8024D624;
    }
    // 0x8024D610: nop

    // 0x8024D614: lhu         $t6, 0x10($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X10);
    // 0x8024D618: nop

    // 0x8024D61C: bne         $t6, $zero, L_8024D774
    if (ctx->r14 != 0) {
        // 0x8024D620: nop
    
            goto L_8024D774;
    }
    // 0x8024D620: nop

L_8024D624:
    // 0x8024D624: lw          $t0, 0x8C($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X8C);
    // 0x8024D628: lw          $t8, 0xC8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC8);
    // 0x8024D62C: lw          $t1, 0xC8($t0)
    ctx->r9 = MEM_W(ctx->r8, 0XC8);
    // 0x8024D630: nop

    // 0x8024D634: beq         $t8, $t1, L_8024D778
    if (ctx->r24 == ctx->r9) {
        // 0x8024D638: lw          $v0, 0x2C($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X2C);
            goto L_8024D778;
    }
    // 0x8024D638: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x8024D63C: jal         0x80058A28
    // 0x8024D640: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80058A28(rdram, ctx);
        goto after_23;
    // 0x8024D640: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_23:
    // 0x8024D644: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x8024D648: lw          $t2, 0x3B20($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X3B20);
    // 0x8024D64C: addiu       $t9, $zero, 0x11
    ctx->r25 = ADD32(0, 0X11);
    // 0x8024D650: b           L_8024D774
    // 0x8024D654: sb          $t9, 0xBC($t2)
    MEM_B(0XBC, ctx->r10) = ctx->r25;
        goto L_8024D774;
    // 0x8024D654: sb          $t9, 0xBC($t2)
    MEM_B(0XBC, ctx->r10) = ctx->r25;
L_8024D658:
    // 0x8024D658: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8024D65C: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x8024D660: lui         $t8, 0x8028
    ctx->r24 = S32(0X8028 << 16);
    // 0x8024D664: lhu         $t3, 0xC2($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0XC2);
    // 0x8024D668: nop

    // 0x8024D66C: andi        $t4, $t3, 0x2000
    ctx->r12 = ctx->r11 & 0X2000;
    // 0x8024D670: beq         $t4, $zero, L_8024D6B4
    if (ctx->r12 == 0) {
        // 0x8024D674: nop
    
            goto L_8024D6B4;
    }
    // 0x8024D674: nop

    // 0x8024D678: lhu         $t5, 0x6A($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X6A);
    // 0x8024D67C: nop

    // 0x8024D680: slti        $at, $t5, 0xA
    ctx->r1 = SIGNED(ctx->r13) < 0XA ? 1 : 0;
    // 0x8024D684: beq         $at, $zero, L_8024D6B4
    if (ctx->r1 == 0) {
        // 0x8024D688: nop
    
            goto L_8024D6B4;
    }
    // 0x8024D688: nop

    // 0x8024D68C: lw          $t7, 0x8C($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X8C);
    // 0x8024D690: lw          $t0, 0xC8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XC8);
    // 0x8024D694: lw          $t6, 0xC8($t7)
    ctx->r14 = MEM_W(ctx->r15, 0XC8);
    // 0x8024D698: nop

    // 0x8024D69C: beq         $t6, $t0, L_8024D6B4
    if (ctx->r14 == ctx->r8) {
        // 0x8024D6A0: nop
    
            goto L_8024D6B4;
    }
    // 0x8024D6A0: nop

    // 0x8024D6A4: jal         0x8024D180
    // 0x8024D6A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8024D180(rdram, ctx);
        goto after_24;
    // 0x8024D6A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_24:
    // 0x8024D6AC: b           L_8024D778
    // 0x8024D6B0: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
        goto L_8024D778;
    // 0x8024D6B0: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
L_8024D6B4:
    // 0x8024D6B4: lhu         $t8, -0x1B4E($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X1B4E);
    // 0x8024D6B8: lhu         $t1, 0x6C($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X6C);
    // 0x8024D6BC: lui         $t9, 0x8028
    ctx->r25 = S32(0X8028 << 16);
    // 0x8024D6C0: bne         $t8, $t1, L_8024D718
    if (ctx->r24 != ctx->r9) {
        // 0x8024D6C4: nop
    
            goto L_8024D718;
    }
    // 0x8024D6C4: nop

    // 0x8024D6C8: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x8024D6CC: lbu         $t9, -0x1B50($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X1B50);
    // 0x8024D6D0: lhu         $t3, 0x6($t2)
    ctx->r11 = MEM_HU(ctx->r10, 0X6);
    // 0x8024D6D4: lui         $t4, 0x8028
    ctx->r12 = S32(0X8028 << 16);
    // 0x8024D6D8: bne         $t9, $t3, L_8024D718
    if (ctx->r25 != ctx->r11) {
        // 0x8024D6DC: nop
    
            goto L_8024D718;
    }
    // 0x8024D6DC: nop

    // 0x8024D6E0: lbu         $t4, -0x1B4F($t4)
    ctx->r12 = MEM_BU(ctx->r12, -0X1B4F);
    // 0x8024D6E4: lhu         $t5, 0x1A($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X1A);
    // 0x8024D6E8: nop

    // 0x8024D6EC: beq         $t4, $t5, L_8024D718
    if (ctx->r12 == ctx->r13) {
        // 0x8024D6F0: nop
    
            goto L_8024D718;
    }
    // 0x8024D6F0: nop

    // 0x8024D6F4: lhu         $t7, 0x6A($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X6A);
    // 0x8024D6F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8024D6FC: slti        $at, $t7, 0x1E
    ctx->r1 = SIGNED(ctx->r15) < 0X1E ? 1 : 0;
    // 0x8024D700: beq         $at, $zero, L_8024D718
    if (ctx->r1 == 0) {
        // 0x8024D704: nop
    
            goto L_8024D718;
    }
    // 0x8024D704: nop

    // 0x8024D708: jal         0x8024BC08
    // 0x8024D70C: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    ovl_8024B800_func_8024BC08(rdram, ctx);
        goto after_25;
    // 0x8024D70C: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    after_25:
    // 0x8024D710: b           L_8024D778
    // 0x8024D714: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
        goto L_8024D778;
    // 0x8024D714: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
L_8024D718:
    // 0x8024D718: jal         0x80059868
    // 0x8024D71C: nop

    func_80059868(rdram, ctx);
        goto after_26;
    // 0x8024D71C: nop

    after_26:
    // 0x8024D720: sh          $v0, 0x2C($s0)
    MEM_H(0X2C, ctx->r16) = ctx->r2;
    // 0x8024D724: jal         0x80065B70
    // 0x8024D728: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80065B70(rdram, ctx);
        goto after_27;
    // 0x8024D728: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_27:
    // 0x8024D72C: bne         $v0, $zero, L_8024D75C
    if (ctx->r2 != 0) {
        // 0x8024D730: lui         $t6, 0x8012
        ctx->r14 = S32(0X8012 << 16);
            goto L_8024D75C;
    }
    // 0x8024D730: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8024D734: lb          $t6, -0x309F($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X309F);
    // 0x8024D738: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8024D73C: bne         $t6, $at, L_8024D754
    if (ctx->r14 != ctx->r1) {
        // 0x8024D740: nop
    
            goto L_8024D754;
    }
    // 0x8024D740: nop

    // 0x8024D744: jal         0x802719DC
    // 0x8024D748: addiu       $a0, $zero, 0x308
    ctx->r4 = ADD32(0, 0X308);
    ovl_8024B800_func_802719DC(rdram, ctx);
        goto after_28;
    // 0x8024D748: addiu       $a0, $zero, 0x308
    ctx->r4 = ADD32(0, 0X308);
    after_28:
    // 0x8024D74C: b           L_8024D75C
    // 0x8024D750: nop

        goto L_8024D75C;
    // 0x8024D750: nop

L_8024D754:
    // 0x8024D754: jal         0x80271980
    // 0x8024D758: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    ovl_8024B800_func_80271980(rdram, ctx);
        goto after_29;
    // 0x8024D758: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_29:
L_8024D75C:
    // 0x8024D75C: jal         0x8006607C
    // 0x8024D760: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8006607C(rdram, ctx);
        goto after_30;
    // 0x8024D760: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_30:
    // 0x8024D764: jal         0x80066168
    // 0x8024D768: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80066168(rdram, ctx);
        goto after_31;
    // 0x8024D768: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_31:
    // 0x8024D76C: jal         0x8024CC58
    // 0x8024D770: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8024CC58(rdram, ctx);
        goto after_32;
    // 0x8024D770: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_32:
L_8024D774:
    // 0x8024D774: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
L_8024D778:
    // 0x8024D778: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x8024D77C: beq         $v0, $zero, L_8024D7B8
    if (ctx->r2 == 0) {
        // 0x8024D780: nop
    
            goto L_8024D7B8;
    }
    // 0x8024D780: nop

    // 0x8024D784: lw          $t0, 0x3B20($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X3B20);
    // 0x8024D788: addiu       $t1, $zero, 0x14
    ctx->r9 = ADD32(0, 0X14);
    // 0x8024D78C: lw          $t8, 0x88($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X88);
    // 0x8024D790: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8024D794: beq         $v0, $t8, L_8024D7B8
    if (ctx->r2 == ctx->r24) {
        // 0x8024D798: nop
    
            goto L_8024D7B8;
    }
    // 0x8024D798: nop

    // 0x8024D79C: sh          $t1, 0x362E($at)
    MEM_H(0X362E, ctx->r1) = ctx->r9;
    // 0x8024D7A0: lhu         $a1, 0x20($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X20);
    // 0x8024D7A4: jal         0x800649A4
    // 0x8024D7A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800649A4(rdram, ctx);
        goto after_33;
    // 0x8024D7A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_33:
    // 0x8024D7AC: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x8024D7B0: jal         0x8024BC08
    // 0x8024D7B4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_8024B800_func_8024BC08(rdram, ctx);
        goto after_34;
    // 0x8024D7B4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_34:
L_8024D7B8:
    // 0x8024D7B8: jal         0x80066DC4
    // 0x8024D7BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80066DC4(rdram, ctx);
        goto after_35;
    // 0x8024D7BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_35:
    // 0x8024D7C0: jal         0x80066AC4
    // 0x8024D7C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80066AC4(rdram, ctx);
        goto after_36;
    // 0x8024D7C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_36:
    // 0x8024D7C8: jal         0x80066C64
    // 0x8024D7CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80066C64(rdram, ctx);
        goto after_37;
    // 0x8024D7CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_37:
    // 0x8024D7D0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8024D7D4: addiu       $v0, $v0, 0xB7A
    ctx->r2 = ADD32(ctx->r2, 0XB7A);
    // 0x8024D7D8: lhu         $t2, 0x0($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X0);
    // 0x8024D7DC: nop

    // 0x8024D7E0: sltiu       $at, $t2, 0x9
    ctx->r1 = ctx->r10 < 0X9 ? 1 : 0;
    // 0x8024D7E4: beq         $at, $zero, L_8024D818
    if (ctx->r1 == 0) {
        // 0x8024D7E8: sll         $t2, $t2, 2
        ctx->r10 = S32(ctx->r10 << 2);
            goto L_8024D818;
    }
    // 0x8024D7E8: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8024D7EC: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8024D7F0: addu        $at, $at, $t2
    gpr jr_addend_8024D7FC = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8024D7F4: lw          $t2, -0x4110($at)
    ctx->r10 = ADD32(ctx->r1, -0X4110);
    // 0x8024D7F8: nop

    // 0x8024D7FC: jr          $t2
    // 0x8024D800: nop

    switch (jr_addend_8024D7FC >> 2) {
        case 0: goto L_8024D818; break;
        case 1: goto L_8024D804; break;
        case 2: goto L_8024D818; break;
        case 3: goto L_8024D818; break;
        case 4: goto L_8024D818; break;
        case 5: goto L_8024D818; break;
        case 6: goto L_8024D818; break;
        case 7: goto L_8024D818; break;
        case 8: goto L_8024D818; break;
        default: switch_error(__func__, 0x8024D7FC, 0x8027BEF0);
    }
    // 0x8024D800: nop

L_8024D804:
    // 0x8024D804: sh          $zero, 0x0($v0)
    MEM_H(0X0, ctx->r2) = 0;
    // 0x8024D808: lhu         $t9, 0x14($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X14);
    // 0x8024D80C: nop

    // 0x8024D810: andi        $t3, $t9, 0xFBFF
    ctx->r11 = ctx->r25 & 0XFBFF;
    // 0x8024D814: sh          $t3, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r11;
L_8024D818:
    // 0x8024D818: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8024D81C:
    // 0x8024D81C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8024D820: jr          $ra
    // 0x8024D824: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8024D824: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_8024B800_func_8024D828(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8024D828: lw          $t6, 0xC4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC4);
    // 0x8024D82C: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x8024D830: lhu         $t7, 0x4($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X4);
    // 0x8024D834: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x8024D838: andi        $v1, $t7, 0xC00D
    ctx->r3 = ctx->r15 & 0XC00D;
    // 0x8024D83C: beq         $v1, $zero, L_8024D854
    if (ctx->r3 == 0) {
        // 0x8024D840: andi        $t1, $v1, 0x8000
        ctx->r9 = ctx->r3 & 0X8000;
            goto L_8024D854;
    }
    // 0x8024D840: andi        $t1, $v1, 0x8000
    ctx->r9 = ctx->r3 & 0X8000;
    // 0x8024D844: lhu         $t9, 0x12($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X12);
    // 0x8024D848: nop

    // 0x8024D84C: ori         $t0, $t9, 0x4
    ctx->r8 = ctx->r25 | 0X4;
    // 0x8024D850: sh          $t0, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r8;
L_8024D854:
    // 0x8024D854: beq         $t1, $zero, L_8024D8A4
    if (ctx->r9 == 0) {
        // 0x8024D858: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_8024D8A4;
    }
    // 0x8024D858: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8024D85C: lw          $t2, 0x3B20($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X3B20);
    // 0x8024D860: nop

    // 0x8024D864: lw          $t3, 0x88($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X88);
    // 0x8024D868: nop

    // 0x8024D86C: beq         $a0, $t3, L_8024D968
    if (ctx->r4 == ctx->r11) {
        // 0x8024D870: nop
    
            goto L_8024D968;
    }
    // 0x8024D870: nop

    // 0x8024D874: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x8024D878: nop

    // 0x8024D87C: lbu         $t4, 0x868($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X868);
    // 0x8024D880: nop

    // 0x8024D884: beq         $t4, $zero, L_8024D968
    if (ctx->r12 == 0) {
        // 0x8024D888: nop
    
            goto L_8024D968;
    }
    // 0x8024D888: nop

    // 0x8024D88C: lhu         $t5, 0x8($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X8);
    // 0x8024D890: nop

    // 0x8024D894: ori         $t6, $t5, 0x4
    ctx->r14 = ctx->r13 | 0X4;
    // 0x8024D898: sh          $t6, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r14;
    // 0x8024D89C: jr          $ra
    // 0x8024D8A0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8024D8A0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8024D8A4:
    // 0x8024D8A4: lw          $a1, 0x3B20($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X3B20);
    // 0x8024D8A8: nop

    // 0x8024D8AC: lw          $t7, 0x84($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X84);
    // 0x8024D8B0: nop

    // 0x8024D8B4: bne         $a0, $t7, L_8024D918
    if (ctx->r4 != ctx->r15) {
        // 0x8024D8B8: nop
    
            goto L_8024D918;
    }
    // 0x8024D8B8: nop

    // 0x8024D8BC: lw          $t8, 0xC4($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XC4);
    // 0x8024D8C0: nop

    // 0x8024D8C4: lhu         $a1, 0x2($t8)
    ctx->r5 = MEM_HU(ctx->r24, 0X2);
    // 0x8024D8C8: nop

    // 0x8024D8CC: andi        $t9, $a1, 0x1
    ctx->r25 = ctx->r5 & 0X1;
    // 0x8024D8D0: beq         $t9, $zero, L_8024D968
    if (ctx->r25 == 0) {
        // 0x8024D8D4: andi        $t0, $a1, 0x40
        ctx->r8 = ctx->r5 & 0X40;
            goto L_8024D968;
    }
    // 0x8024D8D4: andi        $t0, $a1, 0x40
    ctx->r8 = ctx->r5 & 0X40;
    // 0x8024D8D8: beq         $t0, $zero, L_8024D968
    if (ctx->r8 == 0) {
        // 0x8024D8DC: nop
    
            goto L_8024D968;
    }
    // 0x8024D8DC: nop

    // 0x8024D8E0: lhu         $t1, 0x16($a0)
    ctx->r9 = MEM_HU(ctx->r4, 0X16);
    // 0x8024D8E4: nop

    // 0x8024D8E8: andi        $t2, $t1, 0x40
    ctx->r10 = ctx->r9 & 0X40;
    // 0x8024D8EC: bne         $t2, $zero, L_8024D968
    if (ctx->r10 != 0) {
        // 0x8024D8F0: nop
    
            goto L_8024D968;
    }
    // 0x8024D8F0: nop

    // 0x8024D8F4: lhu         $t3, 0x12($a0)
    ctx->r11 = MEM_HU(ctx->r4, 0X12);
    // 0x8024D8F8: lhu         $t5, 0x14($a0)
    ctx->r13 = MEM_HU(ctx->r4, 0X14);
    // 0x8024D8FC: ori         $v1, $v0, 0x2
    ctx->r3 = ctx->r2 | 0X2;
    // 0x8024D900: ori         $t4, $t3, 0x4
    ctx->r12 = ctx->r11 | 0X4;
    // 0x8024D904: ori         $t6, $t5, 0x100
    ctx->r14 = ctx->r13 | 0X100;
    // 0x8024D908: sh          $t4, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r12;
    // 0x8024D90C: sh          $t6, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r14;
    // 0x8024D910: jr          $ra
    // 0x8024D914: andi        $v0, $v1, 0xFFFF
    ctx->r2 = ctx->r3 & 0XFFFF;
    return;
    // 0x8024D914: andi        $v0, $v1, 0xFFFF
    ctx->r2 = ctx->r3 & 0XFFFF;
L_8024D918:
    // 0x8024D918: lw          $t8, 0x90($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X90);
    // 0x8024D91C: nop

    // 0x8024D920: bne         $a0, $t8, L_8024D968
    if (ctx->r4 != ctx->r24) {
        // 0x8024D924: nop
    
            goto L_8024D968;
    }
    // 0x8024D924: nop

    // 0x8024D928: lw          $t9, 0xC4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XC4);
    // 0x8024D92C: nop

    // 0x8024D930: lhu         $t0, 0x2($t9)
    ctx->r8 = MEM_HU(ctx->r25, 0X2);
    // 0x8024D934: nop

    // 0x8024D938: andi        $t1, $t0, 0x40
    ctx->r9 = ctx->r8 & 0X40;
    // 0x8024D93C: beq         $t1, $zero, L_8024D968
    if (ctx->r9 == 0) {
        // 0x8024D940: nop
    
            goto L_8024D968;
    }
    // 0x8024D940: nop

    // 0x8024D944: lhu         $t2, 0x12($a0)
    ctx->r10 = MEM_HU(ctx->r4, 0X12);
    // 0x8024D948: lhu         $t4, 0x14($a0)
    ctx->r12 = MEM_HU(ctx->r4, 0X14);
    // 0x8024D94C: ori         $v1, $v0, 0x2
    ctx->r3 = ctx->r2 | 0X2;
    // 0x8024D950: andi        $t6, $v1, 0xFFFF
    ctx->r14 = ctx->r3 & 0XFFFF;
    // 0x8024D954: ori         $t3, $t2, 0x4
    ctx->r11 = ctx->r10 | 0X4;
    // 0x8024D958: ori         $t5, $t4, 0x100
    ctx->r13 = ctx->r12 | 0X100;
    // 0x8024D95C: sh          $t3, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r11;
    // 0x8024D960: sh          $t5, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r13;
    // 0x8024D964: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
L_8024D968:
    // 0x8024D968: jr          $ra
    // 0x8024D96C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8024D96C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_8024B800_func_8024D970(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8024D970: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8024D974: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8024D978: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8024D97C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8024D980: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8024D984: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8024D988: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8024D98C: lbu         $t6, 0x0($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X0);
    // 0x8024D990: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x8024D994: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x8024D998: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x8024D99C: bgez        $t6, L_8024D9B4
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8024D9A0: cvt.s.w     $f12, $f4
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
            goto L_8024D9B4;
    }
    // 0x8024D9A0: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8024D9A4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8024D9A8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8024D9AC: nop

    // 0x8024D9B0: add.s       $f12, $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f6.fl;
L_8024D9B4:
    // 0x8024D9B4: jal         0x8026D720
    // 0x8024D9B8: nop

    ovl_8024B800_func_8026D720(rdram, ctx);
        goto after_0;
    // 0x8024D9B8: nop

    after_0:
    // 0x8024D9BC: blez        $v0, L_8024DB48
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8024D9C0: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_8024DB48;
    }
    // 0x8024D9C0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8024D9C4: slti        $at, $v0, 0x3C
    ctx->r1 = SIGNED(ctx->r2) < 0X3C ? 1 : 0;
    // 0x8024D9C8: beq         $at, $zero, L_8024DB48
    if (ctx->r1 == 0) {
        // 0x8024D9CC: addiu       $s4, $zero, 0xC
        ctx->r20 = ADD32(0, 0XC);
            goto L_8024DB48;
    }
    // 0x8024D9CC: addiu       $s4, $zero, 0xC
    ctx->r20 = ADD32(0, 0XC);
    // 0x8024D9D0: lui         $s3, 0x8012
    ctx->r19 = S32(0X8012 << 16);
    // 0x8024D9D4: addiu       $s3, $s3, 0x680
    ctx->r19 = ADD32(ctx->r19, 0X680);
    // 0x8024D9D8: slti        $at, $s0, 0x2
    ctx->r1 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
L_8024D9DC:
    // 0x8024D9DC: bne         $at, $zero, L_8024DB38
    if (ctx->r1 != 0) {
        // 0x8024D9E0: nop
    
            goto L_8024DB38;
    }
    // 0x8024D9E0: nop

    // 0x8024D9E4: multu       $s0, $s4
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8024D9E8: lbu         $v1, 0x0($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X0);
    // 0x8024D9EC: lbu         $t8, 0x1($s2)
    ctx->r24 = MEM_BU(ctx->r18, 0X1);
    // 0x8024D9F0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8024D9F4: subu        $t9, $v1, $t8
    ctx->r25 = SUB32(ctx->r3, ctx->r24);
    // 0x8024D9F8: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x8024D9FC: nop

    // 0x8024DA00: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8024DA04: mflo        $t7
    ctx->r15 = lo;
    // 0x8024DA08: addu        $v0, $s3, $t7
    ctx->r2 = ADD32(ctx->r19, ctx->r15);
    // 0x8024DA0C: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8024DA10: nop

    // 0x8024DA14: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x8024DA18: nop

    // 0x8024DA1C: bc1t        L_8024DB48
    if (c1cs) {
        // 0x8024DA20: nop
    
            goto L_8024DB48;
    }
    // 0x8024DA20: nop

    // 0x8024DA24: mtc1        $v1, $f16
    ctx->f16.u32l = ctx->r3;
    // 0x8024DA28: bgez        $v1, L_8024DA3C
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8024DA2C: cvt.s.w     $f18, $f16
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
            goto L_8024DA3C;
    }
    // 0x8024DA2C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8024DA30: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8024DA34: nop

    // 0x8024DA38: add.s       $f18, $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f4.fl;
L_8024DA3C:
    // 0x8024DA3C: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x8024DA40: nop

    // 0x8024DA44: bc1t        L_8024DB48
    if (c1cs) {
        // 0x8024DA48: nop
    
            goto L_8024DB48;
    }
    // 0x8024DA48: nop

    // 0x8024DA4C: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x8024DA50: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8024DA54: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x8024DA58: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8024DA5C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8024DA60: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8024DA64: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8024DA68: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x8024DA6C: mfc1        $t1, $f8
    ctx->r9 = (int32_t)ctx->f8.u32l;
    // 0x8024DA70: nop

    // 0x8024DA74: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8024DA78: sh          $t1, 0x2E($s1)
    MEM_H(0X2E, ctx->r17) = ctx->r9;
    // 0x8024DA7C: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x8024DA80: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8024DA84: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8024DA88: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8024DA8C: nop

    // 0x8024DA90: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8024DA94: mfc1        $t3, $f16
    ctx->r11 = (int32_t)ctx->f16.u32l;
    // 0x8024DA98: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x8024DA9C: jal         0x8026BC5C
    // 0x8024DAA0: sh          $t3, 0x30($s1)
    MEM_H(0X30, ctx->r17) = ctx->r11;
    ovl_8024B800_func_8026BC5C(rdram, ctx);
        goto after_1;
    // 0x8024DAA0: sh          $t3, 0x30($s1)
    MEM_H(0X30, ctx->r17) = ctx->r11;
    after_1:
    // 0x8024DAA4: jal         0x8026BD38
    // 0x8024DAA8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_8024B800_func_8026BD38(rdram, ctx);
        goto after_2;
    // 0x8024DAA8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
    // 0x8024DAAC: lbu         $t4, 0x2($s2)
    ctx->r12 = MEM_BU(ctx->r18, 0X2);
    // 0x8024DAB0: lwc1        $f4, 0xB4($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0XB4);
    // 0x8024DAB4: mtc1        $t4, $f18
    ctx->f18.u32l = ctx->r12;
    // 0x8024DAB8: bgez        $t4, L_8024DAD0
    if (SIGNED(ctx->r12) >= 0) {
        // 0x8024DABC: cvt.s.w     $f6, $f18
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
            goto L_8024DAD0;
    }
    // 0x8024DABC: cvt.s.w     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8024DAC0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8024DAC4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8024DAC8: nop

    // 0x8024DACC: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_8024DAD0:
    // 0x8024DAD0: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x8024DAD4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8024DAD8: bc1f        L_8024DB00
    if (!c1cs) {
        // 0x8024DADC: nop
    
            goto L_8024DB00;
    }
    // 0x8024DADC: nop

    // 0x8024DAE0: lbu         $t5, 0x3($s2)
    ctx->r13 = MEM_BU(ctx->r18, 0X3);
    // 0x8024DAE4: nop

    // 0x8024DAE8: sltu        $at, $s0, $t5
    ctx->r1 = ctx->r16 < ctx->r13 ? 1 : 0;
    // 0x8024DAEC: beq         $at, $zero, L_8024DB00
    if (ctx->r1 == 0) {
        // 0x8024DAF0: nop
    
            goto L_8024DB00;
    }
    // 0x8024DAF0: nop

    // 0x8024DAF4: lbu         $v0, 0x4($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X4);
    // 0x8024DAF8: b           L_8024DB50
    // 0x8024DAFC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_8024DB50;
    // 0x8024DAFC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_8024DB00:
    // 0x8024DB00: jal         0x80274DD4
    // 0x8024DB04: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_8024B800_func_80274DD4(rdram, ctx);
        goto after_3;
    // 0x8024DB04: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_3:
    // 0x8024DB08: lwc1        $f10, 0xB4($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0XB4);
    // 0x8024DB0C: nop

    // 0x8024DB10: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x8024DB14: nop

    // 0x8024DB18: bc1f        L_8024DB3C
    if (!c1cs) {
        // 0x8024DB1C: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_8024DB3C;
    }
    // 0x8024DB1C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8024DB20: lbu         $v0, 0x4($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X4);
    // 0x8024DB24: nop

    // 0x8024DB28: ori         $t6, $v0, 0x8000
    ctx->r14 = ctx->r2 | 0X8000;
    // 0x8024DB2C: sll         $t7, $t6, 16
    ctx->r15 = S32(ctx->r14 << 16);
    // 0x8024DB30: b           L_8024DB4C
    // 0x8024DB34: sra         $v0, $t7, 16
    ctx->r2 = S32(SIGNED(ctx->r15) >> 16);
        goto L_8024DB4C;
    // 0x8024DB34: sra         $v0, $t7, 16
    ctx->r2 = S32(SIGNED(ctx->r15) >> 16);
L_8024DB38:
    // 0x8024DB38: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_8024DB3C:
    // 0x8024DB3C: slti        $at, $s0, 0x3C
    ctx->r1 = SIGNED(ctx->r16) < 0X3C ? 1 : 0;
    // 0x8024DB40: bne         $at, $zero, L_8024D9DC
    if (ctx->r1 != 0) {
        // 0x8024DB44: slti        $at, $s0, 0x2
        ctx->r1 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
            goto L_8024D9DC;
    }
    // 0x8024DB44: slti        $at, $s0, 0x2
    ctx->r1 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
L_8024DB48:
    // 0x8024DB48: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8024DB4C:
    // 0x8024DB4C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_8024DB50:
    // 0x8024DB50: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8024DB54: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8024DB58: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8024DB5C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8024DB60: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8024DB64: jr          $ra
    // 0x8024DB68: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8024DB68: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_8024B800_func_8024DB6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8024DB6C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8024DB70: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x8024DB74: lw          $t6, 0x3B20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B20);
    // 0x8024DB78: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8024DB7C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8024DB80: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x8024DB84: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8024DB88: lwc1        $f6, 0x4($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X4);
    // 0x8024DB8C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8024DB90: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x8024DB94: nop

    // 0x8024DB98: bc1f        L_8024DBA8
    if (!c1cs) {
        // 0x8024DB9C: nop
    
            goto L_8024DBA8;
    }
    // 0x8024DB9C: nop

    // 0x8024DBA0: b           L_8024DE24
    // 0x8024DBA4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8024DE24;
    // 0x8024DBA4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8024DBA8:
    // 0x8024DBA8: lwc1        $f12, 0x44($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X44);
    // 0x8024DBAC: jal         0x80272AEC
    // 0x8024DBB0: nop

    ovl_8024B800_func_80272AEC(rdram, ctx);
        goto after_0;
    // 0x8024DBB0: nop

    after_0:
    // 0x8024DBB4: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x8024DBB8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8024DBBC: nop

    // 0x8024DBC0: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x8024DBC4: nop

    // 0x8024DBC8: bc1f        L_8024DBD8
    if (!c1cs) {
        // 0x8024DBCC: nop
    
            goto L_8024DBD8;
    }
    // 0x8024DBCC: nop

    // 0x8024DBD0: b           L_8024DE24
    // 0x8024DBD4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8024DE24;
    // 0x8024DBD4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8024DBD8:
    // 0x8024DBD8: lhu         $t7, 0x36($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X36);
    // 0x8024DBDC: nop

    // 0x8024DBE0: andi        $t8, $t7, 0x8
    ctx->r24 = ctx->r15 & 0X8;
    // 0x8024DBE4: beq         $t8, $zero, L_8024DE24
    if (ctx->r24 == 0) {
        // 0x8024DBE8: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8024DE24;
    }
    // 0x8024DBE8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8024DBEC: lw          $t9, 0xC8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC8);
    // 0x8024DBF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8024DBF4: lw          $t0, 0x24($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X24);
    // 0x8024DBF8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8024DBFC: lh          $t1, 0x8B8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X8B8);
    // 0x8024DC00: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    // 0x8024DC04: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
    // 0x8024DC08: nop

    // 0x8024DC0C: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8024DC10: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x8024DC14: jal         0x80272B98
    // 0x8024DC18: nop

    ovl_8024B800_func_80272B98(rdram, ctx);
        goto after_1;
    // 0x8024DC18: nop

    after_1:
    // 0x8024DC1C: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x8024DC20: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8024DC24: lwc1        $f16, 0x3C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8024DC28: lwc1        $f14, 0x38($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8024DC2C: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x8024DC30: nop

    // 0x8024DC34: bc1f        L_8024DE24
    if (!c1cs) {
        // 0x8024DC38: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8024DE24;
    }
    // 0x8024DC38: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8024DC3C: lwc1        $f12, 0x8C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x8024DC40: jal         0x80279308
    // 0x8024DC44: nop

    ovl_8024B800_func_80279308(rdram, ctx);
        goto after_2;
    // 0x8024DC44: nop

    after_2:
    // 0x8024DC48: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8024DC4C: lwc1        $f7, -0x40E8($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X40E8);
    // 0x8024DC50: lwc1        $f6, -0x40E4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X40E4);
    // 0x8024DC54: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x8024DC58: c.lt.d      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.d < ctx->f6.d;
    // 0x8024DC5C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8024DC60: bc1f        L_8024DE20
    if (!c1cs) {
        // 0x8024DC64: nop
    
            goto L_8024DE20;
    }
    // 0x8024DC64: nop

    // 0x8024DC68: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x8024DC6C: lwc1        $f10, 0x44($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X44);
    // 0x8024DC70: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8024DC74: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x8024DC78: sub.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8024DC7C: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x8024DC80: nop

    // 0x8024DC84: bc1f        L_8024DC90
    if (!c1cs) {
        // 0x8024DC88: nop
    
            goto L_8024DC90;
    }
    // 0x8024DC88: nop

    // 0x8024DC8C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_8024DC90:
    // 0x8024DC90: lwc1        $f2, 0x14($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X14);
    // 0x8024DC94: nop

    // 0x8024DC98: c.eq.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl == ctx->f2.fl;
    // 0x8024DC9C: nop

    // 0x8024DCA0: bc1t        L_8024DE20
    if (c1cs) {
        // 0x8024DCA4: nop
    
            goto L_8024DE20;
    }
    // 0x8024DCA4: nop

    // 0x8024DCA8: div.s       $f16, $f0, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = DIV_S(ctx->f0.fl, ctx->f2.fl);
    // 0x8024DCAC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8024DCB0: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x8024DCB4: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8024DCB8: addiu       $t4, $t4, 0x680
    ctx->r12 = ADD32(ctx->r12, 0X680);
    // 0x8024DCBC: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8024DCC0: ctc1        $v1, $FpcCsr
    set_cop1_cs(ctx->r3);
    // 0x8024DCC4: nop

    // 0x8024DCC8: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x8024DCCC: cfc1        $v1, $FpcCsr
    ctx->r3 = get_cop1_cs();
    // 0x8024DCD0: nop

    // 0x8024DCD4: andi        $v1, $v1, 0x78
    ctx->r3 = ctx->r3 & 0X78;
    // 0x8024DCD8: beq         $v1, $zero, L_8024DD24
    if (ctx->r3 == 0) {
        // 0x8024DCDC: nop
    
            goto L_8024DD24;
    }
    // 0x8024DCDC: nop

    // 0x8024DCE0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8024DCE4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8024DCE8: sub.s       $f18, $f16, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x8024DCEC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8024DCF0: ctc1        $v1, $FpcCsr
    set_cop1_cs(ctx->r3);
    // 0x8024DCF4: nop

    // 0x8024DCF8: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8024DCFC: cfc1        $v1, $FpcCsr
    ctx->r3 = get_cop1_cs();
    // 0x8024DD00: nop

    // 0x8024DD04: andi        $v1, $v1, 0x78
    ctx->r3 = ctx->r3 & 0X78;
    // 0x8024DD08: bne         $v1, $zero, L_8024DD1C
    if (ctx->r3 != 0) {
        // 0x8024DD0C: nop
    
            goto L_8024DD1C;
    }
    // 0x8024DD0C: nop

    // 0x8024DD10: mfc1        $v1, $f18
    ctx->r3 = (int32_t)ctx->f18.u32l;
    // 0x8024DD14: b           L_8024DD34
    // 0x8024DD18: or          $v1, $v1, $at
    ctx->r3 = ctx->r3 | ctx->r1;
        goto L_8024DD34;
    // 0x8024DD18: or          $v1, $v1, $at
    ctx->r3 = ctx->r3 | ctx->r1;
L_8024DD1C:
    // 0x8024DD1C: b           L_8024DD34
    // 0x8024DD20: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
        goto L_8024DD34;
    // 0x8024DD20: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
L_8024DD24:
    // 0x8024DD24: mfc1        $v1, $f18
    ctx->r3 = (int32_t)ctx->f18.u32l;
    // 0x8024DD28: nop

    // 0x8024DD2C: bltz        $v1, L_8024DD1C
    if (SIGNED(ctx->r3) < 0) {
        // 0x8024DD30: nop
    
            goto L_8024DD1C;
    }
    // 0x8024DD30: nop

L_8024DD34:
    // 0x8024DD34: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x8024DD38: sltiu       $at, $v1, 0x14
    ctx->r1 = ctx->r3 < 0X14 ? 1 : 0;
    // 0x8024DD3C: beq         $at, $zero, L_8024DE20
    if (ctx->r1 == 0) {
        // 0x8024DD40: sll         $t3, $v1, 2
        ctx->r11 = S32(ctx->r3 << 2);
            goto L_8024DE20;
    }
    // 0x8024DD40: sll         $t3, $v1, 2
    ctx->r11 = S32(ctx->r3 << 2);
    // 0x8024DD44: subu        $t3, $t3, $v1
    ctx->r11 = SUB32(ctx->r11, ctx->r3);
    // 0x8024DD48: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8024DD4C: addu        $v0, $t3, $t4
    ctx->r2 = ADD32(ctx->r11, ctx->r12);
    // 0x8024DD50: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x8024DD54: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8024DD58: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8024DD5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8024DD60: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x8024DD64: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    // 0x8024DD68: bc1f        L_8024DE20
    if (!c1cs) {
        // 0x8024DD6C: nop
    
            goto L_8024DE20;
    }
    // 0x8024DD6C: nop

    // 0x8024DD70: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x8024DD74: lw          $a2, 0x0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X0);
    // 0x8024DD78: jal         0x80272B98
    // 0x8024DD7C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    ovl_8024B800_func_80272B98(rdram, ctx);
        goto after_3;
    // 0x8024DD7C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_3:
    // 0x8024DD80: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8024DD84: lwc1        $f14, 0x30($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8024DD88: jal         0x80279308
    // 0x8024DD8C: nop

    ovl_8024B800_func_80279308(rdram, ctx);
        goto after_4;
    // 0x8024DD8C: nop

    after_4:
    // 0x8024DD90: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8024DD94: lwc1        $f11, -0x40E0($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X40E0);
    // 0x8024DD98: lwc1        $f10, -0x40DC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X40DC);
    // 0x8024DD9C: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x8024DDA0: c.lt.d      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.d < ctx->f10.d;
    // 0x8024DDA4: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x8024DDA8: bc1f        L_8024DE20
    if (!c1cs) {
        // 0x8024DDAC: nop
    
            goto L_8024DE20;
    }
    // 0x8024DDAC: nop

    // 0x8024DDB0: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8024DDB4: lwc1        $f16, 0x8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8024DDB8: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x8024DDBC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8024DDC0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8024DDC4: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x8024DDC8: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x8024DDCC: addiu       $t0, $t0, 0x6D4
    ctx->r8 = ADD32(ctx->r8, 0X6D4);
    // 0x8024DDD0: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8024DDD4: mfc1        $t6, $f18
    ctx->r14 = (int32_t)ctx->f18.u32l;
    // 0x8024DDD8: addiu       $t9, $zero, 0x2A
    ctx->r25 = ADD32(0, 0X2A);
    // 0x8024DDDC: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8024DDE0: sh          $t6, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r14;
    // 0x8024DDE4: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x8024DDE8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8024DDEC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8024DDF0: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8024DDF4: sltu        $at, $v0, $t0
    ctx->r1 = ctx->r2 < ctx->r8 ? 1 : 0;
    // 0x8024DDF8: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8024DDFC: sb          $t9, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r25;
    // 0x8024DE00: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x8024DE04: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8024DE08: beq         $at, $zero, L_8024DE18
    if (ctx->r1 == 0) {
        // 0x8024DE0C: sh          $t8, 0x30($s0)
        MEM_H(0X30, ctx->r16) = ctx->r24;
            goto L_8024DE18;
    }
    // 0x8024DE0C: sh          $t8, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r24;
    // 0x8024DE10: b           L_8024DE24
    // 0x8024DE14: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
        goto L_8024DE24;
    // 0x8024DE14: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
L_8024DE18:
    // 0x8024DE18: b           L_8024DE24
    // 0x8024DE1C: addiu       $v0, $zero, -0x7FF9
    ctx->r2 = ADD32(0, -0X7FF9);
        goto L_8024DE24;
    // 0x8024DE1C: addiu       $v0, $zero, -0x7FF9
    ctx->r2 = ADD32(0, -0X7FF9);
L_8024DE20:
    // 0x8024DE20: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8024DE24:
    // 0x8024DE24: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8024DE28: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8024DE2C: jr          $ra
    // 0x8024DE30: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x8024DE30: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_8024B800_func_8024DE34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8024DE34: slti        $at, $a0, 0x2
    ctx->r1 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
    // 0x8024DE38: bne         $at, $zero, L_8024DF44
    if (ctx->r1 != 0) {
        // 0x8024DE3C: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8024DF44;
    }
    // 0x8024DE3C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8024DE40: addiu       $a2, $a0, -0x1
    ctx->r6 = ADD32(ctx->r4, -0X1);
    // 0x8024DE44: andi        $t6, $a2, 0x3
    ctx->r14 = ctx->r6 & 0X3;
    // 0x8024DE48: beq         $t6, $zero, L_8024DE9C
    if (ctx->r14 == 0) {
        // 0x8024DE4C: addiu       $a1, $t6, 0x1
        ctx->r5 = ADD32(ctx->r14, 0X1);
            goto L_8024DE9C;
    }
    // 0x8024DE4C: addiu       $a1, $t6, 0x1
    ctx->r5 = ADD32(ctx->r14, 0X1);
    // 0x8024DE50: sll         $t7, $v1, 2
    ctx->r15 = S32(ctx->r3 << 2);
    // 0x8024DE54: subu        $t7, $t7, $v1
    ctx->r15 = SUB32(ctx->r15, ctx->r3);
    // 0x8024DE58: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x8024DE5C: addiu       $t8, $t8, 0x680
    ctx->r24 = ADD32(ctx->r24, 0X680);
    // 0x8024DE60: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8024DE64: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
L_8024DE68:
    // 0x8024DE68: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8024DE6C: lwc1        $f6, -0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, -0X8);
    // 0x8024DE70: nop

    // 0x8024DE74: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x8024DE78: nop

    // 0x8024DE7C: bc1f        L_8024DE8C
    if (!c1cs) {
        // 0x8024DE80: nop
    
            goto L_8024DE8C;
    }
    // 0x8024DE80: nop

    // 0x8024DE84: jr          $ra
    // 0x8024DE88: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8024DE88: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8024DE8C:
    // 0x8024DE8C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8024DE90: bne         $a1, $v1, L_8024DE68
    if (ctx->r5 != ctx->r3) {
        // 0x8024DE94: addiu       $v0, $v0, 0xC
        ctx->r2 = ADD32(ctx->r2, 0XC);
            goto L_8024DE68;
    }
    // 0x8024DE94: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
    // 0x8024DE98: beq         $v1, $a0, L_8024DF44
    if (ctx->r3 == ctx->r4) {
        // 0x8024DE9C: sll         $t9, $v1, 2
        ctx->r25 = S32(ctx->r3 << 2);
            goto L_8024DF44;
    }
L_8024DE9C:
    // 0x8024DE9C: sll         $t9, $v1, 2
    ctx->r25 = S32(ctx->r3 << 2);
    // 0x8024DEA0: subu        $t9, $t9, $v1
    ctx->r25 = SUB32(ctx->r25, ctx->r3);
    // 0x8024DEA4: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x8024DEA8: addiu       $t0, $t0, 0x680
    ctx->r8 = ADD32(ctx->r8, 0X680);
    // 0x8024DEAC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8024DEB0: addu        $v0, $t9, $t0
    ctx->r2 = ADD32(ctx->r25, ctx->r8);
L_8024DEB4:
    // 0x8024DEB4: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8024DEB8: lwc1        $f8, -0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, -0X8);
    // 0x8024DEBC: nop

    // 0x8024DEC0: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x8024DEC4: nop

    // 0x8024DEC8: bc1f        L_8024DED8
    if (!c1cs) {
        // 0x8024DECC: nop
    
            goto L_8024DED8;
    }
    // 0x8024DECC: nop

    // 0x8024DED0: jr          $ra
    // 0x8024DED4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8024DED4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8024DED8:
    // 0x8024DED8: lwc1        $f2, 0x10($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8024DEDC: nop

    // 0x8024DEE0: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x8024DEE4: nop

    // 0x8024DEE8: bc1f        L_8024DEF8
    if (!c1cs) {
        // 0x8024DEEC: nop
    
            goto L_8024DEF8;
    }
    // 0x8024DEEC: nop

    // 0x8024DEF0: jr          $ra
    // 0x8024DEF4: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    return;
    // 0x8024DEF4: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
L_8024DEF8:
    // 0x8024DEF8: lwc1        $f0, 0x1C($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x8024DEFC: nop

    // 0x8024DF00: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x8024DF04: nop

    // 0x8024DF08: bc1f        L_8024DF18
    if (!c1cs) {
        // 0x8024DF0C: nop
    
            goto L_8024DF18;
    }
    // 0x8024DF0C: nop

    // 0x8024DF10: jr          $ra
    // 0x8024DF14: addiu       $v0, $v1, 0x2
    ctx->r2 = ADD32(ctx->r3, 0X2);
    return;
    // 0x8024DF14: addiu       $v0, $v1, 0x2
    ctx->r2 = ADD32(ctx->r3, 0X2);
L_8024DF18:
    // 0x8024DF18: lwc1        $f10, 0x28($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X28);
    // 0x8024DF1C: nop

    // 0x8024DF20: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x8024DF24: nop

    // 0x8024DF28: bc1f        L_8024DF38
    if (!c1cs) {
        // 0x8024DF2C: nop
    
            goto L_8024DF38;
    }
    // 0x8024DF2C: nop

    // 0x8024DF30: jr          $ra
    // 0x8024DF34: addiu       $v0, $v1, 0x3
    ctx->r2 = ADD32(ctx->r3, 0X3);
    return;
    // 0x8024DF34: addiu       $v0, $v1, 0x3
    ctx->r2 = ADD32(ctx->r3, 0X3);
L_8024DF38:
    // 0x8024DF38: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8024DF3C: bne         $v1, $a0, L_8024DEB4
    if (ctx->r3 != ctx->r4) {
        // 0x8024DF40: addiu       $v0, $v0, 0x30
        ctx->r2 = ADD32(ctx->r2, 0X30);
            goto L_8024DEB4;
    }
    // 0x8024DF40: addiu       $v0, $v0, 0x30
    ctx->r2 = ADD32(ctx->r2, 0X30);
L_8024DF44:
    // 0x8024DF44: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8024DF48: jr          $ra
    // 0x8024DF4C: nop

    return;
    // 0x8024DF4C: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8024DF50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8024DF50: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x8024DF54: lui         $at, 0x41A4
    ctx->r1 = S32(0X41A4 << 16);
    // 0x8024DF58: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x8024DF5C: sw          $s1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r17;
    // 0x8024DF60: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8024DF64: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x8024DF68: sw          $s7, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r23;
    // 0x8024DF6C: sw          $s6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r22;
    // 0x8024DF70: sw          $s5, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r21;
    // 0x8024DF74: sw          $s4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r20;
    // 0x8024DF78: sw          $s3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r19;
    // 0x8024DF7C: sw          $s2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r18;
    // 0x8024DF80: sw          $s0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r16;
    // 0x8024DF84: swc1        $f31, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x8024DF88: swc1        $f30, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f30.u32l;
    // 0x8024DF8C: swc1        $f29, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x8024DF90: swc1        $f28, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f28.u32l;
    // 0x8024DF94: swc1        $f27, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x8024DF98: swc1        $f26, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f26.u32l;
    // 0x8024DF9C: swc1        $f25, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x8024DFA0: swc1        $f24, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f24.u32l;
    // 0x8024DFA4: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8024DFA8: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x8024DFAC: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8024DFB0: jal         0x8026D720
    // 0x8024DFB4: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    ovl_8024B800_func_8026D720(rdram, ctx);
        goto after_0;
    // 0x8024DFB4: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x8024DFB8: bgez        $v0, L_8024DFC8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8024DFBC: or          $s5, $v0, $zero
        ctx->r21 = ctx->r2 | 0;
            goto L_8024DFC8;
    }
    // 0x8024DFBC: or          $s5, $v0, $zero
    ctx->r21 = ctx->r2 | 0;
    // 0x8024DFC0: b           L_8024E224
    // 0x8024DFC4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8024E224;
    // 0x8024DFC4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8024DFC8:
    // 0x8024DFC8: jal         0x8024DE34
    // 0x8024DFCC: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    ovl_8024B800_func_8024DE34(rdram, ctx);
        goto after_1;
    // 0x8024DFCC: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_1:
    // 0x8024DFD0: addiu       $s7, $zero, 0xC
    ctx->r23 = ADD32(0, 0XC);
    // 0x8024DFD4: multu       $v0, $s7
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r23)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8024DFD8: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8024DFDC: lwc1        $f4, 0x90($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X90);
    // 0x8024DFE0: lwc1        $f31, -0x40D8($at)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r1, -0X40D8);
    // 0x8024DFE4: lwc1        $f30, -0x40D4($at)
    ctx->f30.u32l = MEM_W(ctx->r1, -0X40D4);
    // 0x8024DFE8: lui         $s6, 0x8012
    ctx->r22 = S32(0X8012 << 16);
    // 0x8024DFEC: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8024DFF0: add.d       $f8, $f6, $f30
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f30.d); 
    ctx->f8.d = ctx->f6.d + ctx->f30.d;
    // 0x8024DFF4: addiu       $s6, $s6, 0x680
    ctx->r22 = ADD32(ctx->r22, 0X680);
    // 0x8024DFF8: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    // 0x8024DFFC: mflo        $t6
    ctx->r14 = lo;
    // 0x8024E000: addu        $t7, $s6, $t6
    ctx->r15 = ADD32(ctx->r22, ctx->r14);
    // 0x8024E004: lwc1        $f10, 0x4($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X4);
    // 0x8024E008: nop

    // 0x8024E00C: c.lt.s      $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f10.fl < ctx->f12.fl;
    // 0x8024E010: nop

    // 0x8024E014: bc1f        L_8024E024
    if (!c1cs) {
        // 0x8024E018: nop
    
            goto L_8024E024;
    }
    // 0x8024E018: nop

    // 0x8024E01C: b           L_8024E03C
    // 0x8024E020: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_8024E03C;
    // 0x8024E020: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_8024E024:
    // 0x8024E024: jal         0x8026D720
    // 0x8024E028: nop

    ovl_8024B800_func_8026D720(rdram, ctx);
        goto after_2;
    // 0x8024E028: nop

    after_2:
    // 0x8024E02C: bgez        $v0, L_8024E03C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8024E030: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_8024E03C;
    }
    // 0x8024E030: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8024E034: b           L_8024E224
    // 0x8024E038: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8024E224;
    // 0x8024E038: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8024E03C:
    // 0x8024E03C: slt         $at, $v1, $s5
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r21) ? 1 : 0;
    // 0x8024E040: beq         $at, $zero, L_8024E220
    if (ctx->r1 == 0) {
        // 0x8024E044: or          $s2, $v1, $zero
        ctx->r18 = ctx->r3 | 0;
            goto L_8024E220;
    }
    // 0x8024E044: or          $s2, $v1, $zero
    ctx->r18 = ctx->r3 | 0;
    // 0x8024E048: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8024E04C: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x8024E050: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8024E054: lwc1        $f27, -0x40D0($at)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r1, -0X40D0);
    // 0x8024E058: lwc1        $f26, -0x40CC($at)
    ctx->f26.u32l = MEM_W(ctx->r1, -0X40CC);
    // 0x8024E05C: sll         $t8, $v1, 2
    ctx->r24 = S32(ctx->r3 << 2);
    // 0x8024E060: subu        $t8, $t8, $v1
    ctx->r24 = SUB32(ctx->r24, ctx->r3);
    // 0x8024E064: lui         $at, 0x3FD4
    ctx->r1 = S32(0X3FD4 << 16);
    // 0x8024E068: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8024E06C: lui         $s4, 0x8009
    ctx->r20 = S32(0X8009 << 16);
    // 0x8024E070: mtc1        $at, $f25
    ctx->f_odd[(25 - 1) * 2] = ctx->r1;
    // 0x8024E074: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x8024E078: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x8024E07C: addiu       $s4, $s4, 0x3B20
    ctx->r20 = ADD32(ctx->r20, 0X3B20);
    // 0x8024E080: addu        $s3, $s6, $t8
    ctx->r19 = ADD32(ctx->r22, ctx->r24);
L_8024E084:
    // 0x8024E084: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8024E088: lwc1        $f16, 0x8($s3)
    ctx->f16.u32l = MEM_W(ctx->r19, 0X8);
    // 0x8024E08C: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x8024E090: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8024E094: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8024E098: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
    // 0x8024E09C: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x8024E0A0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8024E0A4: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8024E0A8: mfc1        $t0, $f18
    ctx->r8 = (int32_t)ctx->f18.u32l;
    // 0x8024E0AC: nop

    // 0x8024E0B0: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x8024E0B4: sh          $t0, 0x2E($s1)
    MEM_H(0X2E, ctx->r17) = ctx->r8;
    // 0x8024E0B8: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x8024E0BC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8024E0C0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8024E0C4: lwc1        $f4, 0x0($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0X0);
    // 0x8024E0C8: nop

    // 0x8024E0CC: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8024E0D0: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x8024E0D4: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x8024E0D8: jal         0x8026BC5C
    // 0x8024E0DC: sh          $t2, 0x30($s1)
    MEM_H(0X30, ctx->r17) = ctx->r10;
    ovl_8024B800_func_8026BC5C(rdram, ctx);
        goto after_3;
    // 0x8024E0DC: sh          $t2, 0x30($s1)
    MEM_H(0X30, ctx->r17) = ctx->r10;
    after_3:
    // 0x8024E0E0: beq         $v0, $zero, L_8024E0F8
    if (ctx->r2 == 0) {
        // 0x8024E0E4: nop
    
            goto L_8024E0F8;
    }
    // 0x8024E0E4: nop

    // 0x8024E0E8: lw          $t3, 0x0($s4)
    ctx->r11 = MEM_W(ctx->r20, 0X0);
    // 0x8024E0EC: nop

    // 0x8024E0F0: lh          $s0, 0xD6($t3)
    ctx->r16 = MEM_H(ctx->r11, 0XD6);
    // 0x8024E0F4: nop

L_8024E0F8:
    // 0x8024E0F8: jal         0x8026BD38
    // 0x8024E0FC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_8024B800_func_8026BD38(rdram, ctx);
        goto after_4;
    // 0x8024E0FC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_4:
    // 0x8024E100: multu       $s0, $s7
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r23)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8024E104: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8024E108: mflo        $t4
    ctx->r12 = lo;
    // 0x8024E10C: addu        $t5, $s6, $t4
    ctx->r13 = ADD32(ctx->r22, ctx->r12);
    // 0x8024E110: lwc1        $f8, 0x4($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0X4);
    // 0x8024E114: nop

    // 0x8024E118: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x8024E11C: sub.d       $f16, $f10, $f30
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f30.d); 
    ctx->f16.d = ctx->f10.d - ctx->f30.d;
    // 0x8024E120: cvt.s.d     $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f0.fl = CVT_S_D(ctx->f16.d);
    // 0x8024E124: c.lt.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
    // 0x8024E128: nop

    // 0x8024E12C: bc1f        L_8024E15C
    if (!c1cs) {
        // 0x8024E130: nop
    
            goto L_8024E15C;
    }
    // 0x8024E130: nop

    // 0x8024E134: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8024E138: nop

    // 0x8024E13C: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x8024E140: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8024E144: nop

    // 0x8024E148: div.d       $f8, $f6, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f24.d); 
    ctx->f8.d = DIV_D(ctx->f6.d, ctx->f24.d);
    // 0x8024E14C: jal         0x8007FA40
    // 0x8024E150: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    func_8007FA40(rdram, ctx);
        goto after_5;
    // 0x8024E150: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    after_5:
    // 0x8024E154: b           L_8024E160
    // 0x8024E158: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
        goto L_8024E160;
    // 0x8024E158: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_8024E15C:
    // 0x8024E15C: mov.s       $f2, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    ctx->f2.fl = ctx->f22.fl;
L_8024E160:
    // 0x8024E160: cvt.d.s     $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f16.d = CVT_D_S(ctx->f2.fl);
    // 0x8024E164: mul.d       $f18, $f16, $f26
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f26.d); 
    ctx->f18.d = MUL_D(ctx->f16.d, ctx->f26.d);
    // 0x8024E168: lwc1        $f10, 0xB4($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0XB4);
    // 0x8024E16C: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x8024E170: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x8024E174: sub.s       $f20, $f10, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x8024E178: c.lt.s      $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f20.fl < ctx->f22.fl;
    // 0x8024E17C: nop

    // 0x8024E180: bc1f        L_8024E1C0
    if (!c1cs) {
        // 0x8024E184: nop
    
            goto L_8024E1C0;
    }
    // 0x8024E184: nop

    // 0x8024E188: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8024E18C: mtc1        $s0, $f6
    ctx->f6.u32l = ctx->r16;
    // 0x8024E190: add.s       $f18, $f2, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f2.fl + ctx->f16.fl;
    // 0x8024E194: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8024E198: add.s       $f10, $f18, $f28
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f28.fl;
    // 0x8024E19C: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x8024E1A0: nop

    // 0x8024E1A4: bc1f        L_8024E1C0
    if (!c1cs) {
        // 0x8024E1A8: lui         $t6, 0x8010
        ctx->r14 = S32(0X8010 << 16);
            goto L_8024E1C0;
    }
    // 0x8024E1A8: lui         $t6, 0x8010
    ctx->r14 = S32(0X8010 << 16);
    // 0x8024E1AC: lhu         $t6, 0x522A($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X522A);
    // 0x8024E1B0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8024E1B4: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x8024E1B8: b           L_8024E224
    // 0x8024E1BC: sh          $t6, 0xB3E($at)
    MEM_H(0XB3E, ctx->r1) = ctx->r14;
        goto L_8024E224;
    // 0x8024E1BC: sh          $t6, 0xB3E($at)
    MEM_H(0XB3E, ctx->r1) = ctx->r14;
L_8024E1C0:
    // 0x8024E1C0: mtc1        $s0, $f4
    ctx->f4.u32l = ctx->r16;
    // 0x8024E1C4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8024E1C8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8024E1CC: sub.s       $f16, $f6, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f2.fl;
    // 0x8024E1D0: sub.s       $f18, $f16, $f28
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f28.fl;
    // 0x8024E1D4: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8024E1D8: nop

    // 0x8024E1DC: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x8024E1E0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8024E1E4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8024E1E8: nop

    // 0x8024E1EC: cvt.w.s     $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    ctx->f8.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8024E1F0: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x8024E1F4: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8024E1F8: jal         0x80274DD4
    // 0x8024E1FC: nop

    ovl_8024B800_func_80274DD4(rdram, ctx);
        goto after_6;
    // 0x8024E1FC: nop

    after_6:
    // 0x8024E200: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x8024E204: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8024E208: bc1f        L_8024E218
    if (!c1cs) {
        // 0x8024E20C: ori         $at, $zero, 0x8000
        ctx->r1 = 0 | 0X8000;
            goto L_8024E218;
    }
    // 0x8024E20C: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
    // 0x8024E210: b           L_8024E224
    // 0x8024E214: addu        $v0, $s0, $at
    ctx->r2 = ADD32(ctx->r16, ctx->r1);
        goto L_8024E224;
    // 0x8024E214: addu        $v0, $s0, $at
    ctx->r2 = ADD32(ctx->r16, ctx->r1);
L_8024E218:
    // 0x8024E218: bne         $s2, $s5, L_8024E084
    if (ctx->r18 != ctx->r21) {
        // 0x8024E21C: addiu       $s3, $s3, 0xC
        ctx->r19 = ADD32(ctx->r19, 0XC);
            goto L_8024E084;
    }
    // 0x8024E21C: addiu       $s3, $s3, 0xC
    ctx->r19 = ADD32(ctx->r19, 0XC);
L_8024E220:
    // 0x8024E220: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8024E224:
    // 0x8024E224: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x8024E228: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x8024E22C: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8024E230: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8024E234: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8024E238: lwc1        $f25, 0x20($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x8024E23C: lwc1        $f24, 0x24($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8024E240: lwc1        $f27, 0x28($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x8024E244: lwc1        $f26, 0x2C($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8024E248: lwc1        $f29, 0x30($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x8024E24C: lwc1        $f28, 0x34($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8024E250: lwc1        $f31, 0x38($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x8024E254: lwc1        $f30, 0x3C($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8024E258: lw          $s0, 0x44($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X44);
    // 0x8024E25C: lw          $s1, 0x48($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X48);
    // 0x8024E260: lw          $s2, 0x4C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X4C);
    // 0x8024E264: lw          $s3, 0x50($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X50);
    // 0x8024E268: lw          $s4, 0x54($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X54);
    // 0x8024E26C: lw          $s5, 0x58($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X58);
    // 0x8024E270: lw          $s6, 0x5C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X5C);
    // 0x8024E274: lw          $s7, 0x60($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X60);
    // 0x8024E278: jr          $ra
    // 0x8024E27C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x8024E27C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void ovl_8024B800_func_8024E280(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8024E280: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x8024E284: lw          $t6, 0x3B20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B20);
    // 0x8024E288: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8024E28C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8024E290: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8024E294: lwc1        $f6, 0x4($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X4);
    // 0x8024E298: lwc1        $f5, -0x40C8($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X40C8);
    // 0x8024E29C: lwc1        $f4, -0x40C4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X40C4);
    // 0x8024E2A0: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x8024E2A4: c.lt.d      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.d < ctx->f8.d;
    // 0x8024E2A8: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8024E2AC: bc1f        L_8024E304
    if (!c1cs) {
        // 0x8024E2B0: addiu       $a1, $a1, -0x5350
        ctx->r5 = ADD32(ctx->r5, -0X5350);
            goto L_8024E304;
    }
    // 0x8024E2B0: addiu       $a1, $a1, -0x5350
    ctx->r5 = ADD32(ctx->r5, -0X5350);
    // 0x8024E2B4: jal         0x8024D970
    // 0x8024E2B8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    ovl_8024B800_func_8024D970(rdram, ctx);
        goto after_0;
    // 0x8024E2B8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x8024E2BC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8024E2C0: sll         $v1, $v0, 16
    ctx->r3 = S32(ctx->r2 << 16);
    // 0x8024E2C4: beq         $v0, $zero, L_8024E304
    if (ctx->r2 == 0) {
        // 0x8024E2C8: sra         $t7, $v1, 16
        ctx->r15 = S32(SIGNED(ctx->r3) >> 16);
            goto L_8024E304;
    }
    // 0x8024E2C8: sra         $t7, $v1, 16
    ctx->r15 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8024E2CC: lwc1        $f12, 0x8C($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X8C);
    // 0x8024E2D0: lwc1        $f14, 0xB0($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0XB0);
    // 0x8024E2D4: jal         0x80279308
    // 0x8024E2D8: sh          $t7, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r15;
    ovl_8024B800_func_80279308(rdram, ctx);
        goto after_1;
    // 0x8024E2D8: sh          $t7, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r15;
    after_1:
    // 0x8024E2DC: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8024E2E0: lwc1        $f17, -0x40C0($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X40C0);
    // 0x8024E2E4: lwc1        $f16, -0x40BC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X40BC);
    // 0x8024E2E8: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x8024E2EC: c.lt.d      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.d < ctx->f16.d;
    // 0x8024E2F0: lh          $v1, 0x1E($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X1E);
    // 0x8024E2F4: bc1f        L_8024E308
    if (!c1cs) {
        // 0x8024E2F8: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8024E308;
    }
    // 0x8024E2F8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8024E2FC: b           L_8024E308
    // 0x8024E300: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_8024E308;
    // 0x8024E300: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8024E304:
    // 0x8024E304: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8024E308:
    // 0x8024E308: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8024E30C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8024E310: jr          $ra
    // 0x8024E314: nop

    return;
    // 0x8024E314: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8024E318(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8024E318: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8024E31C: lhu         $t6, 0xB78($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB78);
    // 0x8024E320: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8024E324: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8024E328: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8024E32C: beq         $t6, $zero, L_8024E344
    if (ctx->r14 == 0) {
        // 0x8024E330: sw          $ra, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r31;
            goto L_8024E344;
    }
    // 0x8024E330: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8024E334: jal         0x8024E730
    // 0x8024E338: nop

    ovl_8024B800_func_8024E730(rdram, ctx);
        goto after_0;
    // 0x8024E338: nop

    after_0:
    // 0x8024E33C: b           L_8024E724
    // 0x8024E340: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8024E724;
    // 0x8024E340: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8024E344:
    // 0x8024E344: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x8024E348: addiu       $v1, $v1, 0x3B20
    ctx->r3 = ADD32(ctx->r3, 0X3B20);
    // 0x8024E34C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8024E350: lui         $at, 0x4190
    ctx->r1 = S32(0X4190 << 16);
    // 0x8024E354: lhu         $t7, 0xC2($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0XC2);
    // 0x8024E358: nop

    // 0x8024E35C: andi        $t8, $t7, 0x40
    ctx->r24 = ctx->r15 & 0X40;
    // 0x8024E360: beq         $t8, $zero, L_8024E394
    if (ctx->r24 == 0) {
        // 0x8024E364: nop
    
            goto L_8024E394;
    }
    // 0x8024E364: nop

    // 0x8024E368: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8024E36C: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8024E370: nop

    // 0x8024E374: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x8024E378: nop

    // 0x8024E37C: bc1f        L_8024E38C
    if (!c1cs) {
        // 0x8024E380: nop
    
            goto L_8024E38C;
    }
    // 0x8024E380: nop

    // 0x8024E384: b           L_8024E720
    // 0x8024E388: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_8024E720;
    // 0x8024E388: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8024E38C:
    // 0x8024E38C: b           L_8024E720
    // 0x8024E390: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
        goto L_8024E720;
    // 0x8024E390: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_8024E394:
    // 0x8024E394: lw          $t9, 0x88($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X88);
    // 0x8024E398: nop

    // 0x8024E39C: bne         $t9, $zero, L_8024E3B4
    if (ctx->r25 != 0) {
        // 0x8024E3A0: nop
    
            goto L_8024E3B4;
    }
    // 0x8024E3A0: nop

    // 0x8024E3A4: lw          $t0, 0xB0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0XB0);
    // 0x8024E3A8: addiu       $t1, $zero, 0x2A
    ctx->r9 = ADD32(0, 0X2A);
    // 0x8024E3AC: beq         $t0, $zero, L_8024E3BC
    if (ctx->r8 == 0) {
        // 0x8024E3B0: nop
    
            goto L_8024E3BC;
    }
    // 0x8024E3B0: nop

L_8024E3B4:
    // 0x8024E3B4: b           L_8024E720
    // 0x8024E3B8: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
        goto L_8024E720;
    // 0x8024E3B8: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_8024E3BC:
    // 0x8024E3BC: sb          $t1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r9;
    // 0x8024E3C0: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x8024E3C4: nop

    // 0x8024E3C8: lhu         $t3, 0xC0($t2)
    ctx->r11 = MEM_HU(ctx->r10, 0XC0);
    // 0x8024E3CC: nop

    // 0x8024E3D0: andi        $t4, $t3, 0x1
    ctx->r12 = ctx->r11 & 0X1;
    // 0x8024E3D4: beq         $t4, $zero, L_8024E574
    if (ctx->r12 == 0) {
        // 0x8024E3D8: nop
    
            goto L_8024E574;
    }
    // 0x8024E3D8: nop

    // 0x8024E3DC: jal         0x8024DF50
    // 0x8024E3E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8024DF50(rdram, ctx);
        goto after_1;
    // 0x8024E3E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8024E3E4: sh          $v0, 0x40($s0)
    MEM_H(0X40, ctx->r16) = ctx->r2;
    // 0x8024E3E8: lh          $v1, 0x40($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X40);
    // 0x8024E3EC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8024E3F0: beq         $v1, $at, L_8024E410
    if (ctx->r3 == ctx->r1) {
        // 0x8024E3F4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8024E410;
    }
    // 0x8024E3F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8024E3F8: blez        $v1, L_8024E408
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8024E3FC: nop
    
            goto L_8024E408;
    }
    // 0x8024E3FC: nop

    // 0x8024E400: b           L_8024E720
    // 0x8024E404: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_8024E720;
    // 0x8024E404: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8024E408:
    // 0x8024E408: b           L_8024E720
    // 0x8024E40C: addiu       $v0, $zero, -0x7FFE
    ctx->r2 = ADD32(0, -0X7FFE);
        goto L_8024E720;
    // 0x8024E40C: addiu       $v0, $zero, -0x7FFE
    ctx->r2 = ADD32(0, -0X7FFE);
L_8024E410:
    // 0x8024E410: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8024E414: jal         0x8024D970
    // 0x8024E418: addiu       $a1, $a1, -0x5348
    ctx->r5 = ADD32(ctx->r5, -0X5348);
    ovl_8024B800_func_8024D970(rdram, ctx);
        goto after_2;
    // 0x8024E418: addiu       $a1, $a1, -0x5348
    ctx->r5 = ADD32(ctx->r5, -0X5348);
    after_2:
    // 0x8024E41C: sll         $v1, $v0, 16
    ctx->r3 = S32(ctx->r2 << 16);
    // 0x8024E420: beq         $v0, $zero, L_8024E430
    if (ctx->r2 == 0) {
        // 0x8024E424: sra         $t5, $v1, 16
        ctx->r13 = S32(SIGNED(ctx->r3) >> 16);
            goto L_8024E430;
    }
    // 0x8024E424: sra         $t5, $v1, 16
    ctx->r13 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8024E428: b           L_8024E720
    // 0x8024E42C: or          $v0, $t5, $zero
    ctx->r2 = ctx->r13 | 0;
        goto L_8024E720;
    // 0x8024E42C: or          $v0, $t5, $zero
    ctx->r2 = ctx->r13 | 0;
L_8024E430:
    // 0x8024E430: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8024E434: addiu       $a1, $a1, -0x5340
    ctx->r5 = ADD32(ctx->r5, -0X5340);
    // 0x8024E438: jal         0x8024D970
    // 0x8024E43C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8024D970(rdram, ctx);
        goto after_3;
    // 0x8024E43C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8024E440: sll         $v1, $v0, 16
    ctx->r3 = S32(ctx->r2 << 16);
    // 0x8024E444: beq         $v0, $zero, L_8024E454
    if (ctx->r2 == 0) {
        // 0x8024E448: sra         $t6, $v1, 16
        ctx->r14 = S32(SIGNED(ctx->r3) >> 16);
            goto L_8024E454;
    }
    // 0x8024E448: sra         $t6, $v1, 16
    ctx->r14 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8024E44C: b           L_8024E720
    // 0x8024E450: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
        goto L_8024E720;
    // 0x8024E450: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
L_8024E454:
    // 0x8024E454: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8024E458: lwc1        $f12, 0x700($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X700);
    // 0x8024E45C: jal         0x80272AEC
    // 0x8024E460: nop

    ovl_8024B800_func_80272AEC(rdram, ctx);
        goto after_4;
    // 0x8024E460: nop

    after_4:
    // 0x8024E464: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x8024E468: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8024E46C: nop

    // 0x8024E470: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x8024E474: nop

    // 0x8024E478: bc1f        L_8024E49C
    if (!c1cs) {
        // 0x8024E47C: nop
    
            goto L_8024E49C;
    }
    // 0x8024E47C: nop

    // 0x8024E480: jal         0x8024E280
    // 0x8024E484: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8024E280(rdram, ctx);
        goto after_5;
    // 0x8024E484: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x8024E488: sll         $v1, $v0, 16
    ctx->r3 = S32(ctx->r2 << 16);
    // 0x8024E48C: beq         $v0, $zero, L_8024E49C
    if (ctx->r2 == 0) {
        // 0x8024E490: sra         $t7, $v1, 16
        ctx->r15 = S32(SIGNED(ctx->r3) >> 16);
            goto L_8024E49C;
    }
    // 0x8024E490: sra         $t7, $v1, 16
    ctx->r15 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8024E494: b           L_8024E720
    // 0x8024E498: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
        goto L_8024E720;
    // 0x8024E498: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
L_8024E49C:
    // 0x8024E49C: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8024E4A0: addiu       $a1, $a1, -0x5328
    ctx->r5 = ADD32(ctx->r5, -0X5328);
    // 0x8024E4A4: jal         0x8024D970
    // 0x8024E4A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8024D970(rdram, ctx);
        goto after_6;
    // 0x8024E4A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x8024E4AC: sll         $v1, $v0, 16
    ctx->r3 = S32(ctx->r2 << 16);
    // 0x8024E4B0: beq         $v0, $zero, L_8024E4C0
    if (ctx->r2 == 0) {
        // 0x8024E4B4: sra         $t8, $v1, 16
        ctx->r24 = S32(SIGNED(ctx->r3) >> 16);
            goto L_8024E4C0;
    }
    // 0x8024E4B4: sra         $t8, $v1, 16
    ctx->r24 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8024E4B8: b           L_8024E720
    // 0x8024E4BC: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
        goto L_8024E720;
    // 0x8024E4BC: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
L_8024E4C0:
    // 0x8024E4C0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8024E4C4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8024E4C8: jal         0x8026D720
    // 0x8024E4CC: nop

    ovl_8024B800_func_8026D720(rdram, ctx);
        goto after_7;
    // 0x8024E4CC: nop

    after_7:
    // 0x8024E4D0: sll         $t9, $v0, 16
    ctx->r25 = S32(ctx->r2 << 16);
    // 0x8024E4D4: sra         $t0, $t9, 16
    ctx->r8 = S32(SIGNED(ctx->r25) >> 16);
    // 0x8024E4D8: blez        $t0, L_8024E564
    if (SIGNED(ctx->r8) <= 0) {
        // 0x8024E4DC: sh          $v0, 0x40($s0)
        MEM_H(0X40, ctx->r16) = ctx->r2;
            goto L_8024E564;
    }
    // 0x8024E4DC: sh          $v0, 0x40($s0)
    MEM_H(0X40, ctx->r16) = ctx->r2;
    // 0x8024E4E0: lh          $t1, 0x40($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X40);
    // 0x8024E4E4: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x8024E4E8: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8024E4EC: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x8024E4F0: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x8024E4F4: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8024E4F8: addiu       $t3, $t3, 0x680
    ctx->r11 = ADD32(ctx->r11, 0X680);
    // 0x8024E4FC: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x8024E500: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8024E504: addu        $v0, $t2, $t3
    ctx->r2 = ADD32(ctx->r10, ctx->r11);
    // 0x8024E508: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8024E50C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8024E510: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8024E514: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8024E518: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8024E51C: mfc1        $t5, $f16
    ctx->r13 = (int32_t)ctx->f16.u32l;
    // 0x8024E520: nop

    // 0x8024E524: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8024E528: sh          $t5, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r13;
    // 0x8024E52C: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x8024E530: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8024E534: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8024E538: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8024E53C: nop

    // 0x8024E540: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8024E544: mfc1        $t7, $f4
    ctx->r15 = (int32_t)ctx->f4.u32l;
    // 0x8024E548: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8024E54C: jal         0x8026BC5C
    // 0x8024E550: sh          $t7, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r15;
    ovl_8024B800_func_8026BC5C(rdram, ctx);
        goto after_8;
    // 0x8024E550: sh          $t7, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r15;
    after_8:
    // 0x8024E554: jal         0x8026BD38
    // 0x8024E558: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026BD38(rdram, ctx);
        goto after_9;
    // 0x8024E558: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x8024E55C: b           L_8024E720
    // 0x8024E560: addiu       $v0, $zero, -0x8000
    ctx->r2 = ADD32(0, -0X8000);
        goto L_8024E720;
    // 0x8024E560: addiu       $v0, $zero, -0x8000
    ctx->r2 = ADD32(0, -0X8000);
L_8024E564:
    // 0x8024E564: addiu       $t8, $zero, 0x19
    ctx->r24 = ADD32(0, 0X19);
    // 0x8024E568: sb          $t8, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r24;
    // 0x8024E56C: b           L_8024E720
    // 0x8024E570: addiu       $v0, $zero, -0x8000
    ctx->r2 = ADD32(0, -0X8000);
        goto L_8024E720;
    // 0x8024E570: addiu       $v0, $zero, -0x8000
    ctx->r2 = ADD32(0, -0X8000);
L_8024E574:
    // 0x8024E574: jal         0x8024DB6C
    // 0x8024E578: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8024DB6C(rdram, ctx);
        goto after_10;
    // 0x8024E578: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x8024E57C: sll         $v1, $v0, 16
    ctx->r3 = S32(ctx->r2 << 16);
    // 0x8024E580: beq         $v0, $zero, L_8024E590
    if (ctx->r2 == 0) {
        // 0x8024E584: sra         $t9, $v1, 16
        ctx->r25 = S32(SIGNED(ctx->r3) >> 16);
            goto L_8024E590;
    }
    // 0x8024E584: sra         $t9, $v1, 16
    ctx->r25 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8024E588: b           L_8024E720
    // 0x8024E58C: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
        goto L_8024E720;
    // 0x8024E58C: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
L_8024E590:
    // 0x8024E590: jal         0x8024EFB4
    // 0x8024E594: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8024EFB4(rdram, ctx);
        goto after_11;
    // 0x8024E594: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x8024E598: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x8024E59C: lh          $t0, 0x2E($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X2E);
    // 0x8024E5A0: lw          $t3, 0x24($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X24);
    // 0x8024E5A4: mtc1        $t0, $f18
    ctx->f18.u32l = ctx->r8;
    // 0x8024E5A8: lh          $t4, 0x8B8($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X8B8);
    // 0x8024E5AC: lh          $t1, 0x30($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X30);
    // 0x8024E5B0: mtc1        $t4, $f16
    ctx->f16.u32l = ctx->r12;
    // 0x8024E5B4: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
    // 0x8024E5B8: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8024E5BC: addiu       $t5, $sp, 0x3C
    ctx->r13 = ADD32(ctx->r29, 0X3C);
    // 0x8024E5C0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8024E5C4: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x8024E5C8: cvt.s.w     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8024E5CC: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x8024E5D0: jal         0x80272B1C
    // 0x8024E5D4: cvt.s.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = CVT_S_W(ctx->f10.u32l);
    ovl_8024B800_func_80272B1C(rdram, ctx);
        goto after_12;
    // 0x8024E5D4: cvt.s.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = CVT_S_W(ctx->f10.u32l);
    after_12:
    // 0x8024E5D8: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8024E5DC: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x8024E5E0: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x8024E5E4: lbu         $v1, 0xBC($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0XBC);
    // 0x8024E5E8: lwc1        $f16, 0x40($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8024E5EC: addu        $t6, $t6, $v1
    ctx->r14 = ADD32(ctx->r14, ctx->r3);
    // 0x8024E5F0: lbu         $t6, -0x54C0($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X54C0);
    // 0x8024E5F4: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x8024E5F8: andi        $t7, $t6, 0x20
    ctx->r15 = ctx->r14 & 0X20;
    // 0x8024E5FC: beq         $t7, $zero, L_8024E618
    if (ctx->r15 == 0) {
        // 0x8024E600: nop
    
            goto L_8024E618;
    }
    // 0x8024E600: nop

    // 0x8024E604: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8024E608: nop

    // 0x8024E60C: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x8024E610: nop

    // 0x8024E614: bc1t        L_8024E6CC
    if (c1cs) {
        // 0x8024E618: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_8024E6CC;
    }
L_8024E618:
    // 0x8024E618: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8024E61C: bne         $v1, $at, L_8024E67C
    if (ctx->r3 != ctx->r1) {
        // 0x8024E620: lui         $at, 0x42C8
        ctx->r1 = S32(0X42C8 << 16);
            goto L_8024E67C;
    }
    // 0x8024E620: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x8024E624: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8024E628: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8024E62C: nop

    // 0x8024E630: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x8024E634: nop

    // 0x8024E638: bc1f        L_8024E680
    if (!c1cs) {
        // 0x8024E63C: lui         $at, 0x4316
        ctx->r1 = S32(0X4316 << 16);
            goto L_8024E680;
    }
    // 0x8024E63C: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x8024E640: lwc1        $f12, 0x20($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X20);
    // 0x8024E644: jal         0x80081040
    // 0x8024E648: nop

    func_80081040(rdram, ctx);
        goto after_13;
    // 0x8024E648: nop

    after_13:
    // 0x8024E64C: jal         0x80272AEC
    // 0x8024E650: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    ovl_8024B800_func_80272AEC(rdram, ctx);
        goto after_14;
    // 0x8024E650: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_14:
    // 0x8024E654: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8024E658: lwc1        $f11, -0x40B8($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X40B8);
    // 0x8024E65C: lwc1        $f10, -0x40B4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X40B4);
    // 0x8024E660: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x8024E664: c.lt.d      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.d < ctx->f10.d;
    // 0x8024E668: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8024E66C: bc1t        L_8024E6CC
    if (c1cs) {
        // 0x8024E670: nop
    
            goto L_8024E6CC;
    }
    // 0x8024E670: nop

    // 0x8024E674: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x8024E678: nop

L_8024E67C:
    // 0x8024E67C: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
L_8024E680:
    // 0x8024E680: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8024E684: lwc1        $f18, 0x40($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8024E688: nop

    // 0x8024E68C: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x8024E690: nop

    // 0x8024E694: bc1f        L_8024E6D4
    if (!c1cs) {
        // 0x8024E698: nop
    
            goto L_8024E6D4;
    }
    // 0x8024E698: nop

    // 0x8024E69C: lw          $t8, 0xA0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0XA0);
    // 0x8024E6A0: nop

    // 0x8024E6A4: beq         $s0, $t8, L_8024E6D4
    if (ctx->r16 == ctx->r24) {
        // 0x8024E6A8: nop
    
            goto L_8024E6D4;
    }
    // 0x8024E6A8: nop

    // 0x8024E6AC: lw          $t9, 0x90($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X90);
    // 0x8024E6B0: lui         $t0, 0x801B
    ctx->r8 = S32(0X801B << 16);
    // 0x8024E6B4: beq         $s0, $t9, L_8024E6D4
    if (ctx->r16 == ctx->r25) {
        // 0x8024E6B8: nop
    
            goto L_8024E6D4;
    }
    // 0x8024E6B8: nop

    // 0x8024E6BC: lw          $t0, 0x3614($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X3614);
    // 0x8024E6C0: nop

    // 0x8024E6C4: beq         $s0, $t0, L_8024E6D4
    if (ctx->r16 == ctx->r8) {
        // 0x8024E6C8: nop
    
            goto L_8024E6D4;
    }
    // 0x8024E6C8: nop

L_8024E6CC:
    // 0x8024E6CC: b           L_8024E720
    // 0x8024E6D0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_8024E720;
    // 0x8024E6D0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_8024E6D4:
    // 0x8024E6D4: lwc1        $f12, 0x20($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X20);
    // 0x8024E6D8: jal         0x80081040
    // 0x8024E6DC: nop

    func_80081040(rdram, ctx);
        goto after_15;
    // 0x8024E6DC: nop

    after_15:
    // 0x8024E6E0: jal         0x80272AEC
    // 0x8024E6E4: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    ovl_8024B800_func_80272AEC(rdram, ctx);
        goto after_16;
    // 0x8024E6E4: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_16:
    // 0x8024E6E8: lhu         $a2, 0x38($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X38);
    // 0x8024E6EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8024E6F0: lui         $a1, 0x4140
    ctx->r5 = S32(0X4140 << 16);
    // 0x8024E6F4: jal         0x80052E4C
    // 0x8024E6F8: addiu       $a3, $sp, 0x48
    ctx->r7 = ADD32(ctx->r29, 0X48);
    func_80052E4C(rdram, ctx);
        goto after_17;
    // 0x8024E6F8: addiu       $a3, $sp, 0x48
    ctx->r7 = ADD32(ctx->r29, 0X48);
    after_17:
    // 0x8024E6FC: sh          $v0, 0x40($s0)
    MEM_H(0X40, ctx->r16) = ctx->r2;
    // 0x8024E700: lh          $v1, 0x40($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X40);
    // 0x8024E704: addiu       $v0, $zero, -0x7FFA
    ctx->r2 = ADD32(0, -0X7FFA);
    // 0x8024E708: bltz        $v1, L_8024E720
    if (SIGNED(ctx->r3) < 0) {
        // 0x8024E70C: slti        $at, $v1, 0x6
        ctx->r1 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
            goto L_8024E720;
    }
    // 0x8024E70C: slti        $at, $v1, 0x6
    ctx->r1 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x8024E710: beq         $at, $zero, L_8024E720
    if (ctx->r1 == 0) {
        // 0x8024E714: nop
    
            goto L_8024E720;
    }
    // 0x8024E714: nop

    // 0x8024E718: b           L_8024E720
    // 0x8024E71C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
        goto L_8024E720;
    // 0x8024E71C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_8024E720:
    // 0x8024E720: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8024E724:
    // 0x8024E724: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8024E728: jr          $ra
    // 0x8024E72C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x8024E72C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void ovl_8024B800_func_8024E730(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8024E730: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8024E734: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8024E738: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8024E73C: jal         0x8024DE34
    // 0x8024E740: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    ovl_8024B800_func_8024DE34(rdram, ctx);
        goto after_0;
    // 0x8024E740: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    after_0:
    // 0x8024E744: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8024E748: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8024E74C: lwc1        $f4, 0x90($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X90);
    // 0x8024E750: lwc1        $f3, -0x40B0($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, -0X40B0);
    // 0x8024E754: lwc1        $f2, -0x40AC($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X40AC);
    // 0x8024E758: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x8024E75C: subu        $t7, $t7, $v0
    ctx->r15 = SUB32(ctx->r15, ctx->r2);
    // 0x8024E760: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8024E764: add.d       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f2.d); 
    ctx->f8.d = ctx->f6.d + ctx->f2.d;
    // 0x8024E768: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8024E76C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8024E770: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8024E774: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    // 0x8024E778: lwc1        $f10, 0x684($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X684);
    // 0x8024E77C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8024E780: c.lt.s      $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f12.fl < ctx->f10.fl;
    // 0x8024E784: nop

    // 0x8024E788: bc1f        L_8024E7A8
    if (!c1cs) {
        // 0x8024E78C: nop
    
            goto L_8024E7A8;
    }
    // 0x8024E78C: nop

    // 0x8024E790: jal         0x8026D720
    // 0x8024E794: nop

    ovl_8024B800_func_8026D720(rdram, ctx);
        goto after_1;
    // 0x8024E794: nop

    after_1:
    // 0x8024E798: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8024E79C: lwc1        $f3, -0x40A8($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, -0X40A8);
    // 0x8024E7A0: lwc1        $f2, -0x40A4($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X40A4);
    // 0x8024E7A4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_8024E7A8:
    // 0x8024E7A8: blez        $v0, L_8024E850
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8024E7AC: sll         $t9, $v0, 2
        ctx->r25 = S32(ctx->r2 << 2);
            goto L_8024E850;
    }
    // 0x8024E7AC: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x8024E7B0: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x8024E7B4: subu        $t9, $t9, $v0
    ctx->r25 = SUB32(ctx->r25, ctx->r2);
    // 0x8024E7B8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8024E7BC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8024E7C0: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8024E7C4: sh          $v0, 0x40($t8)
    MEM_H(0X40, ctx->r24) = ctx->r2;
    // 0x8024E7C8: lwc1        $f16, 0x684($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X684);
    // 0x8024E7CC: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x8024E7D0: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x8024E7D4: sub.d       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f2.d); 
    ctx->f4.d = ctx->f18.d - ctx->f2.d;
    // 0x8024E7D8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8024E7DC: cvt.s.d     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f0.fl = CVT_S_D(ctx->f4.d);
    // 0x8024E7E0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8024E7E4: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x8024E7E8: nop

    // 0x8024E7EC: bc1f        L_8024E854
    if (!c1cs) {
        // 0x8024E7F0: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_8024E854;
    }
    // 0x8024E7F0: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8024E7F4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8024E7F8: lui         $at, 0x3FD4
    ctx->r1 = S32(0X3FD4 << 16);
    // 0x8024E7FC: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x8024E800: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x8024E804: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8024E808: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x8024E80C: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x8024E810: nop

    // 0x8024E814: div.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = DIV_D(ctx->f16.d, ctx->f18.d);
    // 0x8024E818: jal         0x8007FA40
    // 0x8024E81C: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    func_8007FA40(rdram, ctx);
        goto after_2;
    // 0x8024E81C: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    after_2:
    // 0x8024E820: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x8024E824: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8024E828: mtc1        $v1, $f10
    ctx->f10.u32l = ctx->r3;
    // 0x8024E82C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8024E830: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8024E834: add.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f6.fl;
    // 0x8024E838: c.lt.s      $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f8.fl < ctx->f16.fl;
    // 0x8024E83C: nop

    // 0x8024E840: bc1f        L_8024E854
    if (!c1cs) {
        // 0x8024E844: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_8024E854;
    }
    // 0x8024E844: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8024E848: b           L_8024E854
    // 0x8024E84C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_8024E854;
    // 0x8024E84C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8024E850:
    // 0x8024E850: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_8024E854:
    // 0x8024E854: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8024E858: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8024E85C: jr          $ra
    // 0x8024E860: nop

    return;
    // 0x8024E860: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8024E864(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8024E864: lw          $t6, 0x28($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X28);
    // 0x8024E868: sh          $zero, 0x38($a0)
    MEM_H(0X38, ctx->r4) = 0;
    // 0x8024E86C: bne         $t6, $zero, L_8024E884
    if (ctx->r14 != 0) {
        // 0x8024E870: andi        $t1, $a1, 0x7FFF
        ctx->r9 = ctx->r5 & 0X7FFF;
            goto L_8024E884;
    }
    // 0x8024E870: andi        $t1, $a1, 0x7FFF
    ctx->r9 = ctx->r5 & 0X7FFF;
    // 0x8024E874: lhu         $t7, 0x14($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X14);
    // 0x8024E878: nop

    // 0x8024E87C: andi        $t8, $t7, 0xFBFF
    ctx->r24 = ctx->r15 & 0XFBFF;
    // 0x8024E880: sh          $t8, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r24;
L_8024E884:
    // 0x8024E884: lhu         $t9, 0x12($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X12);
    // 0x8024E888: sh          $t1, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = ctx->r9;
    // 0x8024E88C: ori         $t0, $t9, 0x4
    ctx->r8 = ctx->r25 | 0X4;
    // 0x8024E890: jr          $ra
    // 0x8024E894: sh          $t0, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r8;
    return;
    // 0x8024E894: sh          $t0, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r8;
;}
RECOMP_FUNC void ovl_8024B800_func_8024E898(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8024E898: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8024E89C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8024E8A0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8024E8A4: sh          $zero, 0x26($sp)
    MEM_H(0X26, ctx->r29) = 0;
    // 0x8024E8A8: lhu         $t6, 0x12($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X12);
    // 0x8024E8AC: lhu         $t8, 0x18($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X18);
    // 0x8024E8B0: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x8024E8B4: andi        $t7, $t6, 0xFFF7
    ctx->r15 = ctx->r14 & 0XFFF7;
    // 0x8024E8B8: andi        $t9, $t8, 0xFF7F
    ctx->r25 = ctx->r24 & 0XFF7F;
    // 0x8024E8BC: addiu       $t0, $t0, 0x3B20
    ctx->r8 = ADD32(ctx->r8, 0X3B20);
    // 0x8024E8C0: sh          $t7, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r15;
    // 0x8024E8C4: sh          $t9, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r25;
    // 0x8024E8C8: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x8024E8CC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8024E8D0: lw          $t1, 0x88($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X88);
    // 0x8024E8D4: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x8024E8D8: bne         $t1, $zero, L_8024E8F4
    if (ctx->r9 != 0) {
        // 0x8024E8DC: addiu       $a1, $s0, 0x3C
        ctx->r5 = ADD32(ctx->r16, 0X3C);
            goto L_8024E8F4;
    }
    // 0x8024E8DC: addiu       $a1, $s0, 0x3C
    ctx->r5 = ADD32(ctx->r16, 0X3C);
    // 0x8024E8E0: lhu         $t2, 0x6C($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X6C);
    // 0x8024E8E4: lhu         $t3, 0x24($a0)
    ctx->r11 = MEM_HU(ctx->r4, 0X24);
    // 0x8024E8E8: nop

    // 0x8024E8EC: beq         $t2, $t3, L_8024E928
    if (ctx->r10 == ctx->r11) {
        // 0x8024E8F0: nop
    
            goto L_8024E928;
    }
    // 0x8024E8F0: nop

L_8024E8F4:
    // 0x8024E8F4: lw          $t4, 0x28($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X28);
    // 0x8024E8F8: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x8024E8FC: bne         $t4, $zero, L_8024E924
    if (ctx->r12 != 0) {
        // 0x8024E900: nop
    
            goto L_8024E924;
    }
    // 0x8024E900: nop

    // 0x8024E904: lhu         $t5, 0xB7A($t5)
    ctx->r13 = MEM_HU(ctx->r13, 0XB7A);
    // 0x8024E908: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8024E90C: beq         $t5, $at, L_8024E924
    if (ctx->r13 == ctx->r1) {
        // 0x8024E910: nop
    
            goto L_8024E924;
    }
    // 0x8024E910: nop

    // 0x8024E914: lhu         $t6, 0x14($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X14);
    // 0x8024E918: nop

    // 0x8024E91C: andi        $t7, $t6, 0xFBFF
    ctx->r15 = ctx->r14 & 0XFBFF;
    // 0x8024E920: sh          $t7, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r15;
L_8024E924:
    // 0x8024E924: sh          $zero, 0x38($s0)
    MEM_H(0X38, ctx->r16) = 0;
L_8024E928:
    // 0x8024E928: lhu         $t8, 0x38($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X38);
    // 0x8024E92C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8024E930: beq         $t8, $zero, L_8024EAE4
    if (ctx->r24 == 0) {
        // 0x8024E934: addiu       $a3, $zero, 0xC
        ctx->r7 = ADD32(0, 0XC);
            goto L_8024EAE4;
    }
    // 0x8024E934: addiu       $a3, $zero, 0xC
    ctx->r7 = ADD32(0, 0XC);
    // 0x8024E938: lhu         $a2, 0x36($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X36);
    // 0x8024E93C: jal         0x80272D88
    // 0x8024E940: sh          $t9, 0x40($s0)
    MEM_H(0X40, ctx->r16) = ctx->r25;
    ovl_8024B800_func_80272D88(rdram, ctx);
        goto after_0;
    // 0x8024E940: sh          $t9, 0x40($s0)
    MEM_H(0X40, ctx->r16) = ctx->r25;
    after_0:
    // 0x8024E944: lhu         $t1, 0x38($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X38);
    // 0x8024E948: lhu         $t3, 0x14($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X14);
    // 0x8024E94C: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x8024E950: ori         $t4, $t3, 0x400
    ctx->r12 = ctx->r11 | 0X400;
    // 0x8024E954: sh          $t2, 0x38($s0)
    MEM_H(0X38, ctx->r16) = ctx->r10;
    // 0x8024E958: sh          $t4, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r12;
    // 0x8024E95C: jal         0x8024E318
    // 0x8024E960: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8024E318(rdram, ctx);
        goto after_1;
    // 0x8024E960: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8024E964: sll         $v1, $v0, 16
    ctx->r3 = S32(ctx->r2 << 16);
    // 0x8024E968: blez        $v0, L_8024E9A8
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8024E96C: sra         $t5, $v1, 16
        ctx->r13 = S32(SIGNED(ctx->r3) >> 16);
            goto L_8024E9A8;
    }
    // 0x8024E96C: sra         $t5, $v1, 16
    ctx->r13 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8024E970: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8024E974: jal         0x8024E864
    // 0x8024E978: or          $a1, $t5, $zero
    ctx->r5 = ctx->r13 | 0;
    ovl_8024B800_func_8024E864(rdram, ctx);
        goto after_2;
    // 0x8024E978: or          $a1, $t5, $zero
    ctx->r5 = ctx->r13 | 0;
    after_2:
    // 0x8024E97C: jal         0x802710B4
    // 0x8024E980: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_802710B4(rdram, ctx);
        goto after_3;
    // 0x8024E980: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8024E984: beq         $v0, $zero, L_8024E99C
    if (ctx->r2 == 0) {
        // 0x8024E988: nop
    
            goto L_8024E99C;
    }
    // 0x8024E988: nop

    // 0x8024E98C: lhu         $t6, 0x12($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X12);
    // 0x8024E990: nop

    // 0x8024E994: ori         $t7, $t6, 0x8
    ctx->r15 = ctx->r14 | 0X8;
    // 0x8024E998: sh          $t7, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r15;
L_8024E99C:
    // 0x8024E99C: lhu         $v0, 0x36($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X36);
    // 0x8024E9A0: b           L_8024EFA8
    // 0x8024E9A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8024EFA8;
    // 0x8024E9A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8024E9A8:
    // 0x8024E9A8: lhu         $t8, 0x38($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X38);
    // 0x8024E9AC: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
    // 0x8024E9B0: beq         $t8, $zero, L_8024E9E0
    if (ctx->r24 == 0) {
        // 0x8024E9B4: addiu       $t4, $zero, -0x1
        ctx->r12 = ADD32(0, -0X1);
            goto L_8024E9E0;
    }
    // 0x8024E9B4: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x8024E9B8: beq         $v0, $at, L_8024E9E0
    if (ctx->r2 == ctx->r1) {
        // 0x8024E9BC: lui         $t9, 0x8010
        ctx->r25 = S32(0X8010 << 16);
            goto L_8024E9E0;
    }
    // 0x8024E9BC: lui         $t9, 0x8010
    ctx->r25 = S32(0X8010 << 16);
    // 0x8024E9C0: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x8024E9C4: lhu         $t1, 0xB3E($t1)
    ctx->r9 = MEM_HU(ctx->r9, 0XB3E);
    // 0x8024E9C8: lhu         $t9, 0x522A($t9)
    ctx->r25 = MEM_HU(ctx->r25, 0X522A);
    // 0x8024E9CC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8024E9D0: subu        $t2, $t9, $t1
    ctx->r10 = SUB32(ctx->r25, ctx->r9);
    // 0x8024E9D4: andi        $t3, $t2, 0xFFFF
    ctx->r11 = ctx->r10 & 0XFFFF;
    // 0x8024E9D8: bne         $t3, $at, L_8024EAC0
    if (ctx->r11 != ctx->r1) {
        // 0x8024E9DC: nop
    
            goto L_8024EAC0;
    }
    // 0x8024E9DC: nop

L_8024E9E0:
    // 0x8024E9E0: sh          $t4, 0x40($s0)
    MEM_H(0X40, ctx->r16) = ctx->r12;
    // 0x8024E9E4: jal         0x8024E730
    // 0x8024E9E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8024E730(rdram, ctx);
        goto after_4;
    // 0x8024E9E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8024E9EC: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x8024E9F0: addiu       $t0, $t0, 0x3B20
    ctx->r8 = ADD32(ctx->r8, 0X3B20);
    // 0x8024E9F4: lw          $t6, 0x0($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X0);
    // 0x8024E9F8: sll         $v1, $v0, 16
    ctx->r3 = S32(ctx->r2 << 16);
    // 0x8024E9FC: lhu         $t7, 0xC0($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0XC0);
    // 0x8024EA00: sra         $t5, $v1, 16
    ctx->r13 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8024EA04: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x8024EA08: beq         $t8, $zero, L_8024EA48
    if (ctx->r24 == 0) {
        // 0x8024EA0C: or          $v1, $t5, $zero
        ctx->r3 = ctx->r13 | 0;
            goto L_8024EA48;
    }
    // 0x8024EA0C: or          $v1, $t5, $zero
    ctx->r3 = ctx->r13 | 0;
    // 0x8024EA10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8024EA14: jal         0x8024E864
    // 0x8024EA18: or          $a1, $t5, $zero
    ctx->r5 = ctx->r13 | 0;
    ovl_8024B800_func_8024E864(rdram, ctx);
        goto after_5;
    // 0x8024EA18: or          $a1, $t5, $zero
    ctx->r5 = ctx->r13 | 0;
    after_5:
    // 0x8024EA1C: jal         0x802710B4
    // 0x8024EA20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_802710B4(rdram, ctx);
        goto after_6;
    // 0x8024EA20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x8024EA24: beq         $v0, $zero, L_8024EA3C
    if (ctx->r2 == 0) {
        // 0x8024EA28: nop
    
            goto L_8024EA3C;
    }
    // 0x8024EA28: nop

    // 0x8024EA2C: lhu         $t9, 0x12($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X12);
    // 0x8024EA30: nop

    // 0x8024EA34: ori         $t1, $t9, 0x8
    ctx->r9 = ctx->r25 | 0X8;
    // 0x8024EA38: sh          $t1, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r9;
L_8024EA3C:
    // 0x8024EA3C: lhu         $v0, 0x36($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X36);
    // 0x8024EA40: b           L_8024EFA8
    // 0x8024EA44: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8024EFA8;
    // 0x8024EA44: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8024EA48:
    // 0x8024EA48: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x8024EA4C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8024EA50: lwc1        $f4, 0x84($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X84);
    // 0x8024EA54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8024EA58: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x8024EA5C: nop

    // 0x8024EA60: bc1f        L_8024EA9C
    if (!c1cs) {
        // 0x8024EA64: nop
    
            goto L_8024EA9C;
    }
    // 0x8024EA64: nop

    // 0x8024EA68: jal         0x8024E864
    // 0x8024EA6C: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
    ovl_8024B800_func_8024E864(rdram, ctx);
        goto after_7;
    // 0x8024EA6C: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
    after_7:
    // 0x8024EA70: jal         0x802710B4
    // 0x8024EA74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_802710B4(rdram, ctx);
        goto after_8;
    // 0x8024EA74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x8024EA78: beq         $v0, $zero, L_8024EA90
    if (ctx->r2 == 0) {
        // 0x8024EA7C: nop
    
            goto L_8024EA90;
    }
    // 0x8024EA7C: nop

    // 0x8024EA80: lhu         $t2, 0x12($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X12);
    // 0x8024EA84: nop

    // 0x8024EA88: ori         $t3, $t2, 0x8
    ctx->r11 = ctx->r10 | 0X8;
    // 0x8024EA8C: sh          $t3, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r11;
L_8024EA90:
    // 0x8024EA90: lhu         $v0, 0x36($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X36);
    // 0x8024EA94: b           L_8024EFA8
    // 0x8024EA98: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8024EFA8;
    // 0x8024EA98: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8024EA9C:
    // 0x8024EA9C: lw          $t4, 0x28($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X28);
    // 0x8024EAA0: nop

    // 0x8024EAA4: bne         $t4, $zero, L_8024EABC
    if (ctx->r12 != 0) {
        // 0x8024EAA8: nop
    
            goto L_8024EABC;
    }
    // 0x8024EAA8: nop

    // 0x8024EAAC: lhu         $t5, 0x14($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X14);
    // 0x8024EAB0: nop

    // 0x8024EAB4: andi        $t6, $t5, 0xFBFF
    ctx->r14 = ctx->r13 & 0XFBFF;
    // 0x8024EAB8: sh          $t6, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r14;
L_8024EABC:
    // 0x8024EABC: sh          $zero, 0x38($s0)
    MEM_H(0X38, ctx->r16) = 0;
L_8024EAC0:
    // 0x8024EAC0: jal         0x802710B4
    // 0x8024EAC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_802710B4(rdram, ctx);
        goto after_9;
    // 0x8024EAC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x8024EAC8: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x8024EACC: beq         $v0, $zero, L_8024EAE4
    if (ctx->r2 == 0) {
        // 0x8024EAD0: addiu       $t0, $t0, 0x3B20
        ctx->r8 = ADD32(ctx->r8, 0X3B20);
            goto L_8024EAE4;
    }
    // 0x8024EAD0: addiu       $t0, $t0, 0x3B20
    ctx->r8 = ADD32(ctx->r8, 0X3B20);
    // 0x8024EAD4: lhu         $t7, 0x12($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X12);
    // 0x8024EAD8: nop

    // 0x8024EADC: ori         $t8, $t7, 0x8
    ctx->r24 = ctx->r15 | 0X8;
    // 0x8024EAE0: sh          $t8, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r24;
L_8024EAE4:
    // 0x8024EAE4: lhu         $t9, 0x14($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X14);
    // 0x8024EAE8: nop

    // 0x8024EAEC: andi        $t1, $t9, 0x400
    ctx->r9 = ctx->r25 & 0X400;
    // 0x8024EAF0: bne         $t1, $zero, L_8024EDFC
    if (ctx->r9 != 0) {
        // 0x8024EAF4: nop
    
            goto L_8024EDFC;
    }
    // 0x8024EAF4: nop

    // 0x8024EAF8: lhu         $a0, 0x12($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X12);
    // 0x8024EAFC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8024EB00: andi        $t2, $a0, 0x40
    ctx->r10 = ctx->r4 & 0X40;
    // 0x8024EB04: beq         $t2, $zero, L_8024EDFC
    if (ctx->r10 == 0) {
        // 0x8024EB08: nop
    
            goto L_8024EDFC;
    }
    // 0x8024EB08: nop

    // 0x8024EB0C: lhu         $v0, 0xB78($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XB78);
    // 0x8024EB10: nop

    // 0x8024EB14: slti        $at, $v0, 0x8
    ctx->r1 = SIGNED(ctx->r2) < 0X8 ? 1 : 0;
    // 0x8024EB18: beq         $at, $zero, L_8024EDFC
    if (ctx->r1 == 0) {
        // 0x8024EB1C: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_8024EDFC;
    }
    // 0x8024EB1C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8024EB20: bne         $v0, $zero, L_8024EC4C
    if (ctx->r2 != 0) {
        // 0x8024EB24: lui         $t3, 0x8012
        ctx->r11 = S32(0X8012 << 16);
            goto L_8024EC4C;
    }
    // 0x8024EB24: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x8024EB28: lhu         $t3, 0xB7A($t3)
    ctx->r11 = MEM_HU(ctx->r11, 0XB7A);
    // 0x8024EB2C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8024EB30: beq         $t3, $at, L_8024EC50
    if (ctx->r11 == ctx->r1) {
        // 0x8024EB34: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_8024EC50;
    }
    // 0x8024EB34: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8024EB38: lw          $v1, 0xC4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC4);
    // 0x8024EB3C: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x8024EB40: lhu         $t4, 0x2($v1)
    ctx->r12 = MEM_HU(ctx->r3, 0X2);
    // 0x8024EB44: nop

    // 0x8024EB48: andi        $t5, $t4, 0x20
    ctx->r13 = ctx->r12 & 0X20;
    // 0x8024EB4C: beq         $t5, $zero, L_8024EBC8
    if (ctx->r13 == 0) {
        // 0x8024EB50: nop
    
            goto L_8024EBC8;
    }
    // 0x8024EB50: nop

    // 0x8024EB54: lhu         $t6, 0x362E($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X362E);
    // 0x8024EB58: nop

    // 0x8024EB5C: bne         $t6, $zero, L_8024EBBC
    if (ctx->r14 != 0) {
        // 0x8024EB60: nop
    
            goto L_8024EBBC;
    }
    // 0x8024EB60: nop

    // 0x8024EB64: lw          $t7, 0x0($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X0);
    // 0x8024EB68: nop

    // 0x8024EB6C: lw          $t8, 0x88($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X88);
    // 0x8024EB70: nop

    // 0x8024EB74: beq         $s0, $t8, L_8024EB8C
    if (ctx->r16 == ctx->r24) {
        // 0x8024EB78: nop
    
            goto L_8024EB8C;
    }
    // 0x8024EB78: nop

    // 0x8024EB7C: lhu         $t9, 0x18($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X18);
    // 0x8024EB80: nop

    // 0x8024EB84: ori         $t1, $t9, 0x80
    ctx->r9 = ctx->r25 | 0X80;
    // 0x8024EB88: sh          $t1, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r9;
L_8024EB8C:
    // 0x8024EB8C: lhu         $t2, 0x16($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X16);
    // 0x8024EB90: nop

    // 0x8024EB94: andi        $t3, $t2, 0x40
    ctx->r11 = ctx->r10 & 0X40;
    // 0x8024EB98: bne         $t3, $zero, L_8024EBB0
    if (ctx->r11 != 0) {
        // 0x8024EB9C: nop
    
            goto L_8024EBB0;
    }
    // 0x8024EB9C: nop

    // 0x8024EBA0: lhu         $t4, 0x14($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X14);
    // 0x8024EBA4: nop

    // 0x8024EBA8: ori         $t5, $t4, 0x40
    ctx->r13 = ctx->r12 | 0X40;
    // 0x8024EBAC: sh          $t5, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r13;
L_8024EBB0:
    // 0x8024EBB0: lhu         $a0, 0x12($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X12);
    // 0x8024EBB4: b           L_8024EBCC
    // 0x8024EBB8: andi        $t6, $a0, 0x2
    ctx->r14 = ctx->r4 & 0X2;
        goto L_8024EBCC;
    // 0x8024EBB8: andi        $t6, $a0, 0x2
    ctx->r14 = ctx->r4 & 0X2;
L_8024EBBC:
    // 0x8024EBBC: sh          $zero, 0x18($v1)
    MEM_H(0X18, ctx->r3) = 0;
    // 0x8024EBC0: lhu         $a0, 0x12($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X12);
    // 0x8024EBC4: nop

L_8024EBC8:
    // 0x8024EBC8: andi        $t6, $a0, 0x2
    ctx->r14 = ctx->r4 & 0X2;
L_8024EBCC:
    // 0x8024EBCC: bne         $t6, $zero, L_8024EC10
    if (ctx->r14 != 0) {
        // 0x8024EBD0: nop
    
            goto L_8024EC10;
    }
    // 0x8024EBD0: nop

    // 0x8024EBD4: jal         0x8024D828
    // 0x8024EBD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8024D828(rdram, ctx);
        goto after_10;
    // 0x8024EBD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x8024EBDC: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x8024EBE0: addiu       $t0, $t0, 0x3B20
    ctx->r8 = ADD32(ctx->r8, 0X3B20);
    // 0x8024EBE4: beq         $v0, $zero, L_8024EC10
    if (ctx->r2 == 0) {
        // 0x8024EBE8: sh          $v0, 0x26($sp)
        MEM_H(0X26, ctx->r29) = ctx->r2;
            goto L_8024EC10;
    }
    // 0x8024EBE8: sh          $v0, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r2;
    // 0x8024EBEC: lw          $t7, 0xC4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC4);
    // 0x8024EBF0: nop

    // 0x8024EBF4: sh          $zero, 0x1E($t7)
    MEM_H(0X1E, ctx->r15) = 0;
    // 0x8024EBF8: lw          $v1, 0xC4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC4);
    // 0x8024EBFC: nop

    // 0x8024EC00: lhu         $t8, 0x2($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X2);
    // 0x8024EC04: nop

    // 0x8024EC08: andi        $t9, $t8, 0xFDFF
    ctx->r25 = ctx->r24 & 0XFDFF;
    // 0x8024EC0C: sh          $t9, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r25;
L_8024EC10:
    // 0x8024EC10: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x8024EC14: nop

    // 0x8024EC18: lhu         $t1, 0xC0($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0XC0);
    // 0x8024EC1C: nop

    // 0x8024EC20: andi        $t2, $t1, 0x1000
    ctx->r10 = ctx->r9 & 0X1000;
    // 0x8024EC24: beq         $t2, $zero, L_8024ECE0
    if (ctx->r10 == 0) {
        // 0x8024EC28: nop
    
            goto L_8024ECE0;
    }
    // 0x8024EC28: nop

    // 0x8024EC2C: lw          $t3, 0xA4($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XA4);
    // 0x8024EC30: nop

    // 0x8024EC34: lw          $t4, 0x40($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X40);
    // 0x8024EC38: nop

    // 0x8024EC3C: bne         $s0, $t4, L_8024ECE0
    if (ctx->r16 != ctx->r12) {
        // 0x8024EC40: nop
    
            goto L_8024ECE0;
    }
    // 0x8024EC40: nop

    // 0x8024EC44: b           L_8024ECE0
    // 0x8024EC48: sh          $zero, 0x26($sp)
    MEM_H(0X26, ctx->r29) = 0;
        goto L_8024ECE0;
    // 0x8024EC48: sh          $zero, 0x26($sp)
    MEM_H(0X26, ctx->r29) = 0;
L_8024EC4C:
    // 0x8024EC4C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
L_8024EC50:
    // 0x8024EC50: bne         $v1, $at, L_8024ECE0
    if (ctx->r3 != ctx->r1) {
        // 0x8024EC54: nop
    
            goto L_8024ECE0;
    }
    // 0x8024EC54: nop

    // 0x8024EC58: lw          $t5, 0x0($t0)
    ctx->r13 = MEM_W(ctx->r8, 0X0);
    // 0x8024EC5C: nop

    // 0x8024EC60: lhu         $t6, 0xC2($t5)
    ctx->r14 = MEM_HU(ctx->r13, 0XC2);
    // 0x8024EC64: nop

    // 0x8024EC68: andi        $t7, $t6, 0x20
    ctx->r15 = ctx->r14 & 0X20;
    // 0x8024EC6C: beq         $t7, $zero, L_8024ECE0
    if (ctx->r15 == 0) {
        // 0x8024EC70: nop
    
            goto L_8024ECE0;
    }
    // 0x8024EC70: nop

    // 0x8024EC74: lw          $t8, 0xC4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC4);
    // 0x8024EC78: nop

    // 0x8024EC7C: lhu         $t9, 0x4($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X4);
    // 0x8024EC80: nop

    // 0x8024EC84: andi        $t1, $t9, 0x2
    ctx->r9 = ctx->r25 & 0X2;
    // 0x8024EC88: beq         $t1, $zero, L_8024ECE0
    if (ctx->r9 == 0) {
        // 0x8024EC8C: nop
    
            goto L_8024ECE0;
    }
    // 0x8024EC8C: nop

    // 0x8024EC90: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x8024EC94: nop

    // 0x8024EC98: lhu         $t2, 0x10($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X10);
    // 0x8024EC9C: nop

    // 0x8024ECA0: ori         $t3, $t2, 0x10
    ctx->r11 = ctx->r10 | 0X10;
    // 0x8024ECA4: sh          $t3, 0x10($v0)
    MEM_H(0X10, ctx->r2) = ctx->r11;
    // 0x8024ECA8: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x8024ECAC: nop

    // 0x8024ECB0: lbu         $t4, 0x3($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X3);
    // 0x8024ECB4: nop

    // 0x8024ECB8: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x8024ECBC: sb          $t5, 0x3($v0)
    MEM_B(0X3, ctx->r2) = ctx->r13;
    // 0x8024ECC0: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x8024ECC4: nop

    // 0x8024ECC8: lbu         $t6, 0x3($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X3);
    // 0x8024ECCC: nop

    // 0x8024ECD0: slti        $at, $t6, 0x3
    ctx->r1 = SIGNED(ctx->r14) < 0X3 ? 1 : 0;
    // 0x8024ECD4: bne         $at, $zero, L_8024ECE0
    if (ctx->r1 != 0) {
        // 0x8024ECD8: nop
    
            goto L_8024ECE0;
    }
    // 0x8024ECD8: nop

    // 0x8024ECDC: sb          $zero, 0x3($v0)
    MEM_B(0X3, ctx->r2) = 0;
L_8024ECE0:
    // 0x8024ECE0: jal         0x802710B4
    // 0x8024ECE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_802710B4(rdram, ctx);
        goto after_11;
    // 0x8024ECE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x8024ECE8: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x8024ECEC: beq         $v0, $zero, L_8024ED04
    if (ctx->r2 == 0) {
        // 0x8024ECF0: addiu       $t0, $t0, 0x3B20
        ctx->r8 = ADD32(ctx->r8, 0X3B20);
            goto L_8024ED04;
    }
    // 0x8024ECF0: addiu       $t0, $t0, 0x3B20
    ctx->r8 = ADD32(ctx->r8, 0X3B20);
    // 0x8024ECF4: lhu         $t7, 0x12($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X12);
    // 0x8024ECF8: nop

    // 0x8024ECFC: ori         $t8, $t7, 0x8
    ctx->r24 = ctx->r15 | 0X8;
    // 0x8024ED00: sh          $t8, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r24;
L_8024ED04:
    // 0x8024ED04: lhu         $a0, 0x16($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X16);
    // 0x8024ED08: nop

    // 0x8024ED0C: andi        $t9, $a0, 0x4000
    ctx->r25 = ctx->r4 & 0X4000;
    // 0x8024ED10: bne         $t9, $zero, L_8024EDD4
    if (ctx->r25 != 0) {
        // 0x8024ED14: nop
    
            goto L_8024EDD4;
    }
    // 0x8024ED14: nop

    // 0x8024ED18: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x8024ED1C: nop

    // 0x8024ED20: lw          $t1, 0xB0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0XB0);
    // 0x8024ED24: nop

    // 0x8024ED28: beq         $s0, $t1, L_8024EDD4
    if (ctx->r16 == ctx->r9) {
        // 0x8024ED2C: nop
    
            goto L_8024EDD4;
    }
    // 0x8024ED2C: nop

    // 0x8024ED30: lw          $v1, 0xC4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC4);
    // 0x8024ED34: andi        $t5, $a0, 0xFFF7
    ctx->r13 = ctx->r4 & 0XFFF7;
    // 0x8024ED38: lhu         $t2, 0x2($v1)
    ctx->r10 = MEM_HU(ctx->r3, 0X2);
    // 0x8024ED3C: nop

    // 0x8024ED40: andi        $t3, $t2, 0x200
    ctx->r11 = ctx->r10 & 0X200;
    // 0x8024ED44: beq         $t3, $zero, L_8024ED5C
    if (ctx->r11 == 0) {
        // 0x8024ED48: nop
    
            goto L_8024ED5C;
    }
    // 0x8024ED48: nop

    // 0x8024ED4C: lw          $t4, 0x88($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X88);
    // 0x8024ED50: ori         $t6, $a0, 0x8
    ctx->r14 = ctx->r4 | 0X8;
    // 0x8024ED54: bne         $s0, $t4, L_8024EDD0
    if (ctx->r16 != ctx->r12) {
        // 0x8024ED58: nop
    
            goto L_8024EDD0;
    }
    // 0x8024ED58: nop

L_8024ED5C:
    // 0x8024ED5C: lhu         $t6, 0x12($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X12);
    // 0x8024ED60: sh          $t5, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r13;
    // 0x8024ED64: andi        $t7, $t6, 0xFF77
    ctx->r15 = ctx->r14 & 0XFF77;
    // 0x8024ED68: sh          $t7, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r15;
    // 0x8024ED6C: lhu         $v0, 0x2($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X2);
    // 0x8024ED70: ori         $t1, $t7, 0x80
    ctx->r9 = ctx->r15 | 0X80;
    // 0x8024ED74: andi        $t8, $v0, 0x400
    ctx->r24 = ctx->r2 & 0X400;
    // 0x8024ED78: beq         $t8, $zero, L_8024ED94
    if (ctx->r24 == 0) {
        // 0x8024ED7C: andi        $t2, $v0, 0x1
        ctx->r10 = ctx->r2 & 0X1;
            goto L_8024ED94;
    }
    // 0x8024ED7C: andi        $t2, $v0, 0x1
    ctx->r10 = ctx->r2 & 0X1;
    // 0x8024ED80: lw          $v1, 0xC4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC4);
    // 0x8024ED84: sh          $t1, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r9;
    // 0x8024ED88: lhu         $v0, 0x2($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X2);
    // 0x8024ED8C: nop

    // 0x8024ED90: andi        $t2, $v0, 0x1
    ctx->r10 = ctx->r2 & 0X1;
L_8024ED94:
    // 0x8024ED94: beq         $t2, $zero, L_8024EDC4
    if (ctx->r10 == 0) {
        // 0x8024ED98: nop
    
            goto L_8024EDC4;
    }
    // 0x8024ED98: nop

    // 0x8024ED9C: lhu         $t3, 0x26($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X26);
    // 0x8024EDA0: nop

    // 0x8024EDA4: bne         $t3, $zero, L_8024EDD4
    if (ctx->r11 != 0) {
        // 0x8024EDA8: nop
    
            goto L_8024EDD4;
    }
    // 0x8024EDA8: nop

    // 0x8024EDAC: lhu         $t4, 0x12($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X12);
    // 0x8024EDB0: lwc1        $f8, 0x8C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x8024EDB4: ori         $t5, $t4, 0x8
    ctx->r13 = ctx->r12 | 0X8;
    // 0x8024EDB8: sh          $t5, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r13;
    // 0x8024EDBC: b           L_8024EDD4
    // 0x8024EDC0: swc1        $f8, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = ctx->f8.u32l;
        goto L_8024EDD4;
    // 0x8024EDC0: swc1        $f8, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = ctx->f8.u32l;
L_8024EDC4:
    // 0x8024EDC4: lwc1        $f10, 0x24($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X24);
    // 0x8024EDC8: b           L_8024EDD4
    // 0x8024EDCC: swc1        $f10, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = ctx->f10.u32l;
        goto L_8024EDD4;
    // 0x8024EDCC: swc1        $f10, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = ctx->f10.u32l;
L_8024EDD0:
    // 0x8024EDD0: sh          $t6, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r14;
L_8024EDD4:
    // 0x8024EDD4: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8024EDD8: lhu         $t7, 0xB78($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0XB78);
    // 0x8024EDDC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8024EDE0: bne         $t7, $at, L_8024EFA0
    if (ctx->r15 != ctx->r1) {
        // 0x8024EDE4: lhu         $v0, 0x26($sp)
        ctx->r2 = MEM_HU(ctx->r29, 0X26);
            goto L_8024EFA0;
    }
    // 0x8024EDE4: lhu         $v0, 0x26($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X26);
    // 0x8024EDE8: lhu         $t8, 0x12($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X12);
    // 0x8024EDEC: nop

    // 0x8024EDF0: ori         $t9, $t8, 0x8
    ctx->r25 = ctx->r24 | 0X8;
    // 0x8024EDF4: b           L_8024EF9C
    // 0x8024EDF8: sh          $t9, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r25;
        goto L_8024EF9C;
    // 0x8024EDF8: sh          $t9, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r25;
L_8024EDFC:
    // 0x8024EDFC: lhu         $t1, 0x12($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X12);
    // 0x8024EE00: nop

    // 0x8024EE04: andi        $t2, $t1, 0xFFF7
    ctx->r10 = ctx->r9 & 0XFFF7;
    // 0x8024EE08: andi        $a0, $t2, 0xFFFF
    ctx->r4 = ctx->r10 & 0XFFFF;
    // 0x8024EE0C: andi        $t3, $a0, 0x1
    ctx->r11 = ctx->r4 & 0X1;
    // 0x8024EE10: beq         $t3, $zero, L_8024EE98
    if (ctx->r11 == 0) {
        // 0x8024EE14: sh          $t2, 0x12($s0)
        MEM_H(0X12, ctx->r16) = ctx->r10;
            goto L_8024EE98;
    }
    // 0x8024EE14: sh          $t2, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r10;
    // 0x8024EE18: lhu         $t4, 0x14($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X14);
    // 0x8024EE1C: andi        $t6, $a0, 0x2
    ctx->r14 = ctx->r4 & 0X2;
    // 0x8024EE20: andi        $t5, $t4, 0x400
    ctx->r13 = ctx->r12 & 0X400;
    // 0x8024EE24: bne         $t5, $zero, L_8024EE98
    if (ctx->r13 != 0) {
        // 0x8024EE28: nop
    
            goto L_8024EE98;
    }
    // 0x8024EE28: nop

    // 0x8024EE2C: bne         $t6, $zero, L_8024EE40
    if (ctx->r14 != 0) {
        // 0x8024EE30: nop
    
            goto L_8024EE40;
    }
    // 0x8024EE30: nop

    // 0x8024EE34: jal         0x803F728C
    // 0x8024EE38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(0x803F728C)(rdram, ctx);
        goto after_12;
    // 0x8024EE38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x8024EE3C: sh          $v0, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r2;
L_8024EE40:
    // 0x8024EE40: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8024EE44: lw          $t7, 0xB2C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0XB2C);
    // 0x8024EE48: lui         $a2, 0x3F20
    ctx->r6 = S32(0X3F20 << 16);
    // 0x8024EE4C: beq         $s0, $t7, L_8024EE68
    if (ctx->r16 == ctx->r15) {
        // 0x8024EE50: nop
    
            goto L_8024EE68;
    }
    // 0x8024EE50: nop

    // 0x8024EE54: lhu         $t8, 0x16($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X16);
    // 0x8024EE58: nop

    // 0x8024EE5C: andi        $t9, $t8, 0x40
    ctx->r25 = ctx->r24 & 0X40;
    // 0x8024EE60: beq         $t9, $zero, L_8024EE74
    if (ctx->r25 == 0) {
        // 0x8024EE64: nop
    
            goto L_8024EE74;
    }
    // 0x8024EE64: nop

L_8024EE68:
    // 0x8024EE68: lwc1        $f0, 0x8C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x8024EE6C: b           L_8024EE80
    // 0x8024EE70: lw          $t1, 0xC4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC4);
        goto L_8024EE80;
    // 0x8024EE70: lw          $t1, 0xC4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC4);
L_8024EE74:
    // 0x8024EE74: lwc1        $f0, 0xB0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XB0);
    // 0x8024EE78: nop

    // 0x8024EE7C: lw          $t1, 0xC4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC4);
L_8024EE80:
    // 0x8024EE80: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8024EE84: lw          $a0, 0x3C($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X3C);
    // 0x8024EE88: jal         0x802755AC
    // 0x8024EE8C: ori         $a2, $a2, 0xD97C
    ctx->r6 = ctx->r6 | 0XD97C;
    ovl_8024B800_func_802755AC(rdram, ctx);
        goto after_13;
    // 0x8024EE8C: ori         $a2, $a2, 0xD97C
    ctx->r6 = ctx->r6 | 0XD97C;
    after_13:
    // 0x8024EE90: b           L_8024EFA0
    // 0x8024EE94: lhu         $v0, 0x26($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X26);
        goto L_8024EFA0;
    // 0x8024EE94: lhu         $v0, 0x26($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X26);
L_8024EE98:
    // 0x8024EE98: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x8024EE9C: lui         $t3, 0x8010
    ctx->r11 = S32(0X8010 << 16);
    // 0x8024EEA0: lw          $t2, 0x88($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X88);
    // 0x8024EEA4: nop

    // 0x8024EEA8: bne         $s0, $t2, L_8024EF08
    if (ctx->r16 != ctx->r10) {
        // 0x8024EEAC: nop
    
            goto L_8024EF08;
    }
    // 0x8024EEAC: nop

    // 0x8024EEB0: lbu         $t3, 0x5232($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X5232);
    // 0x8024EEB4: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8024EEB8: bne         $t3, $at, L_8024EF08
    if (ctx->r11 != ctx->r1) {
        // 0x8024EEBC: nop
    
            goto L_8024EF08;
    }
    // 0x8024EEBC: nop

    // 0x8024EEC0: lhu         $t4, 0x14($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X14);
    // 0x8024EEC4: andi        $t6, $a0, 0x800
    ctx->r14 = ctx->r4 & 0X800;
    // 0x8024EEC8: andi        $t5, $t4, 0x400
    ctx->r13 = ctx->r12 & 0X400;
    // 0x8024EECC: bne         $t5, $zero, L_8024EF08
    if (ctx->r13 != 0) {
        // 0x8024EED0: nop
    
            goto L_8024EF08;
    }
    // 0x8024EED0: nop

    // 0x8024EED4: bne         $t6, $zero, L_8024EF08
    if (ctx->r14 != 0) {
        // 0x8024EED8: nop
    
            goto L_8024EF08;
    }
    // 0x8024EED8: nop

    // 0x8024EEDC: lw          $t7, 0xA8($v0)
    ctx->r15 = MEM_W(ctx->r2, 0XA8);
    // 0x8024EEE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8024EEE4: beq         $s0, $t7, L_8024EF08
    if (ctx->r16 == ctx->r15) {
        // 0x8024EEE8: nop
    
            goto L_8024EF08;
    }
    // 0x8024EEE8: nop

    // 0x8024EEEC: jal         0x802A613C
    // 0x8024EEF0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A613C)(rdram, ctx);
        goto after_14;
    // 0x8024EEF0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_14:
    // 0x8024EEF4: lhu         $t8, 0x12($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X12);
    // 0x8024EEF8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8024EEFC: ori         $t9, $t8, 0x8
    ctx->r25 = ctx->r24 | 0X8;
    // 0x8024EF00: b           L_8024EFA4
    // 0x8024EF04: sh          $t9, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r25;
        goto L_8024EFA4;
    // 0x8024EF04: sh          $t9, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r25;
L_8024EF08:
    // 0x8024EF08: jal         0x802710B4
    // 0x8024EF0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_802710B4(rdram, ctx);
        goto after_15;
    // 0x8024EF0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x8024EF10: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x8024EF14: beq         $v0, $zero, L_8024EF2C
    if (ctx->r2 == 0) {
        // 0x8024EF18: addiu       $t0, $t0, 0x3B20
        ctx->r8 = ADD32(ctx->r8, 0X3B20);
            goto L_8024EF2C;
    }
    // 0x8024EF18: addiu       $t0, $t0, 0x3B20
    ctx->r8 = ADD32(ctx->r8, 0X3B20);
    // 0x8024EF1C: lhu         $t1, 0x12($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X12);
    // 0x8024EF20: nop

    // 0x8024EF24: ori         $t2, $t1, 0x8
    ctx->r10 = ctx->r9 | 0X8;
    // 0x8024EF28: sh          $t2, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r10;
L_8024EF2C:
    // 0x8024EF2C: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x8024EF30: nop

    // 0x8024EF34: lw          $t3, 0x84($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X84);
    // 0x8024EF38: nop

    // 0x8024EF3C: bne         $s0, $t3, L_8024EF9C
    if (ctx->r16 != ctx->r11) {
        // 0x8024EF40: nop
    
            goto L_8024EF9C;
    }
    // 0x8024EF40: nop

    // 0x8024EF44: lw          $t4, 0xA8($v0)
    ctx->r12 = MEM_W(ctx->r2, 0XA8);
    // 0x8024EF48: nop

    // 0x8024EF4C: bne         $s0, $t4, L_8024EFA0
    if (ctx->r16 != ctx->r12) {
        // 0x8024EF50: lhu         $v0, 0x26($sp)
        ctx->r2 = MEM_HU(ctx->r29, 0X26);
            goto L_8024EFA0;
    }
    // 0x8024EF50: lhu         $v0, 0x26($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X26);
    // 0x8024EF54: lhu         $t5, 0x12($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X12);
    // 0x8024EF58: nop

    // 0x8024EF5C: ori         $t6, $t5, 0x8
    ctx->r14 = ctx->r13 | 0X8;
    // 0x8024EF60: sh          $t6, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r14;
    // 0x8024EF64: lw          $t7, 0x0($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X0);
    // 0x8024EF68: andi        $a0, $t6, 0xFFFF
    ctx->r4 = ctx->r14 & 0XFFFF;
    // 0x8024EF6C: lw          $t8, 0xA4($t7)
    ctx->r24 = MEM_W(ctx->r15, 0XA4);
    // 0x8024EF70: andi        $t2, $a0, 0x2
    ctx->r10 = ctx->r4 & 0X2;
    // 0x8024EF74: lhu         $t9, 0x6($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X6);
    // 0x8024EF78: nop

    // 0x8024EF7C: andi        $t1, $t9, 0x5
    ctx->r9 = ctx->r25 & 0X5;
    // 0x8024EF80: bne         $t1, $zero, L_8024EFA0
    if (ctx->r9 != 0) {
        // 0x8024EF84: lhu         $v0, 0x26($sp)
        ctx->r2 = MEM_HU(ctx->r29, 0X26);
            goto L_8024EFA0;
    }
    // 0x8024EF84: lhu         $v0, 0x26($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X26);
    // 0x8024EF88: bne         $t2, $zero, L_8024EF9C
    if (ctx->r10 != 0) {
        // 0x8024EF8C: ori         $t3, $a0, 0x6
        ctx->r11 = ctx->r4 | 0X6;
            goto L_8024EF9C;
    }
    // 0x8024EF8C: ori         $t3, $a0, 0x6
    ctx->r11 = ctx->r4 | 0X6;
    // 0x8024EF90: sh          $t3, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r11;
    // 0x8024EF94: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x8024EF98: sh          $t4, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r12;
L_8024EF9C:
    // 0x8024EF9C: lhu         $v0, 0x26($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X26);
L_8024EFA0:
    // 0x8024EFA0: nop

L_8024EFA4:
    // 0x8024EFA4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8024EFA8:
    // 0x8024EFA8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8024EFAC: jr          $ra
    // 0x8024EFB0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8024EFB0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_8024B800_func_8024EFB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8024EFB4: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x8024EFB8: lw          $t6, 0x3B20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B20);
    // 0x8024EFBC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8024EFC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8024EFC4: lw          $t7, 0xA0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XA0);
    // 0x8024EFC8: addiu       $t8, $zero, 0x2C
    ctx->r24 = ADD32(0, 0X2C);
    // 0x8024EFCC: bne         $a0, $t7, L_8024EFEC
    if (ctx->r4 != ctx->r15) {
        // 0x8024EFD0: addiu       $t9, $zero, 0x19
        ctx->r25 = ADD32(0, 0X19);
            goto L_8024EFEC;
    }
    // 0x8024EFD0: addiu       $t9, $zero, 0x19
    ctx->r25 = ADD32(0, 0X19);
    // 0x8024EFD4: sb          $t8, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r24;
    // 0x8024EFD8: jal         0x8026D5D4
    // 0x8024EFDC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_8024B800_func_8026D5D4(rdram, ctx);
        goto after_0;
    // 0x8024EFDC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8024EFE0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8024EFE4: b           L_8024F000
    // 0x8024EFE8: nop

        goto L_8024F000;
    // 0x8024EFE8: nop

L_8024EFEC:
    // 0x8024EFEC: sb          $t9, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r25;
    // 0x8024EFF0: jal         0x8026DB68
    // 0x8024EFF4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_8024B800_func_8026DB68(rdram, ctx);
        goto after_1;
    // 0x8024EFF4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x8024EFF8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8024EFFC: nop

L_8024F000:
    // 0x8024F000: jal         0x8026BD38
    // 0x8024F004: nop

    ovl_8024B800_func_8026BD38(rdram, ctx);
        goto after_2;
    // 0x8024F004: nop

    after_2:
    // 0x8024F008: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8024F00C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8024F010: jr          $ra
    // 0x8024F014: nop

    return;
    // 0x8024F014: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8024F018(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8024F018: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8024F01C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8024F020: lhu         $t6, 0x3A($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X3A);
    // 0x8024F024: nop

    // 0x8024F028: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8024F02C: sltiu       $at, $t7, 0x8
    ctx->r1 = ctx->r15 < 0X8 ? 1 : 0;
    // 0x8024F030: beq         $at, $zero, L_8024F190
    if (ctx->r1 == 0) {
        // 0x8024F034: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_8024F190;
    }
    // 0x8024F034: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8024F038: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8024F03C: addu        $at, $at, $t7
    gpr jr_addend_8024F048 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8024F040: lw          $t7, -0x40A0($at)
    ctx->r15 = ADD32(ctx->r1, -0X40A0);
    // 0x8024F044: nop

    // 0x8024F048: jr          $t7
    // 0x8024F04C: nop

    switch (jr_addend_8024F048 >> 2) {
        case 0: goto L_8024F0FC; break;
        case 1: goto L_8024F060; break;
        case 2: goto L_8024F128; break;
        case 3: goto L_8024F10C; break;
        case 4: goto L_8024F138; break;
        case 5: goto L_8024F070; break;
        case 6: goto L_8024F188; break;
        case 7: goto L_8024F050; break;
        default: switch_error(__func__, 0x8024F048, 0x8027BF60);
    }
    // 0x8024F04C: nop

L_8024F050:
    // 0x8024F050: jal         0x8024BC08
    // 0x8024F054: addiu       $a1, $zero, 0x34
    ctx->r5 = ADD32(0, 0X34);
    ovl_8024B800_func_8024BC08(rdram, ctx);
        goto after_0;
    // 0x8024F054: addiu       $a1, $zero, 0x34
    ctx->r5 = ADD32(0, 0X34);
    after_0:
    // 0x8024F058: b           L_8024F194
    // 0x8024F05C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8024F194;
    // 0x8024F05C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8024F060:
    // 0x8024F060: jal         0x8024BC08
    // 0x8024F064: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    ovl_8024B800_func_8024BC08(rdram, ctx);
        goto after_1;
    // 0x8024F064: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    after_1:
    // 0x8024F068: b           L_8024F194
    // 0x8024F06C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8024F194;
    // 0x8024F06C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8024F070:
    // 0x8024F070: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x8024F074: jal         0x8024BC08
    // 0x8024F078: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_8024B800_func_8024BC08(rdram, ctx);
        goto after_2;
    // 0x8024F078: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_2:
    // 0x8024F07C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8024F080: jal         0x8024EFB4
    // 0x8024F084: nop

    ovl_8024B800_func_8024EFB4(rdram, ctx);
        goto after_3;
    // 0x8024F084: nop

    after_3:
    // 0x8024F088: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x8024F08C: lw          $t8, 0x3B20($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X3B20);
    // 0x8024F090: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8024F094: lhu         $t9, 0xC0($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0XC0);
    // 0x8024F098: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x8024F09C: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x8024F0A0: bne         $t0, $zero, L_8024F194
    if (ctx->r8 != 0) {
        // 0x8024F0A4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8024F194;
    }
    // 0x8024F0A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8024F0A8: lwc1        $f4, 0xB4($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XB4);
    // 0x8024F0AC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8024F0B0: nop

    // 0x8024F0B4: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x8024F0B8: nop

    // 0x8024F0BC: bc1t        L_8024F194
    if (c1cs) {
        // 0x8024F0C0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8024F194;
    }
    // 0x8024F0C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8024F0C4: lh          $t1, 0xE6($a0)
    ctx->r9 = MEM_H(ctx->r4, 0XE6);
    // 0x8024F0C8: nop

    // 0x8024F0CC: ori         $t2, $t1, 0x100
    ctx->r10 = ctx->r9 | 0X100;
    // 0x8024F0D0: sh          $t2, 0xE6($a0)
    MEM_H(0XE6, ctx->r4) = ctx->r10;
    // 0x8024F0D4: jal         0x80272CC0
    // 0x8024F0D8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_8024B800_func_80272CC0(rdram, ctx);
        goto after_4;
    // 0x8024F0D8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_4:
    // 0x8024F0DC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8024F0E0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8024F0E4: beq         $v0, $at, L_8024F190
    if (ctx->r2 == ctx->r1) {
        // 0x8024F0E8: addiu       $a1, $zero, 0xD
        ctx->r5 = ADD32(0, 0XD);
            goto L_8024F190;
    }
    // 0x8024F0E8: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x8024F0EC: jal         0x80272D3C
    // 0x8024F0F0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_8024B800_func_80272D3C(rdram, ctx);
        goto after_5;
    // 0x8024F0F0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x8024F0F4: b           L_8024F194
    // 0x8024F0F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8024F194;
    // 0x8024F0F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8024F0FC:
    // 0x8024F0FC: jal         0x8024BC08
    // 0x8024F100: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    ovl_8024B800_func_8024BC08(rdram, ctx);
        goto after_6;
    // 0x8024F100: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_6:
    // 0x8024F104: b           L_8024F194
    // 0x8024F108: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8024F194;
    // 0x8024F108: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8024F10C:
    // 0x8024F10C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x8024F110: jal         0x8024BC08
    // 0x8024F114: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_8024B800_func_8024BC08(rdram, ctx);
        goto after_7;
    // 0x8024F114: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_7:
    // 0x8024F118: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8024F11C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8024F120: b           L_8024F190
    // 0x8024F124: sh          $t3, 0xE8($a0)
    MEM_H(0XE8, ctx->r4) = ctx->r11;
        goto L_8024F190;
    // 0x8024F124: sh          $t3, 0xE8($a0)
    MEM_H(0XE8, ctx->r4) = ctx->r11;
L_8024F128:
    // 0x8024F128: jal         0x8024BC08
    // 0x8024F12C: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    ovl_8024B800_func_8024BC08(rdram, ctx);
        goto after_8;
    // 0x8024F12C: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    after_8:
    // 0x8024F130: b           L_8024F194
    // 0x8024F134: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8024F194;
    // 0x8024F134: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8024F138:
    // 0x8024F138: lhu         $t4, 0x36($a0)
    ctx->r12 = MEM_HU(ctx->r4, 0X36);
    // 0x8024F13C: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x8024F140: andi        $t5, $t4, 0x4
    ctx->r13 = ctx->r12 & 0X4;
    // 0x8024F144: beq         $t5, $zero, L_8024F178
    if (ctx->r13 == 0) {
        // 0x8024F148: nop
    
            goto L_8024F178;
    }
    // 0x8024F148: nop

    // 0x8024F14C: lw          $t6, 0x3B20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B20);
    // 0x8024F150: nop

    // 0x8024F154: lhu         $t7, 0x6A($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X6A);
    // 0x8024F158: nop

    // 0x8024F15C: slti        $at, $t7, 0x14
    ctx->r1 = SIGNED(ctx->r15) < 0X14 ? 1 : 0;
    // 0x8024F160: beq         $at, $zero, L_8024F178
    if (ctx->r1 == 0) {
        // 0x8024F164: nop
    
            goto L_8024F178;
    }
    // 0x8024F164: nop

    // 0x8024F168: jal         0x8024BC08
    // 0x8024F16C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_8024B800_func_8024BC08(rdram, ctx);
        goto after_9;
    // 0x8024F16C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_9:
    // 0x8024F170: b           L_8024F194
    // 0x8024F174: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8024F194;
    // 0x8024F174: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8024F178:
    // 0x8024F178: jal         0x8024BC08
    // 0x8024F17C: addiu       $a1, $zero, 0x2D
    ctx->r5 = ADD32(0, 0X2D);
    ovl_8024B800_func_8024BC08(rdram, ctx);
        goto after_10;
    // 0x8024F17C: addiu       $a1, $zero, 0x2D
    ctx->r5 = ADD32(0, 0X2D);
    after_10:
    // 0x8024F180: b           L_8024F194
    // 0x8024F184: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8024F194;
    // 0x8024F184: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8024F188:
    // 0x8024F188: jal         0x8024BC08
    // 0x8024F18C: addiu       $a1, $zero, 0x44
    ctx->r5 = ADD32(0, 0X44);
    ovl_8024B800_func_8024BC08(rdram, ctx);
        goto after_11;
    // 0x8024F18C: addiu       $a1, $zero, 0x44
    ctx->r5 = ADD32(0, 0X44);
    after_11:
L_8024F190:
    // 0x8024F190: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8024F194:
    // 0x8024F194: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8024F198: jr          $ra
    // 0x8024F19C: nop

    return;
    // 0x8024F19C: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8024F1A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8024F1A0: lhu         $t6, 0xE($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0XE);
    // 0x8024F1A4: addiu       $at, $zero, 0x12
    ctx->r1 = ADD32(0, 0X12);
    // 0x8024F1A8: bne         $t6, $at, L_8024F1BC
    if (ctx->r14 != ctx->r1) {
        // 0x8024F1AC: nop
    
            goto L_8024F1BC;
    }
    // 0x8024F1AC: nop

    // 0x8024F1B0: lwc1        $f4, 0xE8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XE8);
    // 0x8024F1B4: nop

    // 0x8024F1B8: swc1        $f4, 0x8C($a0)
    MEM_W(0X8C, ctx->r4) = ctx->f4.u32l;
L_8024F1BC:
    // 0x8024F1BC: jr          $ra
    // 0x8024F1C0: nop

    return;
    // 0x8024F1C0: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8024F1C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8024F1C4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8024F1C8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8024F1CC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8024F1D0: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x8024F1D4: lhu         $t6, 0x12($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X12);
    // 0x8024F1D8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8024F1DC: andi        $t7, $t6, 0xFFFB
    ctx->r15 = ctx->r14 & 0XFFFB;
    // 0x8024F1E0: andi        $t9, $t7, 0x40
    ctx->r25 = ctx->r15 & 0X40;
    // 0x8024F1E4: beq         $t9, $zero, L_8024F268
    if (ctx->r25 == 0) {
        // 0x8024F1E8: sh          $t7, 0x12($a0)
        MEM_H(0X12, ctx->r4) = ctx->r15;
            goto L_8024F268;
    }
    // 0x8024F1E8: sh          $t7, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r15;
    // 0x8024F1EC: lhu         $t0, 0x3A($a0)
    ctx->r8 = MEM_HU(ctx->r4, 0X3A);
    // 0x8024F1F0: nop

    // 0x8024F1F4: bne         $t0, $zero, L_8024F268
    if (ctx->r8 != 0) {
        // 0x8024F1F8: nop
    
            goto L_8024F268;
    }
    // 0x8024F1F8: nop

    // 0x8024F1FC: lhu         $t1, 0x20($a0)
    ctx->r9 = MEM_HU(ctx->r4, 0X20);
    // 0x8024F200: lw          $v0, 0xC4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC4);
    // 0x8024F204: andi        $t2, $t1, 0xFF7F
    ctx->r10 = ctx->r9 & 0XFF7F;
    // 0x8024F208: sh          $t2, 0x20($a0)
    MEM_H(0X20, ctx->r4) = ctx->r10;
    // 0x8024F20C: lwc1        $f4, 0x24($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X24);
    // 0x8024F210: ori         $t6, $t7, 0x8
    ctx->r14 = ctx->r15 | 0X8;
    // 0x8024F214: swc1        $f4, 0xBC($a0)
    MEM_W(0XBC, ctx->r4) = ctx->f4.u32l;
    // 0x8024F218: lwc1        $f6, 0x28($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X28);
    // 0x8024F21C: nop

    // 0x8024F220: swc1        $f6, 0xC0($a0)
    MEM_W(0XC0, ctx->r4) = ctx->f6.u32l;
    // 0x8024F224: lhu         $t3, 0x2($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X2);
    // 0x8024F228: nop

    // 0x8024F22C: andi        $t4, $t3, 0x1
    ctx->r12 = ctx->r11 & 0X1;
    // 0x8024F230: beq         $t4, $zero, L_8024F23C
    if (ctx->r12 == 0) {
        // 0x8024F234: nop
    
            goto L_8024F23C;
    }
    // 0x8024F234: nop

    // 0x8024F238: sh          $t6, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r14;
L_8024F23C:
    // 0x8024F23C: lhu         $t7, 0x12($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X12);
    // 0x8024F240: nop

    // 0x8024F244: andi        $t8, $t7, 0x8
    ctx->r24 = ctx->r15 & 0X8;
    // 0x8024F248: beq         $t8, $zero, L_8024F268
    if (ctx->r24 == 0) {
        // 0x8024F24C: nop
    
            goto L_8024F268;
    }
    // 0x8024F24C: nop

    // 0x8024F250: lwc1        $f0, 0x8C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x8024F254: lhu         $t9, 0x20($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X20);
    // 0x8024F258: swc1        $f0, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f0.u32l;
    // 0x8024F25C: ori         $t0, $t9, 0x80
    ctx->r8 = ctx->r25 | 0X80;
    // 0x8024F260: sh          $t0, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r8;
    // 0x8024F264: swc1        $f0, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = ctx->f0.u32l;
L_8024F268:
    // 0x8024F268: lw          $v1, 0xC8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC8);
    // 0x8024F26C: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8024F270: lw          $t1, 0x958($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X958);
    // 0x8024F274: addiu       $v0, $v0, 0x361E
    ctx->r2 = ADD32(ctx->r2, 0X361E);
    // 0x8024F278: bne         $s0, $t1, L_8024F284
    if (ctx->r16 != ctx->r9) {
        // 0x8024F27C: lui         $t2, 0x8009
        ctx->r10 = S32(0X8009 << 16);
            goto L_8024F284;
    }
    // 0x8024F27C: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x8024F280: sw          $zero, 0x958($v1)
    MEM_W(0X958, ctx->r3) = 0;
L_8024F284:
    // 0x8024F284: lw          $t2, 0x3B20($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X3B20);
    // 0x8024F288: nop

    // 0x8024F28C: lw          $t3, 0x88($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X88);
    // 0x8024F290: nop

    // 0x8024F294: bne         $s0, $t3, L_8024F2AC
    if (ctx->r16 != ctx->r11) {
        // 0x8024F298: nop
    
            goto L_8024F2AC;
    }
    // 0x8024F298: nop

    // 0x8024F29C: lhu         $t4, 0x0($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X0);
    // 0x8024F2A0: nop

    // 0x8024F2A4: ori         $t5, $t4, 0x400
    ctx->r13 = ctx->r12 | 0X400;
    // 0x8024F2A8: sh          $t5, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r13;
L_8024F2AC:
    // 0x8024F2AC: lhu         $t6, 0x18($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X18);
    // 0x8024F2B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8024F2B4: andi        $t7, $t6, 0xFFFE
    ctx->r15 = ctx->r14 & 0XFFFE;
    // 0x8024F2B8: jal         0x80271F6C
    // 0x8024F2BC: sh          $t7, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r15;
    ovl_8024B800_func_80271F6C(rdram, ctx);
        goto after_0;
    // 0x8024F2BC: sh          $t7, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r15;
    after_0:
    // 0x8024F2C0: bne         $v0, $zero, L_8024F328
    if (ctx->r2 != 0) {
        // 0x8024F2C4: nop
    
            goto L_8024F328;
    }
    // 0x8024F2C4: nop

    // 0x8024F2C8: lwc1        $f12, 0x4C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x8024F2CC: jal         0x80272AEC
    // 0x8024F2D0: nop

    ovl_8024B800_func_80272AEC(rdram, ctx);
        goto after_1;
    // 0x8024F2D0: nop

    after_1:
    // 0x8024F2D4: lui         $at, 0x43AC
    ctx->r1 = S32(0X43AC << 16);
    // 0x8024F2D8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8024F2DC: nop

    // 0x8024F2E0: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x8024F2E4: nop

    // 0x8024F2E8: bc1f        L_8024F328
    if (!c1cs) {
        // 0x8024F2EC: nop
    
            goto L_8024F328;
    }
    // 0x8024F2EC: nop

    // 0x8024F2F0: lwc1        $f12, 0x44($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X44);
    // 0x8024F2F4: jal         0x80272AEC
    // 0x8024F2F8: nop

    ovl_8024B800_func_80272AEC(rdram, ctx);
        goto after_2;
    // 0x8024F2F8: nop

    after_2:
    // 0x8024F2FC: lui         $at, 0x42B8
    ctx->r1 = S32(0X42B8 << 16);
    // 0x8024F300: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8024F304: nop

    // 0x8024F308: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x8024F30C: nop

    // 0x8024F310: bc1f        L_8024F328
    if (!c1cs) {
        // 0x8024F314: nop
    
            goto L_8024F328;
    }
    // 0x8024F314: nop

    // 0x8024F318: lhu         $t8, 0x18($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X18);
    // 0x8024F31C: nop

    // 0x8024F320: ori         $t9, $t8, 0x1
    ctx->r25 = ctx->r24 | 0X1;
    // 0x8024F324: sh          $t9, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r25;
L_8024F328:
    // 0x8024F328: lhu         $t0, 0x3A($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X3A);
    // 0x8024F32C: nop

    // 0x8024F330: beq         $t0, $zero, L_8024F350
    if (ctx->r8 == 0) {
        // 0x8024F334: nop
    
            goto L_8024F350;
    }
    // 0x8024F334: nop

    // 0x8024F338: jal         0x8024F018
    // 0x8024F33C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8024F018(rdram, ctx);
        goto after_3;
    // 0x8024F33C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8024F340: lhu         $t1, 0x3C($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X3C);
    // 0x8024F344: sh          $zero, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = 0;
    // 0x8024F348: b           L_8024F9A8
    // 0x8024F34C: sh          $t1, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r9;
        goto L_8024F9A8;
    // 0x8024F34C: sh          $t1, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r9;
L_8024F350:
    // 0x8024F350: lhu         $t2, 0x16($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X16);
    // 0x8024F354: lhu         $a3, 0x46($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X46);
    // 0x8024F358: andi        $t3, $t2, 0x40
    ctx->r11 = ctx->r10 & 0X40;
    // 0x8024F35C: beq         $t3, $zero, L_8024F380
    if (ctx->r11 == 0) {
        // 0x8024F360: sh          $a3, 0x36($s0)
        MEM_H(0X36, ctx->r16) = ctx->r7;
            goto L_8024F380;
    }
    // 0x8024F360: sh          $a3, 0x36($s0)
    MEM_H(0X36, ctx->r16) = ctx->r7;
    // 0x8024F364: andi        $t5, $a3, 0xD
    ctx->r13 = ctx->r7 & 0XD;
    // 0x8024F368: beq         $t5, $zero, L_8024F9A8
    if (ctx->r13 == 0) {
        // 0x8024F36C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8024F9A8;
    }
    // 0x8024F36C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8024F370: jal         0x8024BC08
    // 0x8024F374: addiu       $a1, $zero, 0x25
    ctx->r5 = ADD32(0, 0X25);
    ovl_8024B800_func_8024BC08(rdram, ctx);
        goto after_4;
    // 0x8024F374: addiu       $a1, $zero, 0x25
    ctx->r5 = ADD32(0, 0X25);
    after_4:
    // 0x8024F378: b           L_8024F9AC
    // 0x8024F37C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8024F9AC;
    // 0x8024F37C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8024F380:
    // 0x8024F380: lhu         $t6, 0x1A($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X1A);
    // 0x8024F384: nop

    // 0x8024F388: bne         $t6, $zero, L_8024F5AC
    if (ctx->r14 != 0) {
        // 0x8024F38C: nop
    
            goto L_8024F5AC;
    }
    // 0x8024F38C: nop

    // 0x8024F390: lw          $v1, 0xC8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC8);
    // 0x8024F394: nop

    // 0x8024F398: lhu         $t7, 0x928($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X928);
    // 0x8024F39C: nop

    // 0x8024F3A0: beq         $t7, $zero, L_8024F430
    if (ctx->r15 == 0) {
        // 0x8024F3A4: nop
    
            goto L_8024F430;
    }
    // 0x8024F3A4: nop

    // 0x8024F3A8: lhu         $t8, 0x8($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X8);
    // 0x8024F3AC: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x8024F3B0: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x8024F3B4: beq         $t9, $zero, L_8024F3C8
    if (ctx->r25 == 0) {
        // 0x8024F3B8: addiu       $a2, $a2, -0x2680
        ctx->r6 = ADD32(ctx->r6, -0X2680);
            goto L_8024F3C8;
    }
    // 0x8024F3B8: addiu       $a2, $a2, -0x2680
    ctx->r6 = ADD32(ctx->r6, -0X2680);
    // 0x8024F3BC: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x8024F3C0: b           L_8024F3C8
    // 0x8024F3C4: addiu       $a2, $a2, -0x2670
    ctx->r6 = ADD32(ctx->r6, -0X2670);
        goto L_8024F3C8;
    // 0x8024F3C4: addiu       $a2, $a2, -0x2670
    ctx->r6 = ADD32(ctx->r6, -0X2670);
L_8024F3C8:
    // 0x8024F3C8: lwc1        $f12, 0x4C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x8024F3CC: lwc1        $f14, 0x44($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X44);
    // 0x8024F3D0: jal         0x8027A184
    // 0x8024F3D4: nop

    ovl_8024B800_func_8027A184(rdram, ctx);
        goto after_5;
    // 0x8024F3D4: nop

    after_5:
    // 0x8024F3D8: bne         $v0, $zero, L_8024F400
    if (ctx->r2 != 0) {
        // 0x8024F3DC: nop
    
            goto L_8024F400;
    }
    // 0x8024F3DC: nop

    // 0x8024F3E0: jal         0x800681E8
    // 0x8024F3E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800681E8(rdram, ctx);
        goto after_6;
    // 0x8024F3E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x8024F3E8: bne         $v0, $zero, L_8024F400
    if (ctx->r2 != 0) {
        // 0x8024F3EC: nop
    
            goto L_8024F400;
    }
    // 0x8024F3EC: nop

    // 0x8024F3F0: jal         0x80067E94
    // 0x8024F3F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80067E94(rdram, ctx);
        goto after_7;
    // 0x8024F3F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x8024F3F8: b           L_8024F9AC
    // 0x8024F3FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8024F9AC;
    // 0x8024F3FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8024F400:
    // 0x8024F400: lw          $t0, 0xC8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XC8);
    // 0x8024F404: addiu       $at, $zero, 0x13
    ctx->r1 = ADD32(0, 0X13);
    // 0x8024F408: lhu         $t1, 0x928($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X928);
    // 0x8024F40C: lhu         $a3, 0x46($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X46);
    // 0x8024F410: bne         $t1, $at, L_8024F428
    if (ctx->r9 != ctx->r1) {
        // 0x8024F414: nop
    
            goto L_8024F428;
    }
    // 0x8024F414: nop

    // 0x8024F418: jal         0x80067E94
    // 0x8024F41C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80067E94(rdram, ctx);
        goto after_8;
    // 0x8024F41C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x8024F420: b           L_8024F9AC
    // 0x8024F424: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8024F9AC;
    // 0x8024F424: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8024F428:
    // 0x8024F428: b           L_8024F5AC
    // 0x8024F42C: nop

        goto L_8024F5AC;
    // 0x8024F42C: nop

L_8024F430:
    // 0x8024F430: lbu         $t2, 0x868($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X868);
    // 0x8024F434: nop

    // 0x8024F438: beq         $t2, $zero, L_8024F5AC
    if (ctx->r10 == 0) {
        // 0x8024F43C: nop
    
            goto L_8024F5AC;
    }
    // 0x8024F43C: nop

    // 0x8024F440: lhu         $t3, 0x36($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X36);
    // 0x8024F444: nop

    // 0x8024F448: andi        $t4, $t3, 0xC000
    ctx->r12 = ctx->r11 & 0XC000;
    // 0x8024F44C: beq         $t4, $zero, L_8024F5AC
    if (ctx->r12 == 0) {
        // 0x8024F450: nop
    
            goto L_8024F5AC;
    }
    // 0x8024F450: nop

    // 0x8024F454: lhu         $t5, 0x8($v1)
    ctx->r13 = MEM_HU(ctx->r3, 0X8);
    // 0x8024F458: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x8024F45C: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x8024F460: beq         $t6, $zero, L_8024F474
    if (ctx->r14 == 0) {
        // 0x8024F464: addiu       $a2, $a2, -0x2680
        ctx->r6 = ADD32(ctx->r6, -0X2680);
            goto L_8024F474;
    }
    // 0x8024F464: addiu       $a2, $a2, -0x2680
    ctx->r6 = ADD32(ctx->r6, -0X2680);
    // 0x8024F468: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x8024F46C: b           L_8024F474
    // 0x8024F470: addiu       $a2, $a2, -0x2670
    ctx->r6 = ADD32(ctx->r6, -0X2670);
        goto L_8024F474;
    // 0x8024F470: addiu       $a2, $a2, -0x2670
    ctx->r6 = ADD32(ctx->r6, -0X2670);
L_8024F474:
    // 0x8024F474: lwc1        $f12, 0x4C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x8024F478: lwc1        $f14, 0x44($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X44);
    // 0x8024F47C: jal         0x8027A184
    // 0x8024F480: nop

    ovl_8024B800_func_8027A184(rdram, ctx);
        goto after_9;
    // 0x8024F480: nop

    after_9:
    // 0x8024F484: bne         $v0, $zero, L_8024F58C
    if (ctx->r2 != 0) {
        // 0x8024F488: nop
    
            goto L_8024F58C;
    }
    // 0x8024F488: nop

    // 0x8024F48C: jal         0x800681E8
    // 0x8024F490: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800681E8(rdram, ctx);
        goto after_10;
    // 0x8024F490: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x8024F494: bne         $v0, $zero, L_8024F58C
    if (ctx->r2 != 0) {
        // 0x8024F498: nop
    
            goto L_8024F58C;
    }
    // 0x8024F498: nop

    // 0x8024F49C: lhu         $v0, 0x46($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X46);
    // 0x8024F4A0: nop

    // 0x8024F4A4: andi        $t7, $v0, 0x8000
    ctx->r15 = ctx->r2 & 0X8000;
    // 0x8024F4A8: beq         $t7, $zero, L_8024F4C0
    if (ctx->r15 == 0) {
        // 0x8024F4AC: andi        $t8, $v0, 0x4000
        ctx->r24 = ctx->r2 & 0X4000;
            goto L_8024F4C0;
    }
    // 0x8024F4AC: andi        $t8, $v0, 0x4000
    ctx->r24 = ctx->r2 & 0X4000;
    // 0x8024F4B0: jal         0x800683BC
    // 0x8024F4B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800683BC(rdram, ctx);
        goto after_11;
    // 0x8024F4B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x8024F4B8: b           L_8024F9AC
    // 0x8024F4BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8024F9AC;
    // 0x8024F4BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8024F4C0:
    // 0x8024F4C0: beq         $t8, $zero, L_8024F584
    if (ctx->r24 == 0) {
        // 0x8024F4C4: lhu         $a3, 0x46($sp)
        ctx->r7 = MEM_HU(ctx->r29, 0X46);
            goto L_8024F584;
    }
    // 0x8024F4C4: lhu         $a3, 0x46($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X46);
    // 0x8024F4C8: lw          $t9, 0xC4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC4);
    // 0x8024F4CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8024F4D0: lhu         $t0, 0x2($t9)
    ctx->r8 = MEM_HU(ctx->r25, 0X2);
    // 0x8024F4D4: nop

    // 0x8024F4D8: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x8024F4DC: beq         $t1, $zero, L_8024F548
    if (ctx->r9 == 0) {
        // 0x8024F4E0: nop
    
            goto L_8024F548;
    }
    // 0x8024F4E0: nop

    // 0x8024F4E4: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x8024F4E8: jal         0x80069D68
    // 0x8024F4EC: sh          $zero, 0x92A($t2)
    MEM_H(0X92A, ctx->r10) = 0;
    func_80069D68(rdram, ctx);
        goto after_12;
    // 0x8024F4EC: sh          $zero, 0x92A($t2)
    MEM_H(0X92A, ctx->r10) = 0;
    after_12:
    // 0x8024F4F0: lw          $v1, 0xC8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC8);
    // 0x8024F4F4: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8024F4F8: lhu         $a0, 0x928($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0X928);
    // 0x8024F4FC: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x8024F500: bne         $a0, $zero, L_8024F524
    if (ctx->r4 != 0) {
        // 0x8024F504: nop
    
            goto L_8024F524;
    }
    // 0x8024F504: nop

    // 0x8024F508: lhu         $t3, 0x92A($v1)
    ctx->r11 = MEM_HU(ctx->r3, 0X92A);
    // 0x8024F50C: nop

    // 0x8024F510: sh          $t3, 0x928($v1)
    MEM_H(0X928, ctx->r3) = ctx->r11;
    // 0x8024F514: lw          $v1, 0xC8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC8);
    // 0x8024F518: nop

    // 0x8024F51C: lhu         $a0, 0x928($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0X928);
    // 0x8024F520: nop

L_8024F524:
    // 0x8024F524: beq         $a0, $at, L_8024F534
    if (ctx->r4 == ctx->r1) {
        // 0x8024F528: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_8024F534;
    }
    // 0x8024F528: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8024F52C: bne         $a0, $at, L_8024F538
    if (ctx->r4 != ctx->r1) {
        // 0x8024F530: nop
    
            goto L_8024F538;
    }
    // 0x8024F530: nop

L_8024F534:
    // 0x8024F534: sh          $t4, 0x92A($v1)
    MEM_H(0X92A, ctx->r3) = ctx->r12;
L_8024F538:
    // 0x8024F538: jal         0x80067E94
    // 0x8024F53C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80067E94(rdram, ctx);
        goto after_13;
    // 0x8024F53C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x8024F540: b           L_8024F9AC
    // 0x8024F544: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8024F9AC;
    // 0x8024F544: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8024F548:
    // 0x8024F548: jal         0x8024F1A0
    // 0x8024F54C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8024F1A0(rdram, ctx);
        goto after_14;
    // 0x8024F54C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x8024F550: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8024F554: jal         0x8024BC08
    // 0x8024F558: addiu       $a1, $zero, 0x26
    ctx->r5 = ADD32(0, 0X26);
    ovl_8024B800_func_8024BC08(rdram, ctx);
        goto after_15;
    // 0x8024F558: addiu       $a1, $zero, 0x26
    ctx->r5 = ADD32(0, 0X26);
    after_15:
    // 0x8024F55C: lhu         $t5, 0x12($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X12);
    // 0x8024F560: lhu         $t7, 0x14($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X14);
    // 0x8024F564: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8024F568: ori         $t6, $t5, 0x2
    ctx->r14 = ctx->r13 | 0X2;
    // 0x8024F56C: ori         $t8, $t7, 0x1
    ctx->r24 = ctx->r15 | 0X1;
    // 0x8024F570: sh          $t6, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r14;
    // 0x8024F574: sh          $t8, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r24;
    // 0x8024F578: b           L_8024F9A8
    // 0x8024F57C: sh          $t9, 0xE8($s0)
    MEM_H(0XE8, ctx->r16) = ctx->r25;
        goto L_8024F9A8;
    // 0x8024F57C: sh          $t9, 0xE8($s0)
    MEM_H(0XE8, ctx->r16) = ctx->r25;
    // 0x8024F580: lhu         $a3, 0x46($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X46);
L_8024F584:
    // 0x8024F584: b           L_8024F5AC
    // 0x8024F588: nop

        goto L_8024F5AC;
    // 0x8024F588: nop

L_8024F58C:
    // 0x8024F58C: lhu         $t0, 0x36($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X36);
    // 0x8024F590: nop

    // 0x8024F594: andi        $t2, $t0, 0x3FFF
    ctx->r10 = ctx->r8 & 0X3FFF;
    // 0x8024F598: sh          $t2, 0x36($s0)
    MEM_H(0X36, ctx->r16) = ctx->r10;
    // 0x8024F59C: ori         $t3, $t2, 0x4
    ctx->r11 = ctx->r10 | 0X4;
    // 0x8024F5A0: sh          $t3, 0x36($s0)
    MEM_H(0X36, ctx->r16) = ctx->r11;
    // 0x8024F5A4: lhu         $a3, 0x46($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X46);
    // 0x8024F5A8: nop

L_8024F5AC:
    // 0x8024F5AC: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8024F5B0: lw          $v0, 0x3680($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3680);
    // 0x8024F5B4: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x8024F5B8: bne         $v0, $zero, L_8024F5E0
    if (ctx->r2 != 0) {
        // 0x8024F5BC: nop
    
            goto L_8024F5E0;
    }
    // 0x8024F5BC: nop

    // 0x8024F5C0: lw          $v1, 0x3B20($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3B20);
    // 0x8024F5C4: nop

    // 0x8024F5C8: lw          $v0, 0xA0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XA0);
    // 0x8024F5CC: nop

    // 0x8024F5D0: bne         $v0, $zero, L_8024F5E0
    if (ctx->r2 != 0) {
        // 0x8024F5D4: nop
    
            goto L_8024F5E0;
    }
    // 0x8024F5D4: nop

    // 0x8024F5D8: lw          $v0, 0xB0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XB0);
    // 0x8024F5DC: nop

L_8024F5E0:
    // 0x8024F5E0: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x8024F5E4: lw          $v1, 0x3B20($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3B20);
    // 0x8024F5E8: beq         $v0, $zero, L_8024F608
    if (ctx->r2 == 0) {
        // 0x8024F5EC: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_8024F608;
    }
    // 0x8024F5EC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8024F5F0: lw          $t4, 0xC8($v0)
    ctx->r12 = MEM_W(ctx->r2, 0XC8);
    // 0x8024F5F4: lw          $t5, 0xC8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XC8);
    // 0x8024F5F8: nop

    // 0x8024F5FC: bne         $t4, $t5, L_8024F608
    if (ctx->r12 != ctx->r13) {
        // 0x8024F600: nop
    
            goto L_8024F608;
    }
    // 0x8024F600: nop

    // 0x8024F604: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8024F608:
    // 0x8024F608: lhu         $a1, 0x12($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X12);
    // 0x8024F60C: nop

    // 0x8024F610: andi        $t6, $a1, 0x1
    ctx->r14 = ctx->r5 & 0X1;
    // 0x8024F614: beq         $t6, $zero, L_8024F6D4
    if (ctx->r14 == 0) {
        // 0x8024F618: nop
    
            goto L_8024F6D4;
    }
    // 0x8024F618: nop

    // 0x8024F61C: beq         $v0, $zero, L_8024F638
    if (ctx->r2 == 0) {
        // 0x8024F620: nop
    
            goto L_8024F638;
    }
    // 0x8024F620: nop

    // 0x8024F624: lhu         $t7, 0x6A($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X6A);
    // 0x8024F628: nop

    // 0x8024F62C: slti        $at, $t7, 0x1E
    ctx->r1 = SIGNED(ctx->r15) < 0X1E ? 1 : 0;
    // 0x8024F630: bne         $at, $zero, L_8024F674
    if (ctx->r1 != 0) {
        // 0x8024F634: nop
    
            goto L_8024F674;
    }
    // 0x8024F634: nop

L_8024F638:
    // 0x8024F638: beq         $s0, $a0, L_8024F6D4
    if (ctx->r16 == ctx->r4) {
        // 0x8024F63C: nop
    
            goto L_8024F6D4;
    }
    // 0x8024F63C: nop

    // 0x8024F640: lw          $t8, 0x8C($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X8C);
    // 0x8024F644: nop

    // 0x8024F648: beq         $s0, $t8, L_8024F6D4
    if (ctx->r16 == ctx->r24) {
        // 0x8024F64C: nop
    
            goto L_8024F6D4;
    }
    // 0x8024F64C: nop

    // 0x8024F650: lbu         $t9, 0xBC($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0XBC);
    // 0x8024F654: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x8024F658: beq         $t9, $at, L_8024F6D4
    if (ctx->r25 == ctx->r1) {
        // 0x8024F65C: nop
    
            goto L_8024F6D4;
    }
    // 0x8024F65C: nop

    // 0x8024F660: lhu         $t0, 0x6A($v1)
    ctx->r8 = MEM_HU(ctx->r3, 0X6A);
    // 0x8024F664: nop

    // 0x8024F668: slti        $at, $t0, 0x8
    ctx->r1 = SIGNED(ctx->r8) < 0X8 ? 1 : 0;
    // 0x8024F66C: beq         $at, $zero, L_8024F6D4
    if (ctx->r1 == 0) {
        // 0x8024F670: nop
    
            goto L_8024F6D4;
    }
    // 0x8024F670: nop

L_8024F674:
    // 0x8024F674: lhu         $v0, 0x36($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X36);
    // 0x8024F678: nop

    // 0x8024F67C: andi        $t1, $v0, 0x4
    ctx->r9 = ctx->r2 & 0X4;
    // 0x8024F680: beq         $t1, $zero, L_8024F6A4
    if (ctx->r9 == 0) {
        // 0x8024F684: andi        $t2, $v0, 0x1
        ctx->r10 = ctx->r2 & 0X1;
            goto L_8024F6A4;
    }
    // 0x8024F684: andi        $t2, $v0, 0x1
    ctx->r10 = ctx->r2 & 0X1;
    // 0x8024F688: jal         0x8024F1A0
    // 0x8024F68C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8024F1A0(rdram, ctx);
        goto after_16;
    // 0x8024F68C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x8024F690: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8024F694: jal         0x8024BC08
    // 0x8024F698: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_8024B800_func_8024BC08(rdram, ctx);
        goto after_17;
    // 0x8024F698: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_17:
    // 0x8024F69C: b           L_8024F9AC
    // 0x8024F6A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8024F9AC;
    // 0x8024F6A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8024F6A4:
    // 0x8024F6A4: beq         $t2, $zero, L_8024F6D4
    if (ctx->r10 == 0) {
        // 0x8024F6A8: nop
    
            goto L_8024F6D4;
    }
    // 0x8024F6A8: nop

    // 0x8024F6AC: jal         0x8024F1A0
    // 0x8024F6B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8024F1A0(rdram, ctx);
        goto after_18;
    // 0x8024F6B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
    // 0x8024F6B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8024F6B8: jal         0x8024BC08
    // 0x8024F6BC: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    ovl_8024B800_func_8024BC08(rdram, ctx);
        goto after_19;
    // 0x8024F6BC: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    after_19:
    // 0x8024F6C0: lhu         $t3, 0x18($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X18);
    // 0x8024F6C4: nop

    // 0x8024F6C8: ori         $t4, $t3, 0x400
    ctx->r12 = ctx->r11 | 0X400;
    // 0x8024F6CC: b           L_8024F9A8
    // 0x8024F6D0: sh          $t4, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r12;
        goto L_8024F9A8;
    // 0x8024F6D0: sh          $t4, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r12;
L_8024F6D4:
    // 0x8024F6D4: lw          $a0, 0x88($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X88);
    // 0x8024F6D8: nop

    // 0x8024F6DC: bne         $a0, $zero, L_8024F82C
    if (ctx->r4 != 0) {
        // 0x8024F6E0: nop
    
            goto L_8024F82C;
    }
    // 0x8024F6E0: nop

    // 0x8024F6E4: lhu         $t5, 0x6A($v1)
    ctx->r13 = MEM_HU(ctx->r3, 0X6A);
    // 0x8024F6E8: nop

    // 0x8024F6EC: slti        $at, $t5, 0x8
    ctx->r1 = SIGNED(ctx->r13) < 0X8 ? 1 : 0;
    // 0x8024F6F0: beq         $at, $zero, L_8024F760
    if (ctx->r1 == 0) {
        // 0x8024F6F4: nop
    
            goto L_8024F760;
    }
    // 0x8024F6F4: nop

    // 0x8024F6F8: lw          $t7, 0x8C($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X8C);
    // 0x8024F6FC: lw          $t6, 0xC8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC8);
    // 0x8024F700: lw          $t8, 0xC8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0XC8);
    // 0x8024F704: lui         $at, 0x4010
    ctx->r1 = S32(0X4010 << 16);
    // 0x8024F708: beq         $t6, $t8, L_8024F760
    if (ctx->r14 == ctx->r24) {
        // 0x8024F70C: nop
    
            goto L_8024F760;
    }
    // 0x8024F70C: nop

    // 0x8024F710: lwc1        $f18, 0x10($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X10);
    // 0x8024F714: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x8024F718: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8024F71C: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x8024F720: c.lt.d      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.d < ctx->f4.d;
    // 0x8024F724: nop

    // 0x8024F728: bc1f        L_8024F760
    if (!c1cs) {
        // 0x8024F72C: nop
    
            goto L_8024F760;
    }
    // 0x8024F72C: nop

    // 0x8024F730: lbu         $t9, 0xBD($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0XBD);
    // 0x8024F734: nop

    // 0x8024F738: andi        $t0, $t9, 0x6
    ctx->r8 = ctx->r25 & 0X6;
    // 0x8024F73C: beq         $t0, $zero, L_8024F760
    if (ctx->r8 == 0) {
        // 0x8024F740: nop
    
            goto L_8024F760;
    }
    // 0x8024F740: nop

    // 0x8024F744: jal         0x8024F1A0
    // 0x8024F748: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8024F1A0(rdram, ctx);
        goto after_20;
    // 0x8024F748: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_20:
    // 0x8024F74C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8024F750: jal         0x8024BC08
    // 0x8024F754: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    ovl_8024B800_func_8024BC08(rdram, ctx);
        goto after_21;
    // 0x8024F754: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_21:
    // 0x8024F758: b           L_8024F9AC
    // 0x8024F75C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8024F9AC;
    // 0x8024F75C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8024F760:
    // 0x8024F760: lhu         $t1, 0x14($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X14);
    // 0x8024F764: andi        $t3, $a3, 0xD
    ctx->r11 = ctx->r7 & 0XD;
    // 0x8024F768: andi        $t2, $t1, 0x100
    ctx->r10 = ctx->r9 & 0X100;
    // 0x8024F76C: beq         $t2, $zero, L_8024F790
    if (ctx->r10 == 0) {
        // 0x8024F770: nop
    
            goto L_8024F790;
    }
    // 0x8024F770: nop

    // 0x8024F774: jal         0x8024F1A0
    // 0x8024F778: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8024F1A0(rdram, ctx);
        goto after_22;
    // 0x8024F778: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_22:
    // 0x8024F77C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8024F780: jal         0x8024BC08
    // 0x8024F784: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    ovl_8024B800_func_8024BC08(rdram, ctx);
        goto after_23;
    // 0x8024F784: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    after_23:
    // 0x8024F788: b           L_8024F9AC
    // 0x8024F78C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8024F9AC;
    // 0x8024F78C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8024F790:
    // 0x8024F790: beq         $t3, $zero, L_8024F9AC
    if (ctx->r11 == 0) {
        // 0x8024F794: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8024F9AC;
    }
    // 0x8024F794: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8024F798: lw          $t4, 0x90($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X90);
    // 0x8024F79C: addiu       $t2, $zero, 0x1E
    ctx->r10 = ADD32(0, 0X1E);
    // 0x8024F7A0: bne         $s0, $t4, L_8024F810
    if (ctx->r16 != ctx->r12) {
        // 0x8024F7A4: lui         $t3, 0x8009
        ctx->r11 = S32(0X8009 << 16);
            goto L_8024F810;
    }
    // 0x8024F7A4: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x8024F7A8: jal         0x8024F1A0
    // 0x8024F7AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8024F1A0(rdram, ctx);
        goto after_24;
    // 0x8024F7AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_24:
    // 0x8024F7B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8024F7B4: jal         0x8024BC08
    // 0x8024F7B8: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    ovl_8024B800_func_8024BC08(rdram, ctx);
        goto after_25;
    // 0x8024F7B8: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    after_25:
    // 0x8024F7BC: lh          $t5, 0xE6($s0)
    ctx->r13 = MEM_H(ctx->r16, 0XE6);
    // 0x8024F7C0: lw          $t6, 0xC8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC8);
    // 0x8024F7C4: ori         $t7, $t5, 0x80
    ctx->r15 = ctx->r13 | 0X80;
    // 0x8024F7C8: sh          $t7, 0xE6($s0)
    MEM_H(0XE6, ctx->r16) = ctx->r15;
    // 0x8024F7CC: lhu         $t8, 0x6($t6)
    ctx->r24 = MEM_HU(ctx->r14, 0X6);
    // 0x8024F7D0: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8024F7D4: sb          $t8, -0x1B50($at)
    MEM_B(-0X1B50, ctx->r1) = ctx->r24;
    // 0x8024F7D8: lhu         $t9, 0x1A($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X1A);
    // 0x8024F7DC: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x8024F7E0: lw          $t0, 0x3B20($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X3B20);
    // 0x8024F7E4: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8024F7E8: sb          $t9, -0x1B4F($at)
    MEM_B(-0X1B4F, ctx->r1) = ctx->r25;
    // 0x8024F7EC: lhu         $t1, 0x6C($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X6C);
    // 0x8024F7F0: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8024F7F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8024F7F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8024F7FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8024F800: jal         0x80272D3C
    // 0x8024F804: sh          $t1, -0x1B4E($at)
    MEM_H(-0X1B4E, ctx->r1) = ctx->r9;
    ovl_8024B800_func_80272D3C(rdram, ctx);
        goto after_26;
    // 0x8024F804: sh          $t1, -0x1B4E($at)
    MEM_H(-0X1B4E, ctx->r1) = ctx->r9;
    after_26:
    // 0x8024F808: b           L_8024F9AC
    // 0x8024F80C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8024F9AC;
    // 0x8024F80C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8024F810:
    // 0x8024F810: sh          $t2, 0x38($s0)
    MEM_H(0X38, ctx->r16) = ctx->r10;
    // 0x8024F814: sh          $zero, 0x3C($s0)
    MEM_H(0X3C, ctx->r16) = 0;
    // 0x8024F818: lw          $t3, 0x3B20($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X3B20);
    // 0x8024F81C: nop

    // 0x8024F820: lhu         $t4, 0x6C($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0X6C);
    // 0x8024F824: b           L_8024F9A8
    // 0x8024F828: sh          $t4, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r12;
        goto L_8024F9A8;
    // 0x8024F828: sh          $t4, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r12;
L_8024F82C:
    // 0x8024F82C: bne         $s0, $a0, L_8024F930
    if (ctx->r16 != ctx->r4) {
        // 0x8024F830: or          $v0, $a3, $zero
        ctx->r2 = ctx->r7 | 0;
            goto L_8024F930;
    }
    // 0x8024F830: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    // 0x8024F834: andi        $t5, $a3, 0x4
    ctx->r13 = ctx->r7 & 0X4;
    // 0x8024F838: beq         $t5, $zero, L_8024F84C
    if (ctx->r13 == 0) {
        // 0x8024F83C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8024F84C;
    }
    // 0x8024F83C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8024F840: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x8024F844: b           L_8024F920
    // 0x8024F848: sh          $t7, 0x36($s0)
    MEM_H(0X36, ctx->r16) = ctx->r15;
        goto L_8024F920;
    // 0x8024F848: sh          $t7, 0x36($s0)
    MEM_H(0X36, ctx->r16) = ctx->r15;
L_8024F84C:
    // 0x8024F84C: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x8024F850: beq         $t6, $zero, L_8024F8C0
    if (ctx->r14 == 0) {
        // 0x8024F854: andi        $t3, $v0, 0x8
        ctx->r11 = ctx->r2 & 0X8;
            goto L_8024F8C0;
    }
    // 0x8024F854: andi        $t3, $v0, 0x8
    ctx->r11 = ctx->r2 & 0X8;
    // 0x8024F858: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8024F85C: andi        $t9, $a1, 0x8
    ctx->r25 = ctx->r5 & 0X8;
    // 0x8024F860: beq         $t9, $zero, L_8024F920
    if (ctx->r25 == 0) {
        // 0x8024F864: sh          $t8, 0x36($s0)
        MEM_H(0X36, ctx->r16) = ctx->r24;
            goto L_8024F920;
    }
    // 0x8024F864: sh          $t8, 0x36($s0)
    MEM_H(0X36, ctx->r16) = ctx->r24;
    // 0x8024F868: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8024F86C: lwc1        $f8, 0x50($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X50);
    // 0x8024F870: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8024F874: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x8024F878: nop

    // 0x8024F87C: bc1t        L_8024F8B0
    if (c1cs) {
        // 0x8024F880: nop
    
            goto L_8024F8B0;
    }
    // 0x8024F880: nop

    // 0x8024F884: lhu         $t0, 0xE($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0XE);
    // 0x8024F888: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x8024F88C: beq         $t0, $at, L_8024F9A8
    if (ctx->r8 == ctx->r1) {
        // 0x8024F890: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8024F9A8;
    }
    // 0x8024F890: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8024F894: jal         0x8024BC08
    // 0x8024F898: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    ovl_8024B800_func_8024BC08(rdram, ctx);
        goto after_27;
    // 0x8024F898: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    after_27:
    // 0x8024F89C: lhu         $t1, 0x14($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X14);
    // 0x8024F8A0: nop

    // 0x8024F8A4: ori         $t2, $t1, 0x80
    ctx->r10 = ctx->r9 | 0X80;
    // 0x8024F8A8: b           L_8024F9A8
    // 0x8024F8AC: sh          $t2, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r10;
        goto L_8024F9A8;
    // 0x8024F8AC: sh          $t2, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r10;
L_8024F8B0:
    // 0x8024F8B0: jal         0x8024BC08
    // 0x8024F8B4: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    ovl_8024B800_func_8024BC08(rdram, ctx);
        goto after_28;
    // 0x8024F8B4: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    after_28:
    // 0x8024F8B8: b           L_8024F9AC
    // 0x8024F8BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8024F9AC;
    // 0x8024F8BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8024F8C0:
    // 0x8024F8C0: beq         $t3, $zero, L_8024F8D4
    if (ctx->r11 == 0) {
        // 0x8024F8C4: andi        $t5, $v0, 0x8000
        ctx->r13 = ctx->r2 & 0X8000;
            goto L_8024F8D4;
    }
    // 0x8024F8C4: andi        $t5, $v0, 0x8000
    ctx->r13 = ctx->r2 & 0X8000;
    // 0x8024F8C8: addiu       $t4, $zero, 0x8
    ctx->r12 = ADD32(0, 0X8);
    // 0x8024F8CC: b           L_8024F920
    // 0x8024F8D0: sh          $t4, 0x36($s0)
    MEM_H(0X36, ctx->r16) = ctx->r12;
        goto L_8024F920;
    // 0x8024F8D0: sh          $t4, 0x36($s0)
    MEM_H(0X36, ctx->r16) = ctx->r12;
L_8024F8D4:
    // 0x8024F8D4: beq         $t5, $zero, L_8024F8E8
    if (ctx->r13 == 0) {
        // 0x8024F8D8: andi        $t6, $v0, 0x4000
        ctx->r14 = ctx->r2 & 0X4000;
            goto L_8024F8E8;
    }
    // 0x8024F8D8: andi        $t6, $v0, 0x4000
    ctx->r14 = ctx->r2 & 0X4000;
    // 0x8024F8DC: ori         $t7, $zero, 0x8000
    ctx->r15 = 0 | 0X8000;
    // 0x8024F8E0: b           L_8024F920
    // 0x8024F8E4: sh          $t7, 0x36($s0)
    MEM_H(0X36, ctx->r16) = ctx->r15;
        goto L_8024F920;
    // 0x8024F8E4: sh          $t7, 0x36($s0)
    MEM_H(0X36, ctx->r16) = ctx->r15;
L_8024F8E8:
    // 0x8024F8E8: beq         $t6, $zero, L_8024F8F8
    if (ctx->r14 == 0) {
        // 0x8024F8EC: addiu       $t8, $zero, 0x4000
        ctx->r24 = ADD32(0, 0X4000);
            goto L_8024F8F8;
    }
    // 0x8024F8EC: addiu       $t8, $zero, 0x4000
    ctx->r24 = ADD32(0, 0X4000);
    // 0x8024F8F0: b           L_8024F920
    // 0x8024F8F4: sh          $t8, 0x36($s0)
    MEM_H(0X36, ctx->r16) = ctx->r24;
        goto L_8024F920;
    // 0x8024F8F4: sh          $t8, 0x36($s0)
    MEM_H(0X36, ctx->r16) = ctx->r24;
L_8024F8F8:
    // 0x8024F8F8: lw          $t9, 0x84($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X84);
    // 0x8024F8FC: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x8024F900: bne         $s0, $t9, L_8024F9A8
    if (ctx->r16 != ctx->r25) {
        // 0x8024F904: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8024F9A8;
    }
    // 0x8024F904: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8024F908: sh          $t0, 0x36($s0)
    MEM_H(0X36, ctx->r16) = ctx->r8;
    // 0x8024F90C: jal         0x8024BC08
    // 0x8024F910: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    ovl_8024B800_func_8024BC08(rdram, ctx);
        goto after_29;
    // 0x8024F910: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    after_29:
    // 0x8024F914: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8024F918: b           L_8024F9A8
    // 0x8024F91C: sh          $t1, 0xE8($s0)
    MEM_H(0XE8, ctx->r16) = ctx->r9;
        goto L_8024F9A8;
    // 0x8024F91C: sh          $t1, 0xE8($s0)
    MEM_H(0XE8, ctx->r16) = ctx->r9;
L_8024F920:
    // 0x8024F920: jal         0x8024BC08
    // 0x8024F924: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    ovl_8024B800_func_8024BC08(rdram, ctx);
        goto after_30;
    // 0x8024F924: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    after_30:
    // 0x8024F928: b           L_8024F9AC
    // 0x8024F92C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8024F9AC;
    // 0x8024F92C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8024F930:
    // 0x8024F930: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8024F934: jal         0x8024F1A0
    // 0x8024F938: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    ovl_8024B800_func_8024F1A0(rdram, ctx);
        goto after_31;
    // 0x8024F938: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_31:
    // 0x8024F93C: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x8024F940: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8024F944: andi        $t2, $v0, 0x4
    ctx->r10 = ctx->r2 & 0X4;
    // 0x8024F948: beq         $t2, $zero, L_8024F960
    if (ctx->r10 == 0) {
        // 0x8024F94C: andi        $t3, $v0, 0x5
        ctx->r11 = ctx->r2 & 0X5;
            goto L_8024F960;
    }
    // 0x8024F94C: andi        $t3, $v0, 0x5
    ctx->r11 = ctx->r2 & 0X5;
    // 0x8024F950: jal         0x8024BC08
    // 0x8024F954: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_8024B800_func_8024BC08(rdram, ctx);
        goto after_32;
    // 0x8024F954: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_32:
    // 0x8024F958: b           L_8024F9AC
    // 0x8024F95C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8024F9AC;
    // 0x8024F95C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8024F960:
    // 0x8024F960: beq         $t3, $zero, L_8024F998
    if (ctx->r11 == 0) {
        // 0x8024F964: andi        $t8, $v0, 0x1
        ctx->r24 = ctx->r2 & 0X1;
            goto L_8024F998;
    }
    // 0x8024F964: andi        $t8, $v0, 0x1
    ctx->r24 = ctx->r2 & 0X1;
    // 0x8024F968: lw          $t4, 0xC4($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XC4);
    // 0x8024F96C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8024F970: lhu         $t5, 0x6($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0X6);
    // 0x8024F974: nop

    // 0x8024F978: or          $t7, $t5, $v0
    ctx->r15 = ctx->r13 | ctx->r2;
    // 0x8024F97C: andi        $t6, $t7, 0x8
    ctx->r14 = ctx->r15 & 0X8;
    // 0x8024F980: beq         $t6, $zero, L_8024F998
    if (ctx->r14 == 0) {
        // 0x8024F984: nop
    
            goto L_8024F998;
    }
    // 0x8024F984: nop

    // 0x8024F988: jal         0x8024BC08
    // 0x8024F98C: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    ovl_8024B800_func_8024BC08(rdram, ctx);
        goto after_33;
    // 0x8024F98C: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    after_33:
    // 0x8024F990: b           L_8024F9AC
    // 0x8024F994: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8024F9AC;
    // 0x8024F994: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8024F998:
    // 0x8024F998: beq         $t8, $zero, L_8024F9A8
    if (ctx->r24 == 0) {
        // 0x8024F99C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8024F9A8;
    }
    // 0x8024F99C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8024F9A0: jal         0x8024BC08
    // 0x8024F9A4: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    ovl_8024B800_func_8024BC08(rdram, ctx);
        goto after_34;
    // 0x8024F9A4: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    after_34:
L_8024F9A8:
    // 0x8024F9A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8024F9AC:
    // 0x8024F9AC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8024F9B0: jr          $ra
    // 0x8024F9B4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x8024F9B4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_8024B800_func_8024F9B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8024F9B8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8024F9BC: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x8024F9C0: lhu         $t0, 0x4A($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X4A);
    // 0x8024F9C4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8024F9C8: andi        $t6, $t0, 0x80
    ctx->r14 = ctx->r8 & 0X80;
    // 0x8024F9CC: andi        $t7, $t0, 0x7F
    ctx->r15 = ctx->r8 & 0X7F;
    // 0x8024F9D0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8024F9D4: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x8024F9D8: sw          $t6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r14;
    // 0x8024F9DC: sh          $t7, 0x4A($sp)
    MEM_H(0X4A, ctx->r29) = ctx->r15;
    // 0x8024F9E0: lw          $t8, 0xD8($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XD8);
    // 0x8024F9E4: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8024F9E8: lbu         $t9, 0x1B($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X1B);
    // 0x8024F9EC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8024F9F0: sb          $t9, -0x1B5C($at)
    MEM_B(-0X1B5C, ctx->r1) = ctx->r25;
    // 0x8024F9F4: lw          $t3, 0xC8($a0)
    ctx->r11 = MEM_W(ctx->r4, 0XC8);
    // 0x8024F9F8: lw          $t2, 0xC8($a1)
    ctx->r10 = MEM_W(ctx->r5, 0XC8);
    // 0x8024F9FC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8024FA00: beq         $t2, $t3, L_8024FF14
    if (ctx->r10 == ctx->r11) {
        // 0x8024FA04: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8024FF14;
    }
    // 0x8024FA04: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8024FA08: lhu         $t4, 0x12($a1)
    ctx->r12 = MEM_HU(ctx->r5, 0X12);
    // 0x8024FA0C: nop

    // 0x8024FA10: andi        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 & 0X1;
    // 0x8024FA14: beq         $t5, $zero, L_8024FF14
    if (ctx->r13 == 0) {
        // 0x8024FA18: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8024FF14;
    }
    // 0x8024FA18: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8024FA1C: lhu         $t6, 0x14($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X14);
    // 0x8024FA20: nop

    // 0x8024FA24: andi        $t7, $t6, 0x800
    ctx->r15 = ctx->r14 & 0X800;
    // 0x8024FA28: bne         $t7, $zero, L_8024FF14
    if (ctx->r15 != 0) {
        // 0x8024FA2C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8024FF14;
    }
    // 0x8024FA2C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8024FA30: lhu         $t8, 0x14($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X14);
    // 0x8024FA34: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x8024FA38: andi        $t9, $t8, 0x800
    ctx->r25 = ctx->r24 & 0X800;
    // 0x8024FA3C: bne         $t9, $zero, L_8024FF14
    if (ctx->r25 != 0) {
        // 0x8024FA40: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8024FF14;
    }
    // 0x8024FA40: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8024FA44: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8024FA48: lwc1        $f6, 0x84($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X84);
    // 0x8024FA4C: nop

    // 0x8024FA50: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x8024FA54: nop

    // 0x8024FA58: bc1t        L_8024FF14
    if (c1cs) {
        // 0x8024FA5C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8024FF14;
    }
    // 0x8024FA5C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8024FA60: lw          $v0, 0xD8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD8);
    // 0x8024FA64: lhu         $t0, 0x4A($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X4A);
    // 0x8024FA68: lbu         $a2, 0x24($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X24);
    // 0x8024FA6C: nop

    // 0x8024FA70: andi        $a1, $a2, 0xF
    ctx->r5 = ctx->r6 & 0XF;
    // 0x8024FA74: addu        $a1, $a1, $t0
    ctx->r5 = ADD32(ctx->r5, ctx->r8);
    // 0x8024FA78: sltiu       $at, $a1, 0x10
    ctx->r1 = ctx->r5 < 0X10 ? 1 : 0;
    // 0x8024FA7C: bne         $at, $zero, L_8024FA88
    if (ctx->r1 != 0) {
        // 0x8024FA80: andi        $t2, $a2, 0xF0
        ctx->r10 = ctx->r6 & 0XF0;
            goto L_8024FA88;
    }
    // 0x8024FA80: andi        $t2, $a2, 0xF0
    ctx->r10 = ctx->r6 & 0XF0;
    // 0x8024FA84: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
L_8024FA88:
    // 0x8024FA88: sb          $t2, 0x24($v0)
    MEM_B(0X24, ctx->r2) = ctx->r10;
    // 0x8024FA8C: lw          $v0, 0xD8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD8);
    // 0x8024FA90: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x8024FA94: lbu         $t3, 0x24($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X24);
    // 0x8024FA98: nop

    // 0x8024FA9C: or          $t4, $t3, $a1
    ctx->r12 = ctx->r11 | ctx->r5;
    // 0x8024FAA0: sb          $t4, 0x24($v0)
    MEM_B(0X24, ctx->r2) = ctx->r12;
    // 0x8024FAA4: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x8024FAA8: nop

    // 0x8024FAAC: lw          $t6, 0xD8($t5)
    ctx->r14 = MEM_W(ctx->r13, 0XD8);
    // 0x8024FAB0: nop

    // 0x8024FAB4: lbu         $v1, 0x24($t6)
    ctx->r3 = MEM_BU(ctx->r14, 0X24);
    // 0x8024FAB8: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x8024FABC: andi        $t7, $v1, 0xF0
    ctx->r15 = ctx->r3 & 0XF0;
    // 0x8024FAC0: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
    // 0x8024FAC4: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x8024FAC8: jal         0x80059898
    // 0x8024FACC: sw          $a1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r5;
    func_80059898(rdram, ctx);
        goto after_0;
    // 0x8024FACC: sw          $a1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r5;
    after_0:
    // 0x8024FAD0: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x8024FAD4: addiu       $t8, $v0, 0x1
    ctx->r24 = ADD32(ctx->r2, 0X1);
    // 0x8024FAD8: sll         $t9, $t8, 4
    ctx->r25 = S32(ctx->r24 << 4);
    // 0x8024FADC: addu        $v1, $v1, $t9
    ctx->r3 = ADD32(ctx->r3, ctx->r25);
    // 0x8024FAE0: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x8024FAE4: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x8024FAE8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8024FAEC: sltiu       $at, $v1, 0xF1
    ctx->r1 = ctx->r3 < 0XF1 ? 1 : 0;
    // 0x8024FAF0: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x8024FAF4: bne         $at, $zero, L_8024FB00
    if (ctx->r1 != 0) {
        // 0x8024FAF8: nop
    
            goto L_8024FB00;
    }
    // 0x8024FAF8: nop

    // 0x8024FAFC: addiu       $v1, $zero, 0xF0
    ctx->r3 = ADD32(0, 0XF0);
L_8024FB00:
    // 0x8024FB00: lw          $v0, 0xD8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD8);
    // 0x8024FB04: nop

    // 0x8024FB08: lbu         $t1, 0x24($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X24);
    // 0x8024FB0C: nop

    // 0x8024FB10: or          $t2, $t1, $v1
    ctx->r10 = ctx->r9 | ctx->r3;
    // 0x8024FB14: sb          $t2, 0x24($v0)
    MEM_B(0X24, ctx->r2) = ctx->r10;
    // 0x8024FB18: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x8024FB1C: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x8024FB20: jal         0x8027A58C
    // 0x8024FB24: sw          $a1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r5;
    ovl_8024B800_func_8027A58C(rdram, ctx);
        goto after_1;
    // 0x8024FB24: sw          $a1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r5;
    after_1:
    // 0x8024FB28: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8024FB2C: addiu       $a0, $a0, -0x30A0
    ctx->r4 = ADD32(ctx->r4, -0X30A0);
    // 0x8024FB30: lb          $t3, 0x9($a0)
    ctx->r11 = MEM_B(ctx->r4, 0X9);
    // 0x8024FB34: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x8024FB38: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x8024FB3C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8024FB40: bne         $t3, $zero, L_8024FF10
    if (ctx->r11 != 0) {
        // 0x8024FB44: lui         $t5, 0x8009
        ctx->r13 = S32(0X8009 << 16);
            goto L_8024FF10;
    }
    // 0x8024FB44: lui         $t5, 0x8009
    ctx->r13 = S32(0X8009 << 16);
    // 0x8024FB48: lw          $t5, 0x3B20($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X3B20);
    // 0x8024FB4C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8024FB50: sh          $t4, 0xDC($t5)
    MEM_H(0XDC, ctx->r13) = ctx->r12;
    // 0x8024FB54: lb          $t6, 0xA($a0)
    ctx->r14 = MEM_B(ctx->r4, 0XA);
    // 0x8024FB58: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x8024FB5C: bne         $t6, $zero, L_8024FD38
    if (ctx->r14 != 0) {
        // 0x8024FB60: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8024FD38;
    }
    // 0x8024FB60: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8024FB64: bne         $t0, $at, L_8024FBB8
    if (ctx->r8 != ctx->r1) {
        // 0x8024FB68: lui         $t4, 0x8028
        ctx->r12 = S32(0X8028 << 16);
            goto L_8024FBB8;
    }
    // 0x8024FB68: lui         $t4, 0x8028
    ctx->r12 = S32(0X8028 << 16);
    // 0x8024FB6C: lb          $v1, 0x7($a0)
    ctx->r3 = MEM_B(ctx->r4, 0X7);
    // 0x8024FB70: lui         $t8, 0x8028
    ctx->r24 = S32(0X8028 << 16);
    // 0x8024FB74: sll         $t7, $v1, 1
    ctx->r15 = S32(ctx->r3 << 1);
    // 0x8024FB78: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8024FB7C: lhu         $t8, -0x5318($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X5318);
    // 0x8024FB80: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
    // 0x8024FB84: sltu        $at, $a1, $t8
    ctx->r1 = ctx->r5 < ctx->r24 ? 1 : 0;
    // 0x8024FB88: bne         $at, $zero, L_8024FB98
    if (ctx->r1 != 0) {
        // 0x8024FB8C: lui         $t9, 0x8028
        ctx->r25 = S32(0X8028 << 16);
            goto L_8024FB98;
    }
    // 0x8024FB8C: lui         $t9, 0x8028
    ctx->r25 = S32(0X8028 << 16);
    // 0x8024FB90: b           L_8024FBE0
    // 0x8024FB94: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
        goto L_8024FBE0;
    // 0x8024FB94: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
L_8024FB98:
    // 0x8024FB98: addu        $t9, $t9, $v1
    ctx->r25 = ADD32(ctx->r25, ctx->r3);
    // 0x8024FB9C: lhu         $t9, -0x5320($t9)
    ctx->r25 = MEM_HU(ctx->r25, -0X5320);
    // 0x8024FBA0: nop

    // 0x8024FBA4: sltu        $at, $a1, $t9
    ctx->r1 = ctx->r5 < ctx->r25 ? 1 : 0;
    // 0x8024FBA8: bne         $at, $zero, L_8024FBE0
    if (ctx->r1 != 0) {
        // 0x8024FBAC: nop
    
            goto L_8024FBE0;
    }
    // 0x8024FBAC: nop

    // 0x8024FBB0: b           L_8024FBE0
    // 0x8024FBB4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
        goto L_8024FBE0;
    // 0x8024FBB4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
L_8024FBB8:
    // 0x8024FBB8: lb          $v1, 0x7($a0)
    ctx->r3 = MEM_B(ctx->r4, 0X7);
    // 0x8024FBBC: lui         $t2, 0x8028
    ctx->r10 = S32(0X8028 << 16);
    // 0x8024FBC0: sll         $t1, $v1, 1
    ctx->r9 = S32(ctx->r3 << 1);
    // 0x8024FBC4: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8024FBC8: lhu         $t2, -0x5320($t2)
    ctx->r10 = MEM_HU(ctx->r10, -0X5320);
    // 0x8024FBCC: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
    // 0x8024FBD0: sltu        $at, $a1, $t2
    ctx->r1 = ctx->r5 < ctx->r10 ? 1 : 0;
    // 0x8024FBD4: bne         $at, $zero, L_8024FBE0
    if (ctx->r1 != 0) {
        // 0x8024FBD8: nop
    
            goto L_8024FBE0;
    }
    // 0x8024FBD8: nop

    // 0x8024FBDC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
L_8024FBE0:
    // 0x8024FBE0: beq         $t3, $zero, L_8024FBF4
    if (ctx->r11 == 0) {
        // 0x8024FBE4: addu        $t4, $t4, $v1
        ctx->r12 = ADD32(ctx->r12, ctx->r3);
            goto L_8024FBF4;
    }
    // 0x8024FBE4: addu        $t4, $t4, $v1
    ctx->r12 = ADD32(ctx->r12, ctx->r3);
    // 0x8024FBE8: lhu         $t4, -0x5310($t4)
    ctx->r12 = MEM_HU(ctx->r12, -0X5310);
    // 0x8024FBEC: nop

    // 0x8024FBF0: addu        $a3, $a3, $t4
    ctx->r7 = ADD32(ctx->r7, ctx->r12);
L_8024FBF4:
    // 0x8024FBF4: beq         $v0, $zero, L_8024FC1C
    if (ctx->r2 == 0) {
        // 0x8024FBF8: lui         $t5, 0x8028
        ctx->r13 = S32(0X8028 << 16);
            goto L_8024FC1C;
    }
    // 0x8024FBF8: lui         $t5, 0x8028
    ctx->r13 = S32(0X8028 << 16);
    // 0x8024FBFC: lh          $t5, -0x1B60($t5)
    ctx->r13 = MEM_H(ctx->r13, -0X1B60);
    // 0x8024FC00: nop

    // 0x8024FC04: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x8024FC08: beq         $t6, $zero, L_8024FC20
    if (ctx->r14 == 0) {
        // 0x8024FC0C: sltiu       $at, $a3, 0x3
        ctx->r1 = ctx->r7 < 0X3 ? 1 : 0;
            goto L_8024FC20;
    }
    // 0x8024FC0C: sltiu       $at, $a3, 0x3
    ctx->r1 = ctx->r7 < 0X3 ? 1 : 0;
    // 0x8024FC10: bne         $a3, $zero, L_8024FC20
    if (ctx->r7 != 0) {
        // 0x8024FC14: sltiu       $at, $a3, 0x3
        ctx->r1 = ctx->r7 < 0X3 ? 1 : 0;
            goto L_8024FC20;
    }
    // 0x8024FC14: sltiu       $at, $a3, 0x3
    ctx->r1 = ctx->r7 < 0X3 ? 1 : 0;
    // 0x8024FC18: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
L_8024FC1C:
    // 0x8024FC1C: sltiu       $at, $a3, 0x3
    ctx->r1 = ctx->r7 < 0X3 ? 1 : 0;
L_8024FC20:
    // 0x8024FC20: bne         $at, $zero, L_8024FC30
    if (ctx->r1 != 0) {
        // 0x8024FC24: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8024FC30;
    }
    // 0x8024FC24: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8024FC28: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x8024FC2C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
L_8024FC30:
    // 0x8024FC30: bne         $a3, $at, L_8024FCA0
    if (ctx->r7 != ctx->r1) {
        // 0x8024FC34: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_8024FCA0;
    }
    // 0x8024FC34: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8024FC38: lw          $t7, 0xC8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC8);
    // 0x8024FC3C: lb          $a1, 0x1B($s0)
    ctx->r5 = MEM_B(ctx->r16, 0X1B);
    // 0x8024FC40: lb          $a0, 0x7($t7)
    ctx->r4 = MEM_B(ctx->r15, 0X7);
    // 0x8024FC44: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x8024FC48: jal         0x80042E60
    // 0x8024FC4C: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    func_80042E60(rdram, ctx);
        goto after_2;
    // 0x8024FC4C: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_2:
    // 0x8024FC50: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x8024FC54: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8024FC58: bne         $v0, $zero, L_8024FC98
    if (ctx->r2 != 0) {
        // 0x8024FC5C: nop
    
            goto L_8024FC98;
    }
    // 0x8024FC5C: nop

    // 0x8024FC60: lw          $t8, 0xC8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC8);
    // 0x8024FC64: lb          $a1, 0x1B($s0)
    ctx->r5 = MEM_B(ctx->r16, 0X1B);
    // 0x8024FC68: lb          $a0, 0x7($t8)
    ctx->r4 = MEM_B(ctx->r24, 0X7);
    // 0x8024FC6C: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x8024FC70: jal         0x80042CDC
    // 0x8024FC74: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    func_80042CDC(rdram, ctx);
        goto after_3;
    // 0x8024FC74: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_3:
    // 0x8024FC78: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x8024FC7C: lw          $v1, 0x3B20($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3B20);
    // 0x8024FC80: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x8024FC84: lhu         $t9, 0xDC($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0XDC);
    // 0x8024FC88: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8024FC8C: ori         $t1, $t9, 0x4
    ctx->r9 = ctx->r25 | 0X4;
    // 0x8024FC90: b           L_8024FC9C
    // 0x8024FC94: sh          $t1, 0xDC($v1)
    MEM_H(0XDC, ctx->r3) = ctx->r9;
        goto L_8024FC9C;
    // 0x8024FC94: sh          $t1, 0xDC($v1)
    MEM_H(0XDC, ctx->r3) = ctx->r9;
L_8024FC98:
    // 0x8024FC98: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
L_8024FC9C:
    // 0x8024FC9C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_8024FCA0:
    // 0x8024FCA0: bne         $a3, $at, L_8024FD38
    if (ctx->r7 != ctx->r1) {
        // 0x8024FCA4: nop
    
            goto L_8024FD38;
    }
    // 0x8024FCA4: nop

    // 0x8024FCA8: lw          $v0, 0xD8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD8);
    // 0x8024FCAC: nop

    // 0x8024FCB0: lbu         $t2, 0x24($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X24);
    // 0x8024FCB4: nop

    // 0x8024FCB8: andi        $t3, $t2, 0xF0
    ctx->r11 = ctx->r10 & 0XF0;
    // 0x8024FCBC: sb          $t3, 0x24($v0)
    MEM_B(0X24, ctx->r2) = ctx->r11;
    // 0x8024FCC0: lw          $t4, 0xC8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XC8);
    // 0x8024FCC4: lb          $a1, 0x1B($s0)
    ctx->r5 = MEM_B(ctx->r16, 0X1B);
    // 0x8024FCC8: lb          $a0, 0x7($t4)
    ctx->r4 = MEM_B(ctx->r12, 0X7);
    // 0x8024FCCC: jal         0x80042F4C
    // 0x8024FCD0: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    func_80042F4C(rdram, ctx);
        goto after_4;
    // 0x8024FCD0: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    after_4:
    // 0x8024FCD4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8024FCD8: bne         $v0, $zero, L_8024FD38
    if (ctx->r2 != 0) {
        // 0x8024FCDC: nop
    
            goto L_8024FD38;
    }
    // 0x8024FCDC: nop

    // 0x8024FCE0: lw          $t5, 0xC8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XC8);
    // 0x8024FCE4: lb          $a1, 0x1B($s0)
    ctx->r5 = MEM_B(ctx->r16, 0X1B);
    // 0x8024FCE8: lb          $a0, 0x7($t5)
    ctx->r4 = MEM_B(ctx->r13, 0X7);
    // 0x8024FCEC: jal         0x80042C9C
    // 0x8024FCF0: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    func_80042C9C(rdram, ctx);
        goto after_5;
    // 0x8024FCF0: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    after_5:
    // 0x8024FCF4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8024FCF8: bne         $v0, $zero, L_8024FD20
    if (ctx->r2 != 0) {
        // 0x8024FCFC: lui         $v1, 0x8009
        ctx->r3 = S32(0X8009 << 16);
            goto L_8024FD20;
    }
    // 0x8024FCFC: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x8024FD00: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x8024FD04: lw          $v1, 0x3B20($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3B20);
    // 0x8024FD08: nop

    // 0x8024FD0C: lhu         $t6, 0xDC($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0XDC);
    // 0x8024FD10: nop

    // 0x8024FD14: ori         $t7, $t6, 0x4
    ctx->r15 = ctx->r14 | 0X4;
    // 0x8024FD18: b           L_8024FD38
    // 0x8024FD1C: sh          $t7, 0xDC($v1)
    MEM_H(0XDC, ctx->r3) = ctx->r15;
        goto L_8024FD38;
    // 0x8024FD1C: sh          $t7, 0xDC($v1)
    MEM_H(0XDC, ctx->r3) = ctx->r15;
L_8024FD20:
    // 0x8024FD20: lw          $v1, 0x3B20($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3B20);
    // 0x8024FD24: nop

    // 0x8024FD28: lhu         $t8, 0xDC($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0XDC);
    // 0x8024FD2C: nop

    // 0x8024FD30: ori         $t9, $t8, 0x2
    ctx->r25 = ctx->r24 | 0X2;
    // 0x8024FD34: sh          $t9, 0xDC($v1)
    MEM_H(0XDC, ctx->r3) = ctx->r25;
L_8024FD38:
    // 0x8024FD38: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x8024FD3C: lhu         $t1, 0xB72($t1)
    ctx->r9 = MEM_HU(ctx->r9, 0XB72);
    // 0x8024FD40: nop

    // 0x8024FD44: slti        $at, $t1, 0x4
    ctx->r1 = SIGNED(ctx->r9) < 0X4 ? 1 : 0;
    // 0x8024FD48: beq         $at, $zero, L_8024FD6C
    if (ctx->r1 == 0) {
        // 0x8024FD4C: slti        $at, $t0, 0x2
        ctx->r1 = SIGNED(ctx->r8) < 0X2 ? 1 : 0;
            goto L_8024FD6C;
    }
    // 0x8024FD4C: slti        $at, $t0, 0x2
    ctx->r1 = SIGNED(ctx->r8) < 0X2 ? 1 : 0;
    // 0x8024FD50: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x8024FD54: nop

    // 0x8024FD58: lhu         $t3, 0x8($t2)
    ctx->r11 = MEM_HU(ctx->r10, 0X8);
    // 0x8024FD5C: nop

    // 0x8024FD60: andi        $t4, $t3, 0x8
    ctx->r12 = ctx->r11 & 0X8;
    // 0x8024FD64: beq         $t4, $zero, L_8024FD8C
    if (ctx->r12 == 0) {
        // 0x8024FD68: slti        $at, $t0, 0x2
        ctx->r1 = SIGNED(ctx->r8) < 0X2 ? 1 : 0;
            goto L_8024FD8C;
    }
    // 0x8024FD68: slti        $at, $t0, 0x2
    ctx->r1 = SIGNED(ctx->r8) < 0X2 ? 1 : 0;
L_8024FD6C:
    // 0x8024FD6C: bne         $at, $zero, L_8024FD84
    if (ctx->r1 != 0) {
        // 0x8024FD70: nop
    
            goto L_8024FD84;
    }
    // 0x8024FD70: nop

    // 0x8024FD74: jal         0x802719DC
    // 0x8024FD78: addiu       $a0, $zero, 0x3D5
    ctx->r4 = ADD32(0, 0X3D5);
    ovl_8024B800_func_802719DC(rdram, ctx);
        goto after_6;
    // 0x8024FD78: addiu       $a0, $zero, 0x3D5
    ctx->r4 = ADD32(0, 0X3D5);
    after_6:
    // 0x8024FD7C: b           L_8024FD8C
    // 0x8024FD80: nop

        goto L_8024FD8C;
    // 0x8024FD80: nop

L_8024FD84:
    // 0x8024FD84: jal         0x802719DC
    // 0x8024FD88: addiu       $a0, $zero, 0x3D6
    ctx->r4 = ADD32(0, 0X3D6);
    ovl_8024B800_func_802719DC(rdram, ctx);
        goto after_7;
    // 0x8024FD88: addiu       $a0, $zero, 0x3D6
    ctx->r4 = ADD32(0, 0X3D6);
    after_7:
L_8024FD8C:
    // 0x8024FD8C: lui         $t5, 0x8009
    ctx->r13 = S32(0X8009 << 16);
    // 0x8024FD90: lw          $t5, 0x3B20($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X3B20);
    // 0x8024FD94: nop

    // 0x8024FD98: lhu         $t6, 0xDC($t5)
    ctx->r14 = MEM_HU(ctx->r13, 0XDC);
    // 0x8024FD9C: nop

    // 0x8024FDA0: andi        $t7, $t6, 0x6
    ctx->r15 = ctx->r14 & 0X6;
    // 0x8024FDA4: beq         $t7, $zero, L_8024FE24
    if (ctx->r15 == 0) {
        // 0x8024FDA8: nop
    
            goto L_8024FE24;
    }
    // 0x8024FDA8: nop

    // 0x8024FDAC: jal         0x802719DC
    // 0x8024FDB0: addiu       $a0, $zero, 0x338
    ctx->r4 = ADD32(0, 0X338);
    ovl_8024B800_func_802719DC(rdram, ctx);
        goto after_8;
    // 0x8024FDB0: addiu       $a0, $zero, 0x338
    ctx->r4 = ADD32(0, 0X338);
    after_8:
    // 0x8024FDB4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8024FDB8: addiu       $v0, $v0, 0xB7E
    ctx->r2 = ADD32(ctx->r2, 0XB7E);
    // 0x8024FDBC: lhu         $t8, 0x0($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X0);
    // 0x8024FDC0: lui         $a2, 0x8009
    ctx->r6 = S32(0X8009 << 16);
    // 0x8024FDC4: addiu       $a2, $a2, 0x3B20
    ctx->r6 = ADD32(ctx->r6, 0X3B20);
    // 0x8024FDC8: lw          $t1, 0x0($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X0);
    // 0x8024FDCC: ori         $t9, $t8, 0x8
    ctx->r25 = ctx->r24 | 0X8;
    // 0x8024FDD0: sh          $t9, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r25;
    // 0x8024FDD4: lhu         $t2, 0xDC($t1)
    ctx->r10 = MEM_HU(ctx->r9, 0XDC);
    // 0x8024FDD8: nop

    // 0x8024FDDC: andi        $t3, $t2, 0x4
    ctx->r11 = ctx->r10 & 0X4;
    // 0x8024FDE0: beq         $t3, $zero, L_8024FE18
    if (ctx->r11 == 0) {
        // 0x8024FDE4: nop
    
            goto L_8024FE18;
    }
    // 0x8024FDE4: nop

    // 0x8024FDE8: lw          $a0, 0xC8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC8);
    // 0x8024FDEC: jal         0x802718DC
    // 0x8024FDF0: nop

    ovl_8024B800_func_802718DC(rdram, ctx);
        goto after_9;
    // 0x8024FDF0: nop

    after_9:
    // 0x8024FDF4: slti        $at, $v0, 0x8
    ctx->r1 = SIGNED(ctx->r2) < 0X8 ? 1 : 0;
    // 0x8024FDF8: beq         $at, $zero, L_8024FE18
    if (ctx->r1 == 0) {
        // 0x8024FDFC: nop
    
            goto L_8024FE18;
    }
    // 0x8024FDFC: nop

    // 0x8024FE00: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x8024FE04: nop

    // 0x8024FE08: lhu         $t4, 0x8($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X8);
    // 0x8024FE0C: nop

    // 0x8024FE10: ori         $t5, $t4, 0x1000
    ctx->r13 = ctx->r12 | 0X1000;
    // 0x8024FE14: sh          $t5, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r13;
L_8024FE18:
    // 0x8024FE18: lui         $a2, 0x8009
    ctx->r6 = S32(0X8009 << 16);
    // 0x8024FE1C: b           L_8024FE34
    // 0x8024FE20: addiu       $a2, $a2, 0x3B20
    ctx->r6 = ADD32(ctx->r6, 0X3B20);
        goto L_8024FE34;
    // 0x8024FE20: addiu       $a2, $a2, 0x3B20
    ctx->r6 = ADD32(ctx->r6, 0X3B20);
L_8024FE24:
    // 0x8024FE24: jal         0x802719DC
    // 0x8024FE28: addiu       $a0, $zero, 0x337
    ctx->r4 = ADD32(0, 0X337);
    ovl_8024B800_func_802719DC(rdram, ctx);
        goto after_10;
    // 0x8024FE28: addiu       $a0, $zero, 0x337
    ctx->r4 = ADD32(0, 0X337);
    after_10:
    // 0x8024FE2C: lui         $a2, 0x8009
    ctx->r6 = S32(0X8009 << 16);
    // 0x8024FE30: addiu       $a2, $a2, 0x3B20
    ctx->r6 = ADD32(ctx->r6, 0X3B20);
L_8024FE34:
    // 0x8024FE34: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8024FE38: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8024FE3C: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
    // 0x8024FE40: lhu         $t6, 0xB78($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB78);
    // 0x8024FE44: sw          $s0, 0xB28($at)
    MEM_W(0XB28, ctx->r1) = ctx->r16;
    // 0x8024FE48: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8024FE4C: bne         $t6, $zero, L_8024FE68
    if (ctx->r14 != 0) {
        // 0x8024FE50: sw          $v0, 0xB30($at)
        MEM_W(0XB30, ctx->r1) = ctx->r2;
            goto L_8024FE68;
    }
    // 0x8024FE50: sw          $v0, 0xB30($at)
    MEM_W(0XB30, ctx->r1) = ctx->r2;
    // 0x8024FE54: jal         0x80078454
    // 0x8024FE58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80078454(rdram, ctx);
        goto after_11;
    // 0x8024FE58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x8024FE5C: lui         $a2, 0x8009
    ctx->r6 = S32(0X8009 << 16);
    // 0x8024FE60: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
    // 0x8024FE64: addiu       $a2, $a2, 0x3B20
    ctx->r6 = ADD32(ctx->r6, 0X3B20);
L_8024FE68:
    // 0x8024FE68: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8024FE6C: lwc1        $f8, 0x4C($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x8024FE70: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x8024FE74: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8024FE78: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8024FE7C: lw          $t9, 0x0($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X0);
    // 0x8024FE80: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8024FE84: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8024FE88: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    // 0x8024FE8C: nop

    // 0x8024FE90: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x8024FE94: sh          $t8, 0xD8($t9)
    MEM_H(0XD8, ctx->r25) = ctx->r24;
    // 0x8024FE98: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x8024FE9C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8024FEA0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8024FEA4: lwc1        $f16, 0x44($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X44);
    // 0x8024FEA8: lw          $t3, 0x0($a2)
    ctx->r11 = MEM_W(ctx->r6, 0X0);
    // 0x8024FEAC: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x8024FEB0: mfc1        $t2, $f18
    ctx->r10 = (int32_t)ctx->f18.u32l;
    // 0x8024FEB4: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x8024FEB8: sh          $t2, 0xDA($t3)
    MEM_H(0XDA, ctx->r11) = ctx->r10;
    // 0x8024FEBC: lw          $t4, 0xC8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XC8);
    // 0x8024FEC0: lw          $t5, 0x0($a2)
    ctx->r13 = MEM_W(ctx->r6, 0X0);
    // 0x8024FEC4: nop

    // 0x8024FEC8: sw          $t4, 0xB4($t5)
    MEM_W(0XB4, ctx->r13) = ctx->r12;
    // 0x8024FECC: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x8024FED0: nop

    // 0x8024FED4: lhu         $t6, 0xC2($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0XC2);
    // 0x8024FED8: nop

    // 0x8024FEDC: andi        $t7, $t6, 0xFF7F
    ctx->r15 = ctx->r14 & 0XFF7F;
    // 0x8024FEE0: sh          $t7, 0xC2($v1)
    MEM_H(0XC2, ctx->r3) = ctx->r15;
    // 0x8024FEE4: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x8024FEE8: nop

    // 0x8024FEEC: lhu         $t8, 0xDC($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0XDC);
    // 0x8024FEF0: nop

    // 0x8024FEF4: andi        $t9, $t8, 0xFFF7
    ctx->r25 = ctx->r24 & 0XFFF7;
    // 0x8024FEF8: sh          $t9, 0xDC($v1)
    MEM_H(0XDC, ctx->r3) = ctx->r25;
    // 0x8024FEFC: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x8024FF00: lb          $a1, 0x1B($s0)
    ctx->r5 = MEM_B(ctx->r16, 0X1B);
    // 0x8024FF04: lbu         $a0, 0x7($t1)
    ctx->r4 = MEM_BU(ctx->r9, 0X7);
    // 0x8024FF08: jal         0x800491B4
    // 0x8024FF0C: nop

    func_800491B4(rdram, ctx);
        goto after_12;
    // 0x8024FF0C: nop

    after_12:
L_8024FF10:
    // 0x8024FF10: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8024FF14:
    // 0x8024FF14: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8024FF18: jr          $ra
    // 0x8024FF1C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x8024FF1C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_8024B800_func_8024FF20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8024FF20: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8024FF24: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8024FF28: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8024FF2C: lwc1        $f14, 0x8C($a1)
    ctx->f14.u32l = MEM_W(ctx->r5, 0X8C);
    // 0x8024FF30: lwc1        $f12, 0x7C($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X7C);
    // 0x8024FF34: jal         0x8027924C
    // 0x8024FF38: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    ovl_8024B800_func_8027924C(rdram, ctx);
        goto after_0;
    // 0x8024FF38: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    after_0:
    // 0x8024FF3C: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x8024FF40: jal         0x802732F4
    // 0x8024FF44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_802732F4(rdram, ctx);
        goto after_1;
    // 0x8024FF44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8024FF48: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8024FF4C: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8024FF50: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8024FF54: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x8024FF58: nop

    // 0x8024FF5C: bc1f        L_8024FF90
    if (!c1cs) {
        // 0x8024FF60: nop
    
            goto L_8024FF90;
    }
    // 0x8024FF60: nop

    // 0x8024FF64: jal         0x802732D0
    // 0x8024FF68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_802732D0(rdram, ctx);
        goto after_2;
    // 0x8024FF68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8024FF6C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8024FF70: lwc1        $f0, 0x8C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x8024FF74: lwc1        $f11, -0x4080($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X4080);
    // 0x8024FF78: lwc1        $f10, -0x407C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X407C);
    // 0x8024FF7C: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x8024FF80: sub.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d - ctx->f10.d;
    // 0x8024FF84: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x8024FF88: b           L_8024FFAC
    // 0x8024FF8C: swc1        $f18, 0xF0($s0)
    MEM_W(0XF0, ctx->r16) = ctx->f18.u32l;
        goto L_8024FFAC;
    // 0x8024FF8C: swc1        $f18, 0xF0($s0)
    MEM_W(0XF0, ctx->r16) = ctx->f18.u32l;
L_8024FF90:
    // 0x8024FF90: lwc1        $f0, 0x8C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x8024FF94: lwc1        $f7, -0x4078($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X4078);
    // 0x8024FF98: lwc1        $f6, -0x4074($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X4074);
    // 0x8024FF9C: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x8024FFA0: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x8024FFA4: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x8024FFA8: swc1        $f10, 0xF0($s0)
    MEM_W(0XF0, ctx->r16) = ctx->f10.u32l;
L_8024FFAC:
    // 0x8024FFAC: swc1        $f0, 0xEC($s0)
    MEM_W(0XEC, ctx->r16) = ctx->f0.u32l;
    // 0x8024FFB0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8024FFB4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8024FFB8: jr          $ra
    // 0x8024FFBC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8024FFBC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_8024B800_func_8024FFC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8024FFC0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8024FFC4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8024FFC8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8024FFCC: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8024FFD0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8024FFD4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8024FFD8: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x8024FFDC: jal         0x8024BC08
    // 0x8024FFE0: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    ovl_8024B800_func_8024BC08(rdram, ctx);
        goto after_0;
    // 0x8024FFE0: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    after_0:
    // 0x8024FFE4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8024FFE8: sh          $v0, 0xE6($s0)
    MEM_H(0XE6, ctx->r16) = ctx->r2;
    // 0x8024FFEC: sh          $v0, 0xE8($s0)
    MEM_H(0XE8, ctx->r16) = ctx->r2;
    // 0x8024FFF0: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8024FFF4: lwc1        $f14, 0x8C($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x8024FFF8: lwc1        $f12, 0x8C($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X8C);
    // 0x8024FFFC: jal         0x80279308
    // 0x80250000: nop

    ovl_8024B800_func_80279308(rdram, ctx);
        goto after_1;
    // 0x80250000: nop

    after_1:
    // 0x80250004: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80250008: lwc1        $f7, -0x4070($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X4070);
    // 0x8025000C: lwc1        $f6, -0x406C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X406C);
    // 0x80250010: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x80250014: c.lt.d      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.d < ctx->f6.d;
    // 0x80250018: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x8025001C: bc1f        L_8025004C
    if (!c1cs) {
        // 0x80250020: nop
    
            goto L_8025004C;
    }
    // 0x80250020: nop

    // 0x80250024: lwc1        $f8, 0x50($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X50);
    // 0x80250028: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x8025002C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80250030: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80250034: c.lt.d      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.d < ctx->f16.d;
    // 0x80250038: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x8025003C: bc1f        L_8025004C
    if (!c1cs) {
        // 0x80250040: nop
    
            goto L_8025004C;
    }
    // 0x80250040: nop

    // 0x80250044: b           L_80250110
    // 0x80250048: sh          $t7, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r15;
        goto L_80250110;
    // 0x80250048: sh          $t7, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r15;
L_8025004C:
    // 0x8025004C: jal         0x80059898
    // 0x80250050: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    func_80059898(rdram, ctx);
        goto after_2;
    // 0x80250050: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_2:
    // 0x80250054: lhu         $t8, 0x32($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X32);
    // 0x80250058: sltiu       $at, $v0, 0x3
    ctx->r1 = ctx->r2 < 0X3 ? 1 : 0;
    // 0x8025005C: beq         $t8, $zero, L_80250080
    if (ctx->r24 == 0) {
        // 0x80250060: sltiu       $v1, $v0, 0x1
        ctx->r3 = ctx->r2 < 0X1 ? 1 : 0;
            goto L_80250080;
    }
    // 0x80250060: sltiu       $v1, $v0, 0x1
    ctx->r3 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80250064: bne         $at, $zero, L_80250078
    if (ctx->r1 != 0) {
        // 0x80250068: addiu       $t0, $zero, 0x3
        ctx->r8 = ADD32(0, 0X3);
            goto L_80250078;
    }
    // 0x80250068: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x8025006C: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x80250070: b           L_80250110
    // 0x80250074: sh          $t9, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r25;
        goto L_80250110;
    // 0x80250074: sh          $t9, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r25;
L_80250078:
    // 0x80250078: b           L_80250110
    // 0x8025007C: sh          $t0, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r8;
        goto L_80250110;
    // 0x8025007C: sh          $t0, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r8;
L_80250080:
    // 0x80250080: beq         $v1, $zero, L_80250090
    if (ctx->r3 == 0) {
        // 0x80250084: addiu       $a1, $v0, -0x1
        ctx->r5 = ADD32(ctx->r2, -0X1);
            goto L_80250090;
    }
    // 0x80250084: addiu       $a1, $v0, -0x1
    ctx->r5 = ADD32(ctx->r2, -0X1);
    // 0x80250088: b           L_80250110
    // 0x8025008C: sh          $zero, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = 0;
        goto L_80250110;
    // 0x8025008C: sh          $zero, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = 0;
L_80250090:
    // 0x80250090: sltiu       $v1, $a1, 0x1
    ctx->r3 = ctx->r5 < 0X1 ? 1 : 0;
    // 0x80250094: beq         $v1, $zero, L_802500B8
    if (ctx->r3 == 0) {
        // 0x80250098: addiu       $a1, $a1, -0x1
        ctx->r5 = ADD32(ctx->r5, -0X1);
            goto L_802500B8;
    }
    // 0x80250098: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x8025009C: addiu       $t1, $zero, 0x1B
    ctx->r9 = ADD32(0, 0X1B);
    // 0x802500A0: sh          $t1, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r9;
    // 0x802500A4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x802500A8: jal         0x8024FF20
    // 0x802500AC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_8024B800_func_8024FF20(rdram, ctx);
        goto after_3;
    // 0x802500AC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_3:
    // 0x802500B0: b           L_80250114
    // 0x802500B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80250114;
    // 0x802500B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802500B8:
    // 0x802500B8: sltiu       $v1, $a1, 0x1
    ctx->r3 = ctx->r5 < 0X1 ? 1 : 0;
    // 0x802500BC: beq         $v1, $zero, L_802500D0
    if (ctx->r3 == 0) {
        // 0x802500C0: addiu       $a1, $a1, -0x1
        ctx->r5 = ADD32(ctx->r5, -0X1);
            goto L_802500D0;
    }
    // 0x802500C0: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x802500C4: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x802500C8: b           L_80250110
    // 0x802500CC: sh          $t2, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r10;
        goto L_80250110;
    // 0x802500CC: sh          $t2, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r10;
L_802500D0:
    // 0x802500D0: lhu         $t3, 0x20($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X20);
    // 0x802500D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802500D8: andi        $t4, $t3, 0x1000
    ctx->r12 = ctx->r11 & 0X1000;
    // 0x802500DC: bne         $t4, $zero, L_802500F8
    if (ctx->r12 != 0) {
        // 0x802500E0: sltiu       $v1, $a1, 0x1
        ctx->r3 = ctx->r5 < 0X1 ? 1 : 0;
            goto L_802500F8;
    }
    // 0x802500E0: sltiu       $v1, $a1, 0x1
    ctx->r3 = ctx->r5 < 0X1 ? 1 : 0;
    // 0x802500E4: jal         0x800781F0
    // 0x802500E8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_800781F0(rdram, ctx);
        goto after_4;
    // 0x802500E8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_4:
    // 0x802500EC: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x802500F0: nop

    // 0x802500F4: sltiu       $v1, $a1, 0x1
    ctx->r3 = ctx->r5 < 0X1 ? 1 : 0;
L_802500F8:
    // 0x802500F8: beq         $v1, $zero, L_8025010C
    if (ctx->r3 == 0) {
        // 0x802500FC: addiu       $t6, $zero, 0x3
        ctx->r14 = ADD32(0, 0X3);
            goto L_8025010C;
    }
    // 0x802500FC: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x80250100: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x80250104: b           L_80250110
    // 0x80250108: sh          $t5, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r13;
        goto L_80250110;
    // 0x80250108: sh          $t5, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r13;
L_8025010C:
    // 0x8025010C: sh          $t6, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r14;
L_80250110:
    // 0x80250110: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80250114:
    // 0x80250114: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80250118: jr          $ra
    // 0x8025011C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8025011C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_8024B800_func_80250120(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80250120: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80250124: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80250128: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8025012C: lhu         $v0, 0x14($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X14);
    // 0x80250130: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80250134: andi        $t6, $v0, 0x4000
    ctx->r14 = ctx->r2 & 0X4000;
    // 0x80250138: bne         $t6, $zero, L_80250384
    if (ctx->r14 != 0) {
        // 0x8025013C: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_80250384;
    }
    // 0x8025013C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80250140: ori         $t7, $v0, 0x4000
    ctx->r15 = ctx->r2 | 0X4000;
    // 0x80250144: sh          $t7, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r15;
    // 0x80250148: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8025014C: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x80250150: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    // 0x80250154: jal         0x8027A02C
    // 0x80250158: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_8024B800_func_8027A02C(rdram, ctx);
        goto after_0;
    // 0x80250158: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x8025015C: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x80250160: bne         $v0, $zero, L_8025034C
    if (ctx->r2 != 0) {
        // 0x80250164: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8025034C;
    }
    // 0x80250164: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80250168: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x8025016C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x80250170: jal         0x80279E6C
    // 0x80250174: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    ovl_8024B800_func_80279E6C(rdram, ctx);
        goto after_1;
    // 0x80250174: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    after_1:
    // 0x80250178: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x8025017C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80250180: bne         $v0, $at, L_8025034C
    if (ctx->r2 != ctx->r1) {
        // 0x80250184: nop
    
            goto L_8025034C;
    }
    // 0x80250184: nop

    // 0x80250188: lhu         $t8, 0x16($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X16);
    // 0x8025018C: nop

    // 0x80250190: andi        $t9, $t8, 0x40
    ctx->r25 = ctx->r24 & 0X40;
    // 0x80250194: bne         $t9, $zero, L_8025034C
    if (ctx->r25 != 0) {
        // 0x80250198: nop
    
            goto L_8025034C;
    }
    // 0x80250198: nop

    // 0x8025019C: lhu         $t0, 0x14($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X14);
    // 0x802501A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802501A4: andi        $t1, $t0, 0x8000
    ctx->r9 = ctx->r8 & 0X8000;
    // 0x802501A8: bne         $t1, $zero, L_8025034C
    if (ctx->r9 != 0) {
        // 0x802501AC: nop
    
            goto L_8025034C;
    }
    // 0x802501AC: nop

    // 0x802501B0: lhu         $t2, 0x16($a3)
    ctx->r10 = MEM_HU(ctx->r7, 0X16);
    // 0x802501B4: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    // 0x802501B8: ori         $t3, $t2, 0x2000
    ctx->r11 = ctx->r10 | 0X2000;
    // 0x802501BC: sh          $t3, 0x16($a3)
    MEM_H(0X16, ctx->r7) = ctx->r11;
    // 0x802501C0: jal         0x8024BC08
    // 0x802501C4: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    ovl_8024B800_func_8024BC08(rdram, ctx);
        goto after_2;
    // 0x802501C4: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    after_2:
    // 0x802501C8: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x802501CC: jal         0x802509E8
    // 0x802501D0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_8024B800_func_802509E8(rdram, ctx);
        goto after_3;
    // 0x802501D0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_3:
    // 0x802501D4: lwc1        $f6, 0x50($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X50);
    // 0x802501D8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802501DC: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x802501E0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802501E4: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x802501E8: c.lt.d      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.d < ctx->f8.d;
    // 0x802501EC: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x802501F0: bc1t        L_8025020C
    if (c1cs) {
        // 0x802501F4: lui         $t4, 0x8009
        ctx->r12 = S32(0X8009 << 16);
            goto L_8025020C;
    }
    // 0x802501F4: lui         $t4, 0x8009
    ctx->r12 = S32(0X8009 << 16);
    // 0x802501F8: lw          $t4, 0x3B20($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X3B20);
    // 0x802501FC: lui         $t7, 0x8028
    ctx->r15 = S32(0X8028 << 16);
    // 0x80250200: lw          $t5, 0x84($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X84);
    // 0x80250204: nop

    // 0x80250208: bne         $t5, $zero, L_80250224
    if (ctx->r13 != 0) {
        // 0x8025020C: addiu       $t6, $zero, 0x5
        ctx->r14 = ADD32(0, 0X5);
            goto L_80250224;
    }
L_8025020C:
    // 0x8025020C: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x80250210: sh          $t6, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r14;
    // 0x80250214: jal         0x80064DE0
    // 0x80250218: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_80064DE0(rdram, ctx);
        goto after_4;
    // 0x80250218: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_4:
    // 0x8025021C: b           L_80250388
    // 0x80250220: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80250388;
    // 0x80250220: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80250224:
    // 0x80250224: lh          $t7, -0x1B60($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X1B60);
    // 0x80250228: addiu       $t4, $zero, 0x7
    ctx->r12 = ADD32(0, 0X7);
    // 0x8025022C: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x80250230: beq         $t8, $zero, L_80250344
    if (ctx->r24 == 0) {
        // 0x80250234: nop
    
            goto L_80250344;
    }
    // 0x80250234: nop

    // 0x80250238: jal         0x80064DE0
    // 0x8025023C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_80064DE0(rdram, ctx);
        goto after_5;
    // 0x8025023C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_5:
    // 0x80250240: addiu       $t9, $zero, 0x6
    ctx->r25 = ADD32(0, 0X6);
    // 0x80250244: lwc1        $f12, 0x4C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x80250248: jal         0x80272AEC
    // 0x8025024C: sh          $t9, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r25;
    ovl_8024B800_func_80272AEC(rdram, ctx);
        goto after_6;
    // 0x8025024C: sh          $t9, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r25;
    after_6:
    // 0x80250250: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80250254: lwc1        $f10, -0x4068($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X4068);
    // 0x80250258: nop

    // 0x8025025C: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x80250260: nop

    // 0x80250264: bc1t        L_80250294
    if (c1cs) {
        // 0x80250268: nop
    
            goto L_80250294;
    }
    // 0x80250268: nop

    // 0x8025026C: lwc1        $f12, 0x44($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X44);
    // 0x80250270: jal         0x80272AEC
    // 0x80250274: nop

    ovl_8024B800_func_80272AEC(rdram, ctx);
        goto after_7;
    // 0x80250274: nop

    after_7:
    // 0x80250278: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8025027C: lwc1        $f16, -0x4064($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X4064);
    // 0x80250280: nop

    // 0x80250284: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x80250288: nop

    // 0x8025028C: bc1f        L_802502E4
    if (!c1cs) {
        // 0x80250290: nop
    
            goto L_802502E4;
    }
    // 0x80250290: nop

L_80250294:
    // 0x80250294: jal         0x802732F4
    // 0x80250298: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_802732F4(rdram, ctx);
        goto after_8;
    // 0x80250298: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x8025029C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802502A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802502A4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802502A8: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x802502AC: jal         0x80272B98
    // 0x802502B0: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    ovl_8024B800_func_80272B98(rdram, ctx);
        goto after_9;
    // 0x802502B0: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    after_9:
    // 0x802502B4: lwc1        $f12, 0x30($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X30);
    // 0x802502B8: lwc1        $f14, 0x8C($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x802502BC: jal         0x8027924C
    // 0x802502C0: nop

    ovl_8024B800_func_8027924C(rdram, ctx);
        goto after_10;
    // 0x802502C0: nop

    after_10:
    // 0x802502C4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x802502C8: nop

    // 0x802502CC: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x802502D0: nop

    // 0x802502D4: bc1f        L_802502E4
    if (!c1cs) {
        // 0x802502D8: nop
    
            goto L_802502E4;
    }
    // 0x802502D8: nop

    // 0x802502DC: jal         0x802732D0
    // 0x802502E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_802732D0(rdram, ctx);
        goto after_11;
    // 0x802502E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
L_802502E4:
    // 0x802502E4: lw          $t0, 0xCC($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XCC);
    // 0x802502E8: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802502EC: lw          $t1, 0x30($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X30);
    // 0x802502F0: nop

    // 0x802502F4: lhu         $t2, 0x2($t1)
    ctx->r10 = MEM_HU(ctx->r9, 0X2);
    // 0x802502F8: nop

    // 0x802502FC: andi        $t3, $t2, 0x8000
    ctx->r11 = ctx->r10 & 0X8000;
    // 0x80250300: beq         $t3, $zero, L_8025031C
    if (ctx->r11 == 0) {
        // 0x80250304: nop
    
            goto L_8025031C;
    }
    // 0x80250304: nop

    // 0x80250308: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8025030C: lwc1        $f1, -0x4060($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X4060);
    // 0x80250310: lwc1        $f0, -0x405C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X405C);
    // 0x80250314: b           L_8025032C
    // 0x80250318: lwc1        $f6, 0x8C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X8C);
        goto L_8025032C;
    // 0x80250318: lwc1        $f6, 0x8C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X8C);
L_8025031C:
    // 0x8025031C: lwc1        $f1, -0x4058($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X4058);
    // 0x80250320: lwc1        $f0, -0x4054($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X4054);
    // 0x80250324: nop

    // 0x80250328: lwc1        $f6, 0x8C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X8C);
L_8025032C:
    // 0x8025032C: nop

    // 0x80250330: cvt.d.s     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f4.d = CVT_D_S(ctx->f6.fl);
    // 0x80250334: add.d       $f8, $f0, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f4.d); 
    ctx->f8.d = ctx->f0.d + ctx->f4.d;
    // 0x80250338: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x8025033C: b           L_80250384
    // 0x80250340: swc1        $f10, 0xF0($s0)
    MEM_W(0XF0, ctx->r16) = ctx->f10.u32l;
        goto L_80250384;
    // 0x80250340: swc1        $f10, 0xF0($s0)
    MEM_W(0XF0, ctx->r16) = ctx->f10.u32l;
L_80250344:
    // 0x80250344: b           L_80250384
    // 0x80250348: sh          $t4, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r12;
        goto L_80250384;
    // 0x80250348: sh          $t4, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r12;
L_8025034C:
    // 0x8025034C: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x80250350: lb          $t5, -0x3097($t5)
    ctx->r13 = MEM_B(ctx->r13, -0X3097);
    // 0x80250354: nop

    // 0x80250358: beq         $t5, $zero, L_80250374
    if (ctx->r13 == 0) {
        // 0x8025035C: nop
    
            goto L_80250374;
    }
    // 0x8025035C: nop

    // 0x80250360: lhu         $t6, 0x16($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X16);
    // 0x80250364: nop

    // 0x80250368: andi        $t7, $t6, 0x40
    ctx->r15 = ctx->r14 & 0X40;
    // 0x8025036C: bne         $t7, $zero, L_80250388
    if (ctx->r15 != 0) {
        // 0x80250370: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80250388;
    }
    // 0x80250370: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80250374:
    // 0x80250374: lhu         $t8, 0x12($a3)
    ctx->r24 = MEM_HU(ctx->r7, 0X12);
    // 0x80250378: nop

    // 0x8025037C: andi        $t9, $t8, 0x7FFF
    ctx->r25 = ctx->r24 & 0X7FFF;
    // 0x80250380: sh          $t9, 0x12($a3)
    MEM_H(0X12, ctx->r7) = ctx->r25;
L_80250384:
    // 0x80250384: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80250388:
    // 0x80250388: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8025038C: jr          $ra
    // 0x80250390: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80250390: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_8024B800_func_80250394(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80250394: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80250398: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8025039C: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x802503A0: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x802503A4: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    // 0x802503A8: jal         0x8024BC08
    // 0x802503AC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_8024B800_func_8024BC08(rdram, ctx);
        goto after_0;
    // 0x802503AC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x802503B0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802503B4: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x802503B8: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x802503BC: sh          $t6, 0xE4($a0)
    MEM_H(0XE4, ctx->r4) = ctx->r14;
    // 0x802503C0: lhu         $t7, 0x16($a2)
    ctx->r15 = MEM_HU(ctx->r6, 0X16);
    // 0x802503C4: sw          $a0, 0xDC($a2)
    MEM_W(0XDC, ctx->r6) = ctx->r4;
    // 0x802503C8: ori         $t8, $t7, 0x8000
    ctx->r24 = ctx->r15 | 0X8000;
    // 0x802503CC: sh          $t8, 0x16($a2)
    MEM_H(0X16, ctx->r6) = ctx->r24;
    // 0x802503D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802503D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802503D8: jr          $ra
    // 0x802503DC: nop

    return;
    // 0x802503DC: nop

;}
RECOMP_FUNC void ovl_8024B800_func_802503E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802503E0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x802503E4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802503E8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x802503EC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x802503F0: sh          $zero, 0x32($sp)
    MEM_H(0X32, ctx->r29) = 0;
    // 0x802503F4: lhu         $t6, 0x12($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X12);
    // 0x802503F8: lhu         $t8, 0x14($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X14);
    // 0x802503FC: ori         $t7, $t6, 0x8000
    ctx->r15 = ctx->r14 | 0X8000;
    // 0x80250400: ori         $t9, $t8, 0x20
    ctx->r25 = ctx->r24 | 0X20;
    // 0x80250404: sh          $t7, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r15;
    // 0x80250408: sh          $t9, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r25;
    // 0x8025040C: lw          $t0, 0x4($a2)
    ctx->r8 = MEM_W(ctx->r6, 0X4);
    // 0x80250410: lhu         $t2, 0x16($a1)
    ctx->r10 = MEM_HU(ctx->r5, 0X16);
    // 0x80250414: lbu         $v1, 0x5($t0)
    ctx->r3 = MEM_BU(ctx->r8, 0X5);
    // 0x80250418: andi        $t3, $t2, 0x40
    ctx->r11 = ctx->r10 & 0X40;
    // 0x8025041C: andi        $t1, $v1, 0x1F
    ctx->r9 = ctx->r3 & 0X1F;
    // 0x80250420: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80250424: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80250428: bne         $t3, $zero, L_8025043C
    if (ctx->r11 != 0) {
        // 0x8025042C: or          $v1, $t1, $zero
        ctx->r3 = ctx->r9 | 0;
            goto L_8025043C;
    }
    // 0x8025042C: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
    // 0x80250430: lhu         $t4, 0xE($a1)
    ctx->r12 = MEM_HU(ctx->r5, 0XE);
    // 0x80250434: addiu       $at, $zero, 0x25
    ctx->r1 = ADD32(0, 0X25);
    // 0x80250438: bne         $t4, $at, L_80250444
    if (ctx->r12 != ctx->r1) {
        // 0x8025043C: addiu       $t5, $zero, 0x80
        ctx->r13 = ADD32(0, 0X80);
            goto L_80250444;
    }
L_8025043C:
    // 0x8025043C: addiu       $t5, $zero, 0x80
    ctx->r13 = ADD32(0, 0X80);
    // 0x80250440: sh          $t5, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r13;
L_80250444:
    // 0x80250444: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80250448: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x8025044C: addiu       $t8, $v1, -0x1
    ctx->r24 = ADD32(ctx->r3, -0X1);
    // 0x80250450: lw          $t6, 0xB0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XB0);
    // 0x80250454: sltiu       $at, $t8, 0xA
    ctx->r1 = ctx->r24 < 0XA ? 1 : 0;
    // 0x80250458: bne         $s0, $t6, L_80250464
    if (ctx->r16 != ctx->r14) {
        // 0x8025045C: sll         $t8, $t8, 2
        ctx->r24 = S32(ctx->r24 << 2);
            goto L_80250464;
    }
    // 0x8025045C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80250460: sw          $zero, 0xB0($v0)
    MEM_W(0XB0, ctx->r2) = 0;
L_80250464:
    // 0x80250464: beq         $at, $zero, L_802509D4
    if (ctx->r1 == 0) {
        // 0x80250468: sw          $v1, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r3;
            goto L_802509D4;
    }
    // 0x80250468: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    // 0x8025046C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80250470: addu        $at, $at, $t8
    gpr jr_addend_8025047C = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80250474: lw          $t8, -0x4050($at)
    ctx->r24 = ADD32(ctx->r1, -0X4050);
    // 0x80250478: nop

    // 0x8025047C: jr          $t8
    // 0x80250480: nop

    switch (jr_addend_8025047C >> 2) {
        case 0: goto L_80250808; break;
        case 1: goto L_8025053C; break;
        case 2: goto L_802509D4; break;
        case 3: goto L_80250484; break;
        case 4: goto L_802509D4; break;
        case 5: goto L_802509D4; break;
        case 6: goto L_802509D4; break;
        case 7: goto L_802507F4; break;
        case 8: goto L_8025054C; break;
        case 9: goto L_80250494; break;
        default: switch_error(__func__, 0x8025047C, 0x8027BFB0);
    }
    // 0x80250480: nop

L_80250484:
    // 0x80250484: jal         0x80058978
    // 0x80250488: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80058978(rdram, ctx);
        goto after_0;
    // 0x80250488: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_0:
    // 0x8025048C: b           L_802509D8
    // 0x80250490: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802509D8;
    // 0x80250490: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80250494:
    // 0x80250494: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x80250498: lb          $t9, -0x3097($t9)
    ctx->r25 = MEM_B(ctx->r25, -0X3097);
    // 0x8025049C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802504A0: beq         $t9, $zero, L_802504CC
    if (ctx->r25 == 0) {
        // 0x802504A4: nop
    
            goto L_802504CC;
    }
    // 0x802504A4: nop

    // 0x802504A8: lhu         $t0, 0x16($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X16);
    // 0x802504AC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x802504B0: andi        $t1, $t0, 0x40
    ctx->r9 = ctx->r8 & 0X40;
    // 0x802504B4: beq         $t1, $zero, L_802504CC
    if (ctx->r9 == 0) {
        // 0x802504B8: nop
    
            goto L_802504CC;
    }
    // 0x802504B8: nop

    // 0x802504BC: jal         0x80250394
    // 0x802504C0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_8024B800_func_80250394(rdram, ctx);
        goto after_1;
    // 0x802504C0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x802504C4: b           L_802509D8
    // 0x802504C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802509D8;
    // 0x802504C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802504CC:
    // 0x802504CC: jal         0x8024BC08
    // 0x802504D0: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    ovl_8024B800_func_8024BC08(rdram, ctx);
        goto after_2;
    // 0x802504D0: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    after_2:
    // 0x802504D4: addiu       $t2, $zero, 0x9
    ctx->r10 = ADD32(0, 0X9);
    // 0x802504D8: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x802504DC: sh          $t2, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r10;
    // 0x802504E0: sh          $t3, 0xE6($s0)
    MEM_H(0XE6, ctx->r16) = ctx->r11;
    // 0x802504E4: lwc1        $f4, 0x8C($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X8C);
    // 0x802504E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802504EC: swc1        $f4, 0xEC($s0)
    MEM_W(0XEC, ctx->r16) = ctx->f4.u32l;
    // 0x802504F0: lwc1        $f6, 0x8C($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X8C);
    // 0x802504F4: jal         0x80057F7C
    // 0x802504F8: swc1        $f6, 0xF0($s0)
    MEM_W(0XF0, ctx->r16) = ctx->f6.u32l;
    func_80057F7C(rdram, ctx);
        goto after_3;
    // 0x802504F8: swc1        $f6, 0xF0($s0)
    MEM_W(0XF0, ctx->r16) = ctx->f6.u32l;
    after_3:
    // 0x802504FC: lw          $t4, 0xC8($s1)
    ctx->r12 = MEM_W(ctx->r17, 0XC8);
    // 0x80250500: lhu         $t7, 0x32($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X32);
    // 0x80250504: lhu         $t5, 0x10($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0X10);
    // 0x80250508: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x8025050C: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x80250510: beq         $t6, $zero, L_80250520
    if (ctx->r14 == 0) {
        // 0x80250514: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80250520;
    }
    // 0x80250514: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80250518: b           L_80250520
    // 0x8025051C: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
        goto L_80250520;
    // 0x8025051C: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
L_80250520:
    // 0x80250520: or          $a2, $t7, $v1
    ctx->r6 = ctx->r15 | ctx->r3;
    // 0x80250524: andi        $t8, $a2, 0xFFFF
    ctx->r24 = ctx->r6 & 0XFFFF;
    // 0x80250528: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x8025052C: jal         0x8024F9B8
    // 0x80250530: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_8024B800_func_8024F9B8(rdram, ctx);
        goto after_4;
    // 0x80250530: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_4:
    // 0x80250534: b           L_802509D8
    // 0x80250538: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802509D8;
    // 0x80250538: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8025053C:
    // 0x8025053C: jal         0x800787A0
    // 0x80250540: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800787A0(rdram, ctx);
        goto after_5;
    // 0x80250540: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_5:
    // 0x80250544: jal         0x80271980
    // 0x80250548: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    ovl_8024B800_func_80271980(rdram, ctx);
        goto after_6;
    // 0x80250548: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    after_6:
L_8025054C:
    // 0x8025054C: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x80250550: lb          $t9, -0x3097($t9)
    ctx->r25 = MEM_B(ctx->r25, -0X3097);
    // 0x80250554: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80250558: beq         $t9, $zero, L_80250584
    if (ctx->r25 == 0) {
        // 0x8025055C: nop
    
            goto L_80250584;
    }
    // 0x8025055C: nop

    // 0x80250560: lhu         $t0, 0x16($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X16);
    // 0x80250564: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80250568: andi        $t1, $t0, 0x40
    ctx->r9 = ctx->r8 & 0X40;
    // 0x8025056C: beq         $t1, $zero, L_80250584
    if (ctx->r9 == 0) {
        // 0x80250570: nop
    
            goto L_80250584;
    }
    // 0x80250570: nop

    // 0x80250574: jal         0x80250394
    // 0x80250578: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_8024B800_func_80250394(rdram, ctx);
        goto after_7;
    // 0x80250578: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_7:
    // 0x8025057C: b           L_802509D8
    // 0x80250580: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802509D8;
    // 0x80250580: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80250584:
    // 0x80250584: jal         0x80279F3C
    // 0x80250588: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    ovl_8024B800_func_80279F3C(rdram, ctx);
        goto after_8;
    // 0x80250588: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_8:
    // 0x8025058C: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    // 0x80250590: lw          $a2, 0x44($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X44);
    // 0x80250594: lw          $a1, 0x4C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4C);
    // 0x80250598: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8025059C: jal         0x80272B98
    // 0x802505A0: addiu       $a3, $sp, 0x3C
    ctx->r7 = ADD32(ctx->r29, 0X3C);
    ovl_8024B800_func_80272B98(rdram, ctx);
        goto after_9;
    // 0x802505A0: addiu       $a3, $sp, 0x3C
    ctx->r7 = ADD32(ctx->r29, 0X3C);
    after_9:
    // 0x802505A4: lwc1        $f12, 0x8C($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X8C);
    // 0x802505A8: lwc1        $f14, 0x8C($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x802505AC: jal         0x8027924C
    // 0x802505B0: nop

    ovl_8024B800_func_8027924C(rdram, ctx);
        goto after_10;
    // 0x802505B0: nop

    after_10:
    // 0x802505B4: lw          $v0, 0x4C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4C);
    // 0x802505B8: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    // 0x802505BC: bne         $v0, $zero, L_80250704
    if (ctx->r2 != 0) {
        // 0x802505C0: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_80250704;
    }
    // 0x802505C0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802505C4: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x802505C8: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x802505CC: bne         $t2, $at, L_80250614
    if (ctx->r10 != ctx->r1) {
        // 0x802505D0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80250614;
    }
    // 0x802505D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802505D4: lw          $t3, 0xC8($s1)
    ctx->r11 = MEM_W(ctx->r17, 0XC8);
    // 0x802505D8: lhu         $t6, 0x32($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X32);
    // 0x802505DC: lhu         $t4, 0x10($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0X10);
    // 0x802505E0: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x802505E4: andi        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 & 0X1;
    // 0x802505E8: beq         $t5, $zero, L_802505F8
    if (ctx->r13 == 0) {
        // 0x802505EC: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_802505F8;
    }
    // 0x802505EC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802505F0: b           L_802505F8
    // 0x802505F4: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
        goto L_802505F8;
    // 0x802505F4: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
L_802505F8:
    // 0x802505F8: or          $a2, $t6, $v1
    ctx->r6 = ctx->r14 | ctx->r3;
    // 0x802505FC: andi        $t7, $a2, 0xFFFF
    ctx->r15 = ctx->r6 & 0XFFFF;
    // 0x80250600: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x80250604: jal         0x8024F9B8
    // 0x80250608: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_8024B800_func_8024F9B8(rdram, ctx);
        goto after_11;
    // 0x80250608: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_11:
    // 0x8025060C: b           L_80250644
    // 0x80250610: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80250644;
    // 0x80250610: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80250614:
    // 0x80250614: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80250618: jal         0x8027A02C
    // 0x8025061C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_8024B800_func_8027A02C(rdram, ctx);
        goto after_12;
    // 0x8025061C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_12:
    // 0x80250620: beq         $v0, $zero, L_80250640
    if (ctx->r2 == 0) {
        // 0x80250624: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80250640;
    }
    // 0x80250624: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80250628: lhu         $t8, 0x32($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X32);
    // 0x8025062C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80250630: or          $a2, $t8, $v0
    ctx->r6 = ctx->r24 | ctx->r2;
    // 0x80250634: andi        $t9, $a2, 0xFFFF
    ctx->r25 = ctx->r6 & 0XFFFF;
    // 0x80250638: jal         0x8024F9B8
    // 0x8025063C: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    ovl_8024B800_func_8024F9B8(rdram, ctx);
        goto after_13;
    // 0x8025063C: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    after_13:
L_80250640:
    // 0x80250640: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80250644:
    // 0x80250644: jal         0x8024BC08
    // 0x80250648: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    ovl_8024B800_func_8024BC08(rdram, ctx);
        goto after_14;
    // 0x80250648: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    after_14:
    // 0x8025064C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80250650: sh          $t0, 0xE6($s0)
    MEM_H(0XE6, ctx->r16) = ctx->r8;
    // 0x80250654: lwc1        $f12, 0x44($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80250658: jal         0x80272AEC
    // 0x8025065C: nop

    ovl_8024B800_func_80272AEC(rdram, ctx);
        goto after_15;
    // 0x8025065C: nop

    after_15:
    // 0x80250660: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80250664: lwc1        $f9, -0x4028($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X4028);
    // 0x80250668: lwc1        $f8, -0x4024($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X4024);
    // 0x8025066C: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x80250670: c.lt.d      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.d < ctx->f10.d;
    // 0x80250674: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x80250678: bc1f        L_80250688
    if (!c1cs) {
        // 0x8025067C: nop
    
            goto L_80250688;
    }
    // 0x8025067C: nop

    // 0x80250680: b           L_802506D4
    // 0x80250684: sh          $t1, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r9;
        goto L_802506D4;
    // 0x80250684: sh          $t1, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r9;
L_80250688:
    // 0x80250688: jal         0x80059898
    // 0x8025068C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_80059898(rdram, ctx);
        goto after_16;
    // 0x8025068C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_16:
    // 0x80250690: bne         $v0, $zero, L_802506B8
    if (ctx->r2 != 0) {
        // 0x80250694: lui         $t2, 0x8009
        ctx->r10 = S32(0X8009 << 16);
            goto L_802506B8;
    }
    // 0x80250694: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x80250698: lw          $t2, 0x3B20($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X3B20);
    // 0x8025069C: nop

    // 0x802506A0: lhu         $t3, 0xDC($t2)
    ctx->r11 = MEM_HU(ctx->r10, 0XDC);
    // 0x802506A4: nop

    // 0x802506A8: bne         $t3, $zero, L_802506BC
    if (ctx->r11 != 0) {
        // 0x802506AC: xori        $v1, $v0, 0x1
        ctx->r3 = ctx->r2 ^ 0X1;
            goto L_802506BC;
    }
    // 0x802506AC: xori        $v1, $v0, 0x1
    ctx->r3 = ctx->r2 ^ 0X1;
    // 0x802506B0: b           L_802506D4
    // 0x802506B4: sh          $zero, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = 0;
        goto L_802506D4;
    // 0x802506B4: sh          $zero, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = 0;
L_802506B8:
    // 0x802506B8: xori        $v1, $v0, 0x1
    ctx->r3 = ctx->r2 ^ 0X1;
L_802506BC:
    // 0x802506BC: bne         $v1, $zero, L_802506D0
    if (ctx->r3 != 0) {
        // 0x802506C0: addiu       $t5, $zero, 0x3
        ctx->r13 = ADD32(0, 0X3);
            goto L_802506D0;
    }
    // 0x802506C0: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x802506C4: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x802506C8: b           L_802506D4
    // 0x802506CC: sh          $t4, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r12;
        goto L_802506D4;
    // 0x802506CC: sh          $t4, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r12;
L_802506D0:
    // 0x802506D0: sh          $t5, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r13;
L_802506D4:
    // 0x802506D4: jal         0x80065A9C
    // 0x802506D8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80065A9C(rdram, ctx);
        goto after_17;
    // 0x802506D8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_17:
    // 0x802506DC: jal         0x80057F7C
    // 0x802506E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80057F7C(rdram, ctx);
        goto after_18;
    // 0x802506E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
    // 0x802506E4: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x802506E8: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x802506EC: nop

    // 0x802506F0: lhu         $t6, 0xC0($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0XC0);
    // 0x802506F4: nop

    // 0x802506F8: andi        $t7, $t6, 0xFDFF
    ctx->r15 = ctx->r14 & 0XFDFF;
    // 0x802506FC: b           L_802509D4
    // 0x80250700: sh          $t7, 0xC0($v0)
    MEM_H(0XC0, ctx->r2) = ctx->r15;
        goto L_802509D4;
    // 0x80250700: sh          $t7, 0xC0($v0)
    MEM_H(0XC0, ctx->r2) = ctx->r15;
L_80250704:
    // 0x80250704: bne         $v0, $at, L_802507E4
    if (ctx->r2 != ctx->r1) {
        // 0x80250708: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_802507E4;
    }
    // 0x80250708: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8025070C: lhu         $t8, 0x16($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X16);
    // 0x80250710: nop

    // 0x80250714: andi        $t9, $t8, 0x40
    ctx->r25 = ctx->r24 & 0X40;
    // 0x80250718: beq         $t9, $zero, L_8025073C
    if (ctx->r25 == 0) {
        // 0x8025071C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8025073C;
    }
    // 0x8025071C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80250720: jal         0x80057F7C
    // 0x80250724: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80057F7C(rdram, ctx);
        goto after_19;
    // 0x80250724: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
    // 0x80250728: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8025072C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80250730: jal         0x8024F9B8
    // 0x80250734: addiu       $a2, $zero, 0x82
    ctx->r6 = ADD32(0, 0X82);
    ovl_8024B800_func_8024F9B8(rdram, ctx);
        goto after_20;
    // 0x80250734: addiu       $a2, $zero, 0x82
    ctx->r6 = ADD32(0, 0X82);
    after_20:
    // 0x80250738: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8025073C:
    // 0x8025073C: jal         0x8024BC08
    // 0x80250740: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    ovl_8024B800_func_8024BC08(rdram, ctx);
        goto after_21;
    // 0x80250740: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    after_21:
    // 0x80250744: lwc1        $f16, 0x8C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x80250748: addiu       $t0, $zero, 0xD
    ctx->r8 = ADD32(0, 0XD);
    // 0x8025074C: sh          $t0, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r8;
    // 0x80250750: swc1        $f16, 0xEC($s0)
    MEM_W(0XEC, ctx->r16) = ctx->f16.u32l;
    // 0x80250754: lwc1        $f12, 0x44($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80250758: jal         0x80272AEC
    // 0x8025075C: nop

    ovl_8024B800_func_80272AEC(rdram, ctx);
        goto after_22;
    // 0x8025075C: nop

    after_22:
    // 0x80250760: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80250764: lwc1        $f19, -0x4020($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, -0X4020);
    // 0x80250768: lwc1        $f18, -0x401C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X401C);
    // 0x8025076C: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x80250770: c.lt.d      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.d < ctx->f4.d;
    // 0x80250774: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80250778: bc1f        L_802507D8
    if (!c1cs) {
        // 0x8025077C: nop
    
            goto L_802507D8;
    }
    // 0x8025077C: nop

    // 0x80250780: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80250784: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80250788: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x8025078C: nop

    // 0x80250790: bc1f        L_802507BC
    if (!c1cs) {
        // 0x80250794: nop
    
            goto L_802507BC;
    }
    // 0x80250794: nop

    // 0x80250798: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8025079C: lwc1        $f10, 0xEC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XEC);
    // 0x802507A0: lwc1        $f19, -0x4018($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, -0X4018);
    // 0x802507A4: lwc1        $f18, -0x4014($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X4014);
    // 0x802507A8: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x802507AC: sub.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d - ctx->f18.d;
    // 0x802507B0: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x802507B4: b           L_802507D8
    // 0x802507B8: swc1        $f6, 0xEC($s0)
    MEM_W(0XEC, ctx->r16) = ctx->f6.u32l;
        goto L_802507D8;
    // 0x802507B8: swc1        $f6, 0xEC($s0)
    MEM_W(0XEC, ctx->r16) = ctx->f6.u32l;
L_802507BC:
    // 0x802507BC: lwc1        $f8, 0xEC($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XEC);
    // 0x802507C0: lwc1        $f17, -0x4010($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X4010);
    // 0x802507C4: lwc1        $f16, -0x400C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X400C);
    // 0x802507C8: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x802507CC: add.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d + ctx->f16.d;
    // 0x802507D0: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x802507D4: swc1        $f4, 0xEC($s0)
    MEM_W(0XEC, ctx->r16) = ctx->f4.u32l;
L_802507D8:
    // 0x802507D8: lwc1        $f6, 0xEC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XEC);
    // 0x802507DC: b           L_802509D4
    // 0x802507E0: swc1        $f6, 0xF0($s0)
    MEM_W(0XF0, ctx->r16) = ctx->f6.u32l;
        goto L_802509D4;
    // 0x802507E0: swc1        $f6, 0xF0($s0)
    MEM_W(0XF0, ctx->r16) = ctx->f6.u32l;
L_802507E4:
    // 0x802507E4: jal         0x80250394
    // 0x802507E8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_8024B800_func_80250394(rdram, ctx);
        goto after_23;
    // 0x802507E8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_23:
    // 0x802507EC: b           L_802509D8
    // 0x802507F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802509D8;
    // 0x802507F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802507F4:
    // 0x802507F4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802507F8: jal         0x80250120
    // 0x802507FC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_8024B800_func_80250120(rdram, ctx);
        goto after_24;
    // 0x802507FC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_24:
    // 0x80250800: b           L_802509D8
    // 0x80250804: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802509D8;
    // 0x80250804: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80250808:
    // 0x80250808: lhu         $t1, 0x12($s1)
    ctx->r9 = MEM_HU(ctx->r17, 0X12);
    // 0x8025080C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80250810: andi        $t2, $t1, 0x7FFF
    ctx->r10 = ctx->r9 & 0X7FFF;
    // 0x80250814: sh          $t2, 0x12($s1)
    MEM_H(0X12, ctx->r17) = ctx->r10;
    // 0x80250818: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x8025081C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80250820: lw          $t3, 0x84($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X84);
    // 0x80250824: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80250828: bne         $s0, $t3, L_80250868
    if (ctx->r16 != ctx->r11) {
        // 0x8025082C: nop
    
            goto L_80250868;
    }
    // 0x8025082C: nop

    // 0x80250830: jal         0x8027A02C
    // 0x80250834: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_8024B800_func_8027A02C(rdram, ctx);
        goto after_25;
    // 0x80250834: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_25:
    // 0x80250838: beq         $v0, $zero, L_80250858
    if (ctx->r2 == 0) {
        // 0x8025083C: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80250858;
    }
    // 0x8025083C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80250840: lhu         $t4, 0x32($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X32);
    // 0x80250844: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80250848: or          $a2, $t4, $v0
    ctx->r6 = ctx->r12 | ctx->r2;
    // 0x8025084C: andi        $t5, $a2, 0xFFFF
    ctx->r13 = ctx->r6 & 0XFFFF;
    // 0x80250850: jal         0x8024F9B8
    // 0x80250854: or          $a2, $t5, $zero
    ctx->r6 = ctx->r13 | 0;
    ovl_8024B800_func_8024F9B8(rdram, ctx);
        goto after_26;
    // 0x80250854: or          $a2, $t5, $zero
    ctx->r6 = ctx->r13 | 0;
    after_26:
L_80250858:
    // 0x80250858: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8025085C: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x80250860: b           L_802509C0
    // 0x80250864: lhu         $a2, 0xDC($v0)
    ctx->r6 = MEM_HU(ctx->r2, 0XDC);
        goto L_802509C0;
    // 0x80250864: lhu         $a2, 0xDC($v0)
    ctx->r6 = MEM_HU(ctx->r2, 0XDC);
L_80250868:
    // 0x80250868: lw          $t6, 0x8C($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X8C);
    // 0x8025086C: nop

    // 0x80250870: bne         $s0, $t6, L_802509BC
    if (ctx->r16 != ctx->r14) {
        // 0x80250874: nop
    
            goto L_802509BC;
    }
    // 0x80250874: nop

    // 0x80250878: lbu         $t7, 0xBC($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0XBC);
    // 0x8025087C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80250880: beq         $t7, $at, L_802509BC
    if (ctx->r15 == ctx->r1) {
        // 0x80250884: nop
    
            goto L_802509BC;
    }
    // 0x80250884: nop

    // 0x80250888: lw          $t8, 0x88($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X88);
    // 0x8025088C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80250890: bne         $s0, $t8, L_802508A8
    if (ctx->r16 != ctx->r24) {
        // 0x80250894: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_802508A8;
    }
    // 0x80250894: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80250898: sw          $zero, 0x88($v0)
    MEM_W(0X88, ctx->r2) = 0;
    // 0x8025089C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x802508A0: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x802508A4: nop

L_802508A8:
    // 0x802508A8: lwc1        $f8, 0x4($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X4);
    // 0x802508AC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802508B0: lhu         $t2, 0x32($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X32);
    // 0x802508B4: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x802508B8: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x802508BC: bc1f        L_80250908
    if (!c1cs) {
        // 0x802508C0: nop
    
            goto L_80250908;
    }
    // 0x802508C0: nop

    // 0x802508C4: lw          $t9, 0xC8($s1)
    ctx->r25 = MEM_W(ctx->r17, 0XC8);
    // 0x802508C8: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x802508CC: lhu         $t0, 0x10($t9)
    ctx->r8 = MEM_HU(ctx->r25, 0X10);
    // 0x802508D0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x802508D4: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x802508D8: beq         $t1, $zero, L_802508E8
    if (ctx->r9 == 0) {
        // 0x802508DC: nop
    
            goto L_802508E8;
    }
    // 0x802508DC: nop

    // 0x802508E0: b           L_802508E8
    // 0x802508E4: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
        goto L_802508E8;
    // 0x802508E4: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
L_802508E8:
    // 0x802508E8: or          $a2, $t2, $v1
    ctx->r6 = ctx->r10 | ctx->r3;
    // 0x802508EC: andi        $t3, $a2, 0xFFFF
    ctx->r11 = ctx->r6 & 0XFFFF;
    // 0x802508F0: jal         0x8024F9B8
    // 0x802508F4: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    ovl_8024B800_func_8024F9B8(rdram, ctx);
        goto after_27;
    // 0x802508F4: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    after_27:
    // 0x802508F8: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x802508FC: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x80250900: b           L_802509C0
    // 0x80250904: lhu         $a2, 0xDC($v0)
    ctx->r6 = MEM_HU(ctx->r2, 0XDC);
        goto L_802509C0;
    // 0x80250904: lhu         $a2, 0xDC($v0)
    ctx->r6 = MEM_HU(ctx->r2, 0XDC);
L_80250908:
    // 0x80250908: lwc1        $f16, 0x84($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X84);
    // 0x8025090C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80250910: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80250914: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x80250918: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8025091C: bc1f        L_8025095C
    if (!c1cs) {
        // 0x80250920: nop
    
            goto L_8025095C;
    }
    // 0x80250920: nop

    // 0x80250924: jal         0x8027A02C
    // 0x80250928: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_8024B800_func_8027A02C(rdram, ctx);
        goto after_28;
    // 0x80250928: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_28:
    // 0x8025092C: beq         $v0, $zero, L_8025094C
    if (ctx->r2 == 0) {
        // 0x80250930: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_8025094C;
    }
    // 0x80250930: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80250934: lhu         $t4, 0x32($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X32);
    // 0x80250938: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8025093C: or          $a2, $t4, $v0
    ctx->r6 = ctx->r12 | ctx->r2;
    // 0x80250940: andi        $t5, $a2, 0xFFFF
    ctx->r13 = ctx->r6 & 0XFFFF;
    // 0x80250944: jal         0x8024F9B8
    // 0x80250948: or          $a2, $t5, $zero
    ctx->r6 = ctx->r13 | 0;
    ovl_8024B800_func_8024F9B8(rdram, ctx);
        goto after_29;
    // 0x80250948: or          $a2, $t5, $zero
    ctx->r6 = ctx->r13 | 0;
    after_29:
L_8025094C:
    // 0x8025094C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80250950: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x80250954: b           L_802509C0
    // 0x80250958: lhu         $a2, 0xDC($v0)
    ctx->r6 = MEM_HU(ctx->r2, 0XDC);
        goto L_802509C0;
    // 0x80250958: lhu         $a2, 0xDC($v0)
    ctx->r6 = MEM_HU(ctx->r2, 0XDC);
L_8025095C:
    // 0x8025095C: lbu         $v1, 0xBC($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0XBC);
    // 0x80250960: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80250964: bne         $v1, $at, L_80250978
    if (ctx->r3 != ctx->r1) {
        // 0x80250968: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80250978;
    }
    // 0x80250968: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8025096C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80250970: beq         $v1, $at, L_802509BC
    if (ctx->r3 == ctx->r1) {
        // 0x80250974: nop
    
            goto L_802509BC;
    }
    // 0x80250974: nop

L_80250978:
    // 0x80250978: lw          $t6, 0xC8($s1)
    ctx->r14 = MEM_W(ctx->r17, 0XC8);
    // 0x8025097C: lhu         $t9, 0x32($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X32);
    // 0x80250980: lhu         $t7, 0x10($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X10);
    // 0x80250984: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x80250988: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x8025098C: beq         $t8, $zero, L_8025099C
    if (ctx->r24 == 0) {
        // 0x80250990: nop
    
            goto L_8025099C;
    }
    // 0x80250990: nop

    // 0x80250994: b           L_8025099C
    // 0x80250998: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
        goto L_8025099C;
    // 0x80250998: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
L_8025099C:
    // 0x8025099C: or          $a2, $t9, $v1
    ctx->r6 = ctx->r25 | ctx->r3;
    // 0x802509A0: andi        $t0, $a2, 0xFFFF
    ctx->r8 = ctx->r6 & 0XFFFF;
    // 0x802509A4: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    // 0x802509A8: jal         0x8024F9B8
    // 0x802509AC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_8024B800_func_8024F9B8(rdram, ctx);
        goto after_30;
    // 0x802509AC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_30:
    // 0x802509B0: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x802509B4: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x802509B8: nop

L_802509BC:
    // 0x802509BC: lhu         $a2, 0xDC($v0)
    ctx->r6 = MEM_HU(ctx->r2, 0XDC);
L_802509C0:
    // 0x802509C0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802509C4: jal         0x8024FFC0
    // 0x802509C8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_8024B800_func_8024FFC0(rdram, ctx);
        goto after_31;
    // 0x802509C8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_31:
    // 0x802509CC: jal         0x80057F7C
    // 0x802509D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80057F7C(rdram, ctx);
        goto after_32;
    // 0x802509D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_32:
L_802509D4:
    // 0x802509D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802509D8:
    // 0x802509D8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x802509DC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x802509E0: jr          $ra
    // 0x802509E4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x802509E4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void ovl_8024B800_func_802509E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802509E8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802509EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802509F0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x802509F4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x802509F8: jal         0x802732F4
    // 0x802509FC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    ovl_8024B800_func_802732F4(rdram, ctx);
        goto after_0;
    // 0x802509FC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x80250A00: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x80250A04: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80250A08: lw          $a1, 0x4C($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4C);
    // 0x80250A0C: lw          $a2, 0x44($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X44);
    // 0x80250A10: jal         0x80272B98
    // 0x80250A14: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    ovl_8024B800_func_80272B98(rdram, ctx);
        goto after_1;
    // 0x80250A14: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    after_1:
    // 0x80250A18: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80250A1C: lwc1        $f14, 0x18($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80250A20: lwc1        $f12, 0x8C($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X8C);
    // 0x80250A24: jal         0x8027924C
    // 0x80250A28: nop

    ovl_8024B800_func_8027924C(rdram, ctx);
        goto after_2;
    // 0x80250A28: nop

    after_2:
    // 0x80250A2C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80250A30: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80250A34: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x80250A38: nop

    // 0x80250A3C: bc1f        L_80250A50
    if (!c1cs) {
        // 0x80250A40: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80250A50;
    }
    // 0x80250A40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80250A44: jal         0x802732D0
    // 0x80250A48: nop

    ovl_8024B800_func_802732D0(rdram, ctx);
        goto after_3;
    // 0x80250A48: nop

    after_3:
    // 0x80250A4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80250A50:
    // 0x80250A50: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80250A54: jr          $ra
    // 0x80250A58: nop

    return;
    // 0x80250A58: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80250A5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80250A5C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80250A60: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80250A64: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80250A68: lwc1        $f12, 0x7C($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X7C);
    // 0x80250A6C: jal         0x80081040
    // 0x80250A70: nop

    func_80081040(rdram, ctx);
        goto after_0;
    // 0x80250A70: nop

    after_0:
    // 0x80250A74: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x80250A78: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x80250A7C: lwc1        $f12, 0x7C($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X7C);
    // 0x80250A80: jal         0x80080E80
    // 0x80250A84: nop

    func_80080E80(rdram, ctx);
        goto after_1;
    // 0x80250A84: nop

    after_1:
    // 0x80250A88: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80250A8C: lui         $at, 0x4014
    ctx->r1 = S32(0X4014 << 16);
    // 0x80250A90: mtc1        $at, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r1;
    // 0x80250A94: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80250A98: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80250A9C: mul.d       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f2.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f2.d);
    // 0x80250AA0: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x80250AA4: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x80250AA8: lwc1        $f10, 0x4C($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X4C);
    // 0x80250AAC: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80250AB0: mul.d       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f2.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f2.d);
    // 0x80250AB4: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x80250AB8: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x80250ABC: lwc1        $f10, 0x44($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X44);
    // 0x80250AC0: addiu       $t8, $sp, 0x30
    ctx->r24 = ADD32(ctx->r29, 0X30);
    // 0x80250AC4: add.d       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f8.d + ctx->f16.d;
    // 0x80250AC8: lw          $a2, 0x8($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X8);
    // 0x80250ACC: cvt.d.s     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f8.d = CVT_D_S(ctx->f10.fl);
    // 0x80250AD0: add.d       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f16.d = ctx->f6.d + ctx->f8.d;
    // 0x80250AD4: lw          $a3, 0x0($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X0);
    // 0x80250AD8: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80250ADC: cvt.s.d     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f14.fl = CVT_S_D(ctx->f16.d);
    // 0x80250AE0: jal         0x80272B1C
    // 0x80250AE4: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    ovl_8024B800_func_80272B1C(rdram, ctx);
        goto after_2;
    // 0x80250AE4: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    after_2:
    // 0x80250AE8: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80250AEC: addiu       $v0, $v0, 0x3B20
    ctx->r2 = ADD32(ctx->r2, 0X3B20);
    // 0x80250AF0: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x80250AF4: lwc1        $f18, 0x30($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80250AF8: nop

    // 0x80250AFC: swc1        $f18, 0x40($t9)
    MEM_W(0X40, ctx->r25) = ctx->f18.u32l;
    // 0x80250B00: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x80250B04: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80250B08: nop

    // 0x80250B0C: swc1        $f4, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->f4.u32l;
    // 0x80250B10: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80250B14: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80250B18: jr          $ra
    // 0x80250B1C: nop

    return;
    // 0x80250B1C: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80250B20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80250B20: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80250B24: addiu       $v0, $v0, 0x361E
    ctx->r2 = ADD32(ctx->r2, 0X361E);
    // 0x80250B28: lhu         $t7, 0x0($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X0);
    // 0x80250B2C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80250B30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80250B34: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80250B38: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x80250B3C: ori         $t8, $t7, 0x800
    ctx->r24 = ctx->r15 | 0X800;
    // 0x80250B40: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x80250B44: jal         0x80049268
    // 0x80250B48: sh          $t8, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r24;
    func_80049268(rdram, ctx);
        goto after_0;
    // 0x80250B48: sh          $t8, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r24;
    after_0:
    // 0x80250B4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80250B50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80250B54: jr          $ra
    // 0x80250B58: nop

    return;
    // 0x80250B58: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80250B5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80250B5C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80250B60: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x80250B64: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80250B68: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80250B6C: lw          $a1, 0x84($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X84);
    // 0x80250B70: nop

    // 0x80250B74: beq         $a1, $zero, L_80250B8C
    if (ctx->r5 == 0) {
        // 0x80250B78: nop
    
            goto L_80250B8C;
    }
    // 0x80250B78: nop

    // 0x80250B7C: jal         0x8024FFC0
    // 0x80250B80: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_8024B800_func_8024FFC0(rdram, ctx);
        goto after_0;
    // 0x80250B80: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x80250B84: b           L_80250BC0
    // 0x80250B88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80250BC0;
    // 0x80250B88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80250B8C:
    // 0x80250B8C: lw          $a0, 0x88($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X88);
    // 0x80250B90: nop

    // 0x80250B94: beq         $a0, $zero, L_80250BC0
    if (ctx->r4 == 0) {
        // 0x80250B98: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80250BC0;
    }
    // 0x80250B98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80250B9C: jal         0x8024BC08
    // 0x80250BA0: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    ovl_8024B800_func_8024BC08(rdram, ctx);
        goto after_1;
    // 0x80250BA0: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    after_1:
    // 0x80250BA4: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x80250BA8: lw          $t7, 0x3B20($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3B20);
    // 0x80250BAC: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x80250BB0: lw          $t8, 0x88($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X88);
    // 0x80250BB4: nop

    // 0x80250BB8: sh          $t6, 0xE4($t8)
    MEM_H(0XE4, ctx->r24) = ctx->r14;
    // 0x80250BBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80250BC0:
    // 0x80250BC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80250BC4: jr          $ra
    // 0x80250BC8: nop

    return;
    // 0x80250BC8: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80250BCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80250BCC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80250BD0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80250BD4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80250BD8: jal         0x80250B5C
    // 0x80250BDC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    ovl_8024B800_func_80250B5C(rdram, ctx);
        goto after_0;
    // 0x80250BDC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80250BE0: jal         0x80250C9C
    // 0x80250BE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80250C9C(rdram, ctx);
        goto after_1;
    // 0x80250BE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80250BE8: jal         0x80055528
    // 0x80250BEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80055528(rdram, ctx);
        goto after_2;
    // 0x80250BEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80250BF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80250BF4: jal         0x802A613C
    // 0x80250BF8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    LOOKUP_FUNC(0x802A613C)(rdram, ctx);
        goto after_3;
    // 0x80250BF8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_3:
    // 0x80250BFC: lhu         $t6, 0x16($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X16);
    // 0x80250C00: lhu         $t8, 0x20($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X20);
    // 0x80250C04: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x80250C08: ori         $t7, $t6, 0x40
    ctx->r15 = ctx->r14 | 0X40;
    // 0x80250C0C: ori         $t9, $t8, 0x400
    ctx->r25 = ctx->r24 | 0X400;
    // 0x80250C10: addiu       $v1, $v1, 0x3B20
    ctx->r3 = ADD32(ctx->r3, 0X3B20);
    // 0x80250C14: sh          $t7, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r15;
    // 0x80250C18: sh          $t9, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r25;
    // 0x80250C1C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80250C20: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80250C24: lhu         $t0, 0xC2($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0XC2);
    // 0x80250C28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80250C2C: ori         $t1, $t0, 0x40
    ctx->r9 = ctx->r8 | 0X40;
    // 0x80250C30: sh          $t1, 0xC2($v0)
    MEM_H(0XC2, ctx->r2) = ctx->r9;
    // 0x80250C34: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80250C38: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80250C3C: lhu         $t2, 0xC2($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0XC2);
    // 0x80250C40: nop

    // 0x80250C44: andi        $t3, $t2, 0xFEFF
    ctx->r11 = ctx->r10 & 0XFEFF;
    // 0x80250C48: sh          $t3, 0xC2($v0)
    MEM_H(0XC2, ctx->r2) = ctx->r11;
    // 0x80250C4C: jal         0x803F170C
    // 0x80250C50: sh          $zero, 0xB48($at)
    MEM_H(0XB48, ctx->r1) = 0;
    LOOKUP_FUNC(0x803F170C)(rdram, ctx);
        goto after_4;
    // 0x80250C50: sh          $zero, 0xB48($at)
    MEM_H(0XB48, ctx->r1) = 0;
    after_4:
    // 0x80250C54: lhu         $t4, 0x12($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X12);
    // 0x80250C58: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80250C5C: ori         $t5, $t4, 0x8
    ctx->r13 = ctx->r12 | 0X8;
    // 0x80250C60: sh          $t5, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r13;
    // 0x80250C64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80250C68: jal         0x802791D0
    // 0x80250C6C: swc1        $f4, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f4.u32l;
    ovl_8024B800_func_802791D0(rdram, ctx);
        goto after_5;
    // 0x80250C6C: swc1        $f4, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f4.u32l;
    after_5:
    // 0x80250C70: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80250C74: lbu         $t6, -0x32A4($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X32A4);
    // 0x80250C78: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x80250C7C: beq         $t6, $at, L_80250C90
    if (ctx->r14 == ctx->r1) {
        // 0x80250C80: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80250C90;
    }
    // 0x80250C80: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80250C84: jal         0x802719DC
    // 0x80250C88: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    ovl_8024B800_func_802719DC(rdram, ctx);
        goto after_6;
    // 0x80250C88: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_6:
    // 0x80250C8C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80250C90:
    // 0x80250C90: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80250C94: jr          $ra
    // 0x80250C98: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80250C98: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_8024B800_func_80250C9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80250C9C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80250CA0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80250CA4: jal         0x80272C74
    // 0x80250CA8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_8024B800_func_80272C74(rdram, ctx);
        goto after_0;
    // 0x80250CA8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80250CAC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80250CB0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80250CB4: beq         $v0, $at, L_80250CD8
    if (ctx->r2 == ctx->r1) {
        // 0x80250CB8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80250CD8;
    }
    // 0x80250CB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80250CBC: lh          $v0, 0xE6($a0)
    ctx->r2 = MEM_H(ctx->r4, 0XE6);
    // 0x80250CC0: nop

    // 0x80250CC4: beq         $v0, $zero, L_80250CD4
    if (ctx->r2 == 0) {
        // 0x80250CC8: andi        $a1, $v0, 0xFFFF
        ctx->r5 = ctx->r2 & 0XFFFF;
            goto L_80250CD4;
    }
    // 0x80250CC8: andi        $a1, $v0, 0xFFFF
    ctx->r5 = ctx->r2 & 0XFFFF;
    // 0x80250CCC: jal         0x80272D3C
    // 0x80250CD0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_8024B800_func_80272D3C(rdram, ctx);
        goto after_1;
    // 0x80250CD0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
L_80250CD4:
    // 0x80250CD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80250CD8:
    // 0x80250CD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80250CDC: jr          $ra
    // 0x80250CE0: nop

    return;
    // 0x80250CE0: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80250CE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80250CE4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80250CE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80250CEC: jal         0x80272C74
    // 0x80250CF0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_8024B800_func_80272C74(rdram, ctx);
        goto after_0;
    // 0x80250CF0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80250CF4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80250CF8: bne         $v0, $zero, L_80250D1C
    if (ctx->r2 != 0) {
        // 0x80250CFC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80250D1C;
    }
    // 0x80250CFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80250D00: lh          $v0, 0xE6($a0)
    ctx->r2 = MEM_H(ctx->r4, 0XE6);
    // 0x80250D04: nop

    // 0x80250D08: beq         $v0, $zero, L_80250D18
    if (ctx->r2 == 0) {
        // 0x80250D0C: andi        $a1, $v0, 0xFFFF
        ctx->r5 = ctx->r2 & 0XFFFF;
            goto L_80250D18;
    }
    // 0x80250D0C: andi        $a1, $v0, 0xFFFF
    ctx->r5 = ctx->r2 & 0XFFFF;
    // 0x80250D10: jal         0x80272D3C
    // 0x80250D14: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_8024B800_func_80272D3C(rdram, ctx);
        goto after_1;
    // 0x80250D14: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
L_80250D18:
    // 0x80250D18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80250D1C:
    // 0x80250D1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80250D20: jr          $ra
    // 0x80250D24: nop

    return;
    // 0x80250D24: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80250D28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80250D28: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80250D2C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80250D30: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80250D34: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80250D38: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80250D3C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80250D40: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x80250D44: jal         0x80250CE4
    // 0x80250D48: swc1        $f12, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f12.u32l;
    ovl_8024B800_func_80250CE4(rdram, ctx);
        goto after_0;
    // 0x80250D48: swc1        $f12, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x80250D4C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80250D50: addiu       $v1, $v1, 0x950
    ctx->r3 = ADD32(ctx->r3, 0X950);
    // 0x80250D54: sh          $zero, 0x98($v1)
    MEM_H(0X98, ctx->r3) = 0;
    // 0x80250D58: lhu         $t6, 0x18($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X18);
    // 0x80250D5C: lhu         $v0, 0x36($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X36);
    // 0x80250D60: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x80250D64: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80250D68: andi        $t7, $t6, 0xFFFE
    ctx->r15 = ctx->r14 & 0XFFFE;
    // 0x80250D6C: andi        $t8, $v0, 0x4
    ctx->r24 = ctx->r2 & 0X4;
    // 0x80250D70: beq         $t8, $zero, L_80250E10
    if (ctx->r24 == 0) {
        // 0x80250D74: sh          $t7, 0x18($s0)
        MEM_H(0X18, ctx->r16) = ctx->r15;
            goto L_80250E10;
    }
    // 0x80250D74: sh          $t7, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r15;
    // 0x80250D78: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x80250D7C: nop

    // 0x80250D80: andi        $t9, $v0, 0x8
    ctx->r25 = ctx->r2 & 0X8;
    // 0x80250D84: beq         $t9, $zero, L_80250DBC
    if (ctx->r25 == 0) {
        // 0x80250D88: nop
    
            goto L_80250DBC;
    }
    // 0x80250D88: nop

    // 0x80250D8C: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x80250D90: lh          $a2, 0xE4($s0)
    ctx->r6 = MEM_H(ctx->r16, 0XE4);
    // 0x80250D94: jal         0x800575CC
    // 0x80250D98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800575CC(rdram, ctx);
        goto after_1;
    // 0x80250D98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80250D9C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80250DA0: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x80250DA4: nop

    // 0x80250DA8: lbu         $t0, 0xBD($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0XBD);
    // 0x80250DAC: nop

    // 0x80250DB0: ori         $t1, $t0, 0x1
    ctx->r9 = ctx->r8 | 0X1;
    // 0x80250DB4: b           L_80250E00
    // 0x80250DB8: sb          $t1, 0xBD($v0)
    MEM_B(0XBD, ctx->r2) = ctx->r9;
        goto L_80250E00;
    // 0x80250DB8: sb          $t1, 0xBD($v0)
    MEM_B(0XBD, ctx->r2) = ctx->r9;
L_80250DBC:
    // 0x80250DBC: lw          $v1, 0xF0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XF0);
    // 0x80250DC0: ori         $t2, $v0, 0x8
    ctx->r10 = ctx->r2 | 0X8;
    // 0x80250DC4: beq         $v1, $zero, L_80250DD4
    if (ctx->r3 == 0) {
        // 0x80250DC8: sh          $t2, 0x14($s0)
        MEM_H(0X14, ctx->r16) = ctx->r10;
            goto L_80250DD4;
    }
    // 0x80250DC8: sh          $t2, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r10;
    // 0x80250DCC: lwc1        $f12, 0x88($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X88);
    // 0x80250DD0: nop

L_80250DD4:
    // 0x80250DD4: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x80250DD8: lh          $a2, 0xE4($s0)
    ctx->r6 = MEM_H(ctx->r16, 0XE4);
    // 0x80250DDC: jal         0x800575CC
    // 0x80250DE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800575CC(rdram, ctx);
        goto after_2;
    // 0x80250DE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80250DE4: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80250DE8: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x80250DEC: nop

    // 0x80250DF0: lbu         $t3, 0xBD($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0XBD);
    // 0x80250DF4: nop

    // 0x80250DF8: ori         $t4, $t3, 0x1
    ctx->r12 = ctx->r11 | 0X1;
    // 0x80250DFC: sb          $t4, 0xBD($v0)
    MEM_B(0XBD, ctx->r2) = ctx->r12;
L_80250E00:
    // 0x80250E00: addiu       $t5, $zero, 0x1E
    ctx->r13 = ADD32(0, 0X1E);
    // 0x80250E04: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80250E08: b           L_80250F34
    // 0x80250E0C: sh          $t5, 0x3622($at)
    MEM_H(0X3622, ctx->r1) = ctx->r13;
        goto L_80250F34;
    // 0x80250E0C: sh          $t5, 0x3622($at)
    MEM_H(0X3622, ctx->r1) = ctx->r13;
L_80250E10:
    // 0x80250E10: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x80250E14: beq         $t6, $zero, L_80250E58
    if (ctx->r14 == 0) {
        // 0x80250E18: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80250E58;
    }
    // 0x80250E18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80250E1C: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x80250E20: lh          $a2, 0xE4($s0)
    ctx->r6 = MEM_H(ctx->r16, 0XE4);
    // 0x80250E24: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x80250E28: jal         0x800575CC
    // 0x80250E2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800575CC(rdram, ctx);
        goto after_3;
    // 0x80250E2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80250E30: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80250E34: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x80250E38: addiu       $t7, $zero, 0x1E
    ctx->r15 = ADD32(0, 0X1E);
    // 0x80250E3C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80250E40: sh          $t7, 0x3622($at)
    MEM_H(0X3622, ctx->r1) = ctx->r15;
    // 0x80250E44: lbu         $t8, 0xBD($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0XBD);
    // 0x80250E48: nop

    // 0x80250E4C: ori         $t9, $t8, 0x2
    ctx->r25 = ctx->r24 | 0X2;
    // 0x80250E50: b           L_80250F34
    // 0x80250E54: sb          $t9, 0xBD($v0)
    MEM_B(0XBD, ctx->r2) = ctx->r25;
        goto L_80250F34;
    // 0x80250E54: sb          $t9, 0xBD($v0)
    MEM_B(0XBD, ctx->r2) = ctx->r25;
L_80250E58:
    // 0x80250E58: jal         0x80271F6C
    // 0x80250E5C: swc1        $f12, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f12.u32l;
    ovl_8024B800_func_80271F6C(rdram, ctx);
        goto after_4;
    // 0x80250E5C: swc1        $f12, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f12.u32l;
    after_4:
    // 0x80250E60: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80250E64: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80250E68: beq         $v0, $zero, L_80250EB4
    if (ctx->r2 == 0) {
        // 0x80250E6C: addiu       $v1, $v1, 0x950
        ctx->r3 = ADD32(ctx->r3, 0X950);
            goto L_80250EB4;
    }
    // 0x80250E6C: addiu       $v1, $v1, 0x950
    ctx->r3 = ADD32(ctx->r3, 0X950);
    // 0x80250E70: lhu         $t0, 0x14($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X14);
    // 0x80250E74: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x80250E78: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x80250E7C: andi        $t1, $t0, 0xFFF7
    ctx->r9 = ctx->r8 & 0XFFF7;
    // 0x80250E80: sh          $t1, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r9;
    // 0x80250E84: addiu       $a3, $a3, -0x5324
    ctx->r7 = ADD32(ctx->r7, -0X5324);
    // 0x80250E88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80250E8C: jal         0x800575CC
    // 0x80250E90: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    func_800575CC(rdram, ctx);
        goto after_5;
    // 0x80250E90: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_5:
    // 0x80250E94: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80250E98: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x80250E9C: nop

    // 0x80250EA0: lbu         $t2, 0xBD($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0XBD);
    // 0x80250EA4: nop

    // 0x80250EA8: ori         $t3, $t2, 0x2
    ctx->r11 = ctx->r10 | 0X2;
    // 0x80250EAC: b           L_80250F34
    // 0x80250EB0: sb          $t3, 0xBD($v0)
    MEM_B(0XBD, ctx->r2) = ctx->r11;
        goto L_80250F34;
    // 0x80250EB0: sb          $t3, 0xBD($v0)
    MEM_B(0XBD, ctx->r2) = ctx->r11;
L_80250EB4:
    // 0x80250EB4: lhu         $v0, 0x6($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X6);
    // 0x80250EB8: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x80250EBC: andi        $t4, $v0, 0x4000
    ctx->r12 = ctx->r2 & 0X4000;
    // 0x80250EC0: beq         $t4, $zero, L_80250EE0
    if (ctx->r12 == 0) {
        // 0x80250EC4: ori         $t5, $v0, 0x2000
        ctx->r13 = ctx->r2 | 0X2000;
            goto L_80250EE0;
    }
    // 0x80250EC4: ori         $t5, $v0, 0x2000
    ctx->r13 = ctx->r2 | 0X2000;
    // 0x80250EC8: sh          $t5, 0x6($v1)
    MEM_H(0X6, ctx->r3) = ctx->r13;
    // 0x80250ECC: lw          $t6, 0xC8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC8);
    // 0x80250ED0: lhu         $t8, 0x4($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X4);
    // 0x80250ED4: lhu         $t7, 0x6($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X6);
    // 0x80250ED8: sh          $t8, 0xA4($v1)
    MEM_H(0XA4, ctx->r3) = ctx->r24;
    // 0x80250EDC: sb          $t7, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r15;
L_80250EE0:
    // 0x80250EE0: lh          $a2, 0xE4($s0)
    ctx->r6 = MEM_H(ctx->r16, 0XE4);
    // 0x80250EE4: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x80250EE8: jal         0x800577FC
    // 0x80250EEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800577FC(rdram, ctx);
        goto after_6;
    // 0x80250EEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80250EF0: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80250EF4: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x80250EF8: nop

    // 0x80250EFC: lbu         $t9, 0xBD($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0XBD);
    // 0x80250F00: nop

    // 0x80250F04: ori         $t0, $t9, 0x4
    ctx->r8 = ctx->r25 | 0X4;
    // 0x80250F08: sb          $t0, 0xBD($v0)
    MEM_B(0XBD, ctx->r2) = ctx->r8;
    // 0x80250F0C: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x80250F10: nop

    // 0x80250F14: lbu         $a0, 0x7($t1)
    ctx->r4 = MEM_BU(ctx->r9, 0X7);
    // 0x80250F18: jal         0x80250B20
    // 0x80250F1C: nop

    ovl_8024B800_func_80250B20(rdram, ctx);
        goto after_7;
    // 0x80250F1C: nop

    after_7:
    // 0x80250F20: addiu       $t2, $zero, 0x1E
    ctx->r10 = ADD32(0, 0X1E);
    // 0x80250F24: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80250F28: sh          $t2, 0x3624($at)
    MEM_H(0X3624, ctx->r1) = ctx->r10;
    // 0x80250F2C: jal         0x80065160
    // 0x80250F30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80065160(rdram, ctx);
        goto after_8;
    // 0x80250F30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
L_80250F34:
    // 0x80250F34: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80250F38: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80250F3C: jr          $ra
    // 0x80250F40: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80250F40: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_8024B800_func_80250F44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80250F44: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x80250F48: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80250F4C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80250F50: sw          $a1, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r5;
    // 0x80250F54: sw          $a2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r6;
    // 0x80250F58: lhu         $v0, 0x36($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X36);
    // 0x80250F5C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80250F60: andi        $t6, $v0, 0x4
    ctx->r14 = ctx->r2 & 0X4;
    // 0x80250F64: beq         $t6, $zero, L_80250FDC
    if (ctx->r14 == 0) {
        // 0x80250F68: andi        $t3, $v0, 0x8
        ctx->r11 = ctx->r2 & 0X8;
            goto L_80250FDC;
    }
    // 0x80250F68: andi        $t3, $v0, 0x8
    ctx->r11 = ctx->r2 & 0X8;
    // 0x80250F6C: jal         0x80255F2C
    // 0x80250F70: nop

    ovl_8024B800_func_80255F2C(rdram, ctx);
        goto after_0;
    // 0x80250F70: nop

    after_0:
    // 0x80250F74: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x80250F78: lw          $t8, 0x3B20($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X3B20);
    // 0x80250F7C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80250F80: sb          $t7, 0xBC($t8)
    MEM_B(0XBC, ctx->r24) = ctx->r15;
    // 0x80250F84: lhu         $t9, 0x14($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X14);
    // 0x80250F88: lw          $a1, 0x84($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X84);
    // 0x80250F8C: andi        $t0, $t9, 0x8
    ctx->r8 = ctx->r25 & 0X8;
    // 0x80250F90: bne         $t0, $zero, L_80250FB0
    if (ctx->r8 != 0) {
        // 0x80250F94: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80250FB0;
    }
    // 0x80250F94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80250F98: lw          $a1, 0xF0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XF0);
    // 0x80250F9C: lui         $a2, 0x3DB2
    ctx->r6 = S32(0X3DB2 << 16);
    // 0x80250FA0: jal         0x80055F18
    // 0x80250FA4: ori         $a2, $a2, 0xB8C2
    ctx->r6 = ctx->r6 | 0XB8C2;
    func_80055F18(rdram, ctx);
        goto after_1;
    // 0x80250FA4: ori         $a2, $a2, 0xB8C2
    ctx->r6 = ctx->r6 | 0XB8C2;
    after_1:
    // 0x80250FA8: b           L_80250FBC
    // 0x80250FAC: nop

        goto L_80250FBC;
    // 0x80250FAC: nop

L_80250FB0:
    // 0x80250FB0: lhu         $a2, 0x8A($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X8A);
    // 0x80250FB4: jal         0x80055E38
    // 0x80250FB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80055E38(rdram, ctx);
        goto after_2;
    // 0x80250FB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
L_80250FBC:
    // 0x80250FBC: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80250FC0: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x80250FC4: nop

    // 0x80250FC8: lbu         $t1, 0xBD($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0XBD);
    // 0x80250FCC: nop

    // 0x80250FD0: ori         $t2, $t1, 0x1
    ctx->r10 = ctx->r9 | 0X1;
    // 0x80250FD4: b           L_80251160
    // 0x80250FD8: sb          $t2, 0xBD($v0)
    MEM_B(0XBD, ctx->r2) = ctx->r10;
        goto L_80251160;
    // 0x80250FD8: sb          $t2, 0xBD($v0)
    MEM_B(0XBD, ctx->r2) = ctx->r10;
L_80250FDC:
    // 0x80250FDC: beq         $t3, $zero, L_802510B8
    if (ctx->r11 == 0) {
        // 0x80250FE0: nop
    
            goto L_802510B8;
    }
    // 0x80250FE0: nop

    // 0x80250FE4: jal         0x80271F6C
    // 0x80250FE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80271F6C(rdram, ctx);
        goto after_3;
    // 0x80250FE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80250FEC: bne         $v0, $zero, L_802510B8
    if (ctx->r2 != 0) {
        // 0x80250FF0: lui         $t4, 0x8012
        ctx->r12 = S32(0X8012 << 16);
            goto L_802510B8;
    }
    // 0x80250FF0: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x80250FF4: lb          $t4, -0x309F($t4)
    ctx->r12 = MEM_B(ctx->r12, -0X309F);
    // 0x80250FF8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80250FFC: beq         $t4, $at, L_80251014
    if (ctx->r12 == ctx->r1) {
        // 0x80251000: nop
    
            goto L_80251014;
    }
    // 0x80251000: nop

    // 0x80251004: jal         0x80271980
    // 0x80251008: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    ovl_8024B800_func_80271980(rdram, ctx);
        goto after_4;
    // 0x80251008: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_4:
    // 0x8025100C: b           L_8025101C
    // 0x80251010: nop

        goto L_8025101C;
    // 0x80251010: nop

L_80251014:
    // 0x80251014: jal         0x80271980
    // 0x80251018: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    ovl_8024B800_func_80271980(rdram, ctx);
        goto after_5;
    // 0x80251018: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_5:
L_8025101C:
    // 0x8025101C: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80251020: lw          $t6, 0x3B20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B20);
    // 0x80251024: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x80251028: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8025102C: sb          $t5, 0xBC($t6)
    MEM_B(0XBC, ctx->r14) = ctx->r13;
    // 0x80251030: lwc1        $f12, -0x4008($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X4008);
    // 0x80251034: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80251038: lwc1        $f14, -0x4004($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X4004);
    // 0x8025103C: lui         $a2, 0x3E2A
    ctx->r6 = S32(0X3E2A << 16);
    // 0x80251040: lui         $a3, 0x3D61
    ctx->r7 = S32(0X3D61 << 16);
    // 0x80251044: addiu       $t7, $sp, 0x30
    ctx->r15 = ADD32(ctx->r29, 0X30);
    // 0x80251048: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8025104C: ori         $a3, $a3, 0x47AE
    ctx->r7 = ctx->r7 | 0X47AE;
    // 0x80251050: jal         0x8005743C
    // 0x80251054: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    func_8005743C(rdram, ctx);
        goto after_6;
    // 0x80251054: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    after_6:
    // 0x80251058: lw          $a1, 0x84($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X84);
    // 0x8025105C: lw          $a2, 0x88($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X88);
    // 0x80251060: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80251064: jal         0x800577FC
    // 0x80251068: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    func_800577FC(rdram, ctx);
        goto after_7;
    // 0x80251068: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    after_7:
    // 0x8025106C: lw          $t8, 0xC8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC8);
    // 0x80251070: nop

    // 0x80251074: lbu         $a0, 0x7($t8)
    ctx->r4 = MEM_BU(ctx->r24, 0X7);
    // 0x80251078: jal         0x80250B20
    // 0x8025107C: nop

    ovl_8024B800_func_80250B20(rdram, ctx);
        goto after_8;
    // 0x8025107C: nop

    after_8:
    // 0x80251080: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80251084: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x80251088: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8025108C: lbu         $t9, 0xBD($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0XBD);
    // 0x80251090: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80251094: ori         $t0, $t9, 0x4
    ctx->r8 = ctx->r25 | 0X4;
    // 0x80251098: jal         0x800653AC
    // 0x8025109C: sb          $t0, 0xBD($v0)
    MEM_B(0XBD, ctx->r2) = ctx->r8;
    func_800653AC(rdram, ctx);
        goto after_9;
    // 0x8025109C: sb          $t0, 0xBD($v0)
    MEM_B(0XBD, ctx->r2) = ctx->r8;
    after_9:
    // 0x802510A0: jal         0x80066F68
    // 0x802510A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80066F68(rdram, ctx);
        goto after_10;
    // 0x802510A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x802510A8: jal         0x80065160
    // 0x802510AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80065160(rdram, ctx);
        goto after_11;
    // 0x802510AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x802510B0: b           L_80251164
    // 0x802510B4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80251164;
    // 0x802510B4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802510B8:
    // 0x802510B8: lhu         $t1, 0x36($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X36);
    // 0x802510BC: nop

    // 0x802510C0: andi        $t2, $t1, 0x8
    ctx->r10 = ctx->r9 & 0X8;
    // 0x802510C4: beq         $t2, $zero, L_802510E0
    if (ctx->r10 == 0) {
        // 0x802510C8: nop
    
            goto L_802510E0;
    }
    // 0x802510C8: nop

    // 0x802510CC: lhu         $t3, 0x14($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X14);
    // 0x802510D0: addiu       $t5, $zero, 0xC
    ctx->r13 = ADD32(0, 0XC);
    // 0x802510D4: andi        $t4, $t3, 0xFFF7
    ctx->r12 = ctx->r11 & 0XFFF7;
    // 0x802510D8: sh          $t4, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r12;
    // 0x802510DC: sw          $t5, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r13;
L_802510E0:
    // 0x802510E0: jal         0x80271980
    // 0x802510E4: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    ovl_8024B800_func_80271980(rdram, ctx);
        goto after_12;
    // 0x802510E4: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_12:
    // 0x802510E8: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x802510EC: lw          $t7, 0x3B20($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3B20);
    // 0x802510F0: lui         $at, 0x4020
    ctx->r1 = S32(0X4020 << 16);
    // 0x802510F4: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x802510F8: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x802510FC: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80251100: sb          $t6, 0xBC($t7)
    MEM_B(0XBC, ctx->r15) = ctx->r14;
    // 0x80251104: lwc1        $f14, -0x4000($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X4000);
    // 0x80251108: lui         $a2, 0x3E2A
    ctx->r6 = S32(0X3E2A << 16);
    // 0x8025110C: lui         $a3, 0x3D61
    ctx->r7 = S32(0X3D61 << 16);
    // 0x80251110: addiu       $t8, $sp, 0x30
    ctx->r24 = ADD32(ctx->r29, 0X30);
    // 0x80251114: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80251118: ori         $a3, $a3, 0x47AE
    ctx->r7 = ctx->r7 | 0X47AE;
    // 0x8025111C: jal         0x8005743C
    // 0x80251120: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    func_8005743C(rdram, ctx);
        goto after_13;
    // 0x80251120: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    after_13:
    // 0x80251124: lw          $a1, 0x84($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X84);
    // 0x80251128: lw          $a2, 0x88($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X88);
    // 0x8025112C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80251130: jal         0x800575CC
    // 0x80251134: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    func_800575CC(rdram, ctx);
        goto after_14;
    // 0x80251134: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    after_14:
    // 0x80251138: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8025113C: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x80251140: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80251144: lbu         $t9, 0xBD($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0XBD);
    // 0x80251148: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8025114C: ori         $t0, $t9, 0x2
    ctx->r8 = ctx->r25 | 0X2;
    // 0x80251150: jal         0x800653AC
    // 0x80251154: sb          $t0, 0xBD($v0)
    MEM_B(0XBD, ctx->r2) = ctx->r8;
    func_800653AC(rdram, ctx);
        goto after_15;
    // 0x80251154: sb          $t0, 0xBD($v0)
    MEM_B(0XBD, ctx->r2) = ctx->r8;
    after_15:
    // 0x80251158: jal         0x80066F68
    // 0x8025115C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80066F68(rdram, ctx);
        goto after_16;
    // 0x8025115C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
L_80251160:
    // 0x80251160: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80251164:
    // 0x80251164: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80251168: jr          $ra
    // 0x8025116C: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    // 0x8025116C: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void ovl_8024B800_func_80251170(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80251170: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80251174: lw          $t6, 0x3B20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B20);
    // 0x80251178: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8025117C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80251180: lwc1        $f14, 0x20($t6)
    ctx->f14.u32l = MEM_W(ctx->r14, 0X20);
    // 0x80251184: jal         0x8027924C
    // 0x80251188: nop

    ovl_8024B800_func_8027924C(rdram, ctx);
        goto after_0;
    // 0x80251188: nop

    after_0:
    // 0x8025118C: jal         0x80081040
    // 0x80251190: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    func_80081040(rdram, ctx);
        goto after_1;
    // 0x80251190: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_1:
    // 0x80251194: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80251198: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8025119C: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x802511A0: sub.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x802511A4: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x802511A8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802511AC: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x802511B0: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x802511B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802511B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802511BC: jr          $ra
    // 0x802511C0: cvt.s.d     $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f0.fl = CVT_S_D(ctx->f16.d);
    return;
    // 0x802511C0: cvt.s.d     $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f0.fl = CVT_S_D(ctx->f16.d);
;}
RECOMP_FUNC void ovl_8024B800_func_802511C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802511C4: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x802511C8: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x802511CC: lw          $t6, 0x3B20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B20);
    // 0x802511D0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802511D4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802511D8: sw          $a1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r5;
    // 0x802511DC: lw          $t7, 0x8C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X8C);
    // 0x802511E0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802511E4: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    // 0x802511E8: lw          $t8, 0xD8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XD8);
    // 0x802511EC: nop

    // 0x802511F0: lbu         $a1, 0x6($t8)
    ctx->r5 = MEM_BU(ctx->r24, 0X6);
    // 0x802511F4: jal         0x802752E8
    // 0x802511F8: nop

    ovl_8024B800_func_802752E8(rdram, ctx);
        goto after_0;
    // 0x802511F8: nop

    after_0:
    // 0x802511FC: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x80251200: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80251204: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x80251208: lwc1        $f9, -0x3FF8($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X3FF8);
    // 0x8025120C: lwc1        $f8, -0x3FF4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X3FF4);
    // 0x80251210: lui         $at, 0x4014
    ctx->r1 = S32(0X4014 << 16);
    // 0x80251214: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x80251218: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x8025121C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80251220: lwc1        $f12, 0x8C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x80251224: add.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d + ctx->f16.d;
    // 0x80251228: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x8025122C: jal         0x80251170
    // 0x80251230: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
    ovl_8024B800_func_80251170(rdram, ctx);
        goto after_1;
    // 0x80251230: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x80251234: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80251238: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8025123C: lwc1        $f14, -0x3FF0($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X3FF0);
    // 0x80251240: lui         $a2, 0x3C08
    ctx->r6 = S32(0X3C08 << 16);
    // 0x80251244: lui         $a3, 0x3E2A
    ctx->r7 = S32(0X3E2A << 16);
    // 0x80251248: addiu       $t9, $sp, 0x38
    ctx->r25 = ADD32(ctx->r29, 0X38);
    // 0x8025124C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80251250: ori         $a3, $a3, 0xAAAB
    ctx->r7 = ctx->r7 | 0XAAAB;
    // 0x80251254: ori         $a2, $a2, 0x8889
    ctx->r6 = ctx->r6 | 0X8889;
    // 0x80251258: jal         0x8005743C
    // 0x8025125C: add.s       $f12, $f0, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f6.fl;
    func_8005743C(rdram, ctx);
        goto after_2;
    // 0x8025125C: add.s       $f12, $f0, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f6.fl;
    after_2:
    // 0x80251260: lui         $t0, 0x800B
    ctx->r8 = S32(0X800B << 16);
    // 0x80251264: addiu       $t0, $t0, -0x5324
    ctx->r8 = ADD32(ctx->r8, -0X5324);
    // 0x80251268: lw          $a1, 0x8C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X8C);
    // 0x8025126C: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x80251270: addiu       $a3, $a3, -0x52F0
    ctx->r7 = ADD32(ctx->r7, -0X52F0);
    // 0x80251274: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80251278: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8025127C: jal         0x80250D28
    // 0x80251280: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    ovl_8024B800_func_80250D28(rdram, ctx);
        goto after_3;
    // 0x80251280: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    after_3:
    // 0x80251284: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80251288: jal         0x800653AC
    // 0x8025128C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800653AC(rdram, ctx);
        goto after_4;
    // 0x8025128C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x80251290: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80251294: jal         0x80066D08
    // 0x80251298: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80066D08(rdram, ctx);
        goto after_5;
    // 0x80251298: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x8025129C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802512A0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802512A4: jr          $ra
    // 0x802512A8: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    return;
    // 0x802512A8: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void ovl_8024B800_func_802512AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802512AC: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x802512B0: sw          $a1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r5;
    // 0x802512B4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802512B8: lwc1        $f12, 0x7C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x802512BC: jal         0x80251170
    // 0x802512C0: sw          $a0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r4;
    ovl_8024B800_func_80251170(rdram, ctx);
        goto after_0;
    // 0x802512C0: sw          $a0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r4;
    after_0:
    // 0x802512C4: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802512C8: lwc1        $f7, -0x3FE8($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X3FE8);
    // 0x802512CC: lwc1        $f6, -0x3FE4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X3FE4);
    // 0x802512D0: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802512D4: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x802512D8: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x802512DC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x802512E0: lui         $a3, 0xBE2A
    ctx->r7 = S32(0XBE2A << 16);
    // 0x802512E4: addiu       $t6, $sp, 0x28
    ctx->r14 = ADD32(ctx->r29, 0X28);
    // 0x802512E8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x802512EC: ori         $a3, $a3, 0xAAAB
    ctx->r7 = ctx->r7 | 0XAAAB;
    // 0x802512F0: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    // 0x802512F4: jal         0x8005743C
    // 0x802512F8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    func_8005743C(rdram, ctx);
        goto after_1;
    // 0x802512F8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_1:
    // 0x802512FC: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x80251300: addiu       $t7, $t7, -0x5358
    ctx->r15 = ADD32(ctx->r15, -0X5358);
    // 0x80251304: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    // 0x80251308: lw          $a1, 0x7C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X7C);
    // 0x8025130C: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x80251310: addiu       $a3, $a3, -0x538C
    ctx->r7 = ADD32(ctx->r7, -0X538C);
    // 0x80251314: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80251318: jal         0x80250D28
    // 0x8025131C: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_8024B800_func_80250D28(rdram, ctx);
        goto after_2;
    // 0x8025131C: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_2:
    // 0x80251320: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    // 0x80251324: jal         0x800653AC
    // 0x80251328: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800653AC(rdram, ctx);
        goto after_3;
    // 0x80251328: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_3:
    // 0x8025132C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80251330: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    // 0x80251334: jr          $ra
    // 0x80251338: nop

    return;
    // 0x80251338: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8025133C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8025133C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80251340: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x80251344: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x80251348: lw          $t7, 0x8C($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X8C);
    // 0x8025134C: lui         $at, 0x4018
    ctx->r1 = S32(0X4018 << 16);
    // 0x80251350: lw          $t8, 0xC8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0XC8);
    // 0x80251354: nop

    // 0x80251358: beq         $t6, $t8, L_80251380
    if (ctx->r14 == ctx->r24) {
        // 0x8025135C: nop
    
            goto L_80251380;
    }
    // 0x8025135C: nop

    // 0x80251360: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x80251364: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80251368: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8025136C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80251370: c.lt.d      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.d < ctx->f8.d;
    // 0x80251374: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80251378: bc1f        L_80251388
    if (!c1cs) {
        // 0x8025137C: nop
    
            goto L_80251388;
    }
    // 0x8025137C: nop

L_80251380:
    // 0x80251380: jr          $ra
    // 0x80251384: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80251384: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80251388:
    // 0x80251388: jr          $ra
    // 0x8025138C: nop

    return;
    // 0x8025138C: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80251390(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80251390: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80251394: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80251398: lhu         $t6, 0x36($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X36);
    // 0x8025139C: nop

    // 0x802513A0: andi        $t7, $t6, 0x8
    ctx->r15 = ctx->r14 & 0X8;
    // 0x802513A4: beq         $t7, $zero, L_80251408
    if (ctx->r15 == 0) {
        // 0x802513A8: nop
    
            goto L_80251408;
    }
    // 0x802513A8: nop

    // 0x802513AC: jal         0x80271F6C
    // 0x802513B0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_8024B800_func_80271F6C(rdram, ctx);
        goto after_0;
    // 0x802513B0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x802513B4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802513B8: bne         $v0, $zero, L_80251408
    if (ctx->r2 != 0) {
        // 0x802513BC: lui         $t8, 0x8012
        ctx->r24 = S32(0X8012 << 16);
            goto L_80251408;
    }
    // 0x802513BC: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x802513C0: lbu         $t8, -0x32A4($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X32A4);
    // 0x802513C4: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x802513C8: beq         $t8, $at, L_80251408
    if (ctx->r24 == ctx->r1) {
        // 0x802513CC: nop
    
            goto L_80251408;
    }
    // 0x802513CC: nop

    // 0x802513D0: lw          $t9, 0xC8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XC8);
    // 0x802513D4: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x802513D8: lw          $t0, 0x24($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X24);
    // 0x802513DC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802513E0: lwc1        $f4, 0x8BC($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X8BC);
    // 0x802513E4: nop

    // 0x802513E8: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x802513EC: nop

    // 0x802513F0: bc1f        L_80251408
    if (!c1cs) {
        // 0x802513F4: nop
    
            goto L_80251408;
    }
    // 0x802513F4: nop

    // 0x802513F8: jal         0x80271980
    // 0x802513FC: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    ovl_8024B800_func_80271980(rdram, ctx);
        goto after_1;
    // 0x802513FC: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_1:
    // 0x80251400: b           L_80251414
    // 0x80251404: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80251414;
    // 0x80251404: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80251408:
    // 0x80251408: jal         0x80271980
    // 0x8025140C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    ovl_8024B800_func_80271980(rdram, ctx);
        goto after_2;
    // 0x8025140C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_2:
    // 0x80251410: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80251414:
    // 0x80251414: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80251418: jr          $ra
    // 0x8025141C: nop

    return;
    // 0x8025141C: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80251420(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80251420: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80251424: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80251428: lhu         $t6, 0x36($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X36);
    // 0x8025142C: nop

    // 0x80251430: andi        $t7, $t6, 0x8
    ctx->r15 = ctx->r14 & 0X8;
    // 0x80251434: beq         $t7, $zero, L_80251498
    if (ctx->r15 == 0) {
        // 0x80251438: nop
    
            goto L_80251498;
    }
    // 0x80251438: nop

    // 0x8025143C: jal         0x80271F6C
    // 0x80251440: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_8024B800_func_80271F6C(rdram, ctx);
        goto after_0;
    // 0x80251440: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80251444: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80251448: bne         $v0, $zero, L_80251498
    if (ctx->r2 != 0) {
        // 0x8025144C: lui         $t8, 0x8012
        ctx->r24 = S32(0X8012 << 16);
            goto L_80251498;
    }
    // 0x8025144C: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80251450: lbu         $t8, -0x32A4($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X32A4);
    // 0x80251454: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x80251458: beq         $t8, $at, L_80251498
    if (ctx->r24 == ctx->r1) {
        // 0x8025145C: nop
    
            goto L_80251498;
    }
    // 0x8025145C: nop

    // 0x80251460: lw          $t9, 0xC8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XC8);
    // 0x80251464: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x80251468: lw          $t0, 0x24($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X24);
    // 0x8025146C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80251470: lwc1        $f4, 0x8BC($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X8BC);
    // 0x80251474: nop

    // 0x80251478: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x8025147C: nop

    // 0x80251480: bc1f        L_80251498
    if (!c1cs) {
        // 0x80251484: nop
    
            goto L_80251498;
    }
    // 0x80251484: nop

    // 0x80251488: jal         0x80271980
    // 0x8025148C: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    ovl_8024B800_func_80271980(rdram, ctx);
        goto after_1;
    // 0x8025148C: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_1:
    // 0x80251490: b           L_802514C0
    // 0x80251494: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802514C0;
    // 0x80251494: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80251498:
    // 0x80251498: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x8025149C: lb          $t1, -0x309F($t1)
    ctx->r9 = MEM_B(ctx->r9, -0X309F);
    // 0x802514A0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802514A4: bne         $t1, $at, L_802514B4
    if (ctx->r9 != ctx->r1) {
        // 0x802514A8: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_802514B4;
    }
    // 0x802514A8: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x802514AC: b           L_802514B4
    // 0x802514B0: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
        goto L_802514B4;
    // 0x802514B0: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_802514B4:
    // 0x802514B4: jal         0x80271980
    // 0x802514B8: andi        $a0, $v0, 0xFFFF
    ctx->r4 = ctx->r2 & 0XFFFF;
    ovl_8024B800_func_80271980(rdram, ctx);
        goto after_2;
    // 0x802514B8: andi        $a0, $v0, 0xFFFF
    ctx->r4 = ctx->r2 & 0XFFFF;
    after_2:
    // 0x802514BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802514C0:
    // 0x802514C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802514C4: jr          $ra
    // 0x802514C8: nop

    return;
    // 0x802514C8: nop

;}
RECOMP_FUNC void ovl_8024B800_func_802514CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802514CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802514D0: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x802514D4: lw          $t6, 0x3B20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B20);
    // 0x802514D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802514DC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802514E0: lwc1        $f12, 0x8($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X8);
    // 0x802514E4: jal         0x80272AEC
    // 0x802514E8: nop

    ovl_8024B800_func_80272AEC(rdram, ctx);
        goto after_0;
    // 0x802514E8: nop

    after_0:
    // 0x802514EC: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x802514F0: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x802514F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802514F8: lhu         $t7, 0x6A($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X6A);
    // 0x802514FC: nop

    // 0x80251500: slti        $at, $t7, 0x5
    ctx->r1 = SIGNED(ctx->r15) < 0X5 ? 1 : 0;
    // 0x80251504: bne         $at, $zero, L_80251524
    if (ctx->r1 != 0) {
        // 0x80251508: lui         $at, 0x8028
        ctx->r1 = S32(0X8028 << 16);
            goto L_80251524;
    }
    // 0x80251508: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8025150C: lwc1        $f4, -0x3FE0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X3FE0);
    // 0x80251510: lui         $at, 0x41D0
    ctx->r1 = S32(0X41D0 << 16);
    // 0x80251514: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x80251518: nop

    // 0x8025151C: bc1f        L_8025152C
    if (!c1cs) {
        // 0x80251520: nop
    
            goto L_8025152C;
    }
    // 0x80251520: nop

L_80251524:
    // 0x80251524: b           L_80251578
    // 0x80251528: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80251578;
    // 0x80251528: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8025152C:
    // 0x8025152C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80251530: lwc1        $f8, 0x4($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80251534: lui         $at, 0x43FD
    ctx->r1 = S32(0X43FD << 16);
    // 0x80251538: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x8025153C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80251540: bc1f        L_80251578
    if (!c1cs) {
        // 0x80251544: nop
    
            goto L_80251578;
    }
    // 0x80251544: nop

    // 0x80251548: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8025154C: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x80251550: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x80251554: nop

    // 0x80251558: bc1f        L_80251578
    if (!c1cs) {
        // 0x8025155C: nop
    
            goto L_80251578;
    }
    // 0x8025155C: nop

    // 0x80251560: lhu         $t9, 0x1A($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X1A);
    // 0x80251564: nop

    // 0x80251568: beq         $t9, $zero, L_80251578
    if (ctx->r25 == 0) {
        // 0x8025156C: nop
    
            goto L_80251578;
    }
    // 0x8025156C: nop

    // 0x80251570: b           L_80251578
    // 0x80251574: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80251578;
    // 0x80251574: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80251578:
    // 0x80251578: jr          $ra
    // 0x8025157C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8025157C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void ovl_8024B800_func_80251580(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80251580: lui         $a3, 0x8009
    ctx->r7 = S32(0X8009 << 16);
    // 0x80251584: addiu       $a3, $a3, 0x3B20
    ctx->r7 = ADD32(ctx->r7, 0X3B20);
    // 0x80251588: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8025158C: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x80251590: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80251594: addiu       $v1, $v1, 0x361E
    ctx->r3 = ADD32(ctx->r3, 0X361E);
    // 0x80251598: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8025159C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802515A0: lhu         $t7, 0x0($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X0);
    // 0x802515A4: lw          $t6, 0x8C($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X8C);
    // 0x802515A8: lw          $s0, 0x0($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X0);
    // 0x802515AC: andi        $t8, $t7, 0xFBFF
    ctx->r24 = ctx->r15 & 0XFBFF;
    // 0x802515B0: sh          $t8, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r24;
    // 0x802515B4: sw          $t6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r14;
    // 0x802515B8: lhu         $t0, 0x20($t6)
    ctx->r8 = MEM_HU(ctx->r14, 0X20);
    // 0x802515BC: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x802515C0: addiu       $a2, $a2, 0x3688
    ctx->r6 = ADD32(ctx->r6, 0X3688);
    // 0x802515C4: sb          $zero, 0x0($a2)
    MEM_B(0X0, ctx->r6) = 0;
    // 0x802515C8: sh          $t0, 0x40($sp)
    MEM_H(0X40, ctx->r29) = ctx->r8;
    // 0x802515CC: lhu         $t1, 0x16($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X16);
    // 0x802515D0: nop

    // 0x802515D4: andi        $t2, $t1, 0x2000
    ctx->r10 = ctx->r9 & 0X2000;
    // 0x802515D8: bne         $t2, $zero, L_80252380
    if (ctx->r10 != 0) {
        // 0x802515DC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80252380;
    }
    // 0x802515DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802515E0: lhu         $t3, 0xC0($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0XC0);
    // 0x802515E4: nop

    // 0x802515E8: andi        $t4, $t3, 0x8
    ctx->r12 = ctx->r11 & 0X8;
    // 0x802515EC: bne         $t4, $zero, L_80252380
    if (ctx->r12 != 0) {
        // 0x802515F0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80252380;
    }
    // 0x802515F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802515F4: lhu         $t5, 0x12($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X12);
    // 0x802515F8: lwc1        $f0, 0xBC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XBC);
    // 0x802515FC: ori         $t6, $t5, 0x8000
    ctx->r14 = ctx->r13 | 0X8000;
    // 0x80251600: sh          $t6, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r14;
    // 0x80251604: lw          $t7, 0x4($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X4);
    // 0x80251608: nop

    // 0x8025160C: lbu         $t8, 0x5($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X5);
    // 0x80251610: nop

    // 0x80251614: andi        $t9, $t8, 0x1F
    ctx->r25 = ctx->r24 & 0X1F;
    // 0x80251618: sltiu       $at, $t9, 0x1F
    ctx->r1 = ctx->r25 < 0X1F ? 1 : 0;
    // 0x8025161C: beq         $at, $zero, L_80252338
    if (ctx->r1 == 0) {
        // 0x80251620: or          $v1, $t9, $zero
        ctx->r3 = ctx->r25 | 0;
            goto L_80252338;
    }
    // 0x80251620: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
    // 0x80251624: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80251628: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8025162C: addu        $at, $at, $t0
    gpr jr_addend_80251638 = ctx->r8;
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80251630: lw          $t0, -0x3FDC($at)
    ctx->r8 = ADD32(ctx->r1, -0X3FDC);
    // 0x80251634: nop

    // 0x80251638: jr          $t0
    // 0x8025163C: nop

    switch (jr_addend_80251638 >> 2) {
        case 0: goto L_80252054; break;
        case 1: goto L_80251F80; break;
        case 2: goto L_80252338; break;
        case 3: goto L_80251E84; break;
        case 4: goto L_80252338; break;
        case 5: goto L_80251E1C; break;
        case 6: goto L_80251CB8; break;
        case 7: goto L_80252054; break;
        case 8: goto L_80251F34; break;
        case 9: goto L_80252338; break;
        case 10: goto L_80252338; break;
        case 11: goto L_80251C1C; break;
        case 12: goto L_802518A8; break;
        case 13: goto L_80251848; break;
        case 14: goto L_802517E8; break;
        case 15: goto L_80251728; break;
        case 16: goto L_802516B0; break;
        case 17: goto L_80251730; break;
        case 18: goto L_80251A98; break;
        case 19: goto L_80251904; break;
        case 20: goto L_80251A20; break;
        case 21: goto L_802516F4; break;
        case 22: goto L_80251CFC; break;
        case 23: goto L_80251D3C; break;
        case 24: goto L_80251D80; break;
        case 25: goto L_80251ECC; break;
        case 26: goto L_80251CA0; break;
        case 27: goto L_80251640; break;
        case 28: goto L_80251C1C; break;
        case 29: goto L_8025179C; break;
        case 30: goto L_80251DE8; break;
        default: switch_error(__func__, 0x80251638, 0x8027C024);
    }
    // 0x8025163C: nop

L_80251640:
    // 0x80251640: jal         0x80250C9C
    // 0x80251644: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80250C9C(rdram, ctx);
        goto after_0;
    // 0x80251644: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x80251648: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8025164C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80251650: lwc1        $f4, 0x50($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X50);
    // 0x80251654: lw          $a2, 0x8C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8C);
    // 0x80251658: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8025165C: lui         $a3, 0xBE32
    ctx->r7 = S32(0XBE32 << 16);
    // 0x80251660: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x80251664: ori         $a3, $a3, 0xB8C2
    ctx->r7 = ctx->r7 | 0XB8C2;
    // 0x80251668: jal         0x80055DB4
    // 0x8025166C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80055DB4(rdram, ctx);
        goto after_1;
    // 0x8025166C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80251670: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80251674: jal         0x802A613C
    // 0x80251678: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A613C)(rdram, ctx);
        goto after_2;
    // 0x80251678: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x8025167C: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x80251680: lb          $t1, -0x309F($t1)
    ctx->r9 = MEM_B(ctx->r9, -0X309F);
    // 0x80251684: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80251688: bne         $t1, $at, L_802516A0
    if (ctx->r9 != ctx->r1) {
        // 0x8025168C: nop
    
            goto L_802516A0;
    }
    // 0x8025168C: nop

    // 0x80251690: jal         0x802719DC
    // 0x80251694: addiu       $a0, $zero, 0x308
    ctx->r4 = ADD32(0, 0X308);
    ovl_8024B800_func_802719DC(rdram, ctx);
        goto after_3;
    // 0x80251694: addiu       $a0, $zero, 0x308
    ctx->r4 = ADD32(0, 0X308);
    after_3:
    // 0x80251698: b           L_80252338
    // 0x8025169C: nop

        goto L_80252338;
    // 0x8025169C: nop

L_802516A0:
    // 0x802516A0: jal         0x80271980
    // 0x802516A4: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    ovl_8024B800_func_80271980(rdram, ctx);
        goto after_4;
    // 0x802516A4: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_4:
    // 0x802516A8: b           L_80252338
    // 0x802516AC: nop

        goto L_80252338;
    // 0x802516AC: nop

L_802516B0:
    // 0x802516B0: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x802516B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802516B8: lhu         $t2, 0x930($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X930);
    // 0x802516BC: nop

    // 0x802516C0: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x802516C4: jal         0x80077B08
    // 0x802516C8: sh          $t3, 0x930($v0)
    MEM_H(0X930, ctx->r2) = ctx->r11;
    func_80077B08(rdram, ctx);
        goto after_5;
    // 0x802516C8: sh          $t3, 0x930($v0)
    MEM_H(0X930, ctx->r2) = ctx->r11;
    after_5:
    // 0x802516CC: jal         0x80058624
    // 0x802516D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80058624(rdram, ctx);
        goto after_6;
    // 0x802516D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x802516D4: lui         $t5, 0x8009
    ctx->r13 = S32(0X8009 << 16);
    // 0x802516D8: lw          $t5, 0x3B20($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X3B20);
    // 0x802516DC: addiu       $t4, $zero, 0x10
    ctx->r12 = ADD32(0, 0X10);
    // 0x802516E0: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x802516E4: jal         0x80271980
    // 0x802516E8: sb          $t4, 0xBC($t5)
    MEM_B(0XBC, ctx->r13) = ctx->r12;
    ovl_8024B800_func_80271980(rdram, ctx);
        goto after_7;
    // 0x802516E8: sb          $t4, 0xBC($t5)
    MEM_B(0XBC, ctx->r13) = ctx->r12;
    after_7:
    // 0x802516EC: b           L_80252338
    // 0x802516F0: nop

        goto L_80252338;
    // 0x802516F0: nop

L_802516F4:
    // 0x802516F4: jal         0x80058598
    // 0x802516F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80058598(rdram, ctx);
        goto after_8;
    // 0x802516F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x802516FC: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x80251700: lw          $t7, 0x3B20($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3B20);
    // 0x80251704: addiu       $t6, $zero, 0x11
    ctx->r14 = ADD32(0, 0X11);
    // 0x80251708: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8025170C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80251710: jal         0x800653AC
    // 0x80251714: sb          $t6, 0xBC($t7)
    MEM_B(0XBC, ctx->r15) = ctx->r14;
    func_800653AC(rdram, ctx);
        goto after_9;
    // 0x80251714: sb          $t6, 0xBC($t7)
    MEM_B(0XBC, ctx->r15) = ctx->r14;
    after_9:
    // 0x80251718: jal         0x80271980
    // 0x8025171C: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    ovl_8024B800_func_80271980(rdram, ctx);
        goto after_10;
    // 0x8025171C: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    after_10:
    // 0x80251720: b           L_80252338
    // 0x80251724: nop

        goto L_80252338;
    // 0x80251724: nop

L_80251728:
    // 0x80251728: jal         0x80250C9C
    // 0x8025172C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80250C9C(rdram, ctx);
        goto after_11;
    // 0x8025172C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
L_80251730:
    // 0x80251730: lui         $t8, 0x8028
    ctx->r24 = S32(0X8028 << 16);
    // 0x80251734: lh          $t8, -0x1B60($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X1B60);
    // 0x80251738: nop

    // 0x8025173C: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x80251740: beq         $t9, $zero, L_80251758
    if (ctx->r25 == 0) {
        // 0x80251744: nop
    
            goto L_80251758;
    }
    // 0x80251744: nop

    // 0x80251748: jal         0x800775B4
    // 0x8025174C: nop

    func_800775B4(rdram, ctx);
        goto after_12;
    // 0x8025174C: nop

    after_12:
    // 0x80251750: b           L_80251764
    // 0x80251754: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
        goto L_80251764;
    // 0x80251754: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
L_80251758:
    // 0x80251758: jal         0x80077750
    // 0x8025175C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80077750(rdram, ctx);
        goto after_13;
    // 0x8025175C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x80251760: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
L_80251764:
    // 0x80251764: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80251768: lhu         $t0, 0x930($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X930);
    // 0x8025176C: nop

    // 0x80251770: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x80251774: jal         0x80058598
    // 0x80251778: sh          $t1, 0x930($v0)
    MEM_H(0X930, ctx->r2) = ctx->r9;
    func_80058598(rdram, ctx);
        goto after_14;
    // 0x80251778: sh          $t1, 0x930($v0)
    MEM_H(0X930, ctx->r2) = ctx->r9;
    after_14:
    // 0x8025177C: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x80251780: lw          $t3, 0x3B20($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X3B20);
    // 0x80251784: addiu       $t2, $zero, 0x10
    ctx->r10 = ADD32(0, 0X10);
    // 0x80251788: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x8025178C: jal         0x80271980
    // 0x80251790: sb          $t2, 0xBC($t3)
    MEM_B(0XBC, ctx->r11) = ctx->r10;
    ovl_8024B800_func_80271980(rdram, ctx);
        goto after_15;
    // 0x80251790: sb          $t2, 0xBC($t3)
    MEM_B(0XBC, ctx->r11) = ctx->r10;
    after_15:
    // 0x80251794: b           L_80252338
    // 0x80251798: nop

        goto L_80252338;
    // 0x80251798: nop

L_8025179C:
    // 0x8025179C: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x802517A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802517A4: lhu         $t4, 0x930($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X930);
    // 0x802517A8: nop

    // 0x802517AC: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x802517B0: jal         0x8007758C
    // 0x802517B4: sh          $t5, 0x930($v0)
    MEM_H(0X930, ctx->r2) = ctx->r13;
    func_8007758C(rdram, ctx);
        goto after_16;
    // 0x802517B4: sh          $t5, 0x930($v0)
    MEM_H(0X930, ctx->r2) = ctx->r13;
    after_16:
    // 0x802517B8: jal         0x80250C9C
    // 0x802517BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80250C9C(rdram, ctx);
        goto after_17;
    // 0x802517BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x802517C0: jal         0x80058784
    // 0x802517C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80058784(rdram, ctx);
        goto after_18;
    // 0x802517C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
    // 0x802517C8: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x802517CC: lw          $t7, 0x3B20($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3B20);
    // 0x802517D0: addiu       $t6, $zero, 0x10
    ctx->r14 = ADD32(0, 0X10);
    // 0x802517D4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x802517D8: jal         0x80271980
    // 0x802517DC: sb          $t6, 0xBC($t7)
    MEM_B(0XBC, ctx->r15) = ctx->r14;
    ovl_8024B800_func_80271980(rdram, ctx);
        goto after_19;
    // 0x802517DC: sb          $t6, 0xBC($t7)
    MEM_B(0XBC, ctx->r15) = ctx->r14;
    after_19:
    // 0x802517E0: b           L_80252338
    // 0x802517E4: nop

        goto L_80252338;
    // 0x802517E4: nop

L_802517E8:
    // 0x802517E8: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x802517EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802517F0: lhu         $t8, 0x930($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X930);
    // 0x802517F4: nop

    // 0x802517F8: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x802517FC: jal         0x8007758C
    // 0x80251800: sh          $t9, 0x930($v0)
    MEM_H(0X930, ctx->r2) = ctx->r25;
    func_8007758C(rdram, ctx);
        goto after_20;
    // 0x80251800: sh          $t9, 0x930($v0)
    MEM_H(0X930, ctx->r2) = ctx->r25;
    after_20:
    // 0x80251804: jal         0x800659EC
    // 0x80251808: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800659EC(rdram, ctx);
        goto after_21;
    // 0x80251808: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_21:
    // 0x8025180C: jal         0x80250C9C
    // 0x80251810: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80250C9C(rdram, ctx);
        goto after_22;
    // 0x80251810: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_22:
    // 0x80251814: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80251818: jal         0x800581B0
    // 0x8025181C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800581B0(rdram, ctx);
        goto after_23;
    // 0x8025181C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_23:
    // 0x80251820: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x80251824: lw          $t1, 0x3B20($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X3B20);
    // 0x80251828: addiu       $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
    // 0x8025182C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80251830: jal         0x800652F8
    // 0x80251834: sb          $t0, 0xBC($t1)
    MEM_B(0XBC, ctx->r9) = ctx->r8;
    func_800652F8(rdram, ctx);
        goto after_24;
    // 0x80251834: sb          $t0, 0xBC($t1)
    MEM_B(0XBC, ctx->r9) = ctx->r8;
    after_24:
    // 0x80251838: jal         0x80271980
    // 0x8025183C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    ovl_8024B800_func_80271980(rdram, ctx);
        goto after_25;
    // 0x8025183C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_25:
    // 0x80251840: b           L_80252338
    // 0x80251844: nop

        goto L_80252338;
    // 0x80251844: nop

L_80251848:
    // 0x80251848: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x8025184C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80251850: lhu         $t2, 0x930($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X930);
    // 0x80251854: nop

    // 0x80251858: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x8025185C: jal         0x8007758C
    // 0x80251860: sh          $t3, 0x930($v0)
    MEM_H(0X930, ctx->r2) = ctx->r11;
    func_8007758C(rdram, ctx);
        goto after_26;
    // 0x80251860: sh          $t3, 0x930($v0)
    MEM_H(0X930, ctx->r2) = ctx->r11;
    after_26:
    // 0x80251864: jal         0x800659EC
    // 0x80251868: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800659EC(rdram, ctx);
        goto after_27;
    // 0x80251868: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_27:
    // 0x8025186C: jal         0x80250C9C
    // 0x80251870: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80250C9C(rdram, ctx);
        goto after_28;
    // 0x80251870: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_28:
    // 0x80251874: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80251878: jal         0x800581B0
    // 0x8025187C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800581B0(rdram, ctx);
        goto after_29;
    // 0x8025187C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_29:
    // 0x80251880: lui         $t5, 0x8009
    ctx->r13 = S32(0X8009 << 16);
    // 0x80251884: lw          $t5, 0x3B20($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X3B20);
    // 0x80251888: addiu       $t4, $zero, 0x10
    ctx->r12 = ADD32(0, 0X10);
    // 0x8025188C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80251890: jal         0x800652F8
    // 0x80251894: sb          $t4, 0xBC($t5)
    MEM_B(0XBC, ctx->r13) = ctx->r12;
    func_800652F8(rdram, ctx);
        goto after_30;
    // 0x80251894: sb          $t4, 0xBC($t5)
    MEM_B(0XBC, ctx->r13) = ctx->r12;
    after_30:
    // 0x80251898: jal         0x802719DC
    // 0x8025189C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    ovl_8024B800_func_802719DC(rdram, ctx);
        goto after_31;
    // 0x8025189C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_31:
    // 0x802518A0: b           L_80252338
    // 0x802518A4: nop

        goto L_80252338;
    // 0x802518A4: nop

L_802518A8:
    // 0x802518A8: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x802518AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802518B0: lhu         $t6, 0x930($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X930);
    // 0x802518B4: nop

    // 0x802518B8: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x802518BC: jal         0x8007758C
    // 0x802518C0: sh          $t7, 0x930($v0)
    MEM_H(0X930, ctx->r2) = ctx->r15;
    func_8007758C(rdram, ctx);
        goto after_32;
    // 0x802518C0: sh          $t7, 0x930($v0)
    MEM_H(0X930, ctx->r2) = ctx->r15;
    after_32:
    // 0x802518C4: jal         0x800659EC
    // 0x802518C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800659EC(rdram, ctx);
        goto after_33;
    // 0x802518C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_33:
    // 0x802518CC: jal         0x80250C9C
    // 0x802518D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80250C9C(rdram, ctx);
        goto after_34;
    // 0x802518D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_34:
    // 0x802518D4: jal         0x800586A8
    // 0x802518D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800586A8(rdram, ctx);
        goto after_35;
    // 0x802518D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_35:
    // 0x802518DC: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x802518E0: lw          $t9, 0x3B20($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X3B20);
    // 0x802518E4: addiu       $t8, $zero, 0x10
    ctx->r24 = ADD32(0, 0X10);
    // 0x802518E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802518EC: jal         0x800652F8
    // 0x802518F0: sb          $t8, 0xBC($t9)
    MEM_B(0XBC, ctx->r25) = ctx->r24;
    func_800652F8(rdram, ctx);
        goto after_36;
    // 0x802518F0: sb          $t8, 0xBC($t9)
    MEM_B(0XBC, ctx->r25) = ctx->r24;
    after_36:
    // 0x802518F4: jal         0x80271980
    // 0x802518F8: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    ovl_8024B800_func_80271980(rdram, ctx);
        goto after_37;
    // 0x802518F8: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_37:
    // 0x802518FC: b           L_80252338
    // 0x80251900: nop

        goto L_80252338;
    // 0x80251900: nop

L_80251904:
    // 0x80251904: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x80251908: nop

    // 0x8025190C: lhu         $t0, 0x930($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X930);
    // 0x80251910: nop

    // 0x80251914: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x80251918: jal         0x800775B4
    // 0x8025191C: sh          $t1, 0x930($v0)
    MEM_H(0X930, ctx->r2) = ctx->r9;
    func_800775B4(rdram, ctx);
        goto after_38;
    // 0x8025191C: sh          $t1, 0x930($v0)
    MEM_H(0X930, ctx->r2) = ctx->r9;
    after_38:
    // 0x80251920: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x80251924: lh          $v0, -0x1B60($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X1B60);
    // 0x80251928: nop

    // 0x8025192C: andi        $t2, $v0, 0x1
    ctx->r10 = ctx->r2 & 0X1;
    // 0x80251930: beq         $t2, $zero, L_80251948
    if (ctx->r10 == 0) {
        // 0x80251934: andi        $t3, $v0, 0x2
        ctx->r11 = ctx->r2 & 0X2;
            goto L_80251948;
    }
    // 0x80251934: andi        $t3, $v0, 0x2
    ctx->r11 = ctx->r2 & 0X2;
    // 0x80251938: jal         0x80077B08
    // 0x8025193C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80077B08(rdram, ctx);
        goto after_39;
    // 0x8025193C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_39:
    // 0x80251940: b           L_80251958
    // 0x80251944: nop

        goto L_80251958;
    // 0x80251944: nop

L_80251948:
    // 0x80251948: beq         $t3, $zero, L_80251958
    if (ctx->r11 == 0) {
        // 0x8025194C: nop
    
            goto L_80251958;
    }
    // 0x8025194C: nop

    // 0x80251950: jal         0x80077AE0
    // 0x80251954: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80077AE0(rdram, ctx);
        goto after_40;
    // 0x80251954: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_40:
L_80251958:
    // 0x80251958: jal         0x800652F8
    // 0x8025195C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800652F8(rdram, ctx);
        goto after_41;
    // 0x8025195C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_41:
    // 0x80251960: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80251964: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x80251968: lui         $at, 0x4020
    ctx->r1 = S32(0X4020 << 16);
    // 0x8025196C: lw          $t4, 0x88($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X88);
    // 0x80251970: nop

    // 0x80251974: bne         $t4, $zero, L_80251A08
    if (ctx->r12 != 0) {
        // 0x80251978: nop
    
            goto L_80251A08;
    }
    // 0x80251978: nop

    // 0x8025197C: lwc1        $f10, 0x10($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X10);
    // 0x80251980: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x80251984: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80251988: cvt.d.s     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f0.d = CVT_D_S(ctx->f10.fl);
    // 0x8025198C: c.lt.d      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.d < ctx->f0.d;
    // 0x80251990: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80251994: bc1t        L_802519F0
    if (c1cs) {
        // 0x80251998: nop
    
            goto L_802519F0;
    }
    // 0x80251998: nop

    // 0x8025199C: lhu         $t5, 0x6A($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X6A);
    // 0x802519A0: lwc1        $f19, -0x3F60($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, -0X3F60);
    // 0x802519A4: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x802519A8: lwc1        $f18, -0x3F5C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X3F5C);
    // 0x802519AC: bgez        $t5, L_802519C8
    if (SIGNED(ctx->r13) >= 0) {
        // 0x802519B0: cvt.d.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
            goto L_802519C8;
    }
    // 0x802519B0: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x802519B4: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x802519B8: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x802519BC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802519C0: nop

    // 0x802519C4: add.d       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = ctx->f6.d + ctx->f8.d;
L_802519C8:
    // 0x802519C8: mul.d       $f10, $f18, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = MUL_D(ctx->f18.d, ctx->f6.d);
    // 0x802519CC: lui         $at, 0x4010
    ctx->r1 = S32(0X4010 << 16);
    // 0x802519D0: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x802519D4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x802519D8: nop

    // 0x802519DC: add.d       $f4, $f16, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = ctx->f16.d + ctx->f10.d;
    // 0x802519E0: c.lt.d      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.d < ctx->f0.d;
    // 0x802519E4: nop

    // 0x802519E8: bc1f        L_80251A08
    if (!c1cs) {
        // 0x802519EC: nop
    
            goto L_80251A08;
    }
    // 0x802519EC: nop

L_802519F0:
    // 0x802519F0: jal         0x80058598
    // 0x802519F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80058598(rdram, ctx);
        goto after_42;
    // 0x802519F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_42:
    // 0x802519F8: jal         0x80271980
    // 0x802519FC: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    ovl_8024B800_func_80271980(rdram, ctx);
        goto after_43;
    // 0x802519FC: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_43:
    // 0x80251A00: b           L_80252338
    // 0x80251A04: nop

        goto L_80252338;
    // 0x80251A04: nop

L_80251A08:
    // 0x80251A08: jal         0x80250BCC
    // 0x80251A0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80250BCC(rdram, ctx);
        goto after_44;
    // 0x80251A0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_44:
    // 0x80251A10: jal         0x80271980
    // 0x80251A14: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_8024B800_func_80271980(rdram, ctx);
        goto after_45;
    // 0x80251A14: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_45:
    // 0x80251A18: b           L_80252338
    // 0x80251A1C: nop

        goto L_80252338;
    // 0x80251A1C: nop

L_80251A20:
    // 0x80251A20: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x80251A24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80251A28: lhu         $t6, 0x930($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X930);
    // 0x80251A2C: nop

    // 0x80251A30: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80251A34: jal         0x80077B30
    // 0x80251A38: sh          $t7, 0x930($v0)
    MEM_H(0X930, ctx->r2) = ctx->r15;
    func_80077B30(rdram, ctx);
        goto after_46;
    // 0x80251A38: sh          $t7, 0x930($v0)
    MEM_H(0X930, ctx->r2) = ctx->r15;
    after_46:
    // 0x80251A3C: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80251A40: lbu         $t8, -0x32A4($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X32A4);
    // 0x80251A44: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x80251A48: beq         $t8, $at, L_80251A80
    if (ctx->r24 == ctx->r1) {
        // 0x80251A4C: nop
    
            goto L_80251A80;
    }
    // 0x80251A4C: nop

    // 0x80251A50: jal         0x8025133C
    // 0x80251A54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8025133C(rdram, ctx);
        goto after_47;
    // 0x80251A54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_47:
    // 0x80251A58: beq         $v0, $zero, L_80251A70
    if (ctx->r2 == 0) {
        // 0x80251A5C: nop
    
            goto L_80251A70;
    }
    // 0x80251A5C: nop

    // 0x80251A60: jal         0x80271980
    // 0x80251A64: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_8024B800_func_80271980(rdram, ctx);
        goto after_48;
    // 0x80251A64: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_48:
    // 0x80251A68: b           L_80251A88
    // 0x80251A6C: nop

        goto L_80251A88;
    // 0x80251A6C: nop

L_80251A70:
    // 0x80251A70: jal         0x80271980
    // 0x80251A74: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_8024B800_func_80271980(rdram, ctx);
        goto after_49;
    // 0x80251A74: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_49:
    // 0x80251A78: b           L_80251A88
    // 0x80251A7C: nop

        goto L_80251A88;
    // 0x80251A7C: nop

L_80251A80:
    // 0x80251A80: jal         0x80271980
    // 0x80251A84: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_8024B800_func_80271980(rdram, ctx);
        goto after_50;
    // 0x80251A84: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_50:
L_80251A88:
    // 0x80251A88: jal         0x80250BCC
    // 0x80251A8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80250BCC(rdram, ctx);
        goto after_51;
    // 0x80251A8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_51:
    // 0x80251A90: b           L_80252338
    // 0x80251A94: nop

        goto L_80252338;
    // 0x80251A94: nop

L_80251A98:
    // 0x80251A98: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x80251A9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80251AA0: lhu         $t9, 0x930($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X930);
    // 0x80251AA4: nop

    // 0x80251AA8: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80251AAC: sh          $t0, 0x930($v0)
    MEM_H(0X930, ctx->r2) = ctx->r8;
    // 0x80251AB0: lw          $t1, 0x0($a3)
    ctx->r9 = MEM_W(ctx->r7, 0X0);
    // 0x80251AB4: nop

    // 0x80251AB8: lhu         $t2, 0xC0($t1)
    ctx->r10 = MEM_HU(ctx->r9, 0XC0);
    // 0x80251ABC: nop

    // 0x80251AC0: andi        $t3, $t2, 0x70
    ctx->r11 = ctx->r10 & 0X70;
    // 0x80251AC4: beq         $t3, $zero, L_80251AE4
    if (ctx->r11 == 0) {
        // 0x80251AC8: nop
    
            goto L_80251AE4;
    }
    // 0x80251AC8: nop

    // 0x80251ACC: jal         0x8005882C
    // 0x80251AD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8005882C(rdram, ctx);
        goto after_52;
    // 0x80251AD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_52:
    // 0x80251AD4: jal         0x80271980
    // 0x80251AD8: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    ovl_8024B800_func_80271980(rdram, ctx);
        goto after_53;
    // 0x80251AD8: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_53:
    // 0x80251ADC: b           L_80252338
    // 0x80251AE0: nop

        goto L_80252338;
    // 0x80251AE0: nop

L_80251AE4:
    // 0x80251AE4: jal         0x80067350
    // 0x80251AE8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80067350(rdram, ctx);
        goto after_54;
    // 0x80251AE8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_54:
    // 0x80251AEC: beq         $v0, $zero, L_80251BB0
    if (ctx->r2 == 0) {
        // 0x80251AF0: lui         $t8, 0x8028
        ctx->r24 = S32(0X8028 << 16);
            goto L_80251BB0;
    }
    // 0x80251AF0: lui         $t8, 0x8028
    ctx->r24 = S32(0X8028 << 16);
    // 0x80251AF4: lui         $t4, 0x8009
    ctx->r12 = S32(0X8009 << 16);
    // 0x80251AF8: lw          $t4, 0x3B20($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X3B20);
    // 0x80251AFC: lui         $at, 0x4018
    ctx->r1 = S32(0X4018 << 16);
    // 0x80251B00: lwc1        $f8, 0x10($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X10);
    // 0x80251B04: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x80251B08: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80251B0C: cvt.d.s     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f18.d = CVT_D_S(ctx->f8.fl);
    // 0x80251B10: c.lt.d      $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f18.d < ctx->f6.d;
    // 0x80251B14: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x80251B18: bc1f        L_80251B30
    if (!c1cs) {
        // 0x80251B1C: nop
    
            goto L_80251B30;
    }
    // 0x80251B1C: nop

    // 0x80251B20: jal         0x800775B4
    // 0x80251B24: nop

    func_800775B4(rdram, ctx);
        goto after_55;
    // 0x80251B24: nop

    after_55:
    // 0x80251B28: b           L_80251B90
    // 0x80251B2C: nop

        goto L_80251B90;
    // 0x80251B2C: nop

L_80251B30:
    // 0x80251B30: lh          $v0, -0x1B60($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X1B60);
    // 0x80251B34: nop

    // 0x80251B38: andi        $t5, $v0, 0x1
    ctx->r13 = ctx->r2 & 0X1;
    // 0x80251B3C: beq         $t5, $zero, L_80251B54
    if (ctx->r13 == 0) {
        // 0x80251B40: andi        $t6, $v0, 0x2
        ctx->r14 = ctx->r2 & 0X2;
            goto L_80251B54;
    }
    // 0x80251B40: andi        $t6, $v0, 0x2
    ctx->r14 = ctx->r2 & 0X2;
    // 0x80251B44: jal         0x80077750
    // 0x80251B48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80077750(rdram, ctx);
        goto after_56;
    // 0x80251B48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_56:
    // 0x80251B4C: b           L_80251B74
    // 0x80251B50: nop

        goto L_80251B74;
    // 0x80251B50: nop

L_80251B54:
    // 0x80251B54: beq         $t6, $zero, L_80251B6C
    if (ctx->r14 == 0) {
        // 0x80251B58: nop
    
            goto L_80251B6C;
    }
    // 0x80251B58: nop

    // 0x80251B5C: jal         0x800779A4
    // 0x80251B60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800779A4(rdram, ctx);
        goto after_57;
    // 0x80251B60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_57:
    // 0x80251B64: b           L_80251B74
    // 0x80251B68: nop

        goto L_80251B74;
    // 0x80251B68: nop

L_80251B6C:
    // 0x80251B6C: jal         0x800777DC
    // 0x80251B70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800777DC(rdram, ctx);
        goto after_58;
    // 0x80251B70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_58:
L_80251B74:
    // 0x80251B74: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80251B78: lbu         $t7, -0x32A4($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X32A4);
    // 0x80251B7C: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x80251B80: beq         $t7, $at, L_80251B90
    if (ctx->r15 == ctx->r1) {
        // 0x80251B84: nop
    
            goto L_80251B90;
    }
    // 0x80251B84: nop

    // 0x80251B88: jal         0x802719DC
    // 0x80251B8C: addiu       $a0, $zero, 0x3D8
    ctx->r4 = ADD32(0, 0X3D8);
    ovl_8024B800_func_802719DC(rdram, ctx);
        goto after_59;
    // 0x80251B8C: addiu       $a0, $zero, 0x3D8
    ctx->r4 = ADD32(0, 0X3D8);
    after_59:
L_80251B90:
    // 0x80251B90: jal         0x800659EC
    // 0x80251B94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800659EC(rdram, ctx);
        goto after_60;
    // 0x80251B94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_60:
    // 0x80251B98: jal         0x80250BCC
    // 0x80251B9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80250BCC(rdram, ctx);
        goto after_61;
    // 0x80251B9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_61:
    // 0x80251BA0: jal         0x80271980
    // 0x80251BA4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_8024B800_func_80271980(rdram, ctx);
        goto after_62;
    // 0x80251BA4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_62:
    // 0x80251BA8: b           L_80252338
    // 0x80251BAC: nop

        goto L_80252338;
    // 0x80251BAC: nop

L_80251BB0:
    // 0x80251BB0: lh          $t8, -0x1B60($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X1B60);
    // 0x80251BB4: nop

    // 0x80251BB8: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x80251BBC: beq         $t9, $zero, L_80251BD4
    if (ctx->r25 == 0) {
        // 0x80251BC0: nop
    
            goto L_80251BD4;
    }
    // 0x80251BC0: nop

    // 0x80251BC4: jal         0x80077B64
    // 0x80251BC8: nop

    func_80077B64(rdram, ctx);
        goto after_63;
    // 0x80251BC8: nop

    after_63:
    // 0x80251BCC: b           L_80251BDC
    // 0x80251BD0: nop

        goto L_80251BDC;
    // 0x80251BD0: nop

L_80251BD4:
    // 0x80251BD4: jal         0x800777DC
    // 0x80251BD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800777DC(rdram, ctx);
        goto after_64;
    // 0x80251BD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_64:
L_80251BDC:
    // 0x80251BDC: jal         0x80250B5C
    // 0x80251BE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80250B5C(rdram, ctx);
        goto after_65;
    // 0x80251BE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_65:
    // 0x80251BE4: jal         0x80250CE4
    // 0x80251BE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80250CE4(rdram, ctx);
        goto after_66;
    // 0x80251BE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_66:
    // 0x80251BEC: jal         0x800588E0
    // 0x80251BF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800588E0(rdram, ctx);
        goto after_67;
    // 0x80251BF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_67:
    // 0x80251BF4: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x80251BF8: lw          $t1, 0x3B20($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X3B20);
    // 0x80251BFC: addiu       $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
    // 0x80251C00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80251C04: jal         0x800652F8
    // 0x80251C08: sb          $t0, 0xBC($t1)
    MEM_B(0XBC, ctx->r9) = ctx->r8;
    func_800652F8(rdram, ctx);
        goto after_68;
    // 0x80251C08: sb          $t0, 0xBC($t1)
    MEM_B(0XBC, ctx->r9) = ctx->r8;
    after_68:
    // 0x80251C0C: jal         0x80271980
    // 0x80251C10: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    ovl_8024B800_func_80271980(rdram, ctx);
        goto after_69;
    // 0x80251C10: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_69:
    // 0x80251C14: b           L_80252338
    // 0x80251C18: nop

        goto L_80252338;
    // 0x80251C18: nop

L_80251C1C:
    // 0x80251C1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80251C20: jal         0x8025133C
    // 0x80251C24: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    ovl_8024B800_func_8025133C(rdram, ctx);
        goto after_70;
    // 0x80251C24: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    after_70:
    // 0x80251C28: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x80251C2C: beq         $v0, $zero, L_80251C68
    if (ctx->r2 == 0) {
        // 0x80251C30: addiu       $at, $zero, 0xB
        ctx->r1 = ADD32(0, 0XB);
            goto L_80251C68;
    }
    // 0x80251C30: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x80251C34: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x80251C38: bne         $v1, $at, L_80251C50
    if (ctx->r3 != ctx->r1) {
        // 0x80251C3C: nop
    
            goto L_80251C50;
    }
    // 0x80251C3C: nop

    // 0x80251C40: jal         0x80271980
    // 0x80251C44: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_8024B800_func_80271980(rdram, ctx);
        goto after_71;
    // 0x80251C44: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_71:
    // 0x80251C48: b           L_80251C58
    // 0x80251C4C: nop

        goto L_80251C58;
    // 0x80251C4C: nop

L_80251C50:
    // 0x80251C50: jal         0x80271980
    // 0x80251C54: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_8024B800_func_80271980(rdram, ctx);
        goto after_72;
    // 0x80251C54: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_72:
L_80251C58:
    // 0x80251C58: jal         0x8007794C
    // 0x80251C5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8007794C(rdram, ctx);
        goto after_73;
    // 0x80251C5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_73:
    // 0x80251C60: b           L_80251C90
    // 0x80251C64: nop

        goto L_80251C90;
    // 0x80251C64: nop

L_80251C68:
    // 0x80251C68: bne         $v1, $at, L_80251C80
    if (ctx->r3 != ctx->r1) {
        // 0x80251C6C: nop
    
            goto L_80251C80;
    }
    // 0x80251C6C: nop

    // 0x80251C70: jal         0x80271980
    // 0x80251C74: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_8024B800_func_80271980(rdram, ctx);
        goto after_74;
    // 0x80251C74: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_74:
    // 0x80251C78: b           L_80251C88
    // 0x80251C7C: nop

        goto L_80251C88;
    // 0x80251C7C: nop

L_80251C80:
    // 0x80251C80: jal         0x80271980
    // 0x80251C84: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_8024B800_func_80271980(rdram, ctx);
        goto after_75;
    // 0x80251C84: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_75:
L_80251C88:
    // 0x80251C88: jal         0x80077B30
    // 0x80251C8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80077B30(rdram, ctx);
        goto after_76;
    // 0x80251C8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_76:
L_80251C90:
    // 0x80251C90: jal         0x80250BCC
    // 0x80251C94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80250BCC(rdram, ctx);
        goto after_77;
    // 0x80251C94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_77:
    // 0x80251C98: b           L_80252338
    // 0x80251C9C: nop

        goto L_80252338;
    // 0x80251C9C: nop

L_80251CA0:
    // 0x80251CA0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80251CA4: lh          $a2, 0xE4($s0)
    ctx->r6 = MEM_H(ctx->r16, 0XE4);
    // 0x80251CA8: jal         0x80250F44
    // 0x80251CAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80250F44(rdram, ctx);
        goto after_78;
    // 0x80251CAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_78:
    // 0x80251CB0: b           L_80252338
    // 0x80251CB4: nop

        goto L_80252338;
    // 0x80251CB4: nop

L_80251CB8:
    // 0x80251CB8: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x80251CBC: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80251CC0: lbu         $t2, 0xBD($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0XBD);
    // 0x80251CC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80251CC8: andi        $t3, $t2, 0x7
    ctx->r11 = ctx->r10 & 0X7;
    // 0x80251CCC: beq         $t3, $zero, L_80251CE8
    if (ctx->r11 == 0) {
        // 0x80251CD0: nop
    
            goto L_80251CE8;
    }
    // 0x80251CD0: nop

    // 0x80251CD4: lhu         $t4, 0x6A($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X6A);
    // 0x80251CD8: nop

    // 0x80251CDC: slti        $at, $t4, 0x4
    ctx->r1 = SIGNED(ctx->r12) < 0X4 ? 1 : 0;
    // 0x80251CE0: bne         $at, $zero, L_80252380
    if (ctx->r1 != 0) {
        // 0x80251CE4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80252380;
    }
    // 0x80251CE4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80251CE8:
    // 0x80251CE8: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80251CEC: jal         0x80256000
    // 0x80251CF0: sb          $t5, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r13;
    ovl_8024B800_func_80256000(rdram, ctx);
        goto after_79;
    // 0x80251CF0: sb          $t5, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r13;
    after_79:
    // 0x80251CF4: b           L_80252338
    // 0x80251CF8: nop

        goto L_80252338;
    // 0x80251CF8: nop

L_80251CFC:
    // 0x80251CFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80251D00: jal         0x802514CC
    // 0x80251D04: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    ovl_8024B800_func_802514CC(rdram, ctx);
        goto after_80;
    // 0x80251D04: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    after_80:
    // 0x80251D08: lwc1        $f0, 0x48($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80251D0C: bne         $v0, $zero, L_80252380
    if (ctx->r2 != 0) {
        // 0x80251D10: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80252380;
    }
    // 0x80251D10: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80251D14: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80251D18: jal         0x802511C4
    // 0x80251D1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_802511C4(rdram, ctx);
        goto after_81;
    // 0x80251D1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_81:
    // 0x80251D20: jal         0x80251390
    // 0x80251D24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80251390(rdram, ctx);
        goto after_82;
    // 0x80251D24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_82:
    // 0x80251D28: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x80251D2C: lw          $t7, 0x3B20($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3B20);
    // 0x80251D30: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x80251D34: b           L_80252338
    // 0x80251D38: sb          $t6, 0xBC($t7)
    MEM_B(0XBC, ctx->r15) = ctx->r14;
        goto L_80252338;
    // 0x80251D38: sb          $t6, 0xBC($t7)
    MEM_B(0XBC, ctx->r15) = ctx->r14;
L_80251D3C:
    // 0x80251D3C: lw          $t8, 0x0($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X0);
    // 0x80251D40: nop

    // 0x80251D44: lhu         $t9, 0x6A($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X6A);
    // 0x80251D48: nop

    // 0x80251D4C: slti        $at, $t9, 0x5
    ctx->r1 = SIGNED(ctx->r25) < 0X5 ? 1 : 0;
    // 0x80251D50: bne         $at, $zero, L_80252380
    if (ctx->r1 != 0) {
        // 0x80251D54: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80252380;
    }
    // 0x80251D54: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80251D58: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80251D5C: jal         0x802511C4
    // 0x80251D60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_802511C4(rdram, ctx);
        goto after_83;
    // 0x80251D60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_83:
    // 0x80251D64: jal         0x80251390
    // 0x80251D68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80251390(rdram, ctx);
        goto after_84;
    // 0x80251D68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_84:
    // 0x80251D6C: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x80251D70: lw          $t1, 0x3B20($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X3B20);
    // 0x80251D74: addiu       $t0, $zero, 0x7
    ctx->r8 = ADD32(0, 0X7);
    // 0x80251D78: b           L_80252338
    // 0x80251D7C: sb          $t0, 0xBC($t1)
    MEM_B(0XBC, ctx->r9) = ctx->r8;
        goto L_80252338;
    // 0x80251D7C: sb          $t0, 0xBC($t1)
    MEM_B(0XBC, ctx->r9) = ctx->r8;
L_80251D80:
    // 0x80251D80: lw          $t2, 0x0($a3)
    ctx->r10 = MEM_W(ctx->r7, 0X0);
    // 0x80251D84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80251D88: lhu         $t3, 0x6A($t2)
    ctx->r11 = MEM_HU(ctx->r10, 0X6A);
    // 0x80251D8C: nop

    // 0x80251D90: slti        $at, $t3, 0x5
    ctx->r1 = SIGNED(ctx->r11) < 0X5 ? 1 : 0;
    // 0x80251D94: bne         $at, $zero, L_80252380
    if (ctx->r1 != 0) {
        // 0x80251D98: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80252380;
    }
    // 0x80251D98: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80251D9C: jal         0x80251420
    // 0x80251DA0: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    ovl_8024B800_func_80251420(rdram, ctx);
        goto after_85;
    // 0x80251DA0: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    after_85:
    // 0x80251DA4: lwc1        $f0, 0x48($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80251DA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80251DAC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80251DB0: jal         0x802512AC
    // 0x80251DB4: nop

    ovl_8024B800_func_802512AC(rdram, ctx);
        goto after_86;
    // 0x80251DB4: nop

    after_86:
    // 0x80251DB8: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x80251DBC: addiu       $v1, $v1, 0x3B20
    ctx->r3 = ADD32(ctx->r3, 0X3B20);
    // 0x80251DC0: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x80251DC4: addiu       $t4, $zero, 0x9
    ctx->r12 = ADD32(0, 0X9);
    // 0x80251DC8: sb          $t4, 0xBC($t5)
    MEM_B(0XBC, ctx->r13) = ctx->r12;
    // 0x80251DCC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80251DD0: nop

    // 0x80251DD4: lhu         $t6, 0xC2($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0XC2);
    // 0x80251DD8: nop

    // 0x80251DDC: ori         $t7, $t6, 0x2
    ctx->r15 = ctx->r14 | 0X2;
    // 0x80251DE0: b           L_80252338
    // 0x80251DE4: sh          $t7, 0xC2($v0)
    MEM_H(0XC2, ctx->r2) = ctx->r15;
        goto L_80252338;
    // 0x80251DE4: sh          $t7, 0xC2($v0)
    MEM_H(0XC2, ctx->r2) = ctx->r15;
L_80251DE8:
    // 0x80251DE8: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x80251DEC: jal         0x80271980
    // 0x80251DF0: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    ovl_8024B800_func_80271980(rdram, ctx);
        goto after_87;
    // 0x80251DF0: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    after_87:
    // 0x80251DF4: lwc1        $f0, 0x48($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80251DF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80251DFC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80251E00: jal         0x802512AC
    // 0x80251E04: nop

    ovl_8024B800_func_802512AC(rdram, ctx);
        goto after_88;
    // 0x80251E04: nop

    after_88:
    // 0x80251E08: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x80251E0C: lw          $t9, 0x3B20($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X3B20);
    // 0x80251E10: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x80251E14: b           L_80252338
    // 0x80251E18: sb          $t8, 0xBC($t9)
    MEM_B(0XBC, ctx->r25) = ctx->r24;
        goto L_80252338;
    // 0x80251E18: sb          $t8, 0xBC($t9)
    MEM_B(0XBC, ctx->r25) = ctx->r24;
L_80251E1C:
    // 0x80251E1C: lw          $t0, 0x0($a3)
    ctx->r8 = MEM_W(ctx->r7, 0X0);
    // 0x80251E20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80251E24: lhu         $t1, 0x6A($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X6A);
    // 0x80251E28: nop

    // 0x80251E2C: slti        $at, $t1, 0x5
    ctx->r1 = SIGNED(ctx->r9) < 0X5 ? 1 : 0;
    // 0x80251E30: bne         $at, $zero, L_80252380
    if (ctx->r1 != 0) {
        // 0x80251E34: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80252380;
    }
    // 0x80251E34: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80251E38: jal         0x80251420
    // 0x80251E3C: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    ovl_8024B800_func_80251420(rdram, ctx);
        goto after_89;
    // 0x80251E3C: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    after_89:
    // 0x80251E40: lwc1        $f0, 0x48($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80251E44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80251E48: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80251E4C: jal         0x802512AC
    // 0x80251E50: nop

    ovl_8024B800_func_802512AC(rdram, ctx);
        goto after_90;
    // 0x80251E50: nop

    after_90:
    // 0x80251E54: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x80251E58: lw          $t3, 0x3B20($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X3B20);
    // 0x80251E5C: addiu       $t2, $zero, 0x8
    ctx->r10 = ADD32(0, 0X8);
    // 0x80251E60: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80251E64: sb          $t2, 0xBC($t3)
    MEM_B(0XBC, ctx->r11) = ctx->r10;
    // 0x80251E68: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x80251E6C: nop

    // 0x80251E70: lhu         $t4, 0xC2($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0XC2);
    // 0x80251E74: nop

    // 0x80251E78: ori         $t5, $t4, 0x2
    ctx->r13 = ctx->r12 | 0X2;
    // 0x80251E7C: b           L_80252338
    // 0x80251E80: sh          $t5, 0xC2($v0)
    MEM_H(0XC2, ctx->r2) = ctx->r13;
        goto L_80252338;
    // 0x80251E80: sh          $t5, 0xC2($v0)
    MEM_H(0XC2, ctx->r2) = ctx->r13;
L_80251E84:
    // 0x80251E84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80251E88: jal         0x802514CC
    // 0x80251E8C: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    ovl_8024B800_func_802514CC(rdram, ctx);
        goto after_91;
    // 0x80251E8C: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    after_91:
    // 0x80251E90: lwc1        $f0, 0x48($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80251E94: bne         $v0, $zero, L_8025237C
    if (ctx->r2 != 0) {
        // 0x80251E98: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8025237C;
    }
    // 0x80251E98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80251E9C: jal         0x80251390
    // 0x80251EA0: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    ovl_8024B800_func_80251390(rdram, ctx);
        goto after_92;
    // 0x80251EA0: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    after_92:
    // 0x80251EA4: lwc1        $f0, 0x48($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80251EA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80251EAC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80251EB0: jal         0x802511C4
    // 0x80251EB4: nop

    ovl_8024B800_func_802511C4(rdram, ctx);
        goto after_93;
    // 0x80251EB4: nop

    after_93:
    // 0x80251EB8: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x80251EBC: lw          $t7, 0x3B20($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3B20);
    // 0x80251EC0: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x80251EC4: b           L_80252338
    // 0x80251EC8: sb          $t6, 0xBC($t7)
    MEM_B(0XBC, ctx->r15) = ctx->r14;
        goto L_80252338;
    // 0x80251EC8: sb          $t6, 0xBC($t7)
    MEM_B(0XBC, ctx->r15) = ctx->r14;
L_80251ECC:
    // 0x80251ECC: lw          $t8, 0x0($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X0);
    // 0x80251ED0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80251ED4: lhu         $t9, 0x6A($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X6A);
    // 0x80251ED8: nop

    // 0x80251EDC: slti        $at, $t9, 0x5
    ctx->r1 = SIGNED(ctx->r25) < 0X5 ? 1 : 0;
    // 0x80251EE0: bne         $at, $zero, L_80252380
    if (ctx->r1 != 0) {
        // 0x80251EE4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80252380;
    }
    // 0x80251EE4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80251EE8: jal         0x80251420
    // 0x80251EEC: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    ovl_8024B800_func_80251420(rdram, ctx);
        goto after_94;
    // 0x80251EEC: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    after_94:
    // 0x80251EF0: lwc1        $f0, 0x48($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80251EF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80251EF8: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80251EFC: jal         0x802511C4
    // 0x80251F00: nop

    ovl_8024B800_func_802511C4(rdram, ctx);
        goto after_95;
    // 0x80251F00: nop

    after_95:
    // 0x80251F04: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x80251F08: addiu       $v1, $v1, 0x3B20
    ctx->r3 = ADD32(ctx->r3, 0X3B20);
    // 0x80251F0C: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x80251F10: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
    // 0x80251F14: sb          $t0, 0xBC($t1)
    MEM_B(0XBC, ctx->r9) = ctx->r8;
    // 0x80251F18: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80251F1C: nop

    // 0x80251F20: lhu         $t2, 0xC2($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0XC2);
    // 0x80251F24: nop

    // 0x80251F28: ori         $t3, $t2, 0x2
    ctx->r11 = ctx->r10 | 0X2;
    // 0x80251F2C: b           L_80252338
    // 0x80251F30: sh          $t3, 0xC2($v0)
    MEM_H(0XC2, ctx->r2) = ctx->r11;
        goto L_80252338;
    // 0x80251F30: sh          $t3, 0xC2($v0)
    MEM_H(0XC2, ctx->r2) = ctx->r11;
L_80251F34:
    // 0x80251F34: lhu         $t4, 0x12($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X12);
    // 0x80251F38: nop

    // 0x80251F3C: andi        $t5, $t4, 0x7FFF
    ctx->r13 = ctx->r12 & 0X7FFF;
    // 0x80251F40: sh          $t5, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r13;
    // 0x80251F44: lw          $t6, 0x0($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X0);
    // 0x80251F48: nop

    // 0x80251F4C: lw          $a1, 0x84($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X84);
    // 0x80251F50: nop

    // 0x80251F54: beq         $a1, $zero, L_80251F6C
    if (ctx->r5 == 0) {
        // 0x80251F58: nop
    
            goto L_80251F6C;
    }
    // 0x80251F58: nop

    // 0x80251F5C: jal         0x80250120
    // 0x80251F60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80250120(rdram, ctx);
        goto after_96;
    // 0x80251F60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_96:
    // 0x80251F64: b           L_80252338
    // 0x80251F68: nop

        goto L_80252338;
    // 0x80251F68: nop

L_80251F6C:
    // 0x80251F6C: lhu         $t7, 0x14($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X14);
    // 0x80251F70: nop

    // 0x80251F74: ori         $t8, $t7, 0x4000
    ctx->r24 = ctx->r15 | 0X4000;
    // 0x80251F78: b           L_80252338
    // 0x80251F7C: sh          $t8, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r24;
        goto L_80252338;
    // 0x80251F7C: sh          $t8, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r24;
L_80251F80:
    // 0x80251F80: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x80251F84: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80251F88: lw          $a0, 0x84($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X84);
    // 0x80251F8C: nop

    // 0x80251F90: beq         $a0, $zero, L_80251FE8
    if (ctx->r4 == 0) {
        // 0x80251F94: nop
    
            goto L_80251FE8;
    }
    // 0x80251F94: nop

    // 0x80251F98: jal         0x8027A02C
    // 0x80251F9C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_8024B800_func_8027A02C(rdram, ctx);
        goto after_97;
    // 0x80251F9C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_97:
    // 0x80251FA0: beq         $v0, $zero, L_80251FBC
    if (ctx->r2 == 0) {
        // 0x80251FA4: lui         $t9, 0x8009
        ctx->r25 = S32(0X8009 << 16);
            goto L_80251FBC;
    }
    // 0x80251FA4: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x80251FA8: lw          $t9, 0x3B20($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X3B20);
    // 0x80251FAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80251FB0: lw          $a1, 0x84($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X84);
    // 0x80251FB4: jal         0x8024F9B8
    // 0x80251FB8: andi        $a2, $v0, 0xFFFF
    ctx->r6 = ctx->r2 & 0XFFFF;
    ovl_8024B800_func_8024F9B8(rdram, ctx);
        goto after_98;
    // 0x80251FB8: andi        $a2, $v0, 0xFFFF
    ctx->r6 = ctx->r2 & 0XFFFF;
    after_98:
L_80251FBC:
    // 0x80251FBC: jal         0x802719DC
    // 0x80251FC0: addiu       $a0, $zero, 0x32E
    ctx->r4 = ADD32(0, 0X32E);
    ovl_8024B800_func_802719DC(rdram, ctx);
        goto after_99;
    // 0x80251FC0: addiu       $a0, $zero, 0x32E
    ctx->r4 = ADD32(0, 0X32E);
    after_99:
    // 0x80251FC4: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80251FC8: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x80251FCC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80251FD0: lw          $a1, 0x84($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X84);
    // 0x80251FD4: lhu         $a2, 0xDC($v0)
    ctx->r6 = MEM_HU(ctx->r2, 0XDC);
    // 0x80251FD8: jal         0x8024FFC0
    // 0x80251FDC: nop

    ovl_8024B800_func_8024FFC0(rdram, ctx);
        goto after_100;
    // 0x80251FDC: nop

    after_100:
    // 0x80251FE0: b           L_80252018
    // 0x80251FE4: nop

        goto L_80252018;
    // 0x80251FE4: nop

L_80251FE8:
    // 0x80251FE8: lw          $a0, 0x88($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X88);
    // 0x80251FEC: nop

    // 0x80251FF0: beq         $a0, $zero, L_80252018
    if (ctx->r4 == 0) {
        // 0x80251FF4: nop
    
            goto L_80252018;
    }
    // 0x80251FF4: nop

    // 0x80251FF8: jal         0x8024BC08
    // 0x80251FFC: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    ovl_8024B800_func_8024BC08(rdram, ctx);
        goto after_101;
    // 0x80251FFC: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    after_101:
    // 0x80252000: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x80252004: lw          $t1, 0x3B20($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X3B20);
    // 0x80252008: addiu       $t0, $zero, 0x5
    ctx->r8 = ADD32(0, 0X5);
    // 0x8025200C: lw          $t2, 0x88($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X88);
    // 0x80252010: nop

    // 0x80252014: sh          $t0, 0xE4($t2)
    MEM_H(0XE4, ctx->r10) = ctx->r8;
L_80252018:
    // 0x80252018: jal         0x80055528
    // 0x8025201C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80055528(rdram, ctx);
        goto after_102;
    // 0x8025201C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_102:
    // 0x80252020: jal         0x803F2464
    // 0x80252024: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(0x803F2464)(rdram, ctx);
        goto after_103;
    // 0x80252024: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_103:
    // 0x80252028: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8025202C: jal         0x802A613C
    // 0x80252030: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A613C)(rdram, ctx);
        goto after_104;
    // 0x80252030: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_104:
    // 0x80252034: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x80252038: lhu         $a1, 0x40($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X40);
    // 0x8025203C: jal         0x800649A4
    // 0x80252040: nop

    func_800649A4(rdram, ctx);
        goto after_105;
    // 0x80252040: nop

    after_105:
    // 0x80252044: jal         0x80250A5C
    // 0x80252048: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80250A5C(rdram, ctx);
        goto after_106;
    // 0x80252048: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_106:
    // 0x8025204C: b           L_80252338
    // 0x80252050: nop

        goto L_80252338;
    // 0x80252050: nop

L_80252054:
    // 0x80252054: jal         0x80293364
    // 0x80252058: nop

    LOOKUP_FUNC(0x80293364)(rdram, ctx);
        goto after_107;
    // 0x80252058: nop

    after_107:
    // 0x8025205C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80252060: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x80252064: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80252068: lw          $t3, 0x84($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X84);
    // 0x8025206C: nop

    // 0x80252070: beq         $t3, $zero, L_802522E8
    if (ctx->r11 == 0) {
        // 0x80252074: nop
    
            goto L_802522E8;
    }
    // 0x80252074: nop

    // 0x80252078: lw          $a0, 0x88($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X88);
    // 0x8025207C: jal         0x80279E6C
    // 0x80252080: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_8024B800_func_80279E6C(rdram, ctx);
        goto after_108;
    // 0x80252080: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_108:
    // 0x80252084: lui         $t4, 0x8009
    ctx->r12 = S32(0X8009 << 16);
    // 0x80252088: lw          $t4, 0x3B20($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X3B20);
    // 0x8025208C: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    // 0x80252090: lw          $a0, 0x84($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X84);
    // 0x80252094: jal         0x8024BC08
    // 0x80252098: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    ovl_8024B800_func_8024BC08(rdram, ctx);
        goto after_109;
    // 0x80252098: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    after_109:
    // 0x8025209C: lui         $t5, 0x8028
    ctx->r13 = S32(0X8028 << 16);
    // 0x802520A0: lh          $t5, -0x1B60($t5)
    ctx->r13 = MEM_H(ctx->r13, -0X1B60);
    // 0x802520A4: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x802520A8: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x802520AC: beq         $t6, $zero, L_802520C8
    if (ctx->r14 == 0) {
        // 0x802520B0: lui         $t0, 0x8009
        ctx->r8 = S32(0X8009 << 16);
            goto L_802520C8;
    }
    // 0x802520B0: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x802520B4: lw          $t8, 0x3B20($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X3B20);
    // 0x802520B8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802520BC: lw          $t9, 0x84($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X84);
    // 0x802520C0: b           L_802520F0
    // 0x802520C4: sh          $t7, 0xE4($t9)
    MEM_H(0XE4, ctx->r25) = ctx->r15;
        goto L_802520F0;
    // 0x802520C4: sh          $t7, 0xE4($t9)
    MEM_H(0XE4, ctx->r25) = ctx->r15;
L_802520C8:
    // 0x802520C8: lw          $t0, 0x3B20($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X3B20);
    // 0x802520CC: addiu       $t1, $zero, 0x1B
    ctx->r9 = ADD32(0, 0X1B);
    // 0x802520D0: lw          $t2, 0x84($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X84);
    // 0x802520D4: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x802520D8: sh          $t1, 0xE4($t2)
    MEM_H(0XE4, ctx->r10) = ctx->r9;
    // 0x802520DC: lw          $t3, 0x3B20($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X3B20);
    // 0x802520E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802520E4: lw          $a1, 0x84($t3)
    ctx->r5 = MEM_W(ctx->r11, 0X84);
    // 0x802520E8: jal         0x8024FF20
    // 0x802520EC: nop

    ovl_8024B800_func_8024FF20(rdram, ctx);
        goto after_110;
    // 0x802520EC: nop

    after_110:
L_802520F0:
    // 0x802520F0: lui         $t4, 0x8009
    ctx->r12 = S32(0X8009 << 16);
    // 0x802520F4: lw          $t4, 0x3B20($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X3B20);
    // 0x802520F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802520FC: lw          $a1, 0x84($t4)
    ctx->r5 = MEM_W(ctx->r12, 0X84);
    // 0x80252100: jal         0x802509E8
    // 0x80252104: nop

    ovl_8024B800_func_802509E8(rdram, ctx);
        goto after_111;
    // 0x80252104: nop

    after_111:
    // 0x80252108: lui         $t5, 0x8009
    ctx->r13 = S32(0X8009 << 16);
    // 0x8025210C: lw          $t5, 0x3B20($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X3B20);
    // 0x80252110: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80252114: lw          $v0, 0x84($t5)
    ctx->r2 = MEM_W(ctx->r13, 0X84);
    // 0x80252118: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    // 0x8025211C: lw          $a1, 0x4C($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4C);
    // 0x80252120: lw          $a2, 0x44($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X44);
    // 0x80252124: jal         0x80272B98
    // 0x80252128: nop

    ovl_8024B800_func_80272B98(rdram, ctx);
        goto after_112;
    // 0x80252128: nop

    after_112:
    // 0x8025212C: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80252130: lw          $t6, 0x3B20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B20);
    // 0x80252134: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80252138: lw          $t8, 0x84($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X84);
    // 0x8025213C: nop

    // 0x80252140: lwc1        $f14, 0x8C($t8)
    ctx->f14.u32l = MEM_W(ctx->r24, 0X8C);
    // 0x80252144: jal         0x80279308
    // 0x80252148: nop

    ovl_8024B800_func_80279308(rdram, ctx);
        goto after_113;
    // 0x80252148: nop

    after_113:
    // 0x8025214C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80252150: lwc1        $f11, -0x3F58($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X3F58);
    // 0x80252154: lwc1        $f10, -0x3F54($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X3F54);
    // 0x80252158: cvt.d.s     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.d = CVT_D_S(ctx->f0.fl);
    // 0x8025215C: c.lt.d      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.d < ctx->f10.d;
    // 0x80252160: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
    // 0x80252164: bc1f        L_80252220
    if (!c1cs) {
        // 0x80252168: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80252220;
    }
    // 0x80252168: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8025216C: beq         $t7, $at, L_802521DC
    if (ctx->r15 == ctx->r1) {
        // 0x80252170: lui         $t3, 0x8028
        ctx->r11 = S32(0X8028 << 16);
            goto L_802521DC;
    }
    // 0x80252170: lui         $t3, 0x8028
    ctx->r11 = S32(0X8028 << 16);
    // 0x80252174: jal         0x802719DC
    // 0x80252178: addiu       $a0, $zero, 0x343
    ctx->r4 = ADD32(0, 0X343);
    ovl_8024B800_func_802719DC(rdram, ctx);
        goto after_114;
    // 0x80252178: addiu       $a0, $zero, 0x343
    ctx->r4 = ADD32(0, 0X343);
    after_114:
    // 0x8025217C: jal         0x80058054
    // 0x80252180: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_80058054(rdram, ctx);
        goto after_115;
    // 0x80252180: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_115:
    // 0x80252184: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x80252188: lw          $t9, 0x3B20($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X3B20);
    // 0x8025218C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80252190: lw          $t0, 0x84($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X84);
    // 0x80252194: lwc1        $f7, -0x3F50($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X3F50);
    // 0x80252198: lwc1        $f4, 0x8C($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X8C);
    // 0x8025219C: lwc1        $f6, -0x3F4C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X3F4C);
    // 0x802521A0: add.s       $f8, $f0, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x802521A4: lui         $a2, 0x3FE6
    ctx->r6 = S32(0X3FE6 << 16);
    // 0x802521A8: cvt.d.s     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f18.d = CVT_D_S(ctx->f8.fl);
    // 0x802521AC: sub.d       $f16, $f18, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f6.d); 
    ctx->f16.d = ctx->f18.d - ctx->f6.d;
    // 0x802521B0: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x802521B4: cvt.s.d     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f10.fl = CVT_S_D(ctx->f16.d);
    // 0x802521B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802521BC: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x802521C0: jal         0x80057F00
    // 0x802521C4: nop

    func_80057F00(rdram, ctx);
        goto after_116;
    // 0x802521C4: nop

    after_116:
    // 0x802521C8: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x802521CC: lw          $t2, 0x3B20($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X3B20);
    // 0x802521D0: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x802521D4: b           L_80252338
    // 0x802521D8: sb          $t1, 0xBC($t2)
    MEM_B(0XBC, ctx->r10) = ctx->r9;
        goto L_80252338;
    // 0x802521D8: sb          $t1, 0xBC($t2)
    MEM_B(0XBC, ctx->r10) = ctx->r9;
L_802521DC:
    // 0x802521DC: lh          $t3, -0x1B60($t3)
    ctx->r11 = MEM_H(ctx->r11, -0X1B60);
    // 0x802521E0: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x802521E4: andi        $t4, $t3, 0x1
    ctx->r12 = ctx->r11 & 0X1;
    // 0x802521E8: beq         $t4, $zero, L_80252338
    if (ctx->r12 == 0) {
        // 0x802521EC: nop
    
            goto L_80252338;
    }
    // 0x802521EC: nop

    // 0x802521F0: lw          $t6, 0x3B20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B20);
    // 0x802521F4: addiu       $t5, $zero, 0x8
    ctx->r13 = ADD32(0, 0X8);
    // 0x802521F8: lw          $t8, 0x84($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X84);
    // 0x802521FC: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x80252200: sh          $t5, 0xE4($t8)
    MEM_H(0XE4, ctx->r24) = ctx->r13;
    // 0x80252204: lw          $t7, 0x3B20($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3B20);
    // 0x80252208: nop

    // 0x8025220C: lw          $a0, 0x84($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X84);
    // 0x80252210: jal         0x80064DE8
    // 0x80252214: nop

    func_80064DE8(rdram, ctx);
        goto after_117;
    // 0x80252214: nop

    after_117:
    // 0x80252218: b           L_80252338
    // 0x8025221C: nop

        goto L_80252338;
    // 0x8025221C: nop

L_80252220:
    // 0x80252220: jal         0x80065A9C
    // 0x80252224: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80065A9C(rdram, ctx);
        goto after_118;
    // 0x80252224: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_118:
    // 0x80252228: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x8025222C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80252230: beq         $t9, $at, L_802522AC
    if (ctx->r25 == ctx->r1) {
        // 0x80252234: nop
    
            goto L_802522AC;
    }
    // 0x80252234: nop

    // 0x80252238: jal         0x802719DC
    // 0x8025223C: addiu       $a0, $zero, 0x343
    ctx->r4 = ADD32(0, 0X343);
    ovl_8024B800_func_802719DC(rdram, ctx);
        goto after_119;
    // 0x8025223C: addiu       $a0, $zero, 0x343
    ctx->r4 = ADD32(0, 0X343);
    after_119:
    // 0x80252240: jal         0x80055528
    // 0x80252244: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80055528(rdram, ctx);
        goto after_120;
    // 0x80252244: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_120:
    // 0x80252248: lui         $t0, 0x8010
    ctx->r8 = S32(0X8010 << 16);
    // 0x8025224C: lbu         $t0, 0x522C($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X522C);
    // 0x80252250: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80252254: bne         $t0, $at, L_80252270
    if (ctx->r8 != ctx->r1) {
        // 0x80252258: lui         $t1, 0x8009
        ctx->r9 = S32(0X8009 << 16);
            goto L_80252270;
    }
    // 0x80252258: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x8025225C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80252260: lwc1        $f4, -0x3F48($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X3F48);
    // 0x80252264: lw          $t1, 0x3B20($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X3B20);
    // 0x80252268: nop

    // 0x8025226C: swc1        $f4, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f4.u32l;
L_80252270:
    // 0x80252270: jal         0x80250A5C
    // 0x80252274: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80250A5C(rdram, ctx);
        goto after_121;
    // 0x80252274: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_121:
    // 0x80252278: jal         0x80065B70
    // 0x8025227C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80065B70(rdram, ctx);
        goto after_122;
    // 0x8025227C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_122:
    // 0x80252280: jal         0x803F2464
    // 0x80252284: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(0x803F2464)(rdram, ctx);
        goto after_123;
    // 0x80252284: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_123:
    // 0x80252288: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8025228C: jal         0x802A613C
    // 0x80252290: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A613C)(rdram, ctx);
        goto after_124;
    // 0x80252290: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_124:
    // 0x80252294: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x80252298: lhu         $a1, 0x40($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X40);
    // 0x8025229C: jal         0x800649A4
    // 0x802522A0: nop

    func_800649A4(rdram, ctx);
        goto after_125;
    // 0x802522A0: nop

    after_125:
    // 0x802522A4: b           L_802522D4
    // 0x802522A8: nop

        goto L_802522D4;
    // 0x802522A8: nop

L_802522AC:
    // 0x802522AC: jal         0x802719DC
    // 0x802522B0: addiu       $a0, $zero, 0x343
    ctx->r4 = ADD32(0, 0X343);
    ovl_8024B800_func_802719DC(rdram, ctx);
        goto after_126;
    // 0x802522B0: addiu       $a0, $zero, 0x343
    ctx->r4 = ADD32(0, 0X343);
    after_126:
    // 0x802522B4: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x802522B8: lw          $t2, 0x3B20($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X3B20);
    // 0x802522BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802522C0: lw          $t3, 0x84($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X84);
    // 0x802522C4: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    // 0x802522C8: lw          $a1, 0x8C($t3)
    ctx->r5 = MEM_W(ctx->r11, 0X8C);
    // 0x802522CC: jal         0x80057F00
    // 0x802522D0: nop

    func_80057F00(rdram, ctx);
        goto after_127;
    // 0x802522D0: nop

    after_127:
L_802522D4:
    // 0x802522D4: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x802522D8: lw          $t6, 0x3B20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B20);
    // 0x802522DC: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x802522E0: b           L_80252338
    // 0x802522E4: sb          $t4, 0xBC($t6)
    MEM_B(0XBC, ctx->r14) = ctx->r12;
        goto L_80252338;
    // 0x802522E4: sb          $t4, 0xBC($t6)
    MEM_B(0XBC, ctx->r14) = ctx->r12;
L_802522E8:
    // 0x802522E8: lw          $a0, 0x88($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X88);
    // 0x802522EC: nop

    // 0x802522F0: beq         $a0, $zero, L_80252320
    if (ctx->r4 == 0) {
        // 0x802522F4: nop
    
            goto L_80252320;
    }
    // 0x802522F4: nop

    // 0x802522F8: jal         0x8024BC08
    // 0x802522FC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_8024B800_func_8024BC08(rdram, ctx);
        goto after_128;
    // 0x802522FC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_128:
    // 0x80252300: jal         0x80055528
    // 0x80252304: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80055528(rdram, ctx);
        goto after_129;
    // 0x80252304: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_129:
    // 0x80252308: jal         0x80250A5C
    // 0x8025230C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80250A5C(rdram, ctx);
        goto after_130;
    // 0x8025230C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_130:
    // 0x80252310: jal         0x803F2464
    // 0x80252314: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(0x803F2464)(rdram, ctx);
        goto after_131;
    // 0x80252314: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_131:
    // 0x80252318: b           L_80252338
    // 0x8025231C: nop

        goto L_80252338;
    // 0x8025231C: nop

L_80252320:
    // 0x80252320: jal         0x80055528
    // 0x80252324: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80055528(rdram, ctx);
        goto after_132;
    // 0x80252324: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_132:
    // 0x80252328: jal         0x80250A5C
    // 0x8025232C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80250A5C(rdram, ctx);
        goto after_133;
    // 0x8025232C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_133:
    // 0x80252330: jal         0x803F2464
    // 0x80252334: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(0x803F2464)(rdram, ctx);
        goto after_134;
    // 0x80252334: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_134:
L_80252338:
    // 0x80252338: jal         0x80059868
    // 0x8025233C: nop

    func_80059868(rdram, ctx);
        goto after_135;
    // 0x8025233C: nop

    after_135:
    // 0x80252340: lhu         $t5, 0x16($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X16);
    // 0x80252344: sh          $v0, 0x2C($s0)
    MEM_H(0X2C, ctx->r16) = ctx->r2;
    // 0x80252348: andi        $t8, $t5, 0x200
    ctx->r24 = ctx->r13 & 0X200;
    // 0x8025234C: beq         $t8, $zero, L_80252360
    if (ctx->r24 == 0) {
        // 0x80252350: lw          $a1, 0x50($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X50);
            goto L_80252360;
    }
    // 0x80252350: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x80252354: jal         0x80278814
    // 0x80252358: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80278814(rdram, ctx);
        goto after_136;
    // 0x80252358: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_136:
    // 0x8025235C: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
L_80252360:
    // 0x80252360: jal         0x80266EBC
    // 0x80252364: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80266EBC(rdram, ctx);
        goto after_137;
    // 0x80252364: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_137:
    // 0x80252368: lhu         $t7, 0x14($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X14);
    // 0x8025236C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80252370: ori         $t9, $t7, 0x20
    ctx->r25 = ctx->r15 | 0X20;
    // 0x80252374: jal         0x80066DC4
    // 0x80252378: sh          $t9, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r25;
    func_80066DC4(rdram, ctx);
        goto after_138;
    // 0x80252378: sh          $t9, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r25;
    after_138:
L_8025237C:
    // 0x8025237C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80252380:
    // 0x80252380: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80252384: jr          $ra
    // 0x80252388: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x80252388: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void ovl_8024B800_func_8025238C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8025238C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80252390: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80252394: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x80252398: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8025239C: lhu         $t6, 0xB78($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB78);
    // 0x802523A0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802523A4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802523A8: lw          $s0, 0x90($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X90);
    // 0x802523AC: bne         $t6, $zero, L_802524F4
    if (ctx->r14 != 0) {
        // 0x802523B0: lui         $t7, 0x801B
        ctx->r15 = S32(0X801B << 16);
            goto L_802524F4;
    }
    // 0x802523B0: lui         $t7, 0x801B
    ctx->r15 = S32(0X801B << 16);
    // 0x802523B4: lhu         $t7, 0x361E($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0X361E);
    // 0x802523B8: nop

    // 0x802523BC: andi        $t8, $t7, 0x8000
    ctx->r24 = ctx->r15 & 0X8000;
    // 0x802523C0: bne         $t8, $zero, L_802524F8
    if (ctx->r24 != 0) {
        // 0x802523C4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802524F8;
    }
    // 0x802523C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802523C8: lhu         $t9, 0x12($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X12);
    // 0x802523CC: nop

    // 0x802523D0: andi        $t0, $t9, 0x42
    ctx->r8 = ctx->r25 & 0X42;
    // 0x802523D4: bne         $t0, $zero, L_802524F8
    if (ctx->r8 != 0) {
        // 0x802523D8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802524F8;
    }
    // 0x802523D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802523DC: lhu         $t1, 0x20($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X20);
    // 0x802523E0: nop

    // 0x802523E4: andi        $t2, $t1, 0x40
    ctx->r10 = ctx->r9 & 0X40;
    // 0x802523E8: bne         $t2, $zero, L_80252494
    if (ctx->r10 != 0) {
        // 0x802523EC: nop
    
            goto L_80252494;
    }
    // 0x802523EC: nop

    // 0x802523F0: lhu         $t3, 0x6A($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X6A);
    // 0x802523F4: nop

    // 0x802523F8: slti        $at, $t3, 0x9
    ctx->r1 = SIGNED(ctx->r11) < 0X9 ? 1 : 0;
    // 0x802523FC: bne         $at, $zero, L_80252494
    if (ctx->r1 != 0) {
        // 0x80252400: nop
    
            goto L_80252494;
    }
    // 0x80252400: nop

    // 0x80252404: lw          $t4, 0xA8($v0)
    ctx->r12 = MEM_W(ctx->r2, 0XA8);
    // 0x80252408: nop

    // 0x8025240C: beq         $s0, $t4, L_80252494
    if (ctx->r16 == ctx->r12) {
        // 0x80252410: nop
    
            goto L_80252494;
    }
    // 0x80252410: nop

    // 0x80252414: lhu         $t5, 0x1A($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X1A);
    // 0x80252418: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8025241C: beq         $t5, $zero, L_80252494
    if (ctx->r13 == 0) {
        // 0x80252420: nop
    
            goto L_80252494;
    }
    // 0x80252420: nop

    // 0x80252424: jal         0x802A613C
    // 0x80252428: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(0x802A613C)(rdram, ctx);
        goto after_0;
    // 0x80252428: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x8025242C: beq         $v0, $zero, L_80252494
    if (ctx->r2 == 0) {
        // 0x80252430: nop
    
            goto L_80252494;
    }
    // 0x80252430: nop

    // 0x80252434: lhu         $t6, 0x2($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X2);
    // 0x80252438: nop

    // 0x8025243C: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x80252440: bne         $t7, $zero, L_80252494
    if (ctx->r15 != 0) {
        // 0x80252444: nop
    
            goto L_80252494;
    }
    // 0x80252444: nop

    // 0x80252448: lwc1        $f12, 0x8C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x8025244C: lwc1        $f14, 0x24($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X24);
    // 0x80252450: jal         0x80279308
    // 0x80252454: nop

    ovl_8024B800_func_80279308(rdram, ctx);
        goto after_1;
    // 0x80252454: nop

    after_1:
    // 0x80252458: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8025245C: lwc1        $f5, -0x3F40($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X3F40);
    // 0x80252460: lwc1        $f4, -0x3F3C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X3F3C);
    // 0x80252464: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x80252468: c.lt.d      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.d < ctx->f6.d;
    // 0x8025246C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80252470: bc1f        L_80252494
    if (!c1cs) {
        // 0x80252474: lui         $a1, 0x4100
        ctx->r5 = S32(0X4100 << 16);
            goto L_80252494;
    }
    // 0x80252474: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    // 0x80252478: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x8025247C: jal         0x80052E4C
    // 0x80252480: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    func_80052E4C(rdram, ctx);
        goto after_2;
    // 0x80252480: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    after_2:
    // 0x80252484: bltz        $v0, L_80252494
    if (SIGNED(ctx->r2) < 0) {
        // 0x80252488: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80252494;
    }
    // 0x80252488: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8025248C: jal         0x8024BC08
    // 0x80252490: addiu       $a1, $zero, 0x43
    ctx->r5 = ADD32(0, 0X43);
    ovl_8024B800_func_8024BC08(rdram, ctx);
        goto after_3;
    // 0x80252490: addiu       $a1, $zero, 0x43
    ctx->r5 = ADD32(0, 0X43);
    after_3:
L_80252494:
    // 0x80252494: lhu         $t8, 0x14($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X14);
    // 0x80252498: nop

    // 0x8025249C: andi        $t9, $t8, 0x4
    ctx->r25 = ctx->r24 & 0X4;
    // 0x802524A0: bne         $t9, $zero, L_802524F8
    if (ctx->r25 != 0) {
        // 0x802524A4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802524F8;
    }
    // 0x802524A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802524A8: lhu         $t0, 0x20($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X20);
    // 0x802524AC: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x802524B0: andi        $t1, $t0, 0x40
    ctx->r9 = ctx->r8 & 0X40;
    // 0x802524B4: bne         $t1, $zero, L_802524F8
    if (ctx->r9 != 0) {
        // 0x802524B8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802524F8;
    }
    // 0x802524B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802524BC: lw          $t2, 0x3B20($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X3B20);
    // 0x802524C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802524C4: lhu         $t3, 0x6A($t2)
    ctx->r11 = MEM_HU(ctx->r10, 0X6A);
    // 0x802524C8: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    // 0x802524CC: slti        $at, $t3, 0x2D
    ctx->r1 = SIGNED(ctx->r11) < 0X2D ? 1 : 0;
    // 0x802524D0: beq         $at, $zero, L_802524F4
    if (ctx->r1 == 0) {
        // 0x802524D4: addiu       $a2, $zero, 0x9
        ctx->r6 = ADD32(0, 0X9);
            goto L_802524F4;
    }
    // 0x802524D4: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x802524D8: jal         0x80052E4C
    // 0x802524DC: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    func_80052E4C(rdram, ctx);
        goto after_4;
    // 0x802524DC: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    after_4:
    // 0x802524E0: bltz        $v0, L_802524F8
    if (SIGNED(ctx->r2) < 0) {
        // 0x802524E4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802524F8;
    }
    // 0x802524E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802524E8: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x802524EC: jal         0x8024C92C
    // 0x802524F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8024C92C(rdram, ctx);
        goto after_5;
    // 0x802524F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
L_802524F4:
    // 0x802524F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802524F8:
    // 0x802524F8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802524FC: jr          $ra
    // 0x80252500: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80252500: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_8024B800_func_80252504(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80252504: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80252508: lhu         $t6, 0x358($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X358);
    // 0x8025250C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80252510: beq         $t6, $zero, L_80252554
    if (ctx->r14 == 0) {
        // 0x80252514: addiu       $v0, $v0, 0x3B0
        ctx->r2 = ADD32(ctx->r2, 0X3B0);
            goto L_80252554;
    }
    // 0x80252514: addiu       $v0, $v0, 0x3B0
    ctx->r2 = ADD32(ctx->r2, 0X3B0);
    // 0x80252518: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8025251C: lw          $t7, 0x398($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X398);
    // 0x80252520: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x80252524: lw          $t8, 0xCC($t7)
    ctx->r24 = MEM_W(ctx->r15, 0XCC);
    // 0x80252528: lw          $t9, 0x394($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X394);
    // 0x8025252C: lwc1        $f4, 0xC($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0XC);
    // 0x80252530: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x80252534: swc1        $f4, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->f4.u32l;
    // 0x80252538: lw          $t0, 0x398($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X398);
    // 0x8025253C: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x80252540: lw          $t1, 0xCC($t0)
    ctx->r9 = MEM_W(ctx->r8, 0XCC);
    // 0x80252544: lw          $t2, 0x394($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X394);
    // 0x80252548: lwc1        $f6, 0x4($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X4);
    // 0x8025254C: nop

    // 0x80252550: swc1        $f6, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->f6.u32l;
L_80252554:
    // 0x80252554: lhu         $t3, 0x0($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X0);
    // 0x80252558: nop

    // 0x8025255C: beq         $t3, $zero, L_8025259C
    if (ctx->r11 == 0) {
        // 0x80252560: nop
    
            goto L_8025259C;
    }
    // 0x80252560: nop

    // 0x80252564: lw          $t4, 0x40($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X40);
    // 0x80252568: lw          $t6, 0x3C($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X3C);
    // 0x8025256C: lw          $t5, 0xCC($t4)
    ctx->r13 = MEM_W(ctx->r12, 0XCC);
    // 0x80252570: nop

    // 0x80252574: lwc1        $f8, 0xC($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0XC);
    // 0x80252578: nop

    // 0x8025257C: swc1        $f8, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->f8.u32l;
    // 0x80252580: lw          $t7, 0x40($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X40);
    // 0x80252584: lw          $t9, 0x3C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X3C);
    // 0x80252588: lw          $t8, 0xCC($t7)
    ctx->r24 = MEM_W(ctx->r15, 0XCC);
    // 0x8025258C: nop

    // 0x80252590: lwc1        $f10, 0x4($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X4);
    // 0x80252594: nop

    // 0x80252598: swc1        $f10, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f10.u32l;
L_8025259C:
    // 0x8025259C: lhu         $t0, 0x58($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X58);
    // 0x802525A0: addiu       $v0, $v0, 0x58
    ctx->r2 = ADD32(ctx->r2, 0X58);
    // 0x802525A4: beq         $t0, $zero, L_802525E4
    if (ctx->r8 == 0) {
        // 0x802525A8: nop
    
            goto L_802525E4;
    }
    // 0x802525A8: nop

    // 0x802525AC: lw          $t1, 0x40($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X40);
    // 0x802525B0: lw          $t3, 0x3C($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X3C);
    // 0x802525B4: lw          $t2, 0xCC($t1)
    ctx->r10 = MEM_W(ctx->r9, 0XCC);
    // 0x802525B8: nop

    // 0x802525BC: lwc1        $f16, 0xC($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0XC);
    // 0x802525C0: nop

    // 0x802525C4: swc1        $f16, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->f16.u32l;
    // 0x802525C8: lw          $t4, 0x40($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X40);
    // 0x802525CC: lw          $t6, 0x3C($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X3C);
    // 0x802525D0: lw          $t5, 0xCC($t4)
    ctx->r13 = MEM_W(ctx->r12, 0XCC);
    // 0x802525D4: nop

    // 0x802525D8: lwc1        $f18, 0x4($t5)
    ctx->f18.u32l = MEM_W(ctx->r13, 0X4);
    // 0x802525DC: nop

    // 0x802525E0: swc1        $f18, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f18.u32l;
L_802525E4:
    // 0x802525E4: lhu         $t7, 0x58($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X58);
    // 0x802525E8: addiu       $v0, $v0, 0x58
    ctx->r2 = ADD32(ctx->r2, 0X58);
    // 0x802525EC: beq         $t7, $zero, L_8025262C
    if (ctx->r15 == 0) {
        // 0x802525F0: nop
    
            goto L_8025262C;
    }
    // 0x802525F0: nop

    // 0x802525F4: lw          $t8, 0x40($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X40);
    // 0x802525F8: lw          $t0, 0x3C($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X3C);
    // 0x802525FC: lw          $t9, 0xCC($t8)
    ctx->r25 = MEM_W(ctx->r24, 0XCC);
    // 0x80252600: nop

    // 0x80252604: lwc1        $f4, 0xC($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0XC);
    // 0x80252608: nop

    // 0x8025260C: swc1        $f4, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->f4.u32l;
    // 0x80252610: lw          $t1, 0x40($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X40);
    // 0x80252614: lw          $t3, 0x3C($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X3C);
    // 0x80252618: lw          $t2, 0xCC($t1)
    ctx->r10 = MEM_W(ctx->r9, 0XCC);
    // 0x8025261C: nop

    // 0x80252620: lwc1        $f6, 0x4($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X4);
    // 0x80252624: nop

    // 0x80252628: swc1        $f6, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->f6.u32l;
L_8025262C:
    // 0x8025262C: lhu         $t4, 0x58($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X58);
    // 0x80252630: addiu       $v0, $v0, 0x58
    ctx->r2 = ADD32(ctx->r2, 0X58);
    // 0x80252634: beq         $t4, $zero, L_80252674
    if (ctx->r12 == 0) {
        // 0x80252638: nop
    
            goto L_80252674;
    }
    // 0x80252638: nop

    // 0x8025263C: lw          $t5, 0x40($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X40);
    // 0x80252640: lw          $t7, 0x3C($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X3C);
    // 0x80252644: lw          $t6, 0xCC($t5)
    ctx->r14 = MEM_W(ctx->r13, 0XCC);
    // 0x80252648: nop

    // 0x8025264C: lwc1        $f8, 0xC($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0XC);
    // 0x80252650: nop

    // 0x80252654: swc1        $f8, 0xC($t7)
    MEM_W(0XC, ctx->r15) = ctx->f8.u32l;
    // 0x80252658: lw          $t8, 0x40($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X40);
    // 0x8025265C: lw          $t0, 0x3C($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X3C);
    // 0x80252660: lw          $t9, 0xCC($t8)
    ctx->r25 = MEM_W(ctx->r24, 0XCC);
    // 0x80252664: nop

    // 0x80252668: lwc1        $f10, 0x4($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X4);
    // 0x8025266C: nop

    // 0x80252670: swc1        $f10, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f10.u32l;
L_80252674:
    // 0x80252674: jr          $ra
    // 0x80252678: nop

    return;
    // 0x80252678: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8025267C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8025267C: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80252680: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80252684: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x80252688: addiu       $s0, $s0, 0xB7E
    ctx->r16 = ADD32(ctx->r16, 0XB7E);
    // 0x8025268C: lhu         $t6, 0x0($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X0);
    // 0x80252690: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x80252694: andi        $t7, $t6, 0x100
    ctx->r15 = ctx->r14 & 0X100;
    // 0x80252698: sw          $fp, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r30;
    // 0x8025269C: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x802526A0: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x802526A4: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x802526A8: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x802526AC: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x802526B0: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x802526B4: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x802526B8: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x802526BC: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x802526C0: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x802526C4: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x802526C8: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x802526CC: beq         $t7, $zero, L_80252808
    if (ctx->r15 == 0) {
        // 0x802526D0: swc1        $f20, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
            goto L_80252808;
    }
    // 0x802526D0: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x802526D4: lui         $fp, 0x8010
    ctx->r30 = S32(0X8010 << 16);
    // 0x802526D8: addiu       $fp, $fp, -0x3770
    ctx->r30 = ADD32(ctx->r30, -0X3770);
    // 0x802526DC: addiu       $t8, $fp, 0x7FFF
    ctx->r24 = ADD32(ctx->r30, 0X7FFF);
    // 0x802526E0: lbu         $t8, 0x9A3($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X9A3);
    // 0x802526E4: addiu       $s7, $zero, 0x5
    ctx->r23 = ADD32(0, 0X5);
    // 0x802526E8: bne         $s7, $t8, L_80252808
    if (ctx->r23 != ctx->r24) {
        // 0x802526EC: nop
    
            goto L_80252808;
    }
    // 0x802526EC: nop

    // 0x802526F0: jal         0x8007BAA0
    // 0x802526F4: nop

    func_8007BAA0(rdram, ctx);
        goto after_0;
    // 0x802526F4: nop

    after_0:
    // 0x802526F8: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802526FC: addiu       $v0, $v0, 0x53F8
    ctx->r2 = ADD32(ctx->r2, 0X53F8);
    // 0x80252700: lh          $t9, 0x4C($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X4C);
    // 0x80252704: nop

    // 0x80252708: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x8025270C: sh          $t0, 0x4C($v0)
    MEM_H(0X4C, ctx->r2) = ctx->r8;
    // 0x80252710: lh          $t1, 0x4C($v0)
    ctx->r9 = MEM_H(ctx->r2, 0X4C);
    // 0x80252714: nop

    // 0x80252718: bne         $t1, $zero, L_80252728
    if (ctx->r9 != 0) {
        // 0x8025271C: nop
    
            goto L_80252728;
    }
    // 0x8025271C: nop

    // 0x80252720: jal         0x80271980
    // 0x80252724: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    ovl_8024B800_func_80271980(rdram, ctx);
        goto after_1;
    // 0x80252724: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_1:
L_80252728:
    // 0x80252728: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x8025272C: lui         $s3, 0x8009
    ctx->r19 = S32(0X8009 << 16);
    // 0x80252730: addiu       $s3, $s3, 0x3B20
    ctx->r19 = ADD32(ctx->r19, 0X3B20);
    // 0x80252734: addiu       $v0, $v0, 0x4890
    ctx->r2 = ADD32(ctx->r2, 0X4890);
    // 0x80252738: lwc1        $f4, 0x1B94($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X1B94);
    // 0x8025273C: lw          $t2, 0x0($s3)
    ctx->r10 = MEM_W(ctx->r19, 0X0);
    // 0x80252740: nop

    // 0x80252744: swc1        $f4, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->f4.u32l;
    // 0x80252748: lw          $t3, 0x0($s3)
    ctx->r11 = MEM_W(ctx->r19, 0X0);
    // 0x8025274C: lwc1        $f6, 0x1B98($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X1B98);
    // 0x80252750: nop

    // 0x80252754: swc1        $f6, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->f6.u32l;
    // 0x80252758: lw          $t4, 0x0($s3)
    ctx->r12 = MEM_W(ctx->r19, 0X0);
    // 0x8025275C: lwc1        $f8, 0x1B9C($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X1B9C);
    // 0x80252760: jal         0x80053C7C
    // 0x80252764: swc1        $f8, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->f8.u32l;
    func_80053C7C(rdram, ctx);
        goto after_2;
    // 0x80252764: swc1        $f8, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->f8.u32l;
    after_2:
    // 0x80252768: jal         0x80252504
    // 0x8025276C: nop

    ovl_8024B800_func_80252504(rdram, ctx);
        goto after_3;
    // 0x8025276C: nop

    after_3:
    // 0x80252770: lui         $t5, 0x802C
    ctx->r13 = S32(0X802C << 16);
    // 0x80252774: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x80252778: lhu         $t6, 0x3A42($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X3A42);
    // 0x8025277C: lhu         $t5, 0x3A46($t5)
    ctx->r13 = MEM_HU(ctx->r13, 0X3A46);
    // 0x80252780: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80252784: bne         $t5, $t6, L_80252E40
    if (ctx->r13 != ctx->r14) {
        // 0x80252788: lw          $ra, 0x54($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X54);
            goto L_80252E40;
    }
    // 0x80252788: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x8025278C: sh          $zero, 0xB78($at)
    MEM_H(0XB78, ctx->r1) = 0;
    // 0x80252790: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80252794: sh          $zero, 0xB7A($at)
    MEM_H(0XB7A, ctx->r1) = 0;
    // 0x80252798: lw          $v1, 0x0($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X0);
    // 0x8025279C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x802527A0: lhu         $t7, 0xC0($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0XC0);
    // 0x802527A4: nop

    // 0x802527A8: andi        $t8, $t7, 0xFDFF
    ctx->r24 = ctx->r15 & 0XFDFF;
    // 0x802527AC: sh          $t8, 0xC0($v1)
    MEM_H(0XC0, ctx->r3) = ctx->r24;
    // 0x802527B0: lw          $t9, 0x0($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X0);
    // 0x802527B4: nop

    // 0x802527B8: sh          $zero, 0xCE($t9)
    MEM_H(0XCE, ctx->r25) = 0;
    // 0x802527BC: lw          $t0, 0x0($s3)
    ctx->r8 = MEM_W(ctx->r19, 0X0);
    // 0x802527C0: nop

    // 0x802527C4: sh          $zero, 0xD0($t0)
    MEM_H(0XD0, ctx->r8) = 0;
    // 0x802527C8: lw          $t1, 0x0($s3)
    ctx->r9 = MEM_W(ctx->r19, 0X0);
    // 0x802527CC: nop

    // 0x802527D0: sh          $zero, 0xDC($t1)
    MEM_H(0XDC, ctx->r9) = 0;
    // 0x802527D4: sh          $zero, 0xB4A($at)
    MEM_H(0XB4A, ctx->r1) = 0;
    // 0x802527D8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x802527DC: jal         0x8007C32C
    // 0x802527E0: sh          $zero, 0xB4C($at)
    MEM_H(0XB4C, ctx->r1) = 0;
    func_8007C32C(rdram, ctx);
        goto after_4;
    // 0x802527E0: sh          $zero, 0xB4C($at)
    MEM_H(0XB4C, ctx->r1) = 0;
    after_4:
    // 0x802527E4: lw          $t2, 0x0($s3)
    ctx->r10 = MEM_W(ctx->r19, 0X0);
    // 0x802527E8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802527EC: sw          $zero, 0x88($t2)
    MEM_W(0X88, ctx->r10) = 0;
    // 0x802527F0: jal         0x8027A77C
    // 0x802527F4: sb          $zero, 0x38DF($at)
    MEM_B(0X38DF, ctx->r1) = 0;
    ovl_8024B800_func_8027A77C(rdram, ctx);
        goto after_5;
    // 0x802527F4: sb          $zero, 0x38DF($at)
    MEM_B(0X38DF, ctx->r1) = 0;
    after_5:
    // 0x802527F8: lhu         $t3, 0x0($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X0);
    // 0x802527FC: nop

    // 0x80252800: andi        $t4, $t3, 0xBEFF
    ctx->r12 = ctx->r11 & 0XBEFF;
    // 0x80252804: sh          $t4, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r12;
L_80252808:
    // 0x80252808: lui         $s3, 0x8009
    ctx->r19 = S32(0X8009 << 16);
    // 0x8025280C: lui         $fp, 0x8010
    ctx->r30 = S32(0X8010 << 16);
    // 0x80252810: addiu       $fp, $fp, -0x3770
    ctx->r30 = ADD32(ctx->r30, -0X3770);
    // 0x80252814: addiu       $s3, $s3, 0x3B20
    ctx->r19 = ADD32(ctx->r19, 0X3B20);
    // 0x80252818: jal         0x80059868
    // 0x8025281C: addiu       $s7, $zero, 0x5
    ctx->r23 = ADD32(0, 0X5);
    func_80059868(rdram, ctx);
        goto after_6;
    // 0x8025281C: addiu       $s7, $zero, 0x5
    ctx->r23 = ADD32(0, 0X5);
    after_6:
    // 0x80252820: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80252824: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80252828: sh          $v0, -0x1B60($at)
    MEM_H(-0X1B60, ctx->r1) = ctx->r2;
    // 0x8025282C: addiu       $v1, $v1, 0x950
    ctx->r3 = ADD32(ctx->r3, 0X950);
    // 0x80252830: lhu         $t5, 0x4($v1)
    ctx->r13 = MEM_HU(ctx->r3, 0X4);
    // 0x80252834: lw          $t7, 0x70($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X70);
    // 0x80252838: lw          $t9, 0x74($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X74);
    // 0x8025283C: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x80252840: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80252844: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80252848: sh          $t6, 0x4($v1)
    MEM_H(0X4, ctx->r3) = ctx->r14;
    // 0x8025284C: sw          $t8, 0x70($v1)
    MEM_W(0X70, ctx->r3) = ctx->r24;
    // 0x80252850: jal         0x80064E4C
    // 0x80252854: sw          $t0, 0x74($v1)
    MEM_W(0X74, ctx->r3) = ctx->r8;
    func_80064E4C(rdram, ctx);
        goto after_7;
    // 0x80252854: sw          $t0, 0x74($v1)
    MEM_W(0X74, ctx->r3) = ctx->r8;
    after_7:
    // 0x80252858: jal         0x802A4F24
    // 0x8025285C: nop

    LOOKUP_FUNC(0x802A4F24)(rdram, ctx);
        goto after_8;
    // 0x8025285C: nop

    after_8:
    // 0x80252860: jal         0x80261CC0
    // 0x80252864: nop

    ovl_8024B800_func_80261CC0(rdram, ctx);
        goto after_9;
    // 0x80252864: nop

    after_9:
    // 0x80252868: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8025286C: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x80252870: addiu       $v1, $v1, 0xB20
    ctx->r3 = ADD32(ctx->r3, 0XB20);
    // 0x80252874: addiu       $t1, $t1, 0xA78
    ctx->r9 = ADD32(ctx->r9, 0XA78);
    // 0x80252878: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8025287C: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x80252880: addiu       $a0, $a0, 0x568
    ctx->r4 = ADD32(ctx->r4, 0X568);
    // 0x80252884: sw          $zero, 0x0($t1)
    MEM_W(0X0, ctx->r9) = 0;
    // 0x80252888: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8025288C: sw          $a0, 0xB1C($at)
    MEM_W(0XB1C, ctx->r1) = ctx->r4;
    // 0x80252890: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x80252894: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x80252898: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x8025289C: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x802528A0: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    // 0x802528A4: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802528A8: lui         $s4, 0x8012
    ctx->r20 = S32(0X8012 << 16);
    // 0x802528AC: lui         $s6, 0x8028
    ctx->r22 = S32(0X8028 << 16);
    // 0x802528B0: lwc1        $f21, -0x3F38($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, -0X3F38);
    // 0x802528B4: lwc1        $f20, -0x3F34($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X3F34);
    // 0x802528B8: addiu       $s6, $s6, -0x5308
    ctx->r22 = ADD32(ctx->r22, -0X5308);
    // 0x802528BC: addiu       $s4, $s4, -0x2CF0
    ctx->r20 = ADD32(ctx->r20, -0X2CF0);
    // 0x802528C0: addiu       $s5, $zero, 0xE
    ctx->r21 = ADD32(0, 0XE);
L_802528C4:
    // 0x802528C4: jal         0x8026A828
    // 0x802528C8: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    ovl_8024B800_func_8026A828(rdram, ctx);
        goto after_10;
    // 0x802528C8: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_10:
    // 0x802528CC: lbu         $v0, 0x8E0($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X8E0);
    // 0x802528D0: sh          $zero, 0x928($s4)
    MEM_H(0X928, ctx->r20) = 0;
    // 0x802528D4: beq         $v0, $zero, L_802528E0
    if (ctx->r2 == 0) {
        // 0x802528D8: addiu       $t3, $v0, -0x1
        ctx->r11 = ADD32(ctx->r2, -0X1);
            goto L_802528E0;
    }
    // 0x802528D8: addiu       $t3, $v0, -0x1
    ctx->r11 = ADD32(ctx->r2, -0X1);
    // 0x802528DC: sb          $t3, 0x8E0($s4)
    MEM_B(0X8E0, ctx->r20) = ctx->r11;
L_802528E0:
    // 0x802528E0: lw          $s0, 0x18($s4)
    ctx->r16 = MEM_W(ctx->r20, 0X18);
    // 0x802528E4: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_802528E8:
    if ((uint32_t)ctx->r16 == 0 || (uint32_t)ctx->r16 == 0x80000000u) { goto L_80252C04; }
    // 0x802528E8: lhu         $t4, 0xC($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0XC);
    // 0x802528EC: nop

    // 0x802528F0: beq         $t4, $zero, L_80252C04
    if (ctx->r12 == 0) {
        // 0x802528F4: nop
    
            goto L_80252C04;
    }
    // 0x802528F4: nop

    // 0x802528F8: jal         0x8027756C
    // 0x802528FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8027756C(rdram, ctx);
        goto after_11;
    // 0x802528FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x80252900: jal         0x8024E898
    // 0x80252904: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8024E898(rdram, ctx);
        goto after_12;
    // 0x80252904: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x80252908: addiu       $t5, $fp, 0x7FFF
    ctx->r13 = ADD32(ctx->r30, 0X7FFF);
    // 0x8025290C: lbu         $t5, 0x9A3($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X9A3);
    // 0x80252910: andi        $s1, $v0, 0xFFFF
    ctx->r17 = ctx->r2 & 0XFFFF;
    // 0x80252914: bne         $s7, $t5, L_8025294C
    if (ctx->r23 != ctx->r13) {
        // 0x80252918: nop
    
            goto L_8025294C;
    }
    // 0x80252918: nop

    // 0x8025291C: jal         0x802791D0
    // 0x80252920: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_802791D0(rdram, ctx);
        goto after_13;
    // 0x80252920: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x80252924: lhu         $t6, 0xE($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0XE);
    // 0x80252928: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8025292C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80252930: addu        $t8, $s6, $t7
    ctx->r24 = ADD32(ctx->r22, ctx->r15);
    // 0x80252934: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x80252938: nop

    // 0x8025293C: jalr        $t9
    // 0x80252940: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x80252940: nop

    after_14:
    // 0x80252944: b           L_80252970
    // 0x80252948: lhu         $t2, 0x12($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X12);
        goto L_80252970;
    // 0x80252948: lhu         $t2, 0x12($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X12);
L_8025294C:
    // 0x8025294C: lh          $t0, 0x2E($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X2E);
    // 0x80252950: lh          $t1, 0x30($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X30);
    // 0x80252954: mtc1        $t0, $f10
    ctx->f10.u32l = ctx->r8;
    // 0x80252958: mtc1        $t1, $f18
    ctx->f18.u32l = ctx->r9;
    // 0x8025295C: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80252960: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80252964: swc1        $f16, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->f16.u32l;
    // 0x80252968: swc1        $f4, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f4.u32l;
    // 0x8025296C: lhu         $t2, 0x12($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X12);
L_80252970:
    // 0x80252970: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80252974: andi        $t3, $t2, 0x4
    ctx->r11 = ctx->r10 & 0X4;
    // 0x80252978: beq         $t3, $zero, L_80252988
    if (ctx->r11 == 0) {
        // 0x8025297C: nop
    
            goto L_80252988;
    }
    // 0x8025297C: nop

    // 0x80252980: jal         0x8024F1C4
    // 0x80252984: andi        $a1, $s1, 0xFFFF
    ctx->r5 = ctx->r17 & 0XFFFF;
    ovl_8024B800_func_8024F1C4(rdram, ctx);
        goto after_15;
    // 0x80252984: andi        $a1, $s1, 0xFFFF
    ctx->r5 = ctx->r17 & 0XFFFF;
    after_15:
L_80252988:
    // 0x80252988: lhu         $t4, 0x16($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X16);
    // 0x8025298C: nop

    // 0x80252990: andi        $t5, $t4, 0x100
    ctx->r13 = ctx->r12 & 0X100;
    // 0x80252994: beq         $t5, $zero, L_802529AC
    if (ctx->r13 == 0) {
        // 0x80252998: nop
    
            goto L_802529AC;
    }
    // 0x80252998: nop

    // 0x8025299C: jal         0x802737A0
    // 0x802529A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_802737A0(rdram, ctx);
        goto after_16;
    // 0x802529A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x802529A4: b           L_80252A34
    // 0x802529A8: lwc1        $f6, 0x44($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X44);
        goto L_80252A34;
    // 0x802529A8: lwc1        $f6, 0x44($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X44);
L_802529AC:
    // 0x802529AC: lhu         $t6, 0x12($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X12);
    // 0x802529B0: nop

    // 0x802529B4: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x802529B8: bne         $t7, $zero, L_80252A30
    if (ctx->r15 != 0) {
        // 0x802529BC: nop
    
            goto L_80252A30;
    }
    // 0x802529BC: nop

    // 0x802529C0: lw          $v1, 0x0($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X0);
    // 0x802529C4: nop

    // 0x802529C8: lw          $a0, 0x88($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X88);
    // 0x802529CC: nop

    // 0x802529D0: bne         $s0, $a0, L_80252A30
    if (ctx->r16 != ctx->r4) {
        // 0x802529D4: nop
    
            goto L_80252A30;
    }
    // 0x802529D4: nop

    // 0x802529D8: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x802529DC: nop

    // 0x802529E0: andi        $t8, $v0, 0x80
    ctx->r24 = ctx->r2 & 0X80;
    // 0x802529E4: bne         $t8, $zero, L_80252A30
    if (ctx->r24 != 0) {
        // 0x802529E8: andi        $t9, $v0, 0x40
        ctx->r25 = ctx->r2 & 0X40;
            goto L_80252A30;
    }
    // 0x802529E8: andi        $t9, $v0, 0x40
    ctx->r25 = ctx->r2 & 0X40;
    // 0x802529EC: beq         $t9, $zero, L_80252A30
    if (ctx->r25 == 0) {
        // 0x802529F0: nop
    
            goto L_80252A30;
    }
    // 0x802529F0: nop

    // 0x802529F4: lw          $t0, 0x84($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X84);
    // 0x802529F8: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    // 0x802529FC: bne         $t0, $zero, L_80252A28
    if (ctx->r8 != 0) {
        // 0x80252A00: nop
    
            goto L_80252A28;
    }
    // 0x80252A00: nop

    // 0x80252A04: bne         $s0, $a0, L_80252A28
    if (ctx->r16 != ctx->r4) {
        // 0x80252A08: ori         $t1, $v0, 0x80
        ctx->r9 = ctx->r2 | 0X80;
            goto L_80252A28;
    }
    // 0x80252A08: ori         $t1, $v0, 0x80
    ctx->r9 = ctx->r2 | 0X80;
    // 0x80252A0C: sh          $t1, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r9;
    // 0x80252A10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80252A14: addiu       $a1, $zero, 0xAA
    ctx->r5 = ADD32(0, 0XAA);
    // 0x80252A18: jal         0x80272D3C
    // 0x80252A1C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_8024B800_func_80272D3C(rdram, ctx);
        goto after_17;
    // 0x80252A1C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_17:
    // 0x80252A20: b           L_80252A34
    // 0x80252A24: lwc1        $f6, 0x44($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X44);
        goto L_80252A34;
    // 0x80252A24: lwc1        $f6, 0x44($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X44);
L_80252A28:
    // 0x80252A28: jal         0x8024BC08
    // 0x80252A2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8024BC08(rdram, ctx);
        goto after_18;
    // 0x80252A2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
L_80252A30:
    // 0x80252A30: lwc1        $f6, 0x44($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X44);
L_80252A34:
    // 0x80252A34: lw          $t2, 0xCC($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XCC);
    // 0x80252A38: nop

    // 0x80252A3C: swc1        $f6, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->f6.u32l;
    // 0x80252A40: lw          $t3, 0xCC($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XCC);
    // 0x80252A44: lwc1        $f8, 0x48($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X48);
    // 0x80252A48: nop

    // 0x80252A4C: swc1        $f8, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->f8.u32l;
    // 0x80252A50: lw          $t4, 0xCC($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XCC);
    // 0x80252A54: lwc1        $f10, 0x4C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x80252A58: nop

    // 0x80252A5C: swc1        $f10, 0xC($t4)
    MEM_W(0XC, ctx->r12) = ctx->f10.u32l;
    // 0x80252A60: lwc1        $f16, 0x8C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x80252A64: lw          $t5, 0xCC($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XCC);
    // 0x80252A68: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x80252A6C: mul.d       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f20.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f20.d);
    // 0x80252A70: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x80252A74: swc1        $f6, 0x14($t5)
    MEM_W(0X14, ctx->r13) = ctx->f6.u32l;
    // 0x80252A78: lhu         $t6, 0x12($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X12);
    // 0x80252A7C: lhu         $t8, 0x14($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X14);
    // 0x80252A80: lhu         $t0, 0x16($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X16);
    // 0x80252A84: lhu         $t2, 0x18($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X18);
    // 0x80252A88: lhu         $t4, 0x20($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X20);
    // 0x80252A8C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80252A90: andi        $t7, $t6, 0xFE4F
    ctx->r15 = ctx->r14 & 0XFE4F;
    // 0x80252A94: andi        $t9, $t8, 0xD69F
    ctx->r25 = ctx->r24 & 0XD69F;
    // 0x80252A98: andi        $t1, $t0, 0x3F7F
    ctx->r9 = ctx->r8 & 0X3F7F;
    // 0x80252A9C: andi        $t3, $t2, 0xFF8F
    ctx->r11 = ctx->r10 & 0XFF8F;
    // 0x80252AA0: andi        $t5, $t4, 0xEDFF
    ctx->r13 = ctx->r12 & 0XEDFF;
    // 0x80252AA4: sh          $t7, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r15;
    // 0x80252AA8: sh          $t9, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r25;
    // 0x80252AAC: sh          $t1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r9;
    // 0x80252AB0: sh          $t3, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r11;
    // 0x80252AB4: sh          $t5, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r13;
    // 0x80252AB8: sb          $zero, 0x8($s0)
    MEM_B(0X8, ctx->r16) = 0;
    // 0x80252ABC: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x80252AC0: beq         $v0, $zero, L_80252AD0
    if (ctx->r2 == 0) {
        // 0x80252AC4: sh          $zero, 0x3A($s0)
        MEM_H(0X3A, ctx->r16) = 0;
            goto L_80252AD0;
    }
    // 0x80252AC4: sh          $zero, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = 0;
    // 0x80252AC8: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x80252ACC: sb          $t6, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r14;
L_80252AD0:
    // 0x80252AD0: jal         0x80271BE0
    // 0x80252AD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80271BE0(rdram, ctx);
        goto after_19;
    // 0x80252AD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
    // 0x80252AD8: lhu         $t7, 0x12($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X12);
    // 0x80252ADC: nop

    // 0x80252AE0: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x80252AE4: beq         $t8, $zero, L_80252B28
    if (ctx->r24 == 0) {
        // 0x80252AE8: nop
    
            goto L_80252B28;
    }
    // 0x80252AE8: nop

    // 0x80252AEC: lw          $t9, 0xC4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC4);
    // 0x80252AF0: lwc1        $f8, 0x4C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x80252AF4: lw          $v0, 0x3C($t9)
    ctx->r2 = MEM_W(ctx->r25, 0X3C);
    // 0x80252AF8: nop

    // 0x80252AFC: swc1        $f8, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f8.u32l;
    // 0x80252B00: lwc1        $f10, 0x44($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X44);
    // 0x80252B04: nop

    // 0x80252B08: swc1        $f10, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f10.u32l;
    // 0x80252B0C: lw          $v1, 0x0($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X0);
    // 0x80252B10: nop

    // 0x80252B14: lw          $t0, 0x90($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X90);
    // 0x80252B18: nop

    // 0x80252B1C: bne         $s0, $t0, L_80252B28
    if (ctx->r16 != ctx->r8) {
        // 0x80252B20: nop
    
            goto L_80252B28;
    }
    // 0x80252B20: nop

    // 0x80252B24: sw          $zero, 0x90($v1)
    MEM_W(0X90, ctx->r3) = 0;
L_80252B28:
    // 0x80252B28: lw          $t1, 0xD8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XD8);
    // 0x80252B2C: nop

    // 0x80252B30: lbu         $t2, 0x1D($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X1D);
    // 0x80252B34: nop

    // 0x80252B38: andi        $t3, $t2, 0xE0
    ctx->r11 = ctx->r10 & 0XE0;
    // 0x80252B3C: beq         $t3, $zero, L_80252C04
    if (ctx->r11 == 0) {
        // 0x80252B40: nop
    
            goto L_80252C04;
    }
    // 0x80252B40: nop

    // 0x80252B44: lhu         $v0, 0x20($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X20);
    // 0x80252B48: nop

    // 0x80252B4C: andi        $t4, $v0, 0x2
    ctx->r12 = ctx->r2 & 0X2;
    // 0x80252B50: beq         $t4, $zero, L_80252BB0
    if (ctx->r12 == 0) {
        // 0x80252B54: nop
    
            goto L_80252BB0;
    }
    // 0x80252B54: nop

    // 0x80252B58: lb          $t5, 0x5($s0)
    ctx->r13 = MEM_B(ctx->r16, 0X5);
    // 0x80252B5C: andi        $t0, $v0, 0xFFFD
    ctx->r8 = ctx->r2 & 0XFFFD;
    // 0x80252B60: bne         $t5, $zero, L_80252BA8
    if (ctx->r13 != 0) {
        // 0x80252B64: nop
    
            goto L_80252BA8;
    }
    // 0x80252B64: nop

    // 0x80252B68: lhu         $t6, 0x16($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X16);
    // 0x80252B6C: nop

    // 0x80252B70: andi        $t7, $t6, 0x4
    ctx->r15 = ctx->r14 & 0X4;
    // 0x80252B74: bne         $t7, $zero, L_80252BA8
    if (ctx->r15 != 0) {
        // 0x80252B78: nop
    
            goto L_80252BA8;
    }
    // 0x80252B78: nop

    // 0x80252B7C: lwc1        $f16, 0x84($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X84);
    // 0x80252B80: nop

    // 0x80252B84: c.lt.s      $f16, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f16.fl < ctx->f22.fl;
    // 0x80252B88: nop

    // 0x80252B8C: bc1t        L_80252BA8
    if (c1cs) {
        // 0x80252B90: nop
    
            goto L_80252BA8;
    }
    // 0x80252B90: nop

    // 0x80252B94: lhu         $t8, 0x14($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X14);
    // 0x80252B98: nop

    // 0x80252B9C: andi        $t9, $t8, 0x400
    ctx->r25 = ctx->r24 & 0X400;
    // 0x80252BA0: beq         $t9, $zero, L_80252C04
    if (ctx->r25 == 0) {
        // 0x80252BA4: nop
    
            goto L_80252C04;
    }
    // 0x80252BA4: nop

L_80252BA8:
    // 0x80252BA8: b           L_80252C04
    // 0x80252BAC: sh          $t0, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r8;
        goto L_80252C04;
    // 0x80252BAC: sh          $t0, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r8;
L_80252BB0:
    // 0x80252BB0: lwc1        $f18, 0x84($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X84);
    // 0x80252BB4: nop

    // 0x80252BB8: c.lt.s      $f24, $f18
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f24.fl < ctx->f18.fl;
    // 0x80252BBC: nop

    // 0x80252BC0: bc1f        L_80252C04
    if (!c1cs) {
        // 0x80252BC4: nop
    
            goto L_80252C04;
    }
    // 0x80252BC4: nop

    // 0x80252BC8: lb          $t1, 0x5($s0)
    ctx->r9 = MEM_B(ctx->r16, 0X5);
    // 0x80252BCC: nop

    // 0x80252BD0: bne         $t1, $zero, L_80252C04
    if (ctx->r9 != 0) {
        // 0x80252BD4: nop
    
            goto L_80252C04;
    }
    // 0x80252BD4: nop

    // 0x80252BD8: lhu         $t2, 0x16($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X16);
    // 0x80252BDC: nop

    // 0x80252BE0: andi        $t3, $t2, 0x4
    ctx->r11 = ctx->r10 & 0X4;
    // 0x80252BE4: bne         $t3, $zero, L_80252C04
    if (ctx->r11 != 0) {
        // 0x80252BE8: nop
    
            goto L_80252C04;
    }
    // 0x80252BE8: nop

    // 0x80252BEC: lhu         $t4, 0x14($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X14);
    // 0x80252BF0: ori         $t6, $v0, 0x2
    ctx->r14 = ctx->r2 | 0X2;
    // 0x80252BF4: andi        $t5, $t4, 0x400
    ctx->r13 = ctx->r12 & 0X400;
    // 0x80252BF8: bne         $t5, $zero, L_80252C04
    if (ctx->r13 != 0) {
        // 0x80252BFC: nop
    
            goto L_80252C04;
    }
    // 0x80252BFC: nop

    // 0x80252C00: sh          $t6, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r14;
L_80252C04:
    // 0x80252C04: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80252C08: bne         $s2, $s5, L_802528E8
    if (ctx->r18 != ctx->r21) {
        // 0x80252C0C: addiu       $s0, $s0, 0xF8
        ctx->r16 = ADD32(ctx->r16, 0XF8);
            goto L_802528E8;
    }
    // 0x80252C0C: addiu       $s0, $s0, 0xF8
    ctx->r16 = ADD32(ctx->r16, 0XF8);
    // 0x80252C10: lhu         $v0, 0x8($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X8);
    // 0x80252C14: nop

    // 0x80252C18: andi        $t7, $v0, 0x4
    ctx->r15 = ctx->r2 & 0X4;
    // 0x80252C1C: beq         $t7, $zero, L_80252C98
    if (ctx->r15 == 0) {
        // 0x80252C20: andi        $t8, $v0, 0xFFFB
        ctx->r24 = ctx->r2 & 0XFFFB;
            goto L_80252C98;
    }
    // 0x80252C20: andi        $t8, $v0, 0xFFFB
    ctx->r24 = ctx->r2 & 0XFFFB;
    // 0x80252C24: lw          $s0, 0x18($s4)
    ctx->r16 = MEM_W(ctx->r20, 0X18);
    // 0x80252C28: sh          $t8, 0x8($s4)
    MEM_H(0X8, ctx->r20) = ctx->r24;
    // 0x80252C2C: lhu         $t9, 0x12($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X12);
    // 0x80252C30: nop

    // 0x80252C34: andi        $t0, $t9, 0x2
    ctx->r8 = ctx->r25 & 0X2;
    // 0x80252C38: bne         $t0, $zero, L_80252C98
    if (ctx->r8 != 0) {
        // 0x80252C3C: nop
    
            goto L_80252C98;
    }
    // 0x80252C3C: nop

    // 0x80252C40: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x80252C44: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x80252C48: lhu         $t2, 0x8($t1)
    ctx->r10 = MEM_HU(ctx->r9, 0X8);
    // 0x80252C4C: addiu       $a2, $a2, -0x2680
    ctx->r6 = ADD32(ctx->r6, -0X2680);
    // 0x80252C50: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x80252C54: beq         $t3, $zero, L_80252C68
    if (ctx->r11 == 0) {
        // 0x80252C58: nop
    
            goto L_80252C68;
    }
    // 0x80252C58: nop

    // 0x80252C5C: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x80252C60: b           L_80252C68
    // 0x80252C64: addiu       $a2, $a2, -0x2670
    ctx->r6 = ADD32(ctx->r6, -0X2670);
        goto L_80252C68;
    // 0x80252C64: addiu       $a2, $a2, -0x2670
    ctx->r6 = ADD32(ctx->r6, -0X2670);
L_80252C68:
    // 0x80252C68: lwc1        $f12, 0x4C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x80252C6C: lwc1        $f14, 0x44($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X44);
    // 0x80252C70: jal         0x8027A184
    // 0x80252C74: nop

    ovl_8024B800_func_8027A184(rdram, ctx);
        goto after_20;
    // 0x80252C74: nop

    after_20:
    // 0x80252C78: bne         $v0, $zero, L_80252C98
    if (ctx->r2 != 0) {
        // 0x80252C7C: nop
    
            goto L_80252C98;
    }
    // 0x80252C7C: nop

    // 0x80252C80: jal         0x800681E8
    // 0x80252C84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800681E8(rdram, ctx);
        goto after_21;
    // 0x80252C84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_21:
    // 0x80252C88: bne         $v0, $zero, L_80252C98
    if (ctx->r2 != 0) {
        // 0x80252C8C: nop
    
            goto L_80252C98;
    }
    // 0x80252C8C: nop

    // 0x80252C90: jal         0x800683BC
    // 0x80252C94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800683BC(rdram, ctx);
        goto after_22;
    // 0x80252C94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_22:
L_80252C98:
    // 0x80252C98: jal         0x8027A4C4
    // 0x80252C9C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    ovl_8024B800_func_8027A4C4(rdram, ctx);
        goto after_23;
    // 0x80252C9C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_23:
    // 0x80252CA0: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x80252CA4: addiu       $t4, $t4, -0x17C8
    ctx->r12 = ADD32(ctx->r12, -0X17C8);
    // 0x80252CA8: addiu       $s4, $s4, 0xA94
    ctx->r20 = ADD32(ctx->r20, 0XA94);
    // 0x80252CAC: bne         $s4, $t4, L_802528C4
    if (ctx->r20 != ctx->r12) {
        // 0x80252CB0: nop
    
            goto L_802528C4;
    }
    // 0x80252CB0: nop

    // 0x80252CB4: addiu       $t5, $fp, 0x7FFF
    ctx->r13 = ADD32(ctx->r30, 0X7FFF);
    // 0x80252CB8: lbu         $t5, 0x9A3($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X9A3);
    // 0x80252CBC: nop

    // 0x80252CC0: bne         $s7, $t5, L_80252E40
    if (ctx->r23 != ctx->r13) {
        // 0x80252CC4: lw          $ra, 0x54($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X54);
            goto L_80252E40;
    }
    // 0x80252CC4: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x80252CC8: jal         0x80279BC4
    // 0x80252CCC: nop

    ovl_8024B800_func_80279BC4(rdram, ctx);
        goto after_24;
    // 0x80252CCC: nop

    after_24:
    // 0x80252CD0: jal         0x80272FE0
    // 0x80252CD4: nop

    ovl_8024B800_func_80272FE0(rdram, ctx);
        goto after_25;
    // 0x80252CD4: nop

    after_25:
    // 0x80252CD8: jal         0x80054DC4
    // 0x80252CDC: nop

    func_80054DC4(rdram, ctx);
        goto after_26;
    // 0x80252CDC: nop

    after_26:
    // 0x80252CE0: jal         0x8004F8BC
    // 0x80252CE4: nop

    func_8004F8BC(rdram, ctx);
        goto after_27;
    // 0x80252CE4: nop

    after_27:
    // 0x80252CE8: jal         0x80277118
    // 0x80252CEC: nop

    ovl_8024B800_func_80277118(rdram, ctx);
        goto after_28;
    // 0x80252CEC: nop

    after_28:
    // 0x80252CF0: jal         0x80277A64
    // 0x80252CF4: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    ovl_8024B800_func_80277A64(rdram, ctx);
        goto after_29;
    // 0x80252CF4: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    after_29:
    // 0x80252CF8: beq         $s1, $zero, L_80252D58
    if (ctx->r17 == 0) {
        // 0x80252CFC: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_80252D58;
    }
    // 0x80252CFC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80252D00: beq         $v0, $zero, L_80252D18
    if (ctx->r2 == 0) {
        // 0x80252D04: nop
    
            goto L_80252D18;
    }
    // 0x80252D04: nop

    // 0x80252D08: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80252D0C: nop

    // 0x80252D10: bne         $v0, $a0, L_80252D28
    if (ctx->r2 != ctx->r4) {
        // 0x80252D14: nop
    
            goto L_80252D28;
    }
    // 0x80252D14: nop

L_80252D18:
    // 0x80252D18: jal         0x80251580
    // 0x80252D1C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_8024B800_func_80251580(rdram, ctx);
        goto after_30;
    // 0x80252D1C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_30:
    // 0x80252D20: b           L_80252D90
    // 0x80252D24: nop

        goto L_80252D90;
    // 0x80252D24: nop

L_80252D28:
    // 0x80252D28: jal         0x80276BB0
    // 0x80252D2C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_8024B800_func_80276BB0(rdram, ctx);
        goto after_31;
    // 0x80252D2C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_31:
    // 0x80252D30: beq         $v0, $zero, L_80252D48
    if (ctx->r2 == 0) {
        // 0x80252D34: nop
    
            goto L_80252D48;
    }
    // 0x80252D34: nop

    // 0x80252D38: jal         0x80251580
    // 0x80252D3C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_8024B800_func_80251580(rdram, ctx);
        goto after_32;
    // 0x80252D3C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_32:
    // 0x80252D40: b           L_80252D90
    // 0x80252D44: nop

        goto L_80252D90;
    // 0x80252D44: nop

L_80252D48:
    // 0x80252D48: jal         0x8024D288
    // 0x80252D4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8024D288(rdram, ctx);
        goto after_33;
    // 0x80252D4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_33:
    // 0x80252D50: b           L_80252D90
    // 0x80252D54: nop

        goto L_80252D90;
    // 0x80252D54: nop

L_80252D58:
    // 0x80252D58: beq         $v0, $zero, L_80252D70
    if (ctx->r2 == 0) {
        // 0x80252D5C: nop
    
            goto L_80252D70;
    }
    // 0x80252D5C: nop

    // 0x80252D60: jal         0x8024D288
    // 0x80252D64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8024D288(rdram, ctx);
        goto after_34;
    // 0x80252D64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_34:
    // 0x80252D68: b           L_80252D90
    // 0x80252D6C: nop

        goto L_80252D90;
    // 0x80252D6C: nop

L_80252D70:
    // 0x80252D70: lw          $t6, 0x0($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X0);
    // 0x80252D74: nop

    // 0x80252D78: lw          $t7, 0x90($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X90);
    // 0x80252D7C: nop

    // 0x80252D80: beq         $t7, $zero, L_80252D90
    if (ctx->r15 == 0) {
        // 0x80252D84: nop
    
            goto L_80252D90;
    }
    // 0x80252D84: nop

    // 0x80252D88: jal         0x8025238C
    // 0x80252D8C: nop

    ovl_8024B800_func_8025238C(rdram, ctx);
        goto after_35;
    // 0x80252D8C: nop

    after_35:
L_80252D90:
    // 0x80252D90: lui         $v1, 0x8028
    ctx->r3 = S32(0X8028 << 16);
    // 0x80252D94: addiu       $v1, $v1, -0x1B5E
    ctx->r3 = ADD32(ctx->r3, -0X1B5E);
    // 0x80252D98: lhu         $t8, 0x0($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X0);
    // 0x80252D9C: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x80252DA0: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80252DA4: andi        $v0, $t9, 0xFFFF
    ctx->r2 = ctx->r25 & 0XFFFF;
    // 0x80252DA8: slti        $at, $v0, 0x1C
    ctx->r1 = SIGNED(ctx->r2) < 0X1C ? 1 : 0;
    // 0x80252DAC: bne         $at, $zero, L_80252DBC
    if (ctx->r1 != 0) {
        // 0x80252DB0: sh          $t9, 0x0($v1)
        MEM_H(0X0, ctx->r3) = ctx->r25;
            goto L_80252DBC;
    }
    // 0x80252DB0: sh          $t9, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r25;
    // 0x80252DB4: sh          $zero, 0x0($v1)
    MEM_H(0X0, ctx->r3) = 0;
    // 0x80252DB8: andi        $v0, $zero, 0xFFFF
    ctx->r2 = 0 & 0XFFFF;
L_80252DBC:
    // 0x80252DBC: sll         $t0, $v0, 5
    ctx->r8 = S32(ctx->r2 << 5);
    // 0x80252DC0: subu        $t0, $t0, $v0
    ctx->r8 = SUB32(ctx->r8, ctx->r2);
    // 0x80252DC4: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x80252DC8: addiu       $t1, $t1, -0x17C8
    ctx->r9 = ADD32(ctx->r9, -0X17C8);
    // 0x80252DCC: addu        $s0, $t0, $t1
    ctx->r16 = ADD32(ctx->r8, ctx->r9);
    // 0x80252DD0: lhu         $t2, 0xC($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0XC);
    // 0x80252DD4: nop

    // 0x80252DD8: beq         $t2, $zero, L_80252DE8
    if (ctx->r10 == 0) {
        // 0x80252DDC: nop
    
            goto L_80252DE8;
    }
    // 0x80252DDC: nop

    // 0x80252DE0: jal         0x80275364
    // 0x80252DE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80275364(rdram, ctx);
        goto after_36;
    // 0x80252DE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_36:
L_80252DE8:
    // 0x80252DE8: jal         0x80051F58
    // 0x80252DEC: nop

    func_80051F58(rdram, ctx);
        goto after_37;
    // 0x80252DEC: nop

    after_37:
    // 0x80252DF0: jal         0x800501FC
    // 0x80252DF4: nop

    func_800501FC(rdram, ctx);
        goto after_38;
    // 0x80252DF4: nop

    after_38:
    // 0x80252DF8: jal         0x8004E7CC
    // 0x80252DFC: nop

    func_8004E7CC(rdram, ctx);
        goto after_39;
    // 0x80252DFC: nop

    after_39:
    // 0x80252E00: lw          $v1, 0x0($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X0);
    // 0x80252E04: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x80252E08: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x80252E0C: addiu       $v0, $v0, 0x4890
    ctx->r2 = ADD32(ctx->r2, 0X4890);
    // 0x80252E10: swc1        $f4, 0x1B94($v0)
    MEM_W(0X1B94, ctx->r2) = ctx->f4.u32l;
    // 0x80252E14: lwc1        $f6, 0x4($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X4);
    // 0x80252E18: nop

    // 0x80252E1C: swc1        $f6, 0x1B98($v0)
    MEM_W(0X1B98, ctx->r2) = ctx->f6.u32l;
    // 0x80252E20: lwc1        $f8, 0x8($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X8);
    // 0x80252E24: jal         0x80053C7C
    // 0x80252E28: swc1        $f8, 0x1B9C($v0)
    MEM_W(0X1B9C, ctx->r2) = ctx->f8.u32l;
    func_80053C7C(rdram, ctx);
        goto after_40;
    // 0x80252E28: swc1        $f8, 0x1B9C($v0)
    MEM_W(0X1B9C, ctx->r2) = ctx->f8.u32l;
    after_40:
    // 0x80252E2C: jal         0x80054180
    // 0x80252E30: nop

    func_80054180(rdram, ctx);
        goto after_41;
    // 0x80252E30: nop

    after_41:
    // 0x80252E34: jal         0x8006448C
    // 0x80252E38: nop

    func_8006448C(rdram, ctx);
        goto after_42;
    // 0x80252E38: nop

    after_42:
    // 0x80252E3C: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
L_80252E40:
    // 0x80252E40: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80252E44: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80252E48: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80252E4C: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80252E50: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x80252E54: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80252E58: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80252E5C: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80252E60: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x80252E64: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x80252E68: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x80252E6C: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x80252E70: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x80252E74: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x80252E78: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x80252E7C: jr          $ra
    // 0x80252E80: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x80252E80: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void ovl_8024B800_func_80252E84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80252E84: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80252E88: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80252E8C: jal         0x80275364
    // 0x80252E90: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_8024B800_func_80275364(rdram, ctx);
        goto after_0;
    // 0x80252E90: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80252E94: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80252E98: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80252E9C: lwc1        $f4, 0x88($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X88);
    // 0x80252EA0: lwc1        $f9, -0x3F30($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X3F30);
    // 0x80252EA4: lwc1        $f8, -0x3F2C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X3F2C);
    // 0x80252EA8: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80252EAC: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x80252EB0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80252EB4: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x80252EB8: jal         0x8024BC08
    // 0x80252EBC: swc1        $f16, 0x8C($a0)
    MEM_W(0X8C, ctx->r4) = ctx->f16.u32l;
    ovl_8024B800_func_8024BC08(rdram, ctx);
        goto after_1;
    // 0x80252EBC: swc1        $f16, 0x8C($a0)
    MEM_W(0X8C, ctx->r4) = ctx->f16.u32l;
    after_1:
    // 0x80252EC0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80252EC4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80252EC8: lhu         $t6, 0x2C($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X2C);
    // 0x80252ECC: addiu       $v0, $zero, 0x1F8
    ctx->r2 = ADD32(0, 0X1F8);
    // 0x80252ED0: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x80252ED4: beq         $t7, $zero, L_80252EE4
    if (ctx->r15 == 0) {
        // 0x80252ED8: nop
    
            goto L_80252EE4;
    }
    // 0x80252ED8: nop

    // 0x80252EDC: b           L_80252EE4
    // 0x80252EE0: addiu       $v0, $zero, 0x1F7
    ctx->r2 = ADD32(0, 0X1F7);
        goto L_80252EE4;
    // 0x80252EE0: addiu       $v0, $zero, 0x1F7
    ctx->r2 = ADD32(0, 0X1F7);
L_80252EE4:
    // 0x80252EE4: jal         0x80272D3C
    // 0x80252EE8: andi        $a1, $v0, 0xFFFF
    ctx->r5 = ctx->r2 & 0XFFFF;
    ovl_8024B800_func_80272D3C(rdram, ctx);
        goto after_2;
    // 0x80252EE8: andi        $a1, $v0, 0xFFFF
    ctx->r5 = ctx->r2 & 0XFFFF;
    after_2:
    // 0x80252EEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80252EF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80252EF4: jr          $ra
    // 0x80252EF8: nop

    return;
    // 0x80252EF8: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80252EFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80252EFC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80252F00: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80252F04: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80252F08: lhu         $v0, 0x10($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X10);
    // 0x80252F0C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80252F10: beq         $v0, $zero, L_80252F28
    if (ctx->r2 == 0) {
        // 0x80252F14: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_80252F28;
    }
    // 0x80252F14: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80252F18: beq         $v0, $at, L_80252F9C
    if (ctx->r2 == ctx->r1) {
        // 0x80252F1C: nop
    
            goto L_80252F9C;
    }
    // 0x80252F1C: nop

    // 0x80252F20: b           L_80253028
    // 0x80252F24: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80253028;
    // 0x80252F24: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80252F28:
    // 0x80252F28: jal         0x80275364
    // 0x80252F2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80275364(rdram, ctx);
        goto after_0;
    // 0x80252F2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x80252F30: lw          $t6, 0xC8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC8);
    // 0x80252F34: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80252F38: lhu         $t7, 0x8($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X8);
    // 0x80252F3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80252F40: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x80252F44: beq         $t8, $zero, L_80252F64
    if (ctx->r24 == 0) {
        // 0x80252F48: addiu       $a1, $zero, 0x1F7
        ctx->r5 = ADD32(0, 0X1F7);
            goto L_80252F64;
    }
    // 0x80252F48: addiu       $a1, $zero, 0x1F7
    ctx->r5 = ADD32(0, 0X1F7);
    // 0x80252F4C: mtc1        $zero, $f5
    ctx->f_odd[(5 - 1) * 2] = 0;
    // 0x80252F50: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80252F54: nop

    // 0x80252F58: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x80252F5C: b           L_80252F78
    // 0x80252F60: swc1        $f6, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->f6.u32l;
        goto L_80252F78;
    // 0x80252F60: swc1        $f6, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->f6.u32l;
L_80252F64:
    // 0x80252F64: lwc1        $f9, -0x3F28($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X3F28);
    // 0x80252F68: lwc1        $f8, -0x3F24($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X3F24);
    // 0x80252F6C: nop

    // 0x80252F70: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x80252F74: swc1        $f10, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->f10.u32l;
L_80252F78:
    // 0x80252F78: jal         0x80272D3C
    // 0x80252F7C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_8024B800_func_80272D3C(rdram, ctx);
        goto after_1;
    // 0x80252F7C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80252F80: jal         0x802720A4
    // 0x80252F84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_802720A4(rdram, ctx);
        goto after_2;
    // 0x80252F84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80252F88: lhu         $t9, 0x10($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X10);
    // 0x80252F8C: nop

    // 0x80252F90: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80252F94: b           L_80253024
    // 0x80252F98: sh          $t0, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r8;
        goto L_80253024;
    // 0x80252F98: sh          $t0, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r8;
L_80252F9C:
    // 0x80252F9C: lh          $t1, 0xE6($s0)
    ctx->r9 = MEM_H(ctx->r16, 0XE6);
    // 0x80252FA0: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x80252FA4: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x80252FA8: sh          $t2, 0xE6($s0)
    MEM_H(0XE6, ctx->r16) = ctx->r10;
    // 0x80252FAC: lh          $t3, 0xE6($s0)
    ctx->r11 = MEM_H(ctx->r16, 0XE6);
    // 0x80252FB0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80252FB4: bne         $t3, $at, L_80252FCC
    if (ctx->r11 != ctx->r1) {
        // 0x80252FB8: addiu       $v0, $v0, 0xB7E
        ctx->r2 = ADD32(ctx->r2, 0XB7E);
            goto L_80252FCC;
    }
    // 0x80252FB8: addiu       $v0, $v0, 0xB7E
    ctx->r2 = ADD32(ctx->r2, 0XB7E);
    // 0x80252FBC: lhu         $t4, 0x0($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X0);
    // 0x80252FC0: nop

    // 0x80252FC4: ori         $t5, $t4, 0x2000
    ctx->r13 = ctx->r12 | 0X2000;
    // 0x80252FC8: sh          $t5, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r13;
L_80252FCC:
    // 0x80252FCC: lh          $t6, 0xE4($s0)
    ctx->r14 = MEM_H(ctx->r16, 0XE4);
    // 0x80252FD0: addiu       $at, $zero, 0x5A
    ctx->r1 = ADD32(0, 0X5A);
    // 0x80252FD4: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80252FD8: sh          $t7, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r15;
    // 0x80252FDC: lh          $t8, 0xE4($s0)
    ctx->r24 = MEM_H(ctx->r16, 0XE4);
    // 0x80252FE0: lui         $t9, 0x8010
    ctx->r25 = S32(0X8010 << 16);
    // 0x80252FE4: beq         $t8, $at, L_80252FFC
    if (ctx->r24 == ctx->r1) {
        // 0x80252FE8: addiu       $t0, $zero, 0x4
        ctx->r8 = ADD32(0, 0X4);
            goto L_80252FFC;
    }
    // 0x80252FE8: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x80252FEC: lbu         $t9, 0x522C($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X522C);
    // 0x80252FF0: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x80252FF4: bne         $t9, $at, L_80253028
    if (ctx->r25 != ctx->r1) {
        // 0x80252FF8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80253028;
    }
    // 0x80252FF8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80252FFC:
    // 0x80252FFC: sh          $t0, 0x36($s0)
    MEM_H(0X36, ctx->r16) = ctx->r8;
    // 0x80253000: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80253004: jal         0x8024BC08
    // 0x80253008: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    ovl_8024B800_func_8024BC08(rdram, ctx);
        goto after_3;
    // 0x80253008: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    after_3:
    // 0x8025300C: lhu         $t1, 0x16($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X16);
    // 0x80253010: addiu       $t3, $zero, 0x19
    ctx->r11 = ADD32(0, 0X19);
    // 0x80253014: ori         $t2, $t1, 0x10
    ctx->r10 = ctx->r9 | 0X10;
    // 0x80253018: sh          $t2, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r10;
    // 0x8025301C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80253020: sh          $t3, 0x4FC0($at)
    MEM_H(0X4FC0, ctx->r1) = ctx->r11;
L_80253024:
    // 0x80253024: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80253028:
    // 0x80253028: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8025302C: jr          $ra
    // 0x80253030: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80253030: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_8024B800_func_80253034(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80253034: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80253038: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8025303C: lhu         $v0, 0x10($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X10);
    // 0x80253040: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80253044: beq         $v0, $zero, L_8025305C
    if (ctx->r2 == 0) {
        // 0x80253048: nop
    
            goto L_8025305C;
    }
    // 0x80253048: nop

    // 0x8025304C: beq         $v0, $at, L_80253108
    if (ctx->r2 == ctx->r1) {
        // 0x80253050: lui         $t8, 0x8012
        ctx->r24 = S32(0X8012 << 16);
            goto L_80253108;
    }
    // 0x80253050: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80253054: b           L_80253124
    // 0x80253058: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80253124;
    // 0x80253058: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8025305C:
    // 0x8025305C: jal         0x80275364
    // 0x80253060: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_8024B800_func_80275364(rdram, ctx);
        goto after_0;
    // 0x80253060: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80253064: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80253068: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8025306C: lwc1        $f4, 0x88($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X88);
    // 0x80253070: lwc1        $f9, -0x3F20($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X3F20);
    // 0x80253074: lwc1        $f8, -0x3F1C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X3F1C);
    // 0x80253078: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8025307C: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x80253080: addiu       $a1, $zero, 0x1F7
    ctx->r5 = ADD32(0, 0X1F7);
    // 0x80253084: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x80253088: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8025308C: jal         0x80272D3C
    // 0x80253090: swc1        $f16, 0x8C($a0)
    MEM_W(0X8C, ctx->r4) = ctx->f16.u32l;
    ovl_8024B800_func_80272D3C(rdram, ctx);
        goto after_1;
    // 0x80253090: swc1        $f16, 0x8C($a0)
    MEM_W(0X8C, ctx->r4) = ctx->f16.u32l;
    after_1:
    // 0x80253094: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80253098: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x8025309C: lh          $t6, 0x2E($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X2E);
    // 0x802530A0: addiu       $t7, $zero, -0x5
    ctx->r15 = ADD32(0, -0X5);
    // 0x802530A4: blez        $t6, L_802530B4
    if (SIGNED(ctx->r14) <= 0) {
        // 0x802530A8: addiu       $t1, $zero, 0x1E
        ctx->r9 = ADD32(0, 0X1E);
            goto L_802530B4;
    }
    // 0x802530A8: addiu       $t1, $zero, 0x1E
    ctx->r9 = ADD32(0, 0X1E);
    // 0x802530AC: b           L_802530B8
    // 0x802530B0: sh          $t7, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r15;
        goto L_802530B8;
    // 0x802530B0: sh          $t7, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r15;
L_802530B4:
    // 0x802530B4: sh          $t8, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r24;
L_802530B8:
    // 0x802530B8: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x802530BC: lwc1        $f18, 0x44($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X44);
    // 0x802530C0: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x802530C4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802530C8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802530CC: lhu         $t2, 0x12($a0)
    ctx->r10 = MEM_HU(ctx->r4, 0X12);
    // 0x802530D0: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x802530D4: lhu         $t4, 0x14($a0)
    ctx->r12 = MEM_HU(ctx->r4, 0X14);
    // 0x802530D8: lhu         $t6, 0x10($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X10);
    // 0x802530DC: mfc1        $t0, $f4
    ctx->r8 = (int32_t)ctx->f4.u32l;
    // 0x802530E0: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x802530E4: ori         $t3, $t2, 0x200
    ctx->r11 = ctx->r10 | 0X200;
    // 0x802530E8: ori         $t5, $t4, 0x400
    ctx->r13 = ctx->r12 | 0X400;
    // 0x802530EC: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x802530F0: sb          $t1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r9;
    // 0x802530F4: sh          $t3, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r11;
    // 0x802530F8: sh          $t5, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r13;
    // 0x802530FC: sh          $t7, 0x10($a0)
    MEM_H(0X10, ctx->r4) = ctx->r15;
    // 0x80253100: b           L_80253120
    // 0x80253104: sh          $t0, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r8;
        goto L_80253120;
    // 0x80253104: sh          $t0, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r8;
L_80253108:
    // 0x80253108: lhu         $t8, 0xB78($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0XB78);
    // 0x8025310C: nop

    // 0x80253110: bne         $t8, $zero, L_80253124
    if (ctx->r24 != 0) {
        // 0x80253114: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80253124;
    }
    // 0x80253114: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80253118: jal         0x8024BC08
    // 0x8025311C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_8024B800_func_8024BC08(rdram, ctx);
        goto after_2;
    // 0x8025311C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
L_80253120:
    // 0x80253120: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80253124:
    // 0x80253124: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80253128: jr          $ra
    // 0x8025312C: nop

    return;
    // 0x8025312C: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80253130(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80253130: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80253134: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80253138: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8025313C: jal         0x80272C74
    // 0x80253140: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    ovl_8024B800_func_80272C74(rdram, ctx);
        goto after_0;
    // 0x80253140: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80253144: addiu       $at, $zero, 0x17
    ctx->r1 = ADD32(0, 0X17);
    // 0x80253148: bne         $v0, $at, L_80253174
    if (ctx->r2 != ctx->r1) {
        // 0x8025314C: nop
    
            goto L_80253174;
    }
    // 0x8025314C: nop

    // 0x80253150: lhu         $t6, 0x18($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X18);
    // 0x80253154: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80253158: andi        $t7, $t6, 0xFCFF
    ctx->r15 = ctx->r14 & 0XFCFF;
    // 0x8025315C: jal         0x8024BAFC
    // 0x80253160: sh          $t7, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r15;
    ovl_8024B800_func_8024BAFC(rdram, ctx);
        goto after_1;
    // 0x80253160: sh          $t7, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r15;
    after_1:
    // 0x80253164: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80253168: andi        $a1, $v0, 0xFFFF
    ctx->r5 = ctx->r2 & 0XFFFF;
    // 0x8025316C: jal         0x80272D3C
    // 0x80253170: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_8024B800_func_80272D3C(rdram, ctx);
        goto after_2;
    // 0x80253170: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
L_80253174:
    // 0x80253174: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x80253178: nop

    // 0x8025317C: andi        $t8, $v0, 0x100
    ctx->r24 = ctx->r2 & 0X100;
    // 0x80253180: beq         $t8, $zero, L_802531F8
    if (ctx->r24 == 0) {
        // 0x80253184: andi        $t9, $v0, 0x200
        ctx->r25 = ctx->r2 & 0X200;
            goto L_802531F8;
    }
    // 0x80253184: andi        $t9, $v0, 0x200
    ctx->r25 = ctx->r2 & 0X200;
    // 0x80253188: bne         $t9, $zero, L_802531FC
    if (ctx->r25 != 0) {
        // 0x8025318C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802531FC;
    }
    // 0x8025318C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80253190: jal         0x802732F4
    // 0x80253194: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_802732F4(rdram, ctx);
        goto after_3;
    // 0x80253194: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80253198: lwc1        $f12, 0x88($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X88);
    // 0x8025319C: lwc1        $f14, 0xB0($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0XB0);
    // 0x802531A0: jal         0x8027924C
    // 0x802531A4: nop

    ovl_8024B800_func_8027924C(rdram, ctx);
        goto after_4;
    // 0x802531A4: nop

    after_4:
    // 0x802531A8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802531AC: nop

    // 0x802531B0: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x802531B4: nop

    // 0x802531B8: bc1f        L_802531C8
    if (!c1cs) {
        // 0x802531BC: nop
    
            goto L_802531C8;
    }
    // 0x802531BC: nop

    // 0x802531C0: jal         0x802732D0
    // 0x802531C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_802732D0(rdram, ctx);
        goto after_5;
    // 0x802531C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
L_802531C8:
    // 0x802531C8: lbu         $t0, 0xB($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0XB);
    // 0x802531CC: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x802531D0: sll         $t1, $t0, 1
    ctx->r9 = S32(ctx->r8 << 1);
    // 0x802531D4: addu        $a1, $a1, $t1
    ctx->r5 = ADD32(ctx->r5, ctx->r9);
    // 0x802531D8: lhu         $a1, -0x51F4($a1)
    ctx->r5 = MEM_HU(ctx->r5, -0X51F4);
    // 0x802531DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802531E0: jal         0x80272D3C
    // 0x802531E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_8024B800_func_80272D3C(rdram, ctx);
        goto after_6;
    // 0x802531E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x802531E8: lhu         $t2, 0x18($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X18);
    // 0x802531EC: nop

    // 0x802531F0: ori         $t3, $t2, 0x200
    ctx->r11 = ctx->r10 | 0X200;
    // 0x802531F4: sh          $t3, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r11;
L_802531F8:
    // 0x802531F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802531FC:
    // 0x802531FC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80253200: jr          $ra
    // 0x80253204: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80253204: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_8024B800_func_80253208(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80253208: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8025320C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80253210: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80253214: lh          $t6, 0xE4($a0)
    ctx->r14 = MEM_H(ctx->r4, 0XE4);
    // 0x80253218: lh          $t8, 0xEC($a0)
    ctx->r24 = MEM_H(ctx->r4, 0XEC);
    // 0x8025321C: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80253220: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80253224: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80253228: sh          $t7, 0xE4($a0)
    MEM_H(0XE4, ctx->r4) = ctx->r15;
    // 0x8025322C: jal         0x80253130
    // 0x80253230: sh          $t9, 0xEC($a0)
    MEM_H(0XEC, ctx->r4) = ctx->r25;
    ovl_8024B800_func_80253130(rdram, ctx);
        goto after_0;
    // 0x80253230: sh          $t9, 0xEC($a0)
    MEM_H(0XEC, ctx->r4) = ctx->r25;
    after_0:
    // 0x80253234: lhu         $t0, 0x16($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X16);
    // 0x80253238: nop

    // 0x8025323C: andi        $t1, $t0, 0x2
    ctx->r9 = ctx->r8 & 0X2;
    // 0x80253240: bne         $t1, $zero, L_80253388
    if (ctx->r9 != 0) {
        // 0x80253244: nop
    
            goto L_80253388;
    }
    // 0x80253244: nop

    // 0x80253248: lhu         $t2, 0x18($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X18);
    // 0x8025324C: nop

    // 0x80253250: andi        $t3, $t2, 0x100
    ctx->r11 = ctx->r10 & 0X100;
    // 0x80253254: bne         $t3, $zero, L_80253388
    if (ctx->r11 != 0) {
        // 0x80253258: nop
    
            goto L_80253388;
    }
    // 0x80253258: nop

    // 0x8025325C: lhu         $t4, 0x20($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X20);
    // 0x80253260: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80253264: andi        $t5, $t4, 0x2
    ctx->r13 = ctx->r12 & 0X2;
    // 0x80253268: bne         $t5, $zero, L_80253388
    if (ctx->r13 != 0) {
        // 0x8025326C: nop
    
            goto L_80253388;
    }
    // 0x8025326C: nop

    // 0x80253270: jal         0x80272374
    // 0x80253274: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_8024B800_func_80272374(rdram, ctx);
        goto after_1;
    // 0x80253274: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80253278: beq         $v0, $zero, L_802532A0
    if (ctx->r2 == 0) {
        // 0x8025327C: sw          $v0, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r2;
            goto L_802532A0;
    }
    // 0x8025327C: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x80253280: lb          $t6, 0x5($s0)
    ctx->r14 = MEM_B(ctx->r16, 0X5);
    // 0x80253284: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80253288: bne         $t6, $zero, L_8025337C
    if (ctx->r14 != 0) {
        // 0x8025328C: addiu       $a1, $zero, 0x64
        ctx->r5 = ADD32(0, 0X64);
            goto L_8025337C;
    }
    // 0x8025328C: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    // 0x80253290: jal         0x80272D3C
    // 0x80253294: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_8024B800_func_80272D3C(rdram, ctx);
        goto after_2;
    // 0x80253294: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80253298: b           L_80253380
    // 0x8025329C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
        goto L_80253380;
    // 0x8025329C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
L_802532A0:
    // 0x802532A0: lb          $t7, 0x5($s0)
    ctx->r15 = MEM_B(ctx->r16, 0X5);
    // 0x802532A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802532A8: beq         $t7, $zero, L_802532C0
    if (ctx->r15 == 0) {
        // 0x802532AC: addiu       $a1, $zero, 0x66
        ctx->r5 = ADD32(0, 0X66);
            goto L_802532C0;
    }
    // 0x802532AC: addiu       $a1, $zero, 0x66
    ctx->r5 = ADD32(0, 0X66);
    // 0x802532B0: jal         0x80272D3C
    // 0x802532B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_8024B800_func_80272D3C(rdram, ctx);
        goto after_3;
    // 0x802532B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x802532B8: b           L_80253380
    // 0x802532BC: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
        goto L_80253380;
    // 0x802532BC: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
L_802532C0:
    // 0x802532C0: lw          $t8, 0xD8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XD8);
    // 0x802532C4: lui         $at, 0xF4
    ctx->r1 = S32(0XF4 << 16);
    // 0x802532C8: lw          $t9, 0x20($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X20);
    // 0x802532CC: ori         $at, $at, 0x2400
    ctx->r1 = ctx->r1 | 0X2400;
    // 0x802532D0: sltu        $at, $t9, $at
    ctx->r1 = ctx->r25 < ctx->r1 ? 1 : 0;
    // 0x802532D4: beq         $at, $zero, L_80253380
    if (ctx->r1 == 0) {
        // 0x802532D8: lw          $t2, 0x2C($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X2C);
            goto L_80253380;
    }
    // 0x802532D8: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x802532DC: lhu         $t0, 0x14($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X14);
    // 0x802532E0: nop

    // 0x802532E4: andi        $t1, $t0, 0x400
    ctx->r9 = ctx->r8 & 0X400;
    // 0x802532E8: bne         $t1, $zero, L_80253380
    if (ctx->r9 != 0) {
        // 0x802532EC: lw          $t2, 0x2C($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X2C);
            goto L_80253380;
    }
    // 0x802532EC: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x802532F0: lh          $t2, 0xE6($s0)
    ctx->r10 = MEM_H(ctx->r16, 0XE6);
    // 0x802532F4: nop

    // 0x802532F8: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x802532FC: bne         $t3, $zero, L_80253358
    if (ctx->r11 != 0) {
        // 0x80253300: nop
    
            goto L_80253358;
    }
    // 0x80253300: nop

    // 0x80253304: lh          $t4, 0xE4($s0)
    ctx->r12 = MEM_H(ctx->r16, 0XE4);
    // 0x80253308: nop

    // 0x8025330C: slti        $at, $t4, 0x1F
    ctx->r1 = SIGNED(ctx->r12) < 0X1F ? 1 : 0;
    // 0x80253310: bne         $at, $zero, L_80253380
    if (ctx->r1 != 0) {
        // 0x80253314: lw          $t2, 0x2C($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X2C);
            goto L_80253380;
    }
    // 0x80253314: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80253318: jal         0x80059898
    // 0x8025331C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_80059898(rdram, ctx);
        goto after_4;
    // 0x8025331C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_4:
    // 0x80253320: sh          $v0, 0xE8($s0)
    MEM_H(0XE8, ctx->r16) = ctx->r2;
    // 0x80253324: lh          $t5, 0xE6($s0)
    ctx->r13 = MEM_H(ctx->r16, 0XE6);
    // 0x80253328: lh          $t7, 0xE8($s0)
    ctx->r15 = MEM_H(ctx->r16, 0XE8);
    // 0x8025332C: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80253330: ori         $t6, $t5, 0x1
    ctx->r14 = ctx->r13 | 0X1;
    // 0x80253334: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x80253338: sh          $t6, 0xE6($s0)
    MEM_H(0XE6, ctx->r16) = ctx->r14;
    // 0x8025333C: addu        $a1, $a1, $t8
    ctx->r5 = ADD32(ctx->r5, ctx->r24);
    // 0x80253340: lhu         $a1, -0x51EC($a1)
    ctx->r5 = MEM_HU(ctx->r5, -0X51EC);
    // 0x80253344: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80253348: jal         0x80272D3C
    // 0x8025334C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_8024B800_func_80272D3C(rdram, ctx);
        goto after_5;
    // 0x8025334C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x80253350: b           L_80253380
    // 0x80253354: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
        goto L_80253380;
    // 0x80253354: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
L_80253358:
    // 0x80253358: jal         0x80272C74
    // 0x8025335C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80272C74(rdram, ctx);
        goto after_6;
    // 0x8025335C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80253360: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x80253364: bne         $v0, $at, L_8025337C
    if (ctx->r2 != ctx->r1) {
        // 0x80253368: addiu       $t1, $zero, -0x1E
        ctx->r9 = ADD32(0, -0X1E);
            goto L_8025337C;
    }
    // 0x80253368: addiu       $t1, $zero, -0x1E
    ctx->r9 = ADD32(0, -0X1E);
    // 0x8025336C: lh          $t9, 0xE6($s0)
    ctx->r25 = MEM_H(ctx->r16, 0XE6);
    // 0x80253370: sh          $t1, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r9;
    // 0x80253374: andi        $t0, $t9, 0xFFFE
    ctx->r8 = ctx->r25 & 0XFFFE;
    // 0x80253378: sh          $t0, 0xE6($s0)
    MEM_H(0XE6, ctx->r16) = ctx->r8;
L_8025337C:
    // 0x8025337C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
L_80253380:
    // 0x80253380: nop

    // 0x80253384: sb          $t2, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r10;
L_80253388:
    // 0x80253388: lhu         $v0, 0x12($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X12);
    // 0x8025338C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80253390: andi        $t3, $v0, 0x8
    ctx->r11 = ctx->r2 & 0X8;
    // 0x80253394: bne         $t3, $zero, L_802534E0
    if (ctx->r11 != 0) {
        // 0x80253398: nop
    
            goto L_802534E0;
    }
    // 0x80253398: nop

    // 0x8025339C: lh          $t4, 0xEE($s0)
    ctx->r12 = MEM_H(ctx->r16, 0XEE);
    // 0x802533A0: nop

    // 0x802533A4: beq         $t4, $zero, L_8025342C
    if (ctx->r12 == 0) {
        // 0x802533A8: nop
    
            goto L_8025342C;
    }
    // 0x802533A8: nop

    // 0x802533AC: lh          $t5, 0xEC($s0)
    ctx->r13 = MEM_H(ctx->r16, 0XEC);
    // 0x802533B0: andi        $t6, $v0, 0x80
    ctx->r14 = ctx->r2 & 0X80;
    // 0x802533B4: slti        $at, $t5, 0x3
    ctx->r1 = SIGNED(ctx->r13) < 0X3 ? 1 : 0;
    // 0x802533B8: beq         $at, $zero, L_8025342C
    if (ctx->r1 == 0) {
        // 0x802533BC: nop
    
            goto L_8025342C;
    }
    // 0x802533BC: nop

    // 0x802533C0: beq         $t6, $zero, L_8025342C
    if (ctx->r14 == 0) {
        // 0x802533C4: nop
    
            goto L_8025342C;
    }
    // 0x802533C4: nop

    // 0x802533C8: lwc1        $f12, 0x8C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x802533CC: lwc1        $f14, 0xB0($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0XB0);
    // 0x802533D0: jal         0x80279308
    // 0x802533D4: nop

    ovl_8024B800_func_80279308(rdram, ctx);
        goto after_7;
    // 0x802533D4: nop

    after_7:
    // 0x802533D8: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802533DC: lwc1        $f5, -0x3F18($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X3F18);
    // 0x802533E0: lwc1        $f4, -0x3F14($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X3F14);
    // 0x802533E4: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x802533E8: c.lt.d      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.d < ctx->f6.d;
    // 0x802533EC: nop

    // 0x802533F0: bc1f        L_8025342C
    if (!c1cs) {
        // 0x802533F4: nop
    
            goto L_8025342C;
    }
    // 0x802533F4: nop

    // 0x802533F8: lhu         $t7, 0x1A($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X1A);
    // 0x802533FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80253400: bne         $t7, $zero, L_8025341C
    if (ctx->r15 != 0) {
        // 0x80253404: nop
    
            goto L_8025341C;
    }
    // 0x80253404: nop

    // 0x80253408: lhu         $t8, 0x12($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X12);
    // 0x8025340C: nop

    // 0x80253410: andi        $t9, $t8, 0x40
    ctx->r25 = ctx->r24 & 0X40;
    // 0x80253414: beq         $t9, $zero, L_8025342C
    if (ctx->r25 == 0) {
        // 0x80253418: nop
    
            goto L_8025342C;
    }
    // 0x80253418: nop

L_8025341C:
    // 0x8025341C: jal         0x8024BC08
    // 0x80253420: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    ovl_8024B800_func_8024BC08(rdram, ctx);
        goto after_8;
    // 0x80253420: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    after_8:
    // 0x80253424: b           L_802535A0
    // 0x80253428: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802535A0;
    // 0x80253428: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8025342C:
    // 0x8025342C: lb          $t0, 0x5($s0)
    ctx->r8 = MEM_B(ctx->r16, 0X5);
    // 0x80253430: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80253434: bne         $t0, $zero, L_80253478
    if (ctx->r8 != 0) {
        // 0x80253438: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80253478;
    }
    // 0x80253438: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8025343C: lwc1        $f12, 0xB0($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XB0);
    // 0x80253440: lwc1        $f14, -0x3F10($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X3F10);
    // 0x80253444: jal         0x80279520
    // 0x80253448: addiu       $a2, $s0, 0x8C
    ctx->r6 = ADD32(ctx->r16, 0X8C);
    ovl_8024B800_func_80279520(rdram, ctx);
        goto after_9;
    // 0x80253448: addiu       $a2, $s0, 0x8C
    ctx->r6 = ADD32(ctx->r16, 0X8C);
    after_9:
    // 0x8025344C: bne         $v0, $zero, L_80253478
    if (ctx->r2 != 0) {
        // 0x80253450: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80253478;
    }
    // 0x80253450: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80253454: jal         0x80273484
    // 0x80253458: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80273484(rdram, ctx);
        goto after_10;
    // 0x80253458: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x8025345C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80253460: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80253464: jal         0x8027356C
    // 0x80253468: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    ovl_8024B800_func_8027356C(rdram, ctx);
        goto after_11;
    // 0x80253468: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    after_11:
    // 0x8025346C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80253470: bne         $v0, $at, L_80253488
    if (ctx->r2 != ctx->r1) {
        // 0x80253474: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80253488;
    }
    // 0x80253474: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80253478:
    // 0x80253478: jal         0x8024BC08
    // 0x8025347C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_8024B800_func_8024BC08(rdram, ctx);
        goto after_12;
    // 0x8025347C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_12:
    // 0x80253480: b           L_80253584
    // 0x80253484: lhu         $t1, 0x16($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X16);
        goto L_80253584;
    // 0x80253484: lhu         $t1, 0x16($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X16);
L_80253488:
    // 0x80253488: jal         0x80272C74
    // 0x8025348C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80272C74(rdram, ctx);
        goto after_13;
    // 0x8025348C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x80253490: bne         $v0, $zero, L_80253580
    if (ctx->r2 != 0) {
        // 0x80253494: nop
    
            goto L_80253580;
    }
    // 0x80253494: nop

    // 0x80253498: lhu         $t1, 0x16($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X16);
    // 0x8025349C: nop

    // 0x802534A0: andi        $t2, $t1, 0x2
    ctx->r10 = ctx->r9 & 0X2;
    // 0x802534A4: bne         $t2, $zero, L_80253580
    if (ctx->r10 != 0) {
        // 0x802534A8: nop
    
            goto L_80253580;
    }
    // 0x802534A8: nop

    // 0x802534AC: lh          $v0, 0xEA($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XEA);
    // 0x802534B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802534B4: bne         $v0, $zero, L_80253580
    if (ctx->r2 != 0) {
        // 0x802534B8: addiu       $t3, $v0, 0x1
        ctx->r11 = ADD32(ctx->r2, 0X1);
            goto L_80253580;
    }
    // 0x802534B8: addiu       $t3, $v0, 0x1
    ctx->r11 = ADD32(ctx->r2, 0X1);
    // 0x802534BC: lhu         $t4, 0x18($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X18);
    // 0x802534C0: sh          $t3, 0xEA($s0)
    MEM_H(0XEA, ctx->r16) = ctx->r11;
    // 0x802534C4: ori         $t5, $t4, 0x4000
    ctx->r13 = ctx->r12 | 0X4000;
    // 0x802534C8: sh          $t5, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r13;
    // 0x802534CC: addiu       $a1, $zero, 0xA1
    ctx->r5 = ADD32(0, 0XA1);
    // 0x802534D0: jal         0x80272D3C
    // 0x802534D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_8024B800_func_80272D3C(rdram, ctx);
        goto after_14;
    // 0x802534D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_14:
    // 0x802534D8: b           L_80253584
    // 0x802534DC: lhu         $t1, 0x16($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X16);
        goto L_80253584;
    // 0x802534DC: lhu         $t1, 0x16($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X16);
L_802534E0:
    // 0x802534E0: jal         0x8024B950
    // 0x802534E4: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    ovl_8024B800_func_8024B950(rdram, ctx);
        goto after_15;
    // 0x802534E4: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    after_15:
    // 0x802534E8: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802534EC: lwc1        $f14, -0x3F0C($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X3F0C);
    // 0x802534F0: lwc1        $f12, 0x30($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X30);
    // 0x802534F4: addiu       $a2, $s0, 0x8C
    ctx->r6 = ADD32(ctx->r16, 0X8C);
    // 0x802534F8: jal         0x80279520
    // 0x802534FC: sh          $v0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r2;
    ovl_8024B800_func_80279520(rdram, ctx);
        goto after_16;
    // 0x802534FC: sh          $v0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r2;
    after_16:
    // 0x80253500: lhu         $a1, 0x2A($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X2A);
    // 0x80253504: beq         $v0, $zero, L_8025356C
    if (ctx->r2 == 0) {
        // 0x80253508: ori         $at, $zero, 0xFFFE
        ctx->r1 = 0 | 0XFFFE;
            goto L_8025356C;
    }
    // 0x80253508: ori         $at, $zero, 0xFFFE
    ctx->r1 = 0 | 0XFFFE;
    // 0x8025350C: lhu         $t6, 0x18($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X18);
    // 0x80253510: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80253514: andi        $t7, $t6, 0x4000
    ctx->r15 = ctx->r14 & 0X4000;
    // 0x80253518: beq         $t7, $zero, L_8025356C
    if (ctx->r15 == 0) {
        // 0x8025351C: ori         $at, $zero, 0xFFFE
        ctx->r1 = 0 | 0XFFFE;
            goto L_8025356C;
    }
    // 0x8025351C: ori         $at, $zero, 0xFFFE
    ctx->r1 = 0 | 0XFFFE;
    // 0x80253520: jal         0x80272C74
    // 0x80253524: sh          $a1, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r5;
    ovl_8024B800_func_80272C74(rdram, ctx);
        goto after_17;
    // 0x80253524: sh          $a1, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r5;
    after_17:
    // 0x80253528: lhu         $a1, 0x2A($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X2A);
    // 0x8025352C: addiu       $at, $zero, 0x1A
    ctx->r1 = ADD32(0, 0X1A);
    // 0x80253530: bne         $v0, $at, L_8025356C
    if (ctx->r2 != ctx->r1) {
        // 0x80253534: ori         $at, $zero, 0xFFFE
        ctx->r1 = 0 | 0XFFFE;
            goto L_8025356C;
    }
    // 0x80253534: ori         $at, $zero, 0xFFFE
    ctx->r1 = 0 | 0XFFFE;
    // 0x80253538: lhu         $t8, 0x18($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X18);
    // 0x8025353C: lb          $t0, 0x5($s0)
    ctx->r8 = MEM_B(ctx->r16, 0X5);
    // 0x80253540: andi        $t9, $t8, 0xBFFF
    ctx->r25 = ctx->r24 & 0XBFFF;
    // 0x80253544: beq         $t0, $zero, L_8025355C
    if (ctx->r8 == 0) {
        // 0x80253548: sh          $t9, 0x18($s0)
        MEM_H(0X18, ctx->r16) = ctx->r25;
            goto L_8025355C;
    }
    // 0x80253548: sh          $t9, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r25;
    // 0x8025354C: jal         0x8024BAB8
    // 0x80253550: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8024BAB8(rdram, ctx);
        goto after_18;
    // 0x80253550: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
    // 0x80253554: b           L_80253568
    // 0x80253558: andi        $a1, $v0, 0xFFFF
    ctx->r5 = ctx->r2 & 0XFFFF;
        goto L_80253568;
    // 0x80253558: andi        $a1, $v0, 0xFFFF
    ctx->r5 = ctx->r2 & 0XFFFF;
L_8025355C:
    // 0x8025355C: jal         0x8024BAFC
    // 0x80253560: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8024BAFC(rdram, ctx);
        goto after_19;
    // 0x80253560: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
    // 0x80253564: andi        $a1, $v0, 0xFFFF
    ctx->r5 = ctx->r2 & 0XFFFF;
L_80253568:
    // 0x80253568: ori         $at, $zero, 0xFFFE
    ctx->r1 = 0 | 0XFFFE;
L_8025356C:
    // 0x8025356C: slt         $at, $a1, $at
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x80253570: beq         $at, $zero, L_80253580
    if (ctx->r1 == 0) {
        // 0x80253574: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80253580;
    }
    // 0x80253574: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80253578: jal         0x80272D3C
    // 0x8025357C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_8024B800_func_80272D3C(rdram, ctx);
        goto after_20;
    // 0x8025357C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_20:
L_80253580:
    // 0x80253580: lhu         $t1, 0x16($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X16);
L_80253584:
    // 0x80253584: nop

    // 0x80253588: andi        $t2, $t1, 0x2
    ctx->r10 = ctx->r9 & 0X2;
    // 0x8025358C: beq         $t2, $zero, L_802535A0
    if (ctx->r10 == 0) {
        // 0x80253590: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802535A0;
    }
    // 0x80253590: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80253594: jal         0x802791D0
    // 0x80253598: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_802791D0(rdram, ctx);
        goto after_21;
    // 0x80253598: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_21:
    // 0x8025359C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802535A0:
    // 0x802535A0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802535A4: jr          $ra
    // 0x802535A8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x802535A8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
