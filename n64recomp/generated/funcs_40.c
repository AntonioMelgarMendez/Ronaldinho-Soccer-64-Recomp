#include "iss64_recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_8039B6DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039B6DC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8039B6E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8039B6E4: jal         0x8039B668
    // 0x8039B6E8: nop

    func_8039B668(rdram, ctx);
        goto after_0;
    // 0x8039B6E8: nop

    after_0:
    // 0x8039B6EC: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x8039B6F0: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8039B6F4: jal         0x8001CB48
    // 0x8039B6F8: sh          $v0, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r2;
    func_8001CB48(rdram, ctx);
        goto after_1;
    // 0x8039B6F8: sh          $v0, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r2;
    after_1:
    // 0x8039B6FC: lh          $t6, 0x1E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X1E);
    // 0x8039B700: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x8039B704: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8039B708: addiu       $t8, $t7, 0x46
    ctx->r24 = ADD32(ctx->r15, 0X46);
    // 0x8039B70C: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x8039B710: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x8039B714: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8039B718: cvt.d.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.d = CVT_D_W(ctx->f10.u32l);
    // 0x8039B71C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8039B720: addiu       $v1, $v1, -0x32B0
    ctx->r3 = ADD32(ctx->r3, -0X32B0);
    // 0x8039B724: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x8039B728: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x8039B72C: lb          $v0, 0x14B($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X14B);
    // 0x8039B730: mul.d       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f8.d, ctx->f16.d);
    // 0x8039B734: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8039B738: nop

    // 0x8039B73C: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x8039B740: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8039B744: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8039B748: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x8039B74C: cvt.w.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_D(ctx->f18.d);
    // 0x8039B750: mfc1        $t0, $f4
    ctx->r8 = (int32_t)ctx->f4.u32l;
    // 0x8039B754: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8039B758: beq         $v0, $zero, L_8039B764
    if (ctx->r2 == 0) {
        // 0x8039B75C: sh          $t0, 0x14E($v1)
        MEM_H(0X14E, ctx->r3) = ctx->r8;
            goto L_8039B764;
    }
    // 0x8039B75C: sh          $t0, 0x14E($v1)
    MEM_H(0X14E, ctx->r3) = ctx->r8;
    // 0x8039B760: bne         $v0, $at, L_8039B7CC
    if (ctx->r2 != ctx->r1) {
        // 0x8039B764: lui         $at, 0x803A
        ctx->r1 = S32(0X803A << 16);
            goto L_8039B7CC;
    }
L_8039B764:
    // 0x8039B764: lui         $at, 0x803A
    ctx->r1 = S32(0X803A << 16);
    // 0x8039B768: lwc1        $f12, 0x1154($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X1154);
    // 0x8039B76C: jal         0x8001CB48
    // 0x8039B770: nop

    func_8001CB48(rdram, ctx);
        goto after_2;
    // 0x8039B770: nop

    after_2:
    // 0x8039B774: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8039B778: addiu       $v1, $v1, -0x32B0
    ctx->r3 = ADD32(ctx->r3, -0X32B0);
    // 0x8039B77C: lh          $t1, 0x14E($v1)
    ctx->r9 = MEM_H(ctx->r3, 0X14E);
    // 0x8039B780: lui         $at, 0x803A
    ctx->r1 = S32(0X803A << 16);
    // 0x8039B784: mtc1        $t1, $f16
    ctx->f16.u32l = ctx->r9;
    // 0x8039B788: lwc1        $f11, 0x1158($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X1158);
    // 0x8039B78C: lwc1        $f10, 0x115C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X115C);
    // 0x8039B790: cvt.d.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.d = CVT_D_W(ctx->f16.u32l);
    // 0x8039B794: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x8039B798: add.d       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f8.d = ctx->f6.d + ctx->f10.d;
    // 0x8039B79C: mul.d       $f4, $f18, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f8.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f8.d);
    // 0x8039B7A0: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8039B7A4: nop

    // 0x8039B7A8: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x8039B7AC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8039B7B0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8039B7B4: nop

    // 0x8039B7B8: cvt.w.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_D(ctx->f4.d);
    // 0x8039B7BC: mfc1        $t3, $f6
    ctx->r11 = (int32_t)ctx->f6.u32l;
    // 0x8039B7C0: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x8039B7C4: sh          $t3, 0x14E($v1)
    MEM_H(0X14E, ctx->r3) = ctx->r11;
    // 0x8039B7C8: nop

L_8039B7CC:
    // 0x8039B7CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8039B7D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8039B7D4: jr          $ra
    // 0x8039B7D8: nop

    return;
    // 0x8039B7D8: nop

;}
RECOMP_FUNC void func_8039B7DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039B7DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8039B7E0: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x8039B7E4: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x8039B7E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8039B7EC: addiu       $a1, $a1, -0x32B0
    ctx->r5 = ADD32(ctx->r5, -0X32B0);
    // 0x8039B7F0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_8039B7F4:
    // 0x8039B7F4: addu        $v0, $a1, $v1
    ctx->r2 = ADD32(ctx->r5, ctx->r3);
    // 0x8039B7F8: lbu         $t6, 0x150($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X150);
    // 0x8039B7FC: lbu         $t7, 0x151($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X151);
    // 0x8039B800: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x8039B804: subu        $t8, $t6, $t7
    ctx->r24 = SUB32(ctx->r14, ctx->r15);
    // 0x8039B808: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x8039B80C: sll         $t9, $v1, 16
    ctx->r25 = S32(ctx->r3 << 16);
    // 0x8039B810: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8039B814: sra         $v1, $t9, 16
    ctx->r3 = S32(SIGNED(ctx->r25) >> 16);
    // 0x8039B818: slti        $at, $v1, 0x8
    ctx->r1 = SIGNED(ctx->r3) < 0X8 ? 1 : 0;
    // 0x8039B81C: bne         $at, $zero, L_8039B7F4
    if (ctx->r1 != 0) {
        // 0x8039B820: add.s       $f12, $f12, $f6
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f6.fl;
            goto L_8039B7F4;
    }
    // 0x8039B820: add.s       $f12, $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f6.fl;
    // 0x8039B824: jal         0x8001DAB4
    // 0x8039B828: nop

    func_8001DAB4(rdram, ctx);
        goto after_0;
    // 0x8039B828: nop

    after_0:
    // 0x8039B82C: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x8039B830: nop

    // 0x8039B834: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x8039B838: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8039B83C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8039B840: nop

    // 0x8039B844: cvt.w.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = CVT_W_S(ctx->f0.fl);
    // 0x8039B848: mfc1        $t4, $f8
    ctx->r12 = (int32_t)ctx->f8.u32l;
    // 0x8039B84C: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x8039B850: jal         0x8001CA74
    // 0x8039B854: andi        $a0, $t4, 0x1F
    ctx->r4 = ctx->r12 & 0X1F;
    func_8001CA74(rdram, ctx);
        goto after_1;
    // 0x8039B854: andi        $a0, $t4, 0x1F
    ctx->r4 = ctx->r12 & 0X1F;
    after_1:
    // 0x8039B858: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x8039B85C: addiu       $a1, $a1, -0x32B0
    ctx->r5 = ADD32(ctx->r5, -0X32B0);
    // 0x8039B860: lh          $t6, 0x14E($a1)
    ctx->r14 = MEM_H(ctx->r5, 0X14E);
    // 0x8039B864: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8039B868: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x8039B86C: sh          $t7, 0x14E($a1)
    MEM_H(0X14E, ctx->r5) = ctx->r15;
    // 0x8039B870: jr          $ra
    // 0x8039B874: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8039B874: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8039B878(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039B878: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8039B87C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8039B880: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8039B884: addiu       $a0, $a0, -0x3153
    ctx->r4 = ADD32(ctx->r4, -0X3153);
    // 0x8039B888: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8039B88C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8039B890: addu        $t6, $a0, $v0
    ctx->r14 = ADD32(ctx->r4, ctx->r2);
L_8039B894:
    // 0x8039B894: lbu         $v1, 0x0($t6)
    ctx->r3 = MEM_BU(ctx->r14, 0X0);
    // 0x8039B898: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8039B89C: slti        $at, $v1, 0x63
    ctx->r1 = SIGNED(ctx->r3) < 0X63 ? 1 : 0;
    // 0x8039B8A0: beq         $at, $zero, L_8039B8B8
    if (ctx->r1 == 0) {
        // 0x8039B8A4: sll         $t9, $v0, 16
        ctx->r25 = S32(ctx->r2 << 16);
            goto L_8039B8B8;
    }
    // 0x8039B8A4: sll         $t9, $v0, 16
    ctx->r25 = S32(ctx->r2 << 16);
    // 0x8039B8A8: subu        $a2, $a2, $v1
    ctx->r6 = SUB32(ctx->r6, ctx->r3);
    // 0x8039B8AC: addiu       $a2, $a2, 0x63
    ctx->r6 = ADD32(ctx->r6, 0X63);
    // 0x8039B8B0: sll         $t7, $a2, 16
    ctx->r15 = S32(ctx->r6 << 16);
    // 0x8039B8B4: sra         $a2, $t7, 16
    ctx->r6 = S32(SIGNED(ctx->r15) >> 16);
L_8039B8B8:
    // 0x8039B8B8: sra         $v0, $t9, 16
    ctx->r2 = S32(SIGNED(ctx->r25) >> 16);
    // 0x8039B8BC: slti        $at, $v0, 0x9
    ctx->r1 = SIGNED(ctx->r2) < 0X9 ? 1 : 0;
    // 0x8039B8C0: bne         $at, $zero, L_8039B894
    if (ctx->r1 != 0) {
        // 0x8039B8C4: addu        $t6, $a0, $v0
        ctx->r14 = ADD32(ctx->r4, ctx->r2);
            goto L_8039B894;
    }
    // 0x8039B8C4: addu        $t6, $a0, $v0
    ctx->r14 = ADD32(ctx->r4, ctx->r2);
    // 0x8039B8C8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8039B8CC: lbu         $v0, -0x3078($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3078);
    // 0x8039B8D0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8039B8D4: beq         $v0, $zero, L_8039B900
    if (ctx->r2 == 0) {
        // 0x8039B8D8: lui         $a0, 0x803A
        ctx->r4 = S32(0X803A << 16);
            goto L_8039B900;
    }
    // 0x8039B8D8: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8039B8DC: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8039B8E0: lbu         $a0, 0x114C($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X114C);
    // 0x8039B8E4: jal         0x8001CA74
    // 0x8039B8E8: sh          $a2, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r6;
    func_8001CA74(rdram, ctx);
        goto after_0;
    // 0x8039B8E8: sh          $a2, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r6;
    after_0:
    // 0x8039B8EC: sll         $v1, $v0, 16
    ctx->r3 = S32(ctx->r2 << 16);
    // 0x8039B8F0: sra         $t1, $v1, 16
    ctx->r9 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8039B8F4: lh          $a2, 0x1C($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X1C);
    // 0x8039B8F8: b           L_8039B900
    // 0x8039B8FC: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
        goto L_8039B900;
    // 0x8039B8FC: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
L_8039B900:
    // 0x8039B900: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8039B904: addiu       $a3, $a3, -0x32B0
    ctx->r7 = ADD32(ctx->r7, -0X32B0);
    // 0x8039B908: lh          $t2, 0x14E($a3)
    ctx->r10 = MEM_H(ctx->r7, 0X14E);
    // 0x8039B90C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8039B910: addu        $t3, $t2, $v1
    ctx->r11 = ADD32(ctx->r10, ctx->r3);
    // 0x8039B914: sh          $t3, 0x14E($a3)
    MEM_H(0X14E, ctx->r7) = ctx->r11;
    // 0x8039B918: lh          $a0, 0x14E($a3)
    ctx->r4 = MEM_H(ctx->r7, 0X14E);
    // 0x8039B91C: jal         0x8001D4C0
    // 0x8039B920: nop

    func_8001D4C0(rdram, ctx);
        goto after_1;
    // 0x8039B920: nop

    after_1:
    // 0x8039B924: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8039B928: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8039B92C: addiu       $a3, $a3, -0x32B0
    ctx->r7 = ADD32(ctx->r7, -0X32B0);
    // 0x8039B930: sh          $v0, 0x14E($a3)
    MEM_H(0X14E, ctx->r7) = ctx->r2;
    // 0x8039B934: jr          $ra
    // 0x8039B938: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8039B938: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8039B93C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039B93C: jr          $ra
    // 0x8039B940: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8039B940: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8039B944: nop

    // 0x8039B948: nop

    // 0x8039B94C: nop

;}
RECOMP_FUNC void func_8039B950(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039B950: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8039B954: lbu         $t6, -0x329D($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X329D);
    // 0x8039B958: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8039B95C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8039B960: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8039B964: bne         $t6, $zero, L_8039B980
    if (ctx->r14 != 0) {
        // 0x8039B968: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8039B980;
    }
    // 0x8039B968: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8039B96C: lui         $a1, 0x803A
    ctx->r5 = S32(0X803A << 16);
    // 0x8039B970: jal         0x8002C898
    // 0x8039B974: addiu       $a1, $a1, 0x1214
    ctx->r5 = ADD32(ctx->r5, 0X1214);
    func_8002C898(rdram, ctx);
        goto after_0;
    // 0x8039B974: addiu       $a1, $a1, 0x1214
    ctx->r5 = ADD32(ctx->r5, 0X1214);
    after_0:
    // 0x8039B978: b           L_8039B9A4
    // 0x8039B97C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8039B9A4;
    // 0x8039B97C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8039B980:
    // 0x8039B980: lui         $a1, 0x803A
    ctx->r5 = S32(0X803A << 16);
    // 0x8039B984: addiu       $a1, $a1, 0x14D8
    ctx->r5 = ADD32(ctx->r5, 0X14D8);
    // 0x8039B988: jal         0x8002C898
    // 0x8039B98C: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_8002C898(rdram, ctx);
        goto after_1;
    // 0x8039B98C: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_1:
    // 0x8039B990: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8039B994: lui         $a1, 0x803A
    ctx->r5 = S32(0X803A << 16);
    // 0x8039B998: jal         0x8002C898
    // 0x8039B99C: addiu       $a1, $a1, 0x14E4
    ctx->r5 = ADD32(ctx->r5, 0X14E4);
    func_8002C898(rdram, ctx);
        goto after_2;
    // 0x8039B99C: addiu       $a1, $a1, 0x14E4
    ctx->r5 = ADD32(ctx->r5, 0X14E4);
    after_2:
    // 0x8039B9A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8039B9A4:
    // 0x8039B9A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8039B9A8: jr          $ra
    // 0x8039B9AC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8039B9AC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8039B9B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039B9B0: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8039B9B4: lb          $t6, -0x3165($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X3165);
    // 0x8039B9B8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8039B9BC: bne         $t6, $zero, L_8039B9D0
    if (ctx->r14 != 0) {
        // 0x8039B9C0: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_8039B9D0;
    }
    // 0x8039B9C0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8039B9C4: sb          $t7, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r15;
    // 0x8039B9C8: jr          $ra
    // 0x8039B9CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8039B9CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8039B9D0:
    // 0x8039B9D0: sb          $zero, 0x4($a0)
    MEM_B(0X4, ctx->r4) = 0;
    // 0x8039B9D4: jr          $ra
    // 0x8039B9D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8039B9D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8039B9DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039B9DC: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x8039B9E0: lb          $a2, -0x3166($a2)
    ctx->r6 = MEM_B(ctx->r6, -0X3166);
    // 0x8039B9E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8039B9E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8039B9EC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8039B9F0: andi        $t6, $a2, 0xFFFF
    ctx->r14 = ctx->r6 & 0XFFFF;
    // 0x8039B9F4: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x8039B9F8: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x8039B9FC: jal         0x800392F4
    // 0x8039BA00: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_800392F4(rdram, ctx);
        goto after_0;
    // 0x8039BA00: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x8039BA04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8039BA08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8039BA0C: jr          $ra
    // 0x8039BA10: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8039BA10: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8039BA14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039BA14: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8039BA18: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8039BA1C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8039BA20: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8039BA24: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8039BA28: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8039BA2C: lh          $a3, 0x1C($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X1C);
    // 0x8039BA30: lh          $a2, 0x18($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X18);
    // 0x8039BA34: addiu       $v0, $v0, -0x750
    ctx->r2 = ADD32(ctx->r2, -0X750);
    // 0x8039BA38: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8039BA3C: lh          $a1, 0xC0($v0)
    ctx->r5 = MEM_H(ctx->r2, 0XC0);
    // 0x8039BA40: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x8039BA44: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8039BA48: sll         $t6, $a2, 16
    ctx->r14 = S32(ctx->r6 << 16);
    // 0x8039BA4C: sll         $t8, $a3, 16
    ctx->r24 = S32(ctx->r7 << 16);
    // 0x8039BA50: addiu       $t0, $a1, 0x1
    ctx->r8 = ADD32(ctx->r5, 0X1);
    // 0x8039BA54: sh          $t0, 0xC0($v0)
    MEM_H(0XC0, ctx->r2) = ctx->r8;
    // 0x8039BA58: sra         $a3, $t8, 16
    ctx->r7 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8039BA5C: jal         0x8039AED8
    // 0x8039BA60: sra         $a2, $t6, 16
    ctx->r6 = S32(SIGNED(ctx->r14) >> 16);
    func_8039AED8(rdram, ctx);
        goto after_0;
    // 0x8039BA60: sra         $a2, $t6, 16
    ctx->r6 = S32(SIGNED(ctx->r14) >> 16);
    after_0:
    // 0x8039BA64: lh          $a2, 0x18($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X18);
    // 0x8039BA68: lh          $a3, 0x1C($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X1C);
    // 0x8039BA6C: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x8039BA70: addiu       $a2, $a2, -0x2
    ctx->r6 = ADD32(ctx->r6, -0X2);
    // 0x8039BA74: addiu       $a3, $a3, -0x2
    ctx->r7 = ADD32(ctx->r7, -0X2);
    // 0x8039BA78: sll         $t3, $a3, 16
    ctx->r11 = S32(ctx->r7 << 16);
    // 0x8039BA7C: sll         $t1, $a2, 16
    ctx->r9 = S32(ctx->r6 << 16);
    // 0x8039BA80: lbu         $a0, -0x68F($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X68F);
    // 0x8039BA84: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x8039BA88: addiu       $a1, $a1, -0x3153
    ctx->r5 = ADD32(ctx->r5, -0X3153);
    // 0x8039BA8C: sra         $a2, $t1, 16
    ctx->r6 = S32(SIGNED(ctx->r9) >> 16);
    // 0x8039BA90: jal         0x8006F070
    // 0x8039BA94: sra         $a3, $t3, 16
    ctx->r7 = S32(SIGNED(ctx->r11) >> 16);
    func_8006F070(rdram, ctx);
        goto after_1;
    // 0x8039BA94: sra         $a3, $t3, 16
    ctx->r7 = S32(SIGNED(ctx->r11) >> 16);
    after_1:
    // 0x8039BA98: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8039BA9C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8039BAA0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8039BAA4: sh          $v0, -0x690($at)
    MEM_H(-0X690, ctx->r1) = ctx->r2;
    // 0x8039BAA8: jr          $ra
    // 0x8039BAAC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8039BAAC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8039BAB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039BAB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8039BAB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8039BAB8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8039BABC: jal         0x8039C8D4
    // 0x8039BAC0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8039C8D4(rdram, ctx);
        goto after_0;
    // 0x8039BAC0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8039BAC4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8039BAC8: bne         $v0, $zero, L_8039BAE0
    if (ctx->r2 != 0) {
        // 0x8039BACC: nop
    
            goto L_8039BAE0;
    }
    // 0x8039BACC: nop

    // 0x8039BAD0: jal         0x8002BB50
    // 0x8039BAD4: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    func_8002BB50(rdram, ctx);
        goto after_1;
    // 0x8039BAD4: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    after_1:
    // 0x8039BAD8: b           L_8039BAEC
    // 0x8039BADC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8039BAEC;
    // 0x8039BADC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8039BAE0:
    // 0x8039BAE0: jal         0x8002BB50
    // 0x8039BAE4: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    func_8002BB50(rdram, ctx);
        goto after_2;
    // 0x8039BAE4: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    after_2:
    // 0x8039BAE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8039BAEC:
    // 0x8039BAEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8039BAF0: jr          $ra
    // 0x8039BAF4: nop

    return;
    // 0x8039BAF4: nop

;}
RECOMP_FUNC void func_8039BAF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039BAF8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8039BAFC: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8039BB00: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x8039BB04: lh          $a0, -0x6B6($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X6B6);
    // 0x8039BB08: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8039BB0C: addiu       $t6, $a0, 0x2A
    ctx->r14 = ADD32(ctx->r4, 0X2A);
    // 0x8039BB10: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8039BB14: sh          $t6, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r14;
    // 0x8039BB18: lw          $t7, 0x38($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X38);
    // 0x8039BB1C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8039BB20: lh          $a1, 0x1E($t7)
    ctx->r5 = MEM_H(ctx->r15, 0X1E);
    // 0x8039BB24: jal         0x8039C91C
    // 0x8039BB28: sh          $a1, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r5;
    func_8039C91C(rdram, ctx);
        goto after_0;
    // 0x8039BB28: sh          $a1, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r5;
    after_0:
    // 0x8039BB2C: bne         $v0, $zero, L_8039BBC4
    if (ctx->r2 != 0) {
        // 0x8039BB30: nop
    
            goto L_8039BBC4;
    }
    // 0x8039BB30: nop

    // 0x8039BB34: jal         0x8039C7B0
    // 0x8039BB38: nop

    func_8039C7B0(rdram, ctx);
        goto after_1;
    // 0x8039BB38: nop

    after_1:
    // 0x8039BB3C: lbu         $a0, 0x2D($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X2D);
    // 0x8039BB40: lbu         $a1, 0x2B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X2B);
    // 0x8039BB44: jal         0x8006ECA4
    // 0x8039BB48: nop

    func_8006ECA4(rdram, ctx);
        goto after_2;
    // 0x8039BB48: nop

    after_2:
    // 0x8039BB4C: sll         $a0, $v0, 16
    ctx->r4 = S32(ctx->r2 << 16);
    // 0x8039BB50: sra         $t8, $a0, 16
    ctx->r24 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8039BB54: jal         0x80039C50
    // 0x8039BB58: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    func_80039C50(rdram, ctx);
        goto after_3;
    // 0x8039BB58: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    after_3:
    // 0x8039BB5C: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8039BB60: addiu       $v1, $v1, -0x750
    ctx->r3 = ADD32(ctx->r3, -0X750);
    // 0x8039BB64: lh          $v0, 0xC0($v1)
    ctx->r2 = MEM_H(ctx->r3, 0XC0);
    // 0x8039BB68: lh          $a3, 0x18($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X18);
    // 0x8039BB6C: lh          $t4, 0x1C($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X1C);
    // 0x8039BB70: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8039BB74: ori         $at, $at, 0xFEE8
    ctx->r1 = ctx->r1 | 0XFEE8;
    // 0x8039BB78: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x8039BB7C: sll         $t9, $v0, 5
    ctx->r25 = S32(ctx->r2 << 5);
    // 0x8039BB80: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x8039BB84: sll         $t2, $a3, 16
    ctx->r10 = S32(ctx->r7 << 16);
    // 0x8039BB88: addu        $t0, $t9, $at
    ctx->r8 = ADD32(ctx->r25, ctx->r1);
    // 0x8039BB8C: addiu       $t1, $t1, -0x3770
    ctx->r9 = ADD32(ctx->r9, -0X3770);
    // 0x8039BB90: lb          $a1, 0x2D($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X2D);
    // 0x8039BB94: lb          $a2, 0x2B($sp)
    ctx->r6 = MEM_B(ctx->r29, 0X2B);
    // 0x8039BB98: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x8039BB9C: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x8039BBA0: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x8039BBA4: sh          $t6, 0xC0($v1)
    MEM_H(0XC0, ctx->r3) = ctx->r14;
    // 0x8039BBA8: addu        $a0, $t0, $t1
    ctx->r4 = ADD32(ctx->r8, ctx->r9);
    // 0x8039BBAC: jal         0x8006ED00
    // 0x8039BBB0: sra         $a3, $t2, 16
    ctx->r7 = S32(SIGNED(ctx->r10) >> 16);
    func_8006ED00(rdram, ctx);
        goto after_4;
    // 0x8039BBB0: sra         $a3, $t2, 16
    ctx->r7 = S32(SIGNED(ctx->r10) >> 16);
    after_4:
    // 0x8039BBB4: jal         0x8039C854
    // 0x8039BBB8: nop

    func_8039C854(rdram, ctx);
        goto after_5;
    // 0x8039BBB8: nop

    after_5:
    // 0x8039BBBC: b           L_8039BC44
    // 0x8039BBC0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8039BC44;
    // 0x8039BBC0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8039BBC4:
    // 0x8039BBC4: lh          $a1, 0x18($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X18);
    // 0x8039BBC8: lh          $a2, 0x1C($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X1C);
    // 0x8039BBCC: jal         0x80398530
    // 0x8039BBD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(0x80398530)(rdram, ctx);
        goto after_6;
    // 0x8039BBD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x8039BBD4: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8039BBD8: addiu       $v1, $v1, -0x750
    ctx->r3 = ADD32(ctx->r3, -0X750);
    // 0x8039BBDC: lh          $v0, 0xC0($v1)
    ctx->r2 = MEM_H(ctx->r3, 0XC0);
    // 0x8039BBE0: lh          $a1, 0x18($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X18);
    // 0x8039BBE4: lh          $a2, 0x1C($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X1C);
    // 0x8039BBE8: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8039BBEC: ori         $at, $at, 0xFEE8
    ctx->r1 = ctx->r1 | 0XFEE8;
    // 0x8039BBF0: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x8039BBF4: sll         $t7, $v0, 5
    ctx->r15 = S32(ctx->r2 << 5);
    // 0x8039BBF8: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x8039BBFC: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8039BC00: sll         $t2, $a2, 16
    ctx->r10 = S32(ctx->r6 << 16);
    // 0x8039BC04: sll         $t0, $a1, 16
    ctx->r8 = S32(ctx->r5 << 16);
    // 0x8039BC08: addu        $t8, $t7, $at
    ctx->r24 = ADD32(ctx->r15, ctx->r1);
    // 0x8039BC0C: addiu       $t9, $t9, -0x3770
    ctx->r25 = ADD32(ctx->r25, -0X3770);
    // 0x8039BC10: lui         $a3, 0x8028
    ctx->r7 = S32(0X8028 << 16);
    // 0x8039BC14: addiu       $t4, $zero, 0x7
    ctx->r12 = ADD32(0, 0X7);
    // 0x8039BC18: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8039BC1C: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x8039BC20: sh          $t6, 0xC0($v1)
    MEM_H(0XC0, ctx->r3) = ctx->r14;
    // 0x8039BC24: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x8039BC28: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x8039BC2C: addiu       $a3, $a3, 0x5FD4
    ctx->r7 = ADD32(ctx->r7, 0X5FD4);
    // 0x8039BC30: addu        $a0, $t8, $t9
    ctx->r4 = ADD32(ctx->r24, ctx->r25);
    // 0x8039BC34: sra         $a1, $t0, 16
    ctx->r5 = S32(SIGNED(ctx->r8) >> 16);
    // 0x8039BC38: jal         0x8002F3D4
    // 0x8039BC3C: sra         $a2, $t2, 16
    ctx->r6 = S32(SIGNED(ctx->r10) >> 16);
    func_8002F3D4(rdram, ctx);
        goto after_7;
    // 0x8039BC3C: sra         $a2, $t2, 16
    ctx->r6 = S32(SIGNED(ctx->r10) >> 16);
    after_7:
    // 0x8039BC40: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8039BC44:
    // 0x8039BC44: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8039BC48: jr          $ra
    // 0x8039BC4C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8039BC4C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8039BC50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039BC50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8039BC54: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8039BC58: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8039BC5C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8039BC60: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8039BC64: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8039BC68: sb          $zero, -0x329D($at)
    MEM_B(-0X329D, ctx->r1) = 0;
    // 0x8039BC6C: jal         0x800297B4
    // 0x8039BC70: addiu       $a0, $a0, -0x4344
    ctx->r4 = ADD32(ctx->r4, -0X4344);
    func_800297B4(rdram, ctx);
        goto after_0;
    // 0x8039BC70: addiu       $a0, $a0, -0x4344
    ctx->r4 = ADD32(ctx->r4, -0X4344);
    after_0:
    // 0x8039BC74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8039BC78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8039BC7C: jr          $ra
    // 0x8039BC80: nop

    return;
    // 0x8039BC80: nop

