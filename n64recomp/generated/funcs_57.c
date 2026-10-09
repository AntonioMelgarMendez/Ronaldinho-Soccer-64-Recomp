#include "iss64_recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_8024B800_func_8026D230(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026D230: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8026D234: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x8026D238: lw          $t6, 0x3B20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B20);
    // 0x8026D23C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026D240: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8026D244: lw          $v0, 0x90($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X90);
    // 0x8026D248: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8026D24C: beq         $v0, $zero, L_8026D30C
    if (ctx->r2 == 0) {
        // 0x8026D250: lui         $at, 0x8028
        ctx->r1 = S32(0X8028 << 16);
            goto L_8026D30C;
    }
    // 0x8026D250: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8026D254: lwc1        $f4, 0x88($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X88);
    // 0x8026D258: lwc1        $f9, -0x2A70($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X2A70);
    // 0x8026D25C: lwc1        $f8, -0x2A6C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X2A6C);
    // 0x8026D260: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8026D264: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x8026D268: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8026D26C: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    // 0x8026D270: jal         0x80081040
    // 0x8026D274: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    func_80081040(rdram, ctx);
        goto after_0;
    // 0x8026D274: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x8026D278: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8026D27C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8026D280: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x8026D284: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x8026D288: lwc1        $f4, 0x4C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x8026D28C: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x8026D290: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8026D294: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x8026D298: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8026D29C: nop

    // 0x8026D2A0: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x8026D2A4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026D2A8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026D2AC: nop

    // 0x8026D2B0: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8026D2B4: mfc1        $t8, $f8
    ctx->r24 = (int32_t)ctx->f8.u32l;
    // 0x8026D2B8: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8026D2BC: jal         0x80080E80
    // 0x8026D2C0: sh          $t8, 0x2E($t9)
    MEM_H(0X2E, ctx->r25) = ctx->r24;
    func_80080E80(rdram, ctx);
        goto after_1;
    // 0x8026D2C0: sh          $t8, 0x2E($t9)
    MEM_H(0X2E, ctx->r25) = ctx->r24;
    after_1:
    // 0x8026D2C4: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8026D2C8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8026D2CC: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x8026D2D0: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x8026D2D4: lwc1        $f18, 0x44($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X44);
    // 0x8026D2D8: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x8026D2DC: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x8026D2E0: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x8026D2E4: nop

    // 0x8026D2E8: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x8026D2EC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026D2F0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026D2F4: nop

    // 0x8026D2F8: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8026D2FC: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
    // 0x8026D300: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x8026D304: b           L_8026D314
    // 0x8026D308: sh          $t1, 0x30($t2)
    MEM_H(0X30, ctx->r10) = ctx->r9;
        goto L_8026D314;
    // 0x8026D308: sh          $t1, 0x30($t2)
    MEM_H(0X30, ctx->r10) = ctx->r9;
L_8026D30C:
    // 0x8026D30C: jal         0x8026DB68
    // 0x8026D310: nop

    ovl_8024B800_func_8026DB68(rdram, ctx);
        goto after_2;
    // 0x8026D310: nop

    after_2:
L_8026D314:
    // 0x8026D314: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026D318: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8026D31C: jr          $ra
    // 0x8026D320: nop

    return;
    // 0x8026D320: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026D324(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026D324: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x8026D328: addiu       $v1, $v1, 0x3B20
    ctx->r3 = ADD32(ctx->r3, 0X3B20);
    // 0x8026D32C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8026D330: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026D334: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026D338: lh          $t7, 0xE0($v0)
    ctx->r15 = MEM_H(ctx->r2, 0XE0);
    // 0x8026D33C: lh          $t6, 0xDE($v0)
    ctx->r14 = MEM_H(ctx->r2, 0XDE);
    // 0x8026D340: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x8026D344: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x8026D348: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8026D34C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8026D350: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8026D354: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x8026D358: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x8026D35C: jal         0x8027200C
    // 0x8026D360: nop

    ovl_8024B800_func_8027200C(rdram, ctx);
        goto after_0;
    // 0x8026D360: nop

    after_0:
    // 0x8026D364: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x8026D368: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8026D36C: beq         $v0, $zero, L_8026D40C
    if (ctx->r2 == 0) {
        // 0x8026D370: addiu       $v1, $v1, 0x3B20
        ctx->r3 = ADD32(ctx->r3, 0X3B20);
            goto L_8026D40C;
    }
    // 0x8026D370: addiu       $v1, $v1, 0x3B20
    ctx->r3 = ADD32(ctx->r3, 0X3B20);
    // 0x8026D374: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8026D378: nop

    // 0x8026D37C: lhu         $t8, 0x6A($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X6A);
    // 0x8026D380: nop

    // 0x8026D384: slti        $at, $t8, 0x1E
    ctx->r1 = SIGNED(ctx->r24) < 0X1E ? 1 : 0;
    // 0x8026D388: beq         $at, $zero, L_8026D3B0
    if (ctx->r1 == 0) {
        // 0x8026D38C: nop
    
            goto L_8026D3B0;
    }
    // 0x8026D38C: nop

    // 0x8026D390: lh          $t9, 0xDE($v0)
    ctx->r25 = MEM_H(ctx->r2, 0XDE);
    // 0x8026D394: nop

    // 0x8026D398: sh          $t9, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r25;
    // 0x8026D39C: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x8026D3A0: nop

    // 0x8026D3A4: lh          $t1, 0xE0($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE0);
    // 0x8026D3A8: b           L_8026D4B0
    // 0x8026D3AC: sh          $t1, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r9;
        goto L_8026D4B0;
    // 0x8026D3AC: sh          $t1, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r9;
L_8026D3B0:
    // 0x8026D3B0: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8026D3B4: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8026D3B8: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x8026D3BC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026D3C0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026D3C4: nop

    // 0x8026D3C8: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8026D3CC: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x8026D3D0: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x8026D3D4: nop

    // 0x8026D3D8: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8026D3DC: sh          $t3, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r11;
    // 0x8026D3E0: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x8026D3E4: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x8026D3E8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026D3EC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026D3F0: lwc1        $f16, 0x0($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X0);
    // 0x8026D3F4: nop

    // 0x8026D3F8: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x8026D3FC: mfc1        $t6, $f18
    ctx->r14 = (int32_t)ctx->f18.u32l;
    // 0x8026D400: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8026D404: b           L_8026D4B0
    // 0x8026D408: sh          $t6, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r14;
        goto L_8026D4B0;
    // 0x8026D408: sh          $t6, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r14;
L_8026D40C:
    // 0x8026D40C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8026D410: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x8026D414: lhu         $t7, 0x6A($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X6A);
    // 0x8026D418: addiu       $a1, $a1, 0x361E
    ctx->r5 = ADD32(ctx->r5, 0X361E);
    // 0x8026D41C: slti        $at, $t7, 0x5
    ctx->r1 = SIGNED(ctx->r15) < 0X5 ? 1 : 0;
    // 0x8026D420: beq         $at, $zero, L_8026D448
    if (ctx->r1 == 0) {
        // 0x8026D424: nop
    
            goto L_8026D448;
    }
    // 0x8026D424: nop

    // 0x8026D428: lh          $t8, 0xDE($v0)
    ctx->r24 = MEM_H(ctx->r2, 0XDE);
    // 0x8026D42C: nop

    // 0x8026D430: sh          $t8, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r24;
    // 0x8026D434: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x8026D438: nop

    // 0x8026D43C: lh          $t0, 0xE0($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XE0);
    // 0x8026D440: b           L_8026D4B0
    // 0x8026D444: sh          $t0, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r8;
        goto L_8026D4B0;
    // 0x8026D444: sh          $t0, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r8;
L_8026D448:
    // 0x8026D448: lhu         $t1, 0x0($a1)
    ctx->r9 = MEM_HU(ctx->r5, 0X0);
    // 0x8026D44C: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8026D450: ori         $t2, $t1, 0x8000
    ctx->r10 = ctx->r9 | 0X8000;
    // 0x8026D454: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x8026D458: sh          $t2, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r10;
    // 0x8026D45C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026D460: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026D464: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8026D468: nop

    // 0x8026D46C: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8026D470: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8026D474: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x8026D478: nop

    // 0x8026D47C: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8026D480: sh          $t4, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r12;
    // 0x8026D484: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x8026D488: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x8026D48C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026D490: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026D494: lwc1        $f8, 0x0($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0X0);
    // 0x8026D498: nop

    // 0x8026D49C: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8026D4A0: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x8026D4A4: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8026D4A8: sh          $t7, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r15;
    // 0x8026D4AC: nop

L_8026D4B0:
    // 0x8026D4B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026D4B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026D4B8: jr          $ra
    // 0x8026D4BC: nop

    return;
    // 0x8026D4BC: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026D384(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026D384: slti        $at, $t8, 0x1E
    ctx->r1 = SIGNED(ctx->r24) < 0X1E ? 1 : 0;
    // 0x8026D388: beq         $at, $zero, L_8026D3B0
    if (ctx->r1 == 0) {
        // 0x8026D38C: nop
    
            goto L_8026D3B0;
    }
    // 0x8026D38C: nop

    // 0x8026D390: lh          $t9, 0xDE($v0)
    ctx->r25 = MEM_H(ctx->r2, 0XDE);
    // 0x8026D394: nop

    // 0x8026D398: sh          $t9, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r25;
    // 0x8026D39C: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x8026D3A0: nop

    // 0x8026D3A4: lh          $t1, 0xE0($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE0);
    // 0x8026D3A8: b           L_8026D4B0
    // 0x8026D3AC: sh          $t1, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r9;
        goto L_8026D4B0;
    // 0x8026D3AC: sh          $t1, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r9;
L_8026D3B0:
    // 0x8026D3B0: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8026D3B4: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8026D3B8: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x8026D3BC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026D3C0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026D3C4: nop

    // 0x8026D3C8: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8026D3CC: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x8026D3D0: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x8026D3D4: nop

    // 0x8026D3D8: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8026D3DC: sh          $t3, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r11;
    // 0x8026D3E0: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x8026D3E4: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x8026D3E8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026D3EC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026D3F0: lwc1        $f16, 0x0($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X0);
    // 0x8026D3F4: nop

    // 0x8026D3F8: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x8026D3FC: mfc1        $t6, $f18
    ctx->r14 = (int32_t)ctx->f18.u32l;
    // 0x8026D400: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8026D404: b           L_8026D4B0
    // 0x8026D408: sh          $t6, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r14;
        goto L_8026D4B0;
    // 0x8026D408: sh          $t6, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r14;
    // 0x8026D40C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8026D410: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x8026D414: lhu         $t7, 0x6A($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X6A);
    // 0x8026D418: addiu       $a1, $a1, 0x361E
    ctx->r5 = ADD32(ctx->r5, 0X361E);
    // 0x8026D41C: slti        $at, $t7, 0x5
    ctx->r1 = SIGNED(ctx->r15) < 0X5 ? 1 : 0;
    // 0x8026D420: beq         $at, $zero, L_8026D448
    if (ctx->r1 == 0) {
        // 0x8026D424: nop
    
            goto L_8026D448;
    }
    // 0x8026D424: nop

    // 0x8026D428: lh          $t8, 0xDE($v0)
    ctx->r24 = MEM_H(ctx->r2, 0XDE);
    // 0x8026D42C: nop

    // 0x8026D430: sh          $t8, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r24;
    // 0x8026D434: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x8026D438: nop

    // 0x8026D43C: lh          $t0, 0xE0($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XE0);
    // 0x8026D440: b           L_8026D4B0
    // 0x8026D444: sh          $t0, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r8;
        goto L_8026D4B0;
    // 0x8026D444: sh          $t0, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r8;
L_8026D448:
    // 0x8026D448: lhu         $t1, 0x0($a1)
    ctx->r9 = MEM_HU(ctx->r5, 0X0);
    // 0x8026D44C: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8026D450: ori         $t2, $t1, 0x8000
    ctx->r10 = ctx->r9 | 0X8000;
    // 0x8026D454: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x8026D458: sh          $t2, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r10;
    // 0x8026D45C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026D460: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026D464: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8026D468: nop

    // 0x8026D46C: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8026D470: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8026D474: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x8026D478: nop

    // 0x8026D47C: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8026D480: sh          $t4, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r12;
    // 0x8026D484: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x8026D488: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x8026D48C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026D490: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026D494: lwc1        $f8, 0x0($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0X0);
    // 0x8026D498: nop

    // 0x8026D49C: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8026D4A0: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x8026D4A4: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8026D4A8: sh          $t7, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r15;
    // 0x8026D4AC: nop

L_8026D4B0:
    // 0x8026D4B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026D4B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026D4B8: jr          $ra
    // 0x8026D4BC: nop

    return;
    // 0x8026D4BC: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026D3E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026D3E0: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x8026D3E4: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x8026D3E8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026D3EC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026D3F0: lwc1        $f16, 0x0($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X0);
    // 0x8026D3F4: nop

    // 0x8026D3F8: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x8026D3FC: mfc1        $t6, $f18
    ctx->r14 = (int32_t)ctx->f18.u32l;
    // 0x8026D400: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8026D404: b           L_8026D4B0
    // 0x8026D408: sh          $t6, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r14;
        goto L_8026D4B0;
    // 0x8026D408: sh          $t6, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r14;
    // 0x8026D40C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8026D410: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x8026D414: lhu         $t7, 0x6A($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X6A);
    // 0x8026D418: addiu       $a1, $a1, 0x361E
    ctx->r5 = ADD32(ctx->r5, 0X361E);
    // 0x8026D41C: slti        $at, $t7, 0x5
    ctx->r1 = SIGNED(ctx->r15) < 0X5 ? 1 : 0;
    // 0x8026D420: beq         $at, $zero, L_8026D448
    if (ctx->r1 == 0) {
        // 0x8026D424: nop
    
            goto L_8026D448;
    }
    // 0x8026D424: nop

    // 0x8026D428: lh          $t8, 0xDE($v0)
    ctx->r24 = MEM_H(ctx->r2, 0XDE);
    // 0x8026D42C: nop

    // 0x8026D430: sh          $t8, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r24;
    // 0x8026D434: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x8026D438: nop

    // 0x8026D43C: lh          $t0, 0xE0($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XE0);
    // 0x8026D440: b           L_8026D4B0
    // 0x8026D444: sh          $t0, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r8;
        goto L_8026D4B0;
    // 0x8026D444: sh          $t0, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r8;
L_8026D448:
    // 0x8026D448: lhu         $t1, 0x0($a1)
    ctx->r9 = MEM_HU(ctx->r5, 0X0);
    // 0x8026D44C: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8026D450: ori         $t2, $t1, 0x8000
    ctx->r10 = ctx->r9 | 0X8000;
    // 0x8026D454: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x8026D458: sh          $t2, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r10;
    // 0x8026D45C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026D460: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026D464: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8026D468: nop

    // 0x8026D46C: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8026D470: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8026D474: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x8026D478: nop

    // 0x8026D47C: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8026D480: sh          $t4, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r12;
    // 0x8026D484: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x8026D488: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x8026D48C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026D490: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026D494: lwc1        $f8, 0x0($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0X0);
    // 0x8026D498: nop

    // 0x8026D49C: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8026D4A0: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x8026D4A4: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8026D4A8: sh          $t7, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r15;
    // 0x8026D4AC: nop

L_8026D4B0:
    // 0x8026D4B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026D4B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026D4B8: jr          $ra
    // 0x8026D4BC: nop

    return;
    // 0x8026D4BC: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026D484(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026D484: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x8026D488: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x8026D48C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026D490: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026D494: lwc1        $f8, 0x0($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0X0);
    // 0x8026D498: nop

    // 0x8026D49C: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8026D4A0: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x8026D4A4: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8026D4A8: sh          $t7, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r15;
    // 0x8026D4AC: nop

    // 0x8026D4B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026D4B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026D4B8: jr          $ra
    // 0x8026D4BC: nop

    return;
    // 0x8026D4BC: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026D4C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026D4C0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8026D4C4: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8026D4C8: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x8026D4CC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8026D4D0: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8026D4D4: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x8026D4D8: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8026D4DC: lwc1        $f12, 0x8($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8026D4E0: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x8026D4E4: addiu       $t6, $sp, 0x28
    ctx->r14 = ADD32(ctx->r29, 0X28);
    // 0x8026D4E8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8026D4EC: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8026D4F0: jal         0x80272B1C
    // 0x8026D4F4: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    ovl_8024B800_func_80272B1C(rdram, ctx);
        goto after_0;
    // 0x8026D4F4: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    after_0:
    // 0x8026D4F8: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8026D4FC: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x8026D500: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8026D504: lw          $t7, 0x88($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X88);
    // 0x8026D508: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x8026D50C: bne         $t7, $zero, L_8026D560
    if (ctx->r15 != 0) {
        // 0x8026D510: nop
    
            goto L_8026D560;
    }
    // 0x8026D510: nop

    // 0x8026D514: lwc1        $f6, 0x10($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8026D518: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x8026D51C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8026D520: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x8026D524: c.lt.d      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.d < ctx->f8.d;
    // 0x8026D528: lwc1        $f14, 0x28($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8026D52C: bc1f        L_8026D5BC
    if (!c1cs) {
        // 0x8026D530: addiu       $t2, $zero, 0x19
        ctx->r10 = ADD32(0, 0X19);
            goto L_8026D5BC;
    }
    // 0x8026D530: addiu       $t2, $zero, 0x19
    ctx->r10 = ADD32(0, 0X19);
    // 0x8026D534: lwc1        $f12, 0x20($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X20);
    // 0x8026D538: jal         0x80279308
    // 0x8026D53C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    ovl_8024B800_func_80279308(rdram, ctx);
        goto after_1;
    // 0x8026D53C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    after_1:
    // 0x8026D540: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8026D544: lwc1        $f17, -0x2A68($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X2A68);
    // 0x8026D548: lwc1        $f16, -0x2A64($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X2A64);
    // 0x8026D54C: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x8026D550: c.lt.d      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.d < ctx->f16.d;
    // 0x8026D554: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8026D558: bc1f        L_8026D5BC
    if (!c1cs) {
        // 0x8026D55C: addiu       $t2, $zero, 0x19
        ctx->r10 = ADD32(0, 0X19);
            goto L_8026D5BC;
    }
    // 0x8026D55C: addiu       $t2, $zero, 0x19
    ctx->r10 = ADD32(0, 0X19);
L_8026D560:
    // 0x8026D560: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8026D564: lwc1        $f18, 0x34($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8026D568: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x8026D56C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026D570: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026D574: nop

    // 0x8026D578: cvt.w.s     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8026D57C: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8026D580: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x8026D584: nop

    // 0x8026D588: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x8026D58C: sh          $t9, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r25;
    // 0x8026D590: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x8026D594: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026D598: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026D59C: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8026D5A0: nop

    // 0x8026D5A4: cvt.w.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8026D5A8: mfc1        $t1, $f8
    ctx->r9 = (int32_t)ctx->f8.u32l;
    // 0x8026D5AC: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x8026D5B0: b           L_8026D5C4
    // 0x8026D5B4: sh          $t1, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r9;
        goto L_8026D5C4;
    // 0x8026D5B4: sh          $t1, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r9;
    // 0x8026D5B8: addiu       $t2, $zero, 0x19
    ctx->r10 = ADD32(0, 0X19);
L_8026D5BC:
    // 0x8026D5BC: jal         0x8026DB68
    // 0x8026D5C0: sb          $t2, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r10;
    ovl_8024B800_func_8026DB68(rdram, ctx);
        goto after_2;
    // 0x8026D5C0: sb          $t2, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r10;
    after_2:
L_8026D5C4:
    // 0x8026D5C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8026D5C8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8026D5CC: jr          $ra
    // 0x8026D5D0: nop

    return;
    // 0x8026D5D0: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026D544(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026D544: lwc1        $f17, -0x2A68($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X2A68);
    // 0x8026D548: lwc1        $f16, -0x2A64($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X2A64);
    // 0x8026D54C: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x8026D550: c.lt.d      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.d < ctx->f16.d;
    // 0x8026D554: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8026D558: bc1f        L_8026D5BC
    if (!c1cs) {
        // 0x8026D55C: addiu       $t2, $zero, 0x19
        ctx->r10 = ADD32(0, 0X19);
            goto L_8026D5BC;
    }
    // 0x8026D55C: addiu       $t2, $zero, 0x19
    ctx->r10 = ADD32(0, 0X19);
    // 0x8026D560: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8026D564: lwc1        $f18, 0x34($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8026D568: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x8026D56C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026D570: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026D574: nop

    // 0x8026D578: cvt.w.s     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8026D57C: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8026D580: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x8026D584: nop

    // 0x8026D588: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x8026D58C: sh          $t9, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r25;
    // 0x8026D590: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x8026D594: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026D598: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026D59C: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8026D5A0: nop

    // 0x8026D5A4: cvt.w.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8026D5A8: mfc1        $t1, $f8
    ctx->r9 = (int32_t)ctx->f8.u32l;
    // 0x8026D5AC: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x8026D5B0: b           L_8026D5C4
    // 0x8026D5B4: sh          $t1, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r9;
        goto L_8026D5C4;
    // 0x8026D5B4: sh          $t1, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r9;
    // 0x8026D5B8: addiu       $t2, $zero, 0x19
    ctx->r10 = ADD32(0, 0X19);
L_8026D5BC:
    // 0x8026D5BC: jal         0x8026DB68
    // 0x8026D5C0: sb          $t2, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r10;
    ovl_8024B800_func_8026DB68(rdram, ctx);
        goto after_0;
    // 0x8026D5C0: sb          $t2, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r10;
    after_0:
L_8026D5C4:
    // 0x8026D5C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8026D5C8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8026D5CC: jr          $ra
    // 0x8026D5D0: nop

    return;
    // 0x8026D5D0: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026D5CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026D5CC: jr          $ra
    // 0x8026D5D0: nop

    return;
    // 0x8026D5D0: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026D5D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026D5D4: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8026D5D8: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x8026D5DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026D5E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026D5E4: lh          $t7, 0xE0($v0)
    ctx->r15 = MEM_H(ctx->r2, 0XE0);
    // 0x8026D5E8: lh          $t6, 0xDE($v0)
    ctx->r14 = MEM_H(ctx->r2, 0XDE);
    // 0x8026D5EC: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x8026D5F0: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x8026D5F4: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8026D5F8: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8026D5FC: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x8026D600: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x8026D604: jal         0x8026D4C0
    // 0x8026D608: nop

    ovl_8024B800_func_8026D4C0(rdram, ctx);
        goto after_0;
    // 0x8026D608: nop

    after_0:
    // 0x8026D60C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026D610: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026D614: jr          $ra
    // 0x8026D618: nop

    return;
    // 0x8026D618: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026D61C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026D61C: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8026D620: lwc1        $f4, 0x4C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x8026D624: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x8026D628: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026D62C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026D630: lwc1        $f8, 0x44($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X44);
    // 0x8026D634: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8026D638: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8026D63C: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x8026D640: nop

    // 0x8026D644: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8026D648: sh          $t7, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r15;
    // 0x8026D64C: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x8026D650: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026D654: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026D658: nop

    // 0x8026D65C: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8026D660: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x8026D664: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8026D668: jr          $ra
    // 0x8026D66C: sh          $t9, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r25;
    return;
    // 0x8026D66C: sh          $t9, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r25;
