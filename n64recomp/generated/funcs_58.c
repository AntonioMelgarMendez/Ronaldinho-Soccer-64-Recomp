#include "iss64_recomp.h"
#include "funcs.h"

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
RECOMP_FUNC void ovl_8024B800_func_8026EA3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026EA3C: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x8026EA40: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8026EA44: lw          $t6, 0x914($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X914);
    // 0x8026EA48: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x8026EA4C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026EA50: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026EA54: lwc1        $f4, 0x4C($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X4C);
    // 0x8026EA58: nop

    // 0x8026EA5C: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8026EA60: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8026EA64: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x8026EA68: nop

    // 0x8026EA6C: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x8026EA70: sh          $t8, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r24;
    // 0x8026EA74: lw          $t9, 0x914($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X914);
    // 0x8026EA78: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x8026EA7C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026EA80: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026EA84: lwc1        $f8, 0x44($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X44);
    // 0x8026EA88: nop

    // 0x8026EA8C: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8026EA90: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x8026EA94: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x8026EA98: jr          $ra
    // 0x8026EA9C: sh          $t1, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r9;
    return;
    // 0x8026EA9C: sh          $t1, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r9;
;}
RECOMP_FUNC void ovl_8024B800_func_8026EAA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026EAA0: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x8026EAA4: addiu       $t0, $zero, 0x1F3
    ctx->r8 = ADD32(0, 0X1F3);
    // 0x8026EAA8: lhu         $t7, 0x8($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X8);
    // 0x8026EAAC: addiu       $t9, $zero, -0x1F3
    ctx->r25 = ADD32(0, -0X1F3);
    // 0x8026EAB0: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x8026EAB4: beq         $t8, $zero, L_8026EAC4
    if (ctx->r24 == 0) {
        // 0x8026EAB8: addiu       $t3, $zero, 0x1C
        ctx->r11 = ADD32(0, 0X1C);
            goto L_8026EAC4;
    }
    // 0x8026EAB8: addiu       $t3, $zero, 0x1C
    ctx->r11 = ADD32(0, 0X1C);
    // 0x8026EABC: b           L_8026EAC8
    // 0x8026EAC0: sh          $t9, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r25;
        goto L_8026EAC8;
    // 0x8026EAC0: sh          $t9, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r25;
L_8026EAC4:
    // 0x8026EAC4: sh          $t0, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r8;
L_8026EAC8:
    // 0x8026EAC8: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x8026EACC: lwc1        $f4, 0x44($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X44);
    // 0x8026EAD0: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x8026EAD4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026EAD8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026EADC: addiu       $t4, $zero, -0x1C
    ctx->r12 = ADD32(0, -0X1C);
    // 0x8026EAE0: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8026EAE4: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x8026EAE8: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x8026EAEC: sh          $t2, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r10;
    // 0x8026EAF0: lh          $v0, 0x30($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X30);
    // 0x8026EAF4: nop

    // 0x8026EAF8: slti        $at, $v0, 0x1D
    ctx->r1 = SIGNED(ctx->r2) < 0X1D ? 1 : 0;
    // 0x8026EAFC: bne         $at, $zero, L_8026EB14
    if (ctx->r1 != 0) {
        // 0x8026EB00: slti        $at, $v0, -0x1C
        ctx->r1 = SIGNED(ctx->r2) < -0X1C ? 1 : 0;
            goto L_8026EB14;
    }
    // 0x8026EB00: slti        $at, $v0, -0x1C
    ctx->r1 = SIGNED(ctx->r2) < -0X1C ? 1 : 0;
    // 0x8026EB04: sh          $t3, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r11;
    // 0x8026EB08: lh          $v0, 0x30($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X30);
    // 0x8026EB0C: nop

    // 0x8026EB10: slti        $at, $v0, -0x1C
    ctx->r1 = SIGNED(ctx->r2) < -0X1C ? 1 : 0;
L_8026EB14:
    // 0x8026EB14: beq         $at, $zero, L_8026EB20
    if (ctx->r1 == 0) {
        // 0x8026EB18: nop
    
            goto L_8026EB20;
    }
    // 0x8026EB18: nop

    // 0x8026EB1C: sh          $t4, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r12;
L_8026EB20:
    // 0x8026EB20: jr          $ra
    // 0x8026EB24: nop

    return;
    // 0x8026EB24: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026EB28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026EB28: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026EB2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026EB30: lhu         $t7, 0x24($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X24);
    // 0x8026EB34: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x8026EB38: lbu         $t9, 0x3($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X3);
    // 0x8026EB3C: sll         $t8, $t7, 5
    ctx->r24 = S32(ctx->r15 << 5);
    // 0x8026EB40: lw          $t6, 0x18($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X18);
    // 0x8026EB44: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x8026EB48: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x8026EB4C: andi        $t0, $t9, 0x20
    ctx->r8 = ctx->r25 & 0X20;
    // 0x8026EB50: beq         $t0, $zero, L_8026EB8C
    if (ctx->r8 == 0) {
        // 0x8026EB54: addu        $v1, $t6, $t8
        ctx->r3 = ADD32(ctx->r14, ctx->r24);
            goto L_8026EB8C;
    }
    // 0x8026EB54: addu        $v1, $t6, $t8
    ctx->r3 = ADD32(ctx->r14, ctx->r24);
    // 0x8026EB58: addiu       $t1, $zero, 0x3E8
    ctx->r9 = ADD32(0, 0X3E8);
    // 0x8026EB5C: sh          $zero, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = 0;
    // 0x8026EB60: sh          $t1, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r9;
    // 0x8026EB64: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8026EB68: lwc1        $f4, -0x2A18($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X2A18);
    // 0x8026EB6C: lwc1        $f6, 0x44($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X44);
    // 0x8026EB70: nop

    // 0x8026EB74: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x8026EB78: nop

    // 0x8026EB7C: bc1f        L_8026EC28
    if (!c1cs) {
        // 0x8026EB80: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8026EC28;
    }
    // 0x8026EB80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026EB84: b           L_8026EC24
    // 0x8026EB88: sh          $zero, 0xC($a0)
    MEM_H(0XC, ctx->r4) = 0;
        goto L_8026EC24;
    // 0x8026EB88: sh          $zero, 0xC($a0)
    MEM_H(0XC, ctx->r4) = 0;
L_8026EB8C:
    // 0x8026EB8C: lhu         $t2, 0x8($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X8);
    // 0x8026EB90: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8026EB94: andi        $t3, $t2, 0x8
    ctx->r11 = ctx->r10 & 0X8;
    // 0x8026EB98: beq         $t3, $zero, L_8026EBA8
    if (ctx->r11 == 0) {
        // 0x8026EB9C: nop
    
            goto L_8026EBA8;
    }
    // 0x8026EB9C: nop

    // 0x8026EBA0: b           L_8026EBA8
    // 0x8026EBA4: addiu       $v0, $zero, -0x7
    ctx->r2 = ADD32(0, -0X7);
        goto L_8026EBA8;
    // 0x8026EBA4: addiu       $v0, $zero, -0x7
    ctx->r2 = ADD32(0, -0X7);
L_8026EBA8:
    // 0x8026EBA8: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x8026EBAC: lwc1        $f16, 0x4C($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X4C);
    // 0x8026EBB0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8026EBB4: addiu       $t7, $zero, 0x15F
    ctx->r15 = ADD32(0, 0X15F);
    // 0x8026EBB8: sh          $t7, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r15;
    // 0x8026EBBC: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8026EBC0: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x8026EBC4: nop

    // 0x8026EBC8: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x8026EBCC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026EBD0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026EBD4: nop

    // 0x8026EBD8: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8026EBDC: mfc1        $t5, $f4
    ctx->r13 = (int32_t)ctx->f4.u32l;
    // 0x8026EBE0: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8026EBE4: sh          $t5, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r13;
    // 0x8026EBE8: jal         0x8026BD38
    // 0x8026EBEC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_8024B800_func_8026BD38(rdram, ctx);
        goto after_0;
    // 0x8026EBEC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8026EBF0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8026EBF4: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x8026EBF8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8026EBFC: lwc1        $f6, 0xB4($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0XB4);
    // 0x8026EC00: nop

    // 0x8026EC04: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x8026EC08: nop

    // 0x8026EC0C: bc1f        L_8026EC28
    if (!c1cs) {
        // 0x8026EC10: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8026EC28;
    }
    // 0x8026EC10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026EC14: lbu         $t6, 0x3($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X3);
    // 0x8026EC18: nop

    // 0x8026EC1C: ori         $t8, $t6, 0x20
    ctx->r24 = ctx->r14 | 0X20;
    // 0x8026EC20: sb          $t8, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r24;
L_8026EC24:
    // 0x8026EC24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026EC28:
    // 0x8026EC28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026EC2C: jr          $ra
    // 0x8026EC30: nop

    return;
    // 0x8026EC30: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026EC34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026EC34: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8026EC38: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8026EC3C: addiu       $v0, $v0, 0xB28
    ctx->r2 = ADD32(ctx->r2, 0XB28);
    // 0x8026EC40: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x8026EC44: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x8026EC48: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026EC4C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026EC50: lwc1        $f4, 0x4C($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X4C);
    // 0x8026EC54: nop

    // 0x8026EC58: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8026EC5C: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8026EC60: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x8026EC64: nop

    // 0x8026EC68: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x8026EC6C: sh          $t8, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r24;
    // 0x8026EC70: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x8026EC74: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x8026EC78: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026EC7C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026EC80: lwc1        $f8, 0x44($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X44);
    // 0x8026EC84: nop

    // 0x8026EC88: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8026EC8C: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x8026EC90: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x8026EC94: jr          $ra
    // 0x8026EC98: sh          $t1, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r9;
    return;
    // 0x8026EC98: sh          $t1, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r9;
;}
RECOMP_FUNC void ovl_8024B800_func_8026EC9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026EC9C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026ECA0: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8026ECA4: lw          $t6, 0xB30($t6)
    ctx->r14 = MEM_W(ctx->r14, 0XB30);
    // 0x8026ECA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026ECAC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8026ECB0: lwc1        $f12, 0x8C($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X8C);
    // 0x8026ECB4: jal         0x80081040
    // 0x8026ECB8: nop

    func_80081040(rdram, ctx);
        goto after_0;
    // 0x8026ECB8: nop

    after_0:
    // 0x8026ECBC: lui         $at, 0x4130
    ctx->r1 = S32(0X4130 << 16);
    // 0x8026ECC0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8026ECC4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8026ECC8: addiu       $v0, $v0, 0xB30
    ctx->r2 = ADD32(ctx->r2, 0XB30);
    // 0x8026ECCC: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x8026ECD0: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x8026ECD4: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x8026ECD8: lwc1        $f8, 0x4C($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X4C);
    // 0x8026ECDC: nop

    // 0x8026ECE0: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8026ECE4: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8026ECE8: nop

    // 0x8026ECEC: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x8026ECF0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026ECF4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026ECF8: nop

    // 0x8026ECFC: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8026ED00: mfc1        $t9, $f16
    ctx->r25 = (int32_t)ctx->f16.u32l;
    // 0x8026ED04: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8026ED08: sh          $t9, 0x2E($t0)
    MEM_H(0X2E, ctx->r8) = ctx->r25;
    // 0x8026ED0C: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x8026ED10: nop

    // 0x8026ED14: lwc1        $f12, 0x8C($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X8C);
    // 0x8026ED18: jal         0x80080E80
    // 0x8026ED1C: nop

    func_80080E80(rdram, ctx);
        goto after_1;
    // 0x8026ED1C: nop

    after_1:
    // 0x8026ED20: lui         $at, 0x4130
    ctx->r1 = S32(0X4130 << 16);
    // 0x8026ED24: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8026ED28: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x8026ED2C: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x8026ED30: lw          $t2, 0xB30($t2)
    ctx->r10 = MEM_W(ctx->r10, 0XB30);
    // 0x8026ED34: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
    // 0x8026ED38: lwc1        $f6, 0x44($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X44);
    // 0x8026ED3C: nop

    // 0x8026ED40: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8026ED44: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8026ED48: nop

    // 0x8026ED4C: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x8026ED50: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026ED54: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026ED58: nop

    // 0x8026ED5C: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8026ED60: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
    // 0x8026ED64: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8026ED68: sh          $t4, 0x30($t5)
    MEM_H(0X30, ctx->r13) = ctx->r12;
    // 0x8026ED6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026ED70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026ED74: jr          $ra
    // 0x8026ED78: nop

    return;
    // 0x8026ED78: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026ED7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026ED7C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8026ED80: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8026ED84: lbu         $t6, 0x3($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X3);
    // 0x8026ED88: addiu       $t9, $zero, 0x187
    ctx->r25 = ADD32(0, 0X187);
    // 0x8026ED8C: andi        $t7, $t6, 0x8
    ctx->r15 = ctx->r14 & 0X8;
    // 0x8026ED90: beq         $t7, $zero, L_8026EDA8
    if (ctx->r15 == 0) {
        // 0x8026ED94: lui         $at, 0x8028
        ctx->r1 = S32(0X8028 << 16);
            goto L_8026EDA8;
    }
    // 0x8026ED94: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8026ED98: addiu       $t8, $zero, 0x3E8
    ctx->r24 = ADD32(0, 0X3E8);
    // 0x8026ED9C: sh          $zero, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = 0;
    // 0x8026EDA0: b           L_8026EE14
    // 0x8026EDA4: sh          $t8, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r24;
        goto L_8026EE14;
    // 0x8026EDA4: sh          $t8, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r24;
L_8026EDA8:
    // 0x8026EDA8: sh          $zero, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = 0;
    // 0x8026EDAC: sh          $t9, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r25;
    // 0x8026EDB0: lw          $a2, 0x4C($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X4C);
    // 0x8026EDB4: lw          $a3, 0x44($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X44);
    // 0x8026EDB8: lwc1        $f14, -0x2A14($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X2A14);
    // 0x8026EDBC: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x8026EDC0: addiu       $t0, $sp, 0x20
    ctx->r8 = ADD32(ctx->r29, 0X20);
    // 0x8026EDC4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x8026EDC8: jal         0x80272B1C
    // 0x8026EDCC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    ovl_8024B800_func_80272B1C(rdram, ctx);
        goto after_0;
    // 0x8026EDCC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_0:
    // 0x8026EDD0: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8026EDD4: lwc1        $f14, -0x2A10($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X2A10);
    // 0x8026EDD8: lwc1        $f12, 0x20($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8026EDDC: jal         0x80279308
    // 0x8026EDE0: nop

    ovl_8024B800_func_80279308(rdram, ctx);
        goto after_1;
    // 0x8026EDE0: nop

    after_1:
    // 0x8026EDE4: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8026EDE8: lwc1        $f7, -0x2A08($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X2A08);
    // 0x8026EDEC: lwc1        $f6, -0x2A04($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X2A04);
    // 0x8026EDF0: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x8026EDF4: c.lt.d      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.d < ctx->f6.d;
    // 0x8026EDF8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8026EDFC: bc1f        L_8026EE18
    if (!c1cs) {
        // 0x8026EE00: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8026EE18;
    }
    // 0x8026EE00: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8026EE04: lbu         $t1, 0x3($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X3);
    // 0x8026EE08: nop

    // 0x8026EE0C: ori         $t2, $t1, 0x8
    ctx->r10 = ctx->r9 | 0X8;
    // 0x8026EE10: sb          $t2, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r10;
L_8026EE14:
    // 0x8026EE14: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8026EE18:
    // 0x8026EE18: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8026EE1C: jr          $ra
    // 0x8026EE20: nop

    return;
    // 0x8026EE20: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026EE24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026EE24: sh          $zero, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = 0;
    // 0x8026EE28: lh          $v0, 0x2E($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X2E);
    // 0x8026EE2C: sh          $zero, 0x30($a0)
    MEM_H(0X30, ctx->r4) = 0;
    // 0x8026EE30: slti        $at, $v0, 0x12D
    ctx->r1 = SIGNED(ctx->r2) < 0X12D ? 1 : 0;
    // 0x8026EE34: bne         $at, $zero, L_8026EE48
    if (ctx->r1 != 0) {
        // 0x8026EE38: addiu       $t6, $zero, 0x64
        ctx->r14 = ADD32(0, 0X64);
            goto L_8026EE48;
    }
    // 0x8026EE38: addiu       $t6, $zero, 0x64
    ctx->r14 = ADD32(0, 0X64);
    // 0x8026EE3C: sh          $t6, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r14;
    // 0x8026EE40: lh          $v0, 0x2E($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X2E);
    // 0x8026EE44: nop

L_8026EE48:
    // 0x8026EE48: slti        $at, $v0, -0x12C
    ctx->r1 = SIGNED(ctx->r2) < -0X12C ? 1 : 0;
    // 0x8026EE4C: beq         $at, $zero, L_8026EE58
    if (ctx->r1 == 0) {
        // 0x8026EE50: addiu       $t7, $zero, -0x64
        ctx->r15 = ADD32(0, -0X64);
            goto L_8026EE58;
    }
    // 0x8026EE50: addiu       $t7, $zero, -0x64
    ctx->r15 = ADD32(0, -0X64);
    // 0x8026EE54: sh          $t7, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r15;
L_8026EE58:
    // 0x8026EE58: jr          $ra
    // 0x8026EE5C: nop

    return;
    // 0x8026EE5C: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026EE60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026EE60: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8026EE64: lhu         $v0, 0xB6E($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XB6E);
    // 0x8026EE68: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8026EE6C: andi        $t6, $v0, 0x8
    ctx->r14 = ctx->r2 & 0X8;
    // 0x8026EE70: beq         $t6, $zero, L_8026EED0
    if (ctx->r14 == 0) {
        // 0x8026EE74: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_8026EED0;
    }
    // 0x8026EE74: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8026EE78: lwc1        $f12, 0x44($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X44);
    // 0x8026EE7C: jal         0x80272AEC
    // 0x8026EE80: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    ovl_8024B800_func_80272AEC(rdram, ctx);
        goto after_0;
    // 0x8026EE80: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    after_0:
    // 0x8026EE84: lui         $at, 0x4204
    ctx->r1 = S32(0X4204 << 16);
    // 0x8026EE88: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8026EE8C: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x8026EE90: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x8026EE94: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x8026EE98: bc1t        L_8026EEB8
    if (c1cs) {
        // 0x8026EE9C: lui         $v1, 0x8012
        ctx->r3 = S32(0X8012 << 16);
            goto L_8026EEB8;
    }
    // 0x8026EE9C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8026EEA0: lwc1        $f6, 0xB4($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0XB4);
    // 0x8026EEA4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8026EEA8: nop

    // 0x8026EEAC: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x8026EEB0: nop

    // 0x8026EEB4: bc1f        L_8026F200
    if (!c1cs) {
        // 0x8026EEB8: addiu       $v1, $v1, 0xB6E
        ctx->r3 = ADD32(ctx->r3, 0XB6E);
            goto L_8026F200;
    }
L_8026EEB8:
    // 0x8026EEB8: addiu       $v1, $v1, 0xB6E
    ctx->r3 = ADD32(ctx->r3, 0XB6E);
    // 0x8026EEBC: lhu         $t7, 0x0($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X0);
    // 0x8026EEC0: nop

    // 0x8026EEC4: ori         $t8, $t7, 0x10
    ctx->r24 = ctx->r15 | 0X10;
    // 0x8026EEC8: sh          $t8, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r24;
    // 0x8026EECC: andi        $v0, $t8, 0xFFFF
    ctx->r2 = ctx->r24 & 0XFFFF;
L_8026EED0:
    // 0x8026EED0: andi        $t9, $v0, 0x10
    ctx->r25 = ctx->r2 & 0X10;
    // 0x8026EED4: beq         $t9, $zero, L_8026EF40
    if (ctx->r25 == 0) {
        // 0x8026EED8: lui         $v0, 0x8009
        ctx->r2 = S32(0X8009 << 16);
            goto L_8026EF40;
    }
    // 0x8026EED8: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8026EEDC: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x8026EEE0: addiu       $v0, $v0, 0x3B20
    ctx->r2 = ADD32(ctx->r2, 0X3B20);
    // 0x8026EEE4: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x8026EEE8: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x8026EEEC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026EEF0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026EEF4: lwc1        $f10, 0x8($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X8);
    // 0x8026EEF8: nop

    // 0x8026EEFC: cvt.w.s     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8026EF00: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x8026EF04: mfc1        $t2, $f18
    ctx->r10 = (int32_t)ctx->f18.u32l;
    // 0x8026EF08: nop

    // 0x8026EF0C: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x8026EF10: sh          $t2, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r10;
    // 0x8026EF14: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x8026EF18: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x8026EF1C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026EF20: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026EF24: lwc1        $f4, 0x0($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X0);
    // 0x8026EF28: nop

    // 0x8026EF2C: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8026EF30: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
    // 0x8026EF34: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8026EF38: b           L_8026F200
    // 0x8026EF3C: sh          $t5, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r13;
        goto L_8026F200;
    // 0x8026EF3C: sh          $t5, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r13;
L_8026EF40:
    // 0x8026EF40: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x8026EF44: lw          $t6, 0x3B20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B20);
    // 0x8026EF48: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8026EF4C: lwc1        $f8, 0x8($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X8);
    // 0x8026EF50: lui         $a3, 0xC218
    ctx->r7 = S32(0XC218 << 16);
    // 0x8026EF54: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x8026EF58: addiu       $t7, $sp, 0x34
    ctx->r15 = ADD32(ctx->r29, 0X34);
    // 0x8026EF5C: bc1f        L_8026EF70
    if (!c1cs) {
        // 0x8026EF60: lui         $at, 0xC3FC
        ctx->r1 = S32(0XC3FC << 16);
            goto L_8026EF70;
    }
    // 0x8026EF60: lui         $at, 0xC3FC
    ctx->r1 = S32(0XC3FC << 16);
    // 0x8026EF64: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8026EF68: b           L_8026EF80
    // 0x8026EF6C: swc1        $f18, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f18.u32l;
        goto L_8026EF80;
    // 0x8026EF6C: swc1        $f18, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f18.u32l;
L_8026EF70:
    // 0x8026EF70: lui         $at, 0x43FC
    ctx->r1 = S32(0X43FC << 16);
    // 0x8026EF74: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8026EF78: nop

    // 0x8026EF7C: swc1        $f4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f4.u32l;
L_8026EF80:
    // 0x8026EF80: lwc1        $f12, 0x4C($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x8026EF84: lwc1        $f14, 0x44($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X44);
    // 0x8026EF88: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x8026EF8C: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x8026EF90: jal         0x80272B1C
    // 0x8026EF94: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    ovl_8024B800_func_80272B1C(rdram, ctx);
        goto after_1;
    // 0x8026EF94: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_1:
    // 0x8026EF98: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x8026EF9C: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x8026EFA0: addiu       $t8, $sp, 0x2C
    ctx->r24 = ADD32(ctx->r29, 0X2C);
    // 0x8026EFA4: lwc1        $f12, 0x4C($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x8026EFA8: lwc1        $f14, 0x44($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X44);
    // 0x8026EFAC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8026EFB0: jal         0x80272B1C
    // 0x8026EFB4: lui         $a3, 0x4218
    ctx->r7 = S32(0X4218 << 16);
    ovl_8024B800_func_80272B1C(rdram, ctx);
        goto after_2;
    // 0x8026EFB4: lui         $a3, 0x4218
    ctx->r7 = S32(0X4218 << 16);
    after_2:
    // 0x8026EFB8: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x8026EFBC: nop

    // 0x8026EFC0: lwc1        $f12, 0x44($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X44);
    // 0x8026EFC4: jal         0x80272AEC
    // 0x8026EFC8: nop

    ovl_8024B800_func_80272AEC(rdram, ctx);
        goto after_3;
    // 0x8026EFC8: nop

    after_3:
    // 0x8026EFCC: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x8026EFD0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8026EFD4: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x8026EFD8: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x8026EFDC: nop

    // 0x8026EFE0: bc1f        L_8026F128
    if (!c1cs) {
        // 0x8026EFE4: lui         $at, 0x8028
        ctx->r1 = S32(0X8028 << 16);
            goto L_8026F128;
    }
    // 0x8026EFE4: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8026EFE8: lwc1        $f8, 0x88($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X88);
    // 0x8026EFEC: lwc1        $f15, -0x2A00($at)
    ctx->f_odd[(15 - 1) * 2] = MEM_W(ctx->r1, -0X2A00);
    // 0x8026EFF0: lwc1        $f14, -0x29FC($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X29FC);
    // 0x8026EFF4: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x8026EFF8: add.d       $f18, $f10, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f14.d); 
    ctx->f18.d = ctx->f10.d + ctx->f14.d;
    // 0x8026EFFC: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x8026F000: jal         0x803F0164
    // 0x8026F004: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    LOOKUP_FUNC(0x803F0164)(rdram, ctx);
        goto after_4;
    // 0x8026F004: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    after_4:
    // 0x8026F008: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x8026F00C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8026F010: lw          $t9, 0xC8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XC8);
    // 0x8026F014: lwc1        $f15, -0x29F8($at)
    ctx->f_odd[(15 - 1) * 2] = MEM_W(ctx->r1, -0X29F8);
    // 0x8026F018: lhu         $t0, 0x8($t9)
    ctx->r8 = MEM_HU(ctx->r25, 0X8);
    // 0x8026F01C: lwc1        $f14, -0x29F4($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X29F4);
    // 0x8026F020: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x8026F024: beq         $t1, $zero, L_8026F0E4
    if (ctx->r9 == 0) {
        // 0x8026F028: mov.s       $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
            goto L_8026F0E4;
    }
    // 0x8026F028: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x8026F02C: cvt.d.s     $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.d = CVT_D_S(ctx->f0.fl);
    // 0x8026F030: c.lt.d      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.d < ctx->f2.d;
    // 0x8026F034: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8026F038: bc1f        L_8026F058
    if (!c1cs) {
        // 0x8026F03C: cvt.d.s     $f0, $f6
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f0.d = CVT_D_S(ctx->f6.fl);
            goto L_8026F058;
    }
    // 0x8026F03C: cvt.d.s     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f0.d = CVT_D_S(ctx->f6.fl);
    // 0x8026F040: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8026F044: lwc1        $f17, -0x29F0($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X29F0);
    // 0x8026F048: lwc1        $f16, -0x29EC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X29EC);
    // 0x8026F04C: nop

    // 0x8026F050: sub.d       $f4, $f2, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f16.d); 
    ctx->f4.d = ctx->f2.d - ctx->f16.d;
    // 0x8026F054: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
L_8026F058:
    // 0x8026F058: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8026F05C: c.lt.d      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.d < ctx->f0.d;
    // 0x8026F060: lwc1        $f17, -0x29E8($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X29E8);
    // 0x8026F064: lwc1        $f16, -0x29E4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X29E4);
    // 0x8026F068: bc1f        L_8026F07C
    if (!c1cs) {
        // 0x8026F06C: lui         $at, 0x43FC
        ctx->r1 = S32(0X43FC << 16);
            goto L_8026F07C;
    }
    // 0x8026F06C: lui         $at, 0x43FC
    ctx->r1 = S32(0X43FC << 16);
    // 0x8026F070: sub.d       $f8, $f0, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f16.d); 
    ctx->f8.d = ctx->f0.d - ctx->f16.d;
    // 0x8026F074: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x8026F078: swc1        $f10, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f10.u32l;
L_8026F07C:
    // 0x8026F07C: lwc1        $f18, 0x2C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8026F080: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8026F084: cvt.d.s     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f0.d = CVT_D_S(ctx->f18.fl);
    // 0x8026F088: c.lt.d      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.d < ctx->f0.d;
    // 0x8026F08C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8026F090: bc1f        L_8026F0A4
    if (!c1cs) {
        // 0x8026F094: nop
    
            goto L_8026F0A4;
    }
    // 0x8026F094: nop

    // 0x8026F098: sub.d       $f4, $f0, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f16.d); 
    ctx->f4.d = ctx->f0.d - ctx->f16.d;
    // 0x8026F09C: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x8026F0A0: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
L_8026F0A4:
    // 0x8026F0A4: lwc1        $f10, 0x4C($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x8026F0A8: lwc1        $f18, 0x34($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8026F0AC: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x8026F0B0: nop

    // 0x8026F0B4: bc1t        L_8026F0DC
    if (c1cs) {
        // 0x8026F0B8: nop
    
            goto L_8026F0DC;
    }
    // 0x8026F0B8: nop

    // 0x8026F0BC: c.lt.s      $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f12.fl < ctx->f18.fl;
    // 0x8026F0C0: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8026F0C4: bc1t        L_8026F0DC
    if (c1cs) {
        // 0x8026F0C8: nop
    
            goto L_8026F0DC;
    }
    // 0x8026F0C8: nop

    // 0x8026F0CC: c.lt.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl < ctx->f12.fl;
    // 0x8026F0D0: nop

    // 0x8026F0D4: bc1f        L_8026F12C
    if (!c1cs) {
        // 0x8026F0D8: lw          $t4, 0x44($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X44);
            goto L_8026F12C;
    }
    // 0x8026F0D8: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
L_8026F0DC:
    // 0x8026F0DC: b           L_8026F128
    // 0x8026F0E0: sw          $t2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r10;
        goto L_8026F128;
    // 0x8026F0E0: sw          $t2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r10;
L_8026F0E4:
    // 0x8026F0E4: lui         $at, 0xC3FC
    ctx->r1 = S32(0XC3FC << 16);
    // 0x8026F0E8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8026F0EC: lwc1        $f6, 0x4C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x8026F0F0: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8026F0F4: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x8026F0F8: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8026F0FC: bc1t        L_8026F124
    if (c1cs) {
        // 0x8026F100: nop
    
            goto L_8026F124;
    }
    // 0x8026F100: nop

    // 0x8026F104: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x8026F108: lwc1        $f18, 0x34($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8026F10C: bc1t        L_8026F124
    if (c1cs) {
        // 0x8026F110: nop
    
            goto L_8026F124;
    }
    // 0x8026F110: nop

    // 0x8026F114: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x8026F118: nop

    // 0x8026F11C: bc1f        L_8026F12C
    if (!c1cs) {
        // 0x8026F120: lw          $t4, 0x44($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X44);
            goto L_8026F12C;
    }
    // 0x8026F120: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
L_8026F124:
    // 0x8026F124: sw          $t3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r11;
L_8026F128:
    // 0x8026F128: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
L_8026F12C:
    // 0x8026F12C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8026F130: bne         $t4, $at, L_8026F198
    if (ctx->r12 != ctx->r1) {
        // 0x8026F134: nop
    
            goto L_8026F198;
    }
    // 0x8026F134: nop

    // 0x8026F138: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8026F13C: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8026F140: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x8026F144: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026F148: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026F14C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8026F150: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8026F154: lwc1        $f10, 0x44($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X44);
    // 0x8026F158: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8026F15C: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x8026F160: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x8026F164: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x8026F168: bc1f        L_8026F17C
    if (!c1cs) {
        // 0x8026F16C: sh          $t6, 0x2E($a0)
        MEM_H(0X2E, ctx->r4) = ctx->r14;
            goto L_8026F17C;
    }
    // 0x8026F16C: sh          $t6, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r14;
    // 0x8026F170: addiu       $t7, $zero, 0x1C
    ctx->r15 = ADD32(0, 0X1C);
    // 0x8026F174: b           L_8026F184
    // 0x8026F178: sh          $t7, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r15;
        goto L_8026F184;
    // 0x8026F178: sh          $t7, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r15;
L_8026F17C:
    // 0x8026F17C: addiu       $t8, $zero, -0x1C
    ctx->r24 = ADD32(0, -0X1C);
    // 0x8026F180: sh          $t8, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r24;
L_8026F184:
    // 0x8026F184: lhu         $t9, 0xB6E($t9)
    ctx->r25 = MEM_HU(ctx->r25, 0XB6E);
    // 0x8026F188: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8026F18C: ori         $t0, $t9, 0x8
    ctx->r8 = ctx->r25 | 0X8;
    // 0x8026F190: b           L_8026F200
    // 0x8026F194: sh          $t0, 0xB6E($at)
    MEM_H(0XB6E, ctx->r1) = ctx->r8;
        goto L_8026F200;
    // 0x8026F194: sh          $t0, 0xB6E($at)
    MEM_H(0XB6E, ctx->r1) = ctx->r8;
L_8026F198:
    // 0x8026F198: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8026F19C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8026F1A0: addiu       $v0, $v0, 0x3B20
    ctx->r2 = ADD32(ctx->r2, 0X3B20);
    // 0x8026F1A4: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x8026F1A8: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x8026F1AC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026F1B0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026F1B4: lwc1        $f18, 0x8($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X8);
    // 0x8026F1B8: nop

    // 0x8026F1BC: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8026F1C0: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x8026F1C4: mfc1        $t3, $f4
    ctx->r11 = (int32_t)ctx->f4.u32l;
    // 0x8026F1C8: nop

    // 0x8026F1CC: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8026F1D0: sh          $t3, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r11;
    // 0x8026F1D4: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    // 0x8026F1D8: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x8026F1DC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026F1E0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026F1E4: lwc1        $f6, 0x0($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X0);
    // 0x8026F1E8: nop

    // 0x8026F1EC: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8026F1F0: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    // 0x8026F1F4: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8026F1F8: sh          $t6, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r14;
    // 0x8026F1FC: nop

L_8026F200:
    // 0x8026F200: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8026F204: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x8026F208: jr          $ra
    // 0x8026F20C: nop

    return;
    // 0x8026F20C: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026F210(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026F210: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x8026F214: nop

    // 0x8026F218: lh          $t6, 0x932($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X932);
    // 0x8026F21C: nop

    // 0x8026F220: sh          $t6, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r14;
    // 0x8026F224: lh          $t7, 0x934($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X934);
    // 0x8026F228: jr          $ra
    // 0x8026F22C: sh          $t7, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r15;
    return;
    // 0x8026F22C: sh          $t7, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void ovl_8024B800_func_8026F230(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026F230: lhu         $t6, 0x2C($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X2C);
    // 0x8026F234: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x8026F238: div         $zero, $t6, $at
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r1)));
    // 0x8026F23C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8026F240: lwc1        $f9, -0x29E0($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X29E0);
    // 0x8026F244: lwc1        $f8, -0x29DC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X29DC);
    // 0x8026F248: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x8026F24C: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x8026F250: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8026F254: mfhi        $t7
    ctx->r15 = hi;
    // 0x8026F258: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8026F25C: nop

    // 0x8026F260: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x8026F264: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x8026F268: add.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d + ctx->f16.d;
    // 0x8026F26C: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x8026F270: jr          $ra
    // 0x8026F274: swc1        $f4, 0xAC($a0)
    MEM_W(0XAC, ctx->r4) = ctx->f4.u32l;
    return;
    // 0x8026F274: swc1        $f4, 0xAC($a0)
    MEM_W(0XAC, ctx->r4) = ctx->f4.u32l;
;}
RECOMP_FUNC void ovl_8024B800_func_8026F278(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026F278: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8026F27C: lhu         $t6, 0xB78($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB78);
    // 0x8026F280: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x8026F284: beq         $t6, $at, L_8026F2A8
    if (ctx->r14 == ctx->r1) {
        // 0x8026F288: nop
    
            goto L_8026F2A8;
    }
    // 0x8026F288: nop

    // 0x8026F28C: lhu         $t7, 0x14($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X14);
    // 0x8026F290: lhu         $t9, 0x12($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X12);
    // 0x8026F294: andi        $t8, $t7, 0xFBFF
    ctx->r24 = ctx->r15 & 0XFBFF;
    // 0x8026F298: andi        $t0, $t9, 0xFCFF
    ctx->r8 = ctx->r25 & 0XFCFF;
    // 0x8026F29C: sh          $t8, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r24;
    // 0x8026F2A0: sw          $zero, 0x28($a0)
    MEM_W(0X28, ctx->r4) = 0;
    // 0x8026F2A4: sh          $t0, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r8;
L_8026F2A8:
    // 0x8026F2A8: jr          $ra
    // 0x8026F2AC: nop

    return;
    // 0x8026F2AC: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026F2B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026F2B0: jr          $ra
    // 0x8026F2B4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x8026F2B4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void ovl_8024B800_func_8026F2B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026F2B8: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x8026F2BC: nop

    // 0x8026F2C0: lhu         $t7, 0x10($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X10);
    // 0x8026F2C4: nop

    // 0x8026F2C8: andi        $t8, $t7, 0x200
    ctx->r24 = ctx->r15 & 0X200;
    // 0x8026F2CC: beq         $t8, $zero, L_8026F2E4
    if (ctx->r24 == 0) {
        // 0x8026F2D0: nop
    
            goto L_8026F2E4;
    }
    // 0x8026F2D0: nop

    // 0x8026F2D4: lhu         $t9, 0x12($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X12);
    // 0x8026F2D8: sw          $zero, 0x28($a0)
    MEM_W(0X28, ctx->r4) = 0;
    // 0x8026F2DC: andi        $t0, $t9, 0xFCFF
    ctx->r8 = ctx->r25 & 0XFCFF;
    // 0x8026F2E0: sh          $t0, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r8;
L_8026F2E4:
    // 0x8026F2E4: jr          $ra
    // 0x8026F2E8: nop

    return;
    // 0x8026F2E8: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026F2EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026F2EC: sw          $a1, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r5;
    // 0x8026F2F0: lhu         $t7, 0x0($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X0);
    // 0x8026F2F4: lhu         $t8, 0x12($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X12);
    // 0x8026F2F8: lhu         $t0, 0x14($a0)
    ctx->r8 = MEM_HU(ctx->r4, 0X14);
    // 0x8026F2FC: ori         $t9, $t8, 0x300
    ctx->r25 = ctx->r24 | 0X300;
    // 0x8026F300: ori         $t1, $t0, 0x400
    ctx->r9 = ctx->r8 | 0X400;
    // 0x8026F304: sh          $t9, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r25;
    // 0x8026F308: sh          $t1, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r9;
    // 0x8026F30C: jr          $ra
    // 0x8026F310: sb          $t7, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r15;
    return;
    // 0x8026F310: sb          $t7, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void ovl_8024B800_func_8026F314(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026F314: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x8026F318: addiu       $a1, $a1, 0xB7E
    ctx->r5 = ADD32(ctx->r5, 0XB7E);
    // 0x8026F31C: lhu         $a0, 0x0($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X0);
    // 0x8026F320: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8026F324: andi        $t6, $a0, 0x8
    ctx->r14 = ctx->r4 & 0X8;
    // 0x8026F328: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8026F32C: beq         $t6, $zero, L_8026F3DC
    if (ctx->r14 == 0) {
        // 0x8026F330: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_8026F3DC;
    }
    // 0x8026F330: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8026F334: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x8026F338: lw          $t7, 0x3EF4($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3EF4);
    // 0x8026F33C: addiu       $at, $zero, 0x1C
    ctx->r1 = ADD32(0, 0X1C);
    // 0x8026F340: lw          $v1, 0x30($t7)
    ctx->r3 = MEM_W(ctx->r15, 0X30);
    // 0x8026F344: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8026F348: lhu         $v0, 0x4($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X4);
    // 0x8026F34C: ori         $t8, $a0, 0x80
    ctx->r24 = ctx->r4 | 0X80;
    // 0x8026F350: bne         $v0, $at, L_8026F364
    if (ctx->r2 != ctx->r1) {
        // 0x8026F354: addiu       $at, $zero, 0x1D
        ctx->r1 = ADD32(0, 0X1D);
            goto L_8026F364;
    }
    // 0x8026F354: addiu       $at, $zero, 0x1D
    ctx->r1 = ADD32(0, 0X1D);
    // 0x8026F358: b           L_8026F398
    // 0x8026F35C: sh          $t8, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r24;
        goto L_8026F398;
    // 0x8026F35C: sh          $t8, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r24;
    // 0x8026F360: addiu       $at, $zero, 0x1D
    ctx->r1 = ADD32(0, 0X1D);
L_8026F364:
    // 0x8026F364: bne         $v0, $at, L_8026F378
    if (ctx->r2 != ctx->r1) {
        // 0x8026F368: addiu       $at, $zero, 0x1E
        ctx->r1 = ADD32(0, 0X1E);
            goto L_8026F378;
    }
    // 0x8026F368: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x8026F36C: b           L_8026F398
    // 0x8026F370: addiu       $s0, $zero, 0xD
    ctx->r16 = ADD32(0, 0XD);
        goto L_8026F398;
    // 0x8026F370: addiu       $s0, $zero, 0xD
    ctx->r16 = ADD32(0, 0XD);
    // 0x8026F374: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
L_8026F378:
    // 0x8026F378: bne         $v0, $at, L_8026F398
    if (ctx->r2 != ctx->r1) {
        // 0x8026F37C: lui         $t9, 0x8012
        ctx->r25 = S32(0X8012 << 16);
            goto L_8026F398;
    }
    // 0x8026F37C: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x8026F380: lhu         $t9, 0xB70($t9)
    ctx->r25 = MEM_HU(ctx->r25, 0XB70);
    // 0x8026F384: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8026F388: bne         $t9, $at, L_8026F398
    if (ctx->r25 != ctx->r1) {
        // 0x8026F38C: addiu       $s0, $zero, 0xE
        ctx->r16 = ADD32(0, 0XE);
            goto L_8026F398;
    }
    // 0x8026F38C: addiu       $s0, $zero, 0xE
    ctx->r16 = ADD32(0, 0XE);
    // 0x8026F390: b           L_8026F398
    // 0x8026F394: addiu       $s0, $zero, 0xF
    ctx->r16 = ADD32(0, 0XF);
        goto L_8026F398;
    // 0x8026F394: addiu       $s0, $zero, 0xF
    ctx->r16 = ADD32(0, 0XF);
L_8026F398:
    // 0x8026F398: beq         $s0, $zero, L_8026F3DC
    if (ctx->r16 == 0) {
        // 0x8026F39C: lui         $t0, 0x8012
        ctx->r8 = S32(0X8012 << 16);
            goto L_8026F3DC;
    }
    // 0x8026F39C: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x8026F3A0: lw          $t0, 0xB28($t0)
    ctx->r8 = MEM_W(ctx->r8, 0XB28);
    // 0x8026F3A4: lui         $a3, 0x8028
    ctx->r7 = S32(0X8028 << 16);
    // 0x8026F3A8: lw          $v0, 0xC8($t0)
    ctx->r2 = MEM_W(ctx->r8, 0XC8);
    // 0x8026F3AC: lw          $a3, -0x1B24($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X1B24);
    // 0x8026F3B0: lh          $t1, 0x934($v0)
    ctx->r9 = MEM_H(ctx->r2, 0X934);
    // 0x8026F3B4: lh          $t2, 0x932($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X932);
    // 0x8026F3B8: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x8026F3BC: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x8026F3C0: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8026F3C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8026F3C8: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8026F3CC: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x8026F3D0: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x8026F3D4: jal         0x80013364
    // 0x8026F3D8: nop

    func_80013364(rdram, ctx);
        goto after_0;
    // 0x8026F3D8: nop

    after_0:
L_8026F3DC:
    // 0x8026F3DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8026F3E0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8026F3E4: jr          $ra
    // 0x8026F3E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8026F3E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_8024B800_func_8026F3EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026F3EC: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x8026F3F0: lw          $t6, 0x3EF4($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3EF4);
    // 0x8026F3F4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8026F3F8: lw          $v0, 0x30($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X30);
    // 0x8026F3FC: nop

    // 0x8026F400: lhu         $t7, 0x4($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X4);
    // 0x8026F404: nop

    // 0x8026F408: beq         $t7, $at, L_8026F420
    if (ctx->r15 == ctx->r1) {
        // 0x8026F40C: nop
    
            goto L_8026F420;
    }
    // 0x8026F40C: nop

    // 0x8026F410: lhu         $t8, 0x1C($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X1C);
    // 0x8026F414: addiu       $at, $zero, 0xF1
    ctx->r1 = ADD32(0, 0XF1);
    // 0x8026F418: bne         $t8, $at, L_8026F428
    if (ctx->r24 != ctx->r1) {
        // 0x8026F41C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8026F428;
    }
    // 0x8026F41C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8026F420:
    // 0x8026F420: jr          $ra
    // 0x8026F424: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8026F424: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8026F428:
    // 0x8026F428: jr          $ra
    // 0x8026F42C: nop

    return;
    // 0x8026F42C: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026F430(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026F430: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026F434: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026F438: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8026F43C: or          $t6, $a0, $zero
    ctx->r14 = ctx->r4 | 0;
    // 0x8026F440: lw          $v0, 0xC8($t6)
    ctx->r2 = MEM_W(ctx->r14, 0XC8);
    // 0x8026F444: lw          $t7, 0x28($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X28);
    // 0x8026F448: lh          $t9, 0x934($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X934);
    // 0x8026F44C: lh          $t0, 0x932($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X932);
    // 0x8026F450: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x8026F454: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x8026F458: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8026F45C: lhu         $a0, 0x0($t7)
    ctx->r4 = MEM_HU(ctx->r15, 0X0);
    // 0x8026F460: lui         $a3, 0x8028
    ctx->r7 = S32(0X8028 << 16);
    // 0x8026F464: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8026F468: lw          $a3, -0x1B24($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X1B24);
    // 0x8026F46C: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x8026F470: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x8026F474: andi        $t8, $a0, 0xFF
    ctx->r24 = ctx->r4 & 0XFF;
    // 0x8026F478: jal         0x80013364
    // 0x8026F47C: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    func_80013364(rdram, ctx);
        goto after_0;
    // 0x8026F47C: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    after_0:
    // 0x8026F480: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8026F484: jal         0x8026F510
    // 0x8026F488: nop

    ovl_8024B800_func_8026F510(rdram, ctx);
        goto after_1;
    // 0x8026F488: nop

    after_1:
    // 0x8026F48C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026F490: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026F494: jr          $ra
    // 0x8026F498: nop

    return;
    // 0x8026F498: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026F49C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026F49C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026F4A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026F4A4: lhu         $t6, 0xE($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0XE);
    // 0x8026F4A8: addiu       $at, $zero, 0x1C
    ctx->r1 = ADD32(0, 0X1C);
    // 0x8026F4AC: beq         $t6, $at, L_8026F504
    if (ctx->r14 == ctx->r1) {
        // 0x8026F4B0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8026F504;
    }
    // 0x8026F4B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026F4B4: lhu         $t7, 0x14($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X14);
    // 0x8026F4B8: addiu       $a1, $zero, 0x1C
    ctx->r5 = ADD32(0, 0X1C);
    // 0x8026F4BC: andi        $t8, $t7, 0x8000
    ctx->r24 = ctx->r15 & 0X8000;
    // 0x8026F4C0: bne         $t8, $zero, L_8026F504
    if (ctx->r24 != 0) {
        // 0x8026F4C4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8026F504;
    }
    // 0x8026F4C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026F4C8: jal         0x8024BC08
    // 0x8026F4CC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_8024B800_func_8024BC08(rdram, ctx);
        goto after_0;
    // 0x8026F4CC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8026F4D0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8026F4D4: nop

    // 0x8026F4D8: lw          $v0, 0x28($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X28);
    // 0x8026F4DC: nop

    // 0x8026F4E0: lhu         $t9, 0x0($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X0);
    // 0x8026F4E4: addiu       $t1, $v0, 0x2
    ctx->r9 = ADD32(ctx->r2, 0X2);
    // 0x8026F4E8: andi        $t0, $t9, 0xFF
    ctx->r8 = ctx->r25 & 0XFF;
    // 0x8026F4EC: sh          $t0, 0xE4($a0)
    MEM_H(0XE4, ctx->r4) = ctx->r8;
    // 0x8026F4F0: sw          $t1, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r9;
    // 0x8026F4F4: lhu         $t3, 0x0($t1)
    ctx->r11 = MEM_HU(ctx->r9, 0X0);
    // 0x8026F4F8: jal         0x8026F510
    // 0x8026F4FC: sh          $t3, 0xE6($a0)
    MEM_H(0XE6, ctx->r4) = ctx->r11;
    ovl_8024B800_func_8026F510(rdram, ctx);
        goto after_1;
    // 0x8026F4FC: sh          $t3, 0xE6($a0)
    MEM_H(0XE6, ctx->r4) = ctx->r11;
    after_1:
    // 0x8026F500: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026F504:
    // 0x8026F504: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026F508: jr          $ra
    // 0x8026F50C: nop

    return;
    // 0x8026F50C: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026F510(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026F510: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8026F514: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8026F518: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x8026F51C: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8026F520: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x8026F524: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x8026F528: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x8026F52C: lwc1        $f22, -0x29D4($at)
    ctx->f22.u32l = MEM_W(ctx->r1, -0X29D4);
    // 0x8026F530: lwc1        $f23, -0x29D8($at)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r1, -0X29D8);
    // 0x8026F534: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8026F538: addiu       $s1, $s1, 0xB7E
    ctx->r17 = ADD32(ctx->r17, 0XB7E);
    // 0x8026F53C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8026F540: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8026F544: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
L_8026F548:
    // 0x8026F548: lw          $t6, 0x28($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X28);
    // 0x8026F54C: nop

    // 0x8026F550: addiu       $v1, $t6, 0x2
    ctx->r3 = ADD32(ctx->r14, 0X2);
    // 0x8026F554: sw          $v1, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r3;
    // 0x8026F558: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x8026F55C: nop

    // 0x8026F560: srl         $t8, $v0, 8
    ctx->r24 = S32(U32(ctx->r2) >> 8);
    // 0x8026F564: sltiu       $at, $t8, 0x17
    ctx->r1 = ctx->r24 < 0X17 ? 1 : 0;
    // 0x8026F568: beq         $at, $zero, L_8026F7A0
    if (ctx->r1 == 0) {
        // 0x8026F56C: sll         $t8, $t8, 2
        ctx->r24 = S32(ctx->r24 << 2);
            goto L_8026F7A0;
    }
    // 0x8026F56C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8026F570: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8026F574: addu        $at, $at, $t8
    gpr jr_addend_8026F580 = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8026F578: lw          $t8, -0x29D0($at)
    ctx->r24 = ADD32(ctx->r1, -0X29D0);
    // 0x8026F57C: nop

    // 0x8026F580: jr          $t8
    // 0x8026F584: nop

    switch (jr_addend_8026F580 >> 2) {
        case 0: goto L_8026F5F8; break;
        case 1: goto L_8026F61C; break;
        case 2: goto L_8026F624; break;
        case 3: goto L_8026F760; break;
        case 4: goto L_8026F728; break;
        case 5: goto L_8026F768; break;
        case 6: goto L_8026F774; break;
        case 7: goto L_8026F798; break;
        case 8: goto L_8026F754; break;
        case 9: goto L_8026F738; break;
        case 10: goto L_8026F61C; break;
        case 11: goto L_8026F7A0; break;
        case 12: goto L_8026F780; break;
        case 13: goto L_8026F5E8; break;
        case 14: goto L_8026F5DC; break;
        case 15: goto L_8026F78C; break;
        case 16: goto L_8026F798; break;
        case 17: goto L_8026F658; break;
        case 18: goto L_8026F7A0; break;
        case 19: goto L_8026F5C8; break;
        case 20: goto L_8026F608; break;
        case 21: goto L_8026F59C; break;
        case 22: goto L_8026F588; break;
        default: switch_error(__func__, 0x8026F580, 0x8027D630);
    }
    // 0x8026F584: nop

L_8026F588:
    // 0x8026F588: lhu         $t9, 0x14($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X14);
    // 0x8026F58C: nop

    // 0x8026F590: ori         $t0, $t9, 0x1000
    ctx->r8 = ctx->r25 | 0X1000;
    // 0x8026F594: b           L_8026F548
    // 0x8026F598: sh          $t0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r8;
        goto L_8026F548;
    // 0x8026F598: sh          $t0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r8;
L_8026F59C:
    // 0x8026F59C: jal         0x8026F3EC
    // 0x8026F5A0: nop

    ovl_8024B800_func_8026F3EC(rdram, ctx);
        goto after_0;
    // 0x8026F5A0: nop

    after_0:
    // 0x8026F5A4: beq         $v0, $zero, L_8026F7A4
    if (ctx->r2 == 0) {
        // 0x8026F5A8: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_8026F7A4;
    }
    // 0x8026F5A8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8026F5AC: jal         0x8026F510
    // 0x8026F5B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026F510(rdram, ctx);
        goto after_1;
    // 0x8026F5B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8026F5B4: lhu         $t1, 0x0($s1)
    ctx->r9 = MEM_HU(ctx->r17, 0X0);
    // 0x8026F5B8: nop

    // 0x8026F5BC: ori         $t2, $t1, 0x40
    ctx->r10 = ctx->r9 | 0X40;
    // 0x8026F5C0: b           L_8026F7A0
    // 0x8026F5C4: sh          $t2, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r10;
        goto L_8026F7A0;
    // 0x8026F5C4: sh          $t2, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r10;
L_8026F5C8:
    // 0x8026F5C8: lhu         $t3, 0x0($s1)
    ctx->r11 = MEM_HU(ctx->r17, 0X0);
    // 0x8026F5CC: andi        $t4, $v0, 0xFF
    ctx->r12 = ctx->r2 & 0XFF;
    // 0x8026F5D0: or          $t5, $t3, $t4
    ctx->r13 = ctx->r11 | ctx->r12;
    // 0x8026F5D4: b           L_8026F548
    // 0x8026F5D8: sh          $t5, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r13;
        goto L_8026F548;
    // 0x8026F5D8: sh          $t5, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r13;
L_8026F5DC:
    // 0x8026F5DC: andi        $t6, $v0, 0xFF
    ctx->r14 = ctx->r2 & 0XFF;
    // 0x8026F5E0: b           L_8026F548
    // 0x8026F5E4: sh          $t6, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r14;
        goto L_8026F548;
    // 0x8026F5E4: sh          $t6, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r14;
L_8026F5E8:
    // 0x8026F5E8: jal         0x8026F430
    // 0x8026F5EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026F430(rdram, ctx);
        goto after_2;
    // 0x8026F5EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8026F5F0: b           L_8026F7A4
    // 0x8026F5F4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_8026F7A4;
    // 0x8026F5F4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_8026F5F8:
    // 0x8026F5F8: lhu         $t7, 0x14($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X14);
    // 0x8026F5FC: nop

    // 0x8026F600: andi        $t8, $t7, 0xFBFF
    ctx->r24 = ctx->r15 & 0XFBFF;
    // 0x8026F604: sh          $t8, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r24;
L_8026F608:
    // 0x8026F608: lhu         $t9, 0x12($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X12);
    // 0x8026F60C: sw          $zero, 0x28($s0)
    MEM_W(0X28, ctx->r16) = 0;
    // 0x8026F610: andi        $t0, $t9, 0xFCFF
    ctx->r8 = ctx->r25 & 0XFCFF;
    // 0x8026F614: b           L_8026F7A0
    // 0x8026F618: sh          $t0, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r8;
        goto L_8026F7A0;
    // 0x8026F618: sh          $t0, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r8;
L_8026F61C:
    // 0x8026F61C: b           L_8026F7A0
    // 0x8026F620: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
        goto L_8026F7A0;
    // 0x8026F620: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
L_8026F624:
    // 0x8026F624: lhu         $t2, 0x12($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X12);
    // 0x8026F628: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8026F62C: andi        $t3, $t2, 0x2
    ctx->r11 = ctx->r10 & 0X2;
    // 0x8026F630: bne         $t3, $zero, L_8026F7A0
    if (ctx->r11 != 0) {
        // 0x8026F634: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_8026F7A0;
    }
    // 0x8026F634: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8026F638: andi        $t4, $a1, 0xFF
    ctx->r12 = ctx->r5 & 0XFF;
    // 0x8026F63C: jal         0x8024BC08
    // 0x8026F640: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
    ovl_8024B800_func_8024BC08(rdram, ctx);
        goto after_3;
    // 0x8026F640: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
    after_3:
    // 0x8026F644: lhu         $t5, 0x18($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X18);
    // 0x8026F648: nop

    // 0x8026F64C: ori         $t6, $t5, 0x10
    ctx->r14 = ctx->r13 | 0X10;
    // 0x8026F650: b           L_8026F548
    // 0x8026F654: sh          $t6, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r14;
        goto L_8026F548;
    // 0x8026F654: sh          $t6, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r14;
L_8026F658:
    // 0x8026F658: addiu       $t8, $v1, 0x2
    ctx->r24 = ADD32(ctx->r3, 0X2);
    // 0x8026F65C: sw          $t8, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r24;
    // 0x8026F660: lhu         $t0, 0x0($t8)
    ctx->r8 = MEM_HU(ctx->r24, 0X0);
    // 0x8026F664: andi        $t7, $v0, 0xFF
    ctx->r15 = ctx->r2 & 0XFF;
    // 0x8026F668: andi        $t1, $t0, 0xFF
    ctx->r9 = ctx->r8 & 0XFF;
    // 0x8026F66C: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
    // 0x8026F670: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8026F674: cvt.d.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.d = CVT_D_W(ctx->f10.u32l);
    // 0x8026F678: lwc1        $f6, 0xBC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XBC);
    // 0x8026F67C: mul.d       $f18, $f16, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f22.d); 
    ctx->f18.d = MUL_D(ctx->f16.d, ctx->f22.d);
    // 0x8026F680: cvt.s.w     $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    ctx->f20.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8026F684: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x8026F688: add.d       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f8.d + ctx->f18.d;
    // 0x8026F68C: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x8026F690: swc1        $f6, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f6.u32l;
    // 0x8026F694: lwc1        $f12, 0xBC($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XBC);
    // 0x8026F698: jal         0x80081040
    // 0x8026F69C: nop

    func_80081040(rdram, ctx);
        goto after_4;
    // 0x8026F69C: nop

    after_4:
    // 0x8026F6A0: lh          $t2, 0x2E($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X2E);
    // 0x8026F6A4: mul.s       $f8, $f20, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x8026F6A8: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x8026F6AC: lwc1        $f12, 0xBC($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XBC);
    // 0x8026F6B0: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8026F6B4: add.s       $f18, $f16, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f8.fl;
    // 0x8026F6B8: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8026F6BC: nop

    // 0x8026F6C0: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x8026F6C4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026F6C8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026F6CC: nop

    // 0x8026F6D0: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8026F6D4: mfc1        $t4, $f4
    ctx->r12 = (int32_t)ctx->f4.u32l;
    // 0x8026F6D8: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8026F6DC: jal         0x80080E80
    // 0x8026F6E0: sh          $t4, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r12;
    func_80080E80(rdram, ctx);
        goto after_5;
    // 0x8026F6E0: sh          $t4, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r12;
    after_5:
    // 0x8026F6E4: lh          $t5, 0x30($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X30);
    // 0x8026F6E8: mul.s       $f16, $f20, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x8026F6EC: mtc1        $t5, $f6
    ctx->f6.u32l = ctx->r13;
    // 0x8026F6F0: nop

    // 0x8026F6F4: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8026F6F8: add.s       $f8, $f10, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8026F6FC: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8026F700: nop

    // 0x8026F704: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x8026F708: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8026F70C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8026F710: nop

    // 0x8026F714: cvt.w.s     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    ctx->f18.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8026F718: mfc1        $t7, $f18
    ctx->r15 = (int32_t)ctx->f18.u32l;
    // 0x8026F71C: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8026F720: b           L_8026F548
    // 0x8026F724: sh          $t7, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r15;
        goto L_8026F548;
    // 0x8026F724: sh          $t7, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r15;
L_8026F728:
    // 0x8026F728: jal         0x8026F49C
    // 0x8026F72C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026F49C(rdram, ctx);
        goto after_6;
    // 0x8026F72C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x8026F730: b           L_8026F7A4
    // 0x8026F734: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_8026F7A4;
    // 0x8026F734: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_8026F738:
    // 0x8026F738: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8026F73C: addiu       $v0, $v0, 0xB6E
    ctx->r2 = ADD32(ctx->r2, 0XB6E);
    // 0x8026F740: lhu         $t8, 0x0($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X0);
    // 0x8026F744: nop

    // 0x8026F748: xori        $t9, $t8, 0x2
    ctx->r25 = ctx->r24 ^ 0X2;
    // 0x8026F74C: b           L_8026F7A0
    // 0x8026F750: sh          $t9, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r25;
        goto L_8026F7A0;
    // 0x8026F750: sh          $t9, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r25;
L_8026F754:
    // 0x8026F754: addiu       $t0, $zero, 0x6
    ctx->r8 = ADD32(0, 0X6);
    // 0x8026F758: b           L_8026F7A0
    // 0x8026F75C: sh          $t0, 0x22($s0)
    MEM_H(0X22, ctx->r16) = ctx->r8;
        goto L_8026F7A0;
    // 0x8026F75C: sh          $t0, 0x22($s0)
    MEM_H(0X22, ctx->r16) = ctx->r8;
L_8026F760:
    // 0x8026F760: b           L_8026F7A0
    // 0x8026F764: sh          $zero, 0x22($s0)
    MEM_H(0X22, ctx->r16) = 0;
        goto L_8026F7A0;
    // 0x8026F764: sh          $zero, 0x22($s0)
    MEM_H(0X22, ctx->r16) = 0;
L_8026F768:
    // 0x8026F768: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8026F76C: b           L_8026F7A0
    // 0x8026F770: sh          $t1, 0x22($s0)
    MEM_H(0X22, ctx->r16) = ctx->r9;
        goto L_8026F7A0;
    // 0x8026F770: sh          $t1, 0x22($s0)
    MEM_H(0X22, ctx->r16) = ctx->r9;
L_8026F774:
    // 0x8026F774: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x8026F778: b           L_8026F7A0
    // 0x8026F77C: sh          $t2, 0x22($s0)
    MEM_H(0X22, ctx->r16) = ctx->r10;
        goto L_8026F7A0;
    // 0x8026F77C: sh          $t2, 0x22($s0)
    MEM_H(0X22, ctx->r16) = ctx->r10;
L_8026F780:
    // 0x8026F780: addiu       $t3, $zero, 0x7
    ctx->r11 = ADD32(0, 0X7);
    // 0x8026F784: b           L_8026F7A0
    // 0x8026F788: sh          $t3, 0x22($s0)
    MEM_H(0X22, ctx->r16) = ctx->r11;
        goto L_8026F7A0;
    // 0x8026F788: sh          $t3, 0x22($s0)
    MEM_H(0X22, ctx->r16) = ctx->r11;
L_8026F78C:
    // 0x8026F78C: addiu       $t4, $zero, 0x8
    ctx->r12 = ADD32(0, 0X8);
    // 0x8026F790: b           L_8026F7A0
    // 0x8026F794: sh          $t4, 0x22($s0)
    MEM_H(0X22, ctx->r16) = ctx->r12;
        goto L_8026F7A0;
    // 0x8026F794: sh          $t4, 0x22($s0)
    MEM_H(0X22, ctx->r16) = ctx->r12;
L_8026F798:
    // 0x8026F798: addiu       $t5, $zero, 0x5
    ctx->r13 = ADD32(0, 0X5);
    // 0x8026F79C: sh          $t5, 0x22($s0)
    MEM_H(0X22, ctx->r16) = ctx->r13;
L_8026F7A0:
    // 0x8026F7A0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_8026F7A4:
    // 0x8026F7A4: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x8026F7A8: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8026F7AC: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8026F7B0: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8026F7B4: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x8026F7B8: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x8026F7BC: jr          $ra
    // 0x8026F7C0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8026F7C0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_8024B800_func_8026F7C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026F7C4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8026F7C8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8026F7CC: lh          $t6, 0x2E($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X2E);
    // 0x8026F7D0: lh          $t7, 0x30($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X30);
    // 0x8026F7D4: mtc1        $t6, $f18
    ctx->f18.u32l = ctx->r14;
    // 0x8026F7D8: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x8026F7DC: cvt.s.w     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8026F7E0: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8026F7E4: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x8026F7E8: cvt.s.w     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8026F7EC: lw          $a2, 0x8($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X8);
    // 0x8026F7F0: lw          $a3, 0x0($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X0);
    // 0x8026F7F4: addiu       $t8, $sp, 0x30
    ctx->r24 = ADD32(ctx->r29, 0X30);
    // 0x8026F7F8: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8026F7FC: jal         0x80272B1C
    // 0x8026F800: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    ovl_8024B800_func_80272B1C(rdram, ctx);
        goto after_0;
    // 0x8026F800: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    after_0:
    // 0x8026F804: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8026F808: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x8026F80C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8026F810: lwc1        $f12, 0xB4($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0XB4);
    // 0x8026F814: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x8026F818: c.lt.s      $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f8.fl < ctx->f12.fl;
    // 0x8026F81C: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x8026F820: bc1t        L_8026F860
    if (c1cs) {
        // 0x8026F824: nop
    
            goto L_8026F860;
    }
    // 0x8026F824: nop

    // 0x8026F828: lw          $t9, 0x3B20($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X3B20);
    // 0x8026F82C: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x8026F830: lwc1        $f14, 0x10($t9)
    ctx->f14.u32l = MEM_W(ctx->r25, 0X10);
    // 0x8026F834: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8026F838: cvt.d.s     $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f10.d = CVT_D_S(ctx->f14.fl);
    // 0x8026F83C: c.eq.d      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.d == ctx->f10.d;
    // 0x8026F840: lwc1        $f16, 0x34($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8026F844: bc1t        L_8026F860
    if (c1cs) {
        // 0x8026F848: nop
    
            goto L_8026F860;
    }
    // 0x8026F848: nop

    // 0x8026F84C: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x8026F850: c.eq.d      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.d == ctx->f18.d;
    // 0x8026F854: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8026F858: bc1f        L_8026F870
    if (!c1cs) {
        // 0x8026F85C: nop
    
            goto L_8026F870;
    }
    // 0x8026F85C: nop

L_8026F860:
    // 0x8026F860: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8026F864: b           L_8026F8B4
    // 0x8026F868: swc1        $f4, 0xAC($a0)
    MEM_W(0XAC, ctx->r4) = ctx->f4.u32l;
        goto L_8026F8B4;
    // 0x8026F868: swc1        $f4, 0xAC($a0)
    MEM_W(0XAC, ctx->r4) = ctx->f4.u32l;
    // 0x8026F86C: nop

L_8026F870:
    // 0x8026F870: div.s       $f2, $f6, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = DIV_S(ctx->f6.fl, ctx->f14.fl);
    // 0x8026F874: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8026F878: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8026F87C: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x8026F880: add.s       $f10, $f12, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f12.fl + ctx->f8.fl;
    // 0x8026F884: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x8026F888: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8026F88C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8026F890: div.s       $f0, $f10, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = DIV_S(ctx->f10.fl, ctx->f2.fl);
    // 0x8026F894: cvt.d.s     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.d = CVT_D_S(ctx->f0.fl);
    // 0x8026F898: c.lt.d      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.d < ctx->f18.d;
    // 0x8026F89C: swc1        $f0, 0xAC($a0)
    MEM_W(0XAC, ctx->r4) = ctx->f0.u32l;
    // 0x8026F8A0: bc1f        L_8026F8B8
    if (!c1cs) {
        // 0x8026F8A4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8026F8B8;
    }
    // 0x8026F8A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8026F8A8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8026F8AC: nop

    // 0x8026F8B0: swc1        $f4, 0xAC($a0)
    MEM_W(0XAC, ctx->r4) = ctx->f4.u32l;
L_8026F8B4:
    // 0x8026F8B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8026F8B8:
    // 0x8026F8B8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8026F8BC: jr          $ra
    // 0x8026F8C0: nop

    return;
    // 0x8026F8C0: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026F8C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026F8C4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8026F8C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026F8CC: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x8026F8D0: lwc1        $f4, 0x84($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X84);
    // 0x8026F8D4: lw          $t7, 0x24($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X24);
    // 0x8026F8D8: nop

    // 0x8026F8DC: lwc1        $f0, 0x31C($t7)
    ctx->f0.u32l = MEM_W(ctx->r15, 0X31C);
    // 0x8026F8E0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8026F8E4: sub.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x8026F8E8: jal         0x8026DC94
    // 0x8026F8EC: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    ovl_8024B800_func_8026DC94(rdram, ctx);
        goto after_0;
    // 0x8026F8EC: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x8026F8F0: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x8026F8F4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8026F8F8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8026F8FC: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x8026F900: swc1        $f8, 0xAC($a0)
    MEM_W(0XAC, ctx->r4) = ctx->f8.u32l;
    // 0x8026F904: lw          $t8, 0x3B20($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X3B20);
    // 0x8026F908: lwc1        $f10, 0x18($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8026F90C: lw          $t9, 0xA0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0XA0);
    // 0x8026F910: lui         $at, 0xC059
    ctx->r1 = S32(0XC059 << 16);
    // 0x8026F914: beq         $a0, $t9, L_8026FA94
    if (ctx->r4 == ctx->r25) {
        // 0x8026F918: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8026FA94;
    }
    // 0x8026F918: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026F91C: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x8026F920: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8026F924: cvt.d.s     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f0.d = CVT_D_S(ctx->f10.fl);
    // 0x8026F928: c.lt.d      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.d < ctx->f16.d;
    // 0x8026F92C: lui         $at, 0xC049
    ctx->r1 = S32(0XC049 << 16);
    // 0x8026F930: bc1f        L_8026F978
    if (!c1cs) {
        // 0x8026F934: nop
    
            goto L_8026F978;
    }
    // 0x8026F934: nop

    // 0x8026F938: mtc1        $v0, $f18
    ctx->f18.u32l = ctx->r2;
    // 0x8026F93C: bgez        $v0, L_8026F954
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8026F940: cvt.s.w     $f4, $f18
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
            goto L_8026F954;
    }
    // 0x8026F940: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8026F944: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8026F948: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8026F94C: nop

    // 0x8026F950: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
L_8026F954:
    // 0x8026F954: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8026F958: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8026F95C: c.eq.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl == ctx->f8.fl;
    // 0x8026F960: nop

    // 0x8026F964: bc1t        L_8026FA94
    if (c1cs) {
        // 0x8026F968: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8026FA94;
    }
    // 0x8026F968: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026F96C: lwc1        $f10, -0x2974($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X2974);
    // 0x8026F970: b           L_8026FA90
    // 0x8026F974: swc1        $f10, 0xAC($a0)
    MEM_W(0XAC, ctx->r4) = ctx->f10.u32l;
        goto L_8026FA90;
    // 0x8026F974: swc1        $f10, 0xAC($a0)
    MEM_W(0XAC, ctx->r4) = ctx->f10.u32l;
L_8026F978:
    // 0x8026F978: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x8026F97C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8026F980: lui         $at, 0x4049
    ctx->r1 = S32(0X4049 << 16);
    // 0x8026F984: c.lt.d      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.d < ctx->f16.d;
    // 0x8026F988: nop

    // 0x8026F98C: bc1f        L_8026F9F0
    if (!c1cs) {
        // 0x8026F990: nop
    
            goto L_8026F9F0;
    }
    // 0x8026F990: nop

    // 0x8026F994: mtc1        $v0, $f18
    ctx->f18.u32l = ctx->r2;
    // 0x8026F998: bgez        $v0, L_8026F9B0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8026F99C: cvt.s.w     $f6, $f18
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
            goto L_8026F9B0;
    }
    // 0x8026F99C: cvt.s.w     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8026F9A0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8026F9A4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8026F9A8: nop

    // 0x8026F9AC: add.s       $f6, $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f4.fl;
L_8026F9B0:
    // 0x8026F9B0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8026F9B4: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x8026F9B8: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x8026F9BC: nop

    // 0x8026F9C0: bc1t        L_8026FA94
    if (c1cs) {
        // 0x8026F9C4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8026FA94;
    }
    // 0x8026F9C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026F9C8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8026F9CC: lwc1        $f16, 0x84($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X84);
    // 0x8026F9D0: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8026F9D4: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x8026F9D8: nop

    // 0x8026F9DC: bc1f        L_8026FA94
    if (!c1cs) {
        // 0x8026F9E0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8026FA94;
    }
    // 0x8026F9E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026F9E4: lwc1        $f18, -0x2970($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X2970);
    // 0x8026F9E8: b           L_8026FA90
    // 0x8026F9EC: swc1        $f18, 0xAC($a0)
    MEM_W(0XAC, ctx->r4) = ctx->f18.u32l;
        goto L_8026FA90;
    // 0x8026F9EC: swc1        $f18, 0xAC($a0)
    MEM_W(0XAC, ctx->r4) = ctx->f18.u32l;
L_8026F9F0:
    // 0x8026F9F0: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x8026F9F4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8026F9F8: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x8026F9FC: c.lt.d      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.d < ctx->f4.d;
    // 0x8026FA00: nop

    // 0x8026FA04: bc1t        L_8026FA94
    if (c1cs) {
        // 0x8026FA08: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8026FA94;
    }
    // 0x8026FA08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026FA0C: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x8026FA10: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8026FA14: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8026FA18: c.lt.d      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.d < ctx->f6.d;
    // 0x8026FA1C: nop

    // 0x8026FA20: bc1f        L_8026FA84
    if (!c1cs) {
        // 0x8026FA24: nop
    
            goto L_8026FA84;
    }
    // 0x8026FA24: nop

    // 0x8026FA28: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x8026FA2C: bgez        $v0, L_8026FA44
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8026FA30: cvt.s.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
            goto L_8026FA44;
    }
    // 0x8026FA30: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8026FA34: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8026FA38: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8026FA3C: nop

    // 0x8026FA40: add.s       $f10, $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f16.fl;
L_8026FA44:
    // 0x8026FA44: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8026FA48: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8026FA4C: c.eq.s      $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f10.fl == ctx->f18.fl;
    // 0x8026FA50: nop

    // 0x8026FA54: bc1f        L_8026FA94
    if (!c1cs) {
        // 0x8026FA58: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8026FA94;
    }
    // 0x8026FA58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026FA5C: lwc1        $f4, 0x84($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X84);
    // 0x8026FA60: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8026FA64: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8026FA68: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x8026FA6C: nop

    // 0x8026FA70: bc1f        L_8026FA94
    if (!c1cs) {
        // 0x8026FA74: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8026FA94;
    }
    // 0x8026FA74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026FA78: lwc1        $f8, -0x296C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X296C);
    // 0x8026FA7C: b           L_8026FA90
    // 0x8026FA80: swc1        $f8, 0xAC($a0)
    MEM_W(0XAC, ctx->r4) = ctx->f8.u32l;
        goto L_8026FA90;
    // 0x8026FA80: swc1        $f8, 0xAC($a0)
    MEM_W(0XAC, ctx->r4) = ctx->f8.u32l;
L_8026FA84:
    // 0x8026FA84: lwc1        $f16, -0x2968($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X2968);
    // 0x8026FA88: nop

    // 0x8026FA8C: swc1        $f16, 0xAC($a0)
    MEM_W(0XAC, ctx->r4) = ctx->f16.u32l;
L_8026FA90:
    // 0x8026FA90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026FA94:
    // 0x8026FA94: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8026FA98: jr          $ra
    // 0x8026FA9C: nop

    return;
    // 0x8026FA9C: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026FAA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026FAA0: lh          $t6, 0x2E($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X2E);
    // 0x8026FAA4: lw          $t7, 0xC8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XC8);
    // 0x8026FAA8: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x8026FAAC: lhu         $t8, 0x8($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X8);
    // 0x8026FAB0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8026FAB4: lwc1        $f8, 0x4C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x8026FAB8: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x8026FABC: bne         $t9, $zero, L_8026FAC8
    if (ctx->r25 != 0) {
        // 0x8026FAC0: sub.s       $f0, $f6, $f8
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f8.fl;
            goto L_8026FAC8;
    }
    // 0x8026FAC0: sub.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8026FAC4: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_8026FAC8:
    // 0x8026FAC8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8026FACC: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x8026FAD0: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x8026FAD4: nop

    // 0x8026FAD8: bc1f        L_8026FAEC
    if (!c1cs) {
        // 0x8026FADC: nop
    
            goto L_8026FAEC;
    }
    // 0x8026FADC: nop

    // 0x8026FAE0: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8026FAE4: b           L_8026FB40
    // 0x8026FAE8: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_8026FB40;
    // 0x8026FAE8: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_8026FAEC:
    // 0x8026FAEC: lw          $t0, 0xD8($a0)
    ctx->r8 = MEM_W(ctx->r4, 0XD8);
    // 0x8026FAF0: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8026FAF4: lbu         $v0, 0xF($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0XF);
    // 0x8026FAF8: nop

    // 0x8026FAFC: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x8026FB00: bgez        $v0, L_8026FB18
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8026FB04: cvt.d.w     $f18, $f16
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.d = CVT_D_W(ctx->f16.u32l);
            goto L_8026FB18;
    }
    // 0x8026FB04: cvt.d.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.d = CVT_D_W(ctx->f16.u32l);
    // 0x8026FB08: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x8026FB0C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8026FB10: nop

    // 0x8026FB14: add.d       $f18, $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f18.d = ctx->f18.d + ctx->f4.d;
L_8026FB18:
    // 0x8026FB18: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8026FB1C: lwc1        $f7, -0x2960($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X2960);
    // 0x8026FB20: lwc1        $f6, -0x295C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X295C);
    // 0x8026FB24: lui         $at, 0x3FF8
    ctx->r1 = S32(0X3FF8 << 16);
    // 0x8026FB28: mul.d       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f18.d, ctx->f6.d);
    // 0x8026FB2C: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x8026FB30: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8026FB34: nop

    // 0x8026FB38: add.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d + ctx->f10.d;
    // 0x8026FB3C: cvt.s.d     $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f2.fl = CVT_S_D(ctx->f16.d);
L_8026FB40:
    // 0x8026FB40: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x8026FB44: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8026FB48: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x8026FB4C: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x8026FB50: nop

    // 0x8026FB54: bc1f        L_8026FB64
    if (!c1cs) {
        // 0x8026FB58: nop
    
            goto L_8026FB64;
    }
    // 0x8026FB58: nop

    // 0x8026FB5C: jr          $ra
    // 0x8026FB60: swc1        $f2, 0xAC($a0)
    MEM_W(0XAC, ctx->r4) = ctx->f2.u32l;
    return;
    // 0x8026FB60: swc1        $f2, 0xAC($a0)
    MEM_W(0XAC, ctx->r4) = ctx->f2.u32l;
L_8026FB64:
    // 0x8026FB64: mtc1        $at, $f13
    ctx->f_odd[(13 - 1) * 2] = ctx->r1;
    // 0x8026FB68: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x8026FB6C: cvt.d.s     $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f18.d = CVT_D_S(ctx->f2.fl);
    // 0x8026FB70: sub.d       $f6, $f18, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f12.d); 
    ctx->f6.d = ctx->f18.d - ctx->f12.d;
    // 0x8026FB74: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8026FB78: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x8026FB7C: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x8026FB80: lwc1        $f17, -0x2958($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X2958);
    // 0x8026FB84: lwc1        $f16, -0x2954($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X2954);
    // 0x8026FB88: nop

    // 0x8026FB8C: mul.d       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f4.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x8026FB90: add.d       $f18, $f4, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f12.d); 
    ctx->f18.d = ctx->f4.d + ctx->f12.d;
    // 0x8026FB94: cvt.s.d     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f6.fl = CVT_S_D(ctx->f18.d);
    // 0x8026FB98: swc1        $f6, 0xAC($a0)
    MEM_W(0XAC, ctx->r4) = ctx->f6.u32l;
    // 0x8026FB9C: jr          $ra
    // 0x8026FBA0: nop

    return;
    // 0x8026FBA0: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026FBA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026FBA4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026FBA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026FBAC: lh          $t6, 0x2E($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X2E);
    // 0x8026FBB0: lw          $v1, 0xC8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XC8);
    // 0x8026FBB4: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x8026FBB8: lhu         $t7, 0x8($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X8);
    // 0x8026FBBC: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8026FBC0: lwc1        $f4, 0x4C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x8026FBC4: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x8026FBC8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8026FBCC: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x8026FBD0: bne         $t8, $zero, L_8026FBDC
    if (ctx->r24 != 0) {
        // 0x8026FBD4: sub.s       $f0, $f4, $f8
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f8.fl;
            goto L_8026FBDC;
    }
    // 0x8026FBD4: sub.s       $f0, $f4, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x8026FBD8: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_8026FBDC:
    // 0x8026FBDC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8026FBE0: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x8026FBE4: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x8026FBE8: nop

    // 0x8026FBEC: bc1f        L_8026FC00
    if (!c1cs) {
        // 0x8026FBF0: nop
    
            goto L_8026FC00;
    }
    // 0x8026FBF0: nop

    // 0x8026FBF4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8026FBF8: b           L_8026FCB8
    // 0x8026FBFC: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
        goto L_8026FCB8;
    // 0x8026FBFC: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
L_8026FC00:
    // 0x8026FC00: lw          $t9, 0xD8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XD8);
    // 0x8026FC04: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8026FC08: lbu         $v0, 0x10($t9)
    ctx->r2 = MEM_BU(ctx->r25, 0X10);
    // 0x8026FC0C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8026FC10: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x8026FC14: bgez        $v0, L_8026FC2C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8026FC18: cvt.d.w     $f18, $f16
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.d = CVT_D_W(ctx->f16.u32l);
            goto L_8026FC2C;
    }
    // 0x8026FC18: cvt.d.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.d = CVT_D_W(ctx->f16.u32l);
    // 0x8026FC1C: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x8026FC20: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8026FC24: nop

    // 0x8026FC28: add.d       $f18, $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f6.d); 
    ctx->f18.d = ctx->f18.d + ctx->f6.d;
L_8026FC2C:
    // 0x8026FC2C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8026FC30: lwc1        $f5, -0x2950($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X2950);
    // 0x8026FC34: lwc1        $f4, -0x294C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X294C);
    // 0x8026FC38: lui         $at, 0x3FF8
    ctx->r1 = S32(0X3FF8 << 16);
    // 0x8026FC3C: mul.d       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f8.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x8026FC40: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x8026FC44: lhu         $t0, 0x10($v1)
    ctx->r8 = MEM_HU(ctx->r3, 0X10);
    // 0x8026FC48: nop

    // 0x8026FC4C: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x8026FC50: add.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d + ctx->f10.d;
    // 0x8026FC54: beq         $t1, $zero, L_8026FC94
    if (ctx->r9 == 0) {
        // 0x8026FC58: cvt.s.d     $f0, $f16
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f0.fl = CVT_S_D(ctx->f16.d);
            goto L_8026FC94;
    }
    // 0x8026FC58: cvt.s.d     $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f0.fl = CVT_S_D(ctx->f16.d);
    // 0x8026FC5C: lw          $t2, 0xD4($a0)
    ctx->r10 = MEM_W(ctx->r4, 0XD4);
    // 0x8026FC60: lui         $t5, 0x8028
    ctx->r13 = S32(0X8028 << 16);
    // 0x8026FC64: lbu         $t3, 0x5($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X5);
    // 0x8026FC68: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8026FC6C: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x8026FC70: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8026FC74: lhu         $t5, -0x3678($t5)
    ctx->r13 = MEM_HU(ctx->r13, -0X3678);
    // 0x8026FC78: nop

    // 0x8026FC7C: andi        $t6, $t5, 0xE
    ctx->r14 = ctx->r13 & 0XE;
    // 0x8026FC80: beq         $t6, $zero, L_8026FC94
    if (ctx->r14 == 0) {
        // 0x8026FC84: nop
    
            goto L_8026FC94;
    }
    // 0x8026FC84: nop

    // 0x8026FC88: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8026FC8C: b           L_8026FCB8
    // 0x8026FC90: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
        goto L_8026FCB8;
    // 0x8026FC90: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
L_8026FC94:
    // 0x8026FC94: lhu         $t7, 0x4($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X4);
    // 0x8026FC98: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8026FC9C: bne         $t7, $at, L_8026FCB4
    if (ctx->r15 != ctx->r1) {
        // 0x8026FCA0: lui         $at, 0x4040
        ctx->r1 = S32(0X4040 << 16);
            goto L_8026FCB4;
    }
    // 0x8026FCA0: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x8026FCA4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8026FCA8: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x8026FCAC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8026FCB0: nop

L_8026FCB4:
    // 0x8026FCB4: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
L_8026FCB8:
    // 0x8026FCB8: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8026FCBC: jal         0x802700FC
    // 0x8026FCC0: lui         $a3, 0x3FC0
    ctx->r7 = S32(0X3FC0 << 16);
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_0;
    // 0x8026FCC0: lui         $a3, 0x3FC0
    ctx->r7 = S32(0X3FC0 << 16);
    after_0:
    // 0x8026FCC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026FCC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026FCCC: jr          $ra
    // 0x8026FCD0: nop

    return;
    // 0x8026FCD0: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026FCD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026FCD4: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x8026FCD8: lwc1        $f4, 0x4C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x8026FCDC: lhu         $t7, 0x8($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X8);
    // 0x8026FCE0: lwc1        $f6, 0xAC($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0XAC);
    // 0x8026FCE4: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x8026FCE8: bne         $t8, $zero, L_8026FCF4
    if (ctx->r24 != 0) {
        // 0x8026FCEC: sub.s       $f0, $f4, $f6
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f6.fl;
            goto L_8026FCF4;
    }
    // 0x8026FCEC: sub.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8026FCF0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_8026FCF4:
    // 0x8026FCF4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8026FCF8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8026FCFC: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x8026FD00: nop

    // 0x8026FD04: bc1f        L_8026FD18
    if (!c1cs) {
        // 0x8026FD08: nop
    
            goto L_8026FD18;
    }
    // 0x8026FD08: nop

    // 0x8026FD0C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8026FD10: b           L_8026FD6C
    // 0x8026FD14: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_8026FD6C;
    // 0x8026FD14: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_8026FD18:
    // 0x8026FD18: lw          $t9, 0xD8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XD8);
    // 0x8026FD1C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8026FD20: lbu         $v0, 0x10($t9)
    ctx->r2 = MEM_BU(ctx->r25, 0X10);
    // 0x8026FD24: nop

    // 0x8026FD28: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x8026FD2C: bgez        $v0, L_8026FD44
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8026FD30: cvt.d.w     $f16, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.d = CVT_D_W(ctx->f10.u32l);
            goto L_8026FD44;
    }
    // 0x8026FD30: cvt.d.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.d = CVT_D_W(ctx->f10.u32l);
    // 0x8026FD34: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x8026FD38: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8026FD3C: nop

    // 0x8026FD40: add.d       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f16.d = ctx->f16.d + ctx->f18.d;
L_8026FD44:
    // 0x8026FD44: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8026FD48: lwc1        $f5, -0x2948($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X2948);
    // 0x8026FD4C: lwc1        $f4, -0x2944($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X2944);
    // 0x8026FD50: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x8026FD54: mul.d       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f16.d, ctx->f4.d);
    // 0x8026FD58: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x8026FD5C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8026FD60: nop

    // 0x8026FD64: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x8026FD68: cvt.s.d     $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f2.fl = CVT_S_D(ctx->f10.d);
L_8026FD6C:
    // 0x8026FD6C: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x8026FD70: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8026FD74: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x8026FD78: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x8026FD7C: nop

    // 0x8026FD80: bc1f        L_8026FD90
    if (!c1cs) {
        // 0x8026FD84: nop
    
            goto L_8026FD90;
    }
    // 0x8026FD84: nop

    // 0x8026FD88: jr          $ra
    // 0x8026FD8C: swc1        $f2, 0xAC($a0)
    MEM_W(0XAC, ctx->r4) = ctx->f2.u32l;
    return;
    // 0x8026FD8C: swc1        $f2, 0xAC($a0)
    MEM_W(0XAC, ctx->r4) = ctx->f2.u32l;
L_8026FD90:
    // 0x8026FD90: mtc1        $at, $f13
    ctx->f_odd[(13 - 1) * 2] = ctx->r1;
    // 0x8026FD94: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x8026FD98: cvt.d.s     $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f16.d = CVT_D_S(ctx->f2.fl);
    // 0x8026FD9C: sub.d       $f4, $f16, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f12.d); 
    ctx->f4.d = ctx->f16.d - ctx->f12.d;
    // 0x8026FDA0: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8026FDA4: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x8026FDA8: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x8026FDAC: lwc1        $f11, -0x2940($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X2940);
    // 0x8026FDB0: lwc1        $f10, -0x293C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X293C);
    // 0x8026FDB4: nop

    // 0x8026FDB8: mul.d       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f18.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x8026FDBC: add.d       $f16, $f18, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f12.d); 
    ctx->f16.d = ctx->f18.d + ctx->f12.d;
    // 0x8026FDC0: cvt.s.d     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f4.fl = CVT_S_D(ctx->f16.d);
    // 0x8026FDC4: swc1        $f4, 0xAC($a0)
    MEM_W(0XAC, ctx->r4) = ctx->f4.u32l;
    // 0x8026FDC8: jr          $ra
    // 0x8026FDCC: nop

    return;
    // 0x8026FDCC: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026FDD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026FDD0: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x8026FDD4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8026FDD8: lwc1        $f0, 0xB4($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XB4);
    // 0x8026FDDC: lw          $t6, 0xD8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD8);
    // 0x8026FDE0: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x8026FDE4: lbu         $v0, 0xF($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0XF);
    // 0x8026FDE8: bc1f        L_8026FE40
    if (!c1cs) {
        // 0x8026FDEC: lui         $at, 0x3FF0
        ctx->r1 = S32(0X3FF0 << 16);
            goto L_8026FE40;
    }
    // 0x8026FDEC: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x8026FDF0: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x8026FDF4: bgez        $v0, L_8026FE10
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8026FDF8: cvt.d.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.d = CVT_D_W(ctx->f6.u32l);
            goto L_8026FE10;
    }
    // 0x8026FDF8: cvt.d.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.d = CVT_D_W(ctx->f6.u32l);
    // 0x8026FDFC: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8026FE00: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x8026FE04: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8026FE08: nop

    // 0x8026FE0C: add.d       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f8.d = ctx->f8.d + ctx->f10.d;
L_8026FE10:
    // 0x8026FE10: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8026FE14: lwc1        $f17, -0x2938($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X2938);
    // 0x8026FE18: lwc1        $f16, -0x2934($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X2934);
    // 0x8026FE1C: lui         $at, 0x3FF8
    ctx->r1 = S32(0X3FF8 << 16);
    // 0x8026FE20: mul.d       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f8.d, ctx->f16.d);
    // 0x8026FE24: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x8026FE28: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8026FE2C: nop

    // 0x8026FE30: add.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d + ctx->f4.d;
    // 0x8026FE34: cvt.s.d     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f10.fl = CVT_S_D(ctx->f6.d);
    // 0x8026FE38: jr          $ra
    // 0x8026FE3C: swc1        $f10, 0xAC($a0)
    MEM_W(0XAC, ctx->r4) = ctx->f10.u32l;
    return;
    // 0x8026FE3C: swc1        $f10, 0xAC($a0)
    MEM_W(0XAC, ctx->r4) = ctx->f10.u32l;
L_8026FE40:
    // 0x8026FE40: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x8026FE44: mtc1        $at, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r1;
    // 0x8026FE48: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8026FE4C: bgez        $v0, L_8026FE68
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8026FE50: cvt.d.w     $f16, $f8
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.d = CVT_D_W(ctx->f8.u32l);
            goto L_8026FE68;
    }
    // 0x8026FE50: cvt.d.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.d = CVT_D_W(ctx->f8.u32l);
    // 0x8026FE54: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8026FE58: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x8026FE5C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8026FE60: nop

    // 0x8026FE64: add.d       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f16.d = ctx->f16.d + ctx->f18.d;
L_8026FE68:
    // 0x8026FE68: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8026FE6C: lwc1        $f5, -0x2930($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X2930);
    // 0x8026FE70: lwc1        $f4, -0x292C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X292C);
    // 0x8026FE74: lui         $at, 0x3FF8
    ctx->r1 = S32(0X3FF8 << 16);
    // 0x8026FE78: mul.d       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f16.d, ctx->f4.d);
    // 0x8026FE7C: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x8026FE80: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8026FE84: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8026FE88: add.d       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f8.d = ctx->f6.d + ctx->f10.d;
    // 0x8026FE8C: cvt.s.d     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f18.fl = CVT_S_D(ctx->f8.d);
    // 0x8026FE90: lwc1        $f8, -0x2924($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X2924);
    // 0x8026FE94: cvt.d.s     $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f16.d = CVT_D_S(ctx->f18.fl);
    // 0x8026FE98: sub.d       $f4, $f16, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f2.d); 
    ctx->f4.d = ctx->f16.d - ctx->f2.d;
    // 0x8026FE9C: lwc1        $f9, -0x2928($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X2928);
    // 0x8026FEA0: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x8026FEA4: mul.d       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x8026FEA8: nop

    // 0x8026FEAC: mul.d       $f18, $f10, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f8.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f8.d);
    // 0x8026FEB0: add.d       $f16, $f18, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f2.d); 
    ctx->f16.d = ctx->f18.d + ctx->f2.d;
    // 0x8026FEB4: cvt.s.d     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f4.fl = CVT_S_D(ctx->f16.d);
    // 0x8026FEB8: swc1        $f4, 0xAC($a0)
    MEM_W(0XAC, ctx->r4) = ctx->f4.u32l;
    // 0x8026FEBC: jr          $ra
    // 0x8026FEC0: nop

    return;
    // 0x8026FEC0: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026FEC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026FEC4: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8026FEC8: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x8026FECC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8026FED0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8026FED4: lh          $t7, 0xE0($v0)
    ctx->r15 = MEM_H(ctx->r2, 0XE0);
    // 0x8026FED8: lh          $t6, 0xDE($v0)
    ctx->r14 = MEM_H(ctx->r2, 0XDE);
    // 0x8026FEDC: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x8026FEE0: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x8026FEE4: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8026FEE8: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8026FEEC: lwc1        $f12, 0x8($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8026FEF0: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8026FEF4: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x8026FEF8: addiu       $t8, $sp, 0x30
    ctx->r24 = ADD32(ctx->r29, 0X30);
    // 0x8026FEFC: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x8026FF00: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8026FF04: jal         0x80272B1C
    // 0x8026FF08: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    ovl_8024B800_func_80272B1C(rdram, ctx);
        goto after_0;
    // 0x8026FF08: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    after_0:
    // 0x8026FF0C: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x8026FF10: lw          $t9, 0x3B20($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X3B20);
    // 0x8026FF14: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x8026FF18: lwc1        $f12, 0x10($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X10);
    // 0x8026FF1C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8026FF20: cvt.d.s     $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f8.d = CVT_D_S(ctx->f12.fl);
    // 0x8026FF24: c.eq.d      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.d == ctx->f8.d;
    // 0x8026FF28: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8026FF2C: bc1t        L_8026FF50
    if (c1cs) {
        // 0x8026FF30: lui         $at, 0x8028
        ctx->r1 = S32(0X8028 << 16);
            goto L_8026FF50;
    }
    // 0x8026FF30: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8026FF34: lwc1        $f10, 0x34($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8026FF38: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8026FF3C: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x8026FF40: c.eq.d      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.d == ctx->f16.d;
    // 0x8026FF44: nop

    // 0x8026FF48: bc1f        L_8026FF60
    if (!c1cs) {
        // 0x8026FF4C: nop
    
            goto L_8026FF60;
    }
    // 0x8026FF4C: nop

L_8026FF50:
    // 0x8026FF50: lwc1        $f18, -0x2920($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X2920);
    // 0x8026FF54: b           L_8026FF9C
    // 0x8026FF58: swc1        $f18, 0xAC($a0)
    MEM_W(0XAC, ctx->r4) = ctx->f18.u32l;
        goto L_8026FF9C;
    // 0x8026FF58: swc1        $f18, 0xAC($a0)
    MEM_W(0XAC, ctx->r4) = ctx->f18.u32l;
    // 0x8026FF5C: nop

L_8026FF60:
    // 0x8026FF60: div.s       $f2, $f4, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = DIV_S(ctx->f4.fl, ctx->f12.fl);
    // 0x8026FF64: lwc1        $f6, 0xB4($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0XB4);
    // 0x8026FF68: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8026FF6C: div.s       $f0, $f6, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = DIV_S(ctx->f6.fl, ctx->f2.fl);
    // 0x8026FF70: swc1        $f0, 0xAC($a0)
    MEM_W(0XAC, ctx->r4) = ctx->f0.u32l;
    // 0x8026FF74: lwc1        $f10, -0x2914($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X2914);
    // 0x8026FF78: lwc1        $f11, -0x2918($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X2918);
    // 0x8026FF7C: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x8026FF80: c.lt.d      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.d < ctx->f10.d;
    // 0x8026FF84: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8026FF88: bc1f        L_8026FFA0
    if (!c1cs) {
        // 0x8026FF8C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8026FFA0;
    }
    // 0x8026FF8C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8026FF90: lwc1        $f16, -0x2910($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X2910);
    // 0x8026FF94: nop

    // 0x8026FF98: swc1        $f16, 0xAC($a0)
    MEM_W(0XAC, ctx->r4) = ctx->f16.u32l;
L_8026FF9C:
    // 0x8026FF9C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8026FFA0:
    // 0x8026FFA0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8026FFA4: jr          $ra
    // 0x8026FFA8: nop

    return;
    // 0x8026FFA8: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8026FFAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026FFAC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026FFB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026FFB4: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x8026FFB8: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8026FFBC: lhu         $t7, 0x8($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X8);
    // 0x8026FFC0: nop

    // 0x8026FFC4: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x8026FFC8: beq         $t8, $zero, L_8026FFE0
    if (ctx->r24 == 0) {
        // 0x8026FFCC: nop
    
            goto L_8026FFE0;
    }
    // 0x8026FFCC: nop

    // 0x8026FFD0: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x8026FFD4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8026FFD8: b           L_8026FFF0
    // 0x8026FFDC: lwc1        $f12, 0xB0($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0XB0);
        goto L_8026FFF0;
    // 0x8026FFDC: lwc1        $f12, 0xB0($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0XB0);
L_8026FFE0:
    // 0x8026FFE0: lwc1        $f1, -0x2908($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X2908);
    // 0x8026FFE4: lwc1        $f0, -0x2904($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X2904);
    // 0x8026FFE8: nop

    // 0x8026FFEC: lwc1        $f12, 0xB0($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0XB0);
L_8026FFF0:
    // 0x8026FFF0: jal         0x80279308
    // 0x8026FFF4: cvt.s.d     $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f14.fl = CVT_S_D(ctx->f0.d);
    ovl_8024B800_func_80279308(rdram, ctx);
        goto after_0;
    // 0x8026FFF4: cvt.s.d     $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f14.fl = CVT_S_D(ctx->f0.d);
    after_0:
    // 0x8026FFF8: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8026FFFC: lwc1        $f7, -0x2900($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X2900);
    // 0x80270000: lwc1        $f6, -0x28FC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X28FC);
    // 0x80270004: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x80270008: c.lt.d      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.d < ctx->f6.d;
    // 0x8027000C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80270010: bc1f        L_80270020
    if (!c1cs) {
        // 0x80270014: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80270020;
    }
    // 0x80270014: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80270018: b           L_80270020
    // 0x8027001C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80270020;
    // 0x8027001C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80270020:
    // 0x80270020: jr          $ra
    // 0x80270024: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80270024: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void ovl_8024B800_func_80270028(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80270028: lui         $t6, 0x8010
    ctx->r14 = S32(0X8010 << 16);
    // 0x8027002C: lhu         $t6, 0x522A($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X522A);
    // 0x80270030: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80270034: andi        $t7, $t6, 0xF
    ctx->r15 = ctx->r14 & 0XF;
    // 0x80270038: bne         $t7, $zero, L_802700EC
    if (ctx->r15 != 0) {
        // 0x8027003C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802700EC;
    }
    // 0x8027003C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80270040: jal         0x8026FFAC
    // 0x80270044: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_8024B800_func_8026FFAC(rdram, ctx);
        goto after_0;
    // 0x80270044: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80270048: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8027004C: beq         $v0, $zero, L_802700EC
    if (ctx->r2 == 0) {
        // 0x80270050: lui         $t8, 0x8010
        ctx->r24 = S32(0X8010 << 16);
            goto L_802700EC;
    }
    // 0x80270050: lui         $t8, 0x8010
    ctx->r24 = S32(0X8010 << 16);
    // 0x80270054: lhu         $t8, 0x522A($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0X522A);
    // 0x80270058: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x8027005C: div         $zero, $t8, $at
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r1)));
    // 0x80270060: lhu         $t0, 0x1A($a0)
    ctx->r8 = MEM_HU(ctx->r4, 0X1A);
    // 0x80270064: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x80270068: mfhi        $t9
    ctx->r25 = hi;
    // 0x8027006C: bne         $t9, $t0, L_802700F0
    if (ctx->r25 != ctx->r8) {
        // 0x80270070: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802700F0;
    }
    // 0x80270070: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80270074: lw          $t1, 0x3B20($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X3B20);
    // 0x80270078: nop

    // 0x8027007C: lw          $t2, 0x88($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X88);
    // 0x80270080: nop

    // 0x80270084: beq         $a0, $t2, L_802700F0
    if (ctx->r4 == ctx->r10) {
        // 0x80270088: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802700F0;
    }
    // 0x80270088: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027008C: lw          $v0, 0xD8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD8);
    // 0x80270090: nop

    // 0x80270094: lbu         $t3, 0x1D($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X1D);
    // 0x80270098: nop

    // 0x8027009C: andi        $t4, $t3, 0xE0
    ctx->r12 = ctx->r11 & 0XE0;
    // 0x802700A0: bne         $t4, $zero, L_802700F0
    if (ctx->r12 != 0) {
        // 0x802700A4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802700F0;
    }
    // 0x802700A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802700A8: lhu         $t5, 0x18($a0)
    ctx->r13 = MEM_HU(ctx->r4, 0X18);
    // 0x802700AC: addiu       $at, $zero, 0xB8
    ctx->r1 = ADD32(0, 0XB8);
    // 0x802700B0: ori         $t7, $t5, 0x100
    ctx->r15 = ctx->r13 | 0X100;
    // 0x802700B4: sh          $t7, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r15;
    // 0x802700B8: andi        $t8, $t7, 0xFDFF
    ctx->r24 = ctx->r15 & 0XFDFF;
    // 0x802700BC: sh          $t8, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r24;
    // 0x802700C0: lbu         $t9, 0x14($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X14);
    // 0x802700C4: lui         $t0, 0x8028
    ctx->r8 = S32(0X8028 << 16);
    // 0x802700C8: bne         $t9, $at, L_802700D8
    if (ctx->r25 != ctx->r1) {
        // 0x802700CC: nop
    
            goto L_802700D8;
    }
    // 0x802700CC: nop

    // 0x802700D0: b           L_802700EC
    // 0x802700D4: sb          $zero, 0xB($a0)
    MEM_B(0XB, ctx->r4) = 0;
        goto L_802700EC;
    // 0x802700D4: sb          $zero, 0xB($a0)
    MEM_B(0XB, ctx->r4) = 0;
L_802700D8:
    // 0x802700D8: lh          $t0, -0x1B60($t0)
    ctx->r8 = MEM_H(ctx->r8, -0X1B60);
    // 0x802700DC: nop

    // 0x802700E0: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x802700E4: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x802700E8: sb          $t2, 0xB($a0)
    MEM_B(0XB, ctx->r4) = ctx->r10;
L_802700EC:
    // 0x802700EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802700F0:
    // 0x802700F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802700F4: jr          $ra
    // 0x802700F8: nop

    return;
    // 0x802700F8: nop

;}
RECOMP_FUNC void ovl_8024B800_func_802700FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802700FC: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x80270100: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80270104: lwc1        $f0, 0xB4($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XB4);
    // 0x80270108: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x8027010C: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x80270110: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x80270114: bc1f        L_80270124
    if (!c1cs) {
        // 0x80270118: nop
    
            goto L_80270124;
    }
    // 0x80270118: nop

    // 0x8027011C: jr          $ra
    // 0x80270120: swc1        $f14, 0xAC($a0)
    MEM_W(0XAC, ctx->r4) = ctx->f14.u32l;
    return;
    // 0x80270120: swc1        $f14, 0xAC($a0)
    MEM_W(0XAC, ctx->r4) = ctx->f14.u32l;
L_80270124:
    // 0x80270124: sub.s       $f6, $f14, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f14.fl - ctx->f4.fl;
    // 0x80270128: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x8027012C: nop

    // 0x80270130: div.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f12.fl);
    // 0x80270134: add.s       $f16, $f10, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x80270138: swc1        $f16, 0xAC($a0)
    MEM_W(0XAC, ctx->r4) = ctx->f16.u32l;
    // 0x8027013C: jr          $ra
    // 0x80270140: nop

    return;
    // 0x80270140: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80270144(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80270144: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80270148: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8027014C: lwc1        $f4, -0x28F8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X28F8);
    // 0x80270150: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80270154: mul.s       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x80270158: lhu         $t6, 0x2C($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X2C);
    // 0x8027015C: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x80270160: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80270164: nop

    // 0x80270168: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8027016C: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80270170: nop

    // 0x80270174: andi        $at, $t8, 0x4
    ctx->r1 = ctx->r24 & 0X4;
    // 0x80270178: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x8027017C: beq         $t8, $zero, L_802701D0
    if (ctx->r24 == 0) {
        // 0x80270180: nop
    
            goto L_802701D0;
    }
    // 0x80270180: nop

    // 0x80270184: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80270188: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8027018C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80270190: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80270194: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80270198: nop

    // 0x8027019C: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x802701A0: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x802701A4: nop

    // 0x802701A8: andi        $at, $t8, 0x4
    ctx->r1 = ctx->r24 & 0X4;
    // 0x802701AC: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x802701B0: bne         $t8, $zero, L_802701C8
    if (ctx->r24 != 0) {
        // 0x802701B4: nop
    
            goto L_802701C8;
    }
    // 0x802701B4: nop

    // 0x802701B8: mfc1        $t8, $f8
    ctx->r24 = (int32_t)ctx->f8.u32l;
    // 0x802701BC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802701C0: b           L_802701E0
    // 0x802701C4: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
        goto L_802701E0;
    // 0x802701C4: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
L_802701C8:
    // 0x802701C8: b           L_802701E0
    // 0x802701CC: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
        goto L_802701E0;
    // 0x802701CC: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
L_802701D0:
    // 0x802701D0: mfc1        $t8, $f8
    ctx->r24 = (int32_t)ctx->f8.u32l;
    // 0x802701D4: nop

    // 0x802701D8: bltz        $t8, L_802701C8
    if (SIGNED(ctx->r24) < 0) {
        // 0x802701DC: nop
    
            goto L_802701C8;
    }
    // 0x802701DC: nop

L_802701E0:
    // 0x802701E0: divu        $zero, $t6, $t8
    lo = S32(U32(ctx->r14) / U32(ctx->r24)); hi = S32(U32(ctx->r14) % U32(ctx->r24));
    // 0x802701E4: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x802701E8: bne         $t8, $zero, L_802701F4
    if (ctx->r24 != 0) {
        // 0x802701EC: nop
    
            goto L_802701F4;
    }
    // 0x802701EC: nop

    // 0x802701F0: break       7
    do_break(2150040048);
L_802701F4:
    // 0x802701F4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x802701F8: mfhi        $t9
    ctx->r25 = hi;
    // 0x802701FC: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x80270200: bgez        $t9, L_80270214
    if (SIGNED(ctx->r25) >= 0) {
        // 0x80270204: cvt.s.w     $f2, $f10
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    ctx->f2.fl = CVT_S_W(ctx->f10.u32l);
            goto L_80270214;
    }
    // 0x80270204: cvt.s.w     $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    ctx->f2.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80270208: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8027020C: nop

    // 0x80270210: add.s       $f2, $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f16.fl;
L_80270214:
    // 0x80270214: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80270218: lwc1        $f5, -0x28F0($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X28F0);
    // 0x8027021C: lwc1        $f4, -0x28EC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X28EC);
    // 0x80270220: cvt.d.s     $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f18.d = CVT_D_S(ctx->f2.fl);
    // 0x80270224: mul.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x80270228: cvt.s.d     $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f2.fl = CVT_S_D(ctx->f6.d);
    // 0x8027022C: jr          $ra
    // 0x80270230: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    return;
    // 0x80270230: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
;}
RECOMP_FUNC void ovl_8024B800_func_80270234(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80270234: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80270238: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027023C: lwc1        $f14, 0x88($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X88);
    // 0x80270240: lwc1        $f12, 0xB0($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0XB0);
    // 0x80270244: jal         0x80279308
    // 0x80270248: nop

    ovl_8024B800_func_80279308(rdram, ctx);
        goto after_0;
    // 0x80270248: nop

    after_0:
    // 0x8027024C: jal         0x80081040
    // 0x80270250: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    func_80081040(rdram, ctx);
        goto after_1;
    // 0x80270250: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_1:
    // 0x80270254: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80270258: lw          $t6, 0x3B20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B20);
    // 0x8027025C: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x80270260: lwc1        $f12, 0x20($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X20);
    // 0x80270264: jal         0x80080E80
    // 0x80270268: nop

    func_80080E80(rdram, ctx);
        goto after_2;
    // 0x80270268: nop

    after_2:
    // 0x8027026C: jal         0x80272AEC
    // 0x80270270: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    ovl_8024B800_func_80272AEC(rdram, ctx);
        goto after_3;
    // 0x80270270: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_3:
    // 0x80270274: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x80270278: lw          $t7, 0x3B20($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3B20);
    // 0x8027027C: lwc1        $f16, 0x1C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80270280: lhu         $t8, 0x6A($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X6A);
    // 0x80270284: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80270288: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x8027028C: bgez        $t8, L_802702A4
    if (SIGNED(ctx->r24) >= 0) {
        // 0x80270290: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_802702A4;
    }
    // 0x80270290: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80270294: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80270298: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8027029C: nop

    // 0x802702A0: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_802702A4:
    // 0x802702A4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802702A8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802702AC: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x802702B0: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x802702B4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802702B8: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x802702BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802702C0: mul.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x802702C4: c.lt.s      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.fl < ctx->f10.fl;
    // 0x802702C8: nop

    // 0x802702CC: bc1f        L_802702DC
    if (!c1cs) {
        // 0x802702D0: nop
    
            goto L_802702DC;
    }
    // 0x802702D0: nop

    // 0x802702D4: b           L_802702DC
    // 0x802702D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802702DC;
    // 0x802702D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802702DC:
    // 0x802702DC: jr          $ra
    // 0x802702E0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x802702E0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_8024B800_func_802702E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802702E4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802702E8: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x802702EC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x802702F0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802702F4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802702F8: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x802702FC: addiu       $v1, $v1, 0xB78
    ctx->r3 = ADD32(ctx->r3, 0XB78);
    // 0x80270300: swc1        $f2, 0xB8($a0)
    MEM_W(0XB8, ctx->r4) = ctx->f2.u32l;
    // 0x80270304: lhu         $t6, 0x0($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X0);
    // 0x80270308: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8027030C: bne         $t6, $zero, L_80270374
    if (ctx->r14 != 0) {
        // 0x80270310: nop
    
            goto L_80270374;
    }
    // 0x80270310: nop

    // 0x80270314: lw          $t7, 0xC8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XC8);
    // 0x80270318: nop

    // 0x8027031C: lw          $t8, 0x914($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X914);
    // 0x80270320: nop

    // 0x80270324: beq         $a0, $t8, L_80270374
    if (ctx->r4 == ctx->r24) {
        // 0x80270328: nop
    
            goto L_80270374;
    }
    // 0x80270328: nop

    // 0x8027032C: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x80270330: lwc1        $f4, 0x50($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X50);
    // 0x80270334: nop

    // 0x80270338: c.eq.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl == ctx->f4.fl;
    // 0x8027033C: nop

    // 0x80270340: bc1f        L_80270374
    if (!c1cs) {
        // 0x80270344: nop
    
            goto L_80270374;
    }
    // 0x80270344: nop

    // 0x80270348: lbu         $t9, 0x0($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X0);
    // 0x8027034C: addiu       $at, $zero, 0x1A
    ctx->r1 = ADD32(0, 0X1A);
    // 0x80270350: bne         $t9, $at, L_80270364
    if (ctx->r25 != ctx->r1) {
        // 0x80270354: lui         $at, 0x40A0
        ctx->r1 = S32(0X40A0 << 16);
            goto L_80270364;
    }
    // 0x80270354: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x80270358: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8027035C: b           L_80270374
    // 0x80270360: swc1        $f6, 0xB8($a0)
    MEM_W(0XB8, ctx->r4) = ctx->f6.u32l;
        goto L_80270374;
    // 0x80270360: swc1        $f6, 0xB8($a0)
    MEM_W(0XB8, ctx->r4) = ctx->f6.u32l;
L_80270364:
    // 0x80270364: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80270368: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8027036C: nop

    // 0x80270370: swc1        $f14, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f14.u32l;
L_80270374:
    // 0x80270374: lhu         $t0, 0x18($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X18);
    // 0x80270378: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8027037C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80270380: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x80270384: andi        $t1, $t0, 0x100
    ctx->r9 = ctx->r8 & 0X100;
    // 0x80270388: beq         $t1, $zero, L_802703A8
    if (ctx->r9 == 0) {
        // 0x8027038C: lui         $at, 0x3FC0
        ctx->r1 = S32(0X3FC0 << 16);
            goto L_802703A8;
    }
    // 0x8027038C: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x80270390: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x80270394: nop

    // 0x80270398: lw          $t3, 0x914($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X914);
    // 0x8027039C: nop

    // 0x802703A0: bne         $s0, $t3, L_80270E40
    if (ctx->r16 != ctx->r11) {
        // 0x802703A4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80270E40;
    }
    // 0x802703A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802703A8:
    // 0x802703A8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802703AC: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x802703B0: swc1        $f0, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f0.u32l;
    // 0x802703B4: lhu         $t4, 0xB7E($t4)
    ctx->r12 = MEM_HU(ctx->r12, 0XB7E);
    // 0x802703B8: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x802703BC: andi        $t5, $t4, 0x10
    ctx->r13 = ctx->r12 & 0X10;
    // 0x802703C0: beq         $t5, $zero, L_802703E4
    if (ctx->r13 == 0) {
        // 0x802703C4: nop
    
            goto L_802703E4;
    }
    // 0x802703C4: nop

    // 0x802703C8: lw          $t6, 0xB28($t6)
    ctx->r14 = MEM_W(ctx->r14, 0XB28);
    // 0x802703CC: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802703D0: bne         $s0, $t6, L_802703E4
    if (ctx->r16 != ctx->r14) {
        // 0x802703D4: nop
    
            goto L_802703E4;
    }
    // 0x802703D4: nop

    // 0x802703D8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802703DC: b           L_80270E3C
    // 0x802703E0: swc1        $f8, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f8.u32l;
        goto L_80270E3C;
    // 0x802703E0: swc1        $f8, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f8.u32l;
L_802703E4:
    // 0x802703E4: lbu         $t7, 0x0($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X0);
    // 0x802703E8: nop

    // 0x802703EC: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x802703F0: sltiu       $at, $t8, 0x52
    ctx->r1 = ctx->r24 < 0X52 ? 1 : 0;
    // 0x802703F4: beq         $at, $zero, L_80270E00
    if (ctx->r1 == 0) {
        // 0x802703F8: sll         $t8, $t8, 2
        ctx->r24 = S32(ctx->r24 << 2);
            goto L_80270E00;
    }
    // 0x802703F8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x802703FC: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80270400: addu        $at, $at, $t8
    gpr jr_addend_8027040C = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80270404: lw          $t8, -0x28E8($at)
    ctx->r24 = ADD32(ctx->r1, -0X28E8);
    // 0x80270408: nop

    // 0x8027040C: jr          $t8
    // 0x80270410: nop

    switch (jr_addend_8027040C >> 2) {
        case 0: goto L_80270DB4; break;
        case 1: goto L_80270DB4; break;
        case 2: goto L_80270DB4; break;
        case 3: goto L_80270DB4; break;
        case 4: goto L_80270DB4; break;
        case 5: goto L_80270DB4; break;
        case 6: goto L_80270414; break;
        case 7: goto L_80270E00; break;
        case 8: goto L_80270E00; break;
        case 9: goto L_80270E00; break;
        case 10: goto L_80270DB4; break;
        case 11: goto L_80270E00; break;
        case 12: goto L_80270E00; break;
        case 13: goto L_80270A00; break;
        case 14: goto L_80270E00; break;
        case 15: goto L_80270A00; break;
        case 16: goto L_80270A18; break;
        case 17: goto L_80270A00; break;
        case 18: goto L_80270A00; break;
        case 19: goto L_80270B9C; break;
        case 20: goto L_80270B50; break;
        case 21: goto L_80270E00; break;
        case 22: goto L_80270D68; break;
        case 23: goto L_80270C10; break;
        case 24: goto L_80270C20; break;
        case 25: goto L_80270D4C; break;
        case 26: goto L_80270D2C; break;
        case 27: goto L_80270D10; break;
        case 28: goto L_80270D2C; break;
        case 29: goto L_80270E00; break;
        case 30: goto L_80270C98; break;
        case 31: goto L_80270CE8; break;
        case 32: goto L_80270E00; break;
        case 33: goto L_80270D78; break;
        case 34: goto L_80270E00; break;
        case 35: goto L_80270B78; break;
        case 36: goto L_80270BAC; break;
        case 37: goto L_80270C10; break;
        case 38: goto L_80270E00; break;
        case 39: goto L_80270C98; break;
        case 40: goto L_80270C98; break;
        case 41: goto L_80270C10; break;
        case 42: goto L_80270BF4; break;
        case 43: goto L_80270B40; break;
        case 44: goto L_80270AC0; break;
        case 45: goto L_80270A00; break;
        case 46: goto L_80270A30; break;
        case 47: goto L_80270A74; break;
        case 48: goto L_802709AC; break;
        case 49: goto L_80270C88; break;
        case 50: goto L_80270588; break;
        case 51: goto L_8027060C; break;
        case 52: goto L_802706D4; break;
        case 53: goto L_8027072C; break;
        case 54: goto L_80270E00; break;
        case 55: goto L_80270810; break;
        case 56: goto L_802707C4; break;
        case 57: goto L_8027060C; break;
        case 58: goto L_80270920; break;
        case 59: goto L_802708C4; break;
        case 60: goto L_8027098C; break;
        case 61: goto L_80270910; break;
        case 62: goto L_80270558; break;
        case 63: goto L_80270558; break;
        case 64: goto L_80270558; break;
        case 65: goto L_80270510; break;
        case 66: goto L_80270690; break;
        case 67: goto L_802704DC; break;
        case 68: goto L_80270BC8; break;
        case 69: goto L_8027049C; break;
        case 70: goto L_802704B4; break;
        case 71: goto L_802704AC; break;
        case 72: goto L_80270E00; break;
        case 73: goto L_80270E00; break;
        case 74: goto L_80270DB4; break;
        case 75: goto L_8027047C; break;
        case 76: goto L_80270460; break;
        case 77: goto L_8027041C; break;
        case 78: goto L_80270E00; break;
        case 79: goto L_80270E00; break;
        case 80: goto L_80270C10; break;
        case 81: goto L_80270460; break;
        default: switch_error(__func__, 0x8027040C, 0x8027D718);
    }
    // 0x80270410: nop

L_80270414:
    // 0x80270414: b           L_80270E3C
    // 0x80270418: swc1        $f2, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f2.u32l;
        goto L_80270E3C;
    // 0x80270418: swc1        $f2, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f2.u32l;
L_8027041C:
    // 0x8027041C: lui         $a1, 0x3F14
    ctx->r5 = S32(0X3F14 << 16);
    // 0x80270420: ori         $a1, $a1, 0x7AE1
    ctx->r5 = ctx->r5 | 0X7AE1;
    // 0x80270424: jal         0x80270144
    // 0x80270428: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80270144(rdram, ctx);
        goto after_0;
    // 0x80270428: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x8027042C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80270430: lwc1        $f17, -0x27A0($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X27A0);
    // 0x80270434: lwc1        $f16, -0x279C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X279C);
    // 0x80270438: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x8027043C: add.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d + ctx->f16.d;
    // 0x80270440: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80270444: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x80270448: lui         $a1, 0x4248
    ctx->r5 = S32(0X4248 << 16);
    // 0x8027044C: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80270450: jal         0x802700FC
    // 0x80270454: lui         $a3, 0x3F00
    ctx->r7 = S32(0X3F00 << 16);
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_1;
    // 0x80270454: lui         $a3, 0x3F00
    ctx->r7 = S32(0X3F00 << 16);
    after_1:
    // 0x80270458: b           L_80270E40
    // 0x8027045C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x8027045C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80270460:
    // 0x80270460: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x80270464: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80270468: lui         $a1, 0x4248
    ctx->r5 = S32(0X4248 << 16);
    // 0x8027046C: jal         0x802700FC
    // 0x80270470: lui         $a3, 0x4000
    ctx->r7 = S32(0X4000 << 16);
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_2;
    // 0x80270470: lui         $a3, 0x4000
    ctx->r7 = S32(0X4000 << 16);
    after_2:
    // 0x80270474: b           L_80270E40
    // 0x80270478: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x80270478: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8027047C:
    // 0x8027047C: lui         $a2, 0x4011
    ctx->r6 = S32(0X4011 << 16);
    // 0x80270480: ori         $a2, $a2, 0xEB85
    ctx->r6 = ctx->r6 | 0XEB85;
    // 0x80270484: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80270488: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    // 0x8027048C: jal         0x802700FC
    // 0x80270490: lui         $a3, 0x3F00
    ctx->r7 = S32(0X3F00 << 16);
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_3;
    // 0x80270490: lui         $a3, 0x3F00
    ctx->r7 = S32(0X3F00 << 16);
    after_3:
    // 0x80270494: b           L_80270E40
    // 0x80270498: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x80270498: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8027049C:
    // 0x8027049C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802704A0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802704A4: b           L_80270E3C
    // 0x802704A8: swc1        $f6, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f6.u32l;
        goto L_80270E3C;
    // 0x802704A8: swc1        $f6, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f6.u32l;
L_802704AC:
    // 0x802704AC: b           L_80270E3C
    // 0x802704B0: swc1        $f14, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f14.u32l;
        goto L_80270E3C;
    // 0x802704B0: swc1        $f14, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f14.u32l;
L_802704B4:
    // 0x802704B4: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x802704B8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802704BC: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x802704C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802704C4: lui         $a1, 0x4248
    ctx->r5 = S32(0X4248 << 16);
    // 0x802704C8: lui         $a3, 0x3F00
    ctx->r7 = S32(0X3F00 << 16);
    // 0x802704CC: jal         0x802700FC
    // 0x802704D0: swc1        $f8, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f8.u32l;
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_4;
    // 0x802704D0: swc1        $f8, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f8.u32l;
    after_4:
    // 0x802704D4: b           L_80270E40
    // 0x802704D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x802704D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802704DC:
    // 0x802704DC: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802704E0: lwc1        $f16, -0x2798($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X2798);
    // 0x802704E4: lwc1        $f10, 0x44($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X44);
    // 0x802704E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802704EC: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x802704F0: lui         $a1, 0x4248
    ctx->r5 = S32(0X4248 << 16);
    // 0x802704F4: bc1f        L_80270510
    if (!c1cs) {
        // 0x802704F8: nop
    
            goto L_80270510;
    }
    // 0x802704F8: nop

    // 0x802704FC: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x80270500: jal         0x802700FC
    // 0x80270504: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_5;
    // 0x80270504: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_5:
    // 0x80270508: b           L_80270E40
    // 0x8027050C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x8027050C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80270510:
    // 0x80270510: lui         $a1, 0x3F99
    ctx->r5 = S32(0X3F99 << 16);
    // 0x80270514: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x80270518: jal         0x80270144
    // 0x8027051C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80270144(rdram, ctx);
        goto after_6;
    // 0x8027051C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80270520: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80270524: lwc1        $f5, -0x2790($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X2790);
    // 0x80270528: lwc1        $f4, -0x278C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X278C);
    // 0x8027052C: cvt.d.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.d = CVT_D_S(ctx->f0.fl);
    // 0x80270530: add.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d + ctx->f4.d;
    // 0x80270534: lui         $a3, 0x3F4C
    ctx->r7 = S32(0X3F4C << 16);
    // 0x80270538: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x8027053C: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x80270540: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x80270544: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80270548: jal         0x802700FC
    // 0x8027054C: lui         $a1, 0x4248
    ctx->r5 = S32(0X4248 << 16);
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_7;
    // 0x8027054C: lui         $a1, 0x4248
    ctx->r5 = S32(0X4248 << 16);
    after_7:
    // 0x80270550: b           L_80270E40
    // 0x80270554: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x80270554: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80270558:
    // 0x80270558: lui         $a1, 0x3ECC
    ctx->r5 = S32(0X3ECC << 16);
    // 0x8027055C: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x80270560: jal         0x80270144
    // 0x80270564: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80270144(rdram, ctx);
        goto after_8;
    // 0x80270564: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80270568: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8027056C: lwc1        $f17, -0x2788($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X2788);
    // 0x80270570: lwc1        $f16, -0x2784($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X2784);
    // 0x80270574: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x80270578: add.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d + ctx->f16.d;
    // 0x8027057C: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x80270580: b           L_80270E3C
    // 0x80270584: swc1        $f4, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f4.u32l;
        goto L_80270E3C;
    // 0x80270584: swc1        $f4, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f4.u32l;
L_80270588:
    // 0x80270588: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x8027058C: lw          $t9, 0x3B20($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X3B20);
    // 0x80270590: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x80270594: lw          $t0, 0xB8($t9)
    ctx->r8 = MEM_W(ctx->r25, 0XB8);
    // 0x80270598: lui         $a1, 0x3E4C
    ctx->r5 = S32(0X3E4C << 16);
    // 0x8027059C: bne         $t0, $t1, L_802705D0
    if (ctx->r8 != ctx->r9) {
        // 0x802705A0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_802705D0;
    }
    // 0x802705A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802705A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802705A8: jal         0x80270144
    // 0x802705AC: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    ovl_8024B800_func_80270144(rdram, ctx);
        goto after_9;
    // 0x802705AC: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    after_9:
    // 0x802705B0: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802705B4: lwc1        $f9, -0x2780($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X2780);
    // 0x802705B8: lwc1        $f8, -0x277C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X277C);
    // 0x802705BC: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x802705C0: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x802705C4: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x802705C8: b           L_80270E3C
    // 0x802705CC: swc1        $f16, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f16.u32l;
        goto L_80270E3C;
    // 0x802705CC: swc1        $f16, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f16.u32l;
L_802705D0:
    // 0x802705D0: jal         0x80270144
    // 0x802705D4: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    ovl_8024B800_func_80270144(rdram, ctx);
        goto after_10;
    // 0x802705D4: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    after_10:
    // 0x802705D8: lui         $at, 0x3FF8
    ctx->r1 = S32(0X3FF8 << 16);
    // 0x802705DC: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x802705E0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802705E4: cvt.d.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.d = CVT_D_S(ctx->f0.fl);
    // 0x802705E8: add.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d + ctx->f4.d;
    // 0x802705EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802705F0: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x802705F4: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    // 0x802705F8: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x802705FC: jal         0x802700FC
    // 0x80270600: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_11;
    // 0x80270600: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_11:
    // 0x80270604: b           L_80270E40
    // 0x80270608: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x80270608: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8027060C:
    // 0x8027060C: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x80270610: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x80270614: lhu         $t3, 0x10($t2)
    ctx->r11 = MEM_HU(ctx->r10, 0X10);
    // 0x80270618: nop

    // 0x8027061C: andi        $t4, $t3, 0x100
    ctx->r12 = ctx->r11 & 0X100;
    // 0x80270620: bne         $t4, $zero, L_80270694
    if (ctx->r12 != 0) {
        // 0x80270624: lui         $a1, 0x3F47
        ctx->r5 = S32(0X3F47 << 16);
            goto L_80270694;
    }
    // 0x80270624: lui         $a1, 0x3F47
    ctx->r5 = S32(0X3F47 << 16);
    // 0x80270628: lw          $t5, 0xB24($t5)
    ctx->r13 = MEM_W(ctx->r13, 0XB24);
    // 0x8027062C: lwc1        $f10, 0xB4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XB4);
    // 0x80270630: lwc1        $f0, 0xB4($t5)
    ctx->f0.u32l = MEM_W(ctx->r13, 0XB4);
    // 0x80270634: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x80270638: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x8027063C: nop

    // 0x80270640: bc1f        L_80270650
    if (!c1cs) {
        // 0x80270644: nop
    
            goto L_80270650;
    }
    // 0x80270644: nop

    // 0x80270648: b           L_80270E3C
    // 0x8027064C: swc1        $f12, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f12.u32l;
        goto L_80270E3C;
    // 0x8027064C: swc1        $f12, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f12.u32l;
L_80270650:
    // 0x80270650: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80270654: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80270658: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x8027065C: nop

    // 0x80270660: bc1f        L_80270694
    if (!c1cs) {
        // 0x80270664: lui         $a1, 0x3F47
        ctx->r5 = S32(0X3F47 << 16);
            goto L_80270694;
    }
    // 0x80270664: lui         $a1, 0x3F47
    ctx->r5 = S32(0X3F47 << 16);
    // 0x80270668: jal         0x80270144
    // 0x8027066C: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    ovl_8024B800_func_80270144(rdram, ctx);
        goto after_12;
    // 0x8027066C: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    after_12:
    // 0x80270670: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80270674: lwc1        $f5, -0x2778($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X2778);
    // 0x80270678: lwc1        $f4, -0x2774($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X2774);
    // 0x8027067C: cvt.d.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.d = CVT_D_S(ctx->f0.fl);
    // 0x80270680: add.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d + ctx->f4.d;
    // 0x80270684: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x80270688: b           L_80270E3C
    // 0x8027068C: swc1        $f8, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f8.u32l;
        goto L_80270E3C;
    // 0x8027068C: swc1        $f8, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f8.u32l;
L_80270690:
    // 0x80270690: lui         $a1, 0x3F47
    ctx->r5 = S32(0X3F47 << 16);
L_80270694:
    // 0x80270694: ori         $a1, $a1, 0xAE14
    ctx->r5 = ctx->r5 | 0XAE14;
    // 0x80270698: jal         0x80270144
    // 0x8027069C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80270144(rdram, ctx);
        goto after_13;
    // 0x8027069C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x802706A0: lui         $at, 0x3FF8
    ctx->r1 = S32(0X3FF8 << 16);
    // 0x802706A4: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x802706A8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x802706AC: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x802706B0: add.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d + ctx->f16.d;
    // 0x802706B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802706B8: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x802706BC: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    // 0x802706C0: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x802706C4: jal         0x802700FC
    // 0x802706C8: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_14;
    // 0x802706C8: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_14:
    // 0x802706CC: b           L_80270E40
    // 0x802706D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x802706D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802706D4:
    // 0x802706D4: lw          $t6, 0xD8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XD8);
    // 0x802706D8: addiu       $at, $zero, 0xB8
    ctx->r1 = ADD32(0, 0XB8);
    // 0x802706DC: lbu         $t7, 0x14($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X14);
    // 0x802706E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802706E4: bne         $t7, $at, L_80270714
    if (ctx->r15 != ctx->r1) {
        // 0x802706E8: lui         $a1, 0x41F0
        ctx->r5 = S32(0X41F0 << 16);
            goto L_80270714;
    }
    // 0x802706E8: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    // 0x802706EC: lw          $t8, 0xC8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC8);
    // 0x802706F0: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x802706F4: lhu         $t9, 0x10($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X10);
    // 0x802706F8: nop

    // 0x802706FC: andi        $t0, $t9, 0x100
    ctx->r8 = ctx->r25 & 0X100;
    // 0x80270700: bne         $t0, $zero, L_80270718
    if (ctx->r8 != 0) {
        // 0x80270704: lui         $a2, 0x4011
        ctx->r6 = S32(0X4011 << 16);
            goto L_80270718;
    }
    // 0x80270704: lui         $a2, 0x4011
    ctx->r6 = S32(0X4011 << 16);
    // 0x80270708: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8027070C: nop

    // 0x80270710: swc1        $f6, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f6.u32l;
L_80270714:
    // 0x80270714: lui         $a2, 0x4011
    ctx->r6 = S32(0X4011 << 16);
L_80270718:
    // 0x80270718: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x8027071C: jal         0x802700FC
    // 0x80270720: ori         $a2, $a2, 0xEB85
    ctx->r6 = ctx->r6 | 0XEB85;
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_15;
    // 0x80270720: ori         $a2, $a2, 0xEB85
    ctx->r6 = ctx->r6 | 0XEB85;
    after_15:
    // 0x80270724: b           L_80270E40
    // 0x80270728: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x80270728: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8027072C:
    // 0x8027072C: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x80270730: swc1        $f14, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f14.u32l;
    // 0x80270734: lhu         $t2, 0x10($t1)
    ctx->r10 = MEM_HU(ctx->r9, 0X10);
    // 0x80270738: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x8027073C: andi        $t3, $t2, 0x100
    ctx->r11 = ctx->r10 & 0X100;
    // 0x80270740: bne         $t3, $zero, L_80270778
    if (ctx->r11 != 0) {
        // 0x80270744: lui         $t5, 0x8012
        ctx->r13 = S32(0X8012 << 16);
            goto L_80270778;
    }
    // 0x80270744: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x80270748: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8027074C: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x80270750: swc1        $f8, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f8.u32l;
    // 0x80270754: lw          $t4, 0xB24($t4)
    ctx->r12 = MEM_W(ctx->r12, 0XB24);
    // 0x80270758: lwc1        $f10, 0xB4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XB4);
    // 0x8027075C: lwc1        $f16, 0xB4($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0XB4);
    // 0x80270760: nop

    // 0x80270764: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x80270768: nop

    // 0x8027076C: bc1f        L_80270778
    if (!c1cs) {
        // 0x80270770: nop
    
            goto L_80270778;
    }
    // 0x80270770: nop

    // 0x80270774: swc1        $f12, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f12.u32l;
L_80270778:
    // 0x80270778: lw          $t5, 0xB24($t5)
    ctx->r13 = MEM_W(ctx->r13, 0XB24);
    // 0x8027077C: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x80270780: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80270784: lwc1        $f4, 0xB4($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0XB4);
    // 0x80270788: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8027078C: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x80270790: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    // 0x80270794: bc1f        L_802707AC
    if (!c1cs) {
        // 0x80270798: lui         $a2, 0x4013
        ctx->r6 = S32(0X4013 << 16);
            goto L_802707AC;
    }
    // 0x80270798: lui         $a2, 0x4013
    ctx->r6 = S32(0X4013 << 16);
    // 0x8027079C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802707A0: lwc1        $f6, -0x2770($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X2770);
    // 0x802707A4: b           L_80270E3C
    // 0x802707A8: swc1        $f6, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f6.u32l;
        goto L_80270E3C;
    // 0x802707A8: swc1        $f6, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f6.u32l;
L_802707AC:
    // 0x802707AC: lui         $a3, 0x3FB3
    ctx->r7 = S32(0X3FB3 << 16);
    // 0x802707B0: ori         $a3, $a3, 0x3333
    ctx->r7 = ctx->r7 | 0X3333;
    // 0x802707B4: jal         0x802700FC
    // 0x802707B8: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_16;
    // 0x802707B8: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    after_16:
    // 0x802707BC: b           L_80270E40
    // 0x802707C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x802707C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802707C4:
    // 0x802707C4: lui         $a1, 0x3E4C
    ctx->r5 = S32(0X3E4C << 16);
    // 0x802707C8: swc1        $f12, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f12.u32l;
    // 0x802707CC: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x802707D0: jal         0x80270144
    // 0x802707D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80270144(rdram, ctx);
        goto after_17;
    // 0x802707D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x802707D8: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x802707DC: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x802707E0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802707E4: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x802707E8: add.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d + ctx->f10.d;
    // 0x802707EC: lui         $a2, 0x4011
    ctx->r6 = S32(0X4011 << 16);
    // 0x802707F0: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x802707F4: ori         $a2, $a2, 0xEB85
    ctx->r6 = ctx->r6 | 0XEB85;
    // 0x802707F8: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x802707FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80270800: jal         0x802700FC
    // 0x80270804: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_18;
    // 0x80270804: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    after_18:
    // 0x80270808: b           L_80270E40
    // 0x8027080C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x8027080C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80270810:
    // 0x80270810: lhu         $t6, 0x24($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X24);
    // 0x80270814: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80270818: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8027081C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80270820: lw          $t8, 0xAEC($t8)
    ctx->r24 = MEM_W(ctx->r24, 0XAEC);
    // 0x80270824: addiu       $at, $zero, 0x36
    ctx->r1 = ADD32(0, 0X36);
    // 0x80270828: lhu         $t9, 0xE($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0XE);
    // 0x8027082C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80270830: beq         $t9, $at, L_80270840
    if (ctx->r25 == ctx->r1) {
        // 0x80270834: nop
    
            goto L_80270840;
    }
    // 0x80270834: nop

    // 0x80270838: b           L_8027085C
    // 0x8027083C: swc1        $f12, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f12.u32l;
        goto L_8027085C;
    // 0x8027083C: swc1        $f12, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f12.u32l;
L_80270840:
    // 0x80270840: lw          $a2, 0x54($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X54);
    // 0x80270844: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80270848: jal         0x802700FC
    // 0x8027084C: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_19;
    // 0x8027084C: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    after_19:
    // 0x80270850: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80270854: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80270858: nop

L_8027085C:
    // 0x8027085C: lwc1        $f4, 0xB4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XB4);
    // 0x80270860: lui         $at, 0x4008
    ctx->r1 = S32(0X4008 << 16);
    // 0x80270864: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x80270868: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8027086C: cvt.d.s     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f0.d = CVT_D_S(ctx->f4.fl);
    // 0x80270870: c.lt.d      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.d < ctx->f6.d;
    // 0x80270874: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80270878: bc1f        L_80270894
    if (!c1cs) {
        // 0x8027087C: lui         $at, 0x4018
        ctx->r1 = S32(0X4018 << 16);
            goto L_80270894;
    }
    // 0x8027087C: lui         $at, 0x4018
    ctx->r1 = S32(0X4018 << 16);
    // 0x80270880: lbu         $t0, 0x3($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X3);
    // 0x80270884: lwc1        $f8, 0xB4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XB4);
    // 0x80270888: ori         $t1, $t0, 0x1
    ctx->r9 = ctx->r8 | 0X1;
    // 0x8027088C: sb          $t1, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r9;
    // 0x80270890: cvt.d.s     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f0.d = CVT_D_S(ctx->f8.fl);
L_80270894:
    // 0x80270894: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x80270898: nop

    // 0x8027089C: c.lt.d      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.d < ctx->f10.d;
    // 0x802708A0: nop

    // 0x802708A4: bc1f        L_80270E40
    if (!c1cs) {
        // 0x802708A8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80270E40;
    }
    // 0x802708A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802708AC: lhu         $t2, 0xE($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0XE);
    // 0x802708B0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802708B4: bne         $t2, $at, L_80270E40
    if (ctx->r10 != ctx->r1) {
        // 0x802708B8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80270E40;
    }
    // 0x802708B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802708BC: b           L_80270E3C
    // 0x802708C0: swc1        $f14, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f14.u32l;
        goto L_80270E3C;
    // 0x802708C0: swc1        $f14, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f14.u32l;
L_802708C4:
    // 0x802708C4: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x802708C8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802708CC: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x802708D0: swc1        $f16, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f16.u32l;
    // 0x802708D4: lw          $t3, 0x3B20($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X3B20);
    // 0x802708D8: lw          $t5, 0xC8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XC8);
    // 0x802708DC: lw          $t4, 0xB8($t3)
    ctx->r12 = MEM_W(ctx->r11, 0XB8);
    // 0x802708E0: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802708E4: bne         $t4, $t5, L_802708F8
    if (ctx->r12 != ctx->r13) {
        // 0x802708E8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_802708F8;
    }
    // 0x802708E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802708EC: lwc1        $f18, -0x276C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X276C);
    // 0x802708F0: b           L_80270E3C
    // 0x802708F4: swc1        $f18, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f18.u32l;
        goto L_80270E3C;
    // 0x802708F4: swc1        $f18, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f18.u32l;
L_802708F8:
    // 0x802708F8: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x802708FC: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80270900: jal         0x802700FC
    // 0x80270904: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_20;
    // 0x80270904: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    after_20:
    // 0x80270908: b           L_80270E40
    // 0x8027090C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x8027090C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80270910:
    // 0x80270910: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80270914: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80270918: b           L_80270E3C
    // 0x8027091C: swc1        $f4, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f4.u32l;
        goto L_80270E3C;
    // 0x8027091C: swc1        $f4, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f4.u32l;
L_80270920:
    // 0x80270920: lwc1        $f6, 0x84($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X84);
    // 0x80270924: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x80270928: c.lt.s      $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f6.fl < ctx->f14.fl;
    // 0x8027092C: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80270930: bc1f        L_80270944
    if (!c1cs) {
        // 0x80270934: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80270944;
    }
    // 0x80270934: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80270938: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8027093C: nop

    // 0x80270940: swc1        $f8, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f8.u32l;
L_80270944:
    // 0x80270944: lw          $t6, 0x3B20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B20);
    // 0x80270948: lw          $t8, 0xC8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC8);
    // 0x8027094C: lw          $t7, 0xB8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XB8);
    // 0x80270950: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    // 0x80270954: bne         $t7, $t8, L_80270974
    if (ctx->r15 != ctx->r24) {
        // 0x80270958: lui         $a2, 0x4011
        ctx->r6 = S32(0X4011 << 16);
            goto L_80270974;
    }
    // 0x80270958: lui         $a2, 0x4011
    ctx->r6 = S32(0X4011 << 16);
    // 0x8027095C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80270960: ori         $a2, $a2, 0xEB85
    ctx->r6 = ctx->r6 | 0XEB85;
    // 0x80270964: jal         0x802700FC
    // 0x80270968: lui         $a3, 0x3F00
    ctx->r7 = S32(0X3F00 << 16);
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_21;
    // 0x80270968: lui         $a3, 0x3F00
    ctx->r7 = S32(0X3F00 << 16);
    after_21:
    // 0x8027096C: b           L_80270E40
    // 0x80270970: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x80270970: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80270974:
    // 0x80270974: lw          $a2, 0x54($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X54);
    // 0x80270978: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x8027097C: jal         0x802700FC
    // 0x80270980: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_22;
    // 0x80270980: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    after_22:
    // 0x80270984: b           L_80270E40
    // 0x80270988: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x80270988: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8027098C:
    // 0x8027098C: lw          $a2, 0x54($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X54);
    // 0x80270990: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80270994: swc1        $f14, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f14.u32l;
    // 0x80270998: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8027099C: jal         0x802700FC
    // 0x802709A0: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_23;
    // 0x802709A0: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    after_23:
    // 0x802709A4: b           L_80270E40
    // 0x802709A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x802709A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802709AC:
    // 0x802709AC: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x802709B0: lhu         $t9, 0xB6C($t9)
    ctx->r25 = MEM_HU(ctx->r25, 0XB6C);
    // 0x802709B4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802709B8: bne         $t9, $at, L_802709E8
    if (ctx->r25 != ctx->r1) {
        // 0x802709BC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_802709E8;
    }
    // 0x802709BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802709C0: lw          $t0, 0xC8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XC8);
    // 0x802709C4: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x802709C8: lhu         $t1, 0x10($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X10);
    // 0x802709CC: nop

    // 0x802709D0: andi        $t2, $t1, 0x100
    ctx->r10 = ctx->r9 & 0X100;
    // 0x802709D4: bne         $t2, $zero, L_802709E8
    if (ctx->r10 != 0) {
        // 0x802709D8: nop
    
            goto L_802709E8;
    }
    // 0x802709D8: nop

    // 0x802709DC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802709E0: nop

    // 0x802709E4: swc1        $f10, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f10.u32l;
L_802709E8:
    // 0x802709E8: lw          $a2, 0x54($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X54);
    // 0x802709EC: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x802709F0: jal         0x802700FC
    // 0x802709F4: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_24;
    // 0x802709F4: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    after_24:
    // 0x802709F8: b           L_80270E40
    // 0x802709FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x802709FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80270A00:
    // 0x80270A00: jal         0x8026FAA0
    // 0x80270A04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026FAA0(rdram, ctx);
        goto after_25;
    // 0x80270A04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_25:
    // 0x80270A08: jal         0x80270028
    // 0x80270A0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80270028(rdram, ctx);
        goto after_26;
    // 0x80270A0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_26:
    // 0x80270A10: b           L_80270E40
    // 0x80270A14: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x80270A14: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80270A18:
    // 0x80270A18: jal         0x8026FDD0
    // 0x80270A1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026FDD0(rdram, ctx);
        goto after_27;
    // 0x80270A1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_27:
    // 0x80270A20: jal         0x80270028
    // 0x80270A24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80270028(rdram, ctx);
        goto after_28;
    // 0x80270A24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_28:
    // 0x80270A28: b           L_80270E40
    // 0x80270A2C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x80270A2C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80270A30:
    // 0x80270A30: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x80270A34: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80270A38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80270A3C: jal         0x802700FC
    // 0x80270A40: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_29;
    // 0x80270A40: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    after_29:
    // 0x80270A44: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x80270A48: lwc1        $f16, 0x50($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X50);
    // 0x80270A4C: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x80270A50: c.eq.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl == ctx->f16.fl;
    // 0x80270A54: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80270A58: bc1f        L_80270A6C
    if (!c1cs) {
        // 0x80270A5C: lui         $at, 0x41A0
        ctx->r1 = S32(0X41A0 << 16);
            goto L_80270A6C;
    }
    // 0x80270A5C: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80270A60: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80270A64: b           L_80270E3C
    // 0x80270A68: swc1        $f18, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f18.u32l;
        goto L_80270E3C;
    // 0x80270A68: swc1        $f18, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f18.u32l;
L_80270A6C:
    // 0x80270A6C: b           L_80270E3C
    // 0x80270A70: swc1        $f2, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f2.u32l;
        goto L_80270E3C;
    // 0x80270A70: swc1        $f2, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f2.u32l;
L_80270A74:
    // 0x80270A74: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x80270A78: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80270A7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80270A80: jal         0x802700FC
    // 0x80270A84: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_30;
    // 0x80270A84: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    after_30:
    // 0x80270A88: jal         0x8026FBA4
    // 0x80270A8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026FBA4(rdram, ctx);
        goto after_31;
    // 0x80270A8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_31:
    // 0x80270A90: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x80270A94: lwc1        $f4, 0x50($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X50);
    // 0x80270A98: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x80270A9C: c.eq.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl == ctx->f4.fl;
    // 0x80270AA0: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80270AA4: bc1f        L_80270AB8
    if (!c1cs) {
        // 0x80270AA8: lui         $at, 0x41F0
        ctx->r1 = S32(0X41F0 << 16);
            goto L_80270AB8;
    }
    // 0x80270AA8: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80270AAC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80270AB0: b           L_80270E3C
    // 0x80270AB4: swc1        $f6, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f6.u32l;
        goto L_80270E3C;
    // 0x80270AB4: swc1        $f6, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f6.u32l;
L_80270AB8:
    // 0x80270AB8: b           L_80270E3C
    // 0x80270ABC: swc1        $f2, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f2.u32l;
        goto L_80270E3C;
    // 0x80270ABC: swc1        $f2, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f2.u32l;
L_80270AC0:
    // 0x80270AC0: lh          $a0, 0x2E($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X2E);
    // 0x80270AC4: jal         0x80272AD4
    // 0x80270AC8: nop

    ovl_8024B800_func_80272AD4(rdram, ctx);
        goto after_32;
    // 0x80270AC8: nop

    after_32:
    // 0x80270ACC: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x80270AD0: bgez        $v0, L_80270AEC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80270AD4: cvt.d.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.d = CVT_D_W(ctx->f8.u32l);
            goto L_80270AEC;
    }
    // 0x80270AD4: cvt.d.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.d = CVT_D_W(ctx->f8.u32l);
    // 0x80270AD8: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80270ADC: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x80270AE0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80270AE4: nop

    // 0x80270AE8: add.d       $f10, $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f10.d = ctx->f10.d + ctx->f16.d;
L_80270AEC:
    // 0x80270AEC: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80270AF0: lwc1        $f19, -0x2768($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, -0X2768);
    // 0x80270AF4: lwc1        $f18, -0x2764($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X2764);
    // 0x80270AF8: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80270AFC: mul.d       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f10.d, ctx->f18.d);
    // 0x80270B00: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x80270B04: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80270B08: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80270B0C: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x80270B10: cvt.s.d     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f0.fl = CVT_S_D(ctx->f8.d);
    // 0x80270B14: swc1        $f0, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f0.u32l;
    // 0x80270B18: lwc1        $f16, -0x275C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X275C);
    // 0x80270B1C: lwc1        $f17, -0x2760($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X2760);
    // 0x80270B20: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x80270B24: c.lt.d      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.d < ctx->f10.d;
    // 0x80270B28: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80270B2C: bc1f        L_80270E40
    if (!c1cs) {
        // 0x80270B30: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80270E40;
    }
    // 0x80270B30: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80270B34: lwc1        $f18, -0x2758($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X2758);
    // 0x80270B38: b           L_80270E3C
    // 0x80270B3C: swc1        $f18, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f18.u32l;
        goto L_80270E3C;
    // 0x80270B3C: swc1        $f18, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f18.u32l;
L_80270B40:
    // 0x80270B40: jal         0x8026FEC4
    // 0x80270B44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026FEC4(rdram, ctx);
        goto after_33;
    // 0x80270B44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_33:
    // 0x80270B48: b           L_80270E40
    // 0x80270B4C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x80270B4C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80270B50:
    // 0x80270B50: lw          $t3, 0xC8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XC8);
    // 0x80270B54: nop

    // 0x80270B58: lhu         $t4, 0x10($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0X10);
    // 0x80270B5C: nop

    // 0x80270B60: andi        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 & 0X1;
    // 0x80270B64: beq         $t5, $zero, L_80270B78
    if (ctx->r13 == 0) {
        // 0x80270B68: nop
    
            goto L_80270B78;
    }
    // 0x80270B68: nop

    // 0x80270B6C: lwc1        $f4, 0x54($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X54);
    // 0x80270B70: nop

    // 0x80270B74: swc1        $f4, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f4.u32l;
L_80270B78:
    // 0x80270B78: lwc1        $f6, 0x50($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X50);
    // 0x80270B7C: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80270B80: c.eq.s      $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f12.fl == ctx->f6.fl;
    // 0x80270B84: nop

    // 0x80270B88: bc1f        L_80270E40
    if (!c1cs) {
        // 0x80270B8C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80270E40;
    }
    // 0x80270B8C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80270B90: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80270B94: b           L_80270E3C
    // 0x80270B98: swc1        $f8, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f8.u32l;
        goto L_80270E3C;
    // 0x80270B98: swc1        $f8, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f8.u32l;
L_80270B9C:
    // 0x80270B9C: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x80270BA0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80270BA4: b           L_80270E3C
    // 0x80270BA8: swc1        $f16, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f16.u32l;
        goto L_80270E3C;
    // 0x80270BA8: swc1        $f16, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f16.u32l;
L_80270BAC:
    // 0x80270BAC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80270BB0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80270BB4: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80270BB8: swc1        $f10, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f10.u32l;
    // 0x80270BBC: lwc1        $f18, -0x2754($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X2754);
    // 0x80270BC0: b           L_80270E3C
    // 0x80270BC4: swc1        $f18, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f18.u32l;
        goto L_80270E3C;
    // 0x80270BC4: swc1        $f18, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f18.u32l;
L_80270BC8:
    // 0x80270BC8: lw          $t6, 0xC8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC8);
    // 0x80270BCC: nop

    // 0x80270BD0: lbu         $t7, 0x8AC($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X8AC);
    // 0x80270BD4: nop

    // 0x80270BD8: slti        $at, $t7, 0x2
    ctx->r1 = SIGNED(ctx->r15) < 0X2 ? 1 : 0;
    // 0x80270BDC: bne         $at, $zero, L_80270BF4
    if (ctx->r1 != 0) {
        // 0x80270BE0: nop
    
            goto L_80270BF4;
    }
    // 0x80270BE0: nop

    // 0x80270BE4: jal         0x8026F7C4
    // 0x80270BE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026F7C4(rdram, ctx);
        goto after_34;
    // 0x80270BE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_34:
    // 0x80270BEC: b           L_80270E40
    // 0x80270BF0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x80270BF0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80270BF4:
    // 0x80270BF4: jal         0x80270234
    // 0x80270BF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80270234(rdram, ctx);
        goto after_35;
    // 0x80270BF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_35:
    // 0x80270BFC: beq         $v0, $zero, L_80270C10
    if (ctx->r2 == 0) {
        // 0x80270C00: lui         $at, 0x3F00
        ctx->r1 = S32(0X3F00 << 16);
            goto L_80270C10;
    }
    // 0x80270C00: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80270C04: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80270C08: b           L_80270E3C
    // 0x80270C0C: swc1        $f4, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f4.u32l;
        goto L_80270E3C;
    // 0x80270C0C: swc1        $f4, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f4.u32l;
L_80270C10:
    // 0x80270C10: jal         0x8026F7C4
    // 0x80270C14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026F7C4(rdram, ctx);
        goto after_36;
    // 0x80270C14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_36:
    // 0x80270C18: b           L_80270E40
    // 0x80270C1C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x80270C1C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80270C20:
    // 0x80270C20: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x80270C24: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80270C28: beq         $v0, $zero, L_80270C78
    if (ctx->r2 == 0) {
        // 0x80270C2C: nop
    
            goto L_80270C78;
    }
    // 0x80270C2C: nop

    // 0x80270C30: bne         $v0, $at, L_80270C54
    if (ctx->r2 != ctx->r1) {
        // 0x80270C34: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80270C54;
    }
    // 0x80270C34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80270C38: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x80270C3C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80270C40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80270C44: jal         0x802700FC
    // 0x80270C48: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_37;
    // 0x80270C48: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    after_37:
    // 0x80270C4C: b           L_80270C6C
    // 0x80270C50: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
        goto L_80270C6C;
    // 0x80270C50: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
L_80270C54:
    // 0x80270C54: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x80270C58: lui         $a3, 0x3F19
    ctx->r7 = S32(0X3F19 << 16);
    // 0x80270C5C: ori         $a3, $a3, 0x999A
    ctx->r7 = ctx->r7 | 0X999A;
    // 0x80270C60: jal         0x802700FC
    // 0x80270C64: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_38;
    // 0x80270C64: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    after_38:
    // 0x80270C68: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
L_80270C6C:
    // 0x80270C6C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80270C70: b           L_80270E3C
    // 0x80270C74: swc1        $f6, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f6.u32l;
        goto L_80270E3C;
    // 0x80270C74: swc1        $f6, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f6.u32l;
L_80270C78:
    // 0x80270C78: jal         0x8026F8C4
    // 0x80270C7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026F8C4(rdram, ctx);
        goto after_39;
    // 0x80270C7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_39:
    // 0x80270C80: b           L_80270E40
    // 0x80270C84: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x80270C84: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80270C88:
    // 0x80270C88: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80270C8C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80270C90: nop

    // 0x80270C94: swc1        $f8, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f8.u32l;
L_80270C98:
    // 0x80270C98: lw          $t8, 0xC8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC8);
    // 0x80270C9C: nop

    // 0x80270CA0: lhu         $t9, 0x10($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X10);
    // 0x80270CA4: nop

    // 0x80270CA8: andi        $t0, $t9, 0x10
    ctx->r8 = ctx->r25 & 0X10;
    // 0x80270CAC: beq         $t0, $zero, L_80270CE8
    if (ctx->r8 == 0) {
        // 0x80270CB0: nop
    
            goto L_80270CE8;
    }
    // 0x80270CB0: nop

    // 0x80270CB4: lwc1        $f16, 0xB4($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XB4);
    // 0x80270CB8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80270CBC: c.lt.s      $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f16.fl < ctx->f14.fl;
    // 0x80270CC0: nop

    // 0x80270CC4: bc1f        L_80270CDC
    if (!c1cs) {
        // 0x80270CC8: nop
    
            goto L_80270CDC;
    }
    // 0x80270CC8: nop

    // 0x80270CCC: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80270CD0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80270CD4: b           L_80270E3C
    // 0x80270CD8: swc1        $f10, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f10.u32l;
        goto L_80270E3C;
    // 0x80270CD8: swc1        $f10, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f10.u32l;
L_80270CDC:
    // 0x80270CDC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80270CE0: b           L_80270E3C
    // 0x80270CE4: swc1        $f18, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f18.u32l;
        goto L_80270E3C;
    // 0x80270CE4: swc1        $f18, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f18.u32l;
L_80270CE8:
    // 0x80270CE8: lhu         $t1, 0x0($v1)
    ctx->r9 = MEM_HU(ctx->r3, 0X0);
    // 0x80270CEC: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80270CF0: bne         $t1, $at, L_80270D10
    if (ctx->r9 != ctx->r1) {
        // 0x80270CF4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80270D10;
    }
    // 0x80270CF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80270CF8: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x80270CFC: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80270D00: jal         0x802700FC
    // 0x80270D04: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_40;
    // 0x80270D04: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    after_40:
    // 0x80270D08: b           L_80270E40
    // 0x80270D0C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x80270D0C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80270D10:
    // 0x80270D10: lhu         $t2, 0x20($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X20);
    // 0x80270D14: nop

    // 0x80270D18: andi        $t3, $t2, 0x100
    ctx->r11 = ctx->r10 & 0X100;
    // 0x80270D1C: beq         $t3, $zero, L_80270D2C
    if (ctx->r11 == 0) {
        // 0x80270D20: nop
    
            goto L_80270D2C;
    }
    // 0x80270D20: nop

    // 0x80270D24: b           L_80270E3C
    // 0x80270D28: swc1        $f2, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f2.u32l;
        goto L_80270E3C;
    // 0x80270D28: swc1        $f2, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f2.u32l;
L_80270D2C:
    // 0x80270D2C: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x80270D30: lui         $a3, 0x3F19
    ctx->r7 = S32(0X3F19 << 16);
    // 0x80270D34: ori         $a3, $a3, 0x999A
    ctx->r7 = ctx->r7 | 0X999A;
    // 0x80270D38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80270D3C: jal         0x802700FC
    // 0x80270D40: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_41;
    // 0x80270D40: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    after_41:
    // 0x80270D44: b           L_80270E40
    // 0x80270D48: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x80270D48: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80270D4C:
    // 0x80270D4C: lw          $a2, 0x54($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X54);
    // 0x80270D50: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80270D54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80270D58: jal         0x802700FC
    // 0x80270D5C: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_42;
    // 0x80270D5C: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    after_42:
    // 0x80270D60: b           L_80270E40
    // 0x80270D64: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x80270D64: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80270D68:
    // 0x80270D68: jal         0x8026FBA4
    // 0x80270D6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026FBA4(rdram, ctx);
        goto after_43;
    // 0x80270D6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_43:
    // 0x80270D70: b           L_80270E40
    // 0x80270D74: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x80270D74: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80270D78:
    // 0x80270D78: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80270D7C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80270D80: lwc1        $f6, 0xB4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XB4);
    // 0x80270D84: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80270D88: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80270D8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80270D90: bc1f        L_80270DA4
    if (!c1cs) {
        // 0x80270D94: lui         $a1, 0x41F0
        ctx->r5 = S32(0X41F0 << 16);
            goto L_80270DA4;
    }
    // 0x80270D94: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    // 0x80270D98: lwc1        $f8, 0x54($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X54);
    // 0x80270D9C: nop

    // 0x80270DA0: swc1        $f8, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f8.u32l;
L_80270DA4:
    // 0x80270DA4: jal         0x802700FC
    // 0x80270DA8: lui         $a3, 0x3F00
    ctx->r7 = S32(0X3F00 << 16);
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_44;
    // 0x80270DA8: lui         $a3, 0x3F00
    ctx->r7 = S32(0X3F00 << 16);
    after_44:
    // 0x80270DAC: b           L_80270E40
    // 0x80270DB0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x80270DB0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80270DB4:
    // 0x80270DB4: lhu         $t4, 0x0($v1)
    ctx->r12 = MEM_HU(ctx->r3, 0X0);
    // 0x80270DB8: nop

    // 0x80270DBC: beq         $t4, $zero, L_80270DD8
    if (ctx->r12 == 0) {
        // 0x80270DC0: nop
    
            goto L_80270DD8;
    }
    // 0x80270DC0: nop

    // 0x80270DC4: lhu         $t5, 0xE($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0XE);
    // 0x80270DC8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80270DCC: bne         $t5, $at, L_80270DD8
    if (ctx->r13 != ctx->r1) {
        // 0x80270DD0: nop
    
            goto L_80270DD8;
    }
    // 0x80270DD0: nop

    // 0x80270DD4: swc1        $f14, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f14.u32l;
L_80270DD8:
    // 0x80270DD8: lw          $t6, 0xC8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC8);
    // 0x80270DDC: nop

    // 0x80270DE0: lh          $t7, 0x8AE($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X8AE);
    // 0x80270DE4: nop

    // 0x80270DE8: bne         $t7, $zero, L_80270E04
    if (ctx->r15 != 0) {
        // 0x80270DEC: lui         $a1, 0x3F19
        ctx->r5 = S32(0X3F19 << 16);
            goto L_80270E04;
    }
    // 0x80270DEC: lui         $a1, 0x3F19
    ctx->r5 = S32(0X3F19 << 16);
    // 0x80270DF0: jal         0x8026FBA4
    // 0x80270DF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026FBA4(rdram, ctx);
        goto after_45;
    // 0x80270DF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_45:
    // 0x80270DF8: b           L_80270E40
    // 0x80270DFC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x80270DFC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80270E00:
    // 0x80270E00: lui         $a1, 0x3F19
    ctx->r5 = S32(0X3F19 << 16);
L_80270E04:
    // 0x80270E04: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x80270E08: jal         0x80270144
    // 0x80270E0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80270144(rdram, ctx);
        goto after_46;
    // 0x80270E0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_46:
    // 0x80270E10: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80270E14: lwc1        $f11, -0x2750($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X2750);
    // 0x80270E18: lwc1        $f10, -0x274C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X274C);
    // 0x80270E1C: cvt.d.s     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.d = CVT_D_S(ctx->f0.fl);
    // 0x80270E20: add.d       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f10.d); 
    ctx->f18.d = ctx->f16.d + ctx->f10.d;
    // 0x80270E24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80270E28: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x80270E2C: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    // 0x80270E30: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80270E34: jal         0x802700FC
    // 0x80270E38: lui         $a3, 0x3F00
    ctx->r7 = S32(0X3F00 << 16);
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_47;
    // 0x80270E38: lui         $a3, 0x3F00
    ctx->r7 = S32(0X3F00 << 16);
    after_47:
L_80270E3C:
    // 0x80270E3C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80270E40:
    // 0x80270E40: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80270E44: jr          $ra
    // 0x80270E48: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80270E48: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_8024B800_func_80270460(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80270460: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x80270464: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80270468: lui         $a1, 0x4248
    ctx->r5 = S32(0X4248 << 16);
    // 0x8027046C: jal         0x802700FC
    // 0x80270470: lui         $a3, 0x4000
    ctx->r7 = S32(0X4000 << 16);
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_0;
    // 0x80270470: lui         $a3, 0x4000
    ctx->r7 = S32(0X4000 << 16);
    after_0:
    // 0x80270474: b           L_80270E40
    // 0x80270478: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x80270478: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8027047C: lui         $a2, 0x4011
    ctx->r6 = S32(0X4011 << 16);
    // 0x80270480: ori         $a2, $a2, 0xEB85
    ctx->r6 = ctx->r6 | 0XEB85;
    // 0x80270484: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80270488: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    // 0x8027048C: jal         0x802700FC
    // 0x80270490: lui         $a3, 0x3F00
    ctx->r7 = S32(0X3F00 << 16);
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_1;
    // 0x80270490: lui         $a3, 0x3F00
    ctx->r7 = S32(0X3F00 << 16);
    after_1:
    // 0x80270494: b           L_80270E40
    // 0x80270498: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x80270498: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8027049C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802704A0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802704A4: b           L_80270E3C
    // 0x802704A8: swc1        $f6, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f6.u32l;
        goto L_80270E3C;
    // 0x802704A8: swc1        $f6, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f6.u32l;
    // 0x802704AC: b           L_80270E3C
    // 0x802704B0: swc1        $f14, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f14.u32l;
        goto L_80270E3C;
    // 0x802704B0: swc1        $f14, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f14.u32l;
    // 0x802704B4: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x802704B8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802704BC: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x802704C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802704C4: lui         $a1, 0x4248
    ctx->r5 = S32(0X4248 << 16);
    // 0x802704C8: lui         $a3, 0x3F00
    ctx->r7 = S32(0X3F00 << 16);
    // 0x802704CC: jal         0x802700FC
    // 0x802704D0: swc1        $f8, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f8.u32l;
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_2;
    // 0x802704D0: swc1        $f8, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f8.u32l;
    after_2:
    // 0x802704D4: b           L_80270E40
    // 0x802704D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x802704D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802704DC: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802704E0: lwc1        $f16, -0x2798($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X2798);
    // 0x802704E4: lwc1        $f10, 0x44($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X44);
    // 0x802704E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802704EC: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x802704F0: lui         $a1, 0x4248
    ctx->r5 = S32(0X4248 << 16);
    // 0x802704F4: bc1f        L_80270510
    if (!c1cs) {
        // 0x802704F8: nop
    
            goto L_80270510;
    }
    // 0x802704F8: nop

    // 0x802704FC: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x80270500: jal         0x802700FC
    // 0x80270504: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_3;
    // 0x80270504: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_3:
    // 0x80270508: b           L_80270E40
    // 0x8027050C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x8027050C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80270510:
    // 0x80270510: lui         $a1, 0x3F99
    ctx->r5 = S32(0X3F99 << 16);
    // 0x80270514: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x80270518: jal         0x80270144
    // 0x8027051C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80270144(rdram, ctx);
        goto after_4;
    // 0x8027051C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80270520: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80270524: lwc1        $f5, -0x2790($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X2790);
    // 0x80270528: lwc1        $f4, -0x278C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X278C);
    // 0x8027052C: cvt.d.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.d = CVT_D_S(ctx->f0.fl);
    // 0x80270530: add.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d + ctx->f4.d;
    // 0x80270534: lui         $a3, 0x3F4C
    ctx->r7 = S32(0X3F4C << 16);
    // 0x80270538: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x8027053C: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x80270540: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x80270544: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80270548: jal         0x802700FC
    // 0x8027054C: lui         $a1, 0x4248
    ctx->r5 = S32(0X4248 << 16);
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_5;
    // 0x8027054C: lui         $a1, 0x4248
    ctx->r5 = S32(0X4248 << 16);
    after_5:
    // 0x80270550: b           L_80270E40
    // 0x80270554: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x80270554: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80270558: lui         $a1, 0x3ECC
    ctx->r5 = S32(0X3ECC << 16);
    // 0x8027055C: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x80270560: jal         0x80270144
    // 0x80270564: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80270144(rdram, ctx);
        goto after_6;
    // 0x80270564: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80270568: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8027056C: lwc1        $f17, -0x2788($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X2788);
    // 0x80270570: lwc1        $f16, -0x2784($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X2784);
    // 0x80270574: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x80270578: add.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d + ctx->f16.d;
    // 0x8027057C: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x80270580: b           L_80270E3C
    // 0x80270584: swc1        $f4, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f4.u32l;
        goto L_80270E3C;
    // 0x80270584: swc1        $f4, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f4.u32l;
    // 0x80270588: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x8027058C: lw          $t9, 0x3B20($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X3B20);
    // 0x80270590: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x80270594: lw          $t0, 0xB8($t9)
    ctx->r8 = MEM_W(ctx->r25, 0XB8);
    // 0x80270598: lui         $a1, 0x3E4C
    ctx->r5 = S32(0X3E4C << 16);
    // 0x8027059C: bne         $t0, $t1, L_802705D0
    if (ctx->r8 != ctx->r9) {
        // 0x802705A0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_802705D0;
    }
    // 0x802705A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802705A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802705A8: jal         0x80270144
    // 0x802705AC: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    ovl_8024B800_func_80270144(rdram, ctx);
        goto after_7;
    // 0x802705AC: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    after_7:
    // 0x802705B0: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802705B4: lwc1        $f9, -0x2780($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X2780);
    // 0x802705B8: lwc1        $f8, -0x277C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X277C);
    // 0x802705BC: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x802705C0: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x802705C4: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x802705C8: b           L_80270E3C
    // 0x802705CC: swc1        $f16, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f16.u32l;
        goto L_80270E3C;
    // 0x802705CC: swc1        $f16, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f16.u32l;
L_802705D0:
    // 0x802705D0: jal         0x80270144
    // 0x802705D4: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    ovl_8024B800_func_80270144(rdram, ctx);
        goto after_8;
    // 0x802705D4: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    after_8:
    // 0x802705D8: lui         $at, 0x3FF8
    ctx->r1 = S32(0X3FF8 << 16);
    // 0x802705DC: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x802705E0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802705E4: cvt.d.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.d = CVT_D_S(ctx->f0.fl);
    // 0x802705E8: add.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d + ctx->f4.d;
    // 0x802705EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802705F0: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x802705F4: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    // 0x802705F8: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x802705FC: jal         0x802700FC
    // 0x80270600: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_9;
    // 0x80270600: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_9:
    // 0x80270604: b           L_80270E40
    // 0x80270608: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x80270608: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8027060C: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x80270610: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x80270614: lhu         $t3, 0x10($t2)
    ctx->r11 = MEM_HU(ctx->r10, 0X10);
    // 0x80270618: nop

    // 0x8027061C: andi        $t4, $t3, 0x100
    ctx->r12 = ctx->r11 & 0X100;
    // 0x80270620: bne         $t4, $zero, L_80270694
    if (ctx->r12 != 0) {
        // 0x80270624: lui         $a1, 0x3F47
        ctx->r5 = S32(0X3F47 << 16);
            goto L_80270694;
    }
    // 0x80270624: lui         $a1, 0x3F47
    ctx->r5 = S32(0X3F47 << 16);
    // 0x80270628: lw          $t5, 0xB24($t5)
    ctx->r13 = MEM_W(ctx->r13, 0XB24);
    // 0x8027062C: lwc1        $f10, 0xB4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XB4);
    // 0x80270630: lwc1        $f0, 0xB4($t5)
    ctx->f0.u32l = MEM_W(ctx->r13, 0XB4);
    // 0x80270634: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x80270638: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x8027063C: nop

    // 0x80270640: bc1f        L_80270650
    if (!c1cs) {
        // 0x80270644: nop
    
            goto L_80270650;
    }
    // 0x80270644: nop

    // 0x80270648: b           L_80270E3C
    // 0x8027064C: swc1        $f12, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f12.u32l;
        goto L_80270E3C;
    // 0x8027064C: swc1        $f12, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f12.u32l;
L_80270650:
    // 0x80270650: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80270654: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80270658: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x8027065C: nop

    // 0x80270660: bc1f        L_80270694
    if (!c1cs) {
        // 0x80270664: lui         $a1, 0x3F47
        ctx->r5 = S32(0X3F47 << 16);
            goto L_80270694;
    }
    // 0x80270664: lui         $a1, 0x3F47
    ctx->r5 = S32(0X3F47 << 16);
    // 0x80270668: jal         0x80270144
    // 0x8027066C: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    ovl_8024B800_func_80270144(rdram, ctx);
        goto after_10;
    // 0x8027066C: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    after_10:
    // 0x80270670: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80270674: lwc1        $f5, -0x2778($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X2778);
    // 0x80270678: lwc1        $f4, -0x2774($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X2774);
    // 0x8027067C: cvt.d.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.d = CVT_D_S(ctx->f0.fl);
    // 0x80270680: add.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d + ctx->f4.d;
    // 0x80270684: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x80270688: b           L_80270E3C
    // 0x8027068C: swc1        $f8, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f8.u32l;
        goto L_80270E3C;
    // 0x8027068C: swc1        $f8, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f8.u32l;
    // 0x80270690: lui         $a1, 0x3F47
    ctx->r5 = S32(0X3F47 << 16);
L_80270694:
    // 0x80270694: ori         $a1, $a1, 0xAE14
    ctx->r5 = ctx->r5 | 0XAE14;
    // 0x80270698: jal         0x80270144
    // 0x8027069C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80270144(rdram, ctx);
        goto after_11;
    // 0x8027069C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x802706A0: lui         $at, 0x3FF8
    ctx->r1 = S32(0X3FF8 << 16);
    // 0x802706A4: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x802706A8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x802706AC: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x802706B0: add.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d + ctx->f16.d;
    // 0x802706B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802706B8: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x802706BC: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    // 0x802706C0: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x802706C4: jal         0x802700FC
    // 0x802706C8: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_12;
    // 0x802706C8: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_12:
    // 0x802706CC: b           L_80270E40
    // 0x802706D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x802706D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802706D4: lw          $t6, 0xD8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XD8);
    // 0x802706D8: addiu       $at, $zero, 0xB8
    ctx->r1 = ADD32(0, 0XB8);
    // 0x802706DC: lbu         $t7, 0x14($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X14);
    // 0x802706E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802706E4: bne         $t7, $at, L_80270714
    if (ctx->r15 != ctx->r1) {
        // 0x802706E8: lui         $a1, 0x41F0
        ctx->r5 = S32(0X41F0 << 16);
            goto L_80270714;
    }
    // 0x802706E8: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    // 0x802706EC: lw          $t8, 0xC8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC8);
    // 0x802706F0: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x802706F4: lhu         $t9, 0x10($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X10);
    // 0x802706F8: nop

    // 0x802706FC: andi        $t0, $t9, 0x100
    ctx->r8 = ctx->r25 & 0X100;
    // 0x80270700: bne         $t0, $zero, L_80270718
    if (ctx->r8 != 0) {
        // 0x80270704: lui         $a2, 0x4011
        ctx->r6 = S32(0X4011 << 16);
            goto L_80270718;
    }
    // 0x80270704: lui         $a2, 0x4011
    ctx->r6 = S32(0X4011 << 16);
    // 0x80270708: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8027070C: nop

    // 0x80270710: swc1        $f6, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f6.u32l;
L_80270714:
    // 0x80270714: lui         $a2, 0x4011
    ctx->r6 = S32(0X4011 << 16);
L_80270718:
    // 0x80270718: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x8027071C: jal         0x802700FC
    // 0x80270720: ori         $a2, $a2, 0xEB85
    ctx->r6 = ctx->r6 | 0XEB85;
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_13;
    // 0x80270720: ori         $a2, $a2, 0xEB85
    ctx->r6 = ctx->r6 | 0XEB85;
    after_13:
    // 0x80270724: b           L_80270E40
    // 0x80270728: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x80270728: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8027072C: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x80270730: swc1        $f14, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f14.u32l;
    // 0x80270734: lhu         $t2, 0x10($t1)
    ctx->r10 = MEM_HU(ctx->r9, 0X10);
    // 0x80270738: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x8027073C: andi        $t3, $t2, 0x100
    ctx->r11 = ctx->r10 & 0X100;
    // 0x80270740: bne         $t3, $zero, L_80270778
    if (ctx->r11 != 0) {
        // 0x80270744: lui         $t5, 0x8012
        ctx->r13 = S32(0X8012 << 16);
            goto L_80270778;
    }
    // 0x80270744: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x80270748: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8027074C: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x80270750: swc1        $f8, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f8.u32l;
    // 0x80270754: lw          $t4, 0xB24($t4)
    ctx->r12 = MEM_W(ctx->r12, 0XB24);
    // 0x80270758: lwc1        $f10, 0xB4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XB4);
    // 0x8027075C: lwc1        $f16, 0xB4($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0XB4);
    // 0x80270760: nop

    // 0x80270764: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x80270768: nop

    // 0x8027076C: bc1f        L_80270778
    if (!c1cs) {
        // 0x80270770: nop
    
            goto L_80270778;
    }
    // 0x80270770: nop

    // 0x80270774: swc1        $f12, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f12.u32l;
L_80270778:
    // 0x80270778: lw          $t5, 0xB24($t5)
    ctx->r13 = MEM_W(ctx->r13, 0XB24);
    // 0x8027077C: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x80270780: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80270784: lwc1        $f4, 0xB4($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0XB4);
    // 0x80270788: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8027078C: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x80270790: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    // 0x80270794: bc1f        L_802707AC
    if (!c1cs) {
        // 0x80270798: lui         $a2, 0x4013
        ctx->r6 = S32(0X4013 << 16);
            goto L_802707AC;
    }
    // 0x80270798: lui         $a2, 0x4013
    ctx->r6 = S32(0X4013 << 16);
    // 0x8027079C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802707A0: lwc1        $f6, -0x2770($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X2770);
    // 0x802707A4: b           L_80270E3C
    // 0x802707A8: swc1        $f6, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f6.u32l;
        goto L_80270E3C;
    // 0x802707A8: swc1        $f6, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f6.u32l;
L_802707AC:
    // 0x802707AC: lui         $a3, 0x3FB3
    ctx->r7 = S32(0X3FB3 << 16);
    // 0x802707B0: ori         $a3, $a3, 0x3333
    ctx->r7 = ctx->r7 | 0X3333;
    // 0x802707B4: jal         0x802700FC
    // 0x802707B8: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_14;
    // 0x802707B8: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    after_14:
    // 0x802707BC: b           L_80270E40
    // 0x802707C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x802707C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802707C4: lui         $a1, 0x3E4C
    ctx->r5 = S32(0X3E4C << 16);
    // 0x802707C8: swc1        $f12, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f12.u32l;
    // 0x802707CC: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x802707D0: jal         0x80270144
    // 0x802707D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80270144(rdram, ctx);
        goto after_15;
    // 0x802707D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x802707D8: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x802707DC: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x802707E0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802707E4: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x802707E8: add.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d + ctx->f10.d;
    // 0x802707EC: lui         $a2, 0x4011
    ctx->r6 = S32(0X4011 << 16);
    // 0x802707F0: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x802707F4: ori         $a2, $a2, 0xEB85
    ctx->r6 = ctx->r6 | 0XEB85;
    // 0x802707F8: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x802707FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80270800: jal         0x802700FC
    // 0x80270804: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_16;
    // 0x80270804: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    after_16:
    // 0x80270808: b           L_80270E40
    // 0x8027080C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x8027080C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80270810: lhu         $t6, 0x24($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X24);
    // 0x80270814: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80270818: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8027081C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80270820: lw          $t8, 0xAEC($t8)
    ctx->r24 = MEM_W(ctx->r24, 0XAEC);
    // 0x80270824: addiu       $at, $zero, 0x36
    ctx->r1 = ADD32(0, 0X36);
    // 0x80270828: lhu         $t9, 0xE($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0XE);
    // 0x8027082C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80270830: beq         $t9, $at, L_80270840
    if (ctx->r25 == ctx->r1) {
        // 0x80270834: nop
    
            goto L_80270840;
    }
    // 0x80270834: nop

    // 0x80270838: b           L_8027085C
    // 0x8027083C: swc1        $f12, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f12.u32l;
        goto L_8027085C;
    // 0x8027083C: swc1        $f12, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f12.u32l;
L_80270840:
    // 0x80270840: lw          $a2, 0x54($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X54);
    // 0x80270844: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80270848: jal         0x802700FC
    // 0x8027084C: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_17;
    // 0x8027084C: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    after_17:
    // 0x80270850: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80270854: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80270858: nop

L_8027085C:
    // 0x8027085C: lwc1        $f4, 0xB4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XB4);
    // 0x80270860: lui         $at, 0x4008
    ctx->r1 = S32(0X4008 << 16);
    // 0x80270864: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x80270868: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8027086C: cvt.d.s     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f0.d = CVT_D_S(ctx->f4.fl);
    // 0x80270870: c.lt.d      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.d < ctx->f6.d;
    // 0x80270874: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80270878: bc1f        L_80270894
    if (!c1cs) {
        // 0x8027087C: lui         $at, 0x4018
        ctx->r1 = S32(0X4018 << 16);
            goto L_80270894;
    }
    // 0x8027087C: lui         $at, 0x4018
    ctx->r1 = S32(0X4018 << 16);
    // 0x80270880: lbu         $t0, 0x3($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X3);
    // 0x80270884: lwc1        $f8, 0xB4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XB4);
    // 0x80270888: ori         $t1, $t0, 0x1
    ctx->r9 = ctx->r8 | 0X1;
    // 0x8027088C: sb          $t1, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r9;
    // 0x80270890: cvt.d.s     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f0.d = CVT_D_S(ctx->f8.fl);
L_80270894:
    // 0x80270894: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x80270898: nop

    // 0x8027089C: c.lt.d      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.d < ctx->f10.d;
    // 0x802708A0: nop

    // 0x802708A4: bc1f        L_80270E40
    if (!c1cs) {
        // 0x802708A8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80270E40;
    }
    // 0x802708A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802708AC: lhu         $t2, 0xE($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0XE);
    // 0x802708B0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802708B4: bne         $t2, $at, L_80270E40
    if (ctx->r10 != ctx->r1) {
        // 0x802708B8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80270E40;
    }
    // 0x802708B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802708BC: b           L_80270E3C
    // 0x802708C0: swc1        $f14, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f14.u32l;
        goto L_80270E3C;
    // 0x802708C0: swc1        $f14, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f14.u32l;
    // 0x802708C4: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x802708C8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802708CC: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x802708D0: swc1        $f16, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f16.u32l;
    // 0x802708D4: lw          $t3, 0x3B20($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X3B20);
    // 0x802708D8: lw          $t5, 0xC8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XC8);
    // 0x802708DC: lw          $t4, 0xB8($t3)
    ctx->r12 = MEM_W(ctx->r11, 0XB8);
    // 0x802708E0: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802708E4: bne         $t4, $t5, L_802708F8
    if (ctx->r12 != ctx->r13) {
        // 0x802708E8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_802708F8;
    }
    // 0x802708E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802708EC: lwc1        $f18, -0x276C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X276C);
    // 0x802708F0: b           L_80270E3C
    // 0x802708F4: swc1        $f18, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f18.u32l;
        goto L_80270E3C;
    // 0x802708F4: swc1        $f18, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f18.u32l;
L_802708F8:
    // 0x802708F8: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x802708FC: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80270900: jal         0x802700FC
    // 0x80270904: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_18;
    // 0x80270904: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    after_18:
    // 0x80270908: b           L_80270E40
    // 0x8027090C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x8027090C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80270910: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80270914: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80270918: b           L_80270E3C
    // 0x8027091C: swc1        $f4, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f4.u32l;
        goto L_80270E3C;
    // 0x8027091C: swc1        $f4, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f4.u32l;
    // 0x80270920: lwc1        $f6, 0x84($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X84);
    // 0x80270924: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x80270928: c.lt.s      $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f6.fl < ctx->f14.fl;
    // 0x8027092C: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80270930: bc1f        L_80270944
    if (!c1cs) {
        // 0x80270934: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80270944;
    }
    // 0x80270934: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80270938: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8027093C: nop

    // 0x80270940: swc1        $f8, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f8.u32l;
L_80270944:
    // 0x80270944: lw          $t6, 0x3B20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B20);
    // 0x80270948: lw          $t8, 0xC8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC8);
    // 0x8027094C: lw          $t7, 0xB8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XB8);
    // 0x80270950: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    // 0x80270954: bne         $t7, $t8, L_80270974
    if (ctx->r15 != ctx->r24) {
        // 0x80270958: lui         $a2, 0x4011
        ctx->r6 = S32(0X4011 << 16);
            goto L_80270974;
    }
    // 0x80270958: lui         $a2, 0x4011
    ctx->r6 = S32(0X4011 << 16);
    // 0x8027095C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80270960: ori         $a2, $a2, 0xEB85
    ctx->r6 = ctx->r6 | 0XEB85;
    // 0x80270964: jal         0x802700FC
    // 0x80270968: lui         $a3, 0x3F00
    ctx->r7 = S32(0X3F00 << 16);
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_19;
    // 0x80270968: lui         $a3, 0x3F00
    ctx->r7 = S32(0X3F00 << 16);
    after_19:
    // 0x8027096C: b           L_80270E40
    // 0x80270970: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x80270970: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80270974:
    // 0x80270974: lw          $a2, 0x54($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X54);
    // 0x80270978: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x8027097C: jal         0x802700FC
    // 0x80270980: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_20;
    // 0x80270980: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    after_20:
    // 0x80270984: b           L_80270E40
    // 0x80270988: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x80270988: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8027098C: lw          $a2, 0x54($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X54);
    // 0x80270990: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80270994: swc1        $f14, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f14.u32l;
    // 0x80270998: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8027099C: jal         0x802700FC
    // 0x802709A0: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_21;
    // 0x802709A0: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    after_21:
    // 0x802709A4: b           L_80270E40
    // 0x802709A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x802709A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802709AC: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x802709B0: lhu         $t9, 0xB6C($t9)
    ctx->r25 = MEM_HU(ctx->r25, 0XB6C);
    // 0x802709B4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802709B8: bne         $t9, $at, L_802709E8
    if (ctx->r25 != ctx->r1) {
        // 0x802709BC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_802709E8;
    }
    // 0x802709BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802709C0: lw          $t0, 0xC8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XC8);
    // 0x802709C4: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x802709C8: lhu         $t1, 0x10($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X10);
    // 0x802709CC: nop

    // 0x802709D0: andi        $t2, $t1, 0x100
    ctx->r10 = ctx->r9 & 0X100;
    // 0x802709D4: bne         $t2, $zero, L_802709E8
    if (ctx->r10 != 0) {
        // 0x802709D8: nop
    
            goto L_802709E8;
    }
    // 0x802709D8: nop

    // 0x802709DC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802709E0: nop

    // 0x802709E4: swc1        $f10, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f10.u32l;
L_802709E8:
    // 0x802709E8: lw          $a2, 0x54($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X54);
    // 0x802709EC: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x802709F0: jal         0x802700FC
    // 0x802709F4: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_22;
    // 0x802709F4: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    after_22:
    // 0x802709F8: b           L_80270E40
    // 0x802709FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x802709FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80270A00: jal         0x8026FAA0
    // 0x80270A04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026FAA0(rdram, ctx);
        goto after_23;
    // 0x80270A04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_23:
    // 0x80270A08: jal         0x80270028
    // 0x80270A0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80270028(rdram, ctx);
        goto after_24;
    // 0x80270A0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_24:
    // 0x80270A10: b           L_80270E40
    // 0x80270A14: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x80270A14: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80270A18: jal         0x8026FDD0
    // 0x80270A1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026FDD0(rdram, ctx);
        goto after_25;
    // 0x80270A1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_25:
    // 0x80270A20: jal         0x80270028
    // 0x80270A24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80270028(rdram, ctx);
        goto after_26;
    // 0x80270A24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_26:
    // 0x80270A28: b           L_80270E40
    // 0x80270A2C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x80270A2C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80270A30: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x80270A34: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80270A38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80270A3C: jal         0x802700FC
    // 0x80270A40: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_27;
    // 0x80270A40: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    after_27:
    // 0x80270A44: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x80270A48: lwc1        $f16, 0x50($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X50);
    // 0x80270A4C: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x80270A50: c.eq.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl == ctx->f16.fl;
    // 0x80270A54: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80270A58: bc1f        L_80270A6C
    if (!c1cs) {
        // 0x80270A5C: lui         $at, 0x41A0
        ctx->r1 = S32(0X41A0 << 16);
            goto L_80270A6C;
    }
    // 0x80270A5C: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80270A60: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80270A64: b           L_80270E3C
    // 0x80270A68: swc1        $f18, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f18.u32l;
        goto L_80270E3C;
    // 0x80270A68: swc1        $f18, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f18.u32l;
L_80270A6C:
    // 0x80270A6C: b           L_80270E3C
    // 0x80270A70: swc1        $f2, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f2.u32l;
        goto L_80270E3C;
    // 0x80270A70: swc1        $f2, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f2.u32l;
    // 0x80270A74: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x80270A78: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80270A7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80270A80: jal         0x802700FC
    // 0x80270A84: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_28;
    // 0x80270A84: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    after_28:
    // 0x80270A88: jal         0x8026FBA4
    // 0x80270A8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026FBA4(rdram, ctx);
        goto after_29;
    // 0x80270A8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_29:
    // 0x80270A90: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x80270A94: lwc1        $f4, 0x50($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X50);
    // 0x80270A98: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x80270A9C: c.eq.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl == ctx->f4.fl;
    // 0x80270AA0: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80270AA4: bc1f        L_80270AB8
    if (!c1cs) {
        // 0x80270AA8: lui         $at, 0x41F0
        ctx->r1 = S32(0X41F0 << 16);
            goto L_80270AB8;
    }
    // 0x80270AA8: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80270AAC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80270AB0: b           L_80270E3C
    // 0x80270AB4: swc1        $f6, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f6.u32l;
        goto L_80270E3C;
    // 0x80270AB4: swc1        $f6, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f6.u32l;
L_80270AB8:
    // 0x80270AB8: b           L_80270E3C
    // 0x80270ABC: swc1        $f2, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f2.u32l;
        goto L_80270E3C;
    // 0x80270ABC: swc1        $f2, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f2.u32l;
    // 0x80270AC0: lh          $a0, 0x2E($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X2E);
    // 0x80270AC4: jal         0x80272AD4
    // 0x80270AC8: nop

    ovl_8024B800_func_80272AD4(rdram, ctx);
        goto after_30;
    // 0x80270AC8: nop

    after_30:
    // 0x80270ACC: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x80270AD0: bgez        $v0, L_80270AEC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80270AD4: cvt.d.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.d = CVT_D_W(ctx->f8.u32l);
            goto L_80270AEC;
    }
    // 0x80270AD4: cvt.d.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.d = CVT_D_W(ctx->f8.u32l);
    // 0x80270AD8: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80270ADC: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x80270AE0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80270AE4: nop

    // 0x80270AE8: add.d       $f10, $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f10.d = ctx->f10.d + ctx->f16.d;
L_80270AEC:
    // 0x80270AEC: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80270AF0: lwc1        $f19, -0x2768($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, -0X2768);
    // 0x80270AF4: lwc1        $f18, -0x2764($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X2764);
    // 0x80270AF8: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80270AFC: mul.d       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f10.d, ctx->f18.d);
    // 0x80270B00: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x80270B04: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80270B08: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80270B0C: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x80270B10: cvt.s.d     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f0.fl = CVT_S_D(ctx->f8.d);
    // 0x80270B14: swc1        $f0, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f0.u32l;
    // 0x80270B18: lwc1        $f16, -0x275C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X275C);
    // 0x80270B1C: lwc1        $f17, -0x2760($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X2760);
    // 0x80270B20: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x80270B24: c.lt.d      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.d < ctx->f10.d;
    // 0x80270B28: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80270B2C: bc1f        L_80270E40
    if (!c1cs) {
        // 0x80270B30: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80270E40;
    }
    // 0x80270B30: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80270B34: lwc1        $f18, -0x2758($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X2758);
    // 0x80270B38: b           L_80270E3C
    // 0x80270B3C: swc1        $f18, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f18.u32l;
        goto L_80270E3C;
    // 0x80270B3C: swc1        $f18, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f18.u32l;
    // 0x80270B40: jal         0x8026FEC4
    // 0x80270B44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026FEC4(rdram, ctx);
        goto after_31;
    // 0x80270B44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_31:
    // 0x80270B48: b           L_80270E40
    // 0x80270B4C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x80270B4C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80270B50: lw          $t3, 0xC8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XC8);
    // 0x80270B54: nop

    // 0x80270B58: lhu         $t4, 0x10($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0X10);
    // 0x80270B5C: nop

    // 0x80270B60: andi        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 & 0X1;
    // 0x80270B64: beq         $t5, $zero, L_80270B78
    if (ctx->r13 == 0) {
        // 0x80270B68: nop
    
            goto L_80270B78;
    }
    // 0x80270B68: nop

    // 0x80270B6C: lwc1        $f4, 0x54($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X54);
    // 0x80270B70: nop

    // 0x80270B74: swc1        $f4, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f4.u32l;
L_80270B78:
    // 0x80270B78: lwc1        $f6, 0x50($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X50);
    // 0x80270B7C: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80270B80: c.eq.s      $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f12.fl == ctx->f6.fl;
    // 0x80270B84: nop

    // 0x80270B88: bc1f        L_80270E40
    if (!c1cs) {
        // 0x80270B8C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80270E40;
    }
    // 0x80270B8C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80270B90: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80270B94: b           L_80270E3C
    // 0x80270B98: swc1        $f8, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f8.u32l;
        goto L_80270E3C;
    // 0x80270B98: swc1        $f8, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f8.u32l;
    // 0x80270B9C: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x80270BA0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80270BA4: b           L_80270E3C
    // 0x80270BA8: swc1        $f16, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f16.u32l;
        goto L_80270E3C;
    // 0x80270BA8: swc1        $f16, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f16.u32l;
    // 0x80270BAC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80270BB0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80270BB4: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80270BB8: swc1        $f10, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f10.u32l;
    // 0x80270BBC: lwc1        $f18, -0x2754($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X2754);
    // 0x80270BC0: b           L_80270E3C
    // 0x80270BC4: swc1        $f18, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f18.u32l;
        goto L_80270E3C;
    // 0x80270BC4: swc1        $f18, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f18.u32l;
    // 0x80270BC8: lw          $t6, 0xC8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC8);
    // 0x80270BCC: nop

    // 0x80270BD0: lbu         $t7, 0x8AC($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X8AC);
    // 0x80270BD4: nop

    // 0x80270BD8: slti        $at, $t7, 0x2
    ctx->r1 = SIGNED(ctx->r15) < 0X2 ? 1 : 0;
    // 0x80270BDC: bne         $at, $zero, L_80270BF4
    if (ctx->r1 != 0) {
        // 0x80270BE0: nop
    
            goto L_80270BF4;
    }
    // 0x80270BE0: nop

    // 0x80270BE4: jal         0x8026F7C4
    // 0x80270BE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026F7C4(rdram, ctx);
        goto after_32;
    // 0x80270BE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_32:
    // 0x80270BEC: b           L_80270E40
    // 0x80270BF0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x80270BF0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80270BF4:
    // 0x80270BF4: jal         0x80270234
    // 0x80270BF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80270234(rdram, ctx);
        goto after_33;
    // 0x80270BF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_33:
    // 0x80270BFC: beq         $v0, $zero, L_80270C10
    if (ctx->r2 == 0) {
        // 0x80270C00: lui         $at, 0x3F00
        ctx->r1 = S32(0X3F00 << 16);
            goto L_80270C10;
    }
    // 0x80270C00: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80270C04: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80270C08: b           L_80270E3C
    // 0x80270C0C: swc1        $f4, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f4.u32l;
        goto L_80270E3C;
    // 0x80270C0C: swc1        $f4, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f4.u32l;
L_80270C10:
    // 0x80270C10: jal         0x8026F7C4
    // 0x80270C14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026F7C4(rdram, ctx);
        goto after_34;
    // 0x80270C14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_34:
    // 0x80270C18: b           L_80270E40
    // 0x80270C1C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x80270C1C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80270C20: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x80270C24: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80270C28: beq         $v0, $zero, L_80270C78
    if (ctx->r2 == 0) {
        // 0x80270C2C: nop
    
            goto L_80270C78;
    }
    // 0x80270C2C: nop

    // 0x80270C30: bne         $v0, $at, L_80270C54
    if (ctx->r2 != ctx->r1) {
        // 0x80270C34: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80270C54;
    }
    // 0x80270C34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80270C38: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x80270C3C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80270C40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80270C44: jal         0x802700FC
    // 0x80270C48: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_35;
    // 0x80270C48: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    after_35:
    // 0x80270C4C: b           L_80270C6C
    // 0x80270C50: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
        goto L_80270C6C;
    // 0x80270C50: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
L_80270C54:
    // 0x80270C54: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x80270C58: lui         $a3, 0x3F19
    ctx->r7 = S32(0X3F19 << 16);
    // 0x80270C5C: ori         $a3, $a3, 0x999A
    ctx->r7 = ctx->r7 | 0X999A;
    // 0x80270C60: jal         0x802700FC
    // 0x80270C64: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_36;
    // 0x80270C64: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    after_36:
    // 0x80270C68: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
L_80270C6C:
    // 0x80270C6C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80270C70: b           L_80270E3C
    // 0x80270C74: swc1        $f6, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f6.u32l;
        goto L_80270E3C;
    // 0x80270C74: swc1        $f6, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f6.u32l;
L_80270C78:
    // 0x80270C78: jal         0x8026F8C4
    // 0x80270C7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026F8C4(rdram, ctx);
        goto after_37;
    // 0x80270C7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_37:
    // 0x80270C80: b           L_80270E40
    // 0x80270C84: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x80270C84: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80270C88: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80270C8C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80270C90: nop

    // 0x80270C94: swc1        $f8, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f8.u32l;
    // 0x80270C98: lw          $t8, 0xC8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC8);
    // 0x80270C9C: nop

    // 0x80270CA0: lhu         $t9, 0x10($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X10);
    // 0x80270CA4: nop

    // 0x80270CA8: andi        $t0, $t9, 0x10
    ctx->r8 = ctx->r25 & 0X10;
    // 0x80270CAC: beq         $t0, $zero, L_80270CE8
    if (ctx->r8 == 0) {
        // 0x80270CB0: nop
    
            goto L_80270CE8;
    }
    // 0x80270CB0: nop

    // 0x80270CB4: lwc1        $f16, 0xB4($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XB4);
    // 0x80270CB8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80270CBC: c.lt.s      $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f16.fl < ctx->f14.fl;
    // 0x80270CC0: nop

    // 0x80270CC4: bc1f        L_80270CDC
    if (!c1cs) {
        // 0x80270CC8: nop
    
            goto L_80270CDC;
    }
    // 0x80270CC8: nop

    // 0x80270CCC: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80270CD0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80270CD4: b           L_80270E3C
    // 0x80270CD8: swc1        $f10, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f10.u32l;
        goto L_80270E3C;
    // 0x80270CD8: swc1        $f10, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f10.u32l;
L_80270CDC:
    // 0x80270CDC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80270CE0: b           L_80270E3C
    // 0x80270CE4: swc1        $f18, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f18.u32l;
        goto L_80270E3C;
    // 0x80270CE4: swc1        $f18, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f18.u32l;
L_80270CE8:
    // 0x80270CE8: lhu         $t1, 0x0($v1)
    ctx->r9 = MEM_HU(ctx->r3, 0X0);
    // 0x80270CEC: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80270CF0: bne         $t1, $at, L_80270D10
    if (ctx->r9 != ctx->r1) {
        // 0x80270CF4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80270D10;
    }
    // 0x80270CF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80270CF8: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x80270CFC: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80270D00: jal         0x802700FC
    // 0x80270D04: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_38;
    // 0x80270D04: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    after_38:
    // 0x80270D08: b           L_80270E40
    // 0x80270D0C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x80270D0C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80270D10:
    // 0x80270D10: lhu         $t2, 0x20($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X20);
    // 0x80270D14: nop

    // 0x80270D18: andi        $t3, $t2, 0x100
    ctx->r11 = ctx->r10 & 0X100;
    // 0x80270D1C: beq         $t3, $zero, L_80270D2C
    if (ctx->r11 == 0) {
        // 0x80270D20: nop
    
            goto L_80270D2C;
    }
    // 0x80270D20: nop

    // 0x80270D24: b           L_80270E3C
    // 0x80270D28: swc1        $f2, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f2.u32l;
        goto L_80270E3C;
    // 0x80270D28: swc1        $f2, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f2.u32l;
L_80270D2C:
    // 0x80270D2C: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x80270D30: lui         $a3, 0x3F19
    ctx->r7 = S32(0X3F19 << 16);
    // 0x80270D34: ori         $a3, $a3, 0x999A
    ctx->r7 = ctx->r7 | 0X999A;
    // 0x80270D38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80270D3C: jal         0x802700FC
    // 0x80270D40: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_39;
    // 0x80270D40: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    after_39:
    // 0x80270D44: b           L_80270E40
    // 0x80270D48: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x80270D48: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80270D4C: lw          $a2, 0x54($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X54);
    // 0x80270D50: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80270D54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80270D58: jal         0x802700FC
    // 0x80270D5C: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_40;
    // 0x80270D5C: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    after_40:
    // 0x80270D60: b           L_80270E40
    // 0x80270D64: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x80270D64: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80270D68: jal         0x8026FBA4
    // 0x80270D6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026FBA4(rdram, ctx);
        goto after_41;
    // 0x80270D6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_41:
    // 0x80270D70: b           L_80270E40
    // 0x80270D74: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x80270D74: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80270D78: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80270D7C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80270D80: lwc1        $f6, 0xB4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XB4);
    // 0x80270D84: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80270D88: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80270D8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80270D90: bc1f        L_80270DA4
    if (!c1cs) {
        // 0x80270D94: lui         $a1, 0x41F0
        ctx->r5 = S32(0X41F0 << 16);
            goto L_80270DA4;
    }
    // 0x80270D94: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    // 0x80270D98: lwc1        $f8, 0x54($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X54);
    // 0x80270D9C: nop

    // 0x80270DA0: swc1        $f8, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f8.u32l;
L_80270DA4:
    // 0x80270DA4: jal         0x802700FC
    // 0x80270DA8: lui         $a3, 0x3F00
    ctx->r7 = S32(0X3F00 << 16);
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_42;
    // 0x80270DA8: lui         $a3, 0x3F00
    ctx->r7 = S32(0X3F00 << 16);
    after_42:
    // 0x80270DAC: b           L_80270E40
    // 0x80270DB0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x80270DB0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80270DB4: lhu         $t4, 0x0($v1)
    ctx->r12 = MEM_HU(ctx->r3, 0X0);
    // 0x80270DB8: nop

    // 0x80270DBC: beq         $t4, $zero, L_80270DD8
    if (ctx->r12 == 0) {
        // 0x80270DC0: nop
    
            goto L_80270DD8;
    }
    // 0x80270DC0: nop

    // 0x80270DC4: lhu         $t5, 0xE($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0XE);
    // 0x80270DC8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80270DCC: bne         $t5, $at, L_80270DD8
    if (ctx->r13 != ctx->r1) {
        // 0x80270DD0: nop
    
            goto L_80270DD8;
    }
    // 0x80270DD0: nop

    // 0x80270DD4: swc1        $f14, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f14.u32l;
L_80270DD8:
    // 0x80270DD8: lw          $t6, 0xC8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC8);
    // 0x80270DDC: nop

    // 0x80270DE0: lh          $t7, 0x8AE($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X8AE);
    // 0x80270DE4: nop

    // 0x80270DE8: bne         $t7, $zero, L_80270E04
    if (ctx->r15 != 0) {
        // 0x80270DEC: lui         $a1, 0x3F19
        ctx->r5 = S32(0X3F19 << 16);
            goto L_80270E04;
    }
    // 0x80270DEC: lui         $a1, 0x3F19
    ctx->r5 = S32(0X3F19 << 16);
    // 0x80270DF0: jal         0x8026FBA4
    // 0x80270DF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026FBA4(rdram, ctx);
        goto after_43;
    // 0x80270DF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_43:
    // 0x80270DF8: b           L_80270E40
    // 0x80270DFC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x80270DFC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80270E00: lui         $a1, 0x3F19
    ctx->r5 = S32(0X3F19 << 16);
L_80270E04:
    // 0x80270E04: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x80270E08: jal         0x80270144
    // 0x80270E0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80270144(rdram, ctx);
        goto after_44;
    // 0x80270E0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_44:
    // 0x80270E10: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80270E14: lwc1        $f11, -0x2750($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X2750);
    // 0x80270E18: lwc1        $f10, -0x274C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X274C);
    // 0x80270E1C: cvt.d.s     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.d = CVT_D_S(ctx->f0.fl);
    // 0x80270E20: add.d       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f10.d); 
    ctx->f18.d = ctx->f16.d + ctx->f10.d;
    // 0x80270E24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80270E28: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x80270E2C: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    // 0x80270E30: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80270E34: jal         0x802700FC
    // 0x80270E38: lui         $a3, 0x3F00
    ctx->r7 = S32(0X3F00 << 16);
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_45;
    // 0x80270E38: lui         $a3, 0x3F00
    ctx->r7 = S32(0X3F00 << 16);
    after_45:
L_80270E3C:
    // 0x80270E3C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80270E40:
    // 0x80270E40: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80270E44: jr          $ra
    // 0x80270E48: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80270E48: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_8024B800_func_802704C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802704C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802704C4: lui         $a1, 0x4248
    ctx->r5 = S32(0X4248 << 16);
    // 0x802704C8: lui         $a3, 0x3F00
    ctx->r7 = S32(0X3F00 << 16);
    // 0x802704CC: jal         0x802700FC
    // 0x802704D0: swc1        $f8, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f8.u32l;
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_0;
    // 0x802704D0: swc1        $f8, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f8.u32l;
    after_0:
    // 0x802704D4: b           L_80270E40
    // 0x802704D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x802704D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802704DC: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802704E0: lwc1        $f16, -0x2798($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X2798);
    // 0x802704E4: lwc1        $f10, 0x44($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X44);
    // 0x802704E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802704EC: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x802704F0: lui         $a1, 0x4248
    ctx->r5 = S32(0X4248 << 16);
    // 0x802704F4: bc1f        L_80270510
    if (!c1cs) {
        // 0x802704F8: nop
    
            goto L_80270510;
    }
    // 0x802704F8: nop

    // 0x802704FC: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x80270500: jal         0x802700FC
    // 0x80270504: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_1;
    // 0x80270504: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_1:
    // 0x80270508: b           L_80270E40
    // 0x8027050C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x8027050C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80270510:
    // 0x80270510: lui         $a1, 0x3F99
    ctx->r5 = S32(0X3F99 << 16);
    // 0x80270514: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x80270518: jal         0x80270144
    // 0x8027051C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80270144(rdram, ctx);
        goto after_2;
    // 0x8027051C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80270520: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80270524: lwc1        $f5, -0x2790($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X2790);
    // 0x80270528: lwc1        $f4, -0x278C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X278C);
    // 0x8027052C: cvt.d.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.d = CVT_D_S(ctx->f0.fl);
    // 0x80270530: add.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d + ctx->f4.d;
    // 0x80270534: lui         $a3, 0x3F4C
    ctx->r7 = S32(0X3F4C << 16);
    // 0x80270538: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x8027053C: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x80270540: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x80270544: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80270548: jal         0x802700FC
    // 0x8027054C: lui         $a1, 0x4248
    ctx->r5 = S32(0X4248 << 16);
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_3;
    // 0x8027054C: lui         $a1, 0x4248
    ctx->r5 = S32(0X4248 << 16);
    after_3:
    // 0x80270550: b           L_80270E40
    // 0x80270554: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x80270554: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80270558: lui         $a1, 0x3ECC
    ctx->r5 = S32(0X3ECC << 16);
    // 0x8027055C: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x80270560: jal         0x80270144
    // 0x80270564: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80270144(rdram, ctx);
        goto after_4;
    // 0x80270564: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80270568: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8027056C: lwc1        $f17, -0x2788($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X2788);
    // 0x80270570: lwc1        $f16, -0x2784($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X2784);
    // 0x80270574: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x80270578: add.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d + ctx->f16.d;
    // 0x8027057C: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x80270580: b           L_80270E3C
    // 0x80270584: swc1        $f4, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f4.u32l;
        goto L_80270E3C;
    // 0x80270584: swc1        $f4, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f4.u32l;
    // 0x80270588: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x8027058C: lw          $t9, 0x3B20($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X3B20);
    // 0x80270590: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x80270594: lw          $t0, 0xB8($t9)
    ctx->r8 = MEM_W(ctx->r25, 0XB8);
    // 0x80270598: lui         $a1, 0x3E4C
    ctx->r5 = S32(0X3E4C << 16);
    // 0x8027059C: bne         $t0, $t1, L_802705D0
    if (ctx->r8 != ctx->r9) {
        // 0x802705A0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_802705D0;
    }
    // 0x802705A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802705A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802705A8: jal         0x80270144
    // 0x802705AC: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    ovl_8024B800_func_80270144(rdram, ctx);
        goto after_5;
    // 0x802705AC: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    after_5:
    // 0x802705B0: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802705B4: lwc1        $f9, -0x2780($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X2780);
    // 0x802705B8: lwc1        $f8, -0x277C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X277C);
    // 0x802705BC: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x802705C0: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x802705C4: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x802705C8: b           L_80270E3C
    // 0x802705CC: swc1        $f16, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f16.u32l;
        goto L_80270E3C;
    // 0x802705CC: swc1        $f16, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f16.u32l;
L_802705D0:
    // 0x802705D0: jal         0x80270144
    // 0x802705D4: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    ovl_8024B800_func_80270144(rdram, ctx);
        goto after_6;
    // 0x802705D4: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    after_6:
    // 0x802705D8: lui         $at, 0x3FF8
    ctx->r1 = S32(0X3FF8 << 16);
    // 0x802705DC: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x802705E0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802705E4: cvt.d.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.d = CVT_D_S(ctx->f0.fl);
    // 0x802705E8: add.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d + ctx->f4.d;
    // 0x802705EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802705F0: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x802705F4: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    // 0x802705F8: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x802705FC: jal         0x802700FC
    // 0x80270600: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_7;
    // 0x80270600: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_7:
    // 0x80270604: b           L_80270E40
    // 0x80270608: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x80270608: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8027060C: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x80270610: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x80270614: lhu         $t3, 0x10($t2)
    ctx->r11 = MEM_HU(ctx->r10, 0X10);
    // 0x80270618: nop

    // 0x8027061C: andi        $t4, $t3, 0x100
    ctx->r12 = ctx->r11 & 0X100;
    // 0x80270620: bne         $t4, $zero, L_80270694
    if (ctx->r12 != 0) {
        // 0x80270624: lui         $a1, 0x3F47
        ctx->r5 = S32(0X3F47 << 16);
            goto L_80270694;
    }
    // 0x80270624: lui         $a1, 0x3F47
    ctx->r5 = S32(0X3F47 << 16);
    // 0x80270628: lw          $t5, 0xB24($t5)
    ctx->r13 = MEM_W(ctx->r13, 0XB24);
    // 0x8027062C: lwc1        $f10, 0xB4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XB4);
    // 0x80270630: lwc1        $f0, 0xB4($t5)
    ctx->f0.u32l = MEM_W(ctx->r13, 0XB4);
    // 0x80270634: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x80270638: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x8027063C: nop

    // 0x80270640: bc1f        L_80270650
    if (!c1cs) {
        // 0x80270644: nop
    
            goto L_80270650;
    }
    // 0x80270644: nop

    // 0x80270648: b           L_80270E3C
    // 0x8027064C: swc1        $f12, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f12.u32l;
        goto L_80270E3C;
    // 0x8027064C: swc1        $f12, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f12.u32l;
L_80270650:
    // 0x80270650: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80270654: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80270658: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x8027065C: nop

    // 0x80270660: bc1f        L_80270694
    if (!c1cs) {
        // 0x80270664: lui         $a1, 0x3F47
        ctx->r5 = S32(0X3F47 << 16);
            goto L_80270694;
    }
    // 0x80270664: lui         $a1, 0x3F47
    ctx->r5 = S32(0X3F47 << 16);
    // 0x80270668: jal         0x80270144
    // 0x8027066C: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    ovl_8024B800_func_80270144(rdram, ctx);
        goto after_8;
    // 0x8027066C: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    after_8:
    // 0x80270670: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80270674: lwc1        $f5, -0x2778($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X2778);
    // 0x80270678: lwc1        $f4, -0x2774($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X2774);
    // 0x8027067C: cvt.d.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.d = CVT_D_S(ctx->f0.fl);
    // 0x80270680: add.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d + ctx->f4.d;
    // 0x80270684: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x80270688: b           L_80270E3C
    // 0x8027068C: swc1        $f8, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f8.u32l;
        goto L_80270E3C;
    // 0x8027068C: swc1        $f8, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f8.u32l;
    // 0x80270690: lui         $a1, 0x3F47
    ctx->r5 = S32(0X3F47 << 16);
L_80270694:
    // 0x80270694: ori         $a1, $a1, 0xAE14
    ctx->r5 = ctx->r5 | 0XAE14;
    // 0x80270698: jal         0x80270144
    // 0x8027069C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80270144(rdram, ctx);
        goto after_9;
    // 0x8027069C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x802706A0: lui         $at, 0x3FF8
    ctx->r1 = S32(0X3FF8 << 16);
    // 0x802706A4: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x802706A8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x802706AC: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x802706B0: add.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d + ctx->f16.d;
    // 0x802706B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802706B8: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x802706BC: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    // 0x802706C0: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x802706C4: jal         0x802700FC
    // 0x802706C8: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_10;
    // 0x802706C8: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_10:
    // 0x802706CC: b           L_80270E40
    // 0x802706D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x802706D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802706D4: lw          $t6, 0xD8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XD8);
    // 0x802706D8: addiu       $at, $zero, 0xB8
    ctx->r1 = ADD32(0, 0XB8);
    // 0x802706DC: lbu         $t7, 0x14($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X14);
    // 0x802706E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802706E4: bne         $t7, $at, L_80270714
    if (ctx->r15 != ctx->r1) {
        // 0x802706E8: lui         $a1, 0x41F0
        ctx->r5 = S32(0X41F0 << 16);
            goto L_80270714;
    }
    // 0x802706E8: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    // 0x802706EC: lw          $t8, 0xC8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC8);
    // 0x802706F0: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x802706F4: lhu         $t9, 0x10($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X10);
    // 0x802706F8: nop

    // 0x802706FC: andi        $t0, $t9, 0x100
    ctx->r8 = ctx->r25 & 0X100;
    // 0x80270700: bne         $t0, $zero, L_80270718
    if (ctx->r8 != 0) {
        // 0x80270704: lui         $a2, 0x4011
        ctx->r6 = S32(0X4011 << 16);
            goto L_80270718;
    }
    // 0x80270704: lui         $a2, 0x4011
    ctx->r6 = S32(0X4011 << 16);
    // 0x80270708: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8027070C: nop

    // 0x80270710: swc1        $f6, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f6.u32l;
L_80270714:
    // 0x80270714: lui         $a2, 0x4011
    ctx->r6 = S32(0X4011 << 16);
L_80270718:
    // 0x80270718: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x8027071C: jal         0x802700FC
    // 0x80270720: ori         $a2, $a2, 0xEB85
    ctx->r6 = ctx->r6 | 0XEB85;
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_11;
    // 0x80270720: ori         $a2, $a2, 0xEB85
    ctx->r6 = ctx->r6 | 0XEB85;
    after_11:
    // 0x80270724: b           L_80270E40
    // 0x80270728: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x80270728: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8027072C: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x80270730: swc1        $f14, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f14.u32l;
    // 0x80270734: lhu         $t2, 0x10($t1)
    ctx->r10 = MEM_HU(ctx->r9, 0X10);
    // 0x80270738: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x8027073C: andi        $t3, $t2, 0x100
    ctx->r11 = ctx->r10 & 0X100;
    // 0x80270740: bne         $t3, $zero, L_80270778
    if (ctx->r11 != 0) {
        // 0x80270744: lui         $t5, 0x8012
        ctx->r13 = S32(0X8012 << 16);
            goto L_80270778;
    }
    // 0x80270744: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x80270748: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8027074C: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x80270750: swc1        $f8, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f8.u32l;
    // 0x80270754: lw          $t4, 0xB24($t4)
    ctx->r12 = MEM_W(ctx->r12, 0XB24);
    // 0x80270758: lwc1        $f10, 0xB4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XB4);
    // 0x8027075C: lwc1        $f16, 0xB4($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0XB4);
    // 0x80270760: nop

    // 0x80270764: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x80270768: nop

    // 0x8027076C: bc1f        L_80270778
    if (!c1cs) {
        // 0x80270770: nop
    
            goto L_80270778;
    }
    // 0x80270770: nop

    // 0x80270774: swc1        $f12, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f12.u32l;
L_80270778:
    // 0x80270778: lw          $t5, 0xB24($t5)
    ctx->r13 = MEM_W(ctx->r13, 0XB24);
    // 0x8027077C: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x80270780: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80270784: lwc1        $f4, 0xB4($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0XB4);
    // 0x80270788: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8027078C: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x80270790: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    // 0x80270794: bc1f        L_802707AC
    if (!c1cs) {
        // 0x80270798: lui         $a2, 0x4013
        ctx->r6 = S32(0X4013 << 16);
            goto L_802707AC;
    }
    // 0x80270798: lui         $a2, 0x4013
    ctx->r6 = S32(0X4013 << 16);
    // 0x8027079C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802707A0: lwc1        $f6, -0x2770($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X2770);
    // 0x802707A4: b           L_80270E3C
    // 0x802707A8: swc1        $f6, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f6.u32l;
        goto L_80270E3C;
    // 0x802707A8: swc1        $f6, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f6.u32l;
L_802707AC:
    // 0x802707AC: lui         $a3, 0x3FB3
    ctx->r7 = S32(0X3FB3 << 16);
    // 0x802707B0: ori         $a3, $a3, 0x3333
    ctx->r7 = ctx->r7 | 0X3333;
    // 0x802707B4: jal         0x802700FC
    // 0x802707B8: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_12;
    // 0x802707B8: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    after_12:
    // 0x802707BC: b           L_80270E40
    // 0x802707C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x802707C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802707C4: lui         $a1, 0x3E4C
    ctx->r5 = S32(0X3E4C << 16);
    // 0x802707C8: swc1        $f12, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f12.u32l;
    // 0x802707CC: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x802707D0: jal         0x80270144
    // 0x802707D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80270144(rdram, ctx);
        goto after_13;
    // 0x802707D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x802707D8: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x802707DC: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x802707E0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802707E4: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x802707E8: add.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d + ctx->f10.d;
    // 0x802707EC: lui         $a2, 0x4011
    ctx->r6 = S32(0X4011 << 16);
    // 0x802707F0: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x802707F4: ori         $a2, $a2, 0xEB85
    ctx->r6 = ctx->r6 | 0XEB85;
    // 0x802707F8: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x802707FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80270800: jal         0x802700FC
    // 0x80270804: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_14;
    // 0x80270804: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    after_14:
    // 0x80270808: b           L_80270E40
    // 0x8027080C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x8027080C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80270810: lhu         $t6, 0x24($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X24);
    // 0x80270814: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80270818: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8027081C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80270820: lw          $t8, 0xAEC($t8)
    ctx->r24 = MEM_W(ctx->r24, 0XAEC);
    // 0x80270824: addiu       $at, $zero, 0x36
    ctx->r1 = ADD32(0, 0X36);
    // 0x80270828: lhu         $t9, 0xE($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0XE);
    // 0x8027082C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80270830: beq         $t9, $at, L_80270840
    if (ctx->r25 == ctx->r1) {
        // 0x80270834: nop
    
            goto L_80270840;
    }
    // 0x80270834: nop

    // 0x80270838: b           L_8027085C
    // 0x8027083C: swc1        $f12, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f12.u32l;
        goto L_8027085C;
    // 0x8027083C: swc1        $f12, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f12.u32l;
L_80270840:
    // 0x80270840: lw          $a2, 0x54($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X54);
    // 0x80270844: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80270848: jal         0x802700FC
    // 0x8027084C: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_15;
    // 0x8027084C: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    after_15:
    // 0x80270850: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80270854: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80270858: nop

L_8027085C:
    // 0x8027085C: lwc1        $f4, 0xB4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XB4);
    // 0x80270860: lui         $at, 0x4008
    ctx->r1 = S32(0X4008 << 16);
    // 0x80270864: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x80270868: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8027086C: cvt.d.s     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f0.d = CVT_D_S(ctx->f4.fl);
    // 0x80270870: c.lt.d      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.d < ctx->f6.d;
    // 0x80270874: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80270878: bc1f        L_80270894
    if (!c1cs) {
        // 0x8027087C: lui         $at, 0x4018
        ctx->r1 = S32(0X4018 << 16);
            goto L_80270894;
    }
    // 0x8027087C: lui         $at, 0x4018
    ctx->r1 = S32(0X4018 << 16);
    // 0x80270880: lbu         $t0, 0x3($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X3);
    // 0x80270884: lwc1        $f8, 0xB4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XB4);
    // 0x80270888: ori         $t1, $t0, 0x1
    ctx->r9 = ctx->r8 | 0X1;
    // 0x8027088C: sb          $t1, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r9;
    // 0x80270890: cvt.d.s     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f0.d = CVT_D_S(ctx->f8.fl);
L_80270894:
    // 0x80270894: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x80270898: nop

    // 0x8027089C: c.lt.d      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.d < ctx->f10.d;
    // 0x802708A0: nop

    // 0x802708A4: bc1f        L_80270E40
    if (!c1cs) {
        // 0x802708A8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80270E40;
    }
    // 0x802708A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802708AC: lhu         $t2, 0xE($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0XE);
    // 0x802708B0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802708B4: bne         $t2, $at, L_80270E40
    if (ctx->r10 != ctx->r1) {
        // 0x802708B8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80270E40;
    }
    // 0x802708B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802708BC: b           L_80270E3C
    // 0x802708C0: swc1        $f14, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f14.u32l;
        goto L_80270E3C;
    // 0x802708C0: swc1        $f14, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f14.u32l;
    // 0x802708C4: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x802708C8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802708CC: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x802708D0: swc1        $f16, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f16.u32l;
    // 0x802708D4: lw          $t3, 0x3B20($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X3B20);
    // 0x802708D8: lw          $t5, 0xC8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XC8);
    // 0x802708DC: lw          $t4, 0xB8($t3)
    ctx->r12 = MEM_W(ctx->r11, 0XB8);
    // 0x802708E0: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802708E4: bne         $t4, $t5, L_802708F8
    if (ctx->r12 != ctx->r13) {
        // 0x802708E8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_802708F8;
    }
    // 0x802708E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802708EC: lwc1        $f18, -0x276C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X276C);
    // 0x802708F0: b           L_80270E3C
    // 0x802708F4: swc1        $f18, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f18.u32l;
        goto L_80270E3C;
    // 0x802708F4: swc1        $f18, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f18.u32l;
L_802708F8:
    // 0x802708F8: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x802708FC: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80270900: jal         0x802700FC
    // 0x80270904: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_16;
    // 0x80270904: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    after_16:
    // 0x80270908: b           L_80270E40
    // 0x8027090C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x8027090C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80270910: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80270914: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80270918: b           L_80270E3C
    // 0x8027091C: swc1        $f4, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f4.u32l;
        goto L_80270E3C;
    // 0x8027091C: swc1        $f4, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f4.u32l;
    // 0x80270920: lwc1        $f6, 0x84($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X84);
    // 0x80270924: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x80270928: c.lt.s      $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f6.fl < ctx->f14.fl;
    // 0x8027092C: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80270930: bc1f        L_80270944
    if (!c1cs) {
        // 0x80270934: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80270944;
    }
    // 0x80270934: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80270938: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8027093C: nop

    // 0x80270940: swc1        $f8, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f8.u32l;
L_80270944:
    // 0x80270944: lw          $t6, 0x3B20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B20);
    // 0x80270948: lw          $t8, 0xC8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC8);
    // 0x8027094C: lw          $t7, 0xB8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XB8);
    // 0x80270950: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    // 0x80270954: bne         $t7, $t8, L_80270974
    if (ctx->r15 != ctx->r24) {
        // 0x80270958: lui         $a2, 0x4011
        ctx->r6 = S32(0X4011 << 16);
            goto L_80270974;
    }
    // 0x80270958: lui         $a2, 0x4011
    ctx->r6 = S32(0X4011 << 16);
    // 0x8027095C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80270960: ori         $a2, $a2, 0xEB85
    ctx->r6 = ctx->r6 | 0XEB85;
    // 0x80270964: jal         0x802700FC
    // 0x80270968: lui         $a3, 0x3F00
    ctx->r7 = S32(0X3F00 << 16);
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_17;
    // 0x80270968: lui         $a3, 0x3F00
    ctx->r7 = S32(0X3F00 << 16);
    after_17:
    // 0x8027096C: b           L_80270E40
    // 0x80270970: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x80270970: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80270974:
    // 0x80270974: lw          $a2, 0x54($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X54);
    // 0x80270978: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x8027097C: jal         0x802700FC
    // 0x80270980: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_18;
    // 0x80270980: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    after_18:
    // 0x80270984: b           L_80270E40
    // 0x80270988: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x80270988: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8027098C: lw          $a2, 0x54($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X54);
    // 0x80270990: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80270994: swc1        $f14, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f14.u32l;
    // 0x80270998: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8027099C: jal         0x802700FC
    // 0x802709A0: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_19;
    // 0x802709A0: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    after_19:
    // 0x802709A4: b           L_80270E40
    // 0x802709A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x802709A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802709AC: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x802709B0: lhu         $t9, 0xB6C($t9)
    ctx->r25 = MEM_HU(ctx->r25, 0XB6C);
    // 0x802709B4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802709B8: bne         $t9, $at, L_802709E8
    if (ctx->r25 != ctx->r1) {
        // 0x802709BC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_802709E8;
    }
    // 0x802709BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802709C0: lw          $t0, 0xC8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XC8);
    // 0x802709C4: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x802709C8: lhu         $t1, 0x10($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X10);
    // 0x802709CC: nop

    // 0x802709D0: andi        $t2, $t1, 0x100
    ctx->r10 = ctx->r9 & 0X100;
    // 0x802709D4: bne         $t2, $zero, L_802709E8
    if (ctx->r10 != 0) {
        // 0x802709D8: nop
    
            goto L_802709E8;
    }
    // 0x802709D8: nop

    // 0x802709DC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802709E0: nop

    // 0x802709E4: swc1        $f10, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f10.u32l;
L_802709E8:
    // 0x802709E8: lw          $a2, 0x54($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X54);
    // 0x802709EC: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x802709F0: jal         0x802700FC
    // 0x802709F4: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_20;
    // 0x802709F4: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    after_20:
    // 0x802709F8: b           L_80270E40
    // 0x802709FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x802709FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80270A00: jal         0x8026FAA0
    // 0x80270A04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026FAA0(rdram, ctx);
        goto after_21;
    // 0x80270A04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_21:
    // 0x80270A08: jal         0x80270028
    // 0x80270A0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80270028(rdram, ctx);
        goto after_22;
    // 0x80270A0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_22:
    // 0x80270A10: b           L_80270E40
    // 0x80270A14: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x80270A14: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80270A18: jal         0x8026FDD0
    // 0x80270A1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026FDD0(rdram, ctx);
        goto after_23;
    // 0x80270A1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_23:
    // 0x80270A20: jal         0x80270028
    // 0x80270A24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80270028(rdram, ctx);
        goto after_24;
    // 0x80270A24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_24:
    // 0x80270A28: b           L_80270E40
    // 0x80270A2C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x80270A2C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80270A30: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x80270A34: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80270A38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80270A3C: jal         0x802700FC
    // 0x80270A40: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_25;
    // 0x80270A40: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    after_25:
    // 0x80270A44: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x80270A48: lwc1        $f16, 0x50($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X50);
    // 0x80270A4C: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x80270A50: c.eq.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl == ctx->f16.fl;
    // 0x80270A54: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80270A58: bc1f        L_80270A6C
    if (!c1cs) {
        // 0x80270A5C: lui         $at, 0x41A0
        ctx->r1 = S32(0X41A0 << 16);
            goto L_80270A6C;
    }
    // 0x80270A5C: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80270A60: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80270A64: b           L_80270E3C
    // 0x80270A68: swc1        $f18, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f18.u32l;
        goto L_80270E3C;
    // 0x80270A68: swc1        $f18, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f18.u32l;
L_80270A6C:
    // 0x80270A6C: b           L_80270E3C
    // 0x80270A70: swc1        $f2, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f2.u32l;
        goto L_80270E3C;
    // 0x80270A70: swc1        $f2, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f2.u32l;
    // 0x80270A74: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x80270A78: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80270A7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80270A80: jal         0x802700FC
    // 0x80270A84: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_26;
    // 0x80270A84: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    after_26:
    // 0x80270A88: jal         0x8026FBA4
    // 0x80270A8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026FBA4(rdram, ctx);
        goto after_27;
    // 0x80270A8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_27:
    // 0x80270A90: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x80270A94: lwc1        $f4, 0x50($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X50);
    // 0x80270A98: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x80270A9C: c.eq.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl == ctx->f4.fl;
    // 0x80270AA0: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80270AA4: bc1f        L_80270AB8
    if (!c1cs) {
        // 0x80270AA8: lui         $at, 0x41F0
        ctx->r1 = S32(0X41F0 << 16);
            goto L_80270AB8;
    }
    // 0x80270AA8: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80270AAC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80270AB0: b           L_80270E3C
    // 0x80270AB4: swc1        $f6, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f6.u32l;
        goto L_80270E3C;
    // 0x80270AB4: swc1        $f6, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f6.u32l;
L_80270AB8:
    // 0x80270AB8: b           L_80270E3C
    // 0x80270ABC: swc1        $f2, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f2.u32l;
        goto L_80270E3C;
    // 0x80270ABC: swc1        $f2, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f2.u32l;
    // 0x80270AC0: lh          $a0, 0x2E($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X2E);
    // 0x80270AC4: jal         0x80272AD4
    // 0x80270AC8: nop

    ovl_8024B800_func_80272AD4(rdram, ctx);
        goto after_28;
    // 0x80270AC8: nop

    after_28:
    // 0x80270ACC: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x80270AD0: bgez        $v0, L_80270AEC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80270AD4: cvt.d.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.d = CVT_D_W(ctx->f8.u32l);
            goto L_80270AEC;
    }
    // 0x80270AD4: cvt.d.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.d = CVT_D_W(ctx->f8.u32l);
    // 0x80270AD8: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80270ADC: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x80270AE0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80270AE4: nop

    // 0x80270AE8: add.d       $f10, $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f10.d = ctx->f10.d + ctx->f16.d;
L_80270AEC:
    // 0x80270AEC: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80270AF0: lwc1        $f19, -0x2768($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, -0X2768);
    // 0x80270AF4: lwc1        $f18, -0x2764($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X2764);
    // 0x80270AF8: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80270AFC: mul.d       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f10.d, ctx->f18.d);
    // 0x80270B00: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x80270B04: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80270B08: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80270B0C: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x80270B10: cvt.s.d     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f0.fl = CVT_S_D(ctx->f8.d);
    // 0x80270B14: swc1        $f0, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f0.u32l;
    // 0x80270B18: lwc1        $f16, -0x275C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X275C);
    // 0x80270B1C: lwc1        $f17, -0x2760($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X2760);
    // 0x80270B20: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x80270B24: c.lt.d      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.d < ctx->f10.d;
    // 0x80270B28: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80270B2C: bc1f        L_80270E40
    if (!c1cs) {
        // 0x80270B30: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80270E40;
    }
    // 0x80270B30: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80270B34: lwc1        $f18, -0x2758($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X2758);
    // 0x80270B38: b           L_80270E3C
    // 0x80270B3C: swc1        $f18, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f18.u32l;
        goto L_80270E3C;
    // 0x80270B3C: swc1        $f18, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f18.u32l;
    // 0x80270B40: jal         0x8026FEC4
    // 0x80270B44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026FEC4(rdram, ctx);
        goto after_29;
    // 0x80270B44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_29:
    // 0x80270B48: b           L_80270E40
    // 0x80270B4C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x80270B4C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80270B50: lw          $t3, 0xC8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XC8);
    // 0x80270B54: nop

    // 0x80270B58: lhu         $t4, 0x10($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0X10);
    // 0x80270B5C: nop

    // 0x80270B60: andi        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 & 0X1;
    // 0x80270B64: beq         $t5, $zero, L_80270B78
    if (ctx->r13 == 0) {
        // 0x80270B68: nop
    
            goto L_80270B78;
    }
    // 0x80270B68: nop

    // 0x80270B6C: lwc1        $f4, 0x54($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X54);
    // 0x80270B70: nop

    // 0x80270B74: swc1        $f4, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f4.u32l;
L_80270B78:
    // 0x80270B78: lwc1        $f6, 0x50($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X50);
    // 0x80270B7C: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80270B80: c.eq.s      $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f12.fl == ctx->f6.fl;
    // 0x80270B84: nop

    // 0x80270B88: bc1f        L_80270E40
    if (!c1cs) {
        // 0x80270B8C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80270E40;
    }
    // 0x80270B8C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80270B90: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80270B94: b           L_80270E3C
    // 0x80270B98: swc1        $f8, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f8.u32l;
        goto L_80270E3C;
    // 0x80270B98: swc1        $f8, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f8.u32l;
    // 0x80270B9C: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x80270BA0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80270BA4: b           L_80270E3C
    // 0x80270BA8: swc1        $f16, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f16.u32l;
        goto L_80270E3C;
    // 0x80270BA8: swc1        $f16, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f16.u32l;
    // 0x80270BAC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80270BB0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80270BB4: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80270BB8: swc1        $f10, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f10.u32l;
    // 0x80270BBC: lwc1        $f18, -0x2754($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X2754);
    // 0x80270BC0: b           L_80270E3C
    // 0x80270BC4: swc1        $f18, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f18.u32l;
        goto L_80270E3C;
    // 0x80270BC4: swc1        $f18, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f18.u32l;
    // 0x80270BC8: lw          $t6, 0xC8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC8);
    // 0x80270BCC: nop

    // 0x80270BD0: lbu         $t7, 0x8AC($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X8AC);
    // 0x80270BD4: nop

    // 0x80270BD8: slti        $at, $t7, 0x2
    ctx->r1 = SIGNED(ctx->r15) < 0X2 ? 1 : 0;
    // 0x80270BDC: bne         $at, $zero, L_80270BF4
    if (ctx->r1 != 0) {
        // 0x80270BE0: nop
    
            goto L_80270BF4;
    }
    // 0x80270BE0: nop

    // 0x80270BE4: jal         0x8026F7C4
    // 0x80270BE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026F7C4(rdram, ctx);
        goto after_30;
    // 0x80270BE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_30:
    // 0x80270BEC: b           L_80270E40
    // 0x80270BF0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x80270BF0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80270BF4:
    // 0x80270BF4: jal         0x80270234
    // 0x80270BF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80270234(rdram, ctx);
        goto after_31;
    // 0x80270BF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_31:
    // 0x80270BFC: beq         $v0, $zero, L_80270C10
    if (ctx->r2 == 0) {
        // 0x80270C00: lui         $at, 0x3F00
        ctx->r1 = S32(0X3F00 << 16);
            goto L_80270C10;
    }
    // 0x80270C00: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80270C04: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80270C08: b           L_80270E3C
    // 0x80270C0C: swc1        $f4, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f4.u32l;
        goto L_80270E3C;
    // 0x80270C0C: swc1        $f4, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f4.u32l;
L_80270C10:
    // 0x80270C10: jal         0x8026F7C4
    // 0x80270C14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026F7C4(rdram, ctx);
        goto after_32;
    // 0x80270C14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_32:
    // 0x80270C18: b           L_80270E40
    // 0x80270C1C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x80270C1C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80270C20: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x80270C24: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80270C28: beq         $v0, $zero, L_80270C78
    if (ctx->r2 == 0) {
        // 0x80270C2C: nop
    
            goto L_80270C78;
    }
    // 0x80270C2C: nop

    // 0x80270C30: bne         $v0, $at, L_80270C54
    if (ctx->r2 != ctx->r1) {
        // 0x80270C34: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80270C54;
    }
    // 0x80270C34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80270C38: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x80270C3C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80270C40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80270C44: jal         0x802700FC
    // 0x80270C48: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_33;
    // 0x80270C48: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    after_33:
    // 0x80270C4C: b           L_80270C6C
    // 0x80270C50: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
        goto L_80270C6C;
    // 0x80270C50: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
L_80270C54:
    // 0x80270C54: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x80270C58: lui         $a3, 0x3F19
    ctx->r7 = S32(0X3F19 << 16);
    // 0x80270C5C: ori         $a3, $a3, 0x999A
    ctx->r7 = ctx->r7 | 0X999A;
    // 0x80270C60: jal         0x802700FC
    // 0x80270C64: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_34;
    // 0x80270C64: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    after_34:
    // 0x80270C68: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
L_80270C6C:
    // 0x80270C6C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80270C70: b           L_80270E3C
    // 0x80270C74: swc1        $f6, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f6.u32l;
        goto L_80270E3C;
    // 0x80270C74: swc1        $f6, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f6.u32l;
L_80270C78:
    // 0x80270C78: jal         0x8026F8C4
    // 0x80270C7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026F8C4(rdram, ctx);
        goto after_35;
    // 0x80270C7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_35:
    // 0x80270C80: b           L_80270E40
    // 0x80270C84: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x80270C84: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80270C88: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80270C8C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80270C90: nop

    // 0x80270C94: swc1        $f8, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f8.u32l;
    // 0x80270C98: lw          $t8, 0xC8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC8);
    // 0x80270C9C: nop

    // 0x80270CA0: lhu         $t9, 0x10($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X10);
    // 0x80270CA4: nop

    // 0x80270CA8: andi        $t0, $t9, 0x10
    ctx->r8 = ctx->r25 & 0X10;
    // 0x80270CAC: beq         $t0, $zero, L_80270CE8
    if (ctx->r8 == 0) {
        // 0x80270CB0: nop
    
            goto L_80270CE8;
    }
    // 0x80270CB0: nop

    // 0x80270CB4: lwc1        $f16, 0xB4($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XB4);
    // 0x80270CB8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80270CBC: c.lt.s      $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f16.fl < ctx->f14.fl;
    // 0x80270CC0: nop

    // 0x80270CC4: bc1f        L_80270CDC
    if (!c1cs) {
        // 0x80270CC8: nop
    
            goto L_80270CDC;
    }
    // 0x80270CC8: nop

    // 0x80270CCC: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80270CD0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80270CD4: b           L_80270E3C
    // 0x80270CD8: swc1        $f10, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f10.u32l;
        goto L_80270E3C;
    // 0x80270CD8: swc1        $f10, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f10.u32l;
L_80270CDC:
    // 0x80270CDC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80270CE0: b           L_80270E3C
    // 0x80270CE4: swc1        $f18, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f18.u32l;
        goto L_80270E3C;
    // 0x80270CE4: swc1        $f18, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f18.u32l;
L_80270CE8:
    // 0x80270CE8: lhu         $t1, 0x0($v1)
    ctx->r9 = MEM_HU(ctx->r3, 0X0);
    // 0x80270CEC: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80270CF0: bne         $t1, $at, L_80270D10
    if (ctx->r9 != ctx->r1) {
        // 0x80270CF4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80270D10;
    }
    // 0x80270CF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80270CF8: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x80270CFC: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80270D00: jal         0x802700FC
    // 0x80270D04: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_36;
    // 0x80270D04: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    after_36:
    // 0x80270D08: b           L_80270E40
    // 0x80270D0C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x80270D0C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80270D10:
    // 0x80270D10: lhu         $t2, 0x20($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X20);
    // 0x80270D14: nop

    // 0x80270D18: andi        $t3, $t2, 0x100
    ctx->r11 = ctx->r10 & 0X100;
    // 0x80270D1C: beq         $t3, $zero, L_80270D2C
    if (ctx->r11 == 0) {
        // 0x80270D20: nop
    
            goto L_80270D2C;
    }
    // 0x80270D20: nop

    // 0x80270D24: b           L_80270E3C
    // 0x80270D28: swc1        $f2, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f2.u32l;
        goto L_80270E3C;
    // 0x80270D28: swc1        $f2, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f2.u32l;
L_80270D2C:
    // 0x80270D2C: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x80270D30: lui         $a3, 0x3F19
    ctx->r7 = S32(0X3F19 << 16);
    // 0x80270D34: ori         $a3, $a3, 0x999A
    ctx->r7 = ctx->r7 | 0X999A;
    // 0x80270D38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80270D3C: jal         0x802700FC
    // 0x80270D40: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_37;
    // 0x80270D40: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    after_37:
    // 0x80270D44: b           L_80270E40
    // 0x80270D48: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x80270D48: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80270D4C: lw          $a2, 0x54($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X54);
    // 0x80270D50: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80270D54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80270D58: jal         0x802700FC
    // 0x80270D5C: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_38;
    // 0x80270D5C: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    after_38:
    // 0x80270D60: b           L_80270E40
    // 0x80270D64: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x80270D64: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80270D68: jal         0x8026FBA4
    // 0x80270D6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026FBA4(rdram, ctx);
        goto after_39;
    // 0x80270D6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_39:
    // 0x80270D70: b           L_80270E40
    // 0x80270D74: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x80270D74: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80270D78: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80270D7C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80270D80: lwc1        $f6, 0xB4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XB4);
    // 0x80270D84: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80270D88: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80270D8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80270D90: bc1f        L_80270DA4
    if (!c1cs) {
        // 0x80270D94: lui         $a1, 0x41F0
        ctx->r5 = S32(0X41F0 << 16);
            goto L_80270DA4;
    }
    // 0x80270D94: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    // 0x80270D98: lwc1        $f8, 0x54($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X54);
    // 0x80270D9C: nop

    // 0x80270DA0: swc1        $f8, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f8.u32l;
L_80270DA4:
    // 0x80270DA4: jal         0x802700FC
    // 0x80270DA8: lui         $a3, 0x3F00
    ctx->r7 = S32(0X3F00 << 16);
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_40;
    // 0x80270DA8: lui         $a3, 0x3F00
    ctx->r7 = S32(0X3F00 << 16);
    after_40:
    // 0x80270DAC: b           L_80270E40
    // 0x80270DB0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x80270DB0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80270DB4: lhu         $t4, 0x0($v1)
    ctx->r12 = MEM_HU(ctx->r3, 0X0);
    // 0x80270DB8: nop

    // 0x80270DBC: beq         $t4, $zero, L_80270DD8
    if (ctx->r12 == 0) {
        // 0x80270DC0: nop
    
            goto L_80270DD8;
    }
    // 0x80270DC0: nop

    // 0x80270DC4: lhu         $t5, 0xE($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0XE);
    // 0x80270DC8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80270DCC: bne         $t5, $at, L_80270DD8
    if (ctx->r13 != ctx->r1) {
        // 0x80270DD0: nop
    
            goto L_80270DD8;
    }
    // 0x80270DD0: nop

    // 0x80270DD4: swc1        $f14, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f14.u32l;
L_80270DD8:
    // 0x80270DD8: lw          $t6, 0xC8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC8);
    // 0x80270DDC: nop

    // 0x80270DE0: lh          $t7, 0x8AE($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X8AE);
    // 0x80270DE4: nop

    // 0x80270DE8: bne         $t7, $zero, L_80270E04
    if (ctx->r15 != 0) {
        // 0x80270DEC: lui         $a1, 0x3F19
        ctx->r5 = S32(0X3F19 << 16);
            goto L_80270E04;
    }
    // 0x80270DEC: lui         $a1, 0x3F19
    ctx->r5 = S32(0X3F19 << 16);
    // 0x80270DF0: jal         0x8026FBA4
    // 0x80270DF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026FBA4(rdram, ctx);
        goto after_41;
    // 0x80270DF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_41:
    // 0x80270DF8: b           L_80270E40
    // 0x80270DFC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x80270DFC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80270E00: lui         $a1, 0x3F19
    ctx->r5 = S32(0X3F19 << 16);
L_80270E04:
    // 0x80270E04: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x80270E08: jal         0x80270144
    // 0x80270E0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80270144(rdram, ctx);
        goto after_42;
    // 0x80270E0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_42:
    // 0x80270E10: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80270E14: lwc1        $f11, -0x2750($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X2750);
    // 0x80270E18: lwc1        $f10, -0x274C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X274C);
    // 0x80270E1C: cvt.d.s     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.d = CVT_D_S(ctx->f0.fl);
    // 0x80270E20: add.d       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f10.d); 
    ctx->f18.d = ctx->f16.d + ctx->f10.d;
    // 0x80270E24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80270E28: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x80270E2C: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    // 0x80270E30: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80270E34: jal         0x802700FC
    // 0x80270E38: lui         $a3, 0x3F00
    ctx->r7 = S32(0X3F00 << 16);
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_43;
    // 0x80270E38: lui         $a3, 0x3F00
    ctx->r7 = S32(0X3F00 << 16);
    after_43:
L_80270E3C:
    // 0x80270E3C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80270E40:
    // 0x80270E40: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80270E44: jr          $ra
    // 0x80270E48: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80270E48: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_8024B800_func_80270720(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80270720: ori         $a2, $a2, 0xEB85
    ctx->r6 = ctx->r6 | 0XEB85;
    // 0x80270724: b           L_80270E40
    // 0x80270728: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x80270728: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8027072C: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x80270730: swc1        $f14, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f14.u32l;
    // 0x80270734: lhu         $t2, 0x10($t1)
    ctx->r10 = MEM_HU(ctx->r9, 0X10);
    // 0x80270738: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x8027073C: andi        $t3, $t2, 0x100
    ctx->r11 = ctx->r10 & 0X100;
    // 0x80270740: bne         $t3, $zero, L_80270778
    if (ctx->r11 != 0) {
        // 0x80270744: lui         $t5, 0x8012
        ctx->r13 = S32(0X8012 << 16);
            goto L_80270778;
    }
    // 0x80270744: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x80270748: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8027074C: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x80270750: swc1        $f8, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f8.u32l;
    // 0x80270754: lw          $t4, 0xB24($t4)
    ctx->r12 = MEM_W(ctx->r12, 0XB24);
    // 0x80270758: lwc1        $f10, 0xB4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XB4);
    // 0x8027075C: lwc1        $f16, 0xB4($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0XB4);
    // 0x80270760: nop

    // 0x80270764: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x80270768: nop

    // 0x8027076C: bc1f        L_80270778
    if (!c1cs) {
        // 0x80270770: nop
    
            goto L_80270778;
    }
    // 0x80270770: nop

    // 0x80270774: swc1        $f12, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f12.u32l;
L_80270778:
    // 0x80270778: lw          $t5, 0xB24($t5)
    ctx->r13 = MEM_W(ctx->r13, 0XB24);
    // 0x8027077C: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x80270780: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80270784: lwc1        $f4, 0xB4($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0XB4);
    // 0x80270788: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8027078C: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x80270790: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    // 0x80270794: bc1f        L_802707AC
    if (!c1cs) {
        // 0x80270798: lui         $a2, 0x4013
        ctx->r6 = S32(0X4013 << 16);
            goto L_802707AC;
    }
    // 0x80270798: lui         $a2, 0x4013
    ctx->r6 = S32(0X4013 << 16);
    // 0x8027079C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802707A0: lwc1        $f6, -0x2770($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X2770);
    // 0x802707A4: b           L_80270E3C
    // 0x802707A8: swc1        $f6, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f6.u32l;
        goto L_80270E3C;
    // 0x802707A8: swc1        $f6, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f6.u32l;
L_802707AC:
    // 0x802707AC: lui         $a3, 0x3FB3
    ctx->r7 = S32(0X3FB3 << 16);
    // 0x802707B0: ori         $a3, $a3, 0x3333
    ctx->r7 = ctx->r7 | 0X3333;
    // 0x802707B4: jal         0x802700FC
    // 0x802707B8: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_0;
    // 0x802707B8: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    after_0:
    // 0x802707BC: b           L_80270E40
    // 0x802707C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x802707C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802707C4: lui         $a1, 0x3E4C
    ctx->r5 = S32(0X3E4C << 16);
    // 0x802707C8: swc1        $f12, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f12.u32l;
    // 0x802707CC: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x802707D0: jal         0x80270144
    // 0x802707D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80270144(rdram, ctx);
        goto after_1;
    // 0x802707D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x802707D8: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x802707DC: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x802707E0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802707E4: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x802707E8: add.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d + ctx->f10.d;
    // 0x802707EC: lui         $a2, 0x4011
    ctx->r6 = S32(0X4011 << 16);
    // 0x802707F0: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x802707F4: ori         $a2, $a2, 0xEB85
    ctx->r6 = ctx->r6 | 0XEB85;
    // 0x802707F8: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x802707FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80270800: jal         0x802700FC
    // 0x80270804: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_2;
    // 0x80270804: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    after_2:
    // 0x80270808: b           L_80270E40
    // 0x8027080C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x8027080C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80270810: lhu         $t6, 0x24($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X24);
    // 0x80270814: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80270818: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8027081C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80270820: lw          $t8, 0xAEC($t8)
    ctx->r24 = MEM_W(ctx->r24, 0XAEC);
    // 0x80270824: addiu       $at, $zero, 0x36
    ctx->r1 = ADD32(0, 0X36);
    // 0x80270828: lhu         $t9, 0xE($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0XE);
    // 0x8027082C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80270830: beq         $t9, $at, L_80270840
    if (ctx->r25 == ctx->r1) {
        // 0x80270834: nop
    
            goto L_80270840;
    }
    // 0x80270834: nop

    // 0x80270838: b           L_8027085C
    // 0x8027083C: swc1        $f12, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f12.u32l;
        goto L_8027085C;
    // 0x8027083C: swc1        $f12, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f12.u32l;
L_80270840:
    // 0x80270840: lw          $a2, 0x54($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X54);
    // 0x80270844: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80270848: jal         0x802700FC
    // 0x8027084C: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_3;
    // 0x8027084C: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    after_3:
    // 0x80270850: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80270854: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80270858: nop

L_8027085C:
    // 0x8027085C: lwc1        $f4, 0xB4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XB4);
    // 0x80270860: lui         $at, 0x4008
    ctx->r1 = S32(0X4008 << 16);
    // 0x80270864: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x80270868: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8027086C: cvt.d.s     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f0.d = CVT_D_S(ctx->f4.fl);
    // 0x80270870: c.lt.d      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.d < ctx->f6.d;
    // 0x80270874: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80270878: bc1f        L_80270894
    if (!c1cs) {
        // 0x8027087C: lui         $at, 0x4018
        ctx->r1 = S32(0X4018 << 16);
            goto L_80270894;
    }
    // 0x8027087C: lui         $at, 0x4018
    ctx->r1 = S32(0X4018 << 16);
    // 0x80270880: lbu         $t0, 0x3($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X3);
    // 0x80270884: lwc1        $f8, 0xB4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XB4);
    // 0x80270888: ori         $t1, $t0, 0x1
    ctx->r9 = ctx->r8 | 0X1;
    // 0x8027088C: sb          $t1, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r9;
    // 0x80270890: cvt.d.s     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f0.d = CVT_D_S(ctx->f8.fl);
L_80270894:
    // 0x80270894: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x80270898: nop

    // 0x8027089C: c.lt.d      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.d < ctx->f10.d;
    // 0x802708A0: nop

    // 0x802708A4: bc1f        L_80270E40
    if (!c1cs) {
        // 0x802708A8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80270E40;
    }
    // 0x802708A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802708AC: lhu         $t2, 0xE($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0XE);
    // 0x802708B0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802708B4: bne         $t2, $at, L_80270E40
    if (ctx->r10 != ctx->r1) {
        // 0x802708B8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80270E40;
    }
    // 0x802708B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802708BC: b           L_80270E3C
    // 0x802708C0: swc1        $f14, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f14.u32l;
        goto L_80270E3C;
    // 0x802708C0: swc1        $f14, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f14.u32l;
    // 0x802708C4: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x802708C8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802708CC: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x802708D0: swc1        $f16, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f16.u32l;
    // 0x802708D4: lw          $t3, 0x3B20($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X3B20);
    // 0x802708D8: lw          $t5, 0xC8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XC8);
    // 0x802708DC: lw          $t4, 0xB8($t3)
    ctx->r12 = MEM_W(ctx->r11, 0XB8);
    // 0x802708E0: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802708E4: bne         $t4, $t5, L_802708F8
    if (ctx->r12 != ctx->r13) {
        // 0x802708E8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_802708F8;
    }
    // 0x802708E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802708EC: lwc1        $f18, -0x276C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X276C);
    // 0x802708F0: b           L_80270E3C
    // 0x802708F4: swc1        $f18, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f18.u32l;
        goto L_80270E3C;
    // 0x802708F4: swc1        $f18, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f18.u32l;
L_802708F8:
    // 0x802708F8: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x802708FC: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80270900: jal         0x802700FC
    // 0x80270904: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_4;
    // 0x80270904: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    after_4:
    // 0x80270908: b           L_80270E40
    // 0x8027090C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x8027090C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80270910: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80270914: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80270918: b           L_80270E3C
    // 0x8027091C: swc1        $f4, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f4.u32l;
        goto L_80270E3C;
    // 0x8027091C: swc1        $f4, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f4.u32l;
    // 0x80270920: lwc1        $f6, 0x84($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X84);
    // 0x80270924: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x80270928: c.lt.s      $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f6.fl < ctx->f14.fl;
    // 0x8027092C: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80270930: bc1f        L_80270944
    if (!c1cs) {
        // 0x80270934: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80270944;
    }
    // 0x80270934: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80270938: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8027093C: nop

    // 0x80270940: swc1        $f8, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f8.u32l;
L_80270944:
    // 0x80270944: lw          $t6, 0x3B20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B20);
    // 0x80270948: lw          $t8, 0xC8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC8);
    // 0x8027094C: lw          $t7, 0xB8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XB8);
    // 0x80270950: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    // 0x80270954: bne         $t7, $t8, L_80270974
    if (ctx->r15 != ctx->r24) {
        // 0x80270958: lui         $a2, 0x4011
        ctx->r6 = S32(0X4011 << 16);
            goto L_80270974;
    }
    // 0x80270958: lui         $a2, 0x4011
    ctx->r6 = S32(0X4011 << 16);
    // 0x8027095C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80270960: ori         $a2, $a2, 0xEB85
    ctx->r6 = ctx->r6 | 0XEB85;
    // 0x80270964: jal         0x802700FC
    // 0x80270968: lui         $a3, 0x3F00
    ctx->r7 = S32(0X3F00 << 16);
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_5;
    // 0x80270968: lui         $a3, 0x3F00
    ctx->r7 = S32(0X3F00 << 16);
    after_5:
    // 0x8027096C: b           L_80270E40
    // 0x80270970: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x80270970: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80270974:
    // 0x80270974: lw          $a2, 0x54($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X54);
    // 0x80270978: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x8027097C: jal         0x802700FC
    // 0x80270980: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_6;
    // 0x80270980: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    after_6:
    // 0x80270984: b           L_80270E40
    // 0x80270988: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x80270988: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8027098C: lw          $a2, 0x54($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X54);
    // 0x80270990: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80270994: swc1        $f14, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f14.u32l;
    // 0x80270998: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8027099C: jal         0x802700FC
    // 0x802709A0: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_7;
    // 0x802709A0: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    after_7:
    // 0x802709A4: b           L_80270E40
    // 0x802709A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x802709A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802709AC: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x802709B0: lhu         $t9, 0xB6C($t9)
    ctx->r25 = MEM_HU(ctx->r25, 0XB6C);
    // 0x802709B4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802709B8: bne         $t9, $at, L_802709E8
    if (ctx->r25 != ctx->r1) {
        // 0x802709BC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_802709E8;
    }
    // 0x802709BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802709C0: lw          $t0, 0xC8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XC8);
    // 0x802709C4: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x802709C8: lhu         $t1, 0x10($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X10);
    // 0x802709CC: nop

    // 0x802709D0: andi        $t2, $t1, 0x100
    ctx->r10 = ctx->r9 & 0X100;
    // 0x802709D4: bne         $t2, $zero, L_802709E8
    if (ctx->r10 != 0) {
        // 0x802709D8: nop
    
            goto L_802709E8;
    }
    // 0x802709D8: nop

    // 0x802709DC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802709E0: nop

    // 0x802709E4: swc1        $f10, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f10.u32l;
L_802709E8:
    // 0x802709E8: lw          $a2, 0x54($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X54);
    // 0x802709EC: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x802709F0: jal         0x802700FC
    // 0x802709F4: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_8;
    // 0x802709F4: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    after_8:
    // 0x802709F8: b           L_80270E40
    // 0x802709FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x802709FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80270A00: jal         0x8026FAA0
    // 0x80270A04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026FAA0(rdram, ctx);
        goto after_9;
    // 0x80270A04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80270A08: jal         0x80270028
    // 0x80270A0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80270028(rdram, ctx);
        goto after_10;
    // 0x80270A0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x80270A10: b           L_80270E40
    // 0x80270A14: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x80270A14: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80270A18: jal         0x8026FDD0
    // 0x80270A1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026FDD0(rdram, ctx);
        goto after_11;
    // 0x80270A1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x80270A20: jal         0x80270028
    // 0x80270A24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80270028(rdram, ctx);
        goto after_12;
    // 0x80270A24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x80270A28: b           L_80270E40
    // 0x80270A2C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x80270A2C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80270A30: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x80270A34: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80270A38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80270A3C: jal         0x802700FC
    // 0x80270A40: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_13;
    // 0x80270A40: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    after_13:
    // 0x80270A44: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x80270A48: lwc1        $f16, 0x50($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X50);
    // 0x80270A4C: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x80270A50: c.eq.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl == ctx->f16.fl;
    // 0x80270A54: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80270A58: bc1f        L_80270A6C
    if (!c1cs) {
        // 0x80270A5C: lui         $at, 0x41A0
        ctx->r1 = S32(0X41A0 << 16);
            goto L_80270A6C;
    }
    // 0x80270A5C: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80270A60: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80270A64: b           L_80270E3C
    // 0x80270A68: swc1        $f18, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f18.u32l;
        goto L_80270E3C;
    // 0x80270A68: swc1        $f18, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f18.u32l;
L_80270A6C:
    // 0x80270A6C: b           L_80270E3C
    // 0x80270A70: swc1        $f2, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f2.u32l;
        goto L_80270E3C;
    // 0x80270A70: swc1        $f2, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f2.u32l;
    // 0x80270A74: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x80270A78: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80270A7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80270A80: jal         0x802700FC
    // 0x80270A84: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_14;
    // 0x80270A84: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    after_14:
    // 0x80270A88: jal         0x8026FBA4
    // 0x80270A8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026FBA4(rdram, ctx);
        goto after_15;
    // 0x80270A8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x80270A90: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x80270A94: lwc1        $f4, 0x50($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X50);
    // 0x80270A98: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x80270A9C: c.eq.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl == ctx->f4.fl;
    // 0x80270AA0: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80270AA4: bc1f        L_80270AB8
    if (!c1cs) {
        // 0x80270AA8: lui         $at, 0x41F0
        ctx->r1 = S32(0X41F0 << 16);
            goto L_80270AB8;
    }
    // 0x80270AA8: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80270AAC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80270AB0: b           L_80270E3C
    // 0x80270AB4: swc1        $f6, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f6.u32l;
        goto L_80270E3C;
    // 0x80270AB4: swc1        $f6, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f6.u32l;
L_80270AB8:
    // 0x80270AB8: b           L_80270E3C
    // 0x80270ABC: swc1        $f2, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f2.u32l;
        goto L_80270E3C;
    // 0x80270ABC: swc1        $f2, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f2.u32l;
    // 0x80270AC0: lh          $a0, 0x2E($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X2E);
    // 0x80270AC4: jal         0x80272AD4
    // 0x80270AC8: nop

    ovl_8024B800_func_80272AD4(rdram, ctx);
        goto after_16;
    // 0x80270AC8: nop

    after_16:
    // 0x80270ACC: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x80270AD0: bgez        $v0, L_80270AEC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80270AD4: cvt.d.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.d = CVT_D_W(ctx->f8.u32l);
            goto L_80270AEC;
    }
    // 0x80270AD4: cvt.d.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.d = CVT_D_W(ctx->f8.u32l);
    // 0x80270AD8: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80270ADC: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x80270AE0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80270AE4: nop

    // 0x80270AE8: add.d       $f10, $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f10.d = ctx->f10.d + ctx->f16.d;
L_80270AEC:
    // 0x80270AEC: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80270AF0: lwc1        $f19, -0x2768($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, -0X2768);
    // 0x80270AF4: lwc1        $f18, -0x2764($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X2764);
    // 0x80270AF8: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80270AFC: mul.d       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f10.d, ctx->f18.d);
    // 0x80270B00: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x80270B04: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80270B08: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80270B0C: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x80270B10: cvt.s.d     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f0.fl = CVT_S_D(ctx->f8.d);
    // 0x80270B14: swc1        $f0, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f0.u32l;
    // 0x80270B18: lwc1        $f16, -0x275C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X275C);
    // 0x80270B1C: lwc1        $f17, -0x2760($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X2760);
    // 0x80270B20: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x80270B24: c.lt.d      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.d < ctx->f10.d;
    // 0x80270B28: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80270B2C: bc1f        L_80270E40
    if (!c1cs) {
        // 0x80270B30: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80270E40;
    }
    // 0x80270B30: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80270B34: lwc1        $f18, -0x2758($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X2758);
    // 0x80270B38: b           L_80270E3C
    // 0x80270B3C: swc1        $f18, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f18.u32l;
        goto L_80270E3C;
    // 0x80270B3C: swc1        $f18, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f18.u32l;
    // 0x80270B40: jal         0x8026FEC4
    // 0x80270B44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026FEC4(rdram, ctx);
        goto after_17;
    // 0x80270B44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x80270B48: b           L_80270E40
    // 0x80270B4C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x80270B4C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80270B50: lw          $t3, 0xC8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XC8);
    // 0x80270B54: nop

    // 0x80270B58: lhu         $t4, 0x10($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0X10);
    // 0x80270B5C: nop

    // 0x80270B60: andi        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 & 0X1;
    // 0x80270B64: beq         $t5, $zero, L_80270B78
    if (ctx->r13 == 0) {
        // 0x80270B68: nop
    
            goto L_80270B78;
    }
    // 0x80270B68: nop

    // 0x80270B6C: lwc1        $f4, 0x54($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X54);
    // 0x80270B70: nop

    // 0x80270B74: swc1        $f4, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f4.u32l;
L_80270B78:
    // 0x80270B78: lwc1        $f6, 0x50($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X50);
    // 0x80270B7C: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80270B80: c.eq.s      $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f12.fl == ctx->f6.fl;
    // 0x80270B84: nop

    // 0x80270B88: bc1f        L_80270E40
    if (!c1cs) {
        // 0x80270B8C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80270E40;
    }
    // 0x80270B8C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80270B90: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80270B94: b           L_80270E3C
    // 0x80270B98: swc1        $f8, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f8.u32l;
        goto L_80270E3C;
    // 0x80270B98: swc1        $f8, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f8.u32l;
    // 0x80270B9C: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x80270BA0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80270BA4: b           L_80270E3C
    // 0x80270BA8: swc1        $f16, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f16.u32l;
        goto L_80270E3C;
    // 0x80270BA8: swc1        $f16, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f16.u32l;
    // 0x80270BAC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80270BB0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80270BB4: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80270BB8: swc1        $f10, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f10.u32l;
    // 0x80270BBC: lwc1        $f18, -0x2754($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X2754);
    // 0x80270BC0: b           L_80270E3C
    // 0x80270BC4: swc1        $f18, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f18.u32l;
        goto L_80270E3C;
    // 0x80270BC4: swc1        $f18, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f18.u32l;
    // 0x80270BC8: lw          $t6, 0xC8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC8);
    // 0x80270BCC: nop

    // 0x80270BD0: lbu         $t7, 0x8AC($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X8AC);
    // 0x80270BD4: nop

    // 0x80270BD8: slti        $at, $t7, 0x2
    ctx->r1 = SIGNED(ctx->r15) < 0X2 ? 1 : 0;
    // 0x80270BDC: bne         $at, $zero, L_80270BF4
    if (ctx->r1 != 0) {
        // 0x80270BE0: nop
    
            goto L_80270BF4;
    }
    // 0x80270BE0: nop

    // 0x80270BE4: jal         0x8026F7C4
    // 0x80270BE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026F7C4(rdram, ctx);
        goto after_18;
    // 0x80270BE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
    // 0x80270BEC: b           L_80270E40
    // 0x80270BF0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x80270BF0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80270BF4:
    // 0x80270BF4: jal         0x80270234
    // 0x80270BF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80270234(rdram, ctx);
        goto after_19;
    // 0x80270BF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
    // 0x80270BFC: beq         $v0, $zero, L_80270C10
    if (ctx->r2 == 0) {
        // 0x80270C00: lui         $at, 0x3F00
        ctx->r1 = S32(0X3F00 << 16);
            goto L_80270C10;
    }
    // 0x80270C00: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80270C04: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80270C08: b           L_80270E3C
    // 0x80270C0C: swc1        $f4, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f4.u32l;
        goto L_80270E3C;
    // 0x80270C0C: swc1        $f4, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f4.u32l;
L_80270C10:
    // 0x80270C10: jal         0x8026F7C4
    // 0x80270C14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026F7C4(rdram, ctx);
        goto after_20;
    // 0x80270C14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_20:
    // 0x80270C18: b           L_80270E40
    // 0x80270C1C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x80270C1C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80270C20: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x80270C24: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80270C28: beq         $v0, $zero, L_80270C78
    if (ctx->r2 == 0) {
        // 0x80270C2C: nop
    
            goto L_80270C78;
    }
    // 0x80270C2C: nop

    // 0x80270C30: bne         $v0, $at, L_80270C54
    if (ctx->r2 != ctx->r1) {
        // 0x80270C34: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80270C54;
    }
    // 0x80270C34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80270C38: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x80270C3C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80270C40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80270C44: jal         0x802700FC
    // 0x80270C48: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_21;
    // 0x80270C48: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    after_21:
    // 0x80270C4C: b           L_80270C6C
    // 0x80270C50: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
        goto L_80270C6C;
    // 0x80270C50: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
L_80270C54:
    // 0x80270C54: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x80270C58: lui         $a3, 0x3F19
    ctx->r7 = S32(0X3F19 << 16);
    // 0x80270C5C: ori         $a3, $a3, 0x999A
    ctx->r7 = ctx->r7 | 0X999A;
    // 0x80270C60: jal         0x802700FC
    // 0x80270C64: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_22;
    // 0x80270C64: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    after_22:
    // 0x80270C68: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
L_80270C6C:
    // 0x80270C6C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80270C70: b           L_80270E3C
    // 0x80270C74: swc1        $f6, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f6.u32l;
        goto L_80270E3C;
    // 0x80270C74: swc1        $f6, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f6.u32l;
L_80270C78:
    // 0x80270C78: jal         0x8026F8C4
    // 0x80270C7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026F8C4(rdram, ctx);
        goto after_23;
    // 0x80270C7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_23:
    // 0x80270C80: b           L_80270E40
    // 0x80270C84: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x80270C84: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80270C88: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80270C8C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80270C90: nop

    // 0x80270C94: swc1        $f8, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f8.u32l;
    // 0x80270C98: lw          $t8, 0xC8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC8);
    // 0x80270C9C: nop

    // 0x80270CA0: lhu         $t9, 0x10($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X10);
    // 0x80270CA4: nop

    // 0x80270CA8: andi        $t0, $t9, 0x10
    ctx->r8 = ctx->r25 & 0X10;
    // 0x80270CAC: beq         $t0, $zero, L_80270CE8
    if (ctx->r8 == 0) {
        // 0x80270CB0: nop
    
            goto L_80270CE8;
    }
    // 0x80270CB0: nop

    // 0x80270CB4: lwc1        $f16, 0xB4($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XB4);
    // 0x80270CB8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80270CBC: c.lt.s      $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f16.fl < ctx->f14.fl;
    // 0x80270CC0: nop

    // 0x80270CC4: bc1f        L_80270CDC
    if (!c1cs) {
        // 0x80270CC8: nop
    
            goto L_80270CDC;
    }
    // 0x80270CC8: nop

    // 0x80270CCC: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80270CD0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80270CD4: b           L_80270E3C
    // 0x80270CD8: swc1        $f10, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f10.u32l;
        goto L_80270E3C;
    // 0x80270CD8: swc1        $f10, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f10.u32l;
L_80270CDC:
    // 0x80270CDC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80270CE0: b           L_80270E3C
    // 0x80270CE4: swc1        $f18, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f18.u32l;
        goto L_80270E3C;
    // 0x80270CE4: swc1        $f18, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f18.u32l;
L_80270CE8:
    // 0x80270CE8: lhu         $t1, 0x0($v1)
    ctx->r9 = MEM_HU(ctx->r3, 0X0);
    // 0x80270CEC: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80270CF0: bne         $t1, $at, L_80270D10
    if (ctx->r9 != ctx->r1) {
        // 0x80270CF4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80270D10;
    }
    // 0x80270CF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80270CF8: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x80270CFC: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80270D00: jal         0x802700FC
    // 0x80270D04: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_24;
    // 0x80270D04: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    after_24:
    // 0x80270D08: b           L_80270E40
    // 0x80270D0C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x80270D0C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80270D10:
    // 0x80270D10: lhu         $t2, 0x20($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X20);
    // 0x80270D14: nop

    // 0x80270D18: andi        $t3, $t2, 0x100
    ctx->r11 = ctx->r10 & 0X100;
    // 0x80270D1C: beq         $t3, $zero, L_80270D2C
    if (ctx->r11 == 0) {
        // 0x80270D20: nop
    
            goto L_80270D2C;
    }
    // 0x80270D20: nop

    // 0x80270D24: b           L_80270E3C
    // 0x80270D28: swc1        $f2, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f2.u32l;
        goto L_80270E3C;
    // 0x80270D28: swc1        $f2, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f2.u32l;
L_80270D2C:
    // 0x80270D2C: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x80270D30: lui         $a3, 0x3F19
    ctx->r7 = S32(0X3F19 << 16);
    // 0x80270D34: ori         $a3, $a3, 0x999A
    ctx->r7 = ctx->r7 | 0X999A;
    // 0x80270D38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80270D3C: jal         0x802700FC
    // 0x80270D40: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_25;
    // 0x80270D40: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    after_25:
    // 0x80270D44: b           L_80270E40
    // 0x80270D48: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x80270D48: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80270D4C: lw          $a2, 0x54($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X54);
    // 0x80270D50: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80270D54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80270D58: jal         0x802700FC
    // 0x80270D5C: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_26;
    // 0x80270D5C: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    after_26:
    // 0x80270D60: b           L_80270E40
    // 0x80270D64: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x80270D64: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80270D68: jal         0x8026FBA4
    // 0x80270D6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026FBA4(rdram, ctx);
        goto after_27;
    // 0x80270D6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_27:
    // 0x80270D70: b           L_80270E40
    // 0x80270D74: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x80270D74: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80270D78: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80270D7C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80270D80: lwc1        $f6, 0xB4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XB4);
    // 0x80270D84: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80270D88: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80270D8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80270D90: bc1f        L_80270DA4
    if (!c1cs) {
        // 0x80270D94: lui         $a1, 0x41F0
        ctx->r5 = S32(0X41F0 << 16);
            goto L_80270DA4;
    }
    // 0x80270D94: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    // 0x80270D98: lwc1        $f8, 0x54($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X54);
    // 0x80270D9C: nop

    // 0x80270DA0: swc1        $f8, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f8.u32l;
L_80270DA4:
    // 0x80270DA4: jal         0x802700FC
    // 0x80270DA8: lui         $a3, 0x3F00
    ctx->r7 = S32(0X3F00 << 16);
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_28;
    // 0x80270DA8: lui         $a3, 0x3F00
    ctx->r7 = S32(0X3F00 << 16);
    after_28:
    // 0x80270DAC: b           L_80270E40
    // 0x80270DB0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x80270DB0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80270DB4: lhu         $t4, 0x0($v1)
    ctx->r12 = MEM_HU(ctx->r3, 0X0);
    // 0x80270DB8: nop

    // 0x80270DBC: beq         $t4, $zero, L_80270DD8
    if (ctx->r12 == 0) {
        // 0x80270DC0: nop
    
            goto L_80270DD8;
    }
    // 0x80270DC0: nop

    // 0x80270DC4: lhu         $t5, 0xE($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0XE);
    // 0x80270DC8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80270DCC: bne         $t5, $at, L_80270DD8
    if (ctx->r13 != ctx->r1) {
        // 0x80270DD0: nop
    
            goto L_80270DD8;
    }
    // 0x80270DD0: nop

    // 0x80270DD4: swc1        $f14, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f14.u32l;
L_80270DD8:
    // 0x80270DD8: lw          $t6, 0xC8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC8);
    // 0x80270DDC: nop

    // 0x80270DE0: lh          $t7, 0x8AE($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X8AE);
    // 0x80270DE4: nop

    // 0x80270DE8: bne         $t7, $zero, L_80270E04
    if (ctx->r15 != 0) {
        // 0x80270DEC: lui         $a1, 0x3F19
        ctx->r5 = S32(0X3F19 << 16);
            goto L_80270E04;
    }
    // 0x80270DEC: lui         $a1, 0x3F19
    ctx->r5 = S32(0X3F19 << 16);
    // 0x80270DF0: jal         0x8026FBA4
    // 0x80270DF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026FBA4(rdram, ctx);
        goto after_29;
    // 0x80270DF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_29:
    // 0x80270DF8: b           L_80270E40
    // 0x80270DFC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80270E40;
    // 0x80270DFC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80270E00: lui         $a1, 0x3F19
    ctx->r5 = S32(0X3F19 << 16);
L_80270E04:
    // 0x80270E04: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x80270E08: jal         0x80270144
    // 0x80270E0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80270144(rdram, ctx);
        goto after_30;
    // 0x80270E0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_30:
    // 0x80270E10: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80270E14: lwc1        $f11, -0x2750($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X2750);
    // 0x80270E18: lwc1        $f10, -0x274C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X274C);
    // 0x80270E1C: cvt.d.s     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.d = CVT_D_S(ctx->f0.fl);
    // 0x80270E20: add.d       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f10.d); 
    ctx->f18.d = ctx->f16.d + ctx->f10.d;
    // 0x80270E24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80270E28: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x80270E2C: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    // 0x80270E30: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80270E34: jal         0x802700FC
    // 0x80270E38: lui         $a3, 0x3F00
    ctx->r7 = S32(0X3F00 << 16);
    ovl_8024B800_func_802700FC(rdram, ctx);
        goto after_31;
    // 0x80270E38: lui         $a3, 0x3F00
    ctx->r7 = S32(0X3F00 << 16);
    after_31:
L_80270E3C:
    // 0x80270E3C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80270E40:
    // 0x80270E40: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80270E44: jr          $ra
    // 0x80270E48: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80270E48: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_8024B800_func_80270E4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80270E4C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80270E50: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80270E54: lhu         $t6, 0x1A($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X1A);
    // 0x80270E58: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80270E5C: beq         $t6, $zero, L_80270F24
    if (ctx->r14 == 0) {
        // 0x80270E60: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80270F24;
    }
    // 0x80270E60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80270E64: lw          $v1, 0xC8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XC8);
    // 0x80270E68: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80270E6C: lhu         $t7, 0x8($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X8);
    // 0x80270E70: nop

    // 0x80270E74: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x80270E78: beq         $t8, $zero, L_80270E8C
    if (ctx->r24 == 0) {
        // 0x80270E7C: nop
    
            goto L_80270E8C;
    }
    // 0x80270E7C: nop

    // 0x80270E80: lh          $a1, 0x2E($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X2E);
    // 0x80270E84: b           L_80270EA4
    // 0x80270E88: lwc1        $f4, 0x3CC($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X3CC);
        goto L_80270EA4;
    // 0x80270E88: lwc1        $f4, 0x3CC($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X3CC);
L_80270E8C:
    // 0x80270E8C: lh          $a1, 0x2E($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X2E);
    // 0x80270E90: nop

    // 0x80270E94: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
    // 0x80270E98: sll         $t9, $a1, 16
    ctx->r25 = S32(ctx->r5 << 16);
    // 0x80270E9C: sra         $a1, $t9, 16
    ctx->r5 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80270EA0: lwc1        $f4, 0x3CC($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X3CC);
L_80270EA4:
    // 0x80270EA4: nop

    // 0x80270EA8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80270EAC: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x80270EB0: nop

    // 0x80270EB4: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x80270EB8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80270EBC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80270EC0: nop

    // 0x80270EC4: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80270EC8: mfc1        $v0, $f10
    ctx->r2 = (int32_t)ctx->f10.u32l;
    // 0x80270ECC: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x80270ED0: sll         $t2, $v0, 16
    ctx->r10 = S32(ctx->r2 << 16);
    // 0x80270ED4: sra         $v0, $t2, 16
    ctx->r2 = S32(SIGNED(ctx->r10) >> 16);
    // 0x80270ED8: slti        $at, $v0, 0xB
    ctx->r1 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
    // 0x80270EDC: bne         $at, $zero, L_80270EEC
    if (ctx->r1 != 0) {
        // 0x80270EE0: slt         $at, $a1, $v0
        ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
            goto L_80270EEC;
    }
    // 0x80270EE0: slt         $at, $a1, $v0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80270EE4: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80270EE8: slt         $at, $a1, $v0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
L_80270EEC:
    // 0x80270EEC: beq         $at, $zero, L_80270F24
    if (ctx->r1 == 0) {
        // 0x80270EF0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80270F24;
    }
    // 0x80270EF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80270EF4: lhu         $t4, 0x20($a0)
    ctx->r12 = MEM_HU(ctx->r4, 0X20);
    // 0x80270EF8: nop

    // 0x80270EFC: andi        $t5, $t4, 0x4
    ctx->r13 = ctx->r12 & 0X4;
    // 0x80270F00: bne         $t5, $zero, L_80270F24
    if (ctx->r13 != 0) {
        // 0x80270F04: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80270F24;
    }
    // 0x80270F04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80270F08: sh          $v0, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r2;
    // 0x80270F0C: jal         0x8026AA98
    // 0x80270F10: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_8024B800_func_8026AA98(rdram, ctx);
        goto after_0;
    // 0x80270F10: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80270F14: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80270F18: addiu       $t6, $zero, 0x2D
    ctx->r14 = ADD32(0, 0X2D);
    // 0x80270F1C: sb          $t6, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r14;
    // 0x80270F20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80270F24:
    // 0x80270F24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80270F28: jr          $ra
    // 0x80270F2C: nop

    return;
    // 0x80270F2C: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80270F30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80270F30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80270F34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80270F38: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80270F3C: lwc1        $f4, 0xAC($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XAC);
    // 0x80270F40: lwc1        $f9, -0x2748($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X2748);
    // 0x80270F44: lwc1        $f8, -0x2744($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X2744);
    // 0x80270F48: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80270F4C: c.le.d      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.d <= ctx->f6.d;
    // 0x80270F50: nop

    // 0x80270F54: bc1f        L_80270FDC
    if (!c1cs) {
        // 0x80270F58: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80270FDC;
    }
    // 0x80270F58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80270F5C: lwc1        $f12, 0x8C($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X8C);
    // 0x80270F60: lwc1        $f14, 0xB0($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0XB0);
    // 0x80270F64: jal         0x80279308
    // 0x80270F68: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_8024B800_func_80279308(rdram, ctx);
        goto after_0;
    // 0x80270F68: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80270F6C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80270F70: lwc1        $f11, -0x2740($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X2740);
    // 0x80270F74: lwc1        $f10, -0x273C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X273C);
    // 0x80270F78: cvt.d.s     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.d = CVT_D_S(ctx->f0.fl);
    // 0x80270F7C: c.lt.d      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.d < ctx->f16.d;
    // 0x80270F80: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80270F84: bc1t        L_80270FB8
    if (c1cs) {
        // 0x80270F88: nop
    
            goto L_80270FB8;
    }
    // 0x80270F88: nop

    // 0x80270F8C: lwc1        $f12, 0x7C($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X7C);
    // 0x80270F90: lwc1        $f14, 0xB0($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0XB0);
    // 0x80270F94: jal         0x80279308
    // 0x80270F98: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_8024B800_func_80279308(rdram, ctx);
        goto after_1;
    // 0x80270F98: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x80270F9C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80270FA0: lwc1        $f19, -0x2738($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, -0X2738);
    // 0x80270FA4: lwc1        $f18, -0x2734($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X2734);
    // 0x80270FA8: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x80270FAC: c.lt.d      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.d < ctx->f4.d;
    // 0x80270FB0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80270FB4: bc1f        L_80270FC8
    if (!c1cs) {
        // 0x80270FB8: lui         $at, 0x8028
        ctx->r1 = S32(0X8028 << 16);
            goto L_80270FC8;
    }
L_80270FB8:
    // 0x80270FB8: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80270FBC: lwc1        $f6, -0x2730($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X2730);
    // 0x80270FC0: b           L_80270FD8
    // 0x80270FC4: swc1        $f6, 0xAC($a0)
    MEM_W(0XAC, ctx->r4) = ctx->f6.u32l;
        goto L_80270FD8;
    // 0x80270FC4: swc1        $f6, 0xAC($a0)
    MEM_W(0XAC, ctx->r4) = ctx->f6.u32l;
L_80270FC8:
    // 0x80270FC8: lhu         $t6, 0x12($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X12);
    // 0x80270FCC: nop

    // 0x80270FD0: ori         $t7, $t6, 0x80
    ctx->r15 = ctx->r14 | 0X80;
    // 0x80270FD4: sh          $t7, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r15;
L_80270FD8:
    // 0x80270FD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80270FDC:
    // 0x80270FDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80270FE0: jr          $ra
    // 0x80270FE4: nop

    return;
    // 0x80270FE4: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80270FE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80270FE8: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x80270FEC: addiu       $v0, $v0, 0x3940
    ctx->r2 = ADD32(ctx->r2, 0X3940);
    // 0x80270FF0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80270FF4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80270FF8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80270FFC: lw          $a1, 0x5BC($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X5BC);
    // 0x80271000: lw          $a2, 0x5B8($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X5B8);
    // 0x80271004: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80271008: jal         0x80272B98
    // 0x8027100C: addiu       $a3, $sp, 0x28
    ctx->r7 = ADD32(ctx->r29, 0X28);
    ovl_8024B800_func_80272B98(rdram, ctx);
        goto after_0;
    // 0x8027100C: addiu       $a3, $sp, 0x28
    ctx->r7 = ADD32(ctx->r29, 0X28);
    after_0:
    // 0x80271010: lwc1        $f12, 0xB0($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XB0);
    // 0x80271014: lwc1        $f14, 0x28($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80271018: jal         0x8027924C
    // 0x8027101C: nop

    ovl_8024B800_func_8027924C(rdram, ctx);
        goto after_1;
    // 0x8027101C: nop

    after_1:
    // 0x80271020: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80271024: jal         0x80272AEC
    // 0x80271028: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    ovl_8024B800_func_80272AEC(rdram, ctx);
        goto after_2;
    // 0x80271028: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_2:
    // 0x8027102C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80271030: lwc1        $f7, -0x2728($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X2728);
    // 0x80271034: lwc1        $f6, -0x2724($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X2724);
    // 0x80271038: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x8027103C: c.lt.d      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.d < ctx->f6.d;
    // 0x80271040: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80271044: bc1f        L_802710A8
    if (!c1cs) {
        // 0x80271048: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802710A8;
    }
    // 0x80271048: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8027104C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80271050: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80271054: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x80271058: nop

    // 0x8027105C: bc1f        L_80271088
    if (!c1cs) {
        // 0x80271060: nop
    
            goto L_80271088;
    }
    // 0x80271060: nop

    // 0x80271064: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80271068: lwc1        $f16, 0xB0($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XB0);
    // 0x8027106C: lwc1        $f5, -0x2720($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X2720);
    // 0x80271070: lwc1        $f4, -0x271C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X271C);
    // 0x80271074: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x80271078: sub.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d - ctx->f4.d;
    // 0x8027107C: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x80271080: b           L_802710A4
    // 0x80271084: swc1        $f8, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = ctx->f8.u32l;
        goto L_802710A4;
    // 0x80271084: swc1        $f8, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = ctx->f8.u32l;
L_80271088:
    // 0x80271088: lwc1        $f10, 0xB0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XB0);
    // 0x8027108C: lwc1        $f19, -0x2718($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, -0X2718);
    // 0x80271090: lwc1        $f18, -0x2714($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X2714);
    // 0x80271094: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x80271098: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x8027109C: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x802710A0: swc1        $f6, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = ctx->f6.u32l;
L_802710A4:
    // 0x802710A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802710A8:
    // 0x802710A8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802710AC: jr          $ra
    // 0x802710B0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x802710B0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_8024B800_func_802710B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802710B4: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x802710B8: lhu         $t6, 0xB78($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB78);
    // 0x802710BC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x802710C0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802710C4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802710C8: bne         $t6, $zero, L_8027111C
    if (ctx->r14 != 0) {
        // 0x802710CC: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_8027111C;
    }
    // 0x802710CC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802710D0: lhu         $t7, 0x14($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X14);
    // 0x802710D4: nop

    // 0x802710D8: andi        $t8, $t7, 0x400
    ctx->r24 = ctx->r15 & 0X400;
    // 0x802710DC: bne         $t8, $zero, L_8027111C
    if (ctx->r24 != 0) {
        // 0x802710E0: nop
    
            goto L_8027111C;
    }
    // 0x802710E0: nop

    // 0x802710E4: lhu         $t9, 0x20($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X20);
    // 0x802710E8: nop

    // 0x802710EC: andi        $t0, $t9, 0x200
    ctx->r8 = ctx->r25 & 0X200;
    // 0x802710F0: bne         $t0, $zero, L_8027111C
    if (ctx->r8 != 0) {
        // 0x802710F4: nop
    
            goto L_8027111C;
    }
    // 0x802710F4: nop

    // 0x802710F8: lhu         $t1, 0x1A($a0)
    ctx->r9 = MEM_HU(ctx->r4, 0X1A);
    // 0x802710FC: nop

    // 0x80271100: beq         $t1, $zero, L_8027111C
    if (ctx->r9 == 0) {
        // 0x80271104: nop
    
            goto L_8027111C;
    }
    // 0x80271104: nop

    // 0x80271108: lhu         $t2, 0x12($a0)
    ctx->r10 = MEM_HU(ctx->r4, 0X12);
    // 0x8027110C: nop

    // 0x80271110: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x80271114: beq         $t3, $zero, L_8027112C
    if (ctx->r11 == 0) {
        // 0x80271118: nop
    
            goto L_8027112C;
    }
    // 0x80271118: nop

L_8027111C:
    // 0x8027111C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80271120: sb          $zero, 0x2($s0)
    MEM_B(0X2, ctx->r16) = 0;
    // 0x80271124: b           L_8027117C
    // 0x80271128: sb          $zero, 0x1($s0)
    MEM_B(0X1, ctx->r16) = 0;
        goto L_8027117C;
    // 0x80271128: sb          $zero, 0x1($s0)
    MEM_B(0X1, ctx->r16) = 0;
L_8027112C:
    // 0x8027112C: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x80271130: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80271134: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x80271138: beq         $v1, $v0, L_80271174
    if (ctx->r3 == ctx->r2) {
        // 0x8027113C: nop
    
            goto L_80271174;
    }
    // 0x8027113C: nop

    // 0x80271140: beq         $v1, $zero, L_80271174
    if (ctx->r3 == 0) {
        // 0x80271144: nop
    
            goto L_80271174;
    }
    // 0x80271144: nop

    // 0x80271148: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8027114C: addiu       $t5, $zero, 0x5
    ctx->r13 = ADD32(0, 0X5);
    // 0x80271150: beq         $a0, $zero, L_80271168
    if (ctx->r4 == 0) {
        // 0x80271154: addiu       $t4, $a0, -0x1
        ctx->r12 = ADD32(ctx->r4, -0X1);
            goto L_80271168;
    }
    // 0x80271154: addiu       $t4, $a0, -0x1
    ctx->r12 = ADD32(ctx->r4, -0X1);
    // 0x80271158: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    // 0x8027115C: sb          $t4, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r12;
    // 0x80271160: b           L_8027117C
    // 0x80271164: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
        goto L_8027117C;
    // 0x80271164: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
L_80271168:
    // 0x80271168: sb          $t5, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r13;
    // 0x8027116C: b           L_8027117C
    // 0x80271170: sb          $v0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r2;
        goto L_8027117C;
    // 0x80271170: sb          $v0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r2;
L_80271174:
    // 0x80271174: sb          $t6, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r14;
    // 0x80271178: sb          $v0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r2;
L_8027117C:
    // 0x8027117C: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x80271180: lui         $t9, 0x8028
    ctx->r25 = S32(0X8028 << 16);
    // 0x80271184: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80271188: lw          $t9, -0x3630($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3630);
    // 0x8027118C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80271190: jalr        $t9
    // 0x80271194: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80271194: nop

    after_0:
    // 0x80271198: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x8027119C: lhu         $t8, 0xB4A($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0XB4A);
    // 0x802711A0: nop

    // 0x802711A4: beq         $t8, $zero, L_802711B4
    if (ctx->r24 == 0) {
        // 0x802711A8: nop
    
            goto L_802711B4;
    }
    // 0x802711A8: nop

    // 0x802711AC: jal         0x8026B970
    // 0x802711B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026B970(rdram, ctx);
        goto after_1;
    // 0x802711B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
L_802711B4:
    // 0x802711B4: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x802711B8: lhu         $t0, 0xB4C($t0)
    ctx->r8 = MEM_HU(ctx->r8, 0XB4C);
    // 0x802711BC: nop

    // 0x802711C0: bne         $t0, $zero, L_802711D0
    if (ctx->r8 != 0) {
        // 0x802711C4: nop
    
            goto L_802711D0;
    }
    // 0x802711C4: nop

    // 0x802711C8: jal         0x8026BB68
    // 0x802711CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026BB68(rdram, ctx);
        goto after_2;
    // 0x802711CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
L_802711D0:
    // 0x802711D0: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x802711D4: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x802711D8: lhu         $t1, 0x4($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X4);
    // 0x802711DC: nop

    // 0x802711E0: bne         $t1, $at, L_80271200
    if (ctx->r9 != ctx->r1) {
        // 0x802711E4: nop
    
            goto L_80271200;
    }
    // 0x802711E4: nop

    // 0x802711E8: lh          $t2, 0x8AE($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X8AE);
    // 0x802711EC: nop

    // 0x802711F0: bne         $t2, $zero, L_80271200
    if (ctx->r10 != 0) {
        // 0x802711F4: nop
    
            goto L_80271200;
    }
    // 0x802711F4: nop

    // 0x802711F8: jal         0x80270E4C
    // 0x802711FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80270E4C(rdram, ctx);
        goto after_3;
    // 0x802711FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
L_80271200:
    // 0x80271200: jal         0x8026BD38
    // 0x80271204: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026BD38(rdram, ctx);
        goto after_4;
    // 0x80271204: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80271208: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x8027120C: lhu         $t3, 0xB7E($t3)
    ctx->r11 = MEM_HU(ctx->r11, 0XB7E);
    // 0x80271210: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x80271214: andi        $t4, $t3, 0x8
    ctx->r12 = ctx->r11 & 0X8;
    // 0x80271218: beq         $t4, $zero, L_8027124C
    if (ctx->r12 == 0) {
        // 0x8027121C: nop
    
            goto L_8027124C;
    }
    // 0x8027121C: nop

    // 0x80271220: lw          $t5, 0xB28($t5)
    ctx->r13 = MEM_W(ctx->r13, 0XB28);
    // 0x80271224: nop

    // 0x80271228: bne         $s0, $t5, L_8027124C
    if (ctx->r16 != ctx->r13) {
        // 0x8027122C: nop
    
            goto L_8027124C;
    }
    // 0x8027122C: nop

    // 0x80271230: lhu         $t6, 0x14($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X14);
    // 0x80271234: nop

    // 0x80271238: andi        $t7, $t6, 0x1000
    ctx->r15 = ctx->r14 & 0X1000;
    // 0x8027123C: beq         $t7, $zero, L_8027124C
    if (ctx->r15 == 0) {
        // 0x80271240: nop
    
            goto L_8027124C;
    }
    // 0x80271240: nop

    // 0x80271244: jal         0x80270FE8
    // 0x80271248: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80270FE8(rdram, ctx);
        goto after_5;
    // 0x80271248: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
L_8027124C:
    // 0x8027124C: jal         0x802702E4
    // 0x80271250: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_802702E4(rdram, ctx);
        goto after_6;
    // 0x80271250: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80271254: lw          $t9, 0xC8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC8);
    // 0x80271258: nop

    // 0x8027125C: lbu         $t8, 0x8AC($t9)
    ctx->r24 = MEM_BU(ctx->r25, 0X8AC);
    // 0x80271260: nop

    // 0x80271264: bne         $t8, $zero, L_802712AC
    if (ctx->r24 != 0) {
        // 0x80271268: nop
    
            goto L_802712AC;
    }
    // 0x80271268: nop

    // 0x8027126C: lhu         $t0, 0x14($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X14);
    // 0x80271270: lui         $at, 0x3FF8
    ctx->r1 = S32(0X3FF8 << 16);
    // 0x80271274: andi        $t1, $t0, 0x400
    ctx->r9 = ctx->r8 & 0X400;
    // 0x80271278: bne         $t1, $zero, L_802712AC
    if (ctx->r9 != 0) {
        // 0x8027127C: nop
    
            goto L_802712AC;
    }
    // 0x8027127C: nop

    // 0x80271280: lwc1        $f6, 0xAC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XAC);
    // 0x80271284: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x80271288: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8027128C: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80271290: c.lt.d      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.d < ctx->f8.d;
    // 0x80271294: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x80271298: bc1f        L_802712AC
    if (!c1cs) {
        // 0x8027129C: nop
    
            goto L_802712AC;
    }
    // 0x8027129C: nop

    // 0x802712A0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802712A4: nop

    // 0x802712A8: swc1        $f10, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f10.u32l;
L_802712AC:
    // 0x802712AC: lhu         $t2, 0x20($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X20);
    // 0x802712B0: nop

    // 0x802712B4: andi        $t3, $t2, 0x2
    ctx->r11 = ctx->r10 & 0X2;
    // 0x802712B8: beq         $t3, $zero, L_80271300
    if (ctx->r11 == 0) {
        // 0x802712BC: nop
    
            goto L_80271300;
    }
    // 0x802712BC: nop

    // 0x802712C0: lhu         $t4, 0x14($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X14);
    // 0x802712C4: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x802712C8: andi        $t5, $t4, 0x400
    ctx->r13 = ctx->r12 & 0X400;
    // 0x802712CC: bne         $t5, $zero, L_80271300
    if (ctx->r13 != 0) {
        // 0x802712D0: nop
    
            goto L_80271300;
    }
    // 0x802712D0: nop

    // 0x802712D4: lwc1        $f18, 0xAC($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XAC);
    // 0x802712D8: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x802712DC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x802712E0: cvt.d.s     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f6.d = CVT_D_S(ctx->f18.fl);
    // 0x802712E4: c.lt.d      $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f16.d < ctx->f6.d;
    // 0x802712E8: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802712EC: bc1f        L_80271300
    if (!c1cs) {
        // 0x802712F0: nop
    
            goto L_80271300;
    }
    // 0x802712F0: nop

    // 0x802712F4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802712F8: nop

    // 0x802712FC: swc1        $f4, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f4.u32l;
L_80271300:
    // 0x80271300: lhu         $t6, 0x1A($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X1A);
    // 0x80271304: nop

    // 0x80271308: bne         $t6, $zero, L_8027138C
    if (ctx->r14 != 0) {
        // 0x8027130C: nop
    
            goto L_8027138C;
    }
    // 0x8027130C: nop

    // 0x80271310: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x80271314: nop

    // 0x80271318: lhu         $t7, 0x928($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X928);
    // 0x8027131C: nop

    // 0x80271320: beq         $t7, $zero, L_8027138C
    if (ctx->r15 == 0) {
        // 0x80271324: nop
    
            goto L_8027138C;
    }
    // 0x80271324: nop

    // 0x80271328: lhu         $t9, 0x12($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X12);
    // 0x8027132C: nop

    // 0x80271330: andi        $t8, $t9, 0x2
    ctx->r24 = ctx->r25 & 0X2;
    // 0x80271334: bne         $t8, $zero, L_8027138C
    if (ctx->r24 != 0) {
        // 0x80271338: nop
    
            goto L_8027138C;
    }
    // 0x80271338: nop

    // 0x8027133C: lhu         $t0, 0x8($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X8);
    // 0x80271340: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x80271344: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x80271348: beq         $t1, $zero, L_8027135C
    if (ctx->r9 == 0) {
        // 0x8027134C: addiu       $a2, $a2, -0x2680
        ctx->r6 = ADD32(ctx->r6, -0X2680);
            goto L_8027135C;
    }
    // 0x8027134C: addiu       $a2, $a2, -0x2680
    ctx->r6 = ADD32(ctx->r6, -0X2680);
    // 0x80271350: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x80271354: b           L_8027135C
    // 0x80271358: addiu       $a2, $a2, -0x2670
    ctx->r6 = ADD32(ctx->r6, -0X2670);
        goto L_8027135C;
    // 0x80271358: addiu       $a2, $a2, -0x2670
    ctx->r6 = ADD32(ctx->r6, -0X2670);
L_8027135C:
    // 0x8027135C: lwc1        $f12, 0x4C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x80271360: lwc1        $f14, 0x44($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X44);
    // 0x80271364: jal         0x8027A184
    // 0x80271368: nop

    ovl_8024B800_func_8027A184(rdram, ctx);
        goto after_7;
    // 0x80271368: nop

    after_7:
    // 0x8027136C: bne         $v0, $zero, L_8027138C
    if (ctx->r2 != 0) {
        // 0x80271370: nop
    
            goto L_8027138C;
    }
    // 0x80271370: nop

    // 0x80271374: lhu         $v0, 0x12($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X12);
    // 0x80271378: nop

    // 0x8027137C: andi        $t2, $v0, 0x1
    ctx->r10 = ctx->r2 & 0X1;
    // 0x80271380: bne         $t2, $zero, L_8027138C
    if (ctx->r10 != 0) {
        // 0x80271384: ori         $t3, $v0, 0x4
        ctx->r11 = ctx->r2 | 0X4;
            goto L_8027138C;
    }
    // 0x80271384: ori         $t3, $v0, 0x4
    ctx->r11 = ctx->r2 | 0X4;
    // 0x80271388: sh          $t3, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r11;
L_8027138C:
    // 0x8027138C: jal         0x80270F30
    // 0x80271390: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_80270F30(rdram, ctx);
        goto after_8;
    // 0x80271390: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80271394: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80271398: lwc1        $f10, 0xAC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XAC);
    // 0x8027139C: nop

    // 0x802713A0: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x802713A4: nop

    // 0x802713A8: bc1f        L_802713B8
    if (!c1cs) {
        // 0x802713AC: nop
    
            goto L_802713B8;
    }
    // 0x802713AC: nop

    // 0x802713B0: b           L_8027179C
    // 0x802713B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8027179C;
    // 0x802713B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802713B8:
    // 0x802713B8: lwc1        $f18, 0xB4($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XB4);
    // 0x802713BC: lwc1        $f16, 0xB8($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XB8);
    // 0x802713C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802713C4: c.lt.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl < ctx->f16.fl;
    // 0x802713C8: nop

    // 0x802713CC: bc1f        L_8027179C
    if (!c1cs) {
        // 0x802713D0: nop
    
            goto L_8027179C;
    }
    // 0x802713D0: nop

    // 0x802713D4: lw          $v1, 0x28($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X28);
    // 0x802713D8: nop

    // 0x802713DC: beq         $v1, $zero, L_80271794
    if (ctx->r3 == 0) {
        // 0x802713E0: nop
    
            goto L_80271794;
    }
    // 0x802713E0: nop

    // 0x802713E4: lhu         $a2, 0x0($v1)
    ctx->r6 = MEM_HU(ctx->r3, 0X0);
    // 0x802713E8: nop

    // 0x802713EC: sra         $v0, $a2, 8
    ctx->r2 = S32(SIGNED(ctx->r6) >> 8);
    // 0x802713F0: andi        $a0, $v0, 0xFFFF
    ctx->r4 = ctx->r2 & 0XFFFF;
    // 0x802713F4: addiu       $t5, $a0, -0x1
    ctx->r13 = ADD32(ctx->r4, -0X1);
    // 0x802713F8: sltiu       $at, $t5, 0x15
    ctx->r1 = ctx->r13 < 0X15 ? 1 : 0;
    // 0x802713FC: beq         $at, $zero, L_80271794
    if (ctx->r1 == 0) {
        // 0x80271400: sll         $t5, $t5, 2
        ctx->r13 = S32(ctx->r13 << 2);
            goto L_80271794;
    }
    // 0x80271400: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80271404: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80271408: addu        $at, $at, $t5
    gpr jr_addend_80271414 = ctx->r13;
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x8027140C: lw          $t5, -0x2710($at)
    ctx->r13 = ADD32(ctx->r1, -0X2710);
    // 0x80271410: nop

    // 0x80271414: jr          $t5
    // 0x80271418: nop

    switch (jr_addend_80271414 >> 2) {
        case 0: goto L_80271498; break;
        case 1: goto L_80271760; break;
        case 2: goto L_8027167C; break;
        case 3: goto L_80271450; break;
        case 4: goto L_802716C8; break;
        case 5: goto L_80271628; break;
        case 6: goto L_802714A8; break;
        case 7: goto L_80271508; break;
        case 8: goto L_80271738; break;
        case 9: goto L_80271794; break;
        case 10: goto L_80271470; break;
        case 11: goto L_80271580; break;
        case 12: goto L_80271460; break;
        case 13: goto L_80271794; break;
        case 14: goto L_802715D4; break;
        case 15: goto L_802714A8; break;
        case 16: goto L_80271794; break;
        case 17: goto L_80271794; break;
        case 18: goto L_80271794; break;
        case 19: goto L_80271794; break;
        case 20: goto L_8027141C; break;
        default: switch_error(__func__, 0x80271414, 0x8027D8F0);
    }
    // 0x80271418: nop

L_8027141C:
    // 0x8027141C: jal         0x8026F3EC
    // 0x80271420: nop

    ovl_8024B800_func_8026F3EC(rdram, ctx);
        goto after_9;
    // 0x80271420: nop

    after_9:
    // 0x80271424: beq         $v0, $zero, L_80271794
    if (ctx->r2 == 0) {
        // 0x80271428: nop
    
            goto L_80271794;
    }
    // 0x80271428: nop

    // 0x8027142C: jal         0x8026F510
    // 0x80271430: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026F510(rdram, ctx);
        goto after_10;
    // 0x80271430: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x80271434: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80271438: lhu         $t6, 0xB7E($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB7E);
    // 0x8027143C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80271440: ori         $t7, $t6, 0x40
    ctx->r15 = ctx->r14 | 0X40;
    // 0x80271444: sh          $t7, 0xB7E($at)
    MEM_H(0XB7E, ctx->r1) = ctx->r15;
    // 0x80271448: b           L_8027179C
    // 0x8027144C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8027179C;
    // 0x8027144C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80271450:
    // 0x80271450: jal         0x8026F49C
    // 0x80271454: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026F49C(rdram, ctx);
        goto after_11;
    // 0x80271454: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x80271458: b           L_8027179C
    // 0x8027145C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8027179C;
    // 0x8027145C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80271460:
    // 0x80271460: jal         0x8026F430
    // 0x80271464: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026F430(rdram, ctx);
        goto after_12;
    // 0x80271464: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x80271468: b           L_8027179C
    // 0x8027146C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8027179C;
    // 0x8027146C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80271470:
    // 0x80271470: lhu         $t9, 0x24($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X24);
    // 0x80271474: nop

    // 0x80271478: addiu       $t8, $t9, -0x1
    ctx->r24 = ADD32(ctx->r25, -0X1);
    // 0x8027147C: andi        $t0, $t8, 0xFFFF
    ctx->r8 = ctx->r24 & 0XFFFF;
    // 0x80271480: bne         $t0, $zero, L_80271794
    if (ctx->r8 != 0) {
        // 0x80271484: sh          $t8, 0x24($s0)
        MEM_H(0X24, ctx->r16) = ctx->r24;
            goto L_80271794;
    }
    // 0x80271484: sh          $t8, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r24;
    // 0x80271488: jal         0x8026F510
    // 0x8027148C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026F510(rdram, ctx);
        goto after_13;
    // 0x8027148C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x80271490: b           L_8027179C
    // 0x80271494: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8027179C;
    // 0x80271494: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80271498:
    // 0x80271498: jal         0x8026F510
    // 0x8027149C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026F510(rdram, ctx);
        goto after_14;
    // 0x8027149C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x802714A0: b           L_8027179C
    // 0x802714A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8027179C;
    // 0x802714A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802714A8:
    // 0x802714A8: lwc1        $f12, 0x8C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x802714AC: lwc1        $f14, 0xBC($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0XBC);
    // 0x802714B0: jal         0x8027924C
    // 0x802714B4: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    ovl_8024B800_func_8027924C(rdram, ctx);
        goto after_15;
    // 0x802714B4: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    after_15:
    // 0x802714B8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802714BC: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x802714C0: c.eq.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl == ctx->f6.fl;
    // 0x802714C4: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x802714C8: bc1f        L_80271794
    if (!c1cs) {
        // 0x802714CC: nop
    
            goto L_80271794;
    }
    // 0x802714CC: nop

    // 0x802714D0: bne         $a0, $at, L_802714F8
    if (ctx->r4 != ctx->r1) {
        // 0x802714D4: lui         $t1, 0x8012
        ctx->r9 = S32(0X8012 << 16);
            goto L_802714F8;
    }
    // 0x802714D4: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x802714D8: lhu         $t1, 0xB7A($t1)
    ctx->r9 = MEM_HU(ctx->r9, 0XB7A);
    // 0x802714DC: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    // 0x802714E0: slti        $at, $t1, 0x9
    ctx->r1 = SIGNED(ctx->r9) < 0X9 ? 1 : 0;
    // 0x802714E4: beq         $at, $zero, L_802714F4
    if (ctx->r1 == 0) {
        // 0x802714E8: nop
    
            goto L_802714F4;
    }
    // 0x802714E8: nop

    // 0x802714EC: b           L_802714F8
    // 0x802714F0: sh          $zero, 0x22($s0)
    MEM_H(0X22, ctx->r16) = 0;
        goto L_802714F8;
    // 0x802714F0: sh          $zero, 0x22($s0)
    MEM_H(0X22, ctx->r16) = 0;
L_802714F4:
    // 0x802714F4: sh          $t2, 0x22($s0)
    MEM_H(0X22, ctx->r16) = ctx->r10;
L_802714F8:
    // 0x802714F8: jal         0x8026F510
    // 0x802714FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026F510(rdram, ctx);
        goto after_16;
    // 0x802714FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x80271500: b           L_8027179C
    // 0x80271504: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8027179C;
    // 0x80271504: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80271508:
    // 0x80271508: lw          $t3, 0xC8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XC8);
    // 0x8027150C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80271510: lw          $v0, 0x914($t3)
    ctx->r2 = MEM_W(ctx->r11, 0X914);
    // 0x80271514: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    // 0x80271518: lw          $a1, 0x4C($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4C);
    // 0x8027151C: lw          $a2, 0x44($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X44);
    // 0x80271520: jal         0x80272B98
    // 0x80271524: nop

    ovl_8024B800_func_80272B98(rdram, ctx);
        goto after_17;
    // 0x80271524: nop

    after_17:
    // 0x80271528: lwc1        $f12, 0x8C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x8027152C: lwc1        $f14, 0x38($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80271530: jal         0x8027924C
    // 0x80271534: nop

    ovl_8024B800_func_8027924C(rdram, ctx);
        goto after_18;
    // 0x80271534: nop

    after_18:
    // 0x80271538: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8027153C: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x80271540: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x80271544: nop

    // 0x80271548: bc1f        L_80271794
    if (!c1cs) {
        // 0x8027154C: nop
    
            goto L_80271794;
    }
    // 0x8027154C: nop

    // 0x80271550: lhu         $t4, 0xB7A($t4)
    ctx->r12 = MEM_HU(ctx->r12, 0XB7A);
    // 0x80271554: addiu       $t5, $zero, 0x4
    ctx->r13 = ADD32(0, 0X4);
    // 0x80271558: slti        $at, $t4, 0x9
    ctx->r1 = SIGNED(ctx->r12) < 0X9 ? 1 : 0;
    // 0x8027155C: beq         $at, $zero, L_8027156C
    if (ctx->r1 == 0) {
        // 0x80271560: nop
    
            goto L_8027156C;
    }
    // 0x80271560: nop

    // 0x80271564: b           L_80271570
    // 0x80271568: sh          $zero, 0x22($s0)
    MEM_H(0X22, ctx->r16) = 0;
        goto L_80271570;
    // 0x80271568: sh          $zero, 0x22($s0)
    MEM_H(0X22, ctx->r16) = 0;
L_8027156C:
    // 0x8027156C: sh          $t5, 0x22($s0)
    MEM_H(0X22, ctx->r16) = ctx->r13;
L_80271570:
    // 0x80271570: jal         0x8026F510
    // 0x80271574: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026F510(rdram, ctx);
        goto after_19;
    // 0x80271574: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
    // 0x80271578: b           L_8027179C
    // 0x8027157C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8027179C;
    // 0x8027157C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80271580:
    // 0x80271580: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80271584: lw          $v0, 0xB30($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XB30);
    // 0x80271588: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8027158C: lw          $a1, 0x4C($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4C);
    // 0x80271590: lw          $a2, 0x44($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X44);
    // 0x80271594: jal         0x80272B98
    // 0x80271598: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    ovl_8024B800_func_80272B98(rdram, ctx);
        goto after_20;
    // 0x80271598: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    after_20:
    // 0x8027159C: lwc1        $f12, 0x8C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x802715A0: lwc1        $f14, 0x38($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X38);
    // 0x802715A4: jal         0x8027924C
    // 0x802715A8: nop

    ovl_8024B800_func_8027924C(rdram, ctx);
        goto after_21;
    // 0x802715A8: nop

    after_21:
    // 0x802715AC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802715B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802715B4: c.eq.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl == ctx->f8.fl;
    // 0x802715B8: nop

    // 0x802715BC: bc1f        L_80271794
    if (!c1cs) {
        // 0x802715C0: nop
    
            goto L_80271794;
    }
    // 0x802715C0: nop

    // 0x802715C4: jal         0x8026F510
    // 0x802715C8: sh          $zero, 0x22($s0)
    MEM_H(0X22, ctx->r16) = 0;
    ovl_8024B800_func_8026F510(rdram, ctx);
        goto after_22;
    // 0x802715C8: sh          $zero, 0x22($s0)
    MEM_H(0X22, ctx->r16) = 0;
    after_22:
    // 0x802715CC: b           L_8027179C
    // 0x802715D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8027179C;
    // 0x802715D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802715D4:
    // 0x802715D4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x802715D8: lw          $v0, 0xB28($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XB28);
    // 0x802715DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802715E0: lw          $a1, 0x4C($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4C);
    // 0x802715E4: lw          $a2, 0x44($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X44);
    // 0x802715E8: jal         0x80272B98
    // 0x802715EC: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    ovl_8024B800_func_80272B98(rdram, ctx);
        goto after_23;
    // 0x802715EC: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    after_23:
    // 0x802715F0: lwc1        $f12, 0x8C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x802715F4: lwc1        $f14, 0x38($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X38);
    // 0x802715F8: jal         0x8027924C
    // 0x802715FC: nop

    ovl_8024B800_func_8027924C(rdram, ctx);
        goto after_24;
    // 0x802715FC: nop

    after_24:
    // 0x80271600: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80271604: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80271608: c.eq.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl == ctx->f10.fl;
    // 0x8027160C: nop

    // 0x80271610: bc1f        L_80271794
    if (!c1cs) {
        // 0x80271614: nop
    
            goto L_80271794;
    }
    // 0x80271614: nop

    // 0x80271618: jal         0x8026F510
    // 0x8027161C: sh          $zero, 0x22($s0)
    MEM_H(0X22, ctx->r16) = 0;
    ovl_8024B800_func_8026F510(rdram, ctx);
        goto after_25;
    // 0x8027161C: sh          $zero, 0x22($s0)
    MEM_H(0X22, ctx->r16) = 0;
    after_25:
    // 0x80271620: b           L_8027179C
    // 0x80271624: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8027179C;
    // 0x80271624: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80271628:
    // 0x80271628: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8027162C: lw          $v0, 0xB24($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XB24);
    // 0x80271630: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80271634: lw          $a1, 0x4C($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4C);
    // 0x80271638: lw          $a2, 0x44($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X44);
    // 0x8027163C: jal         0x80272B98
    // 0x80271640: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    ovl_8024B800_func_80272B98(rdram, ctx);
        goto after_26;
    // 0x80271640: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    after_26:
    // 0x80271644: lwc1        $f12, 0x8C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x80271648: lwc1        $f14, 0x38($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8027164C: jal         0x8027924C
    // 0x80271650: nop

    ovl_8024B800_func_8027924C(rdram, ctx);
        goto after_27;
    // 0x80271650: nop

    after_27:
    // 0x80271654: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80271658: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x8027165C: c.eq.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl == ctx->f18.fl;
    // 0x80271660: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80271664: bc1f        L_80271794
    if (!c1cs) {
        // 0x80271668: nop
    
            goto L_80271794;
    }
    // 0x80271668: nop

    // 0x8027166C: jal         0x8026F510
    // 0x80271670: sh          $t6, 0x22($s0)
    MEM_H(0X22, ctx->r16) = ctx->r14;
    ovl_8024B800_func_8026F510(rdram, ctx);
        goto after_28;
    // 0x80271670: sh          $t6, 0x22($s0)
    MEM_H(0X22, ctx->r16) = ctx->r14;
    after_28:
    // 0x80271674: b           L_8027179C
    // 0x80271678: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8027179C;
    // 0x80271678: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8027167C:
    // 0x8027167C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80271680: lwc1        $f16, 0x88($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X88);
    // 0x80271684: lwc1        $f5, -0x26B8($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X26B8);
    // 0x80271688: lwc1        $f4, -0x26B4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X26B4);
    // 0x8027168C: cvt.d.s     $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f6.d = CVT_D_S(ctx->f16.fl);
    // 0x80271690: add.d       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f4.d); 
    ctx->f8.d = ctx->f6.d + ctx->f4.d;
    // 0x80271694: lwc1        $f12, 0x8C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x80271698: jal         0x8027924C
    // 0x8027169C: cvt.s.d     $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f14.fl = CVT_S_D(ctx->f8.d);
    ovl_8024B800_func_8027924C(rdram, ctx);
        goto after_29;
    // 0x8027169C: cvt.s.d     $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f14.fl = CVT_S_D(ctx->f8.d);
    after_29:
    // 0x802716A0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802716A4: nop

    // 0x802716A8: c.eq.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl == ctx->f10.fl;
    // 0x802716AC: nop

    // 0x802716B0: bc1f        L_80271794
    if (!c1cs) {
        // 0x802716B4: nop
    
            goto L_80271794;
    }
    // 0x802716B4: nop

    // 0x802716B8: jal         0x8026F510
    // 0x802716BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026F510(rdram, ctx);
        goto after_30;
    // 0x802716BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_30:
    // 0x802716C0: b           L_8027179C
    // 0x802716C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8027179C;
    // 0x802716C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802716C8:
    // 0x802716C8: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x802716CC: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x802716D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802716D4: lh          $t7, 0xE8($v0)
    ctx->r15 = MEM_H(ctx->r2, 0XE8);
    // 0x802716D8: lh          $t9, 0xEA($v0)
    ctx->r25 = MEM_H(ctx->r2, 0XEA);
    // 0x802716DC: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x802716E0: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x802716E4: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x802716E8: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    // 0x802716EC: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x802716F0: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x802716F4: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x802716F8: jal         0x80272B98
    // 0x802716FC: nop

    ovl_8024B800_func_80272B98(rdram, ctx);
        goto after_31;
    // 0x802716FC: nop

    after_31:
    // 0x80271700: lwc1        $f12, 0x8C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x80271704: lwc1        $f14, 0x38($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80271708: jal         0x8027924C
    // 0x8027170C: nop

    ovl_8024B800_func_8027924C(rdram, ctx);
        goto after_32;
    // 0x8027170C: nop

    after_32:
    // 0x80271710: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80271714: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80271718: c.eq.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl == ctx->f6.fl;
    // 0x8027171C: nop

    // 0x80271720: bc1f        L_80271794
    if (!c1cs) {
        // 0x80271724: nop
    
            goto L_80271794;
    }
    // 0x80271724: nop

    // 0x80271728: jal         0x8026F510
    // 0x8027172C: sh          $zero, 0x22($s0)
    MEM_H(0X22, ctx->r16) = 0;
    ovl_8024B800_func_8026F510(rdram, ctx);
        goto after_33;
    // 0x8027172C: sh          $zero, 0x22($s0)
    MEM_H(0X22, ctx->r16) = 0;
    after_33:
    // 0x80271730: b           L_8027179C
    // 0x80271734: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8027179C;
    // 0x80271734: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80271738:
    // 0x80271738: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x8027173C: lhu         $t8, 0xB6E($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0XB6E);
    // 0x80271740: nop

    // 0x80271744: andi        $t0, $t8, 0x2
    ctx->r8 = ctx->r24 & 0X2;
    // 0x80271748: bne         $t0, $zero, L_80271794
    if (ctx->r8 != 0) {
        // 0x8027174C: nop
    
            goto L_80271794;
    }
    // 0x8027174C: nop

    // 0x80271750: jal         0x8026F510
    // 0x80271754: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8024B800_func_8026F510(rdram, ctx);
        goto after_34;
    // 0x80271754: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_34:
    // 0x80271758: b           L_8027179C
    // 0x8027175C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8027179C;
    // 0x8027175C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80271760:
    // 0x80271760: lhu         $t1, 0x12($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X12);
    // 0x80271764: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80271768: andi        $t2, $t1, 0x2
    ctx->r10 = ctx->r9 & 0X2;
    // 0x8027176C: bne         $t2, $zero, L_80271794
    if (ctx->r10 != 0) {
        // 0x80271770: or          $a1, $a2, $zero
        ctx->r5 = ctx->r6 | 0;
            goto L_80271794;
    }
    // 0x80271770: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x80271774: andi        $t3, $a1, 0xFF
    ctx->r11 = ctx->r5 & 0XFF;
    // 0x80271778: jal         0x8024BC08
    // 0x8027177C: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    ovl_8024B800_func_8024BC08(rdram, ctx);
        goto after_35;
    // 0x8027177C: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    after_35:
    // 0x80271780: lhu         $t4, 0x18($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X18);
    // 0x80271784: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80271788: ori         $t5, $t4, 0x10
    ctx->r13 = ctx->r12 | 0X10;
    // 0x8027178C: jal         0x8026F510
    // 0x80271790: sh          $t5, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r13;
    ovl_8024B800_func_8026F510(rdram, ctx);
        goto after_36;
    // 0x80271790: sh          $t5, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r13;
    after_36:
L_80271794:
    // 0x80271794: b           L_8027179C
    // 0x80271798: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8027179C;
    // 0x80271798: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8027179C:
    // 0x8027179C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802717A0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802717A4: jr          $ra
    // 0x802717A8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x802717A8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x802717AC: nop

;}
RECOMP_FUNC void ovl_8024B800_func_802717B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802717B0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x802717B4: addiu       $v0, $v0, -0x17C8
    ctx->r2 = ADD32(ctx->r2, -0X17C8);
    // 0x802717B8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x802717BC: addiu       $a1, $zero, 0x1C
    ctx->r5 = ADD32(0, 0X1C);
L_802717C0:
    // 0x802717C0: lhu         $t6, 0xC($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0XC);
    // 0x802717C4: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x802717C8: beq         $t6, $zero, L_802717F0
    if (ctx->r14 == 0) {
        // 0x802717CC: nop
    
            goto L_802717F0;
    }
    // 0x802717CC: nop

    // 0x802717D0: lw          $t7, 0xCC($v0)
    ctx->r15 = MEM_W(ctx->r2, 0XCC);
    // 0x802717D4: nop

    // 0x802717D8: lw          $a0, 0x30($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X30);
    // 0x802717DC: nop

    // 0x802717E0: lhu         $t8, 0x3C($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X3C);
    // 0x802717E4: nop

    // 0x802717E8: ori         $t9, $t8, 0x4000
    ctx->r25 = ctx->r24 | 0X4000;
    // 0x802717EC: sh          $t9, 0x3C($a0)
    MEM_H(0X3C, ctx->r4) = ctx->r25;
L_802717F0:
    // 0x802717F0: lhu         $t0, 0x104($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X104);
    // 0x802717F4: addiu       $v0, $v0, 0xF8
    ctx->r2 = ADD32(ctx->r2, 0XF8);
    // 0x802717F8: beq         $t0, $zero, L_80271820
    if (ctx->r8 == 0) {
        // 0x802717FC: nop
    
            goto L_80271820;
    }
    // 0x802717FC: nop

    // 0x80271800: lw          $t1, 0xCC($v0)
    ctx->r9 = MEM_W(ctx->r2, 0XCC);
    // 0x80271804: nop

    // 0x80271808: lw          $a0, 0x30($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X30);
    // 0x8027180C: nop

    // 0x80271810: lhu         $t2, 0x3C($a0)
    ctx->r10 = MEM_HU(ctx->r4, 0X3C);
    // 0x80271814: nop

    // 0x80271818: ori         $t3, $t2, 0x4000
    ctx->r11 = ctx->r10 | 0X4000;
    // 0x8027181C: sh          $t3, 0x3C($a0)
    MEM_H(0X3C, ctx->r4) = ctx->r11;
L_80271820:
    // 0x80271820: lhu         $t4, 0x104($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X104);
    // 0x80271824: addiu       $v0, $v0, 0xF8
    ctx->r2 = ADD32(ctx->r2, 0XF8);
    // 0x80271828: beq         $t4, $zero, L_80271850
    if (ctx->r12 == 0) {
        // 0x8027182C: nop
    
            goto L_80271850;
    }
    // 0x8027182C: nop

    // 0x80271830: lw          $t5, 0xCC($v0)
    ctx->r13 = MEM_W(ctx->r2, 0XCC);
    // 0x80271834: nop

    // 0x80271838: lw          $a0, 0x30($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X30);
    // 0x8027183C: nop

    // 0x80271840: lhu         $t6, 0x3C($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X3C);
    // 0x80271844: nop

    // 0x80271848: ori         $t7, $t6, 0x4000
    ctx->r15 = ctx->r14 | 0X4000;
    // 0x8027184C: sh          $t7, 0x3C($a0)
    MEM_H(0X3C, ctx->r4) = ctx->r15;
L_80271850:
    // 0x80271850: lhu         $t8, 0x104($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X104);
    // 0x80271854: addiu       $v0, $v0, 0xF8
    ctx->r2 = ADD32(ctx->r2, 0XF8);
    // 0x80271858: beq         $t8, $zero, L_80271880
    if (ctx->r24 == 0) {
        // 0x8027185C: nop
    
            goto L_80271880;
    }
    // 0x8027185C: nop

    // 0x80271860: lw          $t9, 0xCC($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XCC);
    // 0x80271864: nop

    // 0x80271868: lw          $a0, 0x30($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X30);
    // 0x8027186C: nop

    // 0x80271870: lhu         $t0, 0x3C($a0)
    ctx->r8 = MEM_HU(ctx->r4, 0X3C);
    // 0x80271874: nop

    // 0x80271878: ori         $t1, $t0, 0x4000
    ctx->r9 = ctx->r8 | 0X4000;
    // 0x8027187C: sh          $t1, 0x3C($a0)
    MEM_H(0X3C, ctx->r4) = ctx->r9;
L_80271880:
    // 0x80271880: bne         $v1, $a1, L_802717C0
    if (ctx->r3 != ctx->r5) {
        // 0x80271884: addiu       $v0, $v0, 0xF8
        ctx->r2 = ADD32(ctx->r2, 0XF8);
            goto L_802717C0;
    }
    // 0x80271884: addiu       $v0, $v0, 0xF8
    ctx->r2 = ADD32(ctx->r2, 0XF8);
    // 0x80271888: jr          $ra
    // 0x8027188C: nop

    return;
    // 0x8027188C: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80271890(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80271890: lwc1        $f4, 0x44($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X44);
    // 0x80271894: lwc1        $f6, 0x44($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X44);
    // 0x80271898: lw          $t7, 0xC8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XC8);
    // 0x8027189C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x802718A0: lhu         $t8, 0x8($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X8);
    // 0x802718A4: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x802718A8: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x802718AC: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x802718B0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802718B4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802718B8: nop

    // 0x802718BC: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x802718C0: mfc1        $v1, $f10
    ctx->r3 = (int32_t)ctx->f10.u32l;
    // 0x802718C4: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x802718C8: bne         $t9, $zero, L_802718D4
    if (ctx->r25 != 0) {
        // 0x802718CC: nop
    
            goto L_802718D4;
    }
    // 0x802718CC: nop

    // 0x802718D0: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
L_802718D4:
    // 0x802718D4: jr          $ra
    // 0x802718D8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x802718D8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_8024B800_func_802718DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802718DC: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x802718E0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x802718E4: lhu         $t6, 0xC($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0XC);
    // 0x802718E8: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x802718EC: beq         $t6, $zero, L_802718F8
    if (ctx->r14 == 0) {
        // 0x802718F0: addiu       $a1, $zero, 0xB
        ctx->r5 = ADD32(0, 0XB);
            goto L_802718F8;
    }
    // 0x802718F0: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x802718F4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_802718F8:
    // 0x802718F8: lhu         $t7, 0x104($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X104);
    // 0x802718FC: addiu       $v0, $v0, 0xF8
    ctx->r2 = ADD32(ctx->r2, 0XF8);
    // 0x80271900: beq         $t7, $zero, L_8027190C
    if (ctx->r15 == 0) {
        // 0x80271904: nop
    
            goto L_8027190C;
    }
    // 0x80271904: nop

    // 0x80271908: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_8027190C:
    // 0x8027190C: lhu         $t8, 0x104($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X104);
    // 0x80271910: addiu       $v0, $v0, 0xF8
    ctx->r2 = ADD32(ctx->r2, 0XF8);
    // 0x80271914: beq         $t8, $zero, L_80271920
    if (ctx->r24 == 0) {
        // 0x80271918: addiu       $v0, $v0, 0xF8
        ctx->r2 = ADD32(ctx->r2, 0XF8);
            goto L_80271920;
    }
    // 0x80271918: addiu       $v0, $v0, 0xF8
    ctx->r2 = ADD32(ctx->r2, 0XF8);
    // 0x8027191C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_80271920:
    // 0x80271920: lhu         $t9, 0xC($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0XC);
    // 0x80271924: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x80271928: beq         $t9, $zero, L_80271934
    if (ctx->r25 == 0) {
        // 0x8027192C: nop
    
            goto L_80271934;
    }
    // 0x8027192C: nop

    // 0x80271930: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_80271934:
    // 0x80271934: lhu         $t0, 0x104($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X104);
    // 0x80271938: addiu       $v0, $v0, 0xF8
    ctx->r2 = ADD32(ctx->r2, 0XF8);
    // 0x8027193C: beq         $t0, $zero, L_80271948
    if (ctx->r8 == 0) {
        // 0x80271940: nop
    
            goto L_80271948;
    }
    // 0x80271940: nop

    // 0x80271944: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_80271948:
    // 0x80271948: lhu         $t1, 0x104($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X104);
    // 0x8027194C: addiu       $v0, $v0, 0xF8
    ctx->r2 = ADD32(ctx->r2, 0XF8);
    // 0x80271950: beq         $t1, $zero, L_8027195C
    if (ctx->r9 == 0) {
        // 0x80271954: nop
    
            goto L_8027195C;
    }
    // 0x80271954: nop

    // 0x80271958: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_8027195C:
    // 0x8027195C: lhu         $t2, 0x104($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X104);
    // 0x80271960: addiu       $v0, $v0, 0xF8
    ctx->r2 = ADD32(ctx->r2, 0XF8);
    // 0x80271964: beq         $t2, $zero, L_80271970
    if (ctx->r10 == 0) {
        // 0x80271968: nop
    
            goto L_80271970;
    }
    // 0x80271968: nop

    // 0x8027196C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_80271970:
    // 0x80271970: bne         $a0, $a1, L_80271920
    if (ctx->r4 != ctx->r5) {
        // 0x80271974: addiu       $v0, $v0, 0xF8
        ctx->r2 = ADD32(ctx->r2, 0XF8);
            goto L_80271920;
    }
    // 0x80271974: addiu       $v0, $v0, 0xF8
    ctx->r2 = ADD32(ctx->r2, 0XF8);
    // 0x80271978: jr          $ra
    // 0x8027197C: andi        $v0, $v1, 0xFFFF
    ctx->r2 = ctx->r3 & 0XFFFF;
    return;
    // 0x8027197C: andi        $v0, $v1, 0xFFFF
    ctx->r2 = ctx->r3 & 0XFFFF;
;}
RECOMP_FUNC void ovl_8024B800_func_80271980(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80271980: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80271984: lbu         $t6, -0x32A4($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X32A4);
    // 0x80271988: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027198C: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x80271990: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80271994: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80271998: bne         $t6, $at, L_802719A8
    if (ctx->r14 != ctx->r1) {
        // 0x8027199C: andi        $a1, $a0, 0xFFFF
        ctx->r5 = ctx->r4 & 0XFFFF;
            goto L_802719A8;
    }
    // 0x8027199C: andi        $a1, $a0, 0xFFFF
    ctx->r5 = ctx->r4 & 0XFFFF;
    // 0x802719A0: b           L_802719AC
    // 0x802719A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802719AC;
    // 0x802719A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802719A8:
    // 0x802719A8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802719AC:
    // 0x802719AC: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x802719B0: sll         $t8, $v0, 1
    ctx->r24 = S32(ctx->r2 << 1);
    // 0x802719B4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x802719B8: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x802719BC: addu        $a0, $a0, $t9
    ctx->r4 = ADD32(ctx->r4, ctx->r25);
    // 0x802719C0: lhu         $a0, -0x2270($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X2270);
    // 0x802719C4: jal         0x802719DC
    // 0x802719C8: nop

    ovl_8024B800_func_802719DC(rdram, ctx);
        goto after_0;
    // 0x802719C8: nop

    after_0:
    // 0x802719CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802719D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802719D4: jr          $ra
    // 0x802719D8: nop

    return;
    // 0x802719D8: nop

;}
RECOMP_FUNC void ovl_8024B800_func_802719DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802719DC: lui         $t7, 0x8010
    ctx->r15 = S32(0X8010 << 16);
    // 0x802719E0: lbu         $t7, 0x522C($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X522C);
    // 0x802719E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802719E8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802719EC: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x802719F0: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x802719F4: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x802719F8: beq         $t7, $at, L_80271A08
    if (ctx->r15 == ctx->r1) {
        // 0x802719FC: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80271A08;
    }
    // 0x802719FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80271A00: jal         0x80015BC0
    // 0x80271A04: nop

    func_80015BC0(rdram, ctx);
        goto after_0;
    // 0x80271A04: nop

    after_0:
L_80271A08:
    // 0x80271A08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80271A0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80271A10: jr          $ra
    // 0x80271A14: nop

    return;
    // 0x80271A14: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80271A18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80271A18: lw          $v1, 0xD8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XD8);
    // 0x80271A1C: nop

    // 0x80271A20: lbu         $t6, 0x1D($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X1D);
    // 0x80271A24: nop

    // 0x80271A28: andi        $t7, $t6, 0xE0
    ctx->r15 = ctx->r14 & 0XE0;
    // 0x80271A2C: beq         $t7, $zero, L_80271A3C
    if (ctx->r15 == 0) {
        // 0x80271A30: nop
    
            goto L_80271A3C;
    }
    // 0x80271A30: nop

    // 0x80271A34: jr          $ra
    // 0x80271A38: addiu       $v0, $zero, -0x14
    ctx->r2 = ADD32(0, -0X14);
    return;
    // 0x80271A38: addiu       $v0, $zero, -0x14
    ctx->r2 = ADD32(0, -0X14);
L_80271A3C:
    // 0x80271A3C: lbu         $t8, 0x19($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X19);
    // 0x80271A40: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x80271A44: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x80271A48: addu        $v0, $v0, $t9
    ctx->r2 = ADD32(ctx->r2, ctx->r25);
    // 0x80271A4C: lh          $v0, -0x2588($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X2588);
    // 0x80271A50: nop

    // 0x80271A54: jr          $ra
    // 0x80271A58: nop

    return;
    // 0x80271A58: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80271A5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80271A5C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80271A60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80271A64: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80271A68: lhu         $t6, 0x1A($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X1A);
    // 0x80271A6C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80271A70: slti        $at, $t6, 0xB
    ctx->r1 = SIGNED(ctx->r14) < 0XB ? 1 : 0;
    // 0x80271A74: bne         $at, $zero, L_80271A90
    if (ctx->r1 != 0) {
        // 0x80271A78: lui         $t4, 0x8028
        ctx->r12 = S32(0X8028 << 16);
            goto L_80271A90;
    }
    // 0x80271A78: lui         $t4, 0x8028
    ctx->r12 = S32(0X8028 << 16);
    // 0x80271A7C: lhu         $a1, 0x1E($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X1E);
    // 0x80271A80: jal         0x80272D3C
    // 0x80271A84: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_8024B800_func_80272D3C(rdram, ctx);
        goto after_0;
    // 0x80271A84: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80271A88: b           L_80271BD4
    // 0x80271A8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80271BD4;
    // 0x80271A8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80271A90:
    // 0x80271A90: lw          $t7, 0xCC($a3)
    ctx->r15 = MEM_W(ctx->r7, 0XCC);
    // 0x80271A94: lhu         $t6, 0x1E($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X1E);
    // 0x80271A98: lw          $t0, 0x30($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X30);
    // 0x80271A9C: addiu       $t4, $t4, -0x257C
    ctx->r12 = ADD32(ctx->r12, -0X257C);
    // 0x80271AA0: lhu         $a0, 0x1C($t0)
    ctx->r4 = MEM_HU(ctx->r8, 0X1C);
    // 0x80271AA4: lui         $v0, 0x802B
    ctx->r2 = S32(0X802B << 16);
    // 0x80271AA8: sll         $t8, $a0, 1
    ctx->r24 = S32(ctx->r4 << 1);
    // 0x80271AAC: addu        $t9, $t4, $t8
    ctx->r25 = ADD32(ctx->r12, ctx->r24);
    // 0x80271AB0: lhu         $t2, 0x0($t9)
    ctx->r10 = MEM_HU(ctx->r25, 0X0);
    // 0x80271AB4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80271AB8: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    // 0x80271ABC: andi        $t5, $t2, 0xFF
    ctx->r13 = ctx->r10 & 0XFF;
    // 0x80271AC0: lw          $v0, 0x5F10($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X5F10);
    // 0x80271AC4: lhu         $t1, 0x1E($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X1E);
    // 0x80271AC8: or          $t2, $t5, $zero
    ctx->r10 = ctx->r13 | 0;
    // 0x80271ACC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80271AD0: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
L_80271AD4:
    // 0x80271AD4: lhu         $t8, 0x0($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X0);
    // 0x80271AD8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80271ADC: bne         $a0, $t8, L_80271AF8
    if (ctx->r4 != ctx->r24) {
        // 0x80271AE0: nop
    
            goto L_80271AF8;
    }
    // 0x80271AE0: nop

    // 0x80271AE4: lw          $t3, 0x4($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X4);
    // 0x80271AE8: nop

    // 0x80271AEC: srl         $t9, $t3, 16
    ctx->r25 = S32(U32(ctx->r11) >> 16);
    // 0x80271AF0: b           L_80271B00
    // 0x80271AF4: andi        $t3, $t9, 0xFFFF
    ctx->r11 = ctx->r25 & 0XFFFF;
        goto L_80271B00;
    // 0x80271AF4: andi        $t3, $t9, 0xFFFF
    ctx->r11 = ctx->r25 & 0XFFFF;
L_80271AF8:
    // 0x80271AF8: b           L_80271AD4
    // 0x80271AFC: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
        goto L_80271AD4;
    // 0x80271AFC: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
L_80271B00:
    // 0x80271B00: sll         $t6, $t3, 1
    ctx->r14 = S32(ctx->r11 << 1);
    // 0x80271B04: addu        $t7, $t4, $t6
    ctx->r15 = ADD32(ctx->r12, ctx->r14);
    // 0x80271B08: lhu         $a1, 0x0($t7)
    ctx->r5 = MEM_HU(ctx->r15, 0X0);
    // 0x80271B0C: addiu       $t9, $t1, 0x2
    ctx->r25 = ADD32(ctx->r9, 0X2);
    // 0x80271B10: andi        $t8, $a1, 0xFF
    ctx->r24 = ctx->r5 & 0XFF;
    // 0x80271B14: multu       $t9, $t8
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80271B18: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x80271B1C: addiu       $a0, $a1, -0x2
    ctx->r4 = ADD32(ctx->r5, -0X2);
    // 0x80271B20: mflo        $t5
    ctx->r13 = lo;
    // 0x80271B24: nop

    // 0x80271B28: nop

    // 0x80271B2C: divu        $zero, $t5, $t2
    lo = S32(U32(ctx->r13) / U32(ctx->r10)); hi = S32(U32(ctx->r13) % U32(ctx->r10));
    // 0x80271B30: bne         $t2, $zero, L_80271B3C
    if (ctx->r10 != 0) {
        // 0x80271B34: nop
    
            goto L_80271B3C;
    }
    // 0x80271B34: nop

    // 0x80271B38: break       7
    do_break(2150046520);
L_80271B3C:
    // 0x80271B3C: srl         $t5, $a1, 1
    ctx->r13 = S32(U32(ctx->r5) >> 1);
    // 0x80271B40: mflo        $a2
    ctx->r6 = lo;
    // 0x80271B44: sltu        $at, $a2, $a0
    ctx->r1 = ctx->r6 < ctx->r4 ? 1 : 0;
    // 0x80271B48: bne         $at, $zero, L_80271B54
    if (ctx->r1 != 0) {
        // 0x80271B4C: or          $v0, $a2, $zero
        ctx->r2 = ctx->r6 | 0;
            goto L_80271B54;
    }
    // 0x80271B4C: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x80271B50: subu        $v0, $a2, $a0
    ctx->r2 = SUB32(ctx->r6, ctx->r4);
L_80271B54:
    // 0x80271B54: lhu         $t6, 0x2($t0)
    ctx->r14 = MEM_HU(ctx->r8, 0X2);
    // 0x80271B58: lhu         $t7, 0x3C($t0)
    ctx->r15 = MEM_HU(ctx->r8, 0X3C);
    // 0x80271B5C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80271B60: xor         $t8, $t6, $t7
    ctx->r24 = ctx->r14 ^ ctx->r15;
    // 0x80271B64: andi        $t9, $t8, 0x8000
    ctx->r25 = ctx->r24 & 0X8000;
    // 0x80271B68: beq         $t9, $zero, L_80271B84
    if (ctx->r25 == 0) {
        // 0x80271B6C: addiu       $t6, $zero, 0x9
        ctx->r14 = ADD32(0, 0X9);
            goto L_80271B84;
    }
    // 0x80271B6C: addiu       $t6, $zero, 0x9
    ctx->r14 = ADD32(0, 0X9);
    // 0x80271B70: addu        $v0, $v0, $t5
    ctx->r2 = ADD32(ctx->r2, ctx->r13);
    // 0x80271B74: sltu        $at, $v0, $a0
    ctx->r1 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x80271B78: bne         $at, $zero, L_80271B84
    if (ctx->r1 != 0) {
        // 0x80271B7C: nop
    
            goto L_80271B84;
    }
    // 0x80271B7C: nop

    // 0x80271B80: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
L_80271B84:
    // 0x80271B84: lw          $t7, 0xE0($a3)
    ctx->r15 = MEM_W(ctx->r7, 0XE0);
    // 0x80271B88: sll         $t8, $t3, 16
    ctx->r24 = S32(ctx->r11 << 16);
    // 0x80271B8C: sh          $t6, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r14;
    // 0x80271B90: lw          $t6, 0xE0($a3)
    ctx->r14 = MEM_W(ctx->r7, 0XE0);
    // 0x80271B94: andi        $t9, $v0, 0xFFFF
    ctx->r25 = ctx->r2 & 0XFFFF;
    // 0x80271B98: addu        $t5, $t8, $t9
    ctx->r13 = ADD32(ctx->r24, ctx->r25);
    // 0x80271B9C: sw          $t5, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r13;
    // 0x80271BA0: lw          $t8, 0xE0($a3)
    ctx->r24 = MEM_W(ctx->r7, 0XE0);
    // 0x80271BA4: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x80271BA8: sh          $t7, 0x8($t8)
    MEM_H(0X8, ctx->r24) = ctx->r15;
    // 0x80271BAC: lhu         $t9, 0x1E($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X1E);
    // 0x80271BB0: lw          $t8, 0xE0($a3)
    ctx->r24 = MEM_W(ctx->r7, 0XE0);
    // 0x80271BB4: andi        $t6, $v1, 0xFFFF
    ctx->r14 = ctx->r3 & 0XFFFF;
    // 0x80271BB8: sll         $t5, $t9, 16
    ctx->r13 = S32(ctx->r25 << 16);
    // 0x80271BBC: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x80271BC0: sw          $t7, 0xC($t8)
    MEM_W(0XC, ctx->r24) = ctx->r15;
    // 0x80271BC4: lhu         $a1, 0x3E($a3)
    ctx->r5 = MEM_HU(ctx->r7, 0X3E);
    // 0x80271BC8: jal         0x80272D3C
    // 0x80271BCC: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    ovl_8024B800_func_80272D3C(rdram, ctx);
        goto after_1;
    // 0x80271BCC: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_1:
    // 0x80271BD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80271BD4:
    // 0x80271BD4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80271BD8: jr          $ra
    // 0x80271BDC: nop

    return;
    // 0x80271BDC: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80271BE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80271BE0: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x80271BE4: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x80271BE8: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x80271BEC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80271BF0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80271BF4: addiu       $t6, $v0, 0x7FFF
    ctx->r14 = ADD32(ctx->r2, 0X7FFF);
    // 0x80271BF8: lbu         $t6, 0x9A3($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X9A3);
    // 0x80271BFC: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80271C00: bne         $t6, $at, L_80271F5C
    if (ctx->r14 != ctx->r1) {
        // 0x80271C04: or          $s0, $a0, $zero
        ctx->r16 = ctx->r4 | 0;
            goto L_80271F5C;
    }
    // 0x80271C04: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80271C08: addiu       $t7, $v0, 0x7FFF
    ctx->r15 = ADD32(ctx->r2, 0X7FFF);
    // 0x80271C0C: lui         $t8, 0x8028
    ctx->r24 = S32(0X8028 << 16);
    // 0x80271C10: lhu         $t8, -0x230C($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X230C);
    // 0x80271C14: lhu         $t7, 0x999($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0X999);
    // 0x80271C18: addiu       $t9, $v0, 0x7FFF
    ctx->r25 = ADD32(ctx->r2, 0X7FFF);
    // 0x80271C1C: beq         $t7, $t8, L_80271D24
    if (ctx->r15 == ctx->r24) {
        // 0x80271C20: nop
    
            goto L_80271D24;
    }
    // 0x80271C20: nop

    // 0x80271C24: lhu         $t9, 0x99B($t9)
    ctx->r25 = MEM_HU(ctx->r25, 0X99B);
    // 0x80271C28: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80271C2C: sh          $t9, -0x230C($at)
    MEM_H(-0X230C, ctx->r1) = ctx->r25;
    // 0x80271C30: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x80271C34: lwc1        $f4, 0x6978($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6978);
    // 0x80271C38: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x80271C3C: lwc1        $f6, 0x696C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X696C);
    // 0x80271C40: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x80271C44: lwc1        $f8, 0x697C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X697C);
    // 0x80271C48: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x80271C4C: lwc1        $f10, 0x6970($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X6970);
    // 0x80271C50: sub.s       $f18, $f4, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80271C54: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x80271C58: sub.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80271C5C: lwc1        $f4, 0x6980($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6980);
    // 0x80271C60: mul.s       $f8, $f18, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x80271C64: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x80271C68: lwc1        $f6, 0x6974($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X6974);
    // 0x80271C6C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80271C70: mul.s       $f10, $f0, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x80271C74: sub.s       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80271C78: swc1        $f0, -0x1A40($at)
    MEM_W(-0X1A40, ctx->r1) = ctx->f0.u32l;
    // 0x80271C7C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80271C80: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x80271C84: swc1        $f2, -0x1A3C($at)
    MEM_W(-0X1A3C, ctx->r1) = ctx->f2.u32l;
    // 0x80271C88: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80271C8C: swc1        $f18, -0x1A44($at)
    MEM_W(-0X1A44, ctx->r1) = ctx->f18.u32l;
    // 0x80271C90: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80271C94: jal         0x8007FA40
    // 0x80271C98: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    func_8007FA40(rdram, ctx);
        goto after_0;
    // 0x80271C98: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    after_0:
    // 0x80271C9C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80271CA0: swc1        $f0, -0x1A38($at)
    MEM_W(-0X1A38, ctx->r1) = ctx->f0.u32l;
    // 0x80271CA4: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x80271CA8: lwc1        $f8, 0x699C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X699C);
    // 0x80271CAC: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80271CB0: lwc1        $f5, -0x1F20($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X1F20);
    // 0x80271CB4: lwc1        $f4, -0x1F1C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1F1C);
    // 0x80271CB8: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80271CBC: mul.d       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f10.d, ctx->f4.d);
    // 0x80271CC0: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    // 0x80271CC4: jal         0x80080E80
    // 0x80271CC8: swc1        $f12, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f12.u32l;
    func_80080E80(rdram, ctx);
        goto after_1;
    // 0x80271CC8: swc1        $f12, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f12.u32l;
    after_1:
    // 0x80271CCC: lwc1        $f12, 0x5C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80271CD0: jal         0x80081040
    // 0x80271CD4: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    func_80081040(rdram, ctx);
        goto after_2;
    // 0x80271CD4: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x80271CD8: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80271CDC: lwc1        $f8, -0x1A38($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1A38);
    // 0x80271CE0: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80271CE4: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x80271CE8: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80271CEC: lwc1        $f6, 0x69A0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X69A0);
    // 0x80271CF0: div.s       $f2, $f4, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x80271CF4: mul.s       $f14, $f6, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x80271CF8: nop

    // 0x80271CFC: mul.s       $f8, $f2, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x80271D00: nop

    // 0x80271D04: mul.s       $f10, $f14, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x80271D08: jal         0x8007FA40
    // 0x80271D0C: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    func_8007FA40(rdram, ctx);
        goto after_3;
    // 0x80271D0C: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    after_3:
    // 0x80271D10: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x80271D14: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80271D18: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80271D1C: add.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x80271D20: swc1        $f6, -0x1A34($at)
    MEM_W(-0X1A34, ctx->r1) = ctx->f6.u32l;
L_80271D24:
    // 0x80271D24: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x80271D28: lwc1        $f10, 0x696C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X696C);
    // 0x80271D2C: lwc1        $f8, 0x44($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X44);
    // 0x80271D30: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x80271D34: lwc1        $f6, 0x6970($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X6970);
    // 0x80271D38: lwc1        $f4, 0x48($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X48);
    // 0x80271D3C: sub.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80271D40: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x80271D44: sub.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80271D48: lwc1        $f10, 0x6974($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X6974);
    // 0x80271D4C: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x80271D50: lwc1        $f8, 0x4C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x80271D54: swc1        $f14, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f14.u32l;
    // 0x80271D58: swc1        $f2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f2.u32l;
    // 0x80271D5C: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x80271D60: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80271D64: swc1        $f16, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f16.u32l;
    // 0x80271D68: mul.s       $f10, $f16, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x80271D6C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80271D70: jal         0x8007FA40
    // 0x80271D74: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    func_8007FA40(rdram, ctx);
        goto after_4;
    // 0x80271D74: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    after_4:
    // 0x80271D78: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80271D7C: lwc1        $f18, -0x1A44($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X1A44);
    // 0x80271D80: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80271D84: lwc1        $f2, 0x58($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80271D88: lwc1        $f5, -0x1F18($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X1F18);
    // 0x80271D8C: lwc1        $f4, -0x1F14($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1F14);
    // 0x80271D90: mul.s       $f6, $f2, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f18.fl);
    // 0x80271D94: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80271D98: lwc1        $f14, 0x54($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80271D9C: lwc1        $f8, -0x1A40($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1A40);
    // 0x80271DA0: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80271DA4: mul.s       $f10, $f14, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f8.fl);
    // 0x80271DA8: lwc1        $f16, 0x50($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80271DAC: addiu       $a1, $s0, 0x94
    ctx->r5 = ADD32(ctx->r16, 0X94);
    // 0x80271DB0: addiu       $a2, $s0, 0x98
    ctx->r6 = ADD32(ctx->r16, 0X98);
    // 0x80271DB4: add.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x80271DB8: lwc1        $f6, -0x1A3C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1A3C);
    // 0x80271DBC: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80271DC0: mul.s       $f10, $f16, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f6.fl);
    // 0x80271DC4: addiu       $t0, $sp, 0x3C
    ctx->r8 = ADD32(ctx->r29, 0X3C);
    // 0x80271DC8: add.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80271DCC: lwc1        $f8, -0x1A38($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1A38);
    // 0x80271DD0: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x80271DD4: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x80271DD8: nop

    // 0x80271DDC: div.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80271DE0: cvt.d.s     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f6.d = CVT_D_S(ctx->f8.fl);
    // 0x80271DE4: c.lt.d      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.d < ctx->f6.d;
    // 0x80271DE8: nop

    // 0x80271DEC: bc1f        L_80271E08
    if (!c1cs) {
        // 0x80271DF0: nop
    
            goto L_80271E08;
    }
    // 0x80271DF0: nop

    // 0x80271DF4: lw          $a0, 0xCC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XCC);
    // 0x80271DF8: jal         0x8000460C
    // 0x80271DFC: addiu       $a3, $sp, 0x44
    ctx->r7 = ADD32(ctx->r29, 0X44);
    func_8000460C(rdram, ctx);
        goto after_5;
    // 0x80271DFC: addiu       $a3, $sp, 0x44
    ctx->r7 = ADD32(ctx->r29, 0X44);
    after_5:
    // 0x80271E00: b           L_80271E90
    // 0x80271E04: lwc1        $f12, 0x94($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X94);
        goto L_80271E90;
    // 0x80271E04: lwc1        $f12, 0x94($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X94);
L_80271E08:
    // 0x80271E08: lwc1        $f12, 0x6980($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X6980);
    // 0x80271E0C: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x80271E10: lwc1        $f14, 0x6978($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X6978);
    // 0x80271E14: lw          $a2, 0x4C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X4C);
    // 0x80271E18: lw          $a3, 0x44($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X44);
    // 0x80271E1C: jal         0x80272B1C
    // 0x80271E20: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    ovl_8024B800_func_80272B1C(rdram, ctx);
        goto after_6;
    // 0x80271E20: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_6:
    // 0x80271E24: lwc1        $f12, 0x3C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80271E28: jal         0x80081040
    // 0x80271E2C: nop

    func_80081040(rdram, ctx);
        goto after_7;
    // 0x80271E2C: nop

    after_7:
    // 0x80271E30: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80271E34: lwc1        $f10, -0x1A34($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1A34);
    // 0x80271E38: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x80271E3C: mul.s       $f8, $f0, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x80271E40: lwc1        $f4, 0x6980($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6980);
    // 0x80271E44: lwc1        $f12, 0x3C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80271E48: add.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x80271E4C: jal         0x80080E80
    // 0x80271E50: swc1        $f6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f6.u32l;
    func_80080E80(rdram, ctx);
        goto after_8;
    // 0x80271E50: swc1        $f6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f6.u32l;
    after_8:
    // 0x80271E54: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80271E58: lwc1        $f10, -0x1A34($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1A34);
    // 0x80271E5C: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x80271E60: mul.s       $f8, $f0, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x80271E64: lwc1        $f4, 0x6978($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6978);
    // 0x80271E68: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80271E6C: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x80271E70: addiu       $t1, $s0, 0x98
    ctx->r9 = ADD32(ctx->r16, 0X98);
    // 0x80271E74: addiu       $t2, $sp, 0x44
    ctx->r10 = ADD32(ctx->r29, 0X44);
    // 0x80271E78: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x80271E7C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80271E80: addiu       $a3, $s0, 0x94
    ctx->r7 = ADD32(ctx->r16, 0X94);
    // 0x80271E84: jal         0x80004650
    // 0x80271E88: add.s       $f12, $f8, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f4.fl;
    func_80004650(rdram, ctx);
        goto after_9;
    // 0x80271E88: add.s       $f12, $f8, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f4.fl;
    after_9:
    // 0x80271E8C: lwc1        $f12, 0x94($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X94);
L_80271E90:
    // 0x80271E90: jal         0x80272AEC
    // 0x80271E94: nop

    ovl_8024B800_func_80272AEC(rdram, ctx);
        goto after_10;
    // 0x80271E94: nop

    after_10:
    // 0x80271E98: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80271E9C: lwc1        $f3, -0x1F10($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, -0X1F10);
    // 0x80271EA0: lwc1        $f2, -0x1F0C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X1F0C);
    // 0x80271EA4: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x80271EA8: c.lt.d      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.d < ctx->f6.d;
    // 0x80271EAC: nop

    // 0x80271EB0: bc1t        L_80271EE4
    if (c1cs) {
        // 0x80271EB4: nop
    
            goto L_80271EE4;
    }
    // 0x80271EB4: nop

    // 0x80271EB8: lwc1        $f12, 0x98($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X98);
    // 0x80271EBC: jal         0x80272AEC
    // 0x80271EC0: nop

    ovl_8024B800_func_80272AEC(rdram, ctx);
        goto after_11;
    // 0x80271EC0: nop

    after_11:
    // 0x80271EC4: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80271EC8: lwc1        $f3, -0x1F08($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, -0X1F08);
    // 0x80271ECC: lwc1        $f2, -0x1F04($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X1F04);
    // 0x80271ED0: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x80271ED4: c.lt.d      $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f2.d < ctx->f10.d;
    // 0x80271ED8: nop

    // 0x80271EDC: bc1f        L_80271EF4
    if (!c1cs) {
        // 0x80271EE0: nop
    
            goto L_80271EF4;
    }
    // 0x80271EE0: nop

L_80271EE4:
    // 0x80271EE4: lhu         $t3, 0x14($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X14);
    // 0x80271EE8: nop

    // 0x80271EEC: ori         $t4, $t3, 0x800
    ctx->r12 = ctx->r11 | 0X800;
    // 0x80271EF0: sh          $t4, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r12;
L_80271EF4:
    // 0x80271EF4: lwc1        $f12, 0x94($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X94);
    // 0x80271EF8: jal         0x80272AEC
    // 0x80271EFC: nop

    ovl_8024B800_func_80272AEC(rdram, ctx);
        goto after_12;
    // 0x80271EFC: nop

    after_12:
    // 0x80271F00: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x80271F04: mtc1        $at, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r1;
    // 0x80271F08: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80271F0C: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x80271F10: c.lt.d      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.d < ctx->f8.d;
    // 0x80271F14: nop

    // 0x80271F18: bc1t        L_80271F4C
    if (c1cs) {
        // 0x80271F1C: nop
    
            goto L_80271F4C;
    }
    // 0x80271F1C: nop

    // 0x80271F20: lwc1        $f12, 0x98($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X98);
    // 0x80271F24: jal         0x80272AEC
    // 0x80271F28: nop

    ovl_8024B800_func_80272AEC(rdram, ctx);
        goto after_13;
    // 0x80271F28: nop

    after_13:
    // 0x80271F2C: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x80271F30: mtc1        $at, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r1;
    // 0x80271F34: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80271F38: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x80271F3C: c.lt.d      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.d < ctx->f4.d;
    // 0x80271F40: nop

    // 0x80271F44: bc1f        L_80271F60
    if (!c1cs) {
        // 0x80271F48: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_80271F60;
    }
    // 0x80271F48: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80271F4C:
    // 0x80271F4C: lhu         $t5, 0x20($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X20);
    // 0x80271F50: nop

    // 0x80271F54: ori         $t6, $t5, 0x1000
    ctx->r14 = ctx->r13 | 0X1000;
    // 0x80271F58: sh          $t6, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r14;
L_80271F5C:
    // 0x80271F5C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80271F60:
    // 0x80271F60: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80271F64: jr          $ra
    // 0x80271F68: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x80271F68: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void ovl_8024B800_func_80271F6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80271F6C: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x80271F70: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80271F74: lhu         $t7, 0x8($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X8);
    // 0x80271F78: nop

    // 0x80271F7C: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x80271F80: beq         $t8, $zero, L_80271FAC
    if (ctx->r24 == 0) {
        // 0x80271F84: nop
    
            goto L_80271FAC;
    }
    // 0x80271F84: nop

    // 0x80271F88: lwc1        $f4, 0x4C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x80271F8C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80271F90: nop

    // 0x80271F94: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80271F98: nop

    // 0x80271F9C: bc1f        L_80271FCC
    if (!c1cs) {
        // 0x80271FA0: nop
    
            goto L_80271FCC;
    }
    // 0x80271FA0: nop

    // 0x80271FA4: jr          $ra
    // 0x80271FA8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80271FA8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80271FAC:
    // 0x80271FAC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80271FB0: lwc1        $f10, 0x4C($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x80271FB4: nop

    // 0x80271FB8: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x80271FBC: nop

    // 0x80271FC0: bc1f        L_80271FCC
    if (!c1cs) {
        // 0x80271FC4: nop
    
            goto L_80271FCC;
    }
    // 0x80271FC4: nop

    // 0x80271FC8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_80271FCC:
    // 0x80271FCC: jr          $ra
    // 0x80271FD0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x80271FD0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_8024B800_func_80271FD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80271FD4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80271FD8: beq         $a2, $zero, L_80271FEC
    if (ctx->r6 == 0) {
        // 0x80271FDC: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80271FEC;
    }
    // 0x80271FDC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80271FE0: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x80271FE4: b           L_80271FF4
    // 0x80271FE8: addiu       $a2, $a2, -0x26A0
    ctx->r6 = ADD32(ctx->r6, -0X26A0);
        goto L_80271FF4;
    // 0x80271FE8: addiu       $a2, $a2, -0x26A0
    ctx->r6 = ADD32(ctx->r6, -0X26A0);
L_80271FEC:
    // 0x80271FEC: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x80271FF0: addiu       $a2, $a2, -0x26B0
    ctx->r6 = ADD32(ctx->r6, -0X26B0);
L_80271FF4:
    // 0x80271FF4: jal         0x8027A184
    // 0x80271FF8: nop

    ovl_8024B800_func_8027A184(rdram, ctx);
        goto after_0;
    // 0x80271FF8: nop

    after_0:
    // 0x80271FFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80272000: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80272004: jr          $ra
    // 0x80272008: nop

    return;
    // 0x80272008: nop

;}
RECOMP_FUNC void ovl_8024B800_func_8027200C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027200C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80272010: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80272014: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x80272018: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8027201C: lhu         $t7, 0x8($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X8);
    // 0x80272020: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80272024: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x80272028: beq         $t8, $zero, L_8027203C
    if (ctx->r24 == 0) {
        // 0x8027202C: lui         $a2, 0x8028
        ctx->r6 = S32(0X8028 << 16);
            goto L_8027203C;
    }
    // 0x8027202C: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x80272030: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x80272034: b           L_80272040
    // 0x80272038: addiu       $a2, $a2, -0x26B0
    ctx->r6 = ADD32(ctx->r6, -0X26B0);
        goto L_80272040;
    // 0x80272038: addiu       $a2, $a2, -0x26B0
    ctx->r6 = ADD32(ctx->r6, -0X26B0);
L_8027203C:
    // 0x8027203C: addiu       $a2, $a2, -0x26A0
    ctx->r6 = ADD32(ctx->r6, -0X26A0);
L_80272040:
    // 0x80272040: jal         0x8027A184
    // 0x80272044: nop

    ovl_8024B800_func_8027A184(rdram, ctx);
        goto after_0;
    // 0x80272044: nop

    after_0:
    // 0x80272048: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027204C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80272050: jr          $ra
    // 0x80272054: nop

    return;
    // 0x80272054: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80272058(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80272058: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027205C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80272060: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x80272064: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80272068: lhu         $t7, 0x8($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X8);
    // 0x8027206C: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80272070: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x80272074: beq         $t8, $zero, L_80272088
    if (ctx->r24 == 0) {
        // 0x80272078: lui         $a2, 0x8028
        ctx->r6 = S32(0X8028 << 16);
            goto L_80272088;
    }
    // 0x80272078: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x8027207C: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x80272080: b           L_8027208C
    // 0x80272084: addiu       $a2, $a2, -0x26A0
    ctx->r6 = ADD32(ctx->r6, -0X26A0);
        goto L_8027208C;
    // 0x80272084: addiu       $a2, $a2, -0x26A0
    ctx->r6 = ADD32(ctx->r6, -0X26A0);
L_80272088:
    // 0x80272088: addiu       $a2, $a2, -0x26B0
    ctx->r6 = ADD32(ctx->r6, -0X26B0);
L_8027208C:
    // 0x8027208C: jal         0x8027A184
    // 0x80272090: nop

    ovl_8024B800_func_8027A184(rdram, ctx);
        goto after_0;
    // 0x80272090: nop

    after_0:
    // 0x80272094: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80272098: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027209C: jr          $ra
    // 0x802720A0: nop

    return;
    // 0x802720A0: nop

;}
RECOMP_FUNC void ovl_8024B800_func_802720A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802720A4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802720A8: nop

    // 0x802720AC: swc1        $f0, 0x50($a0)
    MEM_W(0X50, ctx->r4) = ctx->f0.u32l;
    // 0x802720B0: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x802720B4: jr          $ra
    // 0x802720B8: swc1        $f0, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f0.u32l;
    return;
    // 0x802720B8: swc1        $f0, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f0.u32l;
;}
RECOMP_FUNC void ovl_8024B800_func_802720BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802720BC: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x802720C0: lhu         $t6, 0xB78($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB78);
    // 0x802720C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802720C8: beq         $t6, $zero, L_802720D8
    if (ctx->r14 == 0) {
        // 0x802720CC: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802720D8;
    }
    // 0x802720CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802720D0: b           L_802721B0
    // 0x802720D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802721B0;
    // 0x802720D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802720D8:
    // 0x802720D8: lhu         $t7, 0x12($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X12);
    // 0x802720DC: nop

    // 0x802720E0: andi        $t8, $t7, 0x40
    ctx->r24 = ctx->r15 & 0X40;
    // 0x802720E4: bne         $t8, $zero, L_80272118
    if (ctx->r24 != 0) {
        // 0x802720E8: nop
    
            goto L_80272118;
    }
    // 0x802720E8: nop

    // 0x802720EC: lw          $t9, 0xC8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XC8);
    // 0x802720F0: nop

    // 0x802720F4: lhu         $t0, 0x95C($t9)
    ctx->r8 = MEM_HU(ctx->r25, 0X95C);
    // 0x802720F8: nop

    // 0x802720FC: andi        $t1, $t0, 0x20
    ctx->r9 = ctx->r8 & 0X20;
    // 0x80272100: beq         $t1, $zero, L_80272110
    if (ctx->r9 == 0) {
        // 0x80272104: nop
    
            goto L_80272110;
    }
    // 0x80272104: nop

    // 0x80272108: b           L_802721B0
    // 0x8027210C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802721B0;
    // 0x8027210C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80272110:
    // 0x80272110: b           L_802721B0
    // 0x80272114: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802721B0;
    // 0x80272114: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80272118:
    // 0x80272118: lhu         $t2, 0x14($a0)
    ctx->r10 = MEM_HU(ctx->r4, 0X14);
    // 0x8027211C: nop

    // 0x80272120: andi        $t3, $t2, 0x8
    ctx->r11 = ctx->r10 & 0X8;
    // 0x80272124: bne         $t3, $zero, L_802721B0
    if (ctx->r11 != 0) {
        // 0x80272128: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802721B0;
    }
    // 0x80272128: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8027212C: lhu         $t4, 0x20($a0)
    ctx->r12 = MEM_HU(ctx->r4, 0X20);
    // 0x80272130: nop

    // 0x80272134: andi        $t5, $t4, 0x80
    ctx->r13 = ctx->r12 & 0X80;
    // 0x80272138: bne         $t5, $zero, L_802721B0
    if (ctx->r13 != 0) {
        // 0x8027213C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802721B0;
    }
    // 0x8027213C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80272140: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x80272144: lwc1        $f12, 0xBC($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0XBC);
    // 0x80272148: lhu         $t7, 0x8($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X8);
    // 0x8027214C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80272150: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x80272154: beq         $t8, $zero, L_8027216C
    if (ctx->r24 == 0) {
        // 0x80272158: nop
    
            goto L_8027216C;
    }
    // 0x80272158: nop

    // 0x8027215C: lwc1        $f5, -0x1F00($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X1F00);
    // 0x80272160: lwc1        $f4, -0x1EFC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1EFC);
    // 0x80272164: b           L_8027217C
    // 0x80272168: cvt.s.d     $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f14.fl = CVT_S_D(ctx->f4.d);
        goto L_8027217C;
    // 0x80272168: cvt.s.d     $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f14.fl = CVT_S_D(ctx->f4.d);
L_8027216C:
    // 0x8027216C: mtc1        $zero, $f7
    ctx->f_odd[(7 - 1) * 2] = 0;
    // 0x80272170: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80272174: nop

    // 0x80272178: cvt.s.d     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f14.fl = CVT_S_D(ctx->f6.d);
L_8027217C:
    // 0x8027217C: jal         0x80279308
    // 0x80272180: nop

    ovl_8024B800_func_80279308(rdram, ctx);
        goto after_0;
    // 0x80272180: nop

    after_0:
    // 0x80272184: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80272188: lwc1        $f11, -0x1EF8($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X1EF8);
    // 0x8027218C: lwc1        $f10, -0x1EF4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1EF4);
    // 0x80272190: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x80272194: c.lt.d      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.d < ctx->f10.d;
    // 0x80272198: nop

    // 0x8027219C: bc1f        L_802721B0
    if (!c1cs) {
        // 0x802721A0: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802721B0;
    }
    // 0x802721A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802721A4: b           L_802721B0
    // 0x802721A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802721B0;
    // 0x802721A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802721AC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802721B0:
    // 0x802721B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802721B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802721B8: jr          $ra
    // 0x802721BC: nop

    return;
    // 0x802721BC: nop

;}
RECOMP_FUNC void ovl_8024B800_func_802721C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802721C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802721C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802721C8: jal         0x8027924C
    // 0x802721CC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    ovl_8024B800_func_8027924C(rdram, ctx);
        goto after_0;
    // 0x802721CC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x802721D0: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x802721D4: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x802721D8: jal         0x80272AEC
    // 0x802721DC: swc1        $f0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f0.u32l;
    ovl_8024B800_func_80272AEC(rdram, ctx);
        goto after_1;
    // 0x802721DC: swc1        $f0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f0.u32l;
    after_1:
    // 0x802721E0: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x802721E4: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802721E8: swc1        $f0, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f0.u32l;
    // 0x802721EC: lwc1        $f6, -0x1EEC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1EEC);
    // 0x802721F0: lwc1        $f7, -0x1EF0($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X1EF0);
    // 0x802721F4: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802721F8: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x802721FC: lwc1        $f11, -0x1EE8($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X1EE8);
    // 0x80272200: lwc1        $f10, -0x1EE4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1EE4);
    // 0x80272204: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x80272208: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8027220C: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x80272210: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80272214: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x80272218: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027221C: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80272220: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x80272224: nop

    // 0x80272228: cvt.w.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_D(ctx->f16.d);
    // 0x8027222C: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x80272230: nop

    // 0x80272234: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x80272238: beq         $v0, $zero, L_80272288
    if (ctx->r2 == 0) {
        // 0x8027223C: nop
    
            goto L_80272288;
    }
    // 0x8027223C: nop

    // 0x80272240: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x80272244: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80272248: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8027224C: sub.d       $f18, $f16, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f18.d = ctx->f16.d - ctx->f18.d;
    // 0x80272250: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80272254: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x80272258: nop

    // 0x8027225C: cvt.w.d     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_D(ctx->f18.d);
    // 0x80272260: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x80272264: nop

    // 0x80272268: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x8027226C: bne         $v0, $zero, L_80272280
    if (ctx->r2 != 0) {
        // 0x80272270: nop
    
            goto L_80272280;
    }
    // 0x80272270: nop

    // 0x80272274: mfc1        $v0, $f18
    ctx->r2 = (int32_t)ctx->f18.u32l;
    // 0x80272278: b           L_80272298
    // 0x8027227C: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
        goto L_80272298;
    // 0x8027227C: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
L_80272280:
    // 0x80272280: b           L_80272298
    // 0x80272284: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80272298;
    // 0x80272284: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80272288:
    // 0x80272288: mfc1        $v0, $f18
    ctx->r2 = (int32_t)ctx->f18.u32l;
    // 0x8027228C: nop

    // 0x80272290: bltz        $v0, L_80272280
    if (SIGNED(ctx->r2) < 0) {
        // 0x80272294: nop
    
            goto L_80272280;
    }
    // 0x80272294: nop

L_80272298:
    // 0x80272298: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8027229C: sltiu       $at, $v0, 0x5
    ctx->r1 = ctx->r2 < 0X5 ? 1 : 0;
    // 0x802722A0: bne         $at, $zero, L_802722AC
    if (ctx->r1 != 0) {
        // 0x802722A4: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_802722AC;
    }
    // 0x802722A4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x802722A8: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
L_802722AC:
    // 0x802722AC: jr          $ra
    // 0x802722B0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x802722B0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_8024B800_func_802722B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802722B4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802722B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802722BC: jal         0x8027924C
    // 0x802722C0: nop

    ovl_8024B800_func_8027924C(rdram, ctx);
        goto after_0;
    // 0x802722C0: nop

    after_0:
    // 0x802722C4: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x802722C8: jal         0x80272AEC
    // 0x802722CC: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    ovl_8024B800_func_80272AEC(rdram, ctx);
        goto after_1;
    // 0x802722CC: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_1:
    // 0x802722D0: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802722D4: lwc1        $f13, -0x1EE0($at)
    ctx->f_odd[(13 - 1) * 2] = MEM_W(ctx->r1, -0X1EE0);
    // 0x802722D8: lwc1        $f12, -0x1EDC($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X1EDC);
    // 0x802722DC: cvt.d.s     $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.d = CVT_D_S(ctx->f0.fl);
    // 0x802722E0: c.lt.d      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.d < ctx->f2.d;
    // 0x802722E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802722E8: bc1f        L_8027236C
    if (!c1cs) {
        // 0x802722EC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8027236C;
    }
    // 0x802722EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802722F0: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802722F4: lwc1        $f7, -0x1ED8($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X1ED8);
    // 0x802722F8: lwc1        $f6, -0x1ED4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1ED4);
    // 0x802722FC: add.d       $f4, $f2, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f12.d); 
    ctx->f4.d = ctx->f2.d + ctx->f12.d;
    // 0x80272300: lwc1        $f16, 0x18($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80272304: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x80272308: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8027230C: nop

    // 0x80272310: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x80272314: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80272318: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8027231C: nop

    // 0x80272320: cvt.w.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_D(ctx->f8.d);
    // 0x80272324: mfc1        $v0, $f10
    ctx->r2 = (int32_t)ctx->f10.u32l;
    // 0x80272328: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8027232C: bne         $v0, $zero, L_8027233C
    if (ctx->r2 != 0) {
        // 0x80272330: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_8027233C;
    }
    // 0x80272330: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80272334: b           L_8027236C
    // 0x80272338: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8027236C;
    // 0x80272338: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8027233C:
    // 0x8027233C: slti        $at, $v0, 0x5
    ctx->r1 = SIGNED(ctx->r2) < 0X5 ? 1 : 0;
    // 0x80272340: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80272344: bne         $at, $zero, L_80272350
    if (ctx->r1 != 0) {
        // 0x80272348: nop
    
            goto L_80272350;
    }
    // 0x80272348: nop

    // 0x8027234C: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
L_80272350:
    // 0x80272350: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x80272354: nop

    // 0x80272358: bc1f        L_80272364
    if (!c1cs) {
        // 0x8027235C: nop
    
            goto L_80272364;
    }
    // 0x8027235C: nop

    // 0x80272360: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
L_80272364:
    // 0x80272364: b           L_8027236C
    // 0x80272368: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_8027236C;
    // 0x80272368: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8027236C:
    // 0x8027236C: jr          $ra
    // 0x80272370: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80272370: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_8024B800_func_80272374(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80272374: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80272378: lhu         $t7, 0xB78($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0XB78);
    // 0x8027237C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80272380: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80272384: andi        $t6, $a1, 0xFFFF
    ctx->r14 = ctx->r5 & 0XFFFF;
    // 0x80272388: slti        $at, $t7, 0x8
    ctx->r1 = SIGNED(ctx->r15) < 0X8 ? 1 : 0;
    // 0x8027238C: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x80272390: beq         $at, $zero, L_802723D4
    if (ctx->r1 == 0) {
        // 0x80272394: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802723D4;
    }
    // 0x80272394: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80272398: lhu         $v0, 0x1A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X1A);
    // 0x8027239C: nop

    // 0x802723A0: slti        $at, $v0, 0xB
    ctx->r1 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
    // 0x802723A4: beq         $at, $zero, L_802723D4
    if (ctx->r1 == 0) {
        // 0x802723A8: nop
    
            goto L_802723D4;
    }
    // 0x802723A8: nop

    // 0x802723AC: lhu         $t8, 0x14($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X14);
    // 0x802723B0: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x802723B4: andi        $t9, $t8, 0x400
    ctx->r25 = ctx->r24 & 0X400;
    // 0x802723B8: bne         $t9, $zero, L_802723D4
    if (ctx->r25 != 0) {
        // 0x802723BC: nop
    
            goto L_802723D4;
    }
    // 0x802723BC: nop

    // 0x802723C0: lhu         $t0, 0xB7E($t0)
    ctx->r8 = MEM_HU(ctx->r8, 0XB7E);
    // 0x802723C4: nop

    // 0x802723C8: andi        $t1, $t0, 0xC
    ctx->r9 = ctx->r8 & 0XC;
    // 0x802723CC: beq         $t1, $zero, L_802723DC
    if (ctx->r9 == 0) {
        // 0x802723D0: nop
    
            goto L_802723DC;
    }
    // 0x802723D0: nop

L_802723D4:
    // 0x802723D4: b           L_80272510
    // 0x802723D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80272510;
    // 0x802723D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802723DC:
    // 0x802723DC: bne         $v0, $zero, L_80272448
    if (ctx->r2 != 0) {
        // 0x802723E0: slti        $at, $a1, 0x2
        ctx->r1 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
            goto L_80272448;
    }
    // 0x802723E0: slti        $at, $a1, 0x2
    ctx->r1 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
    // 0x802723E4: beq         $at, $zero, L_80272448
    if (ctx->r1 == 0) {
        // 0x802723E8: nop
    
            goto L_80272448;
    }
    // 0x802723E8: nop

    // 0x802723EC: lw          $t2, 0xC8($a0)
    ctx->r10 = MEM_W(ctx->r4, 0XC8);
    // 0x802723F0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802723F4: lhu         $t3, 0xE($t2)
    ctx->r11 = MEM_HU(ctx->r10, 0XE);
    // 0x802723F8: nop

    // 0x802723FC: bne         $t3, $at, L_80272448
    if (ctx->r11 != ctx->r1) {
        // 0x80272400: nop
    
            goto L_80272448;
    }
    // 0x80272400: nop

    // 0x80272404: lhu         $t4, 0x12($a0)
    ctx->r12 = MEM_HU(ctx->r4, 0X12);
    // 0x80272408: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8027240C: andi        $t5, $t4, 0x8
    ctx->r13 = ctx->r12 & 0X8;
    // 0x80272410: beq         $t5, $zero, L_80272420
    if (ctx->r13 == 0) {
        // 0x80272414: nop
    
            goto L_80272420;
    }
    // 0x80272414: nop

    // 0x80272418: b           L_80272510
    // 0x8027241C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80272510;
    // 0x8027241C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80272420:
    // 0x80272420: lwc1        $f4, 0x88($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X88);
    // 0x80272424: lwc1        $f9, -0x1ED0($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X1ED0);
    // 0x80272428: lwc1        $f8, -0x1ECC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1ECC);
    // 0x8027242C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80272430: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x80272434: lwc1        $f12, 0xB0($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0XB0);
    // 0x80272438: jal         0x802722B4
    // 0x8027243C: cvt.s.d     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f14.fl = CVT_S_D(ctx->f10.d);
    ovl_8024B800_func_802722B4(rdram, ctx);
        goto after_0;
    // 0x8027243C: cvt.s.d     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f14.fl = CVT_S_D(ctx->f10.d);
    after_0:
    // 0x80272440: b           L_80272514
    // 0x80272444: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80272514;
    // 0x80272444: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80272448:
    // 0x80272448: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x8027244C: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x80272450: lh          $t6, 0x8AE($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X8AE);
    // 0x80272454: nop

    // 0x80272458: bne         $t6, $zero, L_8027250C
    if (ctx->r14 != 0) {
        // 0x8027245C: nop
    
            goto L_8027250C;
    }
    // 0x8027245C: nop

    // 0x80272460: lwc1        $f16, 0x84($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X84);
    // 0x80272464: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80272468: slti        $at, $a1, 0x2
    ctx->r1 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
    // 0x8027246C: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x80272470: nop

    // 0x80272474: bc1f        L_8027250C
    if (!c1cs) {
        // 0x80272478: nop
    
            goto L_8027250C;
    }
    // 0x80272478: nop

    // 0x8027247C: beq         $at, $zero, L_8027250C
    if (ctx->r1 == 0) {
        // 0x80272480: lui         $at, 0x8028
        ctx->r1 = S32(0X8028 << 16);
            goto L_8027250C;
    }
    // 0x80272480: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80272484: lwc1        $f4, 0x8C0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8C0);
    // 0x80272488: lwc1        $f9, -0x1EC8($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X1EC8);
    // 0x8027248C: lwc1        $f8, -0x1EC4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1EC4);
    // 0x80272490: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80272494: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x80272498: lwc1        $f12, 0x88($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X88);
    // 0x8027249C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802724A0: jal         0x80279308
    // 0x802724A4: cvt.s.d     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f14.fl = CVT_S_D(ctx->f10.d);
    ovl_8024B800_func_80279308(rdram, ctx);
        goto after_1;
    // 0x802724A4: cvt.s.d     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f14.fl = CVT_S_D(ctx->f10.d);
    after_1:
    // 0x802724A8: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802724AC: lwc1        $f19, -0x1EC0($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, -0X1EC0);
    // 0x802724B0: lwc1        $f18, -0x1EBC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X1EBC);
    // 0x802724B4: cvt.d.s     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.d = CVT_D_S(ctx->f0.fl);
    // 0x802724B8: c.lt.d      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.d < ctx->f18.d;
    // 0x802724BC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802724C0: bc1f        L_80272510
    if (!c1cs) {
        // 0x802724C4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80272510;
    }
    // 0x802724C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802724C8: lhu         $t7, 0x12($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X12);
    // 0x802724CC: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802724D0: andi        $t8, $t7, 0x8
    ctx->r24 = ctx->r15 & 0X8;
    // 0x802724D4: beq         $t8, $zero, L_802724E4
    if (ctx->r24 == 0) {
        // 0x802724D8: nop
    
            goto L_802724E4;
    }
    // 0x802724D8: nop

    // 0x802724DC: b           L_80272510
    // 0x802724E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80272510;
    // 0x802724E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802724E4:
    // 0x802724E4: lwc1        $f4, 0x88($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X88);
    // 0x802724E8: lwc1        $f9, -0x1EB8($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X1EB8);
    // 0x802724EC: lwc1        $f8, -0x1EB4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1EB4);
    // 0x802724F0: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x802724F4: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x802724F8: lwc1        $f12, 0xB0($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0XB0);
    // 0x802724FC: jal         0x802722B4
    // 0x80272500: cvt.s.d     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f14.fl = CVT_S_D(ctx->f10.d);
    ovl_8024B800_func_802722B4(rdram, ctx);
        goto after_2;
    // 0x80272500: cvt.s.d     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f14.fl = CVT_S_D(ctx->f10.d);
    after_2:
    // 0x80272504: b           L_80272514
    // 0x80272508: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80272514;
    // 0x80272508: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027250C:
    // 0x8027250C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80272510:
    // 0x80272510: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80272514:
    // 0x80272514: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80272518: jr          $ra
    // 0x8027251C: nop

    return;
    // 0x8027251C: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80272520(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80272520: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80272524: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x80272528: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8027252C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80272530: lw          $v1, 0xA4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XA4);
    // 0x80272534: nop

    // 0x80272538: beq         $v1, $zero, L_80272550
    if (ctx->r3 == 0) {
        // 0x8027253C: nop
    
            goto L_80272550;
    }
    // 0x8027253C: nop

    // 0x80272540: lw          $t6, 0x40($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X40);
    // 0x80272544: nop

    // 0x80272548: beq         $a0, $t6, L_802725B4
    if (ctx->r4 == ctx->r14) {
        // 0x8027254C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802725B4;
    }
    // 0x8027254C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80272550:
    // 0x80272550: lw          $t7, 0x88($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X88);
    // 0x80272554: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80272558: bne         $t7, $zero, L_802725B4
    if (ctx->r15 != 0) {
        // 0x8027255C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802725B4;
    }
    // 0x8027255C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80272560: lwc1        $f4, 0x88($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X88);
    // 0x80272564: lwc1        $f9, -0x1EB0($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X1EB0);
    // 0x80272568: lwc1        $f8, -0x1EAC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1EAC);
    // 0x8027256C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80272570: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x80272574: lwc1        $f12, 0xB0($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0XB0);
    // 0x80272578: cvt.s.d     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f14.fl = CVT_S_D(ctx->f10.d);
    // 0x8027257C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80272580: jal         0x80279308
    // 0x80272584: swc1        $f14, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f14.u32l;
    ovl_8024B800_func_80279308(rdram, ctx);
        goto after_0;
    // 0x80272584: swc1        $f14, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f14.u32l;
    after_0:
    // 0x80272588: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8027258C: lwc1        $f19, -0x1EA8($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, -0X1EA8);
    // 0x80272590: lwc1        $f18, -0x1EA4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X1EA4);
    // 0x80272594: cvt.d.s     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.d = CVT_D_S(ctx->f0.fl);
    // 0x80272598: c.lt.d      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.d < ctx->f18.d;
    // 0x8027259C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x802725A0: lwc1        $f14, 0x1C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802725A4: bc1f        L_802725B4
    if (!c1cs) {
        // 0x802725A8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802725B4;
    }
    // 0x802725A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802725AC: swc1        $f14, 0xB0($a0)
    MEM_W(0XB0, ctx->r4) = ctx->f14.u32l;
    // 0x802725B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802725B4:
    // 0x802725B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802725B8: jr          $ra
    // 0x802725BC: nop

    return;
    // 0x802725BC: nop

;}
RECOMP_FUNC void ovl_8024B800_func_802725C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802725C0: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x802725C4: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x802725C8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802725CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802725D0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x802725D4: lw          $a0, -0x23DC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X23DC);
    // 0x802725D8: lw          $a2, 0x0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X0);
    // 0x802725DC: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x802725E0: jal         0x80272B98
    // 0x802725E4: addiu       $a3, $sp, 0x28
    ctx->r7 = ADD32(ctx->r29, 0X28);
    ovl_8024B800_func_80272B98(rdram, ctx);
        goto after_0;
    // 0x802725E4: addiu       $a3, $sp, 0x28
    ctx->r7 = ADD32(ctx->r29, 0X28);
    after_0:
    // 0x802725E8: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x802725EC: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x802725F0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x802725F4: lw          $a0, -0x1948($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1948);
    // 0x802725F8: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x802725FC: lw          $a2, 0x0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X0);
    // 0x80272600: jal         0x80272B98
    // 0x80272604: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    ovl_8024B800_func_80272B98(rdram, ctx);
        goto after_1;
    // 0x80272604: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x80272608: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8027260C: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80272610: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80272614: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80272618: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027261C: bc1f        L_80272630
    if (!c1cs) {
        // 0x80272620: addiu       $v1, $v1, -0x2CF0
        ctx->r3 = ADD32(ctx->r3, -0X2CF0);
            goto L_80272630;
    }
    // 0x80272620: addiu       $v1, $v1, -0x2CF0
    ctx->r3 = ADD32(ctx->r3, -0X2CF0);
    // 0x80272624: lw          $v0, 0x914($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X914);
    // 0x80272628: b           L_80272638
    // 0x8027262C: nop

        goto L_80272638;
    // 0x8027262C: nop

L_80272630:
    // 0x80272630: lw          $v0, 0x13A8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X13A8);
    // 0x80272634: nop

L_80272638:
    // 0x80272638: jr          $ra
    // 0x8027263C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8027263C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_8024B800_func_80272640(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80272640: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80272644: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80272648: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8027264C: mtc1        $a1, $f14
    ctx->f14.u32l = ctx->r5;
    // 0x80272650: lwc1        $f4, 0x50($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X50);
    // 0x80272654: nop

    // 0x80272658: mul.s       $f6, $f4, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f14.fl);
    // 0x8027265C: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x80272660: lwc1        $f12, 0x7C($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X7C);
    // 0x80272664: jal         0x80081040
    // 0x80272668: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_80081040(rdram, ctx);
        goto after_0;
    // 0x80272668: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x8027266C: lwc1        $f8, 0x1C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80272670: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80272674: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x80272678: lwc1        $f16, 0x4C($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x8027267C: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80272680: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80272684: swc1        $f18, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f18.u32l;
    // 0x80272688: lwc1        $f12, 0x7C($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X7C);
    // 0x8027268C: jal         0x80080E80
    // 0x80272690: nop

    func_80080E80(rdram, ctx);
        goto after_1;
    // 0x80272690: nop

    after_1:
    // 0x80272694: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80272698: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8027269C: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x802726A0: lwc1        $f8, 0x44($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X44);
    // 0x802726A4: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x802726A8: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x802726AC: swc1        $f10, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f10.u32l;
    // 0x802726B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802726B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802726B8: jr          $ra
    // 0x802726BC: nop

    return;
    // 0x802726BC: nop

;}
RECOMP_FUNC void ovl_8024B800_func_802726C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802726C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802726C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802726C8: lhu         $t6, 0x14($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X14);
    // 0x802726CC: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x802726D0: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x802726D4: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x802726D8: bne         $t7, $zero, L_80272720
    if (ctx->r15 != 0) {
        // 0x802726DC: lui         $at, 0x4034
        ctx->r1 = S32(0X4034 << 16);
            goto L_80272720;
    }
    // 0x802726DC: lui         $at, 0x4034
    ctx->r1 = S32(0X4034 << 16);
    // 0x802726E0: lwc1        $f4, 0x50($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X50);
    // 0x802726E4: nop

    // 0x802726E8: add.s       $f6, $f4, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f14.fl;
    // 0x802726EC: swc1        $f6, 0x50($a0)
    MEM_W(0X50, ctx->r4) = ctx->f6.u32l;
    // 0x802726F0: lwc1        $f0, 0x50($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X50);
    // 0x802726F4: nop

    // 0x802726F8: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x802726FC: nop

    // 0x80272700: bc1f        L_80272784
    if (!c1cs) {
        // 0x80272704: nop
    
            goto L_80272784;
    }
    // 0x80272704: nop

    // 0x80272708: lhu         $t8, 0x14($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X14);
    // 0x8027270C: swc1        $f12, 0x50($a0)
    MEM_W(0X50, ctx->r4) = ctx->f12.u32l;
    // 0x80272710: lwc1        $f0, 0x50($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X50);
    // 0x80272714: ori         $t9, $t8, 0x2
    ctx->r25 = ctx->r24 | 0X2;
    // 0x80272718: b           L_80272784
    // 0x8027271C: sh          $t9, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r25;
        goto L_80272784;
    // 0x8027271C: sh          $t9, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r25;
L_80272720:
    // 0x80272720: lwc1        $f0, 0x50($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X50);
    // 0x80272724: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80272728: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8027272C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80272730: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x80272734: lwc1        $f19, -0x1EA0($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, -0X1EA0);
    // 0x80272738: lwc1        $f18, -0x1E9C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X1E9C);
    // 0x8027273C: sub.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d - ctx->f10.d;
    // 0x80272740: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x80272744: cvt.s.d     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f2.fl = CVT_S_D(ctx->f4.d);
    // 0x80272748: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x8027274C: nop

    // 0x80272750: bc1f        L_8027276C
    if (!c1cs) {
        // 0x80272754: nop
    
            goto L_8027276C;
    }
    // 0x80272754: nop

    // 0x80272758: sub.s       $f6, $f0, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x8027275C: swc1        $f6, 0x50($a0)
    MEM_W(0X50, ctx->r4) = ctx->f6.u32l;
    // 0x80272760: lwc1        $f0, 0x50($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X50);
    // 0x80272764: b           L_80272788
    // 0x80272768: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
        goto L_80272788;
    // 0x80272768: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
L_8027276C:
    // 0x8027276C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80272770: nop

    // 0x80272774: swc1        $f2, 0x50($a0)
    MEM_W(0X50, ctx->r4) = ctx->f2.u32l;
    // 0x80272778: lwc1        $f0, 0x50($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X50);
    // 0x8027277C: swc1        $f2, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f2.u32l;
    // 0x80272780: swc1        $f2, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f2.u32l;
L_80272784:
    // 0x80272784: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
L_80272788:
    // 0x80272788: lw          $a2, 0x7C($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X7C);
    // 0x8027278C: jal         0x80274C54
    // 0x80272790: nop

    ovl_8024B800_func_80274C54(rdram, ctx);
        goto after_0;
    // 0x80272790: nop

    after_0:
    // 0x80272794: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80272798: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027279C: jr          $ra
    // 0x802727A0: nop

    return;
    // 0x802727A0: nop

;}
RECOMP_FUNC void ovl_8024B800_func_80272774(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80272774: swc1        $f2, 0x50($a0)
    MEM_W(0X50, ctx->r4) = ctx->f2.u32l;
    // 0x80272778: lwc1        $f0, 0x50($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X50);
    // 0x8027277C: swc1        $f2, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f2.u32l;
    // 0x80272780: swc1        $f2, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f2.u32l;
    // 0x80272784: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80272788: lw          $a2, 0x7C($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X7C);
    // 0x8027278C: jal         0x80274C54
    // 0x80272790: nop

    ovl_8024B800_func_80274C54(rdram, ctx);
        goto after_0;
    // 0x80272790: nop

    after_0:
    // 0x80272794: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80272798: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027279C: jr          $ra
    // 0x802727A0: nop

    return;
    // 0x802727A0: nop

;}
RECOMP_FUNC void ovl_8024B800_func_802727A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802727A4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802727A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802727AC: lhu         $v0, 0x12($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X12);
    // 0x802727B0: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x802727B4: andi        $t6, $v0, 0x40
    ctx->r14 = ctx->r2 & 0X40;
    // 0x802727B8: beq         $t6, $zero, L_802727CC
    if (ctx->r14 == 0) {
        // 0x802727BC: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_802727CC;
    }
    // 0x802727BC: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x802727C0: lwc1        $f0, 0xC0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XC0);
    // 0x802727C4: b           L_802727D4
    // 0x802727C8: nop

        goto L_802727D4;
    // 0x802727C8: nop

L_802727CC:
    // 0x802727CC: lwc1        $f0, 0xBC($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XBC);
    // 0x802727D0: nop

L_802727D4:
    // 0x802727D4: beq         $v0, $zero, L_802727F0
    if (ctx->r2 == 0) {
        // 0x802727D8: nop
    
            goto L_802727F0;
    }
    // 0x802727D8: nop

    // 0x802727DC: lw          $t7, 0x3B20($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3B20);
    // 0x802727E0: nop

    // 0x802727E4: lw          $v1, 0x98($t7)
    ctx->r3 = MEM_W(ctx->r15, 0X98);
    // 0x802727E8: b           L_80272834
    // 0x802727EC: nop

        goto L_80272834;
    // 0x802727EC: nop

L_802727F0:
    // 0x802727F0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802727F4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x802727F8: jal         0x800545C4
    // 0x802727FC: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    func_800545C4(rdram, ctx);
        goto after_0;
    // 0x802727FC: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x80272800: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80272804: lwc1        $f0, 0x18($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80272808: beq         $v0, $zero, L_80272820
    if (ctx->r2 == 0) {
        // 0x8027280C: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80272820;
    }
    // 0x8027280C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80272810: lhu         $t8, 0x14($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X14);
    // 0x80272814: nop

    // 0x80272818: andi        $t9, $t8, 0x8
    ctx->r25 = ctx->r24 & 0X8;
    // 0x8027281C: beq         $t9, $zero, L_80272834
    if (ctx->r25 == 0) {
        // 0x80272820: lui         $t0, 0x8009
        ctx->r8 = S32(0X8009 << 16);
            goto L_80272834;
    }
L_80272820:
    // 0x80272820: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x80272824: lw          $t0, 0x3B20($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X3B20);
    // 0x80272828: nop

    // 0x8027282C: lw          $v1, 0x98($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X98);
    // 0x80272830: nop

L_80272834:
    // 0x80272834: bne         $v1, $zero, L_80272850
    if (ctx->r3 != 0) {
        // 0x80272838: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80272850;
    }
    // 0x80272838: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027283C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80272840: jal         0x80054ABC
    // 0x80272844: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80054ABC(rdram, ctx);
        goto after_1;
    // 0x80272844: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80272848: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8027284C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80272850:
    // 0x80272850: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80272854: jr          $ra
    // 0x80272858: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x80272858: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_8024B800_func_80272818(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80272818: andi        $t9, $t8, 0x8
    ctx->r25 = ctx->r24 & 0X8;
    // 0x8027281C: beq         $t9, $zero, L_80272834
    if (ctx->r25 == 0) {
        // 0x80272820: lui         $t0, 0x8009
        ctx->r8 = S32(0X8009 << 16);
            goto L_80272834;
    }
    // 0x80272820: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x80272824: lw          $t0, 0x3B20($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X3B20);
    // 0x80272828: nop

    // 0x8027282C: lw          $v1, 0x98($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X98);
    // 0x80272830: nop

L_80272834:
    // 0x80272834: bne         $v1, $zero, L_80272850
    if (ctx->r3 != 0) {
        // 0x80272838: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80272850;
    }
    // 0x80272838: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027283C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80272840: jal         0x80054ABC
    // 0x80272844: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80054ABC(rdram, ctx);
        goto after_0;
    // 0x80272844: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80272848: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8027284C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80272850:
    // 0x80272850: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80272854: jr          $ra
    // 0x80272858: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x80272858: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