;}
RECOMP_FUNC void func_8039BC84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039BC84: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8039BC88: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8039BC8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8039BC90: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8039BC94: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8039BC98: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8039BC9C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8039BCA0: sb          $t6, -0x329D($at)
    MEM_B(-0X329D, ctx->r1) = ctx->r14;
    // 0x8039BCA4: jal         0x800297B4
    // 0x8039BCA8: addiu       $a0, $a0, -0x4344
    ctx->r4 = ADD32(ctx->r4, -0X4344);
    func_800297B4(rdram, ctx);
        goto after_0;
    // 0x8039BCA8: addiu       $a0, $a0, -0x4344
    ctx->r4 = ADD32(ctx->r4, -0X4344);
    after_0:
    // 0x8039BCAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8039BCB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8039BCB4: jr          $ra
    // 0x8039BCB8: nop

    return;
    // 0x8039BCB8: nop

;}
RECOMP_FUNC void func_8039BCBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039BCBC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8039BCC0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8039BCC4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8039BCC8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8039BCCC: jal         0x80036234
    // 0x8039BCD0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_80036234(rdram, ctx);
        goto after_0;
    // 0x8039BCD0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x8039BCD4: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x8039BCD8: jal         0x80035FF0
    // 0x8039BCDC: addiu       $a0, $a0, -0x2C70
    ctx->r4 = ADD32(ctx->r4, -0X2C70);
    func_80035FF0(rdram, ctx);
        goto after_1;
    // 0x8039BCDC: addiu       $a0, $a0, -0x2C70
    ctx->r4 = ADD32(ctx->r4, -0X2C70);
    after_1:
    // 0x8039BCE0: jal         0x80039DF0
    // 0x8039BCE4: nop

    func_80039DF0(rdram, ctx);
        goto after_2;
    // 0x8039BCE4: nop

    after_2:
    // 0x8039BCE8: addiu       $a0, $zero, 0xF00
    ctx->r4 = ADD32(0, 0XF00);
    // 0x8039BCEC: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x8039BCF0: jal         0x80049E40
    // 0x8039BCF4: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    func_80049E40(rdram, ctx);
        goto after_3;
    // 0x8039BCF4: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    after_3:
    // 0x8039BCF8: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8039BCFC: jal         0x8002AAC0
    // 0x8039BD00: addiu       $a0, $a0, 0x128C
    ctx->r4 = ADD32(ctx->r4, 0X128C);
    func_8002AAC0(rdram, ctx);
        goto after_4;
    // 0x8039BD00: addiu       $a0, $a0, 0x128C
    ctx->r4 = ADD32(ctx->r4, 0X128C);
    after_4:
    // 0x8039BD04: jal         0x8006FB58
    // 0x8039BD08: nop

    func_8006FB58(rdram, ctx);
        goto after_5;
    // 0x8039BD08: nop

    after_5:
    // 0x8039BD0C: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8039BD10: addiu       $a0, $a0, -0x3AAC
    ctx->r4 = ADD32(ctx->r4, -0X3AAC);
    // 0x8039BD14: jal         0x800293DC
    // 0x8039BD18: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800293DC(rdram, ctx);
        goto after_6;
    // 0x8039BD18: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_6:
    // 0x8039BD1C: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8039BD20: addiu       $a0, $a0, -0x3998
    ctx->r4 = ADD32(ctx->r4, -0X3998);
    // 0x8039BD24: jal         0x800293DC
    // 0x8039BD28: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_800293DC(rdram, ctx);
        goto after_7;
    // 0x8039BD28: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_7:
    // 0x8039BD2C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8039BD30: lbu         $t6, -0x329D($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X329D);
    // 0x8039BD34: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8039BD38: bne         $t6, $zero, L_8039BD50
    if (ctx->r14 != 0) {
        // 0x8039BD3C: addiu       $a0, $a0, -0x4284
        ctx->r4 = ADD32(ctx->r4, -0X4284);
            goto L_8039BD50;
    }
    // 0x8039BD3C: addiu       $a0, $a0, -0x4284
    ctx->r4 = ADD32(ctx->r4, -0X4284);
    // 0x8039BD40: sh          $zero, 0x2A($s0)
    MEM_H(0X2A, ctx->r16) = 0;
    // 0x8039BD44: lh          $t7, 0x2A($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X2A);
    // 0x8039BD48: b           L_8039BD64
    // 0x8039BD4C: sh          $t7, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r15;
        goto L_8039BD64;
    // 0x8039BD4C: sh          $t7, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r15;
L_8039BD50:
    // 0x8039BD50: addiu       $t8, $zero, 0xC
    ctx->r24 = ADD32(0, 0XC);
    // 0x8039BD54: sh          $t8, 0x2A($s0)
    MEM_H(0X2A, ctx->r16) = ctx->r24;
    // 0x8039BD58: lh          $t9, 0x2A($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X2A);
    // 0x8039BD5C: nop

    // 0x8039BD60: sh          $t9, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r25;
L_8039BD64:
    // 0x8039BD64: jal         0x8004A9B4
    // 0x8039BD68: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_8004A9B4(rdram, ctx);
        goto after_8;
    // 0x8039BD68: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_8:
    // 0x8039BD6C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8039BD70: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8039BD74: jr          $ra
    // 0x8039BD78: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8039BD78: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8039BD7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039BD7C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8039BD80: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8039BD84: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8039BD88: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8039BD8C: jal         0x800357CC
    // 0x8039BD90: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_800357CC(rdram, ctx);
        goto after_0;
    // 0x8039BD90: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x8039BD94: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8039BD98: lw          $t6, -0x3250($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3250);
    // 0x8039BD9C: nop

    // 0x8039BDA0: lhu         $a0, 0x0($t6)
    ctx->r4 = MEM_HU(ctx->r14, 0X0);
    // 0x8039BDA4: jal         0x80035D2C
    // 0x8039BDA8: nop

    func_80035D2C(rdram, ctx);
        goto after_1;
    // 0x8039BDA8: nop

    after_1:
    // 0x8039BDAC: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x8039BDB0: lui         $t9, 0x803A
    ctx->r25 = S32(0X803A << 16);
    // 0x8039BDB4: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x8039BDB8: lw          $t9, 0x12E8($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X12E8);
    // 0x8039BDBC: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x8039BDC0: jalr        $t9
    // 0x8039BDC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x8039BDC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8039BDC8: lh          $a0, 0x2C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X2C);
    // 0x8039BDCC: jal         0x8001D6EC
    // 0x8039BDD0: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    func_8001D6EC(rdram, ctx);
        goto after_3;
    // 0x8039BDD0: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    after_3:
    // 0x8039BDD4: lh          $a0, 0x26($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X26);
    // 0x8039BDD8: sh          $v0, 0x2C($s0)
    MEM_H(0X2C, ctx->r16) = ctx->r2;
    // 0x8039BDDC: jal         0x8001D6EC
    // 0x8039BDE0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001D6EC(rdram, ctx);
        goto after_4;
    // 0x8039BDE0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x8039BDE4: sh          $v0, 0x26($s0)
    MEM_H(0X26, ctx->r16) = ctx->r2;
    // 0x8039BDE8: jal         0x80035860
    // 0x8039BDEC: sh          $zero, 0x28($s0)
    MEM_H(0X28, ctx->r16) = 0;
    func_80035860(rdram, ctx);
        goto after_5;
    // 0x8039BDEC: sh          $zero, 0x28($s0)
    MEM_H(0X28, ctx->r16) = 0;
    after_5:
    // 0x8039BDF0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8039BDF4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8039BDF8: jr          $ra
    // 0x8039BDFC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8039BDFC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8039BE00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039BE00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8039BE04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8039BE08: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8039BE0C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8039BE10: sh          $v1, 0x28($a0)
    MEM_H(0X28, ctx->r4) = ctx->r3;
    // 0x8039BE14: jal         0x80035770
    // 0x8039BE18: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80035770(rdram, ctx);
        goto after_0;
    // 0x8039BE18: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8039BE1C: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x8039BE20: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8039BE24: lhu         $t6, 0x24($a2)
    ctx->r14 = MEM_HU(ctx->r6, 0X24);
    // 0x8039BE28: nop

    // 0x8039BE2C: sltiu       $at, $t6, 0xF
    ctx->r1 = ctx->r14 < 0XF ? 1 : 0;
    // 0x8039BE30: beq         $at, $zero, L_8039C038
    if (ctx->r1 == 0) {
        // 0x8039BE34: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_8039C038;
    }
    // 0x8039BE34: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8039BE38: lui         $at, 0x803A
    ctx->r1 = S32(0X803A << 16);
    // 0x8039BE3C: addu        $at, $at, $t6
    gpr jr_addend_8039BE48 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8039BE40: lw          $t6, 0x171C($at)
    ctx->r14 = ADD32(ctx->r1, 0X171C);
    // 0x8039BE44: nop

    // 0x8039BE48: jr          $t6
    // 0x8039BE4C: nop

    switch (jr_addend_8039BE48 >> 2) {
        case 0: goto L_8039BE50; break;
        case 1: goto L_8039BE80; break;
        case 2: goto L_8039BEC4; break;
        case 3: goto L_8039BEF8; break;
        case 4: goto L_8039BF38; break;
        case 5: goto L_8039BF48; break;
        case 6: goto L_8039BF78; break;
        case 7: goto L_8039C038; break;
        case 8: goto L_8039C038; break;
        case 9: goto L_8039C038; break;
        case 10: goto L_8039C038; break;
        case 11: goto L_8039C038; break;
        case 12: goto L_8039BF80; break;
        case 13: goto L_8039BFE0; break;
        case 14: goto L_8039BF38; break;
        default: switch_error(__func__, 0x8039BE48, 0x803A171C);
    }
    // 0x8039BE4C: nop

L_8039BE50:
    // 0x8039BE50: lh          $t7, 0x50($a2)
    ctx->r15 = MEM_H(ctx->r6, 0X50);
    // 0x8039BE54: addiu       $t9, $zero, 0x6
    ctx->r25 = ADD32(0, 0X6);
    // 0x8039BE58: bne         $t7, $zero, L_8039BE70
    if (ctx->r15 != 0) {
        // 0x8039BE5C: addiu       $t0, $zero, 0x5
        ctx->r8 = ADD32(0, 0X5);
            goto L_8039BE70;
    }
    // 0x8039BE5C: addiu       $t0, $zero, 0x5
    ctx->r8 = ADD32(0, 0X5);
    // 0x8039BE60: sh          $v1, 0x24($a2)
    MEM_H(0X24, ctx->r6) = ctx->r3;
    // 0x8039BE64: lh          $t8, 0x24($a2)
    ctx->r24 = MEM_H(ctx->r6, 0X24);
    // 0x8039BE68: b           L_8039BE78
    // 0x8039BE6C: sh          $t8, 0x2A($a2)
    MEM_H(0X2A, ctx->r6) = ctx->r24;
        goto L_8039BE78;
    // 0x8039BE6C: sh          $t8, 0x2A($a2)
    MEM_H(0X2A, ctx->r6) = ctx->r24;
L_8039BE70:
    // 0x8039BE70: sh          $t9, 0x2A($a2)
    MEM_H(0X2A, ctx->r6) = ctx->r25;
    // 0x8039BE74: sh          $t0, 0x24($a2)
    MEM_H(0X24, ctx->r6) = ctx->r8;
L_8039BE78:
    // 0x8039BE78: b           L_8039C038
    // 0x8039BE7C: sh          $zero, 0x30($a2)
    MEM_H(0X30, ctx->r6) = 0;
        goto L_8039C038;
    // 0x8039BE7C: sh          $zero, 0x30($a2)
    MEM_H(0X30, ctx->r6) = 0;
L_8039BE80:
    // 0x8039BE80: sh          $v1, 0x30($a2)
    MEM_H(0X30, ctx->r6) = ctx->r3;
    // 0x8039BE84: lh          $a0, 0x26($a2)
    ctx->r4 = MEM_H(ctx->r6, 0X26);
    // 0x8039BE88: lh          $a1, 0x2C($a2)
    ctx->r5 = MEM_H(ctx->r6, 0X2C);
    // 0x8039BE8C: jal         0x8039C91C
    // 0x8039BE90: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_8039C91C(rdram, ctx);
        goto after_1;
    // 0x8039BE90: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_1:
    // 0x8039BE94: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x8039BE98: bne         $v0, $zero, L_8039BEB4
    if (ctx->r2 != 0) {
        // 0x8039BE9C: addiu       $t3, $zero, 0x3
        ctx->r11 = ADD32(0, 0X3);
            goto L_8039BEB4;
    }
    // 0x8039BE9C: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x8039BEA0: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x8039BEA4: sh          $t1, 0x24($a2)
    MEM_H(0X24, ctx->r6) = ctx->r9;
    // 0x8039BEA8: lh          $t2, 0x24($a2)
    ctx->r10 = MEM_H(ctx->r6, 0X24);
    // 0x8039BEAC: b           L_8039C038
    // 0x8039BEB0: sh          $t2, 0x2A($a2)
    MEM_H(0X2A, ctx->r6) = ctx->r10;
        goto L_8039C038;
    // 0x8039BEB0: sh          $t2, 0x2A($a2)
    MEM_H(0X2A, ctx->r6) = ctx->r10;
L_8039BEB4:
    // 0x8039BEB4: sh          $t3, 0x24($a2)
    MEM_H(0X24, ctx->r6) = ctx->r11;
    // 0x8039BEB8: lh          $t4, 0x24($a2)
    ctx->r12 = MEM_H(ctx->r6, 0X24);
    // 0x8039BEBC: b           L_8039C038
    // 0x8039BEC0: sh          $t4, 0x2A($a2)
    MEM_H(0X2A, ctx->r6) = ctx->r12;
        goto L_8039C038;
    // 0x8039BEC0: sh          $t4, 0x2A($a2)
    MEM_H(0X2A, ctx->r6) = ctx->r12;
L_8039BEC4:
    // 0x8039BEC4: lh          $t5, 0x50($a2)
    ctx->r13 = MEM_H(ctx->r6, 0X50);
    // 0x8039BEC8: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x8039BECC: bne         $t5, $zero, L_8039BEE4
    if (ctx->r13 != 0) {
        // 0x8039BED0: nop
    
            goto L_8039BEE4;
    }
    // 0x8039BED0: nop

    // 0x8039BED4: sh          $t6, 0x24($a2)
    MEM_H(0X24, ctx->r6) = ctx->r14;
    // 0x8039BED8: lh          $t7, 0x24($a2)
    ctx->r15 = MEM_H(ctx->r6, 0X24);
    // 0x8039BEDC: b           L_8039C038
    // 0x8039BEE0: sh          $t7, 0x2A($a2)
    MEM_H(0X2A, ctx->r6) = ctx->r15;
        goto L_8039C038;
    // 0x8039BEE0: sh          $t7, 0x2A($a2)
    MEM_H(0X2A, ctx->r6) = ctx->r15;
L_8039BEE4:
    // 0x8039BEE4: sh          $v1, 0x24($a2)
    MEM_H(0X24, ctx->r6) = ctx->r3;
    // 0x8039BEE8: lh          $t8, 0x24($a2)
    ctx->r24 = MEM_H(ctx->r6, 0X24);
    // 0x8039BEEC: sh          $zero, 0x30($a2)
    MEM_H(0X30, ctx->r6) = 0;
    // 0x8039BEF0: b           L_8039C038
    // 0x8039BEF4: sh          $t8, 0x2A($a2)
    MEM_H(0X2A, ctx->r6) = ctx->r24;
        goto L_8039C038;
    // 0x8039BEF4: sh          $t8, 0x2A($a2)
    MEM_H(0X2A, ctx->r6) = ctx->r24;
L_8039BEF8:
    // 0x8039BEF8: lh          $t9, 0x50($a2)
    ctx->r25 = MEM_H(ctx->r6, 0X50);
    // 0x8039BEFC: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x8039BF00: bne         $t9, $zero, L_8039BF24
    if (ctx->r25 != 0) {
        // 0x8039BF04: addiu       $t1, $zero, 0x11
        ctx->r9 = ADD32(0, 0X11);
            goto L_8039BF24;
    }
    // 0x8039BF04: addiu       $t1, $zero, 0x11
    ctx->r9 = ADD32(0, 0X11);
    // 0x8039BF08: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8039BF0C: sh          $t0, 0x24($a2)
    MEM_H(0X24, ctx->r6) = ctx->r8;
    // 0x8039BF10: sh          $t1, 0x2A($a2)
    MEM_H(0X2A, ctx->r6) = ctx->r9;
    // 0x8039BF14: jal         0x800296E0
    // 0x8039BF18: addiu       $a0, $a0, -0x3FB8
    ctx->r4 = ADD32(ctx->r4, -0X3FB8);
    func_800296E0(rdram, ctx);
        goto after_2;
    // 0x8039BF18: addiu       $a0, $a0, -0x3FB8
    ctx->r4 = ADD32(ctx->r4, -0X3FB8);
    after_2:
    // 0x8039BF1C: b           L_8039C03C
    // 0x8039BF20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8039C03C;
    // 0x8039BF20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8039BF24:
    // 0x8039BF24: sh          $v1, 0x24($a2)
    MEM_H(0X24, ctx->r6) = ctx->r3;
    // 0x8039BF28: lh          $t2, 0x24($a2)
    ctx->r10 = MEM_H(ctx->r6, 0X24);
    // 0x8039BF2C: sh          $zero, 0x30($a2)
    MEM_H(0X30, ctx->r6) = 0;
    // 0x8039BF30: b           L_8039C038
    // 0x8039BF34: sh          $t2, 0x2A($a2)
    MEM_H(0X2A, ctx->r6) = ctx->r10;
        goto L_8039C038;
    // 0x8039BF34: sh          $t2, 0x2A($a2)
    MEM_H(0X2A, ctx->r6) = ctx->r10;
L_8039BF38:
    // 0x8039BF38: jal         0x80037908
    // 0x8039BF3C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80037908(rdram, ctx);
        goto after_3;
    // 0x8039BF3C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_3:
    // 0x8039BF40: b           L_8039C03C
    // 0x8039BF44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8039C03C;
    // 0x8039BF44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8039BF48:
    // 0x8039BF48: lh          $t3, 0x50($a2)
    ctx->r11 = MEM_H(ctx->r6, 0X50);
    // 0x8039BF4C: nop

    // 0x8039BF50: bne         $t3, $zero, L_8039BF68
    if (ctx->r11 != 0) {
        // 0x8039BF54: nop
    
            goto L_8039BF68;
    }
    // 0x8039BF54: nop

    // 0x8039BF58: jal         0x80037908
    // 0x8039BF5C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_80037908(rdram, ctx);
        goto after_4;
    // 0x8039BF5C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_4:
    // 0x8039BF60: b           L_8039C03C
    // 0x8039BF64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8039C03C;
    // 0x8039BF64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8039BF68:
    // 0x8039BF68: jal         0x80037908
    // 0x8039BF6C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80037908(rdram, ctx);
        goto after_5;
    // 0x8039BF6C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_5:
    // 0x8039BF70: b           L_8039C03C
    // 0x8039BF74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8039C03C;
    // 0x8039BF74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8039BF78:
    // 0x8039BF78: b           L_8039C038
    // 0x8039BF7C: sh          $v1, 0x24($a2)
    MEM_H(0X24, ctx->r6) = ctx->r3;
        goto L_8039C038;
    // 0x8039BF7C: sh          $v1, 0x24($a2)
    MEM_H(0X24, ctx->r6) = ctx->r3;
L_8039BF80:
    // 0x8039BF80: sh          $v1, 0x30($a2)
    MEM_H(0X30, ctx->r6) = ctx->r3;
    // 0x8039BF84: lh          $a0, 0x26($a2)
    ctx->r4 = MEM_H(ctx->r6, 0X26);
    // 0x8039BF88: lh          $a1, 0x2C($a2)
    ctx->r5 = MEM_H(ctx->r6, 0X2C);
    // 0x8039BF8C: jal         0x8039C91C
    // 0x8039BF90: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_8039C91C(rdram, ctx);
        goto after_6;
    // 0x8039BF90: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_6:
    // 0x8039BF94: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x8039BF98: bne         $v0, $zero, L_8039BFC0
    if (ctx->r2 != 0) {
        // 0x8039BF9C: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8039BFC0;
    }
    // 0x8039BF9C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8039BFA0: addiu       $t4, $zero, 0xD
    ctx->r12 = ADD32(0, 0XD);
    // 0x8039BFA4: sh          $t4, 0x24($a2)
    MEM_H(0X24, ctx->r6) = ctx->r12;
    // 0x8039BFA8: sb          $v1, 0x54($a2)
    MEM_B(0X54, ctx->r6) = ctx->r3;
    // 0x8039BFAC: lh          $t5, 0x24($a2)
    ctx->r13 = MEM_H(ctx->r6, 0X24);
    // 0x8039BFB0: lb          $t6, 0x54($a2)
    ctx->r14 = MEM_B(ctx->r6, 0X54);
    // 0x8039BFB4: sh          $t5, 0x2A($a2)
    MEM_H(0X2A, ctx->r6) = ctx->r13;
    // 0x8039BFB8: b           L_8039C038
    // 0x8039BFBC: sh          $t6, 0x50($a2)
    MEM_H(0X50, ctx->r6) = ctx->r14;
        goto L_8039C038;
    // 0x8039BFBC: sh          $t6, 0x50($a2)
    MEM_H(0X50, ctx->r6) = ctx->r14;
L_8039BFC0:
    // 0x8039BFC0: addiu       $t7, $zero, 0xF
    ctx->r15 = ADD32(0, 0XF);
    // 0x8039BFC4: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8039BFC8: sh          $t7, 0x2A($a2)
    MEM_H(0X2A, ctx->r6) = ctx->r15;
    // 0x8039BFCC: addiu       $a0, $a0, -0x3D5C
    ctx->r4 = ADD32(ctx->r4, -0X3D5C);
    // 0x8039BFD0: jal         0x8002989C
    // 0x8039BFD4: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    func_8002989C(rdram, ctx);
        goto after_7;
    // 0x8039BFD4: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_7:
    // 0x8039BFD8: b           L_8039C03C
    // 0x8039BFDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8039C03C;
    // 0x8039BFDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8039BFE0:
    // 0x8039BFE0: lh          $t8, 0x50($a2)
    ctx->r24 = MEM_H(ctx->r6, 0X50);
    // 0x8039BFE4: addiu       $t1, $zero, 0xC
    ctx->r9 = ADD32(0, 0XC);
    // 0x8039BFE8: bne         $t8, $zero, L_8039C028
    if (ctx->r24 != 0) {
        // 0x8039BFEC: nop
    
            goto L_8039C028;
    }
    // 0x8039BFEC: nop

    // 0x8039BFF0: lh          $a0, 0x26($a2)
    ctx->r4 = MEM_H(ctx->r6, 0X26);
    // 0x8039BFF4: lh          $a1, 0x2C($a2)
    ctx->r5 = MEM_H(ctx->r6, 0X2C);
    // 0x8039BFF8: jal         0x8039CB24
    // 0x8039BFFC: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_8039CB24(rdram, ctx);
        goto after_8;
    // 0x8039BFFC: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_8:
    // 0x8039C000: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x8039C004: addiu       $t9, $zero, 0xE
    ctx->r25 = ADD32(0, 0XE);
    // 0x8039C008: addiu       $t0, $zero, 0x11
    ctx->r8 = ADD32(0, 0X11);
    // 0x8039C00C: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8039C010: addiu       $a0, $a0, -0x3F10
    ctx->r4 = ADD32(ctx->r4, -0X3F10);
    // 0x8039C014: sh          $t9, 0x24($a2)
    MEM_H(0X24, ctx->r6) = ctx->r25;
    // 0x8039C018: jal         0x800296E0
    // 0x8039C01C: sh          $t0, 0x2A($a2)
    MEM_H(0X2A, ctx->r6) = ctx->r8;
    func_800296E0(rdram, ctx);
        goto after_9;
    // 0x8039C01C: sh          $t0, 0x2A($a2)
    MEM_H(0X2A, ctx->r6) = ctx->r8;
    after_9:
    // 0x8039C020: b           L_8039C03C
    // 0x8039C024: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8039C03C;
    // 0x8039C024: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8039C028:
    // 0x8039C028: sh          $t1, 0x24($a2)
    MEM_H(0X24, ctx->r6) = ctx->r9;
    // 0x8039C02C: lh          $t2, 0x24($a2)
    ctx->r10 = MEM_H(ctx->r6, 0X24);
    // 0x8039C030: sh          $zero, 0x30($a2)
    MEM_H(0X30, ctx->r6) = 0;
    // 0x8039C034: sh          $t2, 0x2A($a2)
    MEM_H(0X2A, ctx->r6) = ctx->r10;
L_8039C038:
    // 0x8039C038: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8039C03C:
    // 0x8039C03C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8039C040: jr          $ra
    // 0x8039C044: nop

    return;
    // 0x8039C044: nop