;}
RECOMP_FUNC void ovl_8024B800_func_8026D670(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026D670: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026D674: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x8026D678: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026D67C: lwc1        $f12, 0x64C0($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X64C0);
    // 0x8026D680: jal         0x80272AEC
    // 0x8026D684: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_8024B800_func_80272AEC(rdram, ctx);
        goto after_0;
    // 0x8026D684: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8026D688: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x8026D68C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8026D690: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x8026D694: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x8026D698: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026D69C: bc1f        L_8026D714
    if (!c1cs) {
        // 0x8026D6A0: addiu       $v0, $v0, 0x4890
        ctx->r2 = ADD32(ctx->r2, 0X4890);
            goto L_8026D714;
    }
    // 0x8026D6A0: addiu       $v0, $v0, 0x4890
    ctx->r2 = ADD32(ctx->r2, 0X4890);
    // 0x8026D6A4: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8026D6A8: lui         $at, 0xC3AC
    ctx->r1 = S32(0XC3AC << 16);
    // 0x8026D6AC: lw          $t7, 0xC8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XC8);
    // 0x8026D6B0: nop

    // 0x8026D6B4: lhu         $t8, 0x8($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X8);
    // 0x8026D6B8: nop

    // 0x8026D6BC: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x8026D6C0: beq         $t9, $zero, L_8026D6F0
    if (ctx->r25 == 0) {
        // 0x8026D6C4: nop
    
            goto L_8026D6F0;
    }
    // 0x8026D6C4: nop

    // 0x8026D6C8: lui         $at, 0x43AC
    ctx->r1 = S32(0X43AC << 16);
    // 0x8026D6CC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8026D6D0: lwc1        $f8, 0x1C38($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X1C38);
    // 0x8026D6D4: nop

    // 0x8026D6D8: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x8026D6DC: nop

    // 0x8026D6E0: bc1f        L_8026D718
    if (!c1cs) {
        // 0x8026D6E4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8026D718;
    }
    // 0x8026D6E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8026D6E8: b           L_8026D718
    // 0x8026D6EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8026D718;
    // 0x8026D6EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8026D6F0:
    // 0x8026D6F0: lwc1        $f10, 0x1C38($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X1C38);
    // 0x8026D6F4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8026D6F8: nop

    // 0x8026D6FC: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x8026D700: nop

    // 0x8026D704: bc1f        L_8026D718
    if (!c1cs) {
        // 0x8026D708: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8026D718;
    }
    // 0x8026D708: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8026D70C: b           L_8026D718
    // 0x8026D710: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8026D718;
    // 0x8026D710: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8026D714:
    // 0x8026D714: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8026D718:
    // 0x8026D718: jr          $ra
    // 0x8026D71C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8026D71C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void ovl_8024B800_func_8026D688(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026D688: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x8026D68C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8026D690: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x8026D694: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x8026D698: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026D69C: bc1f        L_8026D714
    if (!c1cs) {
        // 0x8026D6A0: addiu       $v0, $v0, 0x4890
        ctx->r2 = ADD32(ctx->r2, 0X4890);
            goto L_8026D714;
    }
    // 0x8026D6A0: addiu       $v0, $v0, 0x4890
    ctx->r2 = ADD32(ctx->r2, 0X4890);
    // 0x8026D6A4: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8026D6A8: lui         $at, 0xC3AC
    ctx->r1 = S32(0XC3AC << 16);
    // 0x8026D6AC: lw          $t7, 0xC8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XC8);
    // 0x8026D6B0: nop

    // 0x8026D6B4: lhu         $t8, 0x8($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X8);
    // 0x8026D6B8: nop

    // 0x8026D6BC: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x8026D6C0: beq         $t9, $zero, L_8026D6F0
    if (ctx->r25 == 0) {
        // 0x8026D6C4: nop
    
            goto L_8026D6F0;
    }
    // 0x8026D6C4: nop

    // 0x8026D6C8: lui         $at, 0x43AC
    ctx->r1 = S32(0X43AC << 16);
    // 0x8026D6CC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8026D6D0: lwc1        $f8, 0x1C38($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X1C38);
    // 0x8026D6D4: nop

    // 0x8026D6D8: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x8026D6DC: nop

    // 0x8026D6E0: bc1f        L_8026D718
    if (!c1cs) {
        // 0x8026D6E4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8026D718;
    }
    // 0x8026D6E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8026D6E8: b           L_8026D718
    // 0x8026D6EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8026D718;
    // 0x8026D6EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8026D6F0:
    // 0x8026D6F0: lwc1        $f10, 0x1C38($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X1C38);
    // 0x8026D6F4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8026D6F8: nop

    // 0x8026D6FC: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x8026D700: nop

    // 0x8026D704: bc1f        L_8026D718
    if (!c1cs) {
        // 0x8026D708: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8026D718;
    }
    // 0x8026D708: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8026D70C: b           L_8026D718
    // 0x8026D710: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8026D718;
    // 0x8026D710: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8026D714:
    // 0x8026D714: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8026D718:
    // 0x8026D718: jr          $ra
    // 0x8026D71C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8026D71C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void ovl_8024B800_func_8026D6E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026D6E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8026D6E8: b           L_8026D718
    // 0x8026D6EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8026D718;
    // 0x8026D6EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8026D6F0: lwc1        $f10, 0x1C38($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X1C38);
    // 0x8026D6F4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8026D6F8: nop

    // 0x8026D6FC: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x8026D700: nop

    // 0x8026D704: bc1f        L_8026D718
    if (!c1cs) {
        // 0x8026D708: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8026D718;
    }
    // 0x8026D708: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8026D70C: b           L_8026D718
    // 0x8026D710: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8026D718;
    // 0x8026D710: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8026D714: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8026D718:
    // 0x8026D718: jr          $ra
    // 0x8026D71C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8026D71C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void ovl_8024B800_func_8026D720(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026D720: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8026D724: lwc1        $f0, 0x690($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X690);
    // 0x8026D728: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8026D72C: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x8026D730: nop

    // 0x8026D734: bc1f        L_8026D75C
    if (!c1cs) {
        // 0x8026D738: nop
    
            goto L_8026D75C;
    }
    // 0x8026D738: nop

    // 0x8026D73C: lwc1        $f4, 0x684($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X684);
    // 0x8026D740: nop

    // 0x8026D744: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x8026D748: nop

    // 0x8026D74C: bc1f        L_8026D75C
    if (!c1cs) {
        // 0x8026D750: nop
    
            goto L_8026D75C;
    }
    // 0x8026D750: nop

    // 0x8026D754: jr          $ra
    // 0x8026D758: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8026D758: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8026D75C:
    // 0x8026D75C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8026D760: lwc1        $f2, 0x69C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X69C);
    // 0x8026D764: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8026D768: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x8026D76C: nop

    // 0x8026D770: bc1f        L_8026D790
    if (!c1cs) {
        // 0x8026D774: nop
    
            goto L_8026D790;
    }
    // 0x8026D774: nop

    // 0x8026D778: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x8026D77C: nop

    // 0x8026D780: bc1f        L_8026D790
    if (!c1cs) {
        // 0x8026D784: nop
    
            goto L_8026D790;
    }
    // 0x8026D784: nop

    // 0x8026D788: jr          $ra
    // 0x8026D78C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    return;
    // 0x8026D78C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8026D790:
    // 0x8026D790: lwc1        $f0, 0x6A8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6A8);
    // 0x8026D794: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8026D798: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x8026D79C: addiu       $v0, $v0, 0x6B0
    ctx->r2 = ADD32(ctx->r2, 0X6B0);
    // 0x8026D7A0: bc1f        L_8026D7C0
    if (!c1cs) {
        // 0x8026D7A4: addiu       $v1, $zero, 0x4
        ctx->r3 = ADD32(0, 0X4);
            goto L_8026D7C0;
    }
    // 0x8026D7A4: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x8026D7A8: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x8026D7AC: nop

    // 0x8026D7B0: bc1f        L_8026D7C4
    if (!c1cs) {
        // 0x8026D7B4: addiu       $a0, $zero, 0x3C
        ctx->r4 = ADD32(0, 0X3C);
            goto L_8026D7C4;
    }
    // 0x8026D7B4: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    // 0x8026D7B8: jr          $ra
    // 0x8026D7BC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    return;
    // 0x8026D7BC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_8026D7C0:
    // 0x8026D7C0: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
L_8026D7C4:
    // 0x8026D7C4: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8026D7C8: nop

    // 0x8026D7CC: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x8026D7D0: nop

    // 0x8026D7D4: bc1f        L_8026D7FC
    if (!c1cs) {
        // 0x8026D7D8: nop
    
            goto L_8026D7FC;
    }
    // 0x8026D7D8: nop

    // 0x8026D7DC: lwc1        $f6, -0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, -0X8);
    // 0x8026D7E0: nop

    // 0x8026D7E4: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x8026D7E8: nop

    // 0x8026D7EC: bc1f        L_8026D7FC
    if (!c1cs) {
        // 0x8026D7F0: nop
    
            goto L_8026D7FC;
    }
    // 0x8026D7F0: nop

    // 0x8026D7F4: jr          $ra
    // 0x8026D7F8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8026D7F8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8026D7FC:
    // 0x8026D7FC: lwc1        $f2, 0x10($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8026D800: nop

    // 0x8026D804: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x8026D808: nop

    // 0x8026D80C: bc1f        L_8026D82C
    if (!c1cs) {
        // 0x8026D810: nop
    
            goto L_8026D82C;
    }
    // 0x8026D810: nop

    // 0x8026D814: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x8026D818: nop

    // 0x8026D81C: bc1f        L_8026D82C
    if (!c1cs) {
        // 0x8026D820: nop
    
            goto L_8026D82C;
    }
    // 0x8026D820: nop

    // 0x8026D824: jr          $ra
    // 0x8026D828: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    return;
    // 0x8026D828: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
L_8026D82C:
    // 0x8026D82C: lwc1        $f0, 0x1C($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x8026D830: nop

    // 0x8026D834: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x8026D838: nop

    // 0x8026D83C: bc1f        L_8026D85C
    if (!c1cs) {
        // 0x8026D840: nop
    
            goto L_8026D85C;
    }
    // 0x8026D840: nop

    // 0x8026D844: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x8026D848: nop

    // 0x8026D84C: bc1f        L_8026D85C
    if (!c1cs) {
        // 0x8026D850: nop
    
            goto L_8026D85C;
    }
    // 0x8026D850: nop

    // 0x8026D854: jr          $ra
    // 0x8026D858: addiu       $v0, $v1, 0x2
    ctx->r2 = ADD32(ctx->r3, 0X2);
    return;
    // 0x8026D858: addiu       $v0, $v1, 0x2
    ctx->r2 = ADD32(ctx->r3, 0X2);
L_8026D85C:
    // 0x8026D85C: lwc1        $f2, 0x28($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X28);
    // 0x8026D860: nop

    // 0x8026D864: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x8026D868: nop

    // 0x8026D86C: bc1f        L_8026D88C
    if (!c1cs) {
        // 0x8026D870: nop
    
            goto L_8026D88C;
    }
    // 0x8026D870: nop

    // 0x8026D874: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x8026D878: nop

    // 0x8026D87C: bc1f        L_8026D88C
    if (!c1cs) {
        // 0x8026D880: nop
    
            goto L_8026D88C;
    }
    // 0x8026D880: nop

    // 0x8026D884: jr          $ra
    // 0x8026D888: addiu       $v0, $v1, 0x3
    ctx->r2 = ADD32(ctx->r3, 0X3);
    return;
    // 0x8026D888: addiu       $v0, $v1, 0x3
    ctx->r2 = ADD32(ctx->r3, 0X3);
L_8026D88C:
    // 0x8026D88C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8026D890: bne         $v1, $a0, L_8026D7C4
    if (ctx->r3 != ctx->r4) {
        // 0x8026D894: addiu       $v0, $v0, 0x30
        ctx->r2 = ADD32(ctx->r2, 0X30);
            goto L_8026D7C4;
    }
    // 0x8026D894: addiu       $v0, $v0, 0x30
    ctx->r2 = ADD32(ctx->r2, 0X30);
    // 0x8026D898: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8026D89C: jr          $ra
    // 0x8026D8A0: nop

    return;
    // 0x8026D8A0: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026D740(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026D740: nop

    // 0x8026D744: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x8026D748: nop

    // 0x8026D74C: bc1f        L_8026D75C
    if (!c1cs) {
        // 0x8026D750: nop
    
            goto L_8026D75C;
    }
    // 0x8026D750: nop

    // 0x8026D754: jr          $ra
    // 0x8026D758: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8026D758: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8026D75C:
    // 0x8026D75C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8026D760: lwc1        $f2, 0x69C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X69C);
    // 0x8026D764: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8026D768: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x8026D76C: nop

    // 0x8026D770: bc1f        L_8026D790
    if (!c1cs) {
        // 0x8026D774: nop
    
            goto L_8026D790;
    }
    // 0x8026D774: nop

    // 0x8026D778: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x8026D77C: nop

    // 0x8026D780: bc1f        L_8026D790
    if (!c1cs) {
        // 0x8026D784: nop
    
            goto L_8026D790;
    }
    // 0x8026D784: nop

    // 0x8026D788: jr          $ra
    // 0x8026D78C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    return;
    // 0x8026D78C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8026D790:
    // 0x8026D790: lwc1        $f0, 0x6A8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6A8);
    // 0x8026D794: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8026D798: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x8026D79C: addiu       $v0, $v0, 0x6B0
    ctx->r2 = ADD32(ctx->r2, 0X6B0);
    // 0x8026D7A0: bc1f        L_8026D7C0
    if (!c1cs) {
        // 0x8026D7A4: addiu       $v1, $zero, 0x4
        ctx->r3 = ADD32(0, 0X4);
            goto L_8026D7C0;
    }
    // 0x8026D7A4: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x8026D7A8: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x8026D7AC: nop

    // 0x8026D7B0: bc1f        L_8026D7C4
    if (!c1cs) {
        // 0x8026D7B4: addiu       $a0, $zero, 0x3C
        ctx->r4 = ADD32(0, 0X3C);
            goto L_8026D7C4;
    }
    // 0x8026D7B4: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    // 0x8026D7B8: jr          $ra
    // 0x8026D7BC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    return;
    // 0x8026D7BC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_8026D7C0:
    // 0x8026D7C0: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
L_8026D7C4:
    // 0x8026D7C4: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8026D7C8: nop

    // 0x8026D7CC: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x8026D7D0: nop

    // 0x8026D7D4: bc1f        L_8026D7FC
    if (!c1cs) {
        // 0x8026D7D8: nop
    
            goto L_8026D7FC;
    }
    // 0x8026D7D8: nop

    // 0x8026D7DC: lwc1        $f6, -0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, -0X8);
    // 0x8026D7E0: nop

    // 0x8026D7E4: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x8026D7E8: nop

    // 0x8026D7EC: bc1f        L_8026D7FC
    if (!c1cs) {
        // 0x8026D7F0: nop
    
            goto L_8026D7FC;
    }
    // 0x8026D7F0: nop

    // 0x8026D7F4: jr          $ra
    // 0x8026D7F8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8026D7F8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8026D7FC:
    // 0x8026D7FC: lwc1        $f2, 0x10($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8026D800: nop

    // 0x8026D804: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x8026D808: nop

    // 0x8026D80C: bc1f        L_8026D82C
    if (!c1cs) {
        // 0x8026D810: nop
    
            goto L_8026D82C;
    }
    // 0x8026D810: nop

    // 0x8026D814: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x8026D818: nop

    // 0x8026D81C: bc1f        L_8026D82C
    if (!c1cs) {
        // 0x8026D820: nop
    
            goto L_8026D82C;
    }
    // 0x8026D820: nop

    // 0x8026D824: jr          $ra
    // 0x8026D828: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    return;
    // 0x8026D828: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
L_8026D82C:
    // 0x8026D82C: lwc1        $f0, 0x1C($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x8026D830: nop

    // 0x8026D834: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x8026D838: nop

    // 0x8026D83C: bc1f        L_8026D85C
    if (!c1cs) {
        // 0x8026D840: nop
    
            goto L_8026D85C;
    }
    // 0x8026D840: nop

    // 0x8026D844: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x8026D848: nop

    // 0x8026D84C: bc1f        L_8026D85C
    if (!c1cs) {
        // 0x8026D850: nop
    
            goto L_8026D85C;
    }
    // 0x8026D850: nop

    // 0x8026D854: jr          $ra
    // 0x8026D858: addiu       $v0, $v1, 0x2
    ctx->r2 = ADD32(ctx->r3, 0X2);
    return;
    // 0x8026D858: addiu       $v0, $v1, 0x2
    ctx->r2 = ADD32(ctx->r3, 0X2);
L_8026D85C:
    // 0x8026D85C: lwc1        $f2, 0x28($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X28);
    // 0x8026D860: nop

    // 0x8026D864: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x8026D868: nop

    // 0x8026D86C: bc1f        L_8026D88C
    if (!c1cs) {
        // 0x8026D870: nop
    
            goto L_8026D88C;
    }
    // 0x8026D870: nop

    // 0x8026D874: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x8026D878: nop

    // 0x8026D87C: bc1f        L_8026D88C
    if (!c1cs) {
        // 0x8026D880: nop
    
            goto L_8026D88C;
    }
    // 0x8026D880: nop

    // 0x8026D884: jr          $ra
    // 0x8026D888: addiu       $v0, $v1, 0x3
    ctx->r2 = ADD32(ctx->r3, 0X3);
    return;
    // 0x8026D888: addiu       $v0, $v1, 0x3
    ctx->r2 = ADD32(ctx->r3, 0X3);
L_8026D88C:
    // 0x8026D88C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8026D890: bne         $v1, $a0, L_8026D7C4
    if (ctx->r3 != ctx->r4) {
        // 0x8026D894: addiu       $v0, $v0, 0x30
        ctx->r2 = ADD32(ctx->r2, 0X30);
            goto L_8026D7C4;
    }
    // 0x8026D894: addiu       $v0, $v0, 0x30
    ctx->r2 = ADD32(ctx->r2, 0X30);
    // 0x8026D898: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8026D89C: jr          $ra
    // 0x8026D8A0: nop

    return;
    // 0x8026D8A0: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026D78C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026D78C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8026D790: lwc1        $f0, 0x6A8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6A8);
    // 0x8026D794: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8026D798: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x8026D79C: addiu       $v0, $v0, 0x6B0
    ctx->r2 = ADD32(ctx->r2, 0X6B0);
    // 0x8026D7A0: bc1f        L_8026D7C0
    if (!c1cs) {
        // 0x8026D7A4: addiu       $v1, $zero, 0x4
        ctx->r3 = ADD32(0, 0X4);
            goto L_8026D7C0;
    }
    // 0x8026D7A4: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x8026D7A8: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x8026D7AC: nop

    // 0x8026D7B0: bc1f        L_8026D7C4
    if (!c1cs) {
        // 0x8026D7B4: addiu       $a0, $zero, 0x3C
        ctx->r4 = ADD32(0, 0X3C);
            goto L_8026D7C4;
    }
    // 0x8026D7B4: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    // 0x8026D7B8: jr          $ra
    // 0x8026D7BC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    return;
    // 0x8026D7BC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_8026D7C0:
    // 0x8026D7C0: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
L_8026D7C4:
    // 0x8026D7C4: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8026D7C8: nop

    // 0x8026D7CC: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x8026D7D0: nop

    // 0x8026D7D4: bc1f        L_8026D7FC
    if (!c1cs) {
        // 0x8026D7D8: nop
    
            goto L_8026D7FC;
    }
    // 0x8026D7D8: nop

    // 0x8026D7DC: lwc1        $f6, -0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, -0X8);
    // 0x8026D7E0: nop

    // 0x8026D7E4: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x8026D7E8: nop

    // 0x8026D7EC: bc1f        L_8026D7FC
    if (!c1cs) {
        // 0x8026D7F0: nop
    
            goto L_8026D7FC;
    }
    // 0x8026D7F0: nop

    // 0x8026D7F4: jr          $ra
    // 0x8026D7F8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8026D7F8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8026D7FC:
    // 0x8026D7FC: lwc1        $f2, 0x10($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8026D800: nop

    // 0x8026D804: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x8026D808: nop

    // 0x8026D80C: bc1f        L_8026D82C
    if (!c1cs) {
        // 0x8026D810: nop
    
            goto L_8026D82C;
    }
    // 0x8026D810: nop

    // 0x8026D814: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x8026D818: nop

    // 0x8026D81C: bc1f        L_8026D82C
    if (!c1cs) {
        // 0x8026D820: nop
    
            goto L_8026D82C;
    }
    // 0x8026D820: nop

    // 0x8026D824: jr          $ra
    // 0x8026D828: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    return;
    // 0x8026D828: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
L_8026D82C:
    // 0x8026D82C: lwc1        $f0, 0x1C($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x8026D830: nop

    // 0x8026D834: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x8026D838: nop

    // 0x8026D83C: bc1f        L_8026D85C
    if (!c1cs) {
        // 0x8026D840: nop
    
            goto L_8026D85C;
    }
    // 0x8026D840: nop

    // 0x8026D844: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x8026D848: nop

    // 0x8026D84C: bc1f        L_8026D85C
    if (!c1cs) {
        // 0x8026D850: nop
    
            goto L_8026D85C;
    }
    // 0x8026D850: nop

    // 0x8026D854: jr          $ra
    // 0x8026D858: addiu       $v0, $v1, 0x2
    ctx->r2 = ADD32(ctx->r3, 0X2);
    return;
    // 0x8026D858: addiu       $v0, $v1, 0x2
    ctx->r2 = ADD32(ctx->r3, 0X2);
L_8026D85C:
    // 0x8026D85C: lwc1        $f2, 0x28($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X28);
    // 0x8026D860: nop

    // 0x8026D864: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x8026D868: nop

    // 0x8026D86C: bc1f        L_8026D88C
    if (!c1cs) {
        // 0x8026D870: nop
    
            goto L_8026D88C;
    }
    // 0x8026D870: nop

    // 0x8026D874: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x8026D878: nop

    // 0x8026D87C: bc1f        L_8026D88C
    if (!c1cs) {
        // 0x8026D880: nop
    
            goto L_8026D88C;
    }
    // 0x8026D880: nop

    // 0x8026D884: jr          $ra
    // 0x8026D888: addiu       $v0, $v1, 0x3
    ctx->r2 = ADD32(ctx->r3, 0X3);
    return;
    // 0x8026D888: addiu       $v0, $v1, 0x3
    ctx->r2 = ADD32(ctx->r3, 0X3);
L_8026D88C:
    // 0x8026D88C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8026D890: bne         $v1, $a0, L_8026D7C4
    if (ctx->r3 != ctx->r4) {
        // 0x8026D894: addiu       $v0, $v0, 0x30
        ctx->r2 = ADD32(ctx->r2, 0X30);
            goto L_8026D7C4;
    }
    // 0x8026D894: addiu       $v0, $v0, 0x30
    ctx->r2 = ADD32(ctx->r2, 0X30);
    // 0x8026D898: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8026D89C: jr          $ra
    // 0x8026D8A0: nop

    return;
    // 0x8026D8A0: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026D794(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026D794: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8026D798: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x8026D79C: addiu       $v0, $v0, 0x6B0
    ctx->r2 = ADD32(ctx->r2, 0X6B0);
    // 0x8026D7A0: bc1f        L_8026D7C0
    if (!c1cs) {
        // 0x8026D7A4: addiu       $v1, $zero, 0x4
        ctx->r3 = ADD32(0, 0X4);
            goto L_8026D7C0;
    }
    // 0x8026D7A4: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x8026D7A8: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x8026D7AC: nop

    // 0x8026D7B0: bc1f        L_8026D7C4
    if (!c1cs) {
        // 0x8026D7B4: addiu       $a0, $zero, 0x3C
        ctx->r4 = ADD32(0, 0X3C);
            goto L_8026D7C4;
    }
    // 0x8026D7B4: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    // 0x8026D7B8: jr          $ra
    // 0x8026D7BC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    return;
    // 0x8026D7BC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_8026D7C0:
    // 0x8026D7C0: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
L_8026D7C4:
    // 0x8026D7C4: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8026D7C8: nop

    // 0x8026D7CC: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x8026D7D0: nop

    // 0x8026D7D4: bc1f        L_8026D7FC
    if (!c1cs) {
        // 0x8026D7D8: nop
    
            goto L_8026D7FC;
    }
    // 0x8026D7D8: nop

    // 0x8026D7DC: lwc1        $f6, -0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, -0X8);
    // 0x8026D7E0: nop

    // 0x8026D7E4: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x8026D7E8: nop

    // 0x8026D7EC: bc1f        L_8026D7FC
    if (!c1cs) {
        // 0x8026D7F0: nop
    
            goto L_8026D7FC;
    }
    // 0x8026D7F0: nop

    // 0x8026D7F4: jr          $ra
    // 0x8026D7F8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8026D7F8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8026D7FC:
    // 0x8026D7FC: lwc1        $f2, 0x10($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8026D800: nop

    // 0x8026D804: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x8026D808: nop

    // 0x8026D80C: bc1f        L_8026D82C
    if (!c1cs) {
        // 0x8026D810: nop
    
            goto L_8026D82C;
    }
    // 0x8026D810: nop

    // 0x8026D814: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x8026D818: nop

    // 0x8026D81C: bc1f        L_8026D82C
    if (!c1cs) {
        // 0x8026D820: nop
    
            goto L_8026D82C;
    }
    // 0x8026D820: nop

    // 0x8026D824: jr          $ra
    // 0x8026D828: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    return;
    // 0x8026D828: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
L_8026D82C:
    // 0x8026D82C: lwc1        $f0, 0x1C($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x8026D830: nop

    // 0x8026D834: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x8026D838: nop

    // 0x8026D83C: bc1f        L_8026D85C
    if (!c1cs) {
        // 0x8026D840: nop
    
            goto L_8026D85C;
    }
    // 0x8026D840: nop

    // 0x8026D844: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x8026D848: nop

    // 0x8026D84C: bc1f        L_8026D85C
    if (!c1cs) {
        // 0x8026D850: nop
    
            goto L_8026D85C;
    }
    // 0x8026D850: nop

    // 0x8026D854: jr          $ra
    // 0x8026D858: addiu       $v0, $v1, 0x2
    ctx->r2 = ADD32(ctx->r3, 0X2);
    return;
    // 0x8026D858: addiu       $v0, $v1, 0x2
    ctx->r2 = ADD32(ctx->r3, 0X2);
L_8026D85C:
    // 0x8026D85C: lwc1        $f2, 0x28($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X28);
    // 0x8026D860: nop

    // 0x8026D864: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x8026D868: nop

    // 0x8026D86C: bc1f        L_8026D88C
    if (!c1cs) {
        // 0x8026D870: nop
    
            goto L_8026D88C;
    }
    // 0x8026D870: nop

    // 0x8026D874: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x8026D878: nop

    // 0x8026D87C: bc1f        L_8026D88C
    if (!c1cs) {
        // 0x8026D880: nop
    
            goto L_8026D88C;
    }
    // 0x8026D880: nop

    // 0x8026D884: jr          $ra
    // 0x8026D888: addiu       $v0, $v1, 0x3
    ctx->r2 = ADD32(ctx->r3, 0X3);
    return;
    // 0x8026D888: addiu       $v0, $v1, 0x3
    ctx->r2 = ADD32(ctx->r3, 0X3);
L_8026D88C:
    // 0x8026D88C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8026D890: bne         $v1, $a0, L_8026D7C4
    if (ctx->r3 != ctx->r4) {
        // 0x8026D894: addiu       $v0, $v0, 0x30
        ctx->r2 = ADD32(ctx->r2, 0X30);
            goto L_8026D7C4;
    }
    // 0x8026D894: addiu       $v0, $v0, 0x30
    ctx->r2 = ADD32(ctx->r2, 0X30);
    // 0x8026D898: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8026D89C: jr          $ra
    // 0x8026D8A0: nop

    return;
    // 0x8026D8A0: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026D7C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_8026D7C4:
    // 0x8026D7C4: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8026D7C8: nop

    // 0x8026D7CC: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x8026D7D0: nop

    // 0x8026D7D4: bc1f        L_8026D7FC
    if (!c1cs) {
        // 0x8026D7D8: nop
    
            goto L_8026D7FC;
    }
    // 0x8026D7D8: nop

    // 0x8026D7DC: lwc1        $f6, -0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, -0X8);
    // 0x8026D7E0: nop

    // 0x8026D7E4: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x8026D7E8: nop

    // 0x8026D7EC: bc1f        L_8026D7FC
    if (!c1cs) {
        // 0x8026D7F0: nop
    
            goto L_8026D7FC;
    }
    // 0x8026D7F0: nop

    // 0x8026D7F4: jr          $ra
    // 0x8026D7F8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8026D7F8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8026D7FC:
    // 0x8026D7FC: lwc1        $f2, 0x10($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8026D800: nop

    // 0x8026D804: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x8026D808: nop

    // 0x8026D80C: bc1f        L_8026D82C
    if (!c1cs) {
        // 0x8026D810: nop
    
            goto L_8026D82C;
    }
    // 0x8026D810: nop

    // 0x8026D814: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x8026D818: nop

    // 0x8026D81C: bc1f        L_8026D82C
    if (!c1cs) {
        // 0x8026D820: nop
    
            goto L_8026D82C;
    }
    // 0x8026D820: nop

    // 0x8026D824: jr          $ra
    // 0x8026D828: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    return;
    // 0x8026D828: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
L_8026D82C:
    // 0x8026D82C: lwc1        $f0, 0x1C($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x8026D830: nop

    // 0x8026D834: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x8026D838: nop

    // 0x8026D83C: bc1f        L_8026D85C
    if (!c1cs) {
        // 0x8026D840: nop
    
            goto L_8026D85C;
    }
    // 0x8026D840: nop

    // 0x8026D844: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x8026D848: nop

    // 0x8026D84C: bc1f        L_8026D85C
    if (!c1cs) {
        // 0x8026D850: nop
    
            goto L_8026D85C;
    }
    // 0x8026D850: nop

    // 0x8026D854: jr          $ra
    // 0x8026D858: addiu       $v0, $v1, 0x2
    ctx->r2 = ADD32(ctx->r3, 0X2);
    return;
    // 0x8026D858: addiu       $v0, $v1, 0x2
    ctx->r2 = ADD32(ctx->r3, 0X2);
L_8026D85C:
    // 0x8026D85C: lwc1        $f2, 0x28($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X28);
    // 0x8026D860: nop

    // 0x8026D864: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x8026D868: nop

    // 0x8026D86C: bc1f        L_8026D88C
    if (!c1cs) {
        // 0x8026D870: nop
    
            goto L_8026D88C;
    }
    // 0x8026D870: nop

    // 0x8026D874: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x8026D878: nop

    // 0x8026D87C: bc1f        L_8026D88C
    if (!c1cs) {
        // 0x8026D880: nop
    
            goto L_8026D88C;
    }
    // 0x8026D880: nop

    // 0x8026D884: jr          $ra
    // 0x8026D888: addiu       $v0, $v1, 0x3
    ctx->r2 = ADD32(ctx->r3, 0X3);
    return;
    // 0x8026D888: addiu       $v0, $v1, 0x3
    ctx->r2 = ADD32(ctx->r3, 0X3);
L_8026D88C:
    // 0x8026D88C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8026D890: bne         $v1, $a0, L_8026D7C4
    if (ctx->r3 != ctx->r4) {
        // 0x8026D894: addiu       $v0, $v0, 0x30
        ctx->r2 = ADD32(ctx->r2, 0X30);
            goto L_8026D7C4;
    }
    // 0x8026D894: addiu       $v0, $v0, 0x30
    ctx->r2 = ADD32(ctx->r2, 0X30);
    // 0x8026D898: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8026D89C: jr          $ra
    // 0x8026D8A0: nop

    return;
    // 0x8026D8A0: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026D820(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_8026D7C4:
    // 0x8026D820: nop

    // 0x8026D824: jr          $ra
    // 0x8026D828: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    return;
    // 0x8026D828: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8026D82C: lwc1        $f0, 0x1C($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x8026D830: nop

    // 0x8026D834: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x8026D838: nop

    // 0x8026D83C: bc1f        L_8026D85C
    if (!c1cs) {
        // 0x8026D840: nop
    
            goto L_8026D85C;
    }
    // 0x8026D840: nop

    // 0x8026D844: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x8026D848: nop

    // 0x8026D84C: bc1f        L_8026D85C
    if (!c1cs) {
        // 0x8026D850: nop
    
            goto L_8026D85C;
    }
    // 0x8026D850: nop

    // 0x8026D854: jr          $ra
    // 0x8026D858: addiu       $v0, $v1, 0x2
    ctx->r2 = ADD32(ctx->r3, 0X2);
    return;
    // 0x8026D858: addiu       $v0, $v1, 0x2
    ctx->r2 = ADD32(ctx->r3, 0X2);
L_8026D85C:
    // 0x8026D85C: lwc1        $f2, 0x28($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X28);
    // 0x8026D860: nop

    // 0x8026D864: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x8026D868: nop

    // 0x8026D86C: bc1f        L_8026D88C
    if (!c1cs) {
        // 0x8026D870: nop
    
            goto L_8026D88C;
    }
    // 0x8026D870: nop

    // 0x8026D874: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x8026D878: nop

    // 0x8026D87C: bc1f        L_8026D88C
    if (!c1cs) {
        // 0x8026D880: nop
    
            goto L_8026D88C;
    }
    // 0x8026D880: nop

    // 0x8026D884: jr          $ra
    // 0x8026D888: addiu       $v0, $v1, 0x3
    ctx->r2 = ADD32(ctx->r3, 0X3);
    return;
    // 0x8026D888: addiu       $v0, $v1, 0x3
    ctx->r2 = ADD32(ctx->r3, 0X3);
L_8026D88C:
    // 0x8026D88C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8026D890: bne         $v1, $a0, L_8026D7C4
    if (ctx->r3 != ctx->r4) {
            // 0x8026D894: addiu       $v0, $v0, 0x30
    ctx->r2 = ADD32(ctx->r2, 0X30);
    ovl_8024B800_func_8026D7C4(rdram, ctx);
    return;
    }
    // 0x8026D894: addiu       $v0, $v0, 0x30
    ctx->r2 = ADD32(ctx->r2, 0X30);
    // 0x8026D898: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8026D89C: jr          $ra
    // 0x8026D8A0: nop

    return;
    // 0x8026D8A0: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026D878(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_8026D7C4:
    // 0x8026D878: nop

    // 0x8026D87C: bc1f        L_8026D88C
    if (!c1cs) {
        // 0x8026D880: nop
    
            goto L_8026D88C;
    }
    // 0x8026D880: nop

    // 0x8026D884: jr          $ra
    // 0x8026D888: addiu       $v0, $v1, 0x3
    ctx->r2 = ADD32(ctx->r3, 0X3);
    return;
    // 0x8026D888: addiu       $v0, $v1, 0x3
    ctx->r2 = ADD32(ctx->r3, 0X3);
L_8026D88C:
    // 0x8026D88C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8026D890: bne         $v1, $a0, L_8026D7C4
    if (ctx->r3 != ctx->r4) {
            // 0x8026D894: addiu       $v0, $v0, 0x30
    ctx->r2 = ADD32(ctx->r2, 0X30);
    ovl_8024B800_func_8026D7C4(rdram, ctx);
    return;
    }
    // 0x8026D894: addiu       $v0, $v0, 0x30
    ctx->r2 = ADD32(ctx->r2, 0X30);
    // 0x8026D898: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8026D89C: jr          $ra
    // 0x8026D8A0: nop

    return;
    // 0x8026D8A0: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026D8A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026D8A4: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8026D8A8: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x8026D8AC: subu        $t6, $t6, $a1
    ctx->r14 = SUB32(ctx->r14, ctx->r5);
    // 0x8026D8B0: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8026D8B4: addiu       $t7, $t7, 0x680
    ctx->r15 = ADD32(ctx->r15, 0X680);
    // 0x8026D8B8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8026D8BC: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x8026D8C0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026D8C4: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x8026D8C8: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8026D8CC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026D8D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026D8D4: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8026D8D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026D8DC: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8026D8E0: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x8026D8E4: nop

    // 0x8026D8E8: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x8026D8EC: sh          $t9, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r25;
    // 0x8026D8F0: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x8026D8F4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026D8F8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026D8FC: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8026D900: nop

    // 0x8026D904: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8026D908: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x8026D90C: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x8026D910: jal         0x8026BC5C
    // 0x8026D914: sh          $t1, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r9;
    ovl_8024B800_func_8026BC5C(rdram, ctx);
        goto after_0;
    // 0x8026D914: sh          $t1, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r9;
    after_0:
    // 0x8026D918: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026D91C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026D920: jr          $ra
    // 0x8026D924: nop

    return;
    // 0x8026D924: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026D8C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026D8C8: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8026D8CC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026D8D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026D8D4: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8026D8D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026D8DC: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8026D8E0: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x8026D8E4: nop

    // 0x8026D8E8: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x8026D8EC: sh          $t9, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r25;
    // 0x8026D8F0: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x8026D8F4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026D8F8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026D8FC: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8026D900: nop

    // 0x8026D904: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8026D908: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x8026D90C: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x8026D910: jal         0x8026BC5C
    // 0x8026D914: sh          $t1, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r9;
    ovl_8024B800_func_8026BC5C(rdram, ctx);
        goto after_0;
    // 0x8026D914: sh          $t1, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r9;
    after_0:
    // 0x8026D918: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026D91C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026D920: jr          $ra
    // 0x8026D924: nop

    return;
    // 0x8026D924: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026D928(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026D928: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8026D92C: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x8026D930: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x8026D934: addiu       $v0, $v0, 0x4890
    ctx->r2 = ADD32(ctx->r2, 0X4890);
    // 0x8026D938: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026D93C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026D940: lwc1        $f4, 0x1C38($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X1C38);
    // 0x8026D944: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026D948: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8026D94C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026D950: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8026D954: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x8026D958: nop

    // 0x8026D95C: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8026D960: sh          $t7, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r15;
    // 0x8026D964: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x8026D968: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026D96C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026D970: lwc1        $f8, 0x1C30($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X1C30);
    // 0x8026D974: nop

    // 0x8026D978: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8026D97C: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x8026D980: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8026D984: jal         0x8026BC5C
    // 0x8026D988: sh          $t9, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r25;
    ovl_8024B800_func_8026BC5C(rdram, ctx);
        goto after_0;
    // 0x8026D988: sh          $t9, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r25;
    after_0:
    // 0x8026D98C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026D990: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026D994: jr          $ra
    // 0x8026D998: nop

    return;
    // 0x8026D998: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026D99C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026D99C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026D9A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026D9A4: jal         0x802637F0
    // 0x8026D9A8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_8024B800_func_802637F0(rdram, ctx);
        goto after_0;
    // 0x8026D9A8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8026D9AC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8026D9B0: blez        $v0, L_8026D9C8
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8026D9B4: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_8026D9C8;
    }
    // 0x8026D9B4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8026D9B8: jal         0x8026D8A4
    // 0x8026D9BC: nop

    ovl_8024B800_func_8026D8A4(rdram, ctx);
        goto after_1;
    // 0x8026D9BC: nop

    after_1:
    // 0x8026D9C0: b           L_8026D9D4
    // 0x8026D9C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026D9D4;
    // 0x8026D9C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026D9C8:
    // 0x8026D9C8: jal         0x8026DA7C
    // 0x8026D9CC: nop

    ovl_8024B800_func_8026DA7C(rdram, ctx);
        goto after_2;
    // 0x8026D9CC: nop

    after_2:
    // 0x8026D9D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026D9D4:
    // 0x8026D9D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026D9D8: jr          $ra
    // 0x8026D9DC: nop

    return;
    // 0x8026D9DC: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026D9E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026D9E0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8026D9E4: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x8026D9E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026D9EC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8026D9F0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8026D9F4: jal         0x8026D720
    // 0x8026D9F8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    ovl_8024B800_func_8026D720(rdram, ctx);
        goto after_0;
    // 0x8026D9F8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_0:
    // 0x8026D9FC: bgez        $v0, L_8026DA34
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8026DA00: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_8026DA34;
    }
    // 0x8026DA00: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8026DA04: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8026DA08: jal         0x802637F0
    // 0x8026DA0C: nop

    ovl_8024B800_func_802637F0(rdram, ctx);
        goto after_1;
    // 0x8026DA0C: nop

    after_1:
    // 0x8026DA10: bgez        $v0, L_8026DA24
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8026DA14: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_8026DA24;
    }
    // 0x8026DA14: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8026DA18: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8026DA1C: b           L_8026DA34
    // 0x8026DA20: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
        goto L_8026DA34;
    // 0x8026DA20: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
