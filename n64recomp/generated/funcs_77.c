#include "iss64_recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_8028C980(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028C980: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8028C984: lb          $t6, -0x309C($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X309C);
    // 0x8028C988: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8028C98C: beq         $t6, $zero, L_8028C9A4
    if (ctx->r14 == 0) {
        // 0x8028C990: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8028C9A4;
    }
    // 0x8028C990: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8028C994: jal         0x8028CF04
    // 0x8028C998: nop

    func_8028CF04(rdram, ctx);
        goto after_0;
    // 0x8028C998: nop

    after_0:
    // 0x8028C99C: b           L_8028C9B0
    // 0x8028C9A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8028C9B0;
    // 0x8028C9A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8028C9A4:
    // 0x8028C9A4: jal         0x8028CA3C
    // 0x8028C9A8: nop

    func_8028CA3C(rdram, ctx);
        goto after_1;
    // 0x8028C9A8: nop

    after_1:
    // 0x8028C9AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8028C9B0:
    // 0x8028C9B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8028C9B4: jr          $ra
    // 0x8028C9B8: nop

    return;
    // 0x8028C9B8: nop

;}
RECOMP_FUNC void func_8028C9BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028C9BC: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8028C9C0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028C9C4: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x8028C9C8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8028C9CC: bc1f        L_8028C9DC
    if (!c1cs) {
        // 0x8028C9D0: nop
    
            goto L_8028C9DC;
    }
    // 0x8028C9D0: nop

    // 0x8028C9D4: b           L_8028C9E0
    // 0x8028C9D8: neg.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = -ctx->f12.fl;
        goto L_8028C9E0;
    // 0x8028C9D8: neg.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = -ctx->f12.fl;
L_8028C9DC:
    // 0x8028C9DC: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
L_8028C9E0:
    // 0x8028C9E0: lwc1        $f4, -0x190($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X190);
    // 0x8028C9E4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028C9E8: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x8028C9EC: nop

    // 0x8028C9F0: bc1f        L_8028CA34
    if (!c1cs) {
        // 0x8028C9F4: nop
    
            goto L_8028CA34;
    }
    // 0x8028C9F4: nop

    // 0x8028C9F8: c.lt.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl < ctx->f2.fl;
    // 0x8028C9FC: nop

    // 0x8028CA00: bc1f        L_8028CA10
    if (!c1cs) {
        // 0x8028CA04: nop
    
            goto L_8028CA10;
    }
    // 0x8028CA04: nop

    // 0x8028CA08: b           L_8028CA14
    // 0x8028CA0C: neg.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = -ctx->f14.fl;
        goto L_8028CA14;
    // 0x8028CA0C: neg.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = -ctx->f14.fl;
L_8028CA10:
    // 0x8028CA10: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
L_8028CA14:
    // 0x8028CA14: lwc1        $f6, -0x18C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X18C);
    // 0x8028CA18: nop

    // 0x8028CA1C: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x8028CA20: nop

    // 0x8028CA24: bc1f        L_8028CA34
    if (!c1cs) {
        // 0x8028CA28: nop
    
            goto L_8028CA34;
    }
    // 0x8028CA28: nop

    // 0x8028CA2C: jr          $ra
    // 0x8028CA30: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8028CA30: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8028CA34:
    // 0x8028CA34: jr          $ra
    // 0x8028CA38: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8028CA38: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_8028CA3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028CA3C: blez        $a1, L_8028CD84
    if (SIGNED(ctx->r5) <= 0) {
        // 0x8028CA40: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8028CD84;
    }
    // 0x8028CA40: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8028CA44: andi        $v1, $a1, 0x3
    ctx->r3 = ctx->r5 & 0X3;
    // 0x8028CA48: beq         $v1, $zero, L_8028CB00
    if (ctx->r3 == 0) {
        // 0x8028CA4C: lui         $at, 0x437F
        ctx->r1 = S32(0X437F << 16);
            goto L_8028CB00;
    }
    // 0x8028CA4C: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x8028CA50: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8028CA54: or          $a2, $v1, $zero
    ctx->r6 = ctx->r3 | 0;
L_8028CA58:
    // 0x8028CA58: lhu         $t6, 0x6($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X6);
    // 0x8028CA5C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8028CA60: beq         $t6, $zero, L_8028CAF4
    if (ctx->r14 == 0) {
        // 0x8028CA64: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8028CAF4;
    }
    // 0x8028CA64: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8028CA68: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8028CA6C: ctc1        $v1, $FpcCsr
    set_cop1_cs(ctx->r3);
    // 0x8028CA70: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8028CA74: cvt.w.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = CVT_W_S(ctx->f0.fl);
    // 0x8028CA78: cfc1        $v1, $FpcCsr
    ctx->r3 = get_cop1_cs();
    // 0x8028CA7C: nop

    // 0x8028CA80: andi        $v1, $v1, 0x78
    ctx->r3 = ctx->r3 & 0X78;
    // 0x8028CA84: beq         $v1, $zero, L_8028CAD0
    if (ctx->r3 == 0) {
        // 0x8028CA88: nop
    
            goto L_8028CAD0;
    }
    // 0x8028CA88: nop

    // 0x8028CA8C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8028CA90: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8028CA94: sub.s       $f4, $f0, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x8028CA98: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8028CA9C: ctc1        $v1, $FpcCsr
    set_cop1_cs(ctx->r3);
    // 0x8028CAA0: nop

    // 0x8028CAA4: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8028CAA8: cfc1        $v1, $FpcCsr
    ctx->r3 = get_cop1_cs();
    // 0x8028CAAC: nop

    // 0x8028CAB0: andi        $v1, $v1, 0x78
    ctx->r3 = ctx->r3 & 0X78;
    // 0x8028CAB4: bne         $v1, $zero, L_8028CAC8
    if (ctx->r3 != 0) {
        // 0x8028CAB8: nop
    
            goto L_8028CAC8;
    }
    // 0x8028CAB8: nop

    // 0x8028CABC: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x8028CAC0: b           L_8028CAE0
    // 0x8028CAC4: or          $v1, $v1, $at
    ctx->r3 = ctx->r3 | ctx->r1;
        goto L_8028CAE0;
    // 0x8028CAC4: or          $v1, $v1, $at
    ctx->r3 = ctx->r3 | ctx->r1;
L_8028CAC8:
    // 0x8028CAC8: b           L_8028CAE0
    // 0x8028CACC: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
        goto L_8028CAE0;
    // 0x8028CACC: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
L_8028CAD0:
    // 0x8028CAD0: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x8028CAD4: nop

    // 0x8028CAD8: bltz        $v1, L_8028CAC8
    if (SIGNED(ctx->r3) < 0) {
        // 0x8028CADC: nop
    
            goto L_8028CAC8;
    }
    // 0x8028CADC: nop

L_8028CAE0:
    // 0x8028CAE0: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8028CAE4: sb          $v1, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r3;
    // 0x8028CAE8: sb          $v1, 0xD($a0)
    MEM_B(0XD, ctx->r4) = ctx->r3;
    // 0x8028CAEC: sb          $v1, 0xE($a0)
    MEM_B(0XE, ctx->r4) = ctx->r3;
    // 0x8028CAF0: sh          $zero, 0x6($a0)
    MEM_H(0X6, ctx->r4) = 0;
L_8028CAF4:
    // 0x8028CAF4: bne         $a2, $v0, L_8028CA58
    if (ctx->r6 != ctx->r2) {
        // 0x8028CAF8: addiu       $a0, $a0, 0x10
        ctx->r4 = ADD32(ctx->r4, 0X10);
            goto L_8028CA58;
    }
    // 0x8028CAF8: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x8028CAFC: beq         $v0, $a1, L_8028CD84
    if (ctx->r2 == ctx->r5) {
        // 0x8028CB00: lui         $at, 0x437F
        ctx->r1 = S32(0X437F << 16);
            goto L_8028CD84;
    }
L_8028CB00:
    // 0x8028CB00: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x8028CB04: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8028CB08: nop

L_8028CB0C:
    // 0x8028CB0C: lhu         $t8, 0x6($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X6);
    // 0x8028CB10: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8028CB14: beq         $t8, $zero, L_8028CBA8
    if (ctx->r24 == 0) {
        // 0x8028CB18: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8028CBA8;
    }
    // 0x8028CB18: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8028CB1C: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8028CB20: ctc1        $v1, $FpcCsr
    set_cop1_cs(ctx->r3);
    // 0x8028CB24: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8028CB28: cvt.w.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = CVT_W_S(ctx->f0.fl);
    // 0x8028CB2C: cfc1        $v1, $FpcCsr
    ctx->r3 = get_cop1_cs();
    // 0x8028CB30: nop

    // 0x8028CB34: andi        $v1, $v1, 0x78
    ctx->r3 = ctx->r3 & 0X78;
    // 0x8028CB38: beq         $v1, $zero, L_8028CB84
    if (ctx->r3 == 0) {
        // 0x8028CB3C: nop
    
            goto L_8028CB84;
    }
    // 0x8028CB3C: nop

    // 0x8028CB40: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8028CB44: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8028CB48: sub.s       $f6, $f0, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x8028CB4C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8028CB50: ctc1        $v1, $FpcCsr
    set_cop1_cs(ctx->r3);
    // 0x8028CB54: nop

    // 0x8028CB58: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8028CB5C: cfc1        $v1, $FpcCsr
    ctx->r3 = get_cop1_cs();
    // 0x8028CB60: nop

    // 0x8028CB64: andi        $v1, $v1, 0x78
    ctx->r3 = ctx->r3 & 0X78;
    // 0x8028CB68: bne         $v1, $zero, L_8028CB7C
    if (ctx->r3 != 0) {
        // 0x8028CB6C: nop
    
            goto L_8028CB7C;
    }
    // 0x8028CB6C: nop

    // 0x8028CB70: mfc1        $v1, $f6
    ctx->r3 = (int32_t)ctx->f6.u32l;
    // 0x8028CB74: b           L_8028CB94
    // 0x8028CB78: or          $v1, $v1, $at
    ctx->r3 = ctx->r3 | ctx->r1;
        goto L_8028CB94;
    // 0x8028CB78: or          $v1, $v1, $at
    ctx->r3 = ctx->r3 | ctx->r1;
L_8028CB7C:
    // 0x8028CB7C: b           L_8028CB94
    // 0x8028CB80: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
        goto L_8028CB94;
    // 0x8028CB80: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
L_8028CB84:
    // 0x8028CB84: mfc1        $v1, $f6
    ctx->r3 = (int32_t)ctx->f6.u32l;
    // 0x8028CB88: nop

    // 0x8028CB8C: bltz        $v1, L_8028CB7C
    if (SIGNED(ctx->r3) < 0) {
        // 0x8028CB90: nop
    
            goto L_8028CB7C;
    }
    // 0x8028CB90: nop

L_8028CB94:
    // 0x8028CB94: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8028CB98: sb          $v1, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r3;
    // 0x8028CB9C: sb          $v1, 0xD($a0)
    MEM_B(0XD, ctx->r4) = ctx->r3;
    // 0x8028CBA0: sb          $v1, 0xE($a0)
    MEM_B(0XE, ctx->r4) = ctx->r3;
    // 0x8028CBA4: sh          $zero, 0x6($a0)
    MEM_H(0X6, ctx->r4) = 0;
L_8028CBA8:
    // 0x8028CBA8: lhu         $t0, 0x16($a0)
    ctx->r8 = MEM_HU(ctx->r4, 0X16);
    // 0x8028CBAC: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x8028CBB0: beq         $t0, $zero, L_8028CC44
    if (ctx->r8 == 0) {
        // 0x8028CBB4: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8028CC44;
    }
    // 0x8028CBB4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8028CBB8: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x8028CBBC: ctc1        $v1, $FpcCsr
    set_cop1_cs(ctx->r3);
    // 0x8028CBC0: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8028CBC4: cvt.w.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = CVT_W_S(ctx->f0.fl);
    // 0x8028CBC8: cfc1        $v1, $FpcCsr
    ctx->r3 = get_cop1_cs();
    // 0x8028CBCC: nop

    // 0x8028CBD0: andi        $v1, $v1, 0x78
    ctx->r3 = ctx->r3 & 0X78;
    // 0x8028CBD4: beq         $v1, $zero, L_8028CC20
    if (ctx->r3 == 0) {
        // 0x8028CBD8: nop
    
            goto L_8028CC20;
    }
    // 0x8028CBD8: nop

    // 0x8028CBDC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8028CBE0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8028CBE4: sub.s       $f8, $f0, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x8028CBE8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8028CBEC: ctc1        $v1, $FpcCsr
    set_cop1_cs(ctx->r3);
    // 0x8028CBF0: nop

    // 0x8028CBF4: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8028CBF8: cfc1        $v1, $FpcCsr
    ctx->r3 = get_cop1_cs();
    // 0x8028CBFC: nop

    // 0x8028CC00: andi        $v1, $v1, 0x78
    ctx->r3 = ctx->r3 & 0X78;
    // 0x8028CC04: bne         $v1, $zero, L_8028CC18
    if (ctx->r3 != 0) {
        // 0x8028CC08: nop
    
            goto L_8028CC18;
    }
    // 0x8028CC08: nop

    // 0x8028CC0C: mfc1        $v1, $f8
    ctx->r3 = (int32_t)ctx->f8.u32l;
    // 0x8028CC10: b           L_8028CC30
    // 0x8028CC14: or          $v1, $v1, $at
    ctx->r3 = ctx->r3 | ctx->r1;
        goto L_8028CC30;
    // 0x8028CC14: or          $v1, $v1, $at
    ctx->r3 = ctx->r3 | ctx->r1;
L_8028CC18:
    // 0x8028CC18: b           L_8028CC30
    // 0x8028CC1C: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
        goto L_8028CC30;
    // 0x8028CC1C: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
L_8028CC20:
    // 0x8028CC20: mfc1        $v1, $f8
    ctx->r3 = (int32_t)ctx->f8.u32l;
    // 0x8028CC24: nop

    // 0x8028CC28: bltz        $v1, L_8028CC18
    if (SIGNED(ctx->r3) < 0) {
        // 0x8028CC2C: nop
    
            goto L_8028CC18;
    }
    // 0x8028CC2C: nop

L_8028CC30:
    // 0x8028CC30: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x8028CC34: sb          $v1, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r3;
    // 0x8028CC38: sb          $v1, 0xD($a0)
    MEM_B(0XD, ctx->r4) = ctx->r3;
    // 0x8028CC3C: sb          $v1, 0xE($a0)
    MEM_B(0XE, ctx->r4) = ctx->r3;
    // 0x8028CC40: sh          $zero, 0x6($a0)
    MEM_H(0X6, ctx->r4) = 0;
L_8028CC44:
    // 0x8028CC44: lhu         $t2, 0x16($a0)
    ctx->r10 = MEM_HU(ctx->r4, 0X16);
    // 0x8028CC48: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x8028CC4C: beq         $t2, $zero, L_8028CCE0
    if (ctx->r10 == 0) {
        // 0x8028CC50: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8028CCE0;
    }
    // 0x8028CC50: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8028CC54: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8028CC58: ctc1        $v1, $FpcCsr
    set_cop1_cs(ctx->r3);
    // 0x8028CC5C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8028CC60: cvt.w.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = CVT_W_S(ctx->f0.fl);
    // 0x8028CC64: cfc1        $v1, $FpcCsr
    ctx->r3 = get_cop1_cs();
    // 0x8028CC68: nop

    // 0x8028CC6C: andi        $v1, $v1, 0x78
    ctx->r3 = ctx->r3 & 0X78;
    // 0x8028CC70: beq         $v1, $zero, L_8028CCBC
    if (ctx->r3 == 0) {
        // 0x8028CC74: nop
    
            goto L_8028CCBC;
    }
    // 0x8028CC74: nop

    // 0x8028CC78: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8028CC7C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8028CC80: sub.s       $f10, $f0, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x8028CC84: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8028CC88: ctc1        $v1, $FpcCsr
    set_cop1_cs(ctx->r3);
    // 0x8028CC8C: nop

    // 0x8028CC90: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8028CC94: cfc1        $v1, $FpcCsr
    ctx->r3 = get_cop1_cs();
    // 0x8028CC98: nop

    // 0x8028CC9C: andi        $v1, $v1, 0x78
    ctx->r3 = ctx->r3 & 0X78;
    // 0x8028CCA0: bne         $v1, $zero, L_8028CCB4
    if (ctx->r3 != 0) {
        // 0x8028CCA4: nop
    
            goto L_8028CCB4;
    }
    // 0x8028CCA4: nop

    // 0x8028CCA8: mfc1        $v1, $f10
    ctx->r3 = (int32_t)ctx->f10.u32l;
    // 0x8028CCAC: b           L_8028CCCC
    // 0x8028CCB0: or          $v1, $v1, $at
    ctx->r3 = ctx->r3 | ctx->r1;
        goto L_8028CCCC;
    // 0x8028CCB0: or          $v1, $v1, $at
    ctx->r3 = ctx->r3 | ctx->r1;
L_8028CCB4:
    // 0x8028CCB4: b           L_8028CCCC
    // 0x8028CCB8: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
        goto L_8028CCCC;
    // 0x8028CCB8: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
L_8028CCBC:
    // 0x8028CCBC: mfc1        $v1, $f10
    ctx->r3 = (int32_t)ctx->f10.u32l;
    // 0x8028CCC0: nop

    // 0x8028CCC4: bltz        $v1, L_8028CCB4
    if (SIGNED(ctx->r3) < 0) {
        // 0x8028CCC8: nop
    
            goto L_8028CCB4;
    }
    // 0x8028CCC8: nop

L_8028CCCC:
    // 0x8028CCCC: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8028CCD0: sb          $v1, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r3;
    // 0x8028CCD4: sb          $v1, 0xD($a0)
    MEM_B(0XD, ctx->r4) = ctx->r3;
    // 0x8028CCD8: sb          $v1, 0xE($a0)
    MEM_B(0XE, ctx->r4) = ctx->r3;
    // 0x8028CCDC: sh          $zero, 0x6($a0)
    MEM_H(0X6, ctx->r4) = 0;
L_8028CCE0:
    // 0x8028CCE0: lhu         $t4, 0x16($a0)
    ctx->r12 = MEM_HU(ctx->r4, 0X16);
    // 0x8028CCE4: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x8028CCE8: beq         $t4, $zero, L_8028CD7C
    if (ctx->r12 == 0) {
        // 0x8028CCEC: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8028CD7C;
    }
    // 0x8028CCEC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8028CCF0: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8028CCF4: ctc1        $v1, $FpcCsr
    set_cop1_cs(ctx->r3);
    // 0x8028CCF8: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8028CCFC: cvt.w.s     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.u32l = CVT_W_S(ctx->f0.fl);
    // 0x8028CD00: cfc1        $v1, $FpcCsr
    ctx->r3 = get_cop1_cs();
    // 0x8028CD04: nop

    // 0x8028CD08: andi        $v1, $v1, 0x78
    ctx->r3 = ctx->r3 & 0X78;
    // 0x8028CD0C: beq         $v1, $zero, L_8028CD58
    if (ctx->r3 == 0) {
        // 0x8028CD10: nop
    
            goto L_8028CD58;
    }
    // 0x8028CD10: nop

    // 0x8028CD14: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8028CD18: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8028CD1C: sub.s       $f16, $f0, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f16.fl;
    // 0x8028CD20: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8028CD24: ctc1        $v1, $FpcCsr
    set_cop1_cs(ctx->r3);
    // 0x8028CD28: nop

    // 0x8028CD2C: cvt.w.s     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_S(ctx->f16.fl);
    // 0x8028CD30: cfc1        $v1, $FpcCsr
    ctx->r3 = get_cop1_cs();
    // 0x8028CD34: nop

    // 0x8028CD38: andi        $v1, $v1, 0x78
    ctx->r3 = ctx->r3 & 0X78;
    // 0x8028CD3C: bne         $v1, $zero, L_8028CD50
    if (ctx->r3 != 0) {
        // 0x8028CD40: nop
    
            goto L_8028CD50;
    }
    // 0x8028CD40: nop

    // 0x8028CD44: mfc1        $v1, $f16
    ctx->r3 = (int32_t)ctx->f16.u32l;
    // 0x8028CD48: b           L_8028CD68
    // 0x8028CD4C: or          $v1, $v1, $at
    ctx->r3 = ctx->r3 | ctx->r1;
        goto L_8028CD68;
    // 0x8028CD4C: or          $v1, $v1, $at
    ctx->r3 = ctx->r3 | ctx->r1;
L_8028CD50:
    // 0x8028CD50: b           L_8028CD68
    // 0x8028CD54: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
        goto L_8028CD68;
    // 0x8028CD54: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
L_8028CD58:
    // 0x8028CD58: mfc1        $v1, $f16
    ctx->r3 = (int32_t)ctx->f16.u32l;
    // 0x8028CD5C: nop

    // 0x8028CD60: bltz        $v1, L_8028CD50
    if (SIGNED(ctx->r3) < 0) {
        // 0x8028CD64: nop
    
            goto L_8028CD50;
    }
    // 0x8028CD64: nop

L_8028CD68:
    // 0x8028CD68: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8028CD6C: sb          $v1, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r3;
    // 0x8028CD70: sb          $v1, 0xD($a0)
    MEM_B(0XD, ctx->r4) = ctx->r3;
    // 0x8028CD74: sb          $v1, 0xE($a0)
    MEM_B(0XE, ctx->r4) = ctx->r3;
    // 0x8028CD78: sh          $zero, 0x6($a0)
    MEM_H(0X6, ctx->r4) = 0;
L_8028CD7C:
    // 0x8028CD7C: bne         $v0, $a1, L_8028CB0C
    if (ctx->r2 != ctx->r5) {
        // 0x8028CD80: addiu       $a0, $a0, 0x10
        ctx->r4 = ADD32(ctx->r4, 0X10);
            goto L_8028CB0C;
    }
    // 0x8028CD80: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
L_8028CD84:
    // 0x8028CD84: jr          $ra
    // 0x8028CD88: nop

    return;
    // 0x8028CD88: nop

;}
RECOMP_FUNC void func_8028CD8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028CD8C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028CD90: lwc1        $f12, -0x188($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X188);
    // 0x8028CD94: mtc1        $a1, $f14
    ctx->f14.u32l = ctx->r5;
    // 0x8028CD98: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8028CD9C: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8028CDA0: mtc1        $a3, $f20
    ctx->f20.u32l = ctx->r7;
    // 0x8028CDA4: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
    // 0x8028CDA8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8028CDAC: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8028CDB0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8028CDB4: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8028CDB8: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
    // 0x8028CDBC: bc1f        L_8028CDC8
    if (!c1cs) {
        // 0x8028CDC0: mov.s       $f2, $f20
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    ctx->f2.fl = ctx->f20.fl;
            goto L_8028CDC8;
    }
    // 0x8028CDC0: mov.s       $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    ctx->f2.fl = ctx->f20.fl;
    // 0x8028CDC4: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
L_8028CDC8:
    // 0x8028CDC8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028CDCC: lwc1        $f12, -0x184($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X184);
    // 0x8028CDD0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8028CDD4: c.lt.s      $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl < ctx->f12.fl;
    // 0x8028CDD8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028CDDC: bc1f        L_8028CDE8
    if (!c1cs) {
        // 0x8028CDE0: lui         $v0, 0x8012
        ctx->r2 = S32(0X8012 << 16);
            goto L_8028CDE8;
    }
    // 0x8028CDE0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8028CDE4: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
L_8028CDE8:
    // 0x8028CDE8: lwc1        $f12, -0x180($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X180);
    // 0x8028CDEC: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8028CDF0: c.lt.s      $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f12.fl < ctx->f20.fl;
    // 0x8028CDF4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028CDF8: bc1f        L_8028CE04
    if (!c1cs) {
        // 0x8028CDFC: nop
    
            goto L_8028CE04;
    }
    // 0x8028CDFC: nop

    // 0x8028CE00: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
L_8028CE04:
    // 0x8028CE04: lwc1        $f12, -0x17C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X17C);
    // 0x8028CE08: nop

    // 0x8028CE0C: c.lt.s      $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f20.fl < ctx->f12.fl;
    // 0x8028CE10: nop

    // 0x8028CE14: bc1f        L_8028CE20
    if (!c1cs) {
        // 0x8028CE18: nop
    
            goto L_8028CE20;
    }
    // 0x8028CE18: nop

    // 0x8028CE1C: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
L_8028CE20:
    // 0x8028CE20: lb          $v0, -0x309B($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X309B);
    // 0x8028CE24: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8028CE28: beq         $v0, $at, L_8028CE38
    if (ctx->r2 == ctx->r1) {
        // 0x8028CE2C: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_8028CE38;
    }
    // 0x8028CE2C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8028CE30: bne         $v0, $at, L_8028CE44
    if (ctx->r2 != ctx->r1) {
        // 0x8028CE34: nop
    
            goto L_8028CE44;
    }
    // 0x8028CE34: nop

L_8028CE38:
    // 0x8028CE38: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8028CE3C: nop

    // 0x8028CE40: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
L_8028CE44:
    // 0x8028CE44: c.eq.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl == ctx->f16.fl;
    // 0x8028CE48: nop

    // 0x8028CE4C: bc1f        L_8028CE70
    if (!c1cs) {
        // 0x8028CE50: nop
    
            goto L_8028CE70;
    }
    // 0x8028CE50: nop

    // 0x8028CE54: c.eq.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl == ctx->f16.fl;
    // 0x8028CE58: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x8028CE5C: bc1f        L_8028CE70
    if (!c1cs) {
        // 0x8028CE60: nop
    
            goto L_8028CE70;
    }
    // 0x8028CE60: nop

    // 0x8028CE64: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8028CE68: b           L_8028CEF4
    // 0x8028CE6C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8028CEF4;
    // 0x8028CE6C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8028CE70:
    // 0x8028CE70: mul.s       $f6, $f4, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f4.fl);
    // 0x8028CE74: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8028CE78: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8028CE7C: nop

    // 0x8028CE80: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8028CE84: sub.s       $f14, $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f14.fl - ctx->f0.fl;
    // 0x8028CE88: mul.s       $f4, $f14, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x8028CE8C: sub.s       $f20, $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f2.fl;
    // 0x8028CE90: mul.s       $f8, $f20, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x8028CE94: add.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x8028CE98: jal         0x8007FA40
    // 0x8028CE9C: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    func_8007FA40(rdram, ctx);
        goto after_0;
    // 0x8028CE9C: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    after_0:
    // 0x8028CEA0: jal         0x8007FA40
    // 0x8028CEA4: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    func_8007FA40(rdram, ctx);
        goto after_1;
    // 0x8028CEA4: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_1:
    // 0x8028CEA8: lwc1        $f14, 0x30($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8028CEAC: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x8028CEB0: sub.s       $f4, $f14, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f14.fl - ctx->f0.fl;
    // 0x8028CEB4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8028CEB8: div.s       $f10, $f4, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = DIV_S(ctx->f4.fl, ctx->f14.fl);
    // 0x8028CEBC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8028CEC0: mul.s       $f2, $f10, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x8028CEC4: c.lt.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl < ctx->f16.fl;
    // 0x8028CEC8: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
    // 0x8028CECC: bc1f        L_8028CED8
    if (!c1cs) {
        // 0x8028CED0: nop
    
            goto L_8028CED8;
    }
    // 0x8028CED0: nop

    // 0x8028CED4: mov.s       $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = ctx->f16.fl;
L_8028CED8:
    // 0x8028CED8: c.lt.s      $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f18.fl < ctx->f12.fl;
    // 0x8028CEDC: nop

    // 0x8028CEE0: bc1f        L_8028CEEC
    if (!c1cs) {
        // 0x8028CEE4: nop
    
            goto L_8028CEEC;
    }
    // 0x8028CEE4: nop

    // 0x8028CEE8: mov.s       $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = ctx->f18.fl;
L_8028CEEC:
    // 0x8028CEEC: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    // 0x8028CEF0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8028CEF4:
    // 0x8028CEF4: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x8028CEF8: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8028CEFC: jr          $ra
    // 0x8028CF00: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8028CF00: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8028CF04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028CF04: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x8028CF08: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x8028CF0C: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x8028CF10: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x8028CF14: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8028CF18: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x8028CF1C: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x8028CF20: swc1        $f31, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x8028CF24: swc1        $f30, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f30.u32l;
    // 0x8028CF28: swc1        $f29, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x8028CF2C: swc1        $f28, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f28.u32l;
    // 0x8028CF30: swc1        $f27, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x8028CF34: swc1        $f26, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f26.u32l;
    // 0x8028CF38: swc1        $f25, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x8028CF3C: swc1        $f24, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f24.u32l;
    // 0x8028CF40: swc1        $f23, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8028CF44: swc1        $f22, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f22.u32l;
    // 0x8028CF48: swc1        $f21, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8028CF4C: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x8028CF50: blez        $a1, L_8028D114
    if (SIGNED(ctx->r5) <= 0) {
        // 0x8028CF54: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_8028D114;
    }
    // 0x8028CF54: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_8028CF58:
    // 0x8028CF58: lhu         $t6, 0x6($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X6);
    // 0x8028CF5C: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x8028CF60: beq         $t6, $zero, L_8028D108
    if (ctx->r14 == 0) {
        // 0x8028CF64: nop
    
            goto L_8028D108;
    }
    // 0x8028CF64: nop

    // 0x8028CF68: lh          $t9, 0x0($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X0);
    // 0x8028CF6C: lh          $t1, 0x4($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X4);
    // 0x8028CF70: lb          $t7, 0xC($s0)
    ctx->r15 = MEM_B(ctx->r16, 0XC);
    // 0x8028CF74: lb          $t8, 0xE($s0)
    ctx->r24 = MEM_B(ctx->r16, 0XE);
    // 0x8028CF78: lh          $t0, 0x2($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X2);
    // 0x8028CF7C: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x8028CF80: mtc1        $t1, $f16
    ctx->f16.u32l = ctx->r9;
    // 0x8028CF84: cvt.s.w     $f26, $f8
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 8);
    ctx->f26.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8028CF88: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8028CF8C: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x8028CF90: cvt.s.w     $f30, $f16
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 16);
    ctx->f30.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8028CF94: mtc1        $t0, $f10
    ctx->f10.u32l = ctx->r8;
    // 0x8028CF98: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x8028CF9C: mov.s       $f14, $f30
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 30);
    ctx->f14.fl = ctx->f30.fl;
    // 0x8028CFA0: mov.s       $f12, $f26
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 26);
    ctx->f12.fl = ctx->f26.fl;
    // 0x8028CFA4: cvt.s.w     $f22, $f4
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    ctx->f22.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8028CFA8: cvt.s.w     $f24, $f6
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 6);
    ctx->f24.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8028CFAC: jal         0x8028C9BC
    // 0x8028CFB0: cvt.s.w     $f28, $f10
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 10);
    ctx->f28.fl = CVT_S_W(ctx->f10.u32l);
    func_8028C9BC(rdram, ctx);
        goto after_0;
    // 0x8028CFB0: cvt.s.w     $f28, $f10
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 10);
    ctx->f28.fl = CVT_S_W(ctx->f10.u32l);
    after_0:
    // 0x8028CFB4: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8028CFB8: bne         $v0, $zero, L_8028D050
    if (ctx->r2 != 0) {
        // 0x8028CFBC: lui         $at, 0x4220
        ctx->r1 = S32(0X4220 << 16);
            goto L_8028D050;
    }
    // 0x8028CFBC: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x8028CFC0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8028CFC4: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x8028CFC8: c.lt.s      $f28, $f18
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f28.fl < ctx->f18.fl;
    // 0x8028CFCC: nop

    // 0x8028CFD0: bc1f        L_8028D050
    if (!c1cs) {
        // 0x8028CFD4: nop
    
            goto L_8028D050;
    }
    // 0x8028CFD4: nop

    // 0x8028CFD8: c.lt.s      $f22, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f22.fl < ctx->f2.fl;
    // 0x8028CFDC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8028CFE0: bc1f        L_8028CFF0
    if (!c1cs) {
        // 0x8028CFE4: lui         $at, 0x4248
        ctx->r1 = S32(0X4248 << 16);
            goto L_8028CFF0;
    }
    // 0x8028CFE4: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x8028CFE8: b           L_8028CFF4
    // 0x8028CFEC: neg.s       $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = -ctx->f22.fl;
        goto L_8028CFF4;
    // 0x8028CFEC: neg.s       $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = -ctx->f22.fl;
L_8028CFF0:
    // 0x8028CFF0: mov.s       $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    ctx->f0.fl = ctx->f22.fl;
L_8028CFF4:
    // 0x8028CFF4: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x8028CFF8: nop

    // 0x8028CFFC: bc1f        L_8028D050
    if (!c1cs) {
        // 0x8028D000: nop
    
            goto L_8028D050;
    }
    // 0x8028D000: nop

    // 0x8028D004: c.lt.s      $f24, $f2
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f24.fl < ctx->f2.fl;
    // 0x8028D008: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8028D00C: bc1f        L_8028D01C
    if (!c1cs) {
        // 0x8028D010: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8028D01C;
    }
    // 0x8028D010: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8028D014: b           L_8028D020
    // 0x8028D018: neg.s       $f0, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f0.fl = -ctx->f24.fl;
        goto L_8028D020;
    // 0x8028D018: neg.s       $f0, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f0.fl = -ctx->f24.fl;
L_8028D01C:
    // 0x8028D01C: mov.s       $f0, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    ctx->f0.fl = ctx->f24.fl;
L_8028D020:
    // 0x8028D020: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x8028D024: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x8028D028: bc1f        L_8028D050
    if (!c1cs) {
        // 0x8028D02C: nop
    
            goto L_8028D050;
    }
    // 0x8028D02C: nop

    // 0x8028D030: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8028D034: mfc1        $a1, $f26
    ctx->r5 = (int32_t)ctx->f26.u32l;
    // 0x8028D038: mfc1        $a2, $f28
    ctx->r6 = (int32_t)ctx->f28.u32l;
    // 0x8028D03C: mfc1        $a3, $f30
    ctx->r7 = (int32_t)ctx->f30.u32l;
    // 0x8028D040: jal         0x8028CD8C
    // 0x8028D044: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_8028CD8C(rdram, ctx);
        goto after_1;
    // 0x8028D044: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x8028D048: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8028D04C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
L_8028D050:
    // 0x8028D050: c.lt.s      $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f20.fl < ctx->f2.fl;
    // 0x8028D054: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x8028D058: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8028D05C: bc1f        L_8028D068
    if (!c1cs) {
        // 0x8028D060: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8028D068;
    }
    // 0x8028D060: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8028D064: mov.s       $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    ctx->f20.fl = ctx->f2.fl;
L_8028D068:
    // 0x8028D068: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x8028D06C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8028D070: bc1f        L_8028D07C
    if (!c1cs) {
        // 0x8028D074: nop
    
            goto L_8028D07C;
    }
    // 0x8028D074: nop

    // 0x8028D078: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
L_8028D07C:
    // 0x8028D07C: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8028D080: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x8028D084: nop

    // 0x8028D088: cvt.w.s     $f10, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    ctx->f10.u32l = CVT_W_S(ctx->f20.fl);
    // 0x8028D08C: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x8028D090: nop

    // 0x8028D094: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x8028D098: beq         $v0, $zero, L_8028D0E4
    if (ctx->r2 == 0) {
        // 0x8028D09C: nop
    
            goto L_8028D0E4;
    }
    // 0x8028D09C: nop

    // 0x8028D0A0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8028D0A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8028D0A8: sub.s       $f10, $f20, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f20.fl - ctx->f10.fl;
    // 0x8028D0AC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8028D0B0: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x8028D0B4: nop

    // 0x8028D0B8: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8028D0BC: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x8028D0C0: nop

    // 0x8028D0C4: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x8028D0C8: bne         $v0, $zero, L_8028D0DC
    if (ctx->r2 != 0) {
        // 0x8028D0CC: nop
    
            goto L_8028D0DC;
    }
    // 0x8028D0CC: nop

    // 0x8028D0D0: mfc1        $v0, $f10
    ctx->r2 = (int32_t)ctx->f10.u32l;
    // 0x8028D0D4: b           L_8028D0F4
    // 0x8028D0D8: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
        goto L_8028D0F4;
    // 0x8028D0D8: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
L_8028D0DC:
    // 0x8028D0DC: b           L_8028D0F4
    // 0x8028D0E0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8028D0F4;
    // 0x8028D0E0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8028D0E4:
    // 0x8028D0E4: mfc1        $v0, $f10
    ctx->r2 = (int32_t)ctx->f10.u32l;
    // 0x8028D0E8: nop

    // 0x8028D0EC: bltz        $v0, L_8028D0DC
    if (SIGNED(ctx->r2) < 0) {
        // 0x8028D0F0: nop
    
            goto L_8028D0DC;
    }
    // 0x8028D0F0: nop

L_8028D0F4:
    // 0x8028D0F4: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x8028D0F8: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x8028D0FC: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x8028D100: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x8028D104: sh          $zero, 0x6($s0)
    MEM_H(0X6, ctx->r16) = 0;
L_8028D108:
    // 0x8028D108: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8028D10C: bne         $s1, $s2, L_8028CF58
    if (ctx->r17 != ctx->r18) {
        // 0x8028D110: addiu       $s0, $s0, 0x10
        ctx->r16 = ADD32(ctx->r16, 0X10);
            goto L_8028CF58;
    }
    // 0x8028D110: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
L_8028D114:
    // 0x8028D114: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x8028D118: lwc1        $f21, 0x20($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x8028D11C: lwc1        $f20, 0x24($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8028D120: lwc1        $f23, 0x28($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x8028D124: lwc1        $f22, 0x2C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8028D128: lwc1        $f25, 0x30($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x8028D12C: lwc1        $f24, 0x34($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8028D130: lwc1        $f27, 0x38($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x8028D134: lwc1        $f26, 0x3C($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8028D138: lwc1        $f29, 0x40($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x8028D13C: lwc1        $f28, 0x44($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8028D140: lwc1        $f31, 0x48($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X48);
    // 0x8028D144: lwc1        $f30, 0x4C($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8028D148: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x8028D14C: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x8028D150: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x8028D154: jr          $ra
    // 0x8028D158: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x8028D158: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x8028D15C: nop

;}
RECOMP_FUNC void func_8028D160(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028D160: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028D164: lwc1        $f2, 0x424($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X424);
    // 0x8028D168: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x8028D16C: addiu       $v0, $v0, 0x4890
    ctx->r2 = ADD32(ctx->r2, 0X4890);
    // 0x8028D170: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8028D174: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x8028D178: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8028D17C: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x8028D180: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8028D184: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8028D188: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x8028D18C: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x8028D190: sh          $t6, 0x1370($v0)
    MEM_H(0X1370, ctx->r2) = ctx->r14;
    // 0x8028D194: sb          $v1, 0x1372($v0)
    MEM_B(0X1372, ctx->r2) = ctx->r3;
    // 0x8028D198: sb          $zero, 0x1373($v0)
    MEM_B(0X1373, ctx->r2) = 0;
    // 0x8028D19C: sw          $zero, 0x1398($v0)
    MEM_W(0X1398, ctx->r2) = 0;
    // 0x8028D1A0: sh          $a0, 0x13A4($v0)
    MEM_H(0X13A4, ctx->r2) = ctx->r4;
    // 0x8028D1A4: sb          $v1, 0x13A6($v0)
    MEM_B(0X13A6, ctx->r2) = ctx->r3;
    // 0x8028D1A8: sb          $zero, 0x13A7($v0)
    MEM_B(0X13A7, ctx->r2) = 0;
    // 0x8028D1AC: sw          $zero, 0x13CC($v0)
    MEM_W(0X13CC, ctx->r2) = 0;
    // 0x8028D1B0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028D1B4: swc1        $f2, 0x138C($v0)
    MEM_W(0X138C, ctx->r2) = ctx->f2.u32l;
    // 0x8028D1B8: swc1        $f2, 0x1390($v0)
    MEM_W(0X1390, ctx->r2) = ctx->f2.u32l;
    // 0x8028D1BC: swc1        $f2, 0x1394($v0)
    MEM_W(0X1394, ctx->r2) = ctx->f2.u32l;
    // 0x8028D1C0: swc1        $f2, 0x13C0($v0)
    MEM_W(0X13C0, ctx->r2) = ctx->f2.u32l;
    // 0x8028D1C4: swc1        $f2, 0x13C4($v0)
    MEM_W(0X13C4, ctx->r2) = ctx->f2.u32l;
    // 0x8028D1C8: swc1        $f2, 0x13C8($v0)
    MEM_W(0X13C8, ctx->r2) = ctx->f2.u32l;
    // 0x8028D1CC: swc1        $f0, 0x1374($v0)
    MEM_W(0X1374, ctx->r2) = ctx->f0.u32l;
    // 0x8028D1D0: swc1        $f0, 0x1378($v0)
    MEM_W(0X1378, ctx->r2) = ctx->f0.u32l;
    // 0x8028D1D4: swc1        $f0, 0x137C($v0)
    MEM_W(0X137C, ctx->r2) = ctx->f0.u32l;
    // 0x8028D1D8: swc1        $f0, 0x1380($v0)
    MEM_W(0X1380, ctx->r2) = ctx->f0.u32l;
    // 0x8028D1DC: swc1        $f0, 0x1388($v0)
    MEM_W(0X1388, ctx->r2) = ctx->f0.u32l;
    // 0x8028D1E0: swc1        $f0, 0x13A8($v0)
    MEM_W(0X13A8, ctx->r2) = ctx->f0.u32l;
    // 0x8028D1E4: swc1        $f0, 0x13AC($v0)
    MEM_W(0X13AC, ctx->r2) = ctx->f0.u32l;
    // 0x8028D1E8: swc1        $f0, 0x13B0($v0)
    MEM_W(0X13B0, ctx->r2) = ctx->f0.u32l;
    // 0x8028D1EC: swc1        $f0, 0x13B4($v0)
    MEM_W(0X13B4, ctx->r2) = ctx->f0.u32l;
    // 0x8028D1F0: swc1        $f0, 0x13BC($v0)
    MEM_W(0X13BC, ctx->r2) = ctx->f0.u32l;
    // 0x8028D1F4: swc1        $f12, 0x1384($v0)
    MEM_W(0X1384, ctx->r2) = ctx->f12.u32l;
    // 0x8028D1F8: swc1        $f12, 0x13B8($v0)
    MEM_W(0X13B8, ctx->r2) = ctx->f12.u32l;
    // 0x8028D1FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8028D200: swc1        $f4, 0x39C0($at)
    MEM_W(0X39C0, ctx->r1) = ctx->f4.u32l;
    // 0x8028D204: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8028D208: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028D20C: jal         0x80293374
    // 0x8028D210: sb          $zero, 0x39D8($at)
    MEM_B(0X39D8, ctx->r1) = 0;
    func_80293374(rdram, ctx);
        goto after_0;
    // 0x8028D210: sb          $zero, 0x39D8($at)
    MEM_B(0X39D8, ctx->r1) = 0;
    after_0:
    // 0x8028D214: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028D218: lwc1        $f2, 0x428($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X428);
    // 0x8028D21C: lui         $at, 0xC3AF
    ctx->r1 = S32(0XC3AF << 16);
    // 0x8028D220: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8028D224: lui         $at, 0x43AF
    ctx->r1 = S32(0X43AF << 16);
    // 0x8028D228: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8028D22C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028D230: lwc1        $f16, 0x42C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X42C);
    // 0x8028D234: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028D238: lwc1        $f6, 0x3918($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3918);
    // 0x8028D23C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028D240: swc1        $f6, 0x3994($at)
    MEM_W(0X3994, ctx->r1) = ctx->f6.u32l;
    // 0x8028D244: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028D248: lwc1        $f8, 0x3910($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X3910);
    // 0x8028D24C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028D250: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8028D254: swc1        $f8, 0x398C($at)
    MEM_W(0X398C, ctx->r1) = ctx->f8.u32l;
    // 0x8028D258: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028D25C: swc1        $f0, 0x3924($at)
    MEM_W(0X3924, ctx->r1) = ctx->f0.u32l;
    // 0x8028D260: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8028D264: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028D268: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x8028D26C: sb          $v1, 0x3A21($at)
    MEM_B(0X3A21, ctx->r1) = ctx->r3;
    // 0x8028D270: addiu       $v0, $v0, 0x4890
    ctx->r2 = ADD32(ctx->r2, 0X4890);
    // 0x8028D274: lui         $at, 0xC3FE
    ctx->r1 = S32(0XC3FE << 16);
    // 0x8028D278: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8028D27C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x8028D280: sh          $v1, 0x13D8($v0)
    MEM_H(0X13D8, ctx->r2) = ctx->r3;
    // 0x8028D284: sb          $a0, 0x13DA($v0)
    MEM_B(0X13DA, ctx->r2) = ctx->r4;
    // 0x8028D288: sb          $zero, 0x13DB($v0)
    MEM_B(0X13DB, ctx->r2) = 0;
    // 0x8028D28C: sw          $zero, 0x1400($v0)
    MEM_W(0X1400, ctx->r2) = 0;
    // 0x8028D290: sh          $v1, 0x140C($v0)
    MEM_H(0X140C, ctx->r2) = ctx->r3;
    // 0x8028D294: sb          $a0, 0x140E($v0)
    MEM_B(0X140E, ctx->r2) = ctx->r4;
    // 0x8028D298: sb          $zero, 0x140F($v0)
    MEM_B(0X140F, ctx->r2) = 0;
    // 0x8028D29C: sw          $zero, 0x1434($v0)
    MEM_W(0X1434, ctx->r2) = 0;
    // 0x8028D2A0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028D2A4: swc1        $f2, 0x13F4($v0)
    MEM_W(0X13F4, ctx->r2) = ctx->f2.u32l;
    // 0x8028D2A8: swc1        $f2, 0x13F8($v0)
    MEM_W(0X13F8, ctx->r2) = ctx->f2.u32l;
    // 0x8028D2AC: swc1        $f2, 0x13FC($v0)
    MEM_W(0X13FC, ctx->r2) = ctx->f2.u32l;
    // 0x8028D2B0: swc1        $f12, 0x13DC($v0)
    MEM_W(0X13DC, ctx->r2) = ctx->f12.u32l;
    // 0x8028D2B4: swc1        $f14, 0x1410($v0)
    MEM_W(0X1410, ctx->r2) = ctx->f14.u32l;
    // 0x8028D2B8: swc1        $f0, 0x13E0($v0)
    MEM_W(0X13E0, ctx->r2) = ctx->f0.u32l;
    // 0x8028D2BC: swc1        $f0, 0x13E8($v0)
    MEM_W(0X13E8, ctx->r2) = ctx->f0.u32l;
    // 0x8028D2C0: swc1        $f0, 0x13EC($v0)
    MEM_W(0X13EC, ctx->r2) = ctx->f0.u32l;
    // 0x8028D2C4: swc1        $f0, 0x13F0($v0)
    MEM_W(0X13F0, ctx->r2) = ctx->f0.u32l;
    // 0x8028D2C8: swc1        $f0, 0x1414($v0)
    MEM_W(0X1414, ctx->r2) = ctx->f0.u32l;
    // 0x8028D2CC: swc1        $f10, 0x13E4($v0)
    MEM_W(0X13E4, ctx->r2) = ctx->f10.u32l;
    // 0x8028D2D0: lwc1        $f18, 0x430($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X430);
    // 0x8028D2D4: sh          $v1, 0x1440($v0)
    MEM_H(0X1440, ctx->r2) = ctx->r3;
    // 0x8028D2D8: sb          $a0, 0x1442($v0)
    MEM_B(0X1442, ctx->r2) = ctx->r4;
    // 0x8028D2DC: sb          $zero, 0x1443($v0)
    MEM_B(0X1443, ctx->r2) = 0;
    // 0x8028D2E0: sw          $zero, 0x1468($v0)
    MEM_W(0X1468, ctx->r2) = 0;
    // 0x8028D2E4: sh          $v1, 0x1474($v0)
    MEM_H(0X1474, ctx->r2) = ctx->r3;
    // 0x8028D2E8: sb          $a0, 0x1476($v0)
    MEM_B(0X1476, ctx->r2) = ctx->r4;
    // 0x8028D2EC: sb          $zero, 0x1477($v0)
    MEM_B(0X1477, ctx->r2) = 0;
    // 0x8028D2F0: sw          $zero, 0x149C($v0)
    MEM_W(0X149C, ctx->r2) = 0;
    // 0x8028D2F4: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x8028D2F8: swc1        $f2, 0x1428($v0)
    MEM_W(0X1428, ctx->r2) = ctx->f2.u32l;
    // 0x8028D2FC: swc1        $f2, 0x142C($v0)
    MEM_W(0X142C, ctx->r2) = ctx->f2.u32l;
    // 0x8028D300: swc1        $f2, 0x1430($v0)
    MEM_W(0X1430, ctx->r2) = ctx->f2.u32l;
    // 0x8028D304: swc1        $f2, 0x145C($v0)
    MEM_W(0X145C, ctx->r2) = ctx->f2.u32l;
    // 0x8028D308: swc1        $f2, 0x1460($v0)
    MEM_W(0X1460, ctx->r2) = ctx->f2.u32l;
    // 0x8028D30C: swc1        $f2, 0x1464($v0)
    MEM_W(0X1464, ctx->r2) = ctx->f2.u32l;
    // 0x8028D310: swc1        $f2, 0x1490($v0)
    MEM_W(0X1490, ctx->r2) = ctx->f2.u32l;
    // 0x8028D314: swc1        $f2, 0x1494($v0)
    MEM_W(0X1494, ctx->r2) = ctx->f2.u32l;
    // 0x8028D318: swc1        $f2, 0x1498($v0)
    MEM_W(0X1498, ctx->r2) = ctx->f2.u32l;
    // 0x8028D31C: swc1        $f12, 0x1478($v0)
    MEM_W(0X1478, ctx->r2) = ctx->f12.u32l;
    // 0x8028D320: swc1        $f14, 0x1444($v0)
    MEM_W(0X1444, ctx->r2) = ctx->f14.u32l;
    // 0x8028D324: swc1        $f16, 0x144C($v0)
    MEM_W(0X144C, ctx->r2) = ctx->f16.u32l;
    // 0x8028D328: swc1        $f16, 0x1480($v0)
    MEM_W(0X1480, ctx->r2) = ctx->f16.u32l;
    // 0x8028D32C: swc1        $f0, 0x141C($v0)
    MEM_W(0X141C, ctx->r2) = ctx->f0.u32l;
    // 0x8028D330: swc1        $f0, 0x1420($v0)
    MEM_W(0X1420, ctx->r2) = ctx->f0.u32l;
    // 0x8028D334: swc1        $f0, 0x1424($v0)
    MEM_W(0X1424, ctx->r2) = ctx->f0.u32l;
    // 0x8028D338: swc1        $f0, 0x1448($v0)
    MEM_W(0X1448, ctx->r2) = ctx->f0.u32l;
    // 0x8028D33C: swc1        $f0, 0x1450($v0)
    MEM_W(0X1450, ctx->r2) = ctx->f0.u32l;
    // 0x8028D340: swc1        $f0, 0x1454($v0)
    MEM_W(0X1454, ctx->r2) = ctx->f0.u32l;
    // 0x8028D344: swc1        $f0, 0x1458($v0)
    MEM_W(0X1458, ctx->r2) = ctx->f0.u32l;
    // 0x8028D348: swc1        $f0, 0x147C($v0)
    MEM_W(0X147C, ctx->r2) = ctx->f0.u32l;
    // 0x8028D34C: swc1        $f0, 0x1484($v0)
    MEM_W(0X1484, ctx->r2) = ctx->f0.u32l;
    // 0x8028D350: swc1        $f0, 0x1488($v0)
    MEM_W(0X1488, ctx->r2) = ctx->f0.u32l;
    // 0x8028D354: swc1        $f0, 0x148C($v0)
    MEM_W(0X148C, ctx->r2) = ctx->f0.u32l;
    // 0x8028D358: swc1        $f18, 0x1418($v0)
    MEM_W(0X1418, ctx->r2) = ctx->f18.u32l;
    // 0x8028D35C: lw          $t7, -0x2F98($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X2F98);
    // 0x8028D360: lui         $t8, 0x3
    ctx->r24 = S32(0X3 << 16);
    // 0x8028D364: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8028D368: lbu         $t8, -0x7664($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X7664);
    // 0x8028D36C: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x8028D370: beq         $t8, $at, L_8028D388
    if (ctx->r24 == ctx->r1) {
        // 0x8028D374: nop
    
            goto L_8028D388;
    }
    // 0x8028D374: nop

    // 0x8028D378: jal         0x8005F560
    // 0x8028D37C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8005F560(rdram, ctx);
        goto after_1;
    // 0x8028D37C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x8028D380: b           L_8028D394
    // 0x8028D384: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8028D394;
    // 0x8028D384: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8028D388:
    // 0x8028D388: jal         0x8005F560
    // 0x8028D38C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_8005F560(rdram, ctx);
        goto after_2;
    // 0x8028D38C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_2:
    // 0x8028D390: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8028D394:
    // 0x8028D394: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8028D398: jr          $ra
    // 0x8028D39C: nop

    return;
    // 0x8028D39C: nop

;}
RECOMP_FUNC void func_8028D3A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028D3A0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8028D3A4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8028D3A8: addiu       $v0, $v0, -0x2CF0
    ctx->r2 = ADD32(ctx->r2, -0X2CF0);
    // 0x8028D3AC: sb          $zero, -0x309B($at)
    MEM_B(-0X309B, ctx->r1) = 0;
    // 0x8028D3B0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8028D3B4: sh          $zero, 0xA($v0)
    MEM_H(0XA, ctx->r2) = 0;
    // 0x8028D3B8: sh          $zero, 0xA9E($v0)
    MEM_H(0XA9E, ctx->r2) = 0;
    // 0x8028D3BC: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x8028D3C0: jr          $ra
    // 0x8028D3C4: sb          $t6, 0xA94($v0)
    MEM_B(0XA94, ctx->r2) = ctx->r14;
    return;
    // 0x8028D3C4: sb          $t6, 0xA94($v0)
    MEM_B(0XA94, ctx->r2) = ctx->r14;
;}
RECOMP_FUNC void func_8028D3C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028D3C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8028D3CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8028D3D0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8028D3D4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028D3D8: sb          $t6, 0x3A21($at)
    MEM_B(0X3A21, ctx->r1) = ctx->r14;
    // 0x8028D3DC: jal         0x800839E0
    // 0x8028D3E0: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    osViSetSpecialFeatures_recomp(rdram, ctx);
        goto after_0;
    // 0x8028D3E0: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    after_0:
    // 0x8028D3E4: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8028D3E8: lbu         $t7, -0x309B($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X309B);
    // 0x8028D3EC: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x8028D3F0: sltiu       $at, $t7, 0x5
    ctx->r1 = ctx->r15 < 0X5 ? 1 : 0;
    // 0x8028D3F4: beq         $at, $zero, L_8028D478
    if (ctx->r1 == 0) {
        // 0x8028D3F8: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_8028D478;
    }
    // 0x8028D3F8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8028D3FC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028D400: addu        $at, $at, $t7
    gpr jr_addend_8028D40C = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8028D404: lw          $t7, 0x434($at)
    ctx->r15 = ADD32(ctx->r1, 0X434);
    // 0x8028D408: nop

    // 0x8028D40C: jr          $t7
    // 0x8028D410: nop

    switch (jr_addend_8028D40C >> 2) {
        case 0: goto L_8028D414; break;
        case 1: goto L_8028D428; break;
        case 2: goto L_8028D43C; break;
        case 3: goto L_8028D450; break;
        case 4: goto L_8028D464; break;
        default: switch_error(__func__, 0x8028D40C, 0x802C0434);
    }
    // 0x8028D410: nop

L_8028D414:
    // 0x8028D414: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x8028D418: jal         0x80025A10
    // 0x8028D41C: addiu       $a0, $a0, 0x3BF8
    ctx->r4 = ADD32(ctx->r4, 0X3BF8);
    func_80025A10(rdram, ctx);
        goto after_1;
    // 0x8028D41C: addiu       $a0, $a0, 0x3BF8
    ctx->r4 = ADD32(ctx->r4, 0X3BF8);
    after_1:
    // 0x8028D420: b           L_8028D484
    // 0x8028D424: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8028D484;
    // 0x8028D424: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8028D428:
    // 0x8028D428: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x8028D42C: jal         0x80025A10
    // 0x8028D430: addiu       $a0, $a0, 0x3C10
    ctx->r4 = ADD32(ctx->r4, 0X3C10);
    func_80025A10(rdram, ctx);
        goto after_2;
    // 0x8028D430: addiu       $a0, $a0, 0x3C10
    ctx->r4 = ADD32(ctx->r4, 0X3C10);
    after_2:
    // 0x8028D434: b           L_8028D484
    // 0x8028D438: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8028D484;
    // 0x8028D438: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8028D43C:
    // 0x8028D43C: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x8028D440: jal         0x80025A10
    // 0x8028D444: addiu       $a0, $a0, 0x3C28
    ctx->r4 = ADD32(ctx->r4, 0X3C28);
    func_80025A10(rdram, ctx);
        goto after_3;
    // 0x8028D444: addiu       $a0, $a0, 0x3C28
    ctx->r4 = ADD32(ctx->r4, 0X3C28);
    after_3:
    // 0x8028D448: b           L_8028D484
    // 0x8028D44C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8028D484;
    // 0x8028D44C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8028D450:
    // 0x8028D450: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x8028D454: jal         0x80025A10
    // 0x8028D458: addiu       $a0, $a0, 0x3C40
    ctx->r4 = ADD32(ctx->r4, 0X3C40);
    func_80025A10(rdram, ctx);
        goto after_4;
    // 0x8028D458: addiu       $a0, $a0, 0x3C40
    ctx->r4 = ADD32(ctx->r4, 0X3C40);
    after_4:
    // 0x8028D45C: b           L_8028D484
    // 0x8028D460: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8028D484;
    // 0x8028D460: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8028D464:
    // 0x8028D464: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x8028D468: jal         0x80025A10
    // 0x8028D46C: addiu       $a0, $a0, 0x3C58
    ctx->r4 = ADD32(ctx->r4, 0X3C58);
    func_80025A10(rdram, ctx);
        goto after_5;
    // 0x8028D46C: addiu       $a0, $a0, 0x3C58
    ctx->r4 = ADD32(ctx->r4, 0X3C58);
    after_5:
    // 0x8028D470: b           L_8028D484
    // 0x8028D474: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8028D484;
    // 0x8028D474: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8028D478:
    // 0x8028D478: jal         0x80025A10
    // 0x8028D47C: addiu       $a0, $a0, 0x3C70
    ctx->r4 = ADD32(ctx->r4, 0X3C70);
    func_80025A10(rdram, ctx);
        goto after_6;
    // 0x8028D47C: addiu       $a0, $a0, 0x3C70
    ctx->r4 = ADD32(ctx->r4, 0X3C70);
    after_6:
    // 0x8028D480: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8028D484:
    // 0x8028D484: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8028D488: jr          $ra
    // 0x8028D48C: nop

    return;
    // 0x8028D48C: nop

;}
RECOMP_FUNC void func_8028D490(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028D490: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8028D494: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8028D498: jal         0x8028D680
    // 0x8028D49C: nop

    func_8028D680(rdram, ctx);
        goto after_0;
    // 0x8028D49C: nop

    after_0:
    // 0x8028D4A0: jal         0x8028D4E0
    // 0x8028D4A4: nop

    func_8028D4E0(rdram, ctx);
        goto after_1;
    // 0x8028D4A4: nop

    after_1:
    // 0x8028D4A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8028D4AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8028D4B0: jr          $ra
    // 0x8028D4B4: nop

    return;
    // 0x8028D4B4: nop

;}
RECOMP_FUNC void func_8028D4B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028D4B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8028D4BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8028D4C0: jal         0x8006033C
    // 0x8028D4C4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8006033C(rdram, ctx);
        goto after_0;
    // 0x8028D4C4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x8028D4C8: jal         0x8028D4E0
    // 0x8028D4CC: nop

    func_8028D4E0(rdram, ctx);
        goto after_1;
    // 0x8028D4CC: nop

    after_1:
    // 0x8028D4D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8028D4D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8028D4D8: jr          $ra
    // 0x8028D4DC: nop

    return;
    // 0x8028D4DC: nop

;}
RECOMP_FUNC void func_8028D4E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028D4E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8028D4E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8028D4E8: jal         0x8028DC70
    // 0x8028D4EC: nop

    func_8028DC70(rdram, ctx);
        goto after_0;
    // 0x8028D4EC: nop

    after_0:
    // 0x8028D4F0: jal         0x8028D508
    // 0x8028D4F4: nop

    func_8028D508(rdram, ctx);
        goto after_1;
    // 0x8028D4F4: nop

    after_1:
    // 0x8028D4F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8028D4FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8028D500: jr          $ra
    // 0x8028D504: nop

    return;
    // 0x8028D504: nop

;}
RECOMP_FUNC void func_8028D508(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028D508: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8028D50C: addiu       $v0, $v0, 0x3A21
    ctx->r2 = ADD32(ctx->r2, 0X3A21);
    // 0x8028D510: lbu         $t6, 0x0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X0);
    // 0x8028D514: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8028D518: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8028D51C: bne         $t6, $at, L_8028D5C8
    if (ctx->r14 != ctx->r1) {
        // 0x8028D520: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8028D5C8;
    }
    // 0x8028D520: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8028D524: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x8028D528: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8028D52C: lbu         $t7, -0x309B($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X309B);
    // 0x8028D530: nop

    // 0x8028D534: sltiu       $at, $t7, 0x5
    ctx->r1 = ctx->r15 < 0X5 ? 1 : 0;
    // 0x8028D538: beq         $at, $zero, L_8028D5A8
    if (ctx->r1 == 0) {
        // 0x8028D53C: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_8028D5A8;
    }
    // 0x8028D53C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8028D540: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028D544: addu        $at, $at, $t7
    gpr jr_addend_8028D550 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8028D548: lw          $t7, 0x448($at)
    ctx->r15 = ADD32(ctx->r1, 0X448);
    // 0x8028D54C: nop

    // 0x8028D550: jr          $t7
    // 0x8028D554: nop

    switch (jr_addend_8028D550 >> 2) {
        case 0: goto L_8028D558; break;
        case 1: goto L_8028D568; break;
        case 2: goto L_8028D578; break;
        case 3: goto L_8028D588; break;
        case 4: goto L_8028D598; break;
        default: switch_error(__func__, 0x8028D550, 0x802C0448);
    }
    // 0x8028D554: nop

L_8028D558:
    // 0x8028D558: jal         0x8029C660
    // 0x8028D55C: nop

    func_8029C660(rdram, ctx);
        goto after_0;
    // 0x8028D55C: nop

    after_0:
    // 0x8028D560: b           L_8028D5B0
    // 0x8028D564: nop

        goto L_8028D5B0;
    // 0x8028D564: nop

L_8028D568:
    // 0x8028D568: jal         0x8029CEE0
    // 0x8028D56C: nop

    func_8029CEE0(rdram, ctx);
        goto after_1;
    // 0x8028D56C: nop

    after_1:
    // 0x8028D570: b           L_8028D5B0
    // 0x8028D574: nop

        goto L_8028D5B0;
    // 0x8028D574: nop

L_8028D578:
    // 0x8028D578: jal         0x8029D6E4
    // 0x8028D57C: nop

    func_8029D6E4(rdram, ctx);
        goto after_2;
    // 0x8028D57C: nop

    after_2:
    // 0x8028D580: b           L_8028D5B0
    // 0x8028D584: nop

        goto L_8028D5B0;
    // 0x8028D584: nop

L_8028D588:
    // 0x8028D588: jal         0x8029DFC8
    // 0x8028D58C: nop

    func_8029DFC8(rdram, ctx);
        goto after_3;
    // 0x8028D58C: nop

    after_3:
    // 0x8028D590: b           L_8028D5B0
    // 0x8028D594: nop

        goto L_8028D5B0;
    // 0x8028D594: nop

L_8028D598:
    // 0x8028D598: jal         0x8029E86C
    // 0x8028D59C: nop

    func_8029E86C(rdram, ctx);
        goto after_4;
    // 0x8028D59C: nop

    after_4:
    // 0x8028D5A0: b           L_8028D5B0
    // 0x8028D5A4: nop

        goto L_8028D5B0;
    // 0x8028D5A4: nop

L_8028D5A8:
    // 0x8028D5A8: jal         0x8029F0D0
    // 0x8028D5AC: nop

    func_8029F0D0(rdram, ctx);
        goto after_5;
    // 0x8028D5AC: nop

    after_5:
L_8028D5B0:
    // 0x8028D5B0: jal         0x80009D40
    // 0x8028D5B4: nop

    func_80009D40(rdram, ctx);
        goto after_6;
    // 0x8028D5B4: nop

    after_6:
    // 0x8028D5B8: jal         0x800125D0
    // 0x8028D5BC: nop

    func_800125D0(rdram, ctx);
        goto after_7;
    // 0x8028D5BC: nop

    after_7:
    // 0x8028D5C0: b           L_8028D5D4
    // 0x8028D5C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8028D5D4;
    // 0x8028D5C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8028D5C8:
    // 0x8028D5C8: jal         0x8029F8C8
    // 0x8028D5CC: nop

    func_8029F8C8(rdram, ctx);
        goto after_8;
    // 0x8028D5CC: nop

    after_8:
    // 0x8028D5D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8028D5D4:
    // 0x8028D5D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8028D5D8: jr          $ra
    // 0x8028D5DC: nop

    return;
    // 0x8028D5DC: nop

;}
RECOMP_FUNC void func_8028D5E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028D5E0: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x8028D5E4: addiu       $v1, $v1, 0x3600
    ctx->r3 = ADD32(ctx->r3, 0X3600);
    // 0x8028D5E8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8028D5EC:
    // 0x8028D5EC: sll         $t6, $v0, 3
    ctx->r14 = S32(ctx->r2 << 3);
    // 0x8028D5F0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8028D5F4: andi        $t8, $v0, 0xFF
    ctx->r24 = ctx->r2 & 0XFF;
    // 0x8028D5F8: slti        $at, $t8, 0x32
    ctx->r1 = SIGNED(ctx->r24) < 0X32 ? 1 : 0;
    // 0x8028D5FC: addu        $t7, $v1, $t6
    ctx->r15 = ADD32(ctx->r3, ctx->r14);
    // 0x8028D600: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x8028D604: bne         $at, $zero, L_8028D5EC
    if (ctx->r1 != 0) {
        // 0x8028D608: sh          $zero, 0x0($t7)
        MEM_H(0X0, ctx->r15) = 0;
            goto L_8028D5EC;
    }
    // 0x8028D608: sh          $zero, 0x0($t7)
    MEM_H(0X0, ctx->r15) = 0;
    // 0x8028D60C: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x8028D610: addiu       $v1, $v1, 0x3830
    ctx->r3 = ADD32(ctx->r3, 0X3830);
    // 0x8028D614: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8028D618:
    // 0x8028D618: sll         $t9, $v0, 3
    ctx->r25 = S32(ctx->r2 << 3);
    // 0x8028D61C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8028D620: andi        $t1, $v0, 0xFF
    ctx->r9 = ctx->r2 & 0XFF;
    // 0x8028D624: slti        $at, $t1, 0x12
    ctx->r1 = SIGNED(ctx->r9) < 0X12 ? 1 : 0;
    // 0x8028D628: addu        $t0, $v1, $t9
    ctx->r8 = ADD32(ctx->r3, ctx->r25);
    // 0x8028D62C: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x8028D630: bne         $at, $zero, L_8028D618
    if (ctx->r1 != 0) {
        // 0x8028D634: sh          $zero, 0x0($t0)
        MEM_H(0X0, ctx->r8) = 0;
            goto L_8028D618;
    }
    // 0x8028D634: sh          $zero, 0x0($t0)
    MEM_H(0X0, ctx->r8) = 0;
    // 0x8028D638: lui         $a1, 0x2
    ctx->r5 = S32(0X2 << 16);
    // 0x8028D63C: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x8028D640: addiu       $v1, $v1, -0x3770
    ctx->r3 = ADD32(ctx->r3, -0X3770);
    // 0x8028D644: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x8028D648: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8028D64C: addiu       $a0, $zero, 0x34
    ctx->r4 = ADD32(0, 0X34);
L_8028D650:
    // 0x8028D650: multu       $v0, $a0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8028D654: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8028D658: andi        $t5, $v0, 0xFF
    ctx->r13 = ctx->r2 & 0XFF;
    // 0x8028D65C: slti        $at, $t5, 0x6
    ctx->r1 = SIGNED(ctx->r13) < 0X6 ? 1 : 0;
    // 0x8028D660: or          $v0, $t5, $zero
    ctx->r2 = ctx->r13 | 0;
    // 0x8028D664: mflo        $t2
    ctx->r10 = lo;
    // 0x8028D668: addu        $t3, $v1, $t2
    ctx->r11 = ADD32(ctx->r3, ctx->r10);
    // 0x8028D66C: addu        $t4, $t3, $a1
    ctx->r12 = ADD32(ctx->r11, ctx->r5);
    // 0x8028D670: bne         $at, $zero, L_8028D650
    if (ctx->r1 != 0) {
        // 0x8028D674: sh          $zero, 0x1370($t4)
        MEM_H(0X1370, ctx->r12) = 0;
            goto L_8028D650;
    }
    // 0x8028D674: sh          $zero, 0x1370($t4)
    MEM_H(0X1370, ctx->r12) = 0;
    // 0x8028D678: jr          $ra
    // 0x8028D67C: nop

    return;
    // 0x8028D67C: nop

;}
RECOMP_FUNC void func_8028D680(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028D680: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8028D684: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8028D688: jal         0x8006033C
    // 0x8028D68C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8006033C(rdram, ctx);
        goto after_0;
    // 0x8028D68C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x8028D690: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8028D694: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8028D698: jr          $ra
    // 0x8028D69C: nop

    return;
    // 0x8028D69C: nop

;}
RECOMP_FUNC void func_8028D6A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028D6A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8028D6A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8028D6A8: jal         0x8028D6DC
    // 0x8028D6AC: nop

    func_8028D6DC(rdram, ctx);
        goto after_0;
    // 0x8028D6AC: nop

    after_0:
    // 0x8028D6B0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028D6B4: lwc1        $f4, 0x397C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X397C);
    // 0x8028D6B8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028D6BC: swc1        $f4, 0x3974($at)
    MEM_W(0X3974, ctx->r1) = ctx->f4.u32l;
    // 0x8028D6C0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028D6C4: lwc1        $f6, 0x3978($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3978);
    // 0x8028D6C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8028D6CC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028D6D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8028D6D4: jr          $ra
    // 0x8028D6D8: swc1        $f6, 0x3970($at)
    MEM_W(0X3970, ctx->r1) = ctx->f6.u32l;
    return;
    // 0x8028D6D8: swc1        $f6, 0x3970($at)
    MEM_W(0X3970, ctx->r1) = ctx->f6.u32l;
;}
RECOMP_FUNC void func_8028D6DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028D6DC: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x8028D6E0: lw          $t6, -0x2F98($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X2F98);
    // 0x8028D6E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8028D6E8: lui         $t7, 0x3
    ctx->r15 = S32(0X3 << 16);
    // 0x8028D6EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8028D6F0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8028D6F4: lbu         $t7, -0x7664($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X7664);
    // 0x8028D6F8: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x8028D6FC: bne         $t7, $at, L_8028D71C
    if (ctx->r15 != ctx->r1) {
        // 0x8028D700: lui         $t8, 0x8011
        ctx->r24 = S32(0X8011 << 16);
            goto L_8028D71C;
    }
    // 0x8028D700: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8028D704: jal         0x80292C88
    // 0x8028D708: nop

    func_80292C88(rdram, ctx);
        goto after_0;
    // 0x8028D708: nop

    after_0:
    // 0x8028D70C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8028D710: lhu         $v1, 0xB78($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0XB78);
    // 0x8028D714: b           L_8028DB94
    // 0x8028D718: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
        goto L_8028DB94;
    // 0x8028D718: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_8028D71C:
    // 0x8028D71C: lbu         $t8, -0x301C($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X301C);
    // 0x8028D720: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028D724: andi        $t9, $t8, 0x4
    ctx->r25 = ctx->r24 & 0X4;
    // 0x8028D728: beq         $t9, $zero, L_8028D768
    if (ctx->r25 == 0) {
        // 0x8028D72C: lui         $t0, 0x8012
        ctx->r8 = S32(0X8012 << 16);
            goto L_8028D768;
    }
    // 0x8028D72C: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x8028D730: lwc1        $f0, 0x393C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X393C);
    // 0x8028D734: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028D738: swc1        $f0, 0x3970($at)
    MEM_W(0X3970, ctx->r1) = ctx->f0.u32l;
    // 0x8028D73C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028D740: lwc1        $f2, 0x3940($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X3940);
    // 0x8028D744: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028D748: swc1        $f2, 0x3974($at)
    MEM_W(0X3974, ctx->r1) = ctx->f2.u32l;
    // 0x8028D74C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028D750: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8028D754: swc1        $f0, 0x3978($at)
    MEM_W(0X3978, ctx->r1) = ctx->f0.u32l;
    // 0x8028D758: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028D75C: lhu         $v1, 0xB78($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0XB78);
    // 0x8028D760: b           L_8028DB90
    // 0x8028D764: swc1        $f2, 0x397C($at)
    MEM_W(0X397C, ctx->r1) = ctx->f2.u32l;
        goto L_8028DB90;
    // 0x8028D764: swc1        $f2, 0x397C($at)
    MEM_W(0X397C, ctx->r1) = ctx->f2.u32l;
L_8028D768:
    // 0x8028D768: lhu         $t0, -0x2CE8($t0)
    ctx->r8 = MEM_HU(ctx->r8, -0X2CE8);
    // 0x8028D76C: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x8028D770: andi        $t1, $t0, 0x100
    ctx->r9 = ctx->r8 & 0X100;
    // 0x8028D774: bne         $t1, $zero, L_8028D790
    if (ctx->r9 != 0) {
        // 0x8028D778: nop
    
            goto L_8028D790;
    }
    // 0x8028D778: nop

    // 0x8028D77C: lhu         $t2, -0x2254($t2)
    ctx->r10 = MEM_HU(ctx->r10, -0X2254);
    // 0x8028D780: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x8028D784: andi        $t3, $t2, 0x100
    ctx->r11 = ctx->r10 & 0X100;
    // 0x8028D788: beq         $t3, $zero, L_8028D7B8
    if (ctx->r11 == 0) {
        // 0x8028D78C: addiu       $a0, $a0, 0x39D8
        ctx->r4 = ADD32(ctx->r4, 0X39D8);
            goto L_8028D7B8;
    }
    // 0x8028D78C: addiu       $a0, $a0, 0x39D8
    ctx->r4 = ADD32(ctx->r4, 0X39D8);
L_8028D790:
    // 0x8028D790: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8028D794: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028D798: swc1        $f0, 0x3980($at)
    MEM_W(0X3980, ctx->r1) = ctx->f0.u32l;
    // 0x8028D79C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028D7A0: jal         0x802927B4
    // 0x8028D7A4: swc1        $f0, 0x3984($at)
    MEM_W(0X3984, ctx->r1) = ctx->f0.u32l;
    func_802927B4(rdram, ctx);
        goto after_1;
    // 0x8028D7A4: swc1        $f0, 0x3984($at)
    MEM_W(0X3984, ctx->r1) = ctx->f0.u32l;
    after_1:
    // 0x8028D7A8: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8028D7AC: lhu         $v1, 0xB78($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0XB78);
    // 0x8028D7B0: b           L_8028DB94
    // 0x8028D7B4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
        goto L_8028DB94;
    // 0x8028D7B4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_8028D7B8:
    // 0x8028D7B8: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x8028D7BC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028D7C0: beq         $v0, $zero, L_8028D7CC
    if (ctx->r2 == 0) {
        // 0x8028D7C4: addiu       $t4, $v0, -0x1
        ctx->r12 = ADD32(ctx->r2, -0X1);
            goto L_8028D7CC;
    }
    // 0x8028D7C4: addiu       $t4, $v0, -0x1
    ctx->r12 = ADD32(ctx->r2, -0X1);
    // 0x8028D7C8: sb          $t4, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r12;
L_8028D7CC:
    // 0x8028D7CC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8028D7D0: lhu         $v0, 0xB78($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XB78);
    // 0x8028D7D4: nop

    // 0x8028D7D8: bne         $v0, $zero, L_8028D8E0
    if (ctx->r2 != 0) {
        // 0x8028D7DC: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_8028D8E0;
    }
    // 0x8028D7DC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8028D7E0: jal         0x802933F0
    // 0x8028D7E4: nop

    func_802933F0(rdram, ctx);
        goto after_2;
    // 0x8028D7E4: nop

    after_2:
    // 0x8028D7E8: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8028D7EC: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x8028D7F0: nop

    // 0x8028D7F4: lw          $v1, 0x88($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X88);
    // 0x8028D7F8: nop

    // 0x8028D7FC: beq         $v1, $zero, L_8028D84C
    if (ctx->r3 == 0) {
        // 0x8028D800: nop
    
            goto L_8028D84C;
    }
    // 0x8028D800: nop

    // 0x8028D804: lwc1        $f4, 0x4C($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X4C);
    // 0x8028D808: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028D80C: swc1        $f4, 0x3978($at)
    MEM_W(0X3978, ctx->r1) = ctx->f4.u32l;
    // 0x8028D810: lw          $t5, 0x88($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X88);
    // 0x8028D814: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028D818: lwc1        $f6, 0x44($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X44);
    // 0x8028D81C: nop

    // 0x8028D820: swc1        $f6, 0x397C($at)
    MEM_W(0X397C, ctx->r1) = ctx->f6.u32l;
    // 0x8028D824: lw          $t6, 0x88($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X88);
    // 0x8028D828: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028D82C: lwc1        $f8, 0x78($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X78);
    // 0x8028D830: nop

    // 0x8028D834: swc1        $f8, 0x3980($at)
    MEM_W(0X3980, ctx->r1) = ctx->f8.u32l;
    // 0x8028D838: lw          $t7, 0x88($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X88);
    // 0x8028D83C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028D840: lwc1        $f10, 0x70($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X70);
    // 0x8028D844: b           L_8028D8D0
    // 0x8028D848: swc1        $f10, 0x3984($at)
    MEM_W(0X3984, ctx->r1) = ctx->f10.u32l;
        goto L_8028D8D0;
    // 0x8028D848: swc1        $f10, 0x3984($at)
    MEM_W(0X3984, ctx->r1) = ctx->f10.u32l;
L_8028D84C:
    // 0x8028D84C: lhu         $t8, 0xCE($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0XCE);
    // 0x8028D850: nop

    // 0x8028D854: beq         $t8, $zero, L_8028D8A0
    if (ctx->r24 == 0) {
        // 0x8028D858: nop
    
            goto L_8028D8A0;
    }
    // 0x8028D858: nop

    // 0x8028D85C: lh          $t9, 0xD8($v0)
    ctx->r25 = MEM_H(ctx->r2, 0XD8);
    // 0x8028D860: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028D864: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x8028D868: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8028D86C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8028D870: swc1        $f18, 0x3978($at)
    MEM_W(0X3978, ctx->r1) = ctx->f18.u32l;
    // 0x8028D874: lh          $t0, 0xDA($v0)
    ctx->r8 = MEM_H(ctx->r2, 0XDA);
    // 0x8028D878: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028D87C: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x8028D880: nop

    // 0x8028D884: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8028D888: swc1        $f6, 0x397C($at)
    MEM_W(0X397C, ctx->r1) = ctx->f6.u32l;
    // 0x8028D88C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028D890: swc1        $f0, 0x3980($at)
    MEM_W(0X3980, ctx->r1) = ctx->f0.u32l;
    // 0x8028D894: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028D898: b           L_8028D8D0
    // 0x8028D89C: swc1        $f0, 0x3984($at)
    MEM_W(0X3984, ctx->r1) = ctx->f0.u32l;
        goto L_8028D8D0;
    // 0x8028D89C: swc1        $f0, 0x3984($at)
    MEM_W(0X3984, ctx->r1) = ctx->f0.u32l;
L_8028D8A0:
    // 0x8028D8A0: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8028D8A4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028D8A8: swc1        $f8, 0x3978($at)
    MEM_W(0X3978, ctx->r1) = ctx->f8.u32l;
    // 0x8028D8AC: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8028D8B0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028D8B4: swc1        $f10, 0x397C($at)
    MEM_W(0X397C, ctx->r1) = ctx->f10.u32l;
    // 0x8028D8B8: lwc1        $f16, 0x1C($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x8028D8BC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028D8C0: swc1        $f16, 0x3980($at)
    MEM_W(0X3980, ctx->r1) = ctx->f16.u32l;
    // 0x8028D8C4: lwc1        $f18, 0x14($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X14);
    // 0x8028D8C8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028D8CC: swc1        $f18, 0x3984($at)
    MEM_W(0X3984, ctx->r1) = ctx->f18.u32l;
L_8028D8D0:
    // 0x8028D8D0: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8028D8D4: lhu         $v1, 0xB78($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0XB78);
    // 0x8028D8D8: b           L_8028DB94
    // 0x8028D8DC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
        goto L_8028DB94;
    // 0x8028D8DC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_8028D8E0:
    // 0x8028D8E0: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
    // 0x8028D8E4: sh          $v0, 0x399E($at)
    MEM_H(0X399E, ctx->r1) = ctx->r2;
    // 0x8028D8E8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8028D8EC: bne         $v1, $at, L_8028D93C
    if (ctx->r3 != ctx->r1) {
        // 0x8028D8F0: lui         $v0, 0x8009
        ctx->r2 = S32(0X8009 << 16);
            goto L_8028D93C;
    }
    // 0x8028D8F0: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8028D8F4: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x8028D8F8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028D8FC: lh          $t1, 0xE8($v0)
    ctx->r9 = MEM_H(ctx->r2, 0XE8);
    // 0x8028D900: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8028D904: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x8028D908: nop

    // 0x8028D90C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8028D910: swc1        $f6, 0x3978($at)
    MEM_W(0X3978, ctx->r1) = ctx->f6.u32l;
    // 0x8028D914: lh          $t2, 0xEA($v0)
    ctx->r10 = MEM_H(ctx->r2, 0XEA);
    // 0x8028D918: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028D91C: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x8028D920: nop

    // 0x8028D924: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8028D928: swc1        $f10, 0x397C($at)
    MEM_W(0X397C, ctx->r1) = ctx->f10.u32l;
    // 0x8028D92C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028D930: swc1        $f0, 0x3980($at)
    MEM_W(0X3980, ctx->r1) = ctx->f0.u32l;
    // 0x8028D934: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028D938: swc1        $f0, 0x3984($at)
    MEM_W(0X3984, ctx->r1) = ctx->f0.u32l;
L_8028D93C:
    // 0x8028D93C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8028D940: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8028D944: bne         $v1, $at, L_8028D96C
    if (ctx->r3 != ctx->r1) {
        // 0x8028D948: lui         $at, 0x802C
        ctx->r1 = S32(0X802C << 16);
            goto L_8028D96C;
    }
    // 0x8028D948: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028D94C: swc1        $f0, 0x3980($at)
    MEM_W(0X3980, ctx->r1) = ctx->f0.u32l;
    // 0x8028D950: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028D954: jal         0x8028FEB0
    // 0x8028D958: swc1        $f0, 0x3984($at)
    MEM_W(0X3984, ctx->r1) = ctx->f0.u32l;
    func_8028FEB0(rdram, ctx);
        goto after_3;
    // 0x8028D958: swc1        $f0, 0x3984($at)
    MEM_W(0X3984, ctx->r1) = ctx->f0.u32l;
    after_3:
    // 0x8028D95C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8028D960: lhu         $v1, 0xB78($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0XB78);
    // 0x8028D964: b           L_8028DB94
    // 0x8028D968: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
        goto L_8028DB94;
    // 0x8028D968: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_8028D96C:
    // 0x8028D96C: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x8028D970: bne         $v1, $at, L_8028D99C
    if (ctx->r3 != ctx->r1) {
        // 0x8028D974: lui         $v0, 0x8009
        ctx->r2 = S32(0X8009 << 16);
            goto L_8028D99C;
    }
    // 0x8028D974: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8028D978: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028D97C: swc1        $f0, 0x3980($at)
    MEM_W(0X3980, ctx->r1) = ctx->f0.u32l;
    // 0x8028D980: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028D984: jal         0x8028F130
    // 0x8028D988: swc1        $f0, 0x3984($at)
    MEM_W(0X3984, ctx->r1) = ctx->f0.u32l;
    func_8028F130(rdram, ctx);
        goto after_4;
    // 0x8028D988: swc1        $f0, 0x3984($at)
    MEM_W(0X3984, ctx->r1) = ctx->f0.u32l;
    after_4:
    // 0x8028D98C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8028D990: lhu         $v1, 0xB78($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0XB78);
    // 0x8028D994: b           L_8028DB94
    // 0x8028D998: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
        goto L_8028DB94;
    // 0x8028D998: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_8028D99C:
    // 0x8028D99C: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x8028D9A0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028D9A4: lh          $t3, 0xE8($v0)
    ctx->r11 = MEM_H(ctx->r2, 0XE8);
    // 0x8028D9A8: lui         $t5, 0x802C
    ctx->r13 = S32(0X802C << 16);
    // 0x8028D9AC: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x8028D9B0: lbu         $t5, 0x39DF($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X39DF);
    // 0x8028D9B4: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8028D9B8: swc1        $f18, 0x3978($at)
    MEM_W(0X3978, ctx->r1) = ctx->f18.u32l;
    // 0x8028D9BC: lh          $t4, 0xEA($v0)
    ctx->r12 = MEM_H(ctx->r2, 0XEA);
    // 0x8028D9C0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028D9C4: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x8028D9C8: nop

    // 0x8028D9CC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8028D9D0: swc1        $f6, 0x397C($at)
    MEM_W(0X397C, ctx->r1) = ctx->f6.u32l;
    // 0x8028D9D4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028D9D8: swc1        $f0, 0x3980($at)
    MEM_W(0X3980, ctx->r1) = ctx->f0.u32l;
    // 0x8028D9DC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028D9E0: bne         $t5, $zero, L_8028DB7C
    if (ctx->r13 != 0) {
        // 0x8028D9E4: swc1        $f0, 0x3984($at)
        MEM_W(0X3984, ctx->r1) = ctx->f0.u32l;
            goto L_8028DB7C;
    }
    // 0x8028D9E4: swc1        $f0, 0x3984($at)
    MEM_W(0X3984, ctx->r1) = ctx->f0.u32l;
    // 0x8028D9E8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8028D9EC: bne         $v1, $at, L_8028DA0C
    if (ctx->r3 != ctx->r1) {
        // 0x8028D9F0: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8028DA0C;
    }
    // 0x8028D9F0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8028D9F4: jal         0x8028EA90
    // 0x8028D9F8: nop

    func_8028EA90(rdram, ctx);
        goto after_5;
    // 0x8028D9F8: nop

    after_5:
    // 0x8028D9FC: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8028DA00: lhu         $v1, 0xB78($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0XB78);
    // 0x8028DA04: nop

    // 0x8028DA08: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
L_8028DA0C:
    // 0x8028DA0C: bne         $v1, $at, L_8028DA2C
    if (ctx->r3 != ctx->r1) {
        // 0x8028DA10: addiu       $at, $zero, 0x6
        ctx->r1 = ADD32(0, 0X6);
            goto L_8028DA2C;
    }
    // 0x8028DA10: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x8028DA14: jal         0x80290C2C
    // 0x8028DA18: nop

    func_80290C2C(rdram, ctx);
        goto after_6;
    // 0x8028DA18: nop

    after_6:
    // 0x8028DA1C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8028DA20: lhu         $v1, 0xB78($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0XB78);
    // 0x8028DA24: nop

    // 0x8028DA28: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
L_8028DA2C:
    // 0x8028DA2C: bne         $v1, $at, L_8028DA4C
    if (ctx->r3 != ctx->r1) {
        // 0x8028DA30: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_8028DA4C;
    }
    // 0x8028DA30: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8028DA34: jal         0x8029140C
    // 0x8028DA38: nop

    func_8029140C(rdram, ctx);
        goto after_7;
    // 0x8028DA38: nop

    after_7:
    // 0x8028DA3C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8028DA40: lhu         $v1, 0xB78($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0XB78);
    // 0x8028DA44: nop

    // 0x8028DA48: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
L_8028DA4C:
    // 0x8028DA4C: bne         $v1, $at, L_8028DA6C
    if (ctx->r3 != ctx->r1) {
        // 0x8028DA50: addiu       $at, $zero, 0xA
        ctx->r1 = ADD32(0, 0XA);
            goto L_8028DA6C;
    }
    // 0x8028DA50: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x8028DA54: jal         0x80291000
    // 0x8028DA58: nop

    func_80291000(rdram, ctx);
        goto after_8;
    // 0x8028DA58: nop

    after_8:
    // 0x8028DA5C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8028DA60: lhu         $v1, 0xB78($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0XB78);
    // 0x8028DA64: nop

    // 0x8028DA68: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
L_8028DA6C:
    // 0x8028DA6C: beq         $v1, $at, L_8028DA7C
    if (ctx->r3 == ctx->r1) {
        // 0x8028DA70: addiu       $at, $zero, 0xB
        ctx->r1 = ADD32(0, 0XB);
            goto L_8028DA7C;
    }
    // 0x8028DA70: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x8028DA74: bne         $v1, $at, L_8028DA94
    if (ctx->r3 != ctx->r1) {
        // 0x8028DA78: addiu       $at, $zero, 0xC
        ctx->r1 = ADD32(0, 0XC);
            goto L_8028DA94;
    }
    // 0x8028DA78: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
L_8028DA7C:
    // 0x8028DA7C: jal         0x80292978
    // 0x8028DA80: nop

    func_80292978(rdram, ctx);
        goto after_9;
    // 0x8028DA80: nop

    after_9:
    // 0x8028DA84: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8028DA88: lhu         $v1, 0xB78($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0XB78);
    // 0x8028DA8C: nop

    // 0x8028DA90: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
L_8028DA94:
    // 0x8028DA94: bne         $v1, $at, L_8028DB2C
    if (ctx->r3 != ctx->r1) {
        // 0x8028DA98: lui         $t6, 0x8012
        ctx->r14 = S32(0X8012 << 16);
            goto L_8028DB2C;
    }
    // 0x8028DA98: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8028DA9C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8028DAA0: lhu         $t7, -0x2252($t7)
    ctx->r15 = MEM_HU(ctx->r15, -0X2252);
    // 0x8028DAA4: lhu         $t6, -0x2CE6($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X2CE6);
    // 0x8028DAA8: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x8028DAAC: bne         $t6, $t7, L_8028DADC
    if (ctx->r14 != ctx->r15) {
        // 0x8028DAB0: lui         $v0, 0x8012
        ctx->r2 = S32(0X8012 << 16);
            goto L_8028DADC;
    }
    // 0x8028DAB0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8028DAB4: lhu         $t8, -0x2CE8($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X2CE8);
    // 0x8028DAB8: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x8028DABC: andi        $t9, $t8, 0x1000
    ctx->r25 = ctx->r24 & 0X1000;
    // 0x8028DAC0: bne         $t9, $zero, L_8028DADC
    if (ctx->r25 != 0) {
        // 0x8028DAC4: nop
    
            goto L_8028DADC;
    }
    // 0x8028DAC4: nop

    // 0x8028DAC8: lhu         $t0, -0x2254($t0)
    ctx->r8 = MEM_HU(ctx->r8, -0X2254);
    // 0x8028DACC: nop

    // 0x8028DAD0: andi        $t1, $t0, 0x1000
    ctx->r9 = ctx->r8 & 0X1000;
    // 0x8028DAD4: beq         $t1, $zero, L_8028DB18
    if (ctx->r9 == 0) {
        // 0x8028DAD8: nop
    
            goto L_8028DB18;
    }
    // 0x8028DAD8: nop

L_8028DADC:
    // 0x8028DADC: lw          $v0, 0xB24($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XB24);
    // 0x8028DAE0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028DAE4: lwc1        $f8, 0x4C($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x8028DAE8: nop

    // 0x8028DAEC: swc1        $f8, 0x3978($at)
    MEM_W(0X3978, ctx->r1) = ctx->f8.u32l;
    // 0x8028DAF0: lwc1        $f10, 0x44($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X44);
    // 0x8028DAF4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028DAF8: swc1        $f10, 0x397C($at)
    MEM_W(0X397C, ctx->r1) = ctx->f10.u32l;
    // 0x8028DAFC: lwc1        $f16, 0x78($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X78);
    // 0x8028DB00: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028DB04: swc1        $f16, 0x3980($at)
    MEM_W(0X3980, ctx->r1) = ctx->f16.u32l;
    // 0x8028DB08: lwc1        $f18, 0x70($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X70);
    // 0x8028DB0C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028DB10: b           L_8028DB2C
    // 0x8028DB14: swc1        $f18, 0x3984($at)
    MEM_W(0X3984, ctx->r1) = ctx->f18.u32l;
        goto L_8028DB2C;
    // 0x8028DB14: swc1        $f18, 0x3984($at)
    MEM_W(0X3984, ctx->r1) = ctx->f18.u32l;
L_8028DB18:
    // 0x8028DB18: jal         0x80292978
    // 0x8028DB1C: nop

    func_80292978(rdram, ctx);
        goto after_10;
    // 0x8028DB1C: nop

    after_10:
    // 0x8028DB20: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8028DB24: lhu         $v1, 0xB78($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0XB78);
    // 0x8028DB28: nop

L_8028DB2C:
    // 0x8028DB2C: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x8028DB30: bne         $v1, $at, L_8028DB58
    if (ctx->r3 != ctx->r1) {
        // 0x8028DB34: lui         $v0, 0x8012
        ctx->r2 = S32(0X8012 << 16);
            goto L_8028DB58;
    }
    // 0x8028DB34: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8028DB38: lw          $v0, 0xB28($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XB28);
    // 0x8028DB3C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028DB40: lwc1        $f4, 0x4C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x8028DB44: nop

    // 0x8028DB48: swc1        $f4, 0x3978($at)
    MEM_W(0X3978, ctx->r1) = ctx->f4.u32l;
    // 0x8028DB4C: lwc1        $f6, 0x44($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X44);
    // 0x8028DB50: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028DB54: swc1        $f6, 0x397C($at)
    MEM_W(0X397C, ctx->r1) = ctx->f6.u32l;
L_8028DB58:
    // 0x8028DB58: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x8028DB5C: bne         $v1, $at, L_8028DB94
    if (ctx->r3 != ctx->r1) {
        // 0x8028DB60: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_8028DB94;
    }
    // 0x8028DB60: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8028DB64: jal         0x802931D8
    // 0x8028DB68: nop

    func_802931D8(rdram, ctx);
        goto after_11;
    // 0x8028DB68: nop

    after_11:
    // 0x8028DB6C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8028DB70: lhu         $v1, 0xB78($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0XB78);
    // 0x8028DB74: b           L_8028DB94
    // 0x8028DB78: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
        goto L_8028DB94;
    // 0x8028DB78: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_8028DB7C:
    // 0x8028DB7C: jal         0x802925C8
    // 0x8028DB80: nop

    func_802925C8(rdram, ctx);
        goto after_12;
    // 0x8028DB80: nop

    after_12:
    // 0x8028DB84: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8028DB88: lhu         $v1, 0xB78($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0XB78);
    // 0x8028DB8C: nop

L_8028DB90:
    // 0x8028DB90: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_8028DB94:
    // 0x8028DB94: beq         $v1, $at, L_8028DC60
    if (ctx->r3 == ctx->r1) {
        // 0x8028DB98: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_8028DC60;
    }
    // 0x8028DB98: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8028DB9C: beq         $v1, $at, L_8028DC60
    if (ctx->r3 == ctx->r1) {
        // 0x8028DBA0: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8028DC60;
    }
    // 0x8028DBA0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8028DBA4: beq         $v1, $at, L_8028DC60
    if (ctx->r3 == ctx->r1) {
        // 0x8028DBA8: addiu       $at, $zero, 0x9
        ctx->r1 = ADD32(0, 0X9);
            goto L_8028DC60;
    }
    // 0x8028DBA8: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x8028DBAC: beq         $v1, $at, L_8028DC60
    if (ctx->r3 == ctx->r1) {
        // 0x8028DBB0: addiu       $at, $zero, 0x6
        ctx->r1 = ADD32(0, 0X6);
            goto L_8028DC60;
    }
    // 0x8028DBB0: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x8028DBB4: beq         $v1, $at, L_8028DC60
    if (ctx->r3 == ctx->r1) {
        // 0x8028DBB8: addiu       $at, $zero, 0xA
        ctx->r1 = ADD32(0, 0XA);
            goto L_8028DC60;
    }
    // 0x8028DBB8: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x8028DBBC: beq         $v1, $at, L_8028DC60
    if (ctx->r3 == ctx->r1) {
        // 0x8028DBC0: addiu       $at, $zero, 0xC
        ctx->r1 = ADD32(0, 0XC);
            goto L_8028DC60;
    }
    // 0x8028DBC0: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x8028DBC4: beq         $v1, $at, L_8028DC60
    if (ctx->r3 == ctx->r1) {
        // 0x8028DBC8: addiu       $at, $zero, 0x7
        ctx->r1 = ADD32(0, 0X7);
            goto L_8028DC60;
    }
    // 0x8028DBC8: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x8028DBCC: beq         $v1, $at, L_8028DC60
    if (ctx->r3 == ctx->r1) {
        // 0x8028DBD0: lui         $v0, 0x8009
        ctx->r2 = S32(0X8009 << 16);
            goto L_8028DC60;
    }
    // 0x8028DBD0: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8028DBD4: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x8028DBD8: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x8028DBDC: lhu         $t2, 0xDC($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0XDC);
    // 0x8028DBE0: nop

    // 0x8028DBE4: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x8028DBE8: bne         $t3, $zero, L_8028DC64
    if (ctx->r11 != 0) {
        // 0x8028DBEC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8028DC64;
    }
    // 0x8028DBEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8028DBF0: lhu         $t4, 0xB7E($t4)
    ctx->r12 = MEM_HU(ctx->r12, 0XB7E);
    // 0x8028DBF4: nop

    // 0x8028DBF8: andi        $t5, $t4, 0x8
    ctx->r13 = ctx->r12 & 0X8;
    // 0x8028DBFC: bne         $t5, $zero, L_8028DC64
    if (ctx->r13 != 0) {
        // 0x8028DC00: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8028DC64;
    }
    // 0x8028DC00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8028DC04: lw          $t6, 0x8C($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X8C);
    // 0x8028DC08: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8028DC0C: lw          $t7, 0xC8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XC8);
    // 0x8028DC10: addiu       $v0, $v0, 0x3978
    ctx->r2 = ADD32(ctx->r2, 0X3978);
    // 0x8028DC14: lhu         $t8, 0x8($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X8);
    // 0x8028DC18: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x8028DC1C: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x8028DC20: beq         $t9, $zero, L_8028DC4C
    if (ctx->r25 == 0) {
        // 0x8028DC24: nop
    
            goto L_8028DC4C;
    }
    // 0x8028DC24: nop

    // 0x8028DC28: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8028DC2C: addiu       $v0, $v0, 0x3978
    ctx->r2 = ADD32(ctx->r2, 0X3978);
    // 0x8028DC30: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x8028DC34: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8028DC38: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8028DC3C: nop

    // 0x8028DC40: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8028DC44: b           L_8028DC60
    // 0x8028DC48: swc1        $f16, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f16.u32l;
        goto L_8028DC60;
    // 0x8028DC48: swc1        $f16, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f16.u32l;
L_8028DC4C:
    // 0x8028DC4C: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8028DC50: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8028DC54: nop

    // 0x8028DC58: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x8028DC5C: swc1        $f6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f6.u32l;
L_8028DC60:
    // 0x8028DC60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8028DC64:
    // 0x8028DC64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8028DC68: jr          $ra
    // 0x8028DC6C: nop

    return;
    // 0x8028DC6C: nop

;}
RECOMP_FUNC void func_8028DC70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028DC70: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x8028DC74: lw          $t6, -0x2F98($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X2F98);
    // 0x8028DC78: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8028DC7C: lui         $v0, 0x3
    ctx->r2 = S32(0X3 << 16);
    // 0x8028DC80: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8028DC84: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x8028DC88: lbu         $v0, -0x765E($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X765E);
    // 0x8028DC8C: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x8028DC90: beq         $v0, $at, L_8028DCA8
    if (ctx->r2 == ctx->r1) {
        // 0x8028DC94: addiu       $at, $zero, 0xE
        ctx->r1 = ADD32(0, 0XE);
            goto L_8028DCA8;
    }
    // 0x8028DC94: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x8028DC98: beq         $v0, $at, L_8028DCB8
    if (ctx->r2 == ctx->r1) {
        // 0x8028DC9C: nop
    
            goto L_8028DCB8;
    }
    // 0x8028DC9C: nop

    // 0x8028DCA0: b           L_8028DCC8
    // 0x8028DCA4: nop

        goto L_8028DCC8;
    // 0x8028DCA4: nop

L_8028DCA8:
    // 0x8028DCA8: jal         0x8028DCE0
    // 0x8028DCAC: nop

    func_8028DCE0(rdram, ctx);
        goto after_0;
    // 0x8028DCAC: nop

    after_0:
    // 0x8028DCB0: b           L_8028DCD4
    // 0x8028DCB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8028DCD4;
    // 0x8028DCB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8028DCB8:
    // 0x8028DCB8: jal         0x8028DCE0
    // 0x8028DCBC: nop

    func_8028DCE0(rdram, ctx);
        goto after_1;
    // 0x8028DCBC: nop

    after_1:
    // 0x8028DCC0: b           L_8028DCD4
    // 0x8028DCC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8028DCD4;
    // 0x8028DCC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8028DCC8:
    // 0x8028DCC8: jal         0x8028DD7C
    // 0x8028DCCC: nop

    func_8028DD7C(rdram, ctx);
        goto after_2;
    // 0x8028DCCC: nop

    after_2:
    // 0x8028DCD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8028DCD4:
    // 0x8028DCD4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8028DCD8: jr          $ra
    // 0x8028DCDC: nop

    return;
    // 0x8028DCDC: nop

;}
RECOMP_FUNC void func_8028DCE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028DCE0: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x8028DCE4: lw          $v0, -0x2F98($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2F98);
    // 0x8028DCE8: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8028DCEC: ori         $at, $at, 0xA0D8
    ctx->r1 = ctx->r1 | 0XA0D8;
    // 0x8028DCF0: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
    // 0x8028DCF4: lui         $at, 0xC416
    ctx->r1 = S32(0XC416 << 16);
    // 0x8028DCF8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8028DCFC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028DD00: swc1        $f4, 0x3900($at)
    MEM_W(0X3900, ctx->r1) = ctx->f4.u32l;
    // 0x8028DD04: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x8028DD08: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8028DD0C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028DD10: swc1        $f6, 0x3904($at)
    MEM_W(0X3904, ctx->r1) = ctx->f6.u32l;
    // 0x8028DD14: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8028DD18: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8028DD1C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028DD20: swc1        $f8, 0x3910($at)
    MEM_W(0X3910, ctx->r1) = ctx->f8.u32l;
    // 0x8028DD24: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028DD28: lwc1        $f10, 0x3950($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X3950);
    // 0x8028DD2C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028DD30: swc1        $f10, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f10.u32l;
    // 0x8028DD34: lwc1        $f16, 0x3954($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X3954);
    // 0x8028DD38: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028DD3C: swc1        $f16, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f16.u32l;
    // 0x8028DD40: lwc1        $f18, 0x3958($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X3958);
    // 0x8028DD44: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028DD48: swc1        $f18, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f18.u32l;
    // 0x8028DD4C: lwc1        $f4, 0x395C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X395C);
    // 0x8028DD50: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028DD54: swc1        $f4, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f4.u32l;
    // 0x8028DD58: lwc1        $f6, 0x3960($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3960);
    // 0x8028DD5C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028DD60: swc1        $f6, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f6.u32l;
    // 0x8028DD64: lwc1        $f8, 0x3964($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X3964);
    // 0x8028DD68: lui         $at, 0x4204
    ctx->r1 = S32(0X4204 << 16);
    // 0x8028DD6C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8028DD70: swc1        $f8, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f8.u32l;
    // 0x8028DD74: jr          $ra
    // 0x8028DD78: swc1        $f10, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->f10.u32l;
    return;
    // 0x8028DD78: swc1        $f10, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->f10.u32l;
;}
RECOMP_FUNC void func_8028DD7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028DD7C: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x8028DD80: lw          $v1, -0x2F98($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X2F98);
    // 0x8028DD84: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8028DD88: ori         $at, $at, 0xA0D8
    ctx->r1 = ctx->r1 | 0XA0D8;
    // 0x8028DD8C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8028DD90: lhu         $v0, 0xB78($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XB78);
    // 0x8028DD94: addu        $a0, $v1, $at
    ctx->r4 = ADD32(ctx->r3, ctx->r1);
    // 0x8028DD98: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8028DD9C: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x8028DDA0: beq         $v0, $at, L_8028DDCC
    if (ctx->r2 == ctx->r1) {
        // 0x8028DDA4: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8028DDCC;
    }
    // 0x8028DDA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8028DDA8: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x8028DDAC: beq         $v0, $at, L_8028DDCC
    if (ctx->r2 == ctx->r1) {
        // 0x8028DDB0: addiu       $at, $zero, 0xC
        ctx->r1 = ADD32(0, 0XC);
            goto L_8028DDCC;
    }
    // 0x8028DDB0: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x8028DDB4: beq         $v0, $at, L_8028DDCC
    if (ctx->r2 == ctx->r1) {
        // 0x8028DDB8: lui         $t6, 0x3
        ctx->r14 = S32(0X3 << 16);
            goto L_8028DDCC;
    }
    // 0x8028DDB8: lui         $t6, 0x3
    ctx->r14 = S32(0X3 << 16);
    // 0x8028DDBC: addu        $t6, $t6, $v1
    ctx->r14 = ADD32(ctx->r14, ctx->r3);
    // 0x8028DDC0: lbu         $t6, -0x7664($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X7664);
    // 0x8028DDC4: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x8028DDC8: bne         $t6, $at, L_8028DDDC
    if (ctx->r14 != ctx->r1) {
        // 0x8028DDCC: lui         $at, 0x4248
        ctx->r1 = S32(0X4248 << 16);
            goto L_8028DDDC;
    }
L_8028DDCC:
    // 0x8028DDCC: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x8028DDD0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8028DDD4: b           L_8028DE44
    // 0x8028DDD8: swc1        $f4, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f4.u32l;
        goto L_8028DE44;
    // 0x8028DDD8: swc1        $f4, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f4.u32l;
L_8028DDDC:
    // 0x8028DDDC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028DDE0: lwc1        $f3, 0x460($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, 0X460);
    // 0x8028DDE4: lwc1        $f2, 0x464($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X464);
    // 0x8028DDE8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028DDEC: lwc1        $f6, 0x3918($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3918);
    // 0x8028DDF0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8028DDF4: cvt.d.s     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f0.d = CVT_D_S(ctx->f6.fl);
    // 0x8028DDF8: c.le.d      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.d <= ctx->f2.d;
    // 0x8028DDFC: nop

    // 0x8028DE00: bc1f        L_8028DE18
    if (!c1cs) {
        // 0x8028DE04: nop
    
            goto L_8028DE18;
    }
    // 0x8028DE04: nop

    // 0x8028DE08: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x8028DE0C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8028DE10: b           L_8028DE44
    // 0x8028DE14: swc1        $f8, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f8.u32l;
        goto L_8028DE44;
    // 0x8028DE14: swc1        $f8, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f8.u32l;
L_8028DE18:
    // 0x8028DE18: sub.d       $f10, $f0, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f10.d = ctx->f0.d - ctx->f2.d;
    // 0x8028DE1C: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x8028DE20: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8028DE24: lui         $at, 0x4049
    ctx->r1 = S32(0X4049 << 16);
    // 0x8028DE28: div.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = DIV_D(ctx->f10.d, ctx->f16.d);
    // 0x8028DE2C: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x8028DE30: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8028DE34: nop

    // 0x8028DE38: add.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d + ctx->f4.d;
    // 0x8028DE3C: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x8028DE40: swc1        $f8, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f8.u32l;
L_8028DE44:
    // 0x8028DE44: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x8028DE48: lbu         $t7, -0x2FAF($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X2FAF);
    // 0x8028DE4C: nop

    // 0x8028DE50: bne         $t7, $zero, L_8028DE70
    if (ctx->r15 != 0) {
        // 0x8028DE54: nop
    
            goto L_8028DE70;
    }
    // 0x8028DE54: nop

    // 0x8028DE58: jal         0x8028D6DC
    // 0x8028DE5C: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_8028D6DC(rdram, ctx);
        goto after_0;
    // 0x8028DE5C: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x8028DE60: jal         0x8028E2CC
    // 0x8028DE64: nop

    func_8028E2CC(rdram, ctx);
        goto after_1;
    // 0x8028DE64: nop

    after_1:
    // 0x8028DE68: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8028DE6C: nop

L_8028DE70:
    // 0x8028DE70: lui         $t8, 0x802C
    ctx->r24 = S32(0X802C << 16);
    // 0x8028DE74: lbu         $t8, 0x38DF($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X38DF);
    // 0x8028DE78: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8028DE7C: beq         $t8, $at, L_8028DFF0
    if (ctx->r24 == ctx->r1) {
        // 0x8028DE80: lui         $t9, 0x8011
        ctx->r25 = S32(0X8011 << 16);
            goto L_8028DFF0;
    }
    // 0x8028DE80: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x8028DE84: lbu         $t9, -0x301C($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X301C);
    // 0x8028DE88: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x8028DE8C: andi        $t0, $t9, 0x4
    ctx->r8 = ctx->r25 & 0X4;
    // 0x8028DE90: bne         $t0, $zero, L_8028DEB4
    if (ctx->r8 != 0) {
        // 0x8028DE94: lui         $v1, 0x802C
        ctx->r3 = S32(0X802C << 16);
            goto L_8028DEB4;
    }
    // 0x8028DE94: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x8028DE98: lw          $t1, -0x2F98($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X2F98);
    // 0x8028DE9C: lui         $t2, 0x3
    ctx->r10 = S32(0X3 << 16);
    // 0x8028DEA0: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8028DEA4: lbu         $t2, -0x7664($t2)
    ctx->r10 = MEM_BU(ctx->r10, -0X7664);
    // 0x8028DEA8: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x8028DEAC: bne         $t2, $at, L_8028DEC4
    if (ctx->r10 != ctx->r1) {
        // 0x8028DEB0: nop
    
            goto L_8028DEC4;
    }
    // 0x8028DEB0: nop

L_8028DEB4:
    // 0x8028DEB4: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8028DEB8: addiu       $v1, $v1, 0x38E8
    ctx->r3 = ADD32(ctx->r3, 0X38E8);
    // 0x8028DEBC: b           L_8028DF58
    // 0x8028DEC0: swc1        $f2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f2.u32l;
        goto L_8028DF58;
    // 0x8028DEC0: swc1        $f2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f2.u32l;
L_8028DEC4:
    // 0x8028DEC4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028DEC8: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8028DECC: lwc1        $f0, 0x3978($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X3978);
    // 0x8028DED0: nop

    // 0x8028DED4: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x8028DED8: nop

    // 0x8028DEDC: bc1f        L_8028DF10
    if (!c1cs) {
        // 0x8028DEE0: lui         $at, 0x4034
        ctx->r1 = S32(0X4034 << 16);
            goto L_8028DF10;
    }
    // 0x8028DEE0: lui         $at, 0x4034
    ctx->r1 = S32(0X4034 << 16);
    // 0x8028DEE4: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x8028DEE8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8028DEEC: neg.s       $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = -ctx->f0.fl;
    // 0x8028DEF0: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x8028DEF4: nop

    // 0x8028DEF8: div.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = DIV_D(ctx->f16.d, ctx->f18.d);
    // 0x8028DEFC: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x8028DF00: addiu       $v1, $v1, 0x38E8
    ctx->r3 = ADD32(ctx->r3, 0X38E8);
    // 0x8028DF04: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x8028DF08: b           L_8028DF58
    // 0x8028DF0C: swc1        $f6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f6.u32l;
        goto L_8028DF58;
    // 0x8028DF0C: swc1        $f6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f6.u32l;
L_8028DF10:
    // 0x8028DF10: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x8028DF14: nop

    // 0x8028DF18: bc1f        L_8028DF4C
    if (!c1cs) {
        // 0x8028DF1C: lui         $at, 0x4034
        ctx->r1 = S32(0X4034 << 16);
            goto L_8028DF4C;
    }
    // 0x8028DF1C: lui         $at, 0x4034
    ctx->r1 = S32(0X4034 << 16);
    // 0x8028DF20: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x8028DF24: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8028DF28: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x8028DF2C: nop

    // 0x8028DF30: div.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = DIV_D(ctx->f8.d, ctx->f10.d);
    // 0x8028DF34: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x8028DF38: addiu       $v1, $v1, 0x38E8
    ctx->r3 = ADD32(ctx->r3, 0X38E8);
    // 0x8028DF3C: neg.d       $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = -ctx->f16.d;
    // 0x8028DF40: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x8028DF44: b           L_8028DF58
    // 0x8028DF48: swc1        $f4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f4.u32l;
        goto L_8028DF58;
    // 0x8028DF48: swc1        $f4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f4.u32l;
L_8028DF4C:
    // 0x8028DF4C: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x8028DF50: addiu       $v1, $v1, 0x38E8
    ctx->r3 = ADD32(ctx->r3, 0X38E8);
    // 0x8028DF54: swc1        $f2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f2.u32l;
L_8028DF58:
    // 0x8028DF58: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028DF5C: lwc1        $f6, 0x3924($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3924);
    // 0x8028DF60: lwc1        $f8, 0x0($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X0);
    // 0x8028DF64: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8028DF68: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8028DF6C: addiu       $v0, $v0, 0x3914
    ctx->r2 = ADD32(ctx->r2, 0X3914);
    // 0x8028DF70: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
    // 0x8028DF74: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8028DF78: nop

    // 0x8028DF7C: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x8028DF80: nop

    // 0x8028DF84: bc1f        L_8028DFB0
    if (!c1cs) {
        // 0x8028DF88: lui         $at, 0x802C
        ctx->r1 = S32(0X802C << 16);
            goto L_8028DFB0;
    }
    // 0x8028DF88: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028DF8C: lwc1        $f19, 0x468($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X468);
    // 0x8028DF90: lwc1        $f18, 0x46C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X46C);
    // 0x8028DF94: cvt.d.s     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.d = CVT_D_S(ctx->f0.fl);
    // 0x8028DF98: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x8028DF9C: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x8028DFA0: swc1        $f6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f6.u32l;
    // 0x8028DFA4: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8028DFA8: b           L_8028E008
    // 0x8028DFAC: nop

        goto L_8028E008;
    // 0x8028DFAC: nop

L_8028DFB0:
    // 0x8028DFB0: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x8028DFB4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8028DFB8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028DFBC: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x8028DFC0: nop

    // 0x8028DFC4: bc1f        L_8028E008
    if (!c1cs) {
        // 0x8028DFC8: nop
    
            goto L_8028E008;
    }
    // 0x8028DFC8: nop

    // 0x8028DFCC: lwc1        $f17, 0x470($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X470);
    // 0x8028DFD0: lwc1        $f16, 0x474($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X474);
    // 0x8028DFD4: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x8028DFD8: sub.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d - ctx->f16.d;
    // 0x8028DFDC: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x8028DFE0: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
    // 0x8028DFE4: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8028DFE8: b           L_8028E008
    // 0x8028DFEC: nop

        goto L_8028E008;
    // 0x8028DFEC: nop

L_8028DFF0:
    // 0x8028DFF0: jal         0x8007BC04
    // 0x8028DFF4: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_8007BC04(rdram, ctx);
        goto after_2;
    // 0x8028DFF4: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_2:
    // 0x8028DFF8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028DFFC: lwc1        $f0, 0x3914($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X3914);
    // 0x8028E000: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8028E004: nop

L_8028E008:
    // 0x8028E008: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028E00C: lwc1        $f3, 0x478($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, 0X478);
    // 0x8028E010: lwc1        $f2, 0x47C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X47C);
    // 0x8028E014: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028E018: lwc1        $f6, 0x3910($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3910);
    // 0x8028E01C: cvt.d.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.d = CVT_D_S(ctx->f0.fl);
    // 0x8028E020: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x8028E024: mul.d       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f2.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f2.d);
    // 0x8028E028: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8028E02C: addiu       $v0, $v0, -0x3778
    ctx->r2 = ADD32(ctx->r2, -0X3778);
    // 0x8028E030: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028E034: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    // 0x8028E038: mul.d       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f2.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f2.d);
    // 0x8028E03C: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x8028E040: swc1        $f16, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f16.u32l;
    // 0x8028E044: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x8028E048: swc1        $f6, -0x3774($at)
    MEM_W(-0X3774, ctx->r1) = ctx->f6.u32l;
    // 0x8028E04C: lwc1        $f12, 0x0($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8028E050: jal         0x80081040
    // 0x8028E054: nop

    func_80081040(rdram, ctx);
        goto after_3;
    // 0x8028E054: nop

    after_3:
    // 0x8028E058: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028E05C: lwc1        $f12, -0x3774($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X3774);
    // 0x8028E060: jal         0x80081040
    // 0x8028E064: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    func_80081040(rdram, ctx);
        goto after_4;
    // 0x8028E064: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    after_4:
    // 0x8028E068: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028E06C: lwc1        $f10, 0x3918($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X3918);
    // 0x8028E070: lwc1        $f8, 0x18($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8028E074: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028E078: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x8028E07C: lwc1        $f4, 0x3974($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X3974);
    // 0x8028E080: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8028E084: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x8028E088: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x8028E08C: lui         $v0, 0x3
    ctx->r2 = S32(0X3 << 16);
    // 0x8028E090: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x8028E094: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x8028E098: swc1        $f6, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f6.u32l;
    // 0x8028E09C: lw          $t3, -0x2F98($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X2F98);
    // 0x8028E0A0: nop

    // 0x8028E0A4: addu        $v0, $v0, $t3
    ctx->r2 = ADD32(ctx->r2, ctx->r11);
    // 0x8028E0A8: lbu         $v0, -0x765E($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X765E);
    // 0x8028E0AC: nop

    // 0x8028E0B0: beq         $v0, $at, L_8028E224
    if (ctx->r2 == ctx->r1) {
        // 0x8028E0B4: addiu       $at, $zero, 0xE
        ctx->r1 = ADD32(0, 0XE);
            goto L_8028E224;
    }
    // 0x8028E0B4: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x8028E0B8: beq         $v0, $at, L_8028E224
    if (ctx->r2 == ctx->r1) {
        // 0x8028E0BC: lui         $v0, 0x8012
        ctx->r2 = S32(0X8012 << 16);
            goto L_8028E224;
    }
    // 0x8028E0BC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8028E0C0: lbu         $v0, -0x3092($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3092);
    // 0x8028E0C4: lui         $at, 0x4411
    ctx->r1 = S32(0X4411 << 16);
    // 0x8028E0C8: beq         $v0, $zero, L_8028E0EC
    if (ctx->r2 == 0) {
        // 0x8028E0CC: nop
    
            goto L_8028E0EC;
    }
    // 0x8028E0CC: nop

    // 0x8028E0D0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8028E0D4: beq         $v0, $at, L_8028E110
    if (ctx->r2 == ctx->r1) {
        // 0x8028E0D8: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8028E110;
    }
    // 0x8028E0D8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8028E0DC: beq         $v0, $at, L_8028E13C
    if (ctx->r2 == ctx->r1) {
        // 0x8028E0E0: lui         $at, 0x4434
        ctx->r1 = S32(0X4434 << 16);
            goto L_8028E13C;
    }
    // 0x8028E0E0: lui         $at, 0x4434
    ctx->r1 = S32(0X4434 << 16);
    // 0x8028E0E4: b           L_8028E15C
    // 0x8028E0E8: nop

        goto L_8028E15C;
    // 0x8028E0E8: nop

L_8028E0EC:
    // 0x8028E0EC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8028E0F0: lwc1        $f8, 0x4($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X4);
    // 0x8028E0F4: nop

    // 0x8028E0F8: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x8028E0FC: nop

    // 0x8028E100: bc1f        L_8028E15C
    if (!c1cs) {
        // 0x8028E104: nop
    
            goto L_8028E15C;
    }
    // 0x8028E104: nop

    // 0x8028E108: b           L_8028E15C
    // 0x8028E10C: swc1        $f0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f0.u32l;
        goto L_8028E15C;
    // 0x8028E10C: swc1        $f0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f0.u32l;
L_8028E110:
    // 0x8028E110: lui         $at, 0x442F
    ctx->r1 = S32(0X442F << 16);
    // 0x8028E114: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8028E118: lwc1        $f10, 0x4($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X4);
    // 0x8028E11C: nop

    // 0x8028E120: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x8028E124: nop

    // 0x8028E128: bc1f        L_8028E15C
    if (!c1cs) {
        // 0x8028E12C: nop
    
            goto L_8028E15C;
    }
    // 0x8028E12C: nop

    // 0x8028E130: b           L_8028E15C
    // 0x8028E134: swc1        $f0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f0.u32l;
        goto L_8028E15C;
    // 0x8028E134: swc1        $f0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f0.u32l;
    // 0x8028E138: lui         $at, 0x4434
    ctx->r1 = S32(0X4434 << 16);
L_8028E13C:
    // 0x8028E13C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8028E140: lwc1        $f16, 0x4($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X4);
    // 0x8028E144: nop

    // 0x8028E148: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x8028E14C: nop

    // 0x8028E150: bc1f        L_8028E15C
    if (!c1cs) {
        // 0x8028E154: nop
    
            goto L_8028E15C;
    }
    // 0x8028E154: nop

    // 0x8028E158: swc1        $f0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f0.u32l;
L_8028E15C:
    // 0x8028E15C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028E160: lwc1        $f12, -0x3778($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X3778);
    // 0x8028E164: jal         0x80081040
    // 0x8028E168: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_80081040(rdram, ctx);
        goto after_5;
    // 0x8028E168: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_5:
    // 0x8028E16C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028E170: lwc1        $f12, -0x3774($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X3774);
    // 0x8028E174: jal         0x80081040
    // 0x8028E178: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    func_80081040(rdram, ctx);
        goto after_6;
    // 0x8028E178: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    after_6:
    // 0x8028E17C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8028E180: lwc1        $f8, 0x18($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8028E184: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028E188: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x8028E18C: lwc1        $f4, 0x3974($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X3974);
    // 0x8028E190: lwc1        $f18, 0x4($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X4);
    // 0x8028E194: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8028E198: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x8028E19C: addiu       $v0, $v0, 0x3918
    ctx->r2 = ADD32(ctx->r2, 0X3918);
    // 0x8028E1A0: div.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x8028E1A4: lui         $t4, 0x802C
    ctx->r12 = S32(0X802C << 16);
    // 0x8028E1A8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8028E1AC: swc1        $f16, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f16.u32l;
    // 0x8028E1B0: lbu         $t4, 0x38DF($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X38DF);
    // 0x8028E1B4: nop

    // 0x8028E1B8: bne         $t4, $at, L_8028E224
    if (ctx->r12 != ctx->r1) {
        // 0x8028E1BC: lui         $at, 0x43FA
        ctx->r1 = S32(0X43FA << 16);
            goto L_8028E224;
    }
    // 0x8028E1BC: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x8028E1C0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8028E1C4: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8028E1C8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028E1CC: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x8028E1D0: nop

    // 0x8028E1D4: bc1f        L_8028E224
    if (!c1cs) {
        // 0x8028E1D8: nop
    
            goto L_8028E224;
    }
    // 0x8028E1D8: nop

    // 0x8028E1DC: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
    // 0x8028E1E0: lwc1        $f12, -0x3778($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X3778);
    // 0x8028E1E4: jal         0x80081040
    // 0x8028E1E8: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_80081040(rdram, ctx);
        goto after_7;
    // 0x8028E1E8: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_7:
    // 0x8028E1EC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028E1F0: lwc1        $f12, -0x3774($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X3774);
    // 0x8028E1F4: jal         0x80081040
    // 0x8028E1F8: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    func_80081040(rdram, ctx);
        goto after_8;
    // 0x8028E1F8: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    after_8:
    // 0x8028E1FC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028E200: lwc1        $f8, 0x3918($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X3918);
    // 0x8028E204: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8028E208: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028E20C: mul.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x8028E210: lwc1        $f16, 0x3974($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X3974);
    // 0x8028E214: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8028E218: mul.s       $f10, $f0, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x8028E21C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8028E220: swc1        $f18, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f18.u32l;
L_8028E224:
    // 0x8028E224: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028E228: lwc1        $f12, -0x3778($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X3778);
    // 0x8028E22C: jal         0x80080E80
    // 0x8028E230: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_80080E80(rdram, ctx);
        goto after_9;
    // 0x8028E230: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_9:
    // 0x8028E234: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028E238: lwc1        $f4, 0x3918($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X3918);
    // 0x8028E23C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8028E240: mul.s       $f8, $f0, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x8028E244: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028E248: swc1        $f8, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f8.u32l;
    // 0x8028E24C: lwc1        $f12, -0x3778($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X3778);
    // 0x8028E250: jal         0x80081040
    // 0x8028E254: nop

    func_80081040(rdram, ctx);
        goto after_10;
    // 0x8028E254: nop

    after_10:
    // 0x8028E258: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028E25C: lwc1        $f12, -0x3774($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X3774);
    // 0x8028E260: jal         0x80080E80
    // 0x8028E264: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    func_80080E80(rdram, ctx);
        goto after_11;
    // 0x8028E264: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    after_11:
    // 0x8028E268: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028E26C: lwc1        $f10, 0x3918($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X3918);
    // 0x8028E270: lwc1        $f6, 0x18($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8028E274: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8028E278: mul.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x8028E27C: addiu       $v0, $v0, 0x3970
    ctx->r2 = ADD32(ctx->r2, 0X3970);
    // 0x8028E280: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8028E284: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8028E288: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x8028E28C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028E290: add.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x8028E294: swc1        $f8, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f8.u32l;
    // 0x8028E298: lwc1        $f6, 0x3974($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3974);
    // 0x8028E29C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028E2A0: swc1        $f6, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f6.u32l;
    // 0x8028E2A4: lwc1        $f10, 0x39C0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X39C0);
    // 0x8028E2A8: nop

    // 0x8028E2AC: swc1        $f10, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f10.u32l;
    // 0x8028E2B0: lwc1        $f16, 0x0($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8028E2B4: nop

    // 0x8028E2B8: swc1        $f16, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f16.u32l;
    // 0x8028E2BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8028E2C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8028E2C4: jr          $ra
    // 0x8028E2C8: nop

    return;
    // 0x8028E2C8: nop

;}
RECOMP_FUNC void func_8028E2CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028E2CC: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8028E2D0: addiu       $v0, $v0, 0x3974
    ctx->r2 = ADD32(ctx->r2, 0X3974);
    // 0x8028E2D4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028E2D8: lwc1        $f0, 0x397C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X397C);
    // 0x8028E2DC: lwc1        $f2, 0x0($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8028E2E0: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x8028E2E4: c.eq.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
    // 0x8028E2E8: addiu       $v1, $v1, 0x3970
    ctx->r3 = ADD32(ctx->r3, 0X3970);
    // 0x8028E2EC: bc1f        L_8028E2FC
    if (!c1cs) {
        // 0x8028E2F0: nop
    
            goto L_8028E2FC;
    }
    // 0x8028E2F0: nop

    // 0x8028E2F4: b           L_8028E37C
    // 0x8028E2F8: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
        goto L_8028E37C;
    // 0x8028E2F8: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
L_8028E2FC:
    // 0x8028E2FC: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x8028E300: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x8028E304: bc1f        L_8028E348
    if (!c1cs) {
        // 0x8028E308: nop
    
            goto L_8028E348;
    }
    // 0x8028E308: nop

    // 0x8028E30C: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x8028E310: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8028E314: sub.s       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x8028E318: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x8028E31C: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x8028E320: nop

    // 0x8028E324: bc1f        L_8028E334
    if (!c1cs) {
        // 0x8028E328: nop
    
            goto L_8028E334;
    }
    // 0x8028E328: nop

    // 0x8028E32C: b           L_8028E37C
    // 0x8028E330: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
        goto L_8028E37C;
    // 0x8028E330: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
L_8028E334:
    // 0x8028E334: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8028E338: nop

    // 0x8028E33C: add.s       $f10, $f2, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f8.fl;
    // 0x8028E340: b           L_8028E37C
    // 0x8028E344: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
        goto L_8028E37C;
    // 0x8028E344: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
L_8028E348:
    // 0x8028E348: sub.s       $f4, $f2, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x8028E34C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8028E350: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x8028E354: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x8028E358: nop

    // 0x8028E35C: bc1f        L_8028E36C
    if (!c1cs) {
        // 0x8028E360: nop
    
            goto L_8028E36C;
    }
    // 0x8028E360: nop

    // 0x8028E364: b           L_8028E37C
    // 0x8028E368: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
        goto L_8028E37C;
    // 0x8028E368: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
L_8028E36C:
    // 0x8028E36C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8028E370: nop

    // 0x8028E374: sub.s       $f10, $f2, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f8.fl;
    // 0x8028E378: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
L_8028E37C:
    // 0x8028E37C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028E380: lwc1        $f0, 0x3978($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X3978);
    // 0x8028E384: lwc1        $f2, 0x0($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X0);
    // 0x8028E388: nop

    // 0x8028E38C: c.eq.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
    // 0x8028E390: nop

    // 0x8028E394: bc1t        L_8028E698
    if (c1cs) {
        // 0x8028E398: nop
    
            goto L_8028E698;
    }
    // 0x8028E398: nop

    // 0x8028E39C: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x8028E3A0: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x8028E3A4: bc1f        L_8028E524
    if (!c1cs) {
        // 0x8028E3A8: nop
    
            goto L_8028E524;
    }
    // 0x8028E3A8: nop

    // 0x8028E3AC: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x8028E3B0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8028E3B4: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x8028E3B8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028E3BC: c.lt.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl < ctx->f12.fl;
    // 0x8028E3C0: nop

    // 0x8028E3C4: bc1f        L_8028E698
    if (!c1cs) {
        // 0x8028E3C8: nop
    
            goto L_8028E698;
    }
    // 0x8028E3C8: nop

    // 0x8028E3CC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8028E3D0: lwc1        $f14, 0x3980($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X3980);
    // 0x8028E3D4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8028E3D8: c.eq.s      $f18, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f18.fl == ctx->f14.fl;
    // 0x8028E3DC: nop

    // 0x8028E3E0: bc1t        L_8028E44C
    if (c1cs) {
        // 0x8028E3E4: nop
    
            goto L_8028E44C;
    }
    // 0x8028E3E4: nop

    // 0x8028E3E8: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
    // 0x8028E3EC: nop

    // 0x8028E3F0: bc1f        L_8028E400
    if (!c1cs) {
        // 0x8028E3F4: nop
    
            goto L_8028E400;
    }
    // 0x8028E3F4: nop

    // 0x8028E3F8: jr          $ra
    // 0x8028E3FC: swc1        $f0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f0.u32l;
    return;
    // 0x8028E3FC: swc1        $f0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f0.u32l;
L_8028E400:
    // 0x8028E400: c.lt.s      $f18, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f18.fl < ctx->f14.fl;
    // 0x8028E404: nop

    // 0x8028E408: bc1f        L_8028E41C
    if (!c1cs) {
        // 0x8028E40C: nop
    
            goto L_8028E41C;
    }
    // 0x8028E40C: nop

    // 0x8028E410: add.s       $f4, $f2, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f14.fl;
    // 0x8028E414: b           L_8028E424
    // 0x8028E418: swc1        $f4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f4.u32l;
        goto L_8028E424;
    // 0x8028E418: swc1        $f4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f4.u32l;
L_8028E41C:
    // 0x8028E41C: sub.s       $f6, $f2, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x8028E420: swc1        $f6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f6.u32l;
L_8028E424:
    // 0x8028E424: lwc1        $f2, 0x0($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X0);
    // 0x8028E428: nop

    // 0x8028E42C: sub.s       $f8, $f0, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x8028E430: c.lt.s      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.fl < ctx->f8.fl;
    // 0x8028E434: nop

    // 0x8028E438: bc1f        L_8028E698
    if (!c1cs) {
        // 0x8028E43C: nop
    
            goto L_8028E698;
    }
    // 0x8028E43C: nop

    // 0x8028E440: add.s       $f10, $f2, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f16.fl;
    // 0x8028E444: jr          $ra
    // 0x8028E448: swc1        $f10, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f10.u32l;
    return;
    // 0x8028E448: swc1        $f10, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f10.u32l;
L_8028E44C:
    // 0x8028E44C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8028E450: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8028E454: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
    // 0x8028E458: nop

    // 0x8028E45C: bc1f        L_8028E46C
    if (!c1cs) {
        // 0x8028E460: nop
    
            goto L_8028E46C;
    }
    // 0x8028E460: nop

    // 0x8028E464: jr          $ra
    // 0x8028E468: swc1        $f0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f0.u32l;
    return;
    // 0x8028E468: swc1        $f0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f0.u32l;
L_8028E46C:
    // 0x8028E46C: lhu         $v0, 0xB78($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XB78);
    // 0x8028E470: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8028E474: beq         $v0, $zero, L_8028E510
    if (ctx->r2 == 0) {
        // 0x8028E478: nop
    
            goto L_8028E510;
    }
    // 0x8028E478: nop

    // 0x8028E47C: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x8028E480: beq         $v0, $at, L_8028E48C
    if (ctx->r2 == ctx->r1) {
        // 0x8028E484: addiu       $at, $zero, 0xB
        ctx->r1 = ADD32(0, 0XB);
            goto L_8028E48C;
    }
    // 0x8028E484: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x8028E488: bne         $v0, $at, L_8028E4C8
    if (ctx->r2 != ctx->r1) {
        // 0x8028E48C: lui         $at, 0x4100
        ctx->r1 = S32(0X4100 << 16);
            goto L_8028E4C8;
    }
L_8028E48C:
    // 0x8028E48C: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x8028E490: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8028E494: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8028E498: c.lt.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl < ctx->f12.fl;
    // 0x8028E49C: nop

    // 0x8028E4A0: bc1f        L_8028E4B4
    if (!c1cs) {
        // 0x8028E4A4: nop
    
            goto L_8028E4B4;
    }
    // 0x8028E4A4: nop

    // 0x8028E4A8: add.s       $f6, $f2, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f14.fl;
    // 0x8028E4AC: jr          $ra
    // 0x8028E4B0: swc1        $f6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f6.u32l;
    return;
    // 0x8028E4B0: swc1        $f6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f6.u32l;
L_8028E4B4:
    // 0x8028E4B4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8028E4B8: nop

    // 0x8028E4BC: add.s       $f10, $f2, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f8.fl;
    // 0x8028E4C0: jr          $ra
    // 0x8028E4C4: swc1        $f10, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f10.u32l;
    return;
    // 0x8028E4C4: swc1        $f10, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f10.u32l;
L_8028E4C8:
    // 0x8028E4C8: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x8028E4CC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8028E4D0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8028E4D4: c.lt.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl < ctx->f12.fl;
    // 0x8028E4D8: nop

    // 0x8028E4DC: bc1f        L_8028E4FC
    if (!c1cs) {
        // 0x8028E4E0: nop
    
            goto L_8028E4FC;
    }
    // 0x8028E4E0: nop

    // 0x8028E4E4: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x8028E4E8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8028E4EC: nop

    // 0x8028E4F0: add.s       $f8, $f2, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f6.fl;
    // 0x8028E4F4: jr          $ra
    // 0x8028E4F8: swc1        $f8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f8.u32l;
    return;
    // 0x8028E4F8: swc1        $f8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f8.u32l;
L_8028E4FC:
    // 0x8028E4FC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8028E500: nop

    // 0x8028E504: add.s       $f4, $f2, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f10.fl;
    // 0x8028E508: jr          $ra
    // 0x8028E50C: swc1        $f4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f4.u32l;
    return;
    // 0x8028E50C: swc1        $f4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f4.u32l;
L_8028E510:
    // 0x8028E510: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8028E514: nop

    // 0x8028E518: add.s       $f8, $f2, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f6.fl;
    // 0x8028E51C: jr          $ra
    // 0x8028E520: swc1        $f8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f8.u32l;
    return;
    // 0x8028E520: swc1        $f8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f8.u32l;
L_8028E524:
    // 0x8028E524: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8028E528: sub.s       $f12, $f2, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x8028E52C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028E530: c.lt.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl < ctx->f12.fl;
    // 0x8028E534: nop

    // 0x8028E538: bc1f        L_8028E698
    if (!c1cs) {
        // 0x8028E53C: nop
    
            goto L_8028E698;
    }
    // 0x8028E53C: nop

    // 0x8028E540: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8028E544: lwc1        $f14, 0x3980($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X3980);
    // 0x8028E548: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8028E54C: c.eq.s      $f18, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f18.fl == ctx->f14.fl;
    // 0x8028E550: nop

    // 0x8028E554: bc1t        L_8028E5C4
    if (c1cs) {
        // 0x8028E558: nop
    
            goto L_8028E5C4;
    }
    // 0x8028E558: nop

    // 0x8028E55C: sub.s       $f10, $f0, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x8028E560: c.lt.s      $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f14.fl < ctx->f10.fl;
    // 0x8028E564: nop

    // 0x8028E568: bc1f        L_8028E578
    if (!c1cs) {
        // 0x8028E56C: nop
    
            goto L_8028E578;
    }
    // 0x8028E56C: nop

    // 0x8028E570: jr          $ra
    // 0x8028E574: swc1        $f0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f0.u32l;
    return;
    // 0x8028E574: swc1        $f0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f0.u32l;
L_8028E578:
    // 0x8028E578: c.lt.s      $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f14.fl < ctx->f18.fl;
    // 0x8028E57C: nop

    // 0x8028E580: bc1f        L_8028E594
    if (!c1cs) {
        // 0x8028E584: nop
    
            goto L_8028E594;
    }
    // 0x8028E584: nop

    // 0x8028E588: add.s       $f4, $f2, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f14.fl;
    // 0x8028E58C: b           L_8028E59C
    // 0x8028E590: swc1        $f4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f4.u32l;
        goto L_8028E59C;
    // 0x8028E590: swc1        $f4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f4.u32l;
L_8028E594:
    // 0x8028E594: sub.s       $f6, $f2, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x8028E598: swc1        $f6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f6.u32l;
L_8028E59C:
    // 0x8028E59C: lwc1        $f2, 0x0($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X0);
    // 0x8028E5A0: nop

    // 0x8028E5A4: sub.s       $f8, $f2, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x8028E5A8: c.lt.s      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.fl < ctx->f8.fl;
    // 0x8028E5AC: nop

    // 0x8028E5B0: bc1f        L_8028E698
    if (!c1cs) {
        // 0x8028E5B4: nop
    
            goto L_8028E698;
    }
    // 0x8028E5B4: nop

    // 0x8028E5B8: sub.s       $f10, $f2, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f16.fl;
    // 0x8028E5BC: jr          $ra
    // 0x8028E5C0: swc1        $f10, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f10.u32l;
    return;
    // 0x8028E5C0: swc1        $f10, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f10.u32l;
L_8028E5C4:
    // 0x8028E5C4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8028E5C8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8028E5CC: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
    // 0x8028E5D0: nop

    // 0x8028E5D4: bc1f        L_8028E5E4
    if (!c1cs) {
        // 0x8028E5D8: nop
    
            goto L_8028E5E4;
    }
    // 0x8028E5D8: nop

    // 0x8028E5DC: jr          $ra
    // 0x8028E5E0: swc1        $f0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f0.u32l;
    return;
    // 0x8028E5E0: swc1        $f0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f0.u32l;
L_8028E5E4:
    // 0x8028E5E4: lhu         $v0, 0xB78($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XB78);
    // 0x8028E5E8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8028E5EC: beq         $v0, $zero, L_8028E688
    if (ctx->r2 == 0) {
        // 0x8028E5F0: nop
    
            goto L_8028E688;
    }
    // 0x8028E5F0: nop

    // 0x8028E5F4: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x8028E5F8: beq         $v0, $at, L_8028E604
    if (ctx->r2 == ctx->r1) {
        // 0x8028E5FC: addiu       $at, $zero, 0xB
        ctx->r1 = ADD32(0, 0XB);
            goto L_8028E604;
    }
    // 0x8028E5FC: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x8028E600: bne         $v0, $at, L_8028E640
    if (ctx->r2 != ctx->r1) {
        // 0x8028E604: lui         $at, 0x4100
        ctx->r1 = S32(0X4100 << 16);
            goto L_8028E640;
    }
L_8028E604:
    // 0x8028E604: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x8028E608: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8028E60C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8028E610: c.lt.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl < ctx->f12.fl;
    // 0x8028E614: nop

    // 0x8028E618: bc1f        L_8028E62C
    if (!c1cs) {
        // 0x8028E61C: nop
    
            goto L_8028E62C;
    }
    // 0x8028E61C: nop

    // 0x8028E620: sub.s       $f6, $f2, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x8028E624: jr          $ra
    // 0x8028E628: swc1        $f6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f6.u32l;
    return;
    // 0x8028E628: swc1        $f6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f6.u32l;
L_8028E62C:
    // 0x8028E62C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8028E630: nop

    // 0x8028E634: sub.s       $f10, $f2, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f8.fl;
    // 0x8028E638: jr          $ra
    // 0x8028E63C: swc1        $f10, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f10.u32l;
    return;
    // 0x8028E63C: swc1        $f10, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f10.u32l;
L_8028E640:
    // 0x8028E640: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x8028E644: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8028E648: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8028E64C: c.lt.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl < ctx->f12.fl;
    // 0x8028E650: nop

    // 0x8028E654: bc1f        L_8028E674
    if (!c1cs) {
        // 0x8028E658: nop
    
            goto L_8028E674;
    }
    // 0x8028E658: nop

    // 0x8028E65C: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x8028E660: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8028E664: nop

    // 0x8028E668: sub.s       $f8, $f2, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f2.fl - ctx->f6.fl;
    // 0x8028E66C: jr          $ra
    // 0x8028E670: swc1        $f8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f8.u32l;
    return;
    // 0x8028E670: swc1        $f8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f8.u32l;
L_8028E674:
    // 0x8028E674: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8028E678: nop

    // 0x8028E67C: sub.s       $f4, $f2, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f10.fl;
    // 0x8028E680: jr          $ra
    // 0x8028E684: swc1        $f4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f4.u32l;
    return;
    // 0x8028E684: swc1        $f4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f4.u32l;
L_8028E688:
    // 0x8028E688: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8028E68C: nop

    // 0x8028E690: sub.s       $f8, $f2, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f2.fl - ctx->f6.fl;
    // 0x8028E694: swc1        $f8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f8.u32l;
L_8028E698:
    // 0x8028E698: jr          $ra
    // 0x8028E69C: nop

    return;
    // 0x8028E69C: nop

;}
RECOMP_FUNC void func_8028E6A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028E6A0: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x8028E6A4: lhu         $t6, 0x399E($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X399E);
    // 0x8028E6A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8028E6AC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8028E6B0: beq         $t6, $at, L_8028E730
    if (ctx->r14 == ctx->r1) {
        // 0x8028E6B4: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8028E730;
    }
    // 0x8028E6B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8028E6B8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8028E6BC: addiu       $v0, $v0, -0x30A0
    ctx->r2 = ADD32(ctx->r2, -0X30A0);
    // 0x8028E6C0: lbu         $t7, 0xE($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0XE);
    // 0x8028E6C4: lui         $t9, 0x802C
    ctx->r25 = S32(0X802C << 16);
    // 0x8028E6C8: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x8028E6CC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8028E6D0: lhu         $t9, -0x3790($t9)
    ctx->r25 = MEM_HU(ctx->r25, -0X3790);
    // 0x8028E6D4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8028E6D8: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x8028E6DC: bgez        $t9, L_8028E6F0
    if (SIGNED(ctx->r25) >= 0) {
        // 0x8028E6E0: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_8028E6F0;
    }
    // 0x8028E6E0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8028E6E4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8028E6E8: nop

    // 0x8028E6EC: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_8028E6F0:
    // 0x8028E6F0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028E6F4: swc1        $f6, 0x3910($at)
    MEM_W(0X3910, ctx->r1) = ctx->f6.u32l;
    // 0x8028E6F8: lbu         $t0, 0xF($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0XF);
    // 0x8028E6FC: lui         $t2, 0x802C
    ctx->r10 = S32(0X802C << 16);
    // 0x8028E700: sll         $t1, $t0, 1
    ctx->r9 = S32(ctx->r8 << 1);
    // 0x8028E704: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8028E708: lhu         $t2, -0x3788($t2)
    ctx->r10 = MEM_HU(ctx->r10, -0X3788);
    // 0x8028E70C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8028E710: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x8028E714: bgez        $t2, L_8028E728
    if (SIGNED(ctx->r10) >= 0) {
        // 0x8028E718: cvt.s.w     $f16, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
            goto L_8028E728;
    }
    // 0x8028E718: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8028E71C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8028E720: nop

    // 0x8028E724: add.s       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f18.fl;
L_8028E728:
    // 0x8028E728: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028E72C: swc1        $f16, 0x3918($at)
    MEM_W(0X3918, ctx->r1) = ctx->f16.u32l;
L_8028E730:
    // 0x8028E730: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x8028E734: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8028E738: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028E73C: swc1        $f4, 0x39C0($at)
    MEM_W(0X39C0, ctx->r1) = ctx->f4.u32l;
    // 0x8028E740: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x8028E744: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8028E748: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x8028E74C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8028E750: swc1        $f8, 0x699C($at)
    MEM_W(0X699C, ctx->r1) = ctx->f8.u32l;
    // 0x8028E754: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028E758: jal         0x80297EBC
    // 0x8028E75C: swc1        $f6, 0x3924($at)
    MEM_W(0X3924, ctx->r1) = ctx->f6.u32l;
    func_80297EBC(rdram, ctx);
        goto after_0;
    // 0x8028E75C: swc1        $f6, 0x3924($at)
    MEM_W(0X3924, ctx->r1) = ctx->f6.u32l;
    after_0:
    // 0x8028E760: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8028E764: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8028E768: jr          $ra
    // 0x8028E76C: nop

    return;
    // 0x8028E76C: nop

;}
RECOMP_FUNC void func_8028E770(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028E770: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x8028E774: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8028E778: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x8028E77C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028E780: addiu       $a1, $a1, -0x30A0
    ctx->r5 = ADD32(ctx->r5, -0X30A0);
    // 0x8028E784: swc1        $f4, 0x39C0($at)
    MEM_W(0X39C0, ctx->r1) = ctx->f4.u32l;
    // 0x8028E788: lbu         $t6, 0xE($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0XE);
    // 0x8028E78C: lui         $t8, 0x802C
    ctx->r24 = S32(0X802C << 16);
    // 0x8028E790: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x8028E794: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8028E798: lhu         $t8, -0x3790($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X3790);
    // 0x8028E79C: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x8028E7A0: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x8028E7A4: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x8028E7A8: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x8028E7AC: addiu       $a2, $a2, -0x2CF0
    ctx->r6 = ADD32(ctx->r6, -0X2CF0);
    // 0x8028E7B0: addiu       $a0, $a0, 0x3918
    ctx->r4 = ADD32(ctx->r4, 0X3918);
    // 0x8028E7B4: addiu       $v1, $v1, 0x3988
    ctx->r3 = ADD32(ctx->r3, 0X3988);
    // 0x8028E7B8: bgez        $t8, L_8028E7D0
    if (SIGNED(ctx->r24) >= 0) {
        // 0x8028E7BC: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_8028E7D0;
    }
    // 0x8028E7BC: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8028E7C0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8028E7C4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8028E7C8: nop

    // 0x8028E7CC: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_8028E7D0:
    // 0x8028E7D0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028E7D4: swc1        $f8, 0x3910($at)
    MEM_W(0X3910, ctx->r1) = ctx->f8.u32l;
    // 0x8028E7D8: lbu         $v0, 0xF($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XF);
    // 0x8028E7DC: lui         $t4, 0x802C
    ctx->r12 = S32(0X802C << 16);
    // 0x8028E7E0: sll         $t9, $v0, 1
    ctx->r25 = S32(ctx->r2 << 1);
    // 0x8028E7E4: addu        $t4, $t4, $t9
    ctx->r12 = ADD32(ctx->r12, ctx->r25);
    // 0x8028E7E8: lhu         $t4, -0x3788($t4)
    ctx->r12 = MEM_HU(ctx->r12, -0X3788);
    // 0x8028E7EC: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    // 0x8028E7F0: mtc1        $t4, $f16
    ctx->f16.u32l = ctx->r12;
    // 0x8028E7F4: bgez        $t4, L_8028E80C
    if (SIGNED(ctx->r12) >= 0) {
        // 0x8028E7F8: cvt.s.w     $f18, $f16
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
            goto L_8028E80C;
    }
    // 0x8028E7F8: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8028E7FC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8028E800: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8028E804: nop

    // 0x8028E808: add.s       $f18, $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f4.fl;
L_8028E80C:
    // 0x8028E80C: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x8028E810: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8028E814: swc1        $f18, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f18.u32l;
    // 0x8028E818: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x8028E81C: swc1        $f6, 0x699C($at)
    MEM_W(0X699C, ctx->r1) = ctx->f6.u32l;
    // 0x8028E820: lhu         $t5, 0x8($a2)
    ctx->r13 = MEM_HU(ctx->r6, 0X8);
    // 0x8028E824: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
    // 0x8028E828: andi        $t6, $t5, 0x100
    ctx->r14 = ctx->r13 & 0X100;
    // 0x8028E82C: bne         $t6, $zero, L_8028EA40
    if (ctx->r14 != 0) {
        // 0x8028E830: nop
    
            goto L_8028EA40;
    }
    // 0x8028E830: nop

    // 0x8028E834: lhu         $t7, 0xA9C($a2)
    ctx->r15 = MEM_HU(ctx->r6, 0XA9C);
    // 0x8028E838: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x8028E83C: andi        $t8, $t7, 0x100
    ctx->r24 = ctx->r15 & 0X100;
    // 0x8028E840: bne         $t8, $zero, L_8028EA40
    if (ctx->r24 != 0) {
        // 0x8028E844: nop
    
            goto L_8028EA40;
    }
    // 0x8028E844: nop

    // 0x8028E848: lhu         $a1, 0xB78($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0XB78);
    // 0x8028E84C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8028E850: bne         $a1, $at, L_8028E920
    if (ctx->r5 != ctx->r1) {
        // 0x8028E854: lui         $a3, 0x802C
        ctx->r7 = S32(0X802C << 16);
            goto L_8028E920;
    }
    // 0x8028E854: lui         $a3, 0x802C
    ctx->r7 = S32(0X802C << 16);
    // 0x8028E858: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8028E85C: lui         $t5, 0x802C
    ctx->r13 = S32(0X802C << 16);
    // 0x8028E860: sb          $t9, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r25;
    // 0x8028E864: addu        $t5, $t5, $v0
    ctx->r13 = ADD32(ctx->r13, ctx->r2);
    // 0x8028E868: lhu         $t5, -0x3770($t5)
    ctx->r13 = MEM_HU(ctx->r13, -0X3770);
    // 0x8028E86C: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x8028E870: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x8028E874: lui         $t1, 0x802C
    ctx->r9 = S32(0X802C << 16);
    // 0x8028E878: lui         $t2, 0x802C
    ctx->r10 = S32(0X802C << 16);
    // 0x8028E87C: lui         $t3, 0x802C
    ctx->r11 = S32(0X802C << 16);
    // 0x8028E880: addiu       $t4, $zero, 0xA
    ctx->r12 = ADD32(0, 0XA);
    // 0x8028E884: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028E888: addiu       $t3, $t3, 0x3970
    ctx->r11 = ADD32(ctx->r11, 0X3970);
    // 0x8028E88C: addiu       $t2, $t2, 0x3974
    ctx->r10 = ADD32(ctx->r10, 0X3974);
    // 0x8028E890: addiu       $t1, $t1, 0x3978
    ctx->r9 = ADD32(ctx->r9, 0X3978);
    // 0x8028E894: addiu       $t0, $t0, 0x3B20
    ctx->r8 = ADD32(ctx->r8, 0X3B20);
    // 0x8028E898: addiu       $a3, $a3, 0x397C
    ctx->r7 = ADD32(ctx->r7, 0X397C);
    // 0x8028E89C: sb          $t4, 0x3989($at)
    MEM_B(0X3989, ctx->r1) = ctx->r12;
    // 0x8028E8A0: bgez        $t5, L_8028E8B8
    if (SIGNED(ctx->r13) >= 0) {
        // 0x8028E8A4: cvt.s.w     $f8, $f10
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
            goto L_8028E8B8;
    }
    // 0x8028E8A4: cvt.s.w     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8028E8A8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8028E8AC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8028E8B0: nop

    // 0x8028E8B4: add.s       $f8, $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f16.fl;
L_8028E8B8:
    // 0x8028E8B8: lw          $a2, 0x0($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X0);
    // 0x8028E8BC: swc1        $f8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f8.u32l;
    // 0x8028E8C0: lh          $t6, 0xEA($a2)
    ctx->r14 = MEM_H(ctx->r6, 0XEA);
    // 0x8028E8C4: nop

    // 0x8028E8C8: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x8028E8CC: nop

    // 0x8028E8D0: cvt.s.w     $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    ctx->f18.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8028E8D4: swc1        $f18, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f18.u32l;
    // 0x8028E8D8: lh          $t7, 0xE8($a2)
    ctx->r15 = MEM_H(ctx->r6, 0XE8);
    // 0x8028E8DC: nop

    // 0x8028E8E0: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x8028E8E4: nop

    // 0x8028E8E8: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8028E8EC: swc1        $f10, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f10.u32l;
    // 0x8028E8F0: lh          $t8, 0xEA($a2)
    ctx->r24 = MEM_H(ctx->r6, 0XEA);
    // 0x8028E8F4: nop

    // 0x8028E8F8: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x8028E8FC: nop

    // 0x8028E900: cvt.s.w     $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    ctx->f8.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8028E904: swc1        $f8, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->f8.u32l;
    // 0x8028E908: lh          $t9, 0xE8($a2)
    ctx->r25 = MEM_H(ctx->r6, 0XE8);
    // 0x8028E90C: nop

    // 0x8028E910: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x8028E914: nop

    // 0x8028E918: cvt.s.w     $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    ctx->f18.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8028E91C: swc1        $f18, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->f18.u32l;
L_8028E920:
    // 0x8028E920: lui         $a3, 0x802C
    ctx->r7 = S32(0X802C << 16);
    // 0x8028E924: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x8028E928: lui         $t1, 0x802C
    ctx->r9 = S32(0X802C << 16);
    // 0x8028E92C: lui         $t2, 0x802C
    ctx->r10 = S32(0X802C << 16);
    // 0x8028E930: lui         $t3, 0x802C
    ctx->r11 = S32(0X802C << 16);
    // 0x8028E934: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x8028E938: addiu       $t3, $t3, 0x3970
    ctx->r11 = ADD32(ctx->r11, 0X3970);
    // 0x8028E93C: addiu       $t2, $t2, 0x3974
    ctx->r10 = ADD32(ctx->r10, 0X3974);
    // 0x8028E940: addiu       $t1, $t1, 0x3978
    ctx->r9 = ADD32(ctx->r9, 0X3978);
    // 0x8028E944: addiu       $t0, $t0, 0x3B20
    ctx->r8 = ADD32(ctx->r8, 0X3B20);
    // 0x8028E948: bne         $a1, $at, L_8028E9CC
    if (ctx->r5 != ctx->r1) {
        // 0x8028E94C: addiu       $a3, $a3, 0x397C
        ctx->r7 = ADD32(ctx->r7, 0X397C);
            goto L_8028E9CC;
    }
    // 0x8028E94C: addiu       $a3, $a3, 0x397C
    ctx->r7 = ADD32(ctx->r7, 0X397C);
    // 0x8028E950: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x8028E954: sb          $t4, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r12;
    // 0x8028E958: addiu       $t5, $zero, 0x14
    ctx->r13 = ADD32(0, 0X14);
    // 0x8028E95C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028E960: sb          $t5, 0x3989($at)
    MEM_B(0X3989, ctx->r1) = ctx->r13;
    // 0x8028E964: lw          $a2, 0x0($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X0);
    // 0x8028E968: nop

    // 0x8028E96C: lh          $t6, 0xEA($a2)
    ctx->r14 = MEM_H(ctx->r6, 0XEA);
    // 0x8028E970: nop

    // 0x8028E974: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x8028E978: nop

    // 0x8028E97C: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8028E980: swc1        $f10, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f10.u32l;
    // 0x8028E984: lh          $t7, 0xE8($a2)
    ctx->r15 = MEM_H(ctx->r6, 0XE8);
    // 0x8028E988: nop

    // 0x8028E98C: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x8028E990: nop

    // 0x8028E994: cvt.s.w     $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    ctx->f8.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8028E998: swc1        $f8, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f8.u32l;
    // 0x8028E99C: lh          $t8, 0xEA($a2)
    ctx->r24 = MEM_H(ctx->r6, 0XEA);
    // 0x8028E9A0: nop

    // 0x8028E9A4: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x8028E9A8: nop

    // 0x8028E9AC: cvt.s.w     $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    ctx->f18.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8028E9B0: swc1        $f18, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->f18.u32l;
    // 0x8028E9B4: lh          $t9, 0xE8($a2)
    ctx->r25 = MEM_H(ctx->r6, 0XE8);
    // 0x8028E9B8: nop

    // 0x8028E9BC: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x8028E9C0: nop

    // 0x8028E9C4: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8028E9C8: swc1        $f10, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->f10.u32l;
L_8028E9CC:
    // 0x8028E9CC: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x8028E9D0: bne         $a1, $at, L_8028EA40
    if (ctx->r5 != ctx->r1) {
        // 0x8028E9D4: nop
    
            goto L_8028EA40;
    }
    // 0x8028E9D4: nop

    // 0x8028E9D8: lw          $a2, 0x0($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X0);
    // 0x8028E9DC: nop

    // 0x8028E9E0: lh          $t4, 0xEA($a2)
    ctx->r12 = MEM_H(ctx->r6, 0XEA);
    // 0x8028E9E4: nop

    // 0x8028E9E8: mtc1        $t4, $f16
    ctx->f16.u32l = ctx->r12;
    // 0x8028E9EC: nop

    // 0x8028E9F0: cvt.s.w     $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    ctx->f8.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8028E9F4: swc1        $f8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f8.u32l;
    // 0x8028E9F8: lh          $t5, 0xE8($a2)
    ctx->r13 = MEM_H(ctx->r6, 0XE8);
    // 0x8028E9FC: nop

    // 0x8028EA00: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x8028EA04: nop

    // 0x8028EA08: cvt.s.w     $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    ctx->f18.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8028EA0C: swc1        $f18, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f18.u32l;
    // 0x8028EA10: lh          $t6, 0xEA($a2)
    ctx->r14 = MEM_H(ctx->r6, 0XEA);
    // 0x8028EA14: nop

    // 0x8028EA18: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x8028EA1C: nop

    // 0x8028EA20: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8028EA24: swc1        $f10, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->f10.u32l;
    // 0x8028EA28: lh          $t7, 0xE8($a2)
    ctx->r15 = MEM_H(ctx->r6, 0XE8);
    // 0x8028EA2C: nop

    // 0x8028EA30: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x8028EA34: nop

    // 0x8028EA38: cvt.s.w     $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    ctx->f8.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8028EA3C: swc1        $f8, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->f8.u32l;
L_8028EA40:
    // 0x8028EA40: jr          $ra
    // 0x8028EA44: nop

    return;
    // 0x8028EA44: nop

;}
RECOMP_FUNC void func_8028EA48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028EA48: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8028EA4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8028EA50: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028EA54: jal         0x80297DB0
    // 0x8028EA58: sb          $zero, 0x3A24($at)
    MEM_B(0X3A24, ctx->r1) = 0;
    func_80297DB0(rdram, ctx);
        goto after_0;
    // 0x8028EA58: sb          $zero, 0x3A24($at)
    MEM_B(0X3A24, ctx->r1) = 0;
    after_0:
    // 0x8028EA5C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028EA60: sb          $zero, 0x3988($at)
    MEM_B(0X3988, ctx->r1) = 0;
    // 0x8028EA64: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028EA68: lwc1        $f4, 0x3918($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X3918);
    // 0x8028EA6C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028EA70: swc1        $f4, 0x3994($at)
    MEM_W(0X3994, ctx->r1) = ctx->f4.u32l;
    // 0x8028EA74: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028EA78: lwc1        $f6, 0x3910($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3910);
    // 0x8028EA7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8028EA80: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028EA84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8028EA88: jr          $ra
    // 0x8028EA8C: swc1        $f6, 0x398C($at)
    MEM_W(0X398C, ctx->r1) = ctx->f6.u32l;
    return;
    // 0x8028EA8C: swc1        $f6, 0x398C($at)
    MEM_W(0X398C, ctx->r1) = ctx->f6.u32l;
;}
RECOMP_FUNC void func_8028EA90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028EA90: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x8028EA94: addiu       $a0, $a0, 0x3988
    ctx->r4 = ADD32(ctx->r4, 0X3988);
    // 0x8028EA98: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x8028EA9C: lui         $at, 0x4038
    ctx->r1 = S32(0X4038 << 16);
    // 0x8028EAA0: beq         $v1, $zero, L_8028EAD4
    if (ctx->r3 == 0) {
        // 0x8028EAA4: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_8028EAD4;
    }
    // 0x8028EAA4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8028EAA8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8028EAAC: beq         $v0, $at, L_8028EBDC
    if (ctx->r2 == ctx->r1) {
        // 0x8028EAB0: lui         $t1, 0x802C
        ctx->r9 = S32(0X802C << 16);
            goto L_8028EBDC;
    }
    // 0x8028EAB0: lui         $t1, 0x802C
    ctx->r9 = S32(0X802C << 16);
    // 0x8028EAB4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8028EAB8: beq         $v0, $at, L_8028ED30
    if (ctx->r2 == ctx->r1) {
        // 0x8028EABC: lui         $a1, 0x802C
        ctx->r5 = S32(0X802C << 16);
            goto L_8028ED30;
    }
    // 0x8028EABC: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x8028EAC0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8028EAC4: beq         $v0, $at, L_8028EF04
    if (ctx->r2 == ctx->r1) {
        // 0x8028EAC8: nop
    
            goto L_8028EF04;
    }
    // 0x8028EAC8: nop

    // 0x8028EACC: jr          $ra
    // 0x8028EAD0: nop

    return;
    // 0x8028EAD0: nop

L_8028EAD4:
    // 0x8028EAD4: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8028EAD8: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x8028EADC: addiu       $v0, $v0, 0x3910
    ctx->r2 = ADD32(ctx->r2, 0X3910);
    // 0x8028EAE0: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8028EAE4: lui         $at, 0x4014
    ctx->r1 = S32(0X4014 << 16);
    // 0x8028EAE8: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x8028EAEC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8028EAF0: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8028EAF4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8028EAF8: sub.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d - ctx->f8.d;
    // 0x8028EAFC: lui         $a3, 0x802C
    ctx->r7 = S32(0X802C << 16);
    // 0x8028EB00: div.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = DIV_D(ctx->f10.d, ctx->f0.d);
    // 0x8028EB04: addiu       $a3, $a3, 0x39B3
    ctx->r7 = ADD32(ctx->r7, 0X39B3);
    // 0x8028EB08: addiu       $t6, $v1, 0x1
    ctx->r14 = ADD32(ctx->r3, 0X1);
    // 0x8028EB0C: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x8028EB10: sb          $t6, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r14;
    // 0x8028EB14: sb          $zero, 0x0($a3)
    MEM_B(0X0, ctx->r7) = 0;
    // 0x8028EB18: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028EB1C: addiu       $a2, $a2, -0x17C8
    ctx->r6 = ADD32(ctx->r6, -0X17C8);
    // 0x8028EB20: addiu       $a1, $zero, 0x27
    ctx->r5 = ADD32(0, 0X27);
    // 0x8028EB24: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8028EB28: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x8028EB2C: swc1        $f18, 0x3990($at)
    MEM_W(0X3990, ctx->r1) = ctx->f18.u32l;
    // 0x8028EB30: lhu         $t7, 0xE($a2)
    ctx->r15 = MEM_HU(ctx->r6, 0XE);
    // 0x8028EB34: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028EB38: beq         $a1, $t7, L_8028EB50
    if (ctx->r5 == ctx->r15) {
        // 0x8028EB3C: nop
    
            goto L_8028EB50;
    }
    // 0x8028EB3C: nop

    // 0x8028EB40: lhu         $t8, 0xD9E($a2)
    ctx->r24 = MEM_HU(ctx->r6, 0XD9E);
    // 0x8028EB44: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8028EB48: bne         $a1, $t8, L_8028EB98
    if (ctx->r5 != ctx->r24) {
        // 0x8028EB4C: addiu       $v0, $v0, 0x3989
        ctx->r2 = ADD32(ctx->r2, 0X3989);
            goto L_8028EB98;
    }
    // 0x8028EB4C: addiu       $v0, $v0, 0x3989
    ctx->r2 = ADD32(ctx->r2, 0X3989);
L_8028EB50:
    // 0x8028EB50: sb          $t9, 0x39B4($at)
    MEM_B(0X39B4, ctx->r1) = ctx->r25;
    // 0x8028EB54: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028EB58: lwc1        $f4, 0x39C0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X39C0);
    // 0x8028EB5C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028EB60: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x8028EB64: swc1        $f4, 0x39C4($at)
    MEM_W(0X39C4, ctx->r1) = ctx->f4.u32l;
    // 0x8028EB68: addiu       $a1, $a1, 0x3918
    ctx->r5 = ADD32(ctx->r5, 0X3918);
    // 0x8028EB6C: lwc1        $f6, 0x0($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X0);
    // 0x8028EB70: lui         $at, 0x4069
    ctx->r1 = S32(0X4069 << 16);
    // 0x8028EB74: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x8028EB78: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8028EB7C: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x8028EB80: sub.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d - ctx->f10.d;
    // 0x8028EB84: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028EB88: div.d       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f0.d); 
    ctx->f18.d = DIV_D(ctx->f16.d, ctx->f0.d);
    // 0x8028EB8C: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x8028EB90: jr          $ra
    // 0x8028EB94: swc1        $f4, 0x3998($at)
    MEM_W(0X3998, ctx->r1) = ctx->f4.u32l;
    return;
    // 0x8028EB94: swc1        $f4, 0x3998($at)
    MEM_W(0X3998, ctx->r1) = ctx->f4.u32l;
L_8028EB98:
    // 0x8028EB98: addiu       $t0, $zero, 0x28
    ctx->r8 = ADD32(0, 0X28);
    // 0x8028EB9C: sb          $t0, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r8;
    // 0x8028EBA0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028EBA4: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x8028EBA8: sb          $zero, 0x39B4($at)
    MEM_B(0X39B4, ctx->r1) = 0;
    // 0x8028EBAC: addiu       $a1, $a1, 0x3918
    ctx->r5 = ADD32(ctx->r5, 0X3918);
    // 0x8028EBB0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028EBB4: lwc1        $f6, 0x0($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X0);
    // 0x8028EBB8: lwc1        $f11, 0x480($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X480);
    // 0x8028EBBC: lwc1        $f10, 0x484($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X484);
    // 0x8028EBC0: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x8028EBC4: sub.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d - ctx->f10.d;
    // 0x8028EBC8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028EBCC: div.d       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f0.d); 
    ctx->f18.d = DIV_D(ctx->f16.d, ctx->f0.d);
    // 0x8028EBD0: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x8028EBD4: jr          $ra
    // 0x8028EBD8: swc1        $f4, 0x3998($at)
    MEM_W(0X3998, ctx->r1) = ctx->f4.u32l;
    return;
    // 0x8028EBD8: swc1        $f4, 0x3998($at)
    MEM_W(0X3998, ctx->r1) = ctx->f4.u32l;
L_8028EBDC:
    // 0x8028EBDC: lbu         $t1, 0x39B4($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X39B4);
    // 0x8028EBE0: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x8028EBE4: bne         $t1, $zero, L_8028EC14
    if (ctx->r9 != 0) {
        // 0x8028EBE8: addiu       $a1, $a1, 0x3918
        ctx->r5 = ADD32(ctx->r5, 0X3918);
            goto L_8028EC14;
    }
    // 0x8028EBE8: addiu       $a1, $a1, 0x3918
    ctx->r5 = ADD32(ctx->r5, 0X3918);
    // 0x8028EBEC: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8028EBF0: addiu       $v0, $v0, 0x3989
    ctx->r2 = ADD32(ctx->r2, 0X3989);
    // 0x8028EBF4: lbu         $t2, 0x0($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X0);
    // 0x8028EBF8: addiu       $t5, $v1, 0x1
    ctx->r13 = ADD32(ctx->r3, 0X1);
    // 0x8028EBFC: addiu       $t3, $t2, -0x1
    ctx->r11 = ADD32(ctx->r10, -0X1);
    // 0x8028EC00: andi        $t4, $t3, 0xFF
    ctx->r12 = ctx->r11 & 0XFF;
    // 0x8028EC04: bne         $t4, $zero, L_8028EF04
    if (ctx->r12 != 0) {
        // 0x8028EC08: sb          $t3, 0x0($v0)
        MEM_B(0X0, ctx->r2) = ctx->r11;
            goto L_8028EF04;
    }
    // 0x8028EC08: sb          $t3, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r11;
    // 0x8028EC0C: jr          $ra
    // 0x8028EC10: sb          $t5, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r13;
    return;
    // 0x8028EC10: sb          $t5, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r13;
L_8028EC14:
    // 0x8028EC14: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x8028EC18: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8028EC1C: lwc1        $f0, 0x0($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X0);
    // 0x8028EC20: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x8028EC24: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x8028EC28: addiu       $a2, $a2, -0x17C8
    ctx->r6 = ADD32(ctx->r6, -0X17C8);
    // 0x8028EC2C: bc1f        L_8028EC44
    if (!c1cs) {
        // 0x8028EC30: lui         $at, 0x802C
        ctx->r1 = S32(0X802C << 16);
            goto L_8028EC44;
    }
    // 0x8028EC30: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028EC34: lwc1        $f8, 0x3998($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X3998);
    // 0x8028EC38: nop

    // 0x8028EC3C: sub.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x8028EC40: swc1        $f10, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f10.u32l;
L_8028EC44:
    // 0x8028EC44: lhu         $v0, 0xE($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0XE);
    // 0x8028EC48: addiu       $a1, $zero, 0x27
    ctx->r5 = ADD32(0, 0X27);
    // 0x8028EC4C: beq         $a1, $v0, L_8028EC78
    if (ctx->r5 == ctx->r2) {
        // 0x8028EC50: nop
    
            goto L_8028EC78;
    }
    // 0x8028EC50: nop

    // 0x8028EC54: lhu         $t6, 0xD9E($a2)
    ctx->r14 = MEM_HU(ctx->r6, 0XD9E);
    // 0x8028EC58: addiu       $t7, $v1, 0x1
    ctx->r15 = ADD32(ctx->r3, 0X1);
    // 0x8028EC5C: beq         $a1, $t6, L_8028EC78
    if (ctx->r5 == ctx->r14) {
        // 0x8028EC60: lui         $at, 0x802C
        ctx->r1 = S32(0X802C << 16);
            goto L_8028EC78;
    }
    // 0x8028EC60: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028EC64: sb          $t7, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r15;
    // 0x8028EC68: lwc1        $f16, 0x39C4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X39C4);
    // 0x8028EC6C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028EC70: jr          $ra
    // 0x8028EC74: swc1        $f16, 0x39C0($at)
    MEM_W(0X39C0, ctx->r1) = ctx->f16.u32l;
    return;
    // 0x8028EC74: swc1        $f16, 0x39C0($at)
    MEM_W(0X39C0, ctx->r1) = ctx->f16.u32l;
L_8028EC78:
    // 0x8028EC78: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x8028EC7C: lw          $t8, 0x3B20($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X3B20);
    // 0x8028EC80: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8028EC84: lwc1        $f18, 0x8($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X8);
    // 0x8028EC88: nop

    // 0x8028EC8C: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x8028EC90: nop

    // 0x8028EC94: bc1f        L_8028ECA8
    if (!c1cs) {
        // 0x8028EC98: addiu       $v1, $zero, -0x10
        ctx->r3 = ADD32(0, -0X10);
            goto L_8028ECA8;
    }
    // 0x8028EC98: addiu       $v1, $zero, -0x10
    ctx->r3 = ADD32(0, -0X10);
    // 0x8028EC9C: b           L_8028ECA8
    // 0x8028ECA0: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
        goto L_8028ECA8;
    // 0x8028ECA0: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    // 0x8028ECA4: addiu       $v1, $zero, -0x10
    ctx->r3 = ADD32(0, -0X10);
L_8028ECA8:
    // 0x8028ECA8: bne         $a1, $v0, L_8028ECF0
    if (ctx->r5 != ctx->r2) {
        // 0x8028ECAC: nop
    
            goto L_8028ECF0;
    }
    // 0x8028ECAC: nop

    // 0x8028ECB0: lwc1        $f6, 0x44($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X44);
    // 0x8028ECB4: mtc1        $v1, $f10
    ctx->f10.u32l = ctx->r3;
    // 0x8028ECB8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028ECBC: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8028ECC0: swc1        $f6, 0x397C($at)
    MEM_W(0X397C, ctx->r1) = ctx->f6.u32l;
    // 0x8028ECC4: lwc1        $f8, 0x4C($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X4C);
    // 0x8028ECC8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028ECCC: add.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x8028ECD0: swc1        $f18, 0x3978($at)
    MEM_W(0X3978, ctx->r1) = ctx->f18.u32l;
    // 0x8028ECD4: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8028ECD8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8028ECDC: lwc1        $f4, 0x48($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X48);
    // 0x8028ECE0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028ECE4: add.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8028ECE8: jr          $ra
    // 0x8028ECEC: swc1        $f10, 0x39C0($at)
    MEM_W(0X39C0, ctx->r1) = ctx->f10.u32l;
    return;
    // 0x8028ECEC: swc1        $f10, 0x39C0($at)
    MEM_W(0X39C0, ctx->r1) = ctx->f10.u32l;
L_8028ECF0:
    // 0x8028ECF0: lwc1        $f8, 0xDD4($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0XDD4);
    // 0x8028ECF4: mtc1        $v1, $f18
    ctx->f18.u32l = ctx->r3;
    // 0x8028ECF8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028ECFC: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8028ED00: swc1        $f8, 0x397C($at)
    MEM_W(0X397C, ctx->r1) = ctx->f8.u32l;
    // 0x8028ED04: lwc1        $f16, 0xDDC($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0XDDC);
    // 0x8028ED08: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028ED0C: add.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x8028ED10: swc1        $f6, 0x3978($at)
    MEM_W(0X3978, ctx->r1) = ctx->f6.u32l;
    // 0x8028ED14: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8028ED18: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8028ED1C: lwc1        $f10, 0xDD8($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0XDD8);
    // 0x8028ED20: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028ED24: add.s       $f18, $f10, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x8028ED28: jr          $ra
    // 0x8028ED2C: swc1        $f18, 0x39C0($at)
    MEM_W(0X39C0, ctx->r1) = ctx->f18.u32l;
    return;
    // 0x8028ED2C: swc1        $f18, 0x39C0($at)
    MEM_W(0X39C0, ctx->r1) = ctx->f18.u32l;
L_8028ED30:
    // 0x8028ED30: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x8028ED34: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8028ED38: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8028ED3C: addiu       $a1, $a1, 0x3918
    ctx->r5 = ADD32(ctx->r5, 0X3918);
    // 0x8028ED40: lwc1        $f0, 0x0($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X0);
    // 0x8028ED44: addiu       $v0, $v0, 0x3910
    ctx->r2 = ADD32(ctx->r2, 0X3910);
    // 0x8028ED48: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028ED4C: lwc1        $f4, 0x3990($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X3990);
    // 0x8028ED50: lwc1        $f16, 0x0($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8028ED54: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x8028ED58: sub.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f4.fl;
    // 0x8028ED5C: bc1f        L_8028ED78
    if (!c1cs) {
        // 0x8028ED60: swc1        $f6, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->f6.u32l;
            goto L_8028ED78;
    }
    // 0x8028ED60: swc1        $f6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f6.u32l;
    // 0x8028ED64: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028ED68: lwc1        $f10, 0x3998($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X3998);
    // 0x8028ED6C: nop

    // 0x8028ED70: sub.s       $f8, $f0, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x8028ED74: swc1        $f8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f8.u32l;
L_8028ED78:
    // 0x8028ED78: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x8028ED7C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8028ED80: lui         $a2, 0x8010
    ctx->r6 = S32(0X8010 << 16);
    // 0x8028ED84: addiu       $a2, $a2, 0x4890
    ctx->r6 = ADD32(ctx->r6, 0X4890);
    // 0x8028ED88: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8028ED8C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8028ED90: lwc1        $f18, 0x210C($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X210C);
    // 0x8028ED94: lui         $a3, 0x802C
    ctx->r7 = S32(0X802C << 16);
    // 0x8028ED98: add.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x8028ED9C: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x8028EDA0: swc1        $f4, 0x210C($a2)
    MEM_W(0X210C, ctx->r6) = ctx->f4.u32l;
    // 0x8028EDA4: lwc1        $f6, 0x210C($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X210C);
    // 0x8028EDA8: addiu       $a3, $a3, 0x39B3
    ctx->r7 = ADD32(ctx->r7, 0X39B3);
    // 0x8028EDAC: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x8028EDB0: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x8028EDB4: bc1f        L_8028EDC0
    if (!c1cs) {
        // 0x8028EDB8: nop
    
            goto L_8028EDC0;
    }
    // 0x8028EDB8: nop

    // 0x8028EDBC: swc1        $f0, 0x210C($a2)
    MEM_W(0X210C, ctx->r6) = ctx->f0.u32l;
L_8028EDC0:
    // 0x8028EDC0: lw          $t9, 0x3B20($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X3B20);
    // 0x8028EDC4: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x8028EDC8: lh          $t0, 0xE8($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XE8);
    // 0x8028EDCC: addiu       $a2, $a2, 0x3924
    ctx->r6 = ADD32(ctx->r6, 0X3924);
    // 0x8028EDD0: bgez        $t0, L_8028EE94
    if (SIGNED(ctx->r8) >= 0) {
        // 0x8028EDD4: nop
    
            goto L_8028EE94;
    }
    // 0x8028EDD4: nop

    // 0x8028EDD8: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x8028EDDC: addiu       $a2, $a2, 0x3924
    ctx->r6 = ADD32(ctx->r6, 0X3924);
    // 0x8028EDE0: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x8028EDE4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8028EDE8: lwc1        $f10, 0x0($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X0);
    // 0x8028EDEC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8028EDF0: sub.s       $f8, $f10, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f12.fl;
    // 0x8028EDF4: lui         $a3, 0x802C
    ctx->r7 = S32(0X802C << 16);
    // 0x8028EDF8: swc1        $f8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f8.u32l;
    // 0x8028EDFC: lwc1        $f0, 0x0($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X0);
    // 0x8028EE00: addiu       $a3, $a3, 0x39B3
    ctx->r7 = ADD32(ctx->r7, 0X39B3);
    // 0x8028EE04: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x8028EE08: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028EE0C: bc1f        L_8028EE34
    if (!c1cs) {
        // 0x8028EE10: addiu       $t3, $v1, 0x1
        ctx->r11 = ADD32(ctx->r3, 0X1);
            goto L_8028EE34;
    }
    // 0x8028EE10: addiu       $t3, $v1, 0x1
    ctx->r11 = ADD32(ctx->r3, 0X1);
    // 0x8028EE14: lwc1        $f5, 0x488($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X488);
    // 0x8028EE18: lwc1        $f4, 0x48C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X48C);
    // 0x8028EE1C: cvt.d.s     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.d = CVT_D_S(ctx->f0.fl);
    // 0x8028EE20: add.d       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f16.d + ctx->f4.d;
    // 0x8028EE24: cvt.s.d     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f10.fl = CVT_S_D(ctx->f6.d);
    // 0x8028EE28: swc1        $f10, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f10.u32l;
    // 0x8028EE2C: lwc1        $f0, 0x0($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X0);
    // 0x8028EE30: nop

L_8028EE34:
    // 0x8028EE34: lbu         $t1, 0x0($a3)
    ctx->r9 = MEM_BU(ctx->r7, 0X0);
    // 0x8028EE38: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x8028EE3C: bne         $t1, $zero, L_8028EE60
    if (ctx->r9 != 0) {
        // 0x8028EE40: addiu       $t4, $zero, 0x1
        ctx->r12 = ADD32(0, 0X1);
            goto L_8028EE60;
    }
    // 0x8028EE40: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8028EE44: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8028EE48: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8028EE4C: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x8028EE50: nop

    // 0x8028EE54: bc1f        L_8028EE64
    if (!c1cs) {
        // 0x8028EE58: lui         $at, 0x4370
        ctx->r1 = S32(0X4370 << 16);
            goto L_8028EE64;
    }
    // 0x8028EE58: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
    // 0x8028EE5C: sb          $t2, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r10;
L_8028EE60:
    // 0x8028EE60: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
L_8028EE64:
    // 0x8028EE64: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8028EE68: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028EE6C: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x8028EE70: nop

    // 0x8028EE74: bc1f        L_8028EF04
    if (!c1cs) {
        // 0x8028EE78: nop
    
            goto L_8028EF04;
    }
    // 0x8028EE78: nop

    // 0x8028EE7C: swc1        $f14, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f14.u32l;
    // 0x8028EE80: swc1        $f12, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f12.u32l;
    // 0x8028EE84: swc1        $f2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f2.u32l;
    // 0x8028EE88: sb          $t3, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r11;
    // 0x8028EE8C: jr          $ra
    // 0x8028EE90: sb          $t4, 0x3A24($at)
    MEM_B(0X3A24, ctx->r1) = ctx->r12;
    return;
    // 0x8028EE90: sb          $t4, 0x3A24($at)
    MEM_B(0X3A24, ctx->r1) = ctx->r12;
L_8028EE94:
    // 0x8028EE94: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8028EE98: lwc1        $f18, 0x0($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X0);
    // 0x8028EE9C: lbu         $t5, 0x0($a3)
    ctx->r13 = MEM_BU(ctx->r7, 0X0);
    // 0x8028EEA0: add.s       $f16, $f18, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f12.fl;
    // 0x8028EEA4: bne         $t5, $zero, L_8028EED0
    if (ctx->r13 != 0) {
        // 0x8028EEA8: swc1        $f16, 0x0($a2)
        MEM_W(0X0, ctx->r6) = ctx->f16.u32l;
            goto L_8028EED0;
    }
    // 0x8028EEA8: swc1        $f16, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f16.u32l;
    // 0x8028EEAC: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x8028EEB0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8028EEB4: lwc1        $f6, 0x0($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X0);
    // 0x8028EEB8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8028EEBC: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x8028EEC0: nop

    // 0x8028EEC4: bc1f        L_8028EED4
    if (!c1cs) {
        // 0x8028EEC8: lui         $at, 0x42F0
        ctx->r1 = S32(0X42F0 << 16);
            goto L_8028EED4;
    }
    // 0x8028EEC8: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x8028EECC: sb          $t6, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r14;
L_8028EED0:
    // 0x8028EED0: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
L_8028EED4:
    // 0x8028EED4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8028EED8: lwc1        $f10, 0x0($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X0);
    // 0x8028EEDC: addiu       $t7, $v1, 0x1
    ctx->r15 = ADD32(ctx->r3, 0X1);
    // 0x8028EEE0: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x8028EEE4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028EEE8: bc1f        L_8028EF04
    if (!c1cs) {
        // 0x8028EEEC: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_8028EF04;
    }
    // 0x8028EEEC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8028EEF0: swc1        $f0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f0.u32l;
    // 0x8028EEF4: swc1        $f12, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f12.u32l;
    // 0x8028EEF8: swc1        $f2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f2.u32l;
    // 0x8028EEFC: sb          $t7, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r15;
    // 0x8028EF00: sb          $t8, 0x3A24($at)
    MEM_B(0X3A24, ctx->r1) = ctx->r24;
L_8028EF04:
    // 0x8028EF04: jr          $ra
    // 0x8028EF08: nop

    return;
    // 0x8028EF08: nop

;}
RECOMP_FUNC void func_8028EF0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028EF0C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028EF10: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8028EF14: lbu         $t6, 0xB65($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0XB65);
    // 0x8028EF18: sb          $zero, 0x3A24($at)
    MEM_B(0X3A24, ctx->r1) = 0;
    // 0x8028EF1C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8028EF20: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8028EF24: bne         $t6, $at, L_8028EF3C
    if (ctx->r14 != ctx->r1) {
        // 0x8028EF28: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8028EF3C;
    }
    // 0x8028EF28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8028EF2C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8028EF30: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028EF34: b           L_8028EF9C
    // 0x8028EF38: sb          $t7, 0x39C8($at)
    MEM_B(0X39C8, ctx->r1) = ctx->r15;
        goto L_8028EF9C;
    // 0x8028EF38: sb          $t7, 0x39C8($at)
    MEM_B(0X39C8, ctx->r1) = ctx->r15;
L_8028EF3C:
    // 0x8028EF3C: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x8028EF40: lhu         $t8, 0xB72($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0XB72);
    // 0x8028EF44: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x8028EF48: beq         $t8, $at, L_8028EF94
    if (ctx->r24 == ctx->r1) {
        // 0x8028EF4C: lui         $t9, 0x8012
        ctx->r25 = S32(0X8012 << 16);
            goto L_8028EF94;
    }
    // 0x8028EF4C: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x8028EF50: lw          $t9, 0xB24($t9)
    ctx->r25 = MEM_W(ctx->r25, 0XB24);
    // 0x8028EF54: nop

    // 0x8028EF58: lw          $t0, 0xC8($t9)
    ctx->r8 = MEM_W(ctx->r25, 0XC8);
    // 0x8028EF5C: nop

    // 0x8028EF60: lhu         $t1, 0x8($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X8);
    // 0x8028EF64: nop

    // 0x8028EF68: andi        $t2, $t1, 0x80
    ctx->r10 = ctx->r9 & 0X80;
    // 0x8028EF6C: beq         $t2, $zero, L_8028EF84
    if (ctx->r10 == 0) {
        // 0x8028EF70: nop
    
            goto L_8028EF84;
    }
    // 0x8028EF70: nop

    // 0x8028EF74: jal         0x8028EFD4
    // 0x8028EF78: nop

    func_8028EFD4(rdram, ctx);
        goto after_0;
    // 0x8028EF78: nop

    after_0:
    // 0x8028EF7C: b           L_8028EF9C
    // 0x8028EF80: nop

        goto L_8028EF9C;
    // 0x8028EF80: nop

L_8028EF84:
    // 0x8028EF84: jal         0x8028F1B0
    // 0x8028EF88: nop

    func_8028F1B0(rdram, ctx);
        goto after_1;
    // 0x8028EF88: nop

    after_1:
    // 0x8028EF8C: b           L_8028EF9C
    // 0x8028EF90: nop

        goto L_8028EF9C;
    // 0x8028EF90: nop

L_8028EF94:
    // 0x8028EF94: jal         0x8028EFD4
    // 0x8028EF98: nop

    func_8028EFD4(rdram, ctx);
        goto after_2;
    // 0x8028EF98: nop

    after_2:
L_8028EF9C:
    // 0x8028EF9C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028EFA0: jal         0x80297DB0
    // 0x8028EFA4: sb          $zero, 0x3988($at)
    MEM_B(0X3988, ctx->r1) = 0;
    func_80297DB0(rdram, ctx);
        goto after_3;
    // 0x8028EFA4: sb          $zero, 0x3988($at)
    MEM_B(0X3988, ctx->r1) = 0;
    after_3:
    // 0x8028EFA8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028EFAC: lwc1        $f4, 0x3918($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X3918);
    // 0x8028EFB0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028EFB4: swc1        $f4, 0x3994($at)
    MEM_W(0X3994, ctx->r1) = ctx->f4.u32l;
    // 0x8028EFB8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028EFBC: lwc1        $f6, 0x3910($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3910);
    // 0x8028EFC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8028EFC4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028EFC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8028EFCC: jr          $ra
    // 0x8028EFD0: swc1        $f6, 0x398C($at)
    MEM_W(0X398C, ctx->r1) = ctx->f6.u32l;
    return;
    // 0x8028EFD0: swc1        $f6, 0x398C($at)
    MEM_W(0X398C, ctx->r1) = ctx->f6.u32l;
;}
RECOMP_FUNC void func_8028EFD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028EFD4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8028EFD8: lhu         $v0, 0xB74($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XB74);
    // 0x8028EFDC: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x8028EFE0: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x8028EFE4: bne         $at, $zero, L_8028EFF8
    if (ctx->r1 != 0) {
        // 0x8028EFE8: addiu       $a2, $a2, -0x2CF0
        ctx->r6 = ADD32(ctx->r6, -0X2CF0);
            goto L_8028EFF8;
    }
    // 0x8028EFE8: addiu       $a2, $a2, -0x2CF0
    ctx->r6 = ADD32(ctx->r6, -0X2CF0);
    // 0x8028EFEC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028EFF0: jr          $ra
    // 0x8028EFF4: sb          $zero, 0x39C8($at)
    MEM_B(0X39C8, ctx->r1) = 0;
    return;
    // 0x8028EFF4: sb          $zero, 0x39C8($at)
    MEM_B(0X39C8, ctx->r1) = 0;
L_8028EFF8:
    // 0x8028EFF8: lhu         $v1, 0xA9E($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0XA9E);
    // 0x8028EFFC: lhu         $a0, 0xA($a2)
    ctx->r4 = MEM_HU(ctx->r6, 0XA);
    // 0x8028F000: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8028F004: addu        $a1, $v1, $a0
    ctx->r5 = ADD32(ctx->r3, ctx->r4);
    // 0x8028F008: bne         $a1, $at, L_8028F020
    if (ctx->r5 != ctx->r1) {
        // 0x8028F00C: andi        $t5, $a1, 0xFF
        ctx->r13 = ctx->r5 & 0XFF;
            goto L_8028F020;
    }
    // 0x8028F00C: andi        $t5, $a1, 0xFF
    ctx->r13 = ctx->r5 & 0XFF;
    // 0x8028F010: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8028F014: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028F018: jr          $ra
    // 0x8028F01C: sb          $t6, 0x39C8($at)
    MEM_B(0X39C8, ctx->r1) = ctx->r14;
    return;
    // 0x8028F01C: sb          $t6, 0x39C8($at)
    MEM_B(0X39C8, ctx->r1) = ctx->r14;
L_8028F020:
    // 0x8028F020: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x8028F024: lw          $t1, 0xB24($t1)
    ctx->r9 = MEM_W(ctx->r9, 0XB24);
    // 0x8028F028: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8028F02C: lw          $t2, 0xC8($t1)
    ctx->r10 = MEM_W(ctx->r9, 0XC8);
    // 0x8028F030: lhu         $t7, 0x1A($t1)
    ctx->r15 = MEM_HU(ctx->r9, 0X1A);
    // 0x8028F034: lbu         $t3, 0x7($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X7);
    // 0x8028F038: addu        $t8, $t2, $t7
    ctx->r24 = ADD32(ctx->r10, ctx->r15);
    // 0x8028F03C: lbu         $t0, 0x308($t8)
    ctx->r8 = MEM_BU(ctx->r24, 0X308);
    // 0x8028F040: blez        $t5, L_8028F098
    if (SIGNED(ctx->r13) <= 0) {
        // 0x8028F044: or          $t4, $zero, $zero
        ctx->r12 = 0 | 0;
            goto L_8028F098;
    }
    // 0x8028F044: or          $t4, $zero, $zero
    ctx->r12 = 0 | 0;
    // 0x8028F048: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x8028F04C: addiu       $t1, $t1, 0xB88
    ctx->r9 = ADD32(ctx->r9, 0XB88);
    // 0x8028F050: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
L_8028F054:
    // 0x8028F054: sll         $t9, $t4, 2
    ctx->r25 = S32(ctx->r12 << 2);
    // 0x8028F058: addu        $a2, $t1, $t9
    ctx->r6 = ADD32(ctx->r9, ctx->r25);
    // 0x8028F05C: lbu         $t6, 0x0($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0X0);
    // 0x8028F060: addiu       $t4, $t4, 0x1
    ctx->r12 = ADD32(ctx->r12, 0X1);
    // 0x8028F064: andi        $t7, $t6, 0xF
    ctx->r15 = ctx->r14 & 0XF;
    // 0x8028F068: bne         $a1, $t7, L_8028F08C
    if (ctx->r5 != ctx->r15) {
        // 0x8028F06C: andi        $t6, $t4, 0xFF
        ctx->r14 = ctx->r12 & 0XFF;
            goto L_8028F08C;
    }
    // 0x8028F06C: andi        $t6, $t4, 0xFF
    ctx->r14 = ctx->r12 & 0XFF;
    // 0x8028F070: lbu         $t8, 0x1($a2)
    ctx->r24 = MEM_BU(ctx->r6, 0X1);
    // 0x8028F074: nop

    // 0x8028F078: bne         $t0, $t8, L_8028F090
    if (ctx->r8 != ctx->r24) {
        // 0x8028F07C: slt         $at, $t6, $t5
        ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r13) ? 1 : 0;
            goto L_8028F090;
    }
    // 0x8028F07C: slt         $at, $t6, $t5
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x8028F080: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x8028F084: andi        $t9, $a3, 0xFF
    ctx->r25 = ctx->r7 & 0XFF;
    // 0x8028F088: or          $a3, $t9, $zero
    ctx->r7 = ctx->r25 | 0;
L_8028F08C:
    // 0x8028F08C: slt         $at, $t6, $t5
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r13) ? 1 : 0;
L_8028F090:
    // 0x8028F090: bne         $at, $zero, L_8028F054
    if (ctx->r1 != 0) {
        // 0x8028F094: or          $t4, $t6, $zero
        ctx->r12 = ctx->r14 | 0;
            goto L_8028F054;
    }
    // 0x8028F094: or          $t4, $t6, $zero
    ctx->r12 = ctx->r14 | 0;
L_8028F098:
    // 0x8028F098: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8028F09C: bne         $a3, $at, L_8028F0B0
    if (ctx->r7 != ctx->r1) {
        // 0x8028F0A0: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_8028F0B0;
    }
    // 0x8028F0A0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8028F0A4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028F0A8: jr          $ra
    // 0x8028F0AC: sb          $t7, 0x39C8($at)
    MEM_B(0X39C8, ctx->r1) = ctx->r15;
    return;
    // 0x8028F0AC: sb          $t7, 0x39C8($at)
    MEM_B(0X39C8, ctx->r1) = ctx->r15;
L_8028F0B0:
    // 0x8028F0B0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8028F0B4: bne         $v0, $at, L_8028F114
    if (ctx->r2 != ctx->r1) {
        // 0x8028F0B8: lui         $t8, 0x802C
        ctx->r24 = S32(0X802C << 16);
            goto L_8028F114;
    }
    // 0x8028F0B8: lui         $t8, 0x802C
    ctx->r24 = S32(0X802C << 16);
    // 0x8028F0BC: lhu         $t8, 0x38D0($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0X38D0);
    // 0x8028F0C0: nop

    // 0x8028F0C4: bne         $t8, $zero, L_8028F114
    if (ctx->r24 != 0) {
        // 0x8028F0C8: nop
    
            goto L_8028F114;
    }
    // 0x8028F0C8: nop

    // 0x8028F0CC: bne         $a0, $v1, L_8028F0FC
    if (ctx->r4 != ctx->r3) {
        // 0x8028F0D0: nop
    
            goto L_8028F0FC;
    }
    // 0x8028F0D0: nop

    // 0x8028F0D4: lw          $t6, 0x24($t2)
    ctx->r14 = MEM_W(ctx->r10, 0X24);
    // 0x8028F0D8: lhu         $t9, 0xA($t2)
    ctx->r25 = MEM_HU(ctx->r10, 0XA);
    // 0x8028F0DC: lhu         $t7, 0xA($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0XA);
    // 0x8028F0E0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8028F0E4: subu        $t8, $t9, $t7
    ctx->r24 = SUB32(ctx->r25, ctx->r15);
    // 0x8028F0E8: bne         $t8, $at, L_8028F0FC
    if (ctx->r24 != ctx->r1) {
        // 0x8028F0EC: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_8028F0FC;
    }
    // 0x8028F0EC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8028F0F0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028F0F4: jr          $ra
    // 0x8028F0F8: sb          $t6, 0x39C8($at)
    MEM_B(0X39C8, ctx->r1) = ctx->r14;
    return;
    // 0x8028F0F8: sb          $t6, 0x39C8($at)
    MEM_B(0X39C8, ctx->r1) = ctx->r14;
L_8028F0FC:
    // 0x8028F0FC: lui         $t9, 0x8010
    ctx->r25 = S32(0X8010 << 16);
    // 0x8028F100: lhu         $t9, 0x522A($t9)
    ctx->r25 = MEM_HU(ctx->r25, 0X522A);
    // 0x8028F104: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028F108: andi        $t7, $t9, 0x1
    ctx->r15 = ctx->r25 & 0X1;
    // 0x8028F10C: jr          $ra
    // 0x8028F110: sb          $t7, 0x39C8($at)
    MEM_B(0X39C8, ctx->r1) = ctx->r15;
    return;
    // 0x8028F110: sb          $t7, 0x39C8($at)
    MEM_B(0X39C8, ctx->r1) = ctx->r15;
L_8028F114:
    // 0x8028F114: lui         $t8, 0x8010
    ctx->r24 = S32(0X8010 << 16);
    // 0x8028F118: lhu         $t8, 0x522A($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0X522A);
    // 0x8028F11C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028F120: andi        $t6, $t8, 0x1
    ctx->r14 = ctx->r24 & 0X1;
    // 0x8028F124: sb          $t6, 0x39C8($at)
    MEM_B(0X39C8, ctx->r1) = ctx->r14;
    // 0x8028F128: jr          $ra
    // 0x8028F12C: nop

    return;
    // 0x8028F12C: nop

;}
RECOMP_FUNC void func_8028F130(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028F130: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8028F134: lbu         $v0, 0x39C8($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X39C8);
    // 0x8028F138: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8028F13C: beq         $v0, $zero, L_8028F168
    if (ctx->r2 == 0) {
        // 0x8028F140: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8028F168;
    }
    // 0x8028F140: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8028F144: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8028F148: beq         $v0, $at, L_8028F178
    if (ctx->r2 == ctx->r1) {
        // 0x8028F14C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8028F178;
    }
    // 0x8028F14C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8028F150: beq         $v0, $at, L_8028F188
    if (ctx->r2 == ctx->r1) {
        // 0x8028F154: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8028F188;
    }
    // 0x8028F154: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8028F158: beq         $v0, $at, L_8028F198
    if (ctx->r2 == ctx->r1) {
        // 0x8028F15C: nop
    
            goto L_8028F198;
    }
    // 0x8028F15C: nop

    // 0x8028F160: b           L_8028F1A4
    // 0x8028F164: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8028F1A4;
    // 0x8028F164: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8028F168:
    // 0x8028F168: jal         0x8028F78C
    // 0x8028F16C: nop

    func_8028F78C(rdram, ctx);
        goto after_0;
    // 0x8028F16C: nop

    after_0:
    // 0x8028F170: b           L_8028F1A4
    // 0x8028F174: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8028F1A4;
    // 0x8028F174: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8028F178:
    // 0x8028F178: jal         0x8028FAF4
    // 0x8028F17C: nop

    func_8028FAF4(rdram, ctx);
        goto after_1;
    // 0x8028F17C: nop

    after_1:
    // 0x8028F180: b           L_8028F1A4
    // 0x8028F184: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8028F1A4;
    // 0x8028F184: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8028F188:
    // 0x8028F188: jal         0x8028F340
    // 0x8028F18C: nop

    func_8028F340(rdram, ctx);
        goto after_2;
    // 0x8028F18C: nop

    after_2:
    // 0x8028F190: b           L_8028F1A4
    // 0x8028F194: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8028F1A4;
    // 0x8028F194: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8028F198:
    // 0x8028F198: jal         0x8028F580
    // 0x8028F19C: nop

    func_8028F580(rdram, ctx);
        goto after_3;
    // 0x8028F19C: nop

    after_3:
    // 0x8028F1A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8028F1A4:
    // 0x8028F1A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8028F1A8: jr          $ra
    // 0x8028F1AC: nop

    return;
    // 0x8028F1AC: nop

;}
RECOMP_FUNC void func_8028F1B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028F1B0: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x8028F1B4: lw          $t6, 0x3B20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B20);
    // 0x8028F1B8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8028F1BC: lwc1        $f4, 0x8($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X8);
    // 0x8028F1C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8028F1C4: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x8028F1C8: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8028F1CC: bc1f        L_8028F278
    if (!c1cs) {
        // 0x8028F1D0: lui         $t0, 0x8012
        ctx->r8 = S32(0X8012 << 16);
            goto L_8028F278;
    }
    // 0x8028F1D0: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x8028F1D4: lhu         $t7, -0x2CE8($t7)
    ctx->r15 = MEM_HU(ctx->r15, -0X2CE8);
    // 0x8028F1D8: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8028F1DC: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x8028F1E0: beq         $t8, $zero, L_8028F208
    if (ctx->r24 == 0) {
        // 0x8028F1E4: addiu       $v1, $v1, -0x17C8
        ctx->r3 = ADD32(ctx->r3, -0X17C8);
            goto L_8028F208;
    }
    // 0x8028F1E4: addiu       $v1, $v1, -0x17C8
    ctx->r3 = ADD32(ctx->r3, -0X17C8);
    // 0x8028F1E8: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8028F1EC: addiu       $v1, $v1, -0x17C8
    ctx->r3 = ADD32(ctx->r3, -0X17C8);
    // 0x8028F1F0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028F1F4: sw          $v1, 0x3AE0($at)
    MEM_W(0X3AE0, ctx->r1) = ctx->r3;
    // 0x8028F1F8: lwc1        $f0, 0x44($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X44);
    // 0x8028F1FC: lwc1        $f2, 0x4C($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X4C);
    // 0x8028F200: b           L_8028F228
    // 0x8028F204: lui         $at, 0xC3C8
    ctx->r1 = S32(0XC3C8 << 16);
        goto L_8028F228;
    // 0x8028F204: lui         $at, 0xC3C8
    ctx->r1 = S32(0XC3C8 << 16);
L_8028F208:
    // 0x8028F208: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x8028F20C: addiu       $t9, $t9, -0xA38
    ctx->r25 = ADD32(ctx->r25, -0XA38);
    // 0x8028F210: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028F214: sw          $t9, 0x3AE0($at)
    MEM_W(0X3AE0, ctx->r1) = ctx->r25;
    // 0x8028F218: lwc1        $f0, 0xDD4($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0XDD4);
    // 0x8028F21C: lwc1        $f2, 0xDDC($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0XDDC);
    // 0x8028F220: nop

    // 0x8028F224: lui         $at, 0xC3C8
    ctx->r1 = S32(0XC3C8 << 16);
L_8028F228:
    // 0x8028F228: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8028F22C: lui         $at, 0xC2B4
    ctx->r1 = S32(0XC2B4 << 16);
    // 0x8028F230: c.lt.s      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.fl < ctx->f8.fl;
    // 0x8028F234: nop

    // 0x8028F238: bc1f        L_8028F318
    if (!c1cs) {
        // 0x8028F23C: nop
    
            goto L_8028F318;
    }
    // 0x8028F23C: nop

    // 0x8028F240: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8028F244: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x8028F248: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x8028F24C: nop

    // 0x8028F250: bc1f        L_8028F318
    if (!c1cs) {
        // 0x8028F254: nop
    
            goto L_8028F318;
    }
    // 0x8028F254: nop

    // 0x8028F258: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8028F25C: nop

    // 0x8028F260: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x8028F264: nop

    // 0x8028F268: bc1f        L_8028F318
    if (!c1cs) {
        // 0x8028F26C: nop
    
            goto L_8028F318;
    }
    // 0x8028F26C: nop

    // 0x8028F270: b           L_8028F318
    // 0x8028F274: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8028F318;
    // 0x8028F274: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8028F278:
    // 0x8028F278: lhu         $t0, -0x2254($t0)
    ctx->r8 = MEM_HU(ctx->r8, -0X2254);
    // 0x8028F27C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8028F280: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x8028F284: beq         $t1, $zero, L_8028F2AC
    if (ctx->r9 == 0) {
        // 0x8028F288: addiu       $v1, $v1, -0x17C8
        ctx->r3 = ADD32(ctx->r3, -0X17C8);
            goto L_8028F2AC;
    }
    // 0x8028F288: addiu       $v1, $v1, -0x17C8
    ctx->r3 = ADD32(ctx->r3, -0X17C8);
    // 0x8028F28C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8028F290: addiu       $v1, $v1, -0x17C8
    ctx->r3 = ADD32(ctx->r3, -0X17C8);
    // 0x8028F294: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028F298: sw          $v1, 0x3AE0($at)
    MEM_W(0X3AE0, ctx->r1) = ctx->r3;
    // 0x8028F29C: lwc1        $f0, 0x44($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X44);
    // 0x8028F2A0: lwc1        $f2, 0x4C($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X4C);
    // 0x8028F2A4: b           L_8028F2CC
    // 0x8028F2A8: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
        goto L_8028F2CC;
    // 0x8028F2A8: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
L_8028F2AC:
    // 0x8028F2AC: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x8028F2B0: addiu       $t2, $t2, -0xA38
    ctx->r10 = ADD32(ctx->r10, -0XA38);
    // 0x8028F2B4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028F2B8: sw          $t2, 0x3AE0($at)
    MEM_W(0X3AE0, ctx->r1) = ctx->r10;
    // 0x8028F2BC: lwc1        $f0, 0xDD4($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0XDD4);
    // 0x8028F2C0: lwc1        $f2, 0xDDC($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0XDDC);
    // 0x8028F2C4: nop

    // 0x8028F2C8: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
L_8028F2CC:
    // 0x8028F2CC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8028F2D0: lui         $at, 0xC2B4
    ctx->r1 = S32(0XC2B4 << 16);
    // 0x8028F2D4: c.lt.s      $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.fl < ctx->f2.fl;
    // 0x8028F2D8: nop

    // 0x8028F2DC: bc1f        L_8028F318
    if (!c1cs) {
        // 0x8028F2E0: nop
    
            goto L_8028F318;
    }
    // 0x8028F2E0: nop

    // 0x8028F2E4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8028F2E8: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x8028F2EC: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x8028F2F0: nop

    // 0x8028F2F4: bc1f        L_8028F318
    if (!c1cs) {
        // 0x8028F2F8: nop
    
            goto L_8028F318;
    }
    // 0x8028F2F8: nop

    // 0x8028F2FC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8028F300: nop

    // 0x8028F304: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x8028F308: nop

    // 0x8028F30C: bc1f        L_8028F318
    if (!c1cs) {
        // 0x8028F310: nop
    
            goto L_8028F318;
    }
    // 0x8028F310: nop

    // 0x8028F314: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8028F318:
    // 0x8028F318: bne         $v0, $zero, L_8028F330
    if (ctx->r2 != 0) {
        // 0x8028F31C: addiu       $t4, $zero, 0x3
        ctx->r12 = ADD32(0, 0X3);
            goto L_8028F330;
    }
    // 0x8028F31C: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x8028F320: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x8028F324: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028F328: jr          $ra
    // 0x8028F32C: sb          $t3, 0x39C8($at)
    MEM_B(0X39C8, ctx->r1) = ctx->r11;
    return;
    // 0x8028F32C: sb          $t3, 0x39C8($at)
    MEM_B(0X39C8, ctx->r1) = ctx->r11;
L_8028F330:
    // 0x8028F330: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028F334: sb          $t4, 0x39C8($at)
    MEM_B(0X39C8, ctx->r1) = ctx->r12;
    // 0x8028F338: jr          $ra
    // 0x8028F33C: nop

    return;
    // 0x8028F33C: nop

;}
RECOMP_FUNC void func_8028F340(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028F340: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8028F344: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8028F348: jal         0x8028F51C
    // 0x8028F34C: nop

    func_8028F51C(rdram, ctx);
        goto after_0;
    // 0x8028F34C: nop

    after_0:
    // 0x8028F350: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x8028F354: addiu       $a0, $a0, 0x3988
    ctx->r4 = ADD32(ctx->r4, 0X3988);
    // 0x8028F358: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x8028F35C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8028F360: beq         $v1, $zero, L_8028F384
    if (ctx->r3 == 0) {
        // 0x8028F364: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_8028F384;
    }
    // 0x8028F364: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8028F368: beq         $v1, $at, L_8028F43C
    if (ctx->r3 == ctx->r1) {
        // 0x8028F36C: lui         $a1, 0x802C
        ctx->r5 = S32(0X802C << 16);
            goto L_8028F43C;
    }
    // 0x8028F36C: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x8028F370: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8028F374: beq         $v0, $at, L_8028F4B8
    if (ctx->r2 == ctx->r1) {
        // 0x8028F378: nop
    
            goto L_8028F4B8;
    }
    // 0x8028F378: nop

    // 0x8028F37C: b           L_8028F510
    // 0x8028F380: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8028F510;
    // 0x8028F380: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8028F384:
    // 0x8028F384: jal         0x802999AC
    // 0x8028F388: nop

    func_802999AC(rdram, ctx);
        goto after_1;
    // 0x8028F388: nop

    after_1:
    // 0x8028F38C: addiu       $t6, $zero, 0x28
    ctx->r14 = ADD32(0, 0X28);
    // 0x8028F390: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x8028F394: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8028F398: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8028F39C: addiu       $v0, $v0, 0x3989
    ctx->r2 = ADD32(ctx->r2, 0X3989);
    // 0x8028F3A0: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x8028F3A4: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x8028F3A8: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x8028F3AC: addiu       $a2, $a2, 0x3918
    ctx->r6 = ADD32(ctx->r6, 0X3918);
    // 0x8028F3B0: addiu       $a1, $a1, 0x3910
    ctx->r5 = ADD32(ctx->r5, 0X3910);
    // 0x8028F3B4: addiu       $a0, $a0, 0x3988
    ctx->r4 = ADD32(ctx->r4, 0X3988);
    // 0x8028F3B8: sb          $t6, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r14;
    // 0x8028F3BC: bgez        $t7, L_8028F3D8
    if (SIGNED(ctx->r15) >= 0) {
        // 0x8028F3C0: cvt.d.w     $f0, $f4
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.d = CVT_D_W(ctx->f4.u32l);
            goto L_8028F3D8;
    }
    // 0x8028F3C0: cvt.d.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.d = CVT_D_W(ctx->f4.u32l);
    // 0x8028F3C4: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8028F3C8: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x8028F3CC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8028F3D0: nop

    // 0x8028F3D4: add.d       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f6.d); 
    ctx->f0.d = ctx->f0.d + ctx->f6.d;
L_8028F3D8:
    // 0x8028F3D8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028F3DC: lwc1        $f8, 0x0($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X0);
    // 0x8028F3E0: lwc1        $f17, 0x490($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X490);
    // 0x8028F3E4: lwc1        $f16, 0x494($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X494);
    // 0x8028F3E8: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x8028F3EC: sub.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d - ctx->f16.d;
    // 0x8028F3F0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028F3F4: div.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = DIV_D(ctx->f18.d, ctx->f0.d);
    // 0x8028F3F8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8028F3FC: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x8028F400: swc1        $f6, 0x3998($at)
    MEM_W(0X3998, ctx->r1) = ctx->f6.u32l;
    // 0x8028F404: lwc1        $f8, 0x0($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X0);
    // 0x8028F408: lui         $at, 0x4014
    ctx->r1 = S32(0X4014 << 16);
    // 0x8028F40C: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x8028F410: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x8028F414: sub.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d - ctx->f16.d;
    // 0x8028F418: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028F41C: div.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = DIV_D(ctx->f18.d, ctx->f0.d);
    // 0x8028F420: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x8028F424: swc1        $f6, 0x3990($at)
    MEM_W(0X3990, ctx->r1) = ctx->f6.u32l;
    // 0x8028F428: lbu         $t8, 0x0($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X0);
    // 0x8028F42C: nop

    // 0x8028F430: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8028F434: b           L_8028F50C
    // 0x8028F438: sb          $t9, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r25;
        goto L_8028F50C;
    // 0x8028F438: sb          $t9, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r25;
L_8028F43C:
    // 0x8028F43C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8028F440: addiu       $v0, $v0, 0x3989
    ctx->r2 = ADD32(ctx->r2, 0X3989);
    // 0x8028F444: lbu         $t0, 0x0($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X0);
    // 0x8028F448: addiu       $a1, $a1, 0x3910
    ctx->r5 = ADD32(ctx->r5, 0X3910);
    // 0x8028F44C: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x8028F450: sb          $t1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r9;
    // 0x8028F454: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028F458: lwc1        $f10, 0x3990($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X3990);
    // 0x8028F45C: lwc1        $f8, 0x0($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X0);
    // 0x8028F460: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x8028F464: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8028F468: addiu       $a2, $a2, 0x3918
    ctx->r6 = ADD32(ctx->r6, 0X3918);
    // 0x8028F46C: swc1        $f16, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f16.u32l;
    // 0x8028F470: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028F474: lwc1        $f4, 0x3998($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X3998);
    // 0x8028F478: lwc1        $f18, 0x0($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X0);
    // 0x8028F47C: andi        $t2, $t1, 0xFF
    ctx->r10 = ctx->r9 & 0XFF;
    // 0x8028F480: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x8028F484: bne         $t2, $zero, L_8028F4B8
    if (ctx->r10 != 0) {
        // 0x8028F488: swc1        $f6, 0x0($a2)
        MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
            goto L_8028F4B8;
    }
    // 0x8028F488: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
    // 0x8028F48C: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x8028F490: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8028F494: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x8028F498: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8028F49C: addiu       $t3, $v1, 0x1
    ctx->r11 = ADD32(ctx->r3, 0X1);
    // 0x8028F4A0: sb          $t3, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r11;
    // 0x8028F4A4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028F4A8: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8028F4AC: swc1        $f8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f8.u32l;
    // 0x8028F4B0: swc1        $f10, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f10.u32l;
    // 0x8028F4B4: sb          $t4, 0x3A24($at)
    MEM_B(0X3A24, ctx->r1) = ctx->r12;
L_8028F4B8:
    // 0x8028F4B8: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8028F4BC: addiu       $v0, $v0, 0x3924
    ctx->r2 = ADD32(ctx->r2, 0X3924);
    // 0x8028F4C0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8028F4C4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8028F4C8: lwc1        $f16, 0x0($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8028F4CC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8028F4D0: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x8028F4D4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028F4D8: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
    // 0x8028F4DC: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8028F4E0: nop

    // 0x8028F4E4: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x8028F4E8: nop

    // 0x8028F4EC: bc1f        L_8028F510
    if (!c1cs) {
        // 0x8028F4F0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8028F510;
    }
    // 0x8028F4F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8028F4F4: lwc1        $f11, 0x498($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X498);
    // 0x8028F4F8: lwc1        $f10, 0x49C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X49C);
    // 0x8028F4FC: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x8028F500: add.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d + ctx->f10.d;
    // 0x8028F504: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x8028F508: swc1        $f18, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f18.u32l;
L_8028F50C:
    // 0x8028F50C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8028F510:
    // 0x8028F510: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8028F514: jr          $ra
    // 0x8028F518: nop

    return;
    // 0x8028F518: nop

;}
RECOMP_FUNC void func_8028F51C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028F51C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8028F520: lw          $t6, 0xB24($t6)
    ctx->r14 = MEM_W(ctx->r14, 0XB24);
    // 0x8028F524: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8028F528: lw          $t7, 0xC8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XC8);
    // 0x8028F52C: lui         $at, 0xC3E1
    ctx->r1 = S32(0XC3E1 << 16);
    // 0x8028F530: lhu         $t8, 0x8($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X8);
    // 0x8028F534: nop

    // 0x8028F538: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x8028F53C: beq         $t9, $zero, L_8028F558
    if (ctx->r25 == 0) {
        // 0x8028F540: nop
    
            goto L_8028F558;
    }
    // 0x8028F540: nop

    // 0x8028F544: lui         $at, 0x43E1
    ctx->r1 = S32(0X43E1 << 16);
    // 0x8028F548: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8028F54C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028F550: b           L_8028F564
    // 0x8028F554: swc1        $f4, 0x3978($at)
    MEM_W(0X3978, ctx->r1) = ctx->f4.u32l;
        goto L_8028F564;
    // 0x8028F554: swc1        $f4, 0x3978($at)
    MEM_W(0X3978, ctx->r1) = ctx->f4.u32l;
L_8028F558:
    // 0x8028F558: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8028F55C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028F560: swc1        $f6, 0x3978($at)
    MEM_W(0X3978, ctx->r1) = ctx->f6.u32l;
L_8028F564:
    // 0x8028F564: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028F568: swc1        $f0, 0x397C($at)
    MEM_W(0X397C, ctx->r1) = ctx->f0.u32l;
    // 0x8028F56C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028F570: swc1        $f0, 0x3980($at)
    MEM_W(0X3980, ctx->r1) = ctx->f0.u32l;
    // 0x8028F574: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028F578: jr          $ra
    // 0x8028F57C: swc1        $f0, 0x3984($at)
    MEM_W(0X3984, ctx->r1) = ctx->f0.u32l;
    return;
    // 0x8028F57C: swc1        $f0, 0x3984($at)
    MEM_W(0X3984, ctx->r1) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_8028F580(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028F580: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8028F584: lw          $v0, 0x3AE0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3AE0);
    // 0x8028F588: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8028F58C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8028F590: lwc1        $f4, 0x4C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x8028F594: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028F598: swc1        $f4, 0x3978($at)
    MEM_W(0X3978, ctx->r1) = ctx->f4.u32l;
    // 0x8028F59C: lwc1        $f6, 0x44($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X44);
    // 0x8028F5A0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028F5A4: swc1        $f6, 0x397C($at)
    MEM_W(0X397C, ctx->r1) = ctx->f6.u32l;
    // 0x8028F5A8: lwc1        $f8, 0x78($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X78);
    // 0x8028F5AC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028F5B0: swc1        $f8, 0x3980($at)
    MEM_W(0X3980, ctx->r1) = ctx->f8.u32l;
    // 0x8028F5B4: lwc1        $f10, 0x70($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X70);
    // 0x8028F5B8: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x8028F5BC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028F5C0: addiu       $a1, $a1, 0x3988
    ctx->r5 = ADD32(ctx->r5, 0X3988);
    // 0x8028F5C4: swc1        $f10, 0x3984($at)
    MEM_W(0X3984, ctx->r1) = ctx->f10.u32l;
    // 0x8028F5C8: lbu         $a0, 0x0($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0X0);
    // 0x8028F5CC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8028F5D0: beq         $a0, $zero, L_8028F5F4
    if (ctx->r4 == 0) {
        // 0x8028F5D4: or          $v1, $a0, $zero
        ctx->r3 = ctx->r4 | 0;
            goto L_8028F5F4;
    }
    // 0x8028F5D4: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x8028F5D8: beq         $a0, $at, L_8028F6AC
    if (ctx->r4 == ctx->r1) {
        // 0x8028F5DC: lui         $v0, 0x802C
        ctx->r2 = S32(0X802C << 16);
            goto L_8028F6AC;
    }
    // 0x8028F5DC: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8028F5E0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8028F5E4: beq         $v1, $at, L_8028F72C
    if (ctx->r3 == ctx->r1) {
        // 0x8028F5E8: lui         $v0, 0x802C
        ctx->r2 = S32(0X802C << 16);
            goto L_8028F72C;
    }
    // 0x8028F5E8: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8028F5EC: b           L_8028F780
    // 0x8028F5F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8028F780;
    // 0x8028F5F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8028F5F4:
    // 0x8028F5F4: jal         0x802999AC
    // 0x8028F5F8: nop

    func_802999AC(rdram, ctx);
        goto after_0;
    // 0x8028F5F8: nop

    after_0:
    // 0x8028F5FC: addiu       $t6, $zero, 0x28
    ctx->r14 = ADD32(0, 0X28);
    // 0x8028F600: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x8028F604: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x8028F608: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8028F60C: addiu       $v0, $v0, 0x3989
    ctx->r2 = ADD32(ctx->r2, 0X3989);
    // 0x8028F610: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x8028F614: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x8028F618: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x8028F61C: addiu       $a2, $a2, 0x3918
    ctx->r6 = ADD32(ctx->r6, 0X3918);
    // 0x8028F620: addiu       $a1, $a1, 0x3988
    ctx->r5 = ADD32(ctx->r5, 0X3988);
    // 0x8028F624: addiu       $v1, $v1, 0x3910
    ctx->r3 = ADD32(ctx->r3, 0X3910);
    // 0x8028F628: sb          $t6, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r14;
    // 0x8028F62C: bgez        $t7, L_8028F648
    if (SIGNED(ctx->r15) >= 0) {
        // 0x8028F630: cvt.d.w     $f0, $f16
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.d = CVT_D_W(ctx->f16.u32l);
            goto L_8028F648;
    }
    // 0x8028F630: cvt.d.w     $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.d = CVT_D_W(ctx->f16.u32l);
    // 0x8028F634: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8028F638: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x8028F63C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8028F640: nop

    // 0x8028F644: add.d       $f0, $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f18.d); 
    ctx->f0.d = ctx->f0.d + ctx->f18.d;
L_8028F648:
    // 0x8028F648: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028F64C: lwc1        $f4, 0x0($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X0);
    // 0x8028F650: lwc1        $f9, 0x4A0($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X4A0);
    // 0x8028F654: lwc1        $f8, 0x4A4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4A4);
    // 0x8028F658: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8028F65C: sub.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d - ctx->f8.d;
    // 0x8028F660: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028F664: div.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = DIV_D(ctx->f10.d, ctx->f0.d);
    // 0x8028F668: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8028F66C: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x8028F670: swc1        $f18, 0x3998($at)
    MEM_W(0X3998, ctx->r1) = ctx->f18.u32l;
    // 0x8028F674: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x8028F678: lui         $at, 0x4014
    ctx->r1 = S32(0X4014 << 16);
    // 0x8028F67C: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x8028F680: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8028F684: sub.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d - ctx->f8.d;
    // 0x8028F688: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028F68C: div.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = DIV_D(ctx->f10.d, ctx->f0.d);
    // 0x8028F690: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x8028F694: swc1        $f18, 0x3990($at)
    MEM_W(0X3990, ctx->r1) = ctx->f18.u32l;
    // 0x8028F698: lbu         $t8, 0x0($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X0);
    // 0x8028F69C: nop

    // 0x8028F6A0: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8028F6A4: b           L_8028F77C
    // 0x8028F6A8: sb          $t9, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r25;
        goto L_8028F77C;
    // 0x8028F6A8: sb          $t9, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r25;
L_8028F6AC:
    // 0x8028F6AC: addiu       $v0, $v0, 0x3989
    ctx->r2 = ADD32(ctx->r2, 0X3989);
    // 0x8028F6B0: lbu         $t0, 0x0($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X0);
    // 0x8028F6B4: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x8028F6B8: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x8028F6BC: addiu       $v1, $v1, 0x3910
    ctx->r3 = ADD32(ctx->r3, 0X3910);
    // 0x8028F6C0: sb          $t1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r9;
    // 0x8028F6C4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028F6C8: lwc1        $f6, 0x3990($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3990);
    // 0x8028F6CC: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x8028F6D0: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x8028F6D4: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8028F6D8: addiu       $a2, $a2, 0x3918
    ctx->r6 = ADD32(ctx->r6, 0X3918);
    // 0x8028F6DC: swc1        $f8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f8.u32l;
    // 0x8028F6E0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028F6E4: lwc1        $f16, 0x3998($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X3998);
    // 0x8028F6E8: lwc1        $f10, 0x0($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X0);
    // 0x8028F6EC: andi        $t2, $t1, 0xFF
    ctx->r10 = ctx->r9 & 0XFF;
    // 0x8028F6F0: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x8028F6F4: bne         $t2, $zero, L_8028F77C
    if (ctx->r10 != 0) {
        // 0x8028F6F8: swc1        $f18, 0x0($a2)
        MEM_W(0X0, ctx->r6) = ctx->f18.u32l;
            goto L_8028F77C;
    }
    // 0x8028F6F8: swc1        $f18, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f18.u32l;
    // 0x8028F6FC: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x8028F700: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8028F704: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x8028F708: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8028F70C: addiu       $t3, $a0, 0x1
    ctx->r11 = ADD32(ctx->r4, 0X1);
    // 0x8028F710: sb          $t3, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r11;
    // 0x8028F714: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028F718: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8028F71C: swc1        $f4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f4.u32l;
    // 0x8028F720: swc1        $f6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f6.u32l;
    // 0x8028F724: b           L_8028F77C
    // 0x8028F728: sb          $t4, 0x3A24($at)
    MEM_B(0X3A24, ctx->r1) = ctx->r12;
        goto L_8028F77C;
    // 0x8028F728: sb          $t4, 0x3A24($at)
    MEM_B(0X3A24, ctx->r1) = ctx->r12;
L_8028F72C:
    // 0x8028F72C: addiu       $v0, $v0, 0x3924
    ctx->r2 = ADD32(ctx->r2, 0X3924);
    // 0x8028F730: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8028F734: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8028F738: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8028F73C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8028F740: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8028F744: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028F748: swc1        $f16, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f16.u32l;
    // 0x8028F74C: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8028F750: nop

    // 0x8028F754: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x8028F758: nop

    // 0x8028F75C: bc1f        L_8028F780
    if (!c1cs) {
        // 0x8028F760: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8028F780;
    }
    // 0x8028F760: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8028F764: lwc1        $f7, 0x4A8($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X4A8);
    // 0x8028F768: lwc1        $f6, 0x4AC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4AC);
    // 0x8028F76C: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x8028F770: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x8028F774: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x8028F778: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
L_8028F77C:
    // 0x8028F77C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8028F780:
    // 0x8028F780: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8028F784: jr          $ra
    // 0x8028F788: nop

    return;
    // 0x8028F788: nop

;}
RECOMP_FUNC void func_8028F78C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028F78C: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x8028F790: addiu       $a0, $a0, 0x3988
    ctx->r4 = ADD32(ctx->r4, 0X3988);
    // 0x8028F794: lbu         $t6, 0x0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X0);
    // 0x8028F798: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8028F79C: sltiu       $at, $t6, 0x5
    ctx->r1 = ctx->r14 < 0X5 ? 1 : 0;
    // 0x8028F7A0: beq         $at, $zero, L_8028FAE4
    if (ctx->r1 == 0) {
        // 0x8028F7A4: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8028FAE4;
    }
    // 0x8028F7A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8028F7A8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8028F7AC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028F7B0: addu        $at, $at, $t6
    gpr jr_addend_8028F7BC = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8028F7B4: lw          $t6, 0x4B0($at)
    ctx->r14 = ADD32(ctx->r1, 0X4B0);
    // 0x8028F7B8: nop

    // 0x8028F7BC: jr          $t6
    // 0x8028F7C0: nop

    switch (jr_addend_8028F7BC >> 2) {
        case 0: goto L_8028F7C4; break;
        case 1: goto L_8028F804; break;
        case 2: goto L_8028F850; break;
        case 3: goto L_8028F99C; break;
        case 4: goto L_8028FAD0; break;
        default: switch_error(__func__, 0x8028F7BC, 0x802C04B0);
    }
    // 0x8028F7C0: nop

L_8028F7C4:
    // 0x8028F7C4: jal         0x80297DB0
    // 0x8028F7C8: nop

    func_80297DB0(rdram, ctx);
        goto after_0;
    // 0x8028F7C8: nop

    after_0:
    // 0x8028F7CC: jal         0x802999AC
    // 0x8028F7D0: nop

    func_802999AC(rdram, ctx);
        goto after_1;
    // 0x8028F7D0: nop

    after_1:
    // 0x8028F7D4: jal         0x8028FDAC
    // 0x8028F7D8: nop

    func_8028FDAC(rdram, ctx);
        goto after_2;
    // 0x8028F7D8: nop

    after_2:
    // 0x8028F7DC: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x8028F7E0: addiu       $a0, $a0, 0x3988
    ctx->r4 = ADD32(ctx->r4, 0X3988);
    // 0x8028F7E4: lbu         $t7, 0x0($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X0);
    // 0x8028F7E8: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x8028F7EC: addiu       $v1, $v1, 0x3989
    ctx->r3 = ADD32(ctx->r3, 0X3989);
    // 0x8028F7F0: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8028F7F4: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8028F7F8: sb          $t8, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r24;
    // 0x8028F7FC: b           L_8028FAE4
    // 0x8028F800: sb          $t9, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r25;
        goto L_8028FAE4;
    // 0x8028F800: sb          $t9, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r25;
L_8028F804:
    // 0x8028F804: jal         0x8028FDAC
    // 0x8028F808: nop

    func_8028FDAC(rdram, ctx);
        goto after_3;
    // 0x8028F808: nop

    after_3:
    // 0x8028F80C: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x8028F810: addiu       $v1, $v1, 0x3989
    ctx->r3 = ADD32(ctx->r3, 0X3989);
    // 0x8028F814: lbu         $t0, 0x0($v1)
    ctx->r8 = MEM_BU(ctx->r3, 0X0);
    // 0x8028F818: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x8028F81C: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x8028F820: andi        $t2, $t1, 0xFF
    ctx->r10 = ctx->r9 & 0XFF;
    // 0x8028F824: addiu       $a0, $a0, 0x3988
    ctx->r4 = ADD32(ctx->r4, 0X3988);
    // 0x8028F828: bne         $t2, $zero, L_8028FAE4
    if (ctx->r10 != 0) {
        // 0x8028F82C: sb          $t1, 0x0($v1)
        MEM_B(0X0, ctx->r3) = ctx->r9;
            goto L_8028FAE4;
    }
    // 0x8028F82C: sb          $t1, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r9;
    // 0x8028F830: lbu         $t3, 0x0($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0X0);
    // 0x8028F834: addiu       $t5, $zero, 0x14
    ctx->r13 = ADD32(0, 0X14);
    // 0x8028F838: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8028F83C: sb          $t4, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r12;
    // 0x8028F840: sb          $t5, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r13;
    // 0x8028F844: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028F848: b           L_8028FAE4
    // 0x8028F84C: sb          $zero, 0x399D($at)
    MEM_B(0X399D, ctx->r1) = 0;
        goto L_8028FAE4;
    // 0x8028F84C: sb          $zero, 0x399D($at)
    MEM_B(0X399D, ctx->r1) = 0;
L_8028F850:
    // 0x8028F850: jal         0x8028FD6C
    // 0x8028F854: nop

    func_8028FD6C(rdram, ctx);
        goto after_4;
    // 0x8028F854: nop

    after_4:
    // 0x8028F858: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x8028F85C: addiu       $v1, $v1, 0x3989
    ctx->r3 = ADD32(ctx->r3, 0X3989);
    // 0x8028F860: lbu         $t6, 0x0($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X0);
    // 0x8028F864: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x8028F868: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8028F86C: andi        $t8, $t7, 0xFF
    ctx->r24 = ctx->r15 & 0XFF;
    // 0x8028F870: addiu       $a0, $a0, 0x3988
    ctx->r4 = ADD32(ctx->r4, 0X3988);
    // 0x8028F874: bne         $t8, $zero, L_8028FAE4
    if (ctx->r24 != 0) {
        // 0x8028F878: sb          $t7, 0x0($v1)
        MEM_B(0X0, ctx->r3) = ctx->r15;
            goto L_8028FAE4;
    }
    // 0x8028F878: sb          $t7, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r15;
    // 0x8028F87C: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x8028F880: lw          $t9, 0xB24($t9)
    ctx->r25 = MEM_W(ctx->r25, 0XB24);
    // 0x8028F884: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x8028F888: lw          $v0, 0xC8($t9)
    ctx->r2 = MEM_W(ctx->r25, 0XC8);
    // 0x8028F88C: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x8028F890: lhu         $t0, 0x10($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X10);
    // 0x8028F894: addiu       $a2, $a2, 0x3918
    ctx->r6 = ADD32(ctx->r6, 0X3918);
    // 0x8028F898: andi        $t1, $t0, 0x800
    ctx->r9 = ctx->r8 & 0X800;
    // 0x8028F89C: beq         $t1, $zero, L_8028F8C8
    if (ctx->r9 == 0) {
        // 0x8028F8A0: addiu       $a1, $a1, 0x3910
        ctx->r5 = ADD32(ctx->r5, 0X3910);
            goto L_8028F8C8;
    }
    // 0x8028F8A0: addiu       $a1, $a1, 0x3910
    ctx->r5 = ADD32(ctx->r5, 0X3910);
    // 0x8028F8A4: lhu         $t2, 0x8($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X8);
    // 0x8028F8A8: addiu       $t4, $zero, 0x70
    ctx->r12 = ADD32(0, 0X70);
    // 0x8028F8AC: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x8028F8B0: beq         $t3, $zero, L_8028F8C0
    if (ctx->r11 == 0) {
        // 0x8028F8B4: addiu       $t5, $zero, 0x48
        ctx->r13 = ADD32(0, 0X48);
            goto L_8028F8C0;
    }
    // 0x8028F8B4: addiu       $t5, $zero, 0x48
    ctx->r13 = ADD32(0, 0X48);
    // 0x8028F8B8: b           L_8028F8D0
    // 0x8028F8BC: sb          $t4, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r12;
        goto L_8028F8D0;
    // 0x8028F8BC: sb          $t4, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r12;
L_8028F8C0:
    // 0x8028F8C0: b           L_8028F8D0
    // 0x8028F8C4: sb          $t5, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r13;
        goto L_8028F8D0;
    // 0x8028F8C4: sb          $t5, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r13;
L_8028F8C8:
    // 0x8028F8C8: addiu       $t6, $zero, 0x5A
    ctx->r14 = ADD32(0, 0X5A);
    // 0x8028F8CC: sb          $t6, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r14;
L_8028F8D0:
    // 0x8028F8D0: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8028F8D4: lui         $a3, 0x802C
    ctx->r7 = S32(0X802C << 16);
    // 0x8028F8D8: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x8028F8DC: addiu       $a3, $a3, 0x39C0
    ctx->r7 = ADD32(ctx->r7, 0X39C0);
    // 0x8028F8E0: bgez        $v0, L_8028F8FC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8028F8E4: cvt.d.w     $f0, $f4
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.d = CVT_D_W(ctx->f4.u32l);
            goto L_8028F8FC;
    }
    // 0x8028F8E4: cvt.d.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.d = CVT_D_W(ctx->f4.u32l);
    // 0x8028F8E8: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8028F8EC: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x8028F8F0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8028F8F4: nop

    // 0x8028F8F8: add.d       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f6.d); 
    ctx->f0.d = ctx->f0.d + ctx->f6.d;
L_8028F8FC:
    // 0x8028F8FC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028F900: lwc1        $f8, 0x0($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X0);
    // 0x8028F904: lwc1        $f17, 0x4C8($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X4C8);
    // 0x8028F908: lwc1        $f16, 0x4CC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X4CC);
    // 0x8028F90C: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x8028F910: sub.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d - ctx->f16.d;
    // 0x8028F914: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028F918: div.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = DIV_D(ctx->f18.d, ctx->f0.d);
    // 0x8028F91C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8028F920: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x8028F924: swc1        $f6, 0x3998($at)
    MEM_W(0X3998, ctx->r1) = ctx->f6.u32l;
    // 0x8028F928: lwc1        $f8, 0x0($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X0);
    // 0x8028F92C: lui         $at, 0x4020
    ctx->r1 = S32(0X4020 << 16);
    // 0x8028F930: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x8028F934: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x8028F938: sub.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d - ctx->f16.d;
    // 0x8028F93C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028F940: div.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = DIV_D(ctx->f18.d, ctx->f0.d);
    // 0x8028F944: mtc1        $v0, $f18
    ctx->f18.u32l = ctx->r2;
    // 0x8028F948: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x8028F94C: swc1        $f6, 0x3990($at)
    MEM_W(0X3990, ctx->r1) = ctx->f6.u32l;
    // 0x8028F950: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x8028F954: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8028F958: lwc1        $f10, 0x0($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X0);
    // 0x8028F95C: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8028F960: bgez        $v0, L_8028F978
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8028F964: sub.s       $f16, $f8, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
            goto L_8028F978;
    }
    // 0x8028F964: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8028F968: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8028F96C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8028F970: nop

    // 0x8028F974: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
L_8028F978:
    // 0x8028F978: nop

    // 0x8028F97C: div.s       $f8, $f16, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = DIV_S(ctx->f16.fl, ctx->f4.fl);
    // 0x8028F980: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028F984: swc1        $f8, 0x39C4($at)
    MEM_W(0X39C4, ctx->r1) = ctx->f8.u32l;
    // 0x8028F988: lbu         $t7, 0x0($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X0);
    // 0x8028F98C: nop

    // 0x8028F990: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8028F994: b           L_8028FAE4
    // 0x8028F998: sb          $t8, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r24;
        goto L_8028FAE4;
    // 0x8028F998: sb          $t8, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r24;
L_8028F99C:
    // 0x8028F99C: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x8028F9A0: addiu       $v1, $v1, 0x3989
    ctx->r3 = ADD32(ctx->r3, 0X3989);
    // 0x8028F9A4: lbu         $t9, 0x0($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X0);
    // 0x8028F9A8: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x8028F9AC: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x8028F9B0: addiu       $a1, $a1, 0x3910
    ctx->r5 = ADD32(ctx->r5, 0X3910);
    // 0x8028F9B4: sb          $t0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r8;
    // 0x8028F9B8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028F9BC: lwc1        $f18, 0x3990($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X3990);
    // 0x8028F9C0: lwc1        $f10, 0x0($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X0);
    // 0x8028F9C4: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x8028F9C8: sub.s       $f6, $f10, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f18.fl;
    // 0x8028F9CC: addiu       $a2, $a2, 0x3918
    ctx->r6 = ADD32(ctx->r6, 0X3918);
    // 0x8028F9D0: swc1        $f6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f6.u32l;
    // 0x8028F9D4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028F9D8: lwc1        $f4, 0x3998($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X3998);
    // 0x8028F9DC: lwc1        $f16, 0x0($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X0);
    // 0x8028F9E0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028F9E4: sub.s       $f8, $f16, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f16.fl - ctx->f4.fl;
    // 0x8028F9E8: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8028F9EC: swc1        $f8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f8.u32l;
    // 0x8028F9F0: lwc1        $f18, 0x39C4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X39C4);
    // 0x8028F9F4: addiu       $v0, $v0, 0x3924
    ctx->r2 = ADD32(ctx->r2, 0X3924);
    // 0x8028F9F8: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x8028F9FC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8028FA00: lwc1        $f16, 0x0($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8028FA04: lui         $a3, 0x802C
    ctx->r7 = S32(0X802C << 16);
    // 0x8028FA08: addiu       $a3, $a3, 0x39C0
    ctx->r7 = ADD32(ctx->r7, 0X39C0);
    // 0x8028FA0C: lwc1        $f10, 0x0($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X0);
    // 0x8028FA10: sub.s       $f8, $f16, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f16.fl - ctx->f4.fl;
    // 0x8028FA14: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028FA18: add.s       $f6, $f10, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x8028FA1C: swc1        $f8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f8.u32l;
    // 0x8028FA20: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8028FA24: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8028FA28: swc1        $f6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f6.u32l;
    // 0x8028FA2C: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x8028FA30: nop

    // 0x8028FA34: bc1f        L_8028FA54
    if (!c1cs) {
        // 0x8028FA38: nop
    
            goto L_8028FA54;
    }
    // 0x8028FA38: nop

    // 0x8028FA3C: lwc1        $f7, 0x4D0($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X4D0);
    // 0x8028FA40: lwc1        $f6, 0x4D4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4D4);
    // 0x8028FA44: cvt.d.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.d = CVT_D_S(ctx->f0.fl);
    // 0x8028FA48: add.d       $f16, $f18, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f6.d); 
    ctx->f16.d = ctx->f18.d + ctx->f6.d;
    // 0x8028FA4C: cvt.s.d     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f4.fl = CVT_S_D(ctx->f16.d);
    // 0x8028FA50: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
L_8028FA54:
    // 0x8028FA54: jal         0x8028FD6C
    // 0x8028FA58: nop

    func_8028FD6C(rdram, ctx);
        goto after_5;
    // 0x8028FA58: nop

    after_5:
    // 0x8028FA5C: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x8028FA60: addiu       $v1, $v1, 0x3989
    ctx->r3 = ADD32(ctx->r3, 0X3989);
    // 0x8028FA64: lbu         $t1, 0x0($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0X0);
    // 0x8028FA68: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8028FA6C: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x8028FA70: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x8028FA74: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x8028FA78: lui         $a3, 0x802C
    ctx->r7 = S32(0X802C << 16);
    // 0x8028FA7C: addiu       $a3, $a3, 0x39C0
    ctx->r7 = ADD32(ctx->r7, 0X39C0);
    // 0x8028FA80: addiu       $a2, $a2, 0x3918
    ctx->r6 = ADD32(ctx->r6, 0X3918);
    // 0x8028FA84: addiu       $a1, $a1, 0x3910
    ctx->r5 = ADD32(ctx->r5, 0X3910);
    // 0x8028FA88: addiu       $a0, $a0, 0x3988
    ctx->r4 = ADD32(ctx->r4, 0X3988);
    // 0x8028FA8C: bne         $t1, $zero, L_8028FAE4
    if (ctx->r9 != 0) {
        // 0x8028FA90: addiu       $v0, $v0, 0x3924
        ctx->r2 = ADD32(ctx->r2, 0X3924);
            goto L_8028FAE4;
    }
    // 0x8028FA90: addiu       $v0, $v0, 0x3924
    ctx->r2 = ADD32(ctx->r2, 0X3924);
    // 0x8028FA94: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x8028FA98: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8028FA9C: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x8028FAA0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8028FAA4: lbu         $t2, 0x0($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0X0);
    // 0x8028FAA8: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x8028FAAC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8028FAB0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8028FAB4: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x8028FAB8: sb          $t3, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r11;
    // 0x8028FABC: swc1        $f10, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f10.u32l;
    // 0x8028FAC0: swc1        $f18, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f18.u32l;
    // 0x8028FAC4: swc1        $f8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f8.u32l;
    // 0x8028FAC8: b           L_8028FAE4
    // 0x8028FACC: swc1        $f6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f6.u32l;
        goto L_8028FAE4;
    // 0x8028FACC: swc1        $f6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f6.u32l;
L_8028FAD0:
    // 0x8028FAD0: jal         0x8028FD6C
    // 0x8028FAD4: nop

    func_8028FD6C(rdram, ctx);
        goto after_6;
    // 0x8028FAD4: nop

    after_6:
    // 0x8028FAD8: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8028FADC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028FAE0: sb          $t4, 0x3A24($at)
    MEM_B(0X3A24, ctx->r1) = ctx->r12;
L_8028FAE4:
    // 0x8028FAE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8028FAE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8028FAEC: jr          $ra
    // 0x8028FAF0: nop

    return;
    // 0x8028FAF0: nop

;}
RECOMP_FUNC void func_8028FAF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028FAF4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8028FAF8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8028FAFC: lui         $s0, 0x802C
    ctx->r16 = S32(0X802C << 16);
    // 0x8028FB00: addiu       $s0, $s0, 0x3988
    ctx->r16 = ADD32(ctx->r16, 0X3988);
    // 0x8028FB04: lbu         $t6, 0x0($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X0);
    // 0x8028FB08: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8028FB0C: sltiu       $at, $t6, 0x6
    ctx->r1 = ctx->r14 < 0X6 ? 1 : 0;
    // 0x8028FB10: beq         $at, $zero, L_8028FD5C
    if (ctx->r1 == 0) {
        // 0x8028FB14: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_8028FD5C;
    }
    // 0x8028FB14: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8028FB18: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028FB1C: addu        $at, $at, $t6
    gpr jr_addend_8028FB28 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8028FB20: lw          $t6, 0x4D8($at)
    ctx->r14 = ADD32(ctx->r1, 0X4D8);
    // 0x8028FB24: nop

    // 0x8028FB28: jr          $t6
    // 0x8028FB2C: nop

    switch (jr_addend_8028FB28 >> 2) {
        case 0: goto L_8028FB30; break;
        case 1: goto L_8028FB68; break;
        case 2: goto L_8028FBB0; break;
        case 3: goto L_8028FC44; break;
        case 4: goto L_8028FCB4; break;
        case 5: goto L_8028FD3C; break;
        default: switch_error(__func__, 0x8028FB28, 0x802C04D8);
    }
    // 0x8028FB2C: nop

L_8028FB30:
    // 0x8028FB30: jal         0x80297DB0
    // 0x8028FB34: nop

    func_80297DB0(rdram, ctx);
        goto after_0;
    // 0x8028FB34: nop

    after_0:
    // 0x8028FB38: jal         0x802999AC
    // 0x8028FB3C: nop

    func_802999AC(rdram, ctx);
        goto after_1;
    // 0x8028FB3C: nop

    after_1:
    // 0x8028FB40: jal         0x8028FDAC
    // 0x8028FB44: nop

    func_8028FDAC(rdram, ctx);
        goto after_2;
    // 0x8028FB44: nop

    after_2:
    // 0x8028FB48: lbu         $t7, 0x0($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X0);
    // 0x8028FB4C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8028FB50: addiu       $v0, $v0, 0x3989
    ctx->r2 = ADD32(ctx->r2, 0X3989);
    // 0x8028FB54: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8028FB58: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8028FB5C: sb          $t8, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r24;
    // 0x8028FB60: b           L_8028FD5C
    // 0x8028FB64: sb          $t9, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r25;
        goto L_8028FD5C;
    // 0x8028FB64: sb          $t9, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r25;
L_8028FB68:
    // 0x8028FB68: jal         0x8028FDAC
    // 0x8028FB6C: nop

    func_8028FDAC(rdram, ctx);
        goto after_3;
    // 0x8028FB6C: nop

    after_3:
    // 0x8028FB70: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8028FB74: addiu       $v0, $v0, 0x3989
    ctx->r2 = ADD32(ctx->r2, 0X3989);
    // 0x8028FB78: lbu         $t0, 0x0($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X0);
    // 0x8028FB7C: nop

    // 0x8028FB80: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x8028FB84: andi        $t2, $t1, 0xFF
    ctx->r10 = ctx->r9 & 0XFF;
    // 0x8028FB88: bne         $t2, $zero, L_8028FD5C
    if (ctx->r10 != 0) {
        // 0x8028FB8C: sb          $t1, 0x0($v0)
        MEM_B(0X0, ctx->r2) = ctx->r9;
            goto L_8028FD5C;
    }
    // 0x8028FB8C: sb          $t1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r9;
    // 0x8028FB90: lbu         $t3, 0x0($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X0);
    // 0x8028FB94: addiu       $t5, $zero, 0x14
    ctx->r13 = ADD32(0, 0X14);
    // 0x8028FB98: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8028FB9C: sb          $t4, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r12;
    // 0x8028FBA0: sb          $t5, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r13;
    // 0x8028FBA4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028FBA8: b           L_8028FD5C
    // 0x8028FBAC: sb          $zero, 0x399D($at)
    MEM_B(0X399D, ctx->r1) = 0;
        goto L_8028FD5C;
    // 0x8028FBAC: sb          $zero, 0x399D($at)
    MEM_B(0X399D, ctx->r1) = 0;
L_8028FBB0:
    // 0x8028FBB0: jal         0x8028FD6C
    // 0x8028FBB4: nop

    func_8028FD6C(rdram, ctx);
        goto after_4;
    // 0x8028FBB4: nop

    after_4:
    // 0x8028FBB8: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8028FBBC: addiu       $v0, $v0, 0x3989
    ctx->r2 = ADD32(ctx->r2, 0X3989);
    // 0x8028FBC0: lbu         $t6, 0x0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X0);
    // 0x8028FBC4: addiu       $t9, $zero, 0x14
    ctx->r25 = ADD32(0, 0X14);
    // 0x8028FBC8: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8028FBCC: andi        $t8, $t7, 0xFF
    ctx->r24 = ctx->r15 & 0XFF;
    // 0x8028FBD0: bne         $t8, $zero, L_8028FD5C
    if (ctx->r24 != 0) {
        // 0x8028FBD4: sb          $t7, 0x0($v0)
        MEM_B(0X0, ctx->r2) = ctx->r15;
            goto L_8028FD5C;
    }
    // 0x8028FBD4: sb          $t7, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r15;
    // 0x8028FBD8: sb          $t9, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r25;
    // 0x8028FBDC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028FBE0: lwc1        $f4, 0x3918($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X3918);
    // 0x8028FBE4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028FBE8: andi        $t0, $t9, 0xFF
    ctx->r8 = ctx->r25 & 0XFF;
    // 0x8028FBEC: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x8028FBF0: lwc1        $f9, 0x4F0($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X4F0);
    // 0x8028FBF4: lwc1        $f8, 0x4F4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4F4);
    // 0x8028FBF8: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8028FBFC: cvt.d.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.d = CVT_D_W(ctx->f16.u32l);
    // 0x8028FC00: bgez        $t0, L_8028FC1C
    if (SIGNED(ctx->r8) >= 0) {
        // 0x8028FC04: sub.d       $f10, $f6, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d - ctx->f8.d;
            goto L_8028FC1C;
    }
    // 0x8028FC04: sub.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d - ctx->f8.d;
    // 0x8028FC08: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8028FC0C: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x8028FC10: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8028FC14: nop

    // 0x8028FC18: add.d       $f18, $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f18.d = ctx->f18.d + ctx->f4.d;
L_8028FC1C:
    // 0x8028FC1C: nop

    // 0x8028FC20: div.d       $f6, $f10, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f6.d = DIV_D(ctx->f10.d, ctx->f18.d);
    // 0x8028FC24: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028FC28: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x8028FC2C: swc1        $f8, 0x3998($at)
    MEM_W(0X3998, ctx->r1) = ctx->f8.u32l;
    // 0x8028FC30: lbu         $t1, 0x0($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X0);
    // 0x8028FC34: nop

    // 0x8028FC38: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x8028FC3C: b           L_8028FD5C
    // 0x8028FC40: sb          $t2, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r10;
        goto L_8028FD5C;
    // 0x8028FC40: sb          $t2, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r10;
L_8028FC44:
    // 0x8028FC44: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8028FC48: addiu       $v0, $v0, 0x3989
    ctx->r2 = ADD32(ctx->r2, 0X3989);
    // 0x8028FC4C: lbu         $t3, 0x0($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X0);
    // 0x8028FC50: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x8028FC54: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x8028FC58: addiu       $v1, $v1, 0x3918
    ctx->r3 = ADD32(ctx->r3, 0X3918);
    // 0x8028FC5C: sb          $t4, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r12;
    // 0x8028FC60: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028FC64: lwc1        $f4, 0x3998($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X3998);
    // 0x8028FC68: lwc1        $f16, 0x0($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X0);
    // 0x8028FC6C: nop

    // 0x8028FC70: sub.s       $f10, $f16, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f16.fl - ctx->f4.fl;
    // 0x8028FC74: jal         0x8028FD6C
    // 0x8028FC78: swc1        $f10, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f10.u32l;
    func_8028FD6C(rdram, ctx);
        goto after_5;
    // 0x8028FC78: swc1        $f10, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f10.u32l;
    after_5:
    // 0x8028FC7C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8028FC80: addiu       $v0, $v0, 0x3989
    ctx->r2 = ADD32(ctx->r2, 0X3989);
    // 0x8028FC84: lbu         $t5, 0x0($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X0);
    // 0x8028FC88: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x8028FC8C: bne         $t5, $zero, L_8028FD60
    if (ctx->r13 != 0) {
        // 0x8028FC90: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8028FD60;
    }
    // 0x8028FC90: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8028FC94: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8028FC98: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028FC9C: swc1        $f18, 0x3918($at)
    MEM_W(0X3918, ctx->r1) = ctx->f18.u32l;
    // 0x8028FCA0: lbu         $t6, 0x0($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X0);
    // 0x8028FCA4: nop

    // 0x8028FCA8: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8028FCAC: b           L_8028FD5C
    // 0x8028FCB0: sb          $t7, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r15;
        goto L_8028FD5C;
    // 0x8028FCB0: sb          $t7, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r15;
L_8028FCB4:
    // 0x8028FCB4: jal         0x8028FD6C
    // 0x8028FCB8: nop

    func_8028FD6C(rdram, ctx);
        goto after_6;
    // 0x8028FCB8: nop

    after_6:
    // 0x8028FCBC: lui         $t8, 0x802C
    ctx->r24 = S32(0X802C << 16);
    // 0x8028FCC0: lbu         $t8, 0x39B9($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X39B9);
    // 0x8028FCC4: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x8028FCC8: bne         $t8, $at, L_8028FD5C
    if (ctx->r24 != ctx->r1) {
        // 0x8028FCCC: lui         $at, 0x41E0
        ctx->r1 = S32(0X41E0 << 16);
            goto L_8028FD5C;
    }
    // 0x8028FCCC: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x8028FCD0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8028FCD4: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x8028FCD8: jal         0x80298AD8
    // 0x8028FCDC: swc1        $f6, 0x699C($at)
    MEM_W(0X699C, ctx->r1) = ctx->f6.u32l;
    func_80298AD8(rdram, ctx);
        goto after_7;
    // 0x8028FCDC: swc1        $f6, 0x699C($at)
    MEM_W(0X699C, ctx->r1) = ctx->f6.u32l;
    after_7:
    // 0x8028FCE0: lbu         $t9, 0x0($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X0);
    // 0x8028FCE4: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x8028FCE8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8028FCEC: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8028FCF0: sb          $t0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r8;
    // 0x8028FCF4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028FCF8: swc1        $f8, 0x3918($at)
    MEM_W(0X3918, ctx->r1) = ctx->f8.u32l;
    // 0x8028FCFC: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x8028FD00: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8028FD04: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028FD08: swc1        $f16, 0x39C0($at)
    MEM_W(0X39C0, ctx->r1) = ctx->f16.u32l;
    // 0x8028FD0C: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x8028FD10: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8028FD14: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028FD18: swc1        $f4, 0x3910($at)
    MEM_W(0X3910, ctx->r1) = ctx->f4.u32l;
    // 0x8028FD1C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8028FD20: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8028FD24: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x8028FD28: addiu       $v0, $v0, 0x4890
    ctx->r2 = ADD32(ctx->r2, 0X4890);
    // 0x8028FD2C: addiu       $t1, $zero, 0x80
    ctx->r9 = ADD32(0, 0X80);
    // 0x8028FD30: sh          $t1, 0x390C($v0)
    MEM_H(0X390C, ctx->r2) = ctx->r9;
    // 0x8028FD34: b           L_8028FD5C
    // 0x8028FD38: swc1        $f10, 0x2114($v0)
    MEM_W(0X2114, ctx->r2) = ctx->f10.u32l;
        goto L_8028FD5C;
    // 0x8028FD38: swc1        $f10, 0x2114($v0)
    MEM_W(0X2114, ctx->r2) = ctx->f10.u32l;
L_8028FD3C:
    // 0x8028FD3C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8028FD40: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8028FD44: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x8028FD48: jal         0x8028FD6C
    // 0x8028FD4C: swc1        $f18, 0x69A4($at)
    MEM_W(0X69A4, ctx->r1) = ctx->f18.u32l;
    func_8028FD6C(rdram, ctx);
        goto after_8;
    // 0x8028FD4C: swc1        $f18, 0x69A4($at)
    MEM_W(0X69A4, ctx->r1) = ctx->f18.u32l;
    after_8:
    // 0x8028FD50: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8028FD54: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028FD58: sb          $t2, 0x3A24($at)
    MEM_B(0X3A24, ctx->r1) = ctx->r10;
L_8028FD5C:
    // 0x8028FD5C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8028FD60:
    // 0x8028FD60: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8028FD64: jr          $ra
    // 0x8028FD68: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8028FD68: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8028FD6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028FD6C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8028FD70: lw          $v0, 0xB24($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XB24);
    // 0x8028FD74: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028FD78: lwc1        $f4, 0x4C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x8028FD7C: nop

    // 0x8028FD80: swc1        $f4, 0x3978($at)
    MEM_W(0X3978, ctx->r1) = ctx->f4.u32l;
    // 0x8028FD84: lwc1        $f6, 0x44($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X44);
    // 0x8028FD88: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028FD8C: swc1        $f6, 0x397C($at)
    MEM_W(0X397C, ctx->r1) = ctx->f6.u32l;
    // 0x8028FD90: lwc1        $f8, 0x78($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X78);
    // 0x8028FD94: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028FD98: swc1        $f8, 0x3980($at)
    MEM_W(0X3980, ctx->r1) = ctx->f8.u32l;
    // 0x8028FD9C: lwc1        $f10, 0x70($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X70);
    // 0x8028FDA0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028FDA4: jr          $ra
    // 0x8028FDA8: swc1        $f10, 0x3984($at)
    MEM_W(0X3984, ctx->r1) = ctx->f10.u32l;
    return;
    // 0x8028FDA8: swc1        $f10, 0x3984($at)
    MEM_W(0X3984, ctx->r1) = ctx->f10.u32l;
;}
RECOMP_FUNC void func_8028FDAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028FDAC: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8028FDB0: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x8028FDB4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028FDB8: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8028FDBC: nop

    // 0x8028FDC0: swc1        $f4, 0x3978($at)
    MEM_W(0X3978, ctx->r1) = ctx->f4.u32l;
    // 0x8028FDC4: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8028FDC8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028FDCC: swc1        $f6, 0x397C($at)
    MEM_W(0X397C, ctx->r1) = ctx->f6.u32l;
    // 0x8028FDD0: lwc1        $f8, 0x1C($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x8028FDD4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028FDD8: swc1        $f8, 0x3980($at)
    MEM_W(0X3980, ctx->r1) = ctx->f8.u32l;
    // 0x8028FDDC: lwc1        $f10, 0x14($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X14);
    // 0x8028FDE0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028FDE4: jr          $ra
    // 0x8028FDE8: swc1        $f10, 0x3984($at)
    MEM_W(0X3984, ctx->r1) = ctx->f10.u32l;
    return;
    // 0x8028FDE8: swc1        $f10, 0x3984($at)
    MEM_W(0X3984, ctx->r1) = ctx->f10.u32l;
;}
RECOMP_FUNC void func_8028FDEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028FDEC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028FDF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8028FDF4: sb          $zero, 0x3A24($at)
    MEM_B(0X3A24, ctx->r1) = 0;
    // 0x8028FDF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8028FDFC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028FE00: jal         0x80297DB0
    // 0x8028FE04: sb          $zero, 0x3988($at)
    MEM_B(0X3988, ctx->r1) = 0;
    func_80297DB0(rdram, ctx);
        goto after_0;
    // 0x8028FE04: sb          $zero, 0x3988($at)
    MEM_B(0X3988, ctx->r1) = 0;
    after_0:
    // 0x8028FE08: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028FE0C: sb          $zero, 0x39A0($at)
    MEM_B(0X39A0, ctx->r1) = 0;
    // 0x8028FE10: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028FE14: lwc1        $f4, 0x3918($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X3918);
    // 0x8028FE18: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028FE1C: swc1        $f4, 0x3994($at)
    MEM_W(0X3994, ctx->r1) = ctx->f4.u32l;
    // 0x8028FE20: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028FE24: lwc1        $f6, 0x3910($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3910);
    // 0x8028FE28: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8028FE2C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028FE30: addiu       $v0, $v0, -0x32B0
    ctx->r2 = ADD32(ctx->r2, -0X32B0);
    // 0x8028FE34: swc1        $f6, 0x398C($at)
    MEM_W(0X398C, ctx->r1) = ctx->f6.u32l;
    // 0x8028FE38: lbu         $t6, 0xC($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0XC);
    // 0x8028FE3C: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x8028FE40: bne         $t6, $at, L_8028FEA4
    if (ctx->r14 != ctx->r1) {
        // 0x8028FE44: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8028FEA4;
    }
    // 0x8028FE44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8028FE48: lbu         $t7, 0xE($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0XE);
    // 0x8028FE4C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8028FE50: bne         $t7, $at, L_8028FEA0
    if (ctx->r15 != ctx->r1) {
        // 0x8028FE54: lui         $t8, 0x8009
        ctx->r24 = S32(0X8009 << 16);
            goto L_8028FEA0;
    }
    // 0x8028FE54: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x8028FE58: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8028FE5C: lw          $t8, 0x3B20($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X3B20);
    // 0x8028FE60: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028FE64: swc1        $f0, 0x3974($at)
    MEM_W(0X3974, ctx->r1) = ctx->f0.u32l;
    // 0x8028FE68: lwc1        $f8, 0x8($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X8);
    // 0x8028FE6C: lui         $at, 0x43E6
    ctx->r1 = S32(0X43E6 << 16);
    // 0x8028FE70: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x8028FE74: nop

    // 0x8028FE78: bc1f        L_8028FE94
    if (!c1cs) {
        // 0x8028FE7C: nop
    
            goto L_8028FE94;
    }
    // 0x8028FE7C: nop

    // 0x8028FE80: lui         $at, 0xC3F5
    ctx->r1 = S32(0XC3F5 << 16);
    // 0x8028FE84: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8028FE88: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028FE8C: b           L_8028FEA0
    // 0x8028FE90: swc1        $f10, 0x3970($at)
    MEM_W(0X3970, ctx->r1) = ctx->f10.u32l;
        goto L_8028FEA0;
    // 0x8028FE90: swc1        $f10, 0x3970($at)
    MEM_W(0X3970, ctx->r1) = ctx->f10.u32l;
L_8028FE94:
    // 0x8028FE94: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8028FE98: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028FE9C: swc1        $f16, 0x3970($at)
    MEM_W(0X3970, ctx->r1) = ctx->f16.u32l;
L_8028FEA0:
    // 0x8028FEA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8028FEA4:
    // 0x8028FEA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8028FEA8: jr          $ra
    // 0x8028FEAC: nop

    return;
    // 0x8028FEAC: nop

;}
RECOMP_FUNC void func_8028FEB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028FEB0: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x8028FEB4: addiu       $a1, $a1, 0x3988
    ctx->r5 = ADD32(ctx->r5, 0X3988);
    // 0x8028FEB8: lbu         $t6, 0x0($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X0);
    // 0x8028FEBC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8028FEC0: sltiu       $at, $t6, 0x7
    ctx->r1 = ctx->r14 < 0X7 ? 1 : 0;
    // 0x8028FEC4: beq         $at, $zero, L_80290474
    if (ctx->r1 == 0) {
        // 0x8028FEC8: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80290474;
    }
    // 0x8028FEC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8028FECC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8028FED0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028FED4: addu        $at, $at, $t6
    gpr jr_addend_8028FEE0 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8028FED8: lw          $t6, 0x4F8($at)
    ctx->r14 = ADD32(ctx->r1, 0X4F8);
    // 0x8028FEDC: nop

    // 0x8028FEE0: jr          $t6
    // 0x8028FEE4: nop

    switch (jr_addend_8028FEE0 >> 2) {
        case 0: goto L_8028FEE8; break;
        case 1: goto L_8028FF20; break;
        case 2: goto L_8028FFFC; break;
        case 3: goto L_80290098; break;
        case 4: goto L_80290174; break;
        case 5: goto L_8029033C; break;
        case 6: goto L_80290454; break;
        default: switch_error(__func__, 0x8028FEE0, 0x802C04F8);
    }
    // 0x8028FEE4: nop

L_8028FEE8:
    // 0x8028FEE8: jal         0x802904F0
    // 0x8028FEEC: nop

    func_802904F0(rdram, ctx);
        goto after_0;
    // 0x8028FEEC: nop

    after_0:
    // 0x8028FEF0: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x8028FEF4: addiu       $a1, $a1, 0x3988
    ctx->r5 = ADD32(ctx->r5, 0X3988);
    // 0x8028FEF8: lbu         $t7, 0x0($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X0);
    // 0x8028FEFC: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8028FF00: addiu       $v0, $v0, 0x3989
    ctx->r2 = ADD32(ctx->r2, 0X3989);
    // 0x8028FF04: addiu       $t9, $zero, 0x28
    ctx->r25 = ADD32(0, 0X28);
    // 0x8028FF08: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8028FF0C: sb          $t8, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r24;
    // 0x8028FF10: jal         0x80290484
    // 0x8028FF14: sb          $t9, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r25;
    func_80290484(rdram, ctx);
        goto after_1;
    // 0x8028FF14: sb          $t9, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r25;
    after_1:
    // 0x8028FF18: b           L_80290478
    // 0x8028FF1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80290478;
    // 0x8028FF1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8028FF20:
    // 0x8028FF20: jal         0x802904F0
    // 0x8028FF24: nop

    func_802904F0(rdram, ctx);
        goto after_2;
    // 0x8028FF24: nop

    after_2:
    // 0x8028FF28: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8028FF2C: addiu       $v0, $v0, 0x3989
    ctx->r2 = ADD32(ctx->r2, 0X3989);
    // 0x8028FF30: lbu         $t0, 0x0($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X0);
    // 0x8028FF34: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x8028FF38: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x8028FF3C: andi        $t2, $t1, 0xFF
    ctx->r10 = ctx->r9 & 0XFF;
    // 0x8028FF40: addiu       $a1, $a1, 0x3988
    ctx->r5 = ADD32(ctx->r5, 0X3988);
    // 0x8028FF44: bne         $t2, $zero, L_80290474
    if (ctx->r10 != 0) {
        // 0x8028FF48: sb          $t1, 0x0($v0)
        MEM_B(0X0, ctx->r2) = ctx->r9;
            goto L_80290474;
    }
    // 0x8028FF48: sb          $t1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r9;
    // 0x8028FF4C: addiu       $t3, $zero, 0x14
    ctx->r11 = ADD32(0, 0X14);
    // 0x8028FF50: sb          $t3, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r11;
    // 0x8028FF54: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028FF58: lwc1        $f5, 0x518($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X518);
    // 0x8028FF5C: lwc1        $f4, 0x51C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X51C);
    // 0x8028FF60: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028FF64: lwc1        $f6, 0x3918($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3918);
    // 0x8028FF68: andi        $v1, $t3, 0xFF
    ctx->r3 = ctx->r11 & 0XFF;
    // 0x8028FF6C: mtc1        $v1, $f16
    ctx->f16.u32l = ctx->r3;
    // 0x8028FF70: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x8028FF74: sub.d       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f4.d - ctx->f8.d;
    // 0x8028FF78: bgez        $v1, L_8028FF94
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8028FF7C: cvt.d.w     $f18, $f16
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.d = CVT_D_W(ctx->f16.u32l);
            goto L_8028FF94;
    }
    // 0x8028FF7C: cvt.d.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.d = CVT_D_W(ctx->f16.u32l);
    // 0x8028FF80: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8028FF84: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x8028FF88: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8028FF8C: nop

    // 0x8028FF90: add.d       $f18, $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f6.d); 
    ctx->f18.d = ctx->f18.d + ctx->f6.d;
L_8028FF94:
    // 0x8028FF94: nop

    // 0x8028FF98: div.d       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = DIV_D(ctx->f10.d, ctx->f18.d);
    // 0x8028FF9C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028FFA0: mtc1        $v1, $f18
    ctx->f18.u32l = ctx->r3;
    // 0x8028FFA4: cvt.s.d     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f8.fl = CVT_S_D(ctx->f4.d);
    // 0x8028FFA8: swc1        $f8, 0x3998($at)
    MEM_W(0X3998, ctx->r1) = ctx->f8.u32l;
    // 0x8028FFAC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028FFB0: lwc1        $f16, 0x3910($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X3910);
    // 0x8028FFB4: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8028FFB8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8028FFBC: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8028FFC0: bgez        $v1, L_8028FFD8
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8028FFC4: sub.s       $f10, $f16, $f6
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f16.fl - ctx->f6.fl;
            goto L_8028FFD8;
    }
    // 0x8028FFC4: sub.s       $f10, $f16, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f16.fl - ctx->f6.fl;
    // 0x8028FFC8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8028FFCC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8028FFD0: nop

    // 0x8028FFD4: add.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f8.fl;
L_8028FFD8:
    // 0x8028FFD8: nop

    // 0x8028FFDC: div.s       $f16, $f10, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = DIV_S(ctx->f10.fl, ctx->f4.fl);
    // 0x8028FFE0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8028FFE4: swc1        $f16, 0x3990($at)
    MEM_W(0X3990, ctx->r1) = ctx->f16.u32l;
    // 0x8028FFE8: lbu         $t4, 0x0($a1)
    ctx->r12 = MEM_BU(ctx->r5, 0X0);
    // 0x8028FFEC: nop

    // 0x8028FFF0: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x8028FFF4: b           L_80290474
    // 0x8028FFF8: sb          $t5, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r13;
        goto L_80290474;
    // 0x8028FFF8: sb          $t5, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r13;
L_8028FFFC:
    // 0x8028FFFC: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80290000: addiu       $v0, $v0, 0x3910
    ctx->r2 = ADD32(ctx->r2, 0X3910);
    // 0x80290004: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80290008: lwc1        $f18, 0x3990($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X3990);
    // 0x8029000C: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80290010: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x80290014: sub.s       $f8, $f6, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f18.fl;
    // 0x80290018: addiu       $v1, $v1, 0x3918
    ctx->r3 = ADD32(ctx->r3, 0X3918);
    // 0x8029001C: swc1        $f8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f8.u32l;
    // 0x80290020: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80290024: lwc1        $f4, 0x3998($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X3998);
    // 0x80290028: lwc1        $f10, 0x0($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X0);
    // 0x8029002C: nop

    // 0x80290030: add.s       $f16, $f10, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x80290034: jal         0x802904F0
    // 0x80290038: swc1        $f16, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f16.u32l;
    func_802904F0(rdram, ctx);
        goto after_3;
    // 0x80290038: swc1        $f16, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f16.u32l;
    after_3:
    // 0x8029003C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80290040: addiu       $v0, $v0, 0x3989
    ctx->r2 = ADD32(ctx->r2, 0X3989);
    // 0x80290044: lbu         $t6, 0x0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X0);
    // 0x80290048: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x8029004C: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80290050: andi        $t8, $t7, 0xFF
    ctx->r24 = ctx->r15 & 0XFF;
    // 0x80290054: addiu       $a1, $a1, 0x3988
    ctx->r5 = ADD32(ctx->r5, 0X3988);
    // 0x80290058: bne         $t8, $zero, L_80290474
    if (ctx->r24 != 0) {
        // 0x8029005C: sb          $t7, 0x0($v0)
        MEM_B(0X0, ctx->r2) = ctx->r15;
            goto L_80290474;
    }
    // 0x8029005C: sb          $t7, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r15;
    // 0x80290060: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80290064: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80290068: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8029006C: swc1        $f6, 0x3910($at)
    MEM_W(0X3910, ctx->r1) = ctx->f6.u32l;
    // 0x80290070: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x80290074: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80290078: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8029007C: swc1        $f18, 0x3918($at)
    MEM_W(0X3918, ctx->r1) = ctx->f18.u32l;
    // 0x80290080: lbu         $t9, 0x0($a1)
    ctx->r25 = MEM_BU(ctx->r5, 0X0);
    // 0x80290084: addiu       $t1, $zero, 0x14
    ctx->r9 = ADD32(0, 0X14);
    // 0x80290088: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8029008C: sb          $t0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r8;
    // 0x80290090: b           L_80290474
    // 0x80290094: sb          $t1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r9;
        goto L_80290474;
    // 0x80290094: sb          $t1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r9;
L_80290098:
    // 0x80290098: jal         0x802904F0
    // 0x8029009C: nop

    func_802904F0(rdram, ctx);
        goto after_4;
    // 0x8029009C: nop

    after_4:
    // 0x802900A0: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802900A4: addiu       $v0, $v0, 0x3989
    ctx->r2 = ADD32(ctx->r2, 0X3989);
    // 0x802900A8: lbu         $t2, 0x0($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X0);
    // 0x802900AC: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802900B0: addiu       $t3, $t2, -0x1
    ctx->r11 = ADD32(ctx->r10, -0X1);
    // 0x802900B4: andi        $t4, $t3, 0xFF
    ctx->r12 = ctx->r11 & 0XFF;
    // 0x802900B8: addiu       $a1, $a1, 0x3988
    ctx->r5 = ADD32(ctx->r5, 0X3988);
    // 0x802900BC: bne         $t4, $zero, L_80290474
    if (ctx->r12 != 0) {
        // 0x802900C0: sb          $t3, 0x0($v0)
        MEM_B(0X0, ctx->r2) = ctx->r11;
            goto L_80290474;
    }
    // 0x802900C0: sb          $t3, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r11;
    // 0x802900C4: addiu       $t5, $zero, 0x14
    ctx->r13 = ADD32(0, 0X14);
    // 0x802900C8: sb          $t5, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r13;
    // 0x802900CC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802900D0: lwc1        $f8, 0x3918($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X3918);
    // 0x802900D4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802900D8: andi        $t6, $t5, 0xFF
    ctx->r14 = ctx->r13 & 0XFF;
    // 0x802900DC: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x802900E0: lwc1        $f5, 0x520($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X520);
    // 0x802900E4: lwc1        $f4, 0x524($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X524);
    // 0x802900E8: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x802900EC: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x802900F0: addiu       $v1, $v1, -0x2CF0
    ctx->r3 = ADD32(ctx->r3, -0X2CF0);
    // 0x802900F4: cvt.d.w     $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    ctx->f18.d = CVT_D_W(ctx->f6.u32l);
    // 0x802900F8: bgez        $t6, L_80290114
    if (SIGNED(ctx->r14) >= 0) {
        // 0x802900FC: sub.d       $f16, $f10, $f4
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f4.d); 
    ctx->f16.d = ctx->f10.d - ctx->f4.d;
            goto L_80290114;
    }
    // 0x802900FC: sub.d       $f16, $f10, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f4.d); 
    ctx->f16.d = ctx->f10.d - ctx->f4.d;
    // 0x80290100: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80290104: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80290108: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8029010C: nop

    // 0x80290110: add.d       $f18, $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f8.d); 
    ctx->f18.d = ctx->f18.d + ctx->f8.d;
L_80290114:
    // 0x80290114: nop

    // 0x80290118: div.d       $f10, $f16, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f10.d = DIV_D(ctx->f16.d, ctx->f18.d);
    // 0x8029011C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80290120: cvt.s.d     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f4.fl = CVT_S_D(ctx->f10.d);
    // 0x80290124: swc1        $f4, 0x3998($at)
    MEM_W(0X3998, ctx->r1) = ctx->f4.u32l;
    // 0x80290128: lbu         $t7, 0x0($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X0);
    // 0x8029012C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80290130: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80290134: sb          $t8, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r24;
    // 0x80290138: sb          $zero, 0x399D($at)
    MEM_B(0X399D, ctx->r1) = 0;
    // 0x8029013C: lhu         $t9, 0x10($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0X10);
    // 0x80290140: nop

    // 0x80290144: andi        $t0, $t9, 0x40
    ctx->r8 = ctx->r25 & 0X40;
    // 0x80290148: bne         $t0, $zero, L_80290478
    if (ctx->r8 != 0) {
        // 0x8029014C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80290478;
    }
    // 0x8029014C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80290150: lhu         $t1, 0xAA4($v1)
    ctx->r9 = MEM_HU(ctx->r3, 0XAA4);
    // 0x80290154: nop

    // 0x80290158: andi        $t2, $t1, 0x40
    ctx->r10 = ctx->r9 & 0X40;
    // 0x8029015C: bne         $t2, $zero, L_80290478
    if (ctx->r10 != 0) {
        // 0x80290160: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80290478;
    }
    // 0x80290160: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80290164: jal         0x80078DE0
    // 0x80290168: nop

    func_80078DE0(rdram, ctx);
        goto after_5;
    // 0x80290168: nop

    after_5:
    // 0x8029016C: b           L_80290478
    // 0x80290170: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80290478;
    // 0x80290170: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80290174:
    // 0x80290174: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80290178: addiu       $v0, $v0, 0x3989
    ctx->r2 = ADD32(ctx->r2, 0X3989);
    // 0x8029017C: lbu         $t3, 0x0($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X0);
    // 0x80290180: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x80290184: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x80290188: addiu       $v1, $v1, 0x3918
    ctx->r3 = ADD32(ctx->r3, 0X3918);
    // 0x8029018C: sb          $t4, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r12;
    // 0x80290190: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80290194: lwc1        $f8, 0x3998($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X3998);
    // 0x80290198: lwc1        $f6, 0x0($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X0);
    // 0x8029019C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802901A0: sub.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x802901A4: jal         0x80290894
    // 0x802901A8: swc1        $f16, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f16.u32l;
    func_80290894(rdram, ctx);
        goto after_6;
    // 0x802901A8: swc1        $f16, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f16.u32l;
    after_6:
    // 0x802901AC: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802901B0: addiu       $v0, $v0, 0x3989
    ctx->r2 = ADD32(ctx->r2, 0X3989);
    // 0x802901B4: lbu         $t5, 0x0($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X0);
    // 0x802901B8: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802901BC: bne         $t5, $zero, L_80290474
    if (ctx->r13 != 0) {
        // 0x802901C0: addiu       $a1, $a1, 0x3988
        ctx->r5 = ADD32(ctx->r5, 0X3988);
            goto L_80290474;
    }
    // 0x802901C0: addiu       $a1, $a1, 0x3988
    ctx->r5 = ADD32(ctx->r5, 0X3988);
    // 0x802901C4: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x802901C8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802901CC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802901D0: swc1        $f18, 0x3918($at)
    MEM_W(0X3918, ctx->r1) = ctx->f18.u32l;
    // 0x802901D4: lbu         $t6, 0x0($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X0);
    // 0x802901D8: addiu       $t8, $zero, 0x14
    ctx->r24 = ADD32(0, 0X14);
    // 0x802901DC: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x802901E0: sb          $t7, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r15;
    // 0x802901E4: sb          $t8, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r24;
    // 0x802901E8: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x802901EC: lbu         $v1, 0x399C($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X399C);
    // 0x802901F0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802901F4: beq         $v1, $zero, L_80290220
    if (ctx->r3 == 0) {
        // 0x802901F8: nop
    
            goto L_80290220;
    }
    // 0x802901F8: nop

    // 0x802901FC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80290200: beq         $v1, $at, L_80290264
    if (ctx->r3 == ctx->r1) {
        // 0x80290204: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80290264;
    }
    // 0x80290204: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80290208: beq         $v1, $at, L_802902AC
    if (ctx->r3 == ctx->r1) {
        // 0x8029020C: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_802902AC;
    }
    // 0x8029020C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80290210: beq         $v1, $at, L_802902F4
    if (ctx->r3 == ctx->r1) {
        // 0x80290214: nop
    
            goto L_802902F4;
    }
    // 0x80290214: nop

    // 0x80290218: b           L_80290478
    // 0x8029021C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80290478;
    // 0x8029021C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80290220:
    // 0x80290220: lbu         $t9, 0x0($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X0);
    // 0x80290224: lwc1        $f11, 0x528($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X528);
    // 0x80290228: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x8029022C: lwc1        $f10, 0x52C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X52C);
    // 0x80290230: bgez        $t9, L_8029024C
    if (SIGNED(ctx->r25) >= 0) {
        // 0x80290234: cvt.d.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
            goto L_8029024C;
    }
    // 0x80290234: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x80290238: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8029023C: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80290240: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80290244: nop

    // 0x80290248: add.d       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = ctx->f6.d + ctx->f8.d;
L_8029024C:
    // 0x8029024C: nop

    // 0x80290250: div.d       $f16, $f10, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f6.d); 
    ctx->f16.d = DIV_D(ctx->f10.d, ctx->f6.d);
    // 0x80290254: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80290258: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x8029025C: b           L_80290474
    // 0x80290260: swc1        $f18, 0x3990($at)
    MEM_W(0X3990, ctx->r1) = ctx->f18.u32l;
        goto L_80290474;
    // 0x80290260: swc1        $f18, 0x3990($at)
    MEM_W(0X3990, ctx->r1) = ctx->f18.u32l;
L_80290264:
    // 0x80290264: lbu         $t0, 0x0($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X0);
    // 0x80290268: lui         $at, 0x402E
    ctx->r1 = S32(0X402E << 16);
    // 0x8029026C: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x80290270: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x80290274: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80290278: bgez        $t0, L_80290294
    if (SIGNED(ctx->r8) >= 0) {
        // 0x8029027C: cvt.d.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.d = CVT_D_W(ctx->f8.u32l);
            goto L_80290294;
    }
    // 0x8029027C: cvt.d.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.d = CVT_D_W(ctx->f8.u32l);
    // 0x80290280: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80290284: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x80290288: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8029028C: nop

    // 0x80290290: add.d       $f10, $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = ctx->f10.d + ctx->f6.d;
L_80290294:
    // 0x80290294: nop

    // 0x80290298: div.d       $f16, $f4, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = DIV_D(ctx->f4.d, ctx->f10.d);
    // 0x8029029C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802902A0: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x802902A4: b           L_80290474
    // 0x802902A8: swc1        $f18, 0x3990($at)
    MEM_W(0X3990, ctx->r1) = ctx->f18.u32l;
        goto L_80290474;
    // 0x802902A8: swc1        $f18, 0x3990($at)
    MEM_W(0X3990, ctx->r1) = ctx->f18.u32l;
L_802902AC:
    // 0x802902AC: lbu         $t1, 0x0($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X0);
    // 0x802902B0: lui         $at, 0xC03E
    ctx->r1 = S32(0XC03E << 16);
    // 0x802902B4: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x802902B8: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x802902BC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802902C0: bgez        $t1, L_802902DC
    if (SIGNED(ctx->r9) >= 0) {
        // 0x802902C4: cvt.d.w     $f4, $f6
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.d = CVT_D_W(ctx->f6.u32l);
            goto L_802902DC;
    }
    // 0x802902C4: cvt.d.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.d = CVT_D_W(ctx->f6.u32l);
    // 0x802902C8: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x802902CC: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x802902D0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802902D4: nop

    // 0x802902D8: add.d       $f4, $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = ctx->f4.d + ctx->f10.d;
L_802902DC:
    // 0x802902DC: nop

    // 0x802902E0: div.d       $f16, $f8, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f4.d); 
    ctx->f16.d = DIV_D(ctx->f8.d, ctx->f4.d);
    // 0x802902E4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802902E8: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x802902EC: b           L_80290474
    // 0x802902F0: swc1        $f18, 0x3990($at)
    MEM_W(0X3990, ctx->r1) = ctx->f18.u32l;
        goto L_80290474;
    // 0x802902F0: swc1        $f18, 0x3990($at)
    MEM_W(0X3990, ctx->r1) = ctx->f18.u32l;
L_802902F4:
    // 0x802902F4: lbu         $t2, 0x0($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X0);
    // 0x802902F8: lui         $at, 0xC02E
    ctx->r1 = S32(0XC02E << 16);
    // 0x802902FC: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x80290300: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x80290304: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80290308: bgez        $t2, L_80290324
    if (SIGNED(ctx->r10) >= 0) {
        // 0x8029030C: cvt.d.w     $f8, $f10
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.d = CVT_D_W(ctx->f10.u32l);
            goto L_80290324;
    }
    // 0x8029030C: cvt.d.w     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.d = CVT_D_W(ctx->f10.u32l);
    // 0x80290310: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80290314: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x80290318: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8029031C: nop

    // 0x80290320: add.d       $f8, $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f4.d); 
    ctx->f8.d = ctx->f8.d + ctx->f4.d;
L_80290324:
    // 0x80290324: nop

    // 0x80290328: div.d       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f16.d = DIV_D(ctx->f6.d, ctx->f8.d);
    // 0x8029032C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80290330: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x80290334: b           L_80290474
    // 0x80290338: swc1        $f18, 0x3990($at)
    MEM_W(0X3990, ctx->r1) = ctx->f18.u32l;
        goto L_80290474;
    // 0x80290338: swc1        $f18, 0x3990($at)
    MEM_W(0X3990, ctx->r1) = ctx->f18.u32l;
L_8029033C:
    // 0x8029033C: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x80290340: addiu       $a2, $a2, 0x3924
    ctx->r6 = ADD32(ctx->r6, 0X3924);
    // 0x80290344: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80290348: lwc1        $f4, 0x3990($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X3990);
    // 0x8029034C: lwc1        $f10, 0x0($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X0);
    // 0x80290350: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80290354: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x80290358: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8029035C: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
    // 0x80290360: lwc1        $f0, 0x0($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X0);
    // 0x80290364: nop

    // 0x80290368: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x8029036C: nop

    // 0x80290370: bc1f        L_80290390
    if (!c1cs) {
        // 0x80290374: nop
    
            goto L_80290390;
    }
    // 0x80290374: nop

    // 0x80290378: lwc1        $f19, 0x530($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X530);
    // 0x8029037C: lwc1        $f18, 0x534($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X534);
    // 0x80290380: cvt.d.s     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.d = CVT_D_S(ctx->f0.fl);
    // 0x80290384: add.d       $f10, $f16, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f10.d = ctx->f16.d + ctx->f18.d;
    // 0x80290388: cvt.s.d     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f4.fl = CVT_S_D(ctx->f10.d);
    // 0x8029038C: swc1        $f4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f4.u32l;
L_80290390:
    // 0x80290390: jal         0x80290894
    // 0x80290394: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80290894(rdram, ctx);
        goto after_7;
    // 0x80290394: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_7:
    // 0x80290398: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8029039C: addiu       $v0, $v0, 0x3989
    ctx->r2 = ADD32(ctx->r2, 0X3989);
    // 0x802903A0: lbu         $t3, 0x0($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X0);
    // 0x802903A4: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802903A8: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x802903AC: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x802903B0: andi        $t5, $t4, 0xFF
    ctx->r13 = ctx->r12 & 0XFF;
    // 0x802903B4: addiu       $a2, $a2, 0x3924
    ctx->r6 = ADD32(ctx->r6, 0X3924);
    // 0x802903B8: addiu       $a1, $a1, 0x3988
    ctx->r5 = ADD32(ctx->r5, 0X3988);
    // 0x802903BC: bne         $t5, $zero, L_80290474
    if (ctx->r13 != 0) {
        // 0x802903C0: sb          $t4, 0x0($v0)
        MEM_B(0X0, ctx->r2) = ctx->r12;
            goto L_80290474;
    }
    // 0x802903C0: sb          $t4, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r12;
    // 0x802903C4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802903C8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802903CC: sb          $t6, 0x3A24($at)
    MEM_B(0X3A24, ctx->r1) = ctx->r14;
    // 0x802903D0: lbu         $t7, 0x0($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X0);
    // 0x802903D4: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x802903D8: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x802903DC: sb          $t8, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r24;
    // 0x802903E0: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x802903E4: lbu         $v1, 0x399C($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X399C);
    // 0x802903E8: lui         $at, 0x4214
    ctx->r1 = S32(0X4214 << 16);
    // 0x802903EC: beq         $v1, $zero, L_80290418
    if (ctx->r3 == 0) {
        // 0x802903F0: nop
    
            goto L_80290418;
    }
    // 0x802903F0: nop

    // 0x802903F4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802903F8: beq         $v1, $at, L_80290424
    if (ctx->r3 == ctx->r1) {
        // 0x802903FC: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80290424;
    }
    // 0x802903FC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80290400: beq         $v1, $at, L_80290434
    if (ctx->r3 == ctx->r1) {
        // 0x80290404: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80290434;
    }
    // 0x80290404: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80290408: beq         $v1, $at, L_80290444
    if (ctx->r3 == ctx->r1) {
        // 0x8029040C: nop
    
            goto L_80290444;
    }
    // 0x8029040C: nop

    // 0x80290410: b           L_80290478
    // 0x80290414: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80290478;
    // 0x80290414: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80290418:
    // 0x80290418: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8029041C: b           L_80290474
    // 0x80290420: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
        goto L_80290474;
    // 0x80290420: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
L_80290424:
    // 0x80290424: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x80290428: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8029042C: b           L_80290474
    // 0x80290430: swc1        $f8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f8.u32l;
        goto L_80290474;
    // 0x80290430: swc1        $f8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f8.u32l;
L_80290434:
    // 0x80290434: lui         $at, 0x43A5
    ctx->r1 = S32(0X43A5 << 16);
    // 0x80290438: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8029043C: b           L_80290474
    // 0x80290440: swc1        $f16, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f16.u32l;
        goto L_80290474;
    // 0x80290440: swc1        $f16, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f16.u32l;
L_80290444:
    // 0x80290444: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80290448: lwc1        $f18, 0x538($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X538);
    // 0x8029044C: b           L_80290474
    // 0x80290450: swc1        $f18, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f18.u32l;
        goto L_80290474;
    // 0x80290450: swc1        $f18, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f18.u32l;
L_80290454:
    // 0x80290454: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x80290458: lbu         $a0, 0x399C($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X399C);
    // 0x8029045C: jal         0x8029053C
    // 0x80290460: nop

    func_8029053C(rdram, ctx);
        goto after_8;
    // 0x80290460: nop

    after_8:
    // 0x80290464: jal         0x80290894
    // 0x80290468: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80290894(rdram, ctx);
        goto after_9;
    // 0x80290468: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_9:
    // 0x8029046C: jal         0x802906E8
    // 0x80290470: nop

    func_802906E8(rdram, ctx);
        goto after_10;
    // 0x80290470: nop

    after_10:
L_80290474:
    // 0x80290474: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80290478:
    // 0x80290478: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8029047C: jr          $ra
    // 0x80290480: nop

    return;
    // 0x80290480: nop

;}
RECOMP_FUNC void func_80290484(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80290484: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80290488: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x8029048C: nop

    // 0x80290490: lh          $t6, 0xE8($v0)
    ctx->r14 = MEM_H(ctx->r2, 0XE8);
    // 0x80290494: nop

    // 0x80290498: blez        $t6, L_802904C4
    if (SIGNED(ctx->r14) <= 0) {
        // 0x8029049C: nop
    
            goto L_802904C4;
    }
    // 0x8029049C: nop

    // 0x802904A0: lh          $t7, 0xEA($v0)
    ctx->r15 = MEM_H(ctx->r2, 0XEA);
    // 0x802904A4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802904A8: blez        $t7, L_802904BC
    if (SIGNED(ctx->r15) <= 0) {
        // 0x802904AC: lui         $at, 0x802C
        ctx->r1 = S32(0X802C << 16);
            goto L_802904BC;
    }
    // 0x802904AC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802904B0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802904B4: jr          $ra
    // 0x802904B8: sb          $zero, 0x399C($at)
    MEM_B(0X399C, ctx->r1) = 0;
    return;
    // 0x802904B8: sb          $zero, 0x399C($at)
    MEM_B(0X399C, ctx->r1) = 0;
L_802904BC:
    // 0x802904BC: jr          $ra
    // 0x802904C0: sb          $t8, 0x399C($at)
    MEM_B(0X399C, ctx->r1) = ctx->r24;
    return;
    // 0x802904C0: sb          $t8, 0x399C($at)
    MEM_B(0X399C, ctx->r1) = ctx->r24;
L_802904C4:
    // 0x802904C4: lh          $t9, 0xEA($v0)
    ctx->r25 = MEM_H(ctx->r2, 0XEA);
    // 0x802904C8: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x802904CC: blez        $t9, L_802904E4
    if (SIGNED(ctx->r25) <= 0) {
        // 0x802904D0: lui         $at, 0x802C
        ctx->r1 = S32(0X802C << 16);
            goto L_802904E4;
    }
    // 0x802904D0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802904D4: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x802904D8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802904DC: jr          $ra
    // 0x802904E0: sb          $t0, 0x399C($at)
    MEM_B(0X399C, ctx->r1) = ctx->r8;
    return;
    // 0x802904E0: sb          $t0, 0x399C($at)
    MEM_B(0X399C, ctx->r1) = ctx->r8;
L_802904E4:
    // 0x802904E4: sb          $t1, 0x399C($at)
    MEM_B(0X399C, ctx->r1) = ctx->r9;
    // 0x802904E8: jr          $ra
    // 0x802904EC: nop

    return;
    // 0x802904EC: nop

;}
RECOMP_FUNC void func_802904F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802904F0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802904F4: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x802904F8: lw          $t6, 0x3B20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B20);
    // 0x802904FC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80290500: swc1        $f4, 0x397C($at)
    MEM_W(0X397C, ctx->r1) = ctx->f4.u32l;
    // 0x80290504: lh          $t7, 0xE8($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XE8);
    // 0x80290508: lui         $at, 0x43E6
    ctx->r1 = S32(0X43E6 << 16);
    // 0x8029050C: bgez        $t7, L_80290528
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80290510: nop
    
            goto L_80290528;
    }
    // 0x80290510: nop

    // 0x80290514: lui         $at, 0xC3F5
    ctx->r1 = S32(0XC3F5 << 16);
    // 0x80290518: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8029051C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80290520: jr          $ra
    // 0x80290524: swc1        $f6, 0x3978($at)
    MEM_W(0X3978, ctx->r1) = ctx->f6.u32l;
    return;
    // 0x80290524: swc1        $f6, 0x3978($at)
    MEM_W(0X3978, ctx->r1) = ctx->f6.u32l;
L_80290528:
    // 0x80290528: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8029052C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80290530: swc1        $f8, 0x3978($at)
    MEM_W(0X3978, ctx->r1) = ctx->f8.u32l;
    // 0x80290534: jr          $ra
    // 0x80290538: nop

    return;
    // 0x80290538: nop

;}
RECOMP_FUNC void func_8029053C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029053C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80290540: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x80290544: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80290548: beq         $t6, $zero, L_8029057C
    if (ctx->r14 == 0) {
        // 0x8029054C: sw          $a0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r4;
            goto L_8029057C;
    }
    // 0x8029054C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80290550: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80290554: beq         $t6, $at, L_80290588
    if (ctx->r14 == ctx->r1) {
        // 0x80290558: addiu       $t8, $zero, 0x1A0
        ctx->r24 = ADD32(0, 0X1A0);
            goto L_80290588;
    }
    // 0x80290558: addiu       $t8, $zero, 0x1A0
    ctx->r24 = ADD32(0, 0X1A0);
    // 0x8029055C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80290560: beq         $t6, $at, L_80290590
    if (ctx->r14 == ctx->r1) {
        // 0x80290564: addiu       $t9, $zero, 0x1AF
        ctx->r25 = ADD32(0, 0X1AF);
            goto L_80290590;
    }
    // 0x80290564: addiu       $t9, $zero, 0x1AF
    ctx->r25 = ADD32(0, 0X1AF);
    // 0x80290568: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8029056C: beq         $t6, $at, L_80290588
    if (ctx->r14 == ctx->r1) {
        // 0x80290570: nop
    
            goto L_80290588;
    }
    // 0x80290570: nop

    // 0x80290574: b           L_80290594
    // 0x80290578: nop

        goto L_80290594;
    // 0x80290578: nop

L_8029057C:
    // 0x8029057C: addiu       $t7, $zero, 0x1B6
    ctx->r15 = ADD32(0, 0X1B6);
    // 0x80290580: b           L_80290594
    // 0x80290584: sh          $t7, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r15;
        goto L_80290594;
    // 0x80290584: sh          $t7, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r15;
L_80290588:
    // 0x80290588: b           L_80290594
    // 0x8029058C: sh          $t8, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r24;
        goto L_80290594;
    // 0x8029058C: sh          $t8, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r24;
L_80290590:
    // 0x80290590: sh          $t9, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r25;
L_80290594:
    // 0x80290594: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x80290598: lw          $t0, 0x3B20($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X3B20);
    // 0x8029059C: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x802905A0: lw          $t1, 0xB4($t0)
    ctx->r9 = MEM_W(ctx->r8, 0XB4);
    // 0x802905A4: lui         $t5, 0x802C
    ctx->r13 = S32(0X802C << 16);
    // 0x802905A8: lw          $v0, 0x24($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X24);
    // 0x802905AC: nop

    // 0x802905B0: lbu         $v1, 0x8AA($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X8AA);
    // 0x802905B4: lw          $t2, 0x18($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X18);
    // 0x802905B8: sll         $t3, $v1, 5
    ctx->r11 = S32(ctx->r3 << 5);
    // 0x802905BC: subu        $t3, $t3, $v1
    ctx->r11 = SUB32(ctx->r11, ctx->r3);
    // 0x802905C0: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x802905C4: addu        $a0, $t2, $t3
    ctx->r4 = ADD32(ctx->r10, ctx->r11);
    // 0x802905C8: lhu         $t4, 0xE($a0)
    ctx->r12 = MEM_HU(ctx->r4, 0XE);
    // 0x802905CC: nop

    // 0x802905D0: bne         $t4, $at, L_8029068C
    if (ctx->r12 != ctx->r1) {
        // 0x802905D4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8029068C;
    }
    // 0x802905D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802905D8: lbu         $t5, 0x3989($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X3989);
    // 0x802905DC: nop

    // 0x802905E0: bne         $t5, $zero, L_8029068C
    if (ctx->r13 != 0) {
        // 0x802905E4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8029068C;
    }
    // 0x802905E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802905E8: lhu         $t6, 0x12($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X12);
    // 0x802905EC: addiu       $a0, $zero, 0x55
    ctx->r4 = ADD32(0, 0X55);
    // 0x802905F0: andi        $t7, $t6, 0x40
    ctx->r15 = ctx->r14 & 0X40;
    // 0x802905F4: beq         $t7, $zero, L_80290688
    if (ctx->r15 == 0) {
        // 0x802905F8: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_80290688;
    }
    // 0x802905F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802905FC: jal         0x8029ACD4
    // 0x80290600: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8029ACD4(rdram, ctx);
        goto after_0;
    // 0x80290600: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80290604: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x80290608: addiu       $v0, $v0, 0x4890
    ctx->r2 = ADD32(ctx->r2, 0X4890);
    // 0x8029060C: lbu         $t8, 0x3538($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X3538);
    // 0x80290610: addiu       $t1, $zero, 0xC0
    ctx->r9 = ADD32(0, 0XC0);
    // 0x80290614: andi        $t9, $t8, 0xFF01
    ctx->r25 = ctx->r24 & 0XFF01;
    // 0x80290618: ori         $t0, $t9, 0x6
    ctx->r8 = ctx->r25 | 0X6;
    // 0x8029061C: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80290620: lhu         $a1, 0x1C($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X1C);
    // 0x80290624: sb          $t0, 0x3538($v0)
    MEM_B(0X3538, ctx->r2) = ctx->r8;
    // 0x80290628: sb          $t1, 0x3541($v0)
    MEM_B(0X3541, ctx->r2) = ctx->r9;
    // 0x8029062C: jal         0x8007AAF8
    // 0x80290630: addiu       $a0, $a0, 0x7DC0
    ctx->r4 = ADD32(ctx->r4, 0X7DC0);
    func_8007AAF8(rdram, ctx);
        goto after_1;
    // 0x80290630: addiu       $a0, $a0, 0x7DC0
    ctx->r4 = ADD32(ctx->r4, 0X7DC0);
    after_1:
    // 0x80290634: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80290638: addiu       $a0, $a0, 0x7DC0
    ctx->r4 = ADD32(ctx->r4, 0X7DC0);
    // 0x8029063C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80290640: jal         0x8002135C
    // 0x80290644: addiu       $a2, $zero, 0xF4
    ctx->r6 = ADD32(0, 0XF4);
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x80290644: addiu       $a2, $zero, 0xF4
    ctx->r6 = ADD32(0, 0XF4);
    after_2:
    // 0x80290648: addiu       $a0, $zero, 0x56
    ctx->r4 = ADD32(0, 0X56);
    // 0x8029064C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80290650: jal         0x8029ACD4
    // 0x80290654: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8029ACD4(rdram, ctx);
        goto after_3;
    // 0x80290654: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x80290658: lhu         $a1, 0x1C($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X1C);
    // 0x8029065C: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80290660: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80290664: andi        $t2, $a1, 0xFFFF
    ctx->r10 = ctx->r5 & 0XFFFF;
    // 0x80290668: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
    // 0x8029066C: jal         0x8007AAF8
    // 0x80290670: addiu       $a0, $a0, 0x7DFC
    ctx->r4 = ADD32(ctx->r4, 0X7DFC);
    func_8007AAF8(rdram, ctx);
        goto after_4;
    // 0x80290670: addiu       $a0, $a0, 0x7DFC
    ctx->r4 = ADD32(ctx->r4, 0X7DFC);
    after_4:
    // 0x80290674: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80290678: addiu       $a0, $a0, 0x7DFC
    ctx->r4 = ADD32(ctx->r4, 0X7DFC);
    // 0x8029067C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80290680: jal         0x8002135C
    // 0x80290684: addiu       $a2, $zero, 0xF4
    ctx->r6 = ADD32(0, 0XF4);
    func_8002135C(rdram, ctx);
        goto after_5;
    // 0x80290684: addiu       $a2, $zero, 0xF4
    ctx->r6 = ADD32(0, 0XF4);
    after_5:
L_80290688:
    // 0x80290688: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8029068C:
    // 0x8029068C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80290690: jr          $ra
    // 0x80290694: nop

    return;
    // 0x80290694: nop

;}
RECOMP_FUNC void func_80290698(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80290698: lui         $a1, 0x2
    ctx->r5 = S32(0X2 << 16);
    // 0x8029069C: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x802906A0: addiu       $v1, $v1, -0x3770
    ctx->r3 = ADD32(ctx->r3, -0X3770);
    // 0x802906A4: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x802906A8: addiu       $v0, $zero, 0x55
    ctx->r2 = ADD32(0, 0X55);
    // 0x802906AC: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
L_802906B0:
    // 0x802906B0: multu       $v0, $a0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802906B4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802906B8: andi        $t9, $v0, 0xFF
    ctx->r25 = ctx->r2 & 0XFF;
    // 0x802906BC: slti        $at, $t9, 0x57
    ctx->r1 = SIGNED(ctx->r25) < 0X57 ? 1 : 0;
    // 0x802906C0: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    // 0x802906C4: mflo        $t6
    ctx->r14 = lo;
    // 0x802906C8: addu        $t7, $v1, $t6
    ctx->r15 = ADD32(ctx->r3, ctx->r14);
    // 0x802906CC: addu        $t8, $t7, $a1
    ctx->r24 = ADD32(ctx->r15, ctx->r5);
    // 0x802906D0: bne         $at, $zero, L_802906B0
    if (ctx->r1 != 0) {
        // 0x802906D4: sb          $zero, 0x2148($t8)
        MEM_B(0X2148, ctx->r24) = 0;
            goto L_802906B0;
    }
    // 0x802906D4: sb          $zero, 0x2148($t8)
    MEM_B(0X2148, ctx->r24) = 0;
    // 0x802906D8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x802906DC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802906E0: jr          $ra
    // 0x802906E4: sb          $t0, 0x3989($at)
    MEM_B(0X3989, ctx->r1) = ctx->r8;
    return;
    // 0x802906E4: sb          $t0, 0x3989($at)
    MEM_B(0X3989, ctx->r1) = ctx->r8;
;}
RECOMP_FUNC void func_802906E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802906E8: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x802906EC: lbu         $t6, 0x39A0($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X39A0);
    // 0x802906F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802906F4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802906F8: bne         $t6, $at, L_80290788
    if (ctx->r14 != ctx->r1) {
        // 0x802906FC: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80290788;
    }
    // 0x802906FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80290700: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80290704: lwc1        $f4, 0x53C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X53C);
    // 0x80290708: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8029070C: swc1        $f4, 0x3918($at)
    MEM_W(0X3918, ctx->r1) = ctx->f4.u32l;
    // 0x80290710: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80290714: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80290718: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8029071C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80290720: swc1        $f6, 0x3910($at)
    MEM_W(0X3910, ctx->r1) = ctx->f6.u32l;
    // 0x80290724: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80290728: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x8029072C: swc1        $f0, 0x3974($at)
    MEM_W(0X3974, ctx->r1) = ctx->f0.u32l;
    // 0x80290730: lw          $t7, 0x3B20($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3B20);
    // 0x80290734: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80290738: swc1        $f0, 0x397C($at)
    MEM_W(0X397C, ctx->r1) = ctx->f0.u32l;
    // 0x8029073C: lwc1        $f8, 0x8($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X8);
    // 0x80290740: lui         $at, 0xC3E1
    ctx->r1 = S32(0XC3E1 << 16);
    // 0x80290744: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x80290748: nop

    // 0x8029074C: bc1f        L_80290770
    if (!c1cs) {
        // 0x80290750: nop
    
            goto L_80290770;
    }
    // 0x80290750: nop

    // 0x80290754: lui         $at, 0x43E1
    ctx->r1 = S32(0X43E1 << 16);
    // 0x80290758: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8029075C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80290760: swc1        $f0, 0x3970($at)
    MEM_W(0X3970, ctx->r1) = ctx->f0.u32l;
    // 0x80290764: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80290768: b           L_802907B4
    // 0x8029076C: swc1        $f0, 0x3978($at)
    MEM_W(0X3978, ctx->r1) = ctx->f0.u32l;
        goto L_802907B4;
    // 0x8029076C: swc1        $f0, 0x3978($at)
    MEM_W(0X3978, ctx->r1) = ctx->f0.u32l;
L_80290770:
    // 0x80290770: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80290774: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80290778: swc1        $f0, 0x3970($at)
    MEM_W(0X3970, ctx->r1) = ctx->f0.u32l;
    // 0x8029077C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80290780: b           L_802907B4
    // 0x80290784: swc1        $f0, 0x3978($at)
    MEM_W(0X3978, ctx->r1) = ctx->f0.u32l;
        goto L_802907B4;
    // 0x80290784: swc1        $f0, 0x3978($at)
    MEM_W(0X3978, ctx->r1) = ctx->f0.u32l;
L_80290788:
    // 0x80290788: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x8029078C: lhu         $t8, 0xB78($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0XB78);
    // 0x80290790: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80290794: bne         $t8, $at, L_802907AC
    if (ctx->r24 != ctx->r1) {
        // 0x80290798: nop
    
            goto L_802907AC;
    }
    // 0x80290798: nop

    // 0x8029079C: jal         0x80290894
    // 0x802907A0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80290894(rdram, ctx);
        goto after_0;
    // 0x802907A0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x802907A4: b           L_802907B8
    // 0x802907A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802907B8;
    // 0x802907A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802907AC:
    // 0x802907AC: jal         0x80290BA4
    // 0x802907B0: nop

    func_80290BA4(rdram, ctx);
        goto after_1;
    // 0x802907B0: nop

    after_1:
L_802907B4:
    // 0x802907B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802907B8:
    // 0x802907B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802907BC: jr          $ra
    // 0x802907C0: nop

    return;
    // 0x802907C0: nop

;}
RECOMP_FUNC void func_802907C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802907C4: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x802907C8: addiu       $v1, $v1, 0x39A0
    ctx->r3 = ADD32(ctx->r3, 0X39A0);
    // 0x802907CC: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x802907D0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802907D4: bne         $v0, $zero, L_80290830
    if (ctx->r2 != 0) {
        // 0x802907D8: xori        $t6, $v0, 0x1
        ctx->r14 = ctx->r2 ^ 0X1;
            goto L_80290830;
    }
    // 0x802907D8: xori        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 ^ 0X1;
    // 0x802907DC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802907E0: lwc1        $f4, 0x3918($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X3918);
    // 0x802907E4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802907E8: swc1        $f4, 0x39A4($at)
    MEM_W(0X39A4, ctx->r1) = ctx->f4.u32l;
    // 0x802907EC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802907F0: lwc1        $f6, 0x3910($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3910);
    // 0x802907F4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802907F8: swc1        $f6, 0x39A8($at)
    MEM_W(0X39A8, ctx->r1) = ctx->f6.u32l;
    // 0x802907FC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80290800: lwc1        $f8, 0x3924($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X3924);
    // 0x80290804: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80290808: swc1        $f8, 0x39AC($at)
    MEM_W(0X39AC, ctx->r1) = ctx->f8.u32l;
    // 0x8029080C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80290810: lwc1        $f10, 0x397C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X397C);
    // 0x80290814: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80290818: swc1        $f10, 0x39D0($at)
    MEM_W(0X39D0, ctx->r1) = ctx->f10.u32l;
    // 0x8029081C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80290820: lwc1        $f16, 0x3978($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X3978);
    // 0x80290824: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80290828: b           L_8029088C
    // 0x8029082C: swc1        $f16, 0x39D4($at)
    MEM_W(0X39D4, ctx->r1) = ctx->f16.u32l;
        goto L_8029088C;
    // 0x8029082C: swc1        $f16, 0x39D4($at)
    MEM_W(0X39D4, ctx->r1) = ctx->f16.u32l;
L_80290830:
    // 0x80290830: lwc1        $f18, 0x39A4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X39A4);
    // 0x80290834: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80290838: swc1        $f18, 0x3918($at)
    MEM_W(0X3918, ctx->r1) = ctx->f18.u32l;
    // 0x8029083C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80290840: lwc1        $f4, 0x39A8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X39A8);
    // 0x80290844: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80290848: swc1        $f4, 0x3910($at)
    MEM_W(0X3910, ctx->r1) = ctx->f4.u32l;
    // 0x8029084C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80290850: lwc1        $f6, 0x39AC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X39AC);
    // 0x80290854: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80290858: swc1        $f6, 0x3924($at)
    MEM_W(0X3924, ctx->r1) = ctx->f6.u32l;
    // 0x8029085C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80290860: lwc1        $f0, 0x39D4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X39D4);
    // 0x80290864: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80290868: swc1        $f0, 0x3978($at)
    MEM_W(0X3978, ctx->r1) = ctx->f0.u32l;
    // 0x8029086C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80290870: swc1        $f0, 0x3970($at)
    MEM_W(0X3970, ctx->r1) = ctx->f0.u32l;
    // 0x80290874: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80290878: lwc1        $f2, 0x39D0($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X39D0);
    // 0x8029087C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80290880: swc1        $f2, 0x397C($at)
    MEM_W(0X397C, ctx->r1) = ctx->f2.u32l;
    // 0x80290884: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80290888: swc1        $f2, 0x3974($at)
    MEM_W(0X3974, ctx->r1) = ctx->f2.u32l;
L_8029088C:
    // 0x8029088C: jr          $ra
    // 0x80290890: sb          $t6, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r14;
    return;
    // 0x80290890: sb          $t6, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r14;
;}
RECOMP_FUNC void func_80290894(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80290894: lui         $t0, 0x802C
    ctx->r8 = S32(0X802C << 16);
    // 0x80290898: addiu       $t0, $t0, 0x399D
    ctx->r8 = ADD32(ctx->r8, 0X399D);
    // 0x8029089C: lbu         $a3, 0x0($t0)
    ctx->r7 = MEM_BU(ctx->r8, 0X0);
    // 0x802908A0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802908A4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x802908A8: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x802908AC: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x802908B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802908B4: beq         $a3, $zero, L_802908D0
    if (ctx->r7 == 0) {
        // 0x802908B8: or          $v0, $a3, $zero
        ctx->r2 = ctx->r7 | 0;
            goto L_802908D0;
    }
    // 0x802908B8: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    // 0x802908BC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802908C0: beq         $v0, $v1, L_80290A18
    if (ctx->r2 == ctx->r3) {
        // 0x802908C4: nop
    
            goto L_80290A18;
    }
    // 0x802908C4: nop

    // 0x802908C8: b           L_80290AC4
    // 0x802908CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80290AC4;
    // 0x802908CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802908D0:
    // 0x802908D0: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x802908D4: lw          $a1, 0x3B20($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X3B20);
    // 0x802908D8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802908DC: lw          $t7, 0xB4($a1)
    ctx->r15 = MEM_W(ctx->r5, 0XB4);
    // 0x802908E0: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802908E4: lw          $v1, 0x24($t7)
    ctx->r3 = MEM_W(ctx->r15, 0X24);
    // 0x802908E8: lbu         $v0, 0x399C($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X399C);
    // 0x802908EC: lbu         $a0, 0x8AA($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X8AA);
    // 0x802908F0: lw          $t8, 0x18($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X18);
    // 0x802908F4: sll         $a2, $a0, 5
    ctx->r6 = S32(ctx->r4 << 5);
    // 0x802908F8: subu        $a2, $a2, $a0
    ctx->r6 = SUB32(ctx->r6, ctx->r4);
    // 0x802908FC: sll         $a2, $a2, 3
    ctx->r6 = S32(ctx->r6 << 3);
    // 0x80290900: addu        $t9, $t8, $a2
    ctx->r25 = ADD32(ctx->r24, ctx->r6);
    // 0x80290904: lwc1        $f4, 0x4C($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X4C);
    // 0x80290908: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8029090C: swc1        $f4, 0x3978($at)
    MEM_W(0X3978, ctx->r1) = ctx->f4.u32l;
    // 0x80290910: lw          $t1, 0xB4($a1)
    ctx->r9 = MEM_W(ctx->r5, 0XB4);
    // 0x80290914: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80290918: lw          $t2, 0x24($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X24);
    // 0x8029091C: nop

    // 0x80290920: lw          $t3, 0x18($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X18);
    // 0x80290924: nop

    // 0x80290928: addu        $t4, $t3, $a2
    ctx->r12 = ADD32(ctx->r11, ctx->r6);
    // 0x8029092C: lwc1        $f6, 0x44($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X44);
    // 0x80290930: addiu       $t4, $zero, 0x3C
    ctx->r12 = ADD32(0, 0X3C);
    // 0x80290934: swc1        $f6, 0x397C($at)
    MEM_W(0X397C, ctx->r1) = ctx->f6.u32l;
    // 0x80290938: lw          $t5, 0xB4($a1)
    ctx->r13 = MEM_W(ctx->r5, 0XB4);
    // 0x8029093C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80290940: lw          $t6, 0x24($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X24);
    // 0x80290944: nop

    // 0x80290948: lw          $t7, 0x18($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X18);
    // 0x8029094C: nop

    // 0x80290950: addu        $t8, $t7, $a2
    ctx->r24 = ADD32(ctx->r15, ctx->r6);
    // 0x80290954: lwc1        $f8, 0x78($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X78);
    // 0x80290958: nop

    // 0x8029095C: swc1        $f8, 0x3980($at)
    MEM_W(0X3980, ctx->r1) = ctx->f8.u32l;
    // 0x80290960: lw          $t9, 0xB4($a1)
    ctx->r25 = MEM_W(ctx->r5, 0XB4);
    // 0x80290964: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80290968: lw          $t1, 0x24($t9)
    ctx->r9 = MEM_W(ctx->r25, 0X24);
    // 0x8029096C: nop

    // 0x80290970: lw          $t2, 0x18($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X18);
    // 0x80290974: nop

    // 0x80290978: addu        $t3, $t2, $a2
    ctx->r11 = ADD32(ctx->r10, ctx->r6);
    // 0x8029097C: lwc1        $f10, 0x70($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X70);
    // 0x80290980: beq         $v0, $zero, L_802909AC
    if (ctx->r2 == 0) {
        // 0x80290984: swc1        $f10, 0x3984($at)
        MEM_W(0X3984, ctx->r1) = ctx->f10.u32l;
            goto L_802909AC;
    }
    // 0x80290984: swc1        $f10, 0x3984($at)
    MEM_W(0X3984, ctx->r1) = ctx->f10.u32l;
    // 0x80290988: beq         $v0, $v1, L_802909BC
    if (ctx->r2 == ctx->r3) {
        // 0x8029098C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_802909BC;
    }
    // 0x8029098C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80290990: beq         $v0, $at, L_802909B4
    if (ctx->r2 == ctx->r1) {
        // 0x80290994: addiu       $t5, $zero, 0x28
        ctx->r13 = ADD32(0, 0X28);
            goto L_802909B4;
    }
    // 0x80290994: addiu       $t5, $zero, 0x28
    ctx->r13 = ADD32(0, 0X28);
    // 0x80290998: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8029099C: beq         $v0, $at, L_802909C0
    if (ctx->r2 == ctx->r1) {
        // 0x802909A0: addiu       $t6, $zero, 0x3C
        ctx->r14 = ADD32(0, 0X3C);
            goto L_802909C0;
    }
    // 0x802909A0: addiu       $t6, $zero, 0x3C
    ctx->r14 = ADD32(0, 0X3C);
    // 0x802909A4: b           L_802909C8
    // 0x802909A8: lw          $t7, 0xB4($a1)
    ctx->r15 = MEM_W(ctx->r5, 0XB4);
        goto L_802909C8;
    // 0x802909A8: lw          $t7, 0xB4($a1)
    ctx->r15 = MEM_W(ctx->r5, 0XB4);
L_802909AC:
    // 0x802909AC: b           L_802909C4
    // 0x802909B0: sb          $t4, 0x1D($sp)
    MEM_B(0X1D, ctx->r29) = ctx->r12;
        goto L_802909C4;
    // 0x802909B0: sb          $t4, 0x1D($sp)
    MEM_B(0X1D, ctx->r29) = ctx->r12;
L_802909B4:
    // 0x802909B4: b           L_802909C4
    // 0x802909B8: sb          $t5, 0x1D($sp)
    MEM_B(0X1D, ctx->r29) = ctx->r13;
        goto L_802909C4;
    // 0x802909B8: sb          $t5, 0x1D($sp)
    MEM_B(0X1D, ctx->r29) = ctx->r13;
L_802909BC:
    // 0x802909BC: addiu       $t6, $zero, 0x3C
    ctx->r14 = ADD32(0, 0X3C);
L_802909C0:
    // 0x802909C0: sb          $t6, 0x1D($sp)
    MEM_B(0X1D, ctx->r29) = ctx->r14;
L_802909C4:
    // 0x802909C4: lw          $t7, 0xB4($a1)
    ctx->r15 = MEM_W(ctx->r5, 0XB4);
L_802909C8:
    // 0x802909C8: lbu         $t2, 0x1D($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X1D);
    // 0x802909CC: lw          $t8, 0x24($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X24);
    // 0x802909D0: mtc1        $t2, $f18
    ctx->f18.u32l = ctx->r10;
    // 0x802909D4: lw          $t9, 0x18($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X18);
    // 0x802909D8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x802909DC: addu        $t1, $t9, $a2
    ctx->r9 = ADD32(ctx->r25, ctx->r6);
    // 0x802909E0: lwc1        $f16, 0xB4($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0XB4);
    // 0x802909E4: bgez        $t2, L_802909F8
    if (SIGNED(ctx->r10) >= 0) {
        // 0x802909E8: cvt.s.w     $f4, $f18
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
            goto L_802909F8;
    }
    // 0x802909E8: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x802909EC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802909F0: nop

    // 0x802909F4: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
L_802909F8:
    // 0x802909F8: c.lt.s      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.fl < ctx->f4.fl;
    // 0x802909FC: addiu       $t3, $a3, 0x1
    ctx->r11 = ADD32(ctx->r7, 0X1);
    // 0x80290A00: bc1f        L_80290AC4
    if (!c1cs) {
        // 0x80290A04: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80290AC4;
    }
    // 0x80290A04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80290A08: jal         0x80290AD0
    // 0x80290A0C: sb          $t3, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r11;
    func_80290AD0(rdram, ctx);
        goto after_0;
    // 0x80290A0C: sb          $t3, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r11;
    after_0:
    // 0x80290A10: b           L_80290AC4
    // 0x80290A14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80290AC4;
    // 0x80290A14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80290A18:
    // 0x80290A18: beq         $a0, $zero, L_80290AB8
    if (ctx->r4 == 0) {
        // 0x80290A1C: lui         $v0, 0x802C
        ctx->r2 = S32(0X802C << 16);
            goto L_80290AB8;
    }
    // 0x80290A1C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80290A20: lbu         $v0, 0x399C($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X399C);
    // 0x80290A24: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80290A28: beq         $v0, $v1, L_80290A34
    if (ctx->r2 == ctx->r3) {
        // 0x80290A2C: nop
    
            goto L_80290A34;
    }
    // 0x80290A2C: nop

    // 0x80290A30: bne         $v0, $at, L_80290AB8
    if (ctx->r2 != ctx->r1) {
        // 0x80290A34: lui         $v0, 0x802C
        ctx->r2 = S32(0X802C << 16);
            goto L_80290AB8;
    }
L_80290A34:
    // 0x80290A34: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80290A38: addiu       $v0, $v0, 0x3910
    ctx->r2 = ADD32(ctx->r2, 0X3910);
    // 0x80290A3C: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80290A40: lui         $at, 0x4014
    ctx->r1 = S32(0X4014 << 16);
    // 0x80290A44: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x80290A48: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80290A4C: cvt.d.s     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f0.d = CVT_D_S(ctx->f8.fl);
    // 0x80290A50: c.eq.d      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.d == ctx->f0.d;
    // 0x80290A54: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80290A58: bc1t        L_80290A78
    if (c1cs) {
        // 0x80290A5C: nop
    
            goto L_80290A78;
    }
    // 0x80290A5C: nop

    // 0x80290A60: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x80290A64: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80290A68: nop

    // 0x80290A6C: sub.d       $f6, $f0, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f18.d); 
    ctx->f6.d = ctx->f0.d - ctx->f18.d;
    // 0x80290A70: cvt.s.d     $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f16.fl = CVT_S_D(ctx->f6.d);
    // 0x80290A74: swc1        $f16, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f16.u32l;
L_80290A78:
    // 0x80290A78: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80290A7C: addiu       $v0, $v0, 0x3918
    ctx->r2 = ADD32(ctx->r2, 0X3918);
    // 0x80290A80: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x80290A84: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80290A88: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80290A8C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80290A90: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x80290A94: nop

    // 0x80290A98: bc1f        L_80290AB4
    if (!c1cs) {
        // 0x80290A9C: nop
    
            goto L_80290AB4;
    }
    // 0x80290A9C: nop

    // 0x80290AA0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80290AA4: nop

    // 0x80290AA8: add.s       $f8, $f0, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x80290AAC: b           L_80290AB8
    // 0x80290AB0: swc1        $f8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f8.u32l;
        goto L_80290AB8;
    // 0x80290AB0: swc1        $f8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f8.u32l;
L_80290AB4:
    // 0x80290AB4: swc1        $f2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f2.u32l;
L_80290AB8:
    // 0x80290AB8: jal         0x80290AD0
    // 0x80290ABC: nop

    func_80290AD0(rdram, ctx);
        goto after_1;
    // 0x80290ABC: nop

    after_1:
    // 0x80290AC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80290AC4:
    // 0x80290AC4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80290AC8: jr          $ra
    // 0x80290ACC: nop

    return;
    // 0x80290ACC: nop

;}
RECOMP_FUNC void func_80290AD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80290AD0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80290AD4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80290AD8: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80290ADC: lbu         $v0, 0x399C($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X399C);
    // 0x80290AE0: swc1        $f0, 0x3980($at)
    MEM_W(0X3980, ctx->r1) = ctx->f0.u32l;
    // 0x80290AE4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80290AE8: beq         $v0, $zero, L_80290B14
    if (ctx->r2 == 0) {
        // 0x80290AEC: swc1        $f0, 0x3984($at)
        MEM_W(0X3984, ctx->r1) = ctx->f0.u32l;
            goto L_80290B14;
    }
    // 0x80290AEC: swc1        $f0, 0x3984($at)
    MEM_W(0X3984, ctx->r1) = ctx->f0.u32l;
    // 0x80290AF0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80290AF4: beq         $v0, $at, L_80290B58
    if (ctx->r2 == ctx->r1) {
        // 0x80290AF8: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80290B58;
    }
    // 0x80290AF8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80290AFC: beq         $v0, $at, L_80290B14
    if (ctx->r2 == ctx->r1) {
        // 0x80290B00: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80290B14;
    }
    // 0x80290B00: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80290B04: beq         $v0, $at, L_80290B80
    if (ctx->r2 == ctx->r1) {
        // 0x80290B08: lui         $at, 0xC3F0
        ctx->r1 = S32(0XC3F0 << 16);
            goto L_80290B80;
    }
    // 0x80290B08: lui         $at, 0xC3F0
    ctx->r1 = S32(0XC3F0 << 16);
    // 0x80290B0C: jr          $ra
    // 0x80290B10: nop

    return;
    // 0x80290B10: nop

L_80290B14:
    // 0x80290B14: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80290B18: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x80290B1C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80290B20: lh          $t6, 0xE8($v0)
    ctx->r14 = MEM_H(ctx->r2, 0XE8);
    // 0x80290B24: nop

    // 0x80290B28: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80290B2C: nop

    // 0x80290B30: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80290B34: swc1        $f6, 0x3978($at)
    MEM_W(0X3978, ctx->r1) = ctx->f6.u32l;
    // 0x80290B38: lh          $t7, 0xEA($v0)
    ctx->r15 = MEM_H(ctx->r2, 0XEA);
    // 0x80290B3C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80290B40: addiu       $t8, $t7, -0x1E
    ctx->r24 = ADD32(ctx->r15, -0X1E);
    // 0x80290B44: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x80290B48: nop

    // 0x80290B4C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80290B50: jr          $ra
    // 0x80290B54: swc1        $f10, 0x397C($at)
    MEM_W(0X397C, ctx->r1) = ctx->f10.u32l;
    return;
    // 0x80290B54: swc1        $f10, 0x397C($at)
    MEM_W(0X397C, ctx->r1) = ctx->f10.u32l;
L_80290B58:
    // 0x80290B58: lui         $at, 0x43F0
    ctx->r1 = S32(0X43F0 << 16);
    // 0x80290B5C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80290B60: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80290B64: swc1        $f16, 0x3978($at)
    MEM_W(0X3978, ctx->r1) = ctx->f16.u32l;
    // 0x80290B68: lui         $at, 0xC348
    ctx->r1 = S32(0XC348 << 16);
    // 0x80290B6C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80290B70: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80290B74: jr          $ra
    // 0x80290B78: swc1        $f18, 0x397C($at)
    MEM_W(0X397C, ctx->r1) = ctx->f18.u32l;
    return;
    // 0x80290B78: swc1        $f18, 0x397C($at)
    MEM_W(0X397C, ctx->r1) = ctx->f18.u32l;
    // 0x80290B7C: lui         $at, 0xC3F0
    ctx->r1 = S32(0XC3F0 << 16);
L_80290B80:
    // 0x80290B80: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80290B84: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80290B88: swc1        $f4, 0x3978($at)
    MEM_W(0X3978, ctx->r1) = ctx->f4.u32l;
    // 0x80290B8C: lui         $at, 0xC348
    ctx->r1 = S32(0XC348 << 16);
    // 0x80290B90: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80290B94: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80290B98: swc1        $f6, 0x397C($at)
    MEM_W(0X397C, ctx->r1) = ctx->f6.u32l;
    // 0x80290B9C: jr          $ra
    // 0x80290BA0: nop

    return;
    // 0x80290BA0: nop

;}
RECOMP_FUNC void func_80290BA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80290BA4: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80290BA8: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x80290BAC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80290BB0: lh          $t6, 0xE8($v0)
    ctx->r14 = MEM_H(ctx->r2, 0XE8);
    // 0x80290BB4: nop

    // 0x80290BB8: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80290BBC: nop

    // 0x80290BC0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80290BC4: swc1        $f6, 0x3978($at)
    MEM_W(0X3978, ctx->r1) = ctx->f6.u32l;
    // 0x80290BC8: lh          $t7, 0xEA($v0)
    ctx->r15 = MEM_H(ctx->r2, 0XEA);
    // 0x80290BCC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80290BD0: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x80290BD4: nop

    // 0x80290BD8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80290BDC: jr          $ra
    // 0x80290BE0: swc1        $f10, 0x397C($at)
    MEM_W(0X397C, ctx->r1) = ctx->f10.u32l;
    return;
    // 0x80290BE0: swc1        $f10, 0x397C($at)
    MEM_W(0X397C, ctx->r1) = ctx->f10.u32l;
;}
RECOMP_FUNC void func_80290BE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80290BE4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80290BE8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80290BEC: sb          $zero, 0x3A24($at)
    MEM_B(0X3A24, ctx->r1) = 0;
    // 0x80290BF0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80290BF4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80290BF8: jal         0x80297DB0
    // 0x80290BFC: sb          $zero, 0x3988($at)
    MEM_B(0X3988, ctx->r1) = 0;
    func_80297DB0(rdram, ctx);
        goto after_0;
    // 0x80290BFC: sb          $zero, 0x3988($at)
    MEM_B(0X3988, ctx->r1) = 0;
    after_0:
    // 0x80290C00: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80290C04: lwc1        $f4, 0x3918($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X3918);
    // 0x80290C08: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80290C0C: swc1        $f4, 0x3994($at)
    MEM_W(0X3994, ctx->r1) = ctx->f4.u32l;
    // 0x80290C10: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80290C14: lwc1        $f6, 0x3910($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3910);
    // 0x80290C18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80290C1C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80290C20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80290C24: jr          $ra
    // 0x80290C28: swc1        $f6, 0x398C($at)
    MEM_W(0X398C, ctx->r1) = ctx->f6.u32l;
    return;
    // 0x80290C28: swc1        $f6, 0x398C($at)
    MEM_W(0X398C, ctx->r1) = ctx->f6.u32l;
;}
RECOMP_FUNC void func_80290C2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80290C2C: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x80290C30: addiu       $a0, $a0, 0x3988
    ctx->r4 = ADD32(ctx->r4, 0X3988);
    // 0x80290C34: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x80290C38: nop

    // 0x80290C3C: sltiu       $at, $v0, 0x5
    ctx->r1 = ctx->r2 < 0X5 ? 1 : 0;
    // 0x80290C40: beq         $at, $zero, L_80290F90
    if (ctx->r1 == 0) {
        // 0x80290C44: sll         $t6, $v0, 2
        ctx->r14 = S32(ctx->r2 << 2);
            goto L_80290F90;
    }
    // 0x80290C44: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x80290C48: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80290C4C: addu        $at, $at, $t6
    gpr jr_addend_80290C58 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80290C50: lw          $t6, 0x540($at)
    ctx->r14 = ADD32(ctx->r1, 0X540);
    // 0x80290C54: nop

    // 0x80290C58: jr          $t6
    // 0x80290C5C: nop

    switch (jr_addend_80290C58 >> 2) {
        case 0: goto L_80290C60; break;
        case 1: goto L_80290DB0; break;
        case 2: goto L_80290F90; break;
        case 3: goto L_80290ED4; break;
        case 4: goto L_80290F68; break;
        default: switch_error(__func__, 0x80290C58, 0x802C0540);
    }
    // 0x80290C5C: nop

L_80290C60:
    // 0x80290C60: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x80290C64: lw          $t7, 0x3B20($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3B20);
    // 0x80290C68: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x80290C6C: lh          $t8, 0xEA($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XEA);
    // 0x80290C70: addiu       $a1, $a1, 0x3918
    ctx->r5 = ADD32(ctx->r5, 0X3918);
    // 0x80290C74: bgez        $t8, L_80290D98
    if (SIGNED(ctx->r24) >= 0) {
        // 0x80290C78: lui         $at, 0x802C
        ctx->r1 = S32(0X802C << 16);
            goto L_80290D98;
    }
    // 0x80290C78: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80290C7C: sb          $zero, 0x399C($at)
    MEM_B(0X399C, ctx->r1) = 0;
    // 0x80290C80: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x80290C84: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80290C88: lwc1        $f6, 0x0($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80290C8C: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x80290C90: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80290C94: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80290C98: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80290C9C: div.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80290CA0: lui         $a3, 0x802C
    ctx->r7 = S32(0X802C << 16);
    // 0x80290CA4: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x80290CA8: addiu       $a3, $a3, 0x3989
    ctx->r7 = ADD32(ctx->r7, 0X3989);
    // 0x80290CAC: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80290CB0: addiu       $a2, $a2, 0x3910
    ctx->r6 = ADD32(ctx->r6, 0X3910);
    // 0x80290CB4: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80290CB8: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80290CBC: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x80290CC0: nop

    // 0x80290CC4: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x80290CC8: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x80290CCC: nop

    // 0x80290CD0: andi        $t0, $t0, 0x78
    ctx->r8 = ctx->r8 & 0X78;
    // 0x80290CD4: beq         $t0, $zero, L_80290D20
    if (ctx->r8 == 0) {
        // 0x80290CD8: nop
    
            goto L_80290D20;
    }
    // 0x80290CD8: nop

    // 0x80290CDC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80290CE0: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80290CE4: sub.s       $f18, $f16, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x80290CE8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80290CEC: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x80290CF0: nop

    // 0x80290CF4: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x80290CF8: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x80290CFC: nop

    // 0x80290D00: andi        $t0, $t0, 0x78
    ctx->r8 = ctx->r8 & 0X78;
    // 0x80290D04: bne         $t0, $zero, L_80290D18
    if (ctx->r8 != 0) {
        // 0x80290D08: nop
    
            goto L_80290D18;
    }
    // 0x80290D08: nop

    // 0x80290D0C: mfc1        $t0, $f18
    ctx->r8 = (int32_t)ctx->f18.u32l;
    // 0x80290D10: b           L_80290D30
    // 0x80290D14: or          $t0, $t0, $at
    ctx->r8 = ctx->r8 | ctx->r1;
        goto L_80290D30;
    // 0x80290D14: or          $t0, $t0, $at
    ctx->r8 = ctx->r8 | ctx->r1;
L_80290D18:
    // 0x80290D18: b           L_80290D30
    // 0x80290D1C: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
        goto L_80290D30;
    // 0x80290D1C: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
L_80290D20:
    // 0x80290D20: mfc1        $t0, $f18
    ctx->r8 = (int32_t)ctx->f18.u32l;
    // 0x80290D24: nop

    // 0x80290D28: bltz        $t0, L_80290D18
    if (SIGNED(ctx->r8) < 0) {
        // 0x80290D2C: nop
    
            goto L_80290D18;
    }
    // 0x80290D2C: nop

L_80290D30:
    // 0x80290D30: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80290D34: andi        $v1, $t0, 0xFF
    ctx->r3 = ctx->r8 & 0XFF;
    // 0x80290D38: bgtz        $v1, L_80290D48
    if (SIGNED(ctx->r3) > 0) {
        // 0x80290D3C: sb          $t0, 0x0($a3)
        MEM_B(0X0, ctx->r7) = ctx->r8;
            goto L_80290D48;
    }
    // 0x80290D3C: sb          $t0, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r8;
    // 0x80290D40: sb          $t1, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r9;
    // 0x80290D44: andi        $v1, $t1, 0xFF
    ctx->r3 = ctx->r9 & 0XFF;
L_80290D48:
    // 0x80290D48: lwc1        $f4, 0x0($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X0);
    // 0x80290D4C: lui         $at, 0x402E
    ctx->r1 = S32(0X402E << 16);
    // 0x80290D50: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80290D54: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80290D58: mtc1        $v1, $f16
    ctx->f16.u32l = ctx->r3;
    // 0x80290D5C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80290D60: sub.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d - ctx->f8.d;
    // 0x80290D64: bgez        $v1, L_80290D80
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80290D68: cvt.d.w     $f18, $f16
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.d = CVT_D_W(ctx->f16.u32l);
            goto L_80290D80;
    }
    // 0x80290D68: cvt.d.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.d = CVT_D_W(ctx->f16.u32l);
    // 0x80290D6C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80290D70: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x80290D74: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80290D78: nop

    // 0x80290D7C: add.d       $f18, $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f18.d = ctx->f18.d + ctx->f4.d;
L_80290D80:
    // 0x80290D80: nop

    // 0x80290D84: div.d       $f6, $f10, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f6.d = DIV_D(ctx->f10.d, ctx->f18.d);
    // 0x80290D88: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80290D8C: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x80290D90: b           L_80290DA4
    // 0x80290D94: swc1        $f8, 0x3990($at)
    MEM_W(0X3990, ctx->r1) = ctx->f8.u32l;
        goto L_80290DA4;
    // 0x80290D94: swc1        $f8, 0x3990($at)
    MEM_W(0X3990, ctx->r1) = ctx->f8.u32l;
L_80290D98:
    // 0x80290D98: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80290D9C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80290DA0: sb          $t2, 0x399C($at)
    MEM_B(0X399C, ctx->r1) = ctx->r10;
L_80290DA4:
    // 0x80290DA4: addiu       $t3, $v0, 0x1
    ctx->r11 = ADD32(ctx->r2, 0X1);
    // 0x80290DA8: jr          $ra
    // 0x80290DAC: sb          $t3, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r11;
    return;
    // 0x80290DAC: sb          $t3, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r11;
L_80290DB0:
    // 0x80290DB0: lui         $t4, 0x802C
    ctx->r12 = S32(0X802C << 16);
    // 0x80290DB4: lbu         $t4, 0x399C($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X399C);
    // 0x80290DB8: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x80290DBC: bne         $t4, $zero, L_80290E3C
    if (ctx->r12 != 0) {
        // 0x80290DC0: addiu       $a1, $a1, 0x3918
        ctx->r5 = ADD32(ctx->r5, 0X3918);
            goto L_80290E3C;
    }
    // 0x80290DC0: addiu       $a1, $a1, 0x3918
    ctx->r5 = ADD32(ctx->r5, 0X3918);
    // 0x80290DC4: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x80290DC8: addiu       $a1, $a1, 0x3918
    ctx->r5 = ADD32(ctx->r5, 0X3918);
    // 0x80290DCC: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x80290DD0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80290DD4: lwc1        $f0, 0x0($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80290DD8: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x80290DDC: c.le.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl <= ctx->f0.fl;
    // 0x80290DE0: addiu       $a2, $a2, 0x3910
    ctx->r6 = ADD32(ctx->r6, 0X3910);
    // 0x80290DE4: bc1f        L_80290E0C
    if (!c1cs) {
        // 0x80290DE8: addiu       $t5, $v0, 0x1
        ctx->r13 = ADD32(ctx->r2, 0X1);
            goto L_80290E0C;
    }
    // 0x80290DE8: addiu       $t5, $v0, 0x1
    ctx->r13 = ADD32(ctx->r2, 0X1);
    // 0x80290DEC: sb          $t5, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r13;
    // 0x80290DF0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80290DF4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80290DF8: sb          $t6, 0x3A24($at)
    MEM_B(0X3A24, ctx->r1) = ctx->r14;
    // 0x80290DFC: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x80290E00: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80290E04: jr          $ra
    // 0x80290E08: swc1        $f4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f4.u32l;
    return;
    // 0x80290E08: swc1        $f4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f4.u32l;
L_80290E0C:
    // 0x80290E0C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80290E10: lwc1        $f18, 0x3990($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X3990);
    // 0x80290E14: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x80290E18: addiu       $a2, $a2, 0x3910
    ctx->r6 = ADD32(ctx->r6, 0X3910);
    // 0x80290E1C: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x80290E20: lwc1        $f10, 0x0($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X0);
    // 0x80290E24: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80290E28: sub.s       $f6, $f10, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f18.fl;
    // 0x80290E2C: add.s       $f16, $f0, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x80290E30: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
    // 0x80290E34: jr          $ra
    // 0x80290E38: swc1        $f16, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f16.u32l;
    return;
    // 0x80290E38: swc1        $f16, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f16.u32l;
L_80290E3C:
    // 0x80290E3C: addiu       $t7, $zero, 0x14
    ctx->r15 = ADD32(0, 0X14);
    // 0x80290E40: andi        $t9, $t7, 0xFF
    ctx->r25 = ctx->r15 & 0XFF;
    // 0x80290E44: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x80290E48: lui         $a3, 0x802C
    ctx->r7 = S32(0X802C << 16);
    // 0x80290E4C: addiu       $a3, $a3, 0x3989
    ctx->r7 = ADD32(ctx->r7, 0X3989);
    // 0x80290E50: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x80290E54: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x80290E58: addiu       $a2, $a2, 0x3910
    ctx->r6 = ADD32(ctx->r6, 0X3910);
    // 0x80290E5C: sb          $t7, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r15;
    // 0x80290E60: sb          $t8, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r24;
    // 0x80290E64: bgez        $t9, L_80290E80
    if (SIGNED(ctx->r25) >= 0) {
        // 0x80290E68: cvt.d.w     $f0, $f4
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.d = CVT_D_W(ctx->f4.u32l);
            goto L_80290E80;
    }
    // 0x80290E68: cvt.d.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.d = CVT_D_W(ctx->f4.u32l);
    // 0x80290E6C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80290E70: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x80290E74: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80290E78: nop

    // 0x80290E7C: add.d       $f0, $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f10.d); 
    ctx->f0.d = ctx->f0.d + ctx->f10.d;
L_80290E80:
    // 0x80290E80: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80290E84: lwc1        $f6, 0x0($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80290E88: lwc1        $f19, 0x558($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X558);
    // 0x80290E8C: lwc1        $f18, 0x55C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X55C);
    // 0x80290E90: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80290E94: sub.d       $f16, $f18, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f8.d); 
    ctx->f16.d = ctx->f18.d - ctx->f8.d;
    // 0x80290E98: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80290E9C: div.d       $f4, $f16, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = DIV_D(ctx->f16.d, ctx->f0.d);
    // 0x80290EA0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80290EA4: cvt.s.d     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f10.fl = CVT_S_D(ctx->f4.d);
    // 0x80290EA8: swc1        $f10, 0x3998($at)
    MEM_W(0X3998, ctx->r1) = ctx->f10.u32l;
    // 0x80290EAC: lwc1        $f6, 0x0($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X0);
    // 0x80290EB0: lui         $at, 0x402E
    ctx->r1 = S32(0X402E << 16);
    // 0x80290EB4: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80290EB8: cvt.d.s     $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f18.d = CVT_D_S(ctx->f6.fl);
    // 0x80290EBC: sub.d       $f16, $f18, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f8.d); 
    ctx->f16.d = ctx->f18.d - ctx->f8.d;
    // 0x80290EC0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80290EC4: div.d       $f4, $f16, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = DIV_D(ctx->f16.d, ctx->f0.d);
    // 0x80290EC8: cvt.s.d     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f10.fl = CVT_S_D(ctx->f4.d);
    // 0x80290ECC: jr          $ra
    // 0x80290ED0: swc1        $f10, 0x3990($at)
    MEM_W(0X3990, ctx->r1) = ctx->f10.u32l;
    return;
    // 0x80290ED0: swc1        $f10, 0x3990($at)
    MEM_W(0X3990, ctx->r1) = ctx->f10.u32l;
L_80290ED4:
    // 0x80290ED4: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x80290ED8: lw          $t0, 0x3B20($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X3B20);
    // 0x80290EDC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80290EE0: lh          $t1, 0xEA($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XEA);
    // 0x80290EE4: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x80290EE8: addiu       $t2, $t1, -0x3C
    ctx->r10 = ADD32(ctx->r9, -0X3C);
    // 0x80290EEC: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x80290EF0: addiu       $a1, $a1, 0x3918
    ctx->r5 = ADD32(ctx->r5, 0X3918);
    // 0x80290EF4: cvt.s.w     $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    ctx->f18.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80290EF8: lui         $a3, 0x802C
    ctx->r7 = S32(0X802C << 16);
    // 0x80290EFC: addiu       $a3, $a3, 0x3989
    ctx->r7 = ADD32(ctx->r7, 0X3989);
    // 0x80290F00: swc1        $f18, 0x397C($at)
    MEM_W(0X397C, ctx->r1) = ctx->f18.u32l;
    // 0x80290F04: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80290F08: lwc1        $f16, 0x3998($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X3998);
    // 0x80290F0C: lwc1        $f8, 0x0($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80290F10: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x80290F14: add.s       $f4, $f8, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x80290F18: lbu         $t3, 0x0($a3)
    ctx->r11 = MEM_BU(ctx->r7, 0X0);
    // 0x80290F1C: addiu       $a2, $a2, 0x3910
    ctx->r6 = ADD32(ctx->r6, 0X3910);
    // 0x80290F20: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
    // 0x80290F24: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80290F28: lwc1        $f6, 0x3990($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3990);
    // 0x80290F2C: lwc1        $f10, 0x0($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X0);
    // 0x80290F30: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x80290F34: sub.s       $f18, $f10, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x80290F38: andi        $t5, $t4, 0xFF
    ctx->r13 = ctx->r12 & 0XFF;
    // 0x80290F3C: swc1        $f18, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f18.u32l;
    // 0x80290F40: bne         $t5, $zero, L_80290F68
    if (ctx->r13 != 0) {
        // 0x80290F44: sb          $t4, 0x0($a3)
        MEM_B(0X0, ctx->r7) = ctx->r12;
            goto L_80290F68;
    }
    // 0x80290F44: sb          $t4, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r12;
    // 0x80290F48: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x80290F4C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80290F50: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x80290F54: sb          $t6, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r14;
    // 0x80290F58: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80290F5C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80290F60: swc1        $f8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f8.u32l;
    // 0x80290F64: sb          $t7, 0x3A24($at)
    MEM_B(0X3A24, ctx->r1) = ctx->r15;
L_80290F68:
    // 0x80290F68: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x80290F6C: lw          $t8, 0x3B20($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X3B20);
    // 0x80290F70: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80290F74: lh          $t9, 0xEA($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XEA);
    // 0x80290F78: nop

    // 0x80290F7C: addiu       $t0, $t9, -0x3C
    ctx->r8 = ADD32(ctx->r25, -0X3C);
    // 0x80290F80: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80290F84: nop

    // 0x80290F88: cvt.s.w     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80290F8C: swc1        $f4, 0x397C($at)
    MEM_W(0X397C, ctx->r1) = ctx->f4.u32l;
L_80290F90:
    // 0x80290F90: jr          $ra
    // 0x80290F94: nop

    return;
    // 0x80290F94: nop

;}
RECOMP_FUNC void func_80290F98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80290F98: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80290F9C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80290FA0: sb          $zero, 0x3A24($at)
    MEM_B(0X3A24, ctx->r1) = 0;
    // 0x80290FA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80290FA8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80290FAC: jal         0x80297DB0
    // 0x80290FB0: sb          $zero, 0x3988($at)
    MEM_B(0X3988, ctx->r1) = 0;
    func_80297DB0(rdram, ctx);
        goto after_0;
    // 0x80290FB0: sb          $zero, 0x3988($at)
    MEM_B(0X3988, ctx->r1) = 0;
    after_0:
    // 0x80290FB4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80290FB8: lwc1        $f4, 0x3918($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X3918);
    // 0x80290FBC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80290FC0: swc1        $f4, 0x3994($at)
    MEM_W(0X3994, ctx->r1) = ctx->f4.u32l;
    // 0x80290FC4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80290FC8: lwc1        $f6, 0x3910($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3910);
    // 0x80290FCC: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80290FD0: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x80290FD4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80290FD8: swc1        $f6, 0x398C($at)
    MEM_W(0X398C, ctx->r1) = ctx->f6.u32l;
    // 0x80290FDC: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80290FE0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80290FE4: swc1        $f8, 0x3978($at)
    MEM_W(0X3978, ctx->r1) = ctx->f8.u32l;
    // 0x80290FE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80290FEC: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80290FF0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80290FF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80290FF8: jr          $ra
    // 0x80290FFC: swc1        $f10, 0x397C($at)
    MEM_W(0X397C, ctx->r1) = ctx->f10.u32l;
    return;
    // 0x80290FFC: swc1        $f10, 0x397C($at)
    MEM_W(0X397C, ctx->r1) = ctx->f10.u32l;
;}
RECOMP_FUNC void func_80291000(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80291000: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x80291004: addiu       $a0, $a0, 0x3988
    ctx->r4 = ADD32(ctx->r4, 0X3988);
    // 0x80291008: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x8029100C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80291010: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80291014: beq         $v1, $zero, L_80291044
    if (ctx->r3 == 0) {
        // 0x80291018: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_80291044;
    }
    // 0x80291018: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8029101C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80291020: beq         $v0, $at, L_802910CC
    if (ctx->r2 == ctx->r1) {
        // 0x80291024: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_802910CC;
    }
    // 0x80291024: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80291028: beq         $v0, $at, L_80291104
    if (ctx->r2 == ctx->r1) {
        // 0x8029102C: lui         $t5, 0x8012
        ctx->r13 = S32(0X8012 << 16);
            goto L_80291104;
    }
    // 0x8029102C: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x80291030: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80291034: beq         $v0, $at, L_80291188
    if (ctx->r2 == ctx->r1) {
        // 0x80291038: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_80291188;
    }
    // 0x80291038: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8029103C: b           L_8029129C
    // 0x80291040: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8029129C;
    // 0x80291040: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80291044:
    // 0x80291044: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80291048: lbu         $t6, -0x3091($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X3091);
    // 0x8029104C: lui         $t8, 0x802C
    ctx->r24 = S32(0X802C << 16);
    // 0x80291050: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x80291054: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80291058: lhu         $t8, -0x3768($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X3768);
    // 0x8029105C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80291060: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x80291064: addiu       $v0, $v0, 0x3918
    ctx->r2 = ADD32(ctx->r2, 0X3918);
    // 0x80291068: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8029106C: bgez        $t8, L_80291084
    if (SIGNED(ctx->r24) >= 0) {
        // 0x80291070: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80291084;
    }
    // 0x80291070: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80291074: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80291078: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8029107C: nop

    // 0x80291080: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_80291084:
    // 0x80291084: c.le.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl <= ctx->f6.fl;
    // 0x80291088: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x8029108C: bc1f        L_802910B4
    if (!c1cs) {
        // 0x80291090: addiu       $a1, $a1, 0x3ACC
        ctx->r5 = ADD32(ctx->r5, 0X3ACC);
            goto L_802910B4;
    }
    // 0x80291090: addiu       $a1, $a1, 0x3ACC
    ctx->r5 = ADD32(ctx->r5, 0X3ACC);
    // 0x80291094: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80291098: addiu       $v0, $v0, 0x3989
    ctx->r2 = ADD32(ctx->r2, 0X3989);
    // 0x8029109C: addiu       $t9, $v1, 0x1
    ctx->r25 = ADD32(ctx->r3, 0X1);
    // 0x802910A0: addiu       $t0, $zero, 0x28
    ctx->r8 = ADD32(0, 0X28);
    // 0x802910A4: sb          $t9, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r25;
    // 0x802910A8: sb          $t0, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r8;
    // 0x802910AC: b           L_80291298
    // 0x802910B0: sb          $zero, 0x0($a1)
    MEM_B(0X0, ctx->r5) = 0;
        goto L_80291298;
    // 0x802910B0: sb          $zero, 0x0($a1)
    MEM_B(0X0, ctx->r5) = 0;
L_802910B4:
    // 0x802910B4: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x802910B8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802910BC: nop

    // 0x802910C0: sub.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x802910C4: b           L_80291298
    // 0x802910C8: swc1        $f16, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f16.u32l;
        goto L_80291298;
    // 0x802910C8: swc1        $f16, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f16.u32l;
L_802910CC:
    // 0x802910CC: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802910D0: addiu       $v0, $v0, 0x3989
    ctx->r2 = ADD32(ctx->r2, 0X3989);
    // 0x802910D4: lbu         $t1, 0x0($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X0);
    // 0x802910D8: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802910DC: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x802910E0: andi        $t3, $t2, 0xFF
    ctx->r11 = ctx->r10 & 0XFF;
    // 0x802910E4: bne         $t3, $zero, L_80291298
    if (ctx->r11 != 0) {
        // 0x802910E8: sb          $t2, 0x0($v0)
        MEM_B(0X0, ctx->r2) = ctx->r10;
            goto L_80291298;
    }
    // 0x802910E8: sb          $t2, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r10;
    // 0x802910EC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x802910F0: addiu       $a1, $a1, 0x3A28
    ctx->r5 = ADD32(ctx->r5, 0X3A28);
    // 0x802910F4: addiu       $t4, $v1, 0x1
    ctx->r12 = ADD32(ctx->r3, 0X1);
    // 0x802910F8: sb          $t4, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r12;
    // 0x802910FC: b           L_80291298
    // 0x80291100: swc1        $f18, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f18.u32l;
        goto L_80291298;
    // 0x80291100: swc1        $f18, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f18.u32l;
L_80291104:
    // 0x80291104: lbu         $t5, -0x3091($t5)
    ctx->r13 = MEM_BU(ctx->r13, -0X3091);
    // 0x80291108: lui         $t7, 0x802C
    ctx->r15 = S32(0X802C << 16);
    // 0x8029110C: sll         $t6, $t5, 1
    ctx->r14 = S32(ctx->r13 << 1);
    // 0x80291110: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80291114: lhu         $t7, -0x3770($t7)
    ctx->r15 = MEM_HU(ctx->r15, -0X3770);
    // 0x80291118: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8029111C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80291120: addiu       $v0, $v0, 0x3918
    ctx->r2 = ADD32(ctx->r2, 0X3918);
    // 0x80291124: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80291128: bgez        $t7, L_80291140
    if (SIGNED(ctx->r15) >= 0) {
        // 0x8029112C: cvt.s.w     $f8, $f4
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80291140;
    }
    // 0x8029112C: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80291130: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80291134: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80291138: nop

    // 0x8029113C: add.s       $f8, $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f6.fl;
L_80291140:
    // 0x80291140: c.le.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl <= ctx->f0.fl;
    // 0x80291144: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x80291148: bc1f        L_8029115C
    if (!c1cs) {
        // 0x8029114C: addiu       $a1, $a1, 0x3A28
        ctx->r5 = ADD32(ctx->r5, 0X3A28);
            goto L_8029115C;
    }
    // 0x8029114C: addiu       $a1, $a1, 0x3A28
    ctx->r5 = ADD32(ctx->r5, 0X3A28);
    // 0x80291150: addiu       $t8, $v1, 0x1
    ctx->r24 = ADD32(ctx->r3, 0X1);
    // 0x80291154: b           L_80291298
    // 0x80291158: sb          $t8, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r24;
        goto L_80291298;
    // 0x80291158: sb          $t8, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r24;
L_8029115C:
    // 0x8029115C: lwc1        $f10, 0x0($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80291160: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x80291164: c.eq.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl == ctx->f0.fl;
    // 0x80291168: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8029116C: bc1f        L_80291178
    if (!c1cs) {
        // 0x80291170: addiu       $t9, $v1, 0x1
        ctx->r25 = ADD32(ctx->r3, 0X1);
            goto L_80291178;
    }
    // 0x80291170: addiu       $t9, $v1, 0x1
    ctx->r25 = ADD32(ctx->r3, 0X1);
    // 0x80291174: sb          $t9, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r25;
L_80291178:
    // 0x80291178: add.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f16.fl;
    // 0x8029117C: swc1        $f0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f0.u32l;
    // 0x80291180: b           L_80291298
    // 0x80291184: swc1        $f18, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f18.u32l;
        goto L_80291298;
    // 0x80291184: swc1        $f18, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f18.u32l;
L_80291188:
    // 0x80291188: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8029118C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80291190: addiu       $v0, $v0, -0x2CF0
    ctx->r2 = ADD32(ctx->r2, -0X2CF0);
    // 0x80291194: sb          $a0, 0x3A24($at)
    MEM_B(0X3A24, ctx->r1) = ctx->r4;
    // 0x80291198: lhu         $t0, 0x10($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X10);
    // 0x8029119C: nop

    // 0x802911A0: andi        $t1, $t0, 0x40
    ctx->r9 = ctx->r8 & 0X40;
    // 0x802911A4: bne         $t1, $zero, L_8029129C
    if (ctx->r9 != 0) {
        // 0x802911A8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8029129C;
    }
    // 0x802911A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802911AC: lhu         $t2, 0xAA4($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0XAA4);
    // 0x802911B0: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x802911B4: andi        $t3, $t2, 0x40
    ctx->r11 = ctx->r10 & 0X40;
    // 0x802911B8: bne         $t3, $zero, L_8029129C
    if (ctx->r11 != 0) {
        // 0x802911BC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8029129C;
    }
    // 0x802911BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802911C0: lw          $t4, 0xB2C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0XB2C);
    // 0x802911C4: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x802911C8: lhu         $t5, 0xE($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0XE);
    // 0x802911CC: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x802911D0: bne         $t5, $at, L_80291298
    if (ctx->r13 != ctx->r1) {
        // 0x802911D4: addiu       $v1, $v1, 0x3B20
        ctx->r3 = ADD32(ctx->r3, 0X3B20);
            goto L_80291298;
    }
    // 0x802911D4: addiu       $v1, $v1, 0x3B20
    ctx->r3 = ADD32(ctx->r3, 0X3B20);
    // 0x802911D8: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x802911DC: nop

    // 0x802911E0: lhu         $v0, 0xDC($t6)
    ctx->r2 = MEM_HU(ctx->r14, 0XDC);
    // 0x802911E4: nop

    // 0x802911E8: andi        $t7, $v0, 0x2
    ctx->r15 = ctx->r2 & 0X2;
    // 0x802911EC: bne         $t7, $zero, L_80291298
    if (ctx->r15 != 0) {
        // 0x802911F0: andi        $t8, $v0, 0x4
        ctx->r24 = ctx->r2 & 0X4;
            goto L_80291298;
    }
    // 0x802911F0: andi        $t8, $v0, 0x4
    ctx->r24 = ctx->r2 & 0X4;
    // 0x802911F4: bne         $t8, $zero, L_80291298
    if (ctx->r24 != 0) {
        // 0x802911F8: lui         $a1, 0x802C
        ctx->r5 = S32(0X802C << 16);
            goto L_80291298;
    }
    // 0x802911F8: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802911FC: addiu       $a1, $a1, 0x3ACC
    ctx->r5 = ADD32(ctx->r5, 0X3ACC);
    // 0x80291200: lbu         $t9, 0x0($a1)
    ctx->r25 = MEM_BU(ctx->r5, 0X0);
    // 0x80291204: nop

    // 0x80291208: bne         $t9, $zero, L_8029129C
    if (ctx->r25 != 0) {
        // 0x8029120C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8029129C;
    }
    // 0x8029120C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80291210: jal         0x80078D50
    // 0x80291214: sb          $a0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r4;
    func_80078D50(rdram, ctx);
        goto after_0;
    // 0x80291214: sb          $a0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r4;
    after_0:
    // 0x80291218: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x8029121C: lw          $t0, 0xB2C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0XB2C);
    // 0x80291220: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x80291224: lw          $t1, 0xC8($t0)
    ctx->r9 = MEM_W(ctx->r8, 0XC8);
    // 0x80291228: addiu       $v1, $v1, 0x3B20
    ctx->r3 = ADD32(ctx->r3, 0X3B20);
    // 0x8029122C: lhu         $t2, 0x8($t1)
    ctx->r10 = MEM_HU(ctx->r9, 0X8);
    // 0x80291230: nop

    // 0x80291234: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x80291238: beq         $t3, $zero, L_80291270
    if (ctx->r11 == 0) {
        // 0x8029123C: nop
    
            goto L_80291270;
    }
    // 0x8029123C: nop

    // 0x80291240: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x80291244: nop

    // 0x80291248: lh          $v0, 0xE8($t4)
    ctx->r2 = MEM_H(ctx->r12, 0XE8);
    // 0x8029124C: nop

    // 0x80291250: blez        $v0, L_80291298
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80291254: slti        $at, $v0, 0x64
        ctx->r1 = SIGNED(ctx->r2) < 0X64 ? 1 : 0;
            goto L_80291298;
    }
    // 0x80291254: slti        $at, $v0, 0x64
    ctx->r1 = SIGNED(ctx->r2) < 0X64 ? 1 : 0;
    // 0x80291258: beq         $at, $zero, L_8029129C
    if (ctx->r1 == 0) {
        // 0x8029125C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8029129C;
    }
    // 0x8029125C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80291260: jal         0x80078B5C
    // 0x80291264: nop

    func_80078B5C(rdram, ctx);
        goto after_1;
    // 0x80291264: nop

    after_1:
    // 0x80291268: b           L_8029129C
    // 0x8029126C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8029129C;
    // 0x8029126C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80291270:
    // 0x80291270: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x80291274: nop

    // 0x80291278: lh          $v0, 0xE8($t5)
    ctx->r2 = MEM_H(ctx->r13, 0XE8);
    // 0x8029127C: nop

    // 0x80291280: bgez        $v0, L_80291298
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80291284: slti        $at, $v0, -0x63
        ctx->r1 = SIGNED(ctx->r2) < -0X63 ? 1 : 0;
            goto L_80291298;
    }
    // 0x80291284: slti        $at, $v0, -0x63
    ctx->r1 = SIGNED(ctx->r2) < -0X63 ? 1 : 0;
    // 0x80291288: bne         $at, $zero, L_8029129C
    if (ctx->r1 != 0) {
        // 0x8029128C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8029129C;
    }
    // 0x8029128C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80291290: jal         0x80078B5C
    // 0x80291294: nop

    func_80078B5C(rdram, ctx);
        goto after_2;
    // 0x80291294: nop

    after_2:
L_80291298:
    // 0x80291298: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8029129C:
    // 0x8029129C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802912A0: jr          $ra
    // 0x802912A4: nop

    return;
    // 0x802912A4: nop

;}
RECOMP_FUNC void func_802912A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802912A8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802912AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802912B0: sb          $zero, 0x3A24($at)
    MEM_B(0X3A24, ctx->r1) = 0;
    // 0x802912B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802912B8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802912BC: jal         0x80297DB0
    // 0x802912C0: sb          $zero, 0x3988($at)
    MEM_B(0X3988, ctx->r1) = 0;
    func_80297DB0(rdram, ctx);
        goto after_0;
    // 0x802912C0: sb          $zero, 0x3988($at)
    MEM_B(0X3988, ctx->r1) = 0;
    after_0:
    // 0x802912C4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802912C8: lwc1        $f4, 0x3918($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X3918);
    // 0x802912CC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802912D0: swc1        $f4, 0x3994($at)
    MEM_W(0X3994, ctx->r1) = ctx->f4.u32l;
    // 0x802912D4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802912D8: lwc1        $f6, 0x3910($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3910);
    // 0x802912DC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802912E0: swc1        $f6, 0x398C($at)
    MEM_W(0X398C, ctx->r1) = ctx->f6.u32l;
    // 0x802912E4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802912E8: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x802912EC: lbu         $t6, -0x32A4($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X32A4);
    // 0x802912F0: sb          $zero, 0x39A0($at)
    MEM_B(0X39A0, ctx->r1) = 0;
    // 0x802912F4: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x802912F8: bne         $t6, $at, L_80291378
    if (ctx->r14 != ctx->r1) {
        // 0x802912FC: lui         $v0, 0x8009
        ctx->r2 = S32(0X8009 << 16);
            goto L_80291378;
    }
    // 0x802912FC: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80291300: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x80291304: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80291308: lh          $t7, 0xE8($v0)
    ctx->r15 = MEM_H(ctx->r2, 0XE8);
    // 0x8029130C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80291310: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x80291314: nop

    // 0x80291318: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8029131C: swc1        $f10, 0x3978($at)
    MEM_W(0X3978, ctx->r1) = ctx->f10.u32l;
    // 0x80291320: lh          $t8, 0xEA($v0)
    ctx->r24 = MEM_H(ctx->r2, 0XEA);
    // 0x80291324: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80291328: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x8029132C: nop

    // 0x80291330: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80291334: swc1        $f18, 0x397C($at)
    MEM_W(0X397C, ctx->r1) = ctx->f18.u32l;
    // 0x80291338: lh          $t9, 0xE8($v0)
    ctx->r25 = MEM_H(ctx->r2, 0XE8);
    // 0x8029133C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80291340: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x80291344: nop

    // 0x80291348: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8029134C: swc1        $f6, 0x3970($at)
    MEM_W(0X3970, ctx->r1) = ctx->f6.u32l;
    // 0x80291350: lh          $t0, 0xEA($v0)
    ctx->r8 = MEM_H(ctx->r2, 0XEA);
    // 0x80291354: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80291358: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x8029135C: nop

    // 0x80291360: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80291364: swc1        $f10, 0x3974($at)
    MEM_W(0X3974, ctx->r1) = ctx->f10.u32l;
    // 0x80291368: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8029136C: swc1        $f0, 0x3980($at)
    MEM_W(0X3980, ctx->r1) = ctx->f0.u32l;
    // 0x80291370: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80291374: swc1        $f0, 0x3984($at)
    MEM_W(0X3984, ctx->r1) = ctx->f0.u32l;
L_80291378:
    // 0x80291378: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8029137C: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x80291380: nop

    // 0x80291384: lh          $v1, 0xE8($v0)
    ctx->r3 = MEM_H(ctx->r2, 0XE8);
    // 0x80291388: nop

    // 0x8029138C: blez        $v1, L_802913B0
    if (SIGNED(ctx->r3) <= 0) {
        // 0x80291390: slti        $at, $v1, -0x1A3
        ctx->r1 = SIGNED(ctx->r3) < -0X1A3 ? 1 : 0;
            goto L_802913B0;
    }
    // 0x80291390: slti        $at, $v1, -0x1A3
    ctx->r1 = SIGNED(ctx->r3) < -0X1A3 ? 1 : 0;
    // 0x80291394: slti        $at, $v1, 0x1A5
    ctx->r1 = SIGNED(ctx->r3) < 0X1A5 ? 1 : 0;
    // 0x80291398: bne         $at, $zero, L_802913A8
    if (ctx->r1 != 0) {
        // 0x8029139C: nop
    
            goto L_802913A8;
    }
    // 0x8029139C: nop

    // 0x802913A0: b           L_802913C0
    // 0x802913A4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_802913C0;
    // 0x802913A4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_802913A8:
    // 0x802913A8: b           L_802913C0
    // 0x802913AC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_802913C0;
    // 0x802913AC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_802913B0:
    // 0x802913B0: bne         $at, $zero, L_802913C0
    if (ctx->r1 != 0) {
        // 0x802913B4: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_802913C0;
    }
    // 0x802913B4: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x802913B8: b           L_802913C0
    // 0x802913BC: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
        goto L_802913C0;
    // 0x802913BC: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
L_802913C0:
    // 0x802913C0: lh          $a0, 0xEA($v0)
    ctx->r4 = MEM_H(ctx->r2, 0XEA);
    // 0x802913C4: addiu       $t2, $v1, 0x8
    ctx->r10 = ADD32(ctx->r3, 0X8);
    // 0x802913C8: slti        $at, $a0, 0xA0
    ctx->r1 = SIGNED(ctx->r4) < 0XA0 ? 1 : 0;
    // 0x802913CC: beq         $at, $zero, L_802913F4
    if (ctx->r1 == 0) {
        // 0x802913D0: slti        $at, $a0, -0x9F
        ctx->r1 = SIGNED(ctx->r4) < -0X9F ? 1 : 0;
            goto L_802913F4;
    }
    // 0x802913D0: slti        $at, $a0, -0x9F
    ctx->r1 = SIGNED(ctx->r4) < -0X9F ? 1 : 0;
    // 0x802913D4: bne         $at, $zero, L_802913E8
    if (ctx->r1 != 0) {
        // 0x802913D8: addiu       $t1, $v1, 0x4
        ctx->r9 = ADD32(ctx->r3, 0X4);
            goto L_802913E8;
    }
    // 0x802913D8: addiu       $t1, $v1, 0x4
    ctx->r9 = ADD32(ctx->r3, 0X4);
    // 0x802913DC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802913E0: b           L_802913FC
    // 0x802913E4: sb          $v1, 0x399C($at)
    MEM_B(0X399C, ctx->r1) = ctx->r3;
        goto L_802913FC;
    // 0x802913E4: sb          $v1, 0x399C($at)
    MEM_B(0X399C, ctx->r1) = ctx->r3;
L_802913E8:
    // 0x802913E8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802913EC: b           L_802913FC
    // 0x802913F0: sb          $t1, 0x399C($at)
    MEM_B(0X399C, ctx->r1) = ctx->r9;
        goto L_802913FC;
    // 0x802913F0: sb          $t1, 0x399C($at)
    MEM_B(0X399C, ctx->r1) = ctx->r9;
L_802913F4:
    // 0x802913F4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802913F8: sb          $t2, 0x399C($at)
    MEM_B(0X399C, ctx->r1) = ctx->r10;
L_802913FC:
    // 0x802913FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80291400: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80291404: jr          $ra
    // 0x80291408: nop

    return;
    // 0x80291408: nop

;}
RECOMP_FUNC void func_8029140C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029140C: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x80291410: lbu         $a1, 0x399C($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X399C);
    // 0x80291414: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80291418: sltiu       $at, $a1, 0xC
    ctx->r1 = ctx->r5 < 0XC ? 1 : 0;
    // 0x8029141C: beq         $at, $zero, L_80292490
    if (ctx->r1 == 0) {
        // 0x80291420: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80292490;
    }
    // 0x80291420: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80291424: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x80291428: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8029142C: addu        $at, $at, $t6
    gpr jr_addend_80291438 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80291430: lw          $t6, 0x560($at)
    ctx->r14 = ADD32(ctx->r1, 0X560);
    // 0x80291434: nop

    // 0x80291438: jr          $t6
    // 0x8029143C: nop

    switch (jr_addend_80291438 >> 2) {
        case 0: goto L_80291440; break;
        case 1: goto L_80291440; break;
        case 2: goto L_80291440; break;
        case 3: goto L_80291440; break;
        case 4: goto L_80291830; break;
        case 5: goto L_80291AF0; break;
        case 6: goto L_80291AF0; break;
        case 7: goto L_80291830; break;
        case 8: goto L_802920C4; break;
        case 9: goto L_80291DA0; break;
        case 10: goto L_80291DA0; break;
        case 11: goto L_802920C4; break;
        default: switch_error(__func__, 0x80291438, 0x802C0560);
    }
    // 0x8029143C: nop

L_80291440:
    // 0x80291440: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x80291444: addiu       $a2, $a2, 0x3988
    ctx->r6 = ADD32(ctx->r6, 0X3988);
    // 0x80291448: lbu         $v1, 0x0($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X0);
    // 0x8029144C: addiu       $t7, $zero, 0x50
    ctx->r15 = ADD32(0, 0X50);
    // 0x80291450: beq         $v1, $zero, L_80291480
    if (ctx->r3 == 0) {
        // 0x80291454: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_80291480;
    }
    // 0x80291454: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80291458: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8029145C: beq         $v0, $at, L_80291498
    if (ctx->r2 == ctx->r1) {
        // 0x80291460: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80291498;
    }
    // 0x80291460: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80291464: beq         $v0, $at, L_8029163C
    if (ctx->r2 == ctx->r1) {
        // 0x80291468: lui         $a0, 0x802C
        ctx->r4 = S32(0X802C << 16);
            goto L_8029163C;
    }
    // 0x80291468: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x8029146C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80291470: beq         $v0, $at, L_802917B0
    if (ctx->r2 == ctx->r1) {
        // 0x80291474: lui         $t4, 0x8012
        ctx->r12 = S32(0X8012 << 16);
            goto L_802917B0;
    }
    // 0x80291474: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x80291478: b           L_80292494
    // 0x8029147C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80292494;
    // 0x8029147C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80291480:
    // 0x80291480: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80291484: addiu       $v0, $v0, 0x3989
    ctx->r2 = ADD32(ctx->r2, 0X3989);
    // 0x80291488: addiu       $t8, $v1, 0x1
    ctx->r24 = ADD32(ctx->r3, 0X1);
    // 0x8029148C: sb          $t7, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r15;
    // 0x80291490: b           L_80292490
    // 0x80291494: sb          $t8, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r24;
        goto L_80292490;
    // 0x80291494: sb          $t8, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r24;
L_80291498:
    // 0x80291498: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8029149C: addiu       $v0, $v0, 0x3989
    ctx->r2 = ADD32(ctx->r2, 0X3989);
    // 0x802914A0: lbu         $t9, 0x0($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X0);
    // 0x802914A4: slti        $at, $a1, 0x4
    ctx->r1 = SIGNED(ctx->r5) < 0X4 ? 1 : 0;
    // 0x802914A8: addiu       $t1, $t9, -0x1
    ctx->r9 = ADD32(ctx->r25, -0X1);
    // 0x802914AC: andi        $t2, $t1, 0xFF
    ctx->r10 = ctx->r9 & 0XFF;
    // 0x802914B0: bne         $t2, $zero, L_80292490
    if (ctx->r10 != 0) {
        // 0x802914B4: sb          $t1, 0x0($v0)
        MEM_B(0X0, ctx->r2) = ctx->r9;
            goto L_80292490;
    }
    // 0x802914B4: sb          $t1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r9;
    // 0x802914B8: beq         $at, $zero, L_8029153C
    if (ctx->r1 == 0) {
        // 0x802914BC: lui         $a3, 0x802C
        ctx->r7 = S32(0X802C << 16);
            goto L_8029153C;
    }
    // 0x802914BC: lui         $a3, 0x802C
    ctx->r7 = S32(0X802C << 16);
    // 0x802914C0: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x802914C4: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x802914C8: addiu       $t9, $zero, 0x4B
    ctx->r25 = ADD32(0, 0X4B);
    // 0x802914CC: lh          $t3, 0xE8($v0)
    ctx->r11 = MEM_H(ctx->r2, 0XE8);
    // 0x802914D0: nop

    // 0x802914D4: blez        $t3, L_8029150C
    if (SIGNED(ctx->r11) <= 0) {
        // 0x802914D8: nop
    
            goto L_8029150C;
    }
    // 0x802914D8: nop

    // 0x802914DC: lh          $t4, 0xEA($v0)
    ctx->r12 = MEM_H(ctx->r2, 0XEA);
    // 0x802914E0: nop

    // 0x802914E4: bgez        $t4, L_802914F4
    if (SIGNED(ctx->r12) >= 0) {
        // 0x802914E8: sra         $t5, $t4, 2
        ctx->r13 = S32(SIGNED(ctx->r12) >> 2);
            goto L_802914F4;
    }
    // 0x802914E8: sra         $t5, $t4, 2
    ctx->r13 = S32(SIGNED(ctx->r12) >> 2);
    // 0x802914EC: addiu       $at, $t4, 0x3
    ctx->r1 = ADD32(ctx->r12, 0X3);
    // 0x802914F0: sra         $t5, $at, 2
    ctx->r13 = S32(SIGNED(ctx->r1) >> 2);
L_802914F4:
    // 0x802914F4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802914F8: addiu       $t6, $t5, 0x122
    ctx->r14 = ADD32(ctx->r13, 0X122);
    // 0x802914FC: sh          $t6, 0x39B6($at)
    MEM_H(0X39B6, ctx->r1) = ctx->r14;
    // 0x80291500: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80291504: b           L_802915C4
    // 0x80291508: sb          $zero, 0x39B3($at)
    MEM_B(0X39B3, ctx->r1) = 0;
        goto L_802915C4;
    // 0x80291508: sb          $zero, 0x39B3($at)
    MEM_B(0X39B3, ctx->r1) = 0;
L_8029150C:
    // 0x8029150C: lh          $t7, 0xEA($v0)
    ctx->r15 = MEM_H(ctx->r2, 0XEA);
    // 0x80291510: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80291514: bgez        $t7, L_80291524
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80291518: sra         $t8, $t7, 2
        ctx->r24 = S32(SIGNED(ctx->r15) >> 2);
            goto L_80291524;
    }
    // 0x80291518: sra         $t8, $t7, 2
    ctx->r24 = S32(SIGNED(ctx->r15) >> 2);
    // 0x8029151C: addiu       $at, $t7, 0x3
    ctx->r1 = ADD32(ctx->r15, 0X3);
    // 0x80291520: sra         $t8, $at, 2
    ctx->r24 = S32(SIGNED(ctx->r1) >> 2);
L_80291524:
    // 0x80291524: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80291528: subu        $t1, $t9, $t8
    ctx->r9 = SUB32(ctx->r25, ctx->r24);
    // 0x8029152C: sh          $t1, 0x39B6($at)
    MEM_H(0X39B6, ctx->r1) = ctx->r9;
    // 0x80291530: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80291534: b           L_802915C4
    // 0x80291538: sb          $t2, 0x39B3($at)
    MEM_B(0X39B3, ctx->r1) = ctx->r10;
        goto L_802915C4;
    // 0x80291538: sb          $t2, 0x39B3($at)
    MEM_B(0X39B3, ctx->r1) = ctx->r10;
L_8029153C:
    // 0x8029153C: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x80291540: lw          $t3, 0x3B20($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X3B20);
    // 0x80291544: addiu       $t8, $zero, 0x203
    ctx->r24 = ADD32(0, 0X203);
    // 0x80291548: lh          $v0, 0xE8($t3)
    ctx->r2 = MEM_H(ctx->r11, 0XE8);
    // 0x8029154C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80291550: blez        $v0, L_80291584
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80291554: subu        $t1, $t8, $v0
        ctx->r9 = SUB32(ctx->r24, ctx->r2);
            goto L_80291584;
    }
    // 0x80291554: subu        $t1, $t8, $v0
    ctx->r9 = SUB32(ctx->r24, ctx->r2);
    // 0x80291558: addiu       $t4, $zero, 0x203
    ctx->r12 = ADD32(0, 0X203);
    // 0x8029155C: subu        $t5, $t4, $v0
    ctx->r13 = SUB32(ctx->r12, ctx->r2);
    // 0x80291560: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80291564: div         $zero, $t5, $at
    lo = S32(S64(S32(ctx->r13)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r13)) % S64(S32(ctx->r1)));
    // 0x80291568: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x8029156C: addiu       $t7, $zero, 0x23
    ctx->r15 = ADD32(0, 0X23);
    // 0x80291570: addiu       $a1, $a1, 0x39B6
    ctx->r5 = ADD32(ctx->r5, 0X39B6);
    // 0x80291574: mflo        $t6
    ctx->r14 = lo;
    // 0x80291578: subu        $t9, $t7, $t6
    ctx->r25 = SUB32(ctx->r15, ctx->r14);
    // 0x8029157C: b           L_802915A0
    // 0x80291580: sh          $t9, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r25;
        goto L_802915A0;
    // 0x80291580: sh          $t9, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r25;
L_80291584:
    // 0x80291584: div         $zero, $t1, $at
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r1)));
    // 0x80291588: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x8029158C: addiu       $t3, $zero, 0x23
    ctx->r11 = ADD32(0, 0X23);
    // 0x80291590: addiu       $a1, $a1, 0x39B6
    ctx->r5 = ADD32(ctx->r5, 0X39B6);
    // 0x80291594: mflo        $t2
    ctx->r10 = lo;
    // 0x80291598: subu        $t4, $t3, $t2
    ctx->r12 = SUB32(ctx->r11, ctx->r10);
    // 0x8029159C: sh          $t4, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r12;
L_802915A0:
    // 0x802915A0: lh          $t5, 0x0($a1)
    ctx->r13 = MEM_H(ctx->r5, 0X0);
    // 0x802915A4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802915A8: slti        $at, $t5, 0xB4
    ctx->r1 = SIGNED(ctx->r13) < 0XB4 ? 1 : 0;
    // 0x802915AC: beq         $at, $zero, L_802915BC
    if (ctx->r1 == 0) {
        // 0x802915B0: lui         $at, 0x802C
        ctx->r1 = S32(0X802C << 16);
            goto L_802915BC;
    }
    // 0x802915B0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802915B4: b           L_802915C4
    // 0x802915B8: sb          $t7, 0x39B3($at)
    MEM_B(0X39B3, ctx->r1) = ctx->r15;
        goto L_802915C4;
    // 0x802915B8: sb          $t7, 0x39B3($at)
    MEM_B(0X39B3, ctx->r1) = ctx->r15;
L_802915BC:
    // 0x802915BC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802915C0: sb          $zero, 0x39B3($at)
    MEM_B(0X39B3, ctx->r1) = 0;
L_802915C4:
    // 0x802915C4: lui         $at, 0x4034
    ctx->r1 = S32(0X4034 << 16);
    // 0x802915C8: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x802915CC: addiu       $a3, $a3, 0x3918
    ctx->r7 = ADD32(ctx->r7, 0X3918);
    // 0x802915D0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802915D4: lwc1        $f4, 0x0($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X0);
    // 0x802915D8: lwc1        $f9, 0x590($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X590);
    // 0x802915DC: lwc1        $f8, 0x594($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X594);
    // 0x802915E0: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x802915E4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802915E8: sub.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d - ctx->f8.d;
    // 0x802915EC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802915F0: div.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = DIV_D(ctx->f10.d, ctx->f0.d);
    // 0x802915F4: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x802915F8: addiu       $a0, $a0, 0x3910
    ctx->r4 = ADD32(ctx->r4, 0X3910);
    // 0x802915FC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80291600: lui         $t0, 0x802C
    ctx->r8 = S32(0X802C << 16);
    // 0x80291604: addiu       $t0, $t0, 0x3990
    ctx->r8 = ADD32(ctx->r8, 0X3990);
    // 0x80291608: addiu       $t6, $v1, 0x1
    ctx->r14 = ADD32(ctx->r3, 0X1);
    // 0x8029160C: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x80291610: swc1        $f18, 0x3998($at)
    MEM_W(0X3998, ctx->r1) = ctx->f18.u32l;
    // 0x80291614: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x80291618: lui         $at, 0x4014
    ctx->r1 = S32(0X4014 << 16);
    // 0x8029161C: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80291620: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80291624: sub.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d - ctx->f8.d;
    // 0x80291628: sb          $t6, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r14;
    // 0x8029162C: div.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = DIV_D(ctx->f10.d, ctx->f0.d);
    // 0x80291630: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x80291634: b           L_80292490
    // 0x80291638: swc1        $f18, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f18.u32l;
        goto L_80292490;
    // 0x80291638: swc1        $f18, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f18.u32l;
L_8029163C:
    // 0x8029163C: lui         $t0, 0x802C
    ctx->r8 = S32(0X802C << 16);
    // 0x80291640: addiu       $t0, $t0, 0x3990
    ctx->r8 = ADD32(ctx->r8, 0X3990);
    // 0x80291644: addiu       $a0, $a0, 0x3910
    ctx->r4 = ADD32(ctx->r4, 0X3910);
    // 0x80291648: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8029164C: lwc1        $f6, 0x0($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X0);
    // 0x80291650: lui         $at, 0x4014
    ctx->r1 = S32(0X4014 << 16);
    // 0x80291654: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80291658: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x8029165C: swc1        $f8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f8.u32l;
    // 0x80291660: lwc1        $f16, 0x0($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X0);
    // 0x80291664: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80291668: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x8029166C: c.le.d      $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f18.d <= ctx->f10.d;
    // 0x80291670: lui         $a3, 0x802C
    ctx->r7 = S32(0X802C << 16);
    // 0x80291674: bc1f        L_8029168C
    if (!c1cs) {
        // 0x80291678: addiu       $a3, $a3, 0x3918
        ctx->r7 = ADD32(ctx->r7, 0X3918);
            goto L_8029168C;
    }
    // 0x80291678: addiu       $a3, $a3, 0x3918
    ctx->r7 = ADD32(ctx->r7, 0X3918);
    // 0x8029167C: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x80291680: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80291684: nop

    // 0x80291688: swc1        $f14, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f14.u32l;
L_8029168C:
    // 0x8029168C: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x80291690: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80291694: lwc1        $f0, 0x0($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X0);
    // 0x80291698: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x8029169C: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x802916A0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x802916A4: bc1f        L_802916C0
    if (!c1cs) {
        // 0x802916A8: lui         $t9, 0x802C
        ctx->r25 = S32(0X802C << 16);
            goto L_802916C0;
    }
    // 0x802916A8: lui         $t9, 0x802C
    ctx->r25 = S32(0X802C << 16);
    // 0x802916AC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802916B0: lwc1        $f4, 0x3998($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X3998);
    // 0x802916B4: nop

    // 0x802916B8: sub.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x802916BC: swc1        $f6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f6.u32l;
L_802916C0:
    // 0x802916C0: lbu         $t9, 0x39B3($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X39B3);
    // 0x802916C4: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802916C8: bne         $t9, $zero, L_80291760
    if (ctx->r25 != 0) {
        // 0x802916CC: addiu       $v0, $v0, 0x3924
        ctx->r2 = ADD32(ctx->r2, 0X3924);
            goto L_80291760;
    }
    // 0x802916CC: addiu       $v0, $v0, 0x3924
    ctx->r2 = ADD32(ctx->r2, 0X3924);
    // 0x802916D0: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802916D4: addiu       $v0, $v0, 0x3924
    ctx->r2 = ADD32(ctx->r2, 0X3924);
    // 0x802916D8: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x802916DC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802916E0: sub.s       $f16, $f8, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f14.fl;
    // 0x802916E4: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802916E8: swc1        $f16, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f16.u32l;
    // 0x802916EC: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x802916F0: addiu       $a1, $a1, 0x39B6
    ctx->r5 = ADD32(ctx->r5, 0X39B6);
    // 0x802916F4: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x802916F8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802916FC: bc1f        L_80291724
    if (!c1cs) {
        // 0x80291700: addiu       $t1, $v1, 0x1
        ctx->r9 = ADD32(ctx->r3, 0X1);
            goto L_80291724;
    }
    // 0x80291700: addiu       $t1, $v1, 0x1
    ctx->r9 = ADD32(ctx->r3, 0X1);
    // 0x80291704: lwc1        $f5, 0x598($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X598);
    // 0x80291708: lwc1        $f4, 0x59C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X59C);
    // 0x8029170C: cvt.d.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.d = CVT_D_S(ctx->f0.fl);
    // 0x80291710: add.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d + ctx->f4.d;
    // 0x80291714: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x80291718: swc1        $f8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f8.u32l;
    // 0x8029171C: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80291720: nop

L_80291724:
    // 0x80291724: lh          $t8, 0x0($a1)
    ctx->r24 = MEM_H(ctx->r5, 0X0);
    // 0x80291728: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x8029172C: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x80291730: addiu       $a1, $a1, 0x3ACC
    ctx->r5 = ADD32(ctx->r5, 0X3ACC);
    // 0x80291734: cvt.s.w     $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80291738: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x8029173C: nop

    // 0x80291740: bc1f        L_80292494
    if (!c1cs) {
        // 0x80291744: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80292494;
    }
    // 0x80291744: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80291748: swc1        $f2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f2.u32l;
    // 0x8029174C: swc1        $f14, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f14.u32l;
    // 0x80291750: swc1        $f12, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f12.u32l;
    // 0x80291754: sb          $t1, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r9;
    // 0x80291758: b           L_80292490
    // 0x8029175C: sb          $zero, 0x0($a1)
    MEM_B(0X0, ctx->r5) = 0;
        goto L_80292490;
    // 0x8029175C: sb          $zero, 0x0($a1)
    MEM_B(0X0, ctx->r5) = 0;
L_80291760:
    // 0x80291760: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x80291764: addiu       $a1, $a1, 0x39B6
    ctx->r5 = ADD32(ctx->r5, 0X39B6);
    // 0x80291768: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8029176C: lh          $t3, 0x0($a1)
    ctx->r11 = MEM_H(ctx->r5, 0X0);
    // 0x80291770: add.s       $f18, $f10, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f14.fl;
    // 0x80291774: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x80291778: swc1        $f18, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f18.u32l;
    // 0x8029177C: cvt.s.w     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80291780: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80291784: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x80291788: c.lt.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl < ctx->f6.fl;
    // 0x8029178C: addiu       $a1, $a1, 0x3ACC
    ctx->r5 = ADD32(ctx->r5, 0X3ACC);
    // 0x80291790: bc1f        L_80292490
    if (!c1cs) {
        // 0x80291794: addiu       $t2, $v1, 0x1
        ctx->r10 = ADD32(ctx->r3, 0X1);
            goto L_80292490;
    }
    // 0x80291794: addiu       $t2, $v1, 0x1
    ctx->r10 = ADD32(ctx->r3, 0X1);
    // 0x80291798: swc1        $f2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f2.u32l;
    // 0x8029179C: swc1        $f14, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f14.u32l;
    // 0x802917A0: swc1        $f12, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f12.u32l;
    // 0x802917A4: sb          $t2, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r10;
    // 0x802917A8: b           L_80292490
    // 0x802917AC: sb          $zero, 0x0($a1)
    MEM_B(0X0, ctx->r5) = 0;
        goto L_80292490;
    // 0x802917AC: sb          $zero, 0x0($a1)
    MEM_B(0X0, ctx->r5) = 0;
L_802917B0:
    // 0x802917B0: lw          $t4, 0xB2C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0XB2C);
    // 0x802917B4: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x802917B8: lhu         $t5, 0xE($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0XE);
    // 0x802917BC: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802917C0: bne         $t5, $at, L_802917E0
    if (ctx->r13 != ctx->r1) {
        // 0x802917C4: addiu       $a1, $a1, 0x3ACC
        ctx->r5 = ADD32(ctx->r5, 0X3ACC);
            goto L_802917E0;
    }
    // 0x802917C4: addiu       $a1, $a1, 0x3ACC
    ctx->r5 = ADD32(ctx->r5, 0X3ACC);
    // 0x802917C8: lbu         $t7, 0x0($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X0);
    // 0x802917CC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802917D0: bne         $t7, $zero, L_802917E4
    if (ctx->r15 != 0) {
        // 0x802917D4: addiu       $t9, $zero, 0x1
        ctx->r25 = ADD32(0, 0X1);
            goto L_802917E4;
    }
    // 0x802917D4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802917D8: jal         0x802924A0
    // 0x802917DC: sb          $t6, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r14;
    func_802924A0(rdram, ctx);
        goto after_0;
    // 0x802917DC: sb          $t6, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r14;
    after_0:
L_802917E0:
    // 0x802917E0: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
L_802917E4:
    // 0x802917E4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802917E8: jal         0x802906E8
    // 0x802917EC: sb          $t9, 0x3A24($at)
    MEM_B(0X3A24, ctx->r1) = ctx->r25;
    func_802906E8(rdram, ctx);
        goto after_1;
    // 0x802917EC: sb          $t9, 0x3A24($at)
    MEM_B(0X3A24, ctx->r1) = ctx->r25;
    after_1:
    // 0x802917F0: lui         $t8, 0x802C
    ctx->r24 = S32(0X802C << 16);
    // 0x802917F4: lbu         $t8, 0x399C($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X399C);
    // 0x802917F8: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x802917FC: slti        $at, $t8, 0x8
    ctx->r1 = SIGNED(ctx->r24) < 0X8 ? 1 : 0;
    // 0x80291800: bne         $at, $zero, L_80292494
    if (ctx->r1 != 0) {
        // 0x80291804: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80292494;
    }
    // 0x80291804: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80291808: lw          $t1, 0x3B20($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X3B20);
    // 0x8029180C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80291810: lh          $t3, 0xEA($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XEA);
    // 0x80291814: nop

    // 0x80291818: addiu       $t2, $t3, -0x28
    ctx->r10 = ADD32(ctx->r11, -0X28);
    // 0x8029181C: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x80291820: nop

    // 0x80291824: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80291828: b           L_80292490
    // 0x8029182C: swc1        $f16, 0x397C($at)
    MEM_W(0X397C, ctx->r1) = ctx->f16.u32l;
        goto L_80292490;
    // 0x8029182C: swc1        $f16, 0x397C($at)
    MEM_W(0X397C, ctx->r1) = ctx->f16.u32l;
L_80291830:
    // 0x80291830: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x80291834: addiu       $a2, $a2, 0x3988
    ctx->r6 = ADD32(ctx->r6, 0X3988);
    // 0x80291838: lbu         $v1, 0x0($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X0);
    // 0x8029183C: addiu       $t4, $zero, 0x50
    ctx->r12 = ADD32(0, 0X50);
    // 0x80291840: beq         $v1, $zero, L_80291870
    if (ctx->r3 == 0) {
        // 0x80291844: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_80291870;
    }
    // 0x80291844: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80291848: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8029184C: beq         $v0, $at, L_80291908
    if (ctx->r2 == ctx->r1) {
        // 0x80291850: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80291908;
    }
    // 0x80291850: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80291854: beq         $v0, $at, L_802919C8
    if (ctx->r2 == ctx->r1) {
        // 0x80291858: lui         $t9, 0x802C
        ctx->r25 = S32(0X802C << 16);
            goto L_802919C8;
    }
    // 0x80291858: lui         $t9, 0x802C
    ctx->r25 = S32(0X802C << 16);
    // 0x8029185C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80291860: beq         $v0, $at, L_80291ADC
    if (ctx->r2 == ctx->r1) {
        // 0x80291864: addiu       $t2, $zero, 0x1
        ctx->r10 = ADD32(0, 0X1);
            goto L_80291ADC;
    }
    // 0x80291864: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80291868: b           L_80292494
    // 0x8029186C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80292494;
    // 0x8029186C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80291870:
    // 0x80291870: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80291874: addiu       $v0, $v0, 0x3989
    ctx->r2 = ADD32(ctx->r2, 0X3989);
    // 0x80291878: addiu       $t5, $v1, 0x1
    ctx->r13 = ADD32(ctx->r3, 0X1);
    // 0x8029187C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80291880: sb          $t4, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r12;
    // 0x80291884: bne         $a1, $at, L_802918C8
    if (ctx->r5 != ctx->r1) {
        // 0x80291888: sb          $t5, 0x0($a2)
        MEM_B(0X0, ctx->r6) = ctx->r13;
            goto L_802918C8;
    }
    // 0x80291888: sb          $t5, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r13;
    // 0x8029188C: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x80291890: lw          $t7, 0x3B20($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3B20);
    // 0x80291894: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80291898: sb          $zero, 0x39B3($at)
    MEM_B(0X39B3, ctx->r1) = 0;
    // 0x8029189C: lh          $t6, 0xE8($t7)
    ctx->r14 = MEM_H(ctx->r15, 0XE8);
    // 0x802918A0: addiu       $t9, $zero, 0x203
    ctx->r25 = ADD32(0, 0X203);
    // 0x802918A4: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x802918A8: subu        $t8, $t9, $t6
    ctx->r24 = SUB32(ctx->r25, ctx->r14);
    // 0x802918AC: div         $zero, $t8, $at
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r1)));
    // 0x802918B0: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802918B4: addiu       $a1, $a1, 0x39B6
    ctx->r5 = ADD32(ctx->r5, 0X39B6);
    // 0x802918B8: mflo        $t1
    ctx->r9 = lo;
    // 0x802918BC: addiu       $t3, $t1, 0x19
    ctx->r11 = ADD32(ctx->r9, 0X19);
    // 0x802918C0: b           L_80292490
    // 0x802918C4: sh          $t3, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r11;
        goto L_80292490;
    // 0x802918C4: sh          $t3, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r11;
L_802918C8:
    // 0x802918C8: lui         $t4, 0x8009
    ctx->r12 = S32(0X8009 << 16);
    // 0x802918CC: lw          $t4, 0x3B20($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X3B20);
    // 0x802918D0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x802918D4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802918D8: sb          $t2, 0x39B3($at)
    MEM_B(0X39B3, ctx->r1) = ctx->r10;
    // 0x802918DC: lh          $t5, 0xE8($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XE8);
    // 0x802918E0: addiu       $t7, $zero, -0x203
    ctx->r15 = ADD32(0, -0X203);
    // 0x802918E4: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x802918E8: subu        $t9, $t7, $t5
    ctx->r25 = SUB32(ctx->r15, ctx->r13);
    // 0x802918EC: div         $zero, $t9, $at
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r1)));
    // 0x802918F0: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802918F4: addiu       $a1, $a1, 0x39B6
    ctx->r5 = ADD32(ctx->r5, 0X39B6);
    // 0x802918F8: mflo        $t6
    ctx->r14 = lo;
    // 0x802918FC: addiu       $t8, $t6, 0x14F
    ctx->r24 = ADD32(ctx->r14, 0X14F);
    // 0x80291900: b           L_80292490
    // 0x80291904: sh          $t8, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r24;
        goto L_80292490;
    // 0x80291904: sh          $t8, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r24;
L_80291908:
    // 0x80291908: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8029190C: addiu       $v0, $v0, 0x3989
    ctx->r2 = ADD32(ctx->r2, 0X3989);
    // 0x80291910: lbu         $t1, 0x0($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X0);
    // 0x80291914: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x80291918: addiu       $t3, $t1, -0x1
    ctx->r11 = ADD32(ctx->r9, -0X1);
    // 0x8029191C: andi        $t2, $t3, 0xFF
    ctx->r10 = ctx->r11 & 0XFF;
    // 0x80291920: bne         $t2, $zero, L_80292490
    if (ctx->r10 != 0) {
        // 0x80291924: sb          $t3, 0x0($v0)
        MEM_B(0X0, ctx->r2) = ctx->r11;
            goto L_80292490;
    }
    // 0x80291924: sb          $t3, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r11;
    // 0x80291928: addiu       $t4, $zero, 0xA
    ctx->r12 = ADD32(0, 0XA);
    // 0x8029192C: andi        $t5, $t4, 0xFF
    ctx->r13 = ctx->r12 & 0XFF;
    // 0x80291930: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x80291934: lui         $a3, 0x802C
    ctx->r7 = S32(0X802C << 16);
    // 0x80291938: lui         $t0, 0x802C
    ctx->r8 = S32(0X802C << 16);
    // 0x8029193C: addiu       $t7, $v1, 0x1
    ctx->r15 = ADD32(ctx->r3, 0X1);
    // 0x80291940: addiu       $t0, $t0, 0x3990
    ctx->r8 = ADD32(ctx->r8, 0X3990);
    // 0x80291944: addiu       $a3, $a3, 0x3918
    ctx->r7 = ADD32(ctx->r7, 0X3918);
    // 0x80291948: addiu       $a0, $a0, 0x3910
    ctx->r4 = ADD32(ctx->r4, 0X3910);
    // 0x8029194C: sb          $t4, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r12;
    // 0x80291950: sb          $t7, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r15;
    // 0x80291954: bgez        $t5, L_80291970
    if (SIGNED(ctx->r13) >= 0) {
        // 0x80291958: cvt.d.w     $f0, $f10
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.d = CVT_D_W(ctx->f10.u32l);
            goto L_80291970;
    }
    // 0x80291958: cvt.d.w     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.d = CVT_D_W(ctx->f10.u32l);
    // 0x8029195C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80291960: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x80291964: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80291968: nop

    // 0x8029196C: add.d       $f0, $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f18.d); 
    ctx->f0.d = ctx->f0.d + ctx->f18.d;
L_80291970:
    // 0x80291970: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x80291974: lui         $at, 0x4014
    ctx->r1 = S32(0X4014 << 16);
    // 0x80291978: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x8029197C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80291980: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80291984: sub.d       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f16.d = ctx->f6.d - ctx->f8.d;
    // 0x80291988: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8029198C: div.d       $f10, $f16, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f0.d); 
    ctx->f10.d = DIV_D(ctx->f16.d, ctx->f0.d);
    // 0x80291990: lwc1        $f4, 0x0($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X0);
    // 0x80291994: nop

    // 0x80291998: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8029199C: cvt.s.d     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f18.fl = CVT_S_D(ctx->f10.d);
    // 0x802919A0: swc1        $f18, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f18.u32l;
    // 0x802919A4: lwc1        $f8, 0x5A4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X5A4);
    // 0x802919A8: lwc1        $f9, 0x5A0($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X5A0);
    // 0x802919AC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802919B0: sub.d       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f16.d = ctx->f6.d - ctx->f8.d;
    // 0x802919B4: nop

    // 0x802919B8: div.d       $f10, $f16, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f0.d); 
    ctx->f10.d = DIV_D(ctx->f16.d, ctx->f0.d);
    // 0x802919BC: cvt.s.d     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f18.fl = CVT_S_D(ctx->f10.d);
    // 0x802919C0: b           L_80292490
    // 0x802919C4: swc1        $f18, 0x3998($at)
    MEM_W(0X3998, ctx->r1) = ctx->f18.u32l;
        goto L_80292490;
    // 0x802919C4: swc1        $f18, 0x3998($at)
    MEM_W(0X3998, ctx->r1) = ctx->f18.u32l;
L_802919C8:
    // 0x802919C8: lbu         $t9, 0x39B3($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X39B3);
    // 0x802919CC: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802919D0: bne         $t9, $zero, L_80291A44
    if (ctx->r25 != 0) {
        // 0x802919D4: addiu       $v0, $v0, 0x3924
        ctx->r2 = ADD32(ctx->r2, 0X3924);
            goto L_80291A44;
    }
    // 0x802919D4: addiu       $v0, $v0, 0x3924
    ctx->r2 = ADD32(ctx->r2, 0X3924);
    // 0x802919D8: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802919DC: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802919E0: addiu       $a1, $a1, 0x39B6
    ctx->r5 = ADD32(ctx->r5, 0X39B6);
    // 0x802919E4: addiu       $v0, $v0, 0x3924
    ctx->r2 = ADD32(ctx->r2, 0X3924);
    // 0x802919E8: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x802919EC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x802919F0: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x802919F4: lh          $t6, 0x0($a1)
    ctx->r14 = MEM_H(ctx->r5, 0X0);
    // 0x802919F8: add.s       $f6, $f4, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f14.fl;
    // 0x802919FC: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x80291A00: swc1        $f6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f6.u32l;
    // 0x80291A04: cvt.s.w     $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    ctx->f2.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80291A08: lwc1        $f16, 0x0($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80291A0C: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x80291A10: c.lt.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl < ctx->f16.fl;
    // 0x80291A14: addiu       $a0, $a0, 0x3910
    ctx->r4 = ADD32(ctx->r4, 0X3910);
    // 0x80291A18: bc1f        L_80292490
    if (!c1cs) {
        // 0x80291A1C: lui         $a3, 0x802C
        ctx->r7 = S32(0X802C << 16);
            goto L_80292490;
    }
    // 0x80291A1C: lui         $a3, 0x802C
    ctx->r7 = S32(0X802C << 16);
    // 0x80291A20: lui         $at, 0x442F
    ctx->r1 = S32(0X442F << 16);
    // 0x80291A24: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80291A28: addiu       $a3, $a3, 0x3918
    ctx->r7 = ADD32(ctx->r7, 0X3918);
    // 0x80291A2C: addiu       $t8, $v1, 0x1
    ctx->r24 = ADD32(ctx->r3, 0X1);
    // 0x80291A30: swc1        $f2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f2.u32l;
    // 0x80291A34: swc1        $f14, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f14.u32l;
    // 0x80291A38: sb          $t8, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r24;
    // 0x80291A3C: b           L_80292490
    // 0x80291A40: swc1        $f10, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f10.u32l;
        goto L_80292490;
    // 0x80291A40: swc1        $f10, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f10.u32l;
L_80291A44:
    // 0x80291A44: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x80291A48: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80291A4C: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80291A50: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80291A54: sub.s       $f4, $f18, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f14.fl;
    // 0x80291A58: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x80291A5C: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
    // 0x80291A60: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80291A64: addiu       $a1, $a1, 0x39B6
    ctx->r5 = ADD32(ctx->r5, 0X39B6);
    // 0x80291A68: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x80291A6C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80291A70: bc1f        L_80291A98
    if (!c1cs) {
        // 0x80291A74: lui         $a0, 0x802C
        ctx->r4 = S32(0X802C << 16);
            goto L_80291A98;
    }
    // 0x80291A74: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x80291A78: lwc1        $f17, 0x5A8($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X5A8);
    // 0x80291A7C: lwc1        $f16, 0x5AC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X5AC);
    // 0x80291A80: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x80291A84: add.d       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f16.d); 
    ctx->f10.d = ctx->f8.d + ctx->f16.d;
    // 0x80291A88: cvt.s.d     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f18.fl = CVT_S_D(ctx->f10.d);
    // 0x80291A8C: swc1        $f18, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f18.u32l;
    // 0x80291A90: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80291A94: nop

L_80291A98:
    // 0x80291A98: lh          $t1, 0x0($a1)
    ctx->r9 = MEM_H(ctx->r5, 0X0);
    // 0x80291A9C: lui         $a3, 0x802C
    ctx->r7 = S32(0X802C << 16);
    // 0x80291AA0: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x80291AA4: addiu       $a3, $a3, 0x3918
    ctx->r7 = ADD32(ctx->r7, 0X3918);
    // 0x80291AA8: cvt.s.w     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80291AAC: addiu       $a0, $a0, 0x3910
    ctx->r4 = ADD32(ctx->r4, 0X3910);
    // 0x80291AB0: lui         $at, 0x442F
    ctx->r1 = S32(0X442F << 16);
    // 0x80291AB4: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x80291AB8: addiu       $t3, $v1, 0x1
    ctx->r11 = ADD32(ctx->r3, 0X1);
    // 0x80291ABC: bc1f        L_80292494
    if (!c1cs) {
        // 0x80291AC0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80292494;
    }
    // 0x80291AC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80291AC4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80291AC8: swc1        $f2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f2.u32l;
    // 0x80291ACC: swc1        $f14, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f14.u32l;
    // 0x80291AD0: sb          $t3, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r11;
    // 0x80291AD4: b           L_80292490
    // 0x80291AD8: swc1        $f6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f6.u32l;
        goto L_80292490;
    // 0x80291AD8: swc1        $f6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f6.u32l;
L_80291ADC:
    // 0x80291ADC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80291AE0: jal         0x802906E8
    // 0x80291AE4: sb          $t2, 0x3A24($at)
    MEM_B(0X3A24, ctx->r1) = ctx->r10;
    func_802906E8(rdram, ctx);
        goto after_2;
    // 0x80291AE4: sb          $t2, 0x3A24($at)
    MEM_B(0X3A24, ctx->r1) = ctx->r10;
    after_2:
    // 0x80291AE8: b           L_80292494
    // 0x80291AEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80292494;
    // 0x80291AEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80291AF0:
    // 0x80291AF0: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x80291AF4: addiu       $a2, $a2, 0x3988
    ctx->r6 = ADD32(ctx->r6, 0X3988);
    // 0x80291AF8: lbu         $v1, 0x0($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X0);
    // 0x80291AFC: addiu       $t4, $zero, 0x50
    ctx->r12 = ADD32(0, 0X50);
    // 0x80291B00: beq         $v1, $zero, L_80291B30
    if (ctx->r3 == 0) {
        // 0x80291B04: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_80291B30;
    }
    // 0x80291B04: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80291B08: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80291B0C: beq         $v0, $at, L_80291BC8
    if (ctx->r2 == ctx->r1) {
        // 0x80291B10: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80291BC8;
    }
    // 0x80291B10: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80291B14: beq         $v0, $at, L_80291C88
    if (ctx->r2 == ctx->r1) {
        // 0x80291B18: lui         $t6, 0x802C
        ctx->r14 = S32(0X802C << 16);
            goto L_80291C88;
    }
    // 0x80291B18: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x80291B1C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80291B20: beq         $v0, $at, L_80291D8C
    if (ctx->r2 == ctx->r1) {
        // 0x80291B24: addiu       $t3, $zero, 0x1
        ctx->r11 = ADD32(0, 0X1);
            goto L_80291D8C;
    }
    // 0x80291B24: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80291B28: b           L_80292494
    // 0x80291B2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80292494;
    // 0x80291B2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80291B30:
    // 0x80291B30: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80291B34: addiu       $v0, $v0, 0x3989
    ctx->r2 = ADD32(ctx->r2, 0X3989);
    // 0x80291B38: addiu       $t7, $v1, 0x1
    ctx->r15 = ADD32(ctx->r3, 0X1);
    // 0x80291B3C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80291B40: sb          $t4, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r12;
    // 0x80291B44: bne         $a1, $at, L_80291B88
    if (ctx->r5 != ctx->r1) {
        // 0x80291B48: sb          $t7, 0x0($a2)
        MEM_B(0X0, ctx->r6) = ctx->r15;
            goto L_80291B88;
    }
    // 0x80291B48: sb          $t7, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r15;
    // 0x80291B4C: lui         $t5, 0x8009
    ctx->r13 = S32(0X8009 << 16);
    // 0x80291B50: lw          $t5, 0x3B20($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X3B20);
    // 0x80291B54: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80291B58: sb          $zero, 0x39B3($at)
    MEM_B(0X39B3, ctx->r1) = 0;
    // 0x80291B5C: lh          $t9, 0xE8($t5)
    ctx->r25 = MEM_H(ctx->r13, 0XE8);
    // 0x80291B60: addiu       $t6, $zero, 0x17C
    ctx->r14 = ADD32(0, 0X17C);
    // 0x80291B64: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x80291B68: subu        $t8, $t6, $t9
    ctx->r24 = SUB32(ctx->r14, ctx->r25);
    // 0x80291B6C: div         $zero, $t8, $at
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r1)));
    // 0x80291B70: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x80291B74: addiu       $a1, $a1, 0x39B6
    ctx->r5 = ADD32(ctx->r5, 0X39B6);
    // 0x80291B78: mflo        $t1
    ctx->r9 = lo;
    // 0x80291B7C: addiu       $t3, $t1, 0x2D
    ctx->r11 = ADD32(ctx->r9, 0X2D);
    // 0x80291B80: b           L_80292490
    // 0x80291B84: sh          $t3, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r11;
        goto L_80292490;
    // 0x80291B84: sh          $t3, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r11;
L_80291B88:
    // 0x80291B88: lui         $t4, 0x8009
    ctx->r12 = S32(0X8009 << 16);
    // 0x80291B8C: lw          $t4, 0x3B20($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X3B20);
    // 0x80291B90: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80291B94: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80291B98: sb          $t2, 0x39B3($at)
    MEM_B(0X39B3, ctx->r1) = ctx->r10;
    // 0x80291B9C: lh          $t7, 0xE8($t4)
    ctx->r15 = MEM_H(ctx->r12, 0XE8);
    // 0x80291BA0: addiu       $t5, $zero, -0x17C
    ctx->r13 = ADD32(0, -0X17C);
    // 0x80291BA4: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x80291BA8: subu        $t6, $t5, $t7
    ctx->r14 = SUB32(ctx->r13, ctx->r15);
    // 0x80291BAC: div         $zero, $t6, $at
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r1)));
    // 0x80291BB0: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x80291BB4: addiu       $a1, $a1, 0x39B6
    ctx->r5 = ADD32(ctx->r5, 0X39B6);
    // 0x80291BB8: mflo        $t9
    ctx->r25 = lo;
    // 0x80291BBC: addiu       $t8, $t9, 0x13B
    ctx->r24 = ADD32(ctx->r25, 0X13B);
    // 0x80291BC0: b           L_80292490
    // 0x80291BC4: sh          $t8, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r24;
        goto L_80292490;
    // 0x80291BC4: sh          $t8, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r24;
L_80291BC8:
    // 0x80291BC8: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80291BCC: addiu       $v0, $v0, 0x3989
    ctx->r2 = ADD32(ctx->r2, 0X3989);
    // 0x80291BD0: lbu         $t1, 0x0($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X0);
    // 0x80291BD4: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x80291BD8: addiu       $t3, $t1, -0x1
    ctx->r11 = ADD32(ctx->r9, -0X1);
    // 0x80291BDC: andi        $t2, $t3, 0xFF
    ctx->r10 = ctx->r11 & 0XFF;
    // 0x80291BE0: bne         $t2, $zero, L_80292490
    if (ctx->r10 != 0) {
        // 0x80291BE4: sb          $t3, 0x0($v0)
        MEM_B(0X0, ctx->r2) = ctx->r11;
            goto L_80292490;
    }
    // 0x80291BE4: sb          $t3, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r11;
    // 0x80291BE8: addiu       $t4, $zero, 0xA
    ctx->r12 = ADD32(0, 0XA);
    // 0x80291BEC: andi        $t7, $t4, 0xFF
    ctx->r15 = ctx->r12 & 0XFF;
    // 0x80291BF0: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x80291BF4: lui         $a3, 0x802C
    ctx->r7 = S32(0X802C << 16);
    // 0x80291BF8: lui         $t0, 0x802C
    ctx->r8 = S32(0X802C << 16);
    // 0x80291BFC: addiu       $t5, $v1, 0x1
    ctx->r13 = ADD32(ctx->r3, 0X1);
    // 0x80291C00: addiu       $t0, $t0, 0x3990
    ctx->r8 = ADD32(ctx->r8, 0X3990);
    // 0x80291C04: addiu       $a3, $a3, 0x3918
    ctx->r7 = ADD32(ctx->r7, 0X3918);
    // 0x80291C08: addiu       $a0, $a0, 0x3910
    ctx->r4 = ADD32(ctx->r4, 0X3910);
    // 0x80291C0C: sb          $t4, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r12;
    // 0x80291C10: sb          $t5, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r13;
    // 0x80291C14: bgez        $t7, L_80291C30
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80291C18: cvt.d.w     $f0, $f8
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    ctx->f0.d = CVT_D_W(ctx->f8.u32l);
            goto L_80291C30;
    }
    // 0x80291C18: cvt.d.w     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    ctx->f0.d = CVT_D_W(ctx->f8.u32l);
    // 0x80291C1C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80291C20: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x80291C24: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80291C28: nop

    // 0x80291C2C: add.d       $f0, $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f16.d); 
    ctx->f0.d = ctx->f0.d + ctx->f16.d;
L_80291C30:
    // 0x80291C30: lwc1        $f10, 0x0($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X0);
    // 0x80291C34: lui         $at, 0x4014
    ctx->r1 = S32(0X4014 << 16);
    // 0x80291C38: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x80291C3C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80291C40: cvt.d.s     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f18.d = CVT_D_S(ctx->f10.fl);
    // 0x80291C44: sub.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d - ctx->f4.d;
    // 0x80291C48: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80291C4C: div.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = DIV_D(ctx->f6.d, ctx->f0.d);
    // 0x80291C50: lwc1        $f10, 0x0($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X0);
    // 0x80291C54: nop

    // 0x80291C58: cvt.d.s     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f18.d = CVT_D_S(ctx->f10.fl);
    // 0x80291C5C: cvt.s.d     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f16.fl = CVT_S_D(ctx->f8.d);
    // 0x80291C60: swc1        $f16, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f16.u32l;
    // 0x80291C64: lwc1        $f4, 0x5B4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5B4);
    // 0x80291C68: lwc1        $f5, 0x5B0($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X5B0);
    // 0x80291C6C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80291C70: sub.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d - ctx->f4.d;
    // 0x80291C74: nop

    // 0x80291C78: div.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = DIV_D(ctx->f6.d, ctx->f0.d);
    // 0x80291C7C: cvt.s.d     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f16.fl = CVT_S_D(ctx->f8.d);
    // 0x80291C80: b           L_80292490
    // 0x80291C84: swc1        $f16, 0x3998($at)
    MEM_W(0X3998, ctx->r1) = ctx->f16.u32l;
        goto L_80292490;
    // 0x80291C84: swc1        $f16, 0x3998($at)
    MEM_W(0X3998, ctx->r1) = ctx->f16.u32l;
L_80291C88:
    // 0x80291C88: lbu         $t6, 0x39B3($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X39B3);
    // 0x80291C8C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80291C90: bne         $t6, $zero, L_80291D04
    if (ctx->r14 != 0) {
        // 0x80291C94: addiu       $v0, $v0, 0x3924
        ctx->r2 = ADD32(ctx->r2, 0X3924);
            goto L_80291D04;
    }
    // 0x80291C94: addiu       $v0, $v0, 0x3924
    ctx->r2 = ADD32(ctx->r2, 0X3924);
    // 0x80291C98: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80291C9C: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x80291CA0: addiu       $a1, $a1, 0x39B6
    ctx->r5 = ADD32(ctx->r5, 0X39B6);
    // 0x80291CA4: addiu       $v0, $v0, 0x3924
    ctx->r2 = ADD32(ctx->r2, 0X3924);
    // 0x80291CA8: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x80291CAC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80291CB0: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80291CB4: lh          $t9, 0x0($a1)
    ctx->r25 = MEM_H(ctx->r5, 0X0);
    // 0x80291CB8: add.s       $f18, $f10, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f14.fl;
    // 0x80291CBC: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x80291CC0: swc1        $f18, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f18.u32l;
    // 0x80291CC4: cvt.s.w     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80291CC8: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80291CCC: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x80291CD0: c.lt.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl < ctx->f6.fl;
    // 0x80291CD4: addiu       $a0, $a0, 0x3910
    ctx->r4 = ADD32(ctx->r4, 0X3910);
    // 0x80291CD8: bc1f        L_80292490
    if (!c1cs) {
        // 0x80291CDC: lui         $a3, 0x802C
        ctx->r7 = S32(0X802C << 16);
            goto L_80292490;
    }
    // 0x80291CDC: lui         $a3, 0x802C
    ctx->r7 = S32(0X802C << 16);
    // 0x80291CE0: lui         $at, 0x442F
    ctx->r1 = S32(0X442F << 16);
    // 0x80291CE4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80291CE8: addiu       $a3, $a3, 0x3918
    ctx->r7 = ADD32(ctx->r7, 0X3918);
    // 0x80291CEC: addiu       $t8, $v1, 0x1
    ctx->r24 = ADD32(ctx->r3, 0X1);
    // 0x80291CF0: swc1        $f2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f2.u32l;
    // 0x80291CF4: swc1        $f14, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f14.u32l;
    // 0x80291CF8: sb          $t8, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r24;
    // 0x80291CFC: b           L_80292490
    // 0x80291D00: swc1        $f8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f8.u32l;
        goto L_80292490;
    // 0x80291D00: swc1        $f8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f8.u32l;
L_80291D04:
    // 0x80291D04: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x80291D08: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80291D0C: lwc1        $f16, 0x0($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80291D10: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80291D14: sub.s       $f10, $f16, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f16.fl - ctx->f14.fl;
    // 0x80291D18: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x80291D1C: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
    // 0x80291D20: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80291D24: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80291D28: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x80291D2C: addiu       $a0, $a0, 0x3910
    ctx->r4 = ADD32(ctx->r4, 0X3910);
    // 0x80291D30: bc1f        L_80291D58
    if (!c1cs) {
        // 0x80291D34: lui         $a3, 0x802C
        ctx->r7 = S32(0X802C << 16);
            goto L_80291D58;
    }
    // 0x80291D34: lui         $a3, 0x802C
    ctx->r7 = S32(0X802C << 16);
    // 0x80291D38: lwc1        $f7, 0x5B8($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X5B8);
    // 0x80291D3C: lwc1        $f6, 0x5BC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X5BC);
    // 0x80291D40: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x80291D44: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x80291D48: cvt.s.d     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f16.fl = CVT_S_D(ctx->f8.d);
    // 0x80291D4C: swc1        $f16, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f16.u32l;
    // 0x80291D50: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80291D54: nop

L_80291D58:
    // 0x80291D58: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80291D5C: lwc1        $f2, 0x5C0($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X5C0);
    // 0x80291D60: addiu       $a3, $a3, 0x3918
    ctx->r7 = ADD32(ctx->r7, 0X3918);
    // 0x80291D64: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x80291D68: lui         $at, 0x442F
    ctx->r1 = S32(0X442F << 16);
    // 0x80291D6C: bc1f        L_80292490
    if (!c1cs) {
        // 0x80291D70: addiu       $t1, $v1, 0x1
        ctx->r9 = ADD32(ctx->r3, 0X1);
            goto L_80292490;
    }
    // 0x80291D70: addiu       $t1, $v1, 0x1
    ctx->r9 = ADD32(ctx->r3, 0X1);
    // 0x80291D74: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80291D78: swc1        $f2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f2.u32l;
    // 0x80291D7C: swc1        $f14, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f14.u32l;
    // 0x80291D80: sb          $t1, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r9;
    // 0x80291D84: b           L_80292490
    // 0x80291D88: swc1        $f10, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f10.u32l;
        goto L_80292490;
    // 0x80291D88: swc1        $f10, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f10.u32l;
L_80291D8C:
    // 0x80291D8C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80291D90: jal         0x802906E8
    // 0x80291D94: sb          $t3, 0x3A24($at)
    MEM_B(0X3A24, ctx->r1) = ctx->r11;
    func_802906E8(rdram, ctx);
        goto after_3;
    // 0x80291D94: sb          $t3, 0x3A24($at)
    MEM_B(0X3A24, ctx->r1) = ctx->r11;
    after_3:
    // 0x80291D98: b           L_80292494
    // 0x80291D9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80292494;
    // 0x80291D9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80291DA0:
    // 0x80291DA0: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x80291DA4: addiu       $a2, $a2, 0x3988
    ctx->r6 = ADD32(ctx->r6, 0X3988);
    // 0x80291DA8: lbu         $v1, 0x0($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X0);
    // 0x80291DAC: nop

    // 0x80291DB0: sltiu       $at, $v1, 0x5
    ctx->r1 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x80291DB4: beq         $at, $zero, L_80292490
    if (ctx->r1 == 0) {
        // 0x80291DB8: sll         $t2, $v1, 2
        ctx->r10 = S32(ctx->r3 << 2);
            goto L_80292490;
    }
    // 0x80291DB8: sll         $t2, $v1, 2
    ctx->r10 = S32(ctx->r3 << 2);
    // 0x80291DBC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80291DC0: addu        $at, $at, $t2
    gpr jr_addend_80291DCC = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80291DC4: lw          $t2, 0x5C4($at)
    ctx->r10 = ADD32(ctx->r1, 0X5C4);
    // 0x80291DC8: nop

    // 0x80291DCC: jr          $t2
    // 0x80291DD0: nop

    switch (jr_addend_80291DCC >> 2) {
        case 0: goto L_80291DD4; break;
        case 1: goto L_80291DF0; break;
        case 2: goto L_80291EAC; break;
        case 3: goto L_80291FBC; break;
        case 4: goto L_802920AC; break;
        default: switch_error(__func__, 0x80291DCC, 0x802C05C4);
    }
    // 0x80291DD0: nop

L_80291DD4:
    // 0x80291DD4: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80291DD8: addiu       $v0, $v0, 0x3989
    ctx->r2 = ADD32(ctx->r2, 0X3989);
    // 0x80291DDC: addiu       $t4, $zero, 0x50
    ctx->r12 = ADD32(0, 0X50);
    // 0x80291DE0: addiu       $t5, $v1, 0x1
    ctx->r13 = ADD32(ctx->r3, 0X1);
    // 0x80291DE4: sb          $t4, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r12;
    // 0x80291DE8: b           L_80292490
    // 0x80291DEC: sb          $t5, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r13;
        goto L_80292490;
    // 0x80291DEC: sb          $t5, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r13;
L_80291DF0:
    // 0x80291DF0: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80291DF4: addiu       $v0, $v0, 0x3989
    ctx->r2 = ADD32(ctx->r2, 0X3989);
    // 0x80291DF8: lbu         $t7, 0x0($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X0);
    // 0x80291DFC: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x80291E00: addiu       $t6, $t7, -0x1
    ctx->r14 = ADD32(ctx->r15, -0X1);
    // 0x80291E04: andi        $t9, $t6, 0xFF
    ctx->r25 = ctx->r14 & 0XFF;
    // 0x80291E08: bne         $t9, $zero, L_80292490
    if (ctx->r25 != 0) {
        // 0x80291E0C: sb          $t6, 0x0($v0)
        MEM_B(0X0, ctx->r2) = ctx->r14;
            goto L_80292490;
    }
    // 0x80291E0C: sb          $t6, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r14;
    // 0x80291E10: addiu       $t8, $zero, 0x14
    ctx->r24 = ADD32(0, 0X14);
    // 0x80291E14: andi        $t3, $t8, 0xFF
    ctx->r11 = ctx->r24 & 0XFF;
    // 0x80291E18: mtc1        $t3, $f18
    ctx->f18.u32l = ctx->r11;
    // 0x80291E1C: lui         $a3, 0x802C
    ctx->r7 = S32(0X802C << 16);
    // 0x80291E20: lui         $t0, 0x802C
    ctx->r8 = S32(0X802C << 16);
    // 0x80291E24: addiu       $t1, $v1, 0x1
    ctx->r9 = ADD32(ctx->r3, 0X1);
    // 0x80291E28: addiu       $t0, $t0, 0x3990
    ctx->r8 = ADD32(ctx->r8, 0X3990);
    // 0x80291E2C: addiu       $a3, $a3, 0x3918
    ctx->r7 = ADD32(ctx->r7, 0X3918);
    // 0x80291E30: addiu       $a0, $a0, 0x3910
    ctx->r4 = ADD32(ctx->r4, 0X3910);
    // 0x80291E34: sb          $t8, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r24;
    // 0x80291E38: sb          $t1, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r9;
    // 0x80291E3C: bgez        $t3, L_80291E58
    if (SIGNED(ctx->r11) >= 0) {
        // 0x80291E40: cvt.d.w     $f0, $f18
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    ctx->f0.d = CVT_D_W(ctx->f18.u32l);
            goto L_80291E58;
    }
    // 0x80291E40: cvt.d.w     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    ctx->f0.d = CVT_D_W(ctx->f18.u32l);
    // 0x80291E44: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80291E48: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x80291E4C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80291E50: nop

    // 0x80291E54: add.d       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f4.d); 
    ctx->f0.d = ctx->f0.d + ctx->f4.d;
L_80291E58:
    // 0x80291E58: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80291E5C: lwc1        $f6, 0x0($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X0);
    // 0x80291E60: lwc1        $f17, 0x5D8($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X5D8);
    // 0x80291E64: lwc1        $f16, 0x5DC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X5DC);
    // 0x80291E68: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80291E6C: sub.d       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f16.d); 
    ctx->f10.d = ctx->f8.d - ctx->f16.d;
    // 0x80291E70: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80291E74: div.d       $f18, $f10, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f18.d = DIV_D(ctx->f10.d, ctx->f0.d);
    // 0x80291E78: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80291E7C: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x80291E80: swc1        $f4, 0x3998($at)
    MEM_W(0X3998, ctx->r1) = ctx->f4.u32l;
    // 0x80291E84: lwc1        $f6, 0x0($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X0);
    // 0x80291E88: lui         $at, 0x4020
    ctx->r1 = S32(0X4020 << 16);
    // 0x80291E8C: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x80291E90: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80291E94: sub.d       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f16.d); 
    ctx->f10.d = ctx->f8.d - ctx->f16.d;
    // 0x80291E98: nop

    // 0x80291E9C: div.d       $f18, $f10, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f18.d = DIV_D(ctx->f10.d, ctx->f0.d);
    // 0x80291EA0: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x80291EA4: b           L_80292490
    // 0x80291EA8: swc1        $f4, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f4.u32l;
        goto L_80292490;
    // 0x80291EA8: swc1        $f4, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f4.u32l;
L_80291EAC:
    // 0x80291EAC: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x80291EB0: lui         $t0, 0x802C
    ctx->r8 = S32(0X802C << 16);
    // 0x80291EB4: addiu       $t0, $t0, 0x3990
    ctx->r8 = ADD32(ctx->r8, 0X3990);
    // 0x80291EB8: addiu       $a0, $a0, 0x3910
    ctx->r4 = ADD32(ctx->r4, 0X3910);
    // 0x80291EBC: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80291EC0: lwc1        $f6, 0x0($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X0);
    // 0x80291EC4: lwc1        $f8, 0x0($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X0);
    // 0x80291EC8: addiu       $v0, $v0, 0x3989
    ctx->r2 = ADD32(ctx->r2, 0X3989);
    // 0x80291ECC: lbu         $t2, 0x0($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X0);
    // 0x80291ED0: sub.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80291ED4: lui         $a3, 0x802C
    ctx->r7 = S32(0X802C << 16);
    // 0x80291ED8: addiu       $t4, $t2, -0x1
    ctx->r12 = ADD32(ctx->r10, -0X1);
    // 0x80291EDC: addiu       $a3, $a3, 0x3918
    ctx->r7 = ADD32(ctx->r7, 0X3918);
    // 0x80291EE0: sb          $t4, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r12;
    // 0x80291EE4: swc1        $f16, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f16.u32l;
    // 0x80291EE8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80291EEC: lwc1        $f18, 0x3998($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X3998);
    // 0x80291EF0: lwc1        $f10, 0x0($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X0);
    // 0x80291EF4: andi        $t5, $t4, 0xFF
    ctx->r13 = ctx->r12 & 0XFF;
    // 0x80291EF8: sub.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f18.fl;
    // 0x80291EFC: bne         $t5, $zero, L_80292490
    if (ctx->r13 != 0) {
        // 0x80291F00: swc1        $f4, 0x0($a3)
        MEM_W(0X0, ctx->r7) = ctx->f4.u32l;
            goto L_80292490;
    }
    // 0x80291F00: swc1        $f4, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f4.u32l;
    // 0x80291F04: addiu       $t7, $v1, 0x1
    ctx->r15 = ADD32(ctx->r3, 0X1);
    // 0x80291F08: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x80291F0C: bne         $a1, $at, L_80291F70
    if (ctx->r5 != ctx->r1) {
        // 0x80291F10: sb          $t7, 0x0($a2)
        MEM_B(0X0, ctx->r6) = ctx->r15;
            goto L_80291F70;
    }
    // 0x80291F10: sb          $t7, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r15;
    // 0x80291F14: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80291F18: lw          $t6, 0xB2C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0XB2C);
    // 0x80291F1C: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80291F20: lw          $t9, 0xC8($t6)
    ctx->r25 = MEM_W(ctx->r14, 0XC8);
    // 0x80291F24: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80291F28: lw          $t8, 0x24($t9)
    ctx->r24 = MEM_W(ctx->r25, 0X24);
    // 0x80291F2C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80291F30: lwc1        $f6, 0x8C0($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X8C0);
    // 0x80291F34: lwc1        $f17, 0x5E0($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X5E0);
    // 0x80291F38: lwc1        $f16, 0x5E4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X5E4);
    // 0x80291F3C: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80291F40: nop

    // 0x80291F44: div.d       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f16.d); 
    ctx->f10.d = DIV_D(ctx->f8.d, ctx->f16.d);
    // 0x80291F48: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80291F4C: lwc1        $f19, 0x5E8($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X5E8);
    // 0x80291F50: lwc1        $f18, 0x5EC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X5EC);
    // 0x80291F54: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80291F58: addiu       $v0, $v0, 0x3924
    ctx->r2 = ADD32(ctx->r2, 0X3924);
    // 0x80291F5C: swc1        $f2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f2.u32l;
    // 0x80291F60: sub.d       $f4, $f18, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = ctx->f18.d - ctx->f10.d;
    // 0x80291F64: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x80291F68: b           L_80292490
    // 0x80291F6C: swc1        $f6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f6.u32l;
        goto L_80292490;
    // 0x80291F6C: swc1        $f6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f6.u32l;
L_80291F70:
    // 0x80291F70: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x80291F74: lw          $t1, 0xB2C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0XB2C);
    // 0x80291F78: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80291F7C: lw          $t3, 0xC8($t1)
    ctx->r11 = MEM_W(ctx->r9, 0XC8);
    // 0x80291F80: lwc1        $f19, 0x5F0($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X5F0);
    // 0x80291F84: lw          $t2, 0x24($t3)
    ctx->r10 = MEM_W(ctx->r11, 0X24);
    // 0x80291F88: lwc1        $f18, 0x5F4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X5F4);
    // 0x80291F8C: lwc1        $f8, 0x8C0($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X8C0);
    // 0x80291F90: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80291F94: cvt.d.s     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f16.d = CVT_D_S(ctx->f8.fl);
    // 0x80291F98: nop

    // 0x80291F9C: div.d       $f10, $f16, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f10.d = DIV_D(ctx->f16.d, ctx->f18.d);
    // 0x80291FA0: lwc1        $f5, 0x5F8($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X5F8);
    // 0x80291FA4: lwc1        $f4, 0x5FC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5FC);
    // 0x80291FA8: nop

    // 0x80291FAC: sub.d       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f10.d); 
    ctx->f6.d = ctx->f4.d - ctx->f10.d;
    // 0x80291FB0: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x80291FB4: b           L_80292490
    // 0x80291FB8: swc1        $f8, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f8.u32l;
        goto L_80292490;
    // 0x80291FB8: swc1        $f8, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f8.u32l;
L_80291FBC:
    // 0x80291FBC: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x80291FC0: bne         $a1, $at, L_80292054
    if (ctx->r5 != ctx->r1) {
        // 0x80291FC4: lui         $v0, 0x802C
        ctx->r2 = S32(0X802C << 16);
            goto L_80292054;
    }
    // 0x80291FC4: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80291FC8: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x80291FCC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80291FD0: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80291FD4: addiu       $v0, $v0, 0x3924
    ctx->r2 = ADD32(ctx->r2, 0X3924);
    // 0x80291FD8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80291FDC: lwc1        $f12, 0x38E8($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X38E8);
    // 0x80291FE0: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80291FE4: lui         $t0, 0x802C
    ctx->r8 = S32(0X802C << 16);
    // 0x80291FE8: addiu       $t0, $t0, 0x3990
    ctx->r8 = ADD32(ctx->r8, 0X3990);
    // 0x80291FEC: lwc1        $f2, 0x0($t0)
    ctx->f2.u32l = MEM_W(ctx->r8, 0X0);
    // 0x80291FF0: add.s       $f16, $f0, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f0.fl + ctx->f12.fl;
    // 0x80291FF4: addiu       $t4, $v1, 0x1
    ctx->r12 = ADD32(ctx->r3, 0X1);
    // 0x80291FF8: sub.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f2.fl;
    // 0x80291FFC: c.lt.s      $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f14.fl < ctx->f18.fl;
    // 0x80292000: nop

    // 0x80292004: bc1f        L_80292044
    if (!c1cs) {
        // 0x80292008: nop
    
            goto L_80292044;
    }
    // 0x80292008: nop

    // 0x8029200C: sub.s       $f4, $f0, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f14.fl;
    // 0x80292010: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80292014: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
    // 0x80292018: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8029201C: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80292020: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x80292024: nop

    // 0x80292028: bc1f        L_80292494
    if (!c1cs) {
        // 0x8029202C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80292494;
    }
    // 0x8029202C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80292030: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80292034: nop

    // 0x80292038: add.s       $f6, $f0, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x8029203C: b           L_80292490
    // 0x80292040: swc1        $f6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f6.u32l;
        goto L_80292490;
    // 0x80292040: swc1        $f6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f6.u32l;
L_80292044:
    // 0x80292044: sub.s       $f8, $f2, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x80292048: sb          $t4, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r12;
    // 0x8029204C: b           L_80292490
    // 0x80292050: swc1        $f8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f8.u32l;
        goto L_80292490;
    // 0x80292050: swc1        $f8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f8.u32l;
L_80292054:
    // 0x80292054: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x80292058: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8029205C: lui         $t0, 0x802C
    ctx->r8 = S32(0X802C << 16);
    // 0x80292060: addiu       $t0, $t0, 0x3990
    ctx->r8 = ADD32(ctx->r8, 0X3990);
    // 0x80292064: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80292068: lwc1        $f18, 0x38E8($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X38E8);
    // 0x8029206C: lwc1        $f16, 0x0($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X0);
    // 0x80292070: addiu       $v0, $v0, 0x3924
    ctx->r2 = ADD32(ctx->r2, 0X3924);
    // 0x80292074: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80292078: sub.s       $f2, $f16, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x8029207C: addiu       $t5, $v1, 0x1
    ctx->r13 = ADD32(ctx->r3, 0X1);
    // 0x80292080: sub.s       $f4, $f2, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x80292084: c.lt.s      $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f14.fl < ctx->f4.fl;
    // 0x80292088: nop

    // 0x8029208C: bc1f        L_802920A0
    if (!c1cs) {
        // 0x80292090: nop
    
            goto L_802920A0;
    }
    // 0x80292090: nop

    // 0x80292094: add.s       $f10, $f0, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f14.fl;
    // 0x80292098: b           L_80292490
    // 0x8029209C: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
        goto L_80292490;
    // 0x8029209C: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
L_802920A0:
    // 0x802920A0: swc1        $f2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f2.u32l;
    // 0x802920A4: b           L_80292490
    // 0x802920A8: sb          $t5, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r13;
        goto L_80292490;
    // 0x802920A8: sb          $t5, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r13;
L_802920AC:
    // 0x802920AC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802920B0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802920B4: jal         0x802906E8
    // 0x802920B8: sb          $t7, 0x3A24($at)
    MEM_B(0X3A24, ctx->r1) = ctx->r15;
    func_802906E8(rdram, ctx);
        goto after_4;
    // 0x802920B8: sb          $t7, 0x3A24($at)
    MEM_B(0X3A24, ctx->r1) = ctx->r15;
    after_4:
    // 0x802920BC: b           L_80292494
    // 0x802920C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80292494;
    // 0x802920C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802920C4:
    // 0x802920C4: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x802920C8: addiu       $a2, $a2, 0x3988
    ctx->r6 = ADD32(ctx->r6, 0X3988);
    // 0x802920CC: lbu         $v1, 0x0($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X0);
    // 0x802920D0: nop

    // 0x802920D4: sltiu       $at, $v1, 0x5
    ctx->r1 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x802920D8: beq         $at, $zero, L_80292490
    if (ctx->r1 == 0) {
        // 0x802920DC: sll         $t6, $v1, 2
        ctx->r14 = S32(ctx->r3 << 2);
            goto L_80292490;
    }
    // 0x802920DC: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
    // 0x802920E0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802920E4: addu        $at, $at, $t6
    gpr jr_addend_802920F0 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x802920E8: lw          $t6, 0x600($at)
    ctx->r14 = ADD32(ctx->r1, 0X600);
    // 0x802920EC: nop

    // 0x802920F0: jr          $t6
    // 0x802920F4: nop

    switch (jr_addend_802920F0 >> 2) {
        case 0: goto L_802920F8; break;
        case 1: goto L_80292114; break;
        case 2: goto L_802921D0; break;
        case 3: goto L_80292320; break;
        case 4: goto L_80292480; break;
        default: switch_error(__func__, 0x802920F0, 0x802C0600);
    }
    // 0x802920F4: nop

L_802920F8:
    // 0x802920F8: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802920FC: addiu       $v0, $v0, 0x3989
    ctx->r2 = ADD32(ctx->r2, 0X3989);
    // 0x80292100: addiu       $t9, $zero, 0x50
    ctx->r25 = ADD32(0, 0X50);
    // 0x80292104: addiu       $t8, $v1, 0x1
    ctx->r24 = ADD32(ctx->r3, 0X1);
    // 0x80292108: sb          $t9, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r25;
    // 0x8029210C: b           L_80292490
    // 0x80292110: sb          $t8, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r24;
        goto L_80292490;
    // 0x80292110: sb          $t8, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r24;
L_80292114:
    // 0x80292114: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80292118: addiu       $v0, $v0, 0x3989
    ctx->r2 = ADD32(ctx->r2, 0X3989);
    // 0x8029211C: lbu         $t1, 0x0($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X0);
    // 0x80292120: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x80292124: addiu       $t3, $t1, -0x1
    ctx->r11 = ADD32(ctx->r9, -0X1);
    // 0x80292128: andi        $t2, $t3, 0xFF
    ctx->r10 = ctx->r11 & 0XFF;
    // 0x8029212C: bne         $t2, $zero, L_80292490
    if (ctx->r10 != 0) {
        // 0x80292130: sb          $t3, 0x0($v0)
        MEM_B(0X0, ctx->r2) = ctx->r11;
            goto L_80292490;
    }
    // 0x80292130: sb          $t3, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r11;
    // 0x80292134: addiu       $t4, $zero, 0x14
    ctx->r12 = ADD32(0, 0X14);
    // 0x80292138: andi        $t7, $t4, 0xFF
    ctx->r15 = ctx->r12 & 0XFF;
    // 0x8029213C: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x80292140: lui         $a3, 0x802C
    ctx->r7 = S32(0X802C << 16);
    // 0x80292144: lui         $t0, 0x802C
    ctx->r8 = S32(0X802C << 16);
    // 0x80292148: addiu       $t5, $v1, 0x1
    ctx->r13 = ADD32(ctx->r3, 0X1);
    // 0x8029214C: addiu       $t0, $t0, 0x3990
    ctx->r8 = ADD32(ctx->r8, 0X3990);
    // 0x80292150: addiu       $a3, $a3, 0x3918
    ctx->r7 = ADD32(ctx->r7, 0X3918);
    // 0x80292154: addiu       $a0, $a0, 0x3910
    ctx->r4 = ADD32(ctx->r4, 0X3910);
    // 0x80292158: sb          $t4, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r12;
    // 0x8029215C: sb          $t5, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r13;
    // 0x80292160: bgez        $t7, L_8029217C
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80292164: cvt.d.w     $f0, $f6
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.d = CVT_D_W(ctx->f6.u32l);
            goto L_8029217C;
    }
    // 0x80292164: cvt.d.w     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.d = CVT_D_W(ctx->f6.u32l);
    // 0x80292168: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8029216C: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80292170: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80292174: nop

    // 0x80292178: add.d       $f0, $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f8.d); 
    ctx->f0.d = ctx->f0.d + ctx->f8.d;
L_8029217C:
    // 0x8029217C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80292180: lwc1        $f16, 0x0($a3)
    ctx->f16.u32l = MEM_W(ctx->r7, 0X0);
    // 0x80292184: lwc1        $f5, 0x618($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X618);
    // 0x80292188: lwc1        $f4, 0x61C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X61C);
    // 0x8029218C: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x80292190: sub.d       $f10, $f18, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f10.d = ctx->f18.d - ctx->f4.d;
    // 0x80292194: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80292198: div.d       $f6, $f10, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = DIV_D(ctx->f10.d, ctx->f0.d);
    // 0x8029219C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802921A0: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x802921A4: swc1        $f8, 0x3998($at)
    MEM_W(0X3998, ctx->r1) = ctx->f8.u32l;
    // 0x802921A8: lwc1        $f16, 0x0($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X0);
    // 0x802921AC: lui         $at, 0x4020
    ctx->r1 = S32(0X4020 << 16);
    // 0x802921B0: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x802921B4: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x802921B8: sub.d       $f10, $f18, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f10.d = ctx->f18.d - ctx->f4.d;
    // 0x802921BC: nop

    // 0x802921C0: div.d       $f6, $f10, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = DIV_D(ctx->f10.d, ctx->f0.d);
    // 0x802921C4: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x802921C8: b           L_80292490
    // 0x802921CC: swc1        $f8, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f8.u32l;
        goto L_80292490;
    // 0x802921CC: swc1        $f8, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f8.u32l;
L_802921D0:
    // 0x802921D0: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x802921D4: lui         $t0, 0x802C
    ctx->r8 = S32(0X802C << 16);
    // 0x802921D8: addiu       $t0, $t0, 0x3990
    ctx->r8 = ADD32(ctx->r8, 0X3990);
    // 0x802921DC: addiu       $a0, $a0, 0x3910
    ctx->r4 = ADD32(ctx->r4, 0X3910);
    // 0x802921E0: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802921E4: lwc1        $f16, 0x0($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X0);
    // 0x802921E8: lwc1        $f18, 0x0($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X0);
    // 0x802921EC: addiu       $v0, $v0, 0x3989
    ctx->r2 = ADD32(ctx->r2, 0X3989);
    // 0x802921F0: lbu         $t6, 0x0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X0);
    // 0x802921F4: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x802921F8: lui         $a3, 0x802C
    ctx->r7 = S32(0X802C << 16);
    // 0x802921FC: addiu       $t9, $t6, -0x1
    ctx->r25 = ADD32(ctx->r14, -0X1);
    // 0x80292200: addiu       $a3, $a3, 0x3918
    ctx->r7 = ADD32(ctx->r7, 0X3918);
    // 0x80292204: sb          $t9, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r25;
    // 0x80292208: swc1        $f4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f4.u32l;
    // 0x8029220C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80292210: lwc1        $f6, 0x3998($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3998);
    // 0x80292214: lwc1        $f10, 0x0($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X0);
    // 0x80292218: andi        $t8, $t9, 0xFF
    ctx->r24 = ctx->r25 & 0XFF;
    // 0x8029221C: sub.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x80292220: bne         $t8, $zero, L_80292490
    if (ctx->r24 != 0) {
        // 0x80292224: swc1        $f8, 0x0($a3)
        MEM_W(0X0, ctx->r7) = ctx->f8.u32l;
            goto L_80292490;
    }
    // 0x80292224: swc1        $f8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f8.u32l;
    // 0x80292228: addiu       $t1, $v1, 0x1
    ctx->r9 = ADD32(ctx->r3, 0X1);
    // 0x8029222C: sb          $t1, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r9;
    // 0x80292230: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x80292234: lw          $t3, 0x3B20($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X3B20);
    // 0x80292238: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x8029223C: lh          $t2, 0xE8($t3)
    ctx->r10 = MEM_H(ctx->r11, 0XE8);
    // 0x80292240: addiu       $a0, $a0, 0x3A2C
    ctx->r4 = ADD32(ctx->r4, 0X3A2C);
    // 0x80292244: sh          $t2, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r10;
    // 0x80292248: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    // 0x8029224C: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x80292250: bgez        $v0, L_80292264
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80292254: negu        $t4, $v0
        ctx->r12 = SUB32(0, ctx->r2);
            goto L_80292264;
    }
    // 0x80292254: negu        $t4, $v0
    ctx->r12 = SUB32(0, ctx->r2);
    // 0x80292258: sh          $t4, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r12;
    // 0x8029225C: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    // 0x80292260: nop

L_80292264:
    // 0x80292264: bne         $a1, $at, L_802922C8
    if (ctx->r5 != ctx->r1) {
        // 0x80292268: addiu       $t9, $v0, -0x1A4
        ctx->r25 = ADD32(ctx->r2, -0X1A4);
            goto L_802922C8;
    }
    // 0x80292268: addiu       $t9, $v0, -0x1A4
    ctx->r25 = ADD32(ctx->r2, -0X1A4);
    // 0x8029226C: addiu       $t5, $v0, -0x1A4
    ctx->r13 = ADD32(ctx->r2, -0X1A4);
    // 0x80292270: mtc1        $t5, $f16
    ctx->f16.u32l = ctx->r13;
    // 0x80292274: lui         $at, 0x3FD0
    ctx->r1 = S32(0X3FD0 << 16);
    // 0x80292278: cvt.d.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.d = CVT_D_W(ctx->f16.u32l);
    // 0x8029227C: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x80292280: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80292284: lui         $at, 0x402E
    ctx->r1 = S32(0X402E << 16);
    // 0x80292288: mul.d       $f10, $f18, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f10.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x8029228C: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x80292290: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80292294: nop

    // 0x80292298: add.d       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f10.d + ctx->f6.d;
    // 0x8029229C: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x802922A0: nop

    // 0x802922A4: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x802922A8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802922AC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802922B0: nop

    // 0x802922B4: cvt.w.d     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.u32l = CVT_W_D(ctx->f8.d);
    // 0x802922B8: mfc1        $t6, $f16
    ctx->r14 = (int32_t)ctx->f16.u32l;
    // 0x802922BC: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x802922C0: b           L_80292490
    // 0x802922C4: sh          $t6, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r14;
        goto L_80292490;
    // 0x802922C4: sh          $t6, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r14;
L_802922C8:
    // 0x802922C8: mtc1        $t9, $f18
    ctx->f18.u32l = ctx->r25;
    // 0x802922CC: lui         $at, 0x3FD0
    ctx->r1 = S32(0X3FD0 << 16);
    // 0x802922D0: cvt.d.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.d = CVT_D_W(ctx->f18.u32l);
    // 0x802922D4: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x802922D8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802922DC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802922E0: mul.d       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f10.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f10.d);
    // 0x802922E4: lwc1        $f9, 0x620($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X620);
    // 0x802922E8: lwc1        $f8, 0x624($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X624);
    // 0x802922EC: nop

    // 0x802922F0: sub.d       $f16, $f8, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f6.d); 
    ctx->f16.d = ctx->f8.d - ctx->f6.d;
    // 0x802922F4: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x802922F8: nop

    // 0x802922FC: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x80292300: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80292304: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80292308: nop

    // 0x8029230C: cvt.w.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_D(ctx->f16.d);
    // 0x80292310: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    // 0x80292314: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80292318: b           L_80292490
    // 0x8029231C: sh          $t1, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r9;
        goto L_80292490;
    // 0x8029231C: sh          $t1, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r9;
L_80292320:
    // 0x80292320: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x80292324: bne         $a1, $at, L_802923D8
    if (ctx->r5 != ctx->r1) {
        // 0x80292328: lui         $v0, 0x802C
        ctx->r2 = S32(0X802C << 16);
            goto L_802923D8;
    }
    // 0x80292328: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8029232C: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80292330: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80292334: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80292338: addiu       $v0, $v0, 0x3924
    ctx->r2 = ADD32(ctx->r2, 0X3924);
    // 0x8029233C: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x80292340: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80292344: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80292348: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x8029234C: add.s       $f10, $f4, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f14.fl;
    // 0x80292350: addiu       $a0, $a0, 0x3A2C
    ctx->r4 = ADD32(ctx->r4, 0X3A2C);
    // 0x80292354: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
    // 0x80292358: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8029235C: nop

    // 0x80292360: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x80292364: nop

    // 0x80292368: bc1f        L_80292380
    if (!c1cs) {
        // 0x8029236C: nop
    
            goto L_80292380;
    }
    // 0x8029236C: nop

    // 0x80292370: sub.s       $f8, $f0, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x80292374: swc1        $f8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f8.u32l;
    // 0x80292378: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8029237C: nop

L_80292380:
    // 0x80292380: lh          $t3, 0x0($a0)
    ctx->r11 = MEM_H(ctx->r4, 0X0);
    // 0x80292384: nop

    // 0x80292388: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x8029238C: nop

    // 0x80292390: cvt.s.w     $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    ctx->f2.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80292394: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x80292398: nop

    // 0x8029239C: bc1f        L_80292494
    if (!c1cs) {
        // 0x802923A0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80292494;
    }
    // 0x802923A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802923A4: sub.s       $f16, $f2, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x802923A8: addiu       $t2, $v1, 0x1
    ctx->r10 = ADD32(ctx->r3, 0X1);
    // 0x802923AC: c.lt.s      $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f16.fl < ctx->f14.fl;
    // 0x802923B0: nop

    // 0x802923B4: bc1t        L_802923CC
    if (c1cs) {
        // 0x802923B8: nop
    
            goto L_802923CC;
    }
    // 0x802923B8: nop

    // 0x802923BC: c.eq.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
    // 0x802923C0: nop

    // 0x802923C4: bc1f        L_80292494
    if (!c1cs) {
        // 0x802923C8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80292494;
    }
    // 0x802923C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802923CC:
    // 0x802923CC: swc1        $f2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f2.u32l;
    // 0x802923D0: b           L_80292490
    // 0x802923D4: sb          $t2, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r10;
        goto L_80292490;
    // 0x802923D4: sb          $t2, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r10;
L_802923D8:
    // 0x802923D8: addiu       $v0, $v0, 0x3924
    ctx->r2 = ADD32(ctx->r2, 0X3924);
    // 0x802923DC: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x802923E0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x802923E4: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
    // 0x802923E8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802923EC: sub.s       $f4, $f18, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f14.fl;
    // 0x802923F0: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x802923F4: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
    // 0x802923F8: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x802923FC: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80292400: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x80292404: addiu       $a0, $a0, 0x3A2C
    ctx->r4 = ADD32(ctx->r4, 0X3A2C);
    // 0x80292408: bc1f        L_80292428
    if (!c1cs) {
        // 0x8029240C: nop
    
            goto L_80292428;
    }
    // 0x8029240C: nop

    // 0x80292410: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80292414: nop

    // 0x80292418: add.s       $f8, $f0, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x8029241C: swc1        $f8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f8.u32l;
    // 0x80292420: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80292424: nop

L_80292428:
    // 0x80292428: lh          $t4, 0x0($a0)
    ctx->r12 = MEM_H(ctx->r4, 0X0);
    // 0x8029242C: nop

    // 0x80292430: mtc1        $t4, $f6
    ctx->f6.u32l = ctx->r12;
    // 0x80292434: nop

    // 0x80292438: cvt.s.w     $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    ctx->f2.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8029243C: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x80292440: nop

    // 0x80292444: bc1f        L_80292494
    if (!c1cs) {
        // 0x80292448: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80292494;
    }
    // 0x80292448: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8029244C: sub.s       $f16, $f0, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x80292450: addiu       $t5, $v1, 0x1
    ctx->r13 = ADD32(ctx->r3, 0X1);
    // 0x80292454: c.lt.s      $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f16.fl < ctx->f14.fl;
    // 0x80292458: nop

    // 0x8029245C: bc1t        L_80292474
    if (c1cs) {
        // 0x80292460: nop
    
            goto L_80292474;
    }
    // 0x80292460: nop

    // 0x80292464: c.eq.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
    // 0x80292468: nop

    // 0x8029246C: bc1f        L_80292494
    if (!c1cs) {
        // 0x80292470: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80292494;
    }
    // 0x80292470: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80292474:
    // 0x80292474: swc1        $f2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f2.u32l;
    // 0x80292478: b           L_80292490
    // 0x8029247C: sb          $t5, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r13;
        goto L_80292490;
    // 0x8029247C: sb          $t5, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r13;
L_80292480:
    // 0x80292480: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80292484: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80292488: jal         0x802906E8
    // 0x8029248C: sb          $t7, 0x3A24($at)
    MEM_B(0X3A24, ctx->r1) = ctx->r15;
    func_802906E8(rdram, ctx);
        goto after_5;
    // 0x8029248C: sb          $t7, 0x3A24($at)
    MEM_B(0X3A24, ctx->r1) = ctx->r15;
    after_5:
L_80292490:
    // 0x80292490: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80292494:
    // 0x80292494: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80292498: jr          $ra
    // 0x8029249C: nop

    return;
    // 0x8029249C: nop

;}
RECOMP_FUNC void func_802924A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802924A0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x802924A4: addiu       $v0, $v0, -0x2CF0
    ctx->r2 = ADD32(ctx->r2, -0X2CF0);
    // 0x802924A8: lhu         $t6, 0x10($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X10);
    // 0x802924AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802924B0: andi        $t7, $t6, 0x40
    ctx->r15 = ctx->r14 & 0X40;
    // 0x802924B4: bne         $t7, $zero, L_8029250C
    if (ctx->r15 != 0) {
        // 0x802924B8: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8029250C;
    }
    // 0x802924B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802924BC: lhu         $t8, 0xAA4($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0XAA4);
    // 0x802924C0: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802924C4: andi        $t9, $t8, 0x40
    ctx->r25 = ctx->r24 & 0X40;
    // 0x802924C8: bne         $t9, $zero, L_80292510
    if (ctx->r25 != 0) {
        // 0x802924CC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80292510;
    }
    // 0x802924CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802924D0: lbu         $v0, 0x399C($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X399C);
    // 0x802924D4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802924D8: beq         $v0, $zero, L_802924E8
    if (ctx->r2 == 0) {
        // 0x802924DC: lui         $a0, 0x8012
        ctx->r4 = S32(0X8012 << 16);
            goto L_802924E8;
    }
    // 0x802924DC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x802924E0: bne         $v0, $at, L_802924FC
    if (ctx->r2 != ctx->r1) {
        // 0x802924E4: nop
    
            goto L_802924FC;
    }
    // 0x802924E4: nop

L_802924E8:
    // 0x802924E8: lw          $a0, 0xB2C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XB2C);
    // 0x802924EC: jal         0x80078BA4
    // 0x802924F0: nop

    func_80078BA4(rdram, ctx);
        goto after_0;
    // 0x802924F0: nop

    after_0:
    // 0x802924F4: b           L_80292510
    // 0x802924F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80292510;
    // 0x802924F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802924FC:
    // 0x802924FC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80292500: lw          $a0, 0xB2C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XB2C);
    // 0x80292504: jal         0x80078C18
    // 0x80292508: nop

    func_80078C18(rdram, ctx);
        goto after_1;
    // 0x80292508: nop

    after_1:
L_8029250C:
    // 0x8029250C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80292510:
    // 0x80292510: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80292514: jr          $ra
    // 0x80292518: nop

    return;
    // 0x80292518: nop

;}
RECOMP_FUNC void func_8029251C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029251C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80292520: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80292524: sb          $zero, 0x3A24($at)
    MEM_B(0X3A24, ctx->r1) = 0;
    // 0x80292528: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8029252C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80292530: jal         0x80297DB0
    // 0x80292534: sb          $zero, 0x3988($at)
    MEM_B(0X3988, ctx->r1) = 0;
    func_80297DB0(rdram, ctx);
        goto after_0;
    // 0x80292534: sb          $zero, 0x3988($at)
    MEM_B(0X3988, ctx->r1) = 0;
    after_0:
    // 0x80292538: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8029253C: lwc1        $f4, 0x3918($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X3918);
    // 0x80292540: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80292544: swc1        $f4, 0x3994($at)
    MEM_W(0X3994, ctx->r1) = ctx->f4.u32l;
    // 0x80292548: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8029254C: lwc1        $f6, 0x3910($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3910);
    // 0x80292550: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80292554: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x80292558: lh          $t6, -0x1B20($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X1B20);
    // 0x8029255C: swc1        $f6, 0x398C($at)
    MEM_W(0X398C, ctx->r1) = ctx->f6.u32l;
    // 0x80292560: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x80292564: lui         $t7, 0x8028
    ctx->r15 = S32(0X8028 << 16);
    // 0x80292568: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8029256C: lh          $t7, -0x1B1E($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X1B1E);
    // 0x80292570: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x80292574: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x80292578: cvt.s.w     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8029257C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80292580: swc1        $f8, 0x39C0($at)
    MEM_W(0X39C0, ctx->r1) = ctx->f8.u32l;
    // 0x80292584: cvt.s.w     $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80292588: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8029258C: swc1        $f0, 0x3978($at)
    MEM_W(0X3978, ctx->r1) = ctx->f0.u32l;
    // 0x80292590: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80292594: swc1        $f2, 0x397C($at)
    MEM_W(0X397C, ctx->r1) = ctx->f2.u32l;
    // 0x80292598: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8029259C: swc1        $f0, 0x3970($at)
    MEM_W(0X3970, ctx->r1) = ctx->f0.u32l;
    // 0x802925A0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802925A4: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x802925A8: swc1        $f2, 0x3974($at)
    MEM_W(0X3974, ctx->r1) = ctx->f2.u32l;
    // 0x802925AC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802925B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802925B4: swc1        $f12, 0x3980($at)
    MEM_W(0X3980, ctx->r1) = ctx->f12.u32l;
    // 0x802925B8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802925BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802925C0: jr          $ra
    // 0x802925C4: swc1        $f12, 0x3984($at)
    MEM_W(0X3984, ctx->r1) = ctx->f12.u32l;
    return;
    // 0x802925C4: swc1        $f12, 0x3984($at)
    MEM_W(0X3984, ctx->r1) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_802925C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802925C8: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x802925CC: lh          $t6, -0x1B20($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X1B20);
    // 0x802925D0: lui         $t7, 0x8028
    ctx->r15 = S32(0X8028 << 16);
    // 0x802925D4: lh          $t7, -0x1B1E($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X1B1E);
    // 0x802925D8: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x802925DC: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x802925E0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802925E4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802925E8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802925EC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x802925F0: swc1        $f6, 0x3978($at)
    MEM_W(0X3978, ctx->r1) = ctx->f6.u32l;
    // 0x802925F4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802925F8: swc1        $f10, 0x397C($at)
    MEM_W(0X397C, ctx->r1) = ctx->f10.u32l;
    // 0x802925FC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80292600: swc1        $f0, 0x3980($at)
    MEM_W(0X3980, ctx->r1) = ctx->f0.u32l;
    // 0x80292604: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x80292608: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8029260C: addiu       $a0, $a0, 0x3988
    ctx->r4 = ADD32(ctx->r4, 0X3988);
    // 0x80292610: swc1        $f0, 0x3984($at)
    MEM_W(0X3984, ctx->r1) = ctx->f0.u32l;
    // 0x80292614: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x80292618: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x8029261C: beq         $v1, $zero, L_80292644
    if (ctx->r3 == 0) {
        // 0x80292620: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_80292644;
    }
    // 0x80292620: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80292624: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80292628: beq         $v0, $at, L_802926E8
    if (ctx->r2 == ctx->r1) {
        // 0x8029262C: lui         $a1, 0x802C
        ctx->r5 = S32(0X802C << 16);
            goto L_802926E8;
    }
    // 0x8029262C: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x80292630: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80292634: beq         $v0, $at, L_80292730
    if (ctx->r2 == ctx->r1) {
        // 0x80292638: nop
    
            goto L_80292730;
    }
    // 0x80292638: nop

    // 0x8029263C: jr          $ra
    // 0x80292640: nop

    return;
    // 0x80292640: nop

L_80292644:
    // 0x80292644: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x80292648: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8029264C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80292650: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80292654: addiu       $a1, $a1, 0x3918
    ctx->r5 = ADD32(ctx->r5, 0X3918);
    // 0x80292658: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x8029265C: swc1        $f16, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f16.u32l;
    // 0x80292660: lhu         $t8, 0xB7E($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0XB7E);
    // 0x80292664: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80292668: swc1        $f18, 0x3910($at)
    MEM_W(0X3910, ctx->r1) = ctx->f18.u32l;
    // 0x8029266C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80292670: andi        $t9, $t8, 0x40
    ctx->r25 = ctx->r24 & 0X40;
    // 0x80292674: beq         $t9, $zero, L_80292730
    if (ctx->r25 == 0) {
        // 0x80292678: swc1        $f0, 0x3924($at)
        MEM_W(0X3924, ctx->r1) = ctx->f0.u32l;
            goto L_80292730;
    }
    // 0x80292678: swc1        $f0, 0x3924($at)
    MEM_W(0X3924, ctx->r1) = ctx->f0.u32l;
    // 0x8029267C: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
    // 0x80292680: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80292684: andi        $t1, $t0, 0xFF
    ctx->r9 = ctx->r8 & 0XFF;
    // 0x80292688: lui         $at, 0x405E
    ctx->r1 = S32(0X405E << 16);
    // 0x8029268C: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80292690: mtc1        $t1, $f16
    ctx->f16.u32l = ctx->r9;
    // 0x80292694: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80292698: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8029269C: addiu       $v0, $v0, 0x3989
    ctx->r2 = ADD32(ctx->r2, 0X3989);
    // 0x802926A0: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x802926A4: sb          $t0, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r8;
    // 0x802926A8: cvt.d.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.d = CVT_D_W(ctx->f16.u32l);
    // 0x802926AC: bgez        $t1, L_802926C8
    if (SIGNED(ctx->r9) >= 0) {
        // 0x802926B0: sub.d       $f10, $f6, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d - ctx->f8.d;
            goto L_802926C8;
    }
    // 0x802926B0: sub.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d - ctx->f8.d;
    // 0x802926B4: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x802926B8: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x802926BC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802926C0: nop

    // 0x802926C4: add.d       $f18, $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f18.d = ctx->f18.d + ctx->f4.d;
L_802926C8:
    // 0x802926C8: nop

    // 0x802926CC: div.d       $f6, $f10, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f6.d = DIV_D(ctx->f10.d, ctx->f18.d);
    // 0x802926D0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802926D4: addiu       $t2, $v1, 0x1
    ctx->r10 = ADD32(ctx->r3, 0X1);
    // 0x802926D8: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x802926DC: swc1        $f8, 0x3998($at)
    MEM_W(0X3998, ctx->r1) = ctx->f8.u32l;
    // 0x802926E0: jr          $ra
    // 0x802926E4: sb          $t2, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r10;
    return;
    // 0x802926E4: sb          $t2, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r10;
L_802926E8:
    // 0x802926E8: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802926EC: addiu       $v0, $v0, 0x3989
    ctx->r2 = ADD32(ctx->r2, 0X3989);
    // 0x802926F0: lbu         $t3, 0x0($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X0);
    // 0x802926F4: addiu       $a1, $a1, 0x3918
    ctx->r5 = ADD32(ctx->r5, 0X3918);
    // 0x802926F8: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x802926FC: sb          $t4, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r12;
    // 0x80292700: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80292704: lwc1        $f4, 0x3998($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X3998);
    // 0x80292708: lwc1        $f16, 0x0($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X0);
    // 0x8029270C: andi        $t5, $t4, 0xFF
    ctx->r13 = ctx->r12 & 0XFF;
    // 0x80292710: sub.s       $f10, $f16, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f16.fl - ctx->f4.fl;
    // 0x80292714: bne         $t5, $zero, L_80292730
    if (ctx->r13 != 0) {
        // 0x80292718: swc1        $f10, 0x0($a1)
        MEM_W(0X0, ctx->r5) = ctx->f10.u32l;
            goto L_80292730;
    }
    // 0x80292718: swc1        $f10, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f10.u32l;
    // 0x8029271C: addiu       $t6, $v1, 0x1
    ctx->r14 = ADD32(ctx->r3, 0X1);
    // 0x80292720: sb          $t6, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r14;
    // 0x80292724: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80292728: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8029272C: sb          $t7, 0x3A24($at)
    MEM_B(0X3A24, ctx->r1) = ctx->r15;
L_80292730:
    // 0x80292730: jr          $ra
    // 0x80292734: nop

    return;
    // 0x80292734: nop

;}
RECOMP_FUNC void func_80292738(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80292738: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8029273C: lhu         $t6, -0x2CE8($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X2CE8);
    // 0x80292740: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80292744: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80292748: andi        $t7, $t6, 0x100
    ctx->r15 = ctx->r14 & 0X100;
    // 0x8029274C: beq         $t7, $zero, L_80292778
    if (ctx->r15 == 0) {
        // 0x80292750: sb          $v0, 0x3A24($at)
        MEM_B(0X3A24, ctx->r1) = ctx->r2;
            goto L_80292778;
    }
    // 0x80292750: sb          $v0, 0x3A24($at)
    MEM_B(0X3A24, ctx->r1) = ctx->r2;
    // 0x80292754: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x80292758: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8029275C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80292760: sb          $zero, 0x3A31($at)
    MEM_B(0X3A31, ctx->r1) = 0;
    // 0x80292764: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80292768: swc1        $f0, 0x3978($at)
    MEM_W(0X3978, ctx->r1) = ctx->f0.u32l;
    // 0x8029276C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80292770: b           L_80292798
    // 0x80292774: swc1        $f0, 0x3970($at)
    MEM_W(0X3970, ctx->r1) = ctx->f0.u32l;
        goto L_80292798;
    // 0x80292774: swc1        $f0, 0x3970($at)
    MEM_W(0X3970, ctx->r1) = ctx->f0.u32l;
L_80292778:
    // 0x80292778: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8029277C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80292780: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80292784: sb          $v0, 0x3A31($at)
    MEM_B(0X3A31, ctx->r1) = ctx->r2;
    // 0x80292788: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8029278C: swc1        $f0, 0x3978($at)
    MEM_W(0X3978, ctx->r1) = ctx->f0.u32l;
    // 0x80292790: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80292794: swc1        $f0, 0x3970($at)
    MEM_W(0X3970, ctx->r1) = ctx->f0.u32l;
L_80292798:
    // 0x80292798: lui         $at, 0x43AF
    ctx->r1 = S32(0X43AF << 16);
    // 0x8029279C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802927A0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802927A4: swc1        $f0, 0x397C($at)
    MEM_W(0X397C, ctx->r1) = ctx->f0.u32l;
    // 0x802927A8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802927AC: jr          $ra
    // 0x802927B0: swc1        $f0, 0x3974($at)
    MEM_W(0X3974, ctx->r1) = ctx->f0.u32l;
    return;
    // 0x802927B0: swc1        $f0, 0x3974($at)
    MEM_W(0X3974, ctx->r1) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_802927B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802927B4: lui         $at, 0x43AF
    ctx->r1 = S32(0X43AF << 16);
    // 0x802927B8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802927BC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802927C0: swc1        $f0, 0x397C($at)
    MEM_W(0X397C, ctx->r1) = ctx->f0.u32l;
    // 0x802927C4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802927C8: swc1        $f0, 0x3974($at)
    MEM_W(0X3974, ctx->r1) = ctx->f0.u32l;
    // 0x802927CC: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x802927D0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802927D4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802927D8: swc1        $f4, 0x3918($at)
    MEM_W(0X3918, ctx->r1) = ctx->f4.u32l;
    // 0x802927DC: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x802927E0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802927E4: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802927E8: lbu         $v0, 0x3A31($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3A31);
    // 0x802927EC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802927F0: beq         $v0, $zero, L_8029280C
    if (ctx->r2 == 0) {
        // 0x802927F4: swc1        $f6, 0x3910($at)
        MEM_W(0X3910, ctx->r1) = ctx->f6.u32l;
            goto L_8029280C;
    }
    // 0x802927F4: swc1        $f6, 0x3910($at)
    MEM_W(0X3910, ctx->r1) = ctx->f6.u32l;
    // 0x802927F8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802927FC: beq         $v0, $at, L_80292860
    if (ctx->r2 == ctx->r1) {
        // 0x80292800: lui         $t8, 0x8012
        ctx->r24 = S32(0X8012 << 16);
            goto L_80292860;
    }
    // 0x80292800: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80292804: jr          $ra
    // 0x80292808: nop

    return;
    // 0x80292808: nop

L_8029280C:
    // 0x8029280C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80292810: lhu         $t6, -0x2CE8($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X2CE8);
    // 0x80292814: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80292818: andi        $t7, $t6, 0x8
    ctx->r15 = ctx->r14 & 0X8;
    // 0x8029281C: beq         $t7, $zero, L_80292848
    if (ctx->r15 == 0) {
        // 0x80292820: nop
    
            goto L_80292848;
    }
    // 0x80292820: nop

    // 0x80292824: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x80292828: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8029282C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80292830: swc1        $f8, 0x3978($at)
    MEM_W(0X3978, ctx->r1) = ctx->f8.u32l;
    // 0x80292834: lui         $at, 0x43A5
    ctx->r1 = S32(0X43A5 << 16);
    // 0x80292838: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8029283C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80292840: jr          $ra
    // 0x80292844: swc1        $f10, 0x3924($at)
    MEM_W(0X3924, ctx->r1) = ctx->f10.u32l;
    return;
    // 0x80292844: swc1        $f10, 0x3924($at)
    MEM_W(0X3924, ctx->r1) = ctx->f10.u32l;
L_80292848:
    // 0x80292848: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8029284C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80292850: swc1        $f0, 0x3978($at)
    MEM_W(0X3978, ctx->r1) = ctx->f0.u32l;
    // 0x80292854: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80292858: jr          $ra
    // 0x8029285C: swc1        $f0, 0x3924($at)
    MEM_W(0X3924, ctx->r1) = ctx->f0.u32l;
    return;
    // 0x8029285C: swc1        $f0, 0x3924($at)
    MEM_W(0X3924, ctx->r1) = ctx->f0.u32l;
L_80292860:
    // 0x80292860: lhu         $t8, -0x2254($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X2254);
    // 0x80292864: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80292868: andi        $t9, $t8, 0x8
    ctx->r25 = ctx->r24 & 0X8;
    // 0x8029286C: beq         $t9, $zero, L_80292898
    if (ctx->r25 == 0) {
        // 0x80292870: nop
    
            goto L_80292898;
    }
    // 0x80292870: nop

    // 0x80292874: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x80292878: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8029287C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80292880: swc1        $f16, 0x3978($at)
    MEM_W(0X3978, ctx->r1) = ctx->f16.u32l;
    // 0x80292884: lui         $at, 0x43A5
    ctx->r1 = S32(0X43A5 << 16);
    // 0x80292888: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8029288C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80292890: jr          $ra
    // 0x80292894: swc1        $f18, 0x3924($at)
    MEM_W(0X3924, ctx->r1) = ctx->f18.u32l;
    return;
    // 0x80292894: swc1        $f18, 0x3924($at)
    MEM_W(0X3924, ctx->r1) = ctx->f18.u32l;
L_80292898:
    // 0x80292898: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8029289C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802928A0: swc1        $f0, 0x3978($at)
    MEM_W(0X3978, ctx->r1) = ctx->f0.u32l;
    // 0x802928A4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802928A8: swc1        $f0, 0x3924($at)
    MEM_W(0X3924, ctx->r1) = ctx->f0.u32l;
    // 0x802928AC: jr          $ra
    // 0x802928B0: nop

    return;
    // 0x802928B0: nop

;}
RECOMP_FUNC void func_802928B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802928B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802928B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802928BC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802928C0: jal         0x80297DB0
    // 0x802928C4: sb          $zero, 0x3A24($at)
    MEM_B(0X3A24, ctx->r1) = 0;
    func_80297DB0(rdram, ctx);
        goto after_0;
    // 0x802928C4: sb          $zero, 0x3A24($at)
    MEM_B(0X3A24, ctx->r1) = 0;
    after_0:
    // 0x802928C8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802928CC: sb          $zero, 0x3988($at)
    MEM_B(0X3988, ctx->r1) = 0;
    // 0x802928D0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802928D4: lwc1        $f2, 0x3918($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X3918);
    // 0x802928D8: addiu       $t6, $zero, 0x3C
    ctx->r14 = ADD32(0, 0X3C);
    // 0x802928DC: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x802928E0: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x802928E4: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802928E8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802928EC: addiu       $v0, $v0, 0x3989
    ctx->r2 = ADD32(ctx->r2, 0X3989);
    // 0x802928F0: swc1        $f2, 0x3994($at)
    MEM_W(0X3994, ctx->r1) = ctx->f2.u32l;
    // 0x802928F4: sb          $t6, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r14;
    // 0x802928F8: bgez        $t7, L_80292914
    if (SIGNED(ctx->r15) >= 0) {
        // 0x802928FC: cvt.d.w     $f0, $f4
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.d = CVT_D_W(ctx->f4.u32l);
            goto L_80292914;
    }
    // 0x802928FC: cvt.d.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.d = CVT_D_W(ctx->f4.u32l);
    // 0x80292900: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80292904: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x80292908: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8029290C: nop

    // 0x80292910: add.d       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f6.d); 
    ctx->f0.d = ctx->f0.d + ctx->f6.d;
L_80292914:
    // 0x80292914: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80292918: lwc1        $f9, 0x628($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X628);
    // 0x8029291C: lwc1        $f8, 0x62C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X62C);
    // 0x80292920: cvt.d.s     $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.d = CVT_D_S(ctx->f2.fl);
    // 0x80292924: sub.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d - ctx->f10.d;
    // 0x80292928: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8029292C: div.d       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f0.d); 
    ctx->f18.d = DIV_D(ctx->f16.d, ctx->f0.d);
    // 0x80292930: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80292934: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80292938: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x8029293C: swc1        $f4, 0x3998($at)
    MEM_W(0X3998, ctx->r1) = ctx->f4.u32l;
    // 0x80292940: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80292944: lwc1        $f12, 0x3910($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X3910);
    // 0x80292948: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8029294C: swc1        $f12, 0x398C($at)
    MEM_W(0X398C, ctx->r1) = ctx->f12.u32l;
    // 0x80292950: lui         $at, 0x4039
    ctx->r1 = S32(0X4039 << 16);
    // 0x80292954: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80292958: cvt.d.s     $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f6.d = CVT_D_S(ctx->f12.fl);
    // 0x8029295C: sub.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d - ctx->f8.d;
    // 0x80292960: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80292964: div.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = DIV_D(ctx->f10.d, ctx->f0.d);
    // 0x80292968: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8029296C: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x80292970: jr          $ra
    // 0x80292974: swc1        $f18, 0x3990($at)
    MEM_W(0X3990, ctx->r1) = ctx->f18.u32l;
    return;
    // 0x80292974: swc1        $f18, 0x3990($at)
    MEM_W(0X3990, ctx->r1) = ctx->f18.u32l;
;}
RECOMP_FUNC void func_80292978(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80292978: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8029297C: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x80292980: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80292984: addiu       $a1, $a1, 0x3988
    ctx->r5 = ADD32(ctx->r5, 0X3988);
    // 0x80292988: swc1        $f0, 0x3978($at)
    MEM_W(0X3978, ctx->r1) = ctx->f0.u32l;
    // 0x8029298C: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x80292990: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x80292994: addiu       $a0, $a0, 0x397C
    ctx->r4 = ADD32(ctx->r4, 0X397C);
    // 0x80292998: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
    // 0x8029299C: beq         $v1, $zero, L_802929C4
    if (ctx->r3 == 0) {
        // 0x802929A0: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_802929C4;
    }
    // 0x802929A0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x802929A4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802929A8: beq         $v0, $at, L_80292A34
    if (ctx->r2 == ctx->r1) {
        // 0x802929AC: lui         $a2, 0x802C
        ctx->r6 = S32(0X802C << 16);
            goto L_80292A34;
    }
    // 0x802929AC: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x802929B0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802929B4: beq         $v0, $at, L_80292BD0
    if (ctx->r2 == ctx->r1) {
        // 0x802929B8: lui         $a2, 0x802C
        ctx->r6 = S32(0X802C << 16);
            goto L_80292BD0;
    }
    // 0x802929B8: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x802929BC: jr          $ra
    // 0x802929C0: nop

    return;
    // 0x802929C0: nop

L_802929C4:
    // 0x802929C4: lui         $a3, 0x802C
    ctx->r7 = S32(0X802C << 16);
    // 0x802929C8: addiu       $a3, $a3, 0x3989
    ctx->r7 = ADD32(ctx->r7, 0X3989);
    // 0x802929CC: lbu         $t6, 0x0($a3)
    ctx->r14 = MEM_BU(ctx->r7, 0X0);
    // 0x802929D0: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802929D4: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x802929D8: addiu       $v0, $v0, 0x3918
    ctx->r2 = ADD32(ctx->r2, 0X3918);
    // 0x802929DC: sb          $t7, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r15;
    // 0x802929E0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802929E4: lwc1        $f6, 0x3998($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3998);
    // 0x802929E8: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x802929EC: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x802929F0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x802929F4: addiu       $a2, $a2, 0x3910
    ctx->r6 = ADD32(ctx->r6, 0X3910);
    // 0x802929F8: swc1        $f8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f8.u32l;
    // 0x802929FC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80292A00: lwc1        $f16, 0x3990($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X3990);
    // 0x80292A04: lwc1        $f10, 0x0($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X0);
    // 0x80292A08: andi        $t8, $t7, 0xFF
    ctx->r24 = ctx->r15 & 0XFF;
    // 0x80292A0C: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80292A10: bne         $t8, $zero, L_80292C50
    if (ctx->r24 != 0) {
        // 0x80292A14: swc1        $f18, 0x0($a2)
        MEM_W(0X0, ctx->r6) = ctx->f18.u32l;
            goto L_80292C50;
    }
    // 0x80292A14: swc1        $f18, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f18.u32l;
    // 0x80292A18: addiu       $t9, $v1, 0x1
    ctx->r25 = ADD32(ctx->r3, 0X1);
    // 0x80292A1C: addiu       $t0, $zero, 0x64
    ctx->r8 = ADD32(0, 0X64);
    // 0x80292A20: sb          $t9, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r25;
    // 0x80292A24: sb          $t0, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r8;
    // 0x80292A28: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80292A2C: jr          $ra
    // 0x80292A30: swc1        $f0, 0x38E8($at)
    MEM_W(0X38E8, ctx->r1) = ctx->f0.u32l;
    return;
    // 0x80292A30: swc1        $f0, 0x38E8($at)
    MEM_W(0X38E8, ctx->r1) = ctx->f0.u32l;
L_80292A34:
    // 0x80292A34: lui         $a3, 0x802C
    ctx->r7 = S32(0X802C << 16);
    // 0x80292A38: addiu       $a3, $a3, 0x3989
    ctx->r7 = ADD32(ctx->r7, 0X3989);
    // 0x80292A3C: lui         $at, 0x4461
    ctx->r1 = S32(0X4461 << 16);
    // 0x80292A40: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80292A44: lbu         $t1, 0x0($a3)
    ctx->r9 = MEM_BU(ctx->r7, 0X0);
    // 0x80292A48: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x80292A4C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80292A50: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80292A54: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x80292A58: addiu       $v0, $v0, 0x3918
    ctx->r2 = ADD32(ctx->r2, 0X3918);
    // 0x80292A5C: addiu       $a2, $a2, 0x3910
    ctx->r6 = ADD32(ctx->r6, 0X3910);
    // 0x80292A60: andi        $t3, $t2, 0xFF
    ctx->r11 = ctx->r10 & 0XFF;
    // 0x80292A64: sb          $t2, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r10;
    // 0x80292A68: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
    // 0x80292A6C: bne         $t3, $zero, L_80292C50
    if (ctx->r11 != 0) {
        // 0x80292A70: swc1        $f6, 0x0($a2)
        MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
            goto L_80292C50;
    }
    // 0x80292A70: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
    // 0x80292A74: addiu       $t4, $v1, 0x1
    ctx->r12 = ADD32(ctx->r3, 0X1);
    // 0x80292A78: sb          $t4, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r12;
    // 0x80292A7C: lui         $t5, 0x8010
    ctx->r13 = S32(0X8010 << 16);
    // 0x80292A80: lhu         $t5, 0x522A($t5)
    ctx->r13 = MEM_HU(ctx->r13, 0X522A);
    // 0x80292A84: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80292A88: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x80292A8C: beq         $t6, $zero, L_80292B34
    if (ctx->r14 == 0) {
        // 0x80292A90: nop
    
            goto L_80292B34;
    }
    // 0x80292A90: nop

    // 0x80292A94: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x80292A98: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80292A9C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80292AA0: lwc1        $f10, 0x38E8($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X38E8);
    // 0x80292AA4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80292AA8: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80292AAC: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80292AB0: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x80292AB4: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80292AB8: nop

    // 0x80292ABC: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x80292AC0: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80292AC4: nop

    // 0x80292AC8: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x80292ACC: beq         $t8, $zero, L_80292B18
    if (ctx->r24 == 0) {
        // 0x80292AD0: nop
    
            goto L_80292B18;
    }
    // 0x80292AD0: nop

    // 0x80292AD4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80292AD8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80292ADC: sub.s       $f18, $f16, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x80292AE0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80292AE4: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80292AE8: nop

    // 0x80292AEC: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x80292AF0: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80292AF4: nop

    // 0x80292AF8: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x80292AFC: bne         $t8, $zero, L_80292B10
    if (ctx->r24 != 0) {
        // 0x80292B00: nop
    
            goto L_80292B10;
    }
    // 0x80292B00: nop

    // 0x80292B04: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
    // 0x80292B08: b           L_80292B28
    // 0x80292B0C: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
        goto L_80292B28;
    // 0x80292B0C: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
L_80292B10:
    // 0x80292B10: b           L_80292B28
    // 0x80292B14: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
        goto L_80292B28;
    // 0x80292B14: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
L_80292B18:
    // 0x80292B18: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
    // 0x80292B1C: nop

    // 0x80292B20: bltz        $t8, L_80292B10
    if (SIGNED(ctx->r24) < 0) {
        // 0x80292B24: nop
    
            goto L_80292B10;
    }
    // 0x80292B24: nop

L_80292B28:
    // 0x80292B28: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80292B2C: jr          $ra
    // 0x80292B30: sb          $t8, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r24;
    return;
    // 0x80292B30: sb          $t8, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r24;
L_80292B34:
    // 0x80292B34: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80292B38: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80292B3C: lwc1        $f6, 0x38E8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X38E8);
    // 0x80292B40: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80292B44: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80292B48: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80292B4C: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80292B50: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x80292B54: nop

    // 0x80292B58: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80292B5C: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x80292B60: nop

    // 0x80292B64: andi        $t0, $t0, 0x78
    ctx->r8 = ctx->r8 & 0X78;
    // 0x80292B68: beq         $t0, $zero, L_80292BB4
    if (ctx->r8 == 0) {
        // 0x80292B6C: nop
    
            goto L_80292BB4;
    }
    // 0x80292B6C: nop

    // 0x80292B70: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80292B74: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80292B78: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80292B7C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80292B80: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x80292B84: nop

    // 0x80292B88: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x80292B8C: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x80292B90: nop

    // 0x80292B94: andi        $t0, $t0, 0x78
    ctx->r8 = ctx->r8 & 0X78;
    // 0x80292B98: bne         $t0, $zero, L_80292BAC
    if (ctx->r8 != 0) {
        // 0x80292B9C: nop
    
            goto L_80292BAC;
    }
    // 0x80292B9C: nop

    // 0x80292BA0: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
    // 0x80292BA4: b           L_80292BC4
    // 0x80292BA8: or          $t0, $t0, $at
    ctx->r8 = ctx->r8 | ctx->r1;
        goto L_80292BC4;
    // 0x80292BA8: or          $t0, $t0, $at
    ctx->r8 = ctx->r8 | ctx->r1;
L_80292BAC:
    // 0x80292BAC: b           L_80292BC4
    // 0x80292BB0: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
        goto L_80292BC4;
    // 0x80292BB0: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
L_80292BB4:
    // 0x80292BB4: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
    // 0x80292BB8: nop

    // 0x80292BBC: bltz        $t0, L_80292BAC
    if (SIGNED(ctx->r8) < 0) {
        // 0x80292BC0: nop
    
            goto L_80292BAC;
    }
    // 0x80292BC0: nop

L_80292BC4:
    // 0x80292BC4: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80292BC8: jr          $ra
    // 0x80292BCC: sb          $t0, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r8;
    return;
    // 0x80292BCC: sb          $t0, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r8;
L_80292BD0:
    // 0x80292BD0: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x80292BD4: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80292BD8: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x80292BDC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80292BE0: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x80292BE4: swc1        $f16, 0x699C($at)
    MEM_W(0X699C, ctx->r1) = ctx->f16.u32l;
    // 0x80292BE8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80292BEC: swc1        $f2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f2.u32l;
    // 0x80292BF0: swc1        $f2, 0x3974($at)
    MEM_W(0X3974, ctx->r1) = ctx->f2.u32l;
    // 0x80292BF4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80292BF8: lui         $a3, 0x802C
    ctx->r7 = S32(0X802C << 16);
    // 0x80292BFC: swc1        $f0, 0x3970($at)
    MEM_W(0X3970, ctx->r1) = ctx->f0.u32l;
    // 0x80292C00: addiu       $a3, $a3, 0x3989
    ctx->r7 = ADD32(ctx->r7, 0X3989);
    // 0x80292C04: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x80292C08: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80292C0C: lbu         $t1, 0x0($a3)
    ctx->r9 = MEM_BU(ctx->r7, 0X0);
    // 0x80292C10: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x80292C14: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80292C18: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x80292C1C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80292C20: addiu       $v0, $v0, 0x3918
    ctx->r2 = ADD32(ctx->r2, 0X3918);
    // 0x80292C24: addiu       $a2, $a2, 0x3910
    ctx->r6 = ADD32(ctx->r6, 0X3910);
    // 0x80292C28: swc1        $f18, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f18.u32l;
    // 0x80292C2C: swc1        $f4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f4.u32l;
    // 0x80292C30: bgez        $t1, L_80292C48
    if (SIGNED(ctx->r9) >= 0) {
        // 0x80292C34: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_80292C48;
    }
    // 0x80292C34: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80292C38: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80292C3C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80292C40: nop

    // 0x80292C44: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_80292C48:
    // 0x80292C48: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80292C4C: swc1        $f8, 0x3924($at)
    MEM_W(0X3924, ctx->r1) = ctx->f8.u32l;
L_80292C50:
    // 0x80292C50: jr          $ra
    // 0x80292C54: nop

    return;
    // 0x80292C54: nop

;}
RECOMP_FUNC void func_80292C58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80292C58: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80292C5C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80292C60: sb          $zero, 0x3988($at)
    MEM_B(0X3988, ctx->r1) = 0;
    // 0x80292C64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80292C68: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80292C6C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80292C70: jal         0x80292D44
    // 0x80292C74: sb          $t6, 0x399C($at)
    MEM_B(0X399C, ctx->r1) = ctx->r14;
    func_80292D44(rdram, ctx);
        goto after_0;
    // 0x80292C74: sb          $t6, 0x399C($at)
    MEM_B(0X399C, ctx->r1) = ctx->r14;
    after_0:
    // 0x80292C78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80292C7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80292C80: jr          $ra
    // 0x80292C84: nop

    return;
    // 0x80292C84: nop

;}
RECOMP_FUNC void func_80292C88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80292C88: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x80292C8C: addiu       $a0, $a0, 0x3988
    ctx->r4 = ADD32(ctx->r4, 0X3988);
    // 0x80292C90: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x80292C94: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80292C98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80292C9C: beq         $v1, $zero, L_80292CB8
    if (ctx->r3 == 0) {
        // 0x80292CA0: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_80292CB8;
    }
    // 0x80292CA0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80292CA4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80292CA8: beq         $v0, $at, L_80292CE4
    if (ctx->r2 == ctx->r1) {
        // 0x80292CAC: lui         $v1, 0x802C
        ctx->r3 = S32(0X802C << 16);
            goto L_80292CE4;
    }
    // 0x80292CAC: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x80292CB0: b           L_80292D38
    // 0x80292CB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80292D38;
    // 0x80292CB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80292CB8:
    // 0x80292CB8: addiu       $t6, $v1, 0x1
    ctx->r14 = ADD32(ctx->r3, 0X1);
    // 0x80292CBC: sb          $t6, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r14;
    // 0x80292CC0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80292CC4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80292CC8: jal         0x80292D44
    // 0x80292CCC: sb          $t7, 0x399C($at)
    MEM_B(0X399C, ctx->r1) = ctx->r15;
    func_80292D44(rdram, ctx);
        goto after_0;
    // 0x80292CCC: sb          $t7, 0x399C($at)
    MEM_B(0X399C, ctx->r1) = ctx->r15;
    after_0:
    // 0x80292CD0: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x80292CD4: addiu       $v1, $v1, 0x396C
    ctx->r3 = ADD32(ctx->r3, 0X396C);
    // 0x80292CD8: addiu       $t8, $zero, 0x82
    ctx->r24 = ADD32(0, 0X82);
    // 0x80292CDC: b           L_80292D34
    // 0x80292CE0: sb          $t8, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r24;
        goto L_80292D34;
    // 0x80292CE0: sb          $t8, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r24;
L_80292CE4:
    // 0x80292CE4: addiu       $v1, $v1, 0x396C
    ctx->r3 = ADD32(ctx->r3, 0X396C);
    // 0x80292CE8: lbu         $t9, 0x0($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X0);
    // 0x80292CEC: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x80292CF0: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x80292CF4: andi        $t1, $t0, 0xFF
    ctx->r9 = ctx->r8 & 0XFF;
    // 0x80292CF8: bne         $t1, $zero, L_80292D2C
    if (ctx->r9 != 0) {
        // 0x80292CFC: sb          $t0, 0x0($v1)
        MEM_B(0X0, ctx->r3) = ctx->r8;
            goto L_80292D2C;
    }
    // 0x80292CFC: sb          $t0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r8;
    // 0x80292D00: lw          $v0, -0x2F98($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2F98);
    // 0x80292D04: lui         $t2, 0x3
    ctx->r10 = S32(0X3 << 16);
    // 0x80292D08: addu        $t2, $t2, $v0
    ctx->r10 = ADD32(ctx->r10, ctx->r2);
    // 0x80292D0C: lhu         $t2, 0x7CE($t2)
    ctx->r10 = MEM_HU(ctx->r10, 0X7CE);
    // 0x80292D10: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x80292D14: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80292D18: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x80292D1C: sh          $t3, 0x7CE($at)
    MEM_H(0X7CE, ctx->r1) = ctx->r11;
    // 0x80292D20: addiu       $t4, $zero, 0x78
    ctx->r12 = ADD32(0, 0X78);
    // 0x80292D24: jal         0x80292FA0
    // 0x80292D28: sb          $t4, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r12;
    func_80292FA0(rdram, ctx);
        goto after_1;
    // 0x80292D28: sb          $t4, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r12;
    after_1:
L_80292D2C:
    // 0x80292D2C: jal         0x80292D44
    // 0x80292D30: nop

    func_80292D44(rdram, ctx);
        goto after_2;
    // 0x80292D30: nop

    after_2:
L_80292D34:
    // 0x80292D34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80292D38:
    // 0x80292D38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80292D3C: jr          $ra
    // 0x80292D40: nop

    return;
    // 0x80292D40: nop

;}
RECOMP_FUNC void func_80292D44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80292D44: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x80292D48: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80292D4C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80292D50: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x80292D54: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80292D58: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x80292D5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80292D60: swc1        $f4, 0x699C($at)
    MEM_W(0X699C, ctx->r1) = ctx->f4.u32l;
    // 0x80292D64: lw          $v1, 0x88($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X88);
    // 0x80292D68: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x80292D6C: beq         $v1, $zero, L_80292DBC
    if (ctx->r3 == 0) {
        // 0x80292D70: nop
    
            goto L_80292DBC;
    }
    // 0x80292D70: nop

    // 0x80292D74: lwc1        $f6, 0x4C($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X4C);
    // 0x80292D78: addiu       $a0, $a0, 0x3978
    ctx->r4 = ADD32(ctx->r4, 0X3978);
    // 0x80292D7C: swc1        $f6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f6.u32l;
    // 0x80292D80: lw          $t6, 0x88($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X88);
    // 0x80292D84: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80292D88: lwc1        $f8, 0x44($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X44);
    // 0x80292D8C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80292D90: swc1        $f8, 0x397C($at)
    MEM_W(0X397C, ctx->r1) = ctx->f8.u32l;
    // 0x80292D94: lw          $t7, 0x88($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X88);
    // 0x80292D98: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80292D9C: lwc1        $f10, 0x78($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X78);
    // 0x80292DA0: nop

    // 0x80292DA4: swc1        $f10, 0x3980($at)
    MEM_W(0X3980, ctx->r1) = ctx->f10.u32l;
    // 0x80292DA8: lw          $t8, 0x88($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X88);
    // 0x80292DAC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80292DB0: lwc1        $f4, 0x70($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X70);
    // 0x80292DB4: b           L_80292E50
    // 0x80292DB8: swc1        $f4, 0x3984($at)
    MEM_W(0X3984, ctx->r1) = ctx->f4.u32l;
        goto L_80292E50;
    // 0x80292DB8: swc1        $f4, 0x3984($at)
    MEM_W(0X3984, ctx->r1) = ctx->f4.u32l;
L_80292DBC:
    // 0x80292DBC: lhu         $t9, 0xCE($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0XCE);
    // 0x80292DC0: nop

    // 0x80292DC4: beq         $t9, $zero, L_80292E18
    if (ctx->r25 == 0) {
        // 0x80292DC8: nop
    
            goto L_80292E18;
    }
    // 0x80292DC8: nop

    // 0x80292DCC: lh          $t0, 0xD8($v0)
    ctx->r8 = MEM_H(ctx->r2, 0XD8);
    // 0x80292DD0: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x80292DD4: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x80292DD8: addiu       $a0, $a0, 0x3978
    ctx->r4 = ADD32(ctx->r4, 0X3978);
    // 0x80292DDC: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80292DE0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80292DE4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80292DE8: swc1        $f8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f8.u32l;
    // 0x80292DEC: lh          $t1, 0xDA($v0)
    ctx->r9 = MEM_H(ctx->r2, 0XDA);
    // 0x80292DF0: nop

    // 0x80292DF4: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
    // 0x80292DF8: nop

    // 0x80292DFC: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80292E00: swc1        $f4, 0x397C($at)
    MEM_W(0X397C, ctx->r1) = ctx->f4.u32l;
    // 0x80292E04: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80292E08: swc1        $f18, 0x3980($at)
    MEM_W(0X3980, ctx->r1) = ctx->f18.u32l;
    // 0x80292E0C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80292E10: b           L_80292E50
    // 0x80292E14: swc1        $f18, 0x3984($at)
    MEM_W(0X3984, ctx->r1) = ctx->f18.u32l;
        goto L_80292E50;
    // 0x80292E14: swc1        $f18, 0x3984($at)
    MEM_W(0X3984, ctx->r1) = ctx->f18.u32l;
L_80292E18:
    // 0x80292E18: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80292E1C: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x80292E20: addiu       $a0, $a0, 0x3978
    ctx->r4 = ADD32(ctx->r4, 0X3978);
    // 0x80292E24: swc1        $f6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f6.u32l;
    // 0x80292E28: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80292E2C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80292E30: swc1        $f8, 0x397C($at)
    MEM_W(0X397C, ctx->r1) = ctx->f8.u32l;
    // 0x80292E34: lwc1        $f10, 0x1C($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x80292E38: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80292E3C: swc1        $f10, 0x3980($at)
    MEM_W(0X3980, ctx->r1) = ctx->f10.u32l;
    // 0x80292E40: lwc1        $f4, 0x14($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X14);
    // 0x80292E44: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80292E48: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80292E4C: swc1        $f4, 0x3984($at)
    MEM_W(0X3984, ctx->r1) = ctx->f4.u32l;
L_80292E50:
    // 0x80292E50: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80292E54: lbu         $v0, 0x399C($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X399C);
    // 0x80292E58: lui         $t3, 0x802C
    ctx->r11 = S32(0X802C << 16);
    // 0x80292E5C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80292E60: sll         $t2, $v0, 1
    ctx->r10 = S32(ctx->r2 << 1);
    // 0x80292E64: lwc1        $f12, 0x397C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X397C);
    // 0x80292E68: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80292E6C: lh          $t3, -0x3760($t3)
    ctx->r11 = MEM_H(ctx->r11, -0X3760);
    // 0x80292E70: lui         $t4, 0x802C
    ctx->r12 = S32(0X802C << 16);
    // 0x80292E74: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80292E78: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x80292E7C: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x80292E80: swc1        $f12, 0x3974($at)
    MEM_W(0X3974, ctx->r1) = ctx->f12.u32l;
    // 0x80292E84: lh          $t4, -0x374C($t4)
    ctx->r12 = MEM_H(ctx->r12, -0X374C);
    // 0x80292E88: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
    // 0x80292E8C: cvt.s.w     $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    ctx->f16.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80292E90: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80292E94: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x80292E98: swc1        $f0, 0x3970($at)
    MEM_W(0X3970, ctx->r1) = ctx->f0.u32l;
    // 0x80292E9C: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80292EA0: cvt.s.w     $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    ctx->f2.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80292EA4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80292EA8: sub.s       $f14, $f16, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = ctx->f16.fl - ctx->f12.fl;
    // 0x80292EAC: c.lt.s      $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f14.fl < ctx->f4.fl;
    // 0x80292EB0: sub.s       $f10, $f2, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x80292EB4: bc1f        L_80292F04
    if (!c1cs) {
        // 0x80292EB8: swc1        $f10, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
            goto L_80292F04;
    }
    // 0x80292EB8: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x80292EBC: lui         $at, 0xC270
    ctx->r1 = S32(0XC270 << 16);
    // 0x80292EC0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80292EC4: nop

    // 0x80292EC8: c.lt.s      $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f6.fl < ctx->f14.fl;
    // 0x80292ECC: nop

    // 0x80292ED0: bc1f        L_80292F08
    if (!c1cs) {
        // 0x80292ED4: lui         $at, 0x40A0
        ctx->r1 = S32(0X40A0 << 16);
            goto L_80292F08;
    }
    // 0x80292ED4: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x80292ED8: c.lt.s      $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f14.fl < ctx->f18.fl;
    // 0x80292EDC: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80292EE0: bc1f        L_80292EF8
    if (!c1cs) {
        // 0x80292EE4: nop
    
            goto L_80292EF8;
    }
    // 0x80292EE4: nop

    // 0x80292EE8: lui         $at, 0xC270
    ctx->r1 = S32(0XC270 << 16);
    // 0x80292EEC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80292EF0: b           L_80292F04
    // 0x80292EF4: add.s       $f16, $f14, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f14.fl + ctx->f12.fl;
        goto L_80292F04;
    // 0x80292EF4: add.s       $f16, $f14, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f14.fl + ctx->f12.fl;
L_80292EF8:
    // 0x80292EF8: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80292EFC: nop

    // 0x80292F00: add.s       $f16, $f14, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f14.fl + ctx->f12.fl;
L_80292F04:
    // 0x80292F04: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
L_80292F08:
    // 0x80292F08: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80292F0C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80292F10: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80292F14: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    // 0x80292F18: jal         0x8001C5D0
    // 0x80292F1C: swc1        $f8, 0x3910($at)
    MEM_W(0X3910, ctx->r1) = ctx->f8.u32l;
    func_8001C5D0(rdram, ctx);
        goto after_0;
    // 0x80292F1C: swc1        $f8, 0x3910($at)
    MEM_W(0X3910, ctx->r1) = ctx->f8.u32l;
    after_0:
    // 0x80292F20: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80292F24: lwc1        $f3, 0x630($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, 0X630);
    // 0x80292F28: lwc1        $f2, 0x634($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X634);
    // 0x80292F2C: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x80292F30: nop

    // 0x80292F34: div.d       $f4, $f10, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f2.d); 
    ctx->f4.d = DIV_D(ctx->f10.d, ctx->f2.d);
    // 0x80292F38: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80292F3C: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80292F40: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x80292F44: swc1        $f6, 0x3924($at)
    MEM_W(0X3924, ctx->r1) = ctx->f6.u32l;
    // 0x80292F48: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80292F4C: lwc1        $f8, 0x3910($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X3910);
    // 0x80292F50: nop

    // 0x80292F54: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80292F58: mul.d       $f4, $f10, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f2.d); 
    ctx->f4.d = MUL_D(ctx->f10.d, ctx->f2.d);
    // 0x80292F5C: jal         0x80081040
    // 0x80292F60: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    func_80081040(rdram, ctx);
        goto after_1;
    // 0x80292F60: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    after_1:
    // 0x80292F64: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80292F68: jal         0x80081040
    // 0x80292F6C: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    func_80081040(rdram, ctx);
        goto after_2;
    // 0x80292F6C: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x80292F70: lwc1        $f10, 0x18($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80292F74: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80292F78: mul.s       $f4, $f0, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x80292F7C: lwc1        $f6, 0x397C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X397C);
    // 0x80292F80: lwc1        $f16, 0x20($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80292F84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80292F88: sub.s       $f8, $f16, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f16.fl - ctx->f6.fl;
    // 0x80292F8C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80292F90: div.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f8.fl, ctx->f4.fl);
    // 0x80292F94: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80292F98: jr          $ra
    // 0x80292F9C: swc1        $f6, 0x3918($at)
    MEM_W(0X3918, ctx->r1) = ctx->f6.u32l;
    return;
    // 0x80292F9C: swc1        $f6, 0x3918($at)
    MEM_W(0X3918, ctx->r1) = ctx->f6.u32l;
;}
RECOMP_FUNC void func_80292FA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80292FA0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80292FA4: lwc1        $f0, 0x397C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X397C);
    // 0x80292FA8: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80292FAC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80292FB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80292FB4: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x80292FB8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80292FBC: bc1f        L_80293094
    if (!c1cs) {
        // 0x80292FC0: lui         $at, 0xC2C8
        ctx->r1 = S32(0XC2C8 << 16);
            goto L_80293094;
    }
    // 0x80292FC0: lui         $at, 0xC2C8
    ctx->r1 = S32(0XC2C8 << 16);
    // 0x80292FC4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80292FC8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80292FCC: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x80292FD0: nop

    // 0x80292FD4: bc1f        L_80293084
    if (!c1cs) {
        // 0x80292FD8: nop
    
            goto L_80293084;
    }
    // 0x80292FD8: nop

    // 0x80292FDC: lwc1        $f0, 0x3978($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X3978);
    // 0x80292FE0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80292FE4: lwc1        $f8, 0x638($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X638);
    // 0x80292FE8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80292FEC: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x80292FF0: nop

    // 0x80292FF4: bc1f        L_80293074
    if (!c1cs) {
        // 0x80292FF8: nop
    
            goto L_80293074;
    }
    // 0x80292FF8: nop

    // 0x80292FFC: lwc1        $f10, 0x63C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X63C);
    // 0x80293000: lui         $at, 0xC2FA
    ctx->r1 = S32(0XC2FA << 16);
    // 0x80293004: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x80293008: nop

    // 0x8029300C: bc1f        L_80293064
    if (!c1cs) {
        // 0x80293010: nop
    
            goto L_80293064;
    }
    // 0x80293010: nop

    // 0x80293014: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80293018: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x8029301C: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x80293020: lui         $at, 0x42FA
    ctx->r1 = S32(0X42FA << 16);
    // 0x80293024: bc1f        L_80293038
    if (!c1cs) {
        // 0x80293028: nop
    
            goto L_80293038;
    }
    // 0x80293028: nop

    // 0x8029302C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80293030: b           L_8029309C
    // 0x80293034: sb          $t6, 0x399C($at)
    MEM_B(0X399C, ctx->r1) = ctx->r14;
        goto L_8029309C;
    // 0x80293034: sb          $t6, 0x399C($at)
    MEM_B(0X399C, ctx->r1) = ctx->r14;
L_80293038:
    // 0x80293038: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8029303C: addiu       $t7, $zero, 0x7
    ctx->r15 = ADD32(0, 0X7);
    // 0x80293040: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x80293044: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80293048: bc1f        L_8029305C
    if (!c1cs) {
        // 0x8029304C: addiu       $t8, $zero, 0x8
        ctx->r24 = ADD32(0, 0X8);
            goto L_8029305C;
    }
    // 0x8029304C: addiu       $t8, $zero, 0x8
    ctx->r24 = ADD32(0, 0X8);
    // 0x80293050: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80293054: b           L_8029309C
    // 0x80293058: sb          $t7, 0x399C($at)
    MEM_B(0X399C, ctx->r1) = ctx->r15;
        goto L_8029309C;
    // 0x80293058: sb          $t7, 0x399C($at)
    MEM_B(0X399C, ctx->r1) = ctx->r15;
L_8029305C:
    // 0x8029305C: b           L_8029309C
    // 0x80293060: sb          $t8, 0x399C($at)
    MEM_B(0X399C, ctx->r1) = ctx->r24;
        goto L_8029309C;
    // 0x80293060: sb          $t8, 0x399C($at)
    MEM_B(0X399C, ctx->r1) = ctx->r24;
L_80293064:
    // 0x80293064: jal         0x802930AC
    // 0x80293068: nop

    func_802930AC(rdram, ctx);
        goto after_0;
    // 0x80293068: nop

    after_0:
    // 0x8029306C: b           L_802930A0
    // 0x80293070: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802930A0;
    // 0x80293070: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80293074:
    // 0x80293074: jal         0x802930AC
    // 0x80293078: nop

    func_802930AC(rdram, ctx);
        goto after_1;
    // 0x80293078: nop

    after_1:
    // 0x8029307C: b           L_802930A0
    // 0x80293080: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802930A0;
    // 0x80293080: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80293084:
    // 0x80293084: jal         0x802930AC
    // 0x80293088: nop

    func_802930AC(rdram, ctx);
        goto after_2;
    // 0x80293088: nop

    after_2:
    // 0x8029308C: b           L_802930A0
    // 0x80293090: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802930A0;
    // 0x80293090: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80293094:
    // 0x80293094: jal         0x802930AC
    // 0x80293098: nop

    func_802930AC(rdram, ctx);
        goto after_3;
    // 0x80293098: nop

    after_3:
L_8029309C:
    // 0x8029309C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802930A0:
    // 0x802930A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802930A4: jr          $ra
    // 0x802930A8: nop

    return;
    // 0x802930A8: nop

;}
RECOMP_FUNC void func_802930AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802930AC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802930B0: lwc1        $f4, 0x397C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X397C);
    // 0x802930B4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802930B8: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802930BC: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x802930C0: addiu       $v0, $v0, 0x399C
    ctx->r2 = ADD32(ctx->r2, 0X399C);
    // 0x802930C4: bc1f        L_802930E0
    if (!c1cs) {
        // 0x802930C8: lui         $at, 0x802C
        ctx->r1 = S32(0X802C << 16);
            goto L_802930E0;
    }
    // 0x802930C8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802930CC: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802930D0: addiu       $v0, $v0, 0x399C
    ctx->r2 = ADD32(ctx->r2, 0X399C);
    // 0x802930D4: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x802930D8: b           L_802930E4
    // 0x802930DC: sb          $t6, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r14;
        goto L_802930E4;
    // 0x802930DC: sb          $t6, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r14;
L_802930E0:
    // 0x802930E0: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
L_802930E4:
    // 0x802930E4: lwc1        $f0, 0x3978($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X3978);
    // 0x802930E8: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x802930EC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802930F0: lui         $at, 0xC37A
    ctx->r1 = S32(0XC37A << 16);
    // 0x802930F4: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x802930F8: nop

    // 0x802930FC: bc1f        L_80293118
    if (!c1cs) {
        // 0x80293100: nop
    
            goto L_80293118;
    }
    // 0x80293100: nop

    // 0x80293104: lbu         $t7, 0x0($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X0);
    // 0x80293108: nop

    // 0x8029310C: addiu       $t8, $t7, 0x2
    ctx->r24 = ADD32(ctx->r15, 0X2);
    // 0x80293110: jr          $ra
    // 0x80293114: sb          $t8, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r24;
    return;
    // 0x80293114: sb          $t8, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r24;
L_80293118:
    // 0x80293118: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8029311C: nop

    // 0x80293120: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x80293124: nop

    // 0x80293128: bc1f        L_80293140
    if (!c1cs) {
        // 0x8029312C: nop
    
            goto L_80293140;
    }
    // 0x8029312C: nop

    // 0x80293130: lbu         $t9, 0x0($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X0);
    // 0x80293134: nop

    // 0x80293138: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8029313C: sb          $t0, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r8;
L_80293140:
    // 0x80293140: jr          $ra
    // 0x80293144: nop

    return;
    // 0x80293144: nop

;}