;}
RECOMP_FUNC void func_8039C048(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039C048: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8039C04C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8039C050: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8039C054: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8039C058: lh          $a1, 0x2C($a2)
    ctx->r5 = MEM_H(ctx->r6, 0X2C);
    // 0x8039C05C: lh          $a0, 0x26($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X26);
    // 0x8039C060: jal         0x8039C9B0
    // 0x8039C064: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_8039C9B0(rdram, ctx);
        goto after_0;
    // 0x8039C064: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x8039C068: jal         0x80032B94
    // 0x8039C06C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80032B94(rdram, ctx);
        goto after_1;
    // 0x8039C06C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x8039C070: jal         0x80034908
    // 0x8039C074: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80034908(rdram, ctx);
        goto after_2;
    // 0x8039C074: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x8039C078: bne         $v0, $zero, L_8039C0C8
    if (ctx->r2 != 0) {
        // 0x8039C07C: lw          $t7, 0x18($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X18);
            goto L_8039C0C8;
    }
    // 0x8039C07C: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8039C080: jal         0x80035154
    // 0x8039C084: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80035154(rdram, ctx);
        goto after_3;
    // 0x8039C084: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x8039C088: beq         $v0, $zero, L_8039C0C8
    if (ctx->r2 == 0) {
        // 0x8039C08C: lw          $t7, 0x18($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X18);
            goto L_8039C0C8;
    }
    // 0x8039C08C: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8039C090: jal         0x800353B0
    // 0x8039C094: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800353B0(rdram, ctx);
        goto after_4;
    // 0x8039C094: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_4:
    // 0x8039C098: bltz        $v0, L_8039C0C4
    if (SIGNED(ctx->r2) < 0) {
        // 0x8039C09C: lui         $at, 0x8012
        ctx->r1 = S32(0X8012 << 16);
            goto L_8039C0C4;
    }
    // 0x8039C09C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8039C0A0: lui         $a0, 0x803C
    ctx->r4 = S32(0X803C << 16);
    // 0x8039C0A4: sh          $zero, -0x32A6($at)
    MEM_H(-0X32A6, ctx->r1) = 0;
    // 0x8039C0A8: jal         0x80029220
    // 0x8039C0AC: addiu       $a0, $a0, -0x2B50
    ctx->r4 = ADD32(ctx->r4, -0X2B50);
    func_80029220(rdram, ctx);
        goto after_5;
    // 0x8039C0AC: addiu       $a0, $a0, -0x2B50
    ctx->r4 = ADD32(ctx->r4, -0X2B50);
    after_5:
    // 0x8039C0B0: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8039C0B4: jal         0x800296E0
    // 0x8039C0B8: addiu       $a0, $a0, -0x3E68
    ctx->r4 = ADD32(ctx->r4, -0X3E68);
    func_800296E0(rdram, ctx);
        goto after_6;
    // 0x8039C0B8: addiu       $a0, $a0, -0x3E68
    ctx->r4 = ADD32(ctx->r4, -0X3E68);
    after_6:
    // 0x8039C0BC: b           L_8039C0E4
    // 0x8039C0C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8039C0E4;
    // 0x8039C0C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8039C0C4:
    // 0x8039C0C4: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
L_8039C0C8:
    // 0x8039C0C8: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x8039C0CC: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8039C0D0: addiu       $a0, $a0, -0x3D9C
    ctx->r4 = ADD32(ctx->r4, -0X3D9C);
    // 0x8039C0D4: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x8039C0D8: jal         0x8002989C
    // 0x8039C0DC: sh          $t6, 0x2A($t7)
    MEM_H(0X2A, ctx->r15) = ctx->r14;
    func_8002989C(rdram, ctx);
        goto after_7;
    // 0x8039C0DC: sh          $t6, 0x2A($t7)
    MEM_H(0X2A, ctx->r15) = ctx->r14;
    after_7:
    // 0x8039C0E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8039C0E4:
    // 0x8039C0E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8039C0E8: jr          $ra
    // 0x8039C0EC: nop

    return;
    // 0x8039C0EC: nop

;}
RECOMP_FUNC void func_8039C0F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039C0F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8039C0F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8039C0F8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8039C0FC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8039C100: jal         0x80032794
    // 0x8039C104: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80032794(rdram, ctx);
        goto after_0;
    // 0x8039C104: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x8039C108: jal         0x80032200
    // 0x8039C10C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80032200(rdram, ctx);
        goto after_1;
    // 0x8039C10C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x8039C110: jal         0x80032B94
    // 0x8039C114: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80032B94(rdram, ctx);
        goto after_2;
    // 0x8039C114: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x8039C118: jal         0x80034908
    // 0x8039C11C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80034908(rdram, ctx);
        goto after_3;
    // 0x8039C11C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x8039C120: bne         $v0, $zero, L_8039C170
    if (ctx->r2 != 0) {
        // 0x8039C124: lw          $t7, 0x18($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X18);
            goto L_8039C170;
    }
    // 0x8039C124: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8039C128: jal         0x80035154
    // 0x8039C12C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80035154(rdram, ctx);
        goto after_4;
    // 0x8039C12C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_4:
    // 0x8039C130: beq         $v0, $zero, L_8039C170
    if (ctx->r2 == 0) {
        // 0x8039C134: lw          $t7, 0x18($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X18);
            goto L_8039C170;
    }
    // 0x8039C134: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8039C138: jal         0x800353B0
    // 0x8039C13C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800353B0(rdram, ctx);
        goto after_5;
    // 0x8039C13C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_5:
    // 0x8039C140: bltz        $v0, L_8039C16C
    if (SIGNED(ctx->r2) < 0) {
        // 0x8039C144: lui         $at, 0x8012
        ctx->r1 = S32(0X8012 << 16);
            goto L_8039C16C;
    }
    // 0x8039C144: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8039C148: lui         $a0, 0x803C
    ctx->r4 = S32(0X803C << 16);
    // 0x8039C14C: sh          $zero, -0x32A6($at)
    MEM_H(-0X32A6, ctx->r1) = 0;
    // 0x8039C150: jal         0x80029220
    // 0x8039C154: addiu       $a0, $a0, -0x2B50
    ctx->r4 = ADD32(ctx->r4, -0X2B50);
    func_80029220(rdram, ctx);
        goto after_6;
    // 0x8039C154: addiu       $a0, $a0, -0x2B50
    ctx->r4 = ADD32(ctx->r4, -0X2B50);
    after_6:
    // 0x8039C158: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8039C15C: jal         0x800296E0
    // 0x8039C160: addiu       $a0, $a0, -0x3E68
    ctx->r4 = ADD32(ctx->r4, -0X3E68);
    func_800296E0(rdram, ctx);
        goto after_7;
    // 0x8039C160: addiu       $a0, $a0, -0x3E68
    ctx->r4 = ADD32(ctx->r4, -0X3E68);
    after_7:
    // 0x8039C164: b           L_8039C18C
    // 0x8039C168: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8039C18C;
    // 0x8039C168: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8039C16C:
    // 0x8039C16C: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
L_8039C170:
    // 0x8039C170: addiu       $t6, $zero, 0xE
    ctx->r14 = ADD32(0, 0XE);
    // 0x8039C174: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8039C178: addiu       $a0, $a0, -0x3D24
    ctx->r4 = ADD32(ctx->r4, -0X3D24);
    // 0x8039C17C: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x8039C180: jal         0x8002989C
    // 0x8039C184: sh          $t6, 0x2A($t7)
    MEM_H(0X2A, ctx->r15) = ctx->r14;
    func_8002989C(rdram, ctx);
        goto after_8;
    // 0x8039C184: sh          $t6, 0x2A($t7)
    MEM_H(0X2A, ctx->r15) = ctx->r14;
    after_8:
    // 0x8039C188: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8039C18C:
    // 0x8039C18C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8039C190: jr          $ra
    // 0x8039C194: nop

    return;
    // 0x8039C194: nop

;}
RECOMP_FUNC void func_8039C198(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039C198: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8039C19C: lh          $v0, -0x32A6($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X32A6);
    // 0x8039C1A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8039C1A4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8039C1A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8039C1AC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8039C1B0: bne         $v0, $at, L_8039C1F8
    if (ctx->r2 != ctx->r1) {
        // 0x8039C1B4: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_8039C1F8;
    }
    // 0x8039C1B4: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8039C1B8: lh          $t6, 0x24($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X24);
    // 0x8039C1BC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8039C1C0: bne         $v0, $t6, L_8039C1E0
    if (ctx->r2 != ctx->r14) {
        // 0x8039C1C4: addiu       $t7, $zero, 0xE
        ctx->r15 = ADD32(0, 0XE);
            goto L_8039C1E0;
    }
    // 0x8039C1C4: addiu       $t7, $zero, 0xE
    ctx->r15 = ADD32(0, 0XE);
    // 0x8039C1C8: sh          $v0, 0x2A($a0)
    MEM_H(0X2A, ctx->r4) = ctx->r2;
    // 0x8039C1CC: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8039C1D0: jal         0x800296E0
    // 0x8039C1D4: addiu       $a0, $a0, -0x3D9C
    ctx->r4 = ADD32(ctx->r4, -0X3D9C);
    func_800296E0(rdram, ctx);
        goto after_0;
    // 0x8039C1D4: addiu       $a0, $a0, -0x3D9C
    ctx->r4 = ADD32(ctx->r4, -0X3D9C);
    after_0:
    // 0x8039C1D8: b           L_8039C258
    // 0x8039C1DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8039C258;
    // 0x8039C1DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8039C1E0:
    // 0x8039C1E0: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8039C1E4: sh          $t7, 0x2A($a2)
    MEM_H(0X2A, ctx->r6) = ctx->r15;
    // 0x8039C1E8: jal         0x800296E0
    // 0x8039C1EC: addiu       $a0, $a0, -0x3D24
    ctx->r4 = ADD32(ctx->r4, -0X3D24);
    func_800296E0(rdram, ctx);
        goto after_1;
    // 0x8039C1EC: addiu       $a0, $a0, -0x3D24
    ctx->r4 = ADD32(ctx->r4, -0X3D24);
    after_1:
    // 0x8039C1F0: b           L_8039C258
    // 0x8039C1F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8039C258;
    // 0x8039C1F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8039C1F8:
    // 0x8039C1F8: slti        $at, $v0, 0x6
    ctx->r1 = SIGNED(ctx->r2) < 0X6 ? 1 : 0;
    // 0x8039C1FC: bne         $at, $zero, L_8039C254
    if (ctx->r1 != 0) {
        // 0x8039C200: addiu       $t8, $zero, 0x10
        ctx->r24 = ADD32(0, 0X10);
            goto L_8039C254;
    }
    // 0x8039C200: addiu       $t8, $zero, 0x10
    ctx->r24 = ADD32(0, 0X10);
    // 0x8039C204: sh          $t8, 0x2A($a2)
    MEM_H(0X2A, ctx->r6) = ctx->r24;
    // 0x8039C208: jal         0x800357AC
    // 0x8039C20C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_800357AC(rdram, ctx);
        goto after_2;
    // 0x8039C20C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_2:
    // 0x8039C210: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x8039C214: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8039C218: lh          $t9, 0x24($a2)
    ctx->r25 = MEM_H(ctx->r6, 0X24);
    // 0x8039C21C: addiu       $t0, $zero, 0xE
    ctx->r8 = ADD32(0, 0XE);
    // 0x8039C220: bne         $v0, $t9, L_8039C244
    if (ctx->r2 != ctx->r25) {
        // 0x8039C224: lui         $a0, 0x803A
        ctx->r4 = S32(0X803A << 16);
            goto L_8039C244;
    }
    // 0x8039C224: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8039C228: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8039C22C: sh          $v0, 0x2A($a2)
    MEM_H(0X2A, ctx->r6) = ctx->r2;
    // 0x8039C230: addiu       $a0, $a0, -0x3D9C
    ctx->r4 = ADD32(ctx->r4, -0X3D9C);
    // 0x8039C234: jal         0x8002989C
    // 0x8039C238: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    func_8002989C(rdram, ctx);
        goto after_3;
    // 0x8039C238: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    after_3:
    // 0x8039C23C: b           L_8039C258
    // 0x8039C240: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8039C258;
    // 0x8039C240: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8039C244:
    // 0x8039C244: sh          $t0, 0x2A($a2)
    MEM_H(0X2A, ctx->r6) = ctx->r8;
    // 0x8039C248: addiu       $a0, $a0, -0x3D24
    ctx->r4 = ADD32(ctx->r4, -0X3D24);
    // 0x8039C24C: jal         0x8002989C
    // 0x8039C250: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    func_8002989C(rdram, ctx);
        goto after_4;
    // 0x8039C250: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    after_4:
L_8039C254:
    // 0x8039C254: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8039C258:
    // 0x8039C258: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8039C25C: jr          $ra
    // 0x8039C260: nop

    return;
    // 0x8039C260: nop

;}
RECOMP_FUNC void func_8039C264(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039C264: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8039C268: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8039C26C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8039C270: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8039C274: addiu       $t6, $zero, 0x9
    ctx->r14 = ADD32(0, 0X9);
    // 0x8039C278: sh          $t6, 0x2A($a0)
    MEM_H(0X2A, ctx->r4) = ctx->r14;
    // 0x8039C27C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8039C280: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8039C284: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8039C288: sh          $t7, -0x32A8($at)
    MEM_H(-0X32A8, ctx->r1) = ctx->r15;
    // 0x8039C28C: jal         0x800296E0
    // 0x8039C290: addiu       $a0, $a0, -0x4284
    ctx->r4 = ADD32(ctx->r4, -0X4284);
    func_800296E0(rdram, ctx);
        goto after_0;
    // 0x8039C290: addiu       $a0, $a0, -0x4284
    ctx->r4 = ADD32(ctx->r4, -0X4284);
    after_0:
    // 0x8039C294: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8039C298: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8039C29C: jr          $ra
    // 0x8039C2A0: nop

    return;
    // 0x8039C2A0: nop

;}
RECOMP_FUNC void func_8039C2A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039C2A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8039C2A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8039C2AC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8039C2B0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8039C2B4: addiu       $t6, $zero, 0xC
    ctx->r14 = ADD32(0, 0XC);
    // 0x8039C2B8: sh          $zero, 0x30($a0)
    MEM_H(0X30, ctx->r4) = 0;
    // 0x8039C2BC: sh          $t6, 0x2A($a0)
    MEM_H(0X2A, ctx->r4) = ctx->r14;
    // 0x8039C2C0: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8039C2C4: jal         0x800296E0
    // 0x8039C2C8: addiu       $a0, $a0, -0x4284
    ctx->r4 = ADD32(ctx->r4, -0X4284);
    func_800296E0(rdram, ctx);
        goto after_0;
    // 0x8039C2C8: addiu       $a0, $a0, -0x4284
    ctx->r4 = ADD32(ctx->r4, -0X4284);
    after_0:
    // 0x8039C2CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8039C2D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8039C2D4: jr          $ra
    // 0x8039C2D8: nop

    return;
    // 0x8039C2D8: nop

;}
RECOMP_FUNC void func_8039C2DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039C2DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8039C2E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8039C2E4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8039C2E8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8039C2EC: jal         0x80037908
    // 0x8039C2F0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80037908(rdram, ctx);
        goto after_0;
    // 0x8039C2F0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x8039C2F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8039C2F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8039C2FC: jr          $ra
    // 0x8039C300: nop

    return;
    // 0x8039C300: nop

;}
RECOMP_FUNC void func_8039C304(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039C304: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8039C308: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8039C30C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8039C310: lhu         $t6, 0x24($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X24);
    // 0x8039C314: nop

    // 0x8039C318: sltiu       $at, $t6, 0xE
    ctx->r1 = ctx->r14 < 0XE ? 1 : 0;
    // 0x8039C31C: beq         $at, $zero, L_8039C3AC
    if (ctx->r1 == 0) {
        // 0x8039C320: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_8039C3AC;
    }
    // 0x8039C320: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8039C324: lui         $at, 0x803A
    ctx->r1 = S32(0X803A << 16);
    // 0x8039C328: addu        $at, $at, $t6
    gpr jr_addend_8039C334 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8039C32C: lw          $t6, 0x1758($at)
    ctx->r14 = ADD32(ctx->r1, 0X1758);
    // 0x8039C330: nop

    // 0x8039C334: jr          $t6
    // 0x8039C338: nop

    switch (jr_addend_8039C334 >> 2) {
        case 0: goto L_8039C33C; break;
        case 1: goto L_8039C370; break;
        case 2: goto L_8039C380; break;
        case 3: goto L_8039C380; break;
        case 4: goto L_8039C3AC; break;
        case 5: goto L_8039C370; break;
        case 6: goto L_8039C380; break;
        case 7: goto L_8039C3AC; break;
        case 8: goto L_8039C3AC; break;
        case 9: goto L_8039C3AC; break;
        case 10: goto L_8039C3AC; break;
        case 11: goto L_8039C3AC; break;
        case 12: goto L_8039C360; break;
        case 13: goto L_8039C398; break;
        default: switch_error(__func__, 0x8039C334, 0x803A1758);
    }
    // 0x8039C338: nop

L_8039C33C:
    // 0x8039C33C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8039C340: lbu         $t7, -0x329D($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X329D);
    // 0x8039C344: nop

    // 0x8039C348: beq         $t7, $zero, L_8039C3B0
    if (ctx->r15 == 0) {
        // 0x8039C34C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8039C3B0;
    }
    // 0x8039C34C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8039C350: jal         0x80037908
    // 0x8039C354: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80037908(rdram, ctx);
        goto after_0;
    // 0x8039C354: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x8039C358: b           L_8039C3B0
    // 0x8039C35C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8039C3B0;
    // 0x8039C35C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8039C360:
    // 0x8039C360: jal         0x80037908
    // 0x8039C364: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80037908(rdram, ctx);
        goto after_1;
    // 0x8039C364: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x8039C368: b           L_8039C3B0
    // 0x8039C36C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8039C3B0;
    // 0x8039C36C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8039C370:
    // 0x8039C370: sh          $zero, 0x24($a0)
    MEM_H(0X24, ctx->r4) = 0;
    // 0x8039C374: lh          $t8, 0x24($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X24);
    // 0x8039C378: b           L_8039C3AC
    // 0x8039C37C: sh          $t8, 0x2A($a0)
    MEM_H(0X2A, ctx->r4) = ctx->r24;
        goto L_8039C3AC;
    // 0x8039C37C: sh          $t8, 0x2A($a0)
    MEM_H(0X2A, ctx->r4) = ctx->r24;
L_8039C380:
    // 0x8039C380: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8039C384: sh          $t9, 0x24($a0)
    MEM_H(0X24, ctx->r4) = ctx->r25;
    // 0x8039C388: lh          $t0, 0x24($a0)
    ctx->r8 = MEM_H(ctx->r4, 0X24);
    // 0x8039C38C: sh          $zero, 0x30($a0)
    MEM_H(0X30, ctx->r4) = 0;
    // 0x8039C390: b           L_8039C3AC
    // 0x8039C394: sh          $t0, 0x2A($a0)
    MEM_H(0X2A, ctx->r4) = ctx->r8;
        goto L_8039C3AC;
    // 0x8039C394: sh          $t0, 0x2A($a0)
    MEM_H(0X2A, ctx->r4) = ctx->r8;
L_8039C398:
    // 0x8039C398: addiu       $t1, $zero, 0xC
    ctx->r9 = ADD32(0, 0XC);
    // 0x8039C39C: sh          $t1, 0x24($a0)
    MEM_H(0X24, ctx->r4) = ctx->r9;
    // 0x8039C3A0: lh          $t2, 0x24($a0)
    ctx->r10 = MEM_H(ctx->r4, 0X24);
    // 0x8039C3A4: sh          $zero, 0x30($a0)
    MEM_H(0X30, ctx->r4) = 0;
    // 0x8039C3A8: sh          $t2, 0x2A($a0)
    MEM_H(0X2A, ctx->r4) = ctx->r10;
L_8039C3AC:
    // 0x8039C3AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8039C3B0:
    // 0x8039C3B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8039C3B4: jr          $ra
    // 0x8039C3B8: nop

    return;
    // 0x8039C3B8: nop

;}
RECOMP_FUNC void func_8039C3BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039C3BC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8039C3C0: lh          $v0, 0x2A($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X2A);
    // 0x8039C3C4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8039C3C8: beq         $v0, $at, L_8039C3D8
    if (ctx->r2 == ctx->r1) {
        // 0x8039C3CC: addiu       $at, $zero, 0xC
        ctx->r1 = ADD32(0, 0XC);
            goto L_8039C3D8;
    }
    // 0x8039C3CC: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x8039C3D0: bne         $v0, $at, L_8039C3E8
    if (ctx->r2 != ctx->r1) {
        // 0x8039C3D4: nop
    
            goto L_8039C3E8;
    }
    // 0x8039C3D4: nop

L_8039C3D8:
    // 0x8039C3D8: lh          $t6, 0x2C($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X2C);
    // 0x8039C3DC: nop

    // 0x8039C3E0: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8039C3E4: sh          $t7, 0x2C($a0)
    MEM_H(0X2C, ctx->r4) = ctx->r15;
L_8039C3E8:
    // 0x8039C3E8: jr          $ra
    // 0x8039C3EC: nop

    return;
    // 0x8039C3EC: nop

;}
RECOMP_FUNC void func_8039C3F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039C3F0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8039C3F4: lh          $v0, 0x2A($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X2A);
    // 0x8039C3F8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8039C3FC: beq         $v0, $at, L_8039C40C
    if (ctx->r2 == ctx->r1) {
        // 0x8039C400: addiu       $at, $zero, 0xC
        ctx->r1 = ADD32(0, 0XC);
            goto L_8039C40C;
    }
    // 0x8039C400: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x8039C404: bne         $v0, $at, L_8039C41C
    if (ctx->r2 != ctx->r1) {
        // 0x8039C408: nop
    
            goto L_8039C41C;
    }
    // 0x8039C408: nop

L_8039C40C:
    // 0x8039C40C: lh          $t6, 0x2C($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X2C);
    // 0x8039C410: nop

    // 0x8039C414: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8039C418: sh          $t7, 0x2C($a0)
    MEM_H(0X2C, ctx->r4) = ctx->r15;
L_8039C41C:
    // 0x8039C41C: jr          $ra
    // 0x8039C420: nop

    return;
    // 0x8039C420: nop

;}
RECOMP_FUNC void func_8039C424(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039C424: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8039C428: lhu         $t6, 0x2A($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X2A);
    // 0x8039C42C: nop

    // 0x8039C430: sltiu       $at, $t6, 0xE
    ctx->r1 = ctx->r14 < 0XE ? 1 : 0;
    // 0x8039C434: beq         $at, $zero, L_8039C47C
    if (ctx->r1 == 0) {
        // 0x8039C438: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_8039C47C;
    }
    // 0x8039C438: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8039C43C: lui         $at, 0x803A
    ctx->r1 = S32(0X803A << 16);
    // 0x8039C440: addu        $at, $at, $t6
    gpr jr_addend_8039C44C = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8039C444: lw          $t6, 0x1790($at)
    ctx->r14 = ADD32(ctx->r1, 0X1790);
    // 0x8039C448: nop

    // 0x8039C44C: jr          $t6
    // 0x8039C450: nop

    switch (jr_addend_8039C44C >> 2) {
        case 0: goto L_8039C454; break;
        case 1: goto L_8039C45C; break;
        case 2: goto L_8039C454; break;
        case 3: goto L_8039C454; break;
        case 4: goto L_8039C47C; break;
        case 5: goto L_8039C47C; break;
        case 6: goto L_8039C454; break;
        case 7: goto L_8039C47C; break;
        case 8: goto L_8039C47C; break;
        case 9: goto L_8039C47C; break;
        case 10: goto L_8039C47C; break;
        case 11: goto L_8039C47C; break;
        case 12: goto L_8039C45C; break;
        case 13: goto L_8039C454; break;
        default: switch_error(__func__, 0x8039C44C, 0x803A1790);
    }
    // 0x8039C450: nop

L_8039C454:
    // 0x8039C454: jr          $ra
    // 0x8039C458: sh          $zero, 0x50($a0)
    MEM_H(0X50, ctx->r4) = 0;
    return;
    // 0x8039C458: sh          $zero, 0x50($a0)
    MEM_H(0X50, ctx->r4) = 0;
L_8039C45C:
    // 0x8039C45C: lh          $v0, 0x2C($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X2C);
    // 0x8039C460: nop

    // 0x8039C464: addiu       $v0, $v0, -0x8
    ctx->r2 = ADD32(ctx->r2, -0X8);
    // 0x8039C468: sll         $t7, $v0, 16
    ctx->r15 = S32(ctx->r2 << 16);
    // 0x8039C46C: sra         $t8, $t7, 16
    ctx->r24 = S32(SIGNED(ctx->r15) >> 16);
    // 0x8039C470: bltz        $t8, L_8039C47C
    if (SIGNED(ctx->r24) < 0) {
        // 0x8039C474: nop
    
            goto L_8039C47C;
    }
    // 0x8039C474: nop

    // 0x8039C478: sh          $t8, 0x2C($a0)
    MEM_H(0X2C, ctx->r4) = ctx->r24;
L_8039C47C:
    // 0x8039C47C: jr          $ra
    // 0x8039C480: nop

    return;
    // 0x8039C480: nop

;}
RECOMP_FUNC void func_8039C484(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039C484: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8039C488: lhu         $t6, 0x2A($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X2A);
    // 0x8039C48C: nop

    // 0x8039C490: sltiu       $at, $t6, 0xE
    ctx->r1 = ctx->r14 < 0XE ? 1 : 0;
    // 0x8039C494: beq         $at, $zero, L_8039C4E4
    if (ctx->r1 == 0) {
        // 0x8039C498: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_8039C4E4;
    }
    // 0x8039C498: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8039C49C: lui         $at, 0x803A
    ctx->r1 = S32(0X803A << 16);
    // 0x8039C4A0: addu        $at, $at, $t6
    gpr jr_addend_8039C4AC = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8039C4A4: lw          $t6, 0x17C8($at)
    ctx->r14 = ADD32(ctx->r1, 0X17C8);
    // 0x8039C4A8: nop

    // 0x8039C4AC: jr          $t6
    // 0x8039C4B0: nop

    switch (jr_addend_8039C4AC >> 2) {
        case 0: goto L_8039C4B4; break;
        case 1: goto L_8039C4C0; break;
        case 2: goto L_8039C4B4; break;
        case 3: goto L_8039C4B4; break;
        case 4: goto L_8039C4E4; break;
        case 5: goto L_8039C4E4; break;
        case 6: goto L_8039C4B4; break;
        case 7: goto L_8039C4E4; break;
        case 8: goto L_8039C4E4; break;
        case 9: goto L_8039C4E4; break;
        case 10: goto L_8039C4E4; break;
        case 11: goto L_8039C4E4; break;
        case 12: goto L_8039C4C0; break;
        case 13: goto L_8039C4B4; break;
        default: switch_error(__func__, 0x8039C4AC, 0x803A17C8);
    }
    // 0x8039C4B0: nop

L_8039C4B4:
    // 0x8039C4B4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8039C4B8: jr          $ra
    // 0x8039C4BC: sh          $t7, 0x50($a0)
    MEM_H(0X50, ctx->r4) = ctx->r15;
    return;
    // 0x8039C4BC: sh          $t7, 0x50($a0)
    MEM_H(0X50, ctx->r4) = ctx->r15;
L_8039C4C0:
    // 0x8039C4C0: lh          $v0, 0x2C($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X2C);
    // 0x8039C4C4: nop

    // 0x8039C4C8: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x8039C4CC: sll         $t8, $v0, 16
    ctx->r24 = S32(ctx->r2 << 16);
    // 0x8039C4D0: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8039C4D4: slti        $at, $t9, 0x10
    ctx->r1 = SIGNED(ctx->r25) < 0X10 ? 1 : 0;
    // 0x8039C4D8: beq         $at, $zero, L_8039C4E4
    if (ctx->r1 == 0) {
        // 0x8039C4DC: nop
    
            goto L_8039C4E4;
    }
    // 0x8039C4DC: nop

    // 0x8039C4E0: sh          $t9, 0x2C($a0)
    MEM_H(0X2C, ctx->r4) = ctx->r25;
L_8039C4E4:
    // 0x8039C4E4: jr          $ra
    // 0x8039C4E8: nop

    return;
    // 0x8039C4E8: nop

;}
RECOMP_FUNC void func_8039C4EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039C4EC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8039C4F0: lh          $v0, 0x2A($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X2A);
    // 0x8039C4F4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8039C4F8: beq         $v1, $v0, L_8039C508
    if (ctx->r3 == ctx->r2) {
        // 0x8039C4FC: addiu       $at, $zero, 0xC
        ctx->r1 = ADD32(0, 0XC);
            goto L_8039C508;
    }
    // 0x8039C4FC: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x8039C500: bne         $v0, $at, L_8039C518
    if (ctx->r2 != ctx->r1) {
        // 0x8039C504: nop
    
            goto L_8039C518;
    }
    // 0x8039C504: nop

L_8039C508:
    // 0x8039C508: lh          $t6, 0x26($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X26);
    // 0x8039C50C: nop

    // 0x8039C510: subu        $t7, $v1, $t6
    ctx->r15 = SUB32(ctx->r3, ctx->r14);
    // 0x8039C514: sh          $t7, 0x26($a0)
    MEM_H(0X26, ctx->r4) = ctx->r15;
L_8039C518:
    // 0x8039C518: jr          $ra
    // 0x8039C51C: nop

    return;
    // 0x8039C51C: nop