L_8026DA24:
    // 0x8026DA24: addiu       $a1, $v0, -0x1
    ctx->r5 = ADD32(ctx->r2, -0X1);
    // 0x8026DA28: bgez        $a1, L_8026DA38
    if (SIGNED(ctx->r5) >= 0) {
        // 0x8026DA2C: lw          $t7, 0x18($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X18);
            goto L_8026DA38;
    }
    // 0x8026DA2C: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8026DA30: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_8026DA34:
    // 0x8026DA34: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
L_8026DA38:
    // 0x8026DA38: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8026DA3C: bne         $t7, $zero, L_8026DA64
    if (ctx->r15 != 0) {
        // 0x8026DA40: addiu       $a1, $a1, -0x2
        ctx->r5 = ADD32(ctx->r5, -0X2);
            goto L_8026DA64;
    }
    // 0x8026DA40: addiu       $a1, $a1, -0x2
    ctx->r5 = ADD32(ctx->r5, -0X2);
    // 0x8026DA44: bgez        $a1, L_8026DA54
    if (SIGNED(ctx->r5) >= 0) {
        // 0x8026DA48: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_8026DA54;
    }
    // 0x8026DA48: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8026DA4C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8026DA50: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
L_8026DA54:
    // 0x8026DA54: jal         0x8026D8A4
    // 0x8026DA58: nop

    ovl_8024B800_func_8026D8A4(rdram, ctx);
        goto after_2;
    // 0x8026DA58: nop

    after_2:
    // 0x8026DA5C: b           L_8026DA70
    // 0x8026DA60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026DA70;
    // 0x8026DA60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026DA64:
    // 0x8026DA64: jal         0x8026DA7C
    // 0x8026DA68: nop

    ovl_8024B800_func_8026DA7C(rdram, ctx);
        goto after_3;
    // 0x8026DA68: nop

    after_3:
    // 0x8026DA6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026DA70:
    // 0x8026DA70: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8026DA74: jr          $ra
    // 0x8026DA78: nop

    return;
    // 0x8026DA78: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026DA7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026DA7C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026DA80: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8026DA84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026DA88: lwc1        $f12, -0x2A60($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X2A60);
    // 0x8026DA8C: jal         0x8026D720
    // 0x8026DA90: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_8024B800_func_8026D720(rdram, ctx);
        goto after_0;
    // 0x8026DA90: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8026DA94: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8026DA98: blez        $v0, L_8026DAB0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8026DA9C: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_8026DAB0;
    }
    // 0x8026DA9C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8026DAA0: jal         0x8026D8A4
    // 0x8026DAA4: nop

    ovl_8024B800_func_8026D8A4(rdram, ctx);
        goto after_1;
    // 0x8026DAA4: nop

    after_1:
    // 0x8026DAA8: b           L_8026DABC
    // 0x8026DAAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026DABC;
    // 0x8026DAAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026DAB0:
    // 0x8026DAB0: jal         0x8026D928
    // 0x8026DAB4: nop

    ovl_8024B800_func_8026D928(rdram, ctx);
        goto after_2;
    // 0x8026DAB4: nop

    after_2:
    // 0x8026DAB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026DABC:
    // 0x8026DABC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026DAC0: jr          $ra
    // 0x8026DAC4: nop

    return;
    // 0x8026DAC4: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026DAC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026DAC8: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8026DACC: lhu         $t6, 0xB78($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB78);
    // 0x8026DAD0: lui         $t1, 0x8028
    ctx->r9 = S32(0X8028 << 16);
    // 0x8026DAD4: bne         $t6, $zero, L_8026DAF8
    if (ctx->r14 != 0) {
        // 0x8026DAD8: nop
    
            goto L_8026DAF8;
    }
    // 0x8026DAD8: nop

    // 0x8026DADC: lhu         $t7, 0x14($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X14);
    // 0x8026DAE0: lhu         $t9, 0x12($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X12);
    // 0x8026DAE4: andi        $t8, $t7, 0xFBFF
    ctx->r24 = ctx->r15 & 0XFBFF;
    // 0x8026DAE8: andi        $t0, $t9, 0xFDFF
    ctx->r8 = ctx->r25 & 0XFDFF;
    // 0x8026DAEC: sw          $zero, 0x28($a0)
    MEM_W(0X28, ctx->r4) = 0;
    // 0x8026DAF0: sh          $t8, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r24;
    // 0x8026DAF4: sh          $t0, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r8;
L_8026DAF8:
    // 0x8026DAF8: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8026DAFC: lwc1        $f4, 0x44($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X44);
    // 0x8026DB00: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x8026DB04: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026DB08: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026DB0C: lh          $t1, -0x1A48($t1)
    ctx->r9 = MEM_H(ctx->r9, -0X1A48);
    // 0x8026DB10: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8026DB14: sh          $t1, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r9;
    // 0x8026DB18: mfc1        $t3, $f6
    ctx->r11 = (int32_t)ctx->f6.u32l;
    // 0x8026DB1C: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x8026DB20: jr          $ra
    // 0x8026DB24: sh          $t3, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r11;
    return;
    // 0x8026DB24: sh          $t3, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r11;
;}
RECOMP_FUNC void ovl_8024B800_func_8026DB28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026DB28: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026DB2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026DB30: jal         0x8005133C
    // 0x8026DB34: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8005133C(rdram, ctx);
        goto after_0;
    // 0x8026DB34: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8026DB38: bne         $v0, $zero, L_8026DB4C
    if (ctx->r2 != 0) {
        // 0x8026DB3C: lui         $a1, 0x8028
        ctx->r5 = S32(0X8028 << 16);
            goto L_8026DB4C;
    }
    // 0x8026DB3C: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8026DB40: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8026DB44: jal         0x8026F2EC
    // 0x8026DB48: addiu       $a1, $a1, -0x3418
    ctx->r5 = ADD32(ctx->r5, -0X3418);
    ovl_8024B800_func_8026F2EC(rdram, ctx);
        goto after_1;
    // 0x8026DB48: addiu       $a1, $a1, -0x3418
    ctx->r5 = ADD32(ctx->r5, -0X3418);
    after_1:
L_8026DB4C:
    // 0x8026DB4C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8026DB50: jal         0x8026DB68
    // 0x8026DB54: nop

    ovl_8024B800_func_8026DB68(rdram, ctx);
        goto after_2;
    // 0x8026DB54: nop

    after_2:
    // 0x8026DB58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026DB5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026DB60: jr          $ra
    // 0x8026DB64: nop

    return;
    // 0x8026DB64: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026DB68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026DB68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026DB6C: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x8026DB70: lw          $t7, 0x3B20($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3B20);
    // 0x8026DB74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026DB78: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8026DB7C: lwc1        $f12, 0x88($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X88);
    // 0x8026DB80: lwc1        $f14, 0x20($t7)
    ctx->f14.u32l = MEM_W(ctx->r15, 0X20);
    // 0x8026DB84: jal         0x80279308
    // 0x8026DB88: nop

    ovl_8024B800_func_80279308(rdram, ctx);
        goto after_0;
    // 0x8026DB88: nop

    after_0:
    // 0x8026DB8C: jal         0x80080E80
    // 0x8026DB90: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    func_80080E80(rdram, ctx);
        goto after_1;
    // 0x8026DB90: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_1:
    // 0x8026DB94: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8026DB98: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8026DB9C: lwc1        $f4, 0x84($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X84);
    // 0x8026DBA0: lwc1        $f11, -0x2A58($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X2A58);
    // 0x8026DBA4: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x8026DBA8: lwc1        $f10, -0x2A54($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X2A54);
    // 0x8026DBAC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8026DBB0: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x8026DBB4: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x8026DBB8: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x8026DBBC: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8026DBC0: ctc1        $a1, $FpcCsr
    set_cop1_cs(ctx->r5);
    // 0x8026DBC4: nop

    // 0x8026DBC8: cvt.w.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_D(ctx->f16.d);
    // 0x8026DBCC: cfc1        $a1, $FpcCsr
    ctx->r5 = get_cop1_cs();
    // 0x8026DBD0: nop

    // 0x8026DBD4: andi        $a1, $a1, 0x78
    ctx->r5 = ctx->r5 & 0X78;
    // 0x8026DBD8: beq         $a1, $zero, L_8026DC28
    if (ctx->r5 == 0) {
        // 0x8026DBDC: nop
    
            goto L_8026DC28;
    }
    // 0x8026DBDC: nop

    // 0x8026DBE0: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x8026DBE4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8026DBE8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8026DBEC: sub.d       $f18, $f16, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f18.d = ctx->f16.d - ctx->f18.d;
    // 0x8026DBF0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8026DBF4: ctc1        $a1, $FpcCsr
    set_cop1_cs(ctx->r5);
    // 0x8026DBF8: nop

    // 0x8026DBFC: cvt.w.d     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_D(ctx->f18.d);
    // 0x8026DC00: cfc1        $a1, $FpcCsr
    ctx->r5 = get_cop1_cs();
    // 0x8026DC04: nop

    // 0x8026DC08: andi        $a1, $a1, 0x78
    ctx->r5 = ctx->r5 & 0X78;
    // 0x8026DC0C: bne         $a1, $zero, L_8026DC20
    if (ctx->r5 != 0) {
        // 0x8026DC10: nop
    
            goto L_8026DC20;
    }
    // 0x8026DC10: nop

    // 0x8026DC14: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x8026DC18: b           L_8026DC38
    // 0x8026DC1C: or          $a1, $a1, $at
    ctx->r5 = ctx->r5 | ctx->r1;
        goto L_8026DC38;
    // 0x8026DC1C: or          $a1, $a1, $at
    ctx->r5 = ctx->r5 | ctx->r1;
L_8026DC20:
    // 0x8026DC20: b           L_8026DC38
    // 0x8026DC24: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
        goto L_8026DC38;
    // 0x8026DC24: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
L_8026DC28:
    // 0x8026DC28: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x8026DC2C: nop

    // 0x8026DC30: bltz        $a1, L_8026DC20
    if (SIGNED(ctx->r5) < 0) {
        // 0x8026DC34: nop
    
            goto L_8026DC20;
    }
    // 0x8026DC34: nop

L_8026DC38:
    // 0x8026DC38: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8026DC3C: sltiu       $at, $a1, 0x15
    ctx->r1 = ctx->r5 < 0X15 ? 1 : 0;
    // 0x8026DC40: bne         $at, $zero, L_8026DC4C
    if (ctx->r1 != 0) {
        // 0x8026DC44: nop
    
            goto L_8026DC4C;
    }
    // 0x8026DC44: nop

    // 0x8026DC48: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
L_8026DC4C:
    // 0x8026DC4C: jal         0x8026D8A4
    // 0x8026DC50: nop

    ovl_8024B800_func_8026D8A4(rdram, ctx);
        goto after_2;
    // 0x8026DC50: nop

    after_2:
    // 0x8026DC54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026DC58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026DC5C: jr          $ra
    // 0x8026DC60: nop

    return;
    // 0x8026DC60: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026DC64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026DC64: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8026DC68: addiu       $v0, $v0, 0x3B20
    ctx->r2 = ADD32(ctx->r2, 0X3B20);
    // 0x8026DC6C: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x8026DC70: nop

    // 0x8026DC74: lh          $t7, 0xE8($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XE8);
    // 0x8026DC78: nop

    // 0x8026DC7C: sh          $t7, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r15;
    // 0x8026DC80: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x8026DC84: nop

    // 0x8026DC88: lh          $t9, 0xEA($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XEA);
    // 0x8026DC8C: jr          $ra
    // 0x8026DC90: sh          $t9, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r25;
    return;
    // 0x8026DC90: sh          $t9, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r25;