;}
RECOMP_FUNC void func_8039C520(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039C520: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8039C524: lh          $v0, 0x2A($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X2A);
    // 0x8039C528: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8039C52C: beq         $v1, $v0, L_8039C53C
    if (ctx->r3 == ctx->r2) {
        // 0x8039C530: addiu       $at, $zero, 0xC
        ctx->r1 = ADD32(0, 0XC);
            goto L_8039C53C;
    }
    // 0x8039C530: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x8039C534: bne         $v0, $at, L_8039C54C
    if (ctx->r2 != ctx->r1) {
        // 0x8039C538: nop
    
            goto L_8039C54C;
    }
    // 0x8039C538: nop

L_8039C53C:
    // 0x8039C53C: lh          $t6, 0x26($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X26);
    // 0x8039C540: nop

    // 0x8039C544: subu        $t7, $v1, $t6
    ctx->r15 = SUB32(ctx->r3, ctx->r14);
    // 0x8039C548: sh          $t7, 0x26($a0)
    MEM_H(0X26, ctx->r4) = ctx->r15;
L_8039C54C:
    // 0x8039C54C: jr          $ra
    // 0x8039C550: nop

    return;
    // 0x8039C550: nop

;}
RECOMP_FUNC void func_8039C554(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039C554: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8039C558: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8039C55C: lui         $s0, 0x801B
    ctx->r16 = S32(0X801B << 16);
    // 0x8039C560: addiu       $s0, $s0, -0x750
    ctx->r16 = ADD32(ctx->r16, -0X750);
    // 0x8039C564: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8039C568: lh          $a0, 0xC0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0XC0);
    // 0x8039C56C: lh          $t6, 0x9E($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X9E);
    // 0x8039C570: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8039C574: lui         $t8, 0x803A
    ctx->r24 = S32(0X803A << 16);
    // 0x8039C578: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x8039C57C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8039C580: addiu       $t8, $t8, 0x130C
    ctx->r24 = ADD32(ctx->r24, 0X130C);
    // 0x8039C584: addiu       $t9, $a0, 0x1
    ctx->r25 = ADD32(ctx->r4, 0X1);
    // 0x8039C588: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x8039C58C: addu        $a1, $t7, $t8
    ctx->r5 = ADD32(ctx->r15, ctx->r24);
    // 0x8039C590: sh          $t9, 0xC0($s0)
    MEM_H(0XC0, ctx->r16) = ctx->r25;
    // 0x8039C594: jal         0x8002F444
    // 0x8039C598: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8002F444(rdram, ctx);
        goto after_0;
    // 0x8039C598: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x8039C59C: lh          $t0, 0x9E($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X9E);
    // 0x8039C5A0: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x8039C5A4: beq         $t0, $at, L_8039C5C4
    if (ctx->r8 == ctx->r1) {
        // 0x8039C5A8: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_8039C5C4;
    }
    // 0x8039C5A8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8039C5AC: lui         $a1, 0x803A
    ctx->r5 = S32(0X803A << 16);
    // 0x8039C5B0: addiu       $a1, $a1, 0x1530
    ctx->r5 = ADD32(ctx->r5, 0X1530);
    // 0x8039C5B4: jal         0x8004A298
    // 0x8039C5B8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8004A298(rdram, ctx);
        goto after_1;
    // 0x8039C5B8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x8039C5BC: b           L_8039C5CC
    // 0x8039C5C0: lh          $t1, 0x9E($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X9E);
        goto L_8039C5CC;
    // 0x8039C5C0: lh          $t1, 0x9E($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X9E);
L_8039C5C4:
    // 0x8039C5C4: sb          $zero, 0x4($s1)
    MEM_B(0X4, ctx->r17) = 0;
    // 0x8039C5C8: lh          $t1, 0x9E($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X9E);
L_8039C5CC:
    // 0x8039C5CC: lui         $t2, 0x803A
    ctx->r10 = S32(0X803A << 16);
    // 0x8039C5D0: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8039C5D4: lbu         $t2, 0x1578($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X1578);
    // 0x8039C5D8: lui         $t4, 0x803A
    ctx->r12 = S32(0X803A << 16);
    // 0x8039C5DC: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8039C5E0: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8039C5E4: sll         $t3, $t3, 1
    ctx->r11 = S32(ctx->r11 << 1);
    // 0x8039C5E8: addiu       $t4, $t4, 0x1530
    ctx->r12 = ADD32(ctx->r12, 0X1530);
    // 0x8039C5EC: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x8039C5F0: addu        $a1, $t3, $t4
    ctx->r5 = ADD32(ctx->r11, ctx->r12);
    // 0x8039C5F4: jal         0x8004A298
    // 0x8039C5F8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8004A298(rdram, ctx);
        goto after_2;
    // 0x8039C5F8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x8039C5FC: jal         0x8039C8D4
    // 0x8039C600: nop

    func_8039C8D4(rdram, ctx);
        goto after_3;
    // 0x8039C600: nop

    after_3:
    // 0x8039C604: bne         $v0, $zero, L_8039C640
    if (ctx->r2 != 0) {
        // 0x8039C608: nop
    
            goto L_8039C640;
    }
    // 0x8039C608: nop

    // 0x8039C60C: lh          $v0, 0x9E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X9E);
    // 0x8039C610: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8039C614: beq         $v0, $at, L_8039C640
    if (ctx->r2 == ctx->r1) {
        // 0x8039C618: addiu       $at, $zero, 0xB
        ctx->r1 = ADD32(0, 0XB);
            goto L_8039C640;
    }
    // 0x8039C618: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x8039C61C: beq         $v0, $at, L_8039C640
    if (ctx->r2 == ctx->r1) {
        // 0x8039C620: lui         $a1, 0x803A
        ctx->r5 = S32(0X803A << 16);
            goto L_8039C640;
    }
    // 0x8039C620: lui         $a1, 0x803A
    ctx->r5 = S32(0X803A << 16);
    // 0x8039C624: lw          $t5, 0x0($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X0);
    // 0x8039C628: addiu       $a1, $a1, 0x153A
    ctx->r5 = ADD32(ctx->r5, 0X153A);
    // 0x8039C62C: lw          $a0, 0x0($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X0);
    // 0x8039C630: jal         0x8004A298
    // 0x8039C634: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8004A298(rdram, ctx);
        goto after_4;
    // 0x8039C634: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x8039C638: b           L_8039C658
    // 0x8039C63C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8039C658;
    // 0x8039C63C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8039C640:
    // 0x8039C640: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
    // 0x8039C644: nop

    // 0x8039C648: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x8039C64C: nop

    // 0x8039C650: sb          $zero, 0x4($t7)
    MEM_B(0X4, ctx->r15) = 0;
    // 0x8039C654: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8039C658:
    // 0x8039C658: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8039C65C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8039C660: jr          $ra
    // 0x8039C664: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8039C664: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8039C668(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039C668: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8039C66C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8039C670: lui         $s0, 0x801B
    ctx->r16 = S32(0X801B << 16);
    // 0x8039C674: addiu       $s0, $s0, -0x750
    ctx->r16 = ADD32(ctx->r16, -0X750);
    // 0x8039C678: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x8039C67C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8039C680: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8039C684: lbu         $a1, 0xC1($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XC1);
    // 0x8039C688: jal         0x8002F224
    // 0x8039C68C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8002F224(rdram, ctx);
        goto after_0;
    // 0x8039C68C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x8039C690: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8039C694: jal         0x8002A468
    // 0x8039C698: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    func_8002A468(rdram, ctx);
        goto after_1;
    // 0x8039C698: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    after_1:
    // 0x8039C69C: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x8039C6A0: sh          $zero, 0xC0($s0)
    MEM_H(0XC0, ctx->r16) = 0;
    // 0x8039C6A4: lw          $v0, 0x18($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X18);
    // 0x8039C6A8: lui         $t7, 0x803E
    ctx->r15 = S32(0X803E << 16);
    // 0x8039C6AC: addiu       $t7, $t7, 0x5A20
    ctx->r15 = ADD32(ctx->r15, 0X5A20);
    // 0x8039C6B0: sw          $t7, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->r15;
    // 0x8039C6B4: lh          $t8, 0x9A($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X9A);
    // 0x8039C6B8: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x8039C6BC: addiu       $t9, $t8, 0x2A
    ctx->r25 = ADD32(ctx->r24, 0X2A);
    // 0x8039C6C0: jal         0x8039C8D4
    // 0x8039C6C4: sh          $t9, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r25;
    func_8039C8D4(rdram, ctx);
        goto after_2;
    // 0x8039C6C4: sh          $t9, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r25;
    after_2:
    // 0x8039C6C8: bne         $v0, $zero, L_8039C7A4
    if (ctx->r2 != 0) {
        // 0x8039C6CC: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_8039C7A4;
    }
    // 0x8039C6CC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8039C6D0: lh          $a0, 0x9A($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X9A);
    // 0x8039C6D4: lh          $a1, 0xA0($s0)
    ctx->r5 = MEM_H(ctx->r16, 0XA0);
    // 0x8039C6D8: jal         0x8039C91C
    // 0x8039C6DC: nop

    func_8039C91C(rdram, ctx);
        goto after_3;
    // 0x8039C6DC: nop

    after_3:
    // 0x8039C6E0: bne         $v0, $zero, L_8039C748
    if (ctx->r2 != 0) {
        // 0x8039C6E4: lui         $at, 0x2
        ctx->r1 = S32(0X2 << 16);
            goto L_8039C748;
    }
    // 0x8039C6E4: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8039C6E8: jal         0x8039C7B0
    // 0x8039C6EC: nop

    func_8039C7B0(rdram, ctx);
        goto after_4;
    // 0x8039C6EC: nop

    after_4:
    // 0x8039C6F0: lbu         $a0, 0x37($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X37);
    // 0x8039C6F4: lbu         $a1, 0xA1($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XA1);
    // 0x8039C6F8: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x8039C6FC: lbu         $a3, 0xC1($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XC1);
    // 0x8039C700: addiu       $t0, $zero, 0x38
    ctx->r8 = ADD32(0, 0X38);
    // 0x8039C704: addiu       $t1, $zero, 0xA0
    ctx->r9 = ADD32(0, 0XA0);
    // 0x8039C708: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8039C70C: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x8039C710: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x8039C714: jal         0x8006EDB0
    // 0x8039C718: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    func_8006EDB0(rdram, ctx);
        goto after_5;
    // 0x8039C718: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_5:
    // 0x8039C71C: jal         0x8039C854
    // 0x8039C720: sh          $v0, 0xC0($s0)
    MEM_H(0XC0, ctx->r16) = ctx->r2;
    func_8039C854(rdram, ctx);
        goto after_6;
    // 0x8039C720: sh          $v0, 0xC0($s0)
    MEM_H(0XC0, ctx->r16) = ctx->r2;
    after_6:
    // 0x8039C724: lh          $a0, 0x9A($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X9A);
    // 0x8039C728: lh          $a1, 0xA0($s0)
    ctx->r5 = MEM_H(ctx->r16, 0XA0);
    // 0x8039C72C: jal         0x8039CC2C
    // 0x8039C730: nop

    func_8039CC2C(rdram, ctx);
        goto after_7;
    // 0x8039C730: nop

    after_7:
    // 0x8039C734: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8039C738: jal         0x803988C4
    // 0x8039C73C: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    LOOKUP_FUNC(0x803988C4)(rdram, ctx);
        goto after_8;
    // 0x8039C73C: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    after_8:
    // 0x8039C740: b           L_8039C7A4
    // 0x8039C744: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_8039C7A4;
    // 0x8039C744: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_8039C748:
    // 0x8039C748: lh          $v0, 0xC0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XC0);
    // 0x8039C74C: ori         $at, $at, 0xFEE8
    ctx->r1 = ctx->r1 | 0XFEE8;
    // 0x8039C750: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x8039C754: sll         $t3, $v0, 5
    ctx->r11 = S32(ctx->r2 << 5);
    // 0x8039C758: addu        $t4, $t3, $at
    ctx->r12 = ADD32(ctx->r11, ctx->r1);
    // 0x8039C75C: addiu       $t5, $t5, -0x3770
    ctx->r13 = ADD32(ctx->r13, -0X3770);
    // 0x8039C760: lui         $a3, 0x8029
    ctx->r7 = S32(0X8029 << 16);
    // 0x8039C764: addiu       $t6, $zero, 0xB
    ctx->r14 = ADD32(0, 0XB);
    // 0x8039C768: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x8039C76C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8039C770: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x8039C774: addiu       $t0, $v0, 0x1
    ctx->r8 = ADD32(ctx->r2, 0X1);
    // 0x8039C778: sh          $t0, 0xC0($s0)
    MEM_H(0XC0, ctx->r16) = ctx->r8;
    // 0x8039C77C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8039C780: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x8039C784: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x8039C788: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8039C78C: addiu       $a3, $a3, -0x7C30
    ctx->r7 = ADD32(ctx->r7, -0X7C30);
    // 0x8039C790: addu        $a0, $t4, $t5
    ctx->r4 = ADD32(ctx->r12, ctx->r13);
    // 0x8039C794: addiu       $a1, $zero, 0x38
    ctx->r5 = ADD32(0, 0X38);
    // 0x8039C798: jal         0x8002F528
    // 0x8039C79C: addiu       $a2, $zero, 0xB2
    ctx->r6 = ADD32(0, 0XB2);
    func_8002F528(rdram, ctx);
        goto after_9;
    // 0x8039C79C: addiu       $a2, $zero, 0xB2
    ctx->r6 = ADD32(0, 0XB2);
    after_9:
    // 0x8039C7A0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_8039C7A4:
    // 0x8039C7A4: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8039C7A8: jr          $ra
    // 0x8039C7AC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8039C7AC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8039C7B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039C7B0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8039C7B4: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8039C7B8: lui         $t1, 0x803A
    ctx->r9 = S32(0X803A << 16);
    // 0x8039C7BC: sb          $t6, -0x2F8C($at)
    MEM_B(-0X2F8C, ctx->r1) = ctx->r14;
    // 0x8039C7C0: addiu       $t1, $t1, 0x142C
    ctx->r9 = ADD32(ctx->r9, 0X142C);
    // 0x8039C7C4: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
    // 0x8039C7C8: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
L_8039C7CC:
    // 0x8039C7CC: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x8039C7D0: addiu       $t9, $t9, 0x37B0
    ctx->r25 = ADD32(ctx->r25, 0X37B0);
    // 0x8039C7D4: sll         $t7, $a1, 5
    ctx->r15 = S32(ctx->r5 << 5);
    // 0x8039C7D8: sll         $t8, $v0, 5
    ctx->r24 = S32(ctx->r2 << 5);
    // 0x8039C7DC: addu        $a2, $t8, $t9
    ctx->r6 = ADD32(ctx->r24, ctx->r25);
    // 0x8039C7E0: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x8039C7E4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8039C7E8: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
L_8039C7EC:
    // 0x8039C7EC: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x8039C7F0: sll         $t5, $v1, 1
    ctx->r13 = S32(ctx->r3 << 1);
    // 0x8039C7F4: addu        $a3, $a2, $t5
    ctx->r7 = ADD32(ctx->r6, ctx->r13);
    // 0x8039C7F8: lbu         $t6, 0x0($a3)
    ctx->r14 = MEM_BU(ctx->r7, 0X0);
    // 0x8039C7FC: sll         $t4, $v1, 1
    ctx->r12 = S32(ctx->r3 << 1);
    // 0x8039C800: addu        $t3, $t2, $a1
    ctx->r11 = ADD32(ctx->r10, ctx->r5);
    // 0x8039C804: addu        $a0, $t3, $t4
    ctx->r4 = ADD32(ctx->r11, ctx->r12);
    // 0x8039C808: sb          $t6, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r14;
    // 0x8039C80C: lbu         $t7, 0x1($a3)
    ctx->r15 = MEM_BU(ctx->r7, 0X1);
    // 0x8039C810: nop

    // 0x8039C814: sb          $t7, 0x1($a0)
    MEM_B(0X1, ctx->r4) = ctx->r15;
    // 0x8039C818: sb          $v1, 0x1($a3)
    MEM_B(0X1, ctx->r7) = ctx->r3;
    // 0x8039C81C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8039C820: sll         $t8, $v1, 16
    ctx->r24 = S32(ctx->r3 << 16);
    // 0x8039C824: sra         $v1, $t8, 16
    ctx->r3 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8039C828: slti        $at, $v1, 0x10
    ctx->r1 = SIGNED(ctx->r3) < 0X10 ? 1 : 0;
    // 0x8039C82C: bne         $at, $zero, L_8039C7EC
    if (ctx->r1 != 0) {
        // 0x8039C830: sb          $t0, 0x0($a3)
        MEM_B(0X0, ctx->r7) = ctx->r8;
            goto L_8039C7EC;
    }
    // 0x8039C830: sb          $t0, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r8;
    // 0x8039C834: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8039C838: sll         $t2, $v0, 16
    ctx->r10 = S32(ctx->r2 << 16);
    // 0x8039C83C: sra         $v0, $t2, 16
    ctx->r2 = S32(SIGNED(ctx->r10) >> 16);
    // 0x8039C840: slti        $at, $v0, 0x2C
    ctx->r1 = SIGNED(ctx->r2) < 0X2C ? 1 : 0;
    // 0x8039C844: bne         $at, $zero, L_8039C7CC
    if (ctx->r1 != 0) {
        // 0x8039C848: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_8039C7CC;
    }
    // 0x8039C848: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8039C84C: jr          $ra
    // 0x8039C850: nop

    return;
    // 0x8039C850: nop

;}
RECOMP_FUNC void func_8039C854(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039C854: lui         $a1, 0x803A
    ctx->r5 = S32(0X803A << 16);
    // 0x8039C858: lw          $a1, 0x142C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X142C);
    // 0x8039C85C: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
L_8039C860:
    // 0x8039C860: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x8039C864: addiu       $t9, $t9, 0x37B0
    ctx->r25 = ADD32(ctx->r25, 0X37B0);
    // 0x8039C868: sll         $t7, $v0, 5
    ctx->r15 = S32(ctx->r2 << 5);
    // 0x8039C86C: sll         $t8, $v0, 5
    ctx->r24 = S32(ctx->r2 << 5);
    // 0x8039C870: addu        $a3, $t8, $t9
    ctx->r7 = ADD32(ctx->r24, ctx->r25);
    // 0x8039C874: addu        $a2, $a1, $t7
    ctx->r6 = ADD32(ctx->r5, ctx->r15);
    // 0x8039C878: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_8039C87C:
    // 0x8039C87C: sll         $t1, $v1, 1
    ctx->r9 = S32(ctx->r3 << 1);
    // 0x8039C880: addu        $a0, $a2, $t1
    ctx->r4 = ADD32(ctx->r6, ctx->r9);
    // 0x8039C884: sll         $t2, $v1, 1
    ctx->r10 = S32(ctx->r3 << 1);
    // 0x8039C888: lbu         $t3, 0x0($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0X0);
    // 0x8039C88C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8039C890: addu        $t0, $a3, $t2
    ctx->r8 = ADD32(ctx->r7, ctx->r10);
    // 0x8039C894: sll         $t5, $v1, 16
    ctx->r13 = S32(ctx->r3 << 16);
    // 0x8039C898: sb          $t3, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r11;
    // 0x8039C89C: lbu         $t4, 0x1($a0)
    ctx->r12 = MEM_BU(ctx->r4, 0X1);
    // 0x8039C8A0: sra         $v1, $t5, 16
    ctx->r3 = S32(SIGNED(ctx->r13) >> 16);
    // 0x8039C8A4: slti        $at, $v1, 0x10
    ctx->r1 = SIGNED(ctx->r3) < 0X10 ? 1 : 0;
    // 0x8039C8A8: bne         $at, $zero, L_8039C87C
    if (ctx->r1 != 0) {
        // 0x8039C8AC: sb          $t4, 0x1($t0)
        MEM_B(0X1, ctx->r8) = ctx->r12;
            goto L_8039C87C;
    }
    // 0x8039C8AC: sb          $t4, 0x1($t0)
    MEM_B(0X1, ctx->r8) = ctx->r12;
    // 0x8039C8B0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8039C8B4: sll         $t7, $v0, 16
    ctx->r15 = S32(ctx->r2 << 16);
    // 0x8039C8B8: sra         $v0, $t7, 16
    ctx->r2 = S32(SIGNED(ctx->r15) >> 16);
    // 0x8039C8BC: slti        $at, $v0, 0x2C
    ctx->r1 = SIGNED(ctx->r2) < 0X2C ? 1 : 0;
    // 0x8039C8C0: bne         $at, $zero, L_8039C860
    if (ctx->r1 != 0) {
        // 0x8039C8C4: nop
    
            goto L_8039C860;
    }
    // 0x8039C8C4: nop

    // 0x8039C8C8: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8039C8CC: jr          $ra
    // 0x8039C8D0: sb          $zero, -0x2F8C($at)
    MEM_B(-0X2F8C, ctx->r1) = 0;
    return;
    // 0x8039C8D0: sb          $zero, -0x2F8C($at)
    MEM_B(-0X2F8C, ctx->r1) = 0;
;}
RECOMP_FUNC void func_8039C8D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039C8D4: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x8039C8D8: lh          $t6, -0x6B2($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X6B2);
    // 0x8039C8DC: nop

    // 0x8039C8E0: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8039C8E4: sltiu       $at, $t7, 0xE
    ctx->r1 = ctx->r15 < 0XE ? 1 : 0;
    // 0x8039C8E8: beq         $at, $zero, L_8039C910
    if (ctx->r1 == 0) {
        // 0x8039C8EC: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_8039C910;
    }
    // 0x8039C8EC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8039C8F0: lui         $at, 0x803A
    ctx->r1 = S32(0X803A << 16);
    // 0x8039C8F4: addu        $at, $at, $t7
    gpr jr_addend_8039C900 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8039C8F8: lw          $t7, 0x1800($at)
    ctx->r15 = ADD32(ctx->r1, 0X1800);
    // 0x8039C8FC: nop

    // 0x8039C900: jr          $t7
    // 0x8039C904: nop

    switch (jr_addend_8039C900 >> 2) {
        case 0: goto L_8039C908; break;
        case 1: goto L_8039C908; break;
        case 2: goto L_8039C908; break;
        case 3: goto L_8039C908; break;
        case 4: goto L_8039C908; break;
        case 5: goto L_8039C910; break;
        case 6: goto L_8039C910; break;
        case 7: goto L_8039C910; break;
        case 8: goto L_8039C910; break;
        case 9: goto L_8039C910; break;
        case 10: goto L_8039C910; break;
        case 11: goto L_8039C908; break;
        case 12: goto L_8039C908; break;
        case 13: goto L_8039C908; break;
        default: switch_error(__func__, 0x8039C900, 0x803A1800);
    }
    // 0x8039C904: nop

L_8039C908:
    // 0x8039C908: jr          $ra
    // 0x8039C90C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8039C90C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8039C910:
    // 0x8039C910: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8039C914: jr          $ra
    // 0x8039C918: nop

    return;
    // 0x8039C918: nop

;}
RECOMP_FUNC void func_8039C91C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039C91C: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x8039C920: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8039C924: sll         $t8, $a1, 16
    ctx->r24 = S32(ctx->r5 << 16);
    // 0x8039C928: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8039C92C: sll         $t0, $t7, 4
    ctx->r8 = S32(ctx->r15 << 4);
    // 0x8039C930: addu        $t1, $t0, $t9
    ctx->r9 = ADD32(ctx->r8, ctx->r25);
    // 0x8039C934: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x8039C938: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8039C93C: lbu         $t2, 0x5330($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X5330);
    // 0x8039C940: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8039C944: slti        $at, $t2, 0x20
    ctx->r1 = SIGNED(ctx->r10) < 0X20 ? 1 : 0;
    // 0x8039C948: beq         $at, $zero, L_8039C958
    if (ctx->r1 == 0) {
        // 0x8039C94C: sw          $a1, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r5;
            goto L_8039C958;
    }
    // 0x8039C94C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8039C950: jr          $ra
    // 0x8039C954: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8039C954: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8039C958:
    // 0x8039C958: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8039C95C: jr          $ra
    // 0x8039C960: nop

    return;
    // 0x8039C960: nop