;}
RECOMP_FUNC void ovl_8024B800_func_8026DC94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026DC94: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x8026DC98: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8026DC9C: lhu         $t7, 0x8($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X8);
    // 0x8026DCA0: nop

    // 0x8026DCA4: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x8026DCA8: beq         $t8, $zero, L_8026DCD8
    if (ctx->r24 == 0) {
        // 0x8026DCAC: nop
    
            goto L_8026DCD8;
    }
    // 0x8026DCAC: nop

    // 0x8026DCB0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8026DCB4: lwc1        $f6, 0x7F0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X7F0);
    // 0x8026DCB8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8026DCBC: nop

    // 0x8026DCC0: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x8026DCC4: nop

    // 0x8026DCC8: bc1f        L_8026DD00
    if (!c1cs) {
        // 0x8026DCCC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8026DD00;
    }
    // 0x8026DCCC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8026DCD0: jr          $ra
    // 0x8026DCD4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8026DCD4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8026DCD8:
    // 0x8026DCD8: lwc1        $f8, 0x7F0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X7F0);
    // 0x8026DCDC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8026DCE0: nop

    // 0x8026DCE4: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x8026DCE8: nop

    // 0x8026DCEC: bc1f        L_8026DD00
    if (!c1cs) {
        // 0x8026DCF0: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8026DD00;
    }
    // 0x8026DCF0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8026DCF4: jr          $ra
    // 0x8026DCF8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8026DCF8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8026DCFC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8026DD00:
    // 0x8026DD00: jr          $ra
    // 0x8026DD04: nop

    return;
    // 0x8026DD04: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026DD08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026DD08: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8026DD0C: addiu       $v0, $v0, 0x3B20
    ctx->r2 = ADD32(ctx->r2, 0X3B20);
    // 0x8026DD10: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x8026DD14: nop

    // 0x8026DD18: lh          $t7, 0xE8($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XE8);
    // 0x8026DD1C: nop

    // 0x8026DD20: sh          $t7, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r15;
    // 0x8026DD24: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x8026DD28: nop

    // 0x8026DD2C: lh          $t9, 0xEA($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XEA);
    // 0x8026DD30: nop

    // 0x8026DD34: sh          $t9, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r25;
    // 0x8026DD38: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x8026DD3C: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8026DD40: lhu         $t1, 0xD2($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0XD2);
    // 0x8026DD44: nop

    // 0x8026DD48: andi        $t2, $t1, 0x4
    ctx->r10 = ctx->r9 & 0X4;
    // 0x8026DD4C: beq         $t2, $zero, L_8026DD5C
    if (ctx->r10 == 0) {
        // 0x8026DD50: nop
    
            goto L_8026DD5C;
    }
    // 0x8026DD50: nop

    // 0x8026DD54: b           L_8026DD5C
    // 0x8026DD58: addiu       $v0, $zero, -0xA
    ctx->r2 = ADD32(0, -0XA);
        goto L_8026DD5C;
    // 0x8026DD58: addiu       $v0, $zero, -0xA
    ctx->r2 = ADD32(0, -0XA);
L_8026DD5C:
    // 0x8026DD5C: lh          $t3, 0x30($a0)
    ctx->r11 = MEM_H(ctx->r4, 0X30);
    // 0x8026DD60: nop

    // 0x8026DD64: addu        $t4, $t3, $v0
    ctx->r12 = ADD32(ctx->r11, ctx->r2);
    // 0x8026DD68: jr          $ra
    // 0x8026DD6C: sh          $t4, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r12;
    return;
    // 0x8026DD6C: sh          $t4, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r12;
;}
RECOMP_FUNC void ovl_8024B800_func_8026DD70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026DD70: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x8026DD74: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x8026DD78: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8026DD7C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8026DD80: addiu       $t6, $t6, -0x2FF0
    ctx->r14 = ADD32(ctx->r14, -0X2FF0);
    // 0x8026DD84: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x8026DD88: addiu       $t0, $sp, 0x34
    ctx->r8 = ADD32(ctx->r29, 0X34);
    // 0x8026DD8C: sw          $at, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r1;
    // 0x8026DD90: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x8026DD94: lui         $t1, 0x8010
    ctx->r9 = S32(0X8010 << 16);
    // 0x8026DD98: sw          $t9, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r25;
    // 0x8026DD9C: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x8026DDA0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8026DDA4: sw          $at, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r1;
    // 0x8026DDA8: lw          $t9, 0xC($t6)
    ctx->r25 = MEM_W(ctx->r14, 0XC);
    // 0x8026DDAC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8026DDB0: sw          $t9, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->r25;
    // 0x8026DDB4: lw          $at, 0x10($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X10);
    // 0x8026DDB8: addiu       $t7, $sp, 0x70
    ctx->r15 = ADD32(ctx->r29, 0X70);
    // 0x8026DDBC: sw          $at, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->r1;
    // 0x8026DDC0: lw          $t9, 0x14($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X14);
    // 0x8026DDC4: nop

    // 0x8026DDC8: sw          $t9, 0x14($t0)
    MEM_W(0X14, ctx->r8) = ctx->r25;
    // 0x8026DDCC: lw          $at, 0x18($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X18);
    // 0x8026DDD0: nop

    // 0x8026DDD4: sw          $at, 0x18($t0)
    MEM_W(0X18, ctx->r8) = ctx->r1;
    // 0x8026DDD8: lw          $t9, 0x1C($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X1C);
    // 0x8026DDDC: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8026DDE0: sw          $t9, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->r25;
    // 0x8026DDE4: lbu         $t1, 0x5232($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X5232);
    // 0x8026DDE8: nop

    // 0x8026DDEC: bne         $t1, $at, L_8026E038
    if (ctx->r9 != ctx->r1) {
        // 0x8026DDF0: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_8026E038;
    }
    // 0x8026DDF0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8026DDF4: lh          $a0, 0x2E($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X2E);
    // 0x8026DDF8: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8026DDFC: sh          $a0, 0x5E($sp)
    MEM_H(0X5E, ctx->r29) = ctx->r4;
    // 0x8026DE00: lh          $a1, 0x30($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X30);
    // 0x8026DE04: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x8026DE08: sh          $a1, 0x5C($sp)
    MEM_H(0X5C, ctx->r29) = ctx->r5;
    // 0x8026DE0C: mtc1        $a0, $f4
    ctx->f4.u32l = ctx->r4;
    // 0x8026DE10: lh          $t2, 0xDA($v0)
    ctx->r10 = MEM_H(ctx->r2, 0XDA);
    // 0x8026DE14: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8026DE18: blez        $t2, L_8026DE24
    if (SIGNED(ctx->r10) <= 0) {
        // 0x8026DE1C: nop
    
            goto L_8026DE24;
    }
    // 0x8026DE1C: nop

    // 0x8026DE20: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_8026DE24:
    // 0x8026DE24: lh          $t3, 0xD8($v0)
    ctx->r11 = MEM_H(ctx->r2, 0XD8);
    // 0x8026DE28: nop

    // 0x8026DE2C: bgez        $t3, L_8026DE3C
    if (SIGNED(ctx->r11) >= 0) {
        // 0x8026DE30: sll         $t4, $v1, 3
        ctx->r12 = S32(ctx->r3 << 3);
            goto L_8026DE3C;
    }
    // 0x8026DE30: sll         $t4, $v1, 3
    ctx->r12 = S32(ctx->r3 << 3);
    // 0x8026DE34: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x8026DE38: sll         $t4, $v1, 3
    ctx->r12 = S32(ctx->r3 << 3);
L_8026DE3C:
    // 0x8026DE3C: addu        $v0, $t0, $t4
    ctx->r2 = ADD32(ctx->r8, ctx->r12);
    // 0x8026DE40: lh          $t5, 0x2($v0)
    ctx->r13 = MEM_H(ctx->r2, 0X2);
    // 0x8026DE44: lh          $t8, 0x0($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X0);
    // 0x8026DE48: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x8026DE4C: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x8026DE50: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8026DE54: mtc1        $a1, $f6
    ctx->f6.u32l = ctx->r5;
    // 0x8026DE58: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x8026DE5C: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8026DE60: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x8026DE64: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8026DE68: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x8026DE6C: jal         0x80272B1C
    // 0x8026DE70: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    ovl_8024B800_func_80272B1C(rdram, ctx);
        goto after_0;
    // 0x8026DE70: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    after_0:
    // 0x8026DE74: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x8026DE78: lh          $t6, 0x2E($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X2E);
    // 0x8026DE7C: lh          $t1, 0x4($v0)
    ctx->r9 = MEM_H(ctx->r2, 0X4);
    // 0x8026DE80: lh          $t2, 0x0($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X0);
    // 0x8026DE84: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x8026DE88: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x8026DE8C: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8026DE90: lh          $t9, 0x30($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X30);
    // 0x8026DE94: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x8026DE98: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8026DE9C: mtc1        $t9, $f18
    ctx->f18.u32l = ctx->r25;
    // 0x8026DEA0: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x8026DEA4: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x8026DEA8: addiu       $t3, $sp, 0x68
    ctx->r11 = ADD32(ctx->r29, 0X68);
    // 0x8026DEAC: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x8026DEB0: cvt.s.w     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8026DEB4: jal         0x80272B1C
    // 0x8026DEB8: cvt.s.w     $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    ctx->f14.fl = CVT_S_W(ctx->f18.u32l);
    ovl_8024B800_func_80272B1C(rdram, ctx);
        goto after_1;
    // 0x8026DEB8: cvt.s.w     $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    ctx->f14.fl = CVT_S_W(ctx->f18.u32l);
    after_1:
    // 0x8026DEBC: lh          $t4, 0x2E($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X2E);
    // 0x8026DEC0: lh          $t5, 0x30($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X30);
    // 0x8026DEC4: mtc1        $t4, $f18
    ctx->f18.u32l = ctx->r12;
    // 0x8026DEC8: mtc1        $t5, $f16
    ctx->f16.u32l = ctx->r13;
    // 0x8026DECC: cvt.s.w     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8026DED0: lw          $a2, 0x4C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X4C);
    // 0x8026DED4: lw          $a3, 0x44($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X44);
    // 0x8026DED8: cvt.s.w     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8026DEDC: addiu       $t8, $sp, 0x60
    ctx->r24 = ADD32(ctx->r29, 0X60);
    // 0x8026DEE0: jal         0x80272B1C
    // 0x8026DEE4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    ovl_8024B800_func_80272B1C(rdram, ctx);
        goto after_2;
    // 0x8026DEE4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_2:
    // 0x8026DEE8: lhu         $a0, 0x20($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X20);
    // 0x8026DEEC: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x8026DEF0: andi        $v1, $a0, 0x100
    ctx->r3 = ctx->r4 & 0X100;
    // 0x8026DEF4: bne         $v1, $zero, L_8026DFC8
    if (ctx->r3 != 0) {
        // 0x8026DEF8: lui         $t7, 0x8009
        ctx->r15 = S32(0X8009 << 16);
            goto L_8026DFC8;
    }
    // 0x8026DEF8: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x8026DEFC: lw          $t7, 0x3B20($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3B20);
    // 0x8026DF00: nop

    // 0x8026DF04: lh          $t6, 0xDA($t7)
    ctx->r14 = MEM_H(ctx->r15, 0XDA);
    // 0x8026DF08: nop

    // 0x8026DF0C: bgez        $t6, L_8026DF70
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8026DF10: nop
    
            goto L_8026DF70;
    }
    // 0x8026DF10: nop

    // 0x8026DF14: lh          $t9, 0x0($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X0);
    // 0x8026DF18: lwc1        $f4, 0x44($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X44);
    // 0x8026DF1C: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x8026DF20: lwc1        $f0, 0x60($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X60);
    // 0x8026DF24: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8026DF28: lwc1        $f6, 0x70($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X70);
    // 0x8026DF2C: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x8026DF30: nop

    // 0x8026DF34: bc1f        L_8026DFC8
    if (!c1cs) {
        // 0x8026DF38: nop
    
            goto L_8026DFC8;
    }
    // 0x8026DF38: nop

    // 0x8026DF3C: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x8026DF40: lwc1        $f8, 0x68($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X68);
    // 0x8026DF44: bc1f        L_8026DFC8
    if (!c1cs) {
        // 0x8026DF48: nop
    
            goto L_8026DFC8;
    }
    // 0x8026DF48: nop

    // 0x8026DF4C: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x8026DF50: nop

    // 0x8026DF54: bc1f        L_8026DFC8
    if (!c1cs) {
        // 0x8026DF58: nop
    
            goto L_8026DFC8;
    }
    // 0x8026DF58: nop

    // 0x8026DF5C: ori         $v1, $a0, 0x100
    ctx->r3 = ctx->r4 | 0X100;
    // 0x8026DF60: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    // 0x8026DF64: andi        $t2, $v1, 0x100
    ctx->r10 = ctx->r3 & 0X100;
    // 0x8026DF68: b           L_8026DFC8
    // 0x8026DF6C: or          $v1, $t2, $zero
    ctx->r3 = ctx->r10 | 0;
        goto L_8026DFC8;
    // 0x8026DF6C: or          $v1, $t2, $zero
    ctx->r3 = ctx->r10 | 0;
L_8026DF70:
    // 0x8026DF70: lh          $t3, 0x0($v0)
    ctx->r11 = MEM_H(ctx->r2, 0X0);
    // 0x8026DF74: lwc1        $f10, 0x44($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X44);
    // 0x8026DF78: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x8026DF7C: lwc1        $f0, 0x60($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X60);
    // 0x8026DF80: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8026DF84: lwc1        $f4, 0x70($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X70);
    // 0x8026DF88: c.lt.s      $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f10.fl < ctx->f18.fl;
    // 0x8026DF8C: nop

    // 0x8026DF90: bc1f        L_8026DFC8
    if (!c1cs) {
        // 0x8026DF94: nop
    
            goto L_8026DFC8;
    }
    // 0x8026DF94: nop

    // 0x8026DF98: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x8026DF9C: lwc1        $f6, 0x68($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X68);
    // 0x8026DFA0: bc1f        L_8026DFC8
    if (!c1cs) {
        // 0x8026DFA4: nop
    
            goto L_8026DFC8;
    }
    // 0x8026DFA4: nop

    // 0x8026DFA8: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x8026DFAC: nop

    // 0x8026DFB0: bc1f        L_8026DFC8
    if (!c1cs) {
        // 0x8026DFB4: nop
    
            goto L_8026DFC8;
    }
    // 0x8026DFB4: nop

    // 0x8026DFB8: ori         $v1, $a0, 0x100
    ctx->r3 = ctx->r4 | 0X100;
    // 0x8026DFBC: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    // 0x8026DFC0: andi        $t5, $v1, 0x100
    ctx->r13 = ctx->r3 & 0X100;
    // 0x8026DFC4: or          $v1, $t5, $zero
    ctx->r3 = ctx->r13 | 0;
L_8026DFC8:
    // 0x8026DFC8: beq         $v1, $zero, L_8026E038
    if (ctx->r3 == 0) {
        // 0x8026DFCC: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_8026E038;
    }
    // 0x8026DFCC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8026DFD0: lh          $t8, 0x6($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X6);
    // 0x8026DFD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8026DFD8: sh          $t8, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r24;
    // 0x8026DFDC: lh          $t7, 0x0($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X0);
    // 0x8026DFE0: jal         0x8026BD38
    // 0x8026DFE4: sh          $t7, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r15;
    ovl_8024B800_func_8026BD38(rdram, ctx);
        goto after_3;
    // 0x8026DFE4: sh          $t7, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r15;
    after_3:
    // 0x8026DFE8: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x8026DFEC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8026DFF0: lwc1        $f8, 0xB4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XB4);
    // 0x8026DFF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8026DFF8: c.lt.s      $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f8.fl < ctx->f16.fl;
    // 0x8026DFFC: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8026E000: bc1f        L_8026E038
    if (!c1cs) {
        // 0x8026E004: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_8026E038;
    }
    // 0x8026E004: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8026E008: lhu         $t6, 0x20($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X20);
    // 0x8026E00C: addiu       $a1, $a1, -0x3440
    ctx->r5 = ADD32(ctx->r5, -0X3440);
    // 0x8026E010: andi        $t9, $t6, 0xFEFF
    ctx->r25 = ctx->r14 & 0XFEFF;
    // 0x8026E014: jal         0x8026F2EC
    // 0x8026E018: sh          $t9, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r25;
    ovl_8024B800_func_8026F2EC(rdram, ctx);
        goto after_4;
    // 0x8026E018: sh          $t9, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r25;
    after_4:
    // 0x8026E01C: lh          $t1, 0x5E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X5E);
    // 0x8026E020: nop

    // 0x8026E024: sh          $t1, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r9;
    // 0x8026E028: lh          $t2, 0x5C($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X5C);
    // 0x8026E02C: nop

    // 0x8026E030: sh          $t2, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r10;
    // 0x8026E034: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8026E038:
    // 0x8026E038: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8026E03C: jr          $ra
    // 0x8026E040: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x8026E040: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void ovl_8024B800_func_8026DD8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026DD8C: sw          $at, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r1;
    // 0x8026DD90: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x8026DD94: lui         $t1, 0x8010
    ctx->r9 = S32(0X8010 << 16);
    // 0x8026DD98: sw          $t9, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r25;
    // 0x8026DD9C: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x8026DDA0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8026DDA4: sw          $at, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r1;
    // 0x8026DDA8: lw          $t9, 0xC($t6)
    ctx->r25 = MEM_W(ctx->r14, 0XC);
    // 0x8026DDAC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8026DDB0: sw          $t9, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->r25;
    // 0x8026DDB4: lw          $at, 0x10($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X10);
    // 0x8026DDB8: addiu       $t7, $sp, 0x70
    ctx->r15 = ADD32(ctx->r29, 0X70);
    // 0x8026DDBC: sw          $at, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->r1;
    // 0x8026DDC0: lw          $t9, 0x14($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X14);
    // 0x8026DDC4: nop

    // 0x8026DDC8: sw          $t9, 0x14($t0)
    MEM_W(0X14, ctx->r8) = ctx->r25;
    // 0x8026DDCC: lw          $at, 0x18($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X18);
    // 0x8026DDD0: nop

    // 0x8026DDD4: sw          $at, 0x18($t0)
    MEM_W(0X18, ctx->r8) = ctx->r1;
    // 0x8026DDD8: lw          $t9, 0x1C($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X1C);
    // 0x8026DDDC: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8026DDE0: sw          $t9, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->r25;
    // 0x8026DDE4: lbu         $t1, 0x5232($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X5232);
    // 0x8026DDE8: nop

    // 0x8026DDEC: bne         $t1, $at, L_8026E038
    if (ctx->r9 != ctx->r1) {
        // 0x8026DDF0: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_8026E038;
    }
    // 0x8026DDF0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8026DDF4: lh          $a0, 0x2E($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X2E);
    // 0x8026DDF8: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8026DDFC: sh          $a0, 0x5E($sp)
    MEM_H(0X5E, ctx->r29) = ctx->r4;
    // 0x8026DE00: lh          $a1, 0x30($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X30);
    // 0x8026DE04: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x8026DE08: sh          $a1, 0x5C($sp)
    MEM_H(0X5C, ctx->r29) = ctx->r5;
    // 0x8026DE0C: mtc1        $a0, $f4
    ctx->f4.u32l = ctx->r4;
    // 0x8026DE10: lh          $t2, 0xDA($v0)
    ctx->r10 = MEM_H(ctx->r2, 0XDA);
    // 0x8026DE14: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8026DE18: blez        $t2, L_8026DE24
    if (SIGNED(ctx->r10) <= 0) {
        // 0x8026DE1C: nop
    
            goto L_8026DE24;
    }
    // 0x8026DE1C: nop

    // 0x8026DE20: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_8026DE24:
    // 0x8026DE24: lh          $t3, 0xD8($v0)
    ctx->r11 = MEM_H(ctx->r2, 0XD8);
    // 0x8026DE28: nop

    // 0x8026DE2C: bgez        $t3, L_8026DE3C
    if (SIGNED(ctx->r11) >= 0) {
        // 0x8026DE30: sll         $t4, $v1, 3
        ctx->r12 = S32(ctx->r3 << 3);
            goto L_8026DE3C;
    }
    // 0x8026DE30: sll         $t4, $v1, 3
    ctx->r12 = S32(ctx->r3 << 3);
    // 0x8026DE34: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x8026DE38: sll         $t4, $v1, 3
    ctx->r12 = S32(ctx->r3 << 3);
L_8026DE3C:
    // 0x8026DE3C: addu        $v0, $t0, $t4
    ctx->r2 = ADD32(ctx->r8, ctx->r12);
    // 0x8026DE40: lh          $t5, 0x2($v0)
    ctx->r13 = MEM_H(ctx->r2, 0X2);
    // 0x8026DE44: lh          $t8, 0x0($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X0);
    // 0x8026DE48: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x8026DE4C: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x8026DE50: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8026DE54: mtc1        $a1, $f6
    ctx->f6.u32l = ctx->r5;
    // 0x8026DE58: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x8026DE5C: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8026DE60: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x8026DE64: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8026DE68: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x8026DE6C: jal         0x80272B1C
    // 0x8026DE70: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    ovl_8024B800_func_80272B1C(rdram, ctx);
        goto after_0;
    // 0x8026DE70: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    after_0:
    // 0x8026DE74: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x8026DE78: lh          $t6, 0x2E($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X2E);
    // 0x8026DE7C: lh          $t1, 0x4($v0)
    ctx->r9 = MEM_H(ctx->r2, 0X4);
    // 0x8026DE80: lh          $t2, 0x0($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X0);
    // 0x8026DE84: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x8026DE88: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x8026DE8C: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8026DE90: lh          $t9, 0x30($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X30);
    // 0x8026DE94: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x8026DE98: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8026DE9C: mtc1        $t9, $f18
    ctx->f18.u32l = ctx->r25;
    // 0x8026DEA0: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x8026DEA4: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x8026DEA8: addiu       $t3, $sp, 0x68
    ctx->r11 = ADD32(ctx->r29, 0X68);
    // 0x8026DEAC: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x8026DEB0: cvt.s.w     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8026DEB4: jal         0x80272B1C
    // 0x8026DEB8: cvt.s.w     $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    ctx->f14.fl = CVT_S_W(ctx->f18.u32l);
    ovl_8024B800_func_80272B1C(rdram, ctx);
        goto after_1;
    // 0x8026DEB8: cvt.s.w     $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    ctx->f14.fl = CVT_S_W(ctx->f18.u32l);
    after_1:
    // 0x8026DEBC: lh          $t4, 0x2E($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X2E);
    // 0x8026DEC0: lh          $t5, 0x30($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X30);
    // 0x8026DEC4: mtc1        $t4, $f18
    ctx->f18.u32l = ctx->r12;
    // 0x8026DEC8: mtc1        $t5, $f16
    ctx->f16.u32l = ctx->r13;
    // 0x8026DECC: cvt.s.w     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8026DED0: lw          $a2, 0x4C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X4C);
    // 0x8026DED4: lw          $a3, 0x44($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X44);
    // 0x8026DED8: cvt.s.w     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8026DEDC: addiu       $t8, $sp, 0x60
    ctx->r24 = ADD32(ctx->r29, 0X60);
    // 0x8026DEE0: jal         0x80272B1C
    // 0x8026DEE4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    ovl_8024B800_func_80272B1C(rdram, ctx);
        goto after_2;
    // 0x8026DEE4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_2:
    // 0x8026DEE8: lhu         $a0, 0x20($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X20);
    // 0x8026DEEC: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x8026DEF0: andi        $v1, $a0, 0x100
    ctx->r3 = ctx->r4 & 0X100;
    // 0x8026DEF4: bne         $v1, $zero, L_8026DFC8
    if (ctx->r3 != 0) {
        // 0x8026DEF8: lui         $t7, 0x8009
        ctx->r15 = S32(0X8009 << 16);
            goto L_8026DFC8;
    }
    // 0x8026DEF8: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x8026DEFC: lw          $t7, 0x3B20($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3B20);
    // 0x8026DF00: nop

    // 0x8026DF04: lh          $t6, 0xDA($t7)
    ctx->r14 = MEM_H(ctx->r15, 0XDA);
    // 0x8026DF08: nop

    // 0x8026DF0C: bgez        $t6, L_8026DF70
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8026DF10: nop
    
            goto L_8026DF70;
    }
    // 0x8026DF10: nop

    // 0x8026DF14: lh          $t9, 0x0($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X0);
    // 0x8026DF18: lwc1        $f4, 0x44($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X44);
    // 0x8026DF1C: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x8026DF20: lwc1        $f0, 0x60($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X60);
    // 0x8026DF24: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8026DF28: lwc1        $f6, 0x70($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X70);
    // 0x8026DF2C: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x8026DF30: nop

    // 0x8026DF34: bc1f        L_8026DFC8
    if (!c1cs) {
        // 0x8026DF38: nop
    
            goto L_8026DFC8;
    }
    // 0x8026DF38: nop

    // 0x8026DF3C: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x8026DF40: lwc1        $f8, 0x68($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X68);
    // 0x8026DF44: bc1f        L_8026DFC8
    if (!c1cs) {
        // 0x8026DF48: nop
    
            goto L_8026DFC8;
    }
    // 0x8026DF48: nop

    // 0x8026DF4C: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x8026DF50: nop

    // 0x8026DF54: bc1f        L_8026DFC8
    if (!c1cs) {
        // 0x8026DF58: nop
    
            goto L_8026DFC8;
    }
    // 0x8026DF58: nop

    // 0x8026DF5C: ori         $v1, $a0, 0x100
    ctx->r3 = ctx->r4 | 0X100;
    // 0x8026DF60: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    // 0x8026DF64: andi        $t2, $v1, 0x100
    ctx->r10 = ctx->r3 & 0X100;
    // 0x8026DF68: b           L_8026DFC8
    // 0x8026DF6C: or          $v1, $t2, $zero
    ctx->r3 = ctx->r10 | 0;
        goto L_8026DFC8;
    // 0x8026DF6C: or          $v1, $t2, $zero
    ctx->r3 = ctx->r10 | 0;