;}
RECOMP_FUNC void func_8039C964(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039C964: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x8039C968: sll         $t8, $a1, 16
    ctx->r24 = S32(ctx->r5 << 16);
    // 0x8039C96C: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8039C970: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8039C974: sll         $t0, $t7, 5
    ctx->r8 = S32(ctx->r15 << 5);
    // 0x8039C978: sll         $t1, $t9, 1
    ctx->r9 = S32(ctx->r25 << 1);
    // 0x8039C97C: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x8039C980: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x8039C984: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8039C988: lbu         $t3, 0x3CF0($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X3CF0);
    // 0x8039C98C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8039C990: slti        $at, $t3, 0x2A
    ctx->r1 = SIGNED(ctx->r11) < 0X2A ? 1 : 0;
    // 0x8039C994: beq         $at, $zero, L_8039C9A4
    if (ctx->r1 == 0) {
        // 0x8039C998: sw          $a1, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r5;
            goto L_8039C9A4;
    }
    // 0x8039C998: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8039C99C: jr          $ra
    // 0x8039C9A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8039C9A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8039C9A4:
    // 0x8039C9A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8039C9A8: jr          $ra
    // 0x8039C9AC: nop

    return;
    // 0x8039C9AC: nop

;}
RECOMP_FUNC void func_8039C9B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039C9B0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8039C9B4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8039C9B8: lh          $a2, 0x2A($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X2A);
    // 0x8039C9BC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8039C9C0: addiu       $a2, $a2, 0x2A
    ctx->r6 = ADD32(ctx->r6, 0X2A);
    // 0x8039C9C4: sll         $s1, $a1, 16
    ctx->r17 = S32(ctx->r5 << 16);
    // 0x8039C9C8: sll         $t8, $a2, 16
    ctx->r24 = S32(ctx->r6 << 16);
    // 0x8039C9CC: sra         $t6, $s1, 16
    ctx->r14 = S32(SIGNED(ctx->r17) >> 16);
    // 0x8039C9D0: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8039C9D4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8039C9D8: sll         $a3, $a2, 16
    ctx->r7 = S32(ctx->r6 << 16);
    // 0x8039C9DC: sll         $t0, $t9, 7
    ctx->r8 = S32(ctx->r25 << 7);
    // 0x8039C9E0: sll         $t1, $t6, 3
    ctx->r9 = S32(ctx->r14 << 3);
    // 0x8039C9E4: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x8039C9E8: sra         $t7, $a3, 16
    ctx->r15 = S32(SIGNED(ctx->r7) >> 16);
    // 0x8039C9EC: addiu       $t3, $t3, 0x3D30
    ctx->r11 = ADD32(ctx->r11, 0X3D30);
    // 0x8039C9F0: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x8039C9F4: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x8039C9F8: or          $s1, $t6, $zero
    ctx->r17 = ctx->r14 | 0;
    // 0x8039C9FC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8039CA00: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8039CA04: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    // 0x8039CA08: addiu       $s0, $s0, -0x32B0
    ctx->r16 = ADD32(ctx->r16, -0X32B0);
    // 0x8039CA0C: addu        $v1, $t2, $t3
    ctx->r3 = ADD32(ctx->r10, ctx->r11);
    // 0x8039CA10: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8039CA14:
    // 0x8039CA14: addu        $t4, $s0, $v0
    ctx->r12 = ADD32(ctx->r16, ctx->r2);
    // 0x8039CA18: addu        $t6, $v1, $v0
    ctx->r14 = ADD32(ctx->r3, ctx->r2);
    // 0x8039CA1C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8039CA20: sll         $t7, $v0, 16
    ctx->r15 = S32(ctx->r2 << 16);
    // 0x8039CA24: lbu         $t5, 0x150($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X150);
    // 0x8039CA28: sra         $v0, $t7, 16
    ctx->r2 = S32(SIGNED(ctx->r15) >> 16);
    // 0x8039CA2C: slti        $at, $v0, 0x8
    ctx->r1 = SIGNED(ctx->r2) < 0X8 ? 1 : 0;
    // 0x8039CA30: bne         $at, $zero, L_8039CA14
    if (ctx->r1 != 0) {
        // 0x8039CA34: sb          $t5, 0x0($t6)
        MEM_B(0X0, ctx->r14) = ctx->r13;
            goto L_8039CA14;
    }
    // 0x8039CA34: sb          $t5, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r13;
    // 0x8039CA38: lh          $t0, 0x2A($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X2A);
    // 0x8039CA3C: lb          $t9, 0x14A($s0)
    ctx->r25 = MEM_B(ctx->r16, 0X14A);
    // 0x8039CA40: sll         $t1, $t0, 4
    ctx->r9 = S32(ctx->r8 << 4);
    // 0x8039CA44: addu        $t2, $t1, $s1
    ctx->r10 = ADD32(ctx->r9, ctx->r17);
    // 0x8039CA48: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8039CA4C: sll         $a0, $a3, 16
    ctx->r4 = S32(ctx->r7 << 16);
    // 0x8039CA50: sll         $a1, $s1, 16
    ctx->r5 = S32(ctx->r17 << 16);
    // 0x8039CA54: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8039CA58: sra         $t4, $a1, 16
    ctx->r12 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8039CA5C: sra         $t3, $a0, 16
    ctx->r11 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8039CA60: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    // 0x8039CA64: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
    // 0x8039CA68: sh          $a3, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r7;
    // 0x8039CA6C: jal         0x8039B2D4
    // 0x8039CA70: sb          $t9, 0x5330($at)
    MEM_B(0X5330, ctx->r1) = ctx->r25;
    func_8039B2D4(rdram, ctx);
        goto after_0;
    // 0x8039CA70: sb          $t9, 0x5330($at)
    MEM_B(0X5330, ctx->r1) = ctx->r25;
    after_0:
    // 0x8039CA74: lh          $a3, 0x24($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X24);
    // 0x8039CA78: lbu         $t5, 0x14C($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X14C);
    // 0x8039CA7C: sll         $t7, $a3, 4
    ctx->r15 = S32(ctx->r7 << 4);
    // 0x8039CA80: addu        $t8, $t7, $s1
    ctx->r24 = ADD32(ctx->r15, ctx->r17);
    // 0x8039CA84: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8039CA88: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8039CA8C: or          $t6, $v0, $t5
    ctx->r14 = ctx->r2 | ctx->r13;
    // 0x8039CA90: sb          $t6, -0x2F6C($at)
    MEM_B(-0X2F6C, ctx->r1) = ctx->r14;
    // 0x8039CA94: andi        $a1, $s1, 0xFF
    ctx->r5 = ctx->r17 & 0XFF;
    // 0x8039CA98: jal         0x8006F274
    // 0x8039CA9C: andi        $a0, $a3, 0xFF
    ctx->r4 = ctx->r7 & 0XFF;
    func_8006F274(rdram, ctx);
        goto after_1;
    // 0x8039CA9C: andi        $a0, $a3, 0xFF
    ctx->r4 = ctx->r7 & 0XFF;
    after_1:
    // 0x8039CAA0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8039CAA4: addiu       $a0, $a0, -0x3153
    ctx->r4 = ADD32(ctx->r4, -0X3153);
    // 0x8039CAA8: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8039CAAC: jal         0x8001DA44
    // 0x8039CAB0: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    func_8001DA44(rdram, ctx);
        goto after_2;
    // 0x8039CAB0: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    after_2:
    // 0x8039CAB4: lh          $a3, 0x2A($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X2A);
    // 0x8039CAB8: sll         $t2, $s1, 2
    ctx->r10 = S32(ctx->r17 << 2);
    // 0x8039CABC: addiu       $a3, $a3, 0x24
    ctx->r7 = ADD32(ctx->r7, 0X24);
    // 0x8039CAC0: sll         $t0, $a3, 16
    ctx->r8 = S32(ctx->r7 << 16);
    // 0x8039CAC4: sra         $t1, $t0, 16
    ctx->r9 = S32(SIGNED(ctx->r8) >> 16);
    // 0x8039CAC8: sll         $t9, $t1, 2
    ctx->r25 = S32(ctx->r9 << 2);
    // 0x8039CACC: addu        $t9, $t9, $t1
    ctx->r25 = ADD32(ctx->r25, ctx->r9);
    // 0x8039CAD0: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8039CAD4: addu        $t2, $t2, $s1
    ctx->r10 = ADD32(ctx->r10, ctx->r17);
    // 0x8039CAD8: lui         $t4, 0x800B
    ctx->r12 = S32(0X800B << 16);
    // 0x8039CADC: addiu       $t4, $t4, -0x7A10
    ctx->r12 = ADD32(ctx->r12, -0X7A10);
    // 0x8039CAE0: addu        $t3, $t9, $t2
    ctx->r11 = ADD32(ctx->r25, ctx->r10);
    // 0x8039CAE4: addu        $v1, $t3, $t4
    ctx->r3 = ADD32(ctx->r11, ctx->r12);
    // 0x8039CAE8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8039CAEC:
    // 0x8039CAEC: addu        $t5, $s0, $v0
    ctx->r13 = ADD32(ctx->r16, ctx->r2);
    // 0x8039CAF0: addu        $t6, $v1, $v0
    ctx->r14 = ADD32(ctx->r3, ctx->r2);
    // 0x8039CAF4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8039CAF8: sll         $t8, $v0, 16
    ctx->r24 = S32(ctx->r2 << 16);
    // 0x8039CAFC: lbu         $t7, 0x158($t5)
    ctx->r15 = MEM_BU(ctx->r13, 0X158);
    // 0x8039CB00: sra         $v0, $t8, 16
    ctx->r2 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8039CB04: slti        $at, $v0, 0x5
    ctx->r1 = SIGNED(ctx->r2) < 0X5 ? 1 : 0;
    // 0x8039CB08: bne         $at, $zero, L_8039CAEC
    if (ctx->r1 != 0) {
        // 0x8039CB0C: sb          $t7, 0x0($t6)
        MEM_B(0X0, ctx->r14) = ctx->r15;
            goto L_8039CAEC;
    }
    // 0x8039CB0C: sb          $t7, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r15;
    // 0x8039CB10: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8039CB14: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8039CB18: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8039CB1C: jr          $ra
    // 0x8039CB20: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8039CB20: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8039CB24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039CB24: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8039CB28: sw          $s0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r16;
    // 0x8039CB2C: sll         $s0, $a1, 16
    ctx->r16 = S32(ctx->r5 << 16);
    // 0x8039CB30: sw          $a0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r4;
    // 0x8039CB34: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x8039CB38: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8039CB3C: sra         $t8, $s0, 16
    ctx->r24 = S32(SIGNED(ctx->r16) >> 16);
    // 0x8039CB40: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
    // 0x8039CB44: sw          $a1, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r5;
    // 0x8039CB48: addiu       $a2, $a0, 0x2A
    ctx->r6 = ADD32(ctx->r4, 0X2A);
    // 0x8039CB4C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8039CB50:
    // 0x8039CB50: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x8039CB54: addiu       $t0, $t0, 0x37B0
    ctx->r8 = ADD32(ctx->r8, 0X37B0);
    // 0x8039CB58: sll         $t9, $v0, 5
    ctx->r25 = S32(ctx->r2 << 5);
    // 0x8039CB5C: addu        $a1, $t9, $t0
    ctx->r5 = ADD32(ctx->r25, ctx->r8);
    // 0x8039CB60: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8039CB64: sll         $t1, $v1, 1
    ctx->r9 = S32(ctx->r3 << 1);
L_8039CB68:
    // 0x8039CB68: addu        $a3, $a1, $t1
    ctx->r7 = ADD32(ctx->r5, ctx->r9);
    // 0x8039CB6C: lbu         $t2, 0x0($a3)
    ctx->r10 = MEM_BU(ctx->r7, 0X0);
    // 0x8039CB70: nop

    // 0x8039CB74: bne         $a2, $t2, L_8039CBD8
    if (ctx->r6 != ctx->r10) {
        // 0x8039CB78: nop
    
            goto L_8039CBD8;
    }
    // 0x8039CB78: nop

    // 0x8039CB7C: lbu         $t3, 0x1($a3)
    ctx->r11 = MEM_BU(ctx->r7, 0X1);
    // 0x8039CB80: nop

    // 0x8039CB84: bne         $s0, $t3, L_8039CBD8
    if (ctx->r16 != ctx->r11) {
        // 0x8039CB88: sll         $t4, $a0, 5
        ctx->r12 = S32(ctx->r4 << 5);
            goto L_8039CBD8;
    }
    // 0x8039CB88: sll         $t4, $a0, 5
    ctx->r12 = S32(ctx->r4 << 5);
    // 0x8039CB8C: sll         $t5, $s0, 1
    ctx->r13 = S32(ctx->r16 << 1);
    // 0x8039CB90: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x8039CB94: addiu       $t7, $t7, 0x37B0
    ctx->r15 = ADD32(ctx->r15, 0X37B0);
    // 0x8039CB98: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x8039CB9C: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x8039CBA0: lbu         $t8, 0x540($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X540);
    // 0x8039CBA4: sll         $t1, $a0, 4
    ctx->r9 = S32(ctx->r4 << 4);
    // 0x8039CBA8: sb          $t8, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r24;
    // 0x8039CBAC: lbu         $t9, 0x541($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X541);
    // 0x8039CBB0: addu        $t2, $t1, $s0
    ctx->r10 = ADD32(ctx->r9, ctx->r16);
    // 0x8039CBB4: sb          $t9, 0x1($a3)
    MEM_B(0X1, ctx->r7) = ctx->r25;
    // 0x8039CBB8: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8039CBBC: sb          $a2, 0x540($v1)
    MEM_B(0X540, ctx->r3) = ctx->r6;
    // 0x8039CBC0: sb          $s0, 0x541($v1)
    MEM_B(0X541, ctx->r3) = ctx->r16;
    // 0x8039CBC4: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8039CBC8: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x8039CBCC: sb          $t0, 0x5330($at)
    MEM_B(0X5330, ctx->r1) = ctx->r8;
    // 0x8039CBD0: b           L_8039CC20
    // 0x8039CBD4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8039CC20;
    // 0x8039CBD4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8039CBD8:
    // 0x8039CBD8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8039CBDC: sll         $t3, $v1, 16
    ctx->r11 = S32(ctx->r3 << 16);
    // 0x8039CBE0: sra         $v1, $t3, 16
    ctx->r3 = S32(SIGNED(ctx->r11) >> 16);
    // 0x8039CBE4: slti        $at, $v1, 0x10
    ctx->r1 = SIGNED(ctx->r3) < 0X10 ? 1 : 0;
    // 0x8039CBE8: bne         $at, $zero, L_8039CB68
    if (ctx->r1 != 0) {
        // 0x8039CBEC: sll         $t1, $v1, 1
        ctx->r9 = S32(ctx->r3 << 1);
            goto L_8039CB68;
    }
    // 0x8039CBEC: sll         $t1, $v1, 1
    ctx->r9 = S32(ctx->r3 << 1);
    // 0x8039CBF0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8039CBF4: sll         $t5, $v0, 16
    ctx->r13 = S32(ctx->r2 << 16);
    // 0x8039CBF8: sra         $v0, $t5, 16
    ctx->r2 = S32(SIGNED(ctx->r13) >> 16);
    // 0x8039CBFC: slti        $at, $v0, 0x23
    ctx->r1 = SIGNED(ctx->r2) < 0X23 ? 1 : 0;
    // 0x8039CC00: bne         $at, $zero, L_8039CB50
    if (ctx->r1 != 0) {
        // 0x8039CC04: addiu       $t7, $zero, 0xFF
        ctx->r15 = ADD32(0, 0XFF);
            goto L_8039CB50;
    }
    // 0x8039CC04: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x8039CC08: sll         $t8, $a0, 4
    ctx->r24 = S32(ctx->r4 << 4);
    // 0x8039CC0C: addu        $t9, $t8, $s0
    ctx->r25 = ADD32(ctx->r24, ctx->r16);
    // 0x8039CC10: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8039CC14: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8039CC18: sb          $t7, 0x5330($at)
    MEM_B(0X5330, ctx->r1) = ctx->r15;
    // 0x8039CC1C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8039CC20:
    // 0x8039CC20: lw          $s0, 0x4($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4);
    // 0x8039CC24: jr          $ra
    // 0x8039CC28: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8039CC28: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8039CC2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039CC2C: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x8039CC30: sll         $a3, $a1, 16
    ctx->r7 = S32(ctx->r5 << 16);
    // 0x8039CC34: sra         $t8, $a3, 16
    ctx->r24 = S32(SIGNED(ctx->r7) >> 16);
    // 0x8039CC38: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8039CC3C: or          $a3, $t8, $zero
    ctx->r7 = ctx->r24 | 0;
    // 0x8039CC40: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8039CC44: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8039CC48: addiu       $a2, $t7, 0x2A
    ctx->r6 = ADD32(ctx->r15, 0X2A);
    // 0x8039CC4C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_8039CC50:
    // 0x8039CC50: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x8039CC54: addiu       $t0, $t0, 0x37B0
    ctx->r8 = ADD32(ctx->r8, 0X37B0);
    // 0x8039CC58: sll         $t9, $v1, 5
    ctx->r25 = S32(ctx->r3 << 5);
    // 0x8039CC5C: addu        $a0, $t9, $t0
    ctx->r4 = ADD32(ctx->r25, ctx->r8);
    // 0x8039CC60: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8039CC64: sll         $t1, $v0, 1
    ctx->r9 = S32(ctx->r2 << 1);
L_8039CC68:
    // 0x8039CC68: addu        $a1, $a0, $t1
    ctx->r5 = ADD32(ctx->r4, ctx->r9);
    // 0x8039CC6C: lbu         $t2, 0x0($a1)
    ctx->r10 = MEM_BU(ctx->r5, 0X0);
    // 0x8039CC70: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8039CC74: bne         $a2, $t2, L_8039CC94
    if (ctx->r6 != ctx->r10) {
        // 0x8039CC78: sll         $t4, $v0, 16
        ctx->r12 = S32(ctx->r2 << 16);
            goto L_8039CC94;
    }
    // 0x8039CC78: sll         $t4, $v0, 16
    ctx->r12 = S32(ctx->r2 << 16);
    // 0x8039CC7C: lbu         $t3, 0x1($a1)
    ctx->r11 = MEM_BU(ctx->r5, 0X1);
    // 0x8039CC80: nop

    // 0x8039CC84: bne         $a3, $t3, L_8039CC98
    if (ctx->r7 != ctx->r11) {
        // 0x8039CC88: sra         $v0, $t4, 16
        ctx->r2 = S32(SIGNED(ctx->r12) >> 16);
            goto L_8039CC98;
    }
    // 0x8039CC88: sra         $v0, $t4, 16
    ctx->r2 = S32(SIGNED(ctx->r12) >> 16);
    // 0x8039CC8C: jr          $ra
    // 0x8039CC90: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8039CC90: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8039CC94:
    // 0x8039CC94: sra         $v0, $t4, 16
    ctx->r2 = S32(SIGNED(ctx->r12) >> 16);
L_8039CC98:
    // 0x8039CC98: slti        $at, $v0, 0x10
    ctx->r1 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x8039CC9C: bne         $at, $zero, L_8039CC68
    if (ctx->r1 != 0) {
        // 0x8039CCA0: sll         $t1, $v0, 1
        ctx->r9 = S32(ctx->r2 << 1);
            goto L_8039CC68;
    }
    // 0x8039CCA0: sll         $t1, $v0, 1
    ctx->r9 = S32(ctx->r2 << 1);
    // 0x8039CCA4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8039CCA8: sll         $t6, $v1, 16
    ctx->r14 = S32(ctx->r3 << 16);
    // 0x8039CCAC: sra         $v1, $t6, 16
    ctx->r3 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8039CCB0: slti        $at, $v1, 0x23
    ctx->r1 = SIGNED(ctx->r3) < 0X23 ? 1 : 0;
    // 0x8039CCB4: bne         $at, $zero, L_8039CC50
    if (ctx->r1 != 0) {
        // 0x8039CCB8: nop
    
            goto L_8039CC50;
    }
    // 0x8039CCB8: nop

    // 0x8039CCBC: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
    // 0x8039CCC0: jr          $ra
    // 0x8039CCC4: nop

    return;
    // 0x8039CCC4: nop

;}
RECOMP_FUNC void func_8039CCC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039CCC8: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x8039CCCC: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x8039CCD0: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8039CCD4: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x8039CCD8: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8039CCDC: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8039CCE0: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8039CCE4: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8039CCE8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8039CCEC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8039CCF0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8039CCF4: sw          $a0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r4;
    // 0x8039CCF8: sw          $a1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r5;
    // 0x8039CCFC: sw          $a2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r6;
    // 0x8039CD00: sw          $a3, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r7;
    // 0x8039CD04: addiu       $fp, $zero, 0xFF
    ctx->r30 = ADD32(0, 0XFF);
    // 0x8039CD08: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8039CD0C: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
L_8039CD10:
    // 0x8039CD10: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x8039CD14: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8039CD18: subu        $t6, $t6, $v0
    ctx->r14 = SUB32(ctx->r14, ctx->r2);
    // 0x8039CD1C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8039CD20: subu        $t6, $t6, $v0
    ctx->r14 = SUB32(ctx->r14, ctx->r2);
    // 0x8039CD24: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x8039CD28: subu        $t6, $t6, $v0
    ctx->r14 = SUB32(ctx->r14, ctx->r2);
    // 0x8039CD2C: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x8039CD30: addiu       $t7, $t7, 0x5350
    ctx->r15 = ADD32(ctx->r15, 0X5350);
    // 0x8039CD34: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x8039CD38: addu        $s1, $t6, $t7
    ctx->r17 = ADD32(ctx->r14, ctx->r15);
    // 0x8039CD3C: lb          $t8, 0x1747($s1)
    ctx->r24 = MEM_B(ctx->r17, 0X1747);
    // 0x8039CD40: nop

    // 0x8039CD44: bltz        $t8, L_8039CFB8
    if (SIGNED(ctx->r24) < 0) {
        // 0x8039CD48: nop
    
            goto L_8039CFB8;
    }
    // 0x8039CD48: nop

    // 0x8039CD4C: lbu         $t9, 0x174A($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X174A);
    // 0x8039CD50: lh          $t0, 0x7A($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X7A);
    // 0x8039CD54: beq         $t9, $zero, L_8039CFB8
    if (ctx->r25 == 0) {
        // 0x8039CD58: slti        $at, $t0, 0x24
        ctx->r1 = SIGNED(ctx->r8) < 0X24 ? 1 : 0;
            goto L_8039CFB8;
    }
    // 0x8039CD58: slti        $at, $t0, 0x24
    ctx->r1 = SIGNED(ctx->r8) < 0X24 ? 1 : 0;
    // 0x8039CD5C: beq         $at, $zero, L_8039CFB8
    if (ctx->r1 == 0) {
        // 0x8039CD60: nop
    
            goto L_8039CFB8;
    }
    // 0x8039CD60: nop

    // 0x8039CD64: lh          $t1, 0x82($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X82);
    // 0x8039CD68: sll         $s0, $v0, 24
    ctx->r16 = S32(ctx->r2 << 24);
    // 0x8039CD6C: slti        $at, $t1, 0x24
    ctx->r1 = SIGNED(ctx->r9) < 0X24 ? 1 : 0;
    // 0x8039CD70: beq         $at, $zero, L_8039CFB8
    if (ctx->r1 == 0) {
        // 0x8039CD74: sra         $t2, $s0, 24
        ctx->r10 = S32(SIGNED(ctx->r16) >> 24);
            goto L_8039CFB8;
    }
    // 0x8039CD74: sra         $t2, $s0, 24
    ctx->r10 = S32(SIGNED(ctx->r16) >> 24);
    // 0x8039CD78: lh          $t4, 0x86($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X86);
    // 0x8039CD7C: lh          $s4, 0x7E($sp)
    ctx->r20 = MEM_H(ctx->r29, 0X7E);
    // 0x8039CD80: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8039CD84: sll         $a0, $t2, 24
    ctx->r4 = S32(ctx->r10 << 24);
    // 0x8039CD88: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x8039CD8C: sll         $t6, $s4, 2
    ctx->r14 = S32(ctx->r20 << 2);
    // 0x8039CD90: lb          $s2, 0x1770($s1)
    ctx->r18 = MEM_B(ctx->r17, 0X1770);
    // 0x8039CD94: sll         $t5, $t5, 1
    ctx->r13 = S32(ctx->r13 << 1);
    // 0x8039CD98: sra         $t3, $a0, 24
    ctx->r11 = S32(SIGNED(ctx->r4) >> 24);
    // 0x8039CD9C: lb          $a1, 0x83($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X83);
    // 0x8039CDA0: lb          $s3, 0x7B($sp)
    ctx->r19 = MEM_B(ctx->r29, 0X7B);
    // 0x8039CDA4: subu        $t6, $t6, $s4
    ctx->r14 = SUB32(ctx->r14, ctx->r20);
    // 0x8039CDA8: sll         $s4, $t6, 1
    ctx->r20 = S32(ctx->r14 << 1);
    // 0x8039CDAC: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    // 0x8039CDB0: sw          $t5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r13;
    // 0x8039CDB4: or          $s0, $t2, $zero
    ctx->r16 = ctx->r10 | 0;
    // 0x8039CDB8: jal         0x8039D098
    // 0x8039CDBC: sh          $v0, 0x76($sp)
    MEM_H(0X76, ctx->r29) = ctx->r2;
    func_8039D098(rdram, ctx);
        goto after_0;
    // 0x8039CDBC: sh          $v0, 0x76($sp)
    MEM_H(0X76, ctx->r29) = ctx->r2;
    after_0:
    // 0x8039CDC0: sll         $s7, $v0, 16
    ctx->r23 = S32(ctx->r2 << 16);
    // 0x8039CDC4: sll         $a0, $s0, 24
    ctx->r4 = S32(ctx->r16 << 24);
    // 0x8039CDC8: sll         $a1, $s3, 24
    ctx->r5 = S32(ctx->r19 << 24);
    // 0x8039CDCC: sra         $t7, $s7, 16
    ctx->r15 = S32(SIGNED(ctx->r23) >> 16);
    // 0x8039CDD0: sra         $t9, $a1, 24
    ctx->r25 = S32(SIGNED(ctx->r5) >> 24);
    // 0x8039CDD4: sra         $t8, $a0, 24
    ctx->r24 = S32(SIGNED(ctx->r4) >> 24);
    // 0x8039CDD8: or          $s7, $t7, $zero
    ctx->r23 = ctx->r15 | 0;
    // 0x8039CDDC: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x8039CDE0: jal         0x8039D098
    // 0x8039CDE4: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    func_8039D098(rdram, ctx);
        goto after_1;
    // 0x8039CDE4: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    after_1:
    // 0x8039CDE8: sll         $t0, $v0, 5
    ctx->r8 = S32(ctx->r2 << 5);
    // 0x8039CDEC: subu        $t0, $t0, $v0
    ctx->r8 = SUB32(ctx->r8, ctx->r2);
    // 0x8039CDF0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8039CDF4: addu        $t1, $s1, $t0
    ctx->r9 = ADD32(ctx->r17, ctx->r8);
    // 0x8039CDF8: addu        $s3, $t1, $s4
    ctx->r19 = ADD32(ctx->r9, ctx->r20);
    // 0x8039CDFC: sh          $v0, 0x6E($sp)
    MEM_H(0X6E, ctx->r29) = ctx->r2;
    // 0x8039CE00: beq         $s2, $s7, L_8039CE10
    if (ctx->r18 == ctx->r23) {
        // 0x8039CE04: addiu       $s3, $s3, 0x1804
        ctx->r19 = ADD32(ctx->r19, 0X1804);
            goto L_8039CE10;
    }
    // 0x8039CE04: addiu       $s3, $s3, 0x1804
    ctx->r19 = ADD32(ctx->r19, 0X1804);
    // 0x8039CE08: bne         $s2, $v0, L_8039CE88
    if (ctx->r18 != ctx->r2) {
        // 0x8039CE0C: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8039CE88;
    }
    // 0x8039CE0C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_8039CE10:
    // 0x8039CE10: addiu       $s0, $s1, 0x1780
    ctx->r16 = ADD32(ctx->r17, 0X1780);
    // 0x8039CE14: lh          $a1, 0x7E($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X7E);
    // 0x8039CE18: lh          $a2, 0x86($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X86);
    // 0x8039CE1C: jal         0x8039D130
    // 0x8039CE20: addiu       $a0, $s0, 0x2F
    ctx->r4 = ADD32(ctx->r16, 0X2F);
    func_8039D130(rdram, ctx);
        goto after_2;
    // 0x8039CE20: addiu       $a0, $s0, 0x2F
    ctx->r4 = ADD32(ctx->r16, 0X2F);
    after_2:
    // 0x8039CE24: sll         $s4, $v0, 16
    ctx->r20 = S32(ctx->r2 << 16);
    // 0x8039CE28: sra         $t2, $s4, 16
    ctx->r10 = S32(SIGNED(ctx->r20) >> 16);
    // 0x8039CE2C: lh          $a1, 0x7E($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X7E);
    // 0x8039CE30: lh          $a2, 0x86($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X86);
    // 0x8039CE34: or          $s4, $t2, $zero
    ctx->r20 = ctx->r10 | 0;
    // 0x8039CE38: jal         0x8039D130
    // 0x8039CE3C: addiu       $a0, $s0, 0x2A
    ctx->r4 = ADD32(ctx->r16, 0X2A);
    func_8039D130(rdram, ctx);
        goto after_3;
    // 0x8039CE3C: addiu       $a0, $s0, 0x2A
    ctx->r4 = ADD32(ctx->r16, 0X2A);
    after_3:
    // 0x8039CE40: sll         $s5, $v0, 16
    ctx->r21 = S32(ctx->r2 << 16);
    // 0x8039CE44: sra         $t3, $s5, 16
    ctx->r11 = S32(SIGNED(ctx->r21) >> 16);
    // 0x8039CE48: lh          $a1, 0x7E($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X7E);
    // 0x8039CE4C: lh          $a2, 0x86($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X86);
    // 0x8039CE50: or          $s5, $t3, $zero
    ctx->r21 = ctx->r11 | 0;
    // 0x8039CE54: jal         0x8039D130
    // 0x8039CE58: addiu       $a0, $s0, 0x1B
    ctx->r4 = ADD32(ctx->r16, 0X1B);
    func_8039D130(rdram, ctx);
        goto after_4;
    // 0x8039CE58: addiu       $a0, $s0, 0x1B
    ctx->r4 = ADD32(ctx->r16, 0X1B);
    after_4:
    // 0x8039CE5C: sll         $s6, $v0, 16
    ctx->r22 = S32(ctx->r2 << 16);
    // 0x8039CE60: sra         $t4, $s6, 16
    ctx->r12 = S32(SIGNED(ctx->r22) >> 16);
    // 0x8039CE64: lh          $a1, 0x7E($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X7E);
    // 0x8039CE68: lh          $a2, 0x86($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X86);
    // 0x8039CE6C: or          $s6, $t4, $zero
    ctx->r22 = ctx->r12 | 0;
    // 0x8039CE70: jal         0x8039D130
    // 0x8039CE74: addiu       $a0, $s0, 0x20
    ctx->r4 = ADD32(ctx->r16, 0X20);
    func_8039D130(rdram, ctx);
        goto after_5;
    // 0x8039CE74: addiu       $a0, $s0, 0x20
    ctx->r4 = ADD32(ctx->r16, 0X20);
    after_5:
    // 0x8039CE78: sll         $v1, $v0, 16
    ctx->r3 = S32(ctx->r2 << 16);
    // 0x8039CE7C: sra         $t5, $v1, 16
    ctx->r13 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8039CE80: b           L_8039CE94
    // 0x8039CE84: or          $v1, $t5, $zero
    ctx->r3 = ctx->r13 | 0;
        goto L_8039CE94;
    // 0x8039CE84: or          $v1, $t5, $zero
    ctx->r3 = ctx->r13 | 0;
L_8039CE88:
    // 0x8039CE88: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
    // 0x8039CE8C: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    // 0x8039CE90: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
L_8039CE94:
    // 0x8039CE94: lh          $t6, 0x7A($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X7A);
    // 0x8039CE98: lh          $t7, 0x82($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X82);
    // 0x8039CE9C: sll         $t2, $s7, 5
    ctx->r10 = S32(ctx->r23 << 5);
    // 0x8039CEA0: bne         $t6, $t7, L_8039CF18
    if (ctx->r14 != ctx->r15) {
        // 0x8039CEA4: subu        $t2, $t2, $s7
        ctx->r10 = SUB32(ctx->r10, ctx->r23);
            goto L_8039CF18;
    }
    // 0x8039CEA4: subu        $t2, $t2, $s7
    ctx->r10 = SUB32(ctx->r10, ctx->r23);
    // 0x8039CEA8: sll         $t8, $s7, 5
    ctx->r24 = S32(ctx->r23 << 5);
    // 0x8039CEAC: subu        $t8, $t8, $s7
    ctx->r24 = SUB32(ctx->r24, ctx->r23);
    // 0x8039CEB0: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x8039CEB4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8039CEB8: addu        $t9, $s1, $t8
    ctx->r25 = ADD32(ctx->r17, ctx->r24);
    // 0x8039CEBC: addu        $v0, $t9, $t0
    ctx->r2 = ADD32(ctx->r25, ctx->r8);
    // 0x8039CEC0: lwl         $at, 0x1804($v0)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r2, 0X1804);
    // 0x8039CEC4: lwr         $at, 0x1807($v0)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r2, 0X1807);
    // 0x8039CEC8: addiu       $t1, $sp, 0x60
    ctx->r9 = ADD32(ctx->r29, 0X60);
    // 0x8039CECC: sw          $at, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r1;
    // 0x8039CED0: lhu         $at, 0x1808($v0)
    ctx->r1 = MEM_HU(ctx->r2, 0X1808);
    // 0x8039CED4: addiu       $t6, $sp, 0x60
    ctx->r14 = ADD32(ctx->r29, 0X60);
    // 0x8039CED8: sh          $at, 0x4($t1)
    MEM_H(0X4, ctx->r9) = ctx->r1;
    // 0x8039CEDC: lwl         $at, 0x0($s3)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r19, 0X0);
    // 0x8039CEE0: lwr         $at, 0x3($s3)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r19, 0X3);
    // 0x8039CEE4: addiu       $v0, $v0, 0x1804
    ctx->r2 = ADD32(ctx->r2, 0X1804);
    // 0x8039CEE8: swl         $at, 0x0($v0)
    do_swl(rdram, 0X0, ctx->r2, ctx->r1);
    // 0x8039CEEC: swr         $at, 0x3($v0)
    do_swr(rdram, 0X3, ctx->r2, ctx->r1);
    // 0x8039CEF0: lhu         $at, 0x4($s3)
    ctx->r1 = MEM_HU(ctx->r19, 0X4);
    // 0x8039CEF4: nop

    // 0x8039CEF8: sh          $at, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r1;
    // 0x8039CEFC: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x8039CF00: nop

    // 0x8039CF04: swl         $at, 0x0($s3)
    do_swl(rdram, 0X0, ctx->r19, ctx->r1);
    // 0x8039CF08: swr         $at, 0x3($s3)
    do_swr(rdram, 0X3, ctx->r19, ctx->r1);
    // 0x8039CF0C: lhu         $at, 0x4($t6)
    ctx->r1 = MEM_HU(ctx->r14, 0X4);
    // 0x8039CF10: b           L_8039CFB0
    // 0x8039CF14: sh          $at, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r1;
        goto L_8039CFB0;
    // 0x8039CF14: sh          $at, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r1;
L_8039CF18:
    // 0x8039CF18: beq         $s2, $s7, L_8039CF30
    if (ctx->r18 == ctx->r23) {
        // 0x8039CF1C: sll         $t2, $t2, 2
        ctx->r10 = S32(ctx->r10 << 2);
            goto L_8039CF30;
    }
    // 0x8039CF1C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8039CF20: lh          $t9, 0x6E($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X6E);
    // 0x8039CF24: nop

    // 0x8039CF28: bne         $s2, $t9, L_8039CF80
    if (ctx->r18 != ctx->r25) {
        // 0x8039CF2C: lw          $t3, 0x44($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X44);
            goto L_8039CF80;
    }
    // 0x8039CF2C: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
L_8039CF30:
    // 0x8039CF30: bne         $s4, $zero, L_8039CF40
    if (ctx->r20 != 0) {
        // 0x8039CF34: addiu       $s0, $s1, 0x1780
        ctx->r16 = ADD32(ctx->r17, 0X1780);
            goto L_8039CF40;
    }
    // 0x8039CF34: addiu       $s0, $s1, 0x1780
    ctx->r16 = ADD32(ctx->r17, 0X1780);
    // 0x8039CF38: sb          $fp, 0x2F($s0)
    MEM_B(0X2F, ctx->r16) = ctx->r30;
    // 0x8039CF3C: sb          $zero, 0x30($s0)
    MEM_B(0X30, ctx->r16) = 0;
L_8039CF40:
    // 0x8039CF40: bne         $s5, $zero, L_8039CF50
    if (ctx->r21 != 0) {
        // 0x8039CF44: addiu       $s0, $s1, 0x1780
        ctx->r16 = ADD32(ctx->r17, 0X1780);
            goto L_8039CF50;
    }
    // 0x8039CF44: addiu       $s0, $s1, 0x1780
    ctx->r16 = ADD32(ctx->r17, 0X1780);
    // 0x8039CF48: sb          $fp, 0x2A($s0)
    MEM_B(0X2A, ctx->r16) = ctx->r30;
    // 0x8039CF4C: sb          $zero, 0x2B($s0)
    MEM_B(0X2B, ctx->r16) = 0;
L_8039CF50:
    // 0x8039CF50: bne         $s6, $zero, L_8039CF68
    if (ctx->r22 != 0) {
        // 0x8039CF54: addiu       $s0, $s1, 0x1780
        ctx->r16 = ADD32(ctx->r17, 0X1780);
            goto L_8039CF68;
    }
    // 0x8039CF54: addiu       $s0, $s1, 0x1780
    ctx->r16 = ADD32(ctx->r17, 0X1780);
    // 0x8039CF58: ori         $t0, $zero, 0xFFFF
    ctx->r8 = 0 | 0XFFFF;
    // 0x8039CF5C: sb          $fp, 0x1B($s0)
    MEM_B(0X1B, ctx->r16) = ctx->r30;
    // 0x8039CF60: sh          $t0, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r8;
    // 0x8039CF64: sb          $fp, 0x1E($s0)
    MEM_B(0X1E, ctx->r16) = ctx->r30;
L_8039CF68:
    // 0x8039CF68: bne         $v1, $zero, L_8039CF7C
    if (ctx->r3 != 0) {
        // 0x8039CF6C: addiu       $s0, $s1, 0x1780
        ctx->r16 = ADD32(ctx->r17, 0X1780);
            goto L_8039CF7C;
    }
    // 0x8039CF6C: addiu       $s0, $s1, 0x1780
    ctx->r16 = ADD32(ctx->r17, 0X1780);
    // 0x8039CF70: sb          $fp, 0x20($s0)
    MEM_B(0X20, ctx->r16) = ctx->r30;
    // 0x8039CF74: sh          $zero, 0x22($s0)
    MEM_H(0X22, ctx->r16) = 0;
    // 0x8039CF78: sb          $fp, 0x24($s0)
    MEM_B(0X24, ctx->r16) = ctx->r30;
L_8039CF7C:
    // 0x8039CF7C: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
L_8039CF80:
    // 0x8039CF80: addu        $t1, $s1, $t2
    ctx->r9 = ADD32(ctx->r17, ctx->r10);
    // 0x8039CF84: addu        $v0, $t1, $t3
    ctx->r2 = ADD32(ctx->r9, ctx->r11);
    // 0x8039CF88: lh          $v1, 0x0($s3)
    ctx->r3 = MEM_H(ctx->r19, 0X0);
    // 0x8039CF8C: lhu         $t4, 0x1804($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X1804);
    // 0x8039CF90: addiu       $v0, $v0, 0x1804
    ctx->r2 = ADD32(ctx->r2, 0X1804);
    // 0x8039CF94: sh          $t4, 0x0($s3)
    MEM_H(0X0, ctx->r19) = ctx->r12;
    // 0x8039CF98: sh          $v1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r3;
    // 0x8039CF9C: lbu         $v1, 0x3($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X3);
    // 0x8039CFA0: lbu         $t5, 0x3($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X3);
    // 0x8039CFA4: nop

    // 0x8039CFA8: sb          $t5, 0x3($s3)
    MEM_B(0X3, ctx->r19) = ctx->r13;
    // 0x8039CFAC: sb          $v1, 0x3($v0)
    MEM_B(0X3, ctx->r2) = ctx->r3;
L_8039CFB0:
    // 0x8039CFB0: lh          $v0, 0x76($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X76);
    // 0x8039CFB4: nop

L_8039CFB8:
    // 0x8039CFB8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8039CFBC: sll         $t7, $v0, 16
    ctx->r15 = S32(ctx->r2 << 16);
    // 0x8039CFC0: sra         $v0, $t7, 16
    ctx->r2 = S32(SIGNED(ctx->r15) >> 16);
    // 0x8039CFC4: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x8039CFC8: bne         $at, $zero, L_8039CD10
    if (ctx->r1 != 0) {
        // 0x8039CFCC: sll         $t6, $v0, 2
        ctx->r14 = S32(ctx->r2 << 2);
            goto L_8039CD10;
    }
    // 0x8039CFCC: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x8039CFD0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8039CFD4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8039CFD8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8039CFDC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8039CFE0: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8039CFE4: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8039CFE8: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8039CFEC: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8039CFF0: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8039CFF4: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x8039CFF8: jr          $ra
    // 0x8039CFFC: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x8039CFFC: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_8039D000(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039D000: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8039D004: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8039D008: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8039D00C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8039D010: lui         $s1, 0x8011
    ctx->r17 = S32(0X8011 << 16);
    // 0x8039D014: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8039D018: addiu       $s1, $s1, 0x5350
    ctx->r17 = ADD32(ctx->r17, 0X5350);
    // 0x8039D01C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8039D020: addiu       $s2, $zero, 0x12B8
    ctx->r18 = ADD32(0, 0X12B8);
L_8039D024:
    // 0x8039D024: multu       $s0, $s2
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8039D028: sll         $a1, $s0, 16
    ctx->r5 = S32(ctx->r16 << 16);
    // 0x8039D02C: sra         $t9, $a1, 16
    ctx->r25 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8039D030: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8039D034: mflo        $t6
    ctx->r14 = lo;
    // 0x8039D038: addu        $t7, $s1, $t6
    ctx->r15 = ADD32(ctx->r17, ctx->r14);
    // 0x8039D03C: lb          $t8, 0x1747($t7)
    ctx->r24 = MEM_B(ctx->r15, 0X1747);
    // 0x8039D040: nop

    // 0x8039D044: bltz        $t8, L_8039D068
    if (SIGNED(ctx->r24) < 0) {
        // 0x8039D048: nop
    
            goto L_8039D068;
    }
    // 0x8039D048: nop

    // 0x8039D04C: jal         0x80031CE0
    // 0x8039D050: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    func_80031CE0(rdram, ctx);
        goto after_0;
    // 0x8039D050: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    after_0:
    // 0x8039D054: sll         $t0, $s0, 2
    ctx->r8 = S32(ctx->r16 << 2);
    // 0x8039D058: addu        $t1, $s1, $t0
    ctx->r9 = ADD32(ctx->r17, ctx->r8);
    // 0x8039D05C: sw          $v0, 0x14($t1)
    MEM_W(0X14, ctx->r9) = ctx->r2;
    // 0x8039D060: jal         0x80031B20
    // 0x8039D064: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80031B20(rdram, ctx);
        goto after_1;
    // 0x8039D064: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
L_8039D068:
    // 0x8039D068: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8039D06C: sll         $t2, $s0, 16
    ctx->r10 = S32(ctx->r16 << 16);
    // 0x8039D070: sra         $s0, $t2, 16
    ctx->r16 = S32(SIGNED(ctx->r10) >> 16);
    // 0x8039D074: slti        $at, $s0, 0x2
    ctx->r1 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
    // 0x8039D078: bne         $at, $zero, L_8039D024
    if (ctx->r1 != 0) {
        // 0x8039D07C: nop
    
            goto L_8039D024;
    }
    // 0x8039D07C: nop

    // 0x8039D080: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8039D084: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8039D088: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8039D08C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8039D090: jr          $ra
    // 0x8039D094: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8039D094: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8039D098(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039D098: sll         $t6, $a0, 24
    ctx->r14 = S32(ctx->r4 << 24);
    // 0x8039D09C: sra         $t7, $t6, 24
    ctx->r15 = S32(SIGNED(ctx->r14) >> 24);
    // 0x8039D0A0: sll         $t0, $t7, 2
    ctx->r8 = S32(ctx->r15 << 2);
    // 0x8039D0A4: addu        $t0, $t0, $t7
    ctx->r8 = ADD32(ctx->r8, ctx->r15);
    // 0x8039D0A8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8039D0AC: subu        $t0, $t0, $t7
    ctx->r8 = SUB32(ctx->r8, ctx->r15);
    // 0x8039D0B0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8039D0B4: subu        $t0, $t0, $t7
    ctx->r8 = SUB32(ctx->r8, ctx->r15);
    // 0x8039D0B8: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x8039D0BC: subu        $t0, $t0, $t7
    ctx->r8 = SUB32(ctx->r8, ctx->r15);
    // 0x8039D0C0: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x8039D0C4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8039D0C8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8039D0CC: sll         $t8, $a1, 24
    ctx->r24 = S32(ctx->r5 << 24);
    // 0x8039D0D0: addiu       $t1, $t1, 0x5350
    ctx->r9 = ADD32(ctx->r9, 0X5350);
    // 0x8039D0D4: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x8039D0D8: sra         $a1, $t8, 24
    ctx->r5 = S32(SIGNED(ctx->r24) >> 24);
    // 0x8039D0DC: addu        $v0, $t0, $t1
    ctx->r2 = ADD32(ctx->r8, ctx->r9);
    // 0x8039D0E0: addiu       $a0, $zero, 0x7C
    ctx->r4 = ADD32(0, 0X7C);
    // 0x8039D0E4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_8039D0E8:
    // 0x8039D0E8: multu       $v1, $a0
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8039D0EC: mflo        $t2
    ctx->r10 = lo;
    // 0x8039D0F0: addu        $t3, $v0, $t2
    ctx->r11 = ADD32(ctx->r2, ctx->r10);
    // 0x8039D0F4: lb          $t4, 0x1800($t3)
    ctx->r12 = MEM_B(ctx->r11, 0X1800);
    // 0x8039D0F8: nop

    // 0x8039D0FC: bne         $a1, $t4, L_8039D10C
    if (ctx->r5 != ctx->r12) {
        // 0x8039D100: nop
    
            goto L_8039D10C;
    }
    // 0x8039D100: nop

    // 0x8039D104: jr          $ra
    // 0x8039D108: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8039D108: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8039D10C:
    // 0x8039D10C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8039D110: sll         $t5, $v1, 24
    ctx->r13 = S32(ctx->r3 << 24);
    // 0x8039D114: sra         $v1, $t5, 24
    ctx->r3 = S32(SIGNED(ctx->r13) >> 24);
    // 0x8039D118: slti        $at, $v1, 0x24
    ctx->r1 = SIGNED(ctx->r3) < 0X24 ? 1 : 0;
    // 0x8039D11C: bne         $at, $zero, L_8039D0E8
    if (ctx->r1 != 0) {
        // 0x8039D120: nop
    
            goto L_8039D0E8;
    }
    // 0x8039D120: nop

    // 0x8039D124: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8039D128: jr          $ra
    // 0x8039D12C: nop

    return;
    // 0x8039D12C: nop