L_8026DF70:
    // 0x8026DF70: lh          $t3, 0x0($v0)
    ctx->r11 = MEM_H(ctx->r2, 0X0);
    // 0x8026DF74: lwc1        $f10, 0x44($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X44);
    // 0x8026DF78: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x8026DF7C: lwc1        $f0, 0x60($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X60);
    // 0x8026DF80: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8026DF84: lwc1        $f4, 0x70($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X70);
    // 0x8026DF88: c.lt.s      $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f10.fl < ctx->f18.fl;
    // 0x8026DF8C: nop

    // 0x8026DF90: bc1f        L_8026DFC8
    if (!c1cs) {
        // 0x8026DF94: nop
    
            goto L_8026DFC8;
    }
    // 0x8026DF94: nop

    // 0x8026DF98: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x8026DF9C: lwc1        $f6, 0x68($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X68);
    // 0x8026DFA0: bc1f        L_8026DFC8
    if (!c1cs) {
        // 0x8026DFA4: nop
    
            goto L_8026DFC8;
    }
    // 0x8026DFA4: nop

    // 0x8026DFA8: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x8026DFAC: nop

    // 0x8026DFB0: bc1f        L_8026DFC8
    if (!c1cs) {
        // 0x8026DFB4: nop
    
            goto L_8026DFC8;
    }
    // 0x8026DFB4: nop

    // 0x8026DFB8: ori         $v1, $a0, 0x100
    ctx->r3 = ctx->r4 | 0X100;
    // 0x8026DFBC: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    // 0x8026DFC0: andi        $t5, $v1, 0x100
    ctx->r13 = ctx->r3 & 0X100;
    // 0x8026DFC4: or          $v1, $t5, $zero
    ctx->r3 = ctx->r13 | 0;
L_8026DFC8:
    // 0x8026DFC8: beq         $v1, $zero, L_8026E038
    if (ctx->r3 == 0) {
        // 0x8026DFCC: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_8026E038;
    }
    // 0x8026DFCC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8026DFD0: lh          $t8, 0x6($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X6);
    // 0x8026DFD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8026DFD8: sh          $t8, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r24;
    // 0x8026DFDC: lh          $t7, 0x0($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X0);
    // 0x8026DFE0: jal         0x8026BD38
    // 0x8026DFE4: sh          $t7, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r15;
    ovl_8024B800_func_8026BD38(rdram, ctx);
        goto after_3;
    // 0x8026DFE4: sh          $t7, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r15;
    after_3:
    // 0x8026DFE8: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x8026DFEC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8026DFF0: lwc1        $f8, 0xB4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XB4);
    // 0x8026DFF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8026DFF8: c.lt.s      $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f8.fl < ctx->f16.fl;
    // 0x8026DFFC: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8026E000: bc1f        L_8026E038
    if (!c1cs) {
        // 0x8026E004: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_8026E038;
    }
    // 0x8026E004: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8026E008: lhu         $t6, 0x20($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X20);
    // 0x8026E00C: addiu       $a1, $a1, -0x3440
    ctx->r5 = ADD32(ctx->r5, -0X3440);
    // 0x8026E010: andi        $t9, $t6, 0xFEFF
    ctx->r25 = ctx->r14 & 0XFEFF;
    // 0x8026E014: jal         0x8026F2EC
    // 0x8026E018: sh          $t9, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r25;
    ovl_8024B800_func_8026F2EC(rdram, ctx);
        goto after_4;
    // 0x8026E018: sh          $t9, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r25;
    after_4:
    // 0x8026E01C: lh          $t1, 0x5E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X5E);
    // 0x8026E020: nop

    // 0x8026E024: sh          $t1, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r9;
    // 0x8026E028: lh          $t2, 0x5C($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X5C);
    // 0x8026E02C: nop

    // 0x8026E030: sh          $t2, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r10;
    // 0x8026E034: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8026E038:
    // 0x8026E038: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8026E03C: jr          $ra
    // 0x8026E040: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x8026E040: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void ovl_8024B800_func_8026DE24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026DE24: lh          $t3, 0xD8($v0)
    ctx->r11 = MEM_H(ctx->r2, 0XD8);
    // 0x8026DE28: nop

    // 0x8026DE2C: bgez        $t3, L_8026DE3C
    if (SIGNED(ctx->r11) >= 0) {
        // 0x8026DE30: sll         $t4, $v1, 3
        ctx->r12 = S32(ctx->r3 << 3);
            goto L_8026DE3C;
    }
    // 0x8026DE30: sll         $t4, $v1, 3
    ctx->r12 = S32(ctx->r3 << 3);
    // 0x8026DE34: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x8026DE38: sll         $t4, $v1, 3
    ctx->r12 = S32(ctx->r3 << 3);
L_8026DE3C:
    // 0x8026DE3C: addu        $v0, $t0, $t4
    ctx->r2 = ADD32(ctx->r8, ctx->r12);
    // 0x8026DE40: lh          $t5, 0x2($v0)
    ctx->r13 = MEM_H(ctx->r2, 0X2);
    // 0x8026DE44: lh          $t8, 0x0($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X0);
    // 0x8026DE48: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x8026DE4C: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x8026DE50: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8026DE54: mtc1        $a1, $f6
    ctx->f6.u32l = ctx->r5;
    // 0x8026DE58: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x8026DE5C: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8026DE60: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x8026DE64: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8026DE68: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x8026DE6C: jal         0x80272B1C
    // 0x8026DE70: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    ovl_8024B800_func_80272B1C(rdram, ctx);
        goto after_0;
    // 0x8026DE70: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    after_0:
    // 0x8026DE74: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x8026DE78: lh          $t6, 0x2E($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X2E);
    // 0x8026DE7C: lh          $t1, 0x4($v0)
    ctx->r9 = MEM_H(ctx->r2, 0X4);
    // 0x8026DE80: lh          $t2, 0x0($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X0);
    // 0x8026DE84: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x8026DE88: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x8026DE8C: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8026DE90: lh          $t9, 0x30($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X30);
    // 0x8026DE94: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x8026DE98: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8026DE9C: mtc1        $t9, $f18
    ctx->f18.u32l = ctx->r25;
    // 0x8026DEA0: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x8026DEA4: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x8026DEA8: addiu       $t3, $sp, 0x68
    ctx->r11 = ADD32(ctx->r29, 0X68);
    // 0x8026DEAC: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x8026DEB0: cvt.s.w     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8026DEB4: jal         0x80272B1C
    // 0x8026DEB8: cvt.s.w     $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    ctx->f14.fl = CVT_S_W(ctx->f18.u32l);
    ovl_8024B800_func_80272B1C(rdram, ctx);
        goto after_1;
    // 0x8026DEB8: cvt.s.w     $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    ctx->f14.fl = CVT_S_W(ctx->f18.u32l);
    after_1:
    // 0x8026DEBC: lh          $t4, 0x2E($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X2E);
    // 0x8026DEC0: lh          $t5, 0x30($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X30);
    // 0x8026DEC4: mtc1        $t4, $f18
    ctx->f18.u32l = ctx->r12;
    // 0x8026DEC8: mtc1        $t5, $f16
    ctx->f16.u32l = ctx->r13;
    // 0x8026DECC: cvt.s.w     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8026DED0: lw          $a2, 0x4C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X4C);
    // 0x8026DED4: lw          $a3, 0x44($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X44);
    // 0x8026DED8: cvt.s.w     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8026DEDC: addiu       $t8, $sp, 0x60
    ctx->r24 = ADD32(ctx->r29, 0X60);
    // 0x8026DEE0: jal         0x80272B1C
    // 0x8026DEE4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    ovl_8024B800_func_80272B1C(rdram, ctx);
        goto after_2;
    // 0x8026DEE4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_2:
    // 0x8026DEE8: lhu         $a0, 0x20($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X20);
    // 0x8026DEEC: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x8026DEF0: andi        $v1, $a0, 0x100
    ctx->r3 = ctx->r4 & 0X100;
    // 0x8026DEF4: bne         $v1, $zero, L_8026DFC8
    if (ctx->r3 != 0) {
        // 0x8026DEF8: lui         $t7, 0x8009
        ctx->r15 = S32(0X8009 << 16);
            goto L_8026DFC8;
    }
    // 0x8026DEF8: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x8026DEFC: lw          $t7, 0x3B20($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3B20);
    // 0x8026DF00: nop

    // 0x8026DF04: lh          $t6, 0xDA($t7)
    ctx->r14 = MEM_H(ctx->r15, 0XDA);
    // 0x8026DF08: nop

    // 0x8026DF0C: bgez        $t6, L_8026DF70
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8026DF10: nop
    
            goto L_8026DF70;
    }
    // 0x8026DF10: nop

    // 0x8026DF14: lh          $t9, 0x0($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X0);
    // 0x8026DF18: lwc1        $f4, 0x44($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X44);
    // 0x8026DF1C: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x8026DF20: lwc1        $f0, 0x60($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X60);
    // 0x8026DF24: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8026DF28: lwc1        $f6, 0x70($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X70);
    // 0x8026DF2C: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x8026DF30: nop

    // 0x8026DF34: bc1f        L_8026DFC8
    if (!c1cs) {
        // 0x8026DF38: nop
    
            goto L_8026DFC8;
    }
    // 0x8026DF38: nop

    // 0x8026DF3C: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x8026DF40: lwc1        $f8, 0x68($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X68);
    // 0x8026DF44: bc1f        L_8026DFC8
    if (!c1cs) {
        // 0x8026DF48: nop
    
            goto L_8026DFC8;
    }
    // 0x8026DF48: nop

    // 0x8026DF4C: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x8026DF50: nop

    // 0x8026DF54: bc1f        L_8026DFC8
    if (!c1cs) {
        // 0x8026DF58: nop
    
            goto L_8026DFC8;
    }
    // 0x8026DF58: nop

    // 0x8026DF5C: ori         $v1, $a0, 0x100
    ctx->r3 = ctx->r4 | 0X100;
    // 0x8026DF60: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    // 0x8026DF64: andi        $t2, $v1, 0x100
    ctx->r10 = ctx->r3 & 0X100;
    // 0x8026DF68: b           L_8026DFC8
    // 0x8026DF6C: or          $v1, $t2, $zero
    ctx->r3 = ctx->r10 | 0;
        goto L_8026DFC8;
    // 0x8026DF6C: or          $v1, $t2, $zero
    ctx->r3 = ctx->r10 | 0;
L_8026DF70:
    // 0x8026DF70: lh          $t3, 0x0($v0)
    ctx->r11 = MEM_H(ctx->r2, 0X0);
    // 0x8026DF74: lwc1        $f10, 0x44($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X44);
    // 0x8026DF78: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x8026DF7C: lwc1        $f0, 0x60($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X60);
    // 0x8026DF80: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8026DF84: lwc1        $f4, 0x70($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X70);
    // 0x8026DF88: c.lt.s      $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f10.fl < ctx->f18.fl;
    // 0x8026DF8C: nop

    // 0x8026DF90: bc1f        L_8026DFC8
    if (!c1cs) {
        // 0x8026DF94: nop
    
            goto L_8026DFC8;
    }
    // 0x8026DF94: nop

    // 0x8026DF98: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x8026DF9C: lwc1        $f6, 0x68($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X68);
    // 0x8026DFA0: bc1f        L_8026DFC8
    if (!c1cs) {
        // 0x8026DFA4: nop
    
            goto L_8026DFC8;
    }
    // 0x8026DFA4: nop

    // 0x8026DFA8: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x8026DFAC: nop

    // 0x8026DFB0: bc1f        L_8026DFC8
    if (!c1cs) {
        // 0x8026DFB4: nop
    
            goto L_8026DFC8;
    }
    // 0x8026DFB4: nop

    // 0x8026DFB8: ori         $v1, $a0, 0x100
    ctx->r3 = ctx->r4 | 0X100;
    // 0x8026DFBC: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    // 0x8026DFC0: andi        $t5, $v1, 0x100
    ctx->r13 = ctx->r3 & 0X100;
    // 0x8026DFC4: or          $v1, $t5, $zero
    ctx->r3 = ctx->r13 | 0;
L_8026DFC8:
    // 0x8026DFC8: beq         $v1, $zero, L_8026E038
    if (ctx->r3 == 0) {
        // 0x8026DFCC: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_8026E038;
    }
    // 0x8026DFCC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8026DFD0: lh          $t8, 0x6($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X6);
    // 0x8026DFD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8026DFD8: sh          $t8, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r24;
    // 0x8026DFDC: lh          $t7, 0x0($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X0);
    // 0x8026DFE0: jal         0x8026BD38
    // 0x8026DFE4: sh          $t7, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r15;
    ovl_8024B800_func_8026BD38(rdram, ctx);
        goto after_3;
    // 0x8026DFE4: sh          $t7, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r15;
    after_3:
    // 0x8026DFE8: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x8026DFEC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8026DFF0: lwc1        $f8, 0xB4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XB4);
    // 0x8026DFF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8026DFF8: c.lt.s      $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f8.fl < ctx->f16.fl;
    // 0x8026DFFC: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8026E000: bc1f        L_8026E038
    if (!c1cs) {
        // 0x8026E004: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_8026E038;
    }
    // 0x8026E004: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8026E008: lhu         $t6, 0x20($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X20);
    // 0x8026E00C: addiu       $a1, $a1, -0x3440
    ctx->r5 = ADD32(ctx->r5, -0X3440);
    // 0x8026E010: andi        $t9, $t6, 0xFEFF
    ctx->r25 = ctx->r14 & 0XFEFF;
    // 0x8026E014: jal         0x8026F2EC
    // 0x8026E018: sh          $t9, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r25;
    ovl_8024B800_func_8026F2EC(rdram, ctx);
        goto after_4;
    // 0x8026E018: sh          $t9, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r25;
    after_4:
    // 0x8026E01C: lh          $t1, 0x5E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X5E);
    // 0x8026E020: nop

    // 0x8026E024: sh          $t1, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r9;
    // 0x8026E028: lh          $t2, 0x5C($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X5C);
    // 0x8026E02C: nop

    // 0x8026E030: sh          $t2, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r10;
    // 0x8026E034: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8026E038:
    // 0x8026E038: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8026E03C: jr          $ra
    // 0x8026E040: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x8026E040: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void ovl_8024B800_func_8026DEB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026DEB8: cvt.s.w     $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    ctx->f14.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8026DEBC: lh          $t4, 0x2E($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X2E);
    // 0x8026DEC0: lh          $t5, 0x30($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X30);
    // 0x8026DEC4: mtc1        $t4, $f18
    ctx->f18.u32l = ctx->r12;
    // 0x8026DEC8: mtc1        $t5, $f16
    ctx->f16.u32l = ctx->r13;
    // 0x8026DECC: cvt.s.w     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8026DED0: lw          $a2, 0x4C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X4C);
    // 0x8026DED4: lw          $a3, 0x44($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X44);
    // 0x8026DED8: cvt.s.w     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8026DEDC: addiu       $t8, $sp, 0x60
    ctx->r24 = ADD32(ctx->r29, 0X60);
    // 0x8026DEE0: jal         0x80272B1C
    // 0x8026DEE4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    ovl_8024B800_func_80272B1C(rdram, ctx);
        goto after_0;
    // 0x8026DEE4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_0:
    // 0x8026DEE8: lhu         $a0, 0x20($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X20);
    // 0x8026DEEC: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x8026DEF0: andi        $v1, $a0, 0x100
    ctx->r3 = ctx->r4 & 0X100;
    // 0x8026DEF4: bne         $v1, $zero, L_8026DFC8
    if (ctx->r3 != 0) {
        // 0x8026DEF8: lui         $t7, 0x8009
        ctx->r15 = S32(0X8009 << 16);
            goto L_8026DFC8;
    }
    // 0x8026DEF8: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x8026DEFC: lw          $t7, 0x3B20($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3B20);
    // 0x8026DF00: nop

    // 0x8026DF04: lh          $t6, 0xDA($t7)
    ctx->r14 = MEM_H(ctx->r15, 0XDA);
    // 0x8026DF08: nop

    // 0x8026DF0C: bgez        $t6, L_8026DF70
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8026DF10: nop
    
            goto L_8026DF70;
    }
    // 0x8026DF10: nop

    // 0x8026DF14: lh          $t9, 0x0($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X0);
    // 0x8026DF18: lwc1        $f4, 0x44($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X44);
    // 0x8026DF1C: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x8026DF20: lwc1        $f0, 0x60($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X60);
    // 0x8026DF24: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8026DF28: lwc1        $f6, 0x70($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X70);
    // 0x8026DF2C: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x8026DF30: nop

    // 0x8026DF34: bc1f        L_8026DFC8
    if (!c1cs) {
        // 0x8026DF38: nop
    
            goto L_8026DFC8;
    }
    // 0x8026DF38: nop

    // 0x8026DF3C: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x8026DF40: lwc1        $f8, 0x68($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X68);
    // 0x8026DF44: bc1f        L_8026DFC8
    if (!c1cs) {
        // 0x8026DF48: nop
    
            goto L_8026DFC8;
    }
    // 0x8026DF48: nop

    // 0x8026DF4C: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x8026DF50: nop

    // 0x8026DF54: bc1f        L_8026DFC8
    if (!c1cs) {
        // 0x8026DF58: nop
    
            goto L_8026DFC8;
    }
    // 0x8026DF58: nop

    // 0x8026DF5C: ori         $v1, $a0, 0x100
    ctx->r3 = ctx->r4 | 0X100;
    // 0x8026DF60: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    // 0x8026DF64: andi        $t2, $v1, 0x100
    ctx->r10 = ctx->r3 & 0X100;
    // 0x8026DF68: b           L_8026DFC8
    // 0x8026DF6C: or          $v1, $t2, $zero
    ctx->r3 = ctx->r10 | 0;
        goto L_8026DFC8;
    // 0x8026DF6C: or          $v1, $t2, $zero
    ctx->r3 = ctx->r10 | 0;
L_8026DF70:
    // 0x8026DF70: lh          $t3, 0x0($v0)
    ctx->r11 = MEM_H(ctx->r2, 0X0);
    // 0x8026DF74: lwc1        $f10, 0x44($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X44);
    // 0x8026DF78: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x8026DF7C: lwc1        $f0, 0x60($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X60);
    // 0x8026DF80: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8026DF84: lwc1        $f4, 0x70($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X70);
    // 0x8026DF88: c.lt.s      $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f10.fl < ctx->f18.fl;
    // 0x8026DF8C: nop

    // 0x8026DF90: bc1f        L_8026DFC8
    if (!c1cs) {
        // 0x8026DF94: nop
    
            goto L_8026DFC8;
    }
    // 0x8026DF94: nop

    // 0x8026DF98: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x8026DF9C: lwc1        $f6, 0x68($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X68);
    // 0x8026DFA0: bc1f        L_8026DFC8
    if (!c1cs) {
        // 0x8026DFA4: nop
    
            goto L_8026DFC8;
    }
    // 0x8026DFA4: nop

    // 0x8026DFA8: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x8026DFAC: nop

    // 0x8026DFB0: bc1f        L_8026DFC8
    if (!c1cs) {
        // 0x8026DFB4: nop
    
            goto L_8026DFC8;
    }
    // 0x8026DFB4: nop

    // 0x8026DFB8: ori         $v1, $a0, 0x100
    ctx->r3 = ctx->r4 | 0X100;
    // 0x8026DFBC: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    // 0x8026DFC0: andi        $t5, $v1, 0x100
    ctx->r13 = ctx->r3 & 0X100;
    // 0x8026DFC4: or          $v1, $t5, $zero
    ctx->r3 = ctx->r13 | 0;
L_8026DFC8:
    // 0x8026DFC8: beq         $v1, $zero, L_8026E038
    if (ctx->r3 == 0) {
        // 0x8026DFCC: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_8026E038;
    }
    // 0x8026DFCC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8026DFD0: lh          $t8, 0x6($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X6);
    // 0x8026DFD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8026DFD8: sh          $t8, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r24;
    // 0x8026DFDC: lh          $t7, 0x0($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X0);
    // 0x8026DFE0: jal         0x8026BD38
    // 0x8026DFE4: sh          $t7, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r15;
    ovl_8024B800_func_8026BD38(rdram, ctx);
        goto after_1;
    // 0x8026DFE4: sh          $t7, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r15;
    after_1:
    // 0x8026DFE8: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x8026DFEC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8026DFF0: lwc1        $f8, 0xB4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XB4);
    // 0x8026DFF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8026DFF8: c.lt.s      $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f8.fl < ctx->f16.fl;
    // 0x8026DFFC: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8026E000: bc1f        L_8026E038
    if (!c1cs) {
        // 0x8026E004: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_8026E038;
    }
    // 0x8026E004: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8026E008: lhu         $t6, 0x20($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X20);
    // 0x8026E00C: addiu       $a1, $a1, -0x3440
    ctx->r5 = ADD32(ctx->r5, -0X3440);
    // 0x8026E010: andi        $t9, $t6, 0xFEFF
    ctx->r25 = ctx->r14 & 0XFEFF;
    // 0x8026E014: jal         0x8026F2EC
    // 0x8026E018: sh          $t9, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r25;
    ovl_8024B800_func_8026F2EC(rdram, ctx);
        goto after_2;
    // 0x8026E018: sh          $t9, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r25;
    after_2:
    // 0x8026E01C: lh          $t1, 0x5E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X5E);
    // 0x8026E020: nop

    // 0x8026E024: sh          $t1, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r9;
    // 0x8026E028: lh          $t2, 0x5C($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X5C);
    // 0x8026E02C: nop

    // 0x8026E030: sh          $t2, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r10;
    // 0x8026E034: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8026E038:
    // 0x8026E038: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8026E03C: jr          $ra
    // 0x8026E040: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x8026E040: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void ovl_8024B800_func_8026DF6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026DF6C: or          $v1, $t2, $zero
    ctx->r3 = ctx->r10 | 0;
    // 0x8026DF70: lh          $t3, 0x0($v0)
    ctx->r11 = MEM_H(ctx->r2, 0X0);
    // 0x8026DF74: lwc1        $f10, 0x44($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X44);
    // 0x8026DF78: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x8026DF7C: lwc1        $f0, 0x60($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X60);
    // 0x8026DF80: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8026DF84: lwc1        $f4, 0x70($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X70);
    // 0x8026DF88: c.lt.s      $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f10.fl < ctx->f18.fl;
    // 0x8026DF8C: nop

    // 0x8026DF90: bc1f        L_8026DFC8
    if (!c1cs) {
        // 0x8026DF94: nop
    
            goto L_8026DFC8;
    }
    // 0x8026DF94: nop

    // 0x8026DF98: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x8026DF9C: lwc1        $f6, 0x68($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X68);
    // 0x8026DFA0: bc1f        L_8026DFC8
    if (!c1cs) {
        // 0x8026DFA4: nop
    
            goto L_8026DFC8;
    }
    // 0x8026DFA4: nop

    // 0x8026DFA8: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x8026DFAC: nop

    // 0x8026DFB0: bc1f        L_8026DFC8
    if (!c1cs) {
        // 0x8026DFB4: nop
    
            goto L_8026DFC8;
    }
    // 0x8026DFB4: nop

    // 0x8026DFB8: ori         $v1, $a0, 0x100
    ctx->r3 = ctx->r4 | 0X100;
    // 0x8026DFBC: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    // 0x8026DFC0: andi        $t5, $v1, 0x100
    ctx->r13 = ctx->r3 & 0X100;
    // 0x8026DFC4: or          $v1, $t5, $zero
    ctx->r3 = ctx->r13 | 0;
L_8026DFC8:
    // 0x8026DFC8: beq         $v1, $zero, L_8026E038
    if (ctx->r3 == 0) {
        // 0x8026DFCC: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_8026E038;
    }
    // 0x8026DFCC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8026DFD0: lh          $t8, 0x6($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X6);
    // 0x8026DFD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8026DFD8: sh          $t8, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r24;
    // 0x8026DFDC: lh          $t7, 0x0($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X0);
    // 0x8026DFE0: jal         0x8026BD38
    // 0x8026DFE4: sh          $t7, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r15;
    ovl_8024B800_func_8026BD38(rdram, ctx);
        goto after_0;
    // 0x8026DFE4: sh          $t7, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r15;
    after_0:
    // 0x8026DFE8: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x8026DFEC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8026DFF0: lwc1        $f8, 0xB4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XB4);
    // 0x8026DFF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8026DFF8: c.lt.s      $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f8.fl < ctx->f16.fl;
    // 0x8026DFFC: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8026E000: bc1f        L_8026E038
    if (!c1cs) {
        // 0x8026E004: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_8026E038;
    }
    // 0x8026E004: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8026E008: lhu         $t6, 0x20($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X20);
    // 0x8026E00C: addiu       $a1, $a1, -0x3440
    ctx->r5 = ADD32(ctx->r5, -0X3440);
    // 0x8026E010: andi        $t9, $t6, 0xFEFF
    ctx->r25 = ctx->r14 & 0XFEFF;
    // 0x8026E014: jal         0x8026F2EC
    // 0x8026E018: sh          $t9, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r25;
    ovl_8024B800_func_8026F2EC(rdram, ctx);
        goto after_1;
    // 0x8026E018: sh          $t9, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r25;
    after_1:
    // 0x8026E01C: lh          $t1, 0x5E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X5E);
    // 0x8026E020: nop

    // 0x8026E024: sh          $t1, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r9;
    // 0x8026E028: lh          $t2, 0x5C($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X5C);
    // 0x8026E02C: nop

    // 0x8026E030: sh          $t2, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r10;
    // 0x8026E034: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8026E038:
    // 0x8026E038: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8026E03C: jr          $ra
    // 0x8026E040: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x8026E040: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void ovl_8024B800_func_8026E020(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026E020: nop

    // 0x8026E024: sh          $t1, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r9;
    // 0x8026E028: lh          $t2, 0x5C($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X5C);
    // 0x8026E02C: nop

    // 0x8026E030: sh          $t2, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r10;
    // 0x8026E034: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8026E038: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8026E03C: jr          $ra
    // 0x8026E040: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x8026E040: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void ovl_8024B800_func_8026E044(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026E044: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026E048: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026E04C: lhu         $t6, 0x14($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X14);
    // 0x8026E050: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8026E054: andi        $t7, $t6, 0x200
    ctx->r15 = ctx->r14 & 0X200;
    // 0x8026E058: beq         $t7, $zero, L_8026E0B8
    if (ctx->r15 == 0) {
        // 0x8026E05C: addiu       $v0, $v0, 0x3B20
        ctx->r2 = ADD32(ctx->r2, 0X3B20);
            goto L_8026E0B8;
    }
    // 0x8026E05C: addiu       $v0, $v0, 0x3B20
    ctx->r2 = ADD32(ctx->r2, 0X3B20);
    // 0x8026E060: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8026E064: addiu       $v0, $v0, 0x3B20
    ctx->r2 = ADD32(ctx->r2, 0X3B20);
    // 0x8026E068: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x8026E06C: addiu       $t2, $zero, -0x1D7
    ctx->r10 = ADD32(0, -0X1D7);
    // 0x8026E070: lhu         $t9, 0xD2($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0XD2);
    // 0x8026E074: addiu       $t1, $zero, 0x1D7
    ctx->r9 = ADD32(0, 0X1D7);
    // 0x8026E078: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x8026E07C: beq         $t0, $zero, L_8026E08C
    if (ctx->r8 == 0) {
        // 0x8026E080: addiu       $t6, $zero, -0x175
        ctx->r14 = ADD32(0, -0X175);
            goto L_8026E08C;
    }
    // 0x8026E080: addiu       $t6, $zero, -0x175
    ctx->r14 = ADD32(0, -0X175);
    // 0x8026E084: b           L_8026E090
    // 0x8026E088: sh          $t1, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r9;
        goto L_8026E090;
    // 0x8026E088: sh          $t1, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r9;
L_8026E08C:
    // 0x8026E08C: sh          $t2, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r10;
L_8026E090:
    // 0x8026E090: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x8026E094: addiu       $t5, $zero, 0x175
    ctx->r13 = ADD32(0, 0X175);
    // 0x8026E098: lh          $t4, 0xDA($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XDA);
    // 0x8026E09C: nop

    // 0x8026E0A0: blez        $t4, L_8026E0B0
    if (SIGNED(ctx->r12) <= 0) {
        // 0x8026E0A4: nop
    
            goto L_8026E0B0;
    }
    // 0x8026E0A4: nop

    // 0x8026E0A8: b           L_8026E104
    // 0x8026E0AC: sh          $t5, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r13;
        goto L_8026E104;
    // 0x8026E0AC: sh          $t5, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r13;
L_8026E0B0:
    // 0x8026E0B0: b           L_8026E104
    // 0x8026E0B4: sh          $t6, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r14;
        goto L_8026E104;
    // 0x8026E0B4: sh          $t6, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r14;
L_8026E0B8:
    // 0x8026E0B8: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x8026E0BC: addiu       $t1, $zero, -0x21B
    ctx->r9 = ADD32(0, -0X21B);
    // 0x8026E0C0: lhu         $t8, 0xD2($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0XD2);
    // 0x8026E0C4: addiu       $t0, $zero, 0x21B
    ctx->r8 = ADD32(0, 0X21B);
    // 0x8026E0C8: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x8026E0CC: beq         $t9, $zero, L_8026E0DC
    if (ctx->r25 == 0) {
        // 0x8026E0D0: addiu       $t5, $zero, -0x169
        ctx->r13 = ADD32(0, -0X169);
            goto L_8026E0DC;
    }
    // 0x8026E0D0: addiu       $t5, $zero, -0x169
    ctx->r13 = ADD32(0, -0X169);
    // 0x8026E0D4: b           L_8026E0E0
    // 0x8026E0D8: sh          $t0, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r8;
        goto L_8026E0E0;
    // 0x8026E0D8: sh          $t0, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r8;
L_8026E0DC:
    // 0x8026E0DC: sh          $t1, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r9;
L_8026E0E0:
    // 0x8026E0E0: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x8026E0E4: addiu       $t4, $zero, 0x169
    ctx->r12 = ADD32(0, 0X169);
    // 0x8026E0E8: lh          $t3, 0xDA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XDA);
    // 0x8026E0EC: nop

    // 0x8026E0F0: blez        $t3, L_8026E100
    if (SIGNED(ctx->r11) <= 0) {
        // 0x8026E0F4: nop
    
            goto L_8026E100;
    }
    // 0x8026E0F4: nop

    // 0x8026E0F8: b           L_8026E104
    // 0x8026E0FC: sh          $t4, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r12;
        goto L_8026E104;
    // 0x8026E0FC: sh          $t4, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r12;
L_8026E100:
    // 0x8026E100: sh          $t5, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r13;
L_8026E104:
    // 0x8026E104: jal         0x8026DD70
    // 0x8026E108: nop

    ovl_8024B800_func_8026DD70(rdram, ctx);
        goto after_0;
    // 0x8026E108: nop

    after_0:
    // 0x8026E10C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026E110: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026E114: jr          $ra
    // 0x8026E118: nop

    return;
    // 0x8026E118: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026E090(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026E090: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x8026E094: addiu       $t5, $zero, 0x175
    ctx->r13 = ADD32(0, 0X175);
    // 0x8026E098: lh          $t4, 0xDA($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XDA);
    // 0x8026E09C: nop

    // 0x8026E0A0: blez        $t4, L_8026E0B0
    if (SIGNED(ctx->r12) <= 0) {
        // 0x8026E0A4: nop
    
            goto L_8026E0B0;
    }
    // 0x8026E0A4: nop

    // 0x8026E0A8: b           L_8026E104
    // 0x8026E0AC: sh          $t5, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r13;
        goto L_8026E104;
    // 0x8026E0AC: sh          $t5, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r13;
L_8026E0B0:
    // 0x8026E0B0: b           L_8026E104
    // 0x8026E0B4: sh          $t6, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r14;
        goto L_8026E104;
    // 0x8026E0B4: sh          $t6, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r14;
    // 0x8026E0B8: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x8026E0BC: addiu       $t1, $zero, -0x21B
    ctx->r9 = ADD32(0, -0X21B);
    // 0x8026E0C0: lhu         $t8, 0xD2($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0XD2);
    // 0x8026E0C4: addiu       $t0, $zero, 0x21B
    ctx->r8 = ADD32(0, 0X21B);
    // 0x8026E0C8: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x8026E0CC: beq         $t9, $zero, L_8026E0DC
    if (ctx->r25 == 0) {
        // 0x8026E0D0: addiu       $t5, $zero, -0x169
        ctx->r13 = ADD32(0, -0X169);
            goto L_8026E0DC;
    }
    // 0x8026E0D0: addiu       $t5, $zero, -0x169
    ctx->r13 = ADD32(0, -0X169);
    // 0x8026E0D4: b           L_8026E0E0
    // 0x8026E0D8: sh          $t0, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r8;
        goto L_8026E0E0;
    // 0x8026E0D8: sh          $t0, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r8;
L_8026E0DC:
    // 0x8026E0DC: sh          $t1, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r9;
L_8026E0E0:
    // 0x8026E0E0: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x8026E0E4: addiu       $t4, $zero, 0x169
    ctx->r12 = ADD32(0, 0X169);
    // 0x8026E0E8: lh          $t3, 0xDA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XDA);
    // 0x8026E0EC: nop

    // 0x8026E0F0: blez        $t3, L_8026E100
    if (SIGNED(ctx->r11) <= 0) {
        // 0x8026E0F4: nop
    
            goto L_8026E100;
    }
    // 0x8026E0F4: nop

    // 0x8026E0F8: b           L_8026E104
    // 0x8026E0FC: sh          $t4, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r12;
        goto L_8026E104;
    // 0x8026E0FC: sh          $t4, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r12;
L_8026E100:
    // 0x8026E100: sh          $t5, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r13;
L_8026E104:
    // 0x8026E104: jal         0x8026DD70
    // 0x8026E108: nop

    ovl_8024B800_func_8026DD70(rdram, ctx);
        goto after_0;
    // 0x8026E108: nop

    after_0:
    // 0x8026E10C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026E110: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026E114: jr          $ra
    // 0x8026E118: nop

    return;
    // 0x8026E118: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026E0B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026E0B4: sh          $t6, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r14;
    // 0x8026E0B8: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x8026E0BC: addiu       $t1, $zero, -0x21B
    ctx->r9 = ADD32(0, -0X21B);
    // 0x8026E0C0: lhu         $t8, 0xD2($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0XD2);
    // 0x8026E0C4: addiu       $t0, $zero, 0x21B
    ctx->r8 = ADD32(0, 0X21B);
    // 0x8026E0C8: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x8026E0CC: beq         $t9, $zero, L_8026E0DC
    if (ctx->r25 == 0) {
        // 0x8026E0D0: addiu       $t5, $zero, -0x169
        ctx->r13 = ADD32(0, -0X169);
            goto L_8026E0DC;
    }
    // 0x8026E0D0: addiu       $t5, $zero, -0x169
    ctx->r13 = ADD32(0, -0X169);
    // 0x8026E0D4: b           L_8026E0E0
    // 0x8026E0D8: sh          $t0, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r8;
        goto L_8026E0E0;
    // 0x8026E0D8: sh          $t0, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r8;
L_8026E0DC:
    // 0x8026E0DC: sh          $t1, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r9;
L_8026E0E0:
    // 0x8026E0E0: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x8026E0E4: addiu       $t4, $zero, 0x169
    ctx->r12 = ADD32(0, 0X169);
    // 0x8026E0E8: lh          $t3, 0xDA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XDA);
    // 0x8026E0EC: nop

    // 0x8026E0F0: blez        $t3, L_8026E100
    if (SIGNED(ctx->r11) <= 0) {
        // 0x8026E0F4: nop
    
            goto L_8026E100;
    }
    // 0x8026E0F4: nop

    // 0x8026E0F8: b           L_8026E104
    // 0x8026E0FC: sh          $t4, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r12;
        goto L_8026E104;
    // 0x8026E0FC: sh          $t4, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r12;
L_8026E100:
    // 0x8026E100: sh          $t5, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r13;
L_8026E104:
    // 0x8026E104: jal         0x8026DD70
    // 0x8026E108: nop

    ovl_8024B800_func_8026DD70(rdram, ctx);
        goto after_0;
    // 0x8026E108: nop

    after_0:
    // 0x8026E10C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026E110: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026E114: jr          $ra
    // 0x8026E118: nop

    return;
    // 0x8026E118: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026E11C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026E11C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8026E120: addiu       $v0, $v0, 0x3B20
    ctx->r2 = ADD32(ctx->r2, 0X3B20);
    // 0x8026E124: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x8026E128: addiu       $t0, $zero, -0x1F3
    ctx->r8 = ADD32(0, -0X1F3);
    // 0x8026E12C: lhu         $t7, 0xD2($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0XD2);
    // 0x8026E130: addiu       $t9, $zero, 0x1F3
    ctx->r25 = ADD32(0, 0X1F3);
    // 0x8026E134: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x8026E138: beq         $t8, $zero, L_8026E148
    if (ctx->r24 == 0) {
        // 0x8026E13C: addiu       $t4, $zero, -0x50
        ctx->r12 = ADD32(0, -0X50);
            goto L_8026E148;
    }
    // 0x8026E13C: addiu       $t4, $zero, -0x50
    ctx->r12 = ADD32(0, -0X50);
    // 0x8026E140: b           L_8026E14C
    // 0x8026E144: sh          $t9, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r25;
        goto L_8026E14C;
    // 0x8026E144: sh          $t9, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r25;
L_8026E148:
    // 0x8026E148: sh          $t0, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r8;
L_8026E14C:
    // 0x8026E14C: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x8026E150: addiu       $t3, $zero, 0x50
    ctx->r11 = ADD32(0, 0X50);
    // 0x8026E154: lh          $t2, 0xDA($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XDA);
    // 0x8026E158: nop

    // 0x8026E15C: blez        $t2, L_8026E16C
    if (SIGNED(ctx->r10) <= 0) {
        // 0x8026E160: nop
    
            goto L_8026E16C;
    }
    // 0x8026E160: nop

    // 0x8026E164: jr          $ra
    // 0x8026E168: sh          $t3, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r11;
    return;
    // 0x8026E168: sh          $t3, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r11;
L_8026E16C:
    // 0x8026E16C: sh          $t4, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r12;
    // 0x8026E170: jr          $ra
    // 0x8026E174: nop

    return;
    // 0x8026E174: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026E160(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026E160: nop

    // 0x8026E164: jr          $ra
    // 0x8026E168: sh          $t3, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r11;
    return;
    // 0x8026E168: sh          $t3, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r11;
    // 0x8026E16C: sh          $t4, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r12;
    // 0x8026E170: jr          $ra
    // 0x8026E174: nop

    return;
    // 0x8026E174: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026E178(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026E178: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8026E17C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026E180: lw          $t6, 0xD8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD8);
    // 0x8026E184: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8026E188: lbu         $t7, 0x13($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X13);
    // 0x8026E18C: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x8026E190: andi        $t8, $t7, 0x40
    ctx->r24 = ctx->r15 & 0X40;
    // 0x8026E194: beq         $t8, $zero, L_8026E1B0
    if (ctx->r24 == 0) {
        // 0x8026E198: nop
    
            goto L_8026E1B0;
    }
    // 0x8026E198: nop

    // 0x8026E19C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8026E1A0: lwc1        $f5, -0x2A50($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X2A50);
    // 0x8026E1A4: lwc1        $f4, -0x2A4C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X2A4C);
    // 0x8026E1A8: b           L_8026E1C0
    // 0x8026E1AC: cvt.s.d     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f2.fl = CVT_S_D(ctx->f4.d);
        goto L_8026E1C0;
    // 0x8026E1AC: cvt.s.d     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f2.fl = CVT_S_D(ctx->f4.d);
L_8026E1B0:
    // 0x8026E1B0: lwc1        $f7, -0x2A48($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X2A48);
    // 0x8026E1B4: lwc1        $f6, -0x2A44($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X2A44);
    // 0x8026E1B8: nop

    // 0x8026E1BC: cvt.s.d     $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f2.fl = CVT_S_D(ctx->f6.d);
L_8026E1C0:
    // 0x8026E1C0: lw          $t9, 0x3B20($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X3B20);
    // 0x8026E1C4: nop

    // 0x8026E1C8: lw          $t0, 0xB4($t9)
    ctx->r8 = MEM_W(ctx->r25, 0XB4);
    // 0x8026E1CC: nop

    // 0x8026E1D0: lwc1        $f8, 0x8C0($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X8C0);
    // 0x8026E1D4: swc1        $f2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f2.u32l;
    // 0x8026E1D8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8026E1DC: jal         0x80081040
    // 0x8026E1E0: add.s       $f12, $f8, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f2.fl;
    func_80081040(rdram, ctx);
        goto after_0;
    // 0x8026E1E0: add.s       $f12, $f8, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f2.fl;
    after_0:
    // 0x8026E1E4: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8026E1E8: addiu       $v0, $v0, 0x3B20
    ctx->r2 = ADD32(ctx->r2, 0X3B20);
    // 0x8026E1EC: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x8026E1F0: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x8026E1F4: lh          $t2, 0xE8($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XE8);
    // 0x8026E1F8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8026E1FC: mtc1        $t2, $f18
    ctx->f18.u32l = ctx->r10;
    // 0x8026E200: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x8026E204: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8026E208: lwc1        $f2, 0x1C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8026E20C: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8026E210: add.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x8026E214: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8026E218: nop

    // 0x8026E21C: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x8026E220: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026E224: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026E228: nop

    // 0x8026E22C: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8026E230: mfc1        $t4, $f8
    ctx->r12 = (int32_t)ctx->f8.u32l;
    // 0x8026E234: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8026E238: sh          $t4, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r12;
    // 0x8026E23C: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x8026E240: nop

    // 0x8026E244: lw          $t6, 0xB4($t5)
    ctx->r14 = MEM_W(ctx->r13, 0XB4);
    // 0x8026E248: nop

    // 0x8026E24C: lwc1        $f10, 0x8C0($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X8C0);
    // 0x8026E250: jal         0x80080E80
    // 0x8026E254: add.s       $f12, $f10, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f2.fl;
    func_80080E80(rdram, ctx);
        goto after_1;
    // 0x8026E254: add.s       $f12, $f10, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f2.fl;
    after_1:
    // 0x8026E258: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x8026E25C: lw          $t7, 0x3B20($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3B20);
    // 0x8026E260: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x8026E264: lh          $t8, 0xEA($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XEA);
    // 0x8026E268: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8026E26C: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x8026E270: mul.s       $f16, $f0, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x8026E274: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8026E278: addiu       $t1, $zero, 0x21B
    ctx->r9 = ADD32(0, 0X21B);
    // 0x8026E27C: lh          $v0, 0x2E($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X2E);
    // 0x8026E280: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8026E284: addiu       $t2, $zero, -0x21B
    ctx->r10 = ADD32(0, -0X21B);
    // 0x8026E288: addiu       $t3, $zero, 0x173
    ctx->r11 = ADD32(0, 0X173);
    // 0x8026E28C: add.s       $f8, $f16, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x8026E290: addiu       $t4, $zero, -0x173
    ctx->r12 = ADD32(0, -0X173);
    // 0x8026E294: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8026E298: nop

    // 0x8026E29C: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x8026E2A0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026E2A4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026E2A8: slti        $at, $v0, 0x21C
    ctx->r1 = SIGNED(ctx->r2) < 0X21C ? 1 : 0;
    // 0x8026E2AC: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8026E2B0: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
    // 0x8026E2B4: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8026E2B8: bne         $at, $zero, L_8026E2CC
    if (ctx->r1 != 0) {
        // 0x8026E2BC: sh          $t0, 0x30($a0)
        MEM_H(0X30, ctx->r4) = ctx->r8;
            goto L_8026E2CC;
    }
    // 0x8026E2BC: sh          $t0, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r8;
    // 0x8026E2C0: sh          $t1, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r9;
    // 0x8026E2C4: lh          $v0, 0x2E($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X2E);
    // 0x8026E2C8: nop

L_8026E2CC:
    // 0x8026E2CC: slti        $at, $v0, -0x21B
    ctx->r1 = SIGNED(ctx->r2) < -0X21B ? 1 : 0;
    // 0x8026E2D0: beq         $at, $zero, L_8026E2DC
    if (ctx->r1 == 0) {
        // 0x8026E2D4: nop
    
            goto L_8026E2DC;
    }
    // 0x8026E2D4: nop

    // 0x8026E2D8: sh          $t2, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r10;
L_8026E2DC:
    // 0x8026E2DC: lh          $v0, 0x30($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X30);
    // 0x8026E2E0: nop

    // 0x8026E2E4: slti        $at, $v0, 0x174
    ctx->r1 = SIGNED(ctx->r2) < 0X174 ? 1 : 0;
    // 0x8026E2E8: bne         $at, $zero, L_8026E300
    if (ctx->r1 != 0) {
        // 0x8026E2EC: slti        $at, $v0, -0x173
        ctx->r1 = SIGNED(ctx->r2) < -0X173 ? 1 : 0;
            goto L_8026E300;
    }
    // 0x8026E2EC: slti        $at, $v0, -0x173
    ctx->r1 = SIGNED(ctx->r2) < -0X173 ? 1 : 0;
    // 0x8026E2F0: sh          $t3, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r11;
    // 0x8026E2F4: lh          $v0, 0x30($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X30);
    // 0x8026E2F8: nop

    // 0x8026E2FC: slti        $at, $v0, -0x173
    ctx->r1 = SIGNED(ctx->r2) < -0X173 ? 1 : 0;
L_8026E300:
    // 0x8026E300: beq         $at, $zero, L_8026E310
    if (ctx->r1 == 0) {
        // 0x8026E304: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8026E310;
    }
    // 0x8026E304: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026E308: sh          $t4, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r12;
    // 0x8026E30C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026E310:
    // 0x8026E310: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8026E314: jr          $ra
    // 0x8026E318: nop

    return;
    // 0x8026E318: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026E1D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026E1D8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8026E1DC: jal         0x80081040
    // 0x8026E1E0: add.s       $f12, $f8, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f2.fl;
    func_80081040(rdram, ctx);
        goto after_0;
    // 0x8026E1E0: add.s       $f12, $f8, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f2.fl;
    after_0:
    // 0x8026E1E4: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8026E1E8: addiu       $v0, $v0, 0x3B20
    ctx->r2 = ADD32(ctx->r2, 0X3B20);
    // 0x8026E1EC: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x8026E1F0: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x8026E1F4: lh          $t2, 0xE8($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XE8);
    // 0x8026E1F8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8026E1FC: mtc1        $t2, $f18
    ctx->f18.u32l = ctx->r10;
    // 0x8026E200: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x8026E204: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8026E208: lwc1        $f2, 0x1C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8026E20C: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8026E210: add.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x8026E214: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8026E218: nop

    // 0x8026E21C: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x8026E220: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026E224: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026E228: nop

    // 0x8026E22C: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8026E230: mfc1        $t4, $f8
    ctx->r12 = (int32_t)ctx->f8.u32l;
    // 0x8026E234: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8026E238: sh          $t4, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r12;
    // 0x8026E23C: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x8026E240: nop

    // 0x8026E244: lw          $t6, 0xB4($t5)
    ctx->r14 = MEM_W(ctx->r13, 0XB4);
    // 0x8026E248: nop

    // 0x8026E24C: lwc1        $f10, 0x8C0($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X8C0);
    // 0x8026E250: jal         0x80080E80
    // 0x8026E254: add.s       $f12, $f10, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f2.fl;
    func_80080E80(rdram, ctx);
        goto after_1;
    // 0x8026E254: add.s       $f12, $f10, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f2.fl;
    after_1:
    // 0x8026E258: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x8026E25C: lw          $t7, 0x3B20($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3B20);
    // 0x8026E260: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x8026E264: lh          $t8, 0xEA($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XEA);
    // 0x8026E268: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8026E26C: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x8026E270: mul.s       $f16, $f0, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x8026E274: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8026E278: addiu       $t1, $zero, 0x21B
    ctx->r9 = ADD32(0, 0X21B);
    // 0x8026E27C: lh          $v0, 0x2E($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X2E);
    // 0x8026E280: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8026E284: addiu       $t2, $zero, -0x21B
    ctx->r10 = ADD32(0, -0X21B);
    // 0x8026E288: addiu       $t3, $zero, 0x173
    ctx->r11 = ADD32(0, 0X173);
    // 0x8026E28C: add.s       $f8, $f16, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x8026E290: addiu       $t4, $zero, -0x173
    ctx->r12 = ADD32(0, -0X173);
    // 0x8026E294: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8026E298: nop

    // 0x8026E29C: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x8026E2A0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026E2A4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026E2A8: slti        $at, $v0, 0x21C
    ctx->r1 = SIGNED(ctx->r2) < 0X21C ? 1 : 0;
    // 0x8026E2AC: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8026E2B0: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
    // 0x8026E2B4: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8026E2B8: bne         $at, $zero, L_8026E2CC
    if (ctx->r1 != 0) {
        // 0x8026E2BC: sh          $t0, 0x30($a0)
        MEM_H(0X30, ctx->r4) = ctx->r8;
            goto L_8026E2CC;
    }
    // 0x8026E2BC: sh          $t0, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r8;
    // 0x8026E2C0: sh          $t1, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r9;
    // 0x8026E2C4: lh          $v0, 0x2E($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X2E);
    // 0x8026E2C8: nop

L_8026E2CC:
    // 0x8026E2CC: slti        $at, $v0, -0x21B
    ctx->r1 = SIGNED(ctx->r2) < -0X21B ? 1 : 0;
    // 0x8026E2D0: beq         $at, $zero, L_8026E2DC
    if (ctx->r1 == 0) {
        // 0x8026E2D4: nop
    
            goto L_8026E2DC;
    }
    // 0x8026E2D4: nop

    // 0x8026E2D8: sh          $t2, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r10;