;}
RECOMP_FUNC void func_8039D130(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039D130: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8039D134: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x8039D138: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x8039D13C: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x8039D140: sll         $t8, $a2, 16
    ctx->r24 = S32(ctx->r6 << 16);
    // 0x8039D144: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8039D148: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8039D14C: bne         $a1, $v0, L_8039D15C
    if (ctx->r5 != ctx->r2) {
        // 0x8039D150: or          $a2, $t9, $zero
        ctx->r6 = ctx->r25 | 0;
            goto L_8039D15C;
    }
    // 0x8039D150: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    // 0x8039D154: b           L_8039D174
    // 0x8039D158: sb          $t9, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r25;
        goto L_8039D174;
    // 0x8039D158: sb          $t9, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r25;
L_8039D15C:
    // 0x8039D15C: bne         $a2, $v0, L_8039D16C
    if (ctx->r6 != ctx->r2) {
        // 0x8039D160: nop
    
            goto L_8039D16C;
    }
    // 0x8039D160: nop

    // 0x8039D164: b           L_8039D174
    // 0x8039D168: sb          $a1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r5;
        goto L_8039D174;
    // 0x8039D168: sb          $a1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r5;
L_8039D16C:
    // 0x8039D16C: jr          $ra
    // 0x8039D170: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8039D170: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8039D174:
    // 0x8039D174: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8039D178: jr          $ra
    // 0x8039D17C: nop

    return;
    // 0x8039D17C: nop

;}
RECOMP_FUNC void func_8039D180(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039D180: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8039D184: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8039D188: jal         0x8002F2AC
    // 0x8039D18C: nop

    func_8002F2AC(rdram, ctx);
        goto after_0;
    // 0x8039D18C: nop

    after_0:
    // 0x8039D190: jal         0x80020270
    // 0x8039D194: nop

    func_80020270(rdram, ctx);
        goto after_1;
    // 0x8039D194: nop

    after_1:
    // 0x8039D198: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x8039D19C: lw          $t7, -0x2F98($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X2F98);
    // 0x8039D1A0: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x8039D1A4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8039D1A8: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8039D1AC: jal         0x80036234
    // 0x8039D1B0: sb          $t6, -0x13EC($at)
    MEM_B(-0X13EC, ctx->r1) = ctx->r14;
    func_80036234(rdram, ctx);
        goto after_2;
    // 0x8039D1B0: sb          $t6, -0x13EC($at)
    MEM_B(-0X13EC, ctx->r1) = ctx->r14;
    after_2:
    // 0x8039D1B4: addiu       $a0, $zero, 0xF00
    ctx->r4 = ADD32(0, 0XF00);
    // 0x8039D1B8: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x8039D1BC: jal         0x80049E40
    // 0x8039D1C0: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_80049E40(rdram, ctx);
        goto after_3;
    // 0x8039D1C0: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_3:
    // 0x8039D1C4: lui         $at, 0x803A
    ctx->r1 = S32(0X803A << 16);
    // 0x8039D1C8: sw          $zero, 0x1EC8($at)
    MEM_W(0X1EC8, ctx->r1) = 0;
    // 0x8039D1CC: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8039D1D0: lui         $at, 0x803A
    ctx->r1 = S32(0X803A << 16);
    // 0x8039D1D4: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x8039D1D8: lw          $a0, 0x1EC4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1EC4);
    // 0x8039D1DC: sw          $t8, 0x1ECC($at)
    MEM_W(0X1ECC, ctx->r1) = ctx->r24;
    // 0x8039D1E0: jal         0x80029D84
    // 0x8039D1E4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80029D84(rdram, ctx);
        goto after_4;
    // 0x8039D1E4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x8039D1E8: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8039D1EC: lw          $a0, 0x1EC4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1EC4);
    // 0x8039D1F0: jal         0x80029DF8
    // 0x8039D1F4: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    func_80029DF8(rdram, ctx);
        goto after_5;
    // 0x8039D1F4: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    after_5:
    // 0x8039D1F8: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8039D1FC: addiu       $a0, $a0, 0x1EB8
    ctx->r4 = ADD32(ctx->r4, 0X1EB8);
    // 0x8039D200: sh          $zero, 0x0($a0)
    MEM_H(0X0, ctx->r4) = 0;
    // 0x8039D204: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_8039D208:
    // 0x8039D208: addu        $t9, $a0, $v1
    ctx->r25 = ADD32(ctx->r4, ctx->r3);
    // 0x8039D20C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8039D210: andi        $t0, $v1, 0xFF
    ctx->r8 = ctx->r3 & 0XFF;
    // 0x8039D214: slti        $at, $t0, 0x8
    ctx->r1 = SIGNED(ctx->r8) < 0X8 ? 1 : 0;
    // 0x8039D218: or          $v1, $t0, $zero
    ctx->r3 = ctx->r8 | 0;
    // 0x8039D21C: bne         $at, $zero, L_8039D208
    if (ctx->r1 != 0) {
        // 0x8039D220: sb          $zero, 0x2($t9)
        MEM_B(0X2, ctx->r25) = 0;
            goto L_8039D208;
    }
    // 0x8039D220: sb          $zero, 0x2($t9)
    MEM_B(0X2, ctx->r25) = 0;
    // 0x8039D224: lui         $t2, 0x800C
    ctx->r10 = S32(0X800C << 16);
    // 0x8039D228: addiu       $t2, $t2, 0x5394
    ctx->r10 = ADD32(ctx->r10, 0X5394);
    // 0x8039D22C: addiu       $t1, $zero, 0x50F
    ctx->r9 = ADD32(0, 0X50F);
    // 0x8039D230: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8039D234: addiu       $t4, $zero, 0x10
    ctx->r12 = ADD32(0, 0X10);
    // 0x8039D238: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x8039D23C: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x8039D240: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x8039D244: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x8039D248: addiu       $a0, $zero, 0x30
    ctx->r4 = ADD32(0, 0X30);
    // 0x8039D24C: addiu       $a1, $zero, -0x40
    ctx->r5 = ADD32(0, -0X40);
    // 0x8039D250: addiu       $a2, $zero, -0x40
    ctx->r6 = ADD32(0, -0X40);
    // 0x8039D254: jal         0x8039D69C
    // 0x8039D258: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    func_8039D69C(rdram, ctx);
        goto after_6;
    // 0x8039D258: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    after_6:
    // 0x8039D25C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8039D260: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8039D264: jal         0x80021214
    // 0x8039D268: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80021214(rdram, ctx);
        goto after_7;
    // 0x8039D268: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x8039D26C: lui         $t5, 0x800B
    ctx->r13 = S32(0X800B << 16);
    // 0x8039D270: addiu       $t5, $t5, -0x6CE4
    ctx->r13 = ADD32(ctx->r13, -0X6CE4);
    // 0x8039D274: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x8039D278: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8039D27C: sw          $at, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r1;
    // 0x8039D280: lw          $a2, 0x4($t5)
    ctx->r6 = MEM_W(ctx->r13, 0X4);
    // 0x8039D284: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x8039D288: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x8039D28C: lw          $a3, 0x8($t5)
    ctx->r7 = MEM_W(ctx->r13, 0X8);
    // 0x8039D290: lw          $a0, 0x1EC4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1EC4);
    // 0x8039D294: jal         0x8004B078
    // 0x8039D298: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    func_8004B078(rdram, ctx);
        goto after_8;
    // 0x8039D298: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    after_8:
    // 0x8039D29C: jal         0x8039D5E0
    // 0x8039D2A0: addiu       $a0, $zero, 0x2E
    ctx->r4 = ADD32(0, 0X2E);
    func_8039D5E0(rdram, ctx);
        goto after_9;
    // 0x8039D2A0: addiu       $a0, $zero, 0x2E
    ctx->r4 = ADD32(0, 0X2E);
    after_9:
    // 0x8039D2A4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8039D2A8: jal         0x8004BDA0
    // 0x8039D2AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8004BDA0(rdram, ctx);
        goto after_10;
    // 0x8039D2AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_10:
    // 0x8039D2B0: jal         0x8039D5E0
    // 0x8039D2B4: addiu       $a0, $zero, 0x2E
    ctx->r4 = ADD32(0, 0X2E);
    func_8039D5E0(rdram, ctx);
        goto after_11;
    // 0x8039D2B4: addiu       $a0, $zero, 0x2E
    ctx->r4 = ADD32(0, 0X2E);
    after_11:
    // 0x8039D2B8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8039D2BC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8039D2C0: jal         0x8002135C
    // 0x8039D2C4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    func_8002135C(rdram, ctx);
        goto after_12;
    // 0x8039D2C4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_12:
    // 0x8039D2C8: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x8039D2CC: addiu       $t9, $t9, 0x5388
    ctx->r25 = ADD32(ctx->r25, 0X5388);
    // 0x8039D2D0: addiu       $t8, $zero, 0x50E
    ctx->r24 = ADD32(0, 0X50E);
    // 0x8039D2D4: addiu       $t0, $zero, 0x5
    ctx->r8 = ADD32(0, 0X5);
    // 0x8039D2D8: addiu       $t1, $zero, 0x3B
    ctx->r9 = ADD32(0, 0X3B);
    // 0x8039D2DC: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x8039D2E0: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x8039D2E4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8039D2E8: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x8039D2EC: addiu       $a0, $zero, 0x2F
    ctx->r4 = ADD32(0, 0X2F);
    // 0x8039D2F0: addiu       $a1, $zero, -0x100
    ctx->r5 = ADD32(0, -0X100);
    // 0x8039D2F4: addiu       $a2, $zero, 0x34
    ctx->r6 = ADD32(0, 0X34);
    // 0x8039D2F8: jal         0x8039D69C
    // 0x8039D2FC: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    func_8039D69C(rdram, ctx);
        goto after_13;
    // 0x8039D2FC: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    after_13:
    // 0x8039D300: lui         $t2, 0x803A
    ctx->r10 = S32(0X803A << 16);
    // 0x8039D304: addiu       $t2, $t2, 0x18AC
    ctx->r10 = ADD32(ctx->r10, 0X18AC);
    // 0x8039D308: lw          $at, 0x0($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X0);
    // 0x8039D30C: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8039D310: sw          $at, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r1;
    // 0x8039D314: lw          $a2, 0x4($t2)
    ctx->r6 = MEM_W(ctx->r10, 0X4);
    // 0x8039D318: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x8039D31C: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x8039D320: lw          $a3, 0x8($t2)
    ctx->r7 = MEM_W(ctx->r10, 0X8);
    // 0x8039D324: lw          $a0, 0x1EC4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1EC4);
    // 0x8039D328: jal         0x8004B1A0
    // 0x8039D32C: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    func_8004B1A0(rdram, ctx);
        goto after_14;
    // 0x8039D32C: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    after_14:
    // 0x8039D330: jal         0x8039D5E0
    // 0x8039D334: addiu       $a0, $zero, 0x31
    ctx->r4 = ADD32(0, 0X31);
    func_8039D5E0(rdram, ctx);
        goto after_15;
    // 0x8039D334: addiu       $a0, $zero, 0x31
    ctx->r4 = ADD32(0, 0X31);
    after_15:
    // 0x8039D338: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8039D33C: jal         0x8004BDA0
    // 0x8039D340: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8004BDA0(rdram, ctx);
        goto after_16;
    // 0x8039D340: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_16:
    // 0x8039D344: jal         0x8039D5E0
    // 0x8039D348: addiu       $a0, $zero, 0x31
    ctx->r4 = ADD32(0, 0X31);
    func_8039D5E0(rdram, ctx);
        goto after_17;
    // 0x8039D348: addiu       $a0, $zero, 0x31
    ctx->r4 = ADD32(0, 0X31);
    after_17:
    // 0x8039D34C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8039D350: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8039D354: jal         0x8002135C
    // 0x8039D358: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    func_8002135C(rdram, ctx);
        goto after_18;
    // 0x8039D358: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_18:
    // 0x8039D35C: jal         0x8039D5E0
    // 0x8039D360: addiu       $a0, $zero, 0x31
    ctx->r4 = ADD32(0, 0X31);
    func_8039D5E0(rdram, ctx);
        goto after_19;
    // 0x8039D360: addiu       $a0, $zero, 0x31
    ctx->r4 = ADD32(0, 0X31);
    after_19:
    // 0x8039D364: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x8039D368: addiu       $t6, $t6, 0x52E0
    ctx->r14 = ADD32(ctx->r14, 0X52E0);
    // 0x8039D36C: sw          $t6, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->r14;
    // 0x8039D370: jal         0x8039D5E0
    // 0x8039D374: addiu       $a0, $zero, 0x31
    ctx->r4 = ADD32(0, 0X31);
    func_8039D5E0(rdram, ctx);
        goto after_20;
    // 0x8039D374: addiu       $a0, $zero, 0x31
    ctx->r4 = ADD32(0, 0X31);
    after_20:
    // 0x8039D378: addiu       $t5, $zero, -0x100
    ctx->r13 = ADD32(0, -0X100);
    // 0x8039D37C: sh          $t5, 0x18($v0)
    MEM_H(0X18, ctx->r2) = ctx->r13;
    // 0x8039D380: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8039D384: lui         $at, 0x803A
    ctx->r1 = S32(0X803A << 16);
    // 0x8039D388: jal         0x8039F2E0
    // 0x8039D38C: sw          $t7, 0x1EB0($at)
    MEM_W(0X1EB0, ctx->r1) = ctx->r15;
    func_8039F2E0(rdram, ctx);
        goto after_21;
    // 0x8039D38C: sw          $t7, 0x1EB0($at)
    MEM_W(0X1EB0, ctx->r1) = ctx->r15;
    after_21:
    // 0x8039D390: jal         0x80035680
    // 0x8039D394: ori         $a0, $zero, 0x8300
    ctx->r4 = 0 | 0X8300;
    func_80035680(rdram, ctx);
        goto after_22;
    // 0x8039D394: ori         $a0, $zero, 0x8300
    ctx->r4 = 0 | 0X8300;
    after_22:
    // 0x8039D398: jal         0x8006FB58
    // 0x8039D39C: nop

    func_8006FB58(rdram, ctx);
        goto after_23;
    // 0x8039D39C: nop

    after_23:
    // 0x8039D3A0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8039D3A4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8039D3A8: jr          $ra
    // 0x8039D3AC: nop

    return;
    // 0x8039D3AC: nop

;}
RECOMP_FUNC void func_8039D3B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039D3B0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8039D3B4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8039D3B8: jal         0x8002F2AC
    // 0x8039D3BC: nop

    func_8002F2AC(rdram, ctx);
        goto after_0;
    // 0x8039D3BC: nop

    after_0:
    // 0x8039D3C0: jal         0x80020270
    // 0x8039D3C4: nop

    func_80020270(rdram, ctx);
        goto after_1;
    // 0x8039D3C4: nop

    after_1:
    // 0x8039D3C8: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x8039D3CC: lw          $t7, -0x2F98($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X2F98);
    // 0x8039D3D0: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x8039D3D4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8039D3D8: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8039D3DC: jal         0x80036234
    // 0x8039D3E0: sb          $t6, -0x13EC($at)
    MEM_B(-0X13EC, ctx->r1) = ctx->r14;
    func_80036234(rdram, ctx);
        goto after_2;
    // 0x8039D3E0: sb          $t6, -0x13EC($at)
    MEM_B(-0X13EC, ctx->r1) = ctx->r14;
    after_2:
    // 0x8039D3E4: addiu       $a0, $zero, 0xF00
    ctx->r4 = ADD32(0, 0XF00);
    // 0x8039D3E8: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x8039D3EC: jal         0x80049E40
    // 0x8039D3F0: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_80049E40(rdram, ctx);
        goto after_3;
    // 0x8039D3F0: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_3:
    // 0x8039D3F4: lui         $at, 0x803A
    ctx->r1 = S32(0X803A << 16);
    // 0x8039D3F8: sw          $zero, 0x1EC8($at)
    MEM_W(0X1EC8, ctx->r1) = 0;
    // 0x8039D3FC: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8039D400: lui         $at, 0x803A
    ctx->r1 = S32(0X803A << 16);
    // 0x8039D404: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x8039D408: lw          $a0, 0x1EC4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1EC4);
    // 0x8039D40C: sw          $t8, 0x1ECC($at)
    MEM_W(0X1ECC, ctx->r1) = ctx->r24;
    // 0x8039D410: jal         0x80029D84
    // 0x8039D414: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80029D84(rdram, ctx);
        goto after_4;
    // 0x8039D414: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x8039D418: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8039D41C: lw          $a0, 0x1EC4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1EC4);
    // 0x8039D420: jal         0x80029DF8
    // 0x8039D424: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    func_80029DF8(rdram, ctx);
        goto after_5;
    // 0x8039D424: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    after_5:
    // 0x8039D428: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8039D42C: addiu       $a0, $a0, 0x1EB8
    ctx->r4 = ADD32(ctx->r4, 0X1EB8);
    // 0x8039D430: sh          $zero, 0x0($a0)
    MEM_H(0X0, ctx->r4) = 0;
    // 0x8039D434: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_8039D438:
    // 0x8039D438: addu        $t9, $a0, $v1
    ctx->r25 = ADD32(ctx->r4, ctx->r3);
    // 0x8039D43C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8039D440: andi        $t0, $v1, 0xFF
    ctx->r8 = ctx->r3 & 0XFF;
    // 0x8039D444: slti        $at, $t0, 0x8
    ctx->r1 = SIGNED(ctx->r8) < 0X8 ? 1 : 0;
    // 0x8039D448: or          $v1, $t0, $zero
    ctx->r3 = ctx->r8 | 0;
    // 0x8039D44C: bne         $at, $zero, L_8039D438
    if (ctx->r1 != 0) {
        // 0x8039D450: sb          $zero, 0x2($t9)
        MEM_B(0X2, ctx->r25) = 0;
            goto L_8039D438;
    }
    // 0x8039D450: sb          $zero, 0x2($t9)
    MEM_B(0X2, ctx->r25) = 0;
    // 0x8039D454: lui         $t2, 0x800C
    ctx->r10 = S32(0X800C << 16);
    // 0x8039D458: addiu       $t2, $t2, 0x5394
    ctx->r10 = ADD32(ctx->r10, 0X5394);
    // 0x8039D45C: addiu       $t1, $zero, 0x50F
    ctx->r9 = ADD32(0, 0X50F);
    // 0x8039D460: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8039D464: addiu       $t4, $zero, 0x10
    ctx->r12 = ADD32(0, 0X10);
    // 0x8039D468: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x8039D46C: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x8039D470: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x8039D474: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x8039D478: addiu       $a0, $zero, 0x30
    ctx->r4 = ADD32(0, 0X30);
    // 0x8039D47C: addiu       $a1, $zero, -0x40
    ctx->r5 = ADD32(0, -0X40);
    // 0x8039D480: addiu       $a2, $zero, -0x40
    ctx->r6 = ADD32(0, -0X40);
    // 0x8039D484: jal         0x8039D69C
    // 0x8039D488: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    func_8039D69C(rdram, ctx);
        goto after_6;
    // 0x8039D488: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    after_6:
    // 0x8039D48C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8039D490: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8039D494: jal         0x80021214
    // 0x8039D498: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80021214(rdram, ctx);
        goto after_7;
    // 0x8039D498: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x8039D49C: lui         $t5, 0x800B
    ctx->r13 = S32(0X800B << 16);
    // 0x8039D4A0: addiu       $t5, $t5, -0x6CE4
    ctx->r13 = ADD32(ctx->r13, -0X6CE4);
    // 0x8039D4A4: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x8039D4A8: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8039D4AC: sw          $at, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r1;
    // 0x8039D4B0: lw          $a2, 0x4($t5)
    ctx->r6 = MEM_W(ctx->r13, 0X4);
    // 0x8039D4B4: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x8039D4B8: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x8039D4BC: lw          $a3, 0x8($t5)
    ctx->r7 = MEM_W(ctx->r13, 0X8);
    // 0x8039D4C0: lw          $a0, 0x1EC4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1EC4);
    // 0x8039D4C4: jal         0x8004B078
    // 0x8039D4C8: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    func_8004B078(rdram, ctx);
        goto after_8;
    // 0x8039D4C8: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    after_8:
    // 0x8039D4CC: jal         0x8039D5E0
    // 0x8039D4D0: addiu       $a0, $zero, 0x2E
    ctx->r4 = ADD32(0, 0X2E);
    func_8039D5E0(rdram, ctx);
        goto after_9;
    // 0x8039D4D0: addiu       $a0, $zero, 0x2E
    ctx->r4 = ADD32(0, 0X2E);
    after_9:
    // 0x8039D4D4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8039D4D8: jal         0x8004BDA0
    // 0x8039D4DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8004BDA0(rdram, ctx);
        goto after_10;
    // 0x8039D4DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_10:
    // 0x8039D4E0: jal         0x8039D5E0
    // 0x8039D4E4: addiu       $a0, $zero, 0x2E
    ctx->r4 = ADD32(0, 0X2E);
    func_8039D5E0(rdram, ctx);
        goto after_11;
    // 0x8039D4E4: addiu       $a0, $zero, 0x2E
    ctx->r4 = ADD32(0, 0X2E);
    after_11:
    // 0x8039D4E8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8039D4EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8039D4F0: jal         0x8002135C
    // 0x8039D4F4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    func_8002135C(rdram, ctx);
        goto after_12;
    // 0x8039D4F4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_12:
    // 0x8039D4F8: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x8039D4FC: addiu       $t9, $t9, 0x5388
    ctx->r25 = ADD32(ctx->r25, 0X5388);
    // 0x8039D500: addiu       $t8, $zero, 0x50E
    ctx->r24 = ADD32(0, 0X50E);
    // 0x8039D504: addiu       $t0, $zero, 0x5
    ctx->r8 = ADD32(0, 0X5);
    // 0x8039D508: addiu       $t1, $zero, 0x3B
    ctx->r9 = ADD32(0, 0X3B);
    // 0x8039D50C: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x8039D510: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x8039D514: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8039D518: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x8039D51C: addiu       $a0, $zero, 0x2F
    ctx->r4 = ADD32(0, 0X2F);
    // 0x8039D520: addiu       $a1, $zero, -0x100
    ctx->r5 = ADD32(0, -0X100);
    // 0x8039D524: addiu       $a2, $zero, 0x34
    ctx->r6 = ADD32(0, 0X34);
    // 0x8039D528: jal         0x8039D69C
    // 0x8039D52C: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    func_8039D69C(rdram, ctx);
        goto after_13;
    // 0x8039D52C: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    after_13:
    // 0x8039D530: lui         $t2, 0x803A
    ctx->r10 = S32(0X803A << 16);
    // 0x8039D534: addiu       $t2, $t2, 0x18AC
    ctx->r10 = ADD32(ctx->r10, 0X18AC);
    // 0x8039D538: lw          $at, 0x0($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X0);
    // 0x8039D53C: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8039D540: sw          $at, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r1;
    // 0x8039D544: lw          $a2, 0x4($t2)
    ctx->r6 = MEM_W(ctx->r10, 0X4);
    // 0x8039D548: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x8039D54C: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x8039D550: lw          $a3, 0x8($t2)
    ctx->r7 = MEM_W(ctx->r10, 0X8);
    // 0x8039D554: lw          $a0, 0x1EC4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1EC4);
    // 0x8039D558: jal         0x8004B1A0
    // 0x8039D55C: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    func_8004B1A0(rdram, ctx);
        goto after_14;
    // 0x8039D55C: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    after_14:
    // 0x8039D560: jal         0x8039D5E0
    // 0x8039D564: addiu       $a0, $zero, 0x31
    ctx->r4 = ADD32(0, 0X31);
    func_8039D5E0(rdram, ctx);
        goto after_15;
    // 0x8039D564: addiu       $a0, $zero, 0x31
    ctx->r4 = ADD32(0, 0X31);
    after_15:
    // 0x8039D568: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8039D56C: jal         0x8004BDA0
    // 0x8039D570: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8004BDA0(rdram, ctx);
        goto after_16;
    // 0x8039D570: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_16:
    // 0x8039D574: jal         0x8039D5E0
    // 0x8039D578: addiu       $a0, $zero, 0x31
    ctx->r4 = ADD32(0, 0X31);
    func_8039D5E0(rdram, ctx);
        goto after_17;
    // 0x8039D578: addiu       $a0, $zero, 0x31
    ctx->r4 = ADD32(0, 0X31);
    after_17:
    // 0x8039D57C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8039D580: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8039D584: jal         0x8002135C
    // 0x8039D588: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    func_8002135C(rdram, ctx);
        goto after_18;
    // 0x8039D588: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_18:
    // 0x8039D58C: jal         0x8039D5E0
    // 0x8039D590: addiu       $a0, $zero, 0x31
    ctx->r4 = ADD32(0, 0X31);
    func_8039D5E0(rdram, ctx);
        goto after_19;
    // 0x8039D590: addiu       $a0, $zero, 0x31
    ctx->r4 = ADD32(0, 0X31);
    after_19:
    // 0x8039D594: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x8039D598: addiu       $t6, $t6, 0x52E0
    ctx->r14 = ADD32(ctx->r14, 0X52E0);
    // 0x8039D59C: sw          $t6, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->r14;
    // 0x8039D5A0: jal         0x8039D5E0
    // 0x8039D5A4: addiu       $a0, $zero, 0x31
    ctx->r4 = ADD32(0, 0X31);
    func_8039D5E0(rdram, ctx);
        goto after_20;
    // 0x8039D5A4: addiu       $a0, $zero, 0x31
    ctx->r4 = ADD32(0, 0X31);
    after_20:
    // 0x8039D5A8: addiu       $t5, $zero, -0x100
    ctx->r13 = ADD32(0, -0X100);
    // 0x8039D5AC: sh          $t5, 0x18($v0)
    MEM_H(0X18, ctx->r2) = ctx->r13;
    // 0x8039D5B0: addiu       $t7, $zero, 0x6
    ctx->r15 = ADD32(0, 0X6);
    // 0x8039D5B4: lui         $at, 0x803A
    ctx->r1 = S32(0X803A << 16);
    // 0x8039D5B8: jal         0x8039F2E0
    // 0x8039D5BC: sw          $t7, 0x1EB0($at)
    MEM_W(0X1EB0, ctx->r1) = ctx->r15;
    func_8039F2E0(rdram, ctx);
        goto after_21;
    // 0x8039D5BC: sw          $t7, 0x1EB0($at)
    MEM_W(0X1EB0, ctx->r1) = ctx->r15;
    after_21:
    // 0x8039D5C0: jal         0x80035680
    // 0x8039D5C4: ori         $a0, $zero, 0x8300
    ctx->r4 = 0 | 0X8300;
    func_80035680(rdram, ctx);
        goto after_22;
    // 0x8039D5C4: ori         $a0, $zero, 0x8300
    ctx->r4 = 0 | 0X8300;
    after_22:
    // 0x8039D5C8: jal         0x8006FB58
    // 0x8039D5CC: nop

    func_8006FB58(rdram, ctx);
        goto after_23;
    // 0x8039D5CC: nop

    after_23:
    // 0x8039D5D0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8039D5D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8039D5D8: jr          $ra
    // 0x8039D5DC: nop

    return;
    // 0x8039D5DC: nop

;}
RECOMP_FUNC void func_8039D5E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039D5E0: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8039D5E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8039D5E8: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8039D5EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8039D5F0: lw          $a0, 0x1EC4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1EC4);
    // 0x8039D5F4: jal         0x8002A7B0
    // 0x8039D5F8: andi        $a1, $a2, 0xFF
    ctx->r5 = ctx->r6 & 0XFF;
    func_8002A7B0(rdram, ctx);
        goto after_0;
    // 0x8039D5F8: andi        $a1, $a2, 0xFF
    ctx->r5 = ctx->r6 & 0XFF;
    after_0:
    // 0x8039D5FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8039D600: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8039D604: jr          $ra
    // 0x8039D608: nop

    return;
    // 0x8039D608: nop

;}
RECOMP_FUNC void func_8039D60C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039D60C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8039D610: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8039D614: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8039D618: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8039D61C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8039D620: lw          $a0, 0x1EC4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1EC4);
    // 0x8039D624: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8039D628: jal         0x8002A7B0
    // 0x8039D62C: andi        $a1, $a3, 0xFF
    ctx->r5 = ctx->r7 & 0XFF;
    func_8002A7B0(rdram, ctx);
        goto after_0;
    // 0x8039D62C: andi        $a1, $a3, 0xFF
    ctx->r5 = ctx->r7 & 0XFF;
    after_0:
    // 0x8039D630: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8039D634: nop

    // 0x8039D638: sh          $t6, 0x18($v0)
    MEM_H(0X18, ctx->r2) = ctx->r14;
    // 0x8039D63C: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x8039D640: nop

    // 0x8039D644: sh          $t7, 0x1C($v0)
    MEM_H(0X1C, ctx->r2) = ctx->r15;
    // 0x8039D648: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8039D64C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8039D650: jr          $ra
    // 0x8039D654: nop

    return;
    // 0x8039D654: nop

;}
RECOMP_FUNC void func_8039D658(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039D658: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8039D65C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8039D660: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8039D664: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8039D668: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8039D66C: lw          $a0, 0x1EC4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1EC4);
    // 0x8039D670: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8039D674: jal         0x8002A7B0
    // 0x8039D678: andi        $a1, $a3, 0xFF
    ctx->r5 = ctx->r7 & 0XFF;
    func_8002A7B0(rdram, ctx);
        goto after_0;
    // 0x8039D678: andi        $a1, $a3, 0xFF
    ctx->r5 = ctx->r7 & 0XFF;
    after_0:
    // 0x8039D67C: lbu         $a1, 0x1F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X1F);
    // 0x8039D680: lbu         $a2, 0x23($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X23);
    // 0x8039D684: jal         0x8002135C
    // 0x8039D688: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8002135C(rdram, ctx);
        goto after_1;
    // 0x8039D688: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x8039D68C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8039D690: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8039D694: jr          $ra
    // 0x8039D698: nop

    return;
    // 0x8039D698: nop

;}
RECOMP_FUNC void func_8039D69C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039D69C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8039D6A0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8039D6A4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8039D6A8: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8039D6AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8039D6B0: lw          $a0, 0x1EC4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1EC4);
    // 0x8039D6B4: lbu         $a1, 0x23($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X23);
    // 0x8039D6B8: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8039D6BC: jal         0x8002A7B0
    // 0x8039D6C0: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    func_8002A7B0(rdram, ctx);
        goto after_0;
    // 0x8039D6C0: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_0:
    // 0x8039D6C4: lbu         $t6, 0x8($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X8);
    // 0x8039D6C8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8039D6CC: andi        $t7, $t6, 0xFF01
    ctx->r15 = ctx->r14 & 0XFF01;
    // 0x8039D6D0: sb          $t7, 0x8($v0)
    MEM_B(0X8, ctx->r2) = ctx->r15;
    // 0x8039D6D4: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8039D6D8: sb          $t9, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r25;
    // 0x8039D6DC: sb          $t8, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r24;
    // 0x8039D6E0: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x8039D6E4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8039D6E8: sh          $t0, 0x12($v0)
    MEM_H(0X12, ctx->r2) = ctx->r8;
    // 0x8039D6EC: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x8039D6F0: nop

    // 0x8039D6F4: sw          $t1, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->r9;
    // 0x8039D6F8: lbu         $a2, 0x3F($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X3F);
    // 0x8039D6FC: lbu         $a1, 0x3B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X3B);
    // 0x8039D700: jal         0x8002135C
    // 0x8039D704: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_8002135C(rdram, ctx);
        goto after_1;
    // 0x8039D704: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x8039D708: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x8039D70C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8039D710: nop

    // 0x8039D714: sh          $t2, 0x18($v1)
    MEM_H(0X18, ctx->r3) = ctx->r10;
    // 0x8039D718: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x8039D71C: nop

    // 0x8039D720: sh          $t3, 0x1C($v1)
    MEM_H(0X1C, ctx->r3) = ctx->r11;
    // 0x8039D724: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8039D728: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8039D72C: jr          $ra
    // 0x8039D730: nop

    return;
    // 0x8039D730: nop

;}
RECOMP_FUNC void func_8039D734(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039D734: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8039D738: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8039D73C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8039D740: lui         $t8, 0x803A
    ctx->r24 = S32(0X803A << 16);
    // 0x8039D744: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8039D748: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8039D74C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8039D750: addiu       $t8, $t8, 0x1840
    ctx->r24 = ADD32(ctx->r24, 0X1840);
    // 0x8039D754: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x8039D758: lhu         $v1, 0x8($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X8);
    // 0x8039D75C: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x8039D760: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x8039D764: lh          $t9, 0x0($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X0);
    // 0x8039D768: lw          $t0, 0x4($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X4);
    // 0x8039D76C: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x8039D770: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    // 0x8039D774: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8039D778: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x8039D77C: sra         $t1, $v1, 8
    ctx->r9 = S32(SIGNED(ctx->r3) >> 8);
    // 0x8039D780: andi        $t2, $v1, 0xFF
    ctx->r10 = ctx->r3 & 0XFF;
    // 0x8039D784: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x8039D788: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x8039D78C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x8039D790: jal         0x8039D69C
    // 0x8039D794: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    func_8039D69C(rdram, ctx);
        goto after_0;
    // 0x8039D794: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    after_0:
    // 0x8039D798: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8039D79C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8039D7A0: jr          $ra
    // 0x8039D7A4: nop

    return;
    // 0x8039D7A4: nop

;}
RECOMP_FUNC void func_8039D7A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039D7A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8039D7AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8039D7B0: jal         0x8039D7F4
    // 0x8039D7B4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8039D7F4(rdram, ctx);
        goto after_0;
    // 0x8039D7B4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8039D7B8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8039D7BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8039D7C0: bne         $v0, $at, L_8039D7EC
    if (ctx->r2 != ctx->r1) {
        // 0x8039D7C4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8039D7EC;
    }
    // 0x8039D7C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8039D7C8: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8039D7CC: nop

    // 0x8039D7D0: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x8039D7D4: nop

    // 0x8039D7D8: bne         $t7, $zero, L_8039D7EC
    if (ctx->r15 != 0) {
        // 0x8039D7DC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8039D7EC;
    }
    // 0x8039D7DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8039D7E0: b           L_8039D7EC
    // 0x8039D7E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8039D7EC;
    // 0x8039D7E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8039D7E8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8039D7EC:
    // 0x8039D7EC: jr          $ra
    // 0x8039D7F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8039D7F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8039D7F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039D7F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8039D7F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8039D7FC: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8039D800: bne         $a1, $zero, L_8039D82C
    if (ctx->r5 != 0) {
        // 0x8039D804: or          $a3, $a1, $zero
        ctx->r7 = ctx->r5 | 0;
            goto L_8039D82C;
    }
    // 0x8039D804: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x8039D808: lbu         $t6, 0x0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X0);
    // 0x8039D80C: nop

    // 0x8039D810: slti        $at, $t6, 0xF6
    ctx->r1 = SIGNED(ctx->r14) < 0XF6 ? 1 : 0;
    // 0x8039D814: bne         $at, $zero, L_8039D824
    if (ctx->r1 != 0) {
        // 0x8039D818: nop
    
            goto L_8039D824;
    }
    // 0x8039D818: nop

    // 0x8039D81C: b           L_8039D8B0
    // 0x8039D820: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_8039D8B0;
    // 0x8039D820: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8039D824:
    // 0x8039D824: b           L_8039D8B0
    // 0x8039D828: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8039D8B0;
    // 0x8039D828: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8039D82C:
    // 0x8039D82C: lbu         $t7, -0x1($a2)
    ctx->r15 = MEM_BU(ctx->r6, -0X1);
    // 0x8039D830: addiu       $a0, $a2, -0x1
    ctx->r4 = ADD32(ctx->r6, -0X1);
    // 0x8039D834: slti        $at, $t7, 0xF6
    ctx->r1 = SIGNED(ctx->r15) < 0XF6 ? 1 : 0;
    // 0x8039D838: beq         $at, $zero, L_8039D85C
    if (ctx->r1 == 0) {
        // 0x8039D83C: addiu       $a1, $a3, -0x1
        ctx->r5 = ADD32(ctx->r7, -0X1);
            goto L_8039D85C;
    }
    // 0x8039D83C: addiu       $a1, $a3, -0x1
    ctx->r5 = ADD32(ctx->r7, -0X1);
    // 0x8039D840: lbu         $t8, 0x0($a2)
    ctx->r24 = MEM_BU(ctx->r6, 0X0);
    // 0x8039D844: nop

    // 0x8039D848: slti        $at, $t8, 0xF6
    ctx->r1 = SIGNED(ctx->r24) < 0XF6 ? 1 : 0;
    // 0x8039D84C: beq         $at, $zero, L_8039D85C
    if (ctx->r1 == 0) {
        // 0x8039D850: nop
    
            goto L_8039D85C;
    }
    // 0x8039D850: nop

    // 0x8039D854: b           L_8039D8B0
    // 0x8039D858: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8039D8B0;
    // 0x8039D858: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8039D85C:
    // 0x8039D85C: jal         0x8039D7F4
    // 0x8039D860: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_8039D7F4(rdram, ctx);
        goto after_0;
    // 0x8039D860: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x8039D864: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x8039D868: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8039D86C: beq         $v0, $at, L_8039D87C
    if (ctx->r2 == ctx->r1) {
        // 0x8039D870: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8039D87C;
    }
    // 0x8039D870: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8039D874: bne         $v0, $at, L_8039D8A4
    if (ctx->r2 != ctx->r1) {
        // 0x8039D878: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8039D8A4;
    }
    // 0x8039D878: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
L_8039D87C:
    // 0x8039D87C: lbu         $t9, 0x0($a2)
    ctx->r25 = MEM_BU(ctx->r6, 0X0);
    // 0x8039D880: nop

    // 0x8039D884: slti        $at, $t9, 0xF6
    ctx->r1 = SIGNED(ctx->r25) < 0XF6 ? 1 : 0;
    // 0x8039D888: bne         $at, $zero, L_8039D898
    if (ctx->r1 != 0) {
        // 0x8039D88C: nop
    
            goto L_8039D898;
    }
    // 0x8039D88C: nop

    // 0x8039D890: b           L_8039D8B0
    // 0x8039D894: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_8039D8B0;
    // 0x8039D894: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8039D898:
    // 0x8039D898: b           L_8039D8B0
    // 0x8039D89C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8039D8B0;
    // 0x8039D89C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8039D8A0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
L_8039D8A4:
    // 0x8039D8A4: bne         $v0, $at, L_8039D8B4
    if (ctx->r2 != ctx->r1) {
        // 0x8039D8A8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8039D8B4;
    }
    // 0x8039D8A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8039D8AC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_8039D8B0:
    // 0x8039D8B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8039D8B4:
    // 0x8039D8B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8039D8B8: jr          $ra
    // 0x8039D8BC: nop

    return;
    // 0x8039D8BC: nop

;}
RECOMP_FUNC void func_8039D8C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039D8C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8039D8C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8039D8C8: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x8039D8CC: jal         0x8039D7F4
    // 0x8039D8D0: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    func_8039D7F4(rdram, ctx);
        goto after_0;
    // 0x8039D8D0: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    after_0:
    // 0x8039D8D4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8039D8D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8039D8DC: bne         $v0, $at, L_8039D8F0
    if (ctx->r2 != ctx->r1) {
        // 0x8039D8E0: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8039D8F0;
    }
    // 0x8039D8E0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8039D8E4: b           L_8039D904
    // 0x8039D8E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8039D904;
    // 0x8039D8E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8039D8EC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
L_8039D8F0:
    // 0x8039D8F0: beq         $v0, $at, L_8039D900
    if (ctx->r2 == ctx->r1) {
        // 0x8039D8F4: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8039D900;
    }
    // 0x8039D8F4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8039D8F8: bne         $v0, $at, L_8039D904
    if (ctx->r2 != ctx->r1) {
        // 0x8039D8FC: nop
    
            goto L_8039D904;
    }
    // 0x8039D8FC: nop

L_8039D900:
    // 0x8039D900: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8039D904:
    // 0x8039D904: jr          $ra
    // 0x8039D908: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8039D908: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8039D90C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039D90C: lui         $v1, 0x803A
    ctx->r3 = S32(0X803A << 16);
    // 0x8039D910: addiu       $v1, $v1, 0x1EA0
    ctx->r3 = ADD32(ctx->r3, 0X1EA0);
    // 0x8039D914: lw          $t7, 0x8($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X8);
    // 0x8039D918: lh          $t6, 0x2($v1)
    ctx->r14 = MEM_H(ctx->r3, 0X2);
    // 0x8039D91C: lh          $t8, 0x4($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X4);
    // 0x8039D920: nop

    // 0x8039D924: div         $zero, $t6, $t8
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r24))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r24)));
    // 0x8039D928: bne         $t8, $zero, L_8039D934
    if (ctx->r24 != 0) {
        // 0x8039D92C: nop
    
            goto L_8039D934;
    }
    // 0x8039D92C: nop

    // 0x8039D930: break       7
    do_break(2151274800);