L_8026E2DC:
    // 0x8026E2DC: lh          $v0, 0x30($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X30);
    // 0x8026E2E0: nop

    // 0x8026E2E4: slti        $at, $v0, 0x174
    ctx->r1 = SIGNED(ctx->r2) < 0X174 ? 1 : 0;
    // 0x8026E2E8: bne         $at, $zero, L_8026E300
    if (ctx->r1 != 0) {
        // 0x8026E2EC: slti        $at, $v0, -0x173
        ctx->r1 = SIGNED(ctx->r2) < -0X173 ? 1 : 0;
            goto L_8026E300;
    }
    // 0x8026E2EC: slti        $at, $v0, -0x173
    ctx->r1 = SIGNED(ctx->r2) < -0X173 ? 1 : 0;
    // 0x8026E2F0: sh          $t3, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r11;
    // 0x8026E2F4: lh          $v0, 0x30($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X30);
    // 0x8026E2F8: nop

    // 0x8026E2FC: slti        $at, $v0, -0x173
    ctx->r1 = SIGNED(ctx->r2) < -0X173 ? 1 : 0;
L_8026E300:
    // 0x8026E300: beq         $at, $zero, L_8026E310
    if (ctx->r1 == 0) {
        // 0x8026E304: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8026E310;
    }
    // 0x8026E304: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026E308: sh          $t4, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r12;
    // 0x8026E30C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026E310:
    // 0x8026E310: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8026E314: jr          $ra
    // 0x8026E318: nop

    return;
    // 0x8026E318: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026E31C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026E31C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8026E320: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026E324: lw          $a1, 0xC8($a0)
    ctx->r5 = MEM_W(ctx->r4, 0XC8);
    // 0x8026E328: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x8026E32C: lhu         $t6, 0x8($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X8);
    // 0x8026E330: lui         $t2, 0x8028
    ctx->r10 = S32(0X8028 << 16);
    // 0x8026E334: andi        $t7, $t6, 0x8
    ctx->r15 = ctx->r14 & 0X8;
    // 0x8026E338: beq         $t7, $zero, L_8026E350
    if (ctx->r15 == 0) {
        // 0x8026E33C: nop
    
            goto L_8026E350;
    }
    // 0x8026E33C: nop

    // 0x8026E340: lui         $at, 0xC316
    ctx->r1 = S32(0XC316 << 16);
    // 0x8026E344: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8026E348: b           L_8026E35C
    // 0x8026E34C: lhu         $t8, 0x92C($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0X92C);
        goto L_8026E35C;
    // 0x8026E34C: lhu         $t8, 0x92C($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0X92C);
L_8026E350:
    // 0x8026E350: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8026E354: nop

    // 0x8026E358: lhu         $t8, 0x92C($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0X92C);
L_8026E35C:
    // 0x8026E35C: lhu         $t9, 0x1A($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X1A);
    // 0x8026E360: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x8026E364: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
    // 0x8026E368: div         $zero, $v1, $at
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r1)));
    // 0x8026E36C: lui         $t1, 0x8028
    ctx->r9 = S32(0X8028 << 16);
    // 0x8026E370: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8026E374: mfhi        $t0
    ctx->r8 = hi;
    // 0x8026E378: sll         $v0, $t0, 1
    ctx->r2 = S32(ctx->r8 << 1);
    // 0x8026E37C: addu        $t1, $t1, $v0
    ctx->r9 = ADD32(ctx->r9, ctx->r2);
    // 0x8026E380: lhu         $t1, -0x314C($t1)
    ctx->r9 = MEM_HU(ctx->r9, -0X314C);
    // 0x8026E384: addu        $t2, $t2, $v0
    ctx->r10 = ADD32(ctx->r10, ctx->r2);
    // 0x8026E388: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x8026E38C: bgez        $t1, L_8026E3A0
    if (SIGNED(ctx->r9) >= 0) {
        // 0x8026E390: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_8026E3A0;
    }
    // 0x8026E390: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8026E394: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8026E398: nop

    // 0x8026E39C: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_8026E3A0:
    // 0x8026E3A0: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8026E3A4: lwc1        $f17, -0x2A40($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X2A40);
    // 0x8026E3A8: lwc1        $f16, -0x2A3C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X2A3C);
    // 0x8026E3AC: cvt.d.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f10.d = CVT_D_S(ctx->f6.fl);
    // 0x8026E3B0: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x8026E3B4: lhu         $t2, -0x311C($t2)
    ctx->r10 = MEM_HU(ctx->r10, -0X311C);
    // 0x8026E3B8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8026E3BC: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x8026E3C0: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    // 0x8026E3C4: bgez        $t2, L_8026E3D8
    if (SIGNED(ctx->r10) >= 0) {
        // 0x8026E3C8: cvt.s.w     $f8, $f4
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
            goto L_8026E3D8;
    }
    // 0x8026E3C8: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8026E3CC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8026E3D0: nop

    // 0x8026E3D4: add.s       $f8, $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f6.fl;
L_8026E3D8:
    // 0x8026E3D8: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x8026E3DC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8026E3E0: swc1        $f2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f2.u32l;
    // 0x8026E3E4: jal         0x80081040
    // 0x8026E3E8: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    func_80081040(rdram, ctx);
        goto after_0;
    // 0x8026E3E8: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x8026E3EC: lwc1        $f10, 0x18($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8026E3F0: lwc1        $f2, 0x24($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8026E3F4: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x8026E3F8: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x8026E3FC: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8026E400: add.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f2.fl;
    // 0x8026E404: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8026E408: nop

    // 0x8026E40C: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x8026E410: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026E414: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026E418: nop

    // 0x8026E41C: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8026E420: mfc1        $t4, $f4
    ctx->r12 = (int32_t)ctx->f4.u32l;
    // 0x8026E424: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8026E428: jal         0x80080E80
    // 0x8026E42C: sh          $t4, 0x2E($t5)
    MEM_H(0X2E, ctx->r13) = ctx->r12;
    func_80080E80(rdram, ctx);
        goto after_1;
    // 0x8026E42C: sh          $t4, 0x2E($t5)
    MEM_H(0X2E, ctx->r13) = ctx->r12;
    after_1:
    // 0x8026E430: lwc1        $f6, 0x18($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8026E434: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8026E438: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x8026E43C: lwc1        $f10, -0x2A38($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X2A38);
    // 0x8026E440: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x8026E444: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8026E448: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8026E44C: nop

    // 0x8026E450: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x8026E454: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026E458: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026E45C: nop

    // 0x8026E460: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x8026E464: mfc1        $t7, $f18
    ctx->r15 = (int32_t)ctx->f18.u32l;
    // 0x8026E468: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8026E46C: sh          $t7, 0x30($t8)
    MEM_H(0X30, ctx->r24) = ctx->r15;
    // 0x8026E470: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026E474: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8026E478: jr          $ra
    // 0x8026E47C: nop

    return;
    // 0x8026E47C: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026E3F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026E3F4: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x8026E3F8: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x8026E3FC: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8026E400: add.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f2.fl;
    // 0x8026E404: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8026E408: nop

    // 0x8026E40C: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x8026E410: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026E414: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026E418: nop

    // 0x8026E41C: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8026E420: mfc1        $t4, $f4
    ctx->r12 = (int32_t)ctx->f4.u32l;
    // 0x8026E424: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8026E428: jal         0x80080E80
    // 0x8026E42C: sh          $t4, 0x2E($t5)
    MEM_H(0X2E, ctx->r13) = ctx->r12;
    func_80080E80(rdram, ctx);
        goto after_0;
    // 0x8026E42C: sh          $t4, 0x2E($t5)
    MEM_H(0X2E, ctx->r13) = ctx->r12;
    after_0:
    // 0x8026E430: lwc1        $f6, 0x18($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8026E434: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8026E438: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x8026E43C: lwc1        $f10, -0x2A38($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X2A38);
    // 0x8026E440: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x8026E444: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8026E448: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8026E44C: nop

    // 0x8026E450: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x8026E454: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026E458: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026E45C: nop

    // 0x8026E460: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x8026E464: mfc1        $t7, $f18
    ctx->r15 = (int32_t)ctx->f18.u32l;
    // 0x8026E468: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8026E46C: sh          $t7, 0x30($t8)
    MEM_H(0X30, ctx->r24) = ctx->r15;
    // 0x8026E470: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026E474: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8026E478: jr          $ra
    // 0x8026E47C: nop

    return;
    // 0x8026E47C: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026E480(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026E480: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026E484: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026E488: lw          $v1, 0xC8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XC8);
    // 0x8026E48C: addiu       $a1, $zero, 0x1EE
    ctx->r5 = ADD32(0, 0X1EE);
    // 0x8026E490: lhu         $t6, 0x8($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X8);
    // 0x8026E494: nop

    // 0x8026E498: andi        $t7, $t6, 0x8
    ctx->r15 = ctx->r14 & 0X8;
    // 0x8026E49C: beq         $t7, $zero, L_8026E4AC
    if (ctx->r15 == 0) {
        // 0x8026E4A0: nop
    
            goto L_8026E4AC;
    }
    // 0x8026E4A0: nop

    // 0x8026E4A4: b           L_8026E4AC
    // 0x8026E4A8: addiu       $a1, $zero, -0x20C
    ctx->r5 = ADD32(0, -0X20C);
        goto L_8026E4AC;
    // 0x8026E4A8: addiu       $a1, $zero, -0x20C
    ctx->r5 = ADD32(0, -0X20C);
L_8026E4AC:
    // 0x8026E4AC: lhu         $t8, 0x2C($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X2C);
    // 0x8026E4B0: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x8026E4B4: div         $zero, $t8, $at
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r1)));
    // 0x8026E4B8: lhu         $t2, 0x1A($a0)
    ctx->r10 = MEM_HU(ctx->r4, 0X1A);
    // 0x8026E4BC: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x8026E4C0: lui         $t5, 0x8028
    ctx->r13 = S32(0X8028 << 16);
    // 0x8026E4C4: lwc1        $f12, 0x44($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X44);
    // 0x8026E4C8: mfhi        $t9
    ctx->r25 = hi;
    // 0x8026E4CC: addu        $t0, $a1, $t9
    ctx->r8 = ADD32(ctx->r5, ctx->r25);
    // 0x8026E4D0: sh          $t0, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r8;
    // 0x8026E4D4: lhu         $t1, 0x92C($v1)
    ctx->r9 = MEM_HU(ctx->r3, 0X92C);
    // 0x8026E4D8: nop

    // 0x8026E4DC: addu        $v0, $t1, $t2
    ctx->r2 = ADD32(ctx->r9, ctx->r10);
    // 0x8026E4E0: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x8026E4E4: mfhi        $t3
    ctx->r11 = hi;
    // 0x8026E4E8: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x8026E4EC: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8026E4F0: lhu         $t5, -0x3134($t5)
    ctx->r13 = MEM_HU(ctx->r13, -0X3134);
    // 0x8026E4F4: nop

    // 0x8026E4F8: sh          $t5, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r13;
    // 0x8026E4FC: jal         0x80272AEC
    // 0x8026E500: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_8024B800_func_80272AEC(rdram, ctx);
        goto after_0;
    // 0x8026E500: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8026E504: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x8026E508: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8026E50C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8026E510: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x8026E514: nop

    // 0x8026E518: bc1f        L_8026E618
    if (!c1cs) {
        // 0x8026E51C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8026E618;
    }
    // 0x8026E51C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026E520: lh          $t6, 0x2E($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X2E);
    // 0x8026E524: lui         $at, 0xC3FC
    ctx->r1 = S32(0XC3FC << 16);
    // 0x8026E528: blez        $t6, L_8026E5A4
    if (SIGNED(ctx->r14) <= 0) {
        // 0x8026E52C: nop
    
            goto L_8026E5A4;
    }
    // 0x8026E52C: nop

    // 0x8026E530: lui         $at, 0x43FC
    ctx->r1 = S32(0X43FC << 16);
    // 0x8026E534: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8026E538: lwc1        $f0, 0x4C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x8026E53C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8026E540: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x8026E544: nop

    // 0x8026E548: bc1f        L_8026E560
    if (!c1cs) {
        // 0x8026E54C: nop
    
            goto L_8026E560;
    }
    // 0x8026E54C: nop

    // 0x8026E550: jal         0x8026D61C
    // 0x8026E554: nop

    ovl_8024B800_func_8026D61C(rdram, ctx);
        goto after_1;
    // 0x8026E554: nop

    after_1:
    // 0x8026E558: b           L_8026E618
    // 0x8026E55C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026E618;
    // 0x8026E55C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026E560:
    // 0x8026E560: lwc1        $f8, -0x2A34($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X2A34);
    // 0x8026E564: nop

    // 0x8026E568: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x8026E56C: nop

    // 0x8026E570: bc1f        L_8026E618
    if (!c1cs) {
        // 0x8026E574: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8026E618;
    }
    // 0x8026E574: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026E578: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8026E57C: nop

    // 0x8026E580: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x8026E584: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026E588: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026E58C: nop

    // 0x8026E590: cvt.w.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = CVT_W_S(ctx->f0.fl);
    // 0x8026E594: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    // 0x8026E598: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8026E59C: b           L_8026E614
    // 0x8026E5A0: sh          $t8, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r24;
        goto L_8026E614;
    // 0x8026E5A0: sh          $t8, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r24;
L_8026E5A4:
    // 0x8026E5A4: lwc1        $f0, 0x4C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x8026E5A8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8026E5AC: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8026E5B0: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x8026E5B4: nop

    // 0x8026E5B8: bc1f        L_8026E5D0
    if (!c1cs) {
        // 0x8026E5BC: nop
    
            goto L_8026E5D0;
    }
    // 0x8026E5BC: nop

    // 0x8026E5C0: jal         0x8026D61C
    // 0x8026E5C4: nop

    ovl_8024B800_func_8026D61C(rdram, ctx);
        goto after_2;
    // 0x8026E5C4: nop

    after_2:
    // 0x8026E5C8: b           L_8026E618
    // 0x8026E5CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026E618;
    // 0x8026E5CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026E5D0:
    // 0x8026E5D0: lwc1        $f18, -0x2A30($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X2A30);
    // 0x8026E5D4: nop

    // 0x8026E5D8: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x8026E5DC: nop

    // 0x8026E5E0: bc1f        L_8026E618
    if (!c1cs) {
        // 0x8026E5E4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8026E618;
    }
    // 0x8026E5E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026E5E8: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8026E5EC: nop

    // 0x8026E5F0: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x8026E5F4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026E5F8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026E5FC: nop

    // 0x8026E600: cvt.w.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = CVT_W_S(ctx->f0.fl);
    // 0x8026E604: mfc1        $t0, $f4
    ctx->r8 = (int32_t)ctx->f4.u32l;
    // 0x8026E608: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8026E60C: sh          $t0, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r8;
    // 0x8026E610: nop

L_8026E614:
    // 0x8026E614: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026E618:
    // 0x8026E618: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026E61C: jr          $ra
    // 0x8026E620: nop

    return;
    // 0x8026E620: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026E4A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026E4A8: addiu       $a1, $zero, -0x20C
    ctx->r5 = ADD32(0, -0X20C);
    // 0x8026E4AC: lhu         $t8, 0x2C($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X2C);
    // 0x8026E4B0: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x8026E4B4: div         $zero, $t8, $at
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r1)));
    // 0x8026E4B8: lhu         $t2, 0x1A($a0)
    ctx->r10 = MEM_HU(ctx->r4, 0X1A);
    // 0x8026E4BC: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x8026E4C0: lui         $t5, 0x8028
    ctx->r13 = S32(0X8028 << 16);
    // 0x8026E4C4: lwc1        $f12, 0x44($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X44);
    // 0x8026E4C8: mfhi        $t9
    ctx->r25 = hi;
    // 0x8026E4CC: addu        $t0, $a1, $t9
    ctx->r8 = ADD32(ctx->r5, ctx->r25);
    // 0x8026E4D0: sh          $t0, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r8;
    // 0x8026E4D4: lhu         $t1, 0x92C($v1)
    ctx->r9 = MEM_HU(ctx->r3, 0X92C);
    // 0x8026E4D8: nop

    // 0x8026E4DC: addu        $v0, $t1, $t2
    ctx->r2 = ADD32(ctx->r9, ctx->r10);
    // 0x8026E4E0: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x8026E4E4: mfhi        $t3
    ctx->r11 = hi;
    // 0x8026E4E8: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x8026E4EC: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8026E4F0: lhu         $t5, -0x3134($t5)
    ctx->r13 = MEM_HU(ctx->r13, -0X3134);
    // 0x8026E4F4: nop

    // 0x8026E4F8: sh          $t5, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r13;
    // 0x8026E4FC: jal         0x80272AEC
    // 0x8026E500: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_8024B800_func_80272AEC(rdram, ctx);
        goto after_0;
    // 0x8026E500: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8026E504: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x8026E508: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8026E50C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8026E510: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x8026E514: nop

    // 0x8026E518: bc1f        L_8026E618
    if (!c1cs) {
        // 0x8026E51C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8026E618;
    }
    // 0x8026E51C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026E520: lh          $t6, 0x2E($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X2E);
    // 0x8026E524: lui         $at, 0xC3FC
    ctx->r1 = S32(0XC3FC << 16);
    // 0x8026E528: blez        $t6, L_8026E5A4
    if (SIGNED(ctx->r14) <= 0) {
        // 0x8026E52C: nop
    
            goto L_8026E5A4;
    }
    // 0x8026E52C: nop

    // 0x8026E530: lui         $at, 0x43FC
    ctx->r1 = S32(0X43FC << 16);
    // 0x8026E534: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8026E538: lwc1        $f0, 0x4C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x8026E53C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8026E540: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x8026E544: nop

    // 0x8026E548: bc1f        L_8026E560
    if (!c1cs) {
        // 0x8026E54C: nop
    
            goto L_8026E560;
    }
    // 0x8026E54C: nop

    // 0x8026E550: jal         0x8026D61C
    // 0x8026E554: nop

    ovl_8024B800_func_8026D61C(rdram, ctx);
        goto after_1;
    // 0x8026E554: nop

    after_1:
    // 0x8026E558: b           L_8026E618
    // 0x8026E55C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026E618;
    // 0x8026E55C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026E560:
    // 0x8026E560: lwc1        $f8, -0x2A34($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X2A34);
    // 0x8026E564: nop

    // 0x8026E568: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x8026E56C: nop

    // 0x8026E570: bc1f        L_8026E618
    if (!c1cs) {
        // 0x8026E574: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8026E618;
    }
    // 0x8026E574: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026E578: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8026E57C: nop

    // 0x8026E580: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x8026E584: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026E588: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026E58C: nop

    // 0x8026E590: cvt.w.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = CVT_W_S(ctx->f0.fl);
    // 0x8026E594: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    // 0x8026E598: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8026E59C: b           L_8026E614
    // 0x8026E5A0: sh          $t8, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r24;
        goto L_8026E614;
    // 0x8026E5A0: sh          $t8, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r24;
L_8026E5A4:
    // 0x8026E5A4: lwc1        $f0, 0x4C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x8026E5A8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8026E5AC: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8026E5B0: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x8026E5B4: nop

    // 0x8026E5B8: bc1f        L_8026E5D0
    if (!c1cs) {
        // 0x8026E5BC: nop
    
            goto L_8026E5D0;
    }
    // 0x8026E5BC: nop

    // 0x8026E5C0: jal         0x8026D61C
    // 0x8026E5C4: nop

    ovl_8024B800_func_8026D61C(rdram, ctx);
        goto after_2;
    // 0x8026E5C4: nop

    after_2:
    // 0x8026E5C8: b           L_8026E618
    // 0x8026E5CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026E618;
    // 0x8026E5CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026E5D0:
    // 0x8026E5D0: lwc1        $f18, -0x2A30($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X2A30);
    // 0x8026E5D4: nop

    // 0x8026E5D8: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x8026E5DC: nop

    // 0x8026E5E0: bc1f        L_8026E618
    if (!c1cs) {
        // 0x8026E5E4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8026E618;
    }
    // 0x8026E5E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026E5E8: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8026E5EC: nop

    // 0x8026E5F0: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x8026E5F4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026E5F8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026E5FC: nop

    // 0x8026E600: cvt.w.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = CVT_W_S(ctx->f0.fl);
    // 0x8026E604: mfc1        $t0, $f4
    ctx->r8 = (int32_t)ctx->f4.u32l;
    // 0x8026E608: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8026E60C: sh          $t0, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r8;
    // 0x8026E610: nop

L_8026E614:
    // 0x8026E614: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026E618:
    // 0x8026E618: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026E61C: jr          $ra
    // 0x8026E620: nop

    return;
    // 0x8026E620: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026E4F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026E4F0: lhu         $t5, -0x3134($t5)
    ctx->r13 = MEM_HU(ctx->r13, -0X3134);
    // 0x8026E4F4: nop

    // 0x8026E4F8: sh          $t5, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r13;
    // 0x8026E4FC: jal         0x80272AEC
    // 0x8026E500: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_8024B800_func_80272AEC(rdram, ctx);
        goto after_0;
    // 0x8026E500: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8026E504: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x8026E508: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8026E50C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8026E510: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x8026E514: nop

    // 0x8026E518: bc1f        L_8026E618
    if (!c1cs) {
        // 0x8026E51C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8026E618;
    }
    // 0x8026E51C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026E520: lh          $t6, 0x2E($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X2E);
    // 0x8026E524: lui         $at, 0xC3FC
    ctx->r1 = S32(0XC3FC << 16);
    // 0x8026E528: blez        $t6, L_8026E5A4
    if (SIGNED(ctx->r14) <= 0) {
        // 0x8026E52C: nop
    
            goto L_8026E5A4;
    }
    // 0x8026E52C: nop

    // 0x8026E530: lui         $at, 0x43FC
    ctx->r1 = S32(0X43FC << 16);
    // 0x8026E534: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8026E538: lwc1        $f0, 0x4C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x8026E53C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8026E540: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x8026E544: nop

    // 0x8026E548: bc1f        L_8026E560
    if (!c1cs) {
        // 0x8026E54C: nop
    
            goto L_8026E560;
    }
    // 0x8026E54C: nop

    // 0x8026E550: jal         0x8026D61C
    // 0x8026E554: nop

    ovl_8024B800_func_8026D61C(rdram, ctx);
        goto after_1;
    // 0x8026E554: nop

    after_1:
    // 0x8026E558: b           L_8026E618
    // 0x8026E55C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026E618;
    // 0x8026E55C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026E560:
    // 0x8026E560: lwc1        $f8, -0x2A34($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X2A34);
    // 0x8026E564: nop

    // 0x8026E568: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x8026E56C: nop

    // 0x8026E570: bc1f        L_8026E618
    if (!c1cs) {
        // 0x8026E574: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8026E618;
    }
    // 0x8026E574: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026E578: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8026E57C: nop

    // 0x8026E580: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x8026E584: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026E588: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026E58C: nop

    // 0x8026E590: cvt.w.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = CVT_W_S(ctx->f0.fl);
    // 0x8026E594: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    // 0x8026E598: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8026E59C: b           L_8026E614
    // 0x8026E5A0: sh          $t8, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r24;
        goto L_8026E614;
    // 0x8026E5A0: sh          $t8, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r24;
L_8026E5A4:
    // 0x8026E5A4: lwc1        $f0, 0x4C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x8026E5A8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8026E5AC: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8026E5B0: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x8026E5B4: nop

    // 0x8026E5B8: bc1f        L_8026E5D0
    if (!c1cs) {
        // 0x8026E5BC: nop
    
            goto L_8026E5D0;
    }
    // 0x8026E5BC: nop

    // 0x8026E5C0: jal         0x8026D61C
    // 0x8026E5C4: nop

    ovl_8024B800_func_8026D61C(rdram, ctx);
        goto after_2;
    // 0x8026E5C4: nop

    after_2:
    // 0x8026E5C8: b           L_8026E618
    // 0x8026E5CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026E618;
    // 0x8026E5CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026E5D0:
    // 0x8026E5D0: lwc1        $f18, -0x2A30($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X2A30);
    // 0x8026E5D4: nop

    // 0x8026E5D8: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x8026E5DC: nop

    // 0x8026E5E0: bc1f        L_8026E618
    if (!c1cs) {
        // 0x8026E5E4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8026E618;
    }
    // 0x8026E5E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026E5E8: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8026E5EC: nop

    // 0x8026E5F0: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x8026E5F4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026E5F8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026E5FC: nop

    // 0x8026E600: cvt.w.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = CVT_W_S(ctx->f0.fl);
    // 0x8026E604: mfc1        $t0, $f4
    ctx->r8 = (int32_t)ctx->f4.u32l;
    // 0x8026E608: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8026E60C: sh          $t0, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r8;
    // 0x8026E610: nop