L_8039D934:
    // 0x8039D934: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8039D938: bne         $t8, $at, L_8039D94C
    if (ctx->r24 != ctx->r1) {
        // 0x8039D93C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8039D94C;
    }
    // 0x8039D93C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8039D940: bne         $t6, $at, L_8039D94C
    if (ctx->r14 != ctx->r1) {
        // 0x8039D944: nop
    
            goto L_8039D94C;
    }
    // 0x8039D944: nop

    // 0x8039D948: break       6
    do_break(2151274824);
L_8039D94C:
    // 0x8039D94C: mfhi        $v0
    ctx->r2 = hi;
    // 0x8039D950: jr          $ra
    // 0x8039D954: nop

    return;
    // 0x8039D954: nop

;}
RECOMP_FUNC void func_8039D958(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039D958: lui         $v1, 0x803A
    ctx->r3 = S32(0X803A << 16);
    // 0x8039D95C: addiu       $v1, $v1, 0x1EA0
    ctx->r3 = ADD32(ctx->r3, 0X1EA0);
    // 0x8039D960: lw          $t7, 0x8($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X8);
    // 0x8039D964: lh          $t6, 0x2($v1)
    ctx->r14 = MEM_H(ctx->r3, 0X2);
    // 0x8039D968: lh          $t8, 0x4($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X4);
    // 0x8039D96C: nop

    // 0x8039D970: div         $zero, $t6, $t8
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r24))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r24)));
    // 0x8039D974: bne         $t8, $zero, L_8039D980
    if (ctx->r24 != 0) {
        // 0x8039D978: nop
    
            goto L_8039D980;
    }
    // 0x8039D978: nop

    // 0x8039D97C: break       7
    do_break(2151274876);
L_8039D980:
    // 0x8039D980: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8039D984: bne         $t8, $at, L_8039D998
    if (ctx->r24 != ctx->r1) {
        // 0x8039D988: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8039D998;
    }
    // 0x8039D988: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8039D98C: bne         $t6, $at, L_8039D998
    if (ctx->r14 != ctx->r1) {
        // 0x8039D990: nop
    
            goto L_8039D998;
    }
    // 0x8039D990: nop

    // 0x8039D994: break       6
    do_break(2151274900);
L_8039D998:
    // 0x8039D998: mflo        $v0
    ctx->r2 = lo;
    // 0x8039D99C: jr          $ra
    // 0x8039D9A0: nop

    return;
    // 0x8039D9A0: nop

;}
RECOMP_FUNC void func_8039D9A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039D9A4: lui         $v0, 0x803A
    ctx->r2 = S32(0X803A << 16);
    // 0x8039D9A8: addiu       $v0, $v0, 0x1EA0
    ctx->r2 = ADD32(ctx->r2, 0X1EA0);
    // 0x8039D9AC: lw          $t6, 0x8($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X8);
    // 0x8039D9B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8039D9B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8039D9B8: lh          $a1, 0x2($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X2);
    // 0x8039D9BC: lw          $t7, 0x8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X8);
    // 0x8039D9C0: jal         0x8039D7F4
    // 0x8039D9C4: addu        $a0, $t7, $a1
    ctx->r4 = ADD32(ctx->r15, ctx->r5);
    func_8039D7F4(rdram, ctx);
        goto after_0;
    // 0x8039D9C4: addu        $a0, $t7, $a1
    ctx->r4 = ADD32(ctx->r15, ctx->r5);
    after_0:
    // 0x8039D9C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8039D9CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8039D9D0: jr          $ra
    // 0x8039D9D4: nop

    return;
    // 0x8039D9D4: nop

;}
RECOMP_FUNC void func_8039D9D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039D9D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8039D9DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8039D9E0: jal         0x8039D958
    // 0x8039D9E4: nop

    func_8039D958(rdram, ctx);
        goto after_0;
    // 0x8039D9E4: nop

    after_0:
    // 0x8039D9E8: beq         $v0, $zero, L_8039DA28
    if (ctx->r2 == 0) {
        // 0x8039D9EC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8039DA28;
    }
    // 0x8039D9EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8039D9F0: jal         0x80035734
    // 0x8039D9F4: nop

    func_80035734(rdram, ctx);
        goto after_1;
    // 0x8039D9F4: nop

    after_1:
    // 0x8039D9F8: lui         $v0, 0x803A
    ctx->r2 = S32(0X803A << 16);
    // 0x8039D9FC: addiu       $v0, $v0, 0x1EA0
    ctx->r2 = ADD32(ctx->r2, 0X1EA0);
    // 0x8039DA00: lw          $t7, 0x8($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X8);
    // 0x8039DA04: lh          $t6, 0x2($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X2);
    // 0x8039DA08: lh          $t8, 0x4($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X4);
    // 0x8039DA0C: nop

    // 0x8039DA10: subu        $t9, $t6, $t8
    ctx->r25 = SUB32(ctx->r14, ctx->r24);
    // 0x8039DA14: jal         0x8039DB8C
    // 0x8039DA18: sh          $t9, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r25;
    func_8039DB8C(rdram, ctx);
        goto after_2;
    // 0x8039DA18: sh          $t9, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r25;
    after_2:
    // 0x8039DA1C: jal         0x8039DF00
    // 0x8039DA20: nop

    func_8039DF00(rdram, ctx);
        goto after_3;
    // 0x8039DA20: nop

    after_3:
    // 0x8039DA24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8039DA28:
    // 0x8039DA28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8039DA2C: jr          $ra
    // 0x8039DA30: nop

    return;
    // 0x8039DA30: nop

;}
RECOMP_FUNC void func_8039DA34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039DA34: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8039DA38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8039DA3C: jal         0x8039D958
    // 0x8039DA40: nop

    func_8039D958(rdram, ctx);
        goto after_0;
    // 0x8039DA40: nop

    after_0:
    // 0x8039DA44: lui         $v1, 0x803A
    ctx->r3 = S32(0X803A << 16);
    // 0x8039DA48: addiu       $v1, $v1, 0x1EA0
    ctx->r3 = ADD32(ctx->r3, 0X1EA0);
    // 0x8039DA4C: lw          $t6, 0x8($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X8);
    // 0x8039DA50: nop

    // 0x8039DA54: lh          $t7, 0x6($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X6);
    // 0x8039DA58: nop

    // 0x8039DA5C: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x8039DA60: slt         $at, $v0, $t8
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x8039DA64: beq         $at, $zero, L_8039DAA4
    if (ctx->r1 == 0) {
        // 0x8039DA68: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8039DAA4;
    }
    // 0x8039DA68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8039DA6C: jal         0x80035734
    // 0x8039DA70: nop

    func_80035734(rdram, ctx);
        goto after_1;
    // 0x8039DA70: nop

    after_1:
    // 0x8039DA74: lui         $v1, 0x803A
    ctx->r3 = S32(0X803A << 16);
    // 0x8039DA78: addiu       $v1, $v1, 0x1EA0
    ctx->r3 = ADD32(ctx->r3, 0X1EA0);
    // 0x8039DA7C: lw          $t0, 0x8($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X8);
    // 0x8039DA80: lh          $t9, 0x2($v1)
    ctx->r25 = MEM_H(ctx->r3, 0X2);
    // 0x8039DA84: lh          $t1, 0x4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X4);
    // 0x8039DA88: nop

    // 0x8039DA8C: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x8039DA90: jal         0x8039DB8C
    // 0x8039DA94: sh          $t2, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r10;
    func_8039DB8C(rdram, ctx);
        goto after_2;
    // 0x8039DA94: sh          $t2, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r10;
    after_2:
    // 0x8039DA98: jal         0x8039DF00
    // 0x8039DA9C: nop

    func_8039DF00(rdram, ctx);
        goto after_3;
    // 0x8039DA9C: nop

    after_3:
    // 0x8039DAA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8039DAA4:
    // 0x8039DAA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8039DAA8: jr          $ra
    // 0x8039DAAC: nop

    return;
    // 0x8039DAAC: nop

;}
RECOMP_FUNC void func_8039DAB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039DAB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8039DAB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8039DAB8: jal         0x8039D90C
    // 0x8039DABC: nop

    func_8039D90C(rdram, ctx);
        goto after_0;
    // 0x8039DABC: nop

    after_0:
    // 0x8039DAC0: lui         $a2, 0x803A
    ctx->r6 = S32(0X803A << 16);
    // 0x8039DAC4: addiu       $a2, $a2, 0x1EA0
    ctx->r6 = ADD32(ctx->r6, 0X1EA0);
    // 0x8039DAC8: lw          $v1, 0x8($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X8);
    // 0x8039DACC: lh          $t7, 0x2($a2)
    ctx->r15 = MEM_H(ctx->r6, 0X2);
    // 0x8039DAD0: lh          $t6, 0x4($v1)
    ctx->r14 = MEM_H(ctx->r3, 0X4);
    // 0x8039DAD4: nop

    // 0x8039DAD8: subu        $a3, $t6, $v0
    ctx->r7 = SUB32(ctx->r14, ctx->r2);
    // 0x8039DADC: addiu       $a3, $a3, -0x1
    ctx->r7 = ADD32(ctx->r7, -0X1);
    // 0x8039DAE0: addu        $t8, $t7, $a3
    ctx->r24 = ADD32(ctx->r15, ctx->r7);
    // 0x8039DAE4: sh          $t8, 0x2($a2)
    MEM_H(0X2, ctx->r6) = ctx->r24;
    // 0x8039DAE8: lh          $a1, 0x2($a2)
    ctx->r5 = MEM_H(ctx->r6, 0X2);
    // 0x8039DAEC: lw          $t9, 0x8($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X8);
    // 0x8039DAF0: jal         0x8039D7F4
    // 0x8039DAF4: addu        $a0, $t9, $a1
    ctx->r4 = ADD32(ctx->r25, ctx->r5);
    func_8039D7F4(rdram, ctx);
        goto after_1;
    // 0x8039DAF4: addu        $a0, $t9, $a1
    ctx->r4 = ADD32(ctx->r25, ctx->r5);
    after_1:
    // 0x8039DAF8: lui         $a2, 0x803A
    ctx->r6 = S32(0X803A << 16);
    // 0x8039DAFC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8039DB00: bne         $v0, $at, L_8039DB18
    if (ctx->r2 != ctx->r1) {
        // 0x8039DB04: addiu       $a2, $a2, 0x1EA0
        ctx->r6 = ADD32(ctx->r6, 0X1EA0);
            goto L_8039DB18;
    }
    // 0x8039DB04: addiu       $a2, $a2, 0x1EA0
    ctx->r6 = ADD32(ctx->r6, 0X1EA0);
    // 0x8039DB08: lh          $t0, 0x2($a2)
    ctx->r8 = MEM_H(ctx->r6, 0X2);
    // 0x8039DB0C: nop

    // 0x8039DB10: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x8039DB14: sh          $t1, 0x2($a2)
    MEM_H(0X2, ctx->r6) = ctx->r9;
L_8039DB18:
    // 0x8039DB18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8039DB1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8039DB20: jr          $ra
    // 0x8039DB24: nop

    return;
    // 0x8039DB24: nop

;}
RECOMP_FUNC void func_8039DB28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039DB28: lui         $v0, 0x803A
    ctx->r2 = S32(0X803A << 16);
    // 0x8039DB2C: addiu       $v0, $v0, 0x1EA0
    ctx->r2 = ADD32(ctx->r2, 0X1EA0);
    // 0x8039DB30: lbu         $t6, 0xC($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0XC);
    // 0x8039DB34: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8039DB38: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8039DB3C: bne         $t6, $at, L_8039DB68
    if (ctx->r14 != ctx->r1) {
        // 0x8039DB40: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8039DB68;
    }
    // 0x8039DB40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8039DB44: jal         0x8039D9A4
    // 0x8039DB48: nop

    func_8039D9A4(rdram, ctx);
        goto after_0;
    // 0x8039DB48: nop

    after_0:
    // 0x8039DB4C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8039DB50: bne         $v0, $at, L_8039DB60
    if (ctx->r2 != ctx->r1) {
        // 0x8039DB54: nop
    
            goto L_8039DB60;
    }
    // 0x8039DB54: nop

    // 0x8039DB58: b           L_8039DB7C
    // 0x8039DB5C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8039DB7C;
    // 0x8039DB5C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8039DB60:
    // 0x8039DB60: b           L_8039DB7C
    // 0x8039DB64: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8039DB7C;
    // 0x8039DB64: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8039DB68:
    // 0x8039DB68: lw          $t7, 0x8($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X8);
    // 0x8039DB6C: lh          $a1, 0x2($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X2);
    // 0x8039DB70: lw          $t8, 0x8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X8);
    // 0x8039DB74: jal         0x8039D7A8
    // 0x8039DB78: addu        $a0, $t8, $a1
    ctx->r4 = ADD32(ctx->r24, ctx->r5);
    func_8039D7A8(rdram, ctx);
        goto after_1;
    // 0x8039DB78: addu        $a0, $t8, $a1
    ctx->r4 = ADD32(ctx->r24, ctx->r5);
    after_1:
L_8039DB7C:
    // 0x8039DB7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8039DB80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8039DB84: jr          $ra
    // 0x8039DB88: nop

    return;
    // 0x8039DB88: nop

;}
RECOMP_FUNC void func_8039DB8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039DB8C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8039DB90: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8039DB94: lui         $s0, 0x803A
    ctx->r16 = S32(0X803A << 16);
    // 0x8039DB98: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8039DB9C: addiu       $s2, $zero, 0x3
    ctx->r18 = ADD32(0, 0X3);
    // 0x8039DBA0: addiu       $s0, $s0, 0x1EA0
    ctx->r16 = ADD32(ctx->r16, 0X1EA0);
    // 0x8039DBA4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8039DBA8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
L_8039DBAC:
    // 0x8039DBAC: jal         0x8039D90C
    // 0x8039DBB0: nop

    func_8039D90C(rdram, ctx);
        goto after_0;
    // 0x8039DBB0: nop

    after_0:
    // 0x8039DBB4: jal         0x8039DB28
    // 0x8039DBB8: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    func_8039DB28(rdram, ctx);
        goto after_1;
    // 0x8039DBB8: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    after_1:
    // 0x8039DBBC: beq         $v0, $zero, L_8039DC60
    if (ctx->r2 == 0) {
        // 0x8039DBC0: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_8039DC60;
    }
    // 0x8039DBC0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8039DBC4:
    // 0x8039DBC4: lh          $t6, 0x2($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X2);
    // 0x8039DBC8: nop

    // 0x8039DBCC: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8039DBD0: sh          $t7, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r15;
    // 0x8039DBD4: lh          $t8, 0x2($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X2);
    // 0x8039DBD8: nop

    // 0x8039DBDC: blez        $t8, L_8039DC04
    if (SIGNED(ctx->r24) <= 0) {
        // 0x8039DBE0: nop
    
            goto L_8039DC04;
    }
    // 0x8039DBE0: nop

    // 0x8039DBE4: jal         0x8039D9A4
    // 0x8039DBE8: nop

    func_8039D9A4(rdram, ctx);
        goto after_2;
    // 0x8039DBE8: nop

    after_2:
    // 0x8039DBEC: bne         $v0, $s2, L_8039DC04
    if (ctx->r2 != ctx->r18) {
        // 0x8039DBF0: nop
    
            goto L_8039DC04;
    }
    // 0x8039DBF0: nop

    // 0x8039DBF4: lh          $t9, 0x2($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X2);
    // 0x8039DBF8: nop

    // 0x8039DBFC: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x8039DC00: sh          $t0, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r8;
L_8039DC04:
    // 0x8039DC04: jal         0x8039D90C
    // 0x8039DC08: nop

    func_8039D90C(rdram, ctx);
        goto after_3;
    // 0x8039DC08: nop

    after_3:
    // 0x8039DC0C: subu        $t1, $s1, $v0
    ctx->r9 = SUB32(ctx->r17, ctx->r2);
    // 0x8039DC10: bltz        $t1, L_8039DC28
    if (SIGNED(ctx->r9) < 0) {
        // 0x8039DC14: nop
    
            goto L_8039DC28;
    }
    // 0x8039DC14: nop

    // 0x8039DC18: lh          $t2, 0x2($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X2);
    // 0x8039DC1C: nop

    // 0x8039DC20: bgez        $t2, L_8039DC44
    if (SIGNED(ctx->r10) >= 0) {
        // 0x8039DC24: nop
    
            goto L_8039DC44;
    }
    // 0x8039DC24: nop

L_8039DC28:
    // 0x8039DC28: lh          $t3, 0x2($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X2);
    // 0x8039DC2C: nop

    // 0x8039DC30: addiu       $t4, $t3, 0x2
    ctx->r12 = ADD32(ctx->r11, 0X2);
    // 0x8039DC34: jal         0x8039DAB0
    // 0x8039DC38: sh          $t4, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r12;
    func_8039DAB0(rdram, ctx);
        goto after_4;
    // 0x8039DC38: sh          $t4, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r12;
    after_4:
    // 0x8039DC3C: b           L_8039DBAC
    // 0x8039DC40: nop

        goto L_8039DBAC;
    // 0x8039DC40: nop

L_8039DC44:
    // 0x8039DC44: jal         0x8039D90C
    // 0x8039DC48: nop

    func_8039D90C(rdram, ctx);
        goto after_5;
    // 0x8039DC48: nop

    after_5:
    // 0x8039DC4C: jal         0x8039DB28
    // 0x8039DC50: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    func_8039DB28(rdram, ctx);
        goto after_6;
    // 0x8039DC50: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    after_6:
    // 0x8039DC54: bne         $v0, $zero, L_8039DBC4
    if (ctx->r2 != 0) {
        // 0x8039DC58: nop
    
            goto L_8039DBC4;
    }
    // 0x8039DC58: nop

    // 0x8039DC5C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8039DC60:
    // 0x8039DC60: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8039DC64: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8039DC68: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8039DC6C: jr          $ra
    // 0x8039DC70: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8039DC70: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8039DC74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039DC74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8039DC78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8039DC7C: jal         0x80035734
    // 0x8039DC80: nop

    func_80035734(rdram, ctx);
        goto after_0;
    // 0x8039DC80: nop

    after_0:
    // 0x8039DC84: jal         0x8039DE44
    // 0x8039DC88: nop

    func_8039DE44(rdram, ctx);
        goto after_1;
    // 0x8039DC88: nop

    after_1:
    // 0x8039DC8C: beq         $v0, $zero, L_8039DCB4
    if (ctx->r2 == 0) {
        // 0x8039DC90: lui         $v1, 0x803A
        ctx->r3 = S32(0X803A << 16);
            goto L_8039DCB4;
    }
    // 0x8039DC90: lui         $v1, 0x803A
    ctx->r3 = S32(0X803A << 16);
    // 0x8039DC94: jal         0x8039DAB0
    // 0x8039DC98: nop

    func_8039DAB0(rdram, ctx);
        goto after_2;
    // 0x8039DC98: nop

    after_2:
    // 0x8039DC9C: jal         0x8039DB8C
    // 0x8039DCA0: nop

    func_8039DB8C(rdram, ctx);
        goto after_3;
    // 0x8039DCA0: nop

    after_3:
    // 0x8039DCA4: jal         0x8039DF00
    // 0x8039DCA8: nop

    func_8039DF00(rdram, ctx);
        goto after_4;
    // 0x8039DCA8: nop

    after_4:
    // 0x8039DCAC: b           L_8039DCF4
    // 0x8039DCB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8039DCF4;
    // 0x8039DCB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8039DCB4:
    // 0x8039DCB4: addiu       $v1, $v1, 0x1EA0
    ctx->r3 = ADD32(ctx->r3, 0X1EA0);
    // 0x8039DCB8: lw          $t6, 0x8($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X8);
    // 0x8039DCBC: lh          $a1, 0x2($v1)
    ctx->r5 = MEM_H(ctx->r3, 0X2);
    // 0x8039DCC0: lw          $t7, 0x8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X8);
    // 0x8039DCC4: jal         0x8039D8C0
    // 0x8039DCC8: addu        $a0, $t7, $a1
    ctx->r4 = ADD32(ctx->r15, ctx->r5);
    func_8039D8C0(rdram, ctx);
        goto after_5;
    // 0x8039DCC8: addu        $a0, $t7, $a1
    ctx->r4 = ADD32(ctx->r15, ctx->r5);
    after_5:
    // 0x8039DCCC: lui         $v1, 0x803A
    ctx->r3 = S32(0X803A << 16);
    // 0x8039DCD0: addiu       $v1, $v1, 0x1EA0
    ctx->r3 = ADD32(ctx->r3, 0X1EA0);
    // 0x8039DCD4: lh          $t8, 0x2($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X2);
    // 0x8039DCD8: nop

    // 0x8039DCDC: subu        $t9, $t8, $v0
    ctx->r25 = SUB32(ctx->r24, ctx->r2);
    // 0x8039DCE0: jal         0x8039DB8C
    // 0x8039DCE4: sh          $t9, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r25;
    func_8039DB8C(rdram, ctx);
        goto after_6;
    // 0x8039DCE4: sh          $t9, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r25;
    after_6:
    // 0x8039DCE8: jal         0x8039DF00
    // 0x8039DCEC: nop

    func_8039DF00(rdram, ctx);
        goto after_7;
    // 0x8039DCEC: nop

    after_7:
    // 0x8039DCF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8039DCF4:
    // 0x8039DCF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8039DCF8: jr          $ra
    // 0x8039DCFC: nop

    return;
    // 0x8039DCFC: nop

;}
RECOMP_FUNC void func_8039DD00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039DD00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8039DD04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8039DD08: jal         0x8039D90C
    // 0x8039DD0C: nop

    func_8039D90C(rdram, ctx);
        goto after_0;
    // 0x8039DD0C: nop

    after_0:
    // 0x8039DD10: lui         $v1, 0x803A
    ctx->r3 = S32(0X803A << 16);
    // 0x8039DD14: addiu       $v1, $v1, 0x1EA0
    ctx->r3 = ADD32(ctx->r3, 0X1EA0);
    // 0x8039DD18: lh          $t6, 0x2($v1)
    ctx->r14 = MEM_H(ctx->r3, 0X2);
    // 0x8039DD1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8039DD20: subu        $t7, $t6, $v0
    ctx->r15 = SUB32(ctx->r14, ctx->r2);
    // 0x8039DD24: sh          $t7, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r15;
    // 0x8039DD28: jr          $ra
    // 0x8039DD2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8039DD2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8039DD30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039DD30: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8039DD34: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8039DD38: lui         $s1, 0x803A
    ctx->r17 = S32(0X803A << 16);
    // 0x8039DD3C: addiu       $s1, $s1, 0x1EA0
    ctx->r17 = ADD32(ctx->r17, 0X1EA0);
    // 0x8039DD40: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8039DD44: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
L_8039DD48:
    // 0x8039DD48: jal         0x8039D90C
    // 0x8039DD4C: nop

    func_8039D90C(rdram, ctx);
        goto after_0;
    // 0x8039DD4C: nop

    after_0:
    // 0x8039DD50: jal         0x8039DB28
    // 0x8039DD54: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_8039DB28(rdram, ctx);
        goto after_1;
    // 0x8039DD54: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_1:
    // 0x8039DD58: beq         $v0, $zero, L_8039DDB8
    if (ctx->r2 == 0) {
        // 0x8039DD5C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8039DDB8;
    }
    // 0x8039DD5C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8039DD60:
    // 0x8039DD60: lh          $t6, 0x2($s1)
    ctx->r14 = MEM_H(ctx->r17, 0X2);
    // 0x8039DD64: nop

    // 0x8039DD68: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8039DD6C: jal         0x8039D90C
    // 0x8039DD70: sh          $t7, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r15;
    func_8039D90C(rdram, ctx);
        goto after_2;
    // 0x8039DD70: sh          $t7, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r15;
    after_2:
    // 0x8039DD74: subu        $t8, $s0, $v0
    ctx->r24 = SUB32(ctx->r16, ctx->r2);
    // 0x8039DD78: blez        $t8, L_8039DD9C
    if (SIGNED(ctx->r24) <= 0) {
        // 0x8039DD7C: nop
    
            goto L_8039DD9C;
    }
    // 0x8039DD7C: nop

    // 0x8039DD80: lh          $t9, 0x2($s1)
    ctx->r25 = MEM_H(ctx->r17, 0X2);
    // 0x8039DD84: nop

    // 0x8039DD88: addiu       $t0, $t9, -0x2
    ctx->r8 = ADD32(ctx->r25, -0X2);
    // 0x8039DD8C: jal         0x8039DD00
    // 0x8039DD90: sh          $t0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r8;
    func_8039DD00(rdram, ctx);
        goto after_3;
    // 0x8039DD90: sh          $t0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r8;
    after_3:
    // 0x8039DD94: b           L_8039DD48
    // 0x8039DD98: nop

        goto L_8039DD48;
    // 0x8039DD98: nop

L_8039DD9C:
    // 0x8039DD9C: jal         0x8039D90C
    // 0x8039DDA0: nop

    func_8039D90C(rdram, ctx);
        goto after_4;
    // 0x8039DDA0: nop

    after_4:
    // 0x8039DDA4: jal         0x8039DB28
    // 0x8039DDA8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_8039DB28(rdram, ctx);
        goto after_5;
    // 0x8039DDA8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_5:
    // 0x8039DDAC: bne         $v0, $zero, L_8039DD60
    if (ctx->r2 != 0) {
        // 0x8039DDB0: nop
    
            goto L_8039DD60;
    }
    // 0x8039DDB0: nop

    // 0x8039DDB4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8039DDB8:
    // 0x8039DDB8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8039DDBC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8039DDC0: jr          $ra
    // 0x8039DDC4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8039DDC4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8039DDC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039DDC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8039DDCC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8039DDD0: jal         0x8039D90C
    // 0x8039DDD4: nop

    func_8039D90C(rdram, ctx);
        goto after_0;
    // 0x8039DDD4: nop

    after_0:
    // 0x8039DDD8: lui         $t7, 0x803A
    ctx->r15 = S32(0X803A << 16);
    // 0x8039DDDC: lw          $t7, 0x1EA8($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X1EA8);
    // 0x8039DDE0: addiu       $t6, $v0, 0x2
    ctx->r14 = ADD32(ctx->r2, 0X2);
    // 0x8039DDE4: lh          $t8, 0x4($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X4);
    // 0x8039DDE8: nop

    // 0x8039DDEC: bne         $t6, $t8, L_8039DE08
    if (ctx->r14 != ctx->r24) {
        // 0x8039DDF0: nop
    
            goto L_8039DE08;
    }
    // 0x8039DDF0: nop

    // 0x8039DDF4: jal         0x8039D9A4
    // 0x8039DDF8: nop

    func_8039D9A4(rdram, ctx);
        goto after_1;
    // 0x8039DDF8: nop

    after_1:
    // 0x8039DDFC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8039DE00: beq         $v0, $at, L_8039DE2C
    if (ctx->r2 == ctx->r1) {
        // 0x8039DE04: nop
    
            goto L_8039DE2C;
    }
    // 0x8039DE04: nop

L_8039DE08:
    // 0x8039DE08: jal         0x8039D90C
    // 0x8039DE0C: nop

    func_8039D90C(rdram, ctx);
        goto after_2;
    // 0x8039DE0C: nop

    after_2:
    // 0x8039DE10: lui         $t0, 0x803A
    ctx->r8 = S32(0X803A << 16);
    // 0x8039DE14: lw          $t0, 0x1EA8($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X1EA8);
    // 0x8039DE18: addiu       $t9, $v0, 0x1
    ctx->r25 = ADD32(ctx->r2, 0X1);
    // 0x8039DE1C: lh          $t1, 0x4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X4);
    // 0x8039DE20: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8039DE24: bne         $t9, $t1, L_8039DE34
    if (ctx->r25 != ctx->r9) {
        // 0x8039DE28: nop
    
            goto L_8039DE34;
    }
    // 0x8039DE28: nop

L_8039DE2C:
    // 0x8039DE2C: b           L_8039DE34
    // 0x8039DE30: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8039DE34;
    // 0x8039DE30: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8039DE34:
    // 0x8039DE34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8039DE38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8039DE3C: jr          $ra
    // 0x8039DE40: nop

    return;
    // 0x8039DE40: nop

;}