L_8026E614:
    // 0x8026E614: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026E618:
    // 0x8026E618: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026E61C: jr          $ra
    // 0x8026E620: nop

    return;
    // 0x8026E620: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026E538(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026E538: lwc1        $f0, 0x4C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x8026E53C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8026E540: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x8026E544: nop

    // 0x8026E548: bc1f        L_8026E560
    if (!c1cs) {
        // 0x8026E54C: nop
    
            goto L_8026E560;
    }
    // 0x8026E54C: nop

    // 0x8026E550: jal         0x8026D61C
    // 0x8026E554: nop

    ovl_8024B800_func_8026D61C(rdram, ctx);
        goto after_0;
    // 0x8026E554: nop

    after_0:
    // 0x8026E558: b           L_8026E618
    // 0x8026E55C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026E618;
    // 0x8026E55C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026E560:
    // 0x8026E560: lwc1        $f8, -0x2A34($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X2A34);
    // 0x8026E564: nop

    // 0x8026E568: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x8026E56C: nop

    // 0x8026E570: bc1f        L_8026E618
    if (!c1cs) {
        // 0x8026E574: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8026E618;
    }
    // 0x8026E574: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026E578: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8026E57C: nop

    // 0x8026E580: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x8026E584: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026E588: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026E58C: nop

    // 0x8026E590: cvt.w.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = CVT_W_S(ctx->f0.fl);
    // 0x8026E594: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    // 0x8026E598: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8026E59C: b           L_8026E614
    // 0x8026E5A0: sh          $t8, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r24;
        goto L_8026E614;
    // 0x8026E5A0: sh          $t8, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r24;
    // 0x8026E5A4: lwc1        $f0, 0x4C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x8026E5A8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8026E5AC: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8026E5B0: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x8026E5B4: nop

    // 0x8026E5B8: bc1f        L_8026E5D0
    if (!c1cs) {
        // 0x8026E5BC: nop
    
            goto L_8026E5D0;
    }
    // 0x8026E5BC: nop

    // 0x8026E5C0: jal         0x8026D61C
    // 0x8026E5C4: nop

    ovl_8024B800_func_8026D61C(rdram, ctx);
        goto after_1;
    // 0x8026E5C4: nop

    after_1:
    // 0x8026E5C8: b           L_8026E618
    // 0x8026E5CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026E618;
    // 0x8026E5CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026E5D0:
    // 0x8026E5D0: lwc1        $f18, -0x2A30($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X2A30);
    // 0x8026E5D4: nop

    // 0x8026E5D8: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x8026E5DC: nop

    // 0x8026E5E0: bc1f        L_8026E618
    if (!c1cs) {
        // 0x8026E5E4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8026E618;
    }
    // 0x8026E5E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026E5E8: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8026E5EC: nop

    // 0x8026E5F0: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x8026E5F4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026E5F8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026E5FC: nop

    // 0x8026E600: cvt.w.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = CVT_W_S(ctx->f0.fl);
    // 0x8026E604: mfc1        $t0, $f4
    ctx->r8 = (int32_t)ctx->f4.u32l;
    // 0x8026E608: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8026E60C: sh          $t0, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r8;
    // 0x8026E610: nop

L_8026E614:
    // 0x8026E614: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026E618:
    // 0x8026E618: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026E61C: jr          $ra
    // 0x8026E620: nop

    return;
    // 0x8026E620: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026E56C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026E56C: nop

    // 0x8026E570: bc1f        L_8026E618
    if (!c1cs) {
        // 0x8026E574: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8026E618;
    }
    // 0x8026E574: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026E578: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8026E57C: nop

    // 0x8026E580: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x8026E584: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026E588: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026E58C: nop

    // 0x8026E590: cvt.w.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = CVT_W_S(ctx->f0.fl);
    // 0x8026E594: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    // 0x8026E598: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8026E59C: b           L_8026E614
    // 0x8026E5A0: sh          $t8, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r24;
        goto L_8026E614;
    // 0x8026E5A0: sh          $t8, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r24;
    // 0x8026E5A4: lwc1        $f0, 0x4C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x8026E5A8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8026E5AC: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8026E5B0: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x8026E5B4: nop

    // 0x8026E5B8: bc1f        L_8026E5D0
    if (!c1cs) {
        // 0x8026E5BC: nop
    
            goto L_8026E5D0;
    }
    // 0x8026E5BC: nop

    // 0x8026E5C0: jal         0x8026D61C
    // 0x8026E5C4: nop

    ovl_8024B800_func_8026D61C(rdram, ctx);
        goto after_0;
    // 0x8026E5C4: nop

    after_0:
    // 0x8026E5C8: b           L_8026E618
    // 0x8026E5CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026E618;
    // 0x8026E5CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026E5D0:
    // 0x8026E5D0: lwc1        $f18, -0x2A30($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X2A30);
    // 0x8026E5D4: nop

    // 0x8026E5D8: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x8026E5DC: nop

    // 0x8026E5E0: bc1f        L_8026E618
    if (!c1cs) {
        // 0x8026E5E4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8026E618;
    }
    // 0x8026E5E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026E5E8: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8026E5EC: nop

    // 0x8026E5F0: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x8026E5F4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026E5F8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026E5FC: nop

    // 0x8026E600: cvt.w.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = CVT_W_S(ctx->f0.fl);
    // 0x8026E604: mfc1        $t0, $f4
    ctx->r8 = (int32_t)ctx->f4.u32l;
    // 0x8026E608: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8026E60C: sh          $t0, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r8;
    // 0x8026E610: nop

L_8026E614:
    // 0x8026E614: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026E618:
    // 0x8026E618: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026E61C: jr          $ra
    // 0x8026E620: nop

    return;
    // 0x8026E620: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026E5C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026E5C4: nop

    // 0x8026E5C8: b           L_8026E618
    // 0x8026E5CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026E618;
    // 0x8026E5CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026E5D0: lwc1        $f18, -0x2A30($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X2A30);
    // 0x8026E5D4: nop

    // 0x8026E5D8: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x8026E5DC: nop

    // 0x8026E5E0: bc1f        L_8026E618
    if (!c1cs) {
        // 0x8026E5E4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8026E618;
    }
    // 0x8026E5E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026E5E8: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8026E5EC: nop

    // 0x8026E5F0: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x8026E5F4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026E5F8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026E5FC: nop

    // 0x8026E600: cvt.w.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = CVT_W_S(ctx->f0.fl);
    // 0x8026E604: mfc1        $t0, $f4
    ctx->r8 = (int32_t)ctx->f4.u32l;
    // 0x8026E608: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8026E60C: sh          $t0, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r8;
    // 0x8026E610: nop

    // 0x8026E614: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026E618:
    // 0x8026E618: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026E61C: jr          $ra
    // 0x8026E620: nop

    return;
    // 0x8026E620: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026E614(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026E614: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026E618: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026E61C: jr          $ra
    // 0x8026E620: nop

    return;
    // 0x8026E620: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026E624(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026E624: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8026E628: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8026E62C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8026E630: jal         0x8025DC74
    // 0x8026E634: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    ovl_8024B800_func_8025DC74(rdram, ctx);
        goto after_0;
    // 0x8026E634: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x8026E638: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x8026E63C: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x8026E640: sll         $t6, $t6, 1
    ctx->r14 = S32(ctx->r14 << 1);
    // 0x8026E644: lw          $t8, 0xC8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC8);
    // 0x8026E648: addiu       $t7, $t6, 0x14
    ctx->r15 = ADD32(ctx->r14, 0X14);
    // 0x8026E64C: sh          $zero, 0x30($s0)
    MEM_H(0X30, ctx->r16) = 0;
    // 0x8026E650: sh          $t7, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r15;
    // 0x8026E654: lhu         $t9, 0x8($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X8);
    // 0x8026E658: nop

    // 0x8026E65C: andi        $t0, $t9, 0x8
    ctx->r8 = ctx->r25 & 0X8;
    // 0x8026E660: beq         $t0, $zero, L_8026E678
    if (ctx->r8 == 0) {
        // 0x8026E664: nop
    
            goto L_8026E678;
    }
    // 0x8026E664: nop

    // 0x8026E668: lh          $t1, 0x2E($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X2E);
    // 0x8026E66C: nop

    // 0x8026E670: negu        $t2, $t1
    ctx->r10 = SUB32(0, ctx->r9);
    // 0x8026E674: sh          $t2, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r10;
L_8026E678:
    // 0x8026E678: lbu         $t3, 0x3($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X3);
    // 0x8026E67C: nop

    // 0x8026E680: andi        $t4, $t3, 0x10
    ctx->r12 = ctx->r11 & 0X10;
    // 0x8026E684: beq         $t4, $zero, L_8026E6F0
    if (ctx->r12 == 0) {
        // 0x8026E688: nop
    
            goto L_8026E6F0;
    }
    // 0x8026E688: nop

    // 0x8026E68C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8026E690: lwc1        $f6, 0x44($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X44);
    // 0x8026E694: addiu       $t6, $zero, -0x28
    ctx->r14 = ADD32(0, -0X28);
    // 0x8026E698: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x8026E69C: addiu       $t5, $zero, 0x28
    ctx->r13 = ADD32(0, 0X28);
    // 0x8026E6A0: bc1f        L_8026E6B0
    if (!c1cs) {
        // 0x8026E6A4: nop
    
            goto L_8026E6B0;
    }
    // 0x8026E6A4: nop

    // 0x8026E6A8: b           L_8026E6B4
    // 0x8026E6AC: sh          $t5, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r13;
        goto L_8026E6B4;
    // 0x8026E6AC: sh          $t5, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r13;
L_8026E6B0:
    // 0x8026E6B0: sh          $t6, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r14;
L_8026E6B4:
    // 0x8026E6B4: jal         0x8026BD38
    // 0x8026E6B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026BD38(rdram, ctx);
        goto after_1;
    // 0x8026E6B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8026E6BC: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8026E6C0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8026E6C4: lwc1        $f8, 0xB4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XB4);
    // 0x8026E6C8: nop

    // 0x8026E6CC: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x8026E6D0: nop

    // 0x8026E6D4: bc1f        L_8026E758
    if (!c1cs) {
        // 0x8026E6D8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8026E758;
    }
    // 0x8026E6D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8026E6DC: lbu         $t7, 0x3($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X3);
    // 0x8026E6E0: nop

    // 0x8026E6E4: andi        $t8, $t7, 0xFFEF
    ctx->r24 = ctx->r15 & 0XFFEF;
    // 0x8026E6E8: b           L_8026E754
    // 0x8026E6EC: sb          $t8, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r24;
        goto L_8026E754;
    // 0x8026E6EC: sb          $t8, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r24;
L_8026E6F0:
    // 0x8026E6F0: jal         0x8026BD38
    // 0x8026E6F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026BD38(rdram, ctx);
        goto after_2;
    // 0x8026E6F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8026E6F8: lwc1        $f12, 0xB0($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XB0);
    // 0x8026E6FC: jal         0x80080E80
    // 0x8026E700: nop

    func_80080E80(rdram, ctx);
        goto after_3;
    // 0x8026E700: nop

    after_3:
    // 0x8026E704: jal         0x80272AEC
    // 0x8026E708: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    ovl_8024B800_func_80272AEC(rdram, ctx);
        goto after_4;
    // 0x8026E708: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_4:
    // 0x8026E70C: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x8026E710: lwc1        $f2, 0xB4($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0XB4);
    // 0x8026E714: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8026E718: mul.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x8026E71C: c.lt.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl < ctx->f2.fl;
    // 0x8026E720: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8026E724: bc1f        L_8026E758
    if (!c1cs) {
        // 0x8026E728: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8026E758;
    }
    // 0x8026E728: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8026E72C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8026E730: nop

    // 0x8026E734: c.lt.s      $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f12.fl < ctx->f18.fl;
    // 0x8026E738: nop

    // 0x8026E73C: bc1f        L_8026E758
    if (!c1cs) {
        // 0x8026E740: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8026E758;
    }
    // 0x8026E740: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8026E744: lbu         $t9, 0x3($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X3);
    // 0x8026E748: nop

    // 0x8026E74C: ori         $t0, $t9, 0x10
    ctx->r8 = ctx->r25 | 0X10;
    // 0x8026E750: sb          $t0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r8;
L_8026E754:
    // 0x8026E754: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8026E758:
    // 0x8026E758: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8026E75C: jr          $ra
    // 0x8026E760: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8026E760: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_8024B800_func_8026E654(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026E654: lhu         $t9, 0x8($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X8);
    // 0x8026E658: nop

    // 0x8026E65C: andi        $t0, $t9, 0x8
    ctx->r8 = ctx->r25 & 0X8;
    // 0x8026E660: beq         $t0, $zero, L_8026E678
    if (ctx->r8 == 0) {
        // 0x8026E664: nop
    
            goto L_8026E678;
    }
    // 0x8026E664: nop

    // 0x8026E668: lh          $t1, 0x2E($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X2E);
    // 0x8026E66C: nop

    // 0x8026E670: negu        $t2, $t1
    ctx->r10 = SUB32(0, ctx->r9);
    // 0x8026E674: sh          $t2, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r10;
L_8026E678:
    // 0x8026E678: lbu         $t3, 0x3($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X3);
    // 0x8026E67C: nop

    // 0x8026E680: andi        $t4, $t3, 0x10
    ctx->r12 = ctx->r11 & 0X10;
    // 0x8026E684: beq         $t4, $zero, L_8026E6F0
    if (ctx->r12 == 0) {
        // 0x8026E688: nop
    
            goto L_8026E6F0;
    }
    // 0x8026E688: nop

    // 0x8026E68C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8026E690: lwc1        $f6, 0x44($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X44);
    // 0x8026E694: addiu       $t6, $zero, -0x28
    ctx->r14 = ADD32(0, -0X28);
    // 0x8026E698: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x8026E69C: addiu       $t5, $zero, 0x28
    ctx->r13 = ADD32(0, 0X28);
    // 0x8026E6A0: bc1f        L_8026E6B0
    if (!c1cs) {
        // 0x8026E6A4: nop
    
            goto L_8026E6B0;
    }
    // 0x8026E6A4: nop

    // 0x8026E6A8: b           L_8026E6B4
    // 0x8026E6AC: sh          $t5, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r13;
        goto L_8026E6B4;
    // 0x8026E6AC: sh          $t5, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r13;
L_8026E6B0:
    // 0x8026E6B0: sh          $t6, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r14;
L_8026E6B4:
    // 0x8026E6B4: jal         0x8026BD38
    // 0x8026E6B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026BD38(rdram, ctx);
        goto after_0;
    // 0x8026E6B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x8026E6BC: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8026E6C0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8026E6C4: lwc1        $f8, 0xB4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XB4);
    // 0x8026E6C8: nop

    // 0x8026E6CC: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x8026E6D0: nop

    // 0x8026E6D4: bc1f        L_8026E758
    if (!c1cs) {
        // 0x8026E6D8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8026E758;
    }
    // 0x8026E6D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8026E6DC: lbu         $t7, 0x3($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X3);
    // 0x8026E6E0: nop

    // 0x8026E6E4: andi        $t8, $t7, 0xFFEF
    ctx->r24 = ctx->r15 & 0XFFEF;
    // 0x8026E6E8: b           L_8026E754
    // 0x8026E6EC: sb          $t8, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r24;
        goto L_8026E754;
    // 0x8026E6EC: sb          $t8, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r24;
L_8026E6F0:
    // 0x8026E6F0: jal         0x8026BD38
    // 0x8026E6F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026BD38(rdram, ctx);
        goto after_1;
    // 0x8026E6F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8026E6F8: lwc1        $f12, 0xB0($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XB0);
    // 0x8026E6FC: jal         0x80080E80
    // 0x8026E700: nop

    func_80080E80(rdram, ctx);
        goto after_2;
    // 0x8026E700: nop

    after_2:
    // 0x8026E704: jal         0x80272AEC
    // 0x8026E708: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    ovl_8024B800_func_80272AEC(rdram, ctx);
        goto after_3;
    // 0x8026E708: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_3:
    // 0x8026E70C: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x8026E710: lwc1        $f2, 0xB4($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0XB4);
    // 0x8026E714: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8026E718: mul.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x8026E71C: c.lt.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl < ctx->f2.fl;
    // 0x8026E720: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8026E724: bc1f        L_8026E758
    if (!c1cs) {
        // 0x8026E728: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8026E758;
    }
    // 0x8026E728: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8026E72C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8026E730: nop

    // 0x8026E734: c.lt.s      $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f12.fl < ctx->f18.fl;
    // 0x8026E738: nop

    // 0x8026E73C: bc1f        L_8026E758
    if (!c1cs) {
        // 0x8026E740: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8026E758;
    }
    // 0x8026E740: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8026E744: lbu         $t9, 0x3($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X3);
    // 0x8026E748: nop

    // 0x8026E74C: ori         $t0, $t9, 0x10
    ctx->r8 = ctx->r25 | 0X10;
    // 0x8026E750: sb          $t0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r8;
L_8026E754:
    // 0x8026E754: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8026E758:
    // 0x8026E758: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8026E75C: jr          $ra
    // 0x8026E760: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8026E760: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_8024B800_func_8026E764(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026E764: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026E768: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026E76C: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x8026E770: nop

    // 0x8026E774: lhu         $a1, 0x6($t6)
    ctx->r5 = MEM_HU(ctx->r14, 0X6);
    // 0x8026E778: jal         0x8005D008
    // 0x8026E77C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8005D008(rdram, ctx);
        goto after_0;
    // 0x8026E77C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8026E780: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8026E784: nop

    // 0x8026E788: lh          $t7, 0x2E($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X2E);
    // 0x8026E78C: lh          $t9, 0x30($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X30);
    // 0x8026E790: negu        $t8, $t7
    ctx->r24 = SUB32(0, ctx->r15);
    // 0x8026E794: negu        $t0, $t9
    ctx->r8 = SUB32(0, ctx->r25);
    // 0x8026E798: sh          $t8, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r24;
    // 0x8026E79C: sh          $t0, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r8;
    // 0x8026E7A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026E7A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026E7A8: jr          $ra
    // 0x8026E7AC: nop

    return;
    // 0x8026E7AC: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026E7B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026E7B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026E7B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026E7B8: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x8026E7BC: nop

    // 0x8026E7C0: lhu         $a1, 0x6($t6)
    ctx->r5 = MEM_HU(ctx->r14, 0X6);
    // 0x8026E7C4: jal         0x8005D008
    // 0x8026E7C8: nop

    func_8005D008(rdram, ctx);
        goto after_0;
    // 0x8026E7C8: nop

    after_0:
    // 0x8026E7CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026E7D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026E7D4: jr          $ra
    // 0x8026E7D8: nop

    return;
    // 0x8026E7D8: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026E7DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026E7DC: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x8026E7E0: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x8026E7E4: lh          $v1, 0x932($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X932);
    // 0x8026E7E8: nop

    // 0x8026E7EC: blez        $v1, L_8026E7FC
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8026E7F0: nop
    
            goto L_8026E7FC;
    }
    // 0x8026E7F0: nop

    // 0x8026E7F4: b           L_8026E7FC
    // 0x8026E7F8: addiu       $a1, $zero, -0x14
    ctx->r5 = ADD32(0, -0X14);
        goto L_8026E7FC;
    // 0x8026E7F8: addiu       $a1, $zero, -0x14
    ctx->r5 = ADD32(0, -0X14);
L_8026E7FC:
    // 0x8026E7FC: addu        $t6, $a1, $v1
    ctx->r14 = ADD32(ctx->r5, ctx->r3);
    // 0x8026E800: sh          $t6, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r14;
    // 0x8026E804: lh          $t7, 0x934($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X934);
    // 0x8026E808: jr          $ra
    // 0x8026E80C: sh          $t7, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r15;
    return;
    // 0x8026E80C: sh          $t7, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void ovl_8024B800_func_8026E810(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026E810: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8026E814: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8026E818: addiu       $v0, $v0, 0xB24
    ctx->r2 = ADD32(ctx->r2, 0XB24);
    // 0x8026E81C: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x8026E820: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x8026E824: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026E828: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026E82C: lwc1        $f4, 0x4C($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X4C);
    // 0x8026E830: nop

    // 0x8026E834: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8026E838: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8026E83C: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x8026E840: nop

    // 0x8026E844: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x8026E848: sh          $t8, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r24;
    // 0x8026E84C: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x8026E850: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x8026E854: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026E858: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026E85C: lwc1        $f8, 0x44($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X44);
    // 0x8026E860: nop

    // 0x8026E864: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8026E868: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x8026E86C: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x8026E870: jr          $ra
    // 0x8026E874: sh          $t1, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r9;
    return;
    // 0x8026E874: sh          $t1, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r9;
;}
RECOMP_FUNC void ovl_8024B800_func_8026E820(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026E820: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x8026E824: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026E828: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026E82C: lwc1        $f4, 0x4C($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X4C);
    // 0x8026E830: nop

    // 0x8026E834: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8026E838: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8026E83C: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x8026E840: nop

    // 0x8026E844: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x8026E848: sh          $t8, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r24;
    // 0x8026E84C: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x8026E850: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x8026E854: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026E858: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026E85C: lwc1        $f8, 0x44($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X44);
    // 0x8026E860: nop

    // 0x8026E864: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8026E868: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x8026E86C: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x8026E870: jr          $ra
    // 0x8026E874: sh          $t1, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r9;
    return;
    // 0x8026E874: sh          $t1, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r9;
;}
RECOMP_FUNC void ovl_8024B800_func_8026E878(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026E878: jr          $ra
    // 0x8026E87C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x8026E87C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void ovl_8024B800_func_8026E880(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026E880: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8026E884: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8026E888: addiu       $v0, $v0, 0xB24
    ctx->r2 = ADD32(ctx->r2, 0XB24);
    // 0x8026E88C: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x8026E890: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026E894: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x8026E898: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026E89C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026E8A0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026E8A4: lwc1        $f4, 0x4C($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X4C);
    // 0x8026E8A8: lw          $t9, 0xC8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XC8);
    // 0x8026E8AC: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8026E8B0: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x8026E8B4: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8026E8B8: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x8026E8BC: addiu       $a2, $a2, -0x3164
    ctx->r6 = ADD32(ctx->r6, -0X3164);
    // 0x8026E8C0: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x8026E8C4: sh          $t8, 0x932($t9)
    MEM_H(0X932, ctx->r25) = ctx->r24;
    // 0x8026E8C8: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x8026E8CC: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x8026E8D0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026E8D4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026E8D8: lwc1        $f8, 0x44($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X44);
    // 0x8026E8DC: lw          $t3, 0xC8($a0)
    ctx->r11 = MEM_W(ctx->r4, 0XC8);
    // 0x8026E8E0: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8026E8E4: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8026E8E8: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
    // 0x8026E8EC: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x8026E8F0: sh          $t2, 0x934($t3)
    MEM_H(0X934, ctx->r11) = ctx->r10;
    // 0x8026E8F4: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    // 0x8026E8F8: lwc1        $f4, -0x2A24($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X2A24);
    // 0x8026E8FC: lwc1        $f16, 0x8C($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X8C);
    // 0x8026E900: lwc1        $f5, -0x2A28($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X2A28);
    // 0x8026E904: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x8026E908: add.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d + ctx->f4.d;
    // 0x8026E90C: lhu         $a1, 0x24($a0)
    ctx->r5 = MEM_HU(ctx->r4, 0X24);
    // 0x8026E910: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x8026E914: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x8026E918: jal         0x80267C54
    // 0x8026E91C: nop

    ovl_8024B800_func_80267C54(rdram, ctx);
        goto after_0;
    // 0x8026E91C: nop

    after_0:
    // 0x8026E920: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026E924: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026E928: jr          $ra
    // 0x8026E92C: nop

    return;
    // 0x8026E92C: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026E930(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026E930: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8026E934: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026E938: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8026E93C: lwc1        $f4, 0xBC($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XBC);
    // 0x8026E940: lwc1        $f9, -0x2A20($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X2A20);
    // 0x8026E944: lwc1        $f8, -0x2A1C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X2A1C);
    // 0x8026E948: lbu         $t6, 0x3($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X3);
    // 0x8026E94C: lhu         $v1, 0x24($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X24);
    // 0x8026E950: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8026E954: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x8026E958: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x8026E95C: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    // 0x8026E960: bne         $t7, $zero, L_8026EA2C
    if (ctx->r15 != 0) {
        // 0x8026E964: addiu       $v1, $v1, -0x1
        ctx->r3 = ADD32(ctx->r3, -0X1);
            goto L_8026EA2C;
    }
    // 0x8026E964: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8026E968: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x8026E96C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8026E970: jal         0x80081040
    // 0x8026E974: swc1        $f12, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f12.u32l;
    func_80081040(rdram, ctx);
        goto after_0;
    // 0x8026E974: swc1        $f12, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x8026E978: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x8026E97C: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x8026E980: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x8026E984: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8026E988: addiu       $t9, $t9, 0xAF0
    ctx->r25 = ADD32(ctx->r25, 0XAF0);
    // 0x8026E98C: sll         $t8, $v1, 2
    ctx->r24 = S32(ctx->r3 << 2);
    // 0x8026E990: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x8026E994: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x8026E998: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x8026E99C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8026E9A0: lwc1        $f4, 0x4C($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X4C);
    // 0x8026E9A4: lwc1        $f12, 0x20($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8026E9A8: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x8026E9AC: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x8026E9B0: nop

    // 0x8026E9B4: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x8026E9B8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026E9BC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026E9C0: nop

    // 0x8026E9C4: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8026E9C8: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
    // 0x8026E9CC: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x8026E9D0: sh          $t2, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r10;
    // 0x8026E9D4: jal         0x80080E80
    // 0x8026E9D8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_80080E80(rdram, ctx);
        goto after_1;
    // 0x8026E9D8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x8026E9DC: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x8026E9E0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8026E9E4: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x8026E9E8: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x8026E9EC: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x8026E9F0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8026E9F4: lwc1        $f18, 0x44($t3)
    ctx->f18.u32l = MEM_W(ctx->r11, 0X44);
    // 0x8026E9F8: nop

    // 0x8026E9FC: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x8026EA00: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x8026EA04: nop

    // 0x8026EA08: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x8026EA0C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026EA10: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026EA14: nop

    // 0x8026EA18: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8026EA1C: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
    // 0x8026EA20: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8026EA24: sh          $t5, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r13;
    // 0x8026EA28: nop

L_8026EA2C:
    // 0x8026EA2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026EA30: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8026EA34: jr          $ra
    // 0x8026EA38: nop

    return;
    // 0x8026EA38: nop

;}
